/*
** Automatically generated from `complexity.m'
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


/* :- module transform_hlds.complexity. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__complexity__init
ENDINIT
*/

#include "transform_hlds.complexity.mih"


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
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.polymorphism.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_util.mih"
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
#include "hlds.vartypes.mih"
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
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_out.mih"
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




#line 582 "complexity.m"
static MR_bool MR_CALL 
transform_hlds__complexity__IntroducedFrom__pred__make_type_info_var__582__1_2_p_0(
#line 582 "complexity.m"
  MR_Word transform_hlds__complexity__PredInfo0_17,
#line 582 "complexity.m"
  MR_Word transform_hlds__complexity__PredInfo_20);

#line 131 "complexity.m"
static MR_bool MR_CALL 
transform_hlds__complexity__IntroducedFrom__pred__read_spec_file_lines__131__1_2_p_0(
#line 131 "complexity.m"
  MR_Char transform_hlds__complexity__HeadVar__1_27,
#line 131 "complexity.m"
  MR_Char transform_hlds__complexity__HeadVar__2_36);

#line 582 "complexity.m"
static MR_bool MR_CALL 
transform_hlds__complexity__make_type_info_var_9_p_0_1(
#line 582 "complexity.m"
  MR_Box transform_hlds__complexity__closure_arg);

#line 570 "complexity.m"
static void MR_CALL 
transform_hlds__complexity__make_type_info_var_9_p_0(
#line 570 "complexity.m"
  MR_Word transform_hlds__complexity__Type_10,
#line 570 "complexity.m"
  MR_Word transform_hlds__complexity__Context_11,
#line 570 "complexity.m"
  MR_Word transform_hlds__complexity__PredId_12,
#line 570 "complexity.m"
  MR_Word transform_hlds__complexity__STATE_VARIABLE_ProcInfo_0_21,
#line 570 "complexity.m"
  MR_Word * transform_hlds__complexity__STATE_VARIABLE_ProcInfo_22,
#line 570 "complexity.m"
  MR_Word transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_0_23,
#line 570 "complexity.m"
  MR_Word * transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_24,
#line 570 "complexity.m"
  MR_Word * transform_hlds__complexity__TypeInfoVar_15,
#line 570 "complexity.m"
  MR_Word * transform_hlds__complexity__TypeInfoGoals_16);

#line 561 "complexity.m"
static MR_Word MR_CALL 
transform_hlds__complexity__is_active_type_0_f_0(void);

#line 540 "complexity.m"
static void MR_CALL 
transform_hlds__complexity__allocate_slot_numbers_cl_3_p_0(
#line 540 "complexity.m"
  MR_Word transform_hlds__complexity__HeadVar__1_1,
#line 540 "complexity.m"
  MR_Integer transform_hlds__complexity__Offset_2,
#line 540 "complexity.m"
  MR_Word * transform_hlds__complexity__HeadVar__3_3);

#line 510 "complexity.m"
static void MR_CALL 
transform_hlds__complexity__classify_args_6_p_0(
#line 510 "complexity.m"
  MR_Word transform_hlds__complexity__HeadVar__1_1,
#line 510 "complexity.m"
  MR_Word transform_hlds__complexity__HeadVar__2_2,
#line 510 "complexity.m"
  MR_Word transform_hlds__complexity__ModuleInfo_3,
#line 510 "complexity.m"
  MR_Word transform_hlds__complexity__VarSet_4,
#line 510 "complexity.m"
  MR_Word transform_hlds__complexity__VarTypes_5,
#line 510 "complexity.m"
  MR_Word * transform_hlds__complexity__HeadVar__6_6);

#line 492 "complexity.m"
static void MR_CALL 
transform_hlds__complexity__complexity_generate_foreign_proc_9_p_0(
#line 492 "complexity.m"
  MR_String transform_hlds__complexity__PredName_10,
#line 492 "complexity.m"
  MR_Word transform_hlds__complexity__Detism_11,
#line 492 "complexity.m"
  MR_Word transform_hlds__complexity__Args_12,
#line 492 "complexity.m"
  MR_Word transform_hlds__complexity__ExtraArgs_13,
#line 492 "complexity.m"
  MR_String transform_hlds__complexity__Code_14,
#line 492 "complexity.m"
  MR_Word transform_hlds__complexity__BoundVars_15,
#line 492 "complexity.m"
  MR_Word transform_hlds__complexity__ModuleInfo_16,
#line 492 "complexity.m"
  MR_Word transform_hlds__complexity__Context_17,
#line 492 "complexity.m"
  MR_Word * transform_hlds__complexity__Goal_18);

#line 481 "complexity.m"
static void MR_CALL 
transform_hlds__complexity__generate_new_var_5_p_0(
#line 481 "complexity.m"
  MR_String transform_hlds__complexity__Name_6,
#line 481 "complexity.m"
  MR_Word transform_hlds__complexity__Type_7,
#line 481 "complexity.m"
  MR_Word transform_hlds__complexity__STATE_VARIABLE_ProcInfo_0_14,
#line 481 "complexity.m"
  MR_Word * transform_hlds__complexity__STATE_VARIABLE_ProcInfo_15,
#line 481 "complexity.m"
  MR_Word * transform_hlds__complexity__Var_9);

#line 448 "complexity.m"
static void MR_CALL 
transform_hlds__complexity__generate_size_goal_14_p_0(
#line 448 "complexity.m"
  MR_Word transform_hlds__complexity__ArgVar_15,
#line 448 "complexity.m"
  MR_Integer transform_hlds__complexity__VarSeqNum_16,
#line 448 "complexity.m"
  MR_Word transform_hlds__complexity__Context_17,
#line 448 "complexity.m"
  MR_Integer transform_hlds__complexity__NumProfiledVars_18,
#line 448 "complexity.m"
  MR_String transform_hlds__complexity__ProcVarName_19,
#line 448 "complexity.m"
  MR_String transform_hlds__complexity__SlotVarName_20,
#line 448 "complexity.m"
  MR_Word transform_hlds__complexity__PredId_21,
#line 448 "complexity.m"
  MR_Word transform_hlds__complexity__STATE_VARIABLE_ProcInfo_0_37,
#line 448 "complexity.m"
  MR_Word * transform_hlds__complexity__STATE_VARIABLE_ProcInfo_38,
#line 448 "complexity.m"
  MR_Word transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_0_39,
#line 448 "complexity.m"
  MR_Word * transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_40,
#line 448 "complexity.m"
  MR_Word * transform_hlds__complexity__Goals_24,
#line 448 "complexity.m"
  MR_Word * transform_hlds__complexity__ForeignArgs_25,
#line 448 "complexity.m"
  MR_String * transform_hlds__complexity__CodeStr_26);

#line 431 "complexity.m"
static void MR_CALL 
transform_hlds__complexity__generate_size_goals_13_p_0(
#line 431 "complexity.m"
  MR_Word transform_hlds__complexity__HeadVar__1_1,
#line 431 "complexity.m"
  MR_Word transform_hlds__complexity__Context_2,
#line 431 "complexity.m"
  MR_Integer transform_hlds__complexity__NumProfiledVars_3,
#line 431 "complexity.m"
  MR_String transform_hlds__complexity__ProcVarName_4,
#line 431 "complexity.m"
  MR_String transform_hlds__complexity__SlotVarName_5,
#line 431 "complexity.m"
  MR_Word transform_hlds__complexity__PredId_6,
#line 431 "complexity.m"
  MR_Word transform_hlds__complexity__STATE_VARIABLE_ProcInfo_0_7,
#line 431 "complexity.m"
  MR_Word * transform_hlds__complexity__STATE_VARIABLE_ProcInfo_8,
#line 431 "complexity.m"
  MR_Word transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_0_9,
#line 431 "complexity.m"
  MR_Word * transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_10,
#line 431 "complexity.m"
  MR_Word * transform_hlds__complexity__HeadVar__11_11,
#line 431 "complexity.m"
  MR_Word * transform_hlds__complexity__HeadVar__12_12,
#line 431 "complexity.m"
  MR_String * transform_hlds__complexity__HeadVar__13_13);

#line 405 "complexity.m"
static void MR_CALL 
transform_hlds__complexity__generate_slot_goals_12_p_0(
#line 405 "complexity.m"
  MR_Integer transform_hlds__complexity__ProcNum_13,
#line 405 "complexity.m"
  MR_Word transform_hlds__complexity__NumberedVars_14,
#line 405 "complexity.m"
  MR_Integer transform_hlds__complexity__NumProfiledVars_15,
#line 405 "complexity.m"
  MR_Word transform_hlds__complexity__Context_16,
#line 405 "complexity.m"
  MR_Word transform_hlds__complexity__PredId_17,
#line 405 "complexity.m"
  MR_Word transform_hlds__complexity__STATE_VARIABLE_ProcInfo_0_33,
#line 405 "complexity.m"
  MR_Word * transform_hlds__complexity__STATE_VARIABLE_ProcInfo_34,
#line 405 "complexity.m"
  MR_Word transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_0_35,
#line 405 "complexity.m"
  MR_Word * transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_36,
#line 405 "complexity.m"
  MR_Word * transform_hlds__complexity__SlotVar_20,
#line 405 "complexity.m"
  MR_String * transform_hlds__complexity__SlotVarName_21,
#line 405 "complexity.m"
  MR_Word * transform_hlds__complexity__Goals_22);

#line 254 "complexity.m"
static void MR_CALL 
transform_hlds__complexity__complexity_process_proc_8_p_0(
#line 254 "complexity.m"
  MR_Integer transform_hlds__complexity__NumProcs_9,
#line 254 "complexity.m"
  MR_Integer transform_hlds__complexity__ProcNum_10,
#line 254 "complexity.m"
  MR_String transform_hlds__complexity__FullName_11,
#line 254 "complexity.m"
  MR_Word transform_hlds__complexity__PredId_12,
#line 254 "complexity.m"
  MR_Word transform_hlds__complexity__STATE_VARIABLE_ProcInfo_0_75,
#line 254 "complexity.m"
  MR_Word * transform_hlds__complexity__STATE_VARIABLE_ProcInfo_76,
#line 254 "complexity.m"
  MR_Word transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_0_77,
#line 254 "complexity.m"
  MR_Word * transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_78);

#line 250 "complexity.m"
static MR_String MR_CALL 
transform_hlds__complexity__slot_var_name_0_f_0(void);

#line 131 "complexity.m"
static MR_bool MR_CALL 
transform_hlds__complexity__read_spec_file_lines_8_p_0_1(
#line 131 "complexity.m"
  MR_Box transform_hlds__complexity__closure_arg,
#line 131 "complexity.m"
  MR_Box transform_hlds__complexity__wrapper_arg_1);

#line 114 "complexity.m"
static void MR_CALL 
transform_hlds__complexity__read_spec_file_lines_8_p_0(
#line 114 "complexity.m"
  MR_Word transform_hlds__complexity__Stream_9,
#line 114 "complexity.m"
  MR_Integer transform_hlds__complexity__CurLineNum_10,
#line 114 "complexity.m"
  MR_Integer * transform_hlds__complexity__NumLines_11,
#line 114 "complexity.m"
  MR_Word * transform_hlds__complexity__MaybeError_12,
#line 114 "complexity.m"
  MR_Word transform_hlds__complexity__STATE_VARIABLE_ProcMap_0_21,
#line 114 "complexity.m"
  MR_Word * transform_hlds__complexity__STATE_VARIABLE_ProcMap_22);


static /* final */ const MR_Box transform_hlds__complexity_scalar_common_1[1][2];

static /* final */ const MR_Box transform_hlds__complexity_scalar_common_2[1][3];

static /* final */ const MR_Box transform_hlds__complexity_scalar_common_3[2][5];

static /* final */ const MR_Box transform_hlds__complexity_scalar_common_4[1][4];




static /* final */ const MR_Box transform_hlds__complexity_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__complexity_scalar_common_2[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&transform_hlds__complexity_scalar_common_1[0])),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box transform_hlds__complexity_scalar_common_3[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__complexity_scalar_common_4[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (&transform_hlds__complexity_scalar_common_3[0])),
    ((MR_Box) (transform_hlds__complexity__read_spec_file_lines_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_Word) ((MR_Char) 10))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 582 "complexity.m"
static MR_bool MR_CALL 
transform_hlds__complexity__IntroducedFrom__pred__make_type_info_var__582__1_2_p_0(
#line 582 "complexity.m"
  MR_Word transform_hlds__complexity__PredInfo0_17,
#line 582 "complexity.m"
  MR_Word transform_hlds__complexity__PredInfo_20)
#line 582 "complexity.m"
{
#line 582 "complexity.m"
  {
#line 582 "complexity.m"
    MR_bool transform_hlds__complexity__succeeded;

#line 582 "complexity.m"
    {
#line 582 "complexity.m"
      return transform_hlds__complexity__succeeded = hlds__hlds_pred____Unify____pred_info_0_0(transform_hlds__complexity__PredInfo0_17, transform_hlds__complexity__PredInfo_20);
    }
#line 582 "complexity.m"
    return transform_hlds__complexity__succeeded;
#line 582 "complexity.m"
  }
#line 582 "complexity.m"
}

#line 131 "complexity.m"
static MR_bool MR_CALL 
transform_hlds__complexity__IntroducedFrom__pred__read_spec_file_lines__131__1_2_p_0(
#line 131 "complexity.m"
  MR_Char transform_hlds__complexity__HeadVar__1_27,
#line 131 "complexity.m"
  MR_Char transform_hlds__complexity__HeadVar__2_36)
#line 131 "complexity.m"
{
#line 131 "complexity.m"
  {
#line 131 "complexity.m"
    MR_bool transform_hlds__complexity__succeeded = (transform_hlds__complexity__HeadVar__1_27 == transform_hlds__complexity__HeadVar__2_36);

#line 131 "complexity.m"
    return transform_hlds__complexity__succeeded;
#line 131 "complexity.m"
  }
#line 131 "complexity.m"
}

#line 582 "complexity.m"
static MR_bool MR_CALL 
transform_hlds__complexity__make_type_info_var_9_p_0_1(
#line 582 "complexity.m"
  MR_Box transform_hlds__complexity__closure_arg)
#line 582 "complexity.m"
{
#line 582 "complexity.m"
  {
#line 582 "complexity.m"
    MR_bool transform_hlds__complexity__succeeded;
#line 582 "complexity.m"
    MR_Box transform_hlds__complexity__closure = transform_hlds__complexity__closure_arg;

#line 582 "complexity.m"
    {
#line 582 "complexity.m"
      return transform_hlds__complexity__succeeded = transform_hlds__complexity__IntroducedFrom__pred__make_type_info_var__582__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__complexity__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__complexity__closure, (MR_Integer) 4))));
    }
#line 582 "complexity.m"
    return transform_hlds__complexity__succeeded;
#line 582 "complexity.m"
  }
#line 582 "complexity.m"
}

#line 570 "complexity.m"
static void MR_CALL 
transform_hlds__complexity__make_type_info_var_9_p_0(
#line 570 "complexity.m"
  MR_Word transform_hlds__complexity__Type_10,
#line 570 "complexity.m"
  MR_Word transform_hlds__complexity__Context_11,
#line 570 "complexity.m"
  MR_Word transform_hlds__complexity__PredId_12,
#line 570 "complexity.m"
  MR_Word transform_hlds__complexity__STATE_VARIABLE_ProcInfo_0_21,
#line 570 "complexity.m"
  MR_Word * transform_hlds__complexity__STATE_VARIABLE_ProcInfo_22,
#line 570 "complexity.m"
  MR_Word transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_0_23,
#line 570 "complexity.m"
  MR_Word * transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_24,
#line 570 "complexity.m"
  MR_Word * transform_hlds__complexity__TypeInfoVar_15,
#line 570 "complexity.m"
  MR_Word * transform_hlds__complexity__TypeInfoGoals_16)
#line 570 "complexity.m"
{
#line 575 "complexity.m"
  {
#line 575 "complexity.m"
    MR_bool transform_hlds__complexity__succeeded;
#line 575 "complexity.m"
    MR_Word transform_hlds__complexity__PredInfo0_17;
#line 575 "complexity.m"
    MR_Word transform_hlds__complexity__PolyInfo0_18;
#line 575 "complexity.m"
    MR_Word transform_hlds__complexity__PolyInfo_19;
#line 575 "complexity.m"
    MR_Word transform_hlds__complexity__PredInfo_20;
#line 575 "complexity.m"
    MR_Word transform_hlds__complexity__V_27_27;

#line 576 "complexity.m"
    {
#line 576 "complexity.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_0_23, transform_hlds__complexity__PredId_12, &transform_hlds__complexity__PredInfo0_17);
    }
#line 577 "complexity.m"
    {
#line 577 "complexity.m"
      check_hlds__polymorphism__create_poly_info_4_p_0(transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_0_23, transform_hlds__complexity__PredInfo0_17, transform_hlds__complexity__STATE_VARIABLE_ProcInfo_0_21, &transform_hlds__complexity__PolyInfo0_18);
    }
#line 578 "complexity.m"
    {
#line 578 "complexity.m"
      check_hlds__polymorphism__polymorphism_make_type_info_var_6_p_0(transform_hlds__complexity__Type_10, transform_hlds__complexity__Context_11, transform_hlds__complexity__TypeInfoVar_15, transform_hlds__complexity__TypeInfoGoals_16, transform_hlds__complexity__PolyInfo0_18, &transform_hlds__complexity__PolyInfo_19);
    }
#line 580 "complexity.m"
    {
#line 580 "complexity.m"
      check_hlds__polymorphism__poly_info_extract_6_p_0(transform_hlds__complexity__PolyInfo_19, transform_hlds__complexity__PredInfo0_17, &transform_hlds__complexity__PredInfo_20, transform_hlds__complexity__STATE_VARIABLE_ProcInfo_0_21, transform_hlds__complexity__STATE_VARIABLE_ProcInfo_22, transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_24);
    }
#line 582 "complexity.m"
    {
#line 582 "complexity.m"
      transform_hlds__complexity__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 582 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__V_27_27, 0) = ((MR_Box) (&transform_hlds__complexity_scalar_common_3[1]));
#line 582 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__V_27_27, 1) = ((MR_Box) (transform_hlds__complexity__make_type_info_var_9_p_0_1));
#line 582 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__V_27_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 582 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__V_27_27, 3) = ((MR_Box) (transform_hlds__complexity__PredInfo0_17));
#line 582 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__V_27_27, 4) = ((MR_Box) (transform_hlds__complexity__PredInfo_20));
#line 582 "complexity.m"
    }
#line 582 "complexity.m"
    {
#line 582 "complexity.m"
      mercury__require__expect_4_p_0(transform_hlds__complexity__V_27_27, (MR_String) "transform_hlds.complexity", (MR_String) "predicate \140transform_hlds.complexity.make_type_info_var\'/9", (MR_String) "modified pred_info");
#line 582 "complexity.m"
      return;
    }
#line 575 "complexity.m"
  }
#line 570 "complexity.m"
}

#line 561 "complexity.m"
static MR_Word MR_CALL 
transform_hlds__complexity__is_active_type_0_f_0(void)
#line 561 "complexity.m"
{
#line 563 "complexity.m"
  {
#line 563 "complexity.m"
    MR_bool transform_hlds__complexity__succeeded;
#line 563 "complexity.m"
    MR_Word transform_hlds__complexity__Type_2;
#line 563 "complexity.m"
    MR_Word transform_hlds__complexity__M_3;
#line 563 "complexity.m"
    MR_Word transform_hlds__complexity__V_4_4;
#line 563 "complexity.m"
    MR_Word transform_hlds__complexity__V_6_6;

#line 564 "complexity.m"
    {
#line 564 "complexity.m"
      transform_hlds__complexity__M_3 = mdbcomp__builtin_modules__mercury_term_size_prof_builtin_module_0_f_0();
    }
#line 565 "complexity.m"
    {
#line 565 "complexity.m"
      transform_hlds__complexity__V_6_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 565 "complexity.m"
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_6_6, 0) = ((MR_Box) (transform_hlds__complexity__M_3));
#line 565 "complexity.m"
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_6_6, 1) = ((MR_Box) ((MR_String) "complexity_is_active"));
#line 565 "complexity.m"
    }
#line 565 "complexity.m"
    {
#line 565 "complexity.m"
      transform_hlds__complexity__V_4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 565 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__V_4_4, 0) = ((MR_Box) (transform_hlds__complexity__V_6_6));
#line 565 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__V_4_4, 1) = ((MR_Box) ((MR_Integer) 0));
#line 565 "complexity.m"
    }
#line 565 "complexity.m"
    {
#line 565 "complexity.m"
      parse_tree__prog_type__construct_type_3_p_0(transform_hlds__complexity__V_4_4, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__complexity__Type_2);
    }
#line 563 "complexity.m"
    return transform_hlds__complexity__Type_2;
#line 563 "complexity.m"
  }
#line 561 "complexity.m"
}

#line 540 "complexity.m"
static void MR_CALL 
transform_hlds__complexity__allocate_slot_numbers_cl_3_p_0(
#line 540 "complexity.m"
  MR_Word transform_hlds__complexity__HeadVar__1_1,
#line 540 "complexity.m"
  MR_Integer transform_hlds__complexity__Offset_2,
#line 540 "complexity.m"
  MR_Word * transform_hlds__complexity__HeadVar__3_3)
#line 540 "complexity.m"
{
#line 543 "complexity.m"
  while (MR_TRUE)
#line 543 "complexity.m"
    {
#line 543 "complexity.m"
      /* tailcall optimized into a loop */
#line 543 "complexity.m"
      {
#line 543 "complexity.m"
        MR_bool transform_hlds__complexity__succeeded;

#line 543 "complexity.m"
        if ((transform_hlds__complexity__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 543 "complexity.m"
          *transform_hlds__complexity__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 543 "complexity.m"
        else
#line 545 "complexity.m"
          {
#line 545 "complexity.m"
            MR_Word transform_hlds__complexity__Var_5;
#line 545 "complexity.m"
            MR_Word transform_hlds__complexity__Info_6;
#line 545 "complexity.m"
            MR_Word transform_hlds__complexity__VarInfos_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__complexity__HeadVar__1_1, (MR_Integer) 1)));
#line 545 "complexity.m"
            MR_Word transform_hlds__complexity__Kind_11;
#line 545 "complexity.m"
            MR_Word transform_hlds__complexity__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__complexity__HeadVar__1_1, (MR_Integer) 0)));
#line 546 "complexity.m"
            MR_Word transform_hlds__complexity__V_10_10;

#line 544 "complexity.m"
            transform_hlds__complexity__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__complexity__V_13_13, (MR_Integer) 0)));
#line 544 "complexity.m"
            transform_hlds__complexity__Info_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__complexity__V_13_13, (MR_Integer) 1)));
#line 546 "complexity.m"
            transform_hlds__complexity__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__complexity__Info_6, (MR_Integer) 0)));
#line 546 "complexity.m"
            transform_hlds__complexity__Kind_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__complexity__Info_6, (MR_Integer) 1)));
#line 552 "complexity.m"
#line 552 "complexity.m"
            switch (transform_hlds__complexity__Kind_11) {
#line 552 "complexity.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 552 "complexity.m"
              case (MR_Integer) 1:
#line 552 "complexity.m"
              case (MR_Integer) 2:
#line 556 "complexity.m"
                {
#line 556 "complexity.m"
                  /* direct tailcall eliminated */
#line 556 "complexity.m"
                  {
#line 556 "complexity.m"
                    MR_Word transform_hlds__complexity__HeadVar__1__tmp_copy_1 = transform_hlds__complexity__VarInfos_7;

#line 556 "complexity.m"
                    transform_hlds__complexity__HeadVar__1_1 = transform_hlds__complexity__HeadVar__1__tmp_copy_1;
#line 556 "complexity.m"
                  }
#line 556 "complexity.m"
                  continue;
#line 556 "complexity.m"
                }
#line 552 "complexity.m"
                break;
#line 552 "complexity.m"
              case (MR_Integer) 0:
#line 548 "complexity.m"
                {
#line 548 "complexity.m"
                  MR_Word transform_hlds__complexity__NumberedProfiledVarsTail_12;
#line 548 "complexity.m"
                  MR_Integer transform_hlds__complexity__V_14_14 = (transform_hlds__complexity__Offset_2 + (MR_Integer) 1);
#line 548 "complexity.m"
                  MR_Word transform_hlds__complexity__V_16_16;

#line 549 "complexity.m"
                  {
#line 549 "complexity.m"
                    transform_hlds__complexity__allocate_slot_numbers_cl_3_p_0(transform_hlds__complexity__VarInfos_7, transform_hlds__complexity__V_14_14, &transform_hlds__complexity__NumberedProfiledVarsTail_12);
                  }
#line 551 "complexity.m"
                  {
#line 551 "complexity.m"
                    transform_hlds__complexity__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 551 "complexity.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__complexity__V_16_16, 0) = ((MR_Box) (transform_hlds__complexity__Var_5));
#line 551 "complexity.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__complexity__V_16_16, 1) = ((MR_Box) (transform_hlds__complexity__Offset_2));
#line 551 "complexity.m"
                  }
#line 551 "complexity.m"
                  {
#line 551 "complexity.m"
                    MR_Word base;
#line 551 "complexity.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 551 "complexity.m"
                    *transform_hlds__complexity__HeadVar__3_3 = base;
#line 551 "complexity.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__complexity__V_16_16));
#line 551 "complexity.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__complexity__NumberedProfiledVarsTail_12));
#line 551 "complexity.m"
                  }
#line 548 "complexity.m"
                }
#line 552 "complexity.m"
                break;
#line 552 "complexity.m"
            }
#line 545 "complexity.m"
          }
#line 543 "complexity.m"
      }
#line 543 "complexity.m"
      break;
#line 543 "complexity.m"
    }
#line 540 "complexity.m"
}

#line 510 "complexity.m"
static void MR_CALL 
transform_hlds__complexity__classify_args_6_p_0(
#line 510 "complexity.m"
  MR_Word transform_hlds__complexity__HeadVar__1_1,
#line 510 "complexity.m"
  MR_Word transform_hlds__complexity__HeadVar__2_2,
#line 510 "complexity.m"
  MR_Word transform_hlds__complexity__ModuleInfo_3,
#line 510 "complexity.m"
  MR_Word transform_hlds__complexity__VarSet_4,
#line 510 "complexity.m"
  MR_Word transform_hlds__complexity__VarTypes_5,
#line 510 "complexity.m"
  MR_Word * transform_hlds__complexity__HeadVar__6_6)
#line 510 "complexity.m"
{
#line 514 "complexity.m"
  {
#line 514 "complexity.m"
    MR_bool transform_hlds__complexity__succeeded;

#line 514 "complexity.m"
    if ((transform_hlds__complexity__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 514 "complexity.m"
      if ((transform_hlds__complexity__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 514 "complexity.m"
        *transform_hlds__complexity__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 514 "complexity.m"
      else
#line 517 "complexity.m"
        {
#line 518 "complexity.m"
          {
#line 518 "complexity.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.complexity", (MR_String) "predicate \140transform_hlds.complexity.classify_args\'/6", (MR_String) "lists not same length");
#line 518 "complexity.m"
            return;
          }
#line 517 "complexity.m"
        }
#line 514 "complexity.m"
    else
#line 514 "complexity.m"
      {
#line 514 "complexity.m"
        MR_Word transform_hlds__complexity__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__complexity__HeadVar__1_1, (MR_Integer) 1)));
#line 514 "complexity.m"
        MR_Word transform_hlds__complexity__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__complexity__HeadVar__1_1, (MR_Integer) 0)));

#line 514 "complexity.m"
        if ((transform_hlds__complexity__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 515 "complexity.m"
          {
#line 516 "complexity.m"
            {
#line 516 "complexity.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.complexity", (MR_String) "predicate \140transform_hlds.complexity.classify_args\'/6", (MR_String) "lists not same length");
#line 516 "complexity.m"
              return;
            }
#line 515 "complexity.m"
          }
#line 514 "complexity.m"
        else
#line 520 "complexity.m"
          {
#line 520 "complexity.m"
            MR_Word transform_hlds__complexity__Mode_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__complexity__HeadVar__2_2, (MR_Integer) 0)));
#line 520 "complexity.m"
            MR_Word transform_hlds__complexity__Modes_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__complexity__HeadVar__2_2, (MR_Integer) 1)));
#line 520 "complexity.m"
            MR_Word transform_hlds__complexity__MaybeName_35;
#line 520 "complexity.m"
            MR_Word transform_hlds__complexity__Kind_36;
#line 520 "complexity.m"
            MR_Word transform_hlds__complexity__VarInfos_37;
#line 520 "complexity.m"
            MR_Word transform_hlds__complexity__V_40_40;
#line 520 "complexity.m"
            MR_Word transform_hlds__complexity__V_41_41;
#line 524 "complexity.m"
            MR_String transform_hlds__complexity__Name_38;

#line 521 "complexity.m"
            {
#line 521 "complexity.m"
              transform_hlds__complexity__classify_args_6_p_0(transform_hlds__complexity__V_43_43, transform_hlds__complexity__Modes_31, transform_hlds__complexity__ModuleInfo_3, transform_hlds__complexity__VarSet_4, transform_hlds__complexity__VarTypes_5, &transform_hlds__complexity__VarInfos_37);
            }
#line 522 "complexity.m"
            {
#line 522 "complexity.m"
              transform_hlds__complexity__succeeded = mercury__varset__search_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__complexity__VarSet_4, transform_hlds__complexity__V_44_44, &transform_hlds__complexity__Name_38);
            }
#line 524 "complexity.m"
            if (transform_hlds__complexity__succeeded)
#line 523 "complexity.m"
              {
#line 523 "complexity.m"
                transform_hlds__complexity__MaybeName_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 523 "complexity.m"
                MR_hl_field(MR_mktag(1), transform_hlds__complexity__MaybeName_35, 0) = ((MR_Box) (transform_hlds__complexity__Name_38));
#line 523 "complexity.m"
              }
#line 524 "complexity.m"
            else
#line 525 "complexity.m"
              transform_hlds__complexity__MaybeName_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 527 "complexity.m"
            {
#line 527 "complexity.m"
              transform_hlds__complexity__succeeded = check_hlds__mode_util__mode_is_fully_input_2_p_0(transform_hlds__complexity__ModuleInfo_3, transform_hlds__complexity__Mode_30);
            }
#line 534 "complexity.m"
            if (transform_hlds__complexity__succeeded)
#line 528 "complexity.m"
              {
#line 528 "complexity.m"
                MR_Word transform_hlds__complexity__VarType_39;

#line 528 "complexity.m"
                {
#line 528 "complexity.m"
                  hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__complexity__VarTypes_5, transform_hlds__complexity__V_44_44, &transform_hlds__complexity__VarType_39);
                }
#line 529 "complexity.m"
                {
#line 529 "complexity.m"
                  transform_hlds__complexity__succeeded = transform_hlds__term_norm__zero_size_type_2_p_0(transform_hlds__complexity__ModuleInfo_3, transform_hlds__complexity__VarType_39);
                }
#line 531 "complexity.m"
                if (transform_hlds__complexity__succeeded)
#line 530 "complexity.m"
                  transform_hlds__complexity__Kind_36 = (MR_Integer) 1;
#line 531 "complexity.m"
                else
#line 532 "complexity.m"
                  transform_hlds__complexity__Kind_36 = (MR_Integer) 0;
#line 528 "complexity.m"
              }
#line 534 "complexity.m"
            else
#line 535 "complexity.m"
              transform_hlds__complexity__Kind_36 = (MR_Integer) 2;
#line 520 "complexity.m"
            {
#line 520 "complexity.m"
              transform_hlds__complexity__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 520 "complexity.m"
              MR_hl_field(MR_mktag(0), transform_hlds__complexity__V_41_41, 0) = ((MR_Box) (transform_hlds__complexity__MaybeName_35));
#line 520 "complexity.m"
              MR_hl_field(MR_mktag(0), transform_hlds__complexity__V_41_41, 1) = ((MR_Box) (transform_hlds__complexity__Kind_36));
#line 520 "complexity.m"
            }
#line 520 "complexity.m"
            {
#line 520 "complexity.m"
              transform_hlds__complexity__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 520 "complexity.m"
              MR_hl_field(MR_mktag(0), transform_hlds__complexity__V_40_40, 0) = ((MR_Box) (transform_hlds__complexity__V_44_44));
#line 520 "complexity.m"
              MR_hl_field(MR_mktag(0), transform_hlds__complexity__V_40_40, 1) = ((MR_Box) (transform_hlds__complexity__V_41_41));
#line 520 "complexity.m"
            }
#line 520 "complexity.m"
            {
#line 520 "complexity.m"
              MR_Word base;
#line 520 "complexity.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 520 "complexity.m"
              *transform_hlds__complexity__HeadVar__6_6 = base;
#line 520 "complexity.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__complexity__V_40_40));
#line 520 "complexity.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__complexity__VarInfos_37));
#line 520 "complexity.m"
            }
#line 520 "complexity.m"
          }
#line 514 "complexity.m"
      }
#line 514 "complexity.m"
  }
#line 510 "complexity.m"
}

#line 492 "complexity.m"
static void MR_CALL 
transform_hlds__complexity__complexity_generate_foreign_proc_9_p_0(
#line 492 "complexity.m"
  MR_String transform_hlds__complexity__PredName_10,
#line 492 "complexity.m"
  MR_Word transform_hlds__complexity__Detism_11,
#line 492 "complexity.m"
  MR_Word transform_hlds__complexity__Args_12,
#line 492 "complexity.m"
  MR_Word transform_hlds__complexity__ExtraArgs_13,
#line 492 "complexity.m"
  MR_String transform_hlds__complexity__Code_14,
#line 492 "complexity.m"
  MR_Word transform_hlds__complexity__BoundVars_15,
#line 492 "complexity.m"
  MR_Word transform_hlds__complexity__ModuleInfo_16,
#line 492 "complexity.m"
  MR_Word transform_hlds__complexity__Context_17,
#line 492 "complexity.m"
  MR_Word * transform_hlds__complexity__Goal_18)
#line 492 "complexity.m"
{
#line 498 "complexity.m"
  {
#line 498 "complexity.m"
    MR_bool transform_hlds__complexity__succeeded;
#line 498 "complexity.m"
    MR_Word transform_hlds__complexity__BuiltinModule_19;
#line 498 "complexity.m"
    MR_Word transform_hlds__complexity__Attrs0_20;
#line 498 "complexity.m"
    MR_Word transform_hlds__complexity__Attrs_21;
#line 498 "complexity.m"
    MR_Word transform_hlds__complexity__V_29_29;

#line 499 "complexity.m"
    {
#line 499 "complexity.m"
      transform_hlds__complexity__BuiltinModule_19 = mdbcomp__builtin_modules__mercury_term_size_prof_builtin_module_0_f_0();
    }
#line 500 "complexity.m"
    {
#line 500 "complexity.m"
      transform_hlds__complexity__Attrs0_20 = parse_tree__prog_data__default_attributes_1_f_0((MR_Integer) 0);
    }
#line 501 "complexity.m"
    {
#line 501 "complexity.m"
      parse_tree__prog_data__set_may_call_mercury_3_p_0((MR_Integer) 1, transform_hlds__complexity__Attrs0_20, &transform_hlds__complexity__Attrs_21);
    }
#line 505 "complexity.m"
    {
#line 505 "complexity.m"
      transform_hlds__complexity__V_29_29 = hlds__instmap__instmap_delta_bind_vars_1_f_0(transform_hlds__complexity__BoundVars_15);
    }
#line 503 "complexity.m"
    {
#line 503 "complexity.m"
      hlds__goal_util__generate_foreign_proc_16_p_0(transform_hlds__complexity__BuiltinModule_19, transform_hlds__complexity__PredName_10, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__complexity__Detism_11, (MR_Integer) 2, transform_hlds__complexity__Attrs_21, transform_hlds__complexity__Args_12, transform_hlds__complexity__ExtraArgs_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__complexity__Code_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__complexity__V_29_29, transform_hlds__complexity__ModuleInfo_16, transform_hlds__complexity__Context_17, transform_hlds__complexity__Goal_18);
#line 503 "complexity.m"
      return;
    }
#line 498 "complexity.m"
  }
#line 492 "complexity.m"
}

#line 481 "complexity.m"
static void MR_CALL 
transform_hlds__complexity__generate_new_var_5_p_0(
#line 481 "complexity.m"
  MR_String transform_hlds__complexity__Name_6,
#line 481 "complexity.m"
  MR_Word transform_hlds__complexity__Type_7,
#line 481 "complexity.m"
  MR_Word transform_hlds__complexity__STATE_VARIABLE_ProcInfo_0_14,
#line 481 "complexity.m"
  MR_Word * transform_hlds__complexity__STATE_VARIABLE_ProcInfo_15,
#line 481 "complexity.m"
  MR_Word * transform_hlds__complexity__Var_9)
#line 481 "complexity.m"
{
#line 484 "complexity.m"
  {
#line 484 "complexity.m"
    MR_bool transform_hlds__complexity__succeeded;
#line 484 "complexity.m"
    MR_Word transform_hlds__complexity__VarSet0_10;
#line 484 "complexity.m"
    MR_Word transform_hlds__complexity__VarTypes0_11;
#line 484 "complexity.m"
    MR_Word transform_hlds__complexity__VarSet_12;
#line 484 "complexity.m"
    MR_Word transform_hlds__complexity__VarTypes_13;
#line 484 "complexity.m"
    MR_Word transform_hlds__complexity__STATE_VARIABLE_ProcInfo_16_16;

#line 485 "complexity.m"
    {
#line 485 "complexity.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__complexity__STATE_VARIABLE_ProcInfo_0_14, &transform_hlds__complexity__VarSet0_10);
    }
#line 486 "complexity.m"
    {
#line 486 "complexity.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__complexity__STATE_VARIABLE_ProcInfo_0_14, &transform_hlds__complexity__VarTypes0_11);
    }
#line 487 "complexity.m"
    {
#line 487 "complexity.m"
      mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__complexity__Name_6, transform_hlds__complexity__Var_9, transform_hlds__complexity__VarSet0_10, &transform_hlds__complexity__VarSet_12);
    }
#line 488 "complexity.m"
    {
#line 488 "complexity.m"
      hlds__vartypes__add_var_type_4_p_0(*transform_hlds__complexity__Var_9, transform_hlds__complexity__Type_7, transform_hlds__complexity__VarTypes0_11, &transform_hlds__complexity__VarTypes_13);
    }
#line 489 "complexity.m"
    {
#line 489 "complexity.m"
      hlds__hlds_pred__proc_info_set_varset_3_p_0(transform_hlds__complexity__VarSet_12, transform_hlds__complexity__STATE_VARIABLE_ProcInfo_0_14, &transform_hlds__complexity__STATE_VARIABLE_ProcInfo_16_16);
    }
#line 490 "complexity.m"
    {
#line 490 "complexity.m"
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__complexity__VarTypes_13, transform_hlds__complexity__STATE_VARIABLE_ProcInfo_16_16, transform_hlds__complexity__STATE_VARIABLE_ProcInfo_15);
#line 490 "complexity.m"
      return;
    }
#line 484 "complexity.m"
  }
#line 481 "complexity.m"
}

#line 448 "complexity.m"
static void MR_CALL 
transform_hlds__complexity__generate_size_goal_14_p_0(
#line 448 "complexity.m"
  MR_Word transform_hlds__complexity__ArgVar_15,
#line 448 "complexity.m"
  MR_Integer transform_hlds__complexity__VarSeqNum_16,
#line 448 "complexity.m"
  MR_Word transform_hlds__complexity__Context_17,
#line 448 "complexity.m"
  MR_Integer transform_hlds__complexity__NumProfiledVars_18,
#line 448 "complexity.m"
  MR_String transform_hlds__complexity__ProcVarName_19,
#line 448 "complexity.m"
  MR_String transform_hlds__complexity__SlotVarName_20,
#line 448 "complexity.m"
  MR_Word transform_hlds__complexity__PredId_21,
#line 448 "complexity.m"
  MR_Word transform_hlds__complexity__STATE_VARIABLE_ProcInfo_0_37,
#line 448 "complexity.m"
  MR_Word * transform_hlds__complexity__STATE_VARIABLE_ProcInfo_38,
#line 448 "complexity.m"
  MR_Word transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_0_39,
#line 448 "complexity.m"
  MR_Word * transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_40,
#line 448 "complexity.m"
  MR_Word * transform_hlds__complexity__Goals_24,
#line 448 "complexity.m"
  MR_Word * transform_hlds__complexity__ForeignArgs_25,
#line 448 "complexity.m"
  MR_String * transform_hlds__complexity__CodeStr_26)
#line 448 "complexity.m"
{
#line 455 "complexity.m"
  {
#line 455 "complexity.m"
    MR_bool transform_hlds__complexity__succeeded;
#line 455 "complexity.m"
    MR_Word transform_hlds__complexity__VarTypes1_27;
#line 455 "complexity.m"
    MR_Word transform_hlds__complexity__VarType_28;
#line 455 "complexity.m"
    MR_Word transform_hlds__complexity__TypeInfoVar_30;
#line 455 "complexity.m"
    MR_Word transform_hlds__complexity__VarTypes2_31;
#line 455 "complexity.m"
    MR_Word transform_hlds__complexity__TypeInfoType_32;
#line 455 "complexity.m"
    MR_String transform_hlds__complexity__ArgName_33;
#line 455 "complexity.m"
    MR_String transform_hlds__complexity__TypeInfoArgName_34;
#line 455 "complexity.m"
    MR_Word transform_hlds__complexity__ForeignArg_35;
#line 455 "complexity.m"
    MR_Word transform_hlds__complexity__ForeignTypeInfoArg_36;
#line 455 "complexity.m"
    MR_String transform_hlds__complexity__V_44_44;
#line 455 "complexity.m"
    MR_String transform_hlds__complexity__V_46_46;
#line 455 "complexity.m"
    MR_Word transform_hlds__complexity__V_47_47;
#line 455 "complexity.m"
    MR_Word transform_hlds__complexity__V_48_48;
#line 455 "complexity.m"
    MR_Word transform_hlds__complexity__V_49_49;
#line 455 "complexity.m"
    MR_Word transform_hlds__complexity__V_51_51;
#line 455 "complexity.m"
    MR_Word transform_hlds__complexity__V_52_52;
#line 455 "complexity.m"
    MR_Word transform_hlds__complexity__V_53_53;
#line 455 "complexity.m"
    MR_Word transform_hlds__complexity__V_55_55;
#line 455 "complexity.m"
    MR_String transform_hlds__complexity__V_58_58;
#line 455 "complexity.m"
    MR_String transform_hlds__complexity__V_59_59;
#line 455 "complexity.m"
    MR_String transform_hlds__complexity__V_61_61;
#line 455 "complexity.m"
    MR_String transform_hlds__complexity__V_62_62;
#line 455 "complexity.m"
    MR_String transform_hlds__complexity__V_64_64;
#line 455 "complexity.m"
    MR_String transform_hlds__complexity__V_65_65;
#line 455 "complexity.m"
    MR_String transform_hlds__complexity__V_67_67;
#line 455 "complexity.m"
    MR_String transform_hlds__complexity__V_68_68;
#line 455 "complexity.m"
    MR_String transform_hlds__complexity__V_69_69;
#line 455 "complexity.m"
    MR_String transform_hlds__complexity__V_71_71;
#line 455 "complexity.m"
    MR_String transform_hlds__complexity__V_72_72;
#line 455 "complexity.m"
    MR_String transform_hlds__complexity__V_73_73;
#line 455 "complexity.m"
    MR_String transform_hlds__complexity__V_75_75;
#line 455 "complexity.m"
    MR_String transform_hlds__complexity__V_77_77;
#line 455 "complexity.m"
    MR_String transform_hlds__complexity__V_78_78;
#line 455 "complexity.m"
    MR_String transform_hlds__complexity__V_80_80;

#line 456 "complexity.m"
    {
#line 456 "complexity.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__complexity__STATE_VARIABLE_ProcInfo_0_37, &transform_hlds__complexity__VarTypes1_27);
    }
#line 457 "complexity.m"
    {
#line 457 "complexity.m"
      hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__complexity__VarTypes1_27, transform_hlds__complexity__ArgVar_15, &transform_hlds__complexity__VarType_28);
    }
#line 459 "complexity.m"
    {
#line 459 "complexity.m"
      transform_hlds__complexity__make_type_info_var_9_p_0(transform_hlds__complexity__VarType_28, transform_hlds__complexity__Context_17, transform_hlds__complexity__PredId_21, transform_hlds__complexity__STATE_VARIABLE_ProcInfo_0_37, transform_hlds__complexity__STATE_VARIABLE_ProcInfo_38, transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_0_39, transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_40, &transform_hlds__complexity__TypeInfoVar_30, transform_hlds__complexity__Goals_24);
    }
#line 462 "complexity.m"
    {
#line 462 "complexity.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(*transform_hlds__complexity__STATE_VARIABLE_ProcInfo_38, &transform_hlds__complexity__VarTypes2_31);
    }
#line 463 "complexity.m"
    {
#line 463 "complexity.m"
      hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__complexity__VarTypes2_31, transform_hlds__complexity__TypeInfoVar_30, &transform_hlds__complexity__TypeInfoType_32);
    }
#line 464 "complexity.m"
    {
#line 464 "complexity.m"
      transform_hlds__complexity__V_44_44 = mercury__string__int_to_string_1_f_0(transform_hlds__complexity__VarSeqNum_16);
    }
#line 464 "complexity.m"
    {
#line 464 "complexity.m"
      transform_hlds__complexity__ArgName_33 = mercury__string__f_43_43_2_f_0((MR_String) "arg", transform_hlds__complexity__V_44_44);
    }
#line 465 "complexity.m"
    {
#line 465 "complexity.m"
      transform_hlds__complexity__V_46_46 = mercury__string__int_to_string_1_f_0(transform_hlds__complexity__VarSeqNum_16);
    }
#line 465 "complexity.m"
    {
#line 465 "complexity.m"
      transform_hlds__complexity__TypeInfoArgName_34 = mercury__string__f_43_43_2_f_0((MR_String) "input_typeinfo", transform_hlds__complexity__V_46_46);
    }
#line 467 "complexity.m"
    {
#line 467 "complexity.m"
      transform_hlds__complexity__V_49_49 = parse_tree__prog_mode__in_mode_0_f_0();
    }
#line 467 "complexity.m"
    {
#line 467 "complexity.m"
      transform_hlds__complexity__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 467 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__V_48_48, 0) = ((MR_Box) (transform_hlds__complexity__ArgName_33));
#line 467 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__V_48_48, 1) = ((MR_Box) (transform_hlds__complexity__V_49_49));
#line 467 "complexity.m"
    }
#line 467 "complexity.m"
    {
#line 467 "complexity.m"
      transform_hlds__complexity__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 467 "complexity.m"
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_47_47, 0) = ((MR_Box) (transform_hlds__complexity__V_48_48));
#line 467 "complexity.m"
    }
#line 466 "complexity.m"
    {
#line 466 "complexity.m"
      transform_hlds__complexity__ForeignArg_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 466 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__ForeignArg_35, 0) = ((MR_Box) (transform_hlds__complexity__ArgVar_15));
#line 466 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__ForeignArg_35, 1) = ((MR_Box) (transform_hlds__complexity__V_47_47));
#line 466 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__ForeignArg_35, 2) = ((MR_Box) (transform_hlds__complexity__VarType_28));
#line 466 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__ForeignArg_35, 3) = ((MR_Box) ((MR_Integer) 0));
#line 466 "complexity.m"
    }
#line 469 "complexity.m"
    {
#line 469 "complexity.m"
      transform_hlds__complexity__V_53_53 = parse_tree__prog_mode__in_mode_0_f_0();
    }
#line 469 "complexity.m"
    {
#line 469 "complexity.m"
      transform_hlds__complexity__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 469 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__V_52_52, 0) = ((MR_Box) (transform_hlds__complexity__TypeInfoArgName_34));
#line 469 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__V_52_52, 1) = ((MR_Box) (transform_hlds__complexity__V_53_53));
#line 469 "complexity.m"
    }
#line 469 "complexity.m"
    {
#line 469 "complexity.m"
      transform_hlds__complexity__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 469 "complexity.m"
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_51_51, 0) = ((MR_Box) (transform_hlds__complexity__V_52_52));
#line 469 "complexity.m"
    }
#line 468 "complexity.m"
    {
#line 468 "complexity.m"
      transform_hlds__complexity__ForeignTypeInfoArg_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 468 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__ForeignTypeInfoArg_36, 0) = ((MR_Box) (transform_hlds__complexity__TypeInfoVar_30));
#line 468 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__ForeignTypeInfoArg_36, 1) = ((MR_Box) (transform_hlds__complexity__V_51_51));
#line 468 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__ForeignTypeInfoArg_36, 2) = ((MR_Box) (transform_hlds__complexity__TypeInfoType_32));
#line 468 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__ForeignTypeInfoArg_36, 3) = ((MR_Box) ((MR_Integer) 0));
#line 468 "complexity.m"
    }
#line 470 "complexity.m"
    {
#line 470 "complexity.m"
      transform_hlds__complexity__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 470 "complexity.m"
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_55_55, 0) = ((MR_Box) (transform_hlds__complexity__ForeignArg_35));
#line 470 "complexity.m"
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 470 "complexity.m"
    }
#line 470 "complexity.m"
    {
#line 470 "complexity.m"
      MR_Word base;
#line 470 "complexity.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 470 "complexity.m"
      *transform_hlds__complexity__ForeignArgs_25 = base;
#line 470 "complexity.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__complexity__ForeignTypeInfoArg_36));
#line 470 "complexity.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__complexity__V_55_55));
#line 470 "complexity.m"
    }
#line 474 "complexity.m"
    {
#line 474 "complexity.m"
      transform_hlds__complexity__V_68_68 = mercury__string__int_to_string_1_f_0(transform_hlds__complexity__NumProfiledVars_18);
    }
#line 475 "complexity.m"
    {
#line 475 "complexity.m"
      transform_hlds__complexity__V_72_72 = mercury__string__int_to_string_1_f_0(transform_hlds__complexity__VarSeqNum_16);
    }
#line 477 "complexity.m"
    {
#line 477 "complexity.m"
      transform_hlds__complexity__V_80_80 = mercury__string__f_43_43_2_f_0(transform_hlds__complexity__ArgName_33, (MR_String) "));\n");
    }
#line 477 "complexity.m"
    {
#line 477 "complexity.m"
      transform_hlds__complexity__V_78_78 = mercury__string__f_43_43_2_f_0((MR_String) ", ", transform_hlds__complexity__V_80_80);
    }
#line 477 "complexity.m"
    {
#line 477 "complexity.m"
      transform_hlds__complexity__V_77_77 = mercury__string__f_43_43_2_f_0(transform_hlds__complexity__TypeInfoArgName_34, transform_hlds__complexity__V_78_78);
    }
#line 476 "complexity.m"
    {
#line 476 "complexity.m"
      transform_hlds__complexity__V_75_75 = mercury__string__f_43_43_2_f_0((MR_String) "MR_term_size((MR_TypeInfo) ", transform_hlds__complexity__V_77_77);
    }
#line 475 "complexity.m"
    {
#line 475 "complexity.m"
      transform_hlds__complexity__V_73_73 = mercury__string__f_43_43_2_f_0((MR_String) ",\n\t\t", transform_hlds__complexity__V_75_75);
    }
#line 475 "complexity.m"
    {
#line 475 "complexity.m"
      transform_hlds__complexity__V_71_71 = mercury__string__f_43_43_2_f_0(transform_hlds__complexity__V_72_72, transform_hlds__complexity__V_73_73);
    }
#line 474 "complexity.m"
    {
#line 474 "complexity.m"
      transform_hlds__complexity__V_69_69 = mercury__string__f_43_43_2_f_0((MR_String) ", ", transform_hlds__complexity__V_71_71);
    }
#line 474 "complexity.m"
    {
#line 474 "complexity.m"
      transform_hlds__complexity__V_67_67 = mercury__string__f_43_43_2_f_0(transform_hlds__complexity__V_68_68, transform_hlds__complexity__V_69_69);
    }
#line 473 "complexity.m"
    {
#line 473 "complexity.m"
      transform_hlds__complexity__V_65_65 = mercury__string__f_43_43_2_f_0((MR_String) ", ", transform_hlds__complexity__V_67_67);
    }
#line 473 "complexity.m"
    {
#line 473 "complexity.m"
      transform_hlds__complexity__V_64_64 = mercury__string__f_43_43_2_f_0(transform_hlds__complexity__SlotVarName_20, transform_hlds__complexity__V_65_65);
    }
#line 472 "complexity.m"
    {
#line 472 "complexity.m"
      transform_hlds__complexity__V_62_62 = mercury__string__f_43_43_2_f_0((MR_String) ", ", transform_hlds__complexity__V_64_64);
    }
#line 472 "complexity.m"
    {
#line 472 "complexity.m"
      transform_hlds__complexity__V_61_61 = mercury__string__f_43_43_2_f_0(transform_hlds__complexity__ProcVarName_19, transform_hlds__complexity__V_62_62);
    }
#line 471 "complexity.m"
    {
#line 471 "complexity.m"
      transform_hlds__complexity__V_59_59 = mercury__string__f_43_43_2_f_0((MR_String) "(", transform_hlds__complexity__V_61_61);
    }
#line 471 "complexity.m"
    {
#line 471 "complexity.m"
      transform_hlds__complexity__V_58_58 = mercury__string__f_43_43_2_f_0((MR_String) "MR_complexity_fill_size_slot", transform_hlds__complexity__V_59_59);
    }
#line 471 "complexity.m"
    {
#line 471 "complexity.m"
      *transform_hlds__complexity__CodeStr_26 = mercury__string__f_43_43_2_f_0((MR_String) "\t", transform_hlds__complexity__V_58_58);
    }
#line 455 "complexity.m"
  }
#line 448 "complexity.m"
}

#line 431 "complexity.m"
static void MR_CALL 
transform_hlds__complexity__generate_size_goals_13_p_0(
#line 431 "complexity.m"
  MR_Word transform_hlds__complexity__HeadVar__1_1,
#line 431 "complexity.m"
  MR_Word transform_hlds__complexity__Context_2,
#line 431 "complexity.m"
  MR_Integer transform_hlds__complexity__NumProfiledVars_3,
#line 431 "complexity.m"
  MR_String transform_hlds__complexity__ProcVarName_4,
#line 431 "complexity.m"
  MR_String transform_hlds__complexity__SlotVarName_5,
#line 431 "complexity.m"
  MR_Word transform_hlds__complexity__PredId_6,
#line 431 "complexity.m"
  MR_Word transform_hlds__complexity__STATE_VARIABLE_ProcInfo_0_7,
#line 431 "complexity.m"
  MR_Word * transform_hlds__complexity__STATE_VARIABLE_ProcInfo_8,
#line 431 "complexity.m"
  MR_Word transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_0_9,
#line 431 "complexity.m"
  MR_Word * transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_10,
#line 431 "complexity.m"
  MR_Word * transform_hlds__complexity__HeadVar__11_11,
#line 431 "complexity.m"
  MR_Word * transform_hlds__complexity__HeadVar__12_12,
#line 431 "complexity.m"
  MR_String * transform_hlds__complexity__HeadVar__13_13)
#line 431 "complexity.m"
{
#line 436 "complexity.m"
  {
#line 436 "complexity.m"
    MR_bool transform_hlds__complexity__succeeded;

#line 436 "complexity.m"
    if ((transform_hlds__complexity__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 436 "complexity.m"
      {
#line 436 "complexity.m"
        *transform_hlds__complexity__HeadVar__11_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 436 "complexity.m"
        *transform_hlds__complexity__HeadVar__12_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 436 "complexity.m"
        *transform_hlds__complexity__HeadVar__13_13 = (MR_String) "";
#line 436 "complexity.m"
        *transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_10 = transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_0_9;
#line 436 "complexity.m"
        *transform_hlds__complexity__STATE_VARIABLE_ProcInfo_8 = transform_hlds__complexity__STATE_VARIABLE_ProcInfo_0_7;
#line 436 "complexity.m"
      }
#line 436 "complexity.m"
    else
#line 440 "complexity.m"
      {
#line 440 "complexity.m"
        MR_Word transform_hlds__complexity__Var_25;
#line 440 "complexity.m"
        MR_Integer transform_hlds__complexity__VarSeqNum_26;
#line 440 "complexity.m"
        MR_Word transform_hlds__complexity__NumberedVars_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__complexity__HeadVar__1_1, (MR_Integer) 1)));
#line 440 "complexity.m"
        MR_Word transform_hlds__complexity__Goals_35;
#line 440 "complexity.m"
        MR_Word transform_hlds__complexity__RestGoals_36;
#line 440 "complexity.m"
        MR_Word transform_hlds__complexity__ForeignArgs_37;
#line 440 "complexity.m"
        MR_Word transform_hlds__complexity__RestForeignArgs_38;
#line 440 "complexity.m"
        MR_String transform_hlds__complexity__CodeStr_39;
#line 440 "complexity.m"
        MR_String transform_hlds__complexity__RestCodeStr_40;
#line 440 "complexity.m"
        MR_Word transform_hlds__complexity__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__complexity__HeadVar__1_1, (MR_Integer) 0)));
#line 440 "complexity.m"
        MR_Word transform_hlds__complexity__STATE_VARIABLE_ProcInfo_46_46;
#line 440 "complexity.m"
        MR_Word transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_47_47;

#line 437 "complexity.m"
        transform_hlds__complexity__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__complexity__V_45_45, (MR_Integer) 0)));
#line 437 "complexity.m"
        transform_hlds__complexity__VarSeqNum_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__complexity__V_45_45, (MR_Integer) 1)));
#line 441 "complexity.m"
        {
#line 441 "complexity.m"
          transform_hlds__complexity__generate_size_goal_14_p_0(transform_hlds__complexity__Var_25, transform_hlds__complexity__VarSeqNum_26, transform_hlds__complexity__Context_2, transform_hlds__complexity__NumProfiledVars_3, transform_hlds__complexity__ProcVarName_4, transform_hlds__complexity__SlotVarName_5, transform_hlds__complexity__PredId_6, transform_hlds__complexity__STATE_VARIABLE_ProcInfo_0_7, &transform_hlds__complexity__STATE_VARIABLE_ProcInfo_46_46, transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_0_9, &transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_47_47, &transform_hlds__complexity__Goals_35, &transform_hlds__complexity__ForeignArgs_37, &transform_hlds__complexity__CodeStr_39);
        }
#line 444 "complexity.m"
        {
#line 444 "complexity.m"
          transform_hlds__complexity__generate_size_goals_13_p_0(transform_hlds__complexity__NumberedVars_27, transform_hlds__complexity__Context_2, transform_hlds__complexity__NumProfiledVars_3, transform_hlds__complexity__ProcVarName_4, transform_hlds__complexity__SlotVarName_5, transform_hlds__complexity__PredId_6, transform_hlds__complexity__STATE_VARIABLE_ProcInfo_46_46, transform_hlds__complexity__STATE_VARIABLE_ProcInfo_8, transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_47_47, transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_10, &transform_hlds__complexity__RestGoals_36, &transform_hlds__complexity__RestForeignArgs_38, &transform_hlds__complexity__RestCodeStr_40);
        }
#line 439 "complexity.m"
        {
#line 439 "complexity.m"
          *transform_hlds__complexity__HeadVar__11_11 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__complexity__Goals_35, transform_hlds__complexity__RestGoals_36);
        }
#line 439 "complexity.m"
        {
#line 439 "complexity.m"
          *transform_hlds__complexity__HeadVar__12_12 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0, transform_hlds__complexity__ForeignArgs_37, transform_hlds__complexity__RestForeignArgs_38);
        }
#line 440 "complexity.m"
        {
#line 440 "complexity.m"
          *transform_hlds__complexity__HeadVar__13_13 = mercury__string__f_43_43_2_f_0(transform_hlds__complexity__CodeStr_39, transform_hlds__complexity__RestCodeStr_40);
        }
#line 440 "complexity.m"
      }
#line 436 "complexity.m"
  }
#line 431 "complexity.m"
}

#line 405 "complexity.m"
static void MR_CALL 
transform_hlds__complexity__generate_slot_goals_12_p_0(
#line 405 "complexity.m"
  MR_Integer transform_hlds__complexity__ProcNum_13,
#line 405 "complexity.m"
  MR_Word transform_hlds__complexity__NumberedVars_14,
#line 405 "complexity.m"
  MR_Integer transform_hlds__complexity__NumProfiledVars_15,
#line 405 "complexity.m"
  MR_Word transform_hlds__complexity__Context_16,
#line 405 "complexity.m"
  MR_Word transform_hlds__complexity__PredId_17,
#line 405 "complexity.m"
  MR_Word transform_hlds__complexity__STATE_VARIABLE_ProcInfo_0_33,
#line 405 "complexity.m"
  MR_Word * transform_hlds__complexity__STATE_VARIABLE_ProcInfo_34,
#line 405 "complexity.m"
  MR_Word transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_0_35,
#line 405 "complexity.m"
  MR_Word * transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_36,
#line 405 "complexity.m"
  MR_Word * transform_hlds__complexity__SlotVar_20,
#line 405 "complexity.m"
  MR_String * transform_hlds__complexity__SlotVarName_21,
#line 405 "complexity.m"
  MR_Word * transform_hlds__complexity__Goals_22)
#line 405 "complexity.m"
{
#line 411 "complexity.m"
  {
#line 411 "complexity.m"
    MR_bool transform_hlds__complexity__succeeded;
#line 411 "complexity.m"
    MR_Word transform_hlds__complexity__PrefixGoals_24;
#line 411 "complexity.m"
    MR_Word transform_hlds__complexity__ForeignArgs_25;
#line 411 "complexity.m"
    MR_String transform_hlds__complexity__FillCodeStr_26;
#line 411 "complexity.m"
    MR_Word transform_hlds__complexity__SlotVarArg_27;
#line 411 "complexity.m"
    MR_String transform_hlds__complexity__PredCodeStr_30;
#line 411 "complexity.m"
    MR_String transform_hlds__complexity__ProcStr_31;
#line 411 "complexity.m"
    MR_Word transform_hlds__complexity__CallGoal_32;
#line 411 "complexity.m"
    MR_Word transform_hlds__complexity__V_37_37;
#line 411 "complexity.m"
    MR_Word transform_hlds__complexity__STATE_VARIABLE_ProcInfo_38_38;
#line 411 "complexity.m"
    MR_Word transform_hlds__complexity__V_41_41;
#line 411 "complexity.m"
    MR_Word transform_hlds__complexity__V_42_42;
#line 411 "complexity.m"
    MR_Word transform_hlds__complexity__V_43_43;
#line 411 "complexity.m"
    MR_Word transform_hlds__complexity__V_44_44;
#line 411 "complexity.m"
    MR_String transform_hlds__complexity__V_50_50;
#line 411 "complexity.m"
    MR_String transform_hlds__complexity__V_51_51;
#line 411 "complexity.m"
    MR_String transform_hlds__complexity__V_53_53;
#line 411 "complexity.m"
    MR_String transform_hlds__complexity__V_54_54;
#line 411 "complexity.m"
    MR_String transform_hlds__complexity__V_60_60;
#line 411 "complexity.m"
    MR_String transform_hlds__complexity__V_61_61;
#line 411 "complexity.m"
    MR_String transform_hlds__complexity__V_63_63;
#line 411 "complexity.m"
    MR_String transform_hlds__complexity__V_64_64;
#line 411 "complexity.m"
    MR_Word transform_hlds__complexity__V_67_67;
#line 411 "complexity.m"
    MR_String transform_hlds__complexity__V_68_68;
#line 411 "complexity.m"
    MR_Word transform_hlds__complexity__V_69_69;
#line 411 "complexity.m"
    MR_String transform_hlds__complexity__V_71_71;
#line 411 "complexity.m"
    MR_String transform_hlds__complexity__V_72_72;
#line 411 "complexity.m"
    MR_Word transform_hlds__complexity__V_74_74;
#line 411 "complexity.m"
    MR_Word transform_hlds__complexity__VarSet0_83;
#line 411 "complexity.m"
    MR_Word transform_hlds__complexity__VarTypes0_84;
#line 411 "complexity.m"
    MR_Word transform_hlds__complexity__VarSet_85;
#line 411 "complexity.m"
    MR_Word transform_hlds__complexity__VarTypes_86;
#line 411 "complexity.m"
    MR_Word transform_hlds__complexity__STATE_VARIABLE_ProcInfo_16_87;

#line 252 "complexity.m"
    *transform_hlds__complexity__SlotVarName_21 = (MR_String) "SlotVar";
#line 413 "complexity.m"
    {
#line 413 "complexity.m"
      transform_hlds__complexity__V_37_37 = parse_tree__builtin_lib_types__int_type_0_f_0();
    }
#line 485 "complexity.m"
    {
#line 485 "complexity.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__complexity__STATE_VARIABLE_ProcInfo_0_33, &transform_hlds__complexity__VarSet0_83);
    }
#line 486 "complexity.m"
    {
#line 486 "complexity.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__complexity__STATE_VARIABLE_ProcInfo_0_33, &transform_hlds__complexity__VarTypes0_84);
    }
#line 487 "complexity.m"
    {
#line 487 "complexity.m"
      mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, *transform_hlds__complexity__SlotVarName_21, transform_hlds__complexity__SlotVar_20, transform_hlds__complexity__VarSet0_83, &transform_hlds__complexity__VarSet_85);
    }
#line 488 "complexity.m"
    {
#line 488 "complexity.m"
      hlds__vartypes__add_var_type_4_p_0(*transform_hlds__complexity__SlotVar_20, transform_hlds__complexity__V_37_37, transform_hlds__complexity__VarTypes0_84, &transform_hlds__complexity__VarTypes_86);
    }
#line 489 "complexity.m"
    {
#line 489 "complexity.m"
      hlds__hlds_pred__proc_info_set_varset_3_p_0(transform_hlds__complexity__VarSet_85, transform_hlds__complexity__STATE_VARIABLE_ProcInfo_0_33, &transform_hlds__complexity__STATE_VARIABLE_ProcInfo_16_87);
    }
#line 490 "complexity.m"
    {
#line 490 "complexity.m"
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__complexity__VarTypes_86, transform_hlds__complexity__STATE_VARIABLE_ProcInfo_16_87, &transform_hlds__complexity__STATE_VARIABLE_ProcInfo_38_38);
    }
#line 415 "complexity.m"
    {
#line 415 "complexity.m"
      transform_hlds__complexity__generate_size_goals_13_p_0(transform_hlds__complexity__NumberedVars_14, transform_hlds__complexity__Context_16, transform_hlds__complexity__NumProfiledVars_15, (MR_String) "proc", *transform_hlds__complexity__SlotVarName_21, transform_hlds__complexity__PredId_17, transform_hlds__complexity__STATE_VARIABLE_ProcInfo_38_38, transform_hlds__complexity__STATE_VARIABLE_ProcInfo_34, transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_0_35, transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_36, &transform_hlds__complexity__PrefixGoals_24, &transform_hlds__complexity__ForeignArgs_25, &transform_hlds__complexity__FillCodeStr_26);
    }
#line 419 "complexity.m"
    {
#line 419 "complexity.m"
      transform_hlds__complexity__V_43_43 = parse_tree__prog_mode__out_mode_0_f_0();
    }
#line 419 "complexity.m"
    {
#line 419 "complexity.m"
      transform_hlds__complexity__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 419 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__V_42_42, 0) = ((MR_Box) (*transform_hlds__complexity__SlotVarName_21));
#line 419 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__V_42_42, 1) = ((MR_Box) (transform_hlds__complexity__V_43_43));
#line 419 "complexity.m"
    }
#line 419 "complexity.m"
    {
#line 419 "complexity.m"
      transform_hlds__complexity__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 419 "complexity.m"
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_41_41, 0) = ((MR_Box) (transform_hlds__complexity__V_42_42));
#line 419 "complexity.m"
    }
#line 419 "complexity.m"
    {
#line 419 "complexity.m"
      transform_hlds__complexity__V_44_44 = parse_tree__builtin_lib_types__int_type_0_f_0();
    }
#line 418 "complexity.m"
    {
#line 418 "complexity.m"
      transform_hlds__complexity__SlotVarArg_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 418 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__SlotVarArg_27, 0) = ((MR_Box) (*transform_hlds__complexity__SlotVar_20));
#line 418 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__SlotVarArg_27, 1) = ((MR_Box) (transform_hlds__complexity__V_41_41));
#line 418 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__SlotVarArg_27, 2) = ((MR_Box) (transform_hlds__complexity__V_44_44));
#line 418 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__SlotVarArg_27, 3) = ((MR_Box) ((MR_Integer) 0));
#line 418 "complexity.m"
    }
#line 423 "complexity.m"
    {
#line 423 "complexity.m"
      transform_hlds__complexity__V_54_54 = mercury__string__int_to_string_1_f_0(transform_hlds__complexity__ProcNum_13);
    }
#line 423 "complexity.m"
    {
#line 423 "complexity.m"
      transform_hlds__complexity__V_53_53 = mercury__string__f_43_43_2_f_0(transform_hlds__complexity__V_54_54, (MR_String) ", SlotVar);\n");
    }
#line 422 "complexity.m"
    {
#line 422 "complexity.m"
      transform_hlds__complexity__V_51_51 = mercury__string__f_43_43_2_f_0((MR_String) "(", transform_hlds__complexity__V_53_53);
    }
#line 422 "complexity.m"
    {
#line 422 "complexity.m"
      transform_hlds__complexity__V_50_50 = mercury__string__f_43_43_2_f_0((MR_String) "complexity_call_proc", transform_hlds__complexity__V_51_51);
    }
#line 422 "complexity.m"
    {
#line 422 "complexity.m"
      transform_hlds__complexity__PredCodeStr_30 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_", transform_hlds__complexity__V_50_50);
    }
#line 425 "complexity.m"
    {
#line 425 "complexity.m"
      transform_hlds__complexity__V_64_64 = mercury__string__int_to_string_1_f_0(transform_hlds__complexity__ProcNum_13);
    }
#line 425 "complexity.m"
    {
#line 425 "complexity.m"
      transform_hlds__complexity__V_63_63 = mercury__string__f_43_43_2_f_0(transform_hlds__complexity__V_64_64, (MR_String) "];\n");
    }
#line 424 "complexity.m"
    {
#line 424 "complexity.m"
      transform_hlds__complexity__V_61_61 = mercury__string__f_43_43_2_f_0((MR_String) " = &MR_complexity_procs[", transform_hlds__complexity__V_63_63);
    }
#line 424 "complexity.m"
    {
#line 424 "complexity.m"
      transform_hlds__complexity__V_60_60 = mercury__string__f_43_43_2_f_0((MR_String) "proc", transform_hlds__complexity__V_61_61);
    }
#line 424 "complexity.m"
    {
#line 424 "complexity.m"
      transform_hlds__complexity__ProcStr_31 = mercury__string__f_43_43_2_f_0((MR_String) "\t", transform_hlds__complexity__V_60_60);
    }
#line 426 "complexity.m"
    {
#line 426 "complexity.m"
      transform_hlds__complexity__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 426 "complexity.m"
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_67_67, 0) = ((MR_Box) (transform_hlds__complexity__SlotVarArg_27));
#line 426 "complexity.m"
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 426 "complexity.m"
    }
#line 427 "complexity.m"
    {
#line 427 "complexity.m"
      transform_hlds__complexity__V_72_72 = mercury__string__f_43_43_2_f_0(transform_hlds__complexity__ProcStr_31, transform_hlds__complexity__FillCodeStr_26);
    }
#line 427 "complexity.m"
    {
#line 427 "complexity.m"
      transform_hlds__complexity__V_71_71 = mercury__string__f_43_43_2_f_0(transform_hlds__complexity__PredCodeStr_30, transform_hlds__complexity__V_72_72);
    }
#line 427 "complexity.m"
    {
#line 427 "complexity.m"
      transform_hlds__complexity__V_68_68 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_ComplexityProc *proc;\n", transform_hlds__complexity__V_71_71);
    }
#line 428 "complexity.m"
    {
#line 428 "complexity.m"
      transform_hlds__complexity__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 428 "complexity.m"
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_69_69, 0) = ((MR_Box) (*transform_hlds__complexity__SlotVar_20));
#line 428 "complexity.m"
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_69_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 428 "complexity.m"
    }
#line 426 "complexity.m"
    {
#line 426 "complexity.m"
      transform_hlds__complexity__complexity_generate_foreign_proc_9_p_0((MR_String) "complexity_call_proc", (MR_Integer) 0, transform_hlds__complexity__V_67_67, transform_hlds__complexity__ForeignArgs_25, transform_hlds__complexity__V_68_68, transform_hlds__complexity__V_69_69, *transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_36, transform_hlds__complexity__Context_16, &transform_hlds__complexity__CallGoal_32);
    }
#line 429 "complexity.m"
    {
#line 429 "complexity.m"
      transform_hlds__complexity__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 429 "complexity.m"
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_74_74, 0) = ((MR_Box) (transform_hlds__complexity__CallGoal_32));
#line 429 "complexity.m"
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_74_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 429 "complexity.m"
    }
#line 429 "complexity.m"
    {
#line 429 "complexity.m"
      mercury__list__append_3_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__complexity__PrefixGoals_24, transform_hlds__complexity__V_74_74, transform_hlds__complexity__Goals_22);
#line 429 "complexity.m"
      return;
    }
#line 411 "complexity.m"
  }
#line 405 "complexity.m"
}

#line 254 "complexity.m"
static void MR_CALL 
transform_hlds__complexity__complexity_process_proc_8_p_0(
#line 254 "complexity.m"
  MR_Integer transform_hlds__complexity__NumProcs_9,
#line 254 "complexity.m"
  MR_Integer transform_hlds__complexity__ProcNum_10,
#line 254 "complexity.m"
  MR_String transform_hlds__complexity__FullName_11,
#line 254 "complexity.m"
  MR_Word transform_hlds__complexity__PredId_12,
#line 254 "complexity.m"
  MR_Word transform_hlds__complexity__STATE_VARIABLE_ProcInfo_0_75,
#line 254 "complexity.m"
  MR_Word * transform_hlds__complexity__STATE_VARIABLE_ProcInfo_76,
#line 254 "complexity.m"
  MR_Word transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_0_77,
#line 254 "complexity.m"
  MR_Word * transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_78)
#line 254 "complexity.m"
{
#line 259 "complexity.m"
  {
#line 259 "complexity.m"
    MR_bool transform_hlds__complexity__succeeded;
#line 259 "complexity.m"
    MR_Word transform_hlds__complexity__TypeCtorInfo_235_235;
#line 259 "complexity.m"
    MR_Word transform_hlds__complexity__Detism_15;
#line 259 "complexity.m"
    MR_Word transform_hlds__complexity__CodeModel_16;
#line 259 "complexity.m"
    MR_Word transform_hlds__complexity__HeadVars_17;
#line 259 "complexity.m"
    MR_Word transform_hlds__complexity__ArgModes_18;
#line 259 "complexity.m"
    MR_Word transform_hlds__complexity__VarSet_19;
#line 259 "complexity.m"
    MR_Word transform_hlds__complexity__VarTypes_20;
#line 259 "complexity.m"
    MR_Word transform_hlds__complexity__OrigGoal_21;
#line 259 "complexity.m"
    MR_Word transform_hlds__complexity__Context_22;
#line 259 "complexity.m"
    MR_Word transform_hlds__complexity__OrigGoalInfo_23;
#line 259 "complexity.m"
    MR_Word transform_hlds__complexity__OrigNonLocals_24;
#line 259 "complexity.m"
    MR_Word transform_hlds__complexity__OrigInstMapDelta_26;
#line 259 "complexity.m"
    MR_Word transform_hlds__complexity__ImpureOrigGoalInfo_27;
#line 259 "complexity.m"
    MR_Word transform_hlds__complexity__IsActiveVar_29;
#line 259 "complexity.m"
    MR_Word transform_hlds__complexity__VarInfos_30;
#line 259 "complexity.m"
    MR_Word transform_hlds__complexity__NumberedProfiledVars_31;
#line 259 "complexity.m"
    MR_Integer transform_hlds__complexity__NumProfiledVars_32;
#line 259 "complexity.m"
    MR_Word transform_hlds__complexity__SlotVar_33;
#line 259 "complexity.m"
    MR_String transform_hlds__complexity__SlotVarName_34;
#line 259 "complexity.m"
    MR_Word transform_hlds__complexity__SlotGoals_35;
#line 259 "complexity.m"
    MR_Word transform_hlds__complexity__IsActiveOutputArg_36;
#line 259 "complexity.m"
    MR_Word transform_hlds__complexity__SlotInputArg_37;
#line 259 "complexity.m"
    MR_String transform_hlds__complexity__ProcNumStr_38;
#line 259 "complexity.m"
    MR_String transform_hlds__complexity__IsActiveStr_40;
#line 259 "complexity.m"
    MR_Word transform_hlds__complexity__IsActiveGoal_41;
#line 259 "complexity.m"
    MR_String transform_hlds__complexity__ExitStr_43;
#line 259 "complexity.m"
    MR_Word transform_hlds__complexity__ExitGoal_44;
#line 259 "complexity.m"
    MR_String transform_hlds__complexity__FailStr_46;
#line 259 "complexity.m"
    MR_Word transform_hlds__complexity__FailGoal_47;
#line 259 "complexity.m"
    MR_String transform_hlds__complexity__RedoStr_49;
#line 259 "complexity.m"
    MR_Word transform_hlds__complexity__RedoGoal0_50;
#line 259 "complexity.m"
    MR_Word transform_hlds__complexity__TransGoal_52;
#line 259 "complexity.m"
    MR_Word transform_hlds__complexity__TSPB_62;
#line 259 "complexity.m"
    MR_Word transform_hlds__complexity__TypeCtor_63;
#line 259 "complexity.m"
    MR_Word transform_hlds__complexity__SwitchArms_64;
#line 259 "complexity.m"
    MR_Word transform_hlds__complexity__SwitchExpr_65;
#line 259 "complexity.m"
    MR_Word transform_hlds__complexity__SwitchGoalInfo_66;
#line 259 "complexity.m"
    MR_Word transform_hlds__complexity__SwitchGoal_67;
#line 259 "complexity.m"
    MR_Word transform_hlds__complexity__GoalExpr_68;
#line 259 "complexity.m"
    MR_Word transform_hlds__complexity__GoalInfo_69;
#line 259 "complexity.m"
    MR_Word transform_hlds__complexity__Goal_70;
#line 259 "complexity.m"
    MR_Word transform_hlds__complexity__Infos_71;
#line 259 "complexity.m"
    MR_Word transform_hlds__complexity__ComplexityInfo_72;
#line 259 "complexity.m"
    MR_Word transform_hlds__complexity__ComplexityInfos0_73;
#line 259 "complexity.m"
    MR_Word transform_hlds__complexity__ComplexityInfos_74;
#line 259 "complexity.m"
    MR_Word transform_hlds__complexity__V_80_80;
#line 259 "complexity.m"
    MR_Word transform_hlds__complexity__STATE_VARIABLE_ProcInfo_81_81;
#line 259 "complexity.m"
    MR_Word transform_hlds__complexity__STATE_VARIABLE_ProcInfo_83_83;
#line 259 "complexity.m"
    MR_Word transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_84_84;
#line 259 "complexity.m"
    MR_Word transform_hlds__complexity__V_85_85;
#line 259 "complexity.m"
    MR_Word transform_hlds__complexity__V_86_86;
#line 259 "complexity.m"
    MR_Word transform_hlds__complexity__V_87_87;
#line 259 "complexity.m"
    MR_Word transform_hlds__complexity__V_88_88;
#line 259 "complexity.m"
    MR_Word transform_hlds__complexity__V_90_90;
#line 259 "complexity.m"
    MR_Word transform_hlds__complexity__V_91_91;
#line 259 "complexity.m"
    MR_Word transform_hlds__complexity__V_92_92;
#line 259 "complexity.m"
    MR_Word transform_hlds__complexity__V_93_93;
#line 259 "complexity.m"
    MR_String transform_hlds__complexity__V_96_96;
#line 259 "complexity.m"
    MR_String transform_hlds__complexity__V_97_97;
#line 259 "complexity.m"
    MR_String transform_hlds__complexity__V_99_99;
#line 259 "complexity.m"
    MR_String transform_hlds__complexity__V_100_100;
#line 259 "complexity.m"
    MR_String transform_hlds__complexity__V_101_101;
#line 259 "complexity.m"
    MR_String transform_hlds__complexity__V_103_103;
#line 259 "complexity.m"
    MR_String transform_hlds__complexity__V_104_104;
#line 259 "complexity.m"
    MR_String transform_hlds__complexity__V_106_106;
#line 259 "complexity.m"
    MR_String transform_hlds__complexity__V_107_107;
#line 259 "complexity.m"
    MR_String transform_hlds__complexity__V_109_109;
#line 259 "complexity.m"
    MR_String transform_hlds__complexity__V_110_110;
#line 259 "complexity.m"
    MR_Word transform_hlds__complexity__V_116_116;
#line 259 "complexity.m"
    MR_Word transform_hlds__complexity__V_118_118;
#line 259 "complexity.m"
    MR_String transform_hlds__complexity__V_122_122;
#line 259 "complexity.m"
    MR_String transform_hlds__complexity__V_123_123;
#line 259 "complexity.m"
    MR_String transform_hlds__complexity__V_125_125;
#line 259 "complexity.m"
    MR_String transform_hlds__complexity__V_126_126;
#line 259 "complexity.m"
    MR_String transform_hlds__complexity__V_128_128;
#line 259 "complexity.m"
    MR_String transform_hlds__complexity__V_129_129;
#line 259 "complexity.m"
    MR_Word transform_hlds__complexity__V_132_132;
#line 259 "complexity.m"
    MR_String transform_hlds__complexity__V_137_137;
#line 259 "complexity.m"
    MR_String transform_hlds__complexity__V_138_138;
#line 259 "complexity.m"
    MR_String transform_hlds__complexity__V_140_140;
#line 259 "complexity.m"
    MR_String transform_hlds__complexity__V_141_141;
#line 259 "complexity.m"
    MR_String transform_hlds__complexity__V_143_143;
#line 259 "complexity.m"
    MR_String transform_hlds__complexity__V_144_144;
#line 259 "complexity.m"
    MR_String transform_hlds__complexity__V_152_152;
#line 259 "complexity.m"
    MR_String transform_hlds__complexity__V_153_153;
#line 259 "complexity.m"
    MR_String transform_hlds__complexity__V_155_155;
#line 259 "complexity.m"
    MR_String transform_hlds__complexity__V_156_156;
#line 259 "complexity.m"
    MR_String transform_hlds__complexity__V_158_158;
#line 259 "complexity.m"
    MR_String transform_hlds__complexity__V_159_159;
#line 259 "complexity.m"
    MR_Word transform_hlds__complexity__V_207_207;
#line 259 "complexity.m"
    MR_Word transform_hlds__complexity__V_210_210;
#line 259 "complexity.m"
    MR_Word transform_hlds__complexity__V_211_211;
#line 259 "complexity.m"
    MR_Word transform_hlds__complexity__V_212_212;
#line 259 "complexity.m"
    MR_Word transform_hlds__complexity__V_216_216;
#line 259 "complexity.m"
    MR_Word transform_hlds__complexity__V_217_217;
#line 259 "complexity.m"
    MR_Word transform_hlds__complexity__V_218_218;
#line 259 "complexity.m"
    MR_Word transform_hlds__complexity__V_219_219;
#line 259 "complexity.m"
    MR_Word transform_hlds__complexity__V_227_227;
#line 259 "complexity.m"
    MR_Word transform_hlds__complexity__V_228_228;
#line 273 "complexity.m"
    MR_Word transform_hlds__complexity__V_25_25;

#line 260 "complexity.m"
    {
#line 260 "complexity.m"
      hlds__hlds_pred__proc_info_interface_determinism_2_p_0(transform_hlds__complexity__STATE_VARIABLE_ProcInfo_0_75, &transform_hlds__complexity__Detism_15);
    }
#line 261 "complexity.m"
    {
#line 261 "complexity.m"
      hlds__code_model__determinism_to_code_model_2_p_0(transform_hlds__complexity__Detism_15, &transform_hlds__complexity__CodeModel_16);
    }
#line 262 "complexity.m"
    {
#line 262 "complexity.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__complexity__STATE_VARIABLE_ProcInfo_0_75, &transform_hlds__complexity__HeadVars_17);
    }
#line 263 "complexity.m"
    {
#line 263 "complexity.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__complexity__STATE_VARIABLE_ProcInfo_0_75, &transform_hlds__complexity__ArgModes_18);
    }
#line 264 "complexity.m"
    {
#line 264 "complexity.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__complexity__STATE_VARIABLE_ProcInfo_0_75, &transform_hlds__complexity__VarSet_19);
    }
#line 265 "complexity.m"
    {
#line 265 "complexity.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__complexity__STATE_VARIABLE_ProcInfo_0_75, &transform_hlds__complexity__VarTypes_20);
    }
#line 266 "complexity.m"
    {
#line 266 "complexity.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__complexity__STATE_VARIABLE_ProcInfo_0_75, &transform_hlds__complexity__OrigGoal_21);
    }
#line 2149 "transform_hlds.complexity.c"
    transform_hlds__complexity__TypeCtorInfo_235_235 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 272 "complexity.m"
    {
#line 272 "complexity.m"
      parse_tree__set_of_var__list_to_set_2_p_0(transform_hlds__complexity__TypeCtorInfo_235_235, transform_hlds__complexity__HeadVars_17, &transform_hlds__complexity__OrigNonLocals_24);
    }
#line 273 "complexity.m"
    transform_hlds__complexity__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__complexity__OrigGoal_21, (MR_Integer) 0)));
#line 273 "complexity.m"
    transform_hlds__complexity__OrigGoalInfo_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__complexity__OrigGoal_21, (MR_Integer) 1)));
#line 267 "complexity.m"
    {
#line 267 "complexity.m"
      transform_hlds__complexity__Context_22 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__complexity__OrigGoalInfo_23);
    }
#line 274 "complexity.m"
    {
#line 274 "complexity.m"
      transform_hlds__complexity__OrigInstMapDelta_26 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__complexity__OrigGoalInfo_23);
    }
#line 275 "complexity.m"
    {
#line 275 "complexity.m"
      hlds__hlds_goal__goal_info_set_purity_3_p_0((MR_Integer) 2, transform_hlds__complexity__OrigGoalInfo_23, &transform_hlds__complexity__ImpureOrigGoalInfo_27);
    }
#line 278 "complexity.m"
    {
#line 278 "complexity.m"
      transform_hlds__complexity__V_80_80 = transform_hlds__complexity__is_active_type_0_f_0();
    }
#line 278 "complexity.m"
    {
#line 278 "complexity.m"
      transform_hlds__complexity__generate_new_var_5_p_0((MR_String) "IsActive", transform_hlds__complexity__V_80_80, transform_hlds__complexity__STATE_VARIABLE_ProcInfo_0_75, &transform_hlds__complexity__STATE_VARIABLE_ProcInfo_81_81, &transform_hlds__complexity__IsActiveVar_29);
    }
#line 280 "complexity.m"
    {
#line 280 "complexity.m"
      transform_hlds__complexity__classify_args_6_p_0(transform_hlds__complexity__HeadVars_17, transform_hlds__complexity__ArgModes_18, transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_0_77, transform_hlds__complexity__VarSet_19, transform_hlds__complexity__VarTypes_20, &transform_hlds__complexity__VarInfos_30);
    }
#line 282 "complexity.m"
    {
#line 282 "complexity.m"
      transform_hlds__complexity__allocate_slot_numbers_cl_3_p_0(transform_hlds__complexity__VarInfos_30, (MR_Integer) 0, &transform_hlds__complexity__NumberedProfiledVars_31);
    }
#line 283 "complexity.m"
    {
#line 283 "complexity.m"
      mercury__list__length_2_p_0((MR_Word) &transform_hlds__complexity_scalar_common_2[0], transform_hlds__complexity__NumberedProfiledVars_31, &transform_hlds__complexity__NumProfiledVars_32);
    }
#line 284 "complexity.m"
    {
#line 284 "complexity.m"
      transform_hlds__complexity__generate_slot_goals_12_p_0(transform_hlds__complexity__ProcNum_10, transform_hlds__complexity__NumberedProfiledVars_31, transform_hlds__complexity__NumProfiledVars_32, transform_hlds__complexity__Context_22, transform_hlds__complexity__PredId_12, transform_hlds__complexity__STATE_VARIABLE_ProcInfo_81_81, &transform_hlds__complexity__STATE_VARIABLE_ProcInfo_83_83, transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_0_77, &transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_84_84, &transform_hlds__complexity__SlotVar_33, &transform_hlds__complexity__SlotVarName_34, &transform_hlds__complexity__SlotGoals_35);
    }
#line 289 "complexity.m"
    {
#line 289 "complexity.m"
      transform_hlds__complexity__V_87_87 = parse_tree__prog_mode__out_mode_0_f_0();
    }
#line 289 "complexity.m"
    {
#line 289 "complexity.m"
      transform_hlds__complexity__V_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 289 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__V_86_86, 0) = ((MR_Box) ((MR_String) "IsActive"));
#line 289 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__V_86_86, 1) = ((MR_Box) (transform_hlds__complexity__V_87_87));
#line 289 "complexity.m"
    }
#line 289 "complexity.m"
    {
#line 289 "complexity.m"
      transform_hlds__complexity__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 289 "complexity.m"
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_85_85, 0) = ((MR_Box) (transform_hlds__complexity__V_86_86));
#line 289 "complexity.m"
    }
#line 289 "complexity.m"
    {
#line 289 "complexity.m"
      transform_hlds__complexity__V_88_88 = transform_hlds__complexity__is_active_type_0_f_0();
    }
#line 288 "complexity.m"
    {
#line 288 "complexity.m"
      transform_hlds__complexity__IsActiveOutputArg_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 288 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__IsActiveOutputArg_36, 0) = ((MR_Box) (transform_hlds__complexity__IsActiveVar_29));
#line 288 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__IsActiveOutputArg_36, 1) = ((MR_Box) (transform_hlds__complexity__V_85_85));
#line 288 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__IsActiveOutputArg_36, 2) = ((MR_Box) (transform_hlds__complexity__V_88_88));
#line 288 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__IsActiveOutputArg_36, 3) = ((MR_Box) ((MR_Integer) 0));
#line 288 "complexity.m"
    }
#line 291 "complexity.m"
    {
#line 291 "complexity.m"
      transform_hlds__complexity__V_92_92 = parse_tree__prog_mode__in_mode_0_f_0();
    }
#line 291 "complexity.m"
    {
#line 291 "complexity.m"
      transform_hlds__complexity__V_91_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 291 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__V_91_91, 0) = ((MR_Box) (transform_hlds__complexity__SlotVarName_34));
#line 291 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__V_91_91, 1) = ((MR_Box) (transform_hlds__complexity__V_92_92));
#line 291 "complexity.m"
    }
#line 291 "complexity.m"
    {
#line 291 "complexity.m"
      transform_hlds__complexity__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 291 "complexity.m"
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_90_90, 0) = ((MR_Box) (transform_hlds__complexity__V_91_91));
#line 291 "complexity.m"
    }
#line 291 "complexity.m"
    {
#line 291 "complexity.m"
      transform_hlds__complexity__V_93_93 = parse_tree__builtin_lib_types__int_type_0_f_0();
    }
#line 290 "complexity.m"
    {
#line 290 "complexity.m"
      transform_hlds__complexity__SlotInputArg_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 290 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__SlotInputArg_37, 0) = ((MR_Box) (transform_hlds__complexity__SlotVar_33));
#line 290 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__SlotInputArg_37, 1) = ((MR_Box) (transform_hlds__complexity__V_90_90));
#line 290 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__SlotInputArg_37, 2) = ((MR_Box) (transform_hlds__complexity__V_93_93));
#line 290 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__SlotInputArg_37, 3) = ((MR_Box) ((MR_Integer) 0));
#line 290 "complexity.m"
    }
#line 293 "complexity.m"
    {
#line 293 "complexity.m"
      transform_hlds__complexity__ProcNumStr_38 = mercury__string__int_to_string_1_f_0(transform_hlds__complexity__ProcNum_10);
    }
#line 297 "complexity.m"
    {
#line 297 "complexity.m"
      transform_hlds__complexity__V_100_100 = mercury__string__int_to_string_1_f_0(transform_hlds__complexity__NumProcs_9);
    }
#line 299 "complexity.m"
    {
#line 299 "complexity.m"
      transform_hlds__complexity__V_110_110 = mercury__string__int_to_string_1_f_0(transform_hlds__complexity__NumProfiledVars_32);
    }
#line 299 "complexity.m"
    {
#line 299 "complexity.m"
      transform_hlds__complexity__V_109_109 = mercury__string__f_43_43_2_f_0(transform_hlds__complexity__V_110_110, (MR_String) ", IsActive);\n");
    }
#line 298 "complexity.m"
    {
#line 298 "complexity.m"
      transform_hlds__complexity__V_107_107 = mercury__string__f_43_43_2_f_0((MR_String) "\", ", transform_hlds__complexity__V_109_109);
    }
#line 298 "complexity.m"
    {
#line 298 "complexity.m"
      transform_hlds__complexity__V_106_106 = mercury__string__f_43_43_2_f_0(transform_hlds__complexity__FullName_11, transform_hlds__complexity__V_107_107);
    }
#line 298 "complexity.m"
    {
#line 298 "complexity.m"
      transform_hlds__complexity__V_104_104 = mercury__string__f_43_43_2_f_0((MR_String) ", \"", transform_hlds__complexity__V_106_106);
    }
#line 298 "complexity.m"
    {
#line 298 "complexity.m"
      transform_hlds__complexity__V_103_103 = mercury__string__f_43_43_2_f_0(transform_hlds__complexity__ProcNumStr_38, transform_hlds__complexity__V_104_104);
    }
#line 298 "complexity.m"
    {
#line 298 "complexity.m"
      transform_hlds__complexity__V_101_101 = mercury__string__f_43_43_2_f_0((MR_String) ", ", transform_hlds__complexity__V_103_103);
    }
#line 297 "complexity.m"
    {
#line 297 "complexity.m"
      transform_hlds__complexity__V_99_99 = mercury__string__f_43_43_2_f_0(transform_hlds__complexity__V_100_100, transform_hlds__complexity__V_101_101);
    }
#line 296 "complexity.m"
    {
#line 296 "complexity.m"
      transform_hlds__complexity__V_97_97 = mercury__string__f_43_43_2_f_0((MR_String) "(", transform_hlds__complexity__V_99_99);
    }
#line 296 "complexity.m"
    {
#line 296 "complexity.m"
      transform_hlds__complexity__V_96_96 = mercury__string__f_43_43_2_f_0((MR_String) "complexity_is_active", transform_hlds__complexity__V_97_97);
    }
#line 296 "complexity.m"
    {
#line 296 "complexity.m"
      transform_hlds__complexity__IsActiveStr_40 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_", transform_hlds__complexity__V_96_96);
    }
#line 303 "complexity.m"
    {
#line 303 "complexity.m"
      transform_hlds__complexity__V_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 303 "complexity.m"
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_116_116, 0) = ((MR_Box) (transform_hlds__complexity__IsActiveOutputArg_36));
#line 303 "complexity.m"
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_116_116, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 303 "complexity.m"
    }
#line 303 "complexity.m"
    {
#line 303 "complexity.m"
      transform_hlds__complexity__V_118_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 303 "complexity.m"
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_118_118, 0) = ((MR_Box) (transform_hlds__complexity__IsActiveVar_29));
#line 303 "complexity.m"
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_118_118, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 303 "complexity.m"
    }
#line 302 "complexity.m"
    {
#line 302 "complexity.m"
      transform_hlds__complexity__complexity_generate_foreign_proc_9_p_0((MR_String) "complexity_is_active", (MR_Integer) 0, transform_hlds__complexity__V_116_116, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__complexity__IsActiveStr_40, transform_hlds__complexity__V_118_118, transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_84_84, transform_hlds__complexity__Context_22, &transform_hlds__complexity__IsActiveGoal_41);
    }
#line 308 "complexity.m"
    {
#line 308 "complexity.m"
      transform_hlds__complexity__V_129_129 = transform_hlds__complexity__slot_var_name_0_f_0();
    }
#line 308 "complexity.m"
    {
#line 308 "complexity.m"
      transform_hlds__complexity__V_128_128 = mercury__string__f_43_43_2_f_0(transform_hlds__complexity__V_129_129, (MR_String) ");\n");
    }
#line 308 "complexity.m"
    {
#line 308 "complexity.m"
      transform_hlds__complexity__V_126_126 = mercury__string__f_43_43_2_f_0((MR_String) ", ", transform_hlds__complexity__V_128_128);
    }
#line 308 "complexity.m"
    {
#line 308 "complexity.m"
      transform_hlds__complexity__V_125_125 = mercury__string__f_43_43_2_f_0(transform_hlds__complexity__ProcNumStr_38, transform_hlds__complexity__V_126_126);
    }
#line 307 "complexity.m"
    {
#line 307 "complexity.m"
      transform_hlds__complexity__V_123_123 = mercury__string__f_43_43_2_f_0((MR_String) "(", transform_hlds__complexity__V_125_125);
    }
#line 307 "complexity.m"
    {
#line 307 "complexity.m"
      transform_hlds__complexity__V_122_122 = mercury__string__f_43_43_2_f_0((MR_String) "complexity_exit_proc", transform_hlds__complexity__V_123_123);
    }
#line 307 "complexity.m"
    {
#line 307 "complexity.m"
      transform_hlds__complexity__ExitStr_43 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_", transform_hlds__complexity__V_122_122);
    }
#line 310 "complexity.m"
    {
#line 310 "complexity.m"
      transform_hlds__complexity__V_132_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 310 "complexity.m"
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_132_132, 0) = ((MR_Box) (transform_hlds__complexity__SlotInputArg_37));
#line 310 "complexity.m"
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_132_132, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 310 "complexity.m"
    }
#line 309 "complexity.m"
    {
#line 309 "complexity.m"
      transform_hlds__complexity__complexity_generate_foreign_proc_9_p_0((MR_String) "complexity_exit_proc", (MR_Integer) 0, transform_hlds__complexity__V_132_132, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__complexity__ExitStr_43, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_84_84, transform_hlds__complexity__Context_22, &transform_hlds__complexity__ExitGoal_44);
    }
#line 315 "complexity.m"
    {
#line 315 "complexity.m"
      transform_hlds__complexity__V_144_144 = transform_hlds__complexity__slot_var_name_0_f_0();
    }
#line 315 "complexity.m"
    {
#line 315 "complexity.m"
      transform_hlds__complexity__V_143_143 = mercury__string__f_43_43_2_f_0(transform_hlds__complexity__V_144_144, (MR_String) ");\n");
    }
#line 315 "complexity.m"
    {
#line 315 "complexity.m"
      transform_hlds__complexity__V_141_141 = mercury__string__f_43_43_2_f_0((MR_String) ", ", transform_hlds__complexity__V_143_143);
    }
#line 315 "complexity.m"
    {
#line 315 "complexity.m"
      transform_hlds__complexity__V_140_140 = mercury__string__f_43_43_2_f_0(transform_hlds__complexity__ProcNumStr_38, transform_hlds__complexity__V_141_141);
    }
#line 314 "complexity.m"
    {
#line 314 "complexity.m"
      transform_hlds__complexity__V_138_138 = mercury__string__f_43_43_2_f_0((MR_String) "(", transform_hlds__complexity__V_140_140);
    }
#line 314 "complexity.m"
    {
#line 314 "complexity.m"
      transform_hlds__complexity__V_137_137 = mercury__string__f_43_43_2_f_0((MR_String) "complexity_fail_proc", transform_hlds__complexity__V_138_138);
    }
#line 314 "complexity.m"
    {
#line 314 "complexity.m"
      transform_hlds__complexity__FailStr_46 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_", transform_hlds__complexity__V_137_137);
    }
#line 316 "complexity.m"
    {
#line 316 "complexity.m"
      transform_hlds__complexity__complexity_generate_foreign_proc_9_p_0((MR_String) "complexity_fail_proc", (MR_Integer) 7, transform_hlds__complexity__V_132_132, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__complexity__FailStr_46, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_84_84, transform_hlds__complexity__Context_22, &transform_hlds__complexity__FailGoal_47);
    }
#line 322 "complexity.m"
    {
#line 322 "complexity.m"
      transform_hlds__complexity__V_159_159 = transform_hlds__complexity__slot_var_name_0_f_0();
    }
#line 322 "complexity.m"
    {
#line 322 "complexity.m"
      transform_hlds__complexity__V_158_158 = mercury__string__f_43_43_2_f_0(transform_hlds__complexity__V_159_159, (MR_String) ");\n");
    }
#line 322 "complexity.m"
    {
#line 322 "complexity.m"
      transform_hlds__complexity__V_156_156 = mercury__string__f_43_43_2_f_0((MR_String) ", ", transform_hlds__complexity__V_158_158);
    }
#line 322 "complexity.m"
    {
#line 322 "complexity.m"
      transform_hlds__complexity__V_155_155 = mercury__string__f_43_43_2_f_0(transform_hlds__complexity__ProcNumStr_38, transform_hlds__complexity__V_156_156);
    }
#line 321 "complexity.m"
    {
#line 321 "complexity.m"
      transform_hlds__complexity__V_153_153 = mercury__string__f_43_43_2_f_0((MR_String) "(", transform_hlds__complexity__V_155_155);
    }
#line 321 "complexity.m"
    {
#line 321 "complexity.m"
      transform_hlds__complexity__V_152_152 = mercury__string__f_43_43_2_f_0((MR_String) "complexity_redo_proc", transform_hlds__complexity__V_153_153);
    }
#line 321 "complexity.m"
    {
#line 321 "complexity.m"
      transform_hlds__complexity__RedoStr_49 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_", transform_hlds__complexity__V_152_152);
    }
#line 323 "complexity.m"
    {
#line 323 "complexity.m"
      transform_hlds__complexity__complexity_generate_foreign_proc_9_p_0((MR_String) "complexity_redo_proc", (MR_Integer) 7, transform_hlds__complexity__V_132_132, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__complexity__RedoStr_49, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_84_84, transform_hlds__complexity__Context_22, &transform_hlds__complexity__RedoGoal0_50);
    }
#line 332 "complexity.m"
#line 332 "complexity.m"
    switch (transform_hlds__complexity__CodeModel_16) {
#line 332 "complexity.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 332 "complexity.m"
      case (MR_Integer) 0:
#line 328 "complexity.m"
        {
#line 328 "complexity.m"
          MR_Word transform_hlds__complexity__TransformedGoalExpr_51;
#line 328 "complexity.m"
          MR_Word transform_hlds__complexity__V_203_203;
#line 328 "complexity.m"
          MR_Word transform_hlds__complexity__V_204_204;
#line 328 "complexity.m"
          MR_Word transform_hlds__complexity__V_205_205;

#line 330 "complexity.m"
          {
#line 330 "complexity.m"
            transform_hlds__complexity__V_205_205 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 330 "complexity.m"
            MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_205_205, 0) = ((MR_Box) (transform_hlds__complexity__ExitGoal_44));
#line 330 "complexity.m"
            MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_205_205, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 330 "complexity.m"
          }
#line 330 "complexity.m"
          {
#line 330 "complexity.m"
            transform_hlds__complexity__V_204_204 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 330 "complexity.m"
            MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_204_204, 0) = ((MR_Box) (transform_hlds__complexity__OrigGoal_21));
#line 330 "complexity.m"
            MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_204_204, 1) = ((MR_Box) (transform_hlds__complexity__V_205_205));
#line 330 "complexity.m"
          }
#line 330 "complexity.m"
          {
#line 330 "complexity.m"
            transform_hlds__complexity__V_203_203 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__complexity__SlotGoals_35, transform_hlds__complexity__V_204_204);
          }
#line 329 "complexity.m"
          {
#line 329 "complexity.m"
            transform_hlds__complexity__TransformedGoalExpr_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 329 "complexity.m"
            MR_hl_field(MR_mktag(3), transform_hlds__complexity__TransformedGoalExpr_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 329 "complexity.m"
            MR_hl_field(MR_mktag(3), transform_hlds__complexity__TransformedGoalExpr_51, 1) = ((MR_Box) ((MR_Integer) 0));
#line 329 "complexity.m"
            MR_hl_field(MR_mktag(3), transform_hlds__complexity__TransformedGoalExpr_51, 2) = ((MR_Box) (transform_hlds__complexity__V_203_203));
#line 329 "complexity.m"
          }
#line 331 "complexity.m"
          {
#line 331 "complexity.m"
            transform_hlds__complexity__TransGoal_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 331 "complexity.m"
            MR_hl_field(MR_mktag(0), transform_hlds__complexity__TransGoal_52, 0) = ((MR_Box) (transform_hlds__complexity__TransformedGoalExpr_51));
#line 331 "complexity.m"
            MR_hl_field(MR_mktag(0), transform_hlds__complexity__TransGoal_52, 1) = ((MR_Box) (transform_hlds__complexity__ImpureOrigGoalInfo_27));
#line 331 "complexity.m"
          }
#line 328 "complexity.m"
        }
#line 332 "complexity.m"
        break;
#line 332 "complexity.m"
      case (MR_Integer) 2:
#line 343 "complexity.m"
        {
#line 343 "complexity.m"
          MR_Word transform_hlds__complexity__RedoGoalExpr_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__complexity__RedoGoal0_50, (MR_Integer) 0)));
#line 343 "complexity.m"
          MR_Word transform_hlds__complexity__RedoGoalInfo0_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__complexity__RedoGoal0_50, (MR_Integer) 1)));
#line 343 "complexity.m"
          MR_Word transform_hlds__complexity__RedoGoalInfo_57;
#line 343 "complexity.m"
          MR_Word transform_hlds__complexity__RedoGoal_58;
#line 343 "complexity.m"
          MR_Word transform_hlds__complexity__AfterInstMapDelta_59;
#line 343 "complexity.m"
          MR_Word transform_hlds__complexity__AfterGoalInfo_60;
#line 343 "complexity.m"
          MR_Word transform_hlds__complexity__AfterGoal_61;
#line 343 "complexity.m"
          MR_Word transform_hlds__complexity__V_167_167;
#line 343 "complexity.m"
          MR_Word transform_hlds__complexity__V_170_170;
#line 343 "complexity.m"
          MR_Word transform_hlds__complexity__V_171_171;
#line 343 "complexity.m"
          MR_Word transform_hlds__complexity__V_172_172;
#line 343 "complexity.m"
          MR_Word transform_hlds__complexity__V_174_174;
#line 343 "complexity.m"
          MR_Word transform_hlds__complexity__V_176_176;
#line 343 "complexity.m"
          MR_Word transform_hlds__complexity__V_177_177;
#line 343 "complexity.m"
          MR_Word transform_hlds__complexity__V_179_179;
#line 343 "complexity.m"
          MR_Word transform_hlds__complexity__V_180_180;
#line 343 "complexity.m"
          MR_Word transform_hlds__complexity__V_181_181;
#line 343 "complexity.m"
          MR_Word transform_hlds__complexity__V_183_183;
#line 343 "complexity.m"
          MR_Word transform_hlds__complexity__V_185_185;
#line 343 "complexity.m"
          MR_Word transform_hlds__complexity__V_186_186;
#line 343 "complexity.m"
          MR_Word transform_hlds__complexity__OrigAfterGoal_233;
#line 343 "complexity.m"
          MR_Word transform_hlds__complexity__DisjGoal_234;

#line 345 "complexity.m"
          {
#line 345 "complexity.m"
            hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 6, transform_hlds__complexity__RedoGoalInfo0_56, &transform_hlds__complexity__RedoGoalInfo_57);
          }
#line 347 "complexity.m"
          {
#line 347 "complexity.m"
            transform_hlds__complexity__RedoGoal_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 347 "complexity.m"
            MR_hl_field(MR_mktag(0), transform_hlds__complexity__RedoGoal_58, 0) = ((MR_Box) (transform_hlds__complexity__RedoGoalExpr_55));
#line 347 "complexity.m"
            MR_hl_field(MR_mktag(0), transform_hlds__complexity__RedoGoal_58, 1) = ((MR_Box) (transform_hlds__complexity__RedoGoalInfo_57));
#line 347 "complexity.m"
          }
#line 349 "complexity.m"
          {
#line 349 "complexity.m"
            hlds__instmap__instmap_delta_init_reachable_1_p_0(&transform_hlds__complexity__AfterInstMapDelta_59);
          }
#line 350 "complexity.m"
          {
#line 350 "complexity.m"
            transform_hlds__complexity__V_167_167 = parse_tree__set_of_var__make_singleton_1_f_0(transform_hlds__complexity__TypeCtorInfo_235_235, transform_hlds__complexity__SlotVar_33);
          }
#line 350 "complexity.m"
          {
#line 350 "complexity.m"
            hlds__hlds_goal__goal_info_init_6_p_0(transform_hlds__complexity__V_167_167, transform_hlds__complexity__AfterInstMapDelta_59, (MR_Integer) 2, (MR_Integer) 2, transform_hlds__complexity__Context_22, &transform_hlds__complexity__AfterGoalInfo_60);
          }
#line 352 "complexity.m"
          {
#line 352 "complexity.m"
            transform_hlds__complexity__V_172_172 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 352 "complexity.m"
            MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_172_172, 0) = ((MR_Box) (transform_hlds__complexity__RedoGoal_58));
#line 352 "complexity.m"
            MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_172_172, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 352 "complexity.m"
          }
#line 352 "complexity.m"
          {
#line 352 "complexity.m"
            transform_hlds__complexity__V_171_171 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 352 "complexity.m"
            MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_171_171, 0) = ((MR_Box) (transform_hlds__complexity__ExitGoal_44));
#line 352 "complexity.m"
            MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_171_171, 1) = ((MR_Box) (transform_hlds__complexity__V_172_172));
#line 352 "complexity.m"
          }
#line 352 "complexity.m"
          {
#line 352 "complexity.m"
            transform_hlds__complexity__V_170_170 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 352 "complexity.m"
            MR_hl_field(MR_mktag(3), transform_hlds__complexity__V_170_170, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 352 "complexity.m"
            MR_hl_field(MR_mktag(3), transform_hlds__complexity__V_170_170, 1) = ((MR_Box) (transform_hlds__complexity__V_171_171));
#line 352 "complexity.m"
          }
#line 352 "complexity.m"
          {
#line 352 "complexity.m"
            transform_hlds__complexity__AfterGoal_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 352 "complexity.m"
            MR_hl_field(MR_mktag(0), transform_hlds__complexity__AfterGoal_61, 0) = ((MR_Box) (transform_hlds__complexity__V_170_170));
#line 352 "complexity.m"
            MR_hl_field(MR_mktag(0), transform_hlds__complexity__AfterGoal_61, 1) = ((MR_Box) (transform_hlds__complexity__AfterGoalInfo_60));
#line 352 "complexity.m"
          }
#line 355 "complexity.m"
          {
#line 355 "complexity.m"
            transform_hlds__complexity__V_177_177 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 355 "complexity.m"
            MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_177_177, 0) = ((MR_Box) (transform_hlds__complexity__AfterGoal_61));
#line 355 "complexity.m"
            MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_177_177, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 355 "complexity.m"
          }
#line 355 "complexity.m"
          {
#line 355 "complexity.m"
            transform_hlds__complexity__V_176_176 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 355 "complexity.m"
            MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_176_176, 0) = ((MR_Box) (transform_hlds__complexity__OrigGoal_21));
#line 355 "complexity.m"
            MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_176_176, 1) = ((MR_Box) (transform_hlds__complexity__V_177_177));
#line 355 "complexity.m"
          }
#line 355 "complexity.m"
          {
#line 355 "complexity.m"
            transform_hlds__complexity__V_174_174 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 355 "complexity.m"
            MR_hl_field(MR_mktag(3), transform_hlds__complexity__V_174_174, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 355 "complexity.m"
            MR_hl_field(MR_mktag(3), transform_hlds__complexity__V_174_174, 1) = ((MR_Box) ((MR_Integer) 0));
#line 355 "complexity.m"
            MR_hl_field(MR_mktag(3), transform_hlds__complexity__V_174_174, 2) = ((MR_Box) (transform_hlds__complexity__V_176_176));
#line 355 "complexity.m"
          }
#line 354 "complexity.m"
          {
#line 354 "complexity.m"
            transform_hlds__complexity__OrigAfterGoal_233 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 354 "complexity.m"
            MR_hl_field(MR_mktag(0), transform_hlds__complexity__OrigAfterGoal_233, 0) = ((MR_Box) (transform_hlds__complexity__V_174_174));
#line 354 "complexity.m"
            MR_hl_field(MR_mktag(0), transform_hlds__complexity__OrigAfterGoal_233, 1) = ((MR_Box) (transform_hlds__complexity__ImpureOrigGoalInfo_27));
#line 354 "complexity.m"
          }
#line 358 "complexity.m"
          {
#line 358 "complexity.m"
            transform_hlds__complexity__V_181_181 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 358 "complexity.m"
            MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_181_181, 0) = ((MR_Box) (transform_hlds__complexity__FailGoal_47));
#line 358 "complexity.m"
            MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_181_181, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 358 "complexity.m"
          }
#line 358 "complexity.m"
          {
#line 358 "complexity.m"
            transform_hlds__complexity__V_180_180 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 358 "complexity.m"
            MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_180_180, 0) = ((MR_Box) (transform_hlds__complexity__OrigAfterGoal_233));
#line 358 "complexity.m"
            MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_180_180, 1) = ((MR_Box) (transform_hlds__complexity__V_181_181));
#line 358 "complexity.m"
          }
#line 358 "complexity.m"
          {
#line 358 "complexity.m"
            transform_hlds__complexity__V_179_179 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 358 "complexity.m"
            MR_hl_field(MR_mktag(3), transform_hlds__complexity__V_179_179, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 358 "complexity.m"
            MR_hl_field(MR_mktag(3), transform_hlds__complexity__V_179_179, 1) = ((MR_Box) (transform_hlds__complexity__V_180_180));
#line 358 "complexity.m"
          }
#line 357 "complexity.m"
          {
#line 357 "complexity.m"
            transform_hlds__complexity__DisjGoal_234 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 357 "complexity.m"
            MR_hl_field(MR_mktag(0), transform_hlds__complexity__DisjGoal_234, 0) = ((MR_Box) (transform_hlds__complexity__V_179_179));
#line 357 "complexity.m"
            MR_hl_field(MR_mktag(0), transform_hlds__complexity__DisjGoal_234, 1) = ((MR_Box) (transform_hlds__complexity__ImpureOrigGoalInfo_27));
#line 357 "complexity.m"
          }
#line 361 "complexity.m"
          {
#line 361 "complexity.m"
            transform_hlds__complexity__V_186_186 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 361 "complexity.m"
            MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_186_186, 0) = ((MR_Box) (transform_hlds__complexity__DisjGoal_234));
#line 361 "complexity.m"
            MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_186_186, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 361 "complexity.m"
          }
#line 361 "complexity.m"
          {
#line 361 "complexity.m"
            transform_hlds__complexity__V_185_185 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__complexity__SlotGoals_35, transform_hlds__complexity__V_186_186);
          }
#line 361 "complexity.m"
          {
#line 361 "complexity.m"
            transform_hlds__complexity__V_183_183 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 361 "complexity.m"
            MR_hl_field(MR_mktag(3), transform_hlds__complexity__V_183_183, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 361 "complexity.m"
            MR_hl_field(MR_mktag(3), transform_hlds__complexity__V_183_183, 1) = ((MR_Box) ((MR_Integer) 0));
#line 361 "complexity.m"
            MR_hl_field(MR_mktag(3), transform_hlds__complexity__V_183_183, 2) = ((MR_Box) (transform_hlds__complexity__V_185_185));
#line 361 "complexity.m"
          }
#line 360 "complexity.m"
          {
#line 360 "complexity.m"
            transform_hlds__complexity__TransGoal_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 360 "complexity.m"
            MR_hl_field(MR_mktag(0), transform_hlds__complexity__TransGoal_52, 0) = ((MR_Box) (transform_hlds__complexity__V_183_183));
#line 360 "complexity.m"
            MR_hl_field(MR_mktag(0), transform_hlds__complexity__TransGoal_52, 1) = ((MR_Box) (transform_hlds__complexity__ImpureOrigGoalInfo_27));
#line 360 "complexity.m"
          }
#line 343 "complexity.m"
        }
#line 332 "complexity.m"
        break;
#line 332 "complexity.m"
      case (MR_Integer) 1:
#line 333 "complexity.m"
        {
#line 333 "complexity.m"
          MR_Word transform_hlds__complexity__OrigAfterGoal_53;
#line 333 "complexity.m"
          MR_Word transform_hlds__complexity__DisjGoal_54;
#line 333 "complexity.m"
          MR_Word transform_hlds__complexity__V_188_188;
#line 333 "complexity.m"
          MR_Word transform_hlds__complexity__V_190_190;
#line 333 "complexity.m"
          MR_Word transform_hlds__complexity__V_191_191;
#line 333 "complexity.m"
          MR_Word transform_hlds__complexity__V_193_193;
#line 333 "complexity.m"
          MR_Word transform_hlds__complexity__V_194_194;
#line 333 "complexity.m"
          MR_Word transform_hlds__complexity__V_195_195;
#line 333 "complexity.m"
          MR_Word transform_hlds__complexity__V_197_197;
#line 333 "complexity.m"
          MR_Word transform_hlds__complexity__V_199_199;
#line 333 "complexity.m"
          MR_Word transform_hlds__complexity__V_200_200;

#line 334 "complexity.m"
          {
#line 334 "complexity.m"
            transform_hlds__complexity__V_191_191 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 334 "complexity.m"
            MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_191_191, 0) = ((MR_Box) (transform_hlds__complexity__ExitGoal_44));
#line 334 "complexity.m"
            MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_191_191, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 334 "complexity.m"
          }
#line 334 "complexity.m"
          {
#line 334 "complexity.m"
            transform_hlds__complexity__V_190_190 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 334 "complexity.m"
            MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_190_190, 0) = ((MR_Box) (transform_hlds__complexity__OrigGoal_21));
#line 334 "complexity.m"
            MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_190_190, 1) = ((MR_Box) (transform_hlds__complexity__V_191_191));
#line 334 "complexity.m"
          }
#line 334 "complexity.m"
          {
#line 334 "complexity.m"
            transform_hlds__complexity__V_188_188 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 334 "complexity.m"
            MR_hl_field(MR_mktag(3), transform_hlds__complexity__V_188_188, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 334 "complexity.m"
            MR_hl_field(MR_mktag(3), transform_hlds__complexity__V_188_188, 1) = ((MR_Box) ((MR_Integer) 0));
#line 334 "complexity.m"
            MR_hl_field(MR_mktag(3), transform_hlds__complexity__V_188_188, 2) = ((MR_Box) (transform_hlds__complexity__V_190_190));
#line 334 "complexity.m"
          }
#line 334 "complexity.m"
          {
#line 334 "complexity.m"
            transform_hlds__complexity__OrigAfterGoal_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 334 "complexity.m"
            MR_hl_field(MR_mktag(0), transform_hlds__complexity__OrigAfterGoal_53, 0) = ((MR_Box) (transform_hlds__complexity__V_188_188));
#line 334 "complexity.m"
            MR_hl_field(MR_mktag(0), transform_hlds__complexity__OrigAfterGoal_53, 1) = ((MR_Box) (transform_hlds__complexity__ImpureOrigGoalInfo_27));
#line 334 "complexity.m"
          }
#line 337 "complexity.m"
          {
#line 337 "complexity.m"
            transform_hlds__complexity__V_195_195 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 337 "complexity.m"
            MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_195_195, 0) = ((MR_Box) (transform_hlds__complexity__FailGoal_47));
#line 337 "complexity.m"
            MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_195_195, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 337 "complexity.m"
          }
#line 337 "complexity.m"
          {
#line 337 "complexity.m"
            transform_hlds__complexity__V_194_194 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 337 "complexity.m"
            MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_194_194, 0) = ((MR_Box) (transform_hlds__complexity__OrigAfterGoal_53));
#line 337 "complexity.m"
            MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_194_194, 1) = ((MR_Box) (transform_hlds__complexity__V_195_195));
#line 337 "complexity.m"
          }
#line 337 "complexity.m"
          {
#line 337 "complexity.m"
            transform_hlds__complexity__V_193_193 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 337 "complexity.m"
            MR_hl_field(MR_mktag(3), transform_hlds__complexity__V_193_193, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 337 "complexity.m"
            MR_hl_field(MR_mktag(3), transform_hlds__complexity__V_193_193, 1) = ((MR_Box) (transform_hlds__complexity__V_194_194));
#line 337 "complexity.m"
          }
#line 336 "complexity.m"
          {
#line 336 "complexity.m"
            transform_hlds__complexity__DisjGoal_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 336 "complexity.m"
            MR_hl_field(MR_mktag(0), transform_hlds__complexity__DisjGoal_54, 0) = ((MR_Box) (transform_hlds__complexity__V_193_193));
#line 336 "complexity.m"
            MR_hl_field(MR_mktag(0), transform_hlds__complexity__DisjGoal_54, 1) = ((MR_Box) (transform_hlds__complexity__ImpureOrigGoalInfo_27));
#line 336 "complexity.m"
          }
#line 340 "complexity.m"
          {
#line 340 "complexity.m"
            transform_hlds__complexity__V_200_200 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 340 "complexity.m"
            MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_200_200, 0) = ((MR_Box) (transform_hlds__complexity__DisjGoal_54));
#line 340 "complexity.m"
            MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_200_200, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 340 "complexity.m"
          }
#line 340 "complexity.m"
          {
#line 340 "complexity.m"
            transform_hlds__complexity__V_199_199 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__complexity__SlotGoals_35, transform_hlds__complexity__V_200_200);
          }
#line 340 "complexity.m"
          {
#line 340 "complexity.m"
            transform_hlds__complexity__V_197_197 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 340 "complexity.m"
            MR_hl_field(MR_mktag(3), transform_hlds__complexity__V_197_197, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 340 "complexity.m"
            MR_hl_field(MR_mktag(3), transform_hlds__complexity__V_197_197, 1) = ((MR_Box) ((MR_Integer) 0));
#line 340 "complexity.m"
            MR_hl_field(MR_mktag(3), transform_hlds__complexity__V_197_197, 2) = ((MR_Box) (transform_hlds__complexity__V_199_199));
#line 340 "complexity.m"
          }
#line 339 "complexity.m"
          {
#line 339 "complexity.m"
            transform_hlds__complexity__TransGoal_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 339 "complexity.m"
            MR_hl_field(MR_mktag(0), transform_hlds__complexity__TransGoal_52, 0) = ((MR_Box) (transform_hlds__complexity__V_197_197));
#line 339 "complexity.m"
            MR_hl_field(MR_mktag(0), transform_hlds__complexity__TransGoal_52, 1) = ((MR_Box) (transform_hlds__complexity__ImpureOrigGoalInfo_27));
#line 339 "complexity.m"
          }
#line 333 "complexity.m"
        }
#line 332 "complexity.m"
        break;
#line 332 "complexity.m"
    }
#line 365 "complexity.m"
    {
#line 365 "complexity.m"
      transform_hlds__complexity__TSPB_62 = mdbcomp__builtin_modules__mercury_term_size_prof_builtin_module_0_f_0();
    }
#line 366 "complexity.m"
    {
#line 366 "complexity.m"
      transform_hlds__complexity__V_207_207 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 366 "complexity.m"
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_207_207, 0) = ((MR_Box) (transform_hlds__complexity__TSPB_62));
#line 366 "complexity.m"
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_207_207, 1) = ((MR_Box) ((MR_String) "complexity_is_active"));
#line 366 "complexity.m"
    }
#line 366 "complexity.m"
    {
#line 366 "complexity.m"
      transform_hlds__complexity__TypeCtor_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 366 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__TypeCtor_63, 0) = ((MR_Box) (transform_hlds__complexity__V_207_207));
#line 366 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__TypeCtor_63, 1) = ((MR_Box) ((MR_Integer) 0));
#line 366 "complexity.m"
    }
#line 368 "complexity.m"
    {
#line 368 "complexity.m"
      transform_hlds__complexity__V_212_212 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 368 "complexity.m"
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_212_212, 0) = ((MR_Box) (transform_hlds__complexity__TSPB_62));
#line 368 "complexity.m"
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_212_212, 1) = ((MR_Box) ((MR_String) "is_inactive"));
#line 368 "complexity.m"
    }
#line 368 "complexity.m"
    {
#line 368 "complexity.m"
      transform_hlds__complexity__V_211_211 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 368 "complexity.m"
      MR_hl_field(MR_mktag(3), transform_hlds__complexity__V_211_211, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 368 "complexity.m"
      MR_hl_field(MR_mktag(3), transform_hlds__complexity__V_211_211, 1) = ((MR_Box) (transform_hlds__complexity__V_212_212));
#line 368 "complexity.m"
      MR_hl_field(MR_mktag(3), transform_hlds__complexity__V_211_211, 2) = ((MR_Box) ((MR_Integer) 0));
#line 368 "complexity.m"
      MR_hl_field(MR_mktag(3), transform_hlds__complexity__V_211_211, 3) = ((MR_Box) (transform_hlds__complexity__TypeCtor_63));
#line 368 "complexity.m"
    }
#line 368 "complexity.m"
    {
#line 368 "complexity.m"
      transform_hlds__complexity__V_210_210 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 368 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__V_210_210, 0) = ((MR_Box) (transform_hlds__complexity__V_211_211));
#line 368 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__V_210_210, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 368 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__V_210_210, 2) = ((MR_Box) (transform_hlds__complexity__TransGoal_52));
#line 368 "complexity.m"
    }
#line 369 "complexity.m"
    {
#line 369 "complexity.m"
      transform_hlds__complexity__V_219_219 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 369 "complexity.m"
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_219_219, 0) = ((MR_Box) (transform_hlds__complexity__TSPB_62));
#line 369 "complexity.m"
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_219_219, 1) = ((MR_Box) ((MR_String) "is_active"));
#line 369 "complexity.m"
    }
#line 369 "complexity.m"
    {
#line 369 "complexity.m"
      transform_hlds__complexity__V_218_218 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 369 "complexity.m"
      MR_hl_field(MR_mktag(3), transform_hlds__complexity__V_218_218, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 369 "complexity.m"
      MR_hl_field(MR_mktag(3), transform_hlds__complexity__V_218_218, 1) = ((MR_Box) (transform_hlds__complexity__V_219_219));
#line 369 "complexity.m"
      MR_hl_field(MR_mktag(3), transform_hlds__complexity__V_218_218, 2) = ((MR_Box) ((MR_Integer) 0));
#line 369 "complexity.m"
      MR_hl_field(MR_mktag(3), transform_hlds__complexity__V_218_218, 3) = ((MR_Box) (transform_hlds__complexity__TypeCtor_63));
#line 369 "complexity.m"
    }
#line 369 "complexity.m"
    {
#line 369 "complexity.m"
      transform_hlds__complexity__V_217_217 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 369 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__V_217_217, 0) = ((MR_Box) (transform_hlds__complexity__V_218_218));
#line 369 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__V_217_217, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 369 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__V_217_217, 2) = ((MR_Box) (transform_hlds__complexity__OrigGoal_21));
#line 369 "complexity.m"
    }
#line 370 "complexity.m"
    {
#line 370 "complexity.m"
      transform_hlds__complexity__V_216_216 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 370 "complexity.m"
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_216_216, 0) = ((MR_Box) (transform_hlds__complexity__V_217_217));
#line 370 "complexity.m"
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_216_216, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 370 "complexity.m"
    }
#line 368 "complexity.m"
    {
#line 368 "complexity.m"
      transform_hlds__complexity__SwitchArms_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 368 "complexity.m"
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__SwitchArms_64, 0) = ((MR_Box) (transform_hlds__complexity__V_210_210));
#line 368 "complexity.m"
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__SwitchArms_64, 1) = ((MR_Box) (transform_hlds__complexity__V_216_216));
#line 368 "complexity.m"
    }
#line 372 "complexity.m"
    {
#line 372 "complexity.m"
      transform_hlds__complexity__SwitchExpr_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 372 "complexity.m"
      MR_hl_field(MR_mktag(3), transform_hlds__complexity__SwitchExpr_65, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 372 "complexity.m"
      MR_hl_field(MR_mktag(3), transform_hlds__complexity__SwitchExpr_65, 1) = ((MR_Box) (transform_hlds__complexity__IsActiveVar_29));
#line 372 "complexity.m"
      MR_hl_field(MR_mktag(3), transform_hlds__complexity__SwitchExpr_65, 2) = ((MR_Box) ((MR_Integer) 1));
#line 372 "complexity.m"
      MR_hl_field(MR_mktag(3), transform_hlds__complexity__SwitchExpr_65, 3) = ((MR_Box) (transform_hlds__complexity__SwitchArms_64));
#line 372 "complexity.m"
    }
#line 373 "complexity.m"
    {
#line 373 "complexity.m"
      hlds__hlds_goal__goal_info_init_6_p_0(transform_hlds__complexity__OrigNonLocals_24, transform_hlds__complexity__OrigInstMapDelta_26, transform_hlds__complexity__Detism_15, (MR_Integer) 2, transform_hlds__complexity__Context_22, &transform_hlds__complexity__SwitchGoalInfo_66);
    }
#line 375 "complexity.m"
    {
#line 375 "complexity.m"
      transform_hlds__complexity__SwitchGoal_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 375 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__SwitchGoal_67, 0) = ((MR_Box) (transform_hlds__complexity__SwitchExpr_65));
#line 375 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__SwitchGoal_67, 1) = ((MR_Box) (transform_hlds__complexity__SwitchGoalInfo_66));
#line 375 "complexity.m"
    }
#line 377 "complexity.m"
    {
#line 377 "complexity.m"
      transform_hlds__complexity__V_228_228 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 377 "complexity.m"
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_228_228, 0) = ((MR_Box) (transform_hlds__complexity__SwitchGoal_67));
#line 377 "complexity.m"
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_228_228, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 377 "complexity.m"
    }
#line 377 "complexity.m"
    {
#line 377 "complexity.m"
      transform_hlds__complexity__V_227_227 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 377 "complexity.m"
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_227_227, 0) = ((MR_Box) (transform_hlds__complexity__IsActiveGoal_41));
#line 377 "complexity.m"
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_227_227, 1) = ((MR_Box) (transform_hlds__complexity__V_228_228));
#line 377 "complexity.m"
    }
#line 377 "complexity.m"
    {
#line 377 "complexity.m"
      transform_hlds__complexity__GoalExpr_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 377 "complexity.m"
      MR_hl_field(MR_mktag(3), transform_hlds__complexity__GoalExpr_68, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 377 "complexity.m"
      MR_hl_field(MR_mktag(3), transform_hlds__complexity__GoalExpr_68, 1) = ((MR_Box) ((MR_Integer) 0));
#line 377 "complexity.m"
      MR_hl_field(MR_mktag(3), transform_hlds__complexity__GoalExpr_68, 2) = ((MR_Box) (transform_hlds__complexity__V_227_227));
#line 377 "complexity.m"
    }
#line 378 "complexity.m"
    {
#line 378 "complexity.m"
      hlds__hlds_goal__goal_info_init_6_p_0(transform_hlds__complexity__OrigNonLocals_24, transform_hlds__complexity__OrigInstMapDelta_26, transform_hlds__complexity__Detism_15, (MR_Integer) 2, transform_hlds__complexity__Context_22, &transform_hlds__complexity__GoalInfo_69);
    }
#line 380 "complexity.m"
    {
#line 380 "complexity.m"
      transform_hlds__complexity__Goal_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 380 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__Goal_70, 0) = ((MR_Box) (transform_hlds__complexity__GoalExpr_68));
#line 380 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__Goal_70, 1) = ((MR_Box) (transform_hlds__complexity__GoalInfo_69));
#line 380 "complexity.m"
    }
#line 382 "complexity.m"
    {
#line 382 "complexity.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__complexity__Goal_70, transform_hlds__complexity__STATE_VARIABLE_ProcInfo_83_83, transform_hlds__complexity__STATE_VARIABLE_ProcInfo_76);
    }
#line 384 "complexity.m"
    {
#line 384 "complexity.m"
      mercury__assoc_list__values_2_p_0((MR_Word) &transform_hlds__complexity_scalar_common_1[0], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_complexity_arg_info_0, transform_hlds__complexity__VarInfos_30, &transform_hlds__complexity__Infos_71);
    }
#line 385 "complexity.m"
    {
#line 385 "complexity.m"
      transform_hlds__complexity__ComplexityInfo_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 385 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__ComplexityInfo_72, 0) = ((MR_Box) (transform_hlds__complexity__ProcNum_10));
#line 385 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__ComplexityInfo_72, 1) = ((MR_Box) (transform_hlds__complexity__FullName_11));
#line 385 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__ComplexityInfo_72, 2) = ((MR_Box) (transform_hlds__complexity__Infos_71));
#line 385 "complexity.m"
    }
#line 386 "complexity.m"
    {
#line 386 "complexity.m"
      hlds__hlds_module__module_info_get_complexity_proc_infos_2_p_0(transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_84_84, &transform_hlds__complexity__ComplexityInfos0_73);
    }
#line 387 "complexity.m"
    {
#line 387 "complexity.m"
      transform_hlds__complexity__ComplexityInfos_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 387 "complexity.m"
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__ComplexityInfos_74, 0) = ((MR_Box) (transform_hlds__complexity__ComplexityInfo_72));
#line 387 "complexity.m"
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__ComplexityInfos_74, 1) = ((MR_Box) (transform_hlds__complexity__ComplexityInfos0_73));
#line 387 "complexity.m"
    }
#line 388 "complexity.m"
    {
#line 388 "complexity.m"
      hlds__hlds_module__module_info_set_complexity_proc_infos_3_p_0(transform_hlds__complexity__ComplexityInfos_74, transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_84_84, transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_78);
#line 388 "complexity.m"
      return;
    }
#line 259 "complexity.m"
  }
#line 254 "complexity.m"
}

#line 250 "complexity.m"
static MR_String MR_CALL 
transform_hlds__complexity__slot_var_name_0_f_0(void)
#line 250 "complexity.m"
{
#line 252 "complexity.m"
  {
#line 252 "complexity.m"
    MR_bool transform_hlds__complexity__succeeded;

#line 252 "complexity.m"
    return (MR_String) "SlotVar";
#line 252 "complexity.m"
  }
#line 250 "complexity.m"
}

#line 131 "complexity.m"
static MR_bool MR_CALL 
transform_hlds__complexity__read_spec_file_lines_8_p_0_1(
#line 131 "complexity.m"
  MR_Box transform_hlds__complexity__closure_arg,
#line 131 "complexity.m"
  MR_Box transform_hlds__complexity__wrapper_arg_1)
#line 131 "complexity.m"
{
#line 131 "complexity.m"
  {
#line 131 "complexity.m"
    MR_bool transform_hlds__complexity__succeeded;
#line 131 "complexity.m"
    MR_Box transform_hlds__complexity__closure = transform_hlds__complexity__closure_arg;

#line 131 "complexity.m"
    {
#line 131 "complexity.m"
      return transform_hlds__complexity__succeeded = transform_hlds__complexity__IntroducedFrom__pred__read_spec_file_lines__131__1_2_p_0(((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__complexity__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) transform_hlds__complexity__wrapper_arg_1));
    }
#line 131 "complexity.m"
    return transform_hlds__complexity__succeeded;
#line 131 "complexity.m"
  }
#line 131 "complexity.m"
}

#line 114 "complexity.m"
static void MR_CALL 
transform_hlds__complexity__read_spec_file_lines_8_p_0(
#line 114 "complexity.m"
  MR_Word transform_hlds__complexity__Stream_9,
#line 114 "complexity.m"
  MR_Integer transform_hlds__complexity__CurLineNum_10,
#line 114 "complexity.m"
  MR_Integer * transform_hlds__complexity__NumLines_11,
#line 114 "complexity.m"
  MR_Word * transform_hlds__complexity__MaybeError_12,
#line 114 "complexity.m"
  MR_Word transform_hlds__complexity__STATE_VARIABLE_ProcMap_0_21,
#line 114 "complexity.m"
  MR_Word * transform_hlds__complexity__STATE_VARIABLE_ProcMap_22)
#line 114 "complexity.m"
{
#line 119 "complexity.m"
  while (MR_TRUE)
#line 119 "complexity.m"
    {
#line 119 "complexity.m"
      /* tailcall optimized into a loop */
#line 119 "complexity.m"
      {
#line 119 "complexity.m"
        MR_bool transform_hlds__complexity__succeeded;
#line 119 "complexity.m"
        MR_Word transform_hlds__complexity__ResLine_15;

#line 120 "complexity.m"
        {
#line 120 "complexity.m"
          mercury__io__read_line_4_p_0(transform_hlds__complexity__Stream_9, &transform_hlds__complexity__ResLine_15);
        }
#line 125 "complexity.m"
#line 125 "complexity.m"
        switch (MR_tag((MR_Word) transform_hlds__complexity__ResLine_15)) {
#line 125 "complexity.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 125 "complexity.m"
          case (MR_Integer) 0:
#line 122 "complexity.m"
            {
#line 123 "complexity.m"
              *transform_hlds__complexity__NumLines_11 = transform_hlds__complexity__CurLineNum_10;
#line 124 "complexity.m"
              *transform_hlds__complexity__MaybeError_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 122 "complexity.m"
              *transform_hlds__complexity__STATE_VARIABLE_ProcMap_22 = transform_hlds__complexity__STATE_VARIABLE_ProcMap_0_21;
#line 122 "complexity.m"
            }
#line 125 "complexity.m"
            break;
#line 125 "complexity.m"
          case (MR_Integer) 1:
#line 130 "complexity.m"
            {
#line 130 "complexity.m"
              MR_Word transform_hlds__complexity__Chars0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__complexity__ResLine_15, (MR_Integer) 0)));
#line 130 "complexity.m"
              MR_Word transform_hlds__complexity__Chars_19;
#line 130 "complexity.m"
              MR_String transform_hlds__complexity__ProcName_20;
#line 131 "complexity.m"
              MR_Word transform_hlds__complexity__V_18_18;
#line 136 "complexity.m"
              MR_Word transform_hlds__complexity__STATE_VARIABLE_ProcMap_28_28;

#line 131 "complexity.m"
              {
#line 131 "complexity.m"
                mercury__list__filter_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, (MR_Word) &transform_hlds__complexity_scalar_common_4[0], transform_hlds__complexity__Chars0_17, &transform_hlds__complexity__V_18_18, &transform_hlds__complexity__Chars_19);
              }
#line 132 "complexity.m"
              {
#line 132 "complexity.m"
                mercury__string__from_char_list_2_p_0(transform_hlds__complexity__Chars_19, &transform_hlds__complexity__ProcName_20);
              }
#line 133 "complexity.m"
              {
#line 133 "complexity.m"
                transform_hlds__complexity__succeeded = mercury__map__insert_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (transform_hlds__complexity__ProcName_20)), ((MR_Box) (transform_hlds__complexity__CurLineNum_10)), transform_hlds__complexity__STATE_VARIABLE_ProcMap_0_21, &transform_hlds__complexity__STATE_VARIABLE_ProcMap_28_28);
              }
#line 136 "complexity.m"
              if (transform_hlds__complexity__succeeded)
#line 134 "complexity.m"
                {
#line 134 "complexity.m"
                  MR_Integer transform_hlds__complexity__V_29_29 = (transform_hlds__complexity__CurLineNum_10 + (MR_Integer) 1);

#line 134 "complexity.m"
                  /* direct tailcall eliminated */
#line 134 "complexity.m"
                  {
#line 134 "complexity.m"
                    MR_Integer transform_hlds__complexity__CurLineNum__tmp_copy_10 = transform_hlds__complexity__V_29_29;
#line 134 "complexity.m"
                    MR_Word transform_hlds__complexity__STATE_VARIABLE_ProcMap_0__tmp_copy_21 = transform_hlds__complexity__STATE_VARIABLE_ProcMap_28_28;

#line 134 "complexity.m"
                    transform_hlds__complexity__STATE_VARIABLE_ProcMap_0_21 = transform_hlds__complexity__STATE_VARIABLE_ProcMap_0__tmp_copy_21;
#line 134 "complexity.m"
                    transform_hlds__complexity__CurLineNum_10 = transform_hlds__complexity__CurLineNum__tmp_copy_10;
#line 134 "complexity.m"
                  }
#line 134 "complexity.m"
                  continue;
#line 134 "complexity.m"
                }
#line 136 "complexity.m"
              else
#line 137 "complexity.m"
                {
#line 137 "complexity.m"
                  MR_String transform_hlds__complexity__V_33_33;

#line 137 "complexity.m"
                  *transform_hlds__complexity__NumLines_11 = transform_hlds__complexity__CurLineNum_10;
#line 138 "complexity.m"
                  {
#line 138 "complexity.m"
                    transform_hlds__complexity__V_33_33 = mercury__string__f_43_43_2_f_0((MR_String) "repeated line: ", transform_hlds__complexity__ProcName_20);
                  }
#line 138 "complexity.m"
                  {
#line 138 "complexity.m"
                    MR_Word base;
#line 138 "complexity.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 138 "complexity.m"
                    *transform_hlds__complexity__MaybeError_12 = base;
#line 138 "complexity.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__complexity__V_33_33));
#line 138 "complexity.m"
                  }
#line 137 "complexity.m"
                  *transform_hlds__complexity__STATE_VARIABLE_ProcMap_22 = transform_hlds__complexity__STATE_VARIABLE_ProcMap_0_21;
#line 137 "complexity.m"
                }
#line 130 "complexity.m"
            }
#line 125 "complexity.m"
            break;
#line 125 "complexity.m"
          case (MR_Integer) 2:
#line 126 "complexity.m"
            {
#line 126 "complexity.m"
              MR_Word transform_hlds__complexity__Error_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__complexity__ResLine_15, (MR_Integer) 0)));
#line 126 "complexity.m"
              MR_String transform_hlds__complexity__V_35_35;

#line 127 "complexity.m"
              *transform_hlds__complexity__NumLines_11 = transform_hlds__complexity__CurLineNum_10;
#line 128 "complexity.m"
              {
#line 128 "complexity.m"
                transform_hlds__complexity__V_35_35 = mercury__io__error_message_1_f_0(transform_hlds__complexity__Error_16);
              }
#line 128 "complexity.m"
              {
#line 128 "complexity.m"
                MR_Word base;
#line 128 "complexity.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 128 "complexity.m"
                *transform_hlds__complexity__MaybeError_12 = base;
#line 128 "complexity.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__complexity__V_35_35));
#line 128 "complexity.m"
              }
#line 126 "complexity.m"
              *transform_hlds__complexity__STATE_VARIABLE_ProcMap_22 = transform_hlds__complexity__STATE_VARIABLE_ProcMap_0_21;
#line 126 "complexity.m"
            }
#line 125 "complexity.m"
            break;
#line 125 "complexity.m"
        }
#line 119 "complexity.m"
      }
#line 119 "complexity.m"
      break;
#line 119 "complexity.m"
    }
#line 114 "complexity.m"
}

#line 52 "complexity.m"
void MR_CALL 
transform_hlds__complexity__complexity_process_proc_msg_7_p_0(
#line 52 "complexity.m"
  MR_Integer transform_hlds__complexity__NumProcs_8,
#line 52 "complexity.m"
  MR_Word transform_hlds__complexity__ProcMap_9,
#line 52 "complexity.m"
  MR_Word transform_hlds__complexity__PredProcId_10,
#line 52 "complexity.m"
  MR_Word transform_hlds__complexity__STATE_VARIABLE_ProcInfo_0_21,
#line 52 "complexity.m"
  MR_Word * transform_hlds__complexity__STATE_VARIABLE_ProcInfo_22,
#line 52 "complexity.m"
  MR_Word transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_0_23,
#line 52 "complexity.m"
  MR_Word * transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_24)
#line 52 "complexity.m"
{
#line 165 "complexity.m"
  {
#line 165 "complexity.m"
    MR_bool transform_hlds__complexity__succeeded;
#line 165 "complexity.m"
    MR_Word transform_hlds__complexity__PredId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__complexity__PredProcId_10, (MR_Integer) 0)));
#line 165 "complexity.m"
    MR_Integer transform_hlds__complexity__ProcId_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__complexity__PredProcId_10, (MR_Integer) 1)));
#line 165 "complexity.m"
    MR_String transform_hlds__complexity__FullName_36;
#line 3477 "transform_hlds.complexity.c"
    MR_Integer transform_hlds__complexity__ProcNum_37;
#line 156 "complexity.m"
    MR_Box transform_hlds__complexity__conv0_ProcNum_37;

#line 155 "complexity.m"
    {
#line 155 "complexity.m"
      transform_hlds__complexity__FullName_36 = transform_hlds__complexity__complexity_proc_name_3_f_0(transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_0_23, transform_hlds__complexity__PredId_13, transform_hlds__complexity__ProcId_14);
    }
#line 156 "complexity.m"
    {
#line 156 "complexity.m"
      transform_hlds__complexity__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, transform_hlds__complexity__ProcMap_9, ((MR_Box) (transform_hlds__complexity__FullName_36)), &transform_hlds__complexity__conv0_ProcNum_37);
    }
#line 156 "complexity.m"
    if (transform_hlds__complexity__succeeded)
#line 156 "complexity.m"
      {
#line 156 "complexity.m"
        transform_hlds__complexity__ProcNum_37 = ((MR_Integer) transform_hlds__complexity__conv0_ProcNum_37);
#line 156 "complexity.m"
        transform_hlds__complexity__succeeded = MR_TRUE;
#line 156 "complexity.m"
      }
#line 3502 "transform_hlds.complexity.c"
    if (transform_hlds__complexity__succeeded)
#line 3504 "transform_hlds.complexity.c"
      {
#line 3506 "transform_hlds.complexity.c"
        MR_String transform_hlds__complexity__FullName_17;
#line 3508 "transform_hlds.complexity.c"
        MR_Word transform_hlds__complexity__Globals_18;
#line 3510 "transform_hlds.complexity.c"
        MR_Word transform_hlds__complexity__Verbose_19;

#line 171 "complexity.m"
        {
#line 171 "complexity.m"
          transform_hlds__complexity__FullName_17 = transform_hlds__complexity__complexity_proc_name_3_f_0(transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_0_23, transform_hlds__complexity__PredId_13, transform_hlds__complexity__ProcId_14);
        }
#line 172 "complexity.m"
        {
#line 172 "complexity.m"
          hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_0_23, &transform_hlds__complexity__Globals_18);
        }
#line 173 "complexity.m"
        {
#line 173 "complexity.m"
          libs__globals__lookup_bool_option_3_p_0(transform_hlds__complexity__Globals_18, (MR_Integer) 45, &transform_hlds__complexity__Verbose_19);
        }
#line 181 "complexity.m"
#line 181 "complexity.m"
        switch (transform_hlds__complexity__Verbose_19) {
#line 181 "complexity.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 181 "complexity.m"
          case (MR_Integer) 0:
#line 182 "complexity.m"
            {
#line 182 "complexity.m"
            }
#line 181 "complexity.m"
            break;
#line 181 "complexity.m"
          case (MR_Integer) 1:
#line 176 "complexity.m"
            {
#line 177 "complexity.m"
              {
#line 177 "complexity.m"
                hlds__passes_aux__write_proc_progress_message_6_p_0((MR_String) "% Applying complexity experiment transformation to ", transform_hlds__complexity__PredId_13, transform_hlds__complexity__ProcId_14, transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_0_23);
              }
#line 176 "complexity.m"
            }
#line 181 "complexity.m"
            break;
#line 181 "complexity.m"
        }
#line 184 "complexity.m"
        {
#line 184 "complexity.m"
          transform_hlds__complexity__complexity_process_proc_8_p_0(transform_hlds__complexity__NumProcs_8, transform_hlds__complexity__ProcNum_37, transform_hlds__complexity__FullName_17, transform_hlds__complexity__PredId_13, transform_hlds__complexity__STATE_VARIABLE_ProcInfo_0_21, transform_hlds__complexity__STATE_VARIABLE_ProcInfo_22, transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_0_23, transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_24);
#line 184 "complexity.m"
          return;
        }
#line 3563 "transform_hlds.complexity.c"
      }
#line 3565 "transform_hlds.complexity.c"
    else
#line 3567 "transform_hlds.complexity.c"
      {
#line 187 "complexity.m"
        *transform_hlds__complexity__STATE_VARIABLE_ProcInfo_22 = transform_hlds__complexity__STATE_VARIABLE_ProcInfo_0_21;
#line 187 "complexity.m"
        *transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_24 = transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_0_23;
#line 3573 "transform_hlds.complexity.c"
      }
#line 165 "complexity.m"
  }
#line 52 "complexity.m"
}

#line 48 "complexity.m"
MR_String MR_CALL 
transform_hlds__complexity__complexity_proc_name_3_f_0(
#line 48 "complexity.m"
  MR_Word transform_hlds__complexity__ModuleInfo_5,
#line 48 "complexity.m"
  MR_Word transform_hlds__complexity__PredId_6,
#line 48 "complexity.m"
  MR_Integer transform_hlds__complexity__ProcId_7)
#line 48 "complexity.m"
{
#line 144 "complexity.m"
  {
#line 144 "complexity.m"
    MR_bool transform_hlds__complexity__succeeded;
#line 144 "complexity.m"
    MR_String transform_hlds__complexity__FullName_8;
#line 144 "complexity.m"
    MR_Word transform_hlds__complexity__ModuleSymName_9;
#line 144 "complexity.m"
    MR_Word transform_hlds__complexity__PredInfo_10;
#line 144 "complexity.m"
    MR_String transform_hlds__complexity__PredName_11;
#line 144 "complexity.m"
    MR_Word transform_hlds__complexity__QualifiedName_12;
#line 144 "complexity.m"
    MR_Integer transform_hlds__complexity__Arity_13;
#line 144 "complexity.m"
    MR_String transform_hlds__complexity__NameAndArity_14;
#line 144 "complexity.m"
    MR_Integer transform_hlds__complexity__ProcIdInt_15;
#line 144 "complexity.m"
    MR_Word transform_hlds__complexity__V_16_16;
#line 144 "complexity.m"
    MR_String transform_hlds__complexity__V_17_17;
#line 144 "complexity.m"
    MR_String transform_hlds__complexity__V_19_19;

#line 145 "complexity.m"
    {
#line 145 "complexity.m"
      hlds__hlds_module__module_info_get_name_2_p_0(transform_hlds__complexity__ModuleInfo_5, &transform_hlds__complexity__ModuleSymName_9);
    }
#line 146 "complexity.m"
    {
#line 146 "complexity.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__complexity__ModuleInfo_5, transform_hlds__complexity__PredId_6, &transform_hlds__complexity__PredInfo_10);
    }
#line 147 "complexity.m"
    {
#line 147 "complexity.m"
      transform_hlds__complexity__PredName_11 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__complexity__PredInfo_10);
    }
#line 148 "complexity.m"
    {
#line 148 "complexity.m"
      transform_hlds__complexity__QualifiedName_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 148 "complexity.m"
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__QualifiedName_12, 0) = ((MR_Box) (transform_hlds__complexity__ModuleSymName_9));
#line 148 "complexity.m"
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__QualifiedName_12, 1) = ((MR_Box) (transform_hlds__complexity__PredName_11));
#line 148 "complexity.m"
    }
#line 149 "complexity.m"
    {
#line 149 "complexity.m"
      transform_hlds__complexity__Arity_13 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(transform_hlds__complexity__PredInfo_10);
    }
#line 150 "complexity.m"
    {
#line 150 "complexity.m"
      transform_hlds__complexity__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 150 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__V_16_16, 0) = ((MR_Box) (transform_hlds__complexity__QualifiedName_12));
#line 150 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__V_16_16, 1) = ((MR_Box) (transform_hlds__complexity__Arity_13));
#line 150 "complexity.m"
    }
#line 150 "complexity.m"
    {
#line 150 "complexity.m"
      transform_hlds__complexity__NameAndArity_14 = parse_tree__prog_out__sym_name_and_arity_to_string_1_f_0(transform_hlds__complexity__V_16_16);
    }
#line 151 "complexity.m"
    {
#line 151 "complexity.m"
      hlds__hlds_pred__proc_id_to_int_2_p_0(transform_hlds__complexity__ProcId_7, &transform_hlds__complexity__ProcIdInt_15);
    }
#line 152 "complexity.m"
    {
#line 152 "complexity.m"
      transform_hlds__complexity__V_19_19 = mercury__string__int_to_string_1_f_0(transform_hlds__complexity__ProcIdInt_15);
    }
#line 152 "complexity.m"
    {
#line 152 "complexity.m"
      transform_hlds__complexity__V_17_17 = mercury__string__f_43_43_2_f_0((MR_String) "-", transform_hlds__complexity__V_19_19);
    }
#line 152 "complexity.m"
    {
#line 152 "complexity.m"
      return transform_hlds__complexity__FullName_8 = mercury__string__f_43_43_2_f_0(transform_hlds__complexity__NameAndArity_14, transform_hlds__complexity__V_17_17);
    }
#line 144 "complexity.m"
    return transform_hlds__complexity__FullName_8;
#line 144 "complexity.m"
  }
#line 48 "complexity.m"
}

#line 42 "complexity.m"
MR_Word MR_CALL 
transform_hlds__complexity__is_in_complexity_proc_map_4_f_0(
#line 42 "complexity.m"
  MR_Word transform_hlds__complexity__ProcMap_6,
#line 42 "complexity.m"
  MR_Word transform_hlds__complexity__ModuleInfo_7,
#line 42 "complexity.m"
  MR_Word transform_hlds__complexity__PredId_8,
#line 42 "complexity.m"
  MR_Integer transform_hlds__complexity__ProcId_9)
#line 42 "complexity.m"
{
#line 154 "complexity.m"
  {
#line 154 "complexity.m"
    MR_bool transform_hlds__complexity__succeeded;
#line 154 "complexity.m"
    MR_Word transform_hlds__complexity__IsInMap_10;
#line 154 "complexity.m"
    MR_String transform_hlds__complexity__FullName_11;
#line 158 "complexity.m"
    MR_Integer transform_hlds__complexity__ProcNum_12;
#line 156 "complexity.m"
    MR_Box transform_hlds__complexity__conv0_ProcNum_12;

#line 155 "complexity.m"
    {
#line 155 "complexity.m"
      transform_hlds__complexity__FullName_11 = transform_hlds__complexity__complexity_proc_name_3_f_0(transform_hlds__complexity__ModuleInfo_7, transform_hlds__complexity__PredId_8, transform_hlds__complexity__ProcId_9);
    }
#line 156 "complexity.m"
    {
#line 156 "complexity.m"
      transform_hlds__complexity__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, transform_hlds__complexity__ProcMap_6, ((MR_Box) (transform_hlds__complexity__FullName_11)), &transform_hlds__complexity__conv0_ProcNum_12);
    }
#line 156 "complexity.m"
    if (transform_hlds__complexity__succeeded)
#line 156 "complexity.m"
      {
#line 156 "complexity.m"
        transform_hlds__complexity__ProcNum_12 = ((MR_Integer) transform_hlds__complexity__conv0_ProcNum_12);
#line 156 "complexity.m"
        transform_hlds__complexity__succeeded = MR_TRUE;
#line 156 "complexity.m"
      }
#line 158 "complexity.m"
    if (transform_hlds__complexity__succeeded)
#line 157 "complexity.m"
      {
#line 157 "complexity.m"
        transform_hlds__complexity__IsInMap_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 157 "complexity.m"
        MR_hl_field(MR_mktag(1), transform_hlds__complexity__IsInMap_10, 0) = ((MR_Box) (transform_hlds__complexity__ProcNum_12));
#line 157 "complexity.m"
      }
#line 158 "complexity.m"
    else
#line 159 "complexity.m"
      transform_hlds__complexity__IsInMap_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 154 "complexity.m"
    return transform_hlds__complexity__IsInMap_10;
#line 154 "complexity.m"
  }
#line 42 "complexity.m"
}

#line 35 "complexity.m"
void MR_CALL 
transform_hlds__complexity__read_spec_file_4_p_0(
#line 35 "complexity.m"
  MR_String transform_hlds__complexity__FileName_5,
#line 35 "complexity.m"
  MR_Word * transform_hlds__complexity__MaybeNumLinesProcMap_6)
#line 35 "complexity.m"
{
#line 96 "complexity.m"
  {
#line 96 "complexity.m"
    MR_bool transform_hlds__complexity__succeeded;
#line 96 "complexity.m"
    MR_Word transform_hlds__complexity__ResStream_8;

#line 97 "complexity.m"
    {
#line 97 "complexity.m"
      mercury__io__open_input_4_p_0(transform_hlds__complexity__FileName_5, &transform_hlds__complexity__ResStream_8);
    }
#line 101 "complexity.m"
    if (((MR_tag((MR_Word) transform_hlds__complexity__ResStream_8)) == (MR_mktag((MR_Integer) 1))))
#line 99 "complexity.m"
      {
#line 99 "complexity.m"
        MR_Word transform_hlds__complexity__Error_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__complexity__ResStream_8, (MR_Integer) 0)));
#line 99 "complexity.m"
        MR_String transform_hlds__complexity__V_22_22;

#line 100 "complexity.m"
        {
#line 100 "complexity.m"
          transform_hlds__complexity__V_22_22 = mercury__io__error_message_1_f_0(transform_hlds__complexity__Error_9);
        }
#line 100 "complexity.m"
        {
#line 100 "complexity.m"
          MR_Word base;
#line 100 "complexity.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 100 "complexity.m"
          *transform_hlds__complexity__MaybeNumLinesProcMap_6 = base;
#line 100 "complexity.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__complexity__V_22_22));
#line 100 "complexity.m"
        }
#line 99 "complexity.m"
      }
#line 101 "complexity.m"
    else
#line 102 "complexity.m"
      {
#line 102 "complexity.m"
        MR_Word transform_hlds__complexity__Stream_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__complexity__ResStream_8, (MR_Integer) 0)));
#line 102 "complexity.m"
        MR_Integer transform_hlds__complexity__NumLines_11;
#line 102 "complexity.m"
        MR_Word transform_hlds__complexity__MaybeError_12;
#line 102 "complexity.m"
        MR_Word transform_hlds__complexity__ProcMap_13;
#line 102 "complexity.m"
        MR_Word transform_hlds__complexity__V_19_19;

#line 104 "complexity.m"
        {
#line 104 "complexity.m"
          transform_hlds__complexity__V_19_19 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0);
        }
#line 103 "complexity.m"
        {
#line 103 "complexity.m"
          transform_hlds__complexity__read_spec_file_lines_8_p_0(transform_hlds__complexity__Stream_10, (MR_Integer) 0, &transform_hlds__complexity__NumLines_11, &transform_hlds__complexity__MaybeError_12, transform_hlds__complexity__V_19_19, &transform_hlds__complexity__ProcMap_13);
        }
#line 108 "complexity.m"
        if ((transform_hlds__complexity__MaybeError_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 109 "complexity.m"
          {
#line 109 "complexity.m"
            MR_Word transform_hlds__complexity__V_21_21;

#line 110 "complexity.m"
            {
#line 110 "complexity.m"
              transform_hlds__complexity__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 110 "complexity.m"
              MR_hl_field(MR_mktag(0), transform_hlds__complexity__V_21_21, 0) = ((MR_Box) (transform_hlds__complexity__NumLines_11));
#line 110 "complexity.m"
              MR_hl_field(MR_mktag(0), transform_hlds__complexity__V_21_21, 1) = ((MR_Box) (transform_hlds__complexity__ProcMap_13));
#line 110 "complexity.m"
            }
#line 110 "complexity.m"
            {
#line 110 "complexity.m"
              MR_Word base;
#line 110 "complexity.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 110 "complexity.m"
              *transform_hlds__complexity__MaybeNumLinesProcMap_6 = base;
#line 110 "complexity.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__complexity__V_21_21));
#line 110 "complexity.m"
            }
#line 109 "complexity.m"
          }
#line 108 "complexity.m"
        else
#line 106 "complexity.m"
          {
#line 106 "complexity.m"
            MR_String transform_hlds__complexity__Msg_14 = ((MR_String) (MR_hl_field(MR_mktag(1), transform_hlds__complexity__MaybeError_12, (MR_Integer) 0)));

#line 107 "complexity.m"
            {
#line 107 "complexity.m"
              MR_Word base;
#line 107 "complexity.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 107 "complexity.m"
              *transform_hlds__complexity__MaybeNumLinesProcMap_6 = base;
#line 107 "complexity.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__complexity__Msg_14));
#line 107 "complexity.m"
            }
#line 106 "complexity.m"
          }
#line 102 "complexity.m"
      }
#line 96 "complexity.m"
  }
#line 35 "complexity.m"
}

void mercury__transform_hlds__complexity__init(void)
{
}

void mercury__transform_hlds__complexity__init_type_tables(void)
{
}

void mercury__transform_hlds__complexity__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module transform_hlds.complexity. */
