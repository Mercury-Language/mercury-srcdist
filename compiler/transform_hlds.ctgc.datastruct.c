/*
** Automatically generated from `ctgc.datastruct.m'
** by the Mercury compiler,
** version rotd-2019-11-08
** configured for x86_64-pc-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** UNBOXED_INT64S=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


// :- module transform_hlds.ctgc.datastruct.
// :- implementation.

/*
INIT mercury__transform_hlds__ctgc__datastruct__init
ENDINIT
*/

#include "transform_hlds.ctgc.datastruct.mih"


#include "analysis.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "array.mih"
#include "assoc_list.mih"
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
#include "robdd.mih"
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
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.ctgc.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "transform_hlds.ctgc.selector.mih"



struct transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_env_0_s {
  MR_Word transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_env_0__ModuleInfo_5;
  MR_Word transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_env_0__ProcInfo_6;
  MR_Word transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_env_0__PerhapsSubsumedData_7;
  MR_Word transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_env_0__Data_8;
  MR_bool transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_env_0__succeeded;
  jmp_buf transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_env_0__commit_0;
  MR_Word transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_env_0__X_9;
  MR_Box transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_env_0__conv0_X_9;
};


static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__datastruct__list__pti_list_1__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__datastruct__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__datastruct__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__datastruct__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static MR_Word MR_CALL 
transform_hlds__ctgc__datastruct__IntroducedFrom__func__datastructs_vars__202__1_1_f_0(
  MR_Word LambdaHeadVar__1_6);

static MR_bool MR_CALL 
transform_hlds__ctgc__datastruct__IntroducedFrom__pred__datastructs_project__198__1_2_p_0(
  MR_Word Vars_4,
  MR_Word LambdaHeadVar__1_8);

static MR_bool MR_CALL 
transform_hlds__ctgc__datastruct__datastructs_subsume_datastruct_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word ProcInfo_6,
  MR_Word Datastructs_7,
  MR_Word Data_8);

static MR_Box MR_CALL 
transform_hlds__ctgc__datastruct__datastructs_vars_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__ctgc__datastruct__datastructs_project_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__ctgc__datastruct__datastruct_lists_least_upper_bound_4_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__ctgc__datastruct__datastructs_that_are_subsumed_by_list_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_4(
  void * env_ptr_arg);


static /* final */ const MR_Box transform_hlds__ctgc__datastruct_scalar_common_1[1][2];

static /* final */ const MR_Box transform_hlds__ctgc__datastruct_scalar_common_2[1][7];

static /* final */ const MR_Box transform_hlds__ctgc__datastruct_scalar_common_3[2][5];

static /* final */ const MR_Box transform_hlds__ctgc__datastruct_scalar_common_4[1][3];




static /* final */ const MR_Box transform_hlds__ctgc__datastruct_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__datastruct_scalar_common_2[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__datastruct__list__pti_list_1__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__datastruct_scalar_common_3[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__ctgc__datastruct__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0)),
    ((MR_Box) (&transform_hlds__ctgc__datastruct__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__datastruct_scalar_common_4[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&transform_hlds__ctgc__datastruct_scalar_common_3[1])),
    ((MR_Box) (transform_hlds__ctgc__datastruct__datastructs_vars_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__datastruct__list__pti_list_1__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__datastruct__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__datastruct__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__ctgc__datastruct__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__datastruct__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static MR_Word MR_CALL 
transform_hlds__ctgc__datastruct__IntroducedFrom__func__datastructs_vars__202__1_1_f_0(
  MR_Word LambdaHeadVar__1_6)
{
  {
    MR_Word LambdaHeadVar__2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_6, (MR_Integer) 0))));

    return LambdaHeadVar__2_7;
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__datastruct__IntroducedFrom__pred__datastructs_project__198__1_2_p_0(
  MR_Word Vars_4,
  MR_Word LambdaHeadVar__1_8)
{
  {
    MR_bool succeeded;
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_8, (MR_Integer) 0))));

    succeeded = mercury__list__member_2_p_0((MR_Word) (&transform_hlds__ctgc__datastruct_scalar_common_1[0]), ((MR_Box) (Var_9)), Vars_4);
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__datastruct__datastructs_subsume_datastruct_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word ProcInfo_6,
  MR_Word Datastructs_7,
  MR_Word Data_8)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__ctgc__datastruct__datastruct_subsumed_by_list_4_p_0(ModuleInfo_5, ProcInfo_6, Data_8, Datastructs_7);
    return succeeded;
  }
}

static MR_Box MR_CALL 
transform_hlds__ctgc__datastruct__datastructs_vars_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_7;

    conv0_LambdaHeadVar__2_7 = transform_hlds__ctgc__datastruct__IntroducedFrom__func__datastructs_vars__202__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_7));
    return wrapper_arg_2;
  }
}

MR_Word MR_CALL 
transform_hlds__ctgc__datastruct__datastructs_vars_1_f_0(
  MR_Word Data_3)
{
  {
    MR_Word HeadVar__2_2;

    HeadVar__2_2 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0), (MR_Word) (&transform_hlds__ctgc__datastruct_scalar_common_1[0]), (MR_Word) (&transform_hlds__ctgc__datastruct_scalar_common_4[0]), Data_3);
    return HeadVar__2_2;
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__datastruct__datastructs_project_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__ctgc__datastruct__IntroducedFrom__pred__datastructs_project__198__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

MR_Word MR_CALL 
transform_hlds__ctgc__datastruct__datastructs_project_2_f_0(
  MR_Word Vars_4,
  MR_Word DataIn_5)
{
  {
    MR_bool succeeded;
    MR_Word HeadVar__3_3;
    MR_Word Var_7;

    {
      Var_7 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_7, 0) = ((MR_Box) (&transform_hlds__ctgc__datastruct_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_7, 1) = ((MR_Box) (transform_hlds__ctgc__datastruct__datastructs_project_2_f_0_1));
      MR_hl_field(MR_mktag(0), Var_7, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_7, 3) = ((MR_Box) (Vars_4));
    }
    HeadVar__3_3 = mercury__list__filter_2_f_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0), Var_7, DataIn_5);
    return HeadVar__3_3;
  }
}

void MR_CALL 
transform_hlds__ctgc__datastruct__datastruct_apply_widening_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word ProcInfo_6,
  MR_Word Data0_7,
  MR_Word * Data_8)
{
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Data0_7, (MR_Integer) 0))));
    MR_Word Sel0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Data0_7, (MR_Integer) 1))));
    MR_Word VarTypes_11;
    MR_Word Type_12;
    MR_Word Sel_13;

    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo_6, &VarTypes_11);
    hlds__vartypes__lookup_var_type_3_p_0(VarTypes_11, Var_9, &Type_12);
    transform_hlds__ctgc__selector__selector_apply_widening_4_p_0(ModuleInfo_5, Type_12, Sel0_10, &Sel_13);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Data_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Sel_13));
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__datastruct__datastruct_lists_least_upper_bound_4_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__ctgc__datastruct__datastructs_subsume_datastruct_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

MR_Word MR_CALL 
transform_hlds__ctgc__datastruct__datastruct_lists_least_upper_bound_4_f_0(
  MR_Word ModuleInfo_6,
  MR_Word ProcInfo_7,
  MR_Word Data1_8,
  MR_Word Data2_9)
{
  {
    MR_bool succeeded;
    MR_Word Data_10;
    MR_Word NotSubsumedData_12;
    MR_Word Var_13;
    MR_Word _SubsumedData_11;

    {
      Var_13 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_13, 0) = ((MR_Box) (&transform_hlds__ctgc__datastruct_scalar_common_2[0]));
      MR_hl_field(MR_mktag(0), Var_13, 1) = ((MR_Box) (transform_hlds__ctgc__datastruct__datastruct_lists_least_upper_bound_4_f_0_1));
      MR_hl_field(MR_mktag(0), Var_13, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_13, 3) = ((MR_Box) (ModuleInfo_6));
      MR_hl_field(MR_mktag(0), Var_13, 4) = ((MR_Box) (ProcInfo_7));
      MR_hl_field(MR_mktag(0), Var_13, 5) = ((MR_Box) (Data1_8));
    }
    mercury__list__filter_4_p_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0), Var_13, Data2_9, &_SubsumedData_11, &NotSubsumedData_12);
    Data_10 = mercury__list__append_2_f_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0), NotSubsumedData_12, Data1_8);
    return Data_10;
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__datastruct__datastructs_that_are_subsumed_by_list_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__ctgc__datastruct__datastructs_subsume_datastruct_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

void MR_CALL 
transform_hlds__ctgc__datastruct__datastructs_that_are_subsumed_by_list_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word ProcInfo_7,
  MR_Word PerhapsSubsumedData_8,
  MR_Word Datastructs_9,
  MR_Word * SubsumedData_10)
{
  {
    MR_bool succeeded;
    MR_Word Var_11;

    {
      Var_11 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_11, 0) = ((MR_Box) (&transform_hlds__ctgc__datastruct_scalar_common_2[0]));
      MR_hl_field(MR_mktag(0), Var_11, 1) = ((MR_Box) (transform_hlds__ctgc__datastruct__datastructs_that_are_subsumed_by_list_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_11, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_11, 3) = ((MR_Box) (ModuleInfo_6));
      MR_hl_field(MR_mktag(0), Var_11, 4) = ((MR_Box) (ProcInfo_7));
      MR_hl_field(MR_mktag(0), Var_11, 5) = ((MR_Box) (Datastructs_9));
    }
    mercury__list__filter_3_p_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0), Var_11, PerhapsSubsumedData_8, SubsumedData_10);
  }
}

static void MR_CALL 
transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_1(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_env_0_s * env_ptr = (struct transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_3(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_env_0_s * env_ptr = (struct transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_env_0__X_9 = ((MR_Word) ((env_ptr)->transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_env_0__conv0_X_9));
    transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_2(env_ptr);
  }
}

static void MR_CALL 
transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_2(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_env_0_s * env_ptr = (struct transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_env_0__succeeded = transform_hlds__ctgc__datastruct__datastruct_subsumed_by_list_4_p_0((env_ptr)->transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_env_0__ModuleInfo_5, (env_ptr)->transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_env_0__ProcInfo_6, (env_ptr)->transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_env_0__X_9, (env_ptr)->transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_env_0__Data_8);
    (env_ptr)->transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_env_0__succeeded = !((env_ptr)->transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_env_0__succeeded);
    if ((env_ptr)->transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_env_0__succeeded)
      transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_1(env_ptr);
  }
}

static void MR_CALL 
transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_4(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_env_0_s * env_ptr = (struct transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_env_0__commit_0) == 0)
      {
        mercury__list__member_2_p_1((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0), &(env_ptr)->transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_env_0__conv0_X_9, (env_ptr)->transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_env_0__PerhapsSubsumedData_7, transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_3, env_ptr);
        (env_ptr)->transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_env_0__succeeded = MR_TRUE;
  }
}

MR_bool MR_CALL 
transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word ProcInfo_6,
  MR_Word PerhapsSubsumedData_7,
  MR_Word Data_8)
{
  {
    struct transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_env_0_s env;

    (env).transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_env_0__ModuleInfo_5 = ModuleInfo_5;
    (env).transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_env_0__ProcInfo_6 = ProcInfo_6;
    (env).transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_env_0__PerhapsSubsumedData_7 = PerhapsSubsumedData_7;
    (env).transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_env_0__Data_8 = Data_8;
    transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_4(&env);
    (env).transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_env_0__succeeded = !((env).transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_env_0__succeeded);
    return (env).transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_env_0__succeeded;
  }
}

MR_bool MR_CALL 
transform_hlds__ctgc__datastruct__datastruct_subsumed_by_list_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word ProcInfo_6,
  MR_Word Data0_7,
  MR_Word HeadVar__4_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__4_4 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Data_8;
    MR_Word Rest_9;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Data_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      Rest_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      {
        MR_Word Var_14;

        succeeded = transform_hlds__ctgc__datastruct__datastruct_subsumed_by_return_selector_5_p_0(ModuleInfo_5, ProcInfo_6, Data0_7, Data_8, &Var_14);
      }
      if (!(succeeded))
      {
        MR_Word next_value_of_HeadVar__4_4 = Rest_9;

        // direct tailcall eliminated
        ;
        HeadVar__4_4 = next_value_of_HeadVar__4_4;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
transform_hlds__ctgc__datastruct__datastruct_subsumed_by_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word ProcInfo_6,
  MR_Word Data1_7,
  MR_Word Data2_8)
{
  {
    MR_bool succeeded;
    MR_Word Var_9;

    succeeded = transform_hlds__ctgc__datastruct__datastruct_subsumed_by_return_selector_5_p_0(ModuleInfo_5, ProcInfo_6, Data1_7, Data2_8, &Var_9);
    return succeeded;
  }
}

MR_bool MR_CALL 
transform_hlds__ctgc__datastruct__datastruct_subsumed_by_return_selector_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word ProcInfo_7,
  MR_Word Data1_8,
  MR_Word Data2_9,
  MR_Word * Extension_10)
{
  {
    MR_bool succeeded;
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Data1_8, (MR_Integer) 0))));
    MR_Word Sel1_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Data1_8, (MR_Integer) 1))));
    MR_Word Sel2_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Data2_9, (MR_Integer) 1))));
    MR_Word VarTypes_14;
    MR_Word Type_15;
    MR_Word Var_16;
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Data2_9, (MR_Integer) 0))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__ctgc__datastruct_scalar_common_1[0]), ((MR_Box) (Var_11)), ((MR_Box) (Var_17)));
    if (succeeded)
    {
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo_7, &VarTypes_14);
      hlds__vartypes__lookup_var_type_3_p_0(VarTypes_14, Var_11, &Type_15);
      Var_16 = (MR_Integer) 1;
      succeeded = transform_hlds__ctgc__selector__selector_subsumed_by_6_p_0(ModuleInfo_6, Var_16, Sel1_12, Sel2_13, Type_15, Extension_10);
    }
    return succeeded;
  }
}

MR_Word MR_CALL 
transform_hlds__ctgc__datastruct__normalize_datastruct_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word ProcInfo_6,
  MR_Word Data0_7)
{
  {
    MR_Word Data_8;
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Data0_7, (MR_Integer) 0))));
    MR_Word DSel0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Data0_7, (MR_Integer) 1))));
    MR_Word VarTypes_11;
    MR_Word Type_12;
    MR_Word DSel_13;

    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo_6, &VarTypes_11);
    hlds__vartypes__lookup_var_type_3_p_0(VarTypes_11, Var_9, &Type_12);
    transform_hlds__ctgc__selector__normalize_selector_with_type_information_4_p_0(ModuleInfo_5, Type_12, DSel0_10, &DSel_13);
    {
      Data_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Data_8, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), Data_8, 1) = ((MR_Box) (DSel_13));
    }
    return Data_8;
  }
}

MR_Word MR_CALL 
transform_hlds__ctgc__datastruct__datastruct_termshift_4_f_0(
  MR_Word ModuleInfo_6,
  MR_Word ProcInfo_7,
  MR_Word Sel_8,
  MR_Word Data0_9)
{
  {
    MR_Word Data_10;

    if ((Sel_8 == (MR_Word) ((MR_Unsigned) 0U)))
      Data_10 = Data0_9;
    else
    {
      MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Data0_9, (MR_Integer) 0))));
      MR_Word DSel_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Data0_9, (MR_Integer) 1))));
      MR_Word NewSel0_15;
      MR_Word VarTypes_16;
      MR_Word Type_17;
      MR_Word NewSel_18;

      transform_hlds__ctgc__selector__selector_termshift_3_p_0(DSel_14, Sel_8, &NewSel0_15);
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo_7, &VarTypes_16);
      hlds__vartypes__lookup_var_type_3_p_0(VarTypes_16, Var_13, &Type_17);
      transform_hlds__ctgc__selector__normalize_selector_with_type_information_4_p_0(ModuleInfo_6, Type_17, NewSel0_15, &NewSel_18);
      {
        Data_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Data_10, 0) = ((MR_Box) (Var_13));
        MR_hl_field(MR_mktag(0), Data_10, 1) = ((MR_Box) (NewSel_18));
      }
    }
    return Data_10;
  }
}

MR_bool MR_CALL 
transform_hlds__ctgc__datastruct__datastruct_refers_to_topcell_1_p_0(
  MR_Word Data_2)
{
  {
    MR_bool succeeded;
    MR_Word DSel_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Data_2, (MR_Integer) 1))));

    succeeded = (DSel_3 == (MR_Word) ((MR_Unsigned) 0U));
    return succeeded;
  }
}

MR_bool MR_CALL 
transform_hlds__ctgc__datastruct__datastruct_same_vars_2_p_0(
  MR_Word D1_3,
  MR_Word D2_4)
{
  {
    MR_bool succeeded;
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), D1_3, (MR_Integer) 0))));
    MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), D2_4, (MR_Integer) 0))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__ctgc__datastruct_scalar_common_1[0]), ((MR_Box) (Var_5)), ((MR_Box) (Var_8)));
    return succeeded;
  }
}

MR_bool MR_CALL 
transform_hlds__ctgc__datastruct__datastruct_equal_2_p_0(
  MR_Word D1_3,
  MR_Word D2_4)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__prog_data_pragma____Unify____datastruct_0_0(D1_3, D2_4);
    return succeeded;
  }
}

MR_Word MR_CALL 
transform_hlds__ctgc__datastruct__datastruct_init_with_pos_3_f_0(
  MR_Word V_5,
  MR_Word ConsId_6,
  MR_Integer Int_7)
{
  {
    MR_Word HeadVar__4_4;
    MR_Word Var_8;

    Var_8 = transform_hlds__ctgc__selector__selector_init_2_f_0(ConsId_6, Int_7);
    {
      HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__4_4, 0) = ((MR_Box) (V_5));
      MR_hl_field(MR_mktag(0), HeadVar__4_4, 1) = ((MR_Box) (Var_8));
    }
    return HeadVar__4_4;
  }
}

MR_Word MR_CALL 
transform_hlds__ctgc__datastruct__datastruct_init_with_selector_2_f_0(
  MR_Word V_4,
  MR_Word Sel_5)
{
  {
    MR_Word HeadVar__3_3;

    {
      HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 0) = ((MR_Box) (V_4));
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 1) = ((MR_Box) (Sel_5));
    }
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
transform_hlds__ctgc__datastruct__datastruct_init_1_f_0(
  MR_Word V_3)
{
  {
    MR_Word HeadVar__2_2;

    {
      HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 0) = ((MR_Box) (V_3));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    return HeadVar__2_2;
  }
}

void mercury__transform_hlds__ctgc__datastruct__init(void)
{
}

void mercury__transform_hlds__ctgc__datastruct__init_type_tables(void)
{
}

void mercury__transform_hlds__ctgc__datastruct__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__ctgc__datastruct__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.ctgc.datastruct.
