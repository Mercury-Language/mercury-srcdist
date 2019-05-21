/*
** Automatically generated from `complexity.m'
** by the Mercury compiler,
** version rotd-2017-08-05
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
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.polymorphism.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_util.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
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
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.op_mode.mih"
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
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
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




static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__complexity__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static MR_bool MR_CALL 
transform_hlds__complexity__IntroducedFrom__pred__make_type_info_var__595__1_2_p_0(
  MR_Word transform_hlds__complexity__PredInfo0_17,
  MR_Word transform_hlds__complexity__PredInfo_21);

static MR_bool MR_CALL 
transform_hlds__complexity__IntroducedFrom__pred__make_type_info_var__593__1_2_p_0(
  MR_Word transform_hlds__complexity__PolySpecs_20,
  MR_Word transform_hlds__complexity__HeadVar__2_32);

static MR_bool MR_CALL 
transform_hlds__complexity__IntroducedFrom__pred__read_spec_file_lines__136__1_2_p_0(
  MR_Char transform_hlds__complexity__HeadVar__1_27,
  MR_Char transform_hlds__complexity__HeadVar__2_36);

static void MR_CALL 
transform_hlds__complexity__complexity_process_proc_8_p_0(
  MR_Integer transform_hlds__complexity__NumProcs_9,
  MR_Integer transform_hlds__complexity__ProcNum_10,
  MR_String transform_hlds__complexity__FullName_11,
  MR_Word transform_hlds__complexity__PredId_12,
  MR_Word transform_hlds__complexity__STATE_VARIABLE_ProcInfo_0_75,
  MR_Word * transform_hlds__complexity__STATE_VARIABLE_ProcInfo_76,
  MR_Word transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_0_77,
  MR_Word * transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_78);

static MR_Word MR_CALL 
transform_hlds__complexity__is_active_type_0_f_0(void);

static void MR_CALL 
transform_hlds__complexity__allocate_slot_numbers_cl_3_p_0(
  MR_Word transform_hlds__complexity__HeadVar__1_1,
  MR_Integer transform_hlds__complexity__Offset_2,
  MR_Word * transform_hlds__complexity__HeadVar__3_3);

static void MR_CALL 
transform_hlds__complexity__classify_args_6_p_0(
  MR_Word transform_hlds__complexity__HeadVar__1_1,
  MR_Word transform_hlds__complexity__HeadVar__2_2,
  MR_Word transform_hlds__complexity__ModuleInfo_3,
  MR_Word transform_hlds__complexity__VarSet_4,
  MR_Word transform_hlds__complexity__VarTypes_5,
  MR_Word * transform_hlds__complexity__HeadVar__6_6);

static void MR_CALL 
transform_hlds__complexity__generate_new_var_5_p_0(
  MR_String transform_hlds__complexity__Name_6,
  MR_Word transform_hlds__complexity__Type_7,
  MR_Word transform_hlds__complexity__STATE_VARIABLE_ProcInfo_0_14,
  MR_Word * transform_hlds__complexity__STATE_VARIABLE_ProcInfo_15,
  MR_Word * transform_hlds__complexity__Var_9);

static void MR_CALL 
transform_hlds__complexity__generate_slot_goals_12_p_0(
  MR_Integer transform_hlds__complexity__ProcNum_13,
  MR_Word transform_hlds__complexity__NumberedVars_14,
  MR_Integer transform_hlds__complexity__NumProfiledVars_15,
  MR_Word transform_hlds__complexity__Context_16,
  MR_Word transform_hlds__complexity__PredId_17,
  MR_Word transform_hlds__complexity__STATE_VARIABLE_ProcInfo_0_33,
  MR_Word * transform_hlds__complexity__STATE_VARIABLE_ProcInfo_34,
  MR_Word transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_0_35,
  MR_Word * transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_36,
  MR_Word * transform_hlds__complexity__SlotVar_20,
  MR_String * transform_hlds__complexity__SlotVarName_21,
  MR_Word * transform_hlds__complexity__Goals_22);

static void MR_CALL 
transform_hlds__complexity__complexity_generate_foreign_proc_9_p_0(
  MR_String transform_hlds__complexity__PredName_10,
  MR_Word transform_hlds__complexity__Detism_11,
  MR_Word transform_hlds__complexity__Args_12,
  MR_Word transform_hlds__complexity__ExtraArgs_13,
  MR_String transform_hlds__complexity__Code_14,
  MR_Word transform_hlds__complexity__BoundVars_15,
  MR_Word transform_hlds__complexity__ModuleInfo_16,
  MR_Word transform_hlds__complexity__Context_17,
  MR_Word * transform_hlds__complexity__Goal_18);

static void MR_CALL 
transform_hlds__complexity__generate_size_goals_13_p_0(
  MR_Word transform_hlds__complexity__HeadVar__1_1,
  MR_Word transform_hlds__complexity__Context_2,
  MR_Integer transform_hlds__complexity__NumProfiledVars_3,
  MR_String transform_hlds__complexity__ProcVarName_4,
  MR_String transform_hlds__complexity__SlotVarName_5,
  MR_Word transform_hlds__complexity__PredId_6,
  MR_Word transform_hlds__complexity__STATE_VARIABLE_ProcInfo_0_7,
  MR_Word * transform_hlds__complexity__STATE_VARIABLE_ProcInfo_8,
  MR_Word transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_0_9,
  MR_Word * transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_10,
  MR_Word * transform_hlds__complexity__HeadVar__11_11,
  MR_Word * transform_hlds__complexity__HeadVar__12_12,
  MR_String * transform_hlds__complexity__HeadVar__13_13);

static void MR_CALL 
transform_hlds__complexity__generate_size_goal_14_p_0(
  MR_Word transform_hlds__complexity__ArgVar_15,
  MR_Integer transform_hlds__complexity__VarSeqNum_16,
  MR_Word transform_hlds__complexity__Context_17,
  MR_Integer transform_hlds__complexity__NumProfiledVars_18,
  MR_String transform_hlds__complexity__ProcVarName_19,
  MR_String transform_hlds__complexity__SlotVarName_20,
  MR_Word transform_hlds__complexity__PredId_21,
  MR_Word transform_hlds__complexity__STATE_VARIABLE_ProcInfo_0_37,
  MR_Word * transform_hlds__complexity__STATE_VARIABLE_ProcInfo_38,
  MR_Word transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_0_39,
  MR_Word * transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_40,
  MR_Word * transform_hlds__complexity__Goals_24,
  MR_Word * transform_hlds__complexity__ForeignArgs_25,
  MR_String * transform_hlds__complexity__CodeStr_26);

static MR_bool MR_CALL 
transform_hlds__complexity__make_type_info_var_9_p_0_2(
  MR_Box transform_hlds__complexity__closure_arg);

static MR_bool MR_CALL 
transform_hlds__complexity__make_type_info_var_9_p_0_1(
  MR_Box transform_hlds__complexity__closure_arg);

static void MR_CALL 
transform_hlds__complexity__make_type_info_var_9_p_0(
  MR_Word transform_hlds__complexity__Type_10,
  MR_Word transform_hlds__complexity__Context_11,
  MR_Word transform_hlds__complexity__PredId_12,
  MR_Word transform_hlds__complexity__STATE_VARIABLE_ProcInfo_0_22,
  MR_Word * transform_hlds__complexity__STATE_VARIABLE_ProcInfo_23,
  MR_Word transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_0_24,
  MR_Word * transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_25,
  MR_Word * transform_hlds__complexity__TypeInfoVar_15,
  MR_Word * transform_hlds__complexity__TypeInfoGoals_16);

static MR_String MR_CALL 
transform_hlds__complexity__slot_var_name_0_f_0(void);

static MR_bool MR_CALL 
transform_hlds__complexity__read_spec_file_lines_8_p_0_1(
  MR_Box transform_hlds__complexity__closure_arg,
  MR_Box transform_hlds__complexity__wrapper_arg_1);

static void MR_CALL 
transform_hlds__complexity__read_spec_file_lines_8_p_0(
  MR_Word transform_hlds__complexity__Stream_9,
  MR_Integer transform_hlds__complexity__CurLineNum_10,
  MR_Integer * transform_hlds__complexity__NumLines_11,
  MR_Word * transform_hlds__complexity__MaybeError_12,
  MR_Word transform_hlds__complexity__STATE_VARIABLE_ProcMap_0_21,
  MR_Word * transform_hlds__complexity__STATE_VARIABLE_ProcMap_22);


static /* final */ const MR_Box transform_hlds__complexity_scalar_common_1[2][2];

static /* final */ const MR_Box transform_hlds__complexity_scalar_common_2[1][3];

static /* final */ const MR_Box transform_hlds__complexity_scalar_common_3[3][5];

static /* final */ const MR_Box transform_hlds__complexity_scalar_common_4[1][4];




static /* final */ const MR_Box transform_hlds__complexity_scalar_common_1[2][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
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

static /* final */ const MR_Box transform_hlds__complexity_scalar_common_3[3][5] = {
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
    ((MR_Box) (&transform_hlds__complexity__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&transform_hlds__complexity__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 2 */
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



static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__complexity__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

static MR_bool MR_CALL 
transform_hlds__complexity__IntroducedFrom__pred__make_type_info_var__595__1_2_p_0(
  MR_Word transform_hlds__complexity__PredInfo0_17,
  MR_Word transform_hlds__complexity__PredInfo_21)
{
  {
    MR_bool transform_hlds__complexity__succeeded;

    transform_hlds__complexity__succeeded = hlds__hlds_pred____Unify____pred_info_0_0(transform_hlds__complexity__PredInfo0_17, transform_hlds__complexity__PredInfo_21);
    return transform_hlds__complexity__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__complexity__IntroducedFrom__pred__make_type_info_var__593__1_2_p_0(
  MR_Word transform_hlds__complexity__PolySpecs_20,
  MR_Word transform_hlds__complexity__HeadVar__2_32)
{
  {
    MR_bool transform_hlds__complexity__succeeded;

    transform_hlds__complexity__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__complexity_scalar_common_1[1], ((MR_Box) (transform_hlds__complexity__PolySpecs_20)), ((MR_Box) (transform_hlds__complexity__HeadVar__2_32)));
    return transform_hlds__complexity__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__complexity__IntroducedFrom__pred__read_spec_file_lines__136__1_2_p_0(
  MR_Char transform_hlds__complexity__HeadVar__1_27,
  MR_Char transform_hlds__complexity__HeadVar__2_36)
{
  {
    MR_bool transform_hlds__complexity__succeeded = (transform_hlds__complexity__HeadVar__1_27 == transform_hlds__complexity__HeadVar__2_36);

    return transform_hlds__complexity__succeeded;
  }
}

void MR_CALL 
transform_hlds__complexity__complexity_process_proc_msg_7_p_0(
  MR_Integer transform_hlds__complexity__NumProcs_8,
  MR_Word transform_hlds__complexity__ProcMap_9,
  MR_Word transform_hlds__complexity__PredProcId_10,
  MR_Word transform_hlds__complexity__STATE_VARIABLE_ProcInfo_0_21,
  MR_Word * transform_hlds__complexity__STATE_VARIABLE_ProcInfo_22,
  MR_Word transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_0_23,
  MR_Word * transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_24)
{
  {
    MR_bool transform_hlds__complexity__succeeded;
    MR_Word transform_hlds__complexity__PredId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__complexity__PredProcId_10, (MR_Integer) 0)));
    MR_Integer transform_hlds__complexity__ProcId_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__complexity__PredProcId_10, (MR_Integer) 1)));
    MR_String transform_hlds__complexity__FullName_36;
    MR_Integer transform_hlds__complexity__ProcNum_37;
    MR_Box transform_hlds__complexity__conv0_ProcNum_37;

    transform_hlds__complexity__FullName_36 = transform_hlds__complexity__complexity_proc_name_3_f_0(transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_0_23, transform_hlds__complexity__PredId_13, transform_hlds__complexity__ProcId_14);
    transform_hlds__complexity__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, transform_hlds__complexity__ProcMap_9, ((MR_Box) (transform_hlds__complexity__FullName_36)), &transform_hlds__complexity__conv0_ProcNum_37);
    if (transform_hlds__complexity__succeeded)
    {
      transform_hlds__complexity__ProcNum_37 = ((MR_Integer) transform_hlds__complexity__conv0_ProcNum_37);
      transform_hlds__complexity__succeeded = MR_TRUE;
    }
    if (transform_hlds__complexity__succeeded)
    {
      MR_String transform_hlds__complexity__FullName_17;
      MR_Word transform_hlds__complexity__Globals_18;
      MR_Word transform_hlds__complexity__Verbose_19;

      transform_hlds__complexity__FullName_17 = transform_hlds__complexity__complexity_proc_name_3_f_0(transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_0_23, transform_hlds__complexity__PredId_13, transform_hlds__complexity__ProcId_14);
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_0_23, &transform_hlds__complexity__Globals_18);
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__complexity__Globals_18, (MR_Integer) 56, &transform_hlds__complexity__Verbose_19);
      switch (transform_hlds__complexity__Verbose_19) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
          }
          break;
        case (MR_Integer) 1:
          {
            hlds__passes_aux__write_proc_progress_message_6_p_0((MR_String) "% Applying complexity experiment transformation to ", transform_hlds__complexity__PredId_13, transform_hlds__complexity__ProcId_14, transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_0_23);
          }
          break;
      }
      transform_hlds__complexity__complexity_process_proc_8_p_0(transform_hlds__complexity__NumProcs_8, transform_hlds__complexity__ProcNum_37, transform_hlds__complexity__FullName_17, transform_hlds__complexity__PredId_13, transform_hlds__complexity__STATE_VARIABLE_ProcInfo_0_21, transform_hlds__complexity__STATE_VARIABLE_ProcInfo_22, transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_0_23, transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_24);
    }
    else
    {
      *transform_hlds__complexity__STATE_VARIABLE_ProcInfo_22 = transform_hlds__complexity__STATE_VARIABLE_ProcInfo_0_21;
      *transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_24 = transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_0_23;
    }
  }
}

static void MR_CALL 
transform_hlds__complexity__complexity_process_proc_8_p_0(
  MR_Integer transform_hlds__complexity__NumProcs_9,
  MR_Integer transform_hlds__complexity__ProcNum_10,
  MR_String transform_hlds__complexity__FullName_11,
  MR_Word transform_hlds__complexity__PredId_12,
  MR_Word transform_hlds__complexity__STATE_VARIABLE_ProcInfo_0_75,
  MR_Word * transform_hlds__complexity__STATE_VARIABLE_ProcInfo_76,
  MR_Word transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_0_77,
  MR_Word * transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_78)
{
  {
    MR_Word transform_hlds__complexity__TypeCtorInfo_235_235;
    MR_Word transform_hlds__complexity__Detism_15;
    MR_Word transform_hlds__complexity__CodeModel_16;
    MR_Word transform_hlds__complexity__HeadVars_17;
    MR_Word transform_hlds__complexity__ArgModes_18;
    MR_Word transform_hlds__complexity__VarSet_19;
    MR_Word transform_hlds__complexity__VarTypes_20;
    MR_Word transform_hlds__complexity__OrigGoal_21;
    MR_Word transform_hlds__complexity__Context_22;
    MR_Word transform_hlds__complexity__OrigGoalInfo_23;
    MR_Word transform_hlds__complexity__OrigNonLocals_24;
    MR_Word transform_hlds__complexity__OrigInstMapDelta_26;
    MR_Word transform_hlds__complexity__ImpureOrigGoalInfo_27;
    MR_Word transform_hlds__complexity__IsActiveVar_29;
    MR_Word transform_hlds__complexity__VarInfos_30;
    MR_Word transform_hlds__complexity__NumberedProfiledVars_31;
    MR_Integer transform_hlds__complexity__NumProfiledVars_32;
    MR_Word transform_hlds__complexity__SlotVar_33;
    MR_String transform_hlds__complexity__SlotVarName_34;
    MR_Word transform_hlds__complexity__SlotGoals_35;
    MR_Word transform_hlds__complexity__IsActiveOutputArg_36;
    MR_Word transform_hlds__complexity__SlotInputArg_37;
    MR_String transform_hlds__complexity__ProcNumStr_38;
    MR_String transform_hlds__complexity__IsActiveStr_40;
    MR_Word transform_hlds__complexity__IsActiveGoal_41;
    MR_String transform_hlds__complexity__ExitStr_43;
    MR_Word transform_hlds__complexity__ExitGoal_44;
    MR_String transform_hlds__complexity__FailStr_46;
    MR_Word transform_hlds__complexity__FailGoal_47;
    MR_String transform_hlds__complexity__RedoStr_49;
    MR_Word transform_hlds__complexity__RedoGoal0_50;
    MR_Word transform_hlds__complexity__TransGoal_52;
    MR_Word transform_hlds__complexity__TSPB_62;
    MR_Word transform_hlds__complexity__TypeCtor_63;
    MR_Word transform_hlds__complexity__SwitchArms_64;
    MR_Word transform_hlds__complexity__SwitchExpr_65;
    MR_Word transform_hlds__complexity__SwitchGoalInfo_66;
    MR_Word transform_hlds__complexity__SwitchGoal_67;
    MR_Word transform_hlds__complexity__GoalExpr_68;
    MR_Word transform_hlds__complexity__GoalInfo_69;
    MR_Word transform_hlds__complexity__Goal_70;
    MR_Word transform_hlds__complexity__Infos_71;
    MR_Word transform_hlds__complexity__ComplexityInfo_72;
    MR_Word transform_hlds__complexity__ComplexityInfos0_73;
    MR_Word transform_hlds__complexity__ComplexityInfos_74;
    MR_Word transform_hlds__complexity__Var_80;
    MR_Word transform_hlds__complexity__STATE_VARIABLE_ProcInfo_81_81;
    MR_Word transform_hlds__complexity__STATE_VARIABLE_ProcInfo_83_83;
    MR_Word transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_84_84;
    MR_Word transform_hlds__complexity__Var_85;
    MR_Word transform_hlds__complexity__Var_86;
    MR_Word transform_hlds__complexity__Var_87;
    MR_Word transform_hlds__complexity__Var_88;
    MR_Word transform_hlds__complexity__Var_90;
    MR_Word transform_hlds__complexity__Var_91;
    MR_Word transform_hlds__complexity__Var_92;
    MR_Word transform_hlds__complexity__Var_93;
    MR_String transform_hlds__complexity__Var_96;
    MR_String transform_hlds__complexity__Var_97;
    MR_String transform_hlds__complexity__Var_99;
    MR_String transform_hlds__complexity__Var_100;
    MR_String transform_hlds__complexity__Var_101;
    MR_String transform_hlds__complexity__Var_103;
    MR_String transform_hlds__complexity__Var_104;
    MR_String transform_hlds__complexity__Var_106;
    MR_String transform_hlds__complexity__Var_107;
    MR_String transform_hlds__complexity__Var_109;
    MR_String transform_hlds__complexity__Var_110;
    MR_Word transform_hlds__complexity__Var_116;
    MR_Word transform_hlds__complexity__Var_118;
    MR_String transform_hlds__complexity__Var_122;
    MR_String transform_hlds__complexity__Var_123;
    MR_String transform_hlds__complexity__Var_125;
    MR_String transform_hlds__complexity__Var_126;
    MR_String transform_hlds__complexity__Var_128;
    MR_String transform_hlds__complexity__Var_129;
    MR_Word transform_hlds__complexity__Var_132;
    MR_String transform_hlds__complexity__Var_137;
    MR_String transform_hlds__complexity__Var_138;
    MR_String transform_hlds__complexity__Var_140;
    MR_String transform_hlds__complexity__Var_141;
    MR_String transform_hlds__complexity__Var_143;
    MR_String transform_hlds__complexity__Var_144;
    MR_String transform_hlds__complexity__Var_152;
    MR_String transform_hlds__complexity__Var_153;
    MR_String transform_hlds__complexity__Var_155;
    MR_String transform_hlds__complexity__Var_156;
    MR_String transform_hlds__complexity__Var_158;
    MR_String transform_hlds__complexity__Var_159;
    MR_Word transform_hlds__complexity__Var_207;
    MR_Word transform_hlds__complexity__Var_210;
    MR_Word transform_hlds__complexity__Var_211;
    MR_Word transform_hlds__complexity__Var_212;
    MR_Word transform_hlds__complexity__Var_216;
    MR_Word transform_hlds__complexity__Var_217;
    MR_Word transform_hlds__complexity__Var_218;
    MR_Word transform_hlds__complexity__Var_219;
    MR_Word transform_hlds__complexity__Var_227;
    MR_Word transform_hlds__complexity__Var_228;
    MR_Word transform_hlds__complexity__Var_25;

    hlds__hlds_pred__proc_info_interface_determinism_2_p_0(transform_hlds__complexity__STATE_VARIABLE_ProcInfo_0_75, &transform_hlds__complexity__Detism_15);
    hlds__code_model__determinism_to_code_model_2_p_0(transform_hlds__complexity__Detism_15, &transform_hlds__complexity__CodeModel_16);
    hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__complexity__STATE_VARIABLE_ProcInfo_0_75, &transform_hlds__complexity__HeadVars_17);
    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__complexity__STATE_VARIABLE_ProcInfo_0_75, &transform_hlds__complexity__ArgModes_18);
    hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__complexity__STATE_VARIABLE_ProcInfo_0_75, &transform_hlds__complexity__VarSet_19);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__complexity__STATE_VARIABLE_ProcInfo_0_75, &transform_hlds__complexity__VarTypes_20);
    hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__complexity__STATE_VARIABLE_ProcInfo_0_75, &transform_hlds__complexity__OrigGoal_21);
    transform_hlds__complexity__TypeCtorInfo_235_235 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    parse_tree__set_of_var__list_to_set_2_p_0(transform_hlds__complexity__TypeCtorInfo_235_235, transform_hlds__complexity__HeadVars_17, &transform_hlds__complexity__OrigNonLocals_24);
    transform_hlds__complexity__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__complexity__OrigGoal_21, (MR_Integer) 0)));
    transform_hlds__complexity__OrigGoalInfo_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__complexity__OrigGoal_21, (MR_Integer) 1)));
    transform_hlds__complexity__Context_22 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__complexity__OrigGoalInfo_23);
    transform_hlds__complexity__OrigInstMapDelta_26 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__complexity__OrigGoalInfo_23);
    hlds__hlds_goal__goal_info_set_purity_3_p_0((MR_Integer) 2, transform_hlds__complexity__OrigGoalInfo_23, &transform_hlds__complexity__ImpureOrigGoalInfo_27);
    transform_hlds__complexity__Var_80 = transform_hlds__complexity__is_active_type_0_f_0();
    transform_hlds__complexity__generate_new_var_5_p_0((MR_String) "IsActive", transform_hlds__complexity__Var_80, transform_hlds__complexity__STATE_VARIABLE_ProcInfo_0_75, &transform_hlds__complexity__STATE_VARIABLE_ProcInfo_81_81, &transform_hlds__complexity__IsActiveVar_29);
    transform_hlds__complexity__classify_args_6_p_0(transform_hlds__complexity__HeadVars_17, transform_hlds__complexity__ArgModes_18, transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_0_77, transform_hlds__complexity__VarSet_19, transform_hlds__complexity__VarTypes_20, &transform_hlds__complexity__VarInfos_30);
    transform_hlds__complexity__allocate_slot_numbers_cl_3_p_0(transform_hlds__complexity__VarInfos_30, (MR_Integer) 0, &transform_hlds__complexity__NumberedProfiledVars_31);
    mercury__list__length_2_p_0((MR_Word) &transform_hlds__complexity_scalar_common_2[0], transform_hlds__complexity__NumberedProfiledVars_31, &transform_hlds__complexity__NumProfiledVars_32);
    transform_hlds__complexity__generate_slot_goals_12_p_0(transform_hlds__complexity__ProcNum_10, transform_hlds__complexity__NumberedProfiledVars_31, transform_hlds__complexity__NumProfiledVars_32, transform_hlds__complexity__Context_22, transform_hlds__complexity__PredId_12, transform_hlds__complexity__STATE_VARIABLE_ProcInfo_81_81, &transform_hlds__complexity__STATE_VARIABLE_ProcInfo_83_83, transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_0_77, &transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_84_84, &transform_hlds__complexity__SlotVar_33, &transform_hlds__complexity__SlotVarName_34, &transform_hlds__complexity__SlotGoals_35);
    transform_hlds__complexity__Var_87 = parse_tree__prog_mode__out_mode_0_f_0();
    {
      transform_hlds__complexity__Var_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__Var_86, 0) = ((MR_Box) ((MR_String) "IsActive"));
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__Var_86, 1) = ((MR_Box) (transform_hlds__complexity__Var_87));
    }
    {
      transform_hlds__complexity__Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__Var_85, 0) = ((MR_Box) (transform_hlds__complexity__Var_86));
    }
    transform_hlds__complexity__Var_88 = transform_hlds__complexity__is_active_type_0_f_0();
    {
      transform_hlds__complexity__IsActiveOutputArg_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__IsActiveOutputArg_36, 0) = ((MR_Box) (transform_hlds__complexity__IsActiveVar_29));
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__IsActiveOutputArg_36, 1) = ((MR_Box) (transform_hlds__complexity__Var_85));
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__IsActiveOutputArg_36, 2) = ((MR_Box) (transform_hlds__complexity__Var_88));
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__IsActiveOutputArg_36, 3) = ((MR_Box) ((MR_Integer) 0));
    }
    transform_hlds__complexity__Var_92 = parse_tree__prog_mode__in_mode_0_f_0();
    {
      transform_hlds__complexity__Var_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__Var_91, 0) = ((MR_Box) (transform_hlds__complexity__SlotVarName_34));
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__Var_91, 1) = ((MR_Box) (transform_hlds__complexity__Var_92));
    }
    {
      transform_hlds__complexity__Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__Var_90, 0) = ((MR_Box) (transform_hlds__complexity__Var_91));
    }
    transform_hlds__complexity__Var_93 = parse_tree__builtin_lib_types__int_type_0_f_0();
    {
      transform_hlds__complexity__SlotInputArg_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__SlotInputArg_37, 0) = ((MR_Box) (transform_hlds__complexity__SlotVar_33));
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__SlotInputArg_37, 1) = ((MR_Box) (transform_hlds__complexity__Var_90));
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__SlotInputArg_37, 2) = ((MR_Box) (transform_hlds__complexity__Var_93));
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__SlotInputArg_37, 3) = ((MR_Box) ((MR_Integer) 0));
    }
    transform_hlds__complexity__ProcNumStr_38 = mercury__string__int_to_string_1_f_0(transform_hlds__complexity__ProcNum_10);
    transform_hlds__complexity__Var_100 = mercury__string__int_to_string_1_f_0(transform_hlds__complexity__NumProcs_9);
    transform_hlds__complexity__Var_110 = mercury__string__int_to_string_1_f_0(transform_hlds__complexity__NumProfiledVars_32);
    transform_hlds__complexity__Var_109 = mercury__string__f_43_43_2_f_0(transform_hlds__complexity__Var_110, (MR_String) ", IsActive);\n");
    transform_hlds__complexity__Var_107 = mercury__string__f_43_43_2_f_0((MR_String) "\", ", transform_hlds__complexity__Var_109);
    transform_hlds__complexity__Var_106 = mercury__string__f_43_43_2_f_0(transform_hlds__complexity__FullName_11, transform_hlds__complexity__Var_107);
    transform_hlds__complexity__Var_104 = mercury__string__f_43_43_2_f_0((MR_String) ", \"", transform_hlds__complexity__Var_106);
    transform_hlds__complexity__Var_103 = mercury__string__f_43_43_2_f_0(transform_hlds__complexity__ProcNumStr_38, transform_hlds__complexity__Var_104);
    transform_hlds__complexity__Var_101 = mercury__string__f_43_43_2_f_0((MR_String) ", ", transform_hlds__complexity__Var_103);
    transform_hlds__complexity__Var_99 = mercury__string__f_43_43_2_f_0(transform_hlds__complexity__Var_100, transform_hlds__complexity__Var_101);
    transform_hlds__complexity__Var_97 = mercury__string__f_43_43_2_f_0((MR_String) "(", transform_hlds__complexity__Var_99);
    transform_hlds__complexity__Var_96 = mercury__string__f_43_43_2_f_0((MR_String) "complexity_is_active", transform_hlds__complexity__Var_97);
    transform_hlds__complexity__IsActiveStr_40 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_", transform_hlds__complexity__Var_96);
    {
      transform_hlds__complexity__Var_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__Var_116, 0) = ((MR_Box) (transform_hlds__complexity__IsActiveOutputArg_36));
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__Var_116, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__complexity__Var_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__Var_118, 0) = ((MR_Box) (transform_hlds__complexity__IsActiveVar_29));
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__Var_118, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    transform_hlds__complexity__complexity_generate_foreign_proc_9_p_0((MR_String) "complexity_is_active", (MR_Integer) 0, transform_hlds__complexity__Var_116, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__complexity__IsActiveStr_40, transform_hlds__complexity__Var_118, transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_84_84, transform_hlds__complexity__Context_22, &transform_hlds__complexity__IsActiveGoal_41);
    transform_hlds__complexity__Var_129 = transform_hlds__complexity__slot_var_name_0_f_0();
    transform_hlds__complexity__Var_128 = mercury__string__f_43_43_2_f_0(transform_hlds__complexity__Var_129, (MR_String) ");\n");
    transform_hlds__complexity__Var_126 = mercury__string__f_43_43_2_f_0((MR_String) ", ", transform_hlds__complexity__Var_128);
    transform_hlds__complexity__Var_125 = mercury__string__f_43_43_2_f_0(transform_hlds__complexity__ProcNumStr_38, transform_hlds__complexity__Var_126);
    transform_hlds__complexity__Var_123 = mercury__string__f_43_43_2_f_0((MR_String) "(", transform_hlds__complexity__Var_125);
    transform_hlds__complexity__Var_122 = mercury__string__f_43_43_2_f_0((MR_String) "complexity_exit_proc", transform_hlds__complexity__Var_123);
    transform_hlds__complexity__ExitStr_43 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_", transform_hlds__complexity__Var_122);
    {
      transform_hlds__complexity__Var_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__Var_132, 0) = ((MR_Box) (transform_hlds__complexity__SlotInputArg_37));
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__Var_132, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    transform_hlds__complexity__complexity_generate_foreign_proc_9_p_0((MR_String) "complexity_exit_proc", (MR_Integer) 0, transform_hlds__complexity__Var_132, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__complexity__ExitStr_43, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_84_84, transform_hlds__complexity__Context_22, &transform_hlds__complexity__ExitGoal_44);
    transform_hlds__complexity__Var_144 = transform_hlds__complexity__slot_var_name_0_f_0();
    transform_hlds__complexity__Var_143 = mercury__string__f_43_43_2_f_0(transform_hlds__complexity__Var_144, (MR_String) ");\n");
    transform_hlds__complexity__Var_141 = mercury__string__f_43_43_2_f_0((MR_String) ", ", transform_hlds__complexity__Var_143);
    transform_hlds__complexity__Var_140 = mercury__string__f_43_43_2_f_0(transform_hlds__complexity__ProcNumStr_38, transform_hlds__complexity__Var_141);
    transform_hlds__complexity__Var_138 = mercury__string__f_43_43_2_f_0((MR_String) "(", transform_hlds__complexity__Var_140);
    transform_hlds__complexity__Var_137 = mercury__string__f_43_43_2_f_0((MR_String) "complexity_fail_proc", transform_hlds__complexity__Var_138);
    transform_hlds__complexity__FailStr_46 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_", transform_hlds__complexity__Var_137);
    transform_hlds__complexity__complexity_generate_foreign_proc_9_p_0((MR_String) "complexity_fail_proc", (MR_Integer) 7, transform_hlds__complexity__Var_132, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__complexity__FailStr_46, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_84_84, transform_hlds__complexity__Context_22, &transform_hlds__complexity__FailGoal_47);
    transform_hlds__complexity__Var_159 = transform_hlds__complexity__slot_var_name_0_f_0();
    transform_hlds__complexity__Var_158 = mercury__string__f_43_43_2_f_0(transform_hlds__complexity__Var_159, (MR_String) ");\n");
    transform_hlds__complexity__Var_156 = mercury__string__f_43_43_2_f_0((MR_String) ", ", transform_hlds__complexity__Var_158);
    transform_hlds__complexity__Var_155 = mercury__string__f_43_43_2_f_0(transform_hlds__complexity__ProcNumStr_38, transform_hlds__complexity__Var_156);
    transform_hlds__complexity__Var_153 = mercury__string__f_43_43_2_f_0((MR_String) "(", transform_hlds__complexity__Var_155);
    transform_hlds__complexity__Var_152 = mercury__string__f_43_43_2_f_0((MR_String) "complexity_redo_proc", transform_hlds__complexity__Var_153);
    transform_hlds__complexity__RedoStr_49 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_", transform_hlds__complexity__Var_152);
    transform_hlds__complexity__complexity_generate_foreign_proc_9_p_0((MR_String) "complexity_redo_proc", (MR_Integer) 7, transform_hlds__complexity__Var_132, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__complexity__RedoStr_49, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_84_84, transform_hlds__complexity__Context_22, &transform_hlds__complexity__RedoGoal0_50);
    switch (transform_hlds__complexity__CodeModel_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word transform_hlds__complexity__TransformedGoalExpr_51;
          MR_Word transform_hlds__complexity__Var_203;
          MR_Word transform_hlds__complexity__Var_204;
          MR_Word transform_hlds__complexity__Var_205;

          {
            transform_hlds__complexity__Var_205 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), transform_hlds__complexity__Var_205, 0) = ((MR_Box) (transform_hlds__complexity__ExitGoal_44));
            MR_hl_field(MR_mktag(1), transform_hlds__complexity__Var_205, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            transform_hlds__complexity__Var_204 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), transform_hlds__complexity__Var_204, 0) = ((MR_Box) (transform_hlds__complexity__OrigGoal_21));
            MR_hl_field(MR_mktag(1), transform_hlds__complexity__Var_204, 1) = ((MR_Box) (transform_hlds__complexity__Var_205));
          }
          transform_hlds__complexity__Var_203 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__complexity__SlotGoals_35, transform_hlds__complexity__Var_204);
          {
            transform_hlds__complexity__TransformedGoalExpr_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), transform_hlds__complexity__TransformedGoalExpr_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), transform_hlds__complexity__TransformedGoalExpr_51, 1) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), transform_hlds__complexity__TransformedGoalExpr_51, 2) = ((MR_Box) (transform_hlds__complexity__Var_203));
          }
          {
            transform_hlds__complexity__TransGoal_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), transform_hlds__complexity__TransGoal_52, 0) = ((MR_Box) (transform_hlds__complexity__TransformedGoalExpr_51));
            MR_hl_field(MR_mktag(0), transform_hlds__complexity__TransGoal_52, 1) = ((MR_Box) (transform_hlds__complexity__ImpureOrigGoalInfo_27));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word transform_hlds__complexity__RedoGoalExpr_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__complexity__RedoGoal0_50, (MR_Integer) 0)));
          MR_Word transform_hlds__complexity__RedoGoalInfo0_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__complexity__RedoGoal0_50, (MR_Integer) 1)));
          MR_Word transform_hlds__complexity__RedoGoalInfo_57;
          MR_Word transform_hlds__complexity__RedoGoal_58;
          MR_Word transform_hlds__complexity__AfterInstMapDelta_59;
          MR_Word transform_hlds__complexity__AfterGoalInfo_60;
          MR_Word transform_hlds__complexity__AfterGoal_61;
          MR_Word transform_hlds__complexity__Var_167;
          MR_Word transform_hlds__complexity__Var_170;
          MR_Word transform_hlds__complexity__Var_171;
          MR_Word transform_hlds__complexity__Var_172;
          MR_Word transform_hlds__complexity__Var_174;
          MR_Word transform_hlds__complexity__Var_176;
          MR_Word transform_hlds__complexity__Var_177;
          MR_Word transform_hlds__complexity__Var_179;
          MR_Word transform_hlds__complexity__Var_180;
          MR_Word transform_hlds__complexity__Var_181;
          MR_Word transform_hlds__complexity__Var_183;
          MR_Word transform_hlds__complexity__Var_185;
          MR_Word transform_hlds__complexity__Var_186;
          MR_Word transform_hlds__complexity__OrigAfterGoal_233;
          MR_Word transform_hlds__complexity__DisjGoal_234;

          hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 6, transform_hlds__complexity__RedoGoalInfo0_56, &transform_hlds__complexity__RedoGoalInfo_57);
          {
            transform_hlds__complexity__RedoGoal_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), transform_hlds__complexity__RedoGoal_58, 0) = ((MR_Box) (transform_hlds__complexity__RedoGoalExpr_55));
            MR_hl_field(MR_mktag(0), transform_hlds__complexity__RedoGoal_58, 1) = ((MR_Box) (transform_hlds__complexity__RedoGoalInfo_57));
          }
          hlds__instmap__instmap_delta_init_reachable_1_p_0(&transform_hlds__complexity__AfterInstMapDelta_59);
          transform_hlds__complexity__Var_167 = parse_tree__set_of_var__make_singleton_1_f_0(transform_hlds__complexity__TypeCtorInfo_235_235, transform_hlds__complexity__SlotVar_33);
          hlds__hlds_goal__goal_info_init_6_p_0(transform_hlds__complexity__Var_167, transform_hlds__complexity__AfterInstMapDelta_59, (MR_Integer) 2, (MR_Integer) 2, transform_hlds__complexity__Context_22, &transform_hlds__complexity__AfterGoalInfo_60);
          {
            transform_hlds__complexity__Var_172 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), transform_hlds__complexity__Var_172, 0) = ((MR_Box) (transform_hlds__complexity__RedoGoal_58));
            MR_hl_field(MR_mktag(1), transform_hlds__complexity__Var_172, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            transform_hlds__complexity__Var_171 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), transform_hlds__complexity__Var_171, 0) = ((MR_Box) (transform_hlds__complexity__ExitGoal_44));
            MR_hl_field(MR_mktag(1), transform_hlds__complexity__Var_171, 1) = ((MR_Box) (transform_hlds__complexity__Var_172));
          }
          {
            transform_hlds__complexity__Var_170 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), transform_hlds__complexity__Var_170, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), transform_hlds__complexity__Var_170, 1) = ((MR_Box) (transform_hlds__complexity__Var_171));
          }
          {
            transform_hlds__complexity__AfterGoal_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), transform_hlds__complexity__AfterGoal_61, 0) = ((MR_Box) (transform_hlds__complexity__Var_170));
            MR_hl_field(MR_mktag(0), transform_hlds__complexity__AfterGoal_61, 1) = ((MR_Box) (transform_hlds__complexity__AfterGoalInfo_60));
          }
          {
            transform_hlds__complexity__Var_177 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), transform_hlds__complexity__Var_177, 0) = ((MR_Box) (transform_hlds__complexity__AfterGoal_61));
            MR_hl_field(MR_mktag(1), transform_hlds__complexity__Var_177, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            transform_hlds__complexity__Var_176 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), transform_hlds__complexity__Var_176, 0) = ((MR_Box) (transform_hlds__complexity__OrigGoal_21));
            MR_hl_field(MR_mktag(1), transform_hlds__complexity__Var_176, 1) = ((MR_Box) (transform_hlds__complexity__Var_177));
          }
          {
            transform_hlds__complexity__Var_174 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), transform_hlds__complexity__Var_174, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), transform_hlds__complexity__Var_174, 1) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), transform_hlds__complexity__Var_174, 2) = ((MR_Box) (transform_hlds__complexity__Var_176));
          }
          {
            transform_hlds__complexity__OrigAfterGoal_233 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), transform_hlds__complexity__OrigAfterGoal_233, 0) = ((MR_Box) (transform_hlds__complexity__Var_174));
            MR_hl_field(MR_mktag(0), transform_hlds__complexity__OrigAfterGoal_233, 1) = ((MR_Box) (transform_hlds__complexity__ImpureOrigGoalInfo_27));
          }
          {
            transform_hlds__complexity__Var_181 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), transform_hlds__complexity__Var_181, 0) = ((MR_Box) (transform_hlds__complexity__FailGoal_47));
            MR_hl_field(MR_mktag(1), transform_hlds__complexity__Var_181, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            transform_hlds__complexity__Var_180 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), transform_hlds__complexity__Var_180, 0) = ((MR_Box) (transform_hlds__complexity__OrigAfterGoal_233));
            MR_hl_field(MR_mktag(1), transform_hlds__complexity__Var_180, 1) = ((MR_Box) (transform_hlds__complexity__Var_181));
          }
          {
            transform_hlds__complexity__Var_179 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), transform_hlds__complexity__Var_179, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), transform_hlds__complexity__Var_179, 1) = ((MR_Box) (transform_hlds__complexity__Var_180));
          }
          {
            transform_hlds__complexity__DisjGoal_234 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), transform_hlds__complexity__DisjGoal_234, 0) = ((MR_Box) (transform_hlds__complexity__Var_179));
            MR_hl_field(MR_mktag(0), transform_hlds__complexity__DisjGoal_234, 1) = ((MR_Box) (transform_hlds__complexity__ImpureOrigGoalInfo_27));
          }
          {
            transform_hlds__complexity__Var_186 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), transform_hlds__complexity__Var_186, 0) = ((MR_Box) (transform_hlds__complexity__DisjGoal_234));
            MR_hl_field(MR_mktag(1), transform_hlds__complexity__Var_186, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          transform_hlds__complexity__Var_185 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__complexity__SlotGoals_35, transform_hlds__complexity__Var_186);
          {
            transform_hlds__complexity__Var_183 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), transform_hlds__complexity__Var_183, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), transform_hlds__complexity__Var_183, 1) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), transform_hlds__complexity__Var_183, 2) = ((MR_Box) (transform_hlds__complexity__Var_185));
          }
          {
            transform_hlds__complexity__TransGoal_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), transform_hlds__complexity__TransGoal_52, 0) = ((MR_Box) (transform_hlds__complexity__Var_183));
            MR_hl_field(MR_mktag(0), transform_hlds__complexity__TransGoal_52, 1) = ((MR_Box) (transform_hlds__complexity__ImpureOrigGoalInfo_27));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word transform_hlds__complexity__OrigAfterGoal_53;
          MR_Word transform_hlds__complexity__DisjGoal_54;
          MR_Word transform_hlds__complexity__Var_188;
          MR_Word transform_hlds__complexity__Var_190;
          MR_Word transform_hlds__complexity__Var_191;
          MR_Word transform_hlds__complexity__Var_193;
          MR_Word transform_hlds__complexity__Var_194;
          MR_Word transform_hlds__complexity__Var_195;
          MR_Word transform_hlds__complexity__Var_197;
          MR_Word transform_hlds__complexity__Var_199;
          MR_Word transform_hlds__complexity__Var_200;

          {
            transform_hlds__complexity__Var_191 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), transform_hlds__complexity__Var_191, 0) = ((MR_Box) (transform_hlds__complexity__ExitGoal_44));
            MR_hl_field(MR_mktag(1), transform_hlds__complexity__Var_191, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            transform_hlds__complexity__Var_190 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), transform_hlds__complexity__Var_190, 0) = ((MR_Box) (transform_hlds__complexity__OrigGoal_21));
            MR_hl_field(MR_mktag(1), transform_hlds__complexity__Var_190, 1) = ((MR_Box) (transform_hlds__complexity__Var_191));
          }
          {
            transform_hlds__complexity__Var_188 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), transform_hlds__complexity__Var_188, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), transform_hlds__complexity__Var_188, 1) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), transform_hlds__complexity__Var_188, 2) = ((MR_Box) (transform_hlds__complexity__Var_190));
          }
          {
            transform_hlds__complexity__OrigAfterGoal_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), transform_hlds__complexity__OrigAfterGoal_53, 0) = ((MR_Box) (transform_hlds__complexity__Var_188));
            MR_hl_field(MR_mktag(0), transform_hlds__complexity__OrigAfterGoal_53, 1) = ((MR_Box) (transform_hlds__complexity__ImpureOrigGoalInfo_27));
          }
          {
            transform_hlds__complexity__Var_195 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), transform_hlds__complexity__Var_195, 0) = ((MR_Box) (transform_hlds__complexity__FailGoal_47));
            MR_hl_field(MR_mktag(1), transform_hlds__complexity__Var_195, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            transform_hlds__complexity__Var_194 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), transform_hlds__complexity__Var_194, 0) = ((MR_Box) (transform_hlds__complexity__OrigAfterGoal_53));
            MR_hl_field(MR_mktag(1), transform_hlds__complexity__Var_194, 1) = ((MR_Box) (transform_hlds__complexity__Var_195));
          }
          {
            transform_hlds__complexity__Var_193 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), transform_hlds__complexity__Var_193, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), transform_hlds__complexity__Var_193, 1) = ((MR_Box) (transform_hlds__complexity__Var_194));
          }
          {
            transform_hlds__complexity__DisjGoal_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), transform_hlds__complexity__DisjGoal_54, 0) = ((MR_Box) (transform_hlds__complexity__Var_193));
            MR_hl_field(MR_mktag(0), transform_hlds__complexity__DisjGoal_54, 1) = ((MR_Box) (transform_hlds__complexity__ImpureOrigGoalInfo_27));
          }
          {
            transform_hlds__complexity__Var_200 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), transform_hlds__complexity__Var_200, 0) = ((MR_Box) (transform_hlds__complexity__DisjGoal_54));
            MR_hl_field(MR_mktag(1), transform_hlds__complexity__Var_200, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          transform_hlds__complexity__Var_199 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__complexity__SlotGoals_35, transform_hlds__complexity__Var_200);
          {
            transform_hlds__complexity__Var_197 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), transform_hlds__complexity__Var_197, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), transform_hlds__complexity__Var_197, 1) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), transform_hlds__complexity__Var_197, 2) = ((MR_Box) (transform_hlds__complexity__Var_199));
          }
          {
            transform_hlds__complexity__TransGoal_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), transform_hlds__complexity__TransGoal_52, 0) = ((MR_Box) (transform_hlds__complexity__Var_197));
            MR_hl_field(MR_mktag(0), transform_hlds__complexity__TransGoal_52, 1) = ((MR_Box) (transform_hlds__complexity__ImpureOrigGoalInfo_27));
          }
        }
        break;
    }
    transform_hlds__complexity__TSPB_62 = mdbcomp__builtin_modules__mercury_term_size_prof_builtin_module_0_f_0();
    {
      transform_hlds__complexity__Var_207 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__Var_207, 0) = ((MR_Box) (transform_hlds__complexity__TSPB_62));
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__Var_207, 1) = ((MR_Box) ((MR_String) "complexity_is_active"));
    }
    {
      transform_hlds__complexity__TypeCtor_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__TypeCtor_63, 0) = ((MR_Box) (transform_hlds__complexity__Var_207));
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__TypeCtor_63, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      transform_hlds__complexity__Var_212 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__Var_212, 0) = ((MR_Box) (transform_hlds__complexity__TSPB_62));
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__Var_212, 1) = ((MR_Box) ((MR_String) "is_inactive"));
    }
    {
      transform_hlds__complexity__Var_211 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), transform_hlds__complexity__Var_211, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), transform_hlds__complexity__Var_211, 1) = ((MR_Box) (transform_hlds__complexity__Var_212));
      MR_hl_field(MR_mktag(3), transform_hlds__complexity__Var_211, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), transform_hlds__complexity__Var_211, 3) = ((MR_Box) (transform_hlds__complexity__TypeCtor_63));
    }
    {
      transform_hlds__complexity__Var_210 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__Var_210, 0) = ((MR_Box) (transform_hlds__complexity__Var_211));
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__Var_210, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__Var_210, 2) = ((MR_Box) (transform_hlds__complexity__TransGoal_52));
    }
    {
      transform_hlds__complexity__Var_219 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__Var_219, 0) = ((MR_Box) (transform_hlds__complexity__TSPB_62));
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__Var_219, 1) = ((MR_Box) ((MR_String) "is_active"));
    }
    {
      transform_hlds__complexity__Var_218 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), transform_hlds__complexity__Var_218, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), transform_hlds__complexity__Var_218, 1) = ((MR_Box) (transform_hlds__complexity__Var_219));
      MR_hl_field(MR_mktag(3), transform_hlds__complexity__Var_218, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), transform_hlds__complexity__Var_218, 3) = ((MR_Box) (transform_hlds__complexity__TypeCtor_63));
    }
    {
      transform_hlds__complexity__Var_217 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__Var_217, 0) = ((MR_Box) (transform_hlds__complexity__Var_218));
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__Var_217, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__Var_217, 2) = ((MR_Box) (transform_hlds__complexity__OrigGoal_21));
    }
    {
      transform_hlds__complexity__Var_216 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__Var_216, 0) = ((MR_Box) (transform_hlds__complexity__Var_217));
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__Var_216, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__complexity__SwitchArms_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__SwitchArms_64, 0) = ((MR_Box) (transform_hlds__complexity__Var_210));
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__SwitchArms_64, 1) = ((MR_Box) (transform_hlds__complexity__Var_216));
    }
    {
      transform_hlds__complexity__SwitchExpr_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), transform_hlds__complexity__SwitchExpr_65, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(3), transform_hlds__complexity__SwitchExpr_65, 1) = ((MR_Box) (transform_hlds__complexity__IsActiveVar_29));
      MR_hl_field(MR_mktag(3), transform_hlds__complexity__SwitchExpr_65, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), transform_hlds__complexity__SwitchExpr_65, 3) = ((MR_Box) (transform_hlds__complexity__SwitchArms_64));
    }
    hlds__hlds_goal__goal_info_init_6_p_0(transform_hlds__complexity__OrigNonLocals_24, transform_hlds__complexity__OrigInstMapDelta_26, transform_hlds__complexity__Detism_15, (MR_Integer) 2, transform_hlds__complexity__Context_22, &transform_hlds__complexity__SwitchGoalInfo_66);
    {
      transform_hlds__complexity__SwitchGoal_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__SwitchGoal_67, 0) = ((MR_Box) (transform_hlds__complexity__SwitchExpr_65));
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__SwitchGoal_67, 1) = ((MR_Box) (transform_hlds__complexity__SwitchGoalInfo_66));
    }
    {
      transform_hlds__complexity__Var_228 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__Var_228, 0) = ((MR_Box) (transform_hlds__complexity__SwitchGoal_67));
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__Var_228, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__complexity__Var_227 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__Var_227, 0) = ((MR_Box) (transform_hlds__complexity__IsActiveGoal_41));
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__Var_227, 1) = ((MR_Box) (transform_hlds__complexity__Var_228));
    }
    {
      transform_hlds__complexity__GoalExpr_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), transform_hlds__complexity__GoalExpr_68, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), transform_hlds__complexity__GoalExpr_68, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), transform_hlds__complexity__GoalExpr_68, 2) = ((MR_Box) (transform_hlds__complexity__Var_227));
    }
    hlds__hlds_goal__goal_info_init_6_p_0(transform_hlds__complexity__OrigNonLocals_24, transform_hlds__complexity__OrigInstMapDelta_26, transform_hlds__complexity__Detism_15, (MR_Integer) 2, transform_hlds__complexity__Context_22, &transform_hlds__complexity__GoalInfo_69);
    {
      transform_hlds__complexity__Goal_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__Goal_70, 0) = ((MR_Box) (transform_hlds__complexity__GoalExpr_68));
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__Goal_70, 1) = ((MR_Box) (transform_hlds__complexity__GoalInfo_69));
    }
    hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__complexity__Goal_70, transform_hlds__complexity__STATE_VARIABLE_ProcInfo_83_83, transform_hlds__complexity__STATE_VARIABLE_ProcInfo_76);
    mercury__assoc_list__values_2_p_0((MR_Word) &transform_hlds__complexity_scalar_common_1[0], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_complexity_arg_info_0, transform_hlds__complexity__VarInfos_30, &transform_hlds__complexity__Infos_71);
    {
      transform_hlds__complexity__ComplexityInfo_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__ComplexityInfo_72, 0) = ((MR_Box) (transform_hlds__complexity__ProcNum_10));
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__ComplexityInfo_72, 1) = ((MR_Box) (transform_hlds__complexity__FullName_11));
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__ComplexityInfo_72, 2) = ((MR_Box) (transform_hlds__complexity__Infos_71));
    }
    hlds__hlds_module__module_info_get_complexity_proc_infos_2_p_0(transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_84_84, &transform_hlds__complexity__ComplexityInfos0_73);
    {
      transform_hlds__complexity__ComplexityInfos_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__ComplexityInfos_74, 0) = ((MR_Box) (transform_hlds__complexity__ComplexityInfo_72));
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__ComplexityInfos_74, 1) = ((MR_Box) (transform_hlds__complexity__ComplexityInfos0_73));
    }
    hlds__hlds_module__module_info_set_complexity_proc_infos_3_p_0(transform_hlds__complexity__ComplexityInfos_74, transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_84_84, transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_78);
  }
}

static MR_Word MR_CALL 
transform_hlds__complexity__is_active_type_0_f_0(void)
{
  {
    MR_Word transform_hlds__complexity__Type_2;
    MR_Word transform_hlds__complexity__M_3;
    MR_Word transform_hlds__complexity__Var_4;
    MR_Word transform_hlds__complexity__Var_6;

    transform_hlds__complexity__M_3 = mdbcomp__builtin_modules__mercury_term_size_prof_builtin_module_0_f_0();
    {
      transform_hlds__complexity__Var_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__Var_6, 0) = ((MR_Box) (transform_hlds__complexity__M_3));
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__Var_6, 1) = ((MR_Box) ((MR_String) "complexity_is_active"));
    }
    {
      transform_hlds__complexity__Var_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__Var_4, 0) = ((MR_Box) (transform_hlds__complexity__Var_6));
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__Var_4, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    parse_tree__prog_type__construct_type_3_p_0(transform_hlds__complexity__Var_4, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__complexity__Type_2);
    return transform_hlds__complexity__Type_2;
  }
}

static void MR_CALL 
transform_hlds__complexity__allocate_slot_numbers_cl_3_p_0(
  MR_Word transform_hlds__complexity__HeadVar__1_1,
  MR_Integer transform_hlds__complexity__Offset_2,
  MR_Word * transform_hlds__complexity__HeadVar__3_3)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((transform_hlds__complexity__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *transform_hlds__complexity__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word transform_hlds__complexity__Var_5;
      MR_Word transform_hlds__complexity__Info_6;
      MR_Word transform_hlds__complexity__VarInfos_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__complexity__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word transform_hlds__complexity__Kind_11;
      MR_Word transform_hlds__complexity__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__complexity__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word transform_hlds__complexity__Var_10;

      transform_hlds__complexity__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__complexity__Var_13, (MR_Integer) 0)));
      transform_hlds__complexity__Info_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__complexity__Var_13, (MR_Integer) 1)));
      transform_hlds__complexity__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__complexity__Info_6, (MR_Integer) 0)));
      transform_hlds__complexity__Kind_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__complexity__Info_6, (MR_Integer) 1)));
      switch (transform_hlds__complexity__Kind_11) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            /* direct tailcall eliminated */
            {
              MR_Word transform_hlds__complexity__next_value_of_HeadVar__1_1 = transform_hlds__complexity__VarInfos_7;

              transform_hlds__complexity__HeadVar__1_1 = transform_hlds__complexity__next_value_of_HeadVar__1_1;
            }
            continue;
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Word transform_hlds__complexity__NumberedProfiledVarsTail_12;
            MR_Integer transform_hlds__complexity__Var_14 = (transform_hlds__complexity__Offset_2 + (MR_Integer) 1);
            MR_Word transform_hlds__complexity__Var_16;

            transform_hlds__complexity__allocate_slot_numbers_cl_3_p_0(transform_hlds__complexity__VarInfos_7, transform_hlds__complexity__Var_14, &transform_hlds__complexity__NumberedProfiledVarsTail_12);
            {
              transform_hlds__complexity__Var_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), transform_hlds__complexity__Var_16, 0) = ((MR_Box) (transform_hlds__complexity__Var_5));
              MR_hl_field(MR_mktag(0), transform_hlds__complexity__Var_16, 1) = ((MR_Box) (transform_hlds__complexity__Offset_2));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *transform_hlds__complexity__HeadVar__3_3 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__complexity__Var_16));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__complexity__NumberedProfiledVarsTail_12));
            }
          }
          break;
      }
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__complexity__classify_args_6_p_0(
  MR_Word transform_hlds__complexity__HeadVar__1_1,
  MR_Word transform_hlds__complexity__HeadVar__2_2,
  MR_Word transform_hlds__complexity__ModuleInfo_3,
  MR_Word transform_hlds__complexity__VarSet_4,
  MR_Word transform_hlds__complexity__VarTypes_5,
  MR_Word * transform_hlds__complexity__HeadVar__6_6)
{
  {
    MR_bool transform_hlds__complexity__succeeded;

    if ((transform_hlds__complexity__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((transform_hlds__complexity__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *transform_hlds__complexity__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.complexity", (MR_String) "predicate \140transform_hlds.complexity.classify_args\'/6", (MR_String) "lists not same length");
          return;
        }
      }
    else
    {
      MR_Word transform_hlds__complexity__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__complexity__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word transform_hlds__complexity__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__complexity__HeadVar__1_1, (MR_Integer) 0)));

      if ((transform_hlds__complexity__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.complexity", (MR_String) "predicate \140transform_hlds.complexity.classify_args\'/6", (MR_String) "lists not same length");
          return;
        }
      }
      else
      {
        MR_Word transform_hlds__complexity__Mode_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__complexity__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word transform_hlds__complexity__Modes_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__complexity__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word transform_hlds__complexity__MaybeName_35;
        MR_Word transform_hlds__complexity__Kind_36;
        MR_Word transform_hlds__complexity__VarInfos_37;
        MR_Word transform_hlds__complexity__Var_40;
        MR_Word transform_hlds__complexity__Var_41;
        MR_String transform_hlds__complexity__Name_38;

        transform_hlds__complexity__classify_args_6_p_0(transform_hlds__complexity__Var_43, transform_hlds__complexity__Modes_31, transform_hlds__complexity__ModuleInfo_3, transform_hlds__complexity__VarSet_4, transform_hlds__complexity__VarTypes_5, &transform_hlds__complexity__VarInfos_37);
        transform_hlds__complexity__succeeded = mercury__varset__search_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__complexity__VarSet_4, transform_hlds__complexity__Var_44, &transform_hlds__complexity__Name_38);
        if (transform_hlds__complexity__succeeded)
          {
            transform_hlds__complexity__MaybeName_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), transform_hlds__complexity__MaybeName_35, 0) = ((MR_Box) (transform_hlds__complexity__Name_38));
          }
        else
          transform_hlds__complexity__MaybeName_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        transform_hlds__complexity__succeeded = check_hlds__mode_util__mode_is_fully_input_2_p_0(transform_hlds__complexity__ModuleInfo_3, transform_hlds__complexity__Mode_30);
        if (transform_hlds__complexity__succeeded)
        {
          MR_Word transform_hlds__complexity__VarType_39;

          hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__complexity__VarTypes_5, transform_hlds__complexity__Var_44, &transform_hlds__complexity__VarType_39);
          transform_hlds__complexity__succeeded = transform_hlds__term_norm__zero_size_type_2_p_0(transform_hlds__complexity__ModuleInfo_3, transform_hlds__complexity__VarType_39);
          if (transform_hlds__complexity__succeeded)
            transform_hlds__complexity__Kind_36 = (MR_Integer) 1;
          else
            transform_hlds__complexity__Kind_36 = (MR_Integer) 0;
        }
        else
          transform_hlds__complexity__Kind_36 = (MR_Integer) 2;
        {
          transform_hlds__complexity__Var_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), transform_hlds__complexity__Var_41, 0) = ((MR_Box) (transform_hlds__complexity__MaybeName_35));
          MR_hl_field(MR_mktag(0), transform_hlds__complexity__Var_41, 1) = ((MR_Box) (transform_hlds__complexity__Kind_36));
        }
        {
          transform_hlds__complexity__Var_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), transform_hlds__complexity__Var_40, 0) = ((MR_Box) (transform_hlds__complexity__Var_44));
          MR_hl_field(MR_mktag(0), transform_hlds__complexity__Var_40, 1) = ((MR_Box) (transform_hlds__complexity__Var_41));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *transform_hlds__complexity__HeadVar__6_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__complexity__Var_40));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__complexity__VarInfos_37));
        }
      }
    }
  }
}

static void MR_CALL 
transform_hlds__complexity__generate_new_var_5_p_0(
  MR_String transform_hlds__complexity__Name_6,
  MR_Word transform_hlds__complexity__Type_7,
  MR_Word transform_hlds__complexity__STATE_VARIABLE_ProcInfo_0_14,
  MR_Word * transform_hlds__complexity__STATE_VARIABLE_ProcInfo_15,
  MR_Word * transform_hlds__complexity__Var_9)
{
  {
    MR_Word transform_hlds__complexity__VarSet0_10;
    MR_Word transform_hlds__complexity__VarTypes0_11;
    MR_Word transform_hlds__complexity__VarSet_12;
    MR_Word transform_hlds__complexity__VarTypes_13;
    MR_Word transform_hlds__complexity__STATE_VARIABLE_ProcInfo_16_16;

    hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__complexity__STATE_VARIABLE_ProcInfo_0_14, &transform_hlds__complexity__VarSet0_10);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__complexity__STATE_VARIABLE_ProcInfo_0_14, &transform_hlds__complexity__VarTypes0_11);
    mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__complexity__Name_6, transform_hlds__complexity__Var_9, transform_hlds__complexity__VarSet0_10, &transform_hlds__complexity__VarSet_12);
    hlds__vartypes__add_var_type_4_p_0(*transform_hlds__complexity__Var_9, transform_hlds__complexity__Type_7, transform_hlds__complexity__VarTypes0_11, &transform_hlds__complexity__VarTypes_13);
    hlds__hlds_pred__proc_info_set_varset_3_p_0(transform_hlds__complexity__VarSet_12, transform_hlds__complexity__STATE_VARIABLE_ProcInfo_0_14, &transform_hlds__complexity__STATE_VARIABLE_ProcInfo_16_16);
    hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__complexity__VarTypes_13, transform_hlds__complexity__STATE_VARIABLE_ProcInfo_16_16, transform_hlds__complexity__STATE_VARIABLE_ProcInfo_15);
  }
}

static void MR_CALL 
transform_hlds__complexity__generate_slot_goals_12_p_0(
  MR_Integer transform_hlds__complexity__ProcNum_13,
  MR_Word transform_hlds__complexity__NumberedVars_14,
  MR_Integer transform_hlds__complexity__NumProfiledVars_15,
  MR_Word transform_hlds__complexity__Context_16,
  MR_Word transform_hlds__complexity__PredId_17,
  MR_Word transform_hlds__complexity__STATE_VARIABLE_ProcInfo_0_33,
  MR_Word * transform_hlds__complexity__STATE_VARIABLE_ProcInfo_34,
  MR_Word transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_0_35,
  MR_Word * transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_36,
  MR_Word * transform_hlds__complexity__SlotVar_20,
  MR_String * transform_hlds__complexity__SlotVarName_21,
  MR_Word * transform_hlds__complexity__Goals_22)
{
  {
    MR_Word transform_hlds__complexity__PrefixGoals_24;
    MR_Word transform_hlds__complexity__ForeignArgs_25;
    MR_String transform_hlds__complexity__FillCodeStr_26;
    MR_Word transform_hlds__complexity__SlotVarArg_27;
    MR_String transform_hlds__complexity__PredCodeStr_30;
    MR_String transform_hlds__complexity__ProcStr_31;
    MR_Word transform_hlds__complexity__CallGoal_32;
    MR_Word transform_hlds__complexity__Var_37;
    MR_Word transform_hlds__complexity__STATE_VARIABLE_ProcInfo_38_38;
    MR_Word transform_hlds__complexity__Var_41;
    MR_Word transform_hlds__complexity__Var_42;
    MR_Word transform_hlds__complexity__Var_43;
    MR_Word transform_hlds__complexity__Var_44;
    MR_String transform_hlds__complexity__Var_50;
    MR_String transform_hlds__complexity__Var_51;
    MR_String transform_hlds__complexity__Var_53;
    MR_String transform_hlds__complexity__Var_54;
    MR_String transform_hlds__complexity__Var_60;
    MR_String transform_hlds__complexity__Var_61;
    MR_String transform_hlds__complexity__Var_63;
    MR_String transform_hlds__complexity__Var_64;
    MR_Word transform_hlds__complexity__Var_67;
    MR_String transform_hlds__complexity__Var_68;
    MR_Word transform_hlds__complexity__Var_69;
    MR_String transform_hlds__complexity__Var_71;
    MR_String transform_hlds__complexity__Var_72;
    MR_Word transform_hlds__complexity__Var_74;
    MR_Word transform_hlds__complexity__VarSet0_83;
    MR_Word transform_hlds__complexity__VarTypes0_84;
    MR_Word transform_hlds__complexity__VarSet_85;
    MR_Word transform_hlds__complexity__VarTypes_86;
    MR_Word transform_hlds__complexity__STATE_VARIABLE_ProcInfo_16_87;

    *transform_hlds__complexity__SlotVarName_21 = (MR_String) "SlotVar";
    transform_hlds__complexity__Var_37 = parse_tree__builtin_lib_types__int_type_0_f_0();
    hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__complexity__STATE_VARIABLE_ProcInfo_0_33, &transform_hlds__complexity__VarSet0_83);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__complexity__STATE_VARIABLE_ProcInfo_0_33, &transform_hlds__complexity__VarTypes0_84);
    mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, *transform_hlds__complexity__SlotVarName_21, transform_hlds__complexity__SlotVar_20, transform_hlds__complexity__VarSet0_83, &transform_hlds__complexity__VarSet_85);
    hlds__vartypes__add_var_type_4_p_0(*transform_hlds__complexity__SlotVar_20, transform_hlds__complexity__Var_37, transform_hlds__complexity__VarTypes0_84, &transform_hlds__complexity__VarTypes_86);
    hlds__hlds_pred__proc_info_set_varset_3_p_0(transform_hlds__complexity__VarSet_85, transform_hlds__complexity__STATE_VARIABLE_ProcInfo_0_33, &transform_hlds__complexity__STATE_VARIABLE_ProcInfo_16_87);
    hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__complexity__VarTypes_86, transform_hlds__complexity__STATE_VARIABLE_ProcInfo_16_87, &transform_hlds__complexity__STATE_VARIABLE_ProcInfo_38_38);
    transform_hlds__complexity__generate_size_goals_13_p_0(transform_hlds__complexity__NumberedVars_14, transform_hlds__complexity__Context_16, transform_hlds__complexity__NumProfiledVars_15, (MR_String) "proc", *transform_hlds__complexity__SlotVarName_21, transform_hlds__complexity__PredId_17, transform_hlds__complexity__STATE_VARIABLE_ProcInfo_38_38, transform_hlds__complexity__STATE_VARIABLE_ProcInfo_34, transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_0_35, transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_36, &transform_hlds__complexity__PrefixGoals_24, &transform_hlds__complexity__ForeignArgs_25, &transform_hlds__complexity__FillCodeStr_26);
    transform_hlds__complexity__Var_43 = parse_tree__prog_mode__out_mode_0_f_0();
    {
      transform_hlds__complexity__Var_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__Var_42, 0) = ((MR_Box) (*transform_hlds__complexity__SlotVarName_21));
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__Var_42, 1) = ((MR_Box) (transform_hlds__complexity__Var_43));
    }
    {
      transform_hlds__complexity__Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__Var_41, 0) = ((MR_Box) (transform_hlds__complexity__Var_42));
    }
    transform_hlds__complexity__Var_44 = parse_tree__builtin_lib_types__int_type_0_f_0();
    {
      transform_hlds__complexity__SlotVarArg_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__SlotVarArg_27, 0) = ((MR_Box) (*transform_hlds__complexity__SlotVar_20));
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__SlotVarArg_27, 1) = ((MR_Box) (transform_hlds__complexity__Var_41));
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__SlotVarArg_27, 2) = ((MR_Box) (transform_hlds__complexity__Var_44));
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__SlotVarArg_27, 3) = ((MR_Box) ((MR_Integer) 0));
    }
    transform_hlds__complexity__Var_54 = mercury__string__int_to_string_1_f_0(transform_hlds__complexity__ProcNum_13);
    transform_hlds__complexity__Var_53 = mercury__string__f_43_43_2_f_0(transform_hlds__complexity__Var_54, (MR_String) ", SlotVar);\n");
    transform_hlds__complexity__Var_51 = mercury__string__f_43_43_2_f_0((MR_String) "(", transform_hlds__complexity__Var_53);
    transform_hlds__complexity__Var_50 = mercury__string__f_43_43_2_f_0((MR_String) "complexity_call_proc", transform_hlds__complexity__Var_51);
    transform_hlds__complexity__PredCodeStr_30 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_", transform_hlds__complexity__Var_50);
    transform_hlds__complexity__Var_64 = mercury__string__int_to_string_1_f_0(transform_hlds__complexity__ProcNum_13);
    transform_hlds__complexity__Var_63 = mercury__string__f_43_43_2_f_0(transform_hlds__complexity__Var_64, (MR_String) "];\n");
    transform_hlds__complexity__Var_61 = mercury__string__f_43_43_2_f_0((MR_String) " = &MR_complexity_procs[", transform_hlds__complexity__Var_63);
    transform_hlds__complexity__Var_60 = mercury__string__f_43_43_2_f_0((MR_String) "proc", transform_hlds__complexity__Var_61);
    transform_hlds__complexity__ProcStr_31 = mercury__string__f_43_43_2_f_0((MR_String) "\t", transform_hlds__complexity__Var_60);
    {
      transform_hlds__complexity__Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__Var_67, 0) = ((MR_Box) (transform_hlds__complexity__SlotVarArg_27));
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__Var_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    transform_hlds__complexity__Var_72 = mercury__string__f_43_43_2_f_0(transform_hlds__complexity__ProcStr_31, transform_hlds__complexity__FillCodeStr_26);
    transform_hlds__complexity__Var_71 = mercury__string__f_43_43_2_f_0(transform_hlds__complexity__PredCodeStr_30, transform_hlds__complexity__Var_72);
    transform_hlds__complexity__Var_68 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_ComplexityProc *proc;\n", transform_hlds__complexity__Var_71);
    {
      transform_hlds__complexity__Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__Var_69, 0) = ((MR_Box) (*transform_hlds__complexity__SlotVar_20));
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__Var_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    transform_hlds__complexity__complexity_generate_foreign_proc_9_p_0((MR_String) "complexity_call_proc", (MR_Integer) 0, transform_hlds__complexity__Var_67, transform_hlds__complexity__ForeignArgs_25, transform_hlds__complexity__Var_68, transform_hlds__complexity__Var_69, *transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_36, transform_hlds__complexity__Context_16, &transform_hlds__complexity__CallGoal_32);
    {
      transform_hlds__complexity__Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__Var_74, 0) = ((MR_Box) (transform_hlds__complexity__CallGoal_32));
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__Var_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    mercury__list__append_3_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__complexity__PrefixGoals_24, transform_hlds__complexity__Var_74, transform_hlds__complexity__Goals_22);
  }
}

static void MR_CALL 
transform_hlds__complexity__complexity_generate_foreign_proc_9_p_0(
  MR_String transform_hlds__complexity__PredName_10,
  MR_Word transform_hlds__complexity__Detism_11,
  MR_Word transform_hlds__complexity__Args_12,
  MR_Word transform_hlds__complexity__ExtraArgs_13,
  MR_String transform_hlds__complexity__Code_14,
  MR_Word transform_hlds__complexity__BoundVars_15,
  MR_Word transform_hlds__complexity__ModuleInfo_16,
  MR_Word transform_hlds__complexity__Context_17,
  MR_Word * transform_hlds__complexity__Goal_18)
{
  {
    MR_Word transform_hlds__complexity__BuiltinModule_19;
    MR_Word transform_hlds__complexity__Attrs0_20;
    MR_Word transform_hlds__complexity__Attrs_21;
    MR_Word transform_hlds__complexity__Var_29;

    transform_hlds__complexity__BuiltinModule_19 = mdbcomp__builtin_modules__mercury_term_size_prof_builtin_module_0_f_0();
    transform_hlds__complexity__Attrs0_20 = parse_tree__prog_data_foreign__default_attributes_1_f_0((MR_Integer) 0);
    parse_tree__prog_data_foreign__set_may_call_mercury_3_p_0((MR_Integer) 1, transform_hlds__complexity__Attrs0_20, &transform_hlds__complexity__Attrs_21);
    transform_hlds__complexity__Var_29 = hlds__instmap__instmap_delta_bind_vars_1_f_0(transform_hlds__complexity__BoundVars_15);
    hlds__goal_util__generate_foreign_proc_16_p_0(transform_hlds__complexity__BuiltinModule_19, transform_hlds__complexity__PredName_10, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__complexity__Detism_11, (MR_Integer) 2, transform_hlds__complexity__Attrs_21, transform_hlds__complexity__Args_12, transform_hlds__complexity__ExtraArgs_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__complexity__Code_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__complexity__Var_29, transform_hlds__complexity__ModuleInfo_16, transform_hlds__complexity__Context_17, transform_hlds__complexity__Goal_18);
  }
}

static void MR_CALL 
transform_hlds__complexity__generate_size_goals_13_p_0(
  MR_Word transform_hlds__complexity__HeadVar__1_1,
  MR_Word transform_hlds__complexity__Context_2,
  MR_Integer transform_hlds__complexity__NumProfiledVars_3,
  MR_String transform_hlds__complexity__ProcVarName_4,
  MR_String transform_hlds__complexity__SlotVarName_5,
  MR_Word transform_hlds__complexity__PredId_6,
  MR_Word transform_hlds__complexity__STATE_VARIABLE_ProcInfo_0_7,
  MR_Word * transform_hlds__complexity__STATE_VARIABLE_ProcInfo_8,
  MR_Word transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_0_9,
  MR_Word * transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_10,
  MR_Word * transform_hlds__complexity__HeadVar__11_11,
  MR_Word * transform_hlds__complexity__HeadVar__12_12,
  MR_String * transform_hlds__complexity__HeadVar__13_13)
{
  if ((transform_hlds__complexity__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *transform_hlds__complexity__HeadVar__11_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *transform_hlds__complexity__HeadVar__12_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *transform_hlds__complexity__HeadVar__13_13 = (MR_String) "";
    *transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_10 = transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_0_9;
    *transform_hlds__complexity__STATE_VARIABLE_ProcInfo_8 = transform_hlds__complexity__STATE_VARIABLE_ProcInfo_0_7;
  }
  else
  {
    MR_Word transform_hlds__complexity__Var_25;
    MR_Integer transform_hlds__complexity__VarSeqNum_26;
    MR_Word transform_hlds__complexity__NumberedVars_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__complexity__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word transform_hlds__complexity__Goals_35;
    MR_Word transform_hlds__complexity__RestGoals_36;
    MR_Word transform_hlds__complexity__ForeignArgs_37;
    MR_Word transform_hlds__complexity__RestForeignArgs_38;
    MR_String transform_hlds__complexity__CodeStr_39;
    MR_String transform_hlds__complexity__RestCodeStr_40;
    MR_Word transform_hlds__complexity__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__complexity__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word transform_hlds__complexity__STATE_VARIABLE_ProcInfo_46_46;
    MR_Word transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_47_47;

    transform_hlds__complexity__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__complexity__Var_45, (MR_Integer) 0)));
    transform_hlds__complexity__VarSeqNum_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__complexity__Var_45, (MR_Integer) 1)));
    transform_hlds__complexity__generate_size_goal_14_p_0(transform_hlds__complexity__Var_25, transform_hlds__complexity__VarSeqNum_26, transform_hlds__complexity__Context_2, transform_hlds__complexity__NumProfiledVars_3, transform_hlds__complexity__ProcVarName_4, transform_hlds__complexity__SlotVarName_5, transform_hlds__complexity__PredId_6, transform_hlds__complexity__STATE_VARIABLE_ProcInfo_0_7, &transform_hlds__complexity__STATE_VARIABLE_ProcInfo_46_46, transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_0_9, &transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_47_47, &transform_hlds__complexity__Goals_35, &transform_hlds__complexity__ForeignArgs_37, &transform_hlds__complexity__CodeStr_39);
    transform_hlds__complexity__generate_size_goals_13_p_0(transform_hlds__complexity__NumberedVars_27, transform_hlds__complexity__Context_2, transform_hlds__complexity__NumProfiledVars_3, transform_hlds__complexity__ProcVarName_4, transform_hlds__complexity__SlotVarName_5, transform_hlds__complexity__PredId_6, transform_hlds__complexity__STATE_VARIABLE_ProcInfo_46_46, transform_hlds__complexity__STATE_VARIABLE_ProcInfo_8, transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_47_47, transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_10, &transform_hlds__complexity__RestGoals_36, &transform_hlds__complexity__RestForeignArgs_38, &transform_hlds__complexity__RestCodeStr_40);
    *transform_hlds__complexity__HeadVar__11_11 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__complexity__Goals_35, transform_hlds__complexity__RestGoals_36);
    *transform_hlds__complexity__HeadVar__12_12 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0, transform_hlds__complexity__ForeignArgs_37, transform_hlds__complexity__RestForeignArgs_38);
    *transform_hlds__complexity__HeadVar__13_13 = mercury__string__f_43_43_2_f_0(transform_hlds__complexity__CodeStr_39, transform_hlds__complexity__RestCodeStr_40);
  }
}

static void MR_CALL 
transform_hlds__complexity__generate_size_goal_14_p_0(
  MR_Word transform_hlds__complexity__ArgVar_15,
  MR_Integer transform_hlds__complexity__VarSeqNum_16,
  MR_Word transform_hlds__complexity__Context_17,
  MR_Integer transform_hlds__complexity__NumProfiledVars_18,
  MR_String transform_hlds__complexity__ProcVarName_19,
  MR_String transform_hlds__complexity__SlotVarName_20,
  MR_Word transform_hlds__complexity__PredId_21,
  MR_Word transform_hlds__complexity__STATE_VARIABLE_ProcInfo_0_37,
  MR_Word * transform_hlds__complexity__STATE_VARIABLE_ProcInfo_38,
  MR_Word transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_0_39,
  MR_Word * transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_40,
  MR_Word * transform_hlds__complexity__Goals_24,
  MR_Word * transform_hlds__complexity__ForeignArgs_25,
  MR_String * transform_hlds__complexity__CodeStr_26)
{
  {
    MR_Word transform_hlds__complexity__VarTypes1_27;
    MR_Word transform_hlds__complexity__VarType_28;
    MR_Word transform_hlds__complexity__TypeInfoVar_30;
    MR_Word transform_hlds__complexity__VarTypes2_31;
    MR_Word transform_hlds__complexity__TypeInfoType_32;
    MR_String transform_hlds__complexity__ArgName_33;
    MR_String transform_hlds__complexity__TypeInfoArgName_34;
    MR_Word transform_hlds__complexity__ForeignArg_35;
    MR_Word transform_hlds__complexity__ForeignTypeInfoArg_36;
    MR_String transform_hlds__complexity__Var_44;
    MR_String transform_hlds__complexity__Var_46;
    MR_Word transform_hlds__complexity__Var_47;
    MR_Word transform_hlds__complexity__Var_48;
    MR_Word transform_hlds__complexity__Var_49;
    MR_Word transform_hlds__complexity__Var_51;
    MR_Word transform_hlds__complexity__Var_52;
    MR_Word transform_hlds__complexity__Var_53;
    MR_Word transform_hlds__complexity__Var_55;
    MR_String transform_hlds__complexity__Var_58;
    MR_String transform_hlds__complexity__Var_59;
    MR_String transform_hlds__complexity__Var_61;
    MR_String transform_hlds__complexity__Var_62;
    MR_String transform_hlds__complexity__Var_64;
    MR_String transform_hlds__complexity__Var_65;
    MR_String transform_hlds__complexity__Var_67;
    MR_String transform_hlds__complexity__Var_68;
    MR_String transform_hlds__complexity__Var_69;
    MR_String transform_hlds__complexity__Var_71;
    MR_String transform_hlds__complexity__Var_72;
    MR_String transform_hlds__complexity__Var_73;
    MR_String transform_hlds__complexity__Var_75;
    MR_String transform_hlds__complexity__Var_77;
    MR_String transform_hlds__complexity__Var_78;
    MR_String transform_hlds__complexity__Var_80;

    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__complexity__STATE_VARIABLE_ProcInfo_0_37, &transform_hlds__complexity__VarTypes1_27);
    hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__complexity__VarTypes1_27, transform_hlds__complexity__ArgVar_15, &transform_hlds__complexity__VarType_28);
    transform_hlds__complexity__make_type_info_var_9_p_0(transform_hlds__complexity__VarType_28, transform_hlds__complexity__Context_17, transform_hlds__complexity__PredId_21, transform_hlds__complexity__STATE_VARIABLE_ProcInfo_0_37, transform_hlds__complexity__STATE_VARIABLE_ProcInfo_38, transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_0_39, transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_40, &transform_hlds__complexity__TypeInfoVar_30, transform_hlds__complexity__Goals_24);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(*transform_hlds__complexity__STATE_VARIABLE_ProcInfo_38, &transform_hlds__complexity__VarTypes2_31);
    hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__complexity__VarTypes2_31, transform_hlds__complexity__TypeInfoVar_30, &transform_hlds__complexity__TypeInfoType_32);
    transform_hlds__complexity__Var_44 = mercury__string__int_to_string_1_f_0(transform_hlds__complexity__VarSeqNum_16);
    transform_hlds__complexity__ArgName_33 = mercury__string__f_43_43_2_f_0((MR_String) "arg", transform_hlds__complexity__Var_44);
    transform_hlds__complexity__Var_46 = mercury__string__int_to_string_1_f_0(transform_hlds__complexity__VarSeqNum_16);
    transform_hlds__complexity__TypeInfoArgName_34 = mercury__string__f_43_43_2_f_0((MR_String) "input_typeinfo", transform_hlds__complexity__Var_46);
    transform_hlds__complexity__Var_49 = parse_tree__prog_mode__in_mode_0_f_0();
    {
      transform_hlds__complexity__Var_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__Var_48, 0) = ((MR_Box) (transform_hlds__complexity__ArgName_33));
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__Var_48, 1) = ((MR_Box) (transform_hlds__complexity__Var_49));
    }
    {
      transform_hlds__complexity__Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__Var_47, 0) = ((MR_Box) (transform_hlds__complexity__Var_48));
    }
    {
      transform_hlds__complexity__ForeignArg_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__ForeignArg_35, 0) = ((MR_Box) (transform_hlds__complexity__ArgVar_15));
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__ForeignArg_35, 1) = ((MR_Box) (transform_hlds__complexity__Var_47));
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__ForeignArg_35, 2) = ((MR_Box) (transform_hlds__complexity__VarType_28));
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__ForeignArg_35, 3) = ((MR_Box) ((MR_Integer) 0));
    }
    transform_hlds__complexity__Var_53 = parse_tree__prog_mode__in_mode_0_f_0();
    {
      transform_hlds__complexity__Var_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__Var_52, 0) = ((MR_Box) (transform_hlds__complexity__TypeInfoArgName_34));
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__Var_52, 1) = ((MR_Box) (transform_hlds__complexity__Var_53));
    }
    {
      transform_hlds__complexity__Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__Var_51, 0) = ((MR_Box) (transform_hlds__complexity__Var_52));
    }
    {
      transform_hlds__complexity__ForeignTypeInfoArg_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__ForeignTypeInfoArg_36, 0) = ((MR_Box) (transform_hlds__complexity__TypeInfoVar_30));
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__ForeignTypeInfoArg_36, 1) = ((MR_Box) (transform_hlds__complexity__Var_51));
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__ForeignTypeInfoArg_36, 2) = ((MR_Box) (transform_hlds__complexity__TypeInfoType_32));
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__ForeignTypeInfoArg_36, 3) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      transform_hlds__complexity__Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__Var_55, 0) = ((MR_Box) (transform_hlds__complexity__ForeignArg_35));
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__Var_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *transform_hlds__complexity__ForeignArgs_25 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__complexity__ForeignTypeInfoArg_36));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__complexity__Var_55));
    }
    transform_hlds__complexity__Var_68 = mercury__string__int_to_string_1_f_0(transform_hlds__complexity__NumProfiledVars_18);
    transform_hlds__complexity__Var_72 = mercury__string__int_to_string_1_f_0(transform_hlds__complexity__VarSeqNum_16);
    transform_hlds__complexity__Var_80 = mercury__string__f_43_43_2_f_0(transform_hlds__complexity__ArgName_33, (MR_String) "));\n");
    transform_hlds__complexity__Var_78 = mercury__string__f_43_43_2_f_0((MR_String) ", ", transform_hlds__complexity__Var_80);
    transform_hlds__complexity__Var_77 = mercury__string__f_43_43_2_f_0(transform_hlds__complexity__TypeInfoArgName_34, transform_hlds__complexity__Var_78);
    transform_hlds__complexity__Var_75 = mercury__string__f_43_43_2_f_0((MR_String) "MR_term_size((MR_TypeInfo) ", transform_hlds__complexity__Var_77);
    transform_hlds__complexity__Var_73 = mercury__string__f_43_43_2_f_0((MR_String) ",\n\t\t", transform_hlds__complexity__Var_75);
    transform_hlds__complexity__Var_71 = mercury__string__f_43_43_2_f_0(transform_hlds__complexity__Var_72, transform_hlds__complexity__Var_73);
    transform_hlds__complexity__Var_69 = mercury__string__f_43_43_2_f_0((MR_String) ", ", transform_hlds__complexity__Var_71);
    transform_hlds__complexity__Var_67 = mercury__string__f_43_43_2_f_0(transform_hlds__complexity__Var_68, transform_hlds__complexity__Var_69);
    transform_hlds__complexity__Var_65 = mercury__string__f_43_43_2_f_0((MR_String) ", ", transform_hlds__complexity__Var_67);
    transform_hlds__complexity__Var_64 = mercury__string__f_43_43_2_f_0(transform_hlds__complexity__SlotVarName_20, transform_hlds__complexity__Var_65);
    transform_hlds__complexity__Var_62 = mercury__string__f_43_43_2_f_0((MR_String) ", ", transform_hlds__complexity__Var_64);
    transform_hlds__complexity__Var_61 = mercury__string__f_43_43_2_f_0(transform_hlds__complexity__ProcVarName_19, transform_hlds__complexity__Var_62);
    transform_hlds__complexity__Var_59 = mercury__string__f_43_43_2_f_0((MR_String) "(", transform_hlds__complexity__Var_61);
    transform_hlds__complexity__Var_58 = mercury__string__f_43_43_2_f_0((MR_String) "MR_complexity_fill_size_slot", transform_hlds__complexity__Var_59);
    *transform_hlds__complexity__CodeStr_26 = mercury__string__f_43_43_2_f_0((MR_String) "\t", transform_hlds__complexity__Var_58);
  }
}

static MR_bool MR_CALL 
transform_hlds__complexity__make_type_info_var_9_p_0_2(
  MR_Box transform_hlds__complexity__closure_arg)
{
  {
    MR_bool transform_hlds__complexity__succeeded;
    MR_Box transform_hlds__complexity__closure = transform_hlds__complexity__closure_arg;

    transform_hlds__complexity__succeeded = transform_hlds__complexity__IntroducedFrom__pred__make_type_info_var__595__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__complexity__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__complexity__closure, (MR_Integer) 4))));
    return transform_hlds__complexity__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__complexity__make_type_info_var_9_p_0_1(
  MR_Box transform_hlds__complexity__closure_arg)
{
  {
    MR_bool transform_hlds__complexity__succeeded;
    MR_Box transform_hlds__complexity__closure = transform_hlds__complexity__closure_arg;

    transform_hlds__complexity__succeeded = transform_hlds__complexity__IntroducedFrom__pred__make_type_info_var__593__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__complexity__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__complexity__closure, (MR_Integer) 4))));
    return transform_hlds__complexity__succeeded;
  }
}

static void MR_CALL 
transform_hlds__complexity__make_type_info_var_9_p_0(
  MR_Word transform_hlds__complexity__Type_10,
  MR_Word transform_hlds__complexity__Context_11,
  MR_Word transform_hlds__complexity__PredId_12,
  MR_Word transform_hlds__complexity__STATE_VARIABLE_ProcInfo_0_22,
  MR_Word * transform_hlds__complexity__STATE_VARIABLE_ProcInfo_23,
  MR_Word transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_0_24,
  MR_Word * transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_25,
  MR_Word * transform_hlds__complexity__TypeInfoVar_15,
  MR_Word * transform_hlds__complexity__TypeInfoGoals_16)
{
  {
    MR_bool transform_hlds__complexity__succeeded;
    MR_Word transform_hlds__complexity__PredInfo0_17;
    MR_Word transform_hlds__complexity__PolyInfo0_18;
    MR_Word transform_hlds__complexity__PolyInfo_19;
    MR_Word transform_hlds__complexity__PolySpecs_20;
    MR_Word transform_hlds__complexity__PredInfo_21;
    MR_Word transform_hlds__complexity__Var_28;
    MR_Word transform_hlds__complexity__Var_33;

    hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_0_24, transform_hlds__complexity__PredId_12, &transform_hlds__complexity__PredInfo0_17);
    check_hlds__polymorphism__create_poly_info_4_p_0(transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_0_24, transform_hlds__complexity__PredInfo0_17, transform_hlds__complexity__STATE_VARIABLE_ProcInfo_0_22, &transform_hlds__complexity__PolyInfo0_18);
    check_hlds__polymorphism__polymorphism_make_type_info_var_6_p_0(transform_hlds__complexity__Type_10, transform_hlds__complexity__Context_11, transform_hlds__complexity__TypeInfoVar_15, transform_hlds__complexity__TypeInfoGoals_16, transform_hlds__complexity__PolyInfo0_18, &transform_hlds__complexity__PolyInfo_19);
    check_hlds__polymorphism__poly_info_extract_7_p_0(transform_hlds__complexity__PolyInfo_19, &transform_hlds__complexity__PolySpecs_20, transform_hlds__complexity__PredInfo0_17, &transform_hlds__complexity__PredInfo_21, transform_hlds__complexity__STATE_VARIABLE_ProcInfo_0_22, transform_hlds__complexity__STATE_VARIABLE_ProcInfo_23, transform_hlds__complexity__STATE_VARIABLE_ModuleInfo_25);
    {
      transform_hlds__complexity__Var_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__Var_28, 0) = ((MR_Box) (&transform_hlds__complexity_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__Var_28, 1) = ((MR_Box) (transform_hlds__complexity__make_type_info_var_9_p_0_1));
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__Var_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__Var_28, 3) = ((MR_Box) (transform_hlds__complexity__PolySpecs_20));
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__Var_28, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    mercury__require__expect_4_p_0(transform_hlds__complexity__Var_28, (MR_String) "transform_hlds.complexity", (MR_String) "predicate \140transform_hlds.complexity.make_type_info_var\'/9", (MR_String) "got errors while making type_info_var");
    {
      transform_hlds__complexity__Var_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__Var_33, 0) = ((MR_Box) (&transform_hlds__complexity_scalar_common_3[2]));
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__Var_33, 1) = ((MR_Box) (transform_hlds__complexity__make_type_info_var_9_p_0_2));
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__Var_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__Var_33, 3) = ((MR_Box) (transform_hlds__complexity__PredInfo0_17));
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__Var_33, 4) = ((MR_Box) (transform_hlds__complexity__PredInfo_21));
    }
    mercury__require__expect_4_p_0(transform_hlds__complexity__Var_33, (MR_String) "transform_hlds.complexity", (MR_String) "predicate \140transform_hlds.complexity.make_type_info_var\'/9", (MR_String) "modified pred_info");
  }
}

static MR_String MR_CALL 
transform_hlds__complexity__slot_var_name_0_f_0(void)
{
  {
    return (MR_String) "SlotVar";
  }
}

MR_Word MR_CALL 
transform_hlds__complexity__is_in_complexity_proc_map_4_f_0(
  MR_Word transform_hlds__complexity__ProcMap_6,
  MR_Word transform_hlds__complexity__ModuleInfo_7,
  MR_Word transform_hlds__complexity__PredId_8,
  MR_Integer transform_hlds__complexity__ProcId_9)
{
  {
    MR_bool transform_hlds__complexity__succeeded;
    MR_Word transform_hlds__complexity__IsInMap_10;
    MR_String transform_hlds__complexity__FullName_11;
    MR_Integer transform_hlds__complexity__ProcNum_12;
    MR_Box transform_hlds__complexity__conv0_ProcNum_12;

    transform_hlds__complexity__FullName_11 = transform_hlds__complexity__complexity_proc_name_3_f_0(transform_hlds__complexity__ModuleInfo_7, transform_hlds__complexity__PredId_8, transform_hlds__complexity__ProcId_9);
    transform_hlds__complexity__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, transform_hlds__complexity__ProcMap_6, ((MR_Box) (transform_hlds__complexity__FullName_11)), &transform_hlds__complexity__conv0_ProcNum_12);
    if (transform_hlds__complexity__succeeded)
    {
      transform_hlds__complexity__ProcNum_12 = ((MR_Integer) transform_hlds__complexity__conv0_ProcNum_12);
      transform_hlds__complexity__succeeded = MR_TRUE;
    }
    if (transform_hlds__complexity__succeeded)
      {
        transform_hlds__complexity__IsInMap_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), transform_hlds__complexity__IsInMap_10, 0) = ((MR_Box) (transform_hlds__complexity__ProcNum_12));
      }
    else
      transform_hlds__complexity__IsInMap_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    return transform_hlds__complexity__IsInMap_10;
  }
}

MR_String MR_CALL 
transform_hlds__complexity__complexity_proc_name_3_f_0(
  MR_Word transform_hlds__complexity__ModuleInfo_5,
  MR_Word transform_hlds__complexity__PredId_6,
  MR_Integer transform_hlds__complexity__ProcId_7)
{
  {
    MR_String transform_hlds__complexity__FullName_8;
    MR_Word transform_hlds__complexity__ModuleSymName_9;
    MR_Word transform_hlds__complexity__PredInfo_10;
    MR_String transform_hlds__complexity__PredName_11;
    MR_Word transform_hlds__complexity__QualifiedName_12;
    MR_Integer transform_hlds__complexity__Arity_13;
    MR_String transform_hlds__complexity__NameAndArity_14;
    MR_Integer transform_hlds__complexity__ProcIdInt_15;
    MR_Word transform_hlds__complexity__Var_16;
    MR_String transform_hlds__complexity__Var_17;
    MR_String transform_hlds__complexity__Var_19;

    hlds__hlds_module__module_info_get_name_2_p_0(transform_hlds__complexity__ModuleInfo_5, &transform_hlds__complexity__ModuleSymName_9);
    hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__complexity__ModuleInfo_5, transform_hlds__complexity__PredId_6, &transform_hlds__complexity__PredInfo_10);
    transform_hlds__complexity__PredName_11 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__complexity__PredInfo_10);
    {
      transform_hlds__complexity__QualifiedName_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__QualifiedName_12, 0) = ((MR_Box) (transform_hlds__complexity__ModuleSymName_9));
      MR_hl_field(MR_mktag(1), transform_hlds__complexity__QualifiedName_12, 1) = ((MR_Box) (transform_hlds__complexity__PredName_11));
    }
    transform_hlds__complexity__Arity_13 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(transform_hlds__complexity__PredInfo_10);
    {
      transform_hlds__complexity__Var_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__Var_16, 0) = ((MR_Box) (transform_hlds__complexity__QualifiedName_12));
      MR_hl_field(MR_mktag(0), transform_hlds__complexity__Var_16, 1) = ((MR_Box) (transform_hlds__complexity__Arity_13));
    }
    transform_hlds__complexity__NameAndArity_14 = parse_tree__prog_out__sym_name_and_arity_to_string_1_f_0(transform_hlds__complexity__Var_16);
    hlds__hlds_pred__proc_id_to_int_2_p_0(transform_hlds__complexity__ProcId_7, &transform_hlds__complexity__ProcIdInt_15);
    transform_hlds__complexity__Var_19 = mercury__string__int_to_string_1_f_0(transform_hlds__complexity__ProcIdInt_15);
    transform_hlds__complexity__Var_17 = mercury__string__f_43_43_2_f_0((MR_String) "-", transform_hlds__complexity__Var_19);
    transform_hlds__complexity__FullName_8 = mercury__string__f_43_43_2_f_0(transform_hlds__complexity__NameAndArity_14, transform_hlds__complexity__Var_17);
    return transform_hlds__complexity__FullName_8;
  }
}

void MR_CALL 
transform_hlds__complexity__read_spec_file_4_p_0(
  MR_String transform_hlds__complexity__FileName_5,
  MR_Word * transform_hlds__complexity__MaybeNumLinesProcMap_6)
{
  {
    MR_Word transform_hlds__complexity__ResStream_8;

    mercury__io__open_input_4_p_0(transform_hlds__complexity__FileName_5, &transform_hlds__complexity__ResStream_8);
    if (((MR_tag((MR_Word) transform_hlds__complexity__ResStream_8)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word transform_hlds__complexity__Error_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__complexity__ResStream_8, (MR_Integer) 0)));
      MR_String transform_hlds__complexity__Var_22;

      transform_hlds__complexity__Var_22 = mercury__io__error_message_1_f_0(transform_hlds__complexity__Error_9);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *transform_hlds__complexity__MaybeNumLinesProcMap_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__complexity__Var_22));
      }
    }
    else
    {
      MR_Word transform_hlds__complexity__Stream_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__complexity__ResStream_8, (MR_Integer) 0)));
      MR_Integer transform_hlds__complexity__NumLines_11;
      MR_Word transform_hlds__complexity__MaybeError_12;
      MR_Word transform_hlds__complexity__ProcMap_13;
      MR_Word transform_hlds__complexity__Var_19;

      transform_hlds__complexity__Var_19 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0);
      transform_hlds__complexity__read_spec_file_lines_8_p_0(transform_hlds__complexity__Stream_10, (MR_Integer) 0, &transform_hlds__complexity__NumLines_11, &transform_hlds__complexity__MaybeError_12, transform_hlds__complexity__Var_19, &transform_hlds__complexity__ProcMap_13);
      if ((transform_hlds__complexity__MaybeError_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word transform_hlds__complexity__Var_21;

        {
          transform_hlds__complexity__Var_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), transform_hlds__complexity__Var_21, 0) = ((MR_Box) (transform_hlds__complexity__NumLines_11));
          MR_hl_field(MR_mktag(0), transform_hlds__complexity__Var_21, 1) = ((MR_Box) (transform_hlds__complexity__ProcMap_13));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *transform_hlds__complexity__MaybeNumLinesProcMap_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__complexity__Var_21));
        }
      }
      else
      {
        MR_String transform_hlds__complexity__Msg_14 = ((MR_String) (MR_hl_field(MR_mktag(1), transform_hlds__complexity__MaybeError_12, (MR_Integer) 0)));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *transform_hlds__complexity__MaybeNumLinesProcMap_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__complexity__Msg_14));
        }
      }
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__complexity__read_spec_file_lines_8_p_0_1(
  MR_Box transform_hlds__complexity__closure_arg,
  MR_Box transform_hlds__complexity__wrapper_arg_1)
{
  {
    MR_bool transform_hlds__complexity__succeeded;
    MR_Box transform_hlds__complexity__closure = transform_hlds__complexity__closure_arg;

    transform_hlds__complexity__succeeded = transform_hlds__complexity__IntroducedFrom__pred__read_spec_file_lines__136__1_2_p_0(((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__complexity__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) transform_hlds__complexity__wrapper_arg_1));
    return transform_hlds__complexity__succeeded;
  }
}

static void MR_CALL 
transform_hlds__complexity__read_spec_file_lines_8_p_0(
  MR_Word transform_hlds__complexity__Stream_9,
  MR_Integer transform_hlds__complexity__CurLineNum_10,
  MR_Integer * transform_hlds__complexity__NumLines_11,
  MR_Word * transform_hlds__complexity__MaybeError_12,
  MR_Word transform_hlds__complexity__STATE_VARIABLE_ProcMap_0_21,
  MR_Word * transform_hlds__complexity__STATE_VARIABLE_ProcMap_22)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool transform_hlds__complexity__succeeded;
      MR_Word transform_hlds__complexity__ResLine_15;

      mercury__io__read_line_4_p_0(transform_hlds__complexity__Stream_9, &transform_hlds__complexity__ResLine_15);
      switch (MR_tag((MR_Word) transform_hlds__complexity__ResLine_15)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *transform_hlds__complexity__NumLines_11 = transform_hlds__complexity__CurLineNum_10;
            *transform_hlds__complexity__MaybeError_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            *transform_hlds__complexity__STATE_VARIABLE_ProcMap_22 = transform_hlds__complexity__STATE_VARIABLE_ProcMap_0_21;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word transform_hlds__complexity__Chars0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__complexity__ResLine_15, (MR_Integer) 0)));
            MR_Word transform_hlds__complexity__Chars_19;
            MR_String transform_hlds__complexity__ProcName_20;
            MR_Word transform_hlds__complexity__Var_18;
            MR_Word transform_hlds__complexity__STATE_VARIABLE_ProcMap_28_28;

            mercury__list__filter_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, (MR_Word) &transform_hlds__complexity_scalar_common_4[0], transform_hlds__complexity__Chars0_17, &transform_hlds__complexity__Var_18, &transform_hlds__complexity__Chars_19);
            mercury__string__from_char_list_2_p_0(transform_hlds__complexity__Chars_19, &transform_hlds__complexity__ProcName_20);
            transform_hlds__complexity__succeeded = mercury__map__insert_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (transform_hlds__complexity__ProcName_20)), ((MR_Box) (transform_hlds__complexity__CurLineNum_10)), transform_hlds__complexity__STATE_VARIABLE_ProcMap_0_21, &transform_hlds__complexity__STATE_VARIABLE_ProcMap_28_28);
            if (transform_hlds__complexity__succeeded)
            {
              MR_Integer transform_hlds__complexity__Var_29 = (transform_hlds__complexity__CurLineNum_10 + (MR_Integer) 1);

              /* direct tailcall eliminated */
              {
                MR_Integer transform_hlds__complexity__next_value_of_CurLineNum_10 = transform_hlds__complexity__Var_29;
                MR_Word transform_hlds__complexity__next_value_of_STATE_VARIABLE_ProcMap_0_21 = transform_hlds__complexity__STATE_VARIABLE_ProcMap_28_28;

                transform_hlds__complexity__CurLineNum_10 = transform_hlds__complexity__next_value_of_CurLineNum_10;
                transform_hlds__complexity__STATE_VARIABLE_ProcMap_0_21 = transform_hlds__complexity__next_value_of_STATE_VARIABLE_ProcMap_0_21;
              }
              continue;
            }
            else
            {
              MR_String transform_hlds__complexity__Var_33;

              *transform_hlds__complexity__NumLines_11 = transform_hlds__complexity__CurLineNum_10;
              transform_hlds__complexity__Var_33 = mercury__string__f_43_43_2_f_0((MR_String) "repeated line: ", transform_hlds__complexity__ProcName_20);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *transform_hlds__complexity__MaybeError_12 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__complexity__Var_33));
              }
              *transform_hlds__complexity__STATE_VARIABLE_ProcMap_22 = transform_hlds__complexity__STATE_VARIABLE_ProcMap_0_21;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word transform_hlds__complexity__Error_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__complexity__ResLine_15, (MR_Integer) 0)));
            MR_String transform_hlds__complexity__Var_35;

            *transform_hlds__complexity__NumLines_11 = transform_hlds__complexity__CurLineNum_10;
            transform_hlds__complexity__Var_35 = mercury__io__error_message_1_f_0(transform_hlds__complexity__Error_16);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *transform_hlds__complexity__MaybeError_12 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__complexity__Var_35));
            }
            *transform_hlds__complexity__STATE_VARIABLE_ProcMap_22 = transform_hlds__complexity__STATE_VARIABLE_ProcMap_0_21;
          }
          break;
      }
    }
    break;
  }
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

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__complexity__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module transform_hlds.complexity. */
