/*
** Automatically generated from `ctgc.util.m'
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


/* :- module transform_hlds.ctgc.util. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__ctgc__util__init
ENDINIT
*/

#include "transform_hlds.ctgc.util.mih"


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
#include "check_hlds.type_util.mih"
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
#include "libs.op_mode.mih"
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
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.ctgc.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 33 "ctgc.util.m"
struct transform_hlds__ctgc__util__some_preds_requiring_no_analysis_2_p_0_env_0_s {
#line 33 "ctgc.util.m"
  MR_Word transform_hlds__ctgc__util__some_preds_requiring_no_analysis_2_p_0_env_0__ModuleInfo_3;
#line 33 "ctgc.util.m"
  MR_Word transform_hlds__ctgc__util__some_preds_requiring_no_analysis_2_p_0_env_0__PPIds_4;
#line 102 "ctgc.util.m"
  MR_bool transform_hlds__ctgc__util__some_preds_requiring_no_analysis_2_p_0_env_0__succeeded;
#line 102 "ctgc.util.m"
  jmp_buf transform_hlds__ctgc__util__some_preds_requiring_no_analysis_2_p_0_env_0__commit_0;
#line 102 "ctgc.util.m"
  MR_Word transform_hlds__ctgc__util__some_preds_requiring_no_analysis_2_p_0_env_0__PredId_5;
#line 102 "ctgc.util.m"
  MR_Word transform_hlds__ctgc__util__some_preds_requiring_no_analysis_2_p_0_env_0__V_7_7;
#line 102 "ctgc.util.m"
  MR_Word transform_hlds__ctgc__util__some_preds_requiring_no_analysis_2_p_0_env_0__PredInfo_11;
#line 102 "ctgc.util.m"
  MR_Word transform_hlds__ctgc__util__some_preds_requiring_no_analysis_2_p_0_env_0__PredStatus_12;
#line 102 "ctgc.util.m"
  MR_Word transform_hlds__ctgc__util__some_preds_requiring_no_analysis_2_p_0_env_0__V_14_14;
#line 103 "ctgc.util.m"
  MR_Box transform_hlds__ctgc__util__some_preds_requiring_no_analysis_2_p_0_env_0__conv0_V_7_7;
#line 33 "ctgc.util.m"
};


#line 169 "transform_hlds.ctgc.util.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 172 "transform_hlds.ctgc.util.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 175 "transform_hlds.ctgc.util.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 178 "transform_hlds.ctgc.util.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 170 "ctgc.util.m"
static void MR_CALL 
transform_hlds__ctgc__util__reverse_renaming_5_p_0(
#line 170 "ctgc.util.m"
  MR_Word transform_hlds__ctgc__util__RevSubst_6,
#line 170 "ctgc.util.m"
  MR_Word transform_hlds__ctgc__util__K0_7,
#line 170 "ctgc.util.m"
  MR_Word transform_hlds__ctgc__util__V0_8,
#line 170 "ctgc.util.m"
  MR_Word transform_hlds__ctgc__util__STATE_VARIABLE_Acc_0_12,
#line 170 "ctgc.util.m"
  MR_Word * transform_hlds__ctgc__util__STATE_VARIABLE_Acc_13);

#line 167 "ctgc.util.m"
static void MR_CALL 
transform_hlds__ctgc__util__get_type_substitution_5_f_0_1(
#line 167 "ctgc.util.m"
  MR_Box transform_hlds__ctgc__util__closure_arg,
#line 167 "ctgc.util.m"
  MR_Box transform_hlds__ctgc__util__wrapper_arg_1,
#line 167 "ctgc.util.m"
  MR_Box transform_hlds__ctgc__util__wrapper_arg_2,
#line 167 "ctgc.util.m"
  MR_Box transform_hlds__ctgc__util__wrapper_arg_3,
#line 167 "ctgc.util.m"
  MR_Box * transform_hlds__ctgc__util__wrapper_arg_4);

#line 102 "ctgc.util.m"
static void MR_CALL 
transform_hlds__ctgc__util__some_preds_requiring_no_analysis_2_p_0_1(
#line 102 "ctgc.util.m"
  void * transform_hlds__ctgc__util__env_ptr_arg);

#line 103 "ctgc.util.m"
static void MR_CALL 
transform_hlds__ctgc__util__some_preds_requiring_no_analysis_2_p_0_3(
#line 103 "ctgc.util.m"
  void * transform_hlds__ctgc__util__env_ptr_arg);

#line 102 "ctgc.util.m"
static void MR_CALL 
transform_hlds__ctgc__util__some_preds_requiring_no_analysis_2_p_0_2(
#line 102 "ctgc.util.m"
  void * transform_hlds__ctgc__util__env_ptr_arg);

#line 102 "ctgc.util.m"
static void MR_CALL 
transform_hlds__ctgc__util__some_preds_requiring_no_analysis_2_p_0_4(
#line 102 "ctgc.util.m"
  void * transform_hlds__ctgc__util__env_ptr_arg);


static /* final */ const MR_Box transform_hlds__ctgc__util_scalar_common_1[2][2];

static /* final */ const MR_Box transform_hlds__ctgc__util_scalar_common_2[1][3];

static /* final */ const MR_Box transform_hlds__ctgc__util_scalar_common_3[1][8];




static /* final */ const MR_Box transform_hlds__ctgc__util_scalar_common_1[2][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__util_scalar_common_2[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__ctgc__util_scalar_common_1[1])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__util_scalar_common_3[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&transform_hlds__ctgc__util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 288 "transform_hlds.ctgc.util.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 296 "transform_hlds.ctgc.util.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__ctgc__util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_PseudoTypeInfo) &transform_hlds__ctgc__util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 305 "transform_hlds.ctgc.util.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 313 "transform_hlds.ctgc.util.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__ctgc__util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 170 "ctgc.util.m"
static void MR_CALL 
transform_hlds__ctgc__util__reverse_renaming_5_p_0(
#line 170 "ctgc.util.m"
  MR_Word transform_hlds__ctgc__util__RevSubst_6,
#line 170 "ctgc.util.m"
  MR_Word transform_hlds__ctgc__util__K0_7,
#line 170 "ctgc.util.m"
  MR_Word transform_hlds__ctgc__util__V0_8,
#line 170 "ctgc.util.m"
  MR_Word transform_hlds__ctgc__util__STATE_VARIABLE_Acc_0_12,
#line 170 "ctgc.util.m"
  MR_Word * transform_hlds__ctgc__util__STATE_VARIABLE_Acc_13)
#line 170 "ctgc.util.m"
{
#line 173 "ctgc.util.m"
  {
#line 173 "ctgc.util.m"
    MR_bool transform_hlds__ctgc__util__succeeded;
#line 173 "ctgc.util.m"
    MR_Word transform_hlds__ctgc__util__K_10;
#line 173 "ctgc.util.m"
    MR_Word transform_hlds__ctgc__util__V_11;

#line 174 "ctgc.util.m"
    {
#line 174 "ctgc.util.m"
      parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_3_p_0(transform_hlds__ctgc__util__RevSubst_6, transform_hlds__ctgc__util__K0_7, &transform_hlds__ctgc__util__K_10);
    }
#line 175 "ctgc.util.m"
    {
#line 175 "ctgc.util.m"
      parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(transform_hlds__ctgc__util__RevSubst_6, transform_hlds__ctgc__util__V0_8, &transform_hlds__ctgc__util__V_11);
    }
#line 176 "ctgc.util.m"
    {
#line 176 "ctgc.util.m"
      mercury__map__det_insert_4_p_0((MR_Word) &transform_hlds__ctgc__util_scalar_common_1[1], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ((MR_Box) (transform_hlds__ctgc__util__K_10)), ((MR_Box) (transform_hlds__ctgc__util__V_11)), transform_hlds__ctgc__util__STATE_VARIABLE_Acc_0_12, transform_hlds__ctgc__util__STATE_VARIABLE_Acc_13);
    }
#line 173 "ctgc.util.m"
  }
#line 170 "ctgc.util.m"
}

#line 72 "ctgc.util.m"
MR_bool MR_CALL 
transform_hlds__ctgc__util__top_cell_may_be_reusable_2_p_0(
#line 72 "ctgc.util.m"
  MR_Word transform_hlds__ctgc__util__ModuleInfo_3,
#line 72 "ctgc.util.m"
  MR_Word transform_hlds__ctgc__util__Type_4)
#line 72 "ctgc.util.m"
{
#line 211 "ctgc.util.m"
  {
#line 211 "ctgc.util.m"
    MR_bool transform_hlds__ctgc__util__succeeded;
#line 211 "ctgc.util.m"
    MR_Word transform_hlds__ctgc__util__TypeCat_5;

#line 212 "ctgc.util.m"
    {
#line 212 "ctgc.util.m"
      transform_hlds__ctgc__util__TypeCat_5 = check_hlds__type_util__classify_type_2_f_0(transform_hlds__ctgc__util__ModuleInfo_3, transform_hlds__ctgc__util__Type_4);
    }
#line 228 "ctgc.util.m"
    if ((transform_hlds__ctgc__util__TypeCat_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 233 "ctgc.util.m"
      transform_hlds__ctgc__util__succeeded = MR_TRUE;
#line 228 "ctgc.util.m"
    else
#line 228 "ctgc.util.m"
    if (((((MR_tag((MR_Word) transform_hlds__ctgc__util__TypeCat_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__util__TypeCat_5, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 228 "ctgc.util.m"
      {
#line 228 "ctgc.util.m"
        MR_Word transform_hlds__ctgc__util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__util__TypeCat_5, (MR_Integer) 1)));

#line 400 "transform_hlds.ctgc.util.c"
        transform_hlds__ctgc__util__succeeded = (transform_hlds__ctgc__util__V_15_15 == (MR_Integer) 2);
#line 228 "ctgc.util.m"
      }
#line 228 "ctgc.util.m"
    else
#line 228 "ctgc.util.m"
      transform_hlds__ctgc__util__succeeded = MR_FALSE;
#line 211 "ctgc.util.m"
    return transform_hlds__ctgc__util__succeeded;
#line 211 "ctgc.util.m"
  }
#line 72 "ctgc.util.m"
}

#line 67 "ctgc.util.m"
MR_bool MR_CALL 
transform_hlds__ctgc__util__type_needs_sharing_analysis_2_p_0(
#line 67 "ctgc.util.m"
  MR_Word transform_hlds__ctgc__util__ModuleInfo_3,
#line 67 "ctgc.util.m"
  MR_Word transform_hlds__ctgc__util__Type_4)
#line 67 "ctgc.util.m"
{
#line 185 "ctgc.util.m"
  {
#line 185 "ctgc.util.m"
    MR_bool transform_hlds__ctgc__util__succeeded;
#line 185 "ctgc.util.m"
    MR_Word transform_hlds__ctgc__util__TypeCat_5;

#line 186 "ctgc.util.m"
    {
#line 186 "ctgc.util.m"
      transform_hlds__ctgc__util__TypeCat_5 = check_hlds__type_util__classify_type_2_f_0(transform_hlds__ctgc__util__ModuleInfo_3, transform_hlds__ctgc__util__Type_4);
    }
#line 200 "ctgc.util.m"
#line 200 "ctgc.util.m"
    switch (MR_tag((MR_Word) transform_hlds__ctgc__util__TypeCat_5)) {
#line 200 "ctgc.util.m"
      default:
#line 200 "ctgc.util.m"
        transform_hlds__ctgc__util__succeeded = MR_FALSE;
#line 200 "ctgc.util.m"
        break;
#line 200 "ctgc.util.m"
      case (MR_Integer) 0:
#line 200 "ctgc.util.m"
#line 200 "ctgc.util.m"
        switch (MR_unmkbody(transform_hlds__ctgc__util__TypeCat_5)) {
#line 200 "ctgc.util.m"
          default:
#line 200 "ctgc.util.m"
            transform_hlds__ctgc__util__succeeded = MR_FALSE;
#line 200 "ctgc.util.m"
            break;
#line 200 "ctgc.util.m"
          case (MR_Integer) 1:
#line 207 "ctgc.util.m"
            transform_hlds__ctgc__util__succeeded = MR_TRUE;
#line 200 "ctgc.util.m"
            break;
#line 200 "ctgc.util.m"
          case (MR_Integer) 3:
#line 207 "ctgc.util.m"
            transform_hlds__ctgc__util__succeeded = MR_TRUE;
#line 200 "ctgc.util.m"
            break;
#line 200 "ctgc.util.m"
        }
#line 200 "ctgc.util.m"
        break;
#line 200 "ctgc.util.m"
      case (MR_Integer) 3:
#line 200 "ctgc.util.m"
#line 200 "ctgc.util.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__util__TypeCat_5, (MR_Integer) 0)))) {
#line 200 "ctgc.util.m"
          default:
#line 200 "ctgc.util.m"
            transform_hlds__ctgc__util__succeeded = MR_FALSE;
#line 200 "ctgc.util.m"
            break;
#line 200 "ctgc.util.m"
          case (MR_Integer) 1:
#line 200 "ctgc.util.m"
            {
#line 200 "ctgc.util.m"
              MR_Word transform_hlds__ctgc__util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__util__TypeCat_5, (MR_Integer) 1)));

#line 200 "ctgc.util.m"
#line 200 "ctgc.util.m"
              switch (transform_hlds__ctgc__util__V_15_15) {
#line 200 "ctgc.util.m"
                default:
#line 200 "ctgc.util.m"
                  transform_hlds__ctgc__util__succeeded = MR_FALSE;
#line 200 "ctgc.util.m"
                  break;
#line 200 "ctgc.util.m"
                case (MR_Integer) 2:
#line 208 "ctgc.util.m"
                  transform_hlds__ctgc__util__succeeded = MR_TRUE;
#line 200 "ctgc.util.m"
                  break;
#line 200 "ctgc.util.m"
                case (MR_Integer) 1:
#line 208 "ctgc.util.m"
                  transform_hlds__ctgc__util__succeeded = MR_TRUE;
#line 200 "ctgc.util.m"
                  break;
#line 200 "ctgc.util.m"
              }
#line 200 "ctgc.util.m"
            }
#line 200 "ctgc.util.m"
            break;
#line 200 "ctgc.util.m"
        }
#line 200 "ctgc.util.m"
        break;
#line 200 "ctgc.util.m"
    }
#line 185 "ctgc.util.m"
    return transform_hlds__ctgc__util__succeeded;
#line 185 "ctgc.util.m"
  }
#line 67 "ctgc.util.m"
}

#line 61 "ctgc.util.m"
MR_bool MR_CALL 
transform_hlds__ctgc__util__var_needs_sharing_analysis_3_p_0(
#line 61 "ctgc.util.m"
  MR_Word transform_hlds__ctgc__util__ModuleInfo_4,
#line 61 "ctgc.util.m"
  MR_Word transform_hlds__ctgc__util__ProcInfo_5,
#line 61 "ctgc.util.m"
  MR_Word transform_hlds__ctgc__util__Var_6)
#line 61 "ctgc.util.m"
{
#line 180 "ctgc.util.m"
  {
#line 180 "ctgc.util.m"
    MR_bool transform_hlds__ctgc__util__succeeded;
#line 180 "ctgc.util.m"
    MR_Word transform_hlds__ctgc__util__VarTypes_7;
#line 180 "ctgc.util.m"
    MR_Word transform_hlds__ctgc__util__Type_8;

#line 181 "ctgc.util.m"
    {
#line 181 "ctgc.util.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__ctgc__util__ProcInfo_5, &transform_hlds__ctgc__util__VarTypes_7);
    }
#line 182 "ctgc.util.m"
    {
#line 182 "ctgc.util.m"
      hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__ctgc__util__VarTypes_7, transform_hlds__ctgc__util__Var_6, &transform_hlds__ctgc__util__Type_8);
    }
#line 183 "ctgc.util.m"
    {
#line 183 "ctgc.util.m"
      transform_hlds__ctgc__util__succeeded = transform_hlds__ctgc__util__type_needs_sharing_analysis_2_p_0(transform_hlds__ctgc__util__ModuleInfo_4, transform_hlds__ctgc__util__Type_8);
    }
#line 180 "ctgc.util.m"
    return transform_hlds__ctgc__util__succeeded;
#line 180 "ctgc.util.m"
  }
#line 61 "ctgc.util.m"
}

#line 167 "ctgc.util.m"
static void MR_CALL 
transform_hlds__ctgc__util__get_type_substitution_5_f_0_1(
#line 167 "ctgc.util.m"
  MR_Box transform_hlds__ctgc__util__closure_arg,
#line 167 "ctgc.util.m"
  MR_Box transform_hlds__ctgc__util__wrapper_arg_1,
#line 167 "ctgc.util.m"
  MR_Box transform_hlds__ctgc__util__wrapper_arg_2,
#line 167 "ctgc.util.m"
  MR_Box transform_hlds__ctgc__util__wrapper_arg_3,
#line 167 "ctgc.util.m"
  MR_Box * transform_hlds__ctgc__util__wrapper_arg_4)
#line 167 "ctgc.util.m"
{
#line 167 "ctgc.util.m"
  {
#line 167 "ctgc.util.m"
    MR_Box transform_hlds__ctgc__util__closure = transform_hlds__ctgc__util__closure_arg;
#line 167 "ctgc.util.m"
    MR_Word transform_hlds__ctgc__util__conv0_STATE_VARIABLE_Acc_13;

#line 167 "ctgc.util.m"
    {
#line 167 "ctgc.util.m"
      transform_hlds__ctgc__util__reverse_renaming_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__util__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__ctgc__util__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__util__wrapper_arg_2), ((MR_Word) transform_hlds__ctgc__util__wrapper_arg_3), &transform_hlds__ctgc__util__conv0_STATE_VARIABLE_Acc_13);
    }
#line 167 "ctgc.util.m"
    *transform_hlds__ctgc__util__wrapper_arg_4 = ((MR_Box) (transform_hlds__ctgc__util__conv0_STATE_VARIABLE_Acc_13));
#line 167 "ctgc.util.m"
  }
#line 167 "ctgc.util.m"
}

#line 53 "ctgc.util.m"
MR_Word MR_CALL 
transform_hlds__ctgc__util__get_type_substitution_5_f_0(
#line 53 "ctgc.util.m"
  MR_Word transform_hlds__ctgc__util__ModuleInfo_7,
#line 53 "ctgc.util.m"
  MR_Word transform_hlds__ctgc__util__PPId_8,
#line 53 "ctgc.util.m"
  MR_Word transform_hlds__ctgc__util__ActualTypes_9,
#line 53 "ctgc.util.m"
  MR_Word transform_hlds__ctgc__util__CallerTypeVarSet_10,
#line 53 "ctgc.util.m"
  MR_Word transform_hlds__ctgc__util__CallerHeadTypeParams_11)
#line 53 "ctgc.util.m"
{
#line 120 "ctgc.util.m"
  {
#line 120 "ctgc.util.m"
    MR_bool transform_hlds__ctgc__util__succeeded;
#line 120 "ctgc.util.m"
    MR_Word transform_hlds__ctgc__util__TypeSubst_12;
#line 120 "ctgc.util.m"
    MR_Word transform_hlds__ctgc__util__TypeInfo_41_41;
#line 120 "ctgc.util.m"
    MR_Word transform_hlds__ctgc__util__TypeCtorInfo_46_46;
#line 120 "ctgc.util.m"
    MR_Word transform_hlds__ctgc__util__PredId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__util__PPId_8, (MR_Integer) 0)));
#line 120 "ctgc.util.m"
    MR_Word transform_hlds__ctgc__util__CalleePredInfo_15;
#line 120 "ctgc.util.m"
    MR_Word transform_hlds__ctgc__util__CalleeTypeVarSet_16;
#line 120 "ctgc.util.m"
    MR_Word transform_hlds__ctgc__util__CalleeArgTypes0_17;
#line 120 "ctgc.util.m"
    MR_Word transform_hlds__ctgc__util__CalleeExistQVars_18;
#line 120 "ctgc.util.m"
    MR_Word transform_hlds__ctgc__util__CalleeTypeVarRenaming_20;
#line 120 "ctgc.util.m"
    MR_Word transform_hlds__ctgc__util__CalleeArgTypes_21;
#line 120 "ctgc.util.m"
    MR_Word transform_hlds__ctgc__util__TypeSubst1_23;
#line 120 "ctgc.util.m"
    MR_Word transform_hlds__ctgc__util__CalleeTypeVarRenamingKeys_27;
#line 120 "ctgc.util.m"
    MR_Word transform_hlds__ctgc__util__CalleeTypeVarRenamingValues_28;
#line 120 "ctgc.util.m"
    MR_Word transform_hlds__ctgc__util__RevCalleeTypeVarRenaming_29;
#line 120 "ctgc.util.m"
    MR_Word transform_hlds__ctgc__util__V_33_33;
#line 120 "ctgc.util.m"
    MR_Word transform_hlds__ctgc__util__V_34_34;
#line 121 "ctgc.util.m"
    MR_Integer transform_hlds__ctgc__util__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__util__PPId_8, (MR_Integer) 1)));
#line 129 "ctgc.util.m"
    MR_Word transform_hlds__ctgc__util___TypeVarSet_19;
#line 167 "ctgc.util.m"
    MR_Box transform_hlds__ctgc__util__conv1_TypeSubst_12;

#line 122 "ctgc.util.m"
    {
#line 122 "ctgc.util.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__ctgc__util__ModuleInfo_7, transform_hlds__ctgc__util__PredId_13, &transform_hlds__ctgc__util__CalleePredInfo_15);
    }
#line 123 "ctgc.util.m"
    {
#line 123 "ctgc.util.m"
      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(transform_hlds__ctgc__util__CalleePredInfo_15, &transform_hlds__ctgc__util__CalleeTypeVarSet_16);
    }
#line 124 "ctgc.util.m"
    {
#line 124 "ctgc.util.m"
      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(transform_hlds__ctgc__util__CalleePredInfo_15, &transform_hlds__ctgc__util__CalleeArgTypes0_17);
    }
#line 125 "ctgc.util.m"
    {
#line 125 "ctgc.util.m"
      hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_p_0(transform_hlds__ctgc__util__CalleePredInfo_15, &transform_hlds__ctgc__util__CalleeExistQVars_18);
    }
#line 129 "ctgc.util.m"
    {
#line 129 "ctgc.util.m"
      parse_tree__prog_data__tvarset_merge_renaming_4_p_0(transform_hlds__ctgc__util__CallerTypeVarSet_10, transform_hlds__ctgc__util__CalleeTypeVarSet_16, &transform_hlds__ctgc__util___TypeVarSet_19, &transform_hlds__ctgc__util__CalleeTypeVarRenaming_20);
    }
#line 131 "ctgc.util.m"
    {
#line 131 "ctgc.util.m"
      parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(transform_hlds__ctgc__util__CalleeTypeVarRenaming_20, transform_hlds__ctgc__util__CalleeArgTypes0_17, &transform_hlds__ctgc__util__CalleeArgTypes_21);
    }
#line 142 "ctgc.util.m"
    if ((transform_hlds__ctgc__util__CalleeExistQVars_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 138 "ctgc.util.m"
      {
#line 138 "ctgc.util.m"
        MR_Word transform_hlds__ctgc__util__TypeSubst0_22;

#line 136 "ctgc.util.m"
        {
#line 136 "ctgc.util.m"
          transform_hlds__ctgc__util__succeeded = parse_tree__prog_type__type_list_subsumes_3_p_0(transform_hlds__ctgc__util__CalleeArgTypes_21, transform_hlds__ctgc__util__ActualTypes_9, &transform_hlds__ctgc__util__TypeSubst0_22);
        }
#line 138 "ctgc.util.m"
        if (transform_hlds__ctgc__util__succeeded)
#line 137 "ctgc.util.m"
          transform_hlds__ctgc__util__TypeSubst1_23 = transform_hlds__ctgc__util__TypeSubst0_22;
#line 138 "ctgc.util.m"
        else
#line 140 "ctgc.util.m"
          {
#line 140 "ctgc.util.m"
            {
#line 140 "ctgc.util.m"
              transform_hlds__ctgc__util__TypeSubst1_23 = mercury__map__init_0_f_0((MR_Word) &transform_hlds__ctgc__util_scalar_common_1[1], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
            }
#line 140 "ctgc.util.m"
          }
#line 138 "ctgc.util.m"
      }
#line 142 "ctgc.util.m"
    else
#line 154 "ctgc.util.m"
      {
#line 154 "ctgc.util.m"
        MR_Word transform_hlds__ctgc__util__TypeSubst0_35;
#line 149 "ctgc.util.m"
        MR_Word transform_hlds__ctgc__util__TypeSubstPrime_26;

#line 149 "ctgc.util.m"
        {
#line 149 "ctgc.util.m"
          mercury__map__init_1_p_0((MR_Word) &transform_hlds__ctgc__util_scalar_common_1[1], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, &transform_hlds__ctgc__util__TypeSubstPrime_26);
        }
#line 150 "ctgc.util.m"
        {
#line 150 "ctgc.util.m"
          transform_hlds__ctgc__util__succeeded = parse_tree__prog_type__type_unify_list_5_p_0(transform_hlds__ctgc__util__CalleeArgTypes_21, transform_hlds__ctgc__util__ActualTypes_9, transform_hlds__ctgc__util__CallerHeadTypeParams_11, transform_hlds__ctgc__util__TypeSubstPrime_26, &transform_hlds__ctgc__util__TypeSubst0_35);
        }
#line 154 "ctgc.util.m"
        if (transform_hlds__ctgc__util__succeeded)
#line 153 "ctgc.util.m"
          transform_hlds__ctgc__util__TypeSubst1_23 = transform_hlds__ctgc__util__TypeSubst0_35;
#line 154 "ctgc.util.m"
        else
#line 155 "ctgc.util.m"
          {
#line 155 "ctgc.util.m"
            {
#line 155 "ctgc.util.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.util", (MR_String) "function \140transform_hlds.ctgc.util.get_type_substitution\'/5", (MR_String) "type unification failed");
            }
#line 155 "ctgc.util.m"
          }
#line 154 "ctgc.util.m"
      }
#line 759 "transform_hlds.ctgc.util.c"
    transform_hlds__ctgc__util__TypeInfo_41_41 = (MR_Word) &transform_hlds__ctgc__util_scalar_common_1[1];
#line 163 "ctgc.util.m"
    {
#line 163 "ctgc.util.m"
      mercury__map__keys_2_p_0(transform_hlds__ctgc__util__TypeInfo_41_41, transform_hlds__ctgc__util__TypeInfo_41_41, transform_hlds__ctgc__util__CalleeTypeVarRenaming_20, &transform_hlds__ctgc__util__CalleeTypeVarRenamingKeys_27);
    }
#line 164 "ctgc.util.m"
    {
#line 164 "ctgc.util.m"
      mercury__map__values_2_p_0(transform_hlds__ctgc__util__TypeInfo_41_41, transform_hlds__ctgc__util__TypeInfo_41_41, transform_hlds__ctgc__util__CalleeTypeVarRenaming_20, &transform_hlds__ctgc__util__CalleeTypeVarRenamingValues_28);
    }
#line 165 "ctgc.util.m"
    {
#line 165 "ctgc.util.m"
      mercury__map__from_corresponding_lists_3_p_0(transform_hlds__ctgc__util__TypeInfo_41_41, transform_hlds__ctgc__util__TypeInfo_41_41, transform_hlds__ctgc__util__CalleeTypeVarRenamingValues_28, transform_hlds__ctgc__util__CalleeTypeVarRenamingKeys_27, &transform_hlds__ctgc__util__RevCalleeTypeVarRenaming_29);
    }
#line 167 "ctgc.util.m"
    {
#line 167 "ctgc.util.m"
      transform_hlds__ctgc__util__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 167 "ctgc.util.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__util__V_33_33, 0) = ((MR_Box) (&transform_hlds__ctgc__util_scalar_common_3[0]));
#line 167 "ctgc.util.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__util__V_33_33, 1) = ((MR_Box) (transform_hlds__ctgc__util__get_type_substitution_5_f_0_1));
#line 167 "ctgc.util.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__util__V_33_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 167 "ctgc.util.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__util__V_33_33, 3) = ((MR_Box) (transform_hlds__ctgc__util__RevCalleeTypeVarRenaming_29));
#line 167 "ctgc.util.m"
    }
#line 790 "transform_hlds.ctgc.util.c"
    transform_hlds__ctgc__util__TypeCtorInfo_46_46 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 168 "ctgc.util.m"
    {
#line 168 "ctgc.util.m"
      transform_hlds__ctgc__util__V_34_34 = mercury__map__init_0_f_0(transform_hlds__ctgc__util__TypeInfo_41_41, transform_hlds__ctgc__util__TypeCtorInfo_46_46);
    }
#line 167 "ctgc.util.m"
    {
#line 167 "ctgc.util.m"
      mercury__map__foldl_4_p_0(transform_hlds__ctgc__util__TypeInfo_41_41, transform_hlds__ctgc__util__TypeCtorInfo_46_46, (MR_Word) &transform_hlds__ctgc__util_scalar_common_2[0], transform_hlds__ctgc__util__V_33_33, transform_hlds__ctgc__util__TypeSubst1_23, ((MR_Box) (transform_hlds__ctgc__util__V_34_34)), &transform_hlds__ctgc__util__conv1_TypeSubst_12);
    }
#line 167 "ctgc.util.m"
    transform_hlds__ctgc__util__TypeSubst_12 = ((MR_Word) transform_hlds__ctgc__util__conv1_TypeSubst_12);
#line 120 "ctgc.util.m"
    return transform_hlds__ctgc__util__TypeSubst_12;
#line 120 "ctgc.util.m"
  }
#line 53 "ctgc.util.m"
}

#line 44 "ctgc.util.m"
MR_Word MR_CALL 
transform_hlds__ctgc__util__get_variable_renaming_3_f_0(
#line 44 "ctgc.util.m"
  MR_Word transform_hlds__ctgc__util__ModuleInfo_5,
#line 44 "ctgc.util.m"
  MR_Word transform_hlds__ctgc__util__PPId_6,
#line 44 "ctgc.util.m"
  MR_Word transform_hlds__ctgc__util__ActualArgs_7)
#line 44 "ctgc.util.m"
{
#line 114 "ctgc.util.m"
  {
#line 114 "ctgc.util.m"
    MR_bool transform_hlds__ctgc__util__succeeded;
#line 114 "ctgc.util.m"
    MR_Word transform_hlds__ctgc__util__VariableRenaming_8;
#line 114 "ctgc.util.m"
    MR_Word transform_hlds__ctgc__util__TypeInfo_12_12;
#line 114 "ctgc.util.m"
    MR_Word transform_hlds__ctgc__util__ProcInfo_10;
#line 114 "ctgc.util.m"
    MR_Word transform_hlds__ctgc__util__FormalVars_11;
#line 115 "ctgc.util.m"
    MR_Word transform_hlds__ctgc__util___PredInfo_9;

#line 115 "ctgc.util.m"
    {
#line 115 "ctgc.util.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__ctgc__util__ModuleInfo_5, transform_hlds__ctgc__util__PPId_6, &transform_hlds__ctgc__util___PredInfo_9, &transform_hlds__ctgc__util__ProcInfo_10);
    }
#line 116 "ctgc.util.m"
    {
#line 116 "ctgc.util.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__ctgc__util__ProcInfo_10, &transform_hlds__ctgc__util__FormalVars_11);
    }
#line 847 "transform_hlds.ctgc.util.c"
    transform_hlds__ctgc__util__TypeInfo_12_12 = (MR_Word) &transform_hlds__ctgc__util_scalar_common_1[0];
#line 117 "ctgc.util.m"
    {
#line 117 "ctgc.util.m"
      mercury__map__from_corresponding_lists_3_p_0(transform_hlds__ctgc__util__TypeInfo_12_12, transform_hlds__ctgc__util__TypeInfo_12_12, transform_hlds__ctgc__util__FormalVars_11, transform_hlds__ctgc__util__ActualArgs_7, &transform_hlds__ctgc__util__VariableRenaming_8);
    }
#line 114 "ctgc.util.m"
    return transform_hlds__ctgc__util__VariableRenaming_8;
#line 114 "ctgc.util.m"
  }
#line 44 "ctgc.util.m"
}

#line 37 "ctgc.util.m"
MR_bool MR_CALL 
transform_hlds__ctgc__util__pred_requires_analysis_2_p_0(
#line 37 "ctgc.util.m"
  MR_Word transform_hlds__ctgc__util__ModuleInfo_3,
#line 37 "ctgc.util.m"
  MR_Word transform_hlds__ctgc__util__PredId_4)
#line 37 "ctgc.util.m"
{
#line 100 "ctgc.util.m"
  {
#line 100 "ctgc.util.m"
    MR_bool transform_hlds__ctgc__util__succeeded;
#line 92 "ctgc.util.m"
    MR_Word transform_hlds__ctgc__util__PredInfo_7;
#line 92 "ctgc.util.m"
    MR_Word transform_hlds__ctgc__util__PredStatus_8;
#line 92 "ctgc.util.m"
    MR_Word transform_hlds__ctgc__util__V_10_10;
#line 97 "ctgc.util.m"
    MR_Word transform_hlds__ctgc__util__V_9_9;

#line 93 "ctgc.util.m"
    {
#line 93 "ctgc.util.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__ctgc__util__ModuleInfo_3, transform_hlds__ctgc__util__PredId_4, &transform_hlds__ctgc__util__PredInfo_7);
    }
#line 94 "ctgc.util.m"
    {
#line 94 "ctgc.util.m"
      hlds__hlds_pred__pred_info_get_status_2_p_0(transform_hlds__ctgc__util__PredInfo_7, &transform_hlds__ctgc__util__PredStatus_8);
    }
#line 97 "ctgc.util.m"
    transform_hlds__ctgc__util__V_10_10 = (MR_Word) transform_hlds__ctgc__util__PredStatus_8;
#line 97 "ctgc.util.m"
    transform_hlds__ctgc__util__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__util__V_10_10)) == (MR_mktag((MR_Integer) 2)));
#line 97 "ctgc.util.m"
    if (transform_hlds__ctgc__util__succeeded)
#line 97 "ctgc.util.m"
      transform_hlds__ctgc__util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__ctgc__util__V_10_10, (MR_Integer) 0)));
#line 100 "ctgc.util.m"
    transform_hlds__ctgc__util__succeeded = !(transform_hlds__ctgc__util__succeeded);
#line 100 "ctgc.util.m"
    return transform_hlds__ctgc__util__succeeded;
#line 100 "ctgc.util.m"
  }
#line 37 "ctgc.util.m"
}

#line 36 "ctgc.util.m"
MR_bool MR_CALL 
transform_hlds__ctgc__util__pred_requires_no_analysis_2_p_0(
#line 36 "ctgc.util.m"
  MR_Word transform_hlds__ctgc__util__ModuleInfo_3,
#line 36 "ctgc.util.m"
  MR_Word transform_hlds__ctgc__util__PredId_4)
#line 36 "ctgc.util.m"
{
#line 92 "ctgc.util.m"
  {
#line 92 "ctgc.util.m"
    MR_bool transform_hlds__ctgc__util__succeeded;
#line 92 "ctgc.util.m"
    MR_Word transform_hlds__ctgc__util__PredInfo_5;
#line 92 "ctgc.util.m"
    MR_Word transform_hlds__ctgc__util__PredStatus_6;
#line 92 "ctgc.util.m"
    MR_Word transform_hlds__ctgc__util__V_8_8;
#line 97 "ctgc.util.m"
    MR_Word transform_hlds__ctgc__util__V_7_7;

#line 93 "ctgc.util.m"
    {
#line 93 "ctgc.util.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__ctgc__util__ModuleInfo_3, transform_hlds__ctgc__util__PredId_4, &transform_hlds__ctgc__util__PredInfo_5);
    }
#line 94 "ctgc.util.m"
    {
#line 94 "ctgc.util.m"
      hlds__hlds_pred__pred_info_get_status_2_p_0(transform_hlds__ctgc__util__PredInfo_5, &transform_hlds__ctgc__util__PredStatus_6);
    }
#line 97 "ctgc.util.m"
    transform_hlds__ctgc__util__V_8_8 = (MR_Word) transform_hlds__ctgc__util__PredStatus_6;
#line 97 "ctgc.util.m"
    transform_hlds__ctgc__util__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__util__V_8_8)) == (MR_mktag((MR_Integer) 2)));
#line 97 "ctgc.util.m"
    if (transform_hlds__ctgc__util__succeeded)
#line 97 "ctgc.util.m"
      transform_hlds__ctgc__util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__ctgc__util__V_8_8, (MR_Integer) 0)));
#line 92 "ctgc.util.m"
    return transform_hlds__ctgc__util__succeeded;
#line 92 "ctgc.util.m"
  }
#line 36 "ctgc.util.m"
}

#line 102 "ctgc.util.m"
static void MR_CALL 
transform_hlds__ctgc__util__some_preds_requiring_no_analysis_2_p_0_1(
#line 102 "ctgc.util.m"
  void * transform_hlds__ctgc__util__env_ptr_arg)
#line 102 "ctgc.util.m"
{
#line 102 "ctgc.util.m"
  {
#line 102 "ctgc.util.m"
    struct transform_hlds__ctgc__util__some_preds_requiring_no_analysis_2_p_0_env_0_s * transform_hlds__ctgc__util__env_ptr = (struct transform_hlds__ctgc__util__some_preds_requiring_no_analysis_2_p_0_env_0_s *) transform_hlds__ctgc__util__env_ptr_arg;

#line 102 "ctgc.util.m"
    MR_builtin_longjmp((transform_hlds__ctgc__util__env_ptr)->transform_hlds__ctgc__util__some_preds_requiring_no_analysis_2_p_0_env_0__commit_0, 1);
#line 102 "ctgc.util.m"
  }
#line 102 "ctgc.util.m"
}

#line 103 "ctgc.util.m"
static void MR_CALL 
transform_hlds__ctgc__util__some_preds_requiring_no_analysis_2_p_0_3(
#line 103 "ctgc.util.m"
  void * transform_hlds__ctgc__util__env_ptr_arg)
#line 103 "ctgc.util.m"
{
#line 103 "ctgc.util.m"
  {
#line 103 "ctgc.util.m"
    struct transform_hlds__ctgc__util__some_preds_requiring_no_analysis_2_p_0_env_0_s * transform_hlds__ctgc__util__env_ptr = (struct transform_hlds__ctgc__util__some_preds_requiring_no_analysis_2_p_0_env_0_s *) transform_hlds__ctgc__util__env_ptr_arg;

#line 103 "ctgc.util.m"
    (transform_hlds__ctgc__util__env_ptr)->transform_hlds__ctgc__util__some_preds_requiring_no_analysis_2_p_0_env_0__V_7_7 = ((MR_Word) (transform_hlds__ctgc__util__env_ptr)->transform_hlds__ctgc__util__some_preds_requiring_no_analysis_2_p_0_env_0__conv0_V_7_7);
#line 103 "ctgc.util.m"
    {
#line 103 "ctgc.util.m"
      transform_hlds__ctgc__util__some_preds_requiring_no_analysis_2_p_0_2(transform_hlds__ctgc__util__env_ptr);
    }
#line 103 "ctgc.util.m"
  }
#line 103 "ctgc.util.m"
}

#line 102 "ctgc.util.m"
static void MR_CALL 
transform_hlds__ctgc__util__some_preds_requiring_no_analysis_2_p_0_2(
#line 102 "ctgc.util.m"
  void * transform_hlds__ctgc__util__env_ptr_arg)
#line 102 "ctgc.util.m"
{
#line 102 "ctgc.util.m"
  {
#line 102 "ctgc.util.m"
    struct transform_hlds__ctgc__util__some_preds_requiring_no_analysis_2_p_0_env_0_s * transform_hlds__ctgc__util__env_ptr = (struct transform_hlds__ctgc__util__some_preds_requiring_no_analysis_2_p_0_env_0_s *) transform_hlds__ctgc__util__env_ptr_arg;

#line 102 "ctgc.util.m"
    {
#line 103 "ctgc.util.m"
      MR_Integer transform_hlds__ctgc__util__V_6_6;
#line 97 "ctgc.util.m"
      MR_Word transform_hlds__ctgc__util__V_13_13;

#line 103 "ctgc.util.m"
      (transform_hlds__ctgc__util__env_ptr)->transform_hlds__ctgc__util__some_preds_requiring_no_analysis_2_p_0_env_0__PredId_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__ctgc__util__env_ptr)->transform_hlds__ctgc__util__some_preds_requiring_no_analysis_2_p_0_env_0__V_7_7, (MR_Integer) 0)));
#line 103 "ctgc.util.m"
      transform_hlds__ctgc__util__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), (transform_hlds__ctgc__util__env_ptr)->transform_hlds__ctgc__util__some_preds_requiring_no_analysis_2_p_0_env_0__V_7_7, (MR_Integer) 1)));
#line 93 "ctgc.util.m"
      {
#line 93 "ctgc.util.m"
        hlds__hlds_module__module_info_pred_info_3_p_0((transform_hlds__ctgc__util__env_ptr)->transform_hlds__ctgc__util__some_preds_requiring_no_analysis_2_p_0_env_0__ModuleInfo_3, (transform_hlds__ctgc__util__env_ptr)->transform_hlds__ctgc__util__some_preds_requiring_no_analysis_2_p_0_env_0__PredId_5, &(transform_hlds__ctgc__util__env_ptr)->transform_hlds__ctgc__util__some_preds_requiring_no_analysis_2_p_0_env_0__PredInfo_11);
      }
#line 94 "ctgc.util.m"
      {
#line 94 "ctgc.util.m"
        hlds__hlds_pred__pred_info_get_status_2_p_0((transform_hlds__ctgc__util__env_ptr)->transform_hlds__ctgc__util__some_preds_requiring_no_analysis_2_p_0_env_0__PredInfo_11, &(transform_hlds__ctgc__util__env_ptr)->transform_hlds__ctgc__util__some_preds_requiring_no_analysis_2_p_0_env_0__PredStatus_12);
      }
#line 97 "ctgc.util.m"
      (transform_hlds__ctgc__util__env_ptr)->transform_hlds__ctgc__util__some_preds_requiring_no_analysis_2_p_0_env_0__V_14_14 = (MR_Word) (transform_hlds__ctgc__util__env_ptr)->transform_hlds__ctgc__util__some_preds_requiring_no_analysis_2_p_0_env_0__PredStatus_12;
#line 97 "ctgc.util.m"
      (transform_hlds__ctgc__util__env_ptr)->transform_hlds__ctgc__util__some_preds_requiring_no_analysis_2_p_0_env_0__succeeded = ((MR_tag((MR_Word) (transform_hlds__ctgc__util__env_ptr)->transform_hlds__ctgc__util__some_preds_requiring_no_analysis_2_p_0_env_0__V_14_14)) == (MR_mktag((MR_Integer) 2)));
#line 97 "ctgc.util.m"
      if ((transform_hlds__ctgc__util__env_ptr)->transform_hlds__ctgc__util__some_preds_requiring_no_analysis_2_p_0_env_0__succeeded)
#line 97 "ctgc.util.m"
        {
#line 97 "ctgc.util.m"
          transform_hlds__ctgc__util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), (transform_hlds__ctgc__util__env_ptr)->transform_hlds__ctgc__util__some_preds_requiring_no_analysis_2_p_0_env_0__V_14_14, (MR_Integer) 0)));
#line 97 "ctgc.util.m"
          {
#line 97 "ctgc.util.m"
            transform_hlds__ctgc__util__some_preds_requiring_no_analysis_2_p_0_1(transform_hlds__ctgc__util__env_ptr);
          }
#line 97 "ctgc.util.m"
        }
#line 102 "ctgc.util.m"
    }
#line 102 "ctgc.util.m"
  }
#line 102 "ctgc.util.m"
}

#line 102 "ctgc.util.m"
static void MR_CALL 
transform_hlds__ctgc__util__some_preds_requiring_no_analysis_2_p_0_4(
#line 102 "ctgc.util.m"
  void * transform_hlds__ctgc__util__env_ptr_arg)
#line 102 "ctgc.util.m"
{
#line 102 "ctgc.util.m"
  {
#line 102 "ctgc.util.m"
    struct transform_hlds__ctgc__util__some_preds_requiring_no_analysis_2_p_0_env_0_s * transform_hlds__ctgc__util__env_ptr = (struct transform_hlds__ctgc__util__some_preds_requiring_no_analysis_2_p_0_env_0_s *) transform_hlds__ctgc__util__env_ptr_arg;

#line 102 "ctgc.util.m"
    if (MR_builtin_setjmp((transform_hlds__ctgc__util__env_ptr)->transform_hlds__ctgc__util__some_preds_requiring_no_analysis_2_p_0_env_0__commit_0) == 0)
#line 102 "ctgc.util.m"
      {
#line 102 "ctgc.util.m"
        {
#line 103 "ctgc.util.m"
          {
#line 103 "ctgc.util.m"
            mercury__list__member_2_p_1((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, &(transform_hlds__ctgc__util__env_ptr)->transform_hlds__ctgc__util__some_preds_requiring_no_analysis_2_p_0_env_0__conv0_V_7_7, (transform_hlds__ctgc__util__env_ptr)->transform_hlds__ctgc__util__some_preds_requiring_no_analysis_2_p_0_env_0__PPIds_4, transform_hlds__ctgc__util__some_preds_requiring_no_analysis_2_p_0_3, transform_hlds__ctgc__util__env_ptr);
          }
#line 102 "ctgc.util.m"
        }
#line 102 "ctgc.util.m"
        (transform_hlds__ctgc__util__env_ptr)->transform_hlds__ctgc__util__some_preds_requiring_no_analysis_2_p_0_env_0__succeeded = MR_FALSE;
#line 102 "ctgc.util.m"
      }
#line 102 "ctgc.util.m"
    else
#line 102 "ctgc.util.m"
      (transform_hlds__ctgc__util__env_ptr)->transform_hlds__ctgc__util__some_preds_requiring_no_analysis_2_p_0_env_0__succeeded = MR_TRUE;
#line 102 "ctgc.util.m"
  }
#line 102 "ctgc.util.m"
}

#line 33 "ctgc.util.m"
MR_bool MR_CALL 
transform_hlds__ctgc__util__some_preds_requiring_no_analysis_2_p_0(
#line 33 "ctgc.util.m"
  MR_Word transform_hlds__ctgc__util__ModuleInfo_3,
#line 33 "ctgc.util.m"
  MR_Word transform_hlds__ctgc__util__PPIds_4)
#line 33 "ctgc.util.m"
{
#line 33 "ctgc.util.m"
  {
#line 33 "ctgc.util.m"
    struct transform_hlds__ctgc__util__some_preds_requiring_no_analysis_2_p_0_env_0_s transform_hlds__ctgc__util__env;

#line 33 "ctgc.util.m"
    (transform_hlds__ctgc__util__env).transform_hlds__ctgc__util__some_preds_requiring_no_analysis_2_p_0_env_0__ModuleInfo_3 = transform_hlds__ctgc__util__ModuleInfo_3;
#line 33 "ctgc.util.m"
    (transform_hlds__ctgc__util__env).transform_hlds__ctgc__util__some_preds_requiring_no_analysis_2_p_0_env_0__PPIds_4 = transform_hlds__ctgc__util__PPIds_4;
#line 102 "ctgc.util.m"
    {
#line 102 "ctgc.util.m"
      transform_hlds__ctgc__util__some_preds_requiring_no_analysis_2_p_0_4(&transform_hlds__ctgc__util__env);
    }
#line 102 "ctgc.util.m"
    return (transform_hlds__ctgc__util__env).transform_hlds__ctgc__util__some_preds_requiring_no_analysis_2_p_0_env_0__succeeded;
#line 33 "ctgc.util.m"
  }
#line 33 "ctgc.util.m"
}

void mercury__transform_hlds__ctgc__util__init(void)
{
}

void mercury__transform_hlds__ctgc__util__init_type_tables(void)
{
}

void mercury__transform_hlds__ctgc__util__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module transform_hlds.ctgc.util. */
