/*
** Automatically generated from `complexity.m'
** by the Mercury compiler,
** version rotd-2015-09-15
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
#include "hlds.status.mih"
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
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 581 "complexity.m"
static MR_bool MR_CALL 
transform_hlds__complexity__IntroducedFrom__pred__make_type_info_var__581__1_2_p_0(
#line 581 "complexity.m"
  MR_Word transform_hlds__complexity__PredInfo0_17,
#line 581 "complexity.m"
  MR_Word transform_hlds__complexity__PredInfo_20);

#line 130 "complexity.m"
static MR_bool MR_CALL 
transform_hlds__complexity__IntroducedFrom__pred__read_spec_file_lines__130__1_2_p_0(
#line 130 "complexity.m"
  MR_Char transform_hlds__complexity__HeadVar__1_27,
#line 130 "complexity.m"
  MR_Char transform_hlds__complexity__HeadVar__2_36);

#line 581 "complexity.m"
static MR_bool MR_CALL 
transform_hlds__complexity__make_type_info_var_9_p_0_1(
#line 581 "complexity.m"
  MR_Box transform_hlds__complexity__closure_arg);

#line 569 "complexity.m"
static void MR_CALL 
transform_hlds__complexity__make_type_info_var_9_p_0(
#line 569 "complexity.m"
  MR_Word transform_hlds__complexity__Type_10,
#line 569 "complexity.m"
  MR_Word transform_hlds__complexity__Context_11,
#line 569 "complexity.m"
  MR_Word transform_hlds__complexity__PredId_12,
#line 569 "complexity.m"
  MR_Word transform_hlds__complexity__STATE_VARIABLE_ProcInfo_0_21,
#line 569 "complexity.m"
  MR_Word * transform_hlds__complexity__STATE_VARIABLE_ProcInfo_22,
#line 569 "complexity.m"
  MR_Word transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_0_23,
#line 569 "complexity.m"
  MR_Word * transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_24,
#line 569 "complexity.m"
  MR_Word * transform_hlds__complexity__TypeInfoVar_15,
#line 569 "complexity.m"
  MR_Word * transform_hlds__complexity__TypeInfoGoals_16);

#line 560 "complexity.m"
static MR_Word MR_CALL 
transform_hlds__complexity__is_active_type_0_f_0(void);

#line 539 "complexity.m"
static void MR_CALL 
transform_hlds__complexity__allocate_slot_numbers_cl_3_p_0(
#line 539 "complexity.m"
  MR_Word transform_hlds__complexity__HeadVar__1_1,
#line 539 "complexity.m"
  MR_Integer transform_hlds__complexity__Offset_2,
#line 539 "complexity.m"
  MR_Word * transform_hlds__complexity__HeadVar__3_3);

#line 509 "complexity.m"
static void MR_CALL 
transform_hlds__complexity__classify_args_6_p_0(
#line 509 "complexity.m"
  MR_Word transform_hlds__complexity__HeadVar__1_1,
#line 509 "complexity.m"
  MR_Word transform_hlds__complexity__HeadVar__2_2,
#line 509 "complexity.m"
  MR_Word transform_hlds__complexity__ModuleInfo_3,
#line 509 "complexity.m"
  MR_Word transform_hlds__complexity__VarSet_4,
#line 509 "complexity.m"
  MR_Word transform_hlds__complexity__VarTypes_5,
#line 509 "complexity.m"
  MR_Word * transform_hlds__complexity__HeadVar__6_6);

#line 491 "complexity.m"
static void MR_CALL 
transform_hlds__complexity__complexity_generate_foreign_proc_9_p_0(
#line 491 "complexity.m"
  MR_String transform_hlds__complexity__PredName_10,
#line 491 "complexity.m"
  MR_Word transform_hlds__complexity__Detism_11,
#line 491 "complexity.m"
  MR_Word transform_hlds__complexity__Args_12,
#line 491 "complexity.m"
  MR_Word transform_hlds__complexity__ExtraArgs_13,
#line 491 "complexity.m"
  MR_String transform_hlds__complexity__Code_14,
#line 491 "complexity.m"
  MR_Word transform_hlds__complexity__BoundVars_15,
#line 491 "complexity.m"
  MR_Word transform_hlds__complexity__ModuleInfo_16,
#line 491 "complexity.m"
  MR_Word transform_hlds__complexity__Context_17,
#line 491 "complexity.m"
  MR_Word * transform_hlds__complexity__Goal_18);

#line 480 "complexity.m"
static void MR_CALL 
transform_hlds__complexity__generate_new_var_5_p_0(
#line 480 "complexity.m"
  MR_String transform_hlds__complexity__Name_6,
#line 480 "complexity.m"
  MR_Word transform_hlds__complexity__Type_7,
#line 480 "complexity.m"
  MR_Word transform_hlds__complexity__STATE_VARIABLE_ProcInfo_0_14,
#line 480 "complexity.m"
  MR_Word * transform_hlds__complexity__STATE_VARIABLE_ProcInfo_15,
#line 480 "complexity.m"
  MR_Word * transform_hlds__complexity__Var_9);

#line 447 "complexity.m"
static void MR_CALL 
transform_hlds__complexity__generate_size_goal_14_p_0(
#line 447 "complexity.m"
  MR_Word transform_hlds__complexity__ArgVar_15,
#line 447 "complexity.m"
  MR_Integer transform_hlds__complexity__VarSeqNum_16,
#line 447 "complexity.m"
  MR_Word transform_hlds__complexity__Context_17,
#line 447 "complexity.m"
  MR_Integer transform_hlds__complexity__NumProfiledVars_18,
#line 447 "complexity.m"
  MR_String transform_hlds__complexity__ProcVarName_19,
#line 447 "complexity.m"
  MR_String transform_hlds__complexity__SlotVarName_20,
#line 447 "complexity.m"
  MR_Word transform_hlds__complexity__PredId_21,
#line 447 "complexity.m"
  MR_Word transform_hlds__complexity__STATE_VARIABLE_ProcInfo_0_37,
#line 447 "complexity.m"
  MR_Word * transform_hlds__complexity__STATE_VARIABLE_ProcInfo_38,
#line 447 "complexity.m"
  MR_Word transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_0_39,
#line 447 "complexity.m"
  MR_Word * transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_40,
#line 447 "complexity.m"
  MR_Word * transform_hlds__complexity__Goals_24,
#line 447 "complexity.m"
  MR_Word * transform_hlds__complexity__ForeignArgs_25,
#line 447 "complexity.m"
  MR_String * transform_hlds__complexity__CodeStr_26);

#line 430 "complexity.m"
static void MR_CALL 
transform_hlds__complexity__generate_size_goals_13_p_0(
#line 430 "complexity.m"
  MR_Word transform_hlds__complexity__HeadVar__1_1,
#line 430 "complexity.m"
  MR_Word transform_hlds__complexity__Context_2,
#line 430 "complexity.m"
  MR_Integer transform_hlds__complexity__NumProfiledVars_3,
#line 430 "complexity.m"
  MR_String transform_hlds__complexity__ProcVarName_4,
#line 430 "complexity.m"
  MR_String transform_hlds__complexity__SlotVarName_5,
#line 430 "complexity.m"
  MR_Word transform_hlds__complexity__PredId_6,
#line 430 "complexity.m"
  MR_Word transform_hlds__complexity__STATE_VARIABLE_ProcInfo_0_7,
#line 430 "complexity.m"
  MR_Word * transform_hlds__complexity__STATE_VARIABLE_ProcInfo_8,
#line 430 "complexity.m"
  MR_Word transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_0_9,
#line 430 "complexity.m"
  MR_Word * transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_10,
#line 430 "complexity.m"
  MR_Word * transform_hlds__complexity__HeadVar__11_11,
#line 430 "complexity.m"
  MR_Word * transform_hlds__complexity__HeadVar__12_12,
#line 430 "complexity.m"
  MR_String * transform_hlds__complexity__HeadVar__13_13);

#line 404 "complexity.m"
static void MR_CALL 
transform_hlds__complexity__generate_slot_goals_12_p_0(
#line 404 "complexity.m"
  MR_Integer transform_hlds__complexity__ProcNum_13,
#line 404 "complexity.m"
  MR_Word transform_hlds__complexity__NumberedVars_14,
#line 404 "complexity.m"
  MR_Integer transform_hlds__complexity__NumProfiledVars_15,
#line 404 "complexity.m"
  MR_Word transform_hlds__complexity__Context_16,
#line 404 "complexity.m"
  MR_Word transform_hlds__complexity__PredId_17,
#line 404 "complexity.m"
  MR_Word transform_hlds__complexity__STATE_VARIABLE_ProcInfo_0_33,
#line 404 "complexity.m"
  MR_Word * transform_hlds__complexity__STATE_VARIABLE_ProcInfo_34,
#line 404 "complexity.m"
  MR_Word transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_0_35,
#line 404 "complexity.m"
  MR_Word * transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_36,
#line 404 "complexity.m"
  MR_Word * transform_hlds__complexity__SlotVar_20,
#line 404 "complexity.m"
  MR_String * transform_hlds__complexity__SlotVarName_21,
#line 404 "complexity.m"
  MR_Word * transform_hlds__complexity__Goals_22);

#line 253 "complexity.m"
static void MR_CALL 
transform_hlds__complexity__complexity_process_proc_8_p_0(
#line 253 "complexity.m"
  MR_Integer transform_hlds__complexity__NumProcs_9,
#line 253 "complexity.m"
  MR_Integer transform_hlds__complexity__ProcNum_10,
#line 253 "complexity.m"
  MR_String transform_hlds__complexity__FullName_11,
#line 253 "complexity.m"
  MR_Word transform_hlds__complexity__PredId_12,
#line 253 "complexity.m"
  MR_Word transform_hlds__complexity__STATE_VARIABLE_ProcInfo_0_75,
#line 253 "complexity.m"
  MR_Word * transform_hlds__complexity__STATE_VARIABLE_ProcInfo_76,
#line 253 "complexity.m"
  MR_Word transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_0_77,
#line 253 "complexity.m"
  MR_Word * transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_78);

#line 249 "complexity.m"
static MR_String MR_CALL 
transform_hlds__complexity__slot_var_name_0_f_0(void);

#line 130 "complexity.m"
static MR_bool MR_CALL 
transform_hlds__complexity__read_spec_file_lines_8_p_0_1(
#line 130 "complexity.m"
  MR_Box transform_hlds__complexity__closure_arg,
#line 130 "complexity.m"
  MR_Box transform_hlds__complexity__wrapper_arg_1);

#line 113 "complexity.m"
static void MR_CALL 
transform_hlds__complexity__read_spec_file_lines_8_p_0(
#line 113 "complexity.m"
  MR_Word transform_hlds__complexity__Stream_9,
#line 113 "complexity.m"
  MR_Integer transform_hlds__complexity__CurLineNum_10,
#line 113 "complexity.m"
  MR_Integer * transform_hlds__complexity__NumLines_11,
#line 113 "complexity.m"
  MR_Word * transform_hlds__complexity__MaybeError_12,
#line 113 "complexity.m"
  MR_Word transform_hlds__complexity__STATE_VARIABLE_ProcMap_0_21,
#line 113 "complexity.m"
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
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 581 "complexity.m"
static MR_bool MR_CALL 
transform_hlds__complexity__IntroducedFrom__pred__make_type_info_var__581__1_2_p_0(
#line 581 "complexity.m"
  MR_Word transform_hlds__complexity__PredInfo0_17,
#line 581 "complexity.m"
  MR_Word transform_hlds__complexity__PredInfo_20)
#line 581 "complexity.m"
{
#line 581 "complexity.m"
  {
#line 581 "complexity.m"
    MR_bool transform_hlds__complexity__succeeded;

#line 581 "complexity.m"
    {
#line 581 "complexity.m"
      return transform_hlds__complexity__succeeded = hlds__hlds_pred____Unify____pred_info_0_0(transform_hlds__complexity__PredInfo0_17, transform_hlds__complexity__PredInfo_20);
    }
#line 581 "complexity.m"
    return transform_hlds__complexity__succeeded;
#line 581 "complexity.m"
  }
#line 581 "complexity.m"
}

#line 130 "complexity.m"
static MR_bool MR_CALL 
transform_hlds__complexity__IntroducedFrom__pred__read_spec_file_lines__130__1_2_p_0(
#line 130 "complexity.m"
  MR_Char transform_hlds__complexity__HeadVar__1_27,
#line 130 "complexity.m"
  MR_Char transform_hlds__complexity__HeadVar__2_36)
#line 130 "complexity.m"
{
#line 130 "complexity.m"
  {
#line 130 "complexity.m"
    MR_bool transform_hlds__complexity__succeeded = (transform_hlds__complexity__HeadVar__1_27 == transform_hlds__complexity__HeadVar__2_36);

#line 130 "complexity.m"
    return transform_hlds__complexity__succeeded;
#line 130 "complexity.m"
  }
#line 130 "complexity.m"
}

#line 581 "complexity.m"
static MR_bool MR_CALL 
transform_hlds__complexity__make_type_info_var_9_p_0_1(
#line 581 "complexity.m"
  MR_Box transform_hlds__complexity__closure_arg)
#line 581 "complexity.m"
{
#line 581 "complexity.m"
  {
#line 581 "complexity.m"
    MR_bool transform_hlds__complexity__succeeded;
#line 581 "complexity.m"
    MR_Box transform_hlds__complexity__closure = transform_hlds__complexity__closure_arg;

#line 581 "complexity.m"
    {
#line 581 "complexity.m"
      return transform_hlds__complexity__succeeded = transform_hlds__complexity__IntroducedFrom__pred__make_type_info_var__581__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__complexity__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__complexity__closure, (MR_Integer) 4))));
    }
#line 581 "complexity.m"
    return transform_hlds__complexity__succeeded;
#line 581 "complexity.m"
  }
#line 581 "complexity.m"
}

#line 569 "complexity.m"
static void MR_CALL 
transform_hlds__complexity__make_type_info_var_9_p_0(
#line 569 "complexity.m"
  MR_Word transform_hlds__complexity__Type_10,
#line 569 "complexity.m"
  MR_Word transform_hlds__complexity__Context_11,
#line 569 "complexity.m"
  MR_Word transform_hlds__complexity__PredId_12,
#line 569 "complexity.m"
  MR_Word transform_hlds__complexity__STATE_VARIABLE_ProcInfo_0_21,
#line 569 "complexity.m"
  MR_Word * transform_hlds__complexity__STATE_VARIABLE_ProcInfo_22,
#line 569 "complexity.m"
  MR_Word transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_0_23,
#line 569 "complexity.m"
  MR_Word * transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_24,
#line 569 "complexity.m"
  MR_Word * transform_hlds__complexity__TypeInfoVar_15,
#line 569 "complexity.m"
  MR_Word * transform_hlds__complexity__TypeInfoGoals_16)
#line 569 "complexity.m"
{
#line 574 "complexity.m"
  {
#line 574 "complexity.m"
    MR_bool transform_hlds__complexity__succeeded;
#line 574 "complexity.m"
    MR_Word transform_hlds__complexity__PredInfo0_17;
#line 574 "complexity.m"
    MR_Word transform_hlds__complexity__PolyInfo0_18;
#line 574 "complexity.m"
    MR_Word transform_hlds__complexity__PolyInfo_19;
#line 574 "complexity.m"
    MR_Word transform_hlds__complexity__PredInfo_20;
#line 574 "complexity.m"
    MR_Word transform_hlds__complexity__V_27_27;

#line 575 "complexity.m"
    {
#line 575 "complexity.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_0_23, transform_hlds__complexity__PredId_12, &transform_hlds__complexity__PredInfo0_17);
    }
#line 576 "complexity.m"
    {
#line 576 "complexity.m"
      check_hlds__polymorphism__create_poly_info_4_p_0(transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_0_23, transform_hlds__complexity__PredInfo0_17, transform_hlds__complexity__STATE_VARIABLE_ProcInfo_0_21, &transform_hlds__complexity__PolyInfo0_18);
    }
#line 577 "complexity.m"
    {
#line 577 "complexity.m"
      check_hlds__polymorphism__polymorphism_make_type_info_var_6_p_0(transform_hlds__complexity__Type_10, transform_hlds__complexity__Context_11, transform_hlds__complexity__TypeInfoVar_15, transform_hlds__complexity__TypeInfoGoals_16, transform_hlds__complexity__PolyInfo0_18, &transform_hlds__complexity__PolyInfo_19);
    }
#line 579 "complexity.m"
    {
#line 579 "complexity.m"
      check_hlds__polymorphism__poly_info_extract_6_p_0(transform_hlds__complexity__PolyInfo_19, transform_hlds__complexity__PredInfo0_17, &transform_hlds__complexity__PredInfo_20, transform_hlds__complexity__STATE_VARIABLE_ProcInfo_0_21, transform_hlds__complexity__STATE_VARIABLE_ProcInfo_22, transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_24);
    }
#line 581 "complexity.m"
    {
#line 581 "complexity.m"
      transform_hlds__complexity__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 581 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__V_27_27, 0) = ((MR_Box) (&transform_hlds__complexity_scalar_common_3[1]));
#line 581 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__V_27_27, 1) = ((MR_Box) (transform_hlds__complexity__make_type_info_var_9_p_0_1));
#line 581 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__V_27_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 581 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__V_27_27, 3) = ((MR_Box) (transform_hlds__complexity__PredInfo0_17));
#line 581 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__V_27_27, 4) = ((MR_Box) (transform_hlds__complexity__PredInfo_20));
#line 581 "complexity.m"
    }
#line 581 "complexity.m"
    {
#line 581 "complexity.m"
      mercury__require__expect_4_p_0(transform_hlds__complexity__V_27_27, (MR_String) "transform_hlds.complexity", (MR_String) "predicate \140transform_hlds.complexity.make_type_info_var\'/9", (MR_String) "modified pred_info");
#line 581 "complexity.m"
      return;
    }
#line 574 "complexity.m"
  }
#line 569 "complexity.m"
}

#line 560 "complexity.m"
static MR_Word MR_CALL 
transform_hlds__complexity__is_active_type_0_f_0(void)
#line 560 "complexity.m"
{
#line 562 "complexity.m"
  {
#line 562 "complexity.m"
    MR_bool transform_hlds__complexity__succeeded;
#line 562 "complexity.m"
    MR_Word transform_hlds__complexity__Type_2;
#line 562 "complexity.m"
    MR_Word transform_hlds__complexity__M_3;
#line 562 "complexity.m"
    MR_Word transform_hlds__complexity__V_4_4;
#line 562 "complexity.m"
    MR_Word transform_hlds__complexity__V_6_6;

#line 563 "complexity.m"
    {
#line 563 "complexity.m"
      transform_hlds__complexity__M_3 = mdbcomp__builtin_modules__mercury_term_size_prof_builtin_module_0_f_0();
    }
#line 564 "complexity.m"
    {
#line 564 "complexity.m"
      transform_hlds__complexity__V_6_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 564 "complexity.m"
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_6_6, 0) = ((MR_Box) (transform_hlds__complexity__M_3));
#line 564 "complexity.m"
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_6_6, 1) = ((MR_Box) ((MR_String) "complexity_is_active"));
#line 564 "complexity.m"
    }
#line 564 "complexity.m"
    {
#line 564 "complexity.m"
      transform_hlds__complexity__V_4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 564 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__V_4_4, 0) = ((MR_Box) (transform_hlds__complexity__V_6_6));
#line 564 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__V_4_4, 1) = ((MR_Box) ((MR_Integer) 0));
#line 564 "complexity.m"
    }
#line 564 "complexity.m"
    {
#line 564 "complexity.m"
      parse_tree__prog_type__construct_type_3_p_0(transform_hlds__complexity__V_4_4, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__complexity__Type_2);
    }
#line 562 "complexity.m"
    return transform_hlds__complexity__Type_2;
#line 562 "complexity.m"
  }
#line 560 "complexity.m"
}

#line 539 "complexity.m"
static void MR_CALL 
transform_hlds__complexity__allocate_slot_numbers_cl_3_p_0(
#line 539 "complexity.m"
  MR_Word transform_hlds__complexity__HeadVar__1_1,
#line 539 "complexity.m"
  MR_Integer transform_hlds__complexity__Offset_2,
#line 539 "complexity.m"
  MR_Word * transform_hlds__complexity__HeadVar__3_3)
#line 539 "complexity.m"
{
#line 542 "complexity.m"
  while (MR_TRUE)
#line 542 "complexity.m"
    {
#line 542 "complexity.m"
      /* tailcall optimized into a loop */
#line 542 "complexity.m"
      {
#line 542 "complexity.m"
        MR_bool transform_hlds__complexity__succeeded;

#line 542 "complexity.m"
        if ((transform_hlds__complexity__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 542 "complexity.m"
          *transform_hlds__complexity__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 542 "complexity.m"
        else
#line 544 "complexity.m"
          {
#line 544 "complexity.m"
            MR_Word transform_hlds__complexity__Var_5;
#line 544 "complexity.m"
            MR_Word transform_hlds__complexity__Info_6;
#line 544 "complexity.m"
            MR_Word transform_hlds__complexity__VarInfos_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__complexity__HeadVar__1_1, (MR_Integer) 1)));
#line 544 "complexity.m"
            MR_Word transform_hlds__complexity__Kind_11;
#line 544 "complexity.m"
            MR_Word transform_hlds__complexity__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__complexity__HeadVar__1_1, (MR_Integer) 0)));
#line 545 "complexity.m"
            MR_Word transform_hlds__complexity__V_10_10;

#line 543 "complexity.m"
            transform_hlds__complexity__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__complexity__V_13_13, (MR_Integer) 0)));
#line 543 "complexity.m"
            transform_hlds__complexity__Info_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__complexity__V_13_13, (MR_Integer) 1)));
#line 545 "complexity.m"
            transform_hlds__complexity__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__complexity__Info_6, (MR_Integer) 0)));
#line 545 "complexity.m"
            transform_hlds__complexity__Kind_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__complexity__Info_6, (MR_Integer) 1)));
#line 551 "complexity.m"
#line 551 "complexity.m"
            switch (transform_hlds__complexity__Kind_11) {
#line 551 "complexity.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 551 "complexity.m"
              case (MR_Integer) 1:
#line 551 "complexity.m"
              case (MR_Integer) 2:
#line 555 "complexity.m"
                {
#line 555 "complexity.m"
                  /* direct tailcall eliminated */
#line 555 "complexity.m"
                  {
#line 555 "complexity.m"
                    MR_Word transform_hlds__complexity__HeadVar__1__tmp_copy_1 = transform_hlds__complexity__VarInfos_7;

#line 555 "complexity.m"
                    transform_hlds__complexity__HeadVar__1_1 = transform_hlds__complexity__HeadVar__1__tmp_copy_1;
#line 555 "complexity.m"
                  }
#line 555 "complexity.m"
                  continue;
#line 555 "complexity.m"
                }
#line 551 "complexity.m"
                break;
#line 551 "complexity.m"
              case (MR_Integer) 0:
#line 547 "complexity.m"
                {
#line 547 "complexity.m"
                  MR_Word transform_hlds__complexity__NumberedProfiledVarsTail_12;
#line 547 "complexity.m"
                  MR_Integer transform_hlds__complexity__V_14_14 = (transform_hlds__complexity__Offset_2 + (MR_Integer) 1);
#line 547 "complexity.m"
                  MR_Word transform_hlds__complexity__V_16_16;

#line 548 "complexity.m"
                  {
#line 548 "complexity.m"
                    transform_hlds__complexity__allocate_slot_numbers_cl_3_p_0(transform_hlds__complexity__VarInfos_7, transform_hlds__complexity__V_14_14, &transform_hlds__complexity__NumberedProfiledVarsTail_12);
                  }
#line 550 "complexity.m"
                  {
#line 550 "complexity.m"
                    transform_hlds__complexity__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 550 "complexity.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__complexity__V_16_16, 0) = ((MR_Box) (transform_hlds__complexity__Var_5));
#line 550 "complexity.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__complexity__V_16_16, 1) = ((MR_Box) (transform_hlds__complexity__Offset_2));
#line 550 "complexity.m"
                  }
#line 550 "complexity.m"
                  {
#line 550 "complexity.m"
                    MR_Word base;
#line 550 "complexity.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 550 "complexity.m"
                    *transform_hlds__complexity__HeadVar__3_3 = base;
#line 550 "complexity.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__complexity__V_16_16));
#line 550 "complexity.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__complexity__NumberedProfiledVarsTail_12));
#line 550 "complexity.m"
                  }
#line 547 "complexity.m"
                }
#line 551 "complexity.m"
                break;
#line 551 "complexity.m"
            }
#line 544 "complexity.m"
          }
#line 542 "complexity.m"
      }
#line 542 "complexity.m"
      break;
#line 542 "complexity.m"
    }
#line 539 "complexity.m"
}

#line 509 "complexity.m"
static void MR_CALL 
transform_hlds__complexity__classify_args_6_p_0(
#line 509 "complexity.m"
  MR_Word transform_hlds__complexity__HeadVar__1_1,
#line 509 "complexity.m"
  MR_Word transform_hlds__complexity__HeadVar__2_2,
#line 509 "complexity.m"
  MR_Word transform_hlds__complexity__ModuleInfo_3,
#line 509 "complexity.m"
  MR_Word transform_hlds__complexity__VarSet_4,
#line 509 "complexity.m"
  MR_Word transform_hlds__complexity__VarTypes_5,
#line 509 "complexity.m"
  MR_Word * transform_hlds__complexity__HeadVar__6_6)
#line 509 "complexity.m"
{
#line 513 "complexity.m"
  {
#line 513 "complexity.m"
    MR_bool transform_hlds__complexity__succeeded;

#line 513 "complexity.m"
    if ((transform_hlds__complexity__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 513 "complexity.m"
      if ((transform_hlds__complexity__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 513 "complexity.m"
        *transform_hlds__complexity__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 513 "complexity.m"
      else
#line 516 "complexity.m"
        {
#line 517 "complexity.m"
          {
#line 517 "complexity.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.complexity", (MR_String) "predicate \140transform_hlds.complexity.classify_args\'/6", (MR_String) "lists not same length");
#line 517 "complexity.m"
            return;
          }
#line 516 "complexity.m"
        }
#line 513 "complexity.m"
    else
#line 513 "complexity.m"
      {
#line 513 "complexity.m"
        MR_Word transform_hlds__complexity__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__complexity__HeadVar__1_1, (MR_Integer) 1)));
#line 513 "complexity.m"
        MR_Word transform_hlds__complexity__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__complexity__HeadVar__1_1, (MR_Integer) 0)));

#line 513 "complexity.m"
        if ((transform_hlds__complexity__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 514 "complexity.m"
          {
#line 515 "complexity.m"
            {
#line 515 "complexity.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.complexity", (MR_String) "predicate \140transform_hlds.complexity.classify_args\'/6", (MR_String) "lists not same length");
#line 515 "complexity.m"
              return;
            }
#line 514 "complexity.m"
          }
#line 513 "complexity.m"
        else
#line 519 "complexity.m"
          {
#line 519 "complexity.m"
            MR_Word transform_hlds__complexity__Mode_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__complexity__HeadVar__2_2, (MR_Integer) 0)));
#line 519 "complexity.m"
            MR_Word transform_hlds__complexity__Modes_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__complexity__HeadVar__2_2, (MR_Integer) 1)));
#line 519 "complexity.m"
            MR_Word transform_hlds__complexity__MaybeName_35;
#line 519 "complexity.m"
            MR_Word transform_hlds__complexity__Kind_36;
#line 519 "complexity.m"
            MR_Word transform_hlds__complexity__VarInfos_37;
#line 519 "complexity.m"
            MR_Word transform_hlds__complexity__V_40_40;
#line 519 "complexity.m"
            MR_Word transform_hlds__complexity__V_41_41;
#line 523 "complexity.m"
            MR_String transform_hlds__complexity__Name_38;

#line 520 "complexity.m"
            {
#line 520 "complexity.m"
              transform_hlds__complexity__classify_args_6_p_0(transform_hlds__complexity__V_43_43, transform_hlds__complexity__Modes_31, transform_hlds__complexity__ModuleInfo_3, transform_hlds__complexity__VarSet_4, transform_hlds__complexity__VarTypes_5, &transform_hlds__complexity__VarInfos_37);
            }
#line 521 "complexity.m"
            {
#line 521 "complexity.m"
              transform_hlds__complexity__succeeded = mercury__varset__search_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__complexity__VarSet_4, transform_hlds__complexity__V_44_44, &transform_hlds__complexity__Name_38);
            }
#line 523 "complexity.m"
            if (transform_hlds__complexity__succeeded)
#line 522 "complexity.m"
              {
#line 522 "complexity.m"
                transform_hlds__complexity__MaybeName_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 522 "complexity.m"
                MR_hl_field(MR_mktag(1), transform_hlds__complexity__MaybeName_35, 0) = ((MR_Box) (transform_hlds__complexity__Name_38));
#line 522 "complexity.m"
              }
#line 523 "complexity.m"
            else
#line 524 "complexity.m"
              transform_hlds__complexity__MaybeName_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 526 "complexity.m"
            {
#line 526 "complexity.m"
              transform_hlds__complexity__succeeded = check_hlds__mode_util__mode_is_fully_input_2_p_0(transform_hlds__complexity__ModuleInfo_3, transform_hlds__complexity__Mode_30);
            }
#line 533 "complexity.m"
            if (transform_hlds__complexity__succeeded)
#line 527 "complexity.m"
              {
#line 527 "complexity.m"
                MR_Word transform_hlds__complexity__VarType_39;

#line 527 "complexity.m"
                {
#line 527 "complexity.m"
                  hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__complexity__VarTypes_5, transform_hlds__complexity__V_44_44, &transform_hlds__complexity__VarType_39);
                }
#line 528 "complexity.m"
                {
#line 528 "complexity.m"
                  transform_hlds__complexity__succeeded = transform_hlds__term_norm__zero_size_type_2_p_0(transform_hlds__complexity__ModuleInfo_3, transform_hlds__complexity__VarType_39);
                }
#line 530 "complexity.m"
                if (transform_hlds__complexity__succeeded)
#line 529 "complexity.m"
                  transform_hlds__complexity__Kind_36 = (MR_Integer) 1;
#line 530 "complexity.m"
                else
#line 531 "complexity.m"
                  transform_hlds__complexity__Kind_36 = (MR_Integer) 0;
#line 527 "complexity.m"
              }
#line 533 "complexity.m"
            else
#line 534 "complexity.m"
              transform_hlds__complexity__Kind_36 = (MR_Integer) 2;
#line 519 "complexity.m"
            {
#line 519 "complexity.m"
              transform_hlds__complexity__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 519 "complexity.m"
              MR_hl_field(MR_mktag(0), transform_hlds__complexity__V_41_41, 0) = ((MR_Box) (transform_hlds__complexity__MaybeName_35));
#line 519 "complexity.m"
              MR_hl_field(MR_mktag(0), transform_hlds__complexity__V_41_41, 1) = ((MR_Box) (transform_hlds__complexity__Kind_36));
#line 519 "complexity.m"
            }
#line 519 "complexity.m"
            {
#line 519 "complexity.m"
              transform_hlds__complexity__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 519 "complexity.m"
              MR_hl_field(MR_mktag(0), transform_hlds__complexity__V_40_40, 0) = ((MR_Box) (transform_hlds__complexity__V_44_44));
#line 519 "complexity.m"
              MR_hl_field(MR_mktag(0), transform_hlds__complexity__V_40_40, 1) = ((MR_Box) (transform_hlds__complexity__V_41_41));
#line 519 "complexity.m"
            }
#line 519 "complexity.m"
            {
#line 519 "complexity.m"
              MR_Word base;
#line 519 "complexity.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 519 "complexity.m"
              *transform_hlds__complexity__HeadVar__6_6 = base;
#line 519 "complexity.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__complexity__V_40_40));
#line 519 "complexity.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__complexity__VarInfos_37));
#line 519 "complexity.m"
            }
#line 519 "complexity.m"
          }
#line 513 "complexity.m"
      }
#line 513 "complexity.m"
  }
#line 509 "complexity.m"
}

#line 491 "complexity.m"
static void MR_CALL 
transform_hlds__complexity__complexity_generate_foreign_proc_9_p_0(
#line 491 "complexity.m"
  MR_String transform_hlds__complexity__PredName_10,
#line 491 "complexity.m"
  MR_Word transform_hlds__complexity__Detism_11,
#line 491 "complexity.m"
  MR_Word transform_hlds__complexity__Args_12,
#line 491 "complexity.m"
  MR_Word transform_hlds__complexity__ExtraArgs_13,
#line 491 "complexity.m"
  MR_String transform_hlds__complexity__Code_14,
#line 491 "complexity.m"
  MR_Word transform_hlds__complexity__BoundVars_15,
#line 491 "complexity.m"
  MR_Word transform_hlds__complexity__ModuleInfo_16,
#line 491 "complexity.m"
  MR_Word transform_hlds__complexity__Context_17,
#line 491 "complexity.m"
  MR_Word * transform_hlds__complexity__Goal_18)
#line 491 "complexity.m"
{
#line 497 "complexity.m"
  {
#line 497 "complexity.m"
    MR_bool transform_hlds__complexity__succeeded;
#line 497 "complexity.m"
    MR_Word transform_hlds__complexity__BuiltinModule_19;
#line 497 "complexity.m"
    MR_Word transform_hlds__complexity__Attrs0_20;
#line 497 "complexity.m"
    MR_Word transform_hlds__complexity__Attrs_21;
#line 497 "complexity.m"
    MR_Word transform_hlds__complexity__V_29_29;

#line 498 "complexity.m"
    {
#line 498 "complexity.m"
      transform_hlds__complexity__BuiltinModule_19 = mdbcomp__builtin_modules__mercury_term_size_prof_builtin_module_0_f_0();
    }
#line 499 "complexity.m"
    {
#line 499 "complexity.m"
      transform_hlds__complexity__Attrs0_20 = parse_tree__prog_data__default_attributes_1_f_0((MR_Integer) 0);
    }
#line 500 "complexity.m"
    {
#line 500 "complexity.m"
      parse_tree__prog_data__set_may_call_mercury_3_p_0((MR_Integer) 1, transform_hlds__complexity__Attrs0_20, &transform_hlds__complexity__Attrs_21);
    }
#line 504 "complexity.m"
    {
#line 504 "complexity.m"
      transform_hlds__complexity__V_29_29 = hlds__instmap__instmap_delta_bind_vars_1_f_0(transform_hlds__complexity__BoundVars_15);
    }
#line 502 "complexity.m"
    {
#line 502 "complexity.m"
      hlds__goal_util__generate_foreign_proc_16_p_0(transform_hlds__complexity__BuiltinModule_19, transform_hlds__complexity__PredName_10, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__complexity__Detism_11, (MR_Integer) 2, transform_hlds__complexity__Attrs_21, transform_hlds__complexity__Args_12, transform_hlds__complexity__ExtraArgs_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__complexity__Code_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__complexity__V_29_29, transform_hlds__complexity__ModuleInfo_16, transform_hlds__complexity__Context_17, transform_hlds__complexity__Goal_18);
#line 502 "complexity.m"
      return;
    }
#line 497 "complexity.m"
  }
#line 491 "complexity.m"
}

#line 480 "complexity.m"
static void MR_CALL 
transform_hlds__complexity__generate_new_var_5_p_0(
#line 480 "complexity.m"
  MR_String transform_hlds__complexity__Name_6,
#line 480 "complexity.m"
  MR_Word transform_hlds__complexity__Type_7,
#line 480 "complexity.m"
  MR_Word transform_hlds__complexity__STATE_VARIABLE_ProcInfo_0_14,
#line 480 "complexity.m"
  MR_Word * transform_hlds__complexity__STATE_VARIABLE_ProcInfo_15,
#line 480 "complexity.m"
  MR_Word * transform_hlds__complexity__Var_9)
#line 480 "complexity.m"
{
#line 483 "complexity.m"
  {
#line 483 "complexity.m"
    MR_bool transform_hlds__complexity__succeeded;
#line 483 "complexity.m"
    MR_Word transform_hlds__complexity__VarSet0_10;
#line 483 "complexity.m"
    MR_Word transform_hlds__complexity__VarTypes0_11;
#line 483 "complexity.m"
    MR_Word transform_hlds__complexity__VarSet_12;
#line 483 "complexity.m"
    MR_Word transform_hlds__complexity__VarTypes_13;
#line 483 "complexity.m"
    MR_Word transform_hlds__complexity__STATE_VARIABLE_ProcInfo_16_16;

#line 484 "complexity.m"
    {
#line 484 "complexity.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__complexity__STATE_VARIABLE_ProcInfo_0_14, &transform_hlds__complexity__VarSet0_10);
    }
#line 485 "complexity.m"
    {
#line 485 "complexity.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__complexity__STATE_VARIABLE_ProcInfo_0_14, &transform_hlds__complexity__VarTypes0_11);
    }
#line 486 "complexity.m"
    {
#line 486 "complexity.m"
      mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__complexity__Name_6, transform_hlds__complexity__Var_9, transform_hlds__complexity__VarSet0_10, &transform_hlds__complexity__VarSet_12);
    }
#line 487 "complexity.m"
    {
#line 487 "complexity.m"
      hlds__vartypes__add_var_type_4_p_0(*transform_hlds__complexity__Var_9, transform_hlds__complexity__Type_7, transform_hlds__complexity__VarTypes0_11, &transform_hlds__complexity__VarTypes_13);
    }
#line 488 "complexity.m"
    {
#line 488 "complexity.m"
      hlds__hlds_pred__proc_info_set_varset_3_p_0(transform_hlds__complexity__VarSet_12, transform_hlds__complexity__STATE_VARIABLE_ProcInfo_0_14, &transform_hlds__complexity__STATE_VARIABLE_ProcInfo_16_16);
    }
#line 489 "complexity.m"
    {
#line 489 "complexity.m"
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__complexity__VarTypes_13, transform_hlds__complexity__STATE_VARIABLE_ProcInfo_16_16, transform_hlds__complexity__STATE_VARIABLE_ProcInfo_15);
#line 489 "complexity.m"
      return;
    }
#line 483 "complexity.m"
  }
#line 480 "complexity.m"
}

#line 447 "complexity.m"
static void MR_CALL 
transform_hlds__complexity__generate_size_goal_14_p_0(
#line 447 "complexity.m"
  MR_Word transform_hlds__complexity__ArgVar_15,
#line 447 "complexity.m"
  MR_Integer transform_hlds__complexity__VarSeqNum_16,
#line 447 "complexity.m"
  MR_Word transform_hlds__complexity__Context_17,
#line 447 "complexity.m"
  MR_Integer transform_hlds__complexity__NumProfiledVars_18,
#line 447 "complexity.m"
  MR_String transform_hlds__complexity__ProcVarName_19,
#line 447 "complexity.m"
  MR_String transform_hlds__complexity__SlotVarName_20,
#line 447 "complexity.m"
  MR_Word transform_hlds__complexity__PredId_21,
#line 447 "complexity.m"
  MR_Word transform_hlds__complexity__STATE_VARIABLE_ProcInfo_0_37,
#line 447 "complexity.m"
  MR_Word * transform_hlds__complexity__STATE_VARIABLE_ProcInfo_38,
#line 447 "complexity.m"
  MR_Word transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_0_39,
#line 447 "complexity.m"
  MR_Word * transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_40,
#line 447 "complexity.m"
  MR_Word * transform_hlds__complexity__Goals_24,
#line 447 "complexity.m"
  MR_Word * transform_hlds__complexity__ForeignArgs_25,
#line 447 "complexity.m"
  MR_String * transform_hlds__complexity__CodeStr_26)
#line 447 "complexity.m"
{
#line 454 "complexity.m"
  {
#line 454 "complexity.m"
    MR_bool transform_hlds__complexity__succeeded;
#line 454 "complexity.m"
    MR_Word transform_hlds__complexity__VarTypes1_27;
#line 454 "complexity.m"
    MR_Word transform_hlds__complexity__VarType_28;
#line 454 "complexity.m"
    MR_Word transform_hlds__complexity__TypeInfoVar_30;
#line 454 "complexity.m"
    MR_Word transform_hlds__complexity__VarTypes2_31;
#line 454 "complexity.m"
    MR_Word transform_hlds__complexity__TypeInfoType_32;
#line 454 "complexity.m"
    MR_String transform_hlds__complexity__ArgName_33;
#line 454 "complexity.m"
    MR_String transform_hlds__complexity__TypeInfoArgName_34;
#line 454 "complexity.m"
    MR_Word transform_hlds__complexity__ForeignArg_35;
#line 454 "complexity.m"
    MR_Word transform_hlds__complexity__ForeignTypeInfoArg_36;
#line 454 "complexity.m"
    MR_String transform_hlds__complexity__V_44_44;
#line 454 "complexity.m"
    MR_String transform_hlds__complexity__V_46_46;
#line 454 "complexity.m"
    MR_Word transform_hlds__complexity__V_47_47;
#line 454 "complexity.m"
    MR_Word transform_hlds__complexity__V_48_48;
#line 454 "complexity.m"
    MR_Word transform_hlds__complexity__V_49_49;
#line 454 "complexity.m"
    MR_Word transform_hlds__complexity__V_51_51;
#line 454 "complexity.m"
    MR_Word transform_hlds__complexity__V_52_52;
#line 454 "complexity.m"
    MR_Word transform_hlds__complexity__V_53_53;
#line 454 "complexity.m"
    MR_Word transform_hlds__complexity__V_55_55;
#line 454 "complexity.m"
    MR_String transform_hlds__complexity__V_58_58;
#line 454 "complexity.m"
    MR_String transform_hlds__complexity__V_59_59;
#line 454 "complexity.m"
    MR_String transform_hlds__complexity__V_61_61;
#line 454 "complexity.m"
    MR_String transform_hlds__complexity__V_62_62;
#line 454 "complexity.m"
    MR_String transform_hlds__complexity__V_64_64;
#line 454 "complexity.m"
    MR_String transform_hlds__complexity__V_65_65;
#line 454 "complexity.m"
    MR_String transform_hlds__complexity__V_67_67;
#line 454 "complexity.m"
    MR_String transform_hlds__complexity__V_68_68;
#line 454 "complexity.m"
    MR_String transform_hlds__complexity__V_69_69;
#line 454 "complexity.m"
    MR_String transform_hlds__complexity__V_71_71;
#line 454 "complexity.m"
    MR_String transform_hlds__complexity__V_72_72;
#line 454 "complexity.m"
    MR_String transform_hlds__complexity__V_73_73;
#line 454 "complexity.m"
    MR_String transform_hlds__complexity__V_75_75;
#line 454 "complexity.m"
    MR_String transform_hlds__complexity__V_77_77;
#line 454 "complexity.m"
    MR_String transform_hlds__complexity__V_78_78;
#line 454 "complexity.m"
    MR_String transform_hlds__complexity__V_80_80;

#line 455 "complexity.m"
    {
#line 455 "complexity.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__complexity__STATE_VARIABLE_ProcInfo_0_37, &transform_hlds__complexity__VarTypes1_27);
    }
#line 456 "complexity.m"
    {
#line 456 "complexity.m"
      hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__complexity__VarTypes1_27, transform_hlds__complexity__ArgVar_15, &transform_hlds__complexity__VarType_28);
    }
#line 458 "complexity.m"
    {
#line 458 "complexity.m"
      transform_hlds__complexity__make_type_info_var_9_p_0(transform_hlds__complexity__VarType_28, transform_hlds__complexity__Context_17, transform_hlds__complexity__PredId_21, transform_hlds__complexity__STATE_VARIABLE_ProcInfo_0_37, transform_hlds__complexity__STATE_VARIABLE_ProcInfo_38, transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_0_39, transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_40, &transform_hlds__complexity__TypeInfoVar_30, transform_hlds__complexity__Goals_24);
    }
#line 461 "complexity.m"
    {
#line 461 "complexity.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(*transform_hlds__complexity__STATE_VARIABLE_ProcInfo_38, &transform_hlds__complexity__VarTypes2_31);
    }
#line 462 "complexity.m"
    {
#line 462 "complexity.m"
      hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__complexity__VarTypes2_31, transform_hlds__complexity__TypeInfoVar_30, &transform_hlds__complexity__TypeInfoType_32);
    }
#line 463 "complexity.m"
    {
#line 463 "complexity.m"
      transform_hlds__complexity__V_44_44 = mercury__string__int_to_string_1_f_0(transform_hlds__complexity__VarSeqNum_16);
    }
#line 463 "complexity.m"
    {
#line 463 "complexity.m"
      transform_hlds__complexity__ArgName_33 = mercury__string__f_43_43_2_f_0((MR_String) "arg", transform_hlds__complexity__V_44_44);
    }
#line 464 "complexity.m"
    {
#line 464 "complexity.m"
      transform_hlds__complexity__V_46_46 = mercury__string__int_to_string_1_f_0(transform_hlds__complexity__VarSeqNum_16);
    }
#line 464 "complexity.m"
    {
#line 464 "complexity.m"
      transform_hlds__complexity__TypeInfoArgName_34 = mercury__string__f_43_43_2_f_0((MR_String) "input_typeinfo", transform_hlds__complexity__V_46_46);
    }
#line 466 "complexity.m"
    {
#line 466 "complexity.m"
      transform_hlds__complexity__V_49_49 = parse_tree__prog_mode__in_mode_0_f_0();
    }
#line 466 "complexity.m"
    {
#line 466 "complexity.m"
      transform_hlds__complexity__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 466 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__V_48_48, 0) = ((MR_Box) (transform_hlds__complexity__ArgName_33));
#line 466 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__V_48_48, 1) = ((MR_Box) (transform_hlds__complexity__V_49_49));
#line 466 "complexity.m"
    }
#line 466 "complexity.m"
    {
#line 466 "complexity.m"
      transform_hlds__complexity__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 466 "complexity.m"
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_47_47, 0) = ((MR_Box) (transform_hlds__complexity__V_48_48));
#line 466 "complexity.m"
    }
#line 465 "complexity.m"
    {
#line 465 "complexity.m"
      transform_hlds__complexity__ForeignArg_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 465 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__ForeignArg_35, 0) = ((MR_Box) (transform_hlds__complexity__ArgVar_15));
#line 465 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__ForeignArg_35, 1) = ((MR_Box) (transform_hlds__complexity__V_47_47));
#line 465 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__ForeignArg_35, 2) = ((MR_Box) (transform_hlds__complexity__VarType_28));
#line 465 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__ForeignArg_35, 3) = ((MR_Box) ((MR_Integer) 0));
#line 465 "complexity.m"
    }
#line 468 "complexity.m"
    {
#line 468 "complexity.m"
      transform_hlds__complexity__V_53_53 = parse_tree__prog_mode__in_mode_0_f_0();
    }
#line 468 "complexity.m"
    {
#line 468 "complexity.m"
      transform_hlds__complexity__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 468 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__V_52_52, 0) = ((MR_Box) (transform_hlds__complexity__TypeInfoArgName_34));
#line 468 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__V_52_52, 1) = ((MR_Box) (transform_hlds__complexity__V_53_53));
#line 468 "complexity.m"
    }
#line 468 "complexity.m"
    {
#line 468 "complexity.m"
      transform_hlds__complexity__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 468 "complexity.m"
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_51_51, 0) = ((MR_Box) (transform_hlds__complexity__V_52_52));
#line 468 "complexity.m"
    }
#line 467 "complexity.m"
    {
#line 467 "complexity.m"
      transform_hlds__complexity__ForeignTypeInfoArg_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 467 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__ForeignTypeInfoArg_36, 0) = ((MR_Box) (transform_hlds__complexity__TypeInfoVar_30));
#line 467 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__ForeignTypeInfoArg_36, 1) = ((MR_Box) (transform_hlds__complexity__V_51_51));
#line 467 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__ForeignTypeInfoArg_36, 2) = ((MR_Box) (transform_hlds__complexity__TypeInfoType_32));
#line 467 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__ForeignTypeInfoArg_36, 3) = ((MR_Box) ((MR_Integer) 0));
#line 467 "complexity.m"
    }
#line 469 "complexity.m"
    {
#line 469 "complexity.m"
      transform_hlds__complexity__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 469 "complexity.m"
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_55_55, 0) = ((MR_Box) (transform_hlds__complexity__ForeignArg_35));
#line 469 "complexity.m"
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 469 "complexity.m"
    }
#line 469 "complexity.m"
    {
#line 469 "complexity.m"
      MR_Word base;
#line 469 "complexity.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 469 "complexity.m"
      *transform_hlds__complexity__ForeignArgs_25 = base;
#line 469 "complexity.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__complexity__ForeignTypeInfoArg_36));
#line 469 "complexity.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__complexity__V_55_55));
#line 469 "complexity.m"
    }
#line 473 "complexity.m"
    {
#line 473 "complexity.m"
      transform_hlds__complexity__V_68_68 = mercury__string__int_to_string_1_f_0(transform_hlds__complexity__NumProfiledVars_18);
    }
#line 474 "complexity.m"
    {
#line 474 "complexity.m"
      transform_hlds__complexity__V_72_72 = mercury__string__int_to_string_1_f_0(transform_hlds__complexity__VarSeqNum_16);
    }
#line 476 "complexity.m"
    {
#line 476 "complexity.m"
      transform_hlds__complexity__V_80_80 = mercury__string__f_43_43_2_f_0(transform_hlds__complexity__ArgName_33, (MR_String) "));\n");
    }
#line 476 "complexity.m"
    {
#line 476 "complexity.m"
      transform_hlds__complexity__V_78_78 = mercury__string__f_43_43_2_f_0((MR_String) ", ", transform_hlds__complexity__V_80_80);
    }
#line 476 "complexity.m"
    {
#line 476 "complexity.m"
      transform_hlds__complexity__V_77_77 = mercury__string__f_43_43_2_f_0(transform_hlds__complexity__TypeInfoArgName_34, transform_hlds__complexity__V_78_78);
    }
#line 475 "complexity.m"
    {
#line 475 "complexity.m"
      transform_hlds__complexity__V_75_75 = mercury__string__f_43_43_2_f_0((MR_String) "MR_term_size((MR_TypeInfo) ", transform_hlds__complexity__V_77_77);
    }
#line 474 "complexity.m"
    {
#line 474 "complexity.m"
      transform_hlds__complexity__V_73_73 = mercury__string__f_43_43_2_f_0((MR_String) ",\n\t\t", transform_hlds__complexity__V_75_75);
    }
#line 474 "complexity.m"
    {
#line 474 "complexity.m"
      transform_hlds__complexity__V_71_71 = mercury__string__f_43_43_2_f_0(transform_hlds__complexity__V_72_72, transform_hlds__complexity__V_73_73);
    }
#line 473 "complexity.m"
    {
#line 473 "complexity.m"
      transform_hlds__complexity__V_69_69 = mercury__string__f_43_43_2_f_0((MR_String) ", ", transform_hlds__complexity__V_71_71);
    }
#line 473 "complexity.m"
    {
#line 473 "complexity.m"
      transform_hlds__complexity__V_67_67 = mercury__string__f_43_43_2_f_0(transform_hlds__complexity__V_68_68, transform_hlds__complexity__V_69_69);
    }
#line 472 "complexity.m"
    {
#line 472 "complexity.m"
      transform_hlds__complexity__V_65_65 = mercury__string__f_43_43_2_f_0((MR_String) ", ", transform_hlds__complexity__V_67_67);
    }
#line 472 "complexity.m"
    {
#line 472 "complexity.m"
      transform_hlds__complexity__V_64_64 = mercury__string__f_43_43_2_f_0(transform_hlds__complexity__SlotVarName_20, transform_hlds__complexity__V_65_65);
    }
#line 471 "complexity.m"
    {
#line 471 "complexity.m"
      transform_hlds__complexity__V_62_62 = mercury__string__f_43_43_2_f_0((MR_String) ", ", transform_hlds__complexity__V_64_64);
    }
#line 471 "complexity.m"
    {
#line 471 "complexity.m"
      transform_hlds__complexity__V_61_61 = mercury__string__f_43_43_2_f_0(transform_hlds__complexity__ProcVarName_19, transform_hlds__complexity__V_62_62);
    }
#line 470 "complexity.m"
    {
#line 470 "complexity.m"
      transform_hlds__complexity__V_59_59 = mercury__string__f_43_43_2_f_0((MR_String) "(", transform_hlds__complexity__V_61_61);
    }
#line 470 "complexity.m"
    {
#line 470 "complexity.m"
      transform_hlds__complexity__V_58_58 = mercury__string__f_43_43_2_f_0((MR_String) "MR_complexity_fill_size_slot", transform_hlds__complexity__V_59_59);
    }
#line 470 "complexity.m"
    {
#line 470 "complexity.m"
      *transform_hlds__complexity__CodeStr_26 = mercury__string__f_43_43_2_f_0((MR_String) "\t", transform_hlds__complexity__V_58_58);
    }
#line 454 "complexity.m"
  }
#line 447 "complexity.m"
}

#line 430 "complexity.m"
static void MR_CALL 
transform_hlds__complexity__generate_size_goals_13_p_0(
#line 430 "complexity.m"
  MR_Word transform_hlds__complexity__HeadVar__1_1,
#line 430 "complexity.m"
  MR_Word transform_hlds__complexity__Context_2,
#line 430 "complexity.m"
  MR_Integer transform_hlds__complexity__NumProfiledVars_3,
#line 430 "complexity.m"
  MR_String transform_hlds__complexity__ProcVarName_4,
#line 430 "complexity.m"
  MR_String transform_hlds__complexity__SlotVarName_5,
#line 430 "complexity.m"
  MR_Word transform_hlds__complexity__PredId_6,
#line 430 "complexity.m"
  MR_Word transform_hlds__complexity__STATE_VARIABLE_ProcInfo_0_7,
#line 430 "complexity.m"
  MR_Word * transform_hlds__complexity__STATE_VARIABLE_ProcInfo_8,
#line 430 "complexity.m"
  MR_Word transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_0_9,
#line 430 "complexity.m"
  MR_Word * transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_10,
#line 430 "complexity.m"
  MR_Word * transform_hlds__complexity__HeadVar__11_11,
#line 430 "complexity.m"
  MR_Word * transform_hlds__complexity__HeadVar__12_12,
#line 430 "complexity.m"
  MR_String * transform_hlds__complexity__HeadVar__13_13)
#line 430 "complexity.m"
{
#line 435 "complexity.m"
  {
#line 435 "complexity.m"
    MR_bool transform_hlds__complexity__succeeded;

#line 435 "complexity.m"
    if ((transform_hlds__complexity__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 435 "complexity.m"
      {
#line 435 "complexity.m"
        *transform_hlds__complexity__HeadVar__11_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 435 "complexity.m"
        *transform_hlds__complexity__HeadVar__12_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 435 "complexity.m"
        *transform_hlds__complexity__HeadVar__13_13 = (MR_String) "";
#line 435 "complexity.m"
        *transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_10 = transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_0_9;
#line 435 "complexity.m"
        *transform_hlds__complexity__STATE_VARIABLE_ProcInfo_8 = transform_hlds__complexity__STATE_VARIABLE_ProcInfo_0_7;
#line 435 "complexity.m"
      }
#line 435 "complexity.m"
    else
#line 439 "complexity.m"
      {
#line 439 "complexity.m"
        MR_Word transform_hlds__complexity__Var_25;
#line 439 "complexity.m"
        MR_Integer transform_hlds__complexity__VarSeqNum_26;
#line 439 "complexity.m"
        MR_Word transform_hlds__complexity__NumberedVars_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__complexity__HeadVar__1_1, (MR_Integer) 1)));
#line 439 "complexity.m"
        MR_Word transform_hlds__complexity__Goals_35;
#line 439 "complexity.m"
        MR_Word transform_hlds__complexity__RestGoals_36;
#line 439 "complexity.m"
        MR_Word transform_hlds__complexity__ForeignArgs_37;
#line 439 "complexity.m"
        MR_Word transform_hlds__complexity__RestForeignArgs_38;
#line 439 "complexity.m"
        MR_String transform_hlds__complexity__CodeStr_39;
#line 439 "complexity.m"
        MR_String transform_hlds__complexity__RestCodeStr_40;
#line 439 "complexity.m"
        MR_Word transform_hlds__complexity__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__complexity__HeadVar__1_1, (MR_Integer) 0)));
#line 439 "complexity.m"
        MR_Word transform_hlds__complexity__STATE_VARIABLE_ProcInfo_46_46;
#line 439 "complexity.m"
        MR_Word transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_47_47;

#line 436 "complexity.m"
        transform_hlds__complexity__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__complexity__V_45_45, (MR_Integer) 0)));
#line 436 "complexity.m"
        transform_hlds__complexity__VarSeqNum_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__complexity__V_45_45, (MR_Integer) 1)));
#line 440 "complexity.m"
        {
#line 440 "complexity.m"
          transform_hlds__complexity__generate_size_goal_14_p_0(transform_hlds__complexity__Var_25, transform_hlds__complexity__VarSeqNum_26, transform_hlds__complexity__Context_2, transform_hlds__complexity__NumProfiledVars_3, transform_hlds__complexity__ProcVarName_4, transform_hlds__complexity__SlotVarName_5, transform_hlds__complexity__PredId_6, transform_hlds__complexity__STATE_VARIABLE_ProcInfo_0_7, &transform_hlds__complexity__STATE_VARIABLE_ProcInfo_46_46, transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_0_9, &transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_47_47, &transform_hlds__complexity__Goals_35, &transform_hlds__complexity__ForeignArgs_37, &transform_hlds__complexity__CodeStr_39);
        }
#line 443 "complexity.m"
        {
#line 443 "complexity.m"
          transform_hlds__complexity__generate_size_goals_13_p_0(transform_hlds__complexity__NumberedVars_27, transform_hlds__complexity__Context_2, transform_hlds__complexity__NumProfiledVars_3, transform_hlds__complexity__ProcVarName_4, transform_hlds__complexity__SlotVarName_5, transform_hlds__complexity__PredId_6, transform_hlds__complexity__STATE_VARIABLE_ProcInfo_46_46, transform_hlds__complexity__STATE_VARIABLE_ProcInfo_8, transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_47_47, transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_10, &transform_hlds__complexity__RestGoals_36, &transform_hlds__complexity__RestForeignArgs_38, &transform_hlds__complexity__RestCodeStr_40);
        }
#line 438 "complexity.m"
        {
#line 438 "complexity.m"
          *transform_hlds__complexity__HeadVar__11_11 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__complexity__Goals_35, transform_hlds__complexity__RestGoals_36);
        }
#line 438 "complexity.m"
        {
#line 438 "complexity.m"
          *transform_hlds__complexity__HeadVar__12_12 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0, transform_hlds__complexity__ForeignArgs_37, transform_hlds__complexity__RestForeignArgs_38);
        }
#line 439 "complexity.m"
        {
#line 439 "complexity.m"
          *transform_hlds__complexity__HeadVar__13_13 = mercury__string__f_43_43_2_f_0(transform_hlds__complexity__CodeStr_39, transform_hlds__complexity__RestCodeStr_40);
        }
#line 439 "complexity.m"
      }
#line 435 "complexity.m"
  }
#line 430 "complexity.m"
}

#line 404 "complexity.m"
static void MR_CALL 
transform_hlds__complexity__generate_slot_goals_12_p_0(
#line 404 "complexity.m"
  MR_Integer transform_hlds__complexity__ProcNum_13,
#line 404 "complexity.m"
  MR_Word transform_hlds__complexity__NumberedVars_14,
#line 404 "complexity.m"
  MR_Integer transform_hlds__complexity__NumProfiledVars_15,
#line 404 "complexity.m"
  MR_Word transform_hlds__complexity__Context_16,
#line 404 "complexity.m"
  MR_Word transform_hlds__complexity__PredId_17,
#line 404 "complexity.m"
  MR_Word transform_hlds__complexity__STATE_VARIABLE_ProcInfo_0_33,
#line 404 "complexity.m"
  MR_Word * transform_hlds__complexity__STATE_VARIABLE_ProcInfo_34,
#line 404 "complexity.m"
  MR_Word transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_0_35,
#line 404 "complexity.m"
  MR_Word * transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_36,
#line 404 "complexity.m"
  MR_Word * transform_hlds__complexity__SlotVar_20,
#line 404 "complexity.m"
  MR_String * transform_hlds__complexity__SlotVarName_21,
#line 404 "complexity.m"
  MR_Word * transform_hlds__complexity__Goals_22)
#line 404 "complexity.m"
{
#line 410 "complexity.m"
  {
#line 410 "complexity.m"
    MR_bool transform_hlds__complexity__succeeded;
#line 410 "complexity.m"
    MR_Word transform_hlds__complexity__PrefixGoals_24;
#line 410 "complexity.m"
    MR_Word transform_hlds__complexity__ForeignArgs_25;
#line 410 "complexity.m"
    MR_String transform_hlds__complexity__FillCodeStr_26;
#line 410 "complexity.m"
    MR_Word transform_hlds__complexity__SlotVarArg_27;
#line 410 "complexity.m"
    MR_String transform_hlds__complexity__PredCodeStr_30;
#line 410 "complexity.m"
    MR_String transform_hlds__complexity__ProcStr_31;
#line 410 "complexity.m"
    MR_Word transform_hlds__complexity__CallGoal_32;
#line 410 "complexity.m"
    MR_Word transform_hlds__complexity__V_37_37;
#line 410 "complexity.m"
    MR_Word transform_hlds__complexity__STATE_VARIABLE_ProcInfo_38_38;
#line 410 "complexity.m"
    MR_Word transform_hlds__complexity__V_41_41;
#line 410 "complexity.m"
    MR_Word transform_hlds__complexity__V_42_42;
#line 410 "complexity.m"
    MR_Word transform_hlds__complexity__V_43_43;
#line 410 "complexity.m"
    MR_Word transform_hlds__complexity__V_44_44;
#line 410 "complexity.m"
    MR_String transform_hlds__complexity__V_50_50;
#line 410 "complexity.m"
    MR_String transform_hlds__complexity__V_51_51;
#line 410 "complexity.m"
    MR_String transform_hlds__complexity__V_53_53;
#line 410 "complexity.m"
    MR_String transform_hlds__complexity__V_54_54;
#line 410 "complexity.m"
    MR_String transform_hlds__complexity__V_60_60;
#line 410 "complexity.m"
    MR_String transform_hlds__complexity__V_61_61;
#line 410 "complexity.m"
    MR_String transform_hlds__complexity__V_63_63;
#line 410 "complexity.m"
    MR_String transform_hlds__complexity__V_64_64;
#line 410 "complexity.m"
    MR_Word transform_hlds__complexity__V_67_67;
#line 410 "complexity.m"
    MR_String transform_hlds__complexity__V_68_68;
#line 410 "complexity.m"
    MR_Word transform_hlds__complexity__V_69_69;
#line 410 "complexity.m"
    MR_String transform_hlds__complexity__V_71_71;
#line 410 "complexity.m"
    MR_String transform_hlds__complexity__V_72_72;
#line 410 "complexity.m"
    MR_Word transform_hlds__complexity__V_74_74;
#line 410 "complexity.m"
    MR_Word transform_hlds__complexity__VarSet0_83;
#line 410 "complexity.m"
    MR_Word transform_hlds__complexity__VarTypes0_84;
#line 410 "complexity.m"
    MR_Word transform_hlds__complexity__VarSet_85;
#line 410 "complexity.m"
    MR_Word transform_hlds__complexity__VarTypes_86;
#line 410 "complexity.m"
    MR_Word transform_hlds__complexity__STATE_VARIABLE_ProcInfo_16_87;

#line 251 "complexity.m"
    *transform_hlds__complexity__SlotVarName_21 = (MR_String) "SlotVar";
#line 412 "complexity.m"
    {
#line 412 "complexity.m"
      transform_hlds__complexity__V_37_37 = parse_tree__builtin_lib_types__int_type_0_f_0();
    }
#line 484 "complexity.m"
    {
#line 484 "complexity.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__complexity__STATE_VARIABLE_ProcInfo_0_33, &transform_hlds__complexity__VarSet0_83);
    }
#line 485 "complexity.m"
    {
#line 485 "complexity.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__complexity__STATE_VARIABLE_ProcInfo_0_33, &transform_hlds__complexity__VarTypes0_84);
    }
#line 486 "complexity.m"
    {
#line 486 "complexity.m"
      mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, *transform_hlds__complexity__SlotVarName_21, transform_hlds__complexity__SlotVar_20, transform_hlds__complexity__VarSet0_83, &transform_hlds__complexity__VarSet_85);
    }
#line 487 "complexity.m"
    {
#line 487 "complexity.m"
      hlds__vartypes__add_var_type_4_p_0(*transform_hlds__complexity__SlotVar_20, transform_hlds__complexity__V_37_37, transform_hlds__complexity__VarTypes0_84, &transform_hlds__complexity__VarTypes_86);
    }
#line 488 "complexity.m"
    {
#line 488 "complexity.m"
      hlds__hlds_pred__proc_info_set_varset_3_p_0(transform_hlds__complexity__VarSet_85, transform_hlds__complexity__STATE_VARIABLE_ProcInfo_0_33, &transform_hlds__complexity__STATE_VARIABLE_ProcInfo_16_87);
    }
#line 489 "complexity.m"
    {
#line 489 "complexity.m"
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__complexity__VarTypes_86, transform_hlds__complexity__STATE_VARIABLE_ProcInfo_16_87, &transform_hlds__complexity__STATE_VARIABLE_ProcInfo_38_38);
    }
#line 414 "complexity.m"
    {
#line 414 "complexity.m"
      transform_hlds__complexity__generate_size_goals_13_p_0(transform_hlds__complexity__NumberedVars_14, transform_hlds__complexity__Context_16, transform_hlds__complexity__NumProfiledVars_15, (MR_String) "proc", *transform_hlds__complexity__SlotVarName_21, transform_hlds__complexity__PredId_17, transform_hlds__complexity__STATE_VARIABLE_ProcInfo_38_38, transform_hlds__complexity__STATE_VARIABLE_ProcInfo_34, transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_0_35, transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_36, &transform_hlds__complexity__PrefixGoals_24, &transform_hlds__complexity__ForeignArgs_25, &transform_hlds__complexity__FillCodeStr_26);
    }
#line 418 "complexity.m"
    {
#line 418 "complexity.m"
      transform_hlds__complexity__V_43_43 = parse_tree__prog_mode__out_mode_0_f_0();
    }
#line 418 "complexity.m"
    {
#line 418 "complexity.m"
      transform_hlds__complexity__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 418 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__V_42_42, 0) = ((MR_Box) (*transform_hlds__complexity__SlotVarName_21));
#line 418 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__V_42_42, 1) = ((MR_Box) (transform_hlds__complexity__V_43_43));
#line 418 "complexity.m"
    }
#line 418 "complexity.m"
    {
#line 418 "complexity.m"
      transform_hlds__complexity__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 418 "complexity.m"
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_41_41, 0) = ((MR_Box) (transform_hlds__complexity__V_42_42));
#line 418 "complexity.m"
    }
#line 418 "complexity.m"
    {
#line 418 "complexity.m"
      transform_hlds__complexity__V_44_44 = parse_tree__builtin_lib_types__int_type_0_f_0();
    }
#line 417 "complexity.m"
    {
#line 417 "complexity.m"
      transform_hlds__complexity__SlotVarArg_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 417 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__SlotVarArg_27, 0) = ((MR_Box) (*transform_hlds__complexity__SlotVar_20));
#line 417 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__SlotVarArg_27, 1) = ((MR_Box) (transform_hlds__complexity__V_41_41));
#line 417 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__SlotVarArg_27, 2) = ((MR_Box) (transform_hlds__complexity__V_44_44));
#line 417 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__SlotVarArg_27, 3) = ((MR_Box) ((MR_Integer) 0));
#line 417 "complexity.m"
    }
#line 422 "complexity.m"
    {
#line 422 "complexity.m"
      transform_hlds__complexity__V_54_54 = mercury__string__int_to_string_1_f_0(transform_hlds__complexity__ProcNum_13);
    }
#line 422 "complexity.m"
    {
#line 422 "complexity.m"
      transform_hlds__complexity__V_53_53 = mercury__string__f_43_43_2_f_0(transform_hlds__complexity__V_54_54, (MR_String) ", SlotVar);\n");
    }
#line 421 "complexity.m"
    {
#line 421 "complexity.m"
      transform_hlds__complexity__V_51_51 = mercury__string__f_43_43_2_f_0((MR_String) "(", transform_hlds__complexity__V_53_53);
    }
#line 421 "complexity.m"
    {
#line 421 "complexity.m"
      transform_hlds__complexity__V_50_50 = mercury__string__f_43_43_2_f_0((MR_String) "complexity_call_proc", transform_hlds__complexity__V_51_51);
    }
#line 421 "complexity.m"
    {
#line 421 "complexity.m"
      transform_hlds__complexity__PredCodeStr_30 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_", transform_hlds__complexity__V_50_50);
    }
#line 424 "complexity.m"
    {
#line 424 "complexity.m"
      transform_hlds__complexity__V_64_64 = mercury__string__int_to_string_1_f_0(transform_hlds__complexity__ProcNum_13);
    }
#line 424 "complexity.m"
    {
#line 424 "complexity.m"
      transform_hlds__complexity__V_63_63 = mercury__string__f_43_43_2_f_0(transform_hlds__complexity__V_64_64, (MR_String) "];\n");
    }
#line 423 "complexity.m"
    {
#line 423 "complexity.m"
      transform_hlds__complexity__V_61_61 = mercury__string__f_43_43_2_f_0((MR_String) " = &MR_complexity_procs[", transform_hlds__complexity__V_63_63);
    }
#line 423 "complexity.m"
    {
#line 423 "complexity.m"
      transform_hlds__complexity__V_60_60 = mercury__string__f_43_43_2_f_0((MR_String) "proc", transform_hlds__complexity__V_61_61);
    }
#line 423 "complexity.m"
    {
#line 423 "complexity.m"
      transform_hlds__complexity__ProcStr_31 = mercury__string__f_43_43_2_f_0((MR_String) "\t", transform_hlds__complexity__V_60_60);
    }
#line 425 "complexity.m"
    {
#line 425 "complexity.m"
      transform_hlds__complexity__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 425 "complexity.m"
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_67_67, 0) = ((MR_Box) (transform_hlds__complexity__SlotVarArg_27));
#line 425 "complexity.m"
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 425 "complexity.m"
    }
#line 426 "complexity.m"
    {
#line 426 "complexity.m"
      transform_hlds__complexity__V_72_72 = mercury__string__f_43_43_2_f_0(transform_hlds__complexity__ProcStr_31, transform_hlds__complexity__FillCodeStr_26);
    }
#line 426 "complexity.m"
    {
#line 426 "complexity.m"
      transform_hlds__complexity__V_71_71 = mercury__string__f_43_43_2_f_0(transform_hlds__complexity__PredCodeStr_30, transform_hlds__complexity__V_72_72);
    }
#line 426 "complexity.m"
    {
#line 426 "complexity.m"
      transform_hlds__complexity__V_68_68 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_ComplexityProc *proc;\n", transform_hlds__complexity__V_71_71);
    }
#line 427 "complexity.m"
    {
#line 427 "complexity.m"
      transform_hlds__complexity__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 427 "complexity.m"
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_69_69, 0) = ((MR_Box) (*transform_hlds__complexity__SlotVar_20));
#line 427 "complexity.m"
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_69_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 427 "complexity.m"
    }
#line 425 "complexity.m"
    {
#line 425 "complexity.m"
      transform_hlds__complexity__complexity_generate_foreign_proc_9_p_0((MR_String) "complexity_call_proc", (MR_Integer) 0, transform_hlds__complexity__V_67_67, transform_hlds__complexity__ForeignArgs_25, transform_hlds__complexity__V_68_68, transform_hlds__complexity__V_69_69, *transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_36, transform_hlds__complexity__Context_16, &transform_hlds__complexity__CallGoal_32);
    }
#line 428 "complexity.m"
    {
#line 428 "complexity.m"
      transform_hlds__complexity__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 428 "complexity.m"
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_74_74, 0) = ((MR_Box) (transform_hlds__complexity__CallGoal_32));
#line 428 "complexity.m"
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_74_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 428 "complexity.m"
    }
#line 428 "complexity.m"
    {
#line 428 "complexity.m"
      mercury__list__append_3_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__complexity__PrefixGoals_24, transform_hlds__complexity__V_74_74, transform_hlds__complexity__Goals_22);
#line 428 "complexity.m"
      return;
    }
#line 410 "complexity.m"
  }
#line 404 "complexity.m"
}

#line 253 "complexity.m"
static void MR_CALL 
transform_hlds__complexity__complexity_process_proc_8_p_0(
#line 253 "complexity.m"
  MR_Integer transform_hlds__complexity__NumProcs_9,
#line 253 "complexity.m"
  MR_Integer transform_hlds__complexity__ProcNum_10,
#line 253 "complexity.m"
  MR_String transform_hlds__complexity__FullName_11,
#line 253 "complexity.m"
  MR_Word transform_hlds__complexity__PredId_12,
#line 253 "complexity.m"
  MR_Word transform_hlds__complexity__STATE_VARIABLE_ProcInfo_0_75,
#line 253 "complexity.m"
  MR_Word * transform_hlds__complexity__STATE_VARIABLE_ProcInfo_76,
#line 253 "complexity.m"
  MR_Word transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_0_77,
#line 253 "complexity.m"
  MR_Word * transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_78)
#line 253 "complexity.m"
{
#line 258 "complexity.m"
  {
#line 258 "complexity.m"
    MR_bool transform_hlds__complexity__succeeded;
#line 258 "complexity.m"
    MR_Word transform_hlds__complexity__TypeCtorInfo_235_235;
#line 258 "complexity.m"
    MR_Word transform_hlds__complexity__Detism_15;
#line 258 "complexity.m"
    MR_Word transform_hlds__complexity__CodeModel_16;
#line 258 "complexity.m"
    MR_Word transform_hlds__complexity__HeadVars_17;
#line 258 "complexity.m"
    MR_Word transform_hlds__complexity__ArgModes_18;
#line 258 "complexity.m"
    MR_Word transform_hlds__complexity__VarSet_19;
#line 258 "complexity.m"
    MR_Word transform_hlds__complexity__VarTypes_20;
#line 258 "complexity.m"
    MR_Word transform_hlds__complexity__OrigGoal_21;
#line 258 "complexity.m"
    MR_Word transform_hlds__complexity__Context_22;
#line 258 "complexity.m"
    MR_Word transform_hlds__complexity__OrigGoalInfo_23;
#line 258 "complexity.m"
    MR_Word transform_hlds__complexity__OrigNonLocals_24;
#line 258 "complexity.m"
    MR_Word transform_hlds__complexity__OrigInstMapDelta_26;
#line 258 "complexity.m"
    MR_Word transform_hlds__complexity__ImpureOrigGoalInfo_27;
#line 258 "complexity.m"
    MR_Word transform_hlds__complexity__IsActiveVar_29;
#line 258 "complexity.m"
    MR_Word transform_hlds__complexity__VarInfos_30;
#line 258 "complexity.m"
    MR_Word transform_hlds__complexity__NumberedProfiledVars_31;
#line 258 "complexity.m"
    MR_Integer transform_hlds__complexity__NumProfiledVars_32;
#line 258 "complexity.m"
    MR_Word transform_hlds__complexity__SlotVar_33;
#line 258 "complexity.m"
    MR_String transform_hlds__complexity__SlotVarName_34;
#line 258 "complexity.m"
    MR_Word transform_hlds__complexity__SlotGoals_35;
#line 258 "complexity.m"
    MR_Word transform_hlds__complexity__IsActiveOutputArg_36;
#line 258 "complexity.m"
    MR_Word transform_hlds__complexity__SlotInputArg_37;
#line 258 "complexity.m"
    MR_String transform_hlds__complexity__ProcNumStr_38;
#line 258 "complexity.m"
    MR_String transform_hlds__complexity__IsActiveStr_40;
#line 258 "complexity.m"
    MR_Word transform_hlds__complexity__IsActiveGoal_41;
#line 258 "complexity.m"
    MR_String transform_hlds__complexity__ExitStr_43;
#line 258 "complexity.m"
    MR_Word transform_hlds__complexity__ExitGoal_44;
#line 258 "complexity.m"
    MR_String transform_hlds__complexity__FailStr_46;
#line 258 "complexity.m"
    MR_Word transform_hlds__complexity__FailGoal_47;
#line 258 "complexity.m"
    MR_String transform_hlds__complexity__RedoStr_49;
#line 258 "complexity.m"
    MR_Word transform_hlds__complexity__RedoGoal0_50;
#line 258 "complexity.m"
    MR_Word transform_hlds__complexity__TransGoal_52;
#line 258 "complexity.m"
    MR_Word transform_hlds__complexity__TSPB_62;
#line 258 "complexity.m"
    MR_Word transform_hlds__complexity__TypeCtor_63;
#line 258 "complexity.m"
    MR_Word transform_hlds__complexity__SwitchArms_64;
#line 258 "complexity.m"
    MR_Word transform_hlds__complexity__SwitchExpr_65;
#line 258 "complexity.m"
    MR_Word transform_hlds__complexity__SwitchGoalInfo_66;
#line 258 "complexity.m"
    MR_Word transform_hlds__complexity__SwitchGoal_67;
#line 258 "complexity.m"
    MR_Word transform_hlds__complexity__GoalExpr_68;
#line 258 "complexity.m"
    MR_Word transform_hlds__complexity__GoalInfo_69;
#line 258 "complexity.m"
    MR_Word transform_hlds__complexity__Goal_70;
#line 258 "complexity.m"
    MR_Word transform_hlds__complexity__Infos_71;
#line 258 "complexity.m"
    MR_Word transform_hlds__complexity__ComplexityInfo_72;
#line 258 "complexity.m"
    MR_Word transform_hlds__complexity__ComplexityInfos0_73;
#line 258 "complexity.m"
    MR_Word transform_hlds__complexity__ComplexityInfos_74;
#line 258 "complexity.m"
    MR_Word transform_hlds__complexity__V_80_80;
#line 258 "complexity.m"
    MR_Word transform_hlds__complexity__STATE_VARIABLE_ProcInfo_81_81;
#line 258 "complexity.m"
    MR_Word transform_hlds__complexity__STATE_VARIABLE_ProcInfo_83_83;
#line 258 "complexity.m"
    MR_Word transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_84_84;
#line 258 "complexity.m"
    MR_Word transform_hlds__complexity__V_85_85;
#line 258 "complexity.m"
    MR_Word transform_hlds__complexity__V_86_86;
#line 258 "complexity.m"
    MR_Word transform_hlds__complexity__V_87_87;
#line 258 "complexity.m"
    MR_Word transform_hlds__complexity__V_88_88;
#line 258 "complexity.m"
    MR_Word transform_hlds__complexity__V_90_90;
#line 258 "complexity.m"
    MR_Word transform_hlds__complexity__V_91_91;
#line 258 "complexity.m"
    MR_Word transform_hlds__complexity__V_92_92;
#line 258 "complexity.m"
    MR_Word transform_hlds__complexity__V_93_93;
#line 258 "complexity.m"
    MR_String transform_hlds__complexity__V_96_96;
#line 258 "complexity.m"
    MR_String transform_hlds__complexity__V_97_97;
#line 258 "complexity.m"
    MR_String transform_hlds__complexity__V_99_99;
#line 258 "complexity.m"
    MR_String transform_hlds__complexity__V_100_100;
#line 258 "complexity.m"
    MR_String transform_hlds__complexity__V_101_101;
#line 258 "complexity.m"
    MR_String transform_hlds__complexity__V_103_103;
#line 258 "complexity.m"
    MR_String transform_hlds__complexity__V_104_104;
#line 258 "complexity.m"
    MR_String transform_hlds__complexity__V_106_106;
#line 258 "complexity.m"
    MR_String transform_hlds__complexity__V_107_107;
#line 258 "complexity.m"
    MR_String transform_hlds__complexity__V_109_109;
#line 258 "complexity.m"
    MR_String transform_hlds__complexity__V_110_110;
#line 258 "complexity.m"
    MR_Word transform_hlds__complexity__V_116_116;
#line 258 "complexity.m"
    MR_Word transform_hlds__complexity__V_118_118;
#line 258 "complexity.m"
    MR_String transform_hlds__complexity__V_122_122;
#line 258 "complexity.m"
    MR_String transform_hlds__complexity__V_123_123;
#line 258 "complexity.m"
    MR_String transform_hlds__complexity__V_125_125;
#line 258 "complexity.m"
    MR_String transform_hlds__complexity__V_126_126;
#line 258 "complexity.m"
    MR_String transform_hlds__complexity__V_128_128;
#line 258 "complexity.m"
    MR_String transform_hlds__complexity__V_129_129;
#line 258 "complexity.m"
    MR_Word transform_hlds__complexity__V_132_132;
#line 258 "complexity.m"
    MR_String transform_hlds__complexity__V_137_137;
#line 258 "complexity.m"
    MR_String transform_hlds__complexity__V_138_138;
#line 258 "complexity.m"
    MR_String transform_hlds__complexity__V_140_140;
#line 258 "complexity.m"
    MR_String transform_hlds__complexity__V_141_141;
#line 258 "complexity.m"
    MR_String transform_hlds__complexity__V_143_143;
#line 258 "complexity.m"
    MR_String transform_hlds__complexity__V_144_144;
#line 258 "complexity.m"
    MR_String transform_hlds__complexity__V_152_152;
#line 258 "complexity.m"
    MR_String transform_hlds__complexity__V_153_153;
#line 258 "complexity.m"
    MR_String transform_hlds__complexity__V_155_155;
#line 258 "complexity.m"
    MR_String transform_hlds__complexity__V_156_156;
#line 258 "complexity.m"
    MR_String transform_hlds__complexity__V_158_158;
#line 258 "complexity.m"
    MR_String transform_hlds__complexity__V_159_159;
#line 258 "complexity.m"
    MR_Word transform_hlds__complexity__V_207_207;
#line 258 "complexity.m"
    MR_Word transform_hlds__complexity__V_210_210;
#line 258 "complexity.m"
    MR_Word transform_hlds__complexity__V_211_211;
#line 258 "complexity.m"
    MR_Word transform_hlds__complexity__V_212_212;
#line 258 "complexity.m"
    MR_Word transform_hlds__complexity__V_216_216;
#line 258 "complexity.m"
    MR_Word transform_hlds__complexity__V_217_217;
#line 258 "complexity.m"
    MR_Word transform_hlds__complexity__V_218_218;
#line 258 "complexity.m"
    MR_Word transform_hlds__complexity__V_219_219;
#line 258 "complexity.m"
    MR_Word transform_hlds__complexity__V_227_227;
#line 258 "complexity.m"
    MR_Word transform_hlds__complexity__V_228_228;
#line 272 "complexity.m"
    MR_Word transform_hlds__complexity__V_25_25;

#line 259 "complexity.m"
    {
#line 259 "complexity.m"
      hlds__hlds_pred__proc_info_interface_determinism_2_p_0(transform_hlds__complexity__STATE_VARIABLE_ProcInfo_0_75, &transform_hlds__complexity__Detism_15);
    }
#line 260 "complexity.m"
    {
#line 260 "complexity.m"
      hlds__code_model__determinism_to_code_model_2_p_0(transform_hlds__complexity__Detism_15, &transform_hlds__complexity__CodeModel_16);
    }
#line 261 "complexity.m"
    {
#line 261 "complexity.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__complexity__STATE_VARIABLE_ProcInfo_0_75, &transform_hlds__complexity__HeadVars_17);
    }
#line 262 "complexity.m"
    {
#line 262 "complexity.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__complexity__STATE_VARIABLE_ProcInfo_0_75, &transform_hlds__complexity__ArgModes_18);
    }
#line 263 "complexity.m"
    {
#line 263 "complexity.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__complexity__STATE_VARIABLE_ProcInfo_0_75, &transform_hlds__complexity__VarSet_19);
    }
#line 264 "complexity.m"
    {
#line 264 "complexity.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__complexity__STATE_VARIABLE_ProcInfo_0_75, &transform_hlds__complexity__VarTypes_20);
    }
#line 265 "complexity.m"
    {
#line 265 "complexity.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__complexity__STATE_VARIABLE_ProcInfo_0_75, &transform_hlds__complexity__OrigGoal_21);
    }
#line 2147 "transform_hlds.complexity.c"
    transform_hlds__complexity__TypeCtorInfo_235_235 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 271 "complexity.m"
    {
#line 271 "complexity.m"
      parse_tree__set_of_var__list_to_set_2_p_0(transform_hlds__complexity__TypeCtorInfo_235_235, transform_hlds__complexity__HeadVars_17, &transform_hlds__complexity__OrigNonLocals_24);
    }
#line 272 "complexity.m"
    transform_hlds__complexity__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__complexity__OrigGoal_21, (MR_Integer) 0)));
#line 272 "complexity.m"
    transform_hlds__complexity__OrigGoalInfo_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__complexity__OrigGoal_21, (MR_Integer) 1)));
#line 266 "complexity.m"
    {
#line 266 "complexity.m"
      transform_hlds__complexity__Context_22 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__complexity__OrigGoalInfo_23);
    }
#line 273 "complexity.m"
    {
#line 273 "complexity.m"
      transform_hlds__complexity__OrigInstMapDelta_26 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__complexity__OrigGoalInfo_23);
    }
#line 274 "complexity.m"
    {
#line 274 "complexity.m"
      hlds__hlds_goal__goal_info_set_purity_3_p_0((MR_Integer) 2, transform_hlds__complexity__OrigGoalInfo_23, &transform_hlds__complexity__ImpureOrigGoalInfo_27);
    }
#line 277 "complexity.m"
    {
#line 277 "complexity.m"
      transform_hlds__complexity__V_80_80 = transform_hlds__complexity__is_active_type_0_f_0();
    }
#line 277 "complexity.m"
    {
#line 277 "complexity.m"
      transform_hlds__complexity__generate_new_var_5_p_0((MR_String) "IsActive", transform_hlds__complexity__V_80_80, transform_hlds__complexity__STATE_VARIABLE_ProcInfo_0_75, &transform_hlds__complexity__STATE_VARIABLE_ProcInfo_81_81, &transform_hlds__complexity__IsActiveVar_29);
    }
#line 279 "complexity.m"
    {
#line 279 "complexity.m"
      transform_hlds__complexity__classify_args_6_p_0(transform_hlds__complexity__HeadVars_17, transform_hlds__complexity__ArgModes_18, transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_0_77, transform_hlds__complexity__VarSet_19, transform_hlds__complexity__VarTypes_20, &transform_hlds__complexity__VarInfos_30);
    }
#line 281 "complexity.m"
    {
#line 281 "complexity.m"
      transform_hlds__complexity__allocate_slot_numbers_cl_3_p_0(transform_hlds__complexity__VarInfos_30, (MR_Integer) 0, &transform_hlds__complexity__NumberedProfiledVars_31);
    }
#line 282 "complexity.m"
    {
#line 282 "complexity.m"
      mercury__list__length_2_p_0((MR_Word) &transform_hlds__complexity_scalar_common_2[0], transform_hlds__complexity__NumberedProfiledVars_31, &transform_hlds__complexity__NumProfiledVars_32);
    }
#line 283 "complexity.m"
    {
#line 283 "complexity.m"
      transform_hlds__complexity__generate_slot_goals_12_p_0(transform_hlds__complexity__ProcNum_10, transform_hlds__complexity__NumberedProfiledVars_31, transform_hlds__complexity__NumProfiledVars_32, transform_hlds__complexity__Context_22, transform_hlds__complexity__PredId_12, transform_hlds__complexity__STATE_VARIABLE_ProcInfo_81_81, &transform_hlds__complexity__STATE_VARIABLE_ProcInfo_83_83, transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_0_77, &transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_84_84, &transform_hlds__complexity__SlotVar_33, &transform_hlds__complexity__SlotVarName_34, &transform_hlds__complexity__SlotGoals_35);
    }
#line 288 "complexity.m"
    {
#line 288 "complexity.m"
      transform_hlds__complexity__V_87_87 = parse_tree__prog_mode__out_mode_0_f_0();
    }
#line 288 "complexity.m"
    {
#line 288 "complexity.m"
      transform_hlds__complexity__V_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 288 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__V_86_86, 0) = ((MR_Box) ((MR_String) "IsActive"));
#line 288 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__V_86_86, 1) = ((MR_Box) (transform_hlds__complexity__V_87_87));
#line 288 "complexity.m"
    }
#line 288 "complexity.m"
    {
#line 288 "complexity.m"
      transform_hlds__complexity__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 288 "complexity.m"
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_85_85, 0) = ((MR_Box) (transform_hlds__complexity__V_86_86));
#line 288 "complexity.m"
    }
#line 288 "complexity.m"
    {
#line 288 "complexity.m"
      transform_hlds__complexity__V_88_88 = transform_hlds__complexity__is_active_type_0_f_0();
    }
#line 287 "complexity.m"
    {
#line 287 "complexity.m"
      transform_hlds__complexity__IsActiveOutputArg_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 287 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__IsActiveOutputArg_36, 0) = ((MR_Box) (transform_hlds__complexity__IsActiveVar_29));
#line 287 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__IsActiveOutputArg_36, 1) = ((MR_Box) (transform_hlds__complexity__V_85_85));
#line 287 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__IsActiveOutputArg_36, 2) = ((MR_Box) (transform_hlds__complexity__V_88_88));
#line 287 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__IsActiveOutputArg_36, 3) = ((MR_Box) ((MR_Integer) 0));
#line 287 "complexity.m"
    }
#line 290 "complexity.m"
    {
#line 290 "complexity.m"
      transform_hlds__complexity__V_92_92 = parse_tree__prog_mode__in_mode_0_f_0();
    }
#line 290 "complexity.m"
    {
#line 290 "complexity.m"
      transform_hlds__complexity__V_91_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 290 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__V_91_91, 0) = ((MR_Box) (transform_hlds__complexity__SlotVarName_34));
#line 290 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__V_91_91, 1) = ((MR_Box) (transform_hlds__complexity__V_92_92));
#line 290 "complexity.m"
    }
#line 290 "complexity.m"
    {
#line 290 "complexity.m"
      transform_hlds__complexity__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 290 "complexity.m"
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_90_90, 0) = ((MR_Box) (transform_hlds__complexity__V_91_91));
#line 290 "complexity.m"
    }
#line 290 "complexity.m"
    {
#line 290 "complexity.m"
      transform_hlds__complexity__V_93_93 = parse_tree__builtin_lib_types__int_type_0_f_0();
    }
#line 289 "complexity.m"
    {
#line 289 "complexity.m"
      transform_hlds__complexity__SlotInputArg_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 289 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__SlotInputArg_37, 0) = ((MR_Box) (transform_hlds__complexity__SlotVar_33));
#line 289 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__SlotInputArg_37, 1) = ((MR_Box) (transform_hlds__complexity__V_90_90));
#line 289 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__SlotInputArg_37, 2) = ((MR_Box) (transform_hlds__complexity__V_93_93));
#line 289 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__SlotInputArg_37, 3) = ((MR_Box) ((MR_Integer) 0));
#line 289 "complexity.m"
    }
#line 292 "complexity.m"
    {
#line 292 "complexity.m"
      transform_hlds__complexity__ProcNumStr_38 = mercury__string__int_to_string_1_f_0(transform_hlds__complexity__ProcNum_10);
    }
#line 296 "complexity.m"
    {
#line 296 "complexity.m"
      transform_hlds__complexity__V_100_100 = mercury__string__int_to_string_1_f_0(transform_hlds__complexity__NumProcs_9);
    }
#line 298 "complexity.m"
    {
#line 298 "complexity.m"
      transform_hlds__complexity__V_110_110 = mercury__string__int_to_string_1_f_0(transform_hlds__complexity__NumProfiledVars_32);
    }
#line 298 "complexity.m"
    {
#line 298 "complexity.m"
      transform_hlds__complexity__V_109_109 = mercury__string__f_43_43_2_f_0(transform_hlds__complexity__V_110_110, (MR_String) ", IsActive);\n");
    }
#line 297 "complexity.m"
    {
#line 297 "complexity.m"
      transform_hlds__complexity__V_107_107 = mercury__string__f_43_43_2_f_0((MR_String) "\", ", transform_hlds__complexity__V_109_109);
    }
#line 297 "complexity.m"
    {
#line 297 "complexity.m"
      transform_hlds__complexity__V_106_106 = mercury__string__f_43_43_2_f_0(transform_hlds__complexity__FullName_11, transform_hlds__complexity__V_107_107);
    }
#line 297 "complexity.m"
    {
#line 297 "complexity.m"
      transform_hlds__complexity__V_104_104 = mercury__string__f_43_43_2_f_0((MR_String) ", \"", transform_hlds__complexity__V_106_106);
    }
#line 297 "complexity.m"
    {
#line 297 "complexity.m"
      transform_hlds__complexity__V_103_103 = mercury__string__f_43_43_2_f_0(transform_hlds__complexity__ProcNumStr_38, transform_hlds__complexity__V_104_104);
    }
#line 297 "complexity.m"
    {
#line 297 "complexity.m"
      transform_hlds__complexity__V_101_101 = mercury__string__f_43_43_2_f_0((MR_String) ", ", transform_hlds__complexity__V_103_103);
    }
#line 296 "complexity.m"
    {
#line 296 "complexity.m"
      transform_hlds__complexity__V_99_99 = mercury__string__f_43_43_2_f_0(transform_hlds__complexity__V_100_100, transform_hlds__complexity__V_101_101);
    }
#line 295 "complexity.m"
    {
#line 295 "complexity.m"
      transform_hlds__complexity__V_97_97 = mercury__string__f_43_43_2_f_0((MR_String) "(", transform_hlds__complexity__V_99_99);
    }
#line 295 "complexity.m"
    {
#line 295 "complexity.m"
      transform_hlds__complexity__V_96_96 = mercury__string__f_43_43_2_f_0((MR_String) "complexity_is_active", transform_hlds__complexity__V_97_97);
    }
#line 295 "complexity.m"
    {
#line 295 "complexity.m"
      transform_hlds__complexity__IsActiveStr_40 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_", transform_hlds__complexity__V_96_96);
    }
#line 302 "complexity.m"
    {
#line 302 "complexity.m"
      transform_hlds__complexity__V_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 302 "complexity.m"
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_116_116, 0) = ((MR_Box) (transform_hlds__complexity__IsActiveOutputArg_36));
#line 302 "complexity.m"
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_116_116, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 302 "complexity.m"
    }
#line 302 "complexity.m"
    {
#line 302 "complexity.m"
      transform_hlds__complexity__V_118_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 302 "complexity.m"
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_118_118, 0) = ((MR_Box) (transform_hlds__complexity__IsActiveVar_29));
#line 302 "complexity.m"
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_118_118, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 302 "complexity.m"
    }
#line 301 "complexity.m"
    {
#line 301 "complexity.m"
      transform_hlds__complexity__complexity_generate_foreign_proc_9_p_0((MR_String) "complexity_is_active", (MR_Integer) 0, transform_hlds__complexity__V_116_116, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__complexity__IsActiveStr_40, transform_hlds__complexity__V_118_118, transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_84_84, transform_hlds__complexity__Context_22, &transform_hlds__complexity__IsActiveGoal_41);
    }
#line 307 "complexity.m"
    {
#line 307 "complexity.m"
      transform_hlds__complexity__V_129_129 = transform_hlds__complexity__slot_var_name_0_f_0();
    }
#line 307 "complexity.m"
    {
#line 307 "complexity.m"
      transform_hlds__complexity__V_128_128 = mercury__string__f_43_43_2_f_0(transform_hlds__complexity__V_129_129, (MR_String) ");\n");
    }
#line 307 "complexity.m"
    {
#line 307 "complexity.m"
      transform_hlds__complexity__V_126_126 = mercury__string__f_43_43_2_f_0((MR_String) ", ", transform_hlds__complexity__V_128_128);
    }
#line 307 "complexity.m"
    {
#line 307 "complexity.m"
      transform_hlds__complexity__V_125_125 = mercury__string__f_43_43_2_f_0(transform_hlds__complexity__ProcNumStr_38, transform_hlds__complexity__V_126_126);
    }
#line 306 "complexity.m"
    {
#line 306 "complexity.m"
      transform_hlds__complexity__V_123_123 = mercury__string__f_43_43_2_f_0((MR_String) "(", transform_hlds__complexity__V_125_125);
    }
#line 306 "complexity.m"
    {
#line 306 "complexity.m"
      transform_hlds__complexity__V_122_122 = mercury__string__f_43_43_2_f_0((MR_String) "complexity_exit_proc", transform_hlds__complexity__V_123_123);
    }
#line 306 "complexity.m"
    {
#line 306 "complexity.m"
      transform_hlds__complexity__ExitStr_43 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_", transform_hlds__complexity__V_122_122);
    }
#line 309 "complexity.m"
    {
#line 309 "complexity.m"
      transform_hlds__complexity__V_132_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 309 "complexity.m"
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_132_132, 0) = ((MR_Box) (transform_hlds__complexity__SlotInputArg_37));
#line 309 "complexity.m"
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_132_132, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 309 "complexity.m"
    }
#line 308 "complexity.m"
    {
#line 308 "complexity.m"
      transform_hlds__complexity__complexity_generate_foreign_proc_9_p_0((MR_String) "complexity_exit_proc", (MR_Integer) 0, transform_hlds__complexity__V_132_132, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__complexity__ExitStr_43, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_84_84, transform_hlds__complexity__Context_22, &transform_hlds__complexity__ExitGoal_44);
    }
#line 314 "complexity.m"
    {
#line 314 "complexity.m"
      transform_hlds__complexity__V_144_144 = transform_hlds__complexity__slot_var_name_0_f_0();
    }
#line 314 "complexity.m"
    {
#line 314 "complexity.m"
      transform_hlds__complexity__V_143_143 = mercury__string__f_43_43_2_f_0(transform_hlds__complexity__V_144_144, (MR_String) ");\n");
    }
#line 314 "complexity.m"
    {
#line 314 "complexity.m"
      transform_hlds__complexity__V_141_141 = mercury__string__f_43_43_2_f_0((MR_String) ", ", transform_hlds__complexity__V_143_143);
    }
#line 314 "complexity.m"
    {
#line 314 "complexity.m"
      transform_hlds__complexity__V_140_140 = mercury__string__f_43_43_2_f_0(transform_hlds__complexity__ProcNumStr_38, transform_hlds__complexity__V_141_141);
    }
#line 313 "complexity.m"
    {
#line 313 "complexity.m"
      transform_hlds__complexity__V_138_138 = mercury__string__f_43_43_2_f_0((MR_String) "(", transform_hlds__complexity__V_140_140);
    }
#line 313 "complexity.m"
    {
#line 313 "complexity.m"
      transform_hlds__complexity__V_137_137 = mercury__string__f_43_43_2_f_0((MR_String) "complexity_fail_proc", transform_hlds__complexity__V_138_138);
    }
#line 313 "complexity.m"
    {
#line 313 "complexity.m"
      transform_hlds__complexity__FailStr_46 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_", transform_hlds__complexity__V_137_137);
    }
#line 315 "complexity.m"
    {
#line 315 "complexity.m"
      transform_hlds__complexity__complexity_generate_foreign_proc_9_p_0((MR_String) "complexity_fail_proc", (MR_Integer) 7, transform_hlds__complexity__V_132_132, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__complexity__FailStr_46, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_84_84, transform_hlds__complexity__Context_22, &transform_hlds__complexity__FailGoal_47);
    }
#line 321 "complexity.m"
    {
#line 321 "complexity.m"
      transform_hlds__complexity__V_159_159 = transform_hlds__complexity__slot_var_name_0_f_0();
    }
#line 321 "complexity.m"
    {
#line 321 "complexity.m"
      transform_hlds__complexity__V_158_158 = mercury__string__f_43_43_2_f_0(transform_hlds__complexity__V_159_159, (MR_String) ");\n");
    }
#line 321 "complexity.m"
    {
#line 321 "complexity.m"
      transform_hlds__complexity__V_156_156 = mercury__string__f_43_43_2_f_0((MR_String) ", ", transform_hlds__complexity__V_158_158);
    }
#line 321 "complexity.m"
    {
#line 321 "complexity.m"
      transform_hlds__complexity__V_155_155 = mercury__string__f_43_43_2_f_0(transform_hlds__complexity__ProcNumStr_38, transform_hlds__complexity__V_156_156);
    }
#line 320 "complexity.m"
    {
#line 320 "complexity.m"
      transform_hlds__complexity__V_153_153 = mercury__string__f_43_43_2_f_0((MR_String) "(", transform_hlds__complexity__V_155_155);
    }
#line 320 "complexity.m"
    {
#line 320 "complexity.m"
      transform_hlds__complexity__V_152_152 = mercury__string__f_43_43_2_f_0((MR_String) "complexity_redo_proc", transform_hlds__complexity__V_153_153);
    }
#line 320 "complexity.m"
    {
#line 320 "complexity.m"
      transform_hlds__complexity__RedoStr_49 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_", transform_hlds__complexity__V_152_152);
    }
#line 322 "complexity.m"
    {
#line 322 "complexity.m"
      transform_hlds__complexity__complexity_generate_foreign_proc_9_p_0((MR_String) "complexity_redo_proc", (MR_Integer) 7, transform_hlds__complexity__V_132_132, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__complexity__RedoStr_49, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_84_84, transform_hlds__complexity__Context_22, &transform_hlds__complexity__RedoGoal0_50);
    }
#line 331 "complexity.m"
#line 331 "complexity.m"
    switch (transform_hlds__complexity__CodeModel_16) {
#line 331 "complexity.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 331 "complexity.m"
      case (MR_Integer) 0:
#line 327 "complexity.m"
        {
#line 327 "complexity.m"
          MR_Word transform_hlds__complexity__TransformedGoalExpr_51;
#line 327 "complexity.m"
          MR_Word transform_hlds__complexity__V_203_203;
#line 327 "complexity.m"
          MR_Word transform_hlds__complexity__V_204_204;
#line 327 "complexity.m"
          MR_Word transform_hlds__complexity__V_205_205;

#line 329 "complexity.m"
          {
#line 329 "complexity.m"
            transform_hlds__complexity__V_205_205 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 329 "complexity.m"
            MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_205_205, 0) = ((MR_Box) (transform_hlds__complexity__ExitGoal_44));
#line 329 "complexity.m"
            MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_205_205, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 329 "complexity.m"
          }
#line 329 "complexity.m"
          {
#line 329 "complexity.m"
            transform_hlds__complexity__V_204_204 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 329 "complexity.m"
            MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_204_204, 0) = ((MR_Box) (transform_hlds__complexity__OrigGoal_21));
#line 329 "complexity.m"
            MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_204_204, 1) = ((MR_Box) (transform_hlds__complexity__V_205_205));
#line 329 "complexity.m"
          }
#line 329 "complexity.m"
          {
#line 329 "complexity.m"
            transform_hlds__complexity__V_203_203 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__complexity__SlotGoals_35, transform_hlds__complexity__V_204_204);
          }
#line 328 "complexity.m"
          {
#line 328 "complexity.m"
            transform_hlds__complexity__TransformedGoalExpr_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 328 "complexity.m"
            MR_hl_field(MR_mktag(3), transform_hlds__complexity__TransformedGoalExpr_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 328 "complexity.m"
            MR_hl_field(MR_mktag(3), transform_hlds__complexity__TransformedGoalExpr_51, 1) = ((MR_Box) ((MR_Integer) 0));
#line 328 "complexity.m"
            MR_hl_field(MR_mktag(3), transform_hlds__complexity__TransformedGoalExpr_51, 2) = ((MR_Box) (transform_hlds__complexity__V_203_203));
#line 328 "complexity.m"
          }
#line 330 "complexity.m"
          {
#line 330 "complexity.m"
            transform_hlds__complexity__TransGoal_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 330 "complexity.m"
            MR_hl_field(MR_mktag(0), transform_hlds__complexity__TransGoal_52, 0) = ((MR_Box) (transform_hlds__complexity__TransformedGoalExpr_51));
#line 330 "complexity.m"
            MR_hl_field(MR_mktag(0), transform_hlds__complexity__TransGoal_52, 1) = ((MR_Box) (transform_hlds__complexity__ImpureOrigGoalInfo_27));
#line 330 "complexity.m"
          }
#line 327 "complexity.m"
        }
#line 331 "complexity.m"
        break;
#line 331 "complexity.m"
      case (MR_Integer) 2:
#line 342 "complexity.m"
        {
#line 342 "complexity.m"
          MR_Word transform_hlds__complexity__RedoGoalExpr_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__complexity__RedoGoal0_50, (MR_Integer) 0)));
#line 342 "complexity.m"
          MR_Word transform_hlds__complexity__RedoGoalInfo0_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__complexity__RedoGoal0_50, (MR_Integer) 1)));
#line 342 "complexity.m"
          MR_Word transform_hlds__complexity__RedoGoalInfo_57;
#line 342 "complexity.m"
          MR_Word transform_hlds__complexity__RedoGoal_58;
#line 342 "complexity.m"
          MR_Word transform_hlds__complexity__AfterInstMapDelta_59;
#line 342 "complexity.m"
          MR_Word transform_hlds__complexity__AfterGoalInfo_60;
#line 342 "complexity.m"
          MR_Word transform_hlds__complexity__AfterGoal_61;
#line 342 "complexity.m"
          MR_Word transform_hlds__complexity__V_167_167;
#line 342 "complexity.m"
          MR_Word transform_hlds__complexity__V_170_170;
#line 342 "complexity.m"
          MR_Word transform_hlds__complexity__V_171_171;
#line 342 "complexity.m"
          MR_Word transform_hlds__complexity__V_172_172;
#line 342 "complexity.m"
          MR_Word transform_hlds__complexity__V_174_174;
#line 342 "complexity.m"
          MR_Word transform_hlds__complexity__V_176_176;
#line 342 "complexity.m"
          MR_Word transform_hlds__complexity__V_177_177;
#line 342 "complexity.m"
          MR_Word transform_hlds__complexity__V_179_179;
#line 342 "complexity.m"
          MR_Word transform_hlds__complexity__V_180_180;
#line 342 "complexity.m"
          MR_Word transform_hlds__complexity__V_181_181;
#line 342 "complexity.m"
          MR_Word transform_hlds__complexity__V_183_183;
#line 342 "complexity.m"
          MR_Word transform_hlds__complexity__V_185_185;
#line 342 "complexity.m"
          MR_Word transform_hlds__complexity__V_186_186;
#line 342 "complexity.m"
          MR_Word transform_hlds__complexity__OrigAfterGoal_233;
#line 342 "complexity.m"
          MR_Word transform_hlds__complexity__DisjGoal_234;

#line 344 "complexity.m"
          {
#line 344 "complexity.m"
            hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 6, transform_hlds__complexity__RedoGoalInfo0_56, &transform_hlds__complexity__RedoGoalInfo_57);
          }
#line 346 "complexity.m"
          {
#line 346 "complexity.m"
            transform_hlds__complexity__RedoGoal_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 346 "complexity.m"
            MR_hl_field(MR_mktag(0), transform_hlds__complexity__RedoGoal_58, 0) = ((MR_Box) (transform_hlds__complexity__RedoGoalExpr_55));
#line 346 "complexity.m"
            MR_hl_field(MR_mktag(0), transform_hlds__complexity__RedoGoal_58, 1) = ((MR_Box) (transform_hlds__complexity__RedoGoalInfo_57));
#line 346 "complexity.m"
          }
#line 348 "complexity.m"
          {
#line 348 "complexity.m"
            hlds__instmap__instmap_delta_init_reachable_1_p_0(&transform_hlds__complexity__AfterInstMapDelta_59);
          }
#line 349 "complexity.m"
          {
#line 349 "complexity.m"
            transform_hlds__complexity__V_167_167 = parse_tree__set_of_var__make_singleton_1_f_0(transform_hlds__complexity__TypeCtorInfo_235_235, transform_hlds__complexity__SlotVar_33);
          }
#line 349 "complexity.m"
          {
#line 349 "complexity.m"
            hlds__hlds_goal__goal_info_init_6_p_0(transform_hlds__complexity__V_167_167, transform_hlds__complexity__AfterInstMapDelta_59, (MR_Integer) 2, (MR_Integer) 2, transform_hlds__complexity__Context_22, &transform_hlds__complexity__AfterGoalInfo_60);
          }
#line 351 "complexity.m"
          {
#line 351 "complexity.m"
            transform_hlds__complexity__V_172_172 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 351 "complexity.m"
            MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_172_172, 0) = ((MR_Box) (transform_hlds__complexity__RedoGoal_58));
#line 351 "complexity.m"
            MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_172_172, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 351 "complexity.m"
          }
#line 351 "complexity.m"
          {
#line 351 "complexity.m"
            transform_hlds__complexity__V_171_171 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 351 "complexity.m"
            MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_171_171, 0) = ((MR_Box) (transform_hlds__complexity__ExitGoal_44));
#line 351 "complexity.m"
            MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_171_171, 1) = ((MR_Box) (transform_hlds__complexity__V_172_172));
#line 351 "complexity.m"
          }
#line 351 "complexity.m"
          {
#line 351 "complexity.m"
            transform_hlds__complexity__V_170_170 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 351 "complexity.m"
            MR_hl_field(MR_mktag(3), transform_hlds__complexity__V_170_170, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 351 "complexity.m"
            MR_hl_field(MR_mktag(3), transform_hlds__complexity__V_170_170, 1) = ((MR_Box) (transform_hlds__complexity__V_171_171));
#line 351 "complexity.m"
          }
#line 351 "complexity.m"
          {
#line 351 "complexity.m"
            transform_hlds__complexity__AfterGoal_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 351 "complexity.m"
            MR_hl_field(MR_mktag(0), transform_hlds__complexity__AfterGoal_61, 0) = ((MR_Box) (transform_hlds__complexity__V_170_170));
#line 351 "complexity.m"
            MR_hl_field(MR_mktag(0), transform_hlds__complexity__AfterGoal_61, 1) = ((MR_Box) (transform_hlds__complexity__AfterGoalInfo_60));
#line 351 "complexity.m"
          }
#line 354 "complexity.m"
          {
#line 354 "complexity.m"
            transform_hlds__complexity__V_177_177 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 354 "complexity.m"
            MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_177_177, 0) = ((MR_Box) (transform_hlds__complexity__AfterGoal_61));
#line 354 "complexity.m"
            MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_177_177, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 354 "complexity.m"
          }
#line 354 "complexity.m"
          {
#line 354 "complexity.m"
            transform_hlds__complexity__V_176_176 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 354 "complexity.m"
            MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_176_176, 0) = ((MR_Box) (transform_hlds__complexity__OrigGoal_21));
#line 354 "complexity.m"
            MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_176_176, 1) = ((MR_Box) (transform_hlds__complexity__V_177_177));
#line 354 "complexity.m"
          }
#line 354 "complexity.m"
          {
#line 354 "complexity.m"
            transform_hlds__complexity__V_174_174 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 354 "complexity.m"
            MR_hl_field(MR_mktag(3), transform_hlds__complexity__V_174_174, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 354 "complexity.m"
            MR_hl_field(MR_mktag(3), transform_hlds__complexity__V_174_174, 1) = ((MR_Box) ((MR_Integer) 0));
#line 354 "complexity.m"
            MR_hl_field(MR_mktag(3), transform_hlds__complexity__V_174_174, 2) = ((MR_Box) (transform_hlds__complexity__V_176_176));
#line 354 "complexity.m"
          }
#line 353 "complexity.m"
          {
#line 353 "complexity.m"
            transform_hlds__complexity__OrigAfterGoal_233 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 353 "complexity.m"
            MR_hl_field(MR_mktag(0), transform_hlds__complexity__OrigAfterGoal_233, 0) = ((MR_Box) (transform_hlds__complexity__V_174_174));
#line 353 "complexity.m"
            MR_hl_field(MR_mktag(0), transform_hlds__complexity__OrigAfterGoal_233, 1) = ((MR_Box) (transform_hlds__complexity__ImpureOrigGoalInfo_27));
#line 353 "complexity.m"
          }
#line 357 "complexity.m"
          {
#line 357 "complexity.m"
            transform_hlds__complexity__V_181_181 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 357 "complexity.m"
            MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_181_181, 0) = ((MR_Box) (transform_hlds__complexity__FailGoal_47));
#line 357 "complexity.m"
            MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_181_181, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 357 "complexity.m"
          }
#line 357 "complexity.m"
          {
#line 357 "complexity.m"
            transform_hlds__complexity__V_180_180 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 357 "complexity.m"
            MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_180_180, 0) = ((MR_Box) (transform_hlds__complexity__OrigAfterGoal_233));
#line 357 "complexity.m"
            MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_180_180, 1) = ((MR_Box) (transform_hlds__complexity__V_181_181));
#line 357 "complexity.m"
          }
#line 357 "complexity.m"
          {
#line 357 "complexity.m"
            transform_hlds__complexity__V_179_179 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 357 "complexity.m"
            MR_hl_field(MR_mktag(3), transform_hlds__complexity__V_179_179, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 357 "complexity.m"
            MR_hl_field(MR_mktag(3), transform_hlds__complexity__V_179_179, 1) = ((MR_Box) (transform_hlds__complexity__V_180_180));
#line 357 "complexity.m"
          }
#line 356 "complexity.m"
          {
#line 356 "complexity.m"
            transform_hlds__complexity__DisjGoal_234 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 356 "complexity.m"
            MR_hl_field(MR_mktag(0), transform_hlds__complexity__DisjGoal_234, 0) = ((MR_Box) (transform_hlds__complexity__V_179_179));
#line 356 "complexity.m"
            MR_hl_field(MR_mktag(0), transform_hlds__complexity__DisjGoal_234, 1) = ((MR_Box) (transform_hlds__complexity__ImpureOrigGoalInfo_27));
#line 356 "complexity.m"
          }
#line 360 "complexity.m"
          {
#line 360 "complexity.m"
            transform_hlds__complexity__V_186_186 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 360 "complexity.m"
            MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_186_186, 0) = ((MR_Box) (transform_hlds__complexity__DisjGoal_234));
#line 360 "complexity.m"
            MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_186_186, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 360 "complexity.m"
          }
#line 360 "complexity.m"
          {
#line 360 "complexity.m"
            transform_hlds__complexity__V_185_185 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__complexity__SlotGoals_35, transform_hlds__complexity__V_186_186);
          }
#line 360 "complexity.m"
          {
#line 360 "complexity.m"
            transform_hlds__complexity__V_183_183 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 360 "complexity.m"
            MR_hl_field(MR_mktag(3), transform_hlds__complexity__V_183_183, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 360 "complexity.m"
            MR_hl_field(MR_mktag(3), transform_hlds__complexity__V_183_183, 1) = ((MR_Box) ((MR_Integer) 0));
#line 360 "complexity.m"
            MR_hl_field(MR_mktag(3), transform_hlds__complexity__V_183_183, 2) = ((MR_Box) (transform_hlds__complexity__V_185_185));
#line 360 "complexity.m"
          }
#line 359 "complexity.m"
          {
#line 359 "complexity.m"
            transform_hlds__complexity__TransGoal_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 359 "complexity.m"
            MR_hl_field(MR_mktag(0), transform_hlds__complexity__TransGoal_52, 0) = ((MR_Box) (transform_hlds__complexity__V_183_183));
#line 359 "complexity.m"
            MR_hl_field(MR_mktag(0), transform_hlds__complexity__TransGoal_52, 1) = ((MR_Box) (transform_hlds__complexity__ImpureOrigGoalInfo_27));
#line 359 "complexity.m"
          }
#line 342 "complexity.m"
        }
#line 331 "complexity.m"
        break;
#line 331 "complexity.m"
      case (MR_Integer) 1:
#line 332 "complexity.m"
        {
#line 332 "complexity.m"
          MR_Word transform_hlds__complexity__OrigAfterGoal_53;
#line 332 "complexity.m"
          MR_Word transform_hlds__complexity__DisjGoal_54;
#line 332 "complexity.m"
          MR_Word transform_hlds__complexity__V_188_188;
#line 332 "complexity.m"
          MR_Word transform_hlds__complexity__V_190_190;
#line 332 "complexity.m"
          MR_Word transform_hlds__complexity__V_191_191;
#line 332 "complexity.m"
          MR_Word transform_hlds__complexity__V_193_193;
#line 332 "complexity.m"
          MR_Word transform_hlds__complexity__V_194_194;
#line 332 "complexity.m"
          MR_Word transform_hlds__complexity__V_195_195;
#line 332 "complexity.m"
          MR_Word transform_hlds__complexity__V_197_197;
#line 332 "complexity.m"
          MR_Word transform_hlds__complexity__V_199_199;
#line 332 "complexity.m"
          MR_Word transform_hlds__complexity__V_200_200;

#line 333 "complexity.m"
          {
#line 333 "complexity.m"
            transform_hlds__complexity__V_191_191 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 333 "complexity.m"
            MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_191_191, 0) = ((MR_Box) (transform_hlds__complexity__ExitGoal_44));
#line 333 "complexity.m"
            MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_191_191, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 333 "complexity.m"
          }
#line 333 "complexity.m"
          {
#line 333 "complexity.m"
            transform_hlds__complexity__V_190_190 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 333 "complexity.m"
            MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_190_190, 0) = ((MR_Box) (transform_hlds__complexity__OrigGoal_21));
#line 333 "complexity.m"
            MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_190_190, 1) = ((MR_Box) (transform_hlds__complexity__V_191_191));
#line 333 "complexity.m"
          }
#line 333 "complexity.m"
          {
#line 333 "complexity.m"
            transform_hlds__complexity__V_188_188 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 333 "complexity.m"
            MR_hl_field(MR_mktag(3), transform_hlds__complexity__V_188_188, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 333 "complexity.m"
            MR_hl_field(MR_mktag(3), transform_hlds__complexity__V_188_188, 1) = ((MR_Box) ((MR_Integer) 0));
#line 333 "complexity.m"
            MR_hl_field(MR_mktag(3), transform_hlds__complexity__V_188_188, 2) = ((MR_Box) (transform_hlds__complexity__V_190_190));
#line 333 "complexity.m"
          }
#line 333 "complexity.m"
          {
#line 333 "complexity.m"
            transform_hlds__complexity__OrigAfterGoal_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 333 "complexity.m"
            MR_hl_field(MR_mktag(0), transform_hlds__complexity__OrigAfterGoal_53, 0) = ((MR_Box) (transform_hlds__complexity__V_188_188));
#line 333 "complexity.m"
            MR_hl_field(MR_mktag(0), transform_hlds__complexity__OrigAfterGoal_53, 1) = ((MR_Box) (transform_hlds__complexity__ImpureOrigGoalInfo_27));
#line 333 "complexity.m"
          }
#line 336 "complexity.m"
          {
#line 336 "complexity.m"
            transform_hlds__complexity__V_195_195 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 336 "complexity.m"
            MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_195_195, 0) = ((MR_Box) (transform_hlds__complexity__FailGoal_47));
#line 336 "complexity.m"
            MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_195_195, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 336 "complexity.m"
          }
#line 336 "complexity.m"
          {
#line 336 "complexity.m"
            transform_hlds__complexity__V_194_194 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 336 "complexity.m"
            MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_194_194, 0) = ((MR_Box) (transform_hlds__complexity__OrigAfterGoal_53));
#line 336 "complexity.m"
            MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_194_194, 1) = ((MR_Box) (transform_hlds__complexity__V_195_195));
#line 336 "complexity.m"
          }
#line 336 "complexity.m"
          {
#line 336 "complexity.m"
            transform_hlds__complexity__V_193_193 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 336 "complexity.m"
            MR_hl_field(MR_mktag(3), transform_hlds__complexity__V_193_193, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 336 "complexity.m"
            MR_hl_field(MR_mktag(3), transform_hlds__complexity__V_193_193, 1) = ((MR_Box) (transform_hlds__complexity__V_194_194));
#line 336 "complexity.m"
          }
#line 335 "complexity.m"
          {
#line 335 "complexity.m"
            transform_hlds__complexity__DisjGoal_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 335 "complexity.m"
            MR_hl_field(MR_mktag(0), transform_hlds__complexity__DisjGoal_54, 0) = ((MR_Box) (transform_hlds__complexity__V_193_193));
#line 335 "complexity.m"
            MR_hl_field(MR_mktag(0), transform_hlds__complexity__DisjGoal_54, 1) = ((MR_Box) (transform_hlds__complexity__ImpureOrigGoalInfo_27));
#line 335 "complexity.m"
          }
#line 339 "complexity.m"
          {
#line 339 "complexity.m"
            transform_hlds__complexity__V_200_200 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 339 "complexity.m"
            MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_200_200, 0) = ((MR_Box) (transform_hlds__complexity__DisjGoal_54));
#line 339 "complexity.m"
            MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_200_200, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 339 "complexity.m"
          }
#line 339 "complexity.m"
          {
#line 339 "complexity.m"
            transform_hlds__complexity__V_199_199 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__complexity__SlotGoals_35, transform_hlds__complexity__V_200_200);
          }
#line 339 "complexity.m"
          {
#line 339 "complexity.m"
            transform_hlds__complexity__V_197_197 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 339 "complexity.m"
            MR_hl_field(MR_mktag(3), transform_hlds__complexity__V_197_197, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 339 "complexity.m"
            MR_hl_field(MR_mktag(3), transform_hlds__complexity__V_197_197, 1) = ((MR_Box) ((MR_Integer) 0));
#line 339 "complexity.m"
            MR_hl_field(MR_mktag(3), transform_hlds__complexity__V_197_197, 2) = ((MR_Box) (transform_hlds__complexity__V_199_199));
#line 339 "complexity.m"
          }
#line 338 "complexity.m"
          {
#line 338 "complexity.m"
            transform_hlds__complexity__TransGoal_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 338 "complexity.m"
            MR_hl_field(MR_mktag(0), transform_hlds__complexity__TransGoal_52, 0) = ((MR_Box) (transform_hlds__complexity__V_197_197));
#line 338 "complexity.m"
            MR_hl_field(MR_mktag(0), transform_hlds__complexity__TransGoal_52, 1) = ((MR_Box) (transform_hlds__complexity__ImpureOrigGoalInfo_27));
#line 338 "complexity.m"
          }
#line 332 "complexity.m"
        }
#line 331 "complexity.m"
        break;
#line 331 "complexity.m"
    }
#line 364 "complexity.m"
    {
#line 364 "complexity.m"
      transform_hlds__complexity__TSPB_62 = mdbcomp__builtin_modules__mercury_term_size_prof_builtin_module_0_f_0();
    }
#line 365 "complexity.m"
    {
#line 365 "complexity.m"
      transform_hlds__complexity__V_207_207 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 365 "complexity.m"
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_207_207, 0) = ((MR_Box) (transform_hlds__complexity__TSPB_62));
#line 365 "complexity.m"
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_207_207, 1) = ((MR_Box) ((MR_String) "complexity_is_active"));
#line 365 "complexity.m"
    }
#line 365 "complexity.m"
    {
#line 365 "complexity.m"
      transform_hlds__complexity__TypeCtor_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 365 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__TypeCtor_63, 0) = ((MR_Box) (transform_hlds__complexity__V_207_207));
#line 365 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__TypeCtor_63, 1) = ((MR_Box) ((MR_Integer) 0));
#line 365 "complexity.m"
    }
#line 367 "complexity.m"
    {
#line 367 "complexity.m"
      transform_hlds__complexity__V_212_212 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 367 "complexity.m"
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_212_212, 0) = ((MR_Box) (transform_hlds__complexity__TSPB_62));
#line 367 "complexity.m"
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_212_212, 1) = ((MR_Box) ((MR_String) "is_inactive"));
#line 367 "complexity.m"
    }
#line 367 "complexity.m"
    {
#line 367 "complexity.m"
      transform_hlds__complexity__V_211_211 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 367 "complexity.m"
      MR_hl_field(MR_mktag(3), transform_hlds__complexity__V_211_211, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 367 "complexity.m"
      MR_hl_field(MR_mktag(3), transform_hlds__complexity__V_211_211, 1) = ((MR_Box) (transform_hlds__complexity__V_212_212));
#line 367 "complexity.m"
      MR_hl_field(MR_mktag(3), transform_hlds__complexity__V_211_211, 2) = ((MR_Box) ((MR_Integer) 0));
#line 367 "complexity.m"
      MR_hl_field(MR_mktag(3), transform_hlds__complexity__V_211_211, 3) = ((MR_Box) (transform_hlds__complexity__TypeCtor_63));
#line 367 "complexity.m"
    }
#line 367 "complexity.m"
    {
#line 367 "complexity.m"
      transform_hlds__complexity__V_210_210 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 367 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__V_210_210, 0) = ((MR_Box) (transform_hlds__complexity__V_211_211));
#line 367 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__V_210_210, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 367 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__V_210_210, 2) = ((MR_Box) (transform_hlds__complexity__TransGoal_52));
#line 367 "complexity.m"
    }
#line 368 "complexity.m"
    {
#line 368 "complexity.m"
      transform_hlds__complexity__V_219_219 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 368 "complexity.m"
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_219_219, 0) = ((MR_Box) (transform_hlds__complexity__TSPB_62));
#line 368 "complexity.m"
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_219_219, 1) = ((MR_Box) ((MR_String) "is_active"));
#line 368 "complexity.m"
    }
#line 368 "complexity.m"
    {
#line 368 "complexity.m"
      transform_hlds__complexity__V_218_218 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 368 "complexity.m"
      MR_hl_field(MR_mktag(3), transform_hlds__complexity__V_218_218, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 368 "complexity.m"
      MR_hl_field(MR_mktag(3), transform_hlds__complexity__V_218_218, 1) = ((MR_Box) (transform_hlds__complexity__V_219_219));
#line 368 "complexity.m"
      MR_hl_field(MR_mktag(3), transform_hlds__complexity__V_218_218, 2) = ((MR_Box) ((MR_Integer) 0));
#line 368 "complexity.m"
      MR_hl_field(MR_mktag(3), transform_hlds__complexity__V_218_218, 3) = ((MR_Box) (transform_hlds__complexity__TypeCtor_63));
#line 368 "complexity.m"
    }
#line 368 "complexity.m"
    {
#line 368 "complexity.m"
      transform_hlds__complexity__V_217_217 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 368 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__V_217_217, 0) = ((MR_Box) (transform_hlds__complexity__V_218_218));
#line 368 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__V_217_217, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 368 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__V_217_217, 2) = ((MR_Box) (transform_hlds__complexity__OrigGoal_21));
#line 368 "complexity.m"
    }
#line 369 "complexity.m"
    {
#line 369 "complexity.m"
      transform_hlds__complexity__V_216_216 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 369 "complexity.m"
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_216_216, 0) = ((MR_Box) (transform_hlds__complexity__V_217_217));
#line 369 "complexity.m"
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_216_216, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 369 "complexity.m"
    }
#line 367 "complexity.m"
    {
#line 367 "complexity.m"
      transform_hlds__complexity__SwitchArms_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 367 "complexity.m"
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__SwitchArms_64, 0) = ((MR_Box) (transform_hlds__complexity__V_210_210));
#line 367 "complexity.m"
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__SwitchArms_64, 1) = ((MR_Box) (transform_hlds__complexity__V_216_216));
#line 367 "complexity.m"
    }
#line 371 "complexity.m"
    {
#line 371 "complexity.m"
      transform_hlds__complexity__SwitchExpr_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 371 "complexity.m"
      MR_hl_field(MR_mktag(3), transform_hlds__complexity__SwitchExpr_65, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 371 "complexity.m"
      MR_hl_field(MR_mktag(3), transform_hlds__complexity__SwitchExpr_65, 1) = ((MR_Box) (transform_hlds__complexity__IsActiveVar_29));
#line 371 "complexity.m"
      MR_hl_field(MR_mktag(3), transform_hlds__complexity__SwitchExpr_65, 2) = ((MR_Box) ((MR_Integer) 1));
#line 371 "complexity.m"
      MR_hl_field(MR_mktag(3), transform_hlds__complexity__SwitchExpr_65, 3) = ((MR_Box) (transform_hlds__complexity__SwitchArms_64));
#line 371 "complexity.m"
    }
#line 372 "complexity.m"
    {
#line 372 "complexity.m"
      hlds__hlds_goal__goal_info_init_6_p_0(transform_hlds__complexity__OrigNonLocals_24, transform_hlds__complexity__OrigInstMapDelta_26, transform_hlds__complexity__Detism_15, (MR_Integer) 2, transform_hlds__complexity__Context_22, &transform_hlds__complexity__SwitchGoalInfo_66);
    }
#line 374 "complexity.m"
    {
#line 374 "complexity.m"
      transform_hlds__complexity__SwitchGoal_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 374 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__SwitchGoal_67, 0) = ((MR_Box) (transform_hlds__complexity__SwitchExpr_65));
#line 374 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__SwitchGoal_67, 1) = ((MR_Box) (transform_hlds__complexity__SwitchGoalInfo_66));
#line 374 "complexity.m"
    }
#line 376 "complexity.m"
    {
#line 376 "complexity.m"
      transform_hlds__complexity__V_228_228 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 376 "complexity.m"
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_228_228, 0) = ((MR_Box) (transform_hlds__complexity__SwitchGoal_67));
#line 376 "complexity.m"
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_228_228, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 376 "complexity.m"
    }
#line 376 "complexity.m"
    {
#line 376 "complexity.m"
      transform_hlds__complexity__V_227_227 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 376 "complexity.m"
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_227_227, 0) = ((MR_Box) (transform_hlds__complexity__IsActiveGoal_41));
#line 376 "complexity.m"
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__V_227_227, 1) = ((MR_Box) (transform_hlds__complexity__V_228_228));
#line 376 "complexity.m"
    }
#line 376 "complexity.m"
    {
#line 376 "complexity.m"
      transform_hlds__complexity__GoalExpr_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 376 "complexity.m"
      MR_hl_field(MR_mktag(3), transform_hlds__complexity__GoalExpr_68, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 376 "complexity.m"
      MR_hl_field(MR_mktag(3), transform_hlds__complexity__GoalExpr_68, 1) = ((MR_Box) ((MR_Integer) 0));
#line 376 "complexity.m"
      MR_hl_field(MR_mktag(3), transform_hlds__complexity__GoalExpr_68, 2) = ((MR_Box) (transform_hlds__complexity__V_227_227));
#line 376 "complexity.m"
    }
#line 377 "complexity.m"
    {
#line 377 "complexity.m"
      hlds__hlds_goal__goal_info_init_6_p_0(transform_hlds__complexity__OrigNonLocals_24, transform_hlds__complexity__OrigInstMapDelta_26, transform_hlds__complexity__Detism_15, (MR_Integer) 2, transform_hlds__complexity__Context_22, &transform_hlds__complexity__GoalInfo_69);
    }
#line 379 "complexity.m"
    {
#line 379 "complexity.m"
      transform_hlds__complexity__Goal_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 379 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__Goal_70, 0) = ((MR_Box) (transform_hlds__complexity__GoalExpr_68));
#line 379 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__Goal_70, 1) = ((MR_Box) (transform_hlds__complexity__GoalInfo_69));
#line 379 "complexity.m"
    }
#line 381 "complexity.m"
    {
#line 381 "complexity.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__complexity__Goal_70, transform_hlds__complexity__STATE_VARIABLE_ProcInfo_83_83, transform_hlds__complexity__STATE_VARIABLE_ProcInfo_76);
    }
#line 383 "complexity.m"
    {
#line 383 "complexity.m"
      mercury__assoc_list__values_2_p_0((MR_Word) &transform_hlds__complexity_scalar_common_1[0], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_complexity_arg_info_0, transform_hlds__complexity__VarInfos_30, &transform_hlds__complexity__Infos_71);
    }
#line 384 "complexity.m"
    {
#line 384 "complexity.m"
      transform_hlds__complexity__ComplexityInfo_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 384 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__ComplexityInfo_72, 0) = ((MR_Box) (transform_hlds__complexity__ProcNum_10));
#line 384 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__ComplexityInfo_72, 1) = ((MR_Box) (transform_hlds__complexity__FullName_11));
#line 384 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__ComplexityInfo_72, 2) = ((MR_Box) (transform_hlds__complexity__Infos_71));
#line 384 "complexity.m"
    }
#line 385 "complexity.m"
    {
#line 385 "complexity.m"
      hlds__hlds_module__module_info_get_complexity_proc_infos_2_p_0(transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_84_84, &transform_hlds__complexity__ComplexityInfos0_73);
    }
#line 386 "complexity.m"
    {
#line 386 "complexity.m"
      transform_hlds__complexity__ComplexityInfos_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 386 "complexity.m"
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__ComplexityInfos_74, 0) = ((MR_Box) (transform_hlds__complexity__ComplexityInfo_72));
#line 386 "complexity.m"
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__ComplexityInfos_74, 1) = ((MR_Box) (transform_hlds__complexity__ComplexityInfos0_73));
#line 386 "complexity.m"
    }
#line 387 "complexity.m"
    {
#line 387 "complexity.m"
      hlds__hlds_module__module_info_set_complexity_proc_infos_3_p_0(transform_hlds__complexity__ComplexityInfos_74, transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_84_84, transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_78);
#line 387 "complexity.m"
      return;
    }
#line 258 "complexity.m"
  }
#line 253 "complexity.m"
}

#line 249 "complexity.m"
static MR_String MR_CALL 
transform_hlds__complexity__slot_var_name_0_f_0(void)
#line 249 "complexity.m"
{
#line 251 "complexity.m"
  {
#line 251 "complexity.m"
    MR_bool transform_hlds__complexity__succeeded;

#line 251 "complexity.m"
    return (MR_String) "SlotVar";
#line 251 "complexity.m"
  }
#line 249 "complexity.m"
}

#line 130 "complexity.m"
static MR_bool MR_CALL 
transform_hlds__complexity__read_spec_file_lines_8_p_0_1(
#line 130 "complexity.m"
  MR_Box transform_hlds__complexity__closure_arg,
#line 130 "complexity.m"
  MR_Box transform_hlds__complexity__wrapper_arg_1)
#line 130 "complexity.m"
{
#line 130 "complexity.m"
  {
#line 130 "complexity.m"
    MR_bool transform_hlds__complexity__succeeded;
#line 130 "complexity.m"
    MR_Box transform_hlds__complexity__closure = transform_hlds__complexity__closure_arg;

#line 130 "complexity.m"
    {
#line 130 "complexity.m"
      return transform_hlds__complexity__succeeded = transform_hlds__complexity__IntroducedFrom__pred__read_spec_file_lines__130__1_2_p_0(((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__complexity__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) transform_hlds__complexity__wrapper_arg_1));
    }
#line 130 "complexity.m"
    return transform_hlds__complexity__succeeded;
#line 130 "complexity.m"
  }
#line 130 "complexity.m"
}

#line 113 "complexity.m"
static void MR_CALL 
transform_hlds__complexity__read_spec_file_lines_8_p_0(
#line 113 "complexity.m"
  MR_Word transform_hlds__complexity__Stream_9,
#line 113 "complexity.m"
  MR_Integer transform_hlds__complexity__CurLineNum_10,
#line 113 "complexity.m"
  MR_Integer * transform_hlds__complexity__NumLines_11,
#line 113 "complexity.m"
  MR_Word * transform_hlds__complexity__MaybeError_12,
#line 113 "complexity.m"
  MR_Word transform_hlds__complexity__STATE_VARIABLE_ProcMap_0_21,
#line 113 "complexity.m"
  MR_Word * transform_hlds__complexity__STATE_VARIABLE_ProcMap_22)
#line 113 "complexity.m"
{
#line 118 "complexity.m"
  while (MR_TRUE)
#line 118 "complexity.m"
    {
#line 118 "complexity.m"
      /* tailcall optimized into a loop */
#line 118 "complexity.m"
      {
#line 118 "complexity.m"
        MR_bool transform_hlds__complexity__succeeded;
#line 118 "complexity.m"
        MR_Word transform_hlds__complexity__ResLine_15;

#line 119 "complexity.m"
        {
#line 119 "complexity.m"
          mercury__io__read_line_4_p_0(transform_hlds__complexity__Stream_9, &transform_hlds__complexity__ResLine_15);
        }
#line 124 "complexity.m"
#line 124 "complexity.m"
        switch (MR_tag((MR_Word) transform_hlds__complexity__ResLine_15)) {
#line 124 "complexity.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 124 "complexity.m"
          case (MR_Integer) 0:
#line 121 "complexity.m"
            {
#line 122 "complexity.m"
              *transform_hlds__complexity__NumLines_11 = transform_hlds__complexity__CurLineNum_10;
#line 123 "complexity.m"
              *transform_hlds__complexity__MaybeError_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 121 "complexity.m"
              *transform_hlds__complexity__STATE_VARIABLE_ProcMap_22 = transform_hlds__complexity__STATE_VARIABLE_ProcMap_0_21;
#line 121 "complexity.m"
            }
#line 124 "complexity.m"
            break;
#line 124 "complexity.m"
          case (MR_Integer) 1:
#line 129 "complexity.m"
            {
#line 129 "complexity.m"
              MR_Word transform_hlds__complexity__Chars0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__complexity__ResLine_15, (MR_Integer) 0)));
#line 129 "complexity.m"
              MR_Word transform_hlds__complexity__Chars_19;
#line 129 "complexity.m"
              MR_String transform_hlds__complexity__ProcName_20;
#line 130 "complexity.m"
              MR_Word transform_hlds__complexity__V_18_18;
#line 135 "complexity.m"
              MR_Word transform_hlds__complexity__STATE_VARIABLE_ProcMap_28_28;

#line 130 "complexity.m"
              {
#line 130 "complexity.m"
                mercury__list__filter_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, (MR_Word) &transform_hlds__complexity_scalar_common_4[0], transform_hlds__complexity__Chars0_17, &transform_hlds__complexity__V_18_18, &transform_hlds__complexity__Chars_19);
              }
#line 131 "complexity.m"
              {
#line 131 "complexity.m"
                mercury__string__from_char_list_2_p_0(transform_hlds__complexity__Chars_19, &transform_hlds__complexity__ProcName_20);
              }
#line 132 "complexity.m"
              {
#line 132 "complexity.m"
                transform_hlds__complexity__succeeded = mercury__map__insert_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (transform_hlds__complexity__ProcName_20)), ((MR_Box) (transform_hlds__complexity__CurLineNum_10)), transform_hlds__complexity__STATE_VARIABLE_ProcMap_0_21, &transform_hlds__complexity__STATE_VARIABLE_ProcMap_28_28);
              }
#line 135 "complexity.m"
              if (transform_hlds__complexity__succeeded)
#line 133 "complexity.m"
                {
#line 133 "complexity.m"
                  MR_Integer transform_hlds__complexity__V_29_29 = (transform_hlds__complexity__CurLineNum_10 + (MR_Integer) 1);

#line 133 "complexity.m"
                  /* direct tailcall eliminated */
#line 133 "complexity.m"
                  {
#line 133 "complexity.m"
                    MR_Integer transform_hlds__complexity__CurLineNum__tmp_copy_10 = transform_hlds__complexity__V_29_29;
#line 133 "complexity.m"
                    MR_Word transform_hlds__complexity__STATE_VARIABLE_ProcMap_0__tmp_copy_21 = transform_hlds__complexity__STATE_VARIABLE_ProcMap_28_28;

#line 133 "complexity.m"
                    transform_hlds__complexity__STATE_VARIABLE_ProcMap_0_21 = transform_hlds__complexity__STATE_VARIABLE_ProcMap_0__tmp_copy_21;
#line 133 "complexity.m"
                    transform_hlds__complexity__CurLineNum_10 = transform_hlds__complexity__CurLineNum__tmp_copy_10;
#line 133 "complexity.m"
                  }
#line 133 "complexity.m"
                  continue;
#line 133 "complexity.m"
                }
#line 135 "complexity.m"
              else
#line 136 "complexity.m"
                {
#line 136 "complexity.m"
                  MR_String transform_hlds__complexity__V_33_33;

#line 136 "complexity.m"
                  *transform_hlds__complexity__NumLines_11 = transform_hlds__complexity__CurLineNum_10;
#line 137 "complexity.m"
                  {
#line 137 "complexity.m"
                    transform_hlds__complexity__V_33_33 = mercury__string__f_43_43_2_f_0((MR_String) "repeated line: ", transform_hlds__complexity__ProcName_20);
                  }
#line 137 "complexity.m"
                  {
#line 137 "complexity.m"
                    MR_Word base;
#line 137 "complexity.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 137 "complexity.m"
                    *transform_hlds__complexity__MaybeError_12 = base;
#line 137 "complexity.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__complexity__V_33_33));
#line 137 "complexity.m"
                  }
#line 136 "complexity.m"
                  *transform_hlds__complexity__STATE_VARIABLE_ProcMap_22 = transform_hlds__complexity__STATE_VARIABLE_ProcMap_0_21;
#line 136 "complexity.m"
                }
#line 129 "complexity.m"
            }
#line 124 "complexity.m"
            break;
#line 124 "complexity.m"
          case (MR_Integer) 2:
#line 125 "complexity.m"
            {
#line 125 "complexity.m"
              MR_Word transform_hlds__complexity__Error_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__complexity__ResLine_15, (MR_Integer) 0)));
#line 125 "complexity.m"
              MR_String transform_hlds__complexity__V_35_35;

#line 126 "complexity.m"
              *transform_hlds__complexity__NumLines_11 = transform_hlds__complexity__CurLineNum_10;
#line 127 "complexity.m"
              {
#line 127 "complexity.m"
                transform_hlds__complexity__V_35_35 = mercury__io__error_message_1_f_0(transform_hlds__complexity__Error_16);
              }
#line 127 "complexity.m"
              {
#line 127 "complexity.m"
                MR_Word base;
#line 127 "complexity.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 127 "complexity.m"
                *transform_hlds__complexity__MaybeError_12 = base;
#line 127 "complexity.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__complexity__V_35_35));
#line 127 "complexity.m"
              }
#line 125 "complexity.m"
              *transform_hlds__complexity__STATE_VARIABLE_ProcMap_22 = transform_hlds__complexity__STATE_VARIABLE_ProcMap_0_21;
#line 125 "complexity.m"
            }
#line 124 "complexity.m"
            break;
#line 124 "complexity.m"
        }
#line 118 "complexity.m"
      }
#line 118 "complexity.m"
      break;
#line 118 "complexity.m"
    }
#line 113 "complexity.m"
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
#line 164 "complexity.m"
  {
#line 164 "complexity.m"
    MR_bool transform_hlds__complexity__succeeded;
#line 164 "complexity.m"
    MR_Word transform_hlds__complexity__PredId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__complexity__PredProcId_10, (MR_Integer) 0)));
#line 164 "complexity.m"
    MR_Integer transform_hlds__complexity__ProcId_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__complexity__PredProcId_10, (MR_Integer) 1)));
#line 164 "complexity.m"
    MR_String transform_hlds__complexity__FullName_36;
#line 3475 "transform_hlds.complexity.c"
    MR_Integer transform_hlds__complexity__ProcNum_37;
#line 155 "complexity.m"
    MR_Box transform_hlds__complexity__conv0_ProcNum_37;

#line 154 "complexity.m"
    {
#line 154 "complexity.m"
      transform_hlds__complexity__FullName_36 = transform_hlds__complexity__complexity_proc_name_3_f_0(transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_0_23, transform_hlds__complexity__PredId_13, transform_hlds__complexity__ProcId_14);
    }
#line 155 "complexity.m"
    {
#line 155 "complexity.m"
      transform_hlds__complexity__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, transform_hlds__complexity__ProcMap_9, ((MR_Box) (transform_hlds__complexity__FullName_36)), &transform_hlds__complexity__conv0_ProcNum_37);
    }
#line 155 "complexity.m"
    if (transform_hlds__complexity__succeeded)
#line 155 "complexity.m"
      {
#line 155 "complexity.m"
        transform_hlds__complexity__ProcNum_37 = ((MR_Integer) transform_hlds__complexity__conv0_ProcNum_37);
#line 155 "complexity.m"
        transform_hlds__complexity__succeeded = MR_TRUE;
#line 155 "complexity.m"
      }
#line 3500 "transform_hlds.complexity.c"
    if (transform_hlds__complexity__succeeded)
#line 3502 "transform_hlds.complexity.c"
      {
#line 3504 "transform_hlds.complexity.c"
        MR_String transform_hlds__complexity__FullName_17;
#line 3506 "transform_hlds.complexity.c"
        MR_Word transform_hlds__complexity__Globals_18;
#line 3508 "transform_hlds.complexity.c"
        MR_Word transform_hlds__complexity__Verbose_19;

#line 170 "complexity.m"
        {
#line 170 "complexity.m"
          transform_hlds__complexity__FullName_17 = transform_hlds__complexity__complexity_proc_name_3_f_0(transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_0_23, transform_hlds__complexity__PredId_13, transform_hlds__complexity__ProcId_14);
        }
#line 171 "complexity.m"
        {
#line 171 "complexity.m"
          hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_0_23, &transform_hlds__complexity__Globals_18);
        }
#line 172 "complexity.m"
        {
#line 172 "complexity.m"
          libs__globals__lookup_bool_option_3_p_0(transform_hlds__complexity__Globals_18, (MR_Integer) 45, &transform_hlds__complexity__Verbose_19);
        }
#line 180 "complexity.m"
#line 180 "complexity.m"
        switch (transform_hlds__complexity__Verbose_19) {
#line 180 "complexity.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 180 "complexity.m"
          case (MR_Integer) 0:
#line 181 "complexity.m"
            {
#line 181 "complexity.m"
            }
#line 180 "complexity.m"
            break;
#line 180 "complexity.m"
          case (MR_Integer) 1:
#line 175 "complexity.m"
            {
#line 176 "complexity.m"
              {
#line 176 "complexity.m"
                hlds__passes_aux__write_proc_progress_message_6_p_0((MR_String) "% Applying complexity experiment transformation to ", transform_hlds__complexity__PredId_13, transform_hlds__complexity__ProcId_14, transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_0_23);
              }
#line 175 "complexity.m"
            }
#line 180 "complexity.m"
            break;
#line 180 "complexity.m"
        }
#line 183 "complexity.m"
        {
#line 183 "complexity.m"
          transform_hlds__complexity__complexity_process_proc_8_p_0(transform_hlds__complexity__NumProcs_8, transform_hlds__complexity__ProcNum_37, transform_hlds__complexity__FullName_17, transform_hlds__complexity__PredId_13, transform_hlds__complexity__STATE_VARIABLE_ProcInfo_0_21, transform_hlds__complexity__STATE_VARIABLE_ProcInfo_22, transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_0_23, transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_24);
#line 183 "complexity.m"
          return;
        }
#line 3561 "transform_hlds.complexity.c"
      }
#line 3563 "transform_hlds.complexity.c"
    else
#line 3565 "transform_hlds.complexity.c"
      {
#line 186 "complexity.m"
        *transform_hlds__complexity__STATE_VARIABLE_ProcInfo_22 = transform_hlds__complexity__STATE_VARIABLE_ProcInfo_0_21;
#line 186 "complexity.m"
        *transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_24 = transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_0_23;
#line 3571 "transform_hlds.complexity.c"
      }
#line 164 "complexity.m"
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
#line 143 "complexity.m"
  {
#line 143 "complexity.m"
    MR_bool transform_hlds__complexity__succeeded;
#line 143 "complexity.m"
    MR_String transform_hlds__complexity__FullName_8;
#line 143 "complexity.m"
    MR_Word transform_hlds__complexity__ModuleSymName_9;
#line 143 "complexity.m"
    MR_Word transform_hlds__complexity__PredInfo_10;
#line 143 "complexity.m"
    MR_String transform_hlds__complexity__PredName_11;
#line 143 "complexity.m"
    MR_Word transform_hlds__complexity__QualifiedName_12;
#line 143 "complexity.m"
    MR_Integer transform_hlds__complexity__Arity_13;
#line 143 "complexity.m"
    MR_String transform_hlds__complexity__NameAndArity_14;
#line 143 "complexity.m"
    MR_Integer transform_hlds__complexity__ProcIdInt_15;
#line 143 "complexity.m"
    MR_Word transform_hlds__complexity__V_16_16;
#line 143 "complexity.m"
    MR_String transform_hlds__complexity__V_17_17;
#line 143 "complexity.m"
    MR_String transform_hlds__complexity__V_19_19;

#line 144 "complexity.m"
    {
#line 144 "complexity.m"
      hlds__hlds_module__module_info_get_name_2_p_0(transform_hlds__complexity__ModuleInfo_5, &transform_hlds__complexity__ModuleSymName_9);
    }
#line 145 "complexity.m"
    {
#line 145 "complexity.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__complexity__ModuleInfo_5, transform_hlds__complexity__PredId_6, &transform_hlds__complexity__PredInfo_10);
    }
#line 146 "complexity.m"
    {
#line 146 "complexity.m"
      transform_hlds__complexity__PredName_11 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__complexity__PredInfo_10);
    }
#line 147 "complexity.m"
    {
#line 147 "complexity.m"
      transform_hlds__complexity__QualifiedName_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 147 "complexity.m"
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__QualifiedName_12, 0) = ((MR_Box) (transform_hlds__complexity__ModuleSymName_9));
#line 147 "complexity.m"
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__QualifiedName_12, 1) = ((MR_Box) (transform_hlds__complexity__PredName_11));
#line 147 "complexity.m"
    }
#line 148 "complexity.m"
    {
#line 148 "complexity.m"
      transform_hlds__complexity__Arity_13 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(transform_hlds__complexity__PredInfo_10);
    }
#line 149 "complexity.m"
    {
#line 149 "complexity.m"
      transform_hlds__complexity__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 149 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__V_16_16, 0) = ((MR_Box) (transform_hlds__complexity__QualifiedName_12));
#line 149 "complexity.m"
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__V_16_16, 1) = ((MR_Box) (transform_hlds__complexity__Arity_13));
#line 149 "complexity.m"
    }
#line 149 "complexity.m"
    {
#line 149 "complexity.m"
      transform_hlds__complexity__NameAndArity_14 = parse_tree__prog_out__sym_name_and_arity_to_string_1_f_0(transform_hlds__complexity__V_16_16);
    }
#line 150 "complexity.m"
    {
#line 150 "complexity.m"
      hlds__hlds_pred__proc_id_to_int_2_p_0(transform_hlds__complexity__ProcId_7, &transform_hlds__complexity__ProcIdInt_15);
    }
#line 151 "complexity.m"
    {
#line 151 "complexity.m"
      transform_hlds__complexity__V_19_19 = mercury__string__int_to_string_1_f_0(transform_hlds__complexity__ProcIdInt_15);
    }
#line 151 "complexity.m"
    {
#line 151 "complexity.m"
      transform_hlds__complexity__V_17_17 = mercury__string__f_43_43_2_f_0((MR_String) "-", transform_hlds__complexity__V_19_19);
    }
#line 151 "complexity.m"
    {
#line 151 "complexity.m"
      return transform_hlds__complexity__FullName_8 = mercury__string__f_43_43_2_f_0(transform_hlds__complexity__NameAndArity_14, transform_hlds__complexity__V_17_17);
    }
#line 143 "complexity.m"
    return transform_hlds__complexity__FullName_8;
#line 143 "complexity.m"
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
#line 153 "complexity.m"
  {
#line 153 "complexity.m"
    MR_bool transform_hlds__complexity__succeeded;
#line 153 "complexity.m"
    MR_Word transform_hlds__complexity__IsInMap_10;
#line 153 "complexity.m"
    MR_String transform_hlds__complexity__FullName_11;
#line 157 "complexity.m"
    MR_Integer transform_hlds__complexity__ProcNum_12;
#line 155 "complexity.m"
    MR_Box transform_hlds__complexity__conv0_ProcNum_12;

#line 154 "complexity.m"
    {
#line 154 "complexity.m"
      transform_hlds__complexity__FullName_11 = transform_hlds__complexity__complexity_proc_name_3_f_0(transform_hlds__complexity__ModuleInfo_7, transform_hlds__complexity__PredId_8, transform_hlds__complexity__ProcId_9);
    }
#line 155 "complexity.m"
    {
#line 155 "complexity.m"
      transform_hlds__complexity__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, transform_hlds__complexity__ProcMap_6, ((MR_Box) (transform_hlds__complexity__FullName_11)), &transform_hlds__complexity__conv0_ProcNum_12);
    }
#line 155 "complexity.m"
    if (transform_hlds__complexity__succeeded)
#line 155 "complexity.m"
      {
#line 155 "complexity.m"
        transform_hlds__complexity__ProcNum_12 = ((MR_Integer) transform_hlds__complexity__conv0_ProcNum_12);
#line 155 "complexity.m"
        transform_hlds__complexity__succeeded = MR_TRUE;
#line 155 "complexity.m"
      }
#line 157 "complexity.m"
    if (transform_hlds__complexity__succeeded)
#line 156 "complexity.m"
      {
#line 156 "complexity.m"
        transform_hlds__complexity__IsInMap_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 156 "complexity.m"
        MR_hl_field(MR_mktag(1), transform_hlds__complexity__IsInMap_10, 0) = ((MR_Box) (transform_hlds__complexity__ProcNum_12));
#line 156 "complexity.m"
      }
#line 157 "complexity.m"
    else
#line 158 "complexity.m"
      transform_hlds__complexity__IsInMap_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 153 "complexity.m"
    return transform_hlds__complexity__IsInMap_10;
#line 153 "complexity.m"
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
#line 95 "complexity.m"
  {
#line 95 "complexity.m"
    MR_bool transform_hlds__complexity__succeeded;
#line 95 "complexity.m"
    MR_Word transform_hlds__complexity__ResStream_8;

#line 96 "complexity.m"
    {
#line 96 "complexity.m"
      mercury__io__open_input_4_p_0(transform_hlds__complexity__FileName_5, &transform_hlds__complexity__ResStream_8);
    }
#line 100 "complexity.m"
    if (((MR_tag((MR_Word) transform_hlds__complexity__ResStream_8)) == (MR_mktag((MR_Integer) 1))))
#line 98 "complexity.m"
      {
#line 98 "complexity.m"
        MR_Word transform_hlds__complexity__Error_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__complexity__ResStream_8, (MR_Integer) 0)));
#line 98 "complexity.m"
        MR_String transform_hlds__complexity__V_22_22;

#line 99 "complexity.m"
        {
#line 99 "complexity.m"
          transform_hlds__complexity__V_22_22 = mercury__io__error_message_1_f_0(transform_hlds__complexity__Error_9);
        }
#line 99 "complexity.m"
        {
#line 99 "complexity.m"
          MR_Word base;
#line 99 "complexity.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 99 "complexity.m"
          *transform_hlds__complexity__MaybeNumLinesProcMap_6 = base;
#line 99 "complexity.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__complexity__V_22_22));
#line 99 "complexity.m"
        }
#line 98 "complexity.m"
      }
#line 100 "complexity.m"
    else
#line 101 "complexity.m"
      {
#line 101 "complexity.m"
        MR_Word transform_hlds__complexity__Stream_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__complexity__ResStream_8, (MR_Integer) 0)));
#line 101 "complexity.m"
        MR_Integer transform_hlds__complexity__NumLines_11;
#line 101 "complexity.m"
        MR_Word transform_hlds__complexity__MaybeError_12;
#line 101 "complexity.m"
        MR_Word transform_hlds__complexity__ProcMap_13;
#line 101 "complexity.m"
        MR_Word transform_hlds__complexity__V_19_19;

#line 103 "complexity.m"
        {
#line 103 "complexity.m"
          transform_hlds__complexity__V_19_19 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0);
        }
#line 102 "complexity.m"
        {
#line 102 "complexity.m"
          transform_hlds__complexity__read_spec_file_lines_8_p_0(transform_hlds__complexity__Stream_10, (MR_Integer) 0, &transform_hlds__complexity__NumLines_11, &transform_hlds__complexity__MaybeError_12, transform_hlds__complexity__V_19_19, &transform_hlds__complexity__ProcMap_13);
        }
#line 107 "complexity.m"
        if ((transform_hlds__complexity__MaybeError_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 108 "complexity.m"
          {
#line 108 "complexity.m"
            MR_Word transform_hlds__complexity__V_21_21;

#line 109 "complexity.m"
            {
#line 109 "complexity.m"
              transform_hlds__complexity__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 109 "complexity.m"
              MR_hl_field(MR_mktag(0), transform_hlds__complexity__V_21_21, 0) = ((MR_Box) (transform_hlds__complexity__NumLines_11));
#line 109 "complexity.m"
              MR_hl_field(MR_mktag(0), transform_hlds__complexity__V_21_21, 1) = ((MR_Box) (transform_hlds__complexity__ProcMap_13));
#line 109 "complexity.m"
            }
#line 109 "complexity.m"
            {
#line 109 "complexity.m"
              MR_Word base;
#line 109 "complexity.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 109 "complexity.m"
              *transform_hlds__complexity__MaybeNumLinesProcMap_6 = base;
#line 109 "complexity.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__complexity__V_21_21));
#line 109 "complexity.m"
            }
#line 108 "complexity.m"
          }
#line 107 "complexity.m"
        else
#line 105 "complexity.m"
          {
#line 105 "complexity.m"
            MR_String transform_hlds__complexity__Msg_14 = ((MR_String) (MR_hl_field(MR_mktag(1), transform_hlds__complexity__MaybeError_12, (MR_Integer) 0)));

#line 106 "complexity.m"
            {
#line 106 "complexity.m"
              MR_Word base;
#line 106 "complexity.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 106 "complexity.m"
              *transform_hlds__complexity__MaybeNumLinesProcMap_6 = base;
#line 106 "complexity.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__complexity__Msg_14));
#line 106 "complexity.m"
            }
#line 105 "complexity.m"
          }
#line 101 "complexity.m"
      }
#line 95 "complexity.m"
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
