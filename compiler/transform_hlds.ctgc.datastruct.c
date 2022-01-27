/*
** Automatically generated from `ctgc.datastruct.m'
** by the Mercury compiler,
** version rotd-2015-09-18
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


/* :- module transform_hlds.ctgc.datastruct. */
/* :- implementation. */

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
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.ctgc.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "transform_hlds.ctgc.selector.mih"



#line 73 "ctgc.datastruct.m"
struct transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_env_0_s {
#line 73 "ctgc.datastruct.m"
  MR_Word transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_env_0__ModuleInfo_5;
#line 73 "ctgc.datastruct.m"
  MR_Word transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_env_0__ProcInfo_6;
#line 73 "ctgc.datastruct.m"
  MR_Word transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_env_0__PerhapsSubsumedData_7;
#line 73 "ctgc.datastruct.m"
  MR_Word transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_env_0__Data_8;
#line 162 "ctgc.datastruct.m"
  MR_bool transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_env_0__succeeded;
#line 162 "ctgc.datastruct.m"
  jmp_buf transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_env_0__commit_0;
#line 162 "ctgc.datastruct.m"
  MR_Word transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_env_0__X_9;
#line 163 "ctgc.datastruct.m"
  MR_Box transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_env_0__conv0_X_9;
#line 73 "ctgc.datastruct.m"
};


#line 160 "transform_hlds.ctgc.datastruct.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__datastruct__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_datastruct_0;

#line 163 "transform_hlds.ctgc.datastruct.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__datastruct__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 166 "transform_hlds.ctgc.datastruct.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__datastruct__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 169 "transform_hlds.ctgc.datastruct.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__datastruct__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 199 "ctgc.datastruct.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__datastruct__IntroducedFrom__func__datastructs_vars__199__1_1_f_0(
#line 199 "ctgc.datastruct.m"
  MR_Word transform_hlds__ctgc__datastruct__HeadVar__1_6);

#line 195 "ctgc.datastruct.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__datastruct__IntroducedFrom__pred__datastructs_project__195__1_2_p_0(
#line 195 "ctgc.datastruct.m"
  MR_Word transform_hlds__ctgc__datastruct__Vars_4,
#line 195 "ctgc.datastruct.m"
  MR_Word transform_hlds__ctgc__datastruct__HeadVar__2_8);

#line 174 "ctgc.datastruct.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__datastruct__datastructs_subsume_datastruct_4_p_0(
#line 174 "ctgc.datastruct.m"
  MR_Word transform_hlds__ctgc__datastruct__ModuleInfo_5,
#line 174 "ctgc.datastruct.m"
  MR_Word transform_hlds__ctgc__datastruct__ProcInfo_6,
#line 174 "ctgc.datastruct.m"
  MR_Word transform_hlds__ctgc__datastruct__Datastructs_7,
#line 174 "ctgc.datastruct.m"
  MR_Word transform_hlds__ctgc__datastruct__Data_8);

#line 199 "ctgc.datastruct.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__datastruct__datastructs_vars_1_f_0_1(
#line 199 "ctgc.datastruct.m"
  MR_Box transform_hlds__ctgc__datastruct__closure_arg,
#line 199 "ctgc.datastruct.m"
  MR_Box transform_hlds__ctgc__datastruct__wrapper_arg_1);

#line 195 "ctgc.datastruct.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__datastruct__datastructs_project_2_f_0_1(
#line 195 "ctgc.datastruct.m"
  MR_Box transform_hlds__ctgc__datastruct__closure_arg,
#line 195 "ctgc.datastruct.m"
  MR_Box transform_hlds__ctgc__datastruct__wrapper_arg_1);

#line 190 "ctgc.datastruct.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__datastruct__datastruct_lists_least_upper_bound_4_f_0_1(
#line 190 "ctgc.datastruct.m"
  MR_Box transform_hlds__ctgc__datastruct__closure_arg,
#line 190 "ctgc.datastruct.m"
  MR_Box transform_hlds__ctgc__datastruct__wrapper_arg_1);

#line 171 "ctgc.datastruct.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__datastruct__datastructs_that_are_subsumed_by_list_5_p_0_1(
#line 171 "ctgc.datastruct.m"
  MR_Box transform_hlds__ctgc__datastruct__closure_arg,
#line 171 "ctgc.datastruct.m"
  MR_Box transform_hlds__ctgc__datastruct__wrapper_arg_1);

#line 162 "ctgc.datastruct.m"
static void MR_CALL 
transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_1(
#line 162 "ctgc.datastruct.m"
  void * transform_hlds__ctgc__datastruct__env_ptr_arg);

#line 163 "ctgc.datastruct.m"
static void MR_CALL 
transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_3(
#line 163 "ctgc.datastruct.m"
  void * transform_hlds__ctgc__datastruct__env_ptr_arg);

#line 162 "ctgc.datastruct.m"
static void MR_CALL 
transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_2(
#line 162 "ctgc.datastruct.m"
  void * transform_hlds__ctgc__datastruct__env_ptr_arg);

#line 162 "ctgc.datastruct.m"
static void MR_CALL 
transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_4(
#line 162 "ctgc.datastruct.m"
  void * transform_hlds__ctgc__datastruct__env_ptr_arg);


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
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__datastruct__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_datastruct_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__datastruct_scalar_common_3[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__ctgc__datastruct__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0)),
    ((MR_Box) (&transform_hlds__ctgc__datastruct__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__datastruct_scalar_common_4[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&transform_hlds__ctgc__datastruct_scalar_common_3[1])),
    ((MR_Box) (transform_hlds__ctgc__datastruct__datastructs_vars_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 324 "transform_hlds.ctgc.datastruct.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__datastruct__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_datastruct_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0
  }
};

#line 332 "transform_hlds.ctgc.datastruct.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__datastruct__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 340 "transform_hlds.ctgc.datastruct.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__datastruct__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__ctgc__datastruct__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 348 "transform_hlds.ctgc.datastruct.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__datastruct__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 199 "ctgc.datastruct.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__datastruct__IntroducedFrom__func__datastructs_vars__199__1_1_f_0(
#line 199 "ctgc.datastruct.m"
  MR_Word transform_hlds__ctgc__datastruct__HeadVar__1_6)
#line 199 "ctgc.datastruct.m"
{
#line 199 "ctgc.datastruct.m"
  {
#line 199 "ctgc.datastruct.m"
    MR_bool transform_hlds__ctgc__datastruct__succeeded;
#line 199 "ctgc.datastruct.m"
    MR_Word transform_hlds__ctgc__datastruct__HeadVar__2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__datastruct__HeadVar__1_6, (MR_Integer) 0)));
#line 199 "ctgc.datastruct.m"
    MR_Word transform_hlds__ctgc__datastruct__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__datastruct__HeadVar__1_6, (MR_Integer) 1)));

#line 199 "ctgc.datastruct.m"
    return transform_hlds__ctgc__datastruct__HeadVar__2_7;
#line 199 "ctgc.datastruct.m"
  }
#line 199 "ctgc.datastruct.m"
}

#line 195 "ctgc.datastruct.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__datastruct__IntroducedFrom__pred__datastructs_project__195__1_2_p_0(
#line 195 "ctgc.datastruct.m"
  MR_Word transform_hlds__ctgc__datastruct__Vars_4,
#line 195 "ctgc.datastruct.m"
  MR_Word transform_hlds__ctgc__datastruct__HeadVar__2_8)
#line 195 "ctgc.datastruct.m"
{
#line 195 "ctgc.datastruct.m"
  {
#line 195 "ctgc.datastruct.m"
    MR_bool transform_hlds__ctgc__datastruct__succeeded;
#line 195 "ctgc.datastruct.m"
    MR_Word transform_hlds__ctgc__datastruct__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__datastruct__HeadVar__2_8, (MR_Integer) 0)));
#line 196 "ctgc.datastruct.m"
    MR_Word transform_hlds__ctgc__datastruct__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__datastruct__HeadVar__2_8, (MR_Integer) 1)));

#line 196 "ctgc.datastruct.m"
    {
#line 196 "ctgc.datastruct.m"
      return transform_hlds__ctgc__datastruct__succeeded = mercury__list__member_2_p_0((MR_Word) &transform_hlds__ctgc__datastruct_scalar_common_1[0], ((MR_Box) (transform_hlds__ctgc__datastruct__V_9_9)), transform_hlds__ctgc__datastruct__Vars_4);
    }
#line 195 "ctgc.datastruct.m"
    return transform_hlds__ctgc__datastruct__succeeded;
#line 195 "ctgc.datastruct.m"
  }
#line 195 "ctgc.datastruct.m"
}

#line 174 "ctgc.datastruct.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__datastruct__datastructs_subsume_datastruct_4_p_0(
#line 174 "ctgc.datastruct.m"
  MR_Word transform_hlds__ctgc__datastruct__ModuleInfo_5,
#line 174 "ctgc.datastruct.m"
  MR_Word transform_hlds__ctgc__datastruct__ProcInfo_6,
#line 174 "ctgc.datastruct.m"
  MR_Word transform_hlds__ctgc__datastruct__Datastructs_7,
#line 174 "ctgc.datastruct.m"
  MR_Word transform_hlds__ctgc__datastruct__Data_8)
#line 174 "ctgc.datastruct.m"
{
#line 178 "ctgc.datastruct.m"
  {
#line 178 "ctgc.datastruct.m"
    MR_bool transform_hlds__ctgc__datastruct__succeeded;

#line 178 "ctgc.datastruct.m"
    {
#line 178 "ctgc.datastruct.m"
      return transform_hlds__ctgc__datastruct__succeeded = transform_hlds__ctgc__datastruct__datastruct_subsumed_by_list_4_p_0(transform_hlds__ctgc__datastruct__ModuleInfo_5, transform_hlds__ctgc__datastruct__ProcInfo_6, transform_hlds__ctgc__datastruct__Data_8, transform_hlds__ctgc__datastruct__Datastructs_7);
    }
#line 178 "ctgc.datastruct.m"
    return transform_hlds__ctgc__datastruct__succeeded;
#line 178 "ctgc.datastruct.m"
  }
#line 174 "ctgc.datastruct.m"
}

#line 199 "ctgc.datastruct.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__datastruct__datastructs_vars_1_f_0_1(
#line 199 "ctgc.datastruct.m"
  MR_Box transform_hlds__ctgc__datastruct__closure_arg,
#line 199 "ctgc.datastruct.m"
  MR_Box transform_hlds__ctgc__datastruct__wrapper_arg_1)
#line 199 "ctgc.datastruct.m"
{
#line 199 "ctgc.datastruct.m"
  {
#line 199 "ctgc.datastruct.m"
    MR_Box transform_hlds__ctgc__datastruct__wrapper_arg_2;
#line 199 "ctgc.datastruct.m"
    MR_Box transform_hlds__ctgc__datastruct__closure = transform_hlds__ctgc__datastruct__closure_arg;
#line 199 "ctgc.datastruct.m"
    MR_Word transform_hlds__ctgc__datastruct__conv0_HeadVar__2_7;

#line 199 "ctgc.datastruct.m"
    {
#line 199 "ctgc.datastruct.m"
      transform_hlds__ctgc__datastruct__conv0_HeadVar__2_7 = transform_hlds__ctgc__datastruct__IntroducedFrom__func__datastructs_vars__199__1_1_f_0(((MR_Word) transform_hlds__ctgc__datastruct__wrapper_arg_1));
    }
#line 199 "ctgc.datastruct.m"
    transform_hlds__ctgc__datastruct__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__datastruct__conv0_HeadVar__2_7));
#line 199 "ctgc.datastruct.m"
    return transform_hlds__ctgc__datastruct__wrapper_arg_2;
#line 199 "ctgc.datastruct.m"
  }
#line 199 "ctgc.datastruct.m"
}

#line 88 "ctgc.datastruct.m"
MR_Word MR_CALL 
transform_hlds__ctgc__datastruct__datastructs_vars_1_f_0(
#line 88 "ctgc.datastruct.m"
  MR_Word transform_hlds__ctgc__datastruct__Data_3)
#line 88 "ctgc.datastruct.m"
{
#line 199 "ctgc.datastruct.m"
  {
#line 199 "ctgc.datastruct.m"
    MR_bool transform_hlds__ctgc__datastruct__succeeded;
#line 199 "ctgc.datastruct.m"
    MR_Word transform_hlds__ctgc__datastruct__HeadVar__2_2;

#line 199 "ctgc.datastruct.m"
    {
#line 199 "ctgc.datastruct.m"
      transform_hlds__ctgc__datastruct__HeadVar__2_2 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0, (MR_Word) &transform_hlds__ctgc__datastruct_scalar_common_1[0], (MR_Word) &transform_hlds__ctgc__datastruct_scalar_common_4[0], transform_hlds__ctgc__datastruct__Data_3);
    }
#line 199 "ctgc.datastruct.m"
    return transform_hlds__ctgc__datastruct__HeadVar__2_2;
#line 199 "ctgc.datastruct.m"
  }
#line 88 "ctgc.datastruct.m"
}

#line 195 "ctgc.datastruct.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__datastruct__datastructs_project_2_f_0_1(
#line 195 "ctgc.datastruct.m"
  MR_Box transform_hlds__ctgc__datastruct__closure_arg,
#line 195 "ctgc.datastruct.m"
  MR_Box transform_hlds__ctgc__datastruct__wrapper_arg_1)
#line 195 "ctgc.datastruct.m"
{
#line 195 "ctgc.datastruct.m"
  {
#line 195 "ctgc.datastruct.m"
    MR_bool transform_hlds__ctgc__datastruct__succeeded;
#line 195 "ctgc.datastruct.m"
    MR_Box transform_hlds__ctgc__datastruct__closure = transform_hlds__ctgc__datastruct__closure_arg;

#line 195 "ctgc.datastruct.m"
    {
#line 195 "ctgc.datastruct.m"
      return transform_hlds__ctgc__datastruct__succeeded = transform_hlds__ctgc__datastruct__IntroducedFrom__pred__datastructs_project__195__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__datastruct__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__ctgc__datastruct__wrapper_arg_1));
    }
#line 195 "ctgc.datastruct.m"
    return transform_hlds__ctgc__datastruct__succeeded;
#line 195 "ctgc.datastruct.m"
  }
#line 195 "ctgc.datastruct.m"
}

#line 85 "ctgc.datastruct.m"
MR_Word MR_CALL 
transform_hlds__ctgc__datastruct__datastructs_project_2_f_0(
#line 85 "ctgc.datastruct.m"
  MR_Word transform_hlds__ctgc__datastruct__Vars_4,
#line 85 "ctgc.datastruct.m"
  MR_Word transform_hlds__ctgc__datastruct__DataIn_5)
#line 85 "ctgc.datastruct.m"
{
#line 194 "ctgc.datastruct.m"
  {
#line 194 "ctgc.datastruct.m"
    MR_bool transform_hlds__ctgc__datastruct__succeeded;
#line 194 "ctgc.datastruct.m"
    MR_Word transform_hlds__ctgc__datastruct__HeadVar__3_3;
#line 194 "ctgc.datastruct.m"
    MR_Word transform_hlds__ctgc__datastruct__V_7_7;

#line 195 "ctgc.datastruct.m"
    {
#line 195 "ctgc.datastruct.m"
      transform_hlds__ctgc__datastruct__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 195 "ctgc.datastruct.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__datastruct__V_7_7, 0) = ((MR_Box) (&transform_hlds__ctgc__datastruct_scalar_common_3[0]));
#line 195 "ctgc.datastruct.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__datastruct__V_7_7, 1) = ((MR_Box) (transform_hlds__ctgc__datastruct__datastructs_project_2_f_0_1));
#line 195 "ctgc.datastruct.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__datastruct__V_7_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 195 "ctgc.datastruct.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__datastruct__V_7_7, 3) = ((MR_Box) (transform_hlds__ctgc__datastruct__Vars_4));
#line 195 "ctgc.datastruct.m"
    }
#line 195 "ctgc.datastruct.m"
    {
#line 195 "ctgc.datastruct.m"
      transform_hlds__ctgc__datastruct__HeadVar__3_3 = mercury__list__filter_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0, transform_hlds__ctgc__datastruct__V_7_7, transform_hlds__ctgc__datastruct__DataIn_5);
    }
#line 194 "ctgc.datastruct.m"
    return transform_hlds__ctgc__datastruct__HeadVar__3_3;
#line 194 "ctgc.datastruct.m"
  }
#line 85 "ctgc.datastruct.m"
}

#line 82 "ctgc.datastruct.m"
void MR_CALL 
transform_hlds__ctgc__datastruct__datastruct_apply_widening_4_p_0(
#line 82 "ctgc.datastruct.m"
  MR_Word transform_hlds__ctgc__datastruct__ModuleInfo_5,
#line 82 "ctgc.datastruct.m"
  MR_Word transform_hlds__ctgc__datastruct__ProcInfo_6,
#line 82 "ctgc.datastruct.m"
  MR_Word transform_hlds__ctgc__datastruct__Data0_7,
#line 82 "ctgc.datastruct.m"
  MR_Word * transform_hlds__ctgc__datastruct__Data_8)
#line 82 "ctgc.datastruct.m"
{
#line 180 "ctgc.datastruct.m"
  {
#line 180 "ctgc.datastruct.m"
    MR_bool transform_hlds__ctgc__datastruct__succeeded;
#line 180 "ctgc.datastruct.m"
    MR_Word transform_hlds__ctgc__datastruct__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__datastruct__Data0_7, (MR_Integer) 0)));
#line 180 "ctgc.datastruct.m"
    MR_Word transform_hlds__ctgc__datastruct__Sel0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__datastruct__Data0_7, (MR_Integer) 1)));
#line 180 "ctgc.datastruct.m"
    MR_Word transform_hlds__ctgc__datastruct__VarTypes_11;
#line 180 "ctgc.datastruct.m"
    MR_Word transform_hlds__ctgc__datastruct__Type_12;
#line 180 "ctgc.datastruct.m"
    MR_Word transform_hlds__ctgc__datastruct__Sel_13;

#line 182 "ctgc.datastruct.m"
    {
#line 182 "ctgc.datastruct.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__ctgc__datastruct__ProcInfo_6, &transform_hlds__ctgc__datastruct__VarTypes_11);
    }
#line 183 "ctgc.datastruct.m"
    {
#line 183 "ctgc.datastruct.m"
      hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__ctgc__datastruct__VarTypes_11, transform_hlds__ctgc__datastruct__Var_9, &transform_hlds__ctgc__datastruct__Type_12);
    }
#line 184 "ctgc.datastruct.m"
    {
#line 184 "ctgc.datastruct.m"
      transform_hlds__ctgc__selector__selector_apply_widening_4_p_0(transform_hlds__ctgc__datastruct__ModuleInfo_5, transform_hlds__ctgc__datastruct__Type_12, transform_hlds__ctgc__datastruct__Sel0_10, &transform_hlds__ctgc__datastruct__Sel_13);
    }
#line 185 "ctgc.datastruct.m"
    {
#line 185 "ctgc.datastruct.m"
      MR_Word base;
#line 185 "ctgc.datastruct.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 185 "ctgc.datastruct.m"
      *transform_hlds__ctgc__datastruct__Data_8 = base;
#line 185 "ctgc.datastruct.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__datastruct__Var_9));
#line 185 "ctgc.datastruct.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__datastruct__Sel_13));
#line 185 "ctgc.datastruct.m"
    }
#line 180 "ctgc.datastruct.m"
  }
#line 82 "ctgc.datastruct.m"
}

#line 190 "ctgc.datastruct.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__datastruct__datastruct_lists_least_upper_bound_4_f_0_1(
#line 190 "ctgc.datastruct.m"
  MR_Box transform_hlds__ctgc__datastruct__closure_arg,
#line 190 "ctgc.datastruct.m"
  MR_Box transform_hlds__ctgc__datastruct__wrapper_arg_1)
#line 190 "ctgc.datastruct.m"
{
#line 190 "ctgc.datastruct.m"
  {
#line 190 "ctgc.datastruct.m"
    MR_bool transform_hlds__ctgc__datastruct__succeeded;
#line 190 "ctgc.datastruct.m"
    MR_Box transform_hlds__ctgc__datastruct__closure = transform_hlds__ctgc__datastruct__closure_arg;

#line 190 "ctgc.datastruct.m"
    {
#line 190 "ctgc.datastruct.m"
      return transform_hlds__ctgc__datastruct__succeeded = transform_hlds__ctgc__datastruct__datastructs_subsume_datastruct_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__datastruct__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__datastruct__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__datastruct__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__ctgc__datastruct__wrapper_arg_1));
    }
#line 190 "ctgc.datastruct.m"
    return transform_hlds__ctgc__datastruct__succeeded;
#line 190 "ctgc.datastruct.m"
  }
#line 190 "ctgc.datastruct.m"
}

#line 79 "ctgc.datastruct.m"
MR_Word MR_CALL 
transform_hlds__ctgc__datastruct__datastruct_lists_least_upper_bound_4_f_0(
#line 79 "ctgc.datastruct.m"
  MR_Word transform_hlds__ctgc__datastruct__ModuleInfo_6,
#line 79 "ctgc.datastruct.m"
  MR_Word transform_hlds__ctgc__datastruct__ProcInfo_7,
#line 79 "ctgc.datastruct.m"
  MR_Word transform_hlds__ctgc__datastruct__Data1_8,
#line 79 "ctgc.datastruct.m"
  MR_Word transform_hlds__ctgc__datastruct__Data2_9)
#line 79 "ctgc.datastruct.m"
{
#line 188 "ctgc.datastruct.m"
  {
#line 188 "ctgc.datastruct.m"
    MR_bool transform_hlds__ctgc__datastruct__succeeded;
#line 188 "ctgc.datastruct.m"
    MR_Word transform_hlds__ctgc__datastruct__Data_10;
#line 188 "ctgc.datastruct.m"
    MR_Word transform_hlds__ctgc__datastruct__TypeCtorInfo_15_15;
#line 188 "ctgc.datastruct.m"
    MR_Word transform_hlds__ctgc__datastruct__NotSubsumedData_12;
#line 188 "ctgc.datastruct.m"
    MR_Word transform_hlds__ctgc__datastruct__V_13_13;
#line 189 "ctgc.datastruct.m"
    MR_Word transform_hlds__ctgc__datastruct___SubsumedData_11;

#line 190 "ctgc.datastruct.m"
    {
#line 190 "ctgc.datastruct.m"
      transform_hlds__ctgc__datastruct__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 190 "ctgc.datastruct.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__datastruct__V_13_13, 0) = ((MR_Box) (&transform_hlds__ctgc__datastruct_scalar_common_2[0]));
#line 190 "ctgc.datastruct.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__datastruct__V_13_13, 1) = ((MR_Box) (transform_hlds__ctgc__datastruct__datastruct_lists_least_upper_bound_4_f_0_1));
#line 190 "ctgc.datastruct.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__datastruct__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 190 "ctgc.datastruct.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__datastruct__V_13_13, 3) = ((MR_Box) (transform_hlds__ctgc__datastruct__ModuleInfo_6));
#line 190 "ctgc.datastruct.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__datastruct__V_13_13, 4) = ((MR_Box) (transform_hlds__ctgc__datastruct__ProcInfo_7));
#line 190 "ctgc.datastruct.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__datastruct__V_13_13, 5) = ((MR_Box) (transform_hlds__ctgc__datastruct__Data1_8));
#line 190 "ctgc.datastruct.m"
    }
#line 705 "transform_hlds.ctgc.datastruct.c"
    transform_hlds__ctgc__datastruct__TypeCtorInfo_15_15 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0;
#line 189 "ctgc.datastruct.m"
    {
#line 189 "ctgc.datastruct.m"
      mercury__list__filter_4_p_0(transform_hlds__ctgc__datastruct__TypeCtorInfo_15_15, transform_hlds__ctgc__datastruct__V_13_13, transform_hlds__ctgc__datastruct__Data2_9, &transform_hlds__ctgc__datastruct___SubsumedData_11, &transform_hlds__ctgc__datastruct__NotSubsumedData_12);
    }
#line 192 "ctgc.datastruct.m"
    {
#line 192 "ctgc.datastruct.m"
      transform_hlds__ctgc__datastruct__Data_10 = mercury__list__append_2_f_0(transform_hlds__ctgc__datastruct__TypeCtorInfo_15_15, transform_hlds__ctgc__datastruct__NotSubsumedData_12, transform_hlds__ctgc__datastruct__Data1_8);
    }
#line 188 "ctgc.datastruct.m"
    return transform_hlds__ctgc__datastruct__Data_10;
#line 188 "ctgc.datastruct.m"
  }
#line 79 "ctgc.datastruct.m"
}

#line 171 "ctgc.datastruct.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__datastruct__datastructs_that_are_subsumed_by_list_5_p_0_1(
#line 171 "ctgc.datastruct.m"
  MR_Box transform_hlds__ctgc__datastruct__closure_arg,
#line 171 "ctgc.datastruct.m"
  MR_Box transform_hlds__ctgc__datastruct__wrapper_arg_1)
#line 171 "ctgc.datastruct.m"
{
#line 171 "ctgc.datastruct.m"
  {
#line 171 "ctgc.datastruct.m"
    MR_bool transform_hlds__ctgc__datastruct__succeeded;
#line 171 "ctgc.datastruct.m"
    MR_Box transform_hlds__ctgc__datastruct__closure = transform_hlds__ctgc__datastruct__closure_arg;

#line 171 "ctgc.datastruct.m"
    {
#line 171 "ctgc.datastruct.m"
      return transform_hlds__ctgc__datastruct__succeeded = transform_hlds__ctgc__datastruct__datastructs_subsume_datastruct_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__datastruct__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__datastruct__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__datastruct__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__ctgc__datastruct__wrapper_arg_1));
    }
#line 171 "ctgc.datastruct.m"
    return transform_hlds__ctgc__datastruct__succeeded;
#line 171 "ctgc.datastruct.m"
  }
#line 171 "ctgc.datastruct.m"
}

#line 76 "ctgc.datastruct.m"
void MR_CALL 
transform_hlds__ctgc__datastruct__datastructs_that_are_subsumed_by_list_5_p_0(
#line 76 "ctgc.datastruct.m"
  MR_Word transform_hlds__ctgc__datastruct__ModuleInfo_6,
#line 76 "ctgc.datastruct.m"
  MR_Word transform_hlds__ctgc__datastruct__ProcInfo_7,
#line 76 "ctgc.datastruct.m"
  MR_Word transform_hlds__ctgc__datastruct__PerhapsSubsumedData_8,
#line 76 "ctgc.datastruct.m"
  MR_Word transform_hlds__ctgc__datastruct__Datastructs_9,
#line 76 "ctgc.datastruct.m"
  MR_Word * transform_hlds__ctgc__datastruct__SubsumedData_10)
#line 76 "ctgc.datastruct.m"
{
#line 169 "ctgc.datastruct.m"
  {
#line 169 "ctgc.datastruct.m"
    MR_bool transform_hlds__ctgc__datastruct__succeeded;
#line 169 "ctgc.datastruct.m"
    MR_Word transform_hlds__ctgc__datastruct__V_11_11;

#line 171 "ctgc.datastruct.m"
    {
#line 171 "ctgc.datastruct.m"
      transform_hlds__ctgc__datastruct__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 171 "ctgc.datastruct.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__datastruct__V_11_11, 0) = ((MR_Box) (&transform_hlds__ctgc__datastruct_scalar_common_2[0]));
#line 171 "ctgc.datastruct.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__datastruct__V_11_11, 1) = ((MR_Box) (transform_hlds__ctgc__datastruct__datastructs_that_are_subsumed_by_list_5_p_0_1));
#line 171 "ctgc.datastruct.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__datastruct__V_11_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 171 "ctgc.datastruct.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__datastruct__V_11_11, 3) = ((MR_Box) (transform_hlds__ctgc__datastruct__ModuleInfo_6));
#line 171 "ctgc.datastruct.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__datastruct__V_11_11, 4) = ((MR_Box) (transform_hlds__ctgc__datastruct__ProcInfo_7));
#line 171 "ctgc.datastruct.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__datastruct__V_11_11, 5) = ((MR_Box) (transform_hlds__ctgc__datastruct__Datastructs_9));
#line 171 "ctgc.datastruct.m"
    }
#line 170 "ctgc.datastruct.m"
    {
#line 170 "ctgc.datastruct.m"
      mercury__list__filter_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0, transform_hlds__ctgc__datastruct__V_11_11, transform_hlds__ctgc__datastruct__PerhapsSubsumedData_8, transform_hlds__ctgc__datastruct__SubsumedData_10);
#line 170 "ctgc.datastruct.m"
      return;
    }
#line 169 "ctgc.datastruct.m"
  }
#line 76 "ctgc.datastruct.m"
}

#line 162 "ctgc.datastruct.m"
static void MR_CALL 
transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_1(
#line 162 "ctgc.datastruct.m"
  void * transform_hlds__ctgc__datastruct__env_ptr_arg)
#line 162 "ctgc.datastruct.m"
{
#line 162 "ctgc.datastruct.m"
  {
#line 162 "ctgc.datastruct.m"
    struct transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_env_0_s * transform_hlds__ctgc__datastruct__env_ptr = (struct transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_env_0_s *) transform_hlds__ctgc__datastruct__env_ptr_arg;

#line 162 "ctgc.datastruct.m"
    MR_builtin_longjmp((transform_hlds__ctgc__datastruct__env_ptr)->transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_env_0__commit_0, 1);
#line 162 "ctgc.datastruct.m"
  }
#line 162 "ctgc.datastruct.m"
}

#line 163 "ctgc.datastruct.m"
static void MR_CALL 
transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_3(
#line 163 "ctgc.datastruct.m"
  void * transform_hlds__ctgc__datastruct__env_ptr_arg)
#line 163 "ctgc.datastruct.m"
{
#line 163 "ctgc.datastruct.m"
  {
#line 163 "ctgc.datastruct.m"
    struct transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_env_0_s * transform_hlds__ctgc__datastruct__env_ptr = (struct transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_env_0_s *) transform_hlds__ctgc__datastruct__env_ptr_arg;

#line 163 "ctgc.datastruct.m"
    (transform_hlds__ctgc__datastruct__env_ptr)->transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_env_0__X_9 = ((MR_Word) (transform_hlds__ctgc__datastruct__env_ptr)->transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_env_0__conv0_X_9);
#line 163 "ctgc.datastruct.m"
    {
#line 163 "ctgc.datastruct.m"
      transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_2(transform_hlds__ctgc__datastruct__env_ptr);
#line 163 "ctgc.datastruct.m"
      return;
    }
#line 163 "ctgc.datastruct.m"
  }
#line 163 "ctgc.datastruct.m"
}

#line 162 "ctgc.datastruct.m"
static void MR_CALL 
transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_2(
#line 162 "ctgc.datastruct.m"
  void * transform_hlds__ctgc__datastruct__env_ptr_arg)
#line 162 "ctgc.datastruct.m"
{
#line 162 "ctgc.datastruct.m"
  {
#line 162 "ctgc.datastruct.m"
    struct transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_env_0_s * transform_hlds__ctgc__datastruct__env_ptr = (struct transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_env_0_s *) transform_hlds__ctgc__datastruct__env_ptr_arg;

#line 178 "ctgc.datastruct.m"
    {
#line 178 "ctgc.datastruct.m"
      (transform_hlds__ctgc__datastruct__env_ptr)->transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_env_0__succeeded = transform_hlds__ctgc__datastruct__datastruct_subsumed_by_list_4_p_0((transform_hlds__ctgc__datastruct__env_ptr)->transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_env_0__ModuleInfo_5, (transform_hlds__ctgc__datastruct__env_ptr)->transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_env_0__ProcInfo_6, (transform_hlds__ctgc__datastruct__env_ptr)->transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_env_0__X_9, (transform_hlds__ctgc__datastruct__env_ptr)->transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_env_0__Data_8);
    }
#line 164 "ctgc.datastruct.m"
    (transform_hlds__ctgc__datastruct__env_ptr)->transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_env_0__succeeded = !((transform_hlds__ctgc__datastruct__env_ptr)->transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_env_0__succeeded);
#line 164 "ctgc.datastruct.m"
    if ((transform_hlds__ctgc__datastruct__env_ptr)->transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_env_0__succeeded)
#line 164 "ctgc.datastruct.m"
      {
#line 164 "ctgc.datastruct.m"
        transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_1(transform_hlds__ctgc__datastruct__env_ptr);
#line 164 "ctgc.datastruct.m"
        return;
      }
#line 162 "ctgc.datastruct.m"
  }
#line 162 "ctgc.datastruct.m"
}

#line 162 "ctgc.datastruct.m"
static void MR_CALL 
transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_4(
#line 162 "ctgc.datastruct.m"
  void * transform_hlds__ctgc__datastruct__env_ptr_arg)
#line 162 "ctgc.datastruct.m"
{
#line 162 "ctgc.datastruct.m"
  {
#line 162 "ctgc.datastruct.m"
    struct transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_env_0_s * transform_hlds__ctgc__datastruct__env_ptr = (struct transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_env_0_s *) transform_hlds__ctgc__datastruct__env_ptr_arg;

#line 162 "ctgc.datastruct.m"
    if (MR_builtin_setjmp((transform_hlds__ctgc__datastruct__env_ptr)->transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_env_0__commit_0) == 0)
#line 162 "ctgc.datastruct.m"
      {
#line 162 "ctgc.datastruct.m"
        {
#line 163 "ctgc.datastruct.m"
          {
#line 163 "ctgc.datastruct.m"
            mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0, &(transform_hlds__ctgc__datastruct__env_ptr)->transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_env_0__conv0_X_9, (transform_hlds__ctgc__datastruct__env_ptr)->transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_env_0__PerhapsSubsumedData_7, transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_3, transform_hlds__ctgc__datastruct__env_ptr);
          }
#line 162 "ctgc.datastruct.m"
        }
#line 162 "ctgc.datastruct.m"
        (transform_hlds__ctgc__datastruct__env_ptr)->transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_env_0__succeeded = MR_FALSE;
#line 162 "ctgc.datastruct.m"
      }
#line 162 "ctgc.datastruct.m"
    else
#line 162 "ctgc.datastruct.m"
      (transform_hlds__ctgc__datastruct__env_ptr)->transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_env_0__succeeded = MR_TRUE;
#line 162 "ctgc.datastruct.m"
  }
#line 162 "ctgc.datastruct.m"
}

#line 73 "ctgc.datastruct.m"
MR_bool MR_CALL 
transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0(
#line 73 "ctgc.datastruct.m"
  MR_Word transform_hlds__ctgc__datastruct__ModuleInfo_5,
#line 73 "ctgc.datastruct.m"
  MR_Word transform_hlds__ctgc__datastruct__ProcInfo_6,
#line 73 "ctgc.datastruct.m"
  MR_Word transform_hlds__ctgc__datastruct__PerhapsSubsumedData_7,
#line 73 "ctgc.datastruct.m"
  MR_Word transform_hlds__ctgc__datastruct__Data_8)
#line 73 "ctgc.datastruct.m"
{
#line 73 "ctgc.datastruct.m"
  {
#line 73 "ctgc.datastruct.m"
    struct transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_env_0_s transform_hlds__ctgc__datastruct__env;

#line 73 "ctgc.datastruct.m"
    (transform_hlds__ctgc__datastruct__env).transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_env_0__ModuleInfo_5 = transform_hlds__ctgc__datastruct__ModuleInfo_5;
#line 73 "ctgc.datastruct.m"
    (transform_hlds__ctgc__datastruct__env).transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_env_0__ProcInfo_6 = transform_hlds__ctgc__datastruct__ProcInfo_6;
#line 73 "ctgc.datastruct.m"
    (transform_hlds__ctgc__datastruct__env).transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_env_0__PerhapsSubsumedData_7 = transform_hlds__ctgc__datastruct__PerhapsSubsumedData_7;
#line 73 "ctgc.datastruct.m"
    (transform_hlds__ctgc__datastruct__env).transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_env_0__Data_8 = transform_hlds__ctgc__datastruct__Data_8;
#line 162 "ctgc.datastruct.m"
    {
#line 162 "ctgc.datastruct.m"
      transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_4(&transform_hlds__ctgc__datastruct__env);
    }
#line 162 "ctgc.datastruct.m"
    (transform_hlds__ctgc__datastruct__env).transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_env_0__succeeded = !((transform_hlds__ctgc__datastruct__env).transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_env_0__succeeded);
#line 162 "ctgc.datastruct.m"
    return (transform_hlds__ctgc__datastruct__env).transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0_env_0__succeeded;
#line 73 "ctgc.datastruct.m"
  }
#line 73 "ctgc.datastruct.m"
}

#line 70 "ctgc.datastruct.m"
MR_bool MR_CALL 
transform_hlds__ctgc__datastruct__datastruct_subsumed_by_list_4_p_0(
#line 70 "ctgc.datastruct.m"
  MR_Word transform_hlds__ctgc__datastruct__ModuleInfo_5,
#line 70 "ctgc.datastruct.m"
  MR_Word transform_hlds__ctgc__datastruct__ProcInfo_6,
#line 70 "ctgc.datastruct.m"
  MR_Word transform_hlds__ctgc__datastruct__Data0_7,
#line 70 "ctgc.datastruct.m"
  MR_Word transform_hlds__ctgc__datastruct__HeadVar__4_4)
#line 70 "ctgc.datastruct.m"
{
#line 153 "ctgc.datastruct.m"
  while (MR_TRUE)
#line 153 "ctgc.datastruct.m"
    {
#line 153 "ctgc.datastruct.m"
      /* tailcall optimized into a loop */
#line 153 "ctgc.datastruct.m"
      {
#line 153 "ctgc.datastruct.m"
        MR_bool transform_hlds__ctgc__datastruct__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__datastruct__HeadVar__4_4)) == (MR_mktag((MR_Integer) 1)));
#line 153 "ctgc.datastruct.m"
        MR_Word transform_hlds__ctgc__datastruct__Data_8;
#line 153 "ctgc.datastruct.m"
        MR_Word transform_hlds__ctgc__datastruct__Rest_9;

#line 153 "ctgc.datastruct.m"
        if (transform_hlds__ctgc__datastruct__succeeded)
#line 153 "ctgc.datastruct.m"
          {
#line 153 "ctgc.datastruct.m"
            transform_hlds__ctgc__datastruct__Data_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__datastruct__HeadVar__4_4, (MR_Integer) 0)));
#line 153 "ctgc.datastruct.m"
            transform_hlds__ctgc__datastruct__Rest_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__datastruct__HeadVar__4_4, (MR_Integer) 1)));
#line 150 "ctgc.datastruct.m"
            {
#line 150 "ctgc.datastruct.m"
              MR_Word transform_hlds__ctgc__datastruct__V_14_14;

#line 150 "ctgc.datastruct.m"
              {
#line 150 "ctgc.datastruct.m"
                transform_hlds__ctgc__datastruct__succeeded = transform_hlds__ctgc__datastruct__datastruct_subsumed_by_return_selector_5_p_0(transform_hlds__ctgc__datastruct__ModuleInfo_5, transform_hlds__ctgc__datastruct__ProcInfo_6, transform_hlds__ctgc__datastruct__Data0_7, transform_hlds__ctgc__datastruct__Data_8, &transform_hlds__ctgc__datastruct__V_14_14);
              }
#line 150 "ctgc.datastruct.m"
            }
#line 156 "ctgc.datastruct.m"
            if (!(transform_hlds__ctgc__datastruct__succeeded))
#line 157 "ctgc.datastruct.m"
              {
#line 157 "ctgc.datastruct.m"
                /* direct tailcall eliminated */
#line 157 "ctgc.datastruct.m"
                {
#line 157 "ctgc.datastruct.m"
                  MR_Word transform_hlds__ctgc__datastruct__HeadVar__4__tmp_copy_4 = transform_hlds__ctgc__datastruct__Rest_9;

#line 157 "ctgc.datastruct.m"
                  transform_hlds__ctgc__datastruct__HeadVar__4_4 = transform_hlds__ctgc__datastruct__HeadVar__4__tmp_copy_4;
#line 157 "ctgc.datastruct.m"
                }
#line 157 "ctgc.datastruct.m"
                continue;
#line 157 "ctgc.datastruct.m"
              }
#line 153 "ctgc.datastruct.m"
          }
#line 153 "ctgc.datastruct.m"
        return transform_hlds__ctgc__datastruct__succeeded;
#line 153 "ctgc.datastruct.m"
      }
#line 153 "ctgc.datastruct.m"
      break;
#line 153 "ctgc.datastruct.m"
    }
#line 70 "ctgc.datastruct.m"
}

#line 67 "ctgc.datastruct.m"
MR_bool MR_CALL 
transform_hlds__ctgc__datastruct__datastruct_subsumed_by_4_p_0(
#line 67 "ctgc.datastruct.m"
  MR_Word transform_hlds__ctgc__datastruct__ModuleInfo_5,
#line 67 "ctgc.datastruct.m"
  MR_Word transform_hlds__ctgc__datastruct__ProcInfo_6,
#line 67 "ctgc.datastruct.m"
  MR_Word transform_hlds__ctgc__datastruct__Data1_7,
#line 67 "ctgc.datastruct.m"
  MR_Word transform_hlds__ctgc__datastruct__Data2_8)
#line 67 "ctgc.datastruct.m"
{
#line 150 "ctgc.datastruct.m"
  {
#line 150 "ctgc.datastruct.m"
    MR_bool transform_hlds__ctgc__datastruct__succeeded;
#line 150 "ctgc.datastruct.m"
    MR_Word transform_hlds__ctgc__datastruct__V_9_9;

#line 150 "ctgc.datastruct.m"
    {
#line 150 "ctgc.datastruct.m"
      transform_hlds__ctgc__datastruct__succeeded = transform_hlds__ctgc__datastruct__datastruct_subsumed_by_return_selector_5_p_0(transform_hlds__ctgc__datastruct__ModuleInfo_5, transform_hlds__ctgc__datastruct__ProcInfo_6, transform_hlds__ctgc__datastruct__Data1_7, transform_hlds__ctgc__datastruct__Data2_8, &transform_hlds__ctgc__datastruct__V_9_9);
    }
#line 150 "ctgc.datastruct.m"
    return transform_hlds__ctgc__datastruct__succeeded;
#line 150 "ctgc.datastruct.m"
  }
#line 67 "ctgc.datastruct.m"
}

#line 64 "ctgc.datastruct.m"
MR_bool MR_CALL 
transform_hlds__ctgc__datastruct__datastruct_subsumed_by_return_selector_5_p_0(
#line 64 "ctgc.datastruct.m"
  MR_Word transform_hlds__ctgc__datastruct__ModuleInfo_6,
#line 64 "ctgc.datastruct.m"
  MR_Word transform_hlds__ctgc__datastruct__ProcInfo_7,
#line 64 "ctgc.datastruct.m"
  MR_Word transform_hlds__ctgc__datastruct__Data1_8,
#line 64 "ctgc.datastruct.m"
  MR_Word transform_hlds__ctgc__datastruct__Data2_9,
#line 64 "ctgc.datastruct.m"
  MR_Word * transform_hlds__ctgc__datastruct__Extension_10)
#line 64 "ctgc.datastruct.m"
{
#line 141 "ctgc.datastruct.m"
  {
#line 141 "ctgc.datastruct.m"
    MR_bool transform_hlds__ctgc__datastruct__succeeded;
#line 141 "ctgc.datastruct.m"
    MR_Word transform_hlds__ctgc__datastruct__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__datastruct__Data1_8, (MR_Integer) 0)));
#line 141 "ctgc.datastruct.m"
    MR_Word transform_hlds__ctgc__datastruct__Sel1_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__datastruct__Data1_8, (MR_Integer) 1)));
#line 141 "ctgc.datastruct.m"
    MR_Word transform_hlds__ctgc__datastruct__Sel2_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__datastruct__Data2_9, (MR_Integer) 1)));
#line 141 "ctgc.datastruct.m"
    MR_Word transform_hlds__ctgc__datastruct__VarTypes_14;
#line 141 "ctgc.datastruct.m"
    MR_Word transform_hlds__ctgc__datastruct__Type_15;
#line 141 "ctgc.datastruct.m"
    MR_Word transform_hlds__ctgc__datastruct__V_16_16;
#line 141 "ctgc.datastruct.m"
    MR_Word transform_hlds__ctgc__datastruct__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__datastruct__Data2_9, (MR_Integer) 0)));

#line 143 "ctgc.datastruct.m"
    {
#line 143 "ctgc.datastruct.m"
      transform_hlds__ctgc__datastruct__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__ctgc__datastruct_scalar_common_1[0], ((MR_Box) (transform_hlds__ctgc__datastruct__Var_11)), ((MR_Box) (transform_hlds__ctgc__datastruct__V_17_17)));
    }
#line 141 "ctgc.datastruct.m"
    if (transform_hlds__ctgc__datastruct__succeeded)
#line 141 "ctgc.datastruct.m"
      {
#line 144 "ctgc.datastruct.m"
        {
#line 144 "ctgc.datastruct.m"
          hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__ctgc__datastruct__ProcInfo_7, &transform_hlds__ctgc__datastruct__VarTypes_14);
        }
#line 145 "ctgc.datastruct.m"
        {
#line 145 "ctgc.datastruct.m"
          hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__ctgc__datastruct__VarTypes_14, transform_hlds__ctgc__datastruct__Var_11, &transform_hlds__ctgc__datastruct__Type_15);
        }
#line 146 "ctgc.datastruct.m"
        transform_hlds__ctgc__datastruct__V_16_16 = (MR_Integer) 1;
#line 146 "ctgc.datastruct.m"
        {
#line 146 "ctgc.datastruct.m"
          return transform_hlds__ctgc__datastruct__succeeded = transform_hlds__ctgc__selector__selector_subsumed_by_6_p_0(transform_hlds__ctgc__datastruct__ModuleInfo_6, transform_hlds__ctgc__datastruct__V_16_16, transform_hlds__ctgc__datastruct__Sel1_12, transform_hlds__ctgc__datastruct__Sel2_13, transform_hlds__ctgc__datastruct__Type_15, transform_hlds__ctgc__datastruct__Extension_10);
        }
#line 141 "ctgc.datastruct.m"
      }
#line 141 "ctgc.datastruct.m"
    return transform_hlds__ctgc__datastruct__succeeded;
#line 141 "ctgc.datastruct.m"
  }
#line 64 "ctgc.datastruct.m"
}

#line 62 "ctgc.datastruct.m"
MR_Word MR_CALL 
transform_hlds__ctgc__datastruct__normalize_datastruct_3_f_0(
#line 62 "ctgc.datastruct.m"
  MR_Word transform_hlds__ctgc__datastruct__ModuleInfo_5,
#line 62 "ctgc.datastruct.m"
  MR_Word transform_hlds__ctgc__datastruct__ProcInfo_6,
#line 62 "ctgc.datastruct.m"
  MR_Word transform_hlds__ctgc__datastruct__Data0_7)
#line 62 "ctgc.datastruct.m"
{
#line 133 "ctgc.datastruct.m"
  {
#line 133 "ctgc.datastruct.m"
    MR_bool transform_hlds__ctgc__datastruct__succeeded;
#line 133 "ctgc.datastruct.m"
    MR_Word transform_hlds__ctgc__datastruct__Data_8;
#line 133 "ctgc.datastruct.m"
    MR_Word transform_hlds__ctgc__datastruct__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__datastruct__Data0_7, (MR_Integer) 0)));
#line 133 "ctgc.datastruct.m"
    MR_Word transform_hlds__ctgc__datastruct__DSel0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__datastruct__Data0_7, (MR_Integer) 1)));
#line 133 "ctgc.datastruct.m"
    MR_Word transform_hlds__ctgc__datastruct__VarTypes_11;
#line 133 "ctgc.datastruct.m"
    MR_Word transform_hlds__ctgc__datastruct__Type_12;
#line 133 "ctgc.datastruct.m"
    MR_Word transform_hlds__ctgc__datastruct__DSel_13;

#line 135 "ctgc.datastruct.m"
    {
#line 135 "ctgc.datastruct.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__ctgc__datastruct__ProcInfo_6, &transform_hlds__ctgc__datastruct__VarTypes_11);
    }
#line 136 "ctgc.datastruct.m"
    {
#line 136 "ctgc.datastruct.m"
      hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__ctgc__datastruct__VarTypes_11, transform_hlds__ctgc__datastruct__Var_9, &transform_hlds__ctgc__datastruct__Type_12);
    }
#line 137 "ctgc.datastruct.m"
    {
#line 137 "ctgc.datastruct.m"
      transform_hlds__ctgc__selector__normalize_selector_with_type_information_4_p_0(transform_hlds__ctgc__datastruct__ModuleInfo_5, transform_hlds__ctgc__datastruct__Type_12, transform_hlds__ctgc__datastruct__DSel0_10, &transform_hlds__ctgc__datastruct__DSel_13);
    }
#line 138 "ctgc.datastruct.m"
    {
#line 138 "ctgc.datastruct.m"
      transform_hlds__ctgc__datastruct__Data_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 138 "ctgc.datastruct.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__datastruct__Data_8, 0) = ((MR_Box) (transform_hlds__ctgc__datastruct__Var_9));
#line 138 "ctgc.datastruct.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__datastruct__Data_8, 1) = ((MR_Box) (transform_hlds__ctgc__datastruct__DSel_13));
#line 138 "ctgc.datastruct.m"
    }
#line 133 "ctgc.datastruct.m"
    return transform_hlds__ctgc__datastruct__Data_8;
#line 133 "ctgc.datastruct.m"
  }
#line 62 "ctgc.datastruct.m"
}

#line 52 "ctgc.datastruct.m"
MR_Word MR_CALL 
transform_hlds__ctgc__datastruct__datastruct_termshift_4_f_0(
#line 52 "ctgc.datastruct.m"
  MR_Word transform_hlds__ctgc__datastruct__ModuleInfo_6,
#line 52 "ctgc.datastruct.m"
  MR_Word transform_hlds__ctgc__datastruct__ProcInfo_7,
#line 52 "ctgc.datastruct.m"
  MR_Word transform_hlds__ctgc__datastruct__Sel_8,
#line 52 "ctgc.datastruct.m"
  MR_Word transform_hlds__ctgc__datastruct__Data0_9)
#line 52 "ctgc.datastruct.m"
{
#line 117 "ctgc.datastruct.m"
  {
#line 117 "ctgc.datastruct.m"
    MR_bool transform_hlds__ctgc__datastruct__succeeded;
#line 117 "ctgc.datastruct.m"
    MR_Word transform_hlds__ctgc__datastruct__Data_10;

#line 117 "ctgc.datastruct.m"
    if ((transform_hlds__ctgc__datastruct__Sel_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 118 "ctgc.datastruct.m"
      transform_hlds__ctgc__datastruct__Data_10 = transform_hlds__ctgc__datastruct__Data0_9;
#line 117 "ctgc.datastruct.m"
    else
#line 120 "ctgc.datastruct.m"
      {
#line 120 "ctgc.datastruct.m"
        MR_Word transform_hlds__ctgc__datastruct__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__datastruct__Data0_9, (MR_Integer) 0)));
#line 120 "ctgc.datastruct.m"
        MR_Word transform_hlds__ctgc__datastruct__DSel_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__datastruct__Data0_9, (MR_Integer) 1)));
#line 120 "ctgc.datastruct.m"
        MR_Word transform_hlds__ctgc__datastruct__NewSel0_15;
#line 120 "ctgc.datastruct.m"
        MR_Word transform_hlds__ctgc__datastruct__VarTypes_16;
#line 120 "ctgc.datastruct.m"
        MR_Word transform_hlds__ctgc__datastruct__Type_17;
#line 120 "ctgc.datastruct.m"
        MR_Word transform_hlds__ctgc__datastruct__NewSel_18;

#line 122 "ctgc.datastruct.m"
        {
#line 122 "ctgc.datastruct.m"
          transform_hlds__ctgc__selector__selector_termshift_3_p_0(transform_hlds__ctgc__datastruct__DSel_14, transform_hlds__ctgc__datastruct__Sel_8, &transform_hlds__ctgc__datastruct__NewSel0_15);
        }
#line 125 "ctgc.datastruct.m"
        {
#line 125 "ctgc.datastruct.m"
          hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__ctgc__datastruct__ProcInfo_7, &transform_hlds__ctgc__datastruct__VarTypes_16);
        }
#line 126 "ctgc.datastruct.m"
        {
#line 126 "ctgc.datastruct.m"
          hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__ctgc__datastruct__VarTypes_16, transform_hlds__ctgc__datastruct__Var_13, &transform_hlds__ctgc__datastruct__Type_17);
        }
#line 127 "ctgc.datastruct.m"
        {
#line 127 "ctgc.datastruct.m"
          transform_hlds__ctgc__selector__normalize_selector_with_type_information_4_p_0(transform_hlds__ctgc__datastruct__ModuleInfo_6, transform_hlds__ctgc__datastruct__Type_17, transform_hlds__ctgc__datastruct__NewSel0_15, &transform_hlds__ctgc__datastruct__NewSel_18);
        }
#line 130 "ctgc.datastruct.m"
        {
#line 130 "ctgc.datastruct.m"
          transform_hlds__ctgc__datastruct__Data_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 130 "ctgc.datastruct.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__datastruct__Data_10, 0) = ((MR_Box) (transform_hlds__ctgc__datastruct__Var_13));
#line 130 "ctgc.datastruct.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__datastruct__Data_10, 1) = ((MR_Box) (transform_hlds__ctgc__datastruct__NewSel_18));
#line 130 "ctgc.datastruct.m"
        }
#line 120 "ctgc.datastruct.m"
      }
#line 117 "ctgc.datastruct.m"
    return transform_hlds__ctgc__datastruct__Data_10;
#line 117 "ctgc.datastruct.m"
  }
#line 52 "ctgc.datastruct.m"
}

#line 46 "ctgc.datastruct.m"
MR_bool MR_CALL 
transform_hlds__ctgc__datastruct__datastruct_refers_to_topcell_1_p_0(
#line 46 "ctgc.datastruct.m"
  MR_Word transform_hlds__ctgc__datastruct__Data_2)
#line 46 "ctgc.datastruct.m"
{
#line 111 "ctgc.datastruct.m"
  {
#line 111 "ctgc.datastruct.m"
    MR_bool transform_hlds__ctgc__datastruct__succeeded;
#line 111 "ctgc.datastruct.m"
    MR_Word transform_hlds__ctgc__datastruct__DSel_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__datastruct__Data_2, (MR_Integer) 1)));
#line 112 "ctgc.datastruct.m"
    MR_Word transform_hlds__ctgc__datastruct__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__datastruct__Data_2, (MR_Integer) 0)));

#line 113 "ctgc.datastruct.m"
    transform_hlds__ctgc__datastruct__succeeded = (transform_hlds__ctgc__datastruct__DSel_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 111 "ctgc.datastruct.m"
    return transform_hlds__ctgc__datastruct__succeeded;
#line 111 "ctgc.datastruct.m"
  }
#line 46 "ctgc.datastruct.m"
}

#line 41 "ctgc.datastruct.m"
MR_bool MR_CALL 
transform_hlds__ctgc__datastruct__datastruct_same_vars_2_p_0(
#line 41 "ctgc.datastruct.m"
  MR_Word transform_hlds__ctgc__datastruct__D1_3,
#line 41 "ctgc.datastruct.m"
  MR_Word transform_hlds__ctgc__datastruct__D2_4)
#line 41 "ctgc.datastruct.m"
{
#line 108 "ctgc.datastruct.m"
  {
#line 108 "ctgc.datastruct.m"
    MR_bool transform_hlds__ctgc__datastruct__succeeded;
#line 108 "ctgc.datastruct.m"
    MR_Word transform_hlds__ctgc__datastruct__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__datastruct__D1_3, (MR_Integer) 0)));
#line 108 "ctgc.datastruct.m"
    MR_Word transform_hlds__ctgc__datastruct__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__datastruct__D2_4, (MR_Integer) 0)));
#line 109 "ctgc.datastruct.m"
    MR_Word transform_hlds__ctgc__datastruct__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__datastruct__D1_3, (MR_Integer) 1)));
#line 109 "ctgc.datastruct.m"
    MR_Word transform_hlds__ctgc__datastruct__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__datastruct__D2_4, (MR_Integer) 1)));

#line 109 "ctgc.datastruct.m"
    {
#line 109 "ctgc.datastruct.m"
      return transform_hlds__ctgc__datastruct__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__ctgc__datastruct_scalar_common_1[0], ((MR_Box) (transform_hlds__ctgc__datastruct__V_5_5)), ((MR_Box) (transform_hlds__ctgc__datastruct__V_8_8)));
    }
#line 108 "ctgc.datastruct.m"
    return transform_hlds__ctgc__datastruct__succeeded;
#line 108 "ctgc.datastruct.m"
  }
#line 41 "ctgc.datastruct.m"
}

#line 36 "ctgc.datastruct.m"
MR_bool MR_CALL 
transform_hlds__ctgc__datastruct__datastruct_equal_2_p_0(
#line 36 "ctgc.datastruct.m"
  MR_Word transform_hlds__ctgc__datastruct__D1_3,
#line 36 "ctgc.datastruct.m"
  MR_Word transform_hlds__ctgc__datastruct__D2_4)
#line 36 "ctgc.datastruct.m"
{
#line 106 "ctgc.datastruct.m"
  {
#line 106 "ctgc.datastruct.m"
    MR_bool transform_hlds__ctgc__datastruct__succeeded;

#line 106 "ctgc.datastruct.m"
    {
#line 106 "ctgc.datastruct.m"
      return transform_hlds__ctgc__datastruct__succeeded = parse_tree__prog_data____Unify____datastruct_0_0(transform_hlds__ctgc__datastruct__D1_3, transform_hlds__ctgc__datastruct__D2_4);
    }
#line 106 "ctgc.datastruct.m"
    return transform_hlds__ctgc__datastruct__succeeded;
#line 106 "ctgc.datastruct.m"
  }
#line 36 "ctgc.datastruct.m"
}

#line 32 "ctgc.datastruct.m"
MR_Word MR_CALL 
transform_hlds__ctgc__datastruct__datastruct_init_with_pos_3_f_0(
#line 32 "ctgc.datastruct.m"
  MR_Word transform_hlds__ctgc__datastruct__V_5,
#line 32 "ctgc.datastruct.m"
  MR_Word transform_hlds__ctgc__datastruct__ConsId_6,
#line 32 "ctgc.datastruct.m"
  MR_Integer transform_hlds__ctgc__datastruct__Int_7)
#line 32 "ctgc.datastruct.m"
{
#line 104 "ctgc.datastruct.m"
  {
#line 104 "ctgc.datastruct.m"
    MR_bool transform_hlds__ctgc__datastruct__succeeded;
#line 104 "ctgc.datastruct.m"
    MR_Word transform_hlds__ctgc__datastruct__HeadVar__4_4;
#line 104 "ctgc.datastruct.m"
    MR_Word transform_hlds__ctgc__datastruct__V_8_8;

#line 104 "ctgc.datastruct.m"
    {
#line 104 "ctgc.datastruct.m"
      transform_hlds__ctgc__datastruct__V_8_8 = transform_hlds__ctgc__selector__selector_init_2_f_0(transform_hlds__ctgc__datastruct__ConsId_6, transform_hlds__ctgc__datastruct__Int_7);
    }
#line 101 "ctgc.datastruct.m"
    {
#line 101 "ctgc.datastruct.m"
      transform_hlds__ctgc__datastruct__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 101 "ctgc.datastruct.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__datastruct__HeadVar__4_4, 0) = ((MR_Box) (transform_hlds__ctgc__datastruct__V_5));
#line 101 "ctgc.datastruct.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__datastruct__HeadVar__4_4, 1) = ((MR_Box) (transform_hlds__ctgc__datastruct__V_8_8));
#line 101 "ctgc.datastruct.m"
    }
#line 104 "ctgc.datastruct.m"
    return transform_hlds__ctgc__datastruct__HeadVar__4_4;
#line 104 "ctgc.datastruct.m"
  }
#line 32 "ctgc.datastruct.m"
}

#line 31 "ctgc.datastruct.m"
MR_Word MR_CALL 
transform_hlds__ctgc__datastruct__datastruct_init_with_selector_2_f_0(
#line 31 "ctgc.datastruct.m"
  MR_Word transform_hlds__ctgc__datastruct__V_4,
#line 31 "ctgc.datastruct.m"
  MR_Word transform_hlds__ctgc__datastruct__Sel_5)
#line 31 "ctgc.datastruct.m"
{
#line 101 "ctgc.datastruct.m"
  {
#line 101 "ctgc.datastruct.m"
    MR_bool transform_hlds__ctgc__datastruct__succeeded;
#line 101 "ctgc.datastruct.m"
    MR_Word transform_hlds__ctgc__datastruct__HeadVar__3_3;

#line 101 "ctgc.datastruct.m"
    {
#line 101 "ctgc.datastruct.m"
      transform_hlds__ctgc__datastruct__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 101 "ctgc.datastruct.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__datastruct__HeadVar__3_3, 0) = ((MR_Box) (transform_hlds__ctgc__datastruct__V_4));
#line 101 "ctgc.datastruct.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__datastruct__HeadVar__3_3, 1) = ((MR_Box) (transform_hlds__ctgc__datastruct__Sel_5));
#line 101 "ctgc.datastruct.m"
    }
#line 101 "ctgc.datastruct.m"
    return transform_hlds__ctgc__datastruct__HeadVar__3_3;
#line 101 "ctgc.datastruct.m"
  }
#line 31 "ctgc.datastruct.m"
}

#line 30 "ctgc.datastruct.m"
MR_Word MR_CALL 
transform_hlds__ctgc__datastruct__datastruct_init_1_f_0(
#line 30 "ctgc.datastruct.m"
  MR_Word transform_hlds__ctgc__datastruct__V_3)
#line 30 "ctgc.datastruct.m"
{
#line 99 "ctgc.datastruct.m"
  {
#line 99 "ctgc.datastruct.m"
    MR_bool transform_hlds__ctgc__datastruct__succeeded;
#line 99 "ctgc.datastruct.m"
    MR_Word transform_hlds__ctgc__datastruct__HeadVar__2_2;

#line 101 "ctgc.datastruct.m"
    {
#line 101 "ctgc.datastruct.m"
      transform_hlds__ctgc__datastruct__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 101 "ctgc.datastruct.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__datastruct__HeadVar__2_2, 0) = ((MR_Box) (transform_hlds__ctgc__datastruct__V_3));
#line 101 "ctgc.datastruct.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__datastruct__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 101 "ctgc.datastruct.m"
    }
#line 99 "ctgc.datastruct.m"
    return transform_hlds__ctgc__datastruct__HeadVar__2_2;
#line 99 "ctgc.datastruct.m"
  }
#line 30 "ctgc.datastruct.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module transform_hlds.ctgc.datastruct. */
