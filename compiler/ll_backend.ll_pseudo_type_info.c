/*
** Automatically generated from `ll_pseudo_type_info.m'
** by the Mercury compiler,
** version 14.01.2-beta-2015-02-18, configured for x86_64-apple-darwin13.4.0.
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


/* :- module ll_backend.ll_pseudo_type_info. */
/* :- implementation. */

/*
INIT mercury__ll_backend__ll_pseudo_type_info__init
ENDINIT
*/

#include "ll_backend.ll_pseudo_type_info.mih"


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
#include "tree_bitset.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.pseudo_type_info.mih"
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
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "ll_backend.code_info.mih"
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
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
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
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 172 "ll_pseudo_type_info.m"
static void MR_CALL 
ll_backend__ll_pseudo_type_info__IntroducedFrom__pred__convert_compound_type_info__172__1_4_p_0(
#line 172 "ll_pseudo_type_info.m"
  MR_Word ll_backend__ll_pseudo_type_info__HeadVar__1_33,
#line 172 "ll_pseudo_type_info.m"
  MR_Word * ll_backend__ll_pseudo_type_info__HeadVar__2_34,
#line 172 "ll_pseudo_type_info.m"
  MR_Word ll_backend__ll_pseudo_type_info__HeadVar__3_35,
#line 172 "ll_pseudo_type_info.m"
  MR_Word * ll_backend__ll_pseudo_type_info__HeadVar__4_36);

#line 149 "ll_pseudo_type_info.m"
static void MR_CALL 
ll_backend__ll_pseudo_type_info__IntroducedFrom__pred__convert_compound_pseudo_type_info__149__1_4_p_0(
#line 149 "ll_pseudo_type_info.m"
  MR_Word ll_backend__ll_pseudo_type_info__HeadVar__1_34,
#line 149 "ll_pseudo_type_info.m"
  MR_Word * ll_backend__ll_pseudo_type_info__HeadVar__2_35,
#line 149 "ll_pseudo_type_info.m"
  MR_Word ll_backend__ll_pseudo_type_info__HeadVar__3_36,
#line 149 "ll_pseudo_type_info.m"
  MR_Word * ll_backend__ll_pseudo_type_info__HeadVar__4_37);

#line 171 "ll_pseudo_type_info.m"
static void MR_CALL 
ll_backend__ll_pseudo_type_info__convert_compound_type_info_7_p_0_1(
#line 171 "ll_pseudo_type_info.m"
  MR_Box ll_backend__ll_pseudo_type_info__closure_arg,
#line 171 "ll_pseudo_type_info.m"
  MR_Box ll_backend__ll_pseudo_type_info__wrapper_arg_1,
#line 171 "ll_pseudo_type_info.m"
  MR_Box * ll_backend__ll_pseudo_type_info__wrapper_arg_2,
#line 171 "ll_pseudo_type_info.m"
  MR_Box ll_backend__ll_pseudo_type_info__wrapper_arg_3,
#line 171 "ll_pseudo_type_info.m"
  MR_Box * ll_backend__ll_pseudo_type_info__wrapper_arg_4);

#line 159 "ll_pseudo_type_info.m"
static void MR_CALL 
ll_backend__ll_pseudo_type_info__convert_compound_type_info_7_p_0(
#line 159 "ll_pseudo_type_info.m"
  MR_Word ll_backend__ll_pseudo_type_info__RttiTypeCtor_8,
#line 159 "ll_pseudo_type_info.m"
  MR_Word ll_backend__ll_pseudo_type_info__ArgRvals0_9,
#line 159 "ll_pseudo_type_info.m"
  MR_Word ll_backend__ll_pseudo_type_info__Args_10,
#line 159 "ll_pseudo_type_info.m"
  MR_Word ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_0_25,
#line 159 "ll_pseudo_type_info.m"
  MR_Word * ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_26,
#line 159 "ll_pseudo_type_info.m"
  MR_Word * ll_backend__ll_pseudo_type_info__Rval_12,
#line 159 "ll_pseudo_type_info.m"
  MR_Word * ll_backend__ll_pseudo_type_info__LldsType_13);

#line 145 "ll_pseudo_type_info.m"
static void MR_CALL 
ll_backend__ll_pseudo_type_info__convert_compound_pseudo_type_info_7_p_0_1(
#line 145 "ll_pseudo_type_info.m"
  MR_Box ll_backend__ll_pseudo_type_info__closure_arg,
#line 145 "ll_pseudo_type_info.m"
  MR_Box ll_backend__ll_pseudo_type_info__wrapper_arg_1,
#line 145 "ll_pseudo_type_info.m"
  MR_Box * ll_backend__ll_pseudo_type_info__wrapper_arg_2,
#line 145 "ll_pseudo_type_info.m"
  MR_Box ll_backend__ll_pseudo_type_info__wrapper_arg_3,
#line 145 "ll_pseudo_type_info.m"
  MR_Box * ll_backend__ll_pseudo_type_info__wrapper_arg_4);

#line 134 "ll_pseudo_type_info.m"
static void MR_CALL 
ll_backend__ll_pseudo_type_info__convert_compound_pseudo_type_info_7_p_0(
#line 134 "ll_pseudo_type_info.m"
  MR_Word ll_backend__ll_pseudo_type_info__RttiTypeCtor_8,
#line 134 "ll_pseudo_type_info.m"
  MR_Word ll_backend__ll_pseudo_type_info__ArgRvals0_9,
#line 134 "ll_pseudo_type_info.m"
  MR_Word ll_backend__ll_pseudo_type_info__Args_10,
#line 134 "ll_pseudo_type_info.m"
  MR_Word ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_0_26,
#line 134 "ll_pseudo_type_info.m"
  MR_Word * ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_27,
#line 134 "ll_pseudo_type_info.m"
  MR_Word * ll_backend__ll_pseudo_type_info__Rval_12,
#line 134 "ll_pseudo_type_info.m"
  MR_Word * ll_backend__ll_pseudo_type_info__LldsType_13);

#line 82 "ll_pseudo_type_info.m"
static void MR_CALL 
ll_backend__ll_pseudo_type_info__convert_pseudo_type_info_5_p_0(
#line 82 "ll_pseudo_type_info.m"
  MR_Word ll_backend__ll_pseudo_type_info__Pseudo_6,
#line 82 "ll_pseudo_type_info.m"
  MR_Word ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_0_17,
#line 82 "ll_pseudo_type_info.m"
  MR_Word * ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_18,
#line 82 "ll_pseudo_type_info.m"
  MR_Word * ll_backend__ll_pseudo_type_info__Rval_8,
#line 82 "ll_pseudo_type_info.m"
  MR_Word * ll_backend__ll_pseudo_type_info__LldsType_9);


static /* final */ const MR_Box ll_backend__ll_pseudo_type_info_scalar_common_1[2][7];

static /* final */ const MR_Box ll_backend__ll_pseudo_type_info_scalar_common_2[2][3];




static /* final */ const MR_Box ll_backend__ll_pseudo_type_info_scalar_common_1[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_info_0)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_info_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_info_0)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_info_0))
  },
};

static /* final */ const MR_Box ll_backend__ll_pseudo_type_info_scalar_common_2[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&ll_backend__ll_pseudo_type_info_scalar_common_1[0])),
    ((MR_Box) (ll_backend__ll_pseudo_type_info__convert_compound_pseudo_type_info_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&ll_backend__ll_pseudo_type_info_scalar_common_1[1])),
    ((MR_Box) (ll_backend__ll_pseudo_type_info__convert_compound_type_info_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"



#line 172 "ll_pseudo_type_info.m"
static void MR_CALL 
ll_backend__ll_pseudo_type_info__IntroducedFrom__pred__convert_compound_type_info__172__1_4_p_0(
#line 172 "ll_pseudo_type_info.m"
  MR_Word ll_backend__ll_pseudo_type_info__HeadVar__1_33,
#line 172 "ll_pseudo_type_info.m"
  MR_Word * ll_backend__ll_pseudo_type_info__HeadVar__2_34,
#line 172 "ll_pseudo_type_info.m"
  MR_Word ll_backend__ll_pseudo_type_info__HeadVar__3_35,
#line 172 "ll_pseudo_type_info.m"
  MR_Word * ll_backend__ll_pseudo_type_info__HeadVar__4_36)
#line 172 "ll_pseudo_type_info.m"
{
#line 116 "ll_pseudo_type_info.m"
  {
#line 116 "ll_pseudo_type_info.m"
    MR_bool ll_backend__ll_pseudo_type_info__succeeded;

#line 116 "ll_pseudo_type_info.m"
    if (((MR_tag((MR_Word) ll_backend__ll_pseudo_type_info__HeadVar__1_33)) == (MR_mktag((MR_Integer) 0))))
#line 116 "ll_pseudo_type_info.m"
      {
#line 116 "ll_pseudo_type_info.m"
        MR_Word ll_backend__ll_pseudo_type_info__RttiTypeCtor_54 = (MR_Word) MR_body(((MR_Word) ll_backend__ll_pseudo_type_info__HeadVar__1_33), (MR_Integer) 0);
#line 116 "ll_pseudo_type_info.m"
        MR_Word ll_backend__ll_pseudo_type_info__DataId_55;
#line 116 "ll_pseudo_type_info.m"
        MR_Word ll_backend__ll_pseudo_type_info__V_66_66;
#line 116 "ll_pseudo_type_info.m"
        MR_Word ll_backend__ll_pseudo_type_info__V_67_67;
#line 116 "ll_pseudo_type_info.m"
        MR_Word ll_backend__ll_pseudo_type_info__V_68_68;

#line 117 "ll_pseudo_type_info.m"
        {
#line 117 "ll_pseudo_type_info.m"
          ll_backend__ll_pseudo_type_info__V_67_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 117 "ll_pseudo_type_info.m"
          MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__V_67_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
#line 117 "ll_pseudo_type_info.m"
          MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__V_67_67, 1) = ((MR_Box) (ll_backend__ll_pseudo_type_info__HeadVar__1_33));
#line 117 "ll_pseudo_type_info.m"
        }
#line 117 "ll_pseudo_type_info.m"
        {
#line 117 "ll_pseudo_type_info.m"
          ll_backend__ll_pseudo_type_info__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 117 "ll_pseudo_type_info.m"
          MR_hl_field(MR_mktag(0), ll_backend__ll_pseudo_type_info__V_66_66, 0) = ((MR_Box) (ll_backend__ll_pseudo_type_info__RttiTypeCtor_54));
#line 117 "ll_pseudo_type_info.m"
          MR_hl_field(MR_mktag(0), ll_backend__ll_pseudo_type_info__V_66_66, 1) = ((MR_Box) (ll_backend__ll_pseudo_type_info__V_67_67));
#line 117 "ll_pseudo_type_info.m"
        }
#line 117 "ll_pseudo_type_info.m"
        {
#line 117 "ll_pseudo_type_info.m"
          ll_backend__ll_pseudo_type_info__DataId_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 117 "ll_pseudo_type_info.m"
          MR_hl_field(MR_mktag(0), ll_backend__ll_pseudo_type_info__DataId_55, 0) = ((MR_Box) (ll_backend__ll_pseudo_type_info__V_66_66));
#line 117 "ll_pseudo_type_info.m"
        }
#line 119 "ll_pseudo_type_info.m"
        {
#line 119 "ll_pseudo_type_info.m"
          ll_backend__ll_pseudo_type_info__V_68_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 119 "ll_pseudo_type_info.m"
          MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__V_68_68, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 119 "ll_pseudo_type_info.m"
          MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__V_68_68, 1) = ((MR_Box) (ll_backend__ll_pseudo_type_info__DataId_55));
#line 119 "ll_pseudo_type_info.m"
          MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__V_68_68, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 119 "ll_pseudo_type_info.m"
        }
#line 119 "ll_pseudo_type_info.m"
        {
#line 119 "ll_pseudo_type_info.m"
          MR_Word base;
#line 119 "ll_pseudo_type_info.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 119 "ll_pseudo_type_info.m"
          *ll_backend__ll_pseudo_type_info__HeadVar__2_34 = base;
#line 119 "ll_pseudo_type_info.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 119 "ll_pseudo_type_info.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__ll_pseudo_type_info__V_68_68));
#line 119 "ll_pseudo_type_info.m"
        }
#line 120 "ll_pseudo_type_info.m"
        *ll_backend__ll_pseudo_type_info__HeadVar__4_36 = ll_backend__ll_pseudo_type_info__HeadVar__3_35;
#line 116 "ll_pseudo_type_info.m"
      }
#line 116 "ll_pseudo_type_info.m"
    else
#line 116 "ll_pseudo_type_info.m"
      if (((MR_tag((MR_Word) ll_backend__ll_pseudo_type_info__HeadVar__1_33)) == (MR_mktag((MR_Integer) 1))))
#line 122 "ll_pseudo_type_info.m"
        {
#line 122 "ll_pseudo_type_info.m"
          MR_Word ll_backend__ll_pseudo_type_info__Args_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__ll_pseudo_type_info__HeadVar__1_33, (MR_Integer) 1)));
#line 122 "ll_pseudo_type_info.m"
          MR_Word ll_backend__ll_pseudo_type_info__RttiTypeCtor_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__ll_pseudo_type_info__HeadVar__1_33, (MR_Integer) 0)));
#line 123 "ll_pseudo_type_info.m"
          MR_Word ll_backend__ll_pseudo_type_info___LldsType_74;

#line 123 "ll_pseudo_type_info.m"
          {
#line 123 "ll_pseudo_type_info.m"
            ll_backend__ll_pseudo_type_info__convert_compound_type_info_7_p_0(ll_backend__ll_pseudo_type_info__RttiTypeCtor_70, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__ll_pseudo_type_info__Args_56, ll_backend__ll_pseudo_type_info__HeadVar__3_35, ll_backend__ll_pseudo_type_info__HeadVar__4_36, ll_backend__ll_pseudo_type_info__HeadVar__2_34, &ll_backend__ll_pseudo_type_info___LldsType_74);
          }
#line 122 "ll_pseudo_type_info.m"
        }
#line 116 "ll_pseudo_type_info.m"
      else
#line 126 "ll_pseudo_type_info.m"
        {
#line 126 "ll_pseudo_type_info.m"
          MR_Word ll_backend__ll_pseudo_type_info__VarArityId_57 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__ll_pseudo_type_info__HeadVar__1_33, (MR_Integer) 0)));
#line 126 "ll_pseudo_type_info.m"
          MR_Integer ll_backend__ll_pseudo_type_info__Arity_58;
#line 126 "ll_pseudo_type_info.m"
          MR_Word ll_backend__ll_pseudo_type_info__ArityArg_59;
#line 126 "ll_pseudo_type_info.m"
          MR_Word ll_backend__ll_pseudo_type_info__V_60_60;
#line 126 "ll_pseudo_type_info.m"
          MR_Word ll_backend__ll_pseudo_type_info__V_61_61;
#line 126 "ll_pseudo_type_info.m"
          MR_Word ll_backend__ll_pseudo_type_info__RttiTypeCtor_71;
#line 126 "ll_pseudo_type_info.m"
          MR_Word ll_backend__ll_pseudo_type_info__Args_72 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__ll_pseudo_type_info__HeadVar__1_33, (MR_Integer) 1)));
#line 130 "ll_pseudo_type_info.m"
          MR_Word ll_backend__ll_pseudo_type_info___LldsType_76;

#line 127 "ll_pseudo_type_info.m"
          {
#line 127 "ll_pseudo_type_info.m"
            mercury__list__length_2_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_info_0, ll_backend__ll_pseudo_type_info__Args_72, &ll_backend__ll_pseudo_type_info__Arity_58);
          }
#line 128 "ll_pseudo_type_info.m"
          {
#line 128 "ll_pseudo_type_info.m"
            ll_backend__ll_pseudo_type_info__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 128 "ll_pseudo_type_info.m"
            MR_hl_field(MR_mktag(1), ll_backend__ll_pseudo_type_info__V_60_60, 0) = ((MR_Box) (ll_backend__ll_pseudo_type_info__Arity_58));
#line 128 "ll_pseudo_type_info.m"
          }
#line 128 "ll_pseudo_type_info.m"
          {
#line 128 "ll_pseudo_type_info.m"
            ll_backend__ll_pseudo_type_info__ArityArg_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 128 "ll_pseudo_type_info.m"
            MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__ArityArg_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 128 "ll_pseudo_type_info.m"
            MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__ArityArg_59, 1) = ((MR_Box) (ll_backend__ll_pseudo_type_info__V_60_60));
#line 128 "ll_pseudo_type_info.m"
          }
#line 129 "ll_pseudo_type_info.m"
          {
#line 129 "ll_pseudo_type_info.m"
            ll_backend__ll_pseudo_type_info__RttiTypeCtor_71 = backend_libs__rtti__var_arity_id_to_rtti_type_ctor_1_f_0(ll_backend__ll_pseudo_type_info__VarArityId_57);
          }
#line 130 "ll_pseudo_type_info.m"
          {
#line 130 "ll_pseudo_type_info.m"
            ll_backend__ll_pseudo_type_info__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 130 "ll_pseudo_type_info.m"
            MR_hl_field(MR_mktag(1), ll_backend__ll_pseudo_type_info__V_61_61, 0) = ((MR_Box) (ll_backend__ll_pseudo_type_info__ArityArg_59));
#line 130 "ll_pseudo_type_info.m"
            MR_hl_field(MR_mktag(1), ll_backend__ll_pseudo_type_info__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 130 "ll_pseudo_type_info.m"
          }
#line 130 "ll_pseudo_type_info.m"
          {
#line 130 "ll_pseudo_type_info.m"
            ll_backend__ll_pseudo_type_info__convert_compound_type_info_7_p_0(ll_backend__ll_pseudo_type_info__RttiTypeCtor_71, ll_backend__ll_pseudo_type_info__V_61_61, ll_backend__ll_pseudo_type_info__Args_72, ll_backend__ll_pseudo_type_info__HeadVar__3_35, ll_backend__ll_pseudo_type_info__HeadVar__4_36, ll_backend__ll_pseudo_type_info__HeadVar__2_34, &ll_backend__ll_pseudo_type_info___LldsType_76);
          }
#line 126 "ll_pseudo_type_info.m"
        }
#line 116 "ll_pseudo_type_info.m"
  }
#line 172 "ll_pseudo_type_info.m"
}

#line 149 "ll_pseudo_type_info.m"
static void MR_CALL 
ll_backend__ll_pseudo_type_info__IntroducedFrom__pred__convert_compound_pseudo_type_info__149__1_4_p_0(
#line 149 "ll_pseudo_type_info.m"
  MR_Word ll_backend__ll_pseudo_type_info__HeadVar__1_34,
#line 149 "ll_pseudo_type_info.m"
  MR_Word * ll_backend__ll_pseudo_type_info__HeadVar__2_35,
#line 149 "ll_pseudo_type_info.m"
  MR_Word ll_backend__ll_pseudo_type_info__HeadVar__3_36,
#line 149 "ll_pseudo_type_info.m"
  MR_Word * ll_backend__ll_pseudo_type_info__HeadVar__4_37)
#line 149 "ll_pseudo_type_info.m"
{
#line 149 "ll_pseudo_type_info.m"
  {
#line 149 "ll_pseudo_type_info.m"
    MR_bool ll_backend__ll_pseudo_type_info__succeeded;

#line 149 "ll_pseudo_type_info.m"
    if (((MR_tag((MR_Word) ll_backend__ll_pseudo_type_info__HeadVar__1_34)) == (MR_mktag((MR_Integer) 1))))
#line 150 "ll_pseudo_type_info.m"
      {
#line 150 "ll_pseudo_type_info.m"
        MR_Word ll_backend__ll_pseudo_type_info__TI_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__ll_pseudo_type_info__HeadVar__1_34, (MR_Integer) 0)));

#line 116 "ll_pseudo_type_info.m"
        if (((MR_tag((MR_Word) ll_backend__ll_pseudo_type_info__TI_22)) == (MR_mktag((MR_Integer) 0))))
#line 116 "ll_pseudo_type_info.m"
          {
#line 116 "ll_pseudo_type_info.m"
            MR_Word ll_backend__ll_pseudo_type_info__RttiTypeCtor_57 = (MR_Word) MR_body(((MR_Word) ll_backend__ll_pseudo_type_info__TI_22), (MR_Integer) 0);
#line 116 "ll_pseudo_type_info.m"
            MR_Word ll_backend__ll_pseudo_type_info__DataId_58;
#line 116 "ll_pseudo_type_info.m"
            MR_Word ll_backend__ll_pseudo_type_info__V_69_69;
#line 116 "ll_pseudo_type_info.m"
            MR_Word ll_backend__ll_pseudo_type_info__V_70_70;
#line 116 "ll_pseudo_type_info.m"
            MR_Word ll_backend__ll_pseudo_type_info__V_71_71;

#line 117 "ll_pseudo_type_info.m"
            {
#line 117 "ll_pseudo_type_info.m"
              ll_backend__ll_pseudo_type_info__V_70_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 117 "ll_pseudo_type_info.m"
              MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__V_70_70, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
#line 117 "ll_pseudo_type_info.m"
              MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__V_70_70, 1) = ((MR_Box) (ll_backend__ll_pseudo_type_info__TI_22));
#line 117 "ll_pseudo_type_info.m"
            }
#line 117 "ll_pseudo_type_info.m"
            {
#line 117 "ll_pseudo_type_info.m"
              ll_backend__ll_pseudo_type_info__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 117 "ll_pseudo_type_info.m"
              MR_hl_field(MR_mktag(0), ll_backend__ll_pseudo_type_info__V_69_69, 0) = ((MR_Box) (ll_backend__ll_pseudo_type_info__RttiTypeCtor_57));
#line 117 "ll_pseudo_type_info.m"
              MR_hl_field(MR_mktag(0), ll_backend__ll_pseudo_type_info__V_69_69, 1) = ((MR_Box) (ll_backend__ll_pseudo_type_info__V_70_70));
#line 117 "ll_pseudo_type_info.m"
            }
#line 117 "ll_pseudo_type_info.m"
            {
#line 117 "ll_pseudo_type_info.m"
              ll_backend__ll_pseudo_type_info__DataId_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 117 "ll_pseudo_type_info.m"
              MR_hl_field(MR_mktag(0), ll_backend__ll_pseudo_type_info__DataId_58, 0) = ((MR_Box) (ll_backend__ll_pseudo_type_info__V_69_69));
#line 117 "ll_pseudo_type_info.m"
            }
#line 119 "ll_pseudo_type_info.m"
            {
#line 119 "ll_pseudo_type_info.m"
              ll_backend__ll_pseudo_type_info__V_71_71 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 119 "ll_pseudo_type_info.m"
              MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__V_71_71, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 119 "ll_pseudo_type_info.m"
              MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__V_71_71, 1) = ((MR_Box) (ll_backend__ll_pseudo_type_info__DataId_58));
#line 119 "ll_pseudo_type_info.m"
              MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__V_71_71, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 119 "ll_pseudo_type_info.m"
            }
#line 119 "ll_pseudo_type_info.m"
            {
#line 119 "ll_pseudo_type_info.m"
              MR_Word base;
#line 119 "ll_pseudo_type_info.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 119 "ll_pseudo_type_info.m"
              *ll_backend__ll_pseudo_type_info__HeadVar__2_35 = base;
#line 119 "ll_pseudo_type_info.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 119 "ll_pseudo_type_info.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__ll_pseudo_type_info__V_71_71));
#line 119 "ll_pseudo_type_info.m"
            }
#line 120 "ll_pseudo_type_info.m"
            *ll_backend__ll_pseudo_type_info__HeadVar__4_37 = ll_backend__ll_pseudo_type_info__HeadVar__3_36;
#line 116 "ll_pseudo_type_info.m"
          }
#line 116 "ll_pseudo_type_info.m"
        else
#line 116 "ll_pseudo_type_info.m"
          if (((MR_tag((MR_Word) ll_backend__ll_pseudo_type_info__TI_22)) == (MR_mktag((MR_Integer) 1))))
#line 122 "ll_pseudo_type_info.m"
            {
#line 122 "ll_pseudo_type_info.m"
              MR_Word ll_backend__ll_pseudo_type_info__Args_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__ll_pseudo_type_info__TI_22, (MR_Integer) 1)));
#line 122 "ll_pseudo_type_info.m"
              MR_Word ll_backend__ll_pseudo_type_info__RttiTypeCtor_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__ll_pseudo_type_info__TI_22, (MR_Integer) 0)));
#line 123 "ll_pseudo_type_info.m"
              MR_Word ll_backend__ll_pseudo_type_info___LldsType_77;

#line 123 "ll_pseudo_type_info.m"
              {
#line 123 "ll_pseudo_type_info.m"
                ll_backend__ll_pseudo_type_info__convert_compound_type_info_7_p_0(ll_backend__ll_pseudo_type_info__RttiTypeCtor_73, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__ll_pseudo_type_info__Args_59, ll_backend__ll_pseudo_type_info__HeadVar__3_36, ll_backend__ll_pseudo_type_info__HeadVar__4_37, ll_backend__ll_pseudo_type_info__HeadVar__2_35, &ll_backend__ll_pseudo_type_info___LldsType_77);
              }
#line 122 "ll_pseudo_type_info.m"
            }
#line 116 "ll_pseudo_type_info.m"
          else
#line 126 "ll_pseudo_type_info.m"
            {
#line 126 "ll_pseudo_type_info.m"
              MR_Word ll_backend__ll_pseudo_type_info__VarArityId_60 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__ll_pseudo_type_info__TI_22, (MR_Integer) 0)));
#line 126 "ll_pseudo_type_info.m"
              MR_Integer ll_backend__ll_pseudo_type_info__Arity_61;
#line 126 "ll_pseudo_type_info.m"
              MR_Word ll_backend__ll_pseudo_type_info__ArityArg_62;
#line 126 "ll_pseudo_type_info.m"
              MR_Word ll_backend__ll_pseudo_type_info__V_63_63;
#line 126 "ll_pseudo_type_info.m"
              MR_Word ll_backend__ll_pseudo_type_info__V_64_64;
#line 126 "ll_pseudo_type_info.m"
              MR_Word ll_backend__ll_pseudo_type_info__RttiTypeCtor_74;
#line 126 "ll_pseudo_type_info.m"
              MR_Word ll_backend__ll_pseudo_type_info__Args_75 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__ll_pseudo_type_info__TI_22, (MR_Integer) 1)));
#line 130 "ll_pseudo_type_info.m"
              MR_Word ll_backend__ll_pseudo_type_info___LldsType_79;

#line 127 "ll_pseudo_type_info.m"
              {
#line 127 "ll_pseudo_type_info.m"
                mercury__list__length_2_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_info_0, ll_backend__ll_pseudo_type_info__Args_75, &ll_backend__ll_pseudo_type_info__Arity_61);
              }
#line 128 "ll_pseudo_type_info.m"
              {
#line 128 "ll_pseudo_type_info.m"
                ll_backend__ll_pseudo_type_info__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 128 "ll_pseudo_type_info.m"
                MR_hl_field(MR_mktag(1), ll_backend__ll_pseudo_type_info__V_63_63, 0) = ((MR_Box) (ll_backend__ll_pseudo_type_info__Arity_61));
#line 128 "ll_pseudo_type_info.m"
              }
#line 128 "ll_pseudo_type_info.m"
              {
#line 128 "ll_pseudo_type_info.m"
                ll_backend__ll_pseudo_type_info__ArityArg_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 128 "ll_pseudo_type_info.m"
                MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__ArityArg_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 128 "ll_pseudo_type_info.m"
                MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__ArityArg_62, 1) = ((MR_Box) (ll_backend__ll_pseudo_type_info__V_63_63));
#line 128 "ll_pseudo_type_info.m"
              }
#line 129 "ll_pseudo_type_info.m"
              {
#line 129 "ll_pseudo_type_info.m"
                ll_backend__ll_pseudo_type_info__RttiTypeCtor_74 = backend_libs__rtti__var_arity_id_to_rtti_type_ctor_1_f_0(ll_backend__ll_pseudo_type_info__VarArityId_60);
              }
#line 130 "ll_pseudo_type_info.m"
              {
#line 130 "ll_pseudo_type_info.m"
                ll_backend__ll_pseudo_type_info__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 130 "ll_pseudo_type_info.m"
                MR_hl_field(MR_mktag(1), ll_backend__ll_pseudo_type_info__V_64_64, 0) = ((MR_Box) (ll_backend__ll_pseudo_type_info__ArityArg_62));
#line 130 "ll_pseudo_type_info.m"
                MR_hl_field(MR_mktag(1), ll_backend__ll_pseudo_type_info__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 130 "ll_pseudo_type_info.m"
              }
#line 130 "ll_pseudo_type_info.m"
              {
#line 130 "ll_pseudo_type_info.m"
                ll_backend__ll_pseudo_type_info__convert_compound_type_info_7_p_0(ll_backend__ll_pseudo_type_info__RttiTypeCtor_74, ll_backend__ll_pseudo_type_info__V_64_64, ll_backend__ll_pseudo_type_info__Args_75, ll_backend__ll_pseudo_type_info__HeadVar__3_36, ll_backend__ll_pseudo_type_info__HeadVar__4_37, ll_backend__ll_pseudo_type_info__HeadVar__2_35, &ll_backend__ll_pseudo_type_info___LldsType_79);
              }
#line 126 "ll_pseudo_type_info.m"
            }
#line 150 "ll_pseudo_type_info.m"
      }
#line 149 "ll_pseudo_type_info.m"
    else
#line 147 "ll_pseudo_type_info.m"
      {
#line 147 "ll_pseudo_type_info.m"
        MR_Word ll_backend__ll_pseudo_type_info__PTI_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__ll_pseudo_type_info__HeadVar__1_34, (MR_Integer) 0)));
#line 148 "ll_pseudo_type_info.m"
        MR_Word ll_backend__ll_pseudo_type_info___LldsType_21;

#line 148 "ll_pseudo_type_info.m"
        {
#line 148 "ll_pseudo_type_info.m"
          ll_backend__ll_pseudo_type_info__convert_pseudo_type_info_5_p_0(ll_backend__ll_pseudo_type_info__PTI_20, ll_backend__ll_pseudo_type_info__HeadVar__3_36, ll_backend__ll_pseudo_type_info__HeadVar__4_37, ll_backend__ll_pseudo_type_info__HeadVar__2_35, &ll_backend__ll_pseudo_type_info___LldsType_21);
        }
#line 147 "ll_pseudo_type_info.m"
      }
#line 149 "ll_pseudo_type_info.m"
  }
#line 149 "ll_pseudo_type_info.m"
}

#line 171 "ll_pseudo_type_info.m"
static void MR_CALL 
ll_backend__ll_pseudo_type_info__convert_compound_type_info_7_p_0_1(
#line 171 "ll_pseudo_type_info.m"
  MR_Box ll_backend__ll_pseudo_type_info__closure_arg,
#line 171 "ll_pseudo_type_info.m"
  MR_Box ll_backend__ll_pseudo_type_info__wrapper_arg_1,
#line 171 "ll_pseudo_type_info.m"
  MR_Box * ll_backend__ll_pseudo_type_info__wrapper_arg_2,
#line 171 "ll_pseudo_type_info.m"
  MR_Box ll_backend__ll_pseudo_type_info__wrapper_arg_3,
#line 171 "ll_pseudo_type_info.m"
  MR_Box * ll_backend__ll_pseudo_type_info__wrapper_arg_4)
#line 171 "ll_pseudo_type_info.m"
{
#line 171 "ll_pseudo_type_info.m"
  {
#line 171 "ll_pseudo_type_info.m"
    MR_Box ll_backend__ll_pseudo_type_info__closure = ll_backend__ll_pseudo_type_info__closure_arg;
#line 171 "ll_pseudo_type_info.m"
    MR_Word ll_backend__ll_pseudo_type_info__conv1_HeadVar__2_34;
#line 171 "ll_pseudo_type_info.m"
    MR_Word ll_backend__ll_pseudo_type_info__conv0_HeadVar__4_36;

#line 171 "ll_pseudo_type_info.m"
    {
#line 171 "ll_pseudo_type_info.m"
      ll_backend__ll_pseudo_type_info__IntroducedFrom__pred__convert_compound_type_info__172__1_4_p_0(((MR_Word) ll_backend__ll_pseudo_type_info__wrapper_arg_1), &ll_backend__ll_pseudo_type_info__conv1_HeadVar__2_34, ((MR_Word) ll_backend__ll_pseudo_type_info__wrapper_arg_3), &ll_backend__ll_pseudo_type_info__conv0_HeadVar__4_36);
    }
#line 171 "ll_pseudo_type_info.m"
    *ll_backend__ll_pseudo_type_info__wrapper_arg_2 = ((MR_Box) (ll_backend__ll_pseudo_type_info__conv1_HeadVar__2_34));
#line 171 "ll_pseudo_type_info.m"
    *ll_backend__ll_pseudo_type_info__wrapper_arg_4 = ((MR_Box) (ll_backend__ll_pseudo_type_info__conv0_HeadVar__4_36));
#line 171 "ll_pseudo_type_info.m"
  }
#line 171 "ll_pseudo_type_info.m"
}

#line 159 "ll_pseudo_type_info.m"
static void MR_CALL 
ll_backend__ll_pseudo_type_info__convert_compound_type_info_7_p_0(
#line 159 "ll_pseudo_type_info.m"
  MR_Word ll_backend__ll_pseudo_type_info__RttiTypeCtor_8,
#line 159 "ll_pseudo_type_info.m"
  MR_Word ll_backend__ll_pseudo_type_info__ArgRvals0_9,
#line 159 "ll_pseudo_type_info.m"
  MR_Word ll_backend__ll_pseudo_type_info__Args_10,
#line 159 "ll_pseudo_type_info.m"
  MR_Word ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_0_25,
#line 159 "ll_pseudo_type_info.m"
  MR_Word * ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_26,
#line 159 "ll_pseudo_type_info.m"
  MR_Word * ll_backend__ll_pseudo_type_info__Rval_12,
#line 159 "ll_pseudo_type_info.m"
  MR_Word * ll_backend__ll_pseudo_type_info__LldsType_13)
#line 159 "ll_pseudo_type_info.m"
{
#line 164 "ll_pseudo_type_info.m"
  {
#line 164 "ll_pseudo_type_info.m"
    MR_bool ll_backend__ll_pseudo_type_info__succeeded;
#line 164 "ll_pseudo_type_info.m"
    MR_Word ll_backend__ll_pseudo_type_info__TypeCtorInfo_46_46;
#line 164 "ll_pseudo_type_info.m"
    MR_Word ll_backend__ll_pseudo_type_info__TypeCtorInfoData_14;
#line 164 "ll_pseudo_type_info.m"
    MR_Word ll_backend__ll_pseudo_type_info__TypeCtorInfoDataId_15;
#line 164 "ll_pseudo_type_info.m"
    MR_Word ll_backend__ll_pseudo_type_info__TypeCtorInfoRval_16;
#line 164 "ll_pseudo_type_info.m"
    MR_Word ll_backend__ll_pseudo_type_info__ArgRvals1_22;
#line 164 "ll_pseudo_type_info.m"
    MR_Word ll_backend__ll_pseudo_type_info__ArgRvals_23;
#line 164 "ll_pseudo_type_info.m"
    MR_Word ll_backend__ll_pseudo_type_info__DataId_24;
#line 164 "ll_pseudo_type_info.m"
    MR_Word ll_backend__ll_pseudo_type_info__V_27_27 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) ll_backend__ll_pseudo_type_info__RttiTypeCtor_8);
#line 164 "ll_pseudo_type_info.m"
    MR_Word ll_backend__ll_pseudo_type_info__V_28_28;
#line 164 "ll_pseudo_type_info.m"
    MR_Word ll_backend__ll_pseudo_type_info__V_29_29;
#line 164 "ll_pseudo_type_info.m"
    MR_Word ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_32_32;
#line 164 "ll_pseudo_type_info.m"
    MR_Word ll_backend__ll_pseudo_type_info__V_37_37;
#line 164 "ll_pseudo_type_info.m"
    MR_Word ll_backend__ll_pseudo_type_info__V_39_39;
#line 171 "ll_pseudo_type_info.m"
    MR_Box ll_backend__ll_pseudo_type_info__conv2_STATE_VARIABLE_StaticCellInfo_32_32;

#line 165 "ll_pseudo_type_info.m"
    {
#line 165 "ll_pseudo_type_info.m"
      ll_backend__ll_pseudo_type_info__TypeCtorInfoData_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 165 "ll_pseudo_type_info.m"
      MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__TypeCtorInfoData_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
#line 165 "ll_pseudo_type_info.m"
      MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__TypeCtorInfoData_14, 1) = ((MR_Box) (ll_backend__ll_pseudo_type_info__V_27_27));
#line 165 "ll_pseudo_type_info.m"
    }
#line 167 "ll_pseudo_type_info.m"
    {
#line 167 "ll_pseudo_type_info.m"
      ll_backend__ll_pseudo_type_info__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 167 "ll_pseudo_type_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__ll_pseudo_type_info__V_28_28, 0) = ((MR_Box) (ll_backend__ll_pseudo_type_info__RttiTypeCtor_8));
#line 167 "ll_pseudo_type_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__ll_pseudo_type_info__V_28_28, 1) = ((MR_Box) (ll_backend__ll_pseudo_type_info__TypeCtorInfoData_14));
#line 167 "ll_pseudo_type_info.m"
    }
#line 167 "ll_pseudo_type_info.m"
    {
#line 167 "ll_pseudo_type_info.m"
      ll_backend__ll_pseudo_type_info__TypeCtorInfoDataId_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 167 "ll_pseudo_type_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__ll_pseudo_type_info__TypeCtorInfoDataId_15, 0) = ((MR_Box) (ll_backend__ll_pseudo_type_info__V_28_28));
#line 167 "ll_pseudo_type_info.m"
    }
#line 169 "ll_pseudo_type_info.m"
    {
#line 169 "ll_pseudo_type_info.m"
      ll_backend__ll_pseudo_type_info__V_29_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 169 "ll_pseudo_type_info.m"
      MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__V_29_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 169 "ll_pseudo_type_info.m"
      MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__V_29_29, 1) = ((MR_Box) (ll_backend__ll_pseudo_type_info__TypeCtorInfoDataId_15));
#line 169 "ll_pseudo_type_info.m"
      MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__V_29_29, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 169 "ll_pseudo_type_info.m"
    }
#line 169 "ll_pseudo_type_info.m"
    {
#line 169 "ll_pseudo_type_info.m"
      ll_backend__ll_pseudo_type_info__TypeCtorInfoRval_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 169 "ll_pseudo_type_info.m"
      MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__TypeCtorInfoRval_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 169 "ll_pseudo_type_info.m"
      MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__TypeCtorInfoRval_16, 1) = ((MR_Box) (ll_backend__ll_pseudo_type_info__V_29_29));
#line 169 "ll_pseudo_type_info.m"
    }
#line 170 "ll_pseudo_type_info.m"
    *ll_backend__ll_pseudo_type_info__LldsType_13 = (MR_Integer) 11;
#line 841 "ll_backend.ll_pseudo_type_info.c"
    ll_backend__ll_pseudo_type_info__TypeCtorInfo_46_46 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0;
#line 171 "ll_pseudo_type_info.m"
    {
#line 171 "ll_pseudo_type_info.m"
      mercury__list__map_foldl_5_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_info_0, ll_backend__ll_pseudo_type_info__TypeCtorInfo_46_46, (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_info_0, (MR_Word) &ll_backend__ll_pseudo_type_info_scalar_common_2[1], ll_backend__ll_pseudo_type_info__Args_10, &ll_backend__ll_pseudo_type_info__ArgRvals1_22, ((MR_Box) (ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_0_25)), &ll_backend__ll_pseudo_type_info__conv2_STATE_VARIABLE_StaticCellInfo_32_32);
    }
#line 171 "ll_pseudo_type_info.m"
    ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_32_32 = ((MR_Word) ll_backend__ll_pseudo_type_info__conv2_STATE_VARIABLE_StaticCellInfo_32_32);
#line 174 "ll_pseudo_type_info.m"
    {
#line 174 "ll_pseudo_type_info.m"
      mercury__list__append_3_p_1(ll_backend__ll_pseudo_type_info__TypeCtorInfo_46_46, ll_backend__ll_pseudo_type_info__ArgRvals0_9, ll_backend__ll_pseudo_type_info__ArgRvals1_22, &ll_backend__ll_pseudo_type_info__ArgRvals_23);
    }
#line 175 "ll_pseudo_type_info.m"
    {
#line 175 "ll_pseudo_type_info.m"
      ll_backend__ll_pseudo_type_info__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 175 "ll_pseudo_type_info.m"
      MR_hl_field(MR_mktag(1), ll_backend__ll_pseudo_type_info__V_37_37, 0) = ((MR_Box) (ll_backend__ll_pseudo_type_info__TypeCtorInfoRval_16));
#line 175 "ll_pseudo_type_info.m"
      MR_hl_field(MR_mktag(1), ll_backend__ll_pseudo_type_info__V_37_37, 1) = ((MR_Box) (ll_backend__ll_pseudo_type_info__ArgRvals_23));
#line 175 "ll_pseudo_type_info.m"
    }
#line 175 "ll_pseudo_type_info.m"
    {
#line 175 "ll_pseudo_type_info.m"
      ll_backend__global_data__add_scalar_static_cell_natural_types_4_p_0(ll_backend__ll_pseudo_type_info__V_37_37, &ll_backend__ll_pseudo_type_info__DataId_24, ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_32_32, ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_26);
    }
#line 177 "ll_pseudo_type_info.m"
    {
#line 177 "ll_pseudo_type_info.m"
      ll_backend__ll_pseudo_type_info__V_39_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 177 "ll_pseudo_type_info.m"
      MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__V_39_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 177 "ll_pseudo_type_info.m"
      MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__V_39_39, 1) = ((MR_Box) (ll_backend__ll_pseudo_type_info__DataId_24));
#line 177 "ll_pseudo_type_info.m"
      MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__V_39_39, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 177 "ll_pseudo_type_info.m"
    }
#line 177 "ll_pseudo_type_info.m"
    {
#line 177 "ll_pseudo_type_info.m"
      MR_Word base;
#line 177 "ll_pseudo_type_info.m"
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 177 "ll_pseudo_type_info.m"
      *ll_backend__ll_pseudo_type_info__Rval_12 = base;
#line 177 "ll_pseudo_type_info.m"
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 177 "ll_pseudo_type_info.m"
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__ll_pseudo_type_info__V_39_39));
#line 177 "ll_pseudo_type_info.m"
    }
#line 164 "ll_pseudo_type_info.m"
  }
#line 159 "ll_pseudo_type_info.m"
}

#line 145 "ll_pseudo_type_info.m"
static void MR_CALL 
ll_backend__ll_pseudo_type_info__convert_compound_pseudo_type_info_7_p_0_1(
#line 145 "ll_pseudo_type_info.m"
  MR_Box ll_backend__ll_pseudo_type_info__closure_arg,
#line 145 "ll_pseudo_type_info.m"
  MR_Box ll_backend__ll_pseudo_type_info__wrapper_arg_1,
#line 145 "ll_pseudo_type_info.m"
  MR_Box * ll_backend__ll_pseudo_type_info__wrapper_arg_2,
#line 145 "ll_pseudo_type_info.m"
  MR_Box ll_backend__ll_pseudo_type_info__wrapper_arg_3,
#line 145 "ll_pseudo_type_info.m"
  MR_Box * ll_backend__ll_pseudo_type_info__wrapper_arg_4)
#line 145 "ll_pseudo_type_info.m"
{
#line 145 "ll_pseudo_type_info.m"
  {
#line 145 "ll_pseudo_type_info.m"
    MR_Box ll_backend__ll_pseudo_type_info__closure = ll_backend__ll_pseudo_type_info__closure_arg;
#line 145 "ll_pseudo_type_info.m"
    MR_Word ll_backend__ll_pseudo_type_info__conv1_HeadVar__2_35;
#line 145 "ll_pseudo_type_info.m"
    MR_Word ll_backend__ll_pseudo_type_info__conv0_HeadVar__4_37;

#line 145 "ll_pseudo_type_info.m"
    {
#line 145 "ll_pseudo_type_info.m"
      ll_backend__ll_pseudo_type_info__IntroducedFrom__pred__convert_compound_pseudo_type_info__149__1_4_p_0(((MR_Word) ll_backend__ll_pseudo_type_info__wrapper_arg_1), &ll_backend__ll_pseudo_type_info__conv1_HeadVar__2_35, ((MR_Word) ll_backend__ll_pseudo_type_info__wrapper_arg_3), &ll_backend__ll_pseudo_type_info__conv0_HeadVar__4_37);
    }
#line 145 "ll_pseudo_type_info.m"
    *ll_backend__ll_pseudo_type_info__wrapper_arg_2 = ((MR_Box) (ll_backend__ll_pseudo_type_info__conv1_HeadVar__2_35));
#line 145 "ll_pseudo_type_info.m"
    *ll_backend__ll_pseudo_type_info__wrapper_arg_4 = ((MR_Box) (ll_backend__ll_pseudo_type_info__conv0_HeadVar__4_37));
#line 145 "ll_pseudo_type_info.m"
  }
#line 145 "ll_pseudo_type_info.m"
}

#line 134 "ll_pseudo_type_info.m"
static void MR_CALL 
ll_backend__ll_pseudo_type_info__convert_compound_pseudo_type_info_7_p_0(
#line 134 "ll_pseudo_type_info.m"
  MR_Word ll_backend__ll_pseudo_type_info__RttiTypeCtor_8,
#line 134 "ll_pseudo_type_info.m"
  MR_Word ll_backend__ll_pseudo_type_info__ArgRvals0_9,
#line 134 "ll_pseudo_type_info.m"
  MR_Word ll_backend__ll_pseudo_type_info__Args_10,
#line 134 "ll_pseudo_type_info.m"
  MR_Word ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_0_26,
#line 134 "ll_pseudo_type_info.m"
  MR_Word * ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_27,
#line 134 "ll_pseudo_type_info.m"
  MR_Word * ll_backend__ll_pseudo_type_info__Rval_12,
#line 134 "ll_pseudo_type_info.m"
  MR_Word * ll_backend__ll_pseudo_type_info__LldsType_13)
#line 134 "ll_pseudo_type_info.m"
{
#line 140 "ll_pseudo_type_info.m"
  {
#line 140 "ll_pseudo_type_info.m"
    MR_bool ll_backend__ll_pseudo_type_info__succeeded;
#line 140 "ll_pseudo_type_info.m"
    MR_Word ll_backend__ll_pseudo_type_info__TypeCtorInfo_49_49;
#line 140 "ll_pseudo_type_info.m"
    MR_Word ll_backend__ll_pseudo_type_info__TypeCtorInfoDataId_14;
#line 140 "ll_pseudo_type_info.m"
    MR_Word ll_backend__ll_pseudo_type_info__TypeCtorInfoRval_15;
#line 140 "ll_pseudo_type_info.m"
    MR_Word ll_backend__ll_pseudo_type_info__ArgRvals1_23;
#line 140 "ll_pseudo_type_info.m"
    MR_Word ll_backend__ll_pseudo_type_info__ArgRvals_24;
#line 140 "ll_pseudo_type_info.m"
    MR_Word ll_backend__ll_pseudo_type_info__DataId_25;
#line 140 "ll_pseudo_type_info.m"
    MR_Word ll_backend__ll_pseudo_type_info__V_28_28;
#line 140 "ll_pseudo_type_info.m"
    MR_Word ll_backend__ll_pseudo_type_info__V_30_30;
#line 140 "ll_pseudo_type_info.m"
    MR_Word ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_33_33;
#line 140 "ll_pseudo_type_info.m"
    MR_Word ll_backend__ll_pseudo_type_info__V_38_38;
#line 140 "ll_pseudo_type_info.m"
    MR_Word ll_backend__ll_pseudo_type_info__V_40_40;
#line 145 "ll_pseudo_type_info.m"
    MR_Box ll_backend__ll_pseudo_type_info__conv2_STATE_VARIABLE_StaticCellInfo_33_33;

#line 141 "ll_pseudo_type_info.m"
    {
#line 141 "ll_pseudo_type_info.m"
      ll_backend__ll_pseudo_type_info__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 141 "ll_pseudo_type_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__ll_pseudo_type_info__V_28_28, 0) = ((MR_Box) (ll_backend__ll_pseudo_type_info__RttiTypeCtor_8));
#line 141 "ll_pseudo_type_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__ll_pseudo_type_info__V_28_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16))));
#line 141 "ll_pseudo_type_info.m"
    }
#line 141 "ll_pseudo_type_info.m"
    {
#line 141 "ll_pseudo_type_info.m"
      ll_backend__ll_pseudo_type_info__TypeCtorInfoDataId_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 141 "ll_pseudo_type_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__ll_pseudo_type_info__TypeCtorInfoDataId_14, 0) = ((MR_Box) (ll_backend__ll_pseudo_type_info__V_28_28));
#line 141 "ll_pseudo_type_info.m"
    }
#line 143 "ll_pseudo_type_info.m"
    {
#line 143 "ll_pseudo_type_info.m"
      ll_backend__ll_pseudo_type_info__V_30_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 143 "ll_pseudo_type_info.m"
      MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__V_30_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 143 "ll_pseudo_type_info.m"
      MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__V_30_30, 1) = ((MR_Box) (ll_backend__ll_pseudo_type_info__TypeCtorInfoDataId_14));
#line 143 "ll_pseudo_type_info.m"
      MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__V_30_30, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 143 "ll_pseudo_type_info.m"
    }
#line 143 "ll_pseudo_type_info.m"
    {
#line 143 "ll_pseudo_type_info.m"
      ll_backend__ll_pseudo_type_info__TypeCtorInfoRval_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 143 "ll_pseudo_type_info.m"
      MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__TypeCtorInfoRval_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 143 "ll_pseudo_type_info.m"
      MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__TypeCtorInfoRval_15, 1) = ((MR_Box) (ll_backend__ll_pseudo_type_info__V_30_30));
#line 143 "ll_pseudo_type_info.m"
    }
#line 144 "ll_pseudo_type_info.m"
    *ll_backend__ll_pseudo_type_info__LldsType_13 = (MR_Integer) 11;
#line 1029 "ll_backend.ll_pseudo_type_info.c"
    ll_backend__ll_pseudo_type_info__TypeCtorInfo_49_49 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0;
#line 145 "ll_pseudo_type_info.m"
    {
#line 145 "ll_pseudo_type_info.m"
      mercury__list__map_foldl_5_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0, ll_backend__ll_pseudo_type_info__TypeCtorInfo_49_49, (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_info_0, (MR_Word) &ll_backend__ll_pseudo_type_info_scalar_common_2[0], ll_backend__ll_pseudo_type_info__Args_10, &ll_backend__ll_pseudo_type_info__ArgRvals1_23, ((MR_Box) (ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_0_26)), &ll_backend__ll_pseudo_type_info__conv2_STATE_VARIABLE_StaticCellInfo_33_33);
    }
#line 145 "ll_pseudo_type_info.m"
    ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_33_33 = ((MR_Word) ll_backend__ll_pseudo_type_info__conv2_STATE_VARIABLE_StaticCellInfo_33_33);
#line 154 "ll_pseudo_type_info.m"
    {
#line 154 "ll_pseudo_type_info.m"
      mercury__list__append_3_p_1(ll_backend__ll_pseudo_type_info__TypeCtorInfo_49_49, ll_backend__ll_pseudo_type_info__ArgRvals0_9, ll_backend__ll_pseudo_type_info__ArgRvals1_23, &ll_backend__ll_pseudo_type_info__ArgRvals_24);
    }
#line 155 "ll_pseudo_type_info.m"
    {
#line 155 "ll_pseudo_type_info.m"
      ll_backend__ll_pseudo_type_info__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 155 "ll_pseudo_type_info.m"
      MR_hl_field(MR_mktag(1), ll_backend__ll_pseudo_type_info__V_38_38, 0) = ((MR_Box) (ll_backend__ll_pseudo_type_info__TypeCtorInfoRval_15));
#line 155 "ll_pseudo_type_info.m"
      MR_hl_field(MR_mktag(1), ll_backend__ll_pseudo_type_info__V_38_38, 1) = ((MR_Box) (ll_backend__ll_pseudo_type_info__ArgRvals_24));
#line 155 "ll_pseudo_type_info.m"
    }
#line 155 "ll_pseudo_type_info.m"
    {
#line 155 "ll_pseudo_type_info.m"
      ll_backend__global_data__add_scalar_static_cell_natural_types_4_p_0(ll_backend__ll_pseudo_type_info__V_38_38, &ll_backend__ll_pseudo_type_info__DataId_25, ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_33_33, ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_27);
    }
#line 157 "ll_pseudo_type_info.m"
    {
#line 157 "ll_pseudo_type_info.m"
      ll_backend__ll_pseudo_type_info__V_40_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 157 "ll_pseudo_type_info.m"
      MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__V_40_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 157 "ll_pseudo_type_info.m"
      MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__V_40_40, 1) = ((MR_Box) (ll_backend__ll_pseudo_type_info__DataId_25));
#line 157 "ll_pseudo_type_info.m"
      MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__V_40_40, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 157 "ll_pseudo_type_info.m"
    }
#line 157 "ll_pseudo_type_info.m"
    {
#line 157 "ll_pseudo_type_info.m"
      MR_Word base;
#line 157 "ll_pseudo_type_info.m"
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 157 "ll_pseudo_type_info.m"
      *ll_backend__ll_pseudo_type_info__Rval_12 = base;
#line 157 "ll_pseudo_type_info.m"
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 157 "ll_pseudo_type_info.m"
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__ll_pseudo_type_info__V_40_40));
#line 157 "ll_pseudo_type_info.m"
    }
#line 140 "ll_pseudo_type_info.m"
  }
#line 134 "ll_pseudo_type_info.m"
}

#line 82 "ll_pseudo_type_info.m"
static void MR_CALL 
ll_backend__ll_pseudo_type_info__convert_pseudo_type_info_5_p_0(
#line 82 "ll_pseudo_type_info.m"
  MR_Word ll_backend__ll_pseudo_type_info__Pseudo_6,
#line 82 "ll_pseudo_type_info.m"
  MR_Word ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_0_17,
#line 82 "ll_pseudo_type_info.m"
  MR_Word * ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_18,
#line 82 "ll_pseudo_type_info.m"
  MR_Word * ll_backend__ll_pseudo_type_info__Rval_8,
#line 82 "ll_pseudo_type_info.m"
  MR_Word * ll_backend__ll_pseudo_type_info__LldsType_9)
#line 82 "ll_pseudo_type_info.m"
{
#line 88 "ll_pseudo_type_info.m"
  {
#line 88 "ll_pseudo_type_info.m"
    MR_bool ll_backend__ll_pseudo_type_info__succeeded;

#line 88 "ll_pseudo_type_info.m"
    if (((MR_tag((MR_Word) ll_backend__ll_pseudo_type_info__Pseudo_6)) == (MR_mktag((MR_Integer) 0))))
#line 92 "ll_pseudo_type_info.m"
      {
#line 92 "ll_pseudo_type_info.m"
        MR_Word ll_backend__ll_pseudo_type_info__RttiTypeCtor_11 = (MR_Word) MR_body(((MR_Word) ll_backend__ll_pseudo_type_info__Pseudo_6), (MR_Integer) 0);
#line 92 "ll_pseudo_type_info.m"
        MR_Word ll_backend__ll_pseudo_type_info__DataId_12;
#line 92 "ll_pseudo_type_info.m"
        MR_Word ll_backend__ll_pseudo_type_info__V_25_25;
#line 92 "ll_pseudo_type_info.m"
        MR_Word ll_backend__ll_pseudo_type_info__V_26_26;
#line 92 "ll_pseudo_type_info.m"
        MR_Word ll_backend__ll_pseudo_type_info__V_27_27;

#line 94 "ll_pseudo_type_info.m"
        {
#line 94 "ll_pseudo_type_info.m"
          ll_backend__ll_pseudo_type_info__V_26_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 94 "ll_pseudo_type_info.m"
          MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__V_26_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
#line 94 "ll_pseudo_type_info.m"
          MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__V_26_26, 1) = ((MR_Box) (ll_backend__ll_pseudo_type_info__Pseudo_6));
#line 94 "ll_pseudo_type_info.m"
        }
#line 93 "ll_pseudo_type_info.m"
        {
#line 93 "ll_pseudo_type_info.m"
          ll_backend__ll_pseudo_type_info__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 93 "ll_pseudo_type_info.m"
          MR_hl_field(MR_mktag(0), ll_backend__ll_pseudo_type_info__V_25_25, 0) = ((MR_Box) (ll_backend__ll_pseudo_type_info__RttiTypeCtor_11));
#line 93 "ll_pseudo_type_info.m"
          MR_hl_field(MR_mktag(0), ll_backend__ll_pseudo_type_info__V_25_25, 1) = ((MR_Box) (ll_backend__ll_pseudo_type_info__V_26_26));
#line 93 "ll_pseudo_type_info.m"
        }
#line 93 "ll_pseudo_type_info.m"
        {
#line 93 "ll_pseudo_type_info.m"
          ll_backend__ll_pseudo_type_info__DataId_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 93 "ll_pseudo_type_info.m"
          MR_hl_field(MR_mktag(0), ll_backend__ll_pseudo_type_info__DataId_12, 0) = ((MR_Box) (ll_backend__ll_pseudo_type_info__V_25_25));
#line 93 "ll_pseudo_type_info.m"
        }
#line 95 "ll_pseudo_type_info.m"
        {
#line 95 "ll_pseudo_type_info.m"
          ll_backend__ll_pseudo_type_info__V_27_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 95 "ll_pseudo_type_info.m"
          MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__V_27_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 95 "ll_pseudo_type_info.m"
          MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__V_27_27, 1) = ((MR_Box) (ll_backend__ll_pseudo_type_info__DataId_12));
#line 95 "ll_pseudo_type_info.m"
          MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__V_27_27, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 95 "ll_pseudo_type_info.m"
        }
#line 95 "ll_pseudo_type_info.m"
        {
#line 95 "ll_pseudo_type_info.m"
          MR_Word base;
#line 95 "ll_pseudo_type_info.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 95 "ll_pseudo_type_info.m"
          *ll_backend__ll_pseudo_type_info__Rval_8 = base;
#line 95 "ll_pseudo_type_info.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 95 "ll_pseudo_type_info.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__ll_pseudo_type_info__V_27_27));
#line 95 "ll_pseudo_type_info.m"
        }
#line 96 "ll_pseudo_type_info.m"
        *ll_backend__ll_pseudo_type_info__LldsType_9 = (MR_Integer) 11;
#line 96 "ll_pseudo_type_info.m"
        *ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_18 = ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_0_17;
#line 92 "ll_pseudo_type_info.m"
      }
#line 88 "ll_pseudo_type_info.m"
    else
#line 88 "ll_pseudo_type_info.m"
      if (((MR_tag((MR_Word) ll_backend__ll_pseudo_type_info__Pseudo_6)) == (MR_mktag((MR_Integer) 1))))
#line 98 "ll_pseudo_type_info.m"
        {
#line 98 "ll_pseudo_type_info.m"
          MR_Word ll_backend__ll_pseudo_type_info__Args_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__ll_pseudo_type_info__Pseudo_6, (MR_Integer) 1)));
#line 98 "ll_pseudo_type_info.m"
          MR_Word ll_backend__ll_pseudo_type_info__RttiTypeCtor_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__ll_pseudo_type_info__Pseudo_6, (MR_Integer) 0)));

#line 99 "ll_pseudo_type_info.m"
          {
#line 99 "ll_pseudo_type_info.m"
            ll_backend__ll_pseudo_type_info__convert_compound_pseudo_type_info_7_p_0(ll_backend__ll_pseudo_type_info__RttiTypeCtor_30, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__ll_pseudo_type_info__Args_13, ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_0_17, ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_18, ll_backend__ll_pseudo_type_info__Rval_8, ll_backend__ll_pseudo_type_info__LldsType_9);
#line 99 "ll_pseudo_type_info.m"
            return;
          }
#line 98 "ll_pseudo_type_info.m"
        }
#line 88 "ll_pseudo_type_info.m"
      else
#line 88 "ll_pseudo_type_info.m"
        if (((MR_tag((MR_Word) ll_backend__ll_pseudo_type_info__Pseudo_6)) == (MR_mktag((MR_Integer) 3))))
#line 88 "ll_pseudo_type_info.m"
          {
#line 88 "ll_pseudo_type_info.m"
            MR_Integer ll_backend__ll_pseudo_type_info__Int_10 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__Pseudo_6, (MR_Integer) 0)));
#line 88 "ll_pseudo_type_info.m"
            MR_Word ll_backend__ll_pseudo_type_info__V_29_29;

#line 89 "ll_pseudo_type_info.m"
            {
#line 89 "ll_pseudo_type_info.m"
              ll_backend__ll_pseudo_type_info__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 89 "ll_pseudo_type_info.m"
              MR_hl_field(MR_mktag(1), ll_backend__ll_pseudo_type_info__V_29_29, 0) = ((MR_Box) (ll_backend__ll_pseudo_type_info__Int_10));
#line 89 "ll_pseudo_type_info.m"
            }
#line 89 "ll_pseudo_type_info.m"
            {
#line 89 "ll_pseudo_type_info.m"
              MR_Word base;
#line 89 "ll_pseudo_type_info.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 89 "ll_pseudo_type_info.m"
              *ll_backend__ll_pseudo_type_info__Rval_8 = base;
#line 89 "ll_pseudo_type_info.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 89 "ll_pseudo_type_info.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__ll_pseudo_type_info__V_29_29));
#line 89 "ll_pseudo_type_info.m"
            }
#line 90 "ll_pseudo_type_info.m"
            *ll_backend__ll_pseudo_type_info__LldsType_9 = (MR_Integer) 7;
#line 90 "ll_pseudo_type_info.m"
            *ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_18 = ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_0_17;
#line 88 "ll_pseudo_type_info.m"
          }
#line 88 "ll_pseudo_type_info.m"
        else
#line 102 "ll_pseudo_type_info.m"
          {
#line 102 "ll_pseudo_type_info.m"
            MR_Word ll_backend__ll_pseudo_type_info__VarArityId_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__ll_pseudo_type_info__Pseudo_6, (MR_Integer) 0)));
#line 102 "ll_pseudo_type_info.m"
            MR_Integer ll_backend__ll_pseudo_type_info__Arity_15;
#line 102 "ll_pseudo_type_info.m"
            MR_Word ll_backend__ll_pseudo_type_info__ArityArg_16;
#line 102 "ll_pseudo_type_info.m"
            MR_Word ll_backend__ll_pseudo_type_info__V_19_19;
#line 102 "ll_pseudo_type_info.m"
            MR_Word ll_backend__ll_pseudo_type_info__V_20_20;
#line 102 "ll_pseudo_type_info.m"
            MR_Word ll_backend__ll_pseudo_type_info__RttiTypeCtor_31;
#line 102 "ll_pseudo_type_info.m"
            MR_Word ll_backend__ll_pseudo_type_info__Args_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__ll_pseudo_type_info__Pseudo_6, (MR_Integer) 1)));

#line 103 "ll_pseudo_type_info.m"
            {
#line 103 "ll_pseudo_type_info.m"
              mercury__list__length_2_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0, ll_backend__ll_pseudo_type_info__Args_32, &ll_backend__ll_pseudo_type_info__Arity_15);
            }
#line 104 "ll_pseudo_type_info.m"
            {
#line 104 "ll_pseudo_type_info.m"
              ll_backend__ll_pseudo_type_info__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 104 "ll_pseudo_type_info.m"
              MR_hl_field(MR_mktag(1), ll_backend__ll_pseudo_type_info__V_19_19, 0) = ((MR_Box) (ll_backend__ll_pseudo_type_info__Arity_15));
#line 104 "ll_pseudo_type_info.m"
            }
#line 104 "ll_pseudo_type_info.m"
            {
#line 104 "ll_pseudo_type_info.m"
              ll_backend__ll_pseudo_type_info__ArityArg_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 104 "ll_pseudo_type_info.m"
              MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__ArityArg_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 104 "ll_pseudo_type_info.m"
              MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__ArityArg_16, 1) = ((MR_Box) (ll_backend__ll_pseudo_type_info__V_19_19));
#line 104 "ll_pseudo_type_info.m"
            }
#line 105 "ll_pseudo_type_info.m"
            {
#line 105 "ll_pseudo_type_info.m"
              ll_backend__ll_pseudo_type_info__RttiTypeCtor_31 = backend_libs__rtti__var_arity_id_to_rtti_type_ctor_1_f_0(ll_backend__ll_pseudo_type_info__VarArityId_14);
            }
#line 106 "ll_pseudo_type_info.m"
            {
#line 106 "ll_pseudo_type_info.m"
              ll_backend__ll_pseudo_type_info__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 106 "ll_pseudo_type_info.m"
              MR_hl_field(MR_mktag(1), ll_backend__ll_pseudo_type_info__V_20_20, 0) = ((MR_Box) (ll_backend__ll_pseudo_type_info__ArityArg_16));
#line 106 "ll_pseudo_type_info.m"
              MR_hl_field(MR_mktag(1), ll_backend__ll_pseudo_type_info__V_20_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 106 "ll_pseudo_type_info.m"
            }
#line 106 "ll_pseudo_type_info.m"
            {
#line 106 "ll_pseudo_type_info.m"
              ll_backend__ll_pseudo_type_info__convert_compound_pseudo_type_info_7_p_0(ll_backend__ll_pseudo_type_info__RttiTypeCtor_31, ll_backend__ll_pseudo_type_info__V_20_20, ll_backend__ll_pseudo_type_info__Args_32, ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_0_17, ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_18, ll_backend__ll_pseudo_type_info__Rval_8, ll_backend__ll_pseudo_type_info__LldsType_9);
#line 106 "ll_pseudo_type_info.m"
              return;
            }
#line 102 "ll_pseudo_type_info.m"
          }
#line 88 "ll_pseudo_type_info.m"
  }
#line 82 "ll_pseudo_type_info.m"
}

#line 54 "ll_pseudo_type_info.m"
void MR_CALL 
ll_backend__ll_pseudo_type_info__construct_llds_pseudo_type_info_6_p_0(
#line 54 "ll_pseudo_type_info.m"
  MR_Word ll_backend__ll_pseudo_type_info__Type_7,
#line 54 "ll_pseudo_type_info.m"
  MR_Integer ll_backend__ll_pseudo_type_info__NumUnivQTvars_8,
#line 54 "ll_pseudo_type_info.m"
  MR_Word ll_backend__ll_pseudo_type_info__ExistQTvars_9,
#line 54 "ll_pseudo_type_info.m"
  MR_Word ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_0_13,
#line 54 "ll_pseudo_type_info.m"
  MR_Word * ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_14,
#line 54 "ll_pseudo_type_info.m"
  MR_Word * ll_backend__ll_pseudo_type_info__Pseudo_11)
#line 54 "ll_pseudo_type_info.m"
{
#line 73 "ll_pseudo_type_info.m"
  {
#line 73 "ll_pseudo_type_info.m"
    MR_bool ll_backend__ll_pseudo_type_info__succeeded;
#line 73 "ll_pseudo_type_info.m"
    MR_Word ll_backend__ll_pseudo_type_info___LldsType_12;

#line 73 "ll_pseudo_type_info.m"
    {
#line 73 "ll_pseudo_type_info.m"
      ll_backend__ll_pseudo_type_info__construct_typed_llds_pseudo_type_info_7_p_0(ll_backend__ll_pseudo_type_info__Type_7, ll_backend__ll_pseudo_type_info__NumUnivQTvars_8, ll_backend__ll_pseudo_type_info__ExistQTvars_9, ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_0_13, ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_14, ll_backend__ll_pseudo_type_info__Pseudo_11, &ll_backend__ll_pseudo_type_info___LldsType_12);
    }
#line 73 "ll_pseudo_type_info.m"
  }
#line 54 "ll_pseudo_type_info.m"
}

#line 47 "ll_pseudo_type_info.m"
void MR_CALL 
ll_backend__ll_pseudo_type_info__construct_typed_llds_pseudo_type_info_7_p_0(
#line 47 "ll_pseudo_type_info.m"
  MR_Word ll_backend__ll_pseudo_type_info__Type_8,
#line 47 "ll_pseudo_type_info.m"
  MR_Integer ll_backend__ll_pseudo_type_info__NumUnivQTvars_9,
#line 47 "ll_pseudo_type_info.m"
  MR_Word ll_backend__ll_pseudo_type_info__ExistQTvars_10,
#line 47 "ll_pseudo_type_info.m"
  MR_Word ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_0_15,
#line 47 "ll_pseudo_type_info.m"
  MR_Word * ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_16,
#line 47 "ll_pseudo_type_info.m"
  MR_Word * ll_backend__ll_pseudo_type_info__PseudoRval_12,
#line 47 "ll_pseudo_type_info.m"
  MR_Word * ll_backend__ll_pseudo_type_info__LldsType_13)
#line 47 "ll_pseudo_type_info.m"
{
#line 77 "ll_pseudo_type_info.m"
  {
#line 77 "ll_pseudo_type_info.m"
    MR_bool ll_backend__ll_pseudo_type_info__succeeded;
#line 77 "ll_pseudo_type_info.m"
    MR_Word ll_backend__ll_pseudo_type_info__Pseudo_14;

#line 78 "ll_pseudo_type_info.m"
    {
#line 78 "ll_pseudo_type_info.m"
      backend_libs__pseudo_type_info__construct_pseudo_type_info_4_p_0(ll_backend__ll_pseudo_type_info__Type_8, ll_backend__ll_pseudo_type_info__NumUnivQTvars_9, ll_backend__ll_pseudo_type_info__ExistQTvars_10, &ll_backend__ll_pseudo_type_info__Pseudo_14);
    }
#line 88 "ll_pseudo_type_info.m"
    if (((MR_tag((MR_Word) ll_backend__ll_pseudo_type_info__Pseudo_14)) == (MR_mktag((MR_Integer) 0))))
#line 92 "ll_pseudo_type_info.m"
      {
#line 92 "ll_pseudo_type_info.m"
        MR_Word ll_backend__ll_pseudo_type_info__RttiTypeCtor_25 = (MR_Word) MR_body(((MR_Word) ll_backend__ll_pseudo_type_info__Pseudo_14), (MR_Integer) 0);
#line 92 "ll_pseudo_type_info.m"
        MR_Word ll_backend__ll_pseudo_type_info__DataId_26;
#line 92 "ll_pseudo_type_info.m"
        MR_Word ll_backend__ll_pseudo_type_info__V_37_37;
#line 92 "ll_pseudo_type_info.m"
        MR_Word ll_backend__ll_pseudo_type_info__V_38_38;
#line 92 "ll_pseudo_type_info.m"
        MR_Word ll_backend__ll_pseudo_type_info__V_39_39;

#line 94 "ll_pseudo_type_info.m"
        {
#line 94 "ll_pseudo_type_info.m"
          ll_backend__ll_pseudo_type_info__V_38_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 94 "ll_pseudo_type_info.m"
          MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__V_38_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
#line 94 "ll_pseudo_type_info.m"
          MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__V_38_38, 1) = ((MR_Box) (ll_backend__ll_pseudo_type_info__Pseudo_14));
#line 94 "ll_pseudo_type_info.m"
        }
#line 93 "ll_pseudo_type_info.m"
        {
#line 93 "ll_pseudo_type_info.m"
          ll_backend__ll_pseudo_type_info__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 93 "ll_pseudo_type_info.m"
          MR_hl_field(MR_mktag(0), ll_backend__ll_pseudo_type_info__V_37_37, 0) = ((MR_Box) (ll_backend__ll_pseudo_type_info__RttiTypeCtor_25));
#line 93 "ll_pseudo_type_info.m"
          MR_hl_field(MR_mktag(0), ll_backend__ll_pseudo_type_info__V_37_37, 1) = ((MR_Box) (ll_backend__ll_pseudo_type_info__V_38_38));
#line 93 "ll_pseudo_type_info.m"
        }
#line 93 "ll_pseudo_type_info.m"
        {
#line 93 "ll_pseudo_type_info.m"
          ll_backend__ll_pseudo_type_info__DataId_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 93 "ll_pseudo_type_info.m"
          MR_hl_field(MR_mktag(0), ll_backend__ll_pseudo_type_info__DataId_26, 0) = ((MR_Box) (ll_backend__ll_pseudo_type_info__V_37_37));
#line 93 "ll_pseudo_type_info.m"
        }
#line 95 "ll_pseudo_type_info.m"
        {
#line 95 "ll_pseudo_type_info.m"
          ll_backend__ll_pseudo_type_info__V_39_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 95 "ll_pseudo_type_info.m"
          MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__V_39_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 95 "ll_pseudo_type_info.m"
          MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__V_39_39, 1) = ((MR_Box) (ll_backend__ll_pseudo_type_info__DataId_26));
#line 95 "ll_pseudo_type_info.m"
          MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__V_39_39, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 95 "ll_pseudo_type_info.m"
        }
#line 95 "ll_pseudo_type_info.m"
        {
#line 95 "ll_pseudo_type_info.m"
          MR_Word base;
#line 95 "ll_pseudo_type_info.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 95 "ll_pseudo_type_info.m"
          *ll_backend__ll_pseudo_type_info__PseudoRval_12 = base;
#line 95 "ll_pseudo_type_info.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 95 "ll_pseudo_type_info.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__ll_pseudo_type_info__V_39_39));
#line 95 "ll_pseudo_type_info.m"
        }
#line 96 "ll_pseudo_type_info.m"
        *ll_backend__ll_pseudo_type_info__LldsType_13 = (MR_Integer) 11;
#line 96 "ll_pseudo_type_info.m"
        *ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_16 = ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_0_15;
#line 92 "ll_pseudo_type_info.m"
      }
#line 88 "ll_pseudo_type_info.m"
    else
#line 88 "ll_pseudo_type_info.m"
      if (((MR_tag((MR_Word) ll_backend__ll_pseudo_type_info__Pseudo_14)) == (MR_mktag((MR_Integer) 1))))
#line 98 "ll_pseudo_type_info.m"
        {
#line 98 "ll_pseudo_type_info.m"
          MR_Word ll_backend__ll_pseudo_type_info__Args_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__ll_pseudo_type_info__Pseudo_14, (MR_Integer) 1)));
#line 98 "ll_pseudo_type_info.m"
          MR_Word ll_backend__ll_pseudo_type_info__RttiTypeCtor_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__ll_pseudo_type_info__Pseudo_14, (MR_Integer) 0)));

#line 99 "ll_pseudo_type_info.m"
          {
#line 99 "ll_pseudo_type_info.m"
            ll_backend__ll_pseudo_type_info__convert_compound_pseudo_type_info_7_p_0(ll_backend__ll_pseudo_type_info__RttiTypeCtor_42, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__ll_pseudo_type_info__Args_27, ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_0_15, ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_16, ll_backend__ll_pseudo_type_info__PseudoRval_12, ll_backend__ll_pseudo_type_info__LldsType_13);
#line 99 "ll_pseudo_type_info.m"
            return;
          }
#line 98 "ll_pseudo_type_info.m"
        }
#line 88 "ll_pseudo_type_info.m"
      else
#line 88 "ll_pseudo_type_info.m"
        if (((MR_tag((MR_Word) ll_backend__ll_pseudo_type_info__Pseudo_14)) == (MR_mktag((MR_Integer) 3))))
#line 88 "ll_pseudo_type_info.m"
          {
#line 88 "ll_pseudo_type_info.m"
            MR_Integer ll_backend__ll_pseudo_type_info__Int_24 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__Pseudo_14, (MR_Integer) 0)));
#line 88 "ll_pseudo_type_info.m"
            MR_Word ll_backend__ll_pseudo_type_info__V_41_41;

#line 89 "ll_pseudo_type_info.m"
            {
#line 89 "ll_pseudo_type_info.m"
              ll_backend__ll_pseudo_type_info__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 89 "ll_pseudo_type_info.m"
              MR_hl_field(MR_mktag(1), ll_backend__ll_pseudo_type_info__V_41_41, 0) = ((MR_Box) (ll_backend__ll_pseudo_type_info__Int_24));
#line 89 "ll_pseudo_type_info.m"
            }
#line 89 "ll_pseudo_type_info.m"
            {
#line 89 "ll_pseudo_type_info.m"
              MR_Word base;
#line 89 "ll_pseudo_type_info.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 89 "ll_pseudo_type_info.m"
              *ll_backend__ll_pseudo_type_info__PseudoRval_12 = base;
#line 89 "ll_pseudo_type_info.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 89 "ll_pseudo_type_info.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__ll_pseudo_type_info__V_41_41));
#line 89 "ll_pseudo_type_info.m"
            }
#line 90 "ll_pseudo_type_info.m"
            *ll_backend__ll_pseudo_type_info__LldsType_13 = (MR_Integer) 7;
#line 90 "ll_pseudo_type_info.m"
            *ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_16 = ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_0_15;
#line 88 "ll_pseudo_type_info.m"
          }
#line 88 "ll_pseudo_type_info.m"
        else
#line 102 "ll_pseudo_type_info.m"
          {
#line 102 "ll_pseudo_type_info.m"
            MR_Word ll_backend__ll_pseudo_type_info__VarArityId_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__ll_pseudo_type_info__Pseudo_14, (MR_Integer) 0)));
#line 102 "ll_pseudo_type_info.m"
            MR_Integer ll_backend__ll_pseudo_type_info__Arity_29;
#line 102 "ll_pseudo_type_info.m"
            MR_Word ll_backend__ll_pseudo_type_info__ArityArg_30;
#line 102 "ll_pseudo_type_info.m"
            MR_Word ll_backend__ll_pseudo_type_info__V_31_31;
#line 102 "ll_pseudo_type_info.m"
            MR_Word ll_backend__ll_pseudo_type_info__V_32_32;
#line 102 "ll_pseudo_type_info.m"
            MR_Word ll_backend__ll_pseudo_type_info__RttiTypeCtor_43;
#line 102 "ll_pseudo_type_info.m"
            MR_Word ll_backend__ll_pseudo_type_info__Args_44 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__ll_pseudo_type_info__Pseudo_14, (MR_Integer) 1)));

#line 103 "ll_pseudo_type_info.m"
            {
#line 103 "ll_pseudo_type_info.m"
              mercury__list__length_2_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0, ll_backend__ll_pseudo_type_info__Args_44, &ll_backend__ll_pseudo_type_info__Arity_29);
            }
#line 104 "ll_pseudo_type_info.m"
            {
#line 104 "ll_pseudo_type_info.m"
              ll_backend__ll_pseudo_type_info__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 104 "ll_pseudo_type_info.m"
              MR_hl_field(MR_mktag(1), ll_backend__ll_pseudo_type_info__V_31_31, 0) = ((MR_Box) (ll_backend__ll_pseudo_type_info__Arity_29));
#line 104 "ll_pseudo_type_info.m"
            }
#line 104 "ll_pseudo_type_info.m"
            {
#line 104 "ll_pseudo_type_info.m"
              ll_backend__ll_pseudo_type_info__ArityArg_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 104 "ll_pseudo_type_info.m"
              MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__ArityArg_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 104 "ll_pseudo_type_info.m"
              MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__ArityArg_30, 1) = ((MR_Box) (ll_backend__ll_pseudo_type_info__V_31_31));
#line 104 "ll_pseudo_type_info.m"
            }
#line 105 "ll_pseudo_type_info.m"
            {
#line 105 "ll_pseudo_type_info.m"
              ll_backend__ll_pseudo_type_info__RttiTypeCtor_43 = backend_libs__rtti__var_arity_id_to_rtti_type_ctor_1_f_0(ll_backend__ll_pseudo_type_info__VarArityId_28);
            }
#line 106 "ll_pseudo_type_info.m"
            {
#line 106 "ll_pseudo_type_info.m"
              ll_backend__ll_pseudo_type_info__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 106 "ll_pseudo_type_info.m"
              MR_hl_field(MR_mktag(1), ll_backend__ll_pseudo_type_info__V_32_32, 0) = ((MR_Box) (ll_backend__ll_pseudo_type_info__ArityArg_30));
#line 106 "ll_pseudo_type_info.m"
              MR_hl_field(MR_mktag(1), ll_backend__ll_pseudo_type_info__V_32_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 106 "ll_pseudo_type_info.m"
            }
#line 106 "ll_pseudo_type_info.m"
            {
#line 106 "ll_pseudo_type_info.m"
              ll_backend__ll_pseudo_type_info__convert_compound_pseudo_type_info_7_p_0(ll_backend__ll_pseudo_type_info__RttiTypeCtor_43, ll_backend__ll_pseudo_type_info__V_32_32, ll_backend__ll_pseudo_type_info__Args_44, ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_0_15, ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_16, ll_backend__ll_pseudo_type_info__PseudoRval_12, ll_backend__ll_pseudo_type_info__LldsType_13);
#line 106 "ll_pseudo_type_info.m"
              return;
            }
#line 102 "ll_pseudo_type_info.m"
          }
#line 77 "ll_pseudo_type_info.m"
  }
#line 47 "ll_pseudo_type_info.m"
}

void mercury__ll_backend__ll_pseudo_type_info__init(void)
{
}

void mercury__ll_backend__ll_pseudo_type_info__init_type_tables(void)
{
}

void mercury__ll_backend__ll_pseudo_type_info__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ll_backend.ll_pseudo_type_info. */
