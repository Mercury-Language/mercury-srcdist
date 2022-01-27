/*
** Automatically generated from `post_term_analysis.m'
** by the Mercury compiler,
** version rotd-2015-02-20
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


/* :- module transform_hlds.post_term_analysis. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__post_term_analysis__init
ENDINIT
*/

#include "transform_hlds.post_term_analysis.mih"


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
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
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
#include "tree_bitset.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.foreign.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.type_util.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
#include "hlds.goal_util.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_out.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
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
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 144 "transform_hlds.post_term_analysis.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__post_term_analysis__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

#line 147 "transform_hlds.post_term_analysis.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__post_term_analysis__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

#line 150 "transform_hlds.post_term_analysis.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__post_term_analysis__pair__pti_pair_2__plain_mdbcomp__prim_data__type_ctor_info_special_pred_id_0__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0;

#line 145 "post_term_analysis.m"
static void MR_CALL 
transform_hlds__post_term_analysis__process_special_pred_for_type_7_p_0(
#line 145 "post_term_analysis.m"
  MR_Word transform_hlds__post_term_analysis__ModuleInfo_8,
#line 145 "post_term_analysis.m"
  MR_Word transform_hlds__post_term_analysis__SpecialPredId_9,
#line 145 "post_term_analysis.m"
  MR_Word transform_hlds__post_term_analysis__TypeCtor_10,
#line 145 "post_term_analysis.m"
  MR_Word transform_hlds__post_term_analysis__PredId_11,
#line 145 "post_term_analysis.m"
  MR_Word transform_hlds__post_term_analysis__TypeDefn_12);

#line 114 "post_term_analysis.m"
static void MR_CALL 
transform_hlds__post_term_analysis__warn_non_term_user_special_pred_6_p_0(
#line 114 "post_term_analysis.m"
  MR_Word transform_hlds__post_term_analysis__ModuleInfo_7,
#line 114 "post_term_analysis.m"
  MR_Word transform_hlds__post_term_analysis__TypeTable_8,
#line 114 "post_term_analysis.m"
  MR_Word transform_hlds__post_term_analysis__HeadVar__3_3,
#line 114 "post_term_analysis.m"
  MR_Word transform_hlds__post_term_analysis__PredId_11);

#line 108 "post_term_analysis.m"
static void MR_CALL 
transform_hlds__post_term_analysis__run_post_term_analysis_3_p_0_1(
#line 108 "post_term_analysis.m"
  MR_Box transform_hlds__post_term_analysis__closure_arg,
#line 108 "post_term_analysis.m"
  MR_Box transform_hlds__post_term_analysis__wrapper_arg_1,
#line 108 "post_term_analysis.m"
  MR_Box transform_hlds__post_term_analysis__wrapper_arg_2,
#line 108 "post_term_analysis.m"
  MR_Box transform_hlds__post_term_analysis__wrapper_arg_3,
#line 108 "post_term_analysis.m"
  MR_Box * transform_hlds__post_term_analysis__wrapper_arg_4);


static /* final */ const MR_Box transform_hlds__post_term_analysis_scalar_common_1[1][3];

static /* final */ const MR_Box transform_hlds__post_term_analysis_scalar_common_2[1][9];

static /* final */ const MR_Box transform_hlds__post_term_analysis_scalar_common_3[4][2];




static /* final */ const MR_Box transform_hlds__post_term_analysis_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_special_pred_id_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0))
  },
};

static /* final */ const MR_Box transform_hlds__post_term_analysis_scalar_common_2[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__post_term_analysis__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&transform_hlds__post_term_analysis__pair__pti_pair_2__plain_mdbcomp__prim_data__type_ctor_info_special_pred_id_0__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box transform_hlds__post_term_analysis_scalar_common_3[4][2] = {
  /* row 0 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Warning: the user-defined "))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "for the type "))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "cannot be proven to terminate."))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__post_term_analysis_scalar_common_3[2]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 267 "transform_hlds.post_term_analysis.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__post_term_analysis__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_TypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0
  }
};

#line 276 "transform_hlds.post_term_analysis.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__post_term_analysis__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &transform_hlds__post_term_analysis__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0
  }
};

#line 285 "transform_hlds.post_term_analysis.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__post_term_analysis__pair__pti_pair_2__plain_mdbcomp__prim_data__type_ctor_info_special_pred_id_0__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_special_pred_id_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0
  }
};

#line 145 "post_term_analysis.m"
static void MR_CALL 
transform_hlds__post_term_analysis__process_special_pred_for_type_7_p_0(
#line 145 "post_term_analysis.m"
  MR_Word transform_hlds__post_term_analysis__ModuleInfo_8,
#line 145 "post_term_analysis.m"
  MR_Word transform_hlds__post_term_analysis__SpecialPredId_9,
#line 145 "post_term_analysis.m"
  MR_Word transform_hlds__post_term_analysis__TypeCtor_10,
#line 145 "post_term_analysis.m"
  MR_Word transform_hlds__post_term_analysis__PredId_11,
#line 145 "post_term_analysis.m"
  MR_Word transform_hlds__post_term_analysis__TypeDefn_12)
#line 145 "post_term_analysis.m"
{
#line 176 "post_term_analysis.m"
  {
#line 176 "post_term_analysis.m"
    MR_bool transform_hlds__post_term_analysis__succeeded;
#line 186 "post_term_analysis.m"
    MR_Word transform_hlds__post_term_analysis__TypeBody_28;

#line 187 "post_term_analysis.m"
    {
#line 187 "post_term_analysis.m"
      hlds__hlds_data__get_type_defn_body_2_p_0(transform_hlds__post_term_analysis__TypeDefn_12, &transform_hlds__post_term_analysis__TypeBody_28);
    }
#line 191 "post_term_analysis.m"
    transform_hlds__post_term_analysis__succeeded = (transform_hlds__post_term_analysis__SpecialPredId_9 == (MR_Integer) 3);
#line 192 "post_term_analysis.m"
    if (!(transform_hlds__post_term_analysis__succeeded))
#line 193 "post_term_analysis.m"
      {
#line 193 "post_term_analysis.m"
        MR_Word transform_hlds__post_term_analysis__UnifyCompare_29;

#line 216 "post_term_analysis.m"
        if (((MR_tag((MR_Word) transform_hlds__post_term_analysis__TypeBody_28)) == (MR_mktag((MR_Integer) 1))))
#line 216 "post_term_analysis.m"
          {
#line 216 "post_term_analysis.m"
            MR_Word transform_hlds__post_term_analysis__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__post_term_analysis__TypeBody_28, (MR_Integer) 4)));
#line 217 "post_term_analysis.m"
            MR_Word transform_hlds__post_term_analysis__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__post_term_analysis__TypeBody_28, (MR_Integer) 0)));
#line 217 "post_term_analysis.m"
            MR_Word transform_hlds__post_term_analysis__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__post_term_analysis__TypeBody_28, (MR_Integer) 1)));
#line 217 "post_term_analysis.m"
            MR_Word transform_hlds__post_term_analysis__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__post_term_analysis__TypeBody_28, (MR_Integer) 2)));
#line 217 "post_term_analysis.m"
            MR_Word transform_hlds__post_term_analysis__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__post_term_analysis__TypeBody_28, (MR_Integer) 3)));
#line 217 "post_term_analysis.m"
            MR_Word transform_hlds__post_term_analysis__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__post_term_analysis__TypeBody_28, (MR_Integer) 5)));
#line 217 "post_term_analysis.m"
            MR_Word transform_hlds__post_term_analysis__V_46_46 = ((((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__post_term_analysis__TypeBody_28, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 217 "post_term_analysis.m"
            MR_Word transform_hlds__post_term_analysis__V_47_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__post_term_analysis__TypeBody_28, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 217 "post_term_analysis.m"
            MR_Word transform_hlds__post_term_analysis__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__post_term_analysis__TypeBody_28, (MR_Integer) 7)));

#line 217 "post_term_analysis.m"
            transform_hlds__post_term_analysis__succeeded = ((MR_tag((MR_Word) transform_hlds__post_term_analysis__V_49_49)) == (MR_mktag((MR_Integer) 1)));
#line 217 "post_term_analysis.m"
            if (transform_hlds__post_term_analysis__succeeded)
#line 217 "post_term_analysis.m"
              transform_hlds__post_term_analysis__UnifyCompare_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__post_term_analysis__V_49_49, (MR_Integer) 0)));
#line 216 "post_term_analysis.m"
          }
#line 216 "post_term_analysis.m"
        else
#line 216 "post_term_analysis.m"
          if (((MR_tag((MR_Word) transform_hlds__post_term_analysis__TypeBody_28)) == (MR_mktag((MR_Integer) 0))))
#line 218 "post_term_analysis.m"
            {
#line 218 "post_term_analysis.m"
              MR_Word transform_hlds__post_term_analysis__ForeignTypeBody_53 = (MR_Word) MR_body(((MR_Word) transform_hlds__post_term_analysis__TypeBody_28), (MR_Integer) 0);

#line 220 "post_term_analysis.m"
              {
#line 220 "post_term_analysis.m"
                transform_hlds__post_term_analysis__succeeded = backend_libs__foreign__foreign_type_body_has_user_defined_eq_comp_pred_3_p_0(transform_hlds__post_term_analysis__ModuleInfo_8, transform_hlds__post_term_analysis__ForeignTypeBody_53, &transform_hlds__post_term_analysis__UnifyCompare_29);
              }
#line 218 "post_term_analysis.m"
            }
#line 216 "post_term_analysis.m"
          else
#line 216 "post_term_analysis.m"
            if (((((MR_tag((MR_Word) transform_hlds__post_term_analysis__TypeBody_28)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__post_term_analysis__TypeBody_28, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 222 "post_term_analysis.m"
              {
#line 222 "post_term_analysis.m"
                MR_Word transform_hlds__post_term_analysis__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__post_term_analysis__TypeBody_28, (MR_Integer) 2)));
#line 223 "post_term_analysis.m"
                MR_Word transform_hlds__post_term_analysis__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__post_term_analysis__TypeBody_28, (MR_Integer) 1)));

#line 223 "post_term_analysis.m"
                transform_hlds__post_term_analysis__succeeded = ((MR_tag((MR_Word) transform_hlds__post_term_analysis__V_58_58)) == (MR_mktag((MR_Integer) 1)));
#line 223 "post_term_analysis.m"
                if (transform_hlds__post_term_analysis__succeeded)
#line 223 "post_term_analysis.m"
                  transform_hlds__post_term_analysis__UnifyCompare_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__post_term_analysis__V_58_58, (MR_Integer) 0)));
#line 222 "post_term_analysis.m"
              }
#line 216 "post_term_analysis.m"
            else
#line 216 "post_term_analysis.m"
              transform_hlds__post_term_analysis__succeeded = MR_FALSE;
#line 193 "post_term_analysis.m"
        if (transform_hlds__post_term_analysis__succeeded)
#line 203 "post_term_analysis.m"
          {
#line 203 "post_term_analysis.m"
            if (((MR_tag((MR_Word) transform_hlds__post_term_analysis__UnifyCompare_29)) == (MR_mktag((MR_Integer) 1))))
#line 204 "post_term_analysis.m"
              {
#line 205 "post_term_analysis.m"
                {
#line 205 "post_term_analysis.m"
                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.post_term_analysis", (MR_String) "predicate \140transform_hlds.post_term_analysis.special_pred_needs_term_check\'/3", (MR_String) "type is local and abstract_noncanonical");
#line 205 "post_term_analysis.m"
                  return;
                }
#line 204 "post_term_analysis.m"
                transform_hlds__post_term_analysis__succeeded = MR_TRUE;
#line 204 "post_term_analysis.m"
              }
#line 203 "post_term_analysis.m"
            else
#line 195 "post_term_analysis.m"
              {
#line 195 "post_term_analysis.m"
                MR_Word transform_hlds__post_term_analysis__MaybeUnify_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__post_term_analysis__UnifyCompare_29, (MR_Integer) 0)));
#line 195 "post_term_analysis.m"
                MR_Word transform_hlds__post_term_analysis__MaybeCompare_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__post_term_analysis__UnifyCompare_29, (MR_Integer) 1)));

#line 199 "post_term_analysis.m"
                if ((transform_hlds__post_term_analysis__SpecialPredId_9 == (MR_Integer) 2))
#line 200 "post_term_analysis.m"
                  {
#line 200 "post_term_analysis.m"
                    MR_Word transform_hlds__post_term_analysis__V_33_33;

#line 200 "post_term_analysis.m"
                    transform_hlds__post_term_analysis__succeeded = ((MR_tag((MR_Word) transform_hlds__post_term_analysis__MaybeCompare_31)) == (MR_mktag((MR_Integer) 1)));
#line 200 "post_term_analysis.m"
                    if (transform_hlds__post_term_analysis__succeeded)
#line 200 "post_term_analysis.m"
                      transform_hlds__post_term_analysis__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__post_term_analysis__MaybeCompare_31, (MR_Integer) 0)));
#line 200 "post_term_analysis.m"
                  }
#line 199 "post_term_analysis.m"
                else
#line 199 "post_term_analysis.m"
                  if ((transform_hlds__post_term_analysis__SpecialPredId_9 == (MR_Integer) 0))
#line 197 "post_term_analysis.m"
                    {
#line 197 "post_term_analysis.m"
                      MR_Word transform_hlds__post_term_analysis__V_32_32;

#line 197 "post_term_analysis.m"
                      transform_hlds__post_term_analysis__succeeded = ((MR_tag((MR_Word) transform_hlds__post_term_analysis__MaybeUnify_30)) == (MR_mktag((MR_Integer) 1)));
#line 197 "post_term_analysis.m"
                      if (transform_hlds__post_term_analysis__succeeded)
#line 197 "post_term_analysis.m"
                        transform_hlds__post_term_analysis__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__post_term_analysis__MaybeUnify_30, (MR_Integer) 0)));
#line 197 "post_term_analysis.m"
                    }
#line 199 "post_term_analysis.m"
                  else
#line 199 "post_term_analysis.m"
                    transform_hlds__post_term_analysis__succeeded = MR_FALSE;
#line 195 "post_term_analysis.m"
              }
#line 203 "post_term_analysis.m"
          }
#line 193 "post_term_analysis.m"
      }
#line 176 "post_term_analysis.m"
    if (transform_hlds__post_term_analysis__succeeded)
#line 153 "post_term_analysis.m"
      {
#line 153 "post_term_analysis.m"
        MR_Integer transform_hlds__post_term_analysis__ProcId_14;
#line 153 "post_term_analysis.m"
        MR_Word transform_hlds__post_term_analysis__ProcInfo_16;
#line 153 "post_term_analysis.m"
        MR_Word transform_hlds__post_term_analysis__BodyGoal0_17;
#line 153 "post_term_analysis.m"
        MR_Word transform_hlds__post_term_analysis__BodyGoal_18;
#line 154 "post_term_analysis.m"
        MR_Word transform_hlds__post_term_analysis__V_15_15;

#line 153 "post_term_analysis.m"
        {
#line 153 "post_term_analysis.m"
          hlds__hlds_pred__proc_id_to_int_2_p_1(&transform_hlds__post_term_analysis__ProcId_14, (MR_Integer) 0);
        }
#line 154 "post_term_analysis.m"
        {
#line 154 "post_term_analysis.m"
          hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__post_term_analysis__ModuleInfo_8, transform_hlds__post_term_analysis__PredId_11, transform_hlds__post_term_analysis__ProcId_14, &transform_hlds__post_term_analysis__V_15_15, &transform_hlds__post_term_analysis__ProcInfo_16);
        }
#line 155 "post_term_analysis.m"
        {
#line 155 "post_term_analysis.m"
          hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__post_term_analysis__ProcInfo_16, &transform_hlds__post_term_analysis__BodyGoal0_17);
        }
#line 161 "post_term_analysis.m"
        {
#line 161 "post_term_analysis.m"
          transform_hlds__post_term_analysis__BodyGoal_18 = hlds__goal_util__maybe_strip_equality_pretest_1_f_0(transform_hlds__post_term_analysis__BodyGoal0_17);
        }
#line 168 "post_term_analysis.m"
        {
#line 168 "post_term_analysis.m"
          transform_hlds__post_term_analysis__succeeded = hlds__goal_form__goal_cannot_loop_2_p_0(transform_hlds__post_term_analysis__ModuleInfo_8, transform_hlds__post_term_analysis__BodyGoal_18);
        }
#line 168 "post_term_analysis.m"
        transform_hlds__post_term_analysis__succeeded = !(transform_hlds__post_term_analysis__succeeded);
#line 173 "post_term_analysis.m"
        if (transform_hlds__post_term_analysis__succeeded)
#line 169 "post_term_analysis.m"
          {
#line 169 "post_term_analysis.m"
            MR_Word transform_hlds__post_term_analysis__Context_19;
#line 169 "post_term_analysis.m"
            MR_Word transform_hlds__post_term_analysis__Globals_20;
#line 169 "post_term_analysis.m"
            MR_Word transform_hlds__post_term_analysis__TypeModule_66;
#line 169 "post_term_analysis.m"
            MR_String transform_hlds__post_term_analysis__TypeName_67;
#line 169 "post_term_analysis.m"
            MR_Integer transform_hlds__post_term_analysis__TypeArity_68;
#line 169 "post_term_analysis.m"
            MR_String transform_hlds__post_term_analysis__SpecialPredStr_69;
#line 169 "post_term_analysis.m"
            MR_Word transform_hlds__post_term_analysis__Pieces_70;
#line 169 "post_term_analysis.m"
            MR_Word transform_hlds__post_term_analysis__V_76_76;
#line 169 "post_term_analysis.m"
            MR_Word transform_hlds__post_term_analysis__V_77_77;
#line 169 "post_term_analysis.m"
            MR_String transform_hlds__post_term_analysis__V_78_78;
#line 169 "post_term_analysis.m"
            MR_Word transform_hlds__post_term_analysis__V_80_80;
#line 169 "post_term_analysis.m"
            MR_Word transform_hlds__post_term_analysis__V_83_83;
#line 169 "post_term_analysis.m"
            MR_Word transform_hlds__post_term_analysis__V_84_84;
#line 169 "post_term_analysis.m"
            MR_Word transform_hlds__post_term_analysis__V_85_85;
#line 169 "post_term_analysis.m"
            MR_Word transform_hlds__post_term_analysis__V_86_86;

#line 169 "post_term_analysis.m"
            {
#line 169 "post_term_analysis.m"
              hlds__hlds_data__get_type_defn_context_2_p_0(transform_hlds__post_term_analysis__TypeDefn_12, &transform_hlds__post_term_analysis__Context_19);
            }
#line 170 "post_term_analysis.m"
            {
#line 170 "post_term_analysis.m"
              hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__post_term_analysis__ModuleInfo_8, &transform_hlds__post_term_analysis__Globals_20);
            }
#line 230 "post_term_analysis.m"
            {
#line 230 "post_term_analysis.m"
              check_hlds__type_util__type_ctor_module_name_arity_4_p_0(transform_hlds__post_term_analysis__TypeCtor_10, &transform_hlds__post_term_analysis__TypeModule_66, &transform_hlds__post_term_analysis__TypeName_67, &transform_hlds__post_term_analysis__TypeArity_68);
            }
#line 234 "post_term_analysis.m"
            if ((transform_hlds__post_term_analysis__SpecialPredId_9 == (MR_Integer) 2))
#line 236 "post_term_analysis.m"
              transform_hlds__post_term_analysis__SpecialPredStr_69 = (MR_String) "comparison";
#line 234 "post_term_analysis.m"
            else
#line 234 "post_term_analysis.m"
              if ((transform_hlds__post_term_analysis__SpecialPredId_9 == (MR_Integer) 3))
#line 239 "post_term_analysis.m"
                transform_hlds__post_term_analysis__SpecialPredStr_69 = (MR_String) "initialisation";
#line 234 "post_term_analysis.m"
              else
#line 233 "post_term_analysis.m"
                transform_hlds__post_term_analysis__SpecialPredStr_69 = (MR_String) "equality";
#line 245 "post_term_analysis.m"
            {
#line 245 "post_term_analysis.m"
              transform_hlds__post_term_analysis__V_78_78 = mercury__string__f_43_43_2_f_0(transform_hlds__post_term_analysis__SpecialPredStr_69, (MR_String) " predicate");
            }
#line 245 "post_term_analysis.m"
            {
#line 245 "post_term_analysis.m"
              transform_hlds__post_term_analysis__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 245 "post_term_analysis.m"
              MR_hl_field(MR_mktag(1), transform_hlds__post_term_analysis__V_77_77, 0) = ((MR_Box) (transform_hlds__post_term_analysis__V_78_78));
#line 245 "post_term_analysis.m"
            }
#line 247 "post_term_analysis.m"
            {
#line 247 "post_term_analysis.m"
              transform_hlds__post_term_analysis__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 247 "post_term_analysis.m"
              MR_hl_field(MR_mktag(1), transform_hlds__post_term_analysis__V_86_86, 0) = ((MR_Box) (transform_hlds__post_term_analysis__TypeModule_66));
#line 247 "post_term_analysis.m"
              MR_hl_field(MR_mktag(1), transform_hlds__post_term_analysis__V_86_86, 1) = ((MR_Box) (transform_hlds__post_term_analysis__TypeName_67));
#line 247 "post_term_analysis.m"
            }
#line 247 "post_term_analysis.m"
            {
#line 247 "post_term_analysis.m"
              transform_hlds__post_term_analysis__V_85_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 247 "post_term_analysis.m"
              MR_hl_field(MR_mktag(0), transform_hlds__post_term_analysis__V_85_85, 0) = ((MR_Box) (transform_hlds__post_term_analysis__V_86_86));
#line 247 "post_term_analysis.m"
              MR_hl_field(MR_mktag(0), transform_hlds__post_term_analysis__V_85_85, 1) = ((MR_Box) (transform_hlds__post_term_analysis__TypeArity_68));
#line 247 "post_term_analysis.m"
            }
#line 247 "post_term_analysis.m"
            {
#line 247 "post_term_analysis.m"
              transform_hlds__post_term_analysis__V_84_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 247 "post_term_analysis.m"
              MR_hl_field(MR_mktag(3), transform_hlds__post_term_analysis__V_84_84, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 247 "post_term_analysis.m"
              MR_hl_field(MR_mktag(3), transform_hlds__post_term_analysis__V_84_84, 1) = ((MR_Box) (transform_hlds__post_term_analysis__V_85_85));
#line 247 "post_term_analysis.m"
            }
#line 247 "post_term_analysis.m"
            {
#line 247 "post_term_analysis.m"
              transform_hlds__post_term_analysis__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 247 "post_term_analysis.m"
              MR_hl_field(MR_mktag(1), transform_hlds__post_term_analysis__V_83_83, 0) = ((MR_Box) (transform_hlds__post_term_analysis__V_84_84));
#line 247 "post_term_analysis.m"
              MR_hl_field(MR_mktag(1), transform_hlds__post_term_analysis__V_83_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__post_term_analysis_scalar_common_3[3])));
#line 247 "post_term_analysis.m"
            }
#line 246 "post_term_analysis.m"
            {
#line 246 "post_term_analysis.m"
              transform_hlds__post_term_analysis__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 246 "post_term_analysis.m"
              MR_hl_field(MR_mktag(1), transform_hlds__post_term_analysis__V_80_80, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__post_term_analysis_scalar_common_3[1])));
#line 246 "post_term_analysis.m"
              MR_hl_field(MR_mktag(1), transform_hlds__post_term_analysis__V_80_80, 1) = ((MR_Box) (transform_hlds__post_term_analysis__V_83_83));
#line 246 "post_term_analysis.m"
            }
#line 245 "post_term_analysis.m"
            {
#line 245 "post_term_analysis.m"
              transform_hlds__post_term_analysis__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 245 "post_term_analysis.m"
              MR_hl_field(MR_mktag(1), transform_hlds__post_term_analysis__V_76_76, 0) = ((MR_Box) (transform_hlds__post_term_analysis__V_77_77));
#line 245 "post_term_analysis.m"
              MR_hl_field(MR_mktag(1), transform_hlds__post_term_analysis__V_76_76, 1) = ((MR_Box) (transform_hlds__post_term_analysis__V_80_80));
#line 245 "post_term_analysis.m"
            }
#line 244 "post_term_analysis.m"
            {
#line 244 "post_term_analysis.m"
              transform_hlds__post_term_analysis__Pieces_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 244 "post_term_analysis.m"
              MR_hl_field(MR_mktag(1), transform_hlds__post_term_analysis__Pieces_70, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__post_term_analysis_scalar_common_3[0])));
#line 244 "post_term_analysis.m"
              MR_hl_field(MR_mktag(1), transform_hlds__post_term_analysis__Pieces_70, 1) = ((MR_Box) (transform_hlds__post_term_analysis__V_76_76));
#line 244 "post_term_analysis.m"
            }
#line 249 "post_term_analysis.m"
            {
#line 249 "post_term_analysis.m"
              parse_tree__error_util__report_warning_6_p_0(transform_hlds__post_term_analysis__Globals_20, transform_hlds__post_term_analysis__Context_19, (MR_Integer) 0, transform_hlds__post_term_analysis__Pieces_70);
#line 249 "post_term_analysis.m"
              return;
            }
#line 169 "post_term_analysis.m"
          }
#line 173 "post_term_analysis.m"
        else
#line 173 "post_term_analysis.m"
          {
#line 173 "post_term_analysis.m"
          }
#line 153 "post_term_analysis.m"
      }
#line 176 "post_term_analysis.m"
    else
#line 176 "post_term_analysis.m"
      {
#line 176 "post_term_analysis.m"
      }
#line 176 "post_term_analysis.m"
  }
#line 145 "post_term_analysis.m"
}

#line 114 "post_term_analysis.m"
static void MR_CALL 
transform_hlds__post_term_analysis__warn_non_term_user_special_pred_6_p_0(
#line 114 "post_term_analysis.m"
  MR_Word transform_hlds__post_term_analysis__ModuleInfo_7,
#line 114 "post_term_analysis.m"
  MR_Word transform_hlds__post_term_analysis__TypeTable_8,
#line 114 "post_term_analysis.m"
  MR_Word transform_hlds__post_term_analysis__HeadVar__3_3,
#line 114 "post_term_analysis.m"
  MR_Word transform_hlds__post_term_analysis__PredId_11)
#line 114 "post_term_analysis.m"
{
#line 118 "post_term_analysis.m"
  {
#line 118 "post_term_analysis.m"
    MR_bool transform_hlds__post_term_analysis__succeeded;
#line 118 "post_term_analysis.m"
    MR_Word transform_hlds__post_term_analysis__SpecialPredId_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__post_term_analysis__HeadVar__3_3, (MR_Integer) 0)));
#line 118 "post_term_analysis.m"
    MR_Word transform_hlds__post_term_analysis__TypeCtor_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__post_term_analysis__HeadVar__3_3, (MR_Integer) 1)));
#line 118 "post_term_analysis.m"
    MR_Word transform_hlds__post_term_analysis__BuiltinTypeCtors_13;
#line 126 "post_term_analysis.m"
    MR_Word transform_hlds__post_term_analysis__TypeCtorInfo_20_20;

#line 123 "post_term_analysis.m"
    {
#line 123 "post_term_analysis.m"
      transform_hlds__post_term_analysis__BuiltinTypeCtors_13 = parse_tree__prog_type__builtin_type_ctors_with_no_hlds_type_defn_0_f_0();
    }
#line 125 "post_term_analysis.m"
    transform_hlds__post_term_analysis__succeeded = (transform_hlds__post_term_analysis__SpecialPredId_9 == (MR_Integer) 1);
#line 125 "post_term_analysis.m"
    transform_hlds__post_term_analysis__succeeded = !(transform_hlds__post_term_analysis__succeeded);
#line 125 "post_term_analysis.m"
    if (transform_hlds__post_term_analysis__succeeded)
#line 125 "post_term_analysis.m"
      {
#line 726 "transform_hlds.post_term_analysis.c"
        transform_hlds__post_term_analysis__TypeCtorInfo_20_20 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
#line 126 "post_term_analysis.m"
        {
#line 126 "post_term_analysis.m"
          transform_hlds__post_term_analysis__succeeded = mercury__list__member_2_p_0(transform_hlds__post_term_analysis__TypeCtorInfo_20_20, ((MR_Box) (transform_hlds__post_term_analysis__TypeCtor_10)), transform_hlds__post_term_analysis__BuiltinTypeCtors_13);
        }
#line 126 "post_term_analysis.m"
        transform_hlds__post_term_analysis__succeeded = !(transform_hlds__post_term_analysis__succeeded);
#line 125 "post_term_analysis.m"
      }
#line 138 "post_term_analysis.m"
    if (transform_hlds__post_term_analysis__succeeded)
#line 128 "post_term_analysis.m"
      {
#line 128 "post_term_analysis.m"
        MR_Word transform_hlds__post_term_analysis__TypeDefn_14;
#line 128 "post_term_analysis.m"
        MR_Word transform_hlds__post_term_analysis__ImportStatus_15;
#line 128 "post_term_analysis.m"
        MR_Word transform_hlds__post_term_analysis__DefinedThisModule_16;

#line 128 "post_term_analysis.m"
        {
#line 128 "post_term_analysis.m"
          hlds__hlds_data__lookup_type_ctor_defn_3_p_0(transform_hlds__post_term_analysis__TypeTable_8, transform_hlds__post_term_analysis__TypeCtor_10, &transform_hlds__post_term_analysis__TypeDefn_14);
        }
#line 129 "post_term_analysis.m"
        {
#line 129 "post_term_analysis.m"
          hlds__hlds_data__get_type_defn_status_2_p_0(transform_hlds__post_term_analysis__TypeDefn_14, &transform_hlds__post_term_analysis__ImportStatus_15);
        }
#line 130 "post_term_analysis.m"
        {
#line 130 "post_term_analysis.m"
          transform_hlds__post_term_analysis__DefinedThisModule_16 = hlds__hlds_pred__status_defined_in_this_module_1_f_0(transform_hlds__post_term_analysis__ImportStatus_15);
        }
#line 135 "post_term_analysis.m"
        if ((transform_hlds__post_term_analysis__DefinedThisModule_16 == (MR_Integer) 0))
#line 136 "post_term_analysis.m"
          {
#line 136 "post_term_analysis.m"
          }
#line 135 "post_term_analysis.m"
        else
#line 133 "post_term_analysis.m"
          {
#line 133 "post_term_analysis.m"
            transform_hlds__post_term_analysis__process_special_pred_for_type_7_p_0(transform_hlds__post_term_analysis__ModuleInfo_7, transform_hlds__post_term_analysis__SpecialPredId_9, transform_hlds__post_term_analysis__TypeCtor_10, transform_hlds__post_term_analysis__PredId_11, transform_hlds__post_term_analysis__TypeDefn_14);
#line 133 "post_term_analysis.m"
            return;
          }
#line 128 "post_term_analysis.m"
      }
#line 138 "post_term_analysis.m"
    else
#line 138 "post_term_analysis.m"
      {
#line 138 "post_term_analysis.m"
      }
#line 118 "post_term_analysis.m"
  }
#line 114 "post_term_analysis.m"
}

#line 108 "post_term_analysis.m"
static void MR_CALL 
transform_hlds__post_term_analysis__run_post_term_analysis_3_p_0_1(
#line 108 "post_term_analysis.m"
  MR_Box transform_hlds__post_term_analysis__closure_arg,
#line 108 "post_term_analysis.m"
  MR_Box transform_hlds__post_term_analysis__wrapper_arg_1,
#line 108 "post_term_analysis.m"
  MR_Box transform_hlds__post_term_analysis__wrapper_arg_2,
#line 108 "post_term_analysis.m"
  MR_Box transform_hlds__post_term_analysis__wrapper_arg_3,
#line 108 "post_term_analysis.m"
  MR_Box * transform_hlds__post_term_analysis__wrapper_arg_4)
#line 108 "post_term_analysis.m"
{
#line 108 "post_term_analysis.m"
  {
#line 108 "post_term_analysis.m"
    MR_Box transform_hlds__post_term_analysis__closure = transform_hlds__post_term_analysis__closure_arg;

#line 108 "post_term_analysis.m"
    {
#line 108 "post_term_analysis.m"
      transform_hlds__post_term_analysis__warn_non_term_user_special_pred_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__post_term_analysis__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__post_term_analysis__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__post_term_analysis__wrapper_arg_1), ((MR_Word) transform_hlds__post_term_analysis__wrapper_arg_2));
#line 108 "post_term_analysis.m"
      return;
    }
#line 108 "post_term_analysis.m"
  }
#line 108 "post_term_analysis.m"
}

#line 28 "post_term_analysis.m"
void MR_CALL 
transform_hlds__post_term_analysis__run_post_term_analysis_3_p_0(
#line 28 "post_term_analysis.m"
  MR_Word transform_hlds__post_term_analysis__ModuleInfo_4)
#line 28 "post_term_analysis.m"
{
#line 86 "post_term_analysis.m"
  {
#line 86 "post_term_analysis.m"
    MR_bool transform_hlds__post_term_analysis__succeeded;
#line 86 "post_term_analysis.m"
    MR_Word transform_hlds__post_term_analysis__Globals_13;
#line 86 "post_term_analysis.m"
    MR_Word transform_hlds__post_term_analysis__Termination_14;
#line 86 "post_term_analysis.m"
    MR_Word transform_hlds__post_term_analysis__WarnSpecialPreds_15;
#line 86 "post_term_analysis.m"
    MR_Word transform_hlds__post_term_analysis__MakeOptInt_16;
#line 86 "post_term_analysis.m"
    MR_Word transform_hlds__post_term_analysis__TransIntermodOpt_17;

#line 87 "post_term_analysis.m"
    {
#line 87 "post_term_analysis.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__post_term_analysis__ModuleInfo_4, &transform_hlds__post_term_analysis__Globals_13);
    }
#line 88 "post_term_analysis.m"
    {
#line 88 "post_term_analysis.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__post_term_analysis__Globals_13, (MR_Integer) 416, &transform_hlds__post_term_analysis__Termination_14);
    }
#line 89 "post_term_analysis.m"
    {
#line 89 "post_term_analysis.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__post_term_analysis__Globals_13, (MR_Integer) 31, &transform_hlds__post_term_analysis__WarnSpecialPreds_15);
    }
#line 91 "post_term_analysis.m"
    {
#line 91 "post_term_analysis.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__post_term_analysis__Globals_13, (MR_Integer) 87, &transform_hlds__post_term_analysis__MakeOptInt_16);
    }
#line 93 "post_term_analysis.m"
    {
#line 93 "post_term_analysis.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__post_term_analysis__Globals_13, (MR_Integer) 332, &transform_hlds__post_term_analysis__TransIntermodOpt_17);
    }
#line 96 "post_term_analysis.m"
    transform_hlds__post_term_analysis__succeeded = (transform_hlds__post_term_analysis__Termination_14 == (MR_Integer) 1);
#line 96 "post_term_analysis.m"
    if (transform_hlds__post_term_analysis__succeeded)
#line 96 "post_term_analysis.m"
      {
#line 96 "post_term_analysis.m"
        transform_hlds__post_term_analysis__succeeded = (transform_hlds__post_term_analysis__WarnSpecialPreds_15 == (MR_Integer) 1);
#line 96 "post_term_analysis.m"
        if (transform_hlds__post_term_analysis__succeeded)
#line 96 "post_term_analysis.m"
          {
#line 104 "post_term_analysis.m"
            transform_hlds__post_term_analysis__succeeded = (transform_hlds__post_term_analysis__MakeOptInt_16 == (MR_Integer) 1);
#line 104 "post_term_analysis.m"
            if (transform_hlds__post_term_analysis__succeeded)
#line 104 "post_term_analysis.m"
              transform_hlds__post_term_analysis__succeeded = (transform_hlds__post_term_analysis__TransIntermodOpt_17 == (MR_Integer) 1);
#line 104 "post_term_analysis.m"
            transform_hlds__post_term_analysis__succeeded = !(transform_hlds__post_term_analysis__succeeded);
#line 96 "post_term_analysis.m"
          }
#line 96 "post_term_analysis.m"
      }
#line 110 "post_term_analysis.m"
    if (transform_hlds__post_term_analysis__succeeded)
#line 106 "post_term_analysis.m"
      {
#line 106 "post_term_analysis.m"
        MR_Word transform_hlds__post_term_analysis__SpecialPredMap_18;
#line 106 "post_term_analysis.m"
        MR_Word transform_hlds__post_term_analysis__TypeTable_19;
#line 106 "post_term_analysis.m"
        MR_Word transform_hlds__post_term_analysis__V_24_24;
#line 108 "post_term_analysis.m"
        MR_Box transform_hlds__post_term_analysis__conv0_STATE_VARIABLE_IO_7;

#line 106 "post_term_analysis.m"
        {
#line 106 "post_term_analysis.m"
          hlds__hlds_module__module_info_get_special_pred_map_2_p_0(transform_hlds__post_term_analysis__ModuleInfo_4, &transform_hlds__post_term_analysis__SpecialPredMap_18);
        }
#line 107 "post_term_analysis.m"
        {
#line 107 "post_term_analysis.m"
          hlds__hlds_module__module_info_get_type_table_2_p_0(transform_hlds__post_term_analysis__ModuleInfo_4, &transform_hlds__post_term_analysis__TypeTable_19);
        }
#line 108 "post_term_analysis.m"
        {
#line 108 "post_term_analysis.m"
          transform_hlds__post_term_analysis__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 108 "post_term_analysis.m"
          MR_hl_field(MR_mktag(0), transform_hlds__post_term_analysis__V_24_24, 0) = ((MR_Box) (&transform_hlds__post_term_analysis_scalar_common_2[0]));
#line 108 "post_term_analysis.m"
          MR_hl_field(MR_mktag(0), transform_hlds__post_term_analysis__V_24_24, 1) = ((MR_Box) (transform_hlds__post_term_analysis__run_post_term_analysis_3_p_0_1));
#line 108 "post_term_analysis.m"
          MR_hl_field(MR_mktag(0), transform_hlds__post_term_analysis__V_24_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 108 "post_term_analysis.m"
          MR_hl_field(MR_mktag(0), transform_hlds__post_term_analysis__V_24_24, 3) = ((MR_Box) (transform_hlds__post_term_analysis__ModuleInfo_4));
#line 108 "post_term_analysis.m"
          MR_hl_field(MR_mktag(0), transform_hlds__post_term_analysis__V_24_24, 4) = ((MR_Box) (transform_hlds__post_term_analysis__TypeTable_19));
#line 108 "post_term_analysis.m"
        }
#line 108 "post_term_analysis.m"
        {
#line 108 "post_term_analysis.m"
          mercury__map__foldl_4_p_2((MR_Word) &transform_hlds__post_term_analysis_scalar_common_1[0], (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, transform_hlds__post_term_analysis__V_24_24, transform_hlds__post_term_analysis__SpecialPredMap_18, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__post_term_analysis__conv0_STATE_VARIABLE_IO_7);
        }
#line 106 "post_term_analysis.m"
      }
#line 110 "post_term_analysis.m"
    else
#line 110 "post_term_analysis.m"
      {
#line 110 "post_term_analysis.m"
      }
#line 86 "post_term_analysis.m"
  }
#line 28 "post_term_analysis.m"
}

void mercury__transform_hlds__post_term_analysis__init(void)
{
}

void mercury__transform_hlds__post_term_analysis__init_type_tables(void)
{
}

void mercury__transform_hlds__post_term_analysis__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module transform_hlds.post_term_analysis. */
