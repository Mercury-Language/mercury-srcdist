/*
** Automatically generated from `ll_pseudo_type_info.m'
** by the Mercury compiler,
** version rotd-2016-02-18
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


/* :- module ll_backend.ll_pseudo_type_info. */
/* :- implementation. */

/*
INIT mercury__ll_backend__ll_pseudo_type_info__init
ENDINIT
*/

#include "ll_backend.ll_pseudo_type_info.mih"


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
#include "hlds.goal_form.mih"
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
#include "libs.compiler_util.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "ll_backend.code_info.mih"
#include "ll_backend.code_loc_dep.mih"
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
#include "mdbcomp.feedback.automatic_parallelism.mih"




static void MR_CALL 
ll_backend__ll_pseudo_type_info__IntroducedFrom__pred__convert_compound_type_info__174__1_4_p_0(
  MR_Word ll_backend__ll_pseudo_type_info__LambdaHeadVar__1_33,
  MR_Word * ll_backend__ll_pseudo_type_info__LambdaHeadVar__2_34,
  MR_Word ll_backend__ll_pseudo_type_info__LambdaHeadVar__3_35,
  MR_Word * ll_backend__ll_pseudo_type_info__LambdaHeadVar__4_36);

static void MR_CALL 
ll_backend__ll_pseudo_type_info__IntroducedFrom__pred__convert_compound_pseudo_type_info__151__1_4_p_0(
  MR_Word ll_backend__ll_pseudo_type_info__LambdaHeadVar__1_34,
  MR_Word * ll_backend__ll_pseudo_type_info__LambdaHeadVar__2_35,
  MR_Word ll_backend__ll_pseudo_type_info__LambdaHeadVar__3_36,
  MR_Word * ll_backend__ll_pseudo_type_info__LambdaHeadVar__4_37);

static void MR_CALL 
ll_backend__ll_pseudo_type_info__convert_compound_type_info_7_p_0_1(
  MR_Box ll_backend__ll_pseudo_type_info__closure_arg,
  MR_Box ll_backend__ll_pseudo_type_info__wrapper_arg_1,
  MR_Box * ll_backend__ll_pseudo_type_info__wrapper_arg_2,
  MR_Box ll_backend__ll_pseudo_type_info__wrapper_arg_3,
  MR_Box * ll_backend__ll_pseudo_type_info__wrapper_arg_4);

static void MR_CALL 
ll_backend__ll_pseudo_type_info__convert_compound_type_info_7_p_0(
  MR_Word ll_backend__ll_pseudo_type_info__RttiTypeCtor_8,
  MR_Word ll_backend__ll_pseudo_type_info__ArgRvals0_9,
  MR_Word ll_backend__ll_pseudo_type_info__Args_10,
  MR_Word ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_0_25,
  MR_Word * ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_26,
  MR_Word * ll_backend__ll_pseudo_type_info__Rval_12,
  MR_Word * ll_backend__ll_pseudo_type_info__LldsType_13);

static void MR_CALL 
ll_backend__ll_pseudo_type_info__convert_compound_pseudo_type_info_7_p_0_1(
  MR_Box ll_backend__ll_pseudo_type_info__closure_arg,
  MR_Box ll_backend__ll_pseudo_type_info__wrapper_arg_1,
  MR_Box * ll_backend__ll_pseudo_type_info__wrapper_arg_2,
  MR_Box ll_backend__ll_pseudo_type_info__wrapper_arg_3,
  MR_Box * ll_backend__ll_pseudo_type_info__wrapper_arg_4);

static void MR_CALL 
ll_backend__ll_pseudo_type_info__convert_compound_pseudo_type_info_7_p_0(
  MR_Word ll_backend__ll_pseudo_type_info__RttiTypeCtor_8,
  MR_Word ll_backend__ll_pseudo_type_info__ArgRvals0_9,
  MR_Word ll_backend__ll_pseudo_type_info__Args_10,
  MR_Word ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_0_26,
  MR_Word * ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_27,
  MR_Word * ll_backend__ll_pseudo_type_info__Rval_12,
  MR_Word * ll_backend__ll_pseudo_type_info__LldsType_13);

static void MR_CALL 
ll_backend__ll_pseudo_type_info__convert_pseudo_type_info_5_p_0(
  MR_Word ll_backend__ll_pseudo_type_info__Pseudo_6,
  MR_Word ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_0_17,
  MR_Word * ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_18,
  MR_Word * ll_backend__ll_pseudo_type_info__Rval_8,
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
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static void MR_CALL 
ll_backend__ll_pseudo_type_info__IntroducedFrom__pred__convert_compound_type_info__174__1_4_p_0(
  MR_Word ll_backend__ll_pseudo_type_info__LambdaHeadVar__1_33,
  MR_Word * ll_backend__ll_pseudo_type_info__LambdaHeadVar__2_34,
  MR_Word ll_backend__ll_pseudo_type_info__LambdaHeadVar__3_35,
  MR_Word * ll_backend__ll_pseudo_type_info__LambdaHeadVar__4_36)
{
  {
    MR_bool ll_backend__ll_pseudo_type_info__succeeded;

    switch (MR_tag((MR_Word) ll_backend__ll_pseudo_type_info__LambdaHeadVar__1_33)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ll_backend__ll_pseudo_type_info__RttiTypeCtor_54 = (MR_Word) MR_body(((MR_Word) ll_backend__ll_pseudo_type_info__LambdaHeadVar__1_33), (MR_Integer) 0);
          MR_Word ll_backend__ll_pseudo_type_info__DataId_55;
          MR_Word ll_backend__ll_pseudo_type_info__V_66_66;
          MR_Word ll_backend__ll_pseudo_type_info__V_67_67;
          MR_Word ll_backend__ll_pseudo_type_info__V_68_68;

          {
            ll_backend__ll_pseudo_type_info__V_67_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__V_67_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
            MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__V_67_67, 1) = ((MR_Box) (ll_backend__ll_pseudo_type_info__LambdaHeadVar__1_33));
          }
          {
            ll_backend__ll_pseudo_type_info__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__ll_pseudo_type_info__V_66_66, 0) = ((MR_Box) (ll_backend__ll_pseudo_type_info__RttiTypeCtor_54));
            MR_hl_field(MR_mktag(0), ll_backend__ll_pseudo_type_info__V_66_66, 1) = ((MR_Box) (ll_backend__ll_pseudo_type_info__V_67_67));
          }
          {
            ll_backend__ll_pseudo_type_info__DataId_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__ll_pseudo_type_info__DataId_55, 0) = ((MR_Box) (ll_backend__ll_pseudo_type_info__V_66_66));
          }
          {
            ll_backend__ll_pseudo_type_info__V_68_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__V_68_68, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
            MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__V_68_68, 1) = ((MR_Box) (ll_backend__ll_pseudo_type_info__DataId_55));
            MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__V_68_68, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *ll_backend__ll_pseudo_type_info__LambdaHeadVar__2_34 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__ll_pseudo_type_info__V_68_68));
          }
          *ll_backend__ll_pseudo_type_info__LambdaHeadVar__4_36 = ll_backend__ll_pseudo_type_info__LambdaHeadVar__3_35;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__ll_pseudo_type_info__Args_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__ll_pseudo_type_info__LambdaHeadVar__1_33, (MR_Integer) 1)));
          MR_Word ll_backend__ll_pseudo_type_info__RttiTypeCtor_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__ll_pseudo_type_info__LambdaHeadVar__1_33, (MR_Integer) 0)));
          MR_Word ll_backend__ll_pseudo_type_info___LldsType_74;

          {
            ll_backend__ll_pseudo_type_info__convert_compound_type_info_7_p_0(ll_backend__ll_pseudo_type_info__RttiTypeCtor_70, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__ll_pseudo_type_info__Args_56, ll_backend__ll_pseudo_type_info__LambdaHeadVar__3_35, ll_backend__ll_pseudo_type_info__LambdaHeadVar__4_36, ll_backend__ll_pseudo_type_info__LambdaHeadVar__2_34, &ll_backend__ll_pseudo_type_info___LldsType_74);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ll_backend__ll_pseudo_type_info__VarArityId_57 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__ll_pseudo_type_info__LambdaHeadVar__1_33, (MR_Integer) 0)));
          MR_Integer ll_backend__ll_pseudo_type_info__Arity_58;
          MR_Word ll_backend__ll_pseudo_type_info__ArityArg_59;
          MR_Word ll_backend__ll_pseudo_type_info__V_60_60;
          MR_Word ll_backend__ll_pseudo_type_info__V_61_61;
          MR_Word ll_backend__ll_pseudo_type_info__RttiTypeCtor_71;
          MR_Word ll_backend__ll_pseudo_type_info__Args_72 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__ll_pseudo_type_info__LambdaHeadVar__1_33, (MR_Integer) 1)));
          MR_Word ll_backend__ll_pseudo_type_info___LldsType_76;

          {
            mercury__list__length_2_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_info_0, ll_backend__ll_pseudo_type_info__Args_72, &ll_backend__ll_pseudo_type_info__Arity_58);
          }
          {
            ll_backend__ll_pseudo_type_info__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__ll_pseudo_type_info__V_60_60, 0) = ((MR_Box) (ll_backend__ll_pseudo_type_info__Arity_58));
          }
          {
            ll_backend__ll_pseudo_type_info__ArityArg_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__ArityArg_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__ArityArg_59, 1) = ((MR_Box) (ll_backend__ll_pseudo_type_info__V_60_60));
          }
          {
            ll_backend__ll_pseudo_type_info__RttiTypeCtor_71 = backend_libs__rtti__var_arity_id_to_rtti_type_ctor_1_f_0(ll_backend__ll_pseudo_type_info__VarArityId_57);
          }
          {
            ll_backend__ll_pseudo_type_info__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__ll_pseudo_type_info__V_61_61, 0) = ((MR_Box) (ll_backend__ll_pseudo_type_info__ArityArg_59));
            MR_hl_field(MR_mktag(1), ll_backend__ll_pseudo_type_info__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            ll_backend__ll_pseudo_type_info__convert_compound_type_info_7_p_0(ll_backend__ll_pseudo_type_info__RttiTypeCtor_71, ll_backend__ll_pseudo_type_info__V_61_61, ll_backend__ll_pseudo_type_info__Args_72, ll_backend__ll_pseudo_type_info__LambdaHeadVar__3_35, ll_backend__ll_pseudo_type_info__LambdaHeadVar__4_36, ll_backend__ll_pseudo_type_info__LambdaHeadVar__2_34, &ll_backend__ll_pseudo_type_info___LldsType_76);
          }
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__ll_pseudo_type_info__IntroducedFrom__pred__convert_compound_pseudo_type_info__151__1_4_p_0(
  MR_Word ll_backend__ll_pseudo_type_info__LambdaHeadVar__1_34,
  MR_Word * ll_backend__ll_pseudo_type_info__LambdaHeadVar__2_35,
  MR_Word ll_backend__ll_pseudo_type_info__LambdaHeadVar__3_36,
  MR_Word * ll_backend__ll_pseudo_type_info__LambdaHeadVar__4_37)
{
  {
    MR_bool ll_backend__ll_pseudo_type_info__succeeded;

    if (((MR_tag((MR_Word) ll_backend__ll_pseudo_type_info__LambdaHeadVar__1_34)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word ll_backend__ll_pseudo_type_info__TI_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__ll_pseudo_type_info__LambdaHeadVar__1_34, (MR_Integer) 0)));

        switch (MR_tag((MR_Word) ll_backend__ll_pseudo_type_info__TI_22)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ll_backend__ll_pseudo_type_info__RttiTypeCtor_57 = (MR_Word) MR_body(((MR_Word) ll_backend__ll_pseudo_type_info__TI_22), (MR_Integer) 0);
              MR_Word ll_backend__ll_pseudo_type_info__DataId_58;
              MR_Word ll_backend__ll_pseudo_type_info__V_69_69;
              MR_Word ll_backend__ll_pseudo_type_info__V_70_70;
              MR_Word ll_backend__ll_pseudo_type_info__V_71_71;

              {
                ll_backend__ll_pseudo_type_info__V_70_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__V_70_70, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
                MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__V_70_70, 1) = ((MR_Box) (ll_backend__ll_pseudo_type_info__TI_22));
              }
              {
                ll_backend__ll_pseudo_type_info__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__ll_pseudo_type_info__V_69_69, 0) = ((MR_Box) (ll_backend__ll_pseudo_type_info__RttiTypeCtor_57));
                MR_hl_field(MR_mktag(0), ll_backend__ll_pseudo_type_info__V_69_69, 1) = ((MR_Box) (ll_backend__ll_pseudo_type_info__V_70_70));
              }
              {
                ll_backend__ll_pseudo_type_info__DataId_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__ll_pseudo_type_info__DataId_58, 0) = ((MR_Box) (ll_backend__ll_pseudo_type_info__V_69_69));
              }
              {
                ll_backend__ll_pseudo_type_info__V_71_71 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__V_71_71, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__V_71_71, 1) = ((MR_Box) (ll_backend__ll_pseudo_type_info__DataId_58));
                MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__V_71_71, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__ll_pseudo_type_info__LambdaHeadVar__2_35 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__ll_pseudo_type_info__V_71_71));
              }
              *ll_backend__ll_pseudo_type_info__LambdaHeadVar__4_37 = ll_backend__ll_pseudo_type_info__LambdaHeadVar__3_36;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ll_backend__ll_pseudo_type_info__Args_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__ll_pseudo_type_info__TI_22, (MR_Integer) 1)));
              MR_Word ll_backend__ll_pseudo_type_info__RttiTypeCtor_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__ll_pseudo_type_info__TI_22, (MR_Integer) 0)));
              MR_Word ll_backend__ll_pseudo_type_info___LldsType_77;

              {
                ll_backend__ll_pseudo_type_info__convert_compound_type_info_7_p_0(ll_backend__ll_pseudo_type_info__RttiTypeCtor_73, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__ll_pseudo_type_info__Args_59, ll_backend__ll_pseudo_type_info__LambdaHeadVar__3_36, ll_backend__ll_pseudo_type_info__LambdaHeadVar__4_37, ll_backend__ll_pseudo_type_info__LambdaHeadVar__2_35, &ll_backend__ll_pseudo_type_info___LldsType_77);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ll_backend__ll_pseudo_type_info__VarArityId_60 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__ll_pseudo_type_info__TI_22, (MR_Integer) 0)));
              MR_Integer ll_backend__ll_pseudo_type_info__Arity_61;
              MR_Word ll_backend__ll_pseudo_type_info__ArityArg_62;
              MR_Word ll_backend__ll_pseudo_type_info__V_63_63;
              MR_Word ll_backend__ll_pseudo_type_info__V_64_64;
              MR_Word ll_backend__ll_pseudo_type_info__RttiTypeCtor_74;
              MR_Word ll_backend__ll_pseudo_type_info__Args_75 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__ll_pseudo_type_info__TI_22, (MR_Integer) 1)));
              MR_Word ll_backend__ll_pseudo_type_info___LldsType_79;

              {
                mercury__list__length_2_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_info_0, ll_backend__ll_pseudo_type_info__Args_75, &ll_backend__ll_pseudo_type_info__Arity_61);
              }
              {
                ll_backend__ll_pseudo_type_info__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__ll_pseudo_type_info__V_63_63, 0) = ((MR_Box) (ll_backend__ll_pseudo_type_info__Arity_61));
              }
              {
                ll_backend__ll_pseudo_type_info__ArityArg_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__ArityArg_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__ArityArg_62, 1) = ((MR_Box) (ll_backend__ll_pseudo_type_info__V_63_63));
              }
              {
                ll_backend__ll_pseudo_type_info__RttiTypeCtor_74 = backend_libs__rtti__var_arity_id_to_rtti_type_ctor_1_f_0(ll_backend__ll_pseudo_type_info__VarArityId_60);
              }
              {
                ll_backend__ll_pseudo_type_info__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__ll_pseudo_type_info__V_64_64, 0) = ((MR_Box) (ll_backend__ll_pseudo_type_info__ArityArg_62));
                MR_hl_field(MR_mktag(1), ll_backend__ll_pseudo_type_info__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                ll_backend__ll_pseudo_type_info__convert_compound_type_info_7_p_0(ll_backend__ll_pseudo_type_info__RttiTypeCtor_74, ll_backend__ll_pseudo_type_info__V_64_64, ll_backend__ll_pseudo_type_info__Args_75, ll_backend__ll_pseudo_type_info__LambdaHeadVar__3_36, ll_backend__ll_pseudo_type_info__LambdaHeadVar__4_37, ll_backend__ll_pseudo_type_info__LambdaHeadVar__2_35, &ll_backend__ll_pseudo_type_info___LldsType_79);
              }
            }
            break;
        }
      }
    else
      {
        MR_Word ll_backend__ll_pseudo_type_info__PTI_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__ll_pseudo_type_info__LambdaHeadVar__1_34, (MR_Integer) 0)));
        MR_Word ll_backend__ll_pseudo_type_info___LldsType_21;

        {
          ll_backend__ll_pseudo_type_info__convert_pseudo_type_info_5_p_0(ll_backend__ll_pseudo_type_info__PTI_20, ll_backend__ll_pseudo_type_info__LambdaHeadVar__3_36, ll_backend__ll_pseudo_type_info__LambdaHeadVar__4_37, ll_backend__ll_pseudo_type_info__LambdaHeadVar__2_35, &ll_backend__ll_pseudo_type_info___LldsType_21);
        }
      }
  }
}

static void MR_CALL 
ll_backend__ll_pseudo_type_info__convert_compound_type_info_7_p_0_1(
  MR_Box ll_backend__ll_pseudo_type_info__closure_arg,
  MR_Box ll_backend__ll_pseudo_type_info__wrapper_arg_1,
  MR_Box * ll_backend__ll_pseudo_type_info__wrapper_arg_2,
  MR_Box ll_backend__ll_pseudo_type_info__wrapper_arg_3,
  MR_Box * ll_backend__ll_pseudo_type_info__wrapper_arg_4)
{
  {
    MR_Box ll_backend__ll_pseudo_type_info__closure = ll_backend__ll_pseudo_type_info__closure_arg;
    MR_Word ll_backend__ll_pseudo_type_info__conv1_LambdaHeadVar__2_34;
    MR_Word ll_backend__ll_pseudo_type_info__conv0_LambdaHeadVar__4_36;

    {
      ll_backend__ll_pseudo_type_info__IntroducedFrom__pred__convert_compound_type_info__174__1_4_p_0(((MR_Word) ll_backend__ll_pseudo_type_info__wrapper_arg_1), &ll_backend__ll_pseudo_type_info__conv1_LambdaHeadVar__2_34, ((MR_Word) ll_backend__ll_pseudo_type_info__wrapper_arg_3), &ll_backend__ll_pseudo_type_info__conv0_LambdaHeadVar__4_36);
    }
    *ll_backend__ll_pseudo_type_info__wrapper_arg_2 = ((MR_Box) (ll_backend__ll_pseudo_type_info__conv1_LambdaHeadVar__2_34));
    *ll_backend__ll_pseudo_type_info__wrapper_arg_4 = ((MR_Box) (ll_backend__ll_pseudo_type_info__conv0_LambdaHeadVar__4_36));
  }
}

static void MR_CALL 
ll_backend__ll_pseudo_type_info__convert_compound_type_info_7_p_0(
  MR_Word ll_backend__ll_pseudo_type_info__RttiTypeCtor_8,
  MR_Word ll_backend__ll_pseudo_type_info__ArgRvals0_9,
  MR_Word ll_backend__ll_pseudo_type_info__Args_10,
  MR_Word ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_0_25,
  MR_Word * ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_26,
  MR_Word * ll_backend__ll_pseudo_type_info__Rval_12,
  MR_Word * ll_backend__ll_pseudo_type_info__LldsType_13)
{
  {
    MR_bool ll_backend__ll_pseudo_type_info__succeeded;
    MR_Word ll_backend__ll_pseudo_type_info__TypeCtorInfo_46_46;
    MR_Word ll_backend__ll_pseudo_type_info__TypeCtorInfoData_14;
    MR_Word ll_backend__ll_pseudo_type_info__TypeCtorInfoDataId_15;
    MR_Word ll_backend__ll_pseudo_type_info__TypeCtorInfoRval_16;
    MR_Word ll_backend__ll_pseudo_type_info__ArgRvals1_22;
    MR_Word ll_backend__ll_pseudo_type_info__ArgRvals_23;
    MR_Word ll_backend__ll_pseudo_type_info__DataId_24;
    MR_Word ll_backend__ll_pseudo_type_info__V_27_27 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) ll_backend__ll_pseudo_type_info__RttiTypeCtor_8);
    MR_Word ll_backend__ll_pseudo_type_info__V_28_28;
    MR_Word ll_backend__ll_pseudo_type_info__V_29_29;
    MR_Word ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_32_32;
    MR_Word ll_backend__ll_pseudo_type_info__V_37_37;
    MR_Word ll_backend__ll_pseudo_type_info__V_39_39;
    MR_Box ll_backend__ll_pseudo_type_info__conv2_STATE_VARIABLE_StaticCellInfo_32_32;

    {
      ll_backend__ll_pseudo_type_info__TypeCtorInfoData_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__TypeCtorInfoData_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
      MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__TypeCtorInfoData_14, 1) = ((MR_Box) (ll_backend__ll_pseudo_type_info__V_27_27));
    }
    {
      ll_backend__ll_pseudo_type_info__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__ll_pseudo_type_info__V_28_28, 0) = ((MR_Box) (ll_backend__ll_pseudo_type_info__RttiTypeCtor_8));
      MR_hl_field(MR_mktag(0), ll_backend__ll_pseudo_type_info__V_28_28, 1) = ((MR_Box) (ll_backend__ll_pseudo_type_info__TypeCtorInfoData_14));
    }
    {
      ll_backend__ll_pseudo_type_info__TypeCtorInfoDataId_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__ll_pseudo_type_info__TypeCtorInfoDataId_15, 0) = ((MR_Box) (ll_backend__ll_pseudo_type_info__V_28_28));
    }
    {
      ll_backend__ll_pseudo_type_info__V_29_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__V_29_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__V_29_29, 1) = ((MR_Box) (ll_backend__ll_pseudo_type_info__TypeCtorInfoDataId_15));
      MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__V_29_29, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ll_backend__ll_pseudo_type_info__TypeCtorInfoRval_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__TypeCtorInfoRval_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__TypeCtorInfoRval_16, 1) = ((MR_Box) (ll_backend__ll_pseudo_type_info__V_29_29));
    }
    *ll_backend__ll_pseudo_type_info__LldsType_13 = (MR_Integer) 11;
    ll_backend__ll_pseudo_type_info__TypeCtorInfo_46_46 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0;
    {
      mercury__list__map_foldl_5_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_info_0, ll_backend__ll_pseudo_type_info__TypeCtorInfo_46_46, (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_info_0, (MR_Word) &ll_backend__ll_pseudo_type_info_scalar_common_2[1], ll_backend__ll_pseudo_type_info__Args_10, &ll_backend__ll_pseudo_type_info__ArgRvals1_22, ((MR_Box) (ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_0_25)), &ll_backend__ll_pseudo_type_info__conv2_STATE_VARIABLE_StaticCellInfo_32_32);
    }
    ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_32_32 = ((MR_Word) ll_backend__ll_pseudo_type_info__conv2_STATE_VARIABLE_StaticCellInfo_32_32);
    {
      mercury__list__append_3_p_1(ll_backend__ll_pseudo_type_info__TypeCtorInfo_46_46, ll_backend__ll_pseudo_type_info__ArgRvals0_9, ll_backend__ll_pseudo_type_info__ArgRvals1_22, &ll_backend__ll_pseudo_type_info__ArgRvals_23);
    }
    {
      ll_backend__ll_pseudo_type_info__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__ll_pseudo_type_info__V_37_37, 0) = ((MR_Box) (ll_backend__ll_pseudo_type_info__TypeCtorInfoRval_16));
      MR_hl_field(MR_mktag(1), ll_backend__ll_pseudo_type_info__V_37_37, 1) = ((MR_Box) (ll_backend__ll_pseudo_type_info__ArgRvals_23));
    }
    {
      ll_backend__global_data__add_scalar_static_cell_natural_types_4_p_0(ll_backend__ll_pseudo_type_info__V_37_37, &ll_backend__ll_pseudo_type_info__DataId_24, ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_32_32, ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_26);
    }
    {
      ll_backend__ll_pseudo_type_info__V_39_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__V_39_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__V_39_39, 1) = ((MR_Box) (ll_backend__ll_pseudo_type_info__DataId_24));
      MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__V_39_39, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *ll_backend__ll_pseudo_type_info__Rval_12 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__ll_pseudo_type_info__V_39_39));
    }
  }
}

static void MR_CALL 
ll_backend__ll_pseudo_type_info__convert_compound_pseudo_type_info_7_p_0_1(
  MR_Box ll_backend__ll_pseudo_type_info__closure_arg,
  MR_Box ll_backend__ll_pseudo_type_info__wrapper_arg_1,
  MR_Box * ll_backend__ll_pseudo_type_info__wrapper_arg_2,
  MR_Box ll_backend__ll_pseudo_type_info__wrapper_arg_3,
  MR_Box * ll_backend__ll_pseudo_type_info__wrapper_arg_4)
{
  {
    MR_Box ll_backend__ll_pseudo_type_info__closure = ll_backend__ll_pseudo_type_info__closure_arg;
    MR_Word ll_backend__ll_pseudo_type_info__conv1_LambdaHeadVar__2_35;
    MR_Word ll_backend__ll_pseudo_type_info__conv0_LambdaHeadVar__4_37;

    {
      ll_backend__ll_pseudo_type_info__IntroducedFrom__pred__convert_compound_pseudo_type_info__151__1_4_p_0(((MR_Word) ll_backend__ll_pseudo_type_info__wrapper_arg_1), &ll_backend__ll_pseudo_type_info__conv1_LambdaHeadVar__2_35, ((MR_Word) ll_backend__ll_pseudo_type_info__wrapper_arg_3), &ll_backend__ll_pseudo_type_info__conv0_LambdaHeadVar__4_37);
    }
    *ll_backend__ll_pseudo_type_info__wrapper_arg_2 = ((MR_Box) (ll_backend__ll_pseudo_type_info__conv1_LambdaHeadVar__2_35));
    *ll_backend__ll_pseudo_type_info__wrapper_arg_4 = ((MR_Box) (ll_backend__ll_pseudo_type_info__conv0_LambdaHeadVar__4_37));
  }
}

static void MR_CALL 
ll_backend__ll_pseudo_type_info__convert_compound_pseudo_type_info_7_p_0(
  MR_Word ll_backend__ll_pseudo_type_info__RttiTypeCtor_8,
  MR_Word ll_backend__ll_pseudo_type_info__ArgRvals0_9,
  MR_Word ll_backend__ll_pseudo_type_info__Args_10,
  MR_Word ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_0_26,
  MR_Word * ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_27,
  MR_Word * ll_backend__ll_pseudo_type_info__Rval_12,
  MR_Word * ll_backend__ll_pseudo_type_info__LldsType_13)
{
  {
    MR_bool ll_backend__ll_pseudo_type_info__succeeded;
    MR_Word ll_backend__ll_pseudo_type_info__TypeCtorInfo_49_49;
    MR_Word ll_backend__ll_pseudo_type_info__TypeCtorInfoDataId_14;
    MR_Word ll_backend__ll_pseudo_type_info__TypeCtorInfoRval_15;
    MR_Word ll_backend__ll_pseudo_type_info__ArgRvals1_23;
    MR_Word ll_backend__ll_pseudo_type_info__ArgRvals_24;
    MR_Word ll_backend__ll_pseudo_type_info__DataId_25;
    MR_Word ll_backend__ll_pseudo_type_info__V_28_28;
    MR_Word ll_backend__ll_pseudo_type_info__V_30_30;
    MR_Word ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_33_33;
    MR_Word ll_backend__ll_pseudo_type_info__V_38_38;
    MR_Word ll_backend__ll_pseudo_type_info__V_40_40;
    MR_Box ll_backend__ll_pseudo_type_info__conv2_STATE_VARIABLE_StaticCellInfo_33_33;

    {
      ll_backend__ll_pseudo_type_info__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__ll_pseudo_type_info__V_28_28, 0) = ((MR_Box) (ll_backend__ll_pseudo_type_info__RttiTypeCtor_8));
      MR_hl_field(MR_mktag(0), ll_backend__ll_pseudo_type_info__V_28_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16))));
    }
    {
      ll_backend__ll_pseudo_type_info__TypeCtorInfoDataId_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__ll_pseudo_type_info__TypeCtorInfoDataId_14, 0) = ((MR_Box) (ll_backend__ll_pseudo_type_info__V_28_28));
    }
    {
      ll_backend__ll_pseudo_type_info__V_30_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__V_30_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__V_30_30, 1) = ((MR_Box) (ll_backend__ll_pseudo_type_info__TypeCtorInfoDataId_14));
      MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__V_30_30, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ll_backend__ll_pseudo_type_info__TypeCtorInfoRval_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__TypeCtorInfoRval_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__TypeCtorInfoRval_15, 1) = ((MR_Box) (ll_backend__ll_pseudo_type_info__V_30_30));
    }
    *ll_backend__ll_pseudo_type_info__LldsType_13 = (MR_Integer) 11;
    ll_backend__ll_pseudo_type_info__TypeCtorInfo_49_49 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0;
    {
      mercury__list__map_foldl_5_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0, ll_backend__ll_pseudo_type_info__TypeCtorInfo_49_49, (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_info_0, (MR_Word) &ll_backend__ll_pseudo_type_info_scalar_common_2[0], ll_backend__ll_pseudo_type_info__Args_10, &ll_backend__ll_pseudo_type_info__ArgRvals1_23, ((MR_Box) (ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_0_26)), &ll_backend__ll_pseudo_type_info__conv2_STATE_VARIABLE_StaticCellInfo_33_33);
    }
    ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_33_33 = ((MR_Word) ll_backend__ll_pseudo_type_info__conv2_STATE_VARIABLE_StaticCellInfo_33_33);
    {
      mercury__list__append_3_p_1(ll_backend__ll_pseudo_type_info__TypeCtorInfo_49_49, ll_backend__ll_pseudo_type_info__ArgRvals0_9, ll_backend__ll_pseudo_type_info__ArgRvals1_23, &ll_backend__ll_pseudo_type_info__ArgRvals_24);
    }
    {
      ll_backend__ll_pseudo_type_info__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__ll_pseudo_type_info__V_38_38, 0) = ((MR_Box) (ll_backend__ll_pseudo_type_info__TypeCtorInfoRval_15));
      MR_hl_field(MR_mktag(1), ll_backend__ll_pseudo_type_info__V_38_38, 1) = ((MR_Box) (ll_backend__ll_pseudo_type_info__ArgRvals_24));
    }
    {
      ll_backend__global_data__add_scalar_static_cell_natural_types_4_p_0(ll_backend__ll_pseudo_type_info__V_38_38, &ll_backend__ll_pseudo_type_info__DataId_25, ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_33_33, ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_27);
    }
    {
      ll_backend__ll_pseudo_type_info__V_40_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__V_40_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__V_40_40, 1) = ((MR_Box) (ll_backend__ll_pseudo_type_info__DataId_25));
      MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__V_40_40, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *ll_backend__ll_pseudo_type_info__Rval_12 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__ll_pseudo_type_info__V_40_40));
    }
  }
}

static void MR_CALL 
ll_backend__ll_pseudo_type_info__convert_pseudo_type_info_5_p_0(
  MR_Word ll_backend__ll_pseudo_type_info__Pseudo_6,
  MR_Word ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_0_17,
  MR_Word * ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_18,
  MR_Word * ll_backend__ll_pseudo_type_info__Rval_8,
  MR_Word * ll_backend__ll_pseudo_type_info__LldsType_9)
{
  {
    MR_bool ll_backend__ll_pseudo_type_info__succeeded;

    switch (MR_tag((MR_Word) ll_backend__ll_pseudo_type_info__Pseudo_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ll_backend__ll_pseudo_type_info__RttiTypeCtor_11 = (MR_Word) MR_body(((MR_Word) ll_backend__ll_pseudo_type_info__Pseudo_6), (MR_Integer) 0);
          MR_Word ll_backend__ll_pseudo_type_info__DataId_12;
          MR_Word ll_backend__ll_pseudo_type_info__V_25_25;
          MR_Word ll_backend__ll_pseudo_type_info__V_26_26;
          MR_Word ll_backend__ll_pseudo_type_info__V_27_27;

          {
            ll_backend__ll_pseudo_type_info__V_26_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__V_26_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
            MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__V_26_26, 1) = ((MR_Box) (ll_backend__ll_pseudo_type_info__Pseudo_6));
          }
          {
            ll_backend__ll_pseudo_type_info__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__ll_pseudo_type_info__V_25_25, 0) = ((MR_Box) (ll_backend__ll_pseudo_type_info__RttiTypeCtor_11));
            MR_hl_field(MR_mktag(0), ll_backend__ll_pseudo_type_info__V_25_25, 1) = ((MR_Box) (ll_backend__ll_pseudo_type_info__V_26_26));
          }
          {
            ll_backend__ll_pseudo_type_info__DataId_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__ll_pseudo_type_info__DataId_12, 0) = ((MR_Box) (ll_backend__ll_pseudo_type_info__V_25_25));
          }
          {
            ll_backend__ll_pseudo_type_info__V_27_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__V_27_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
            MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__V_27_27, 1) = ((MR_Box) (ll_backend__ll_pseudo_type_info__DataId_12));
            MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__V_27_27, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *ll_backend__ll_pseudo_type_info__Rval_8 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__ll_pseudo_type_info__V_27_27));
          }
          *ll_backend__ll_pseudo_type_info__LldsType_9 = (MR_Integer) 11;
          *ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_18 = ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_0_17;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__ll_pseudo_type_info__Args_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__ll_pseudo_type_info__Pseudo_6, (MR_Integer) 1)));
          MR_Word ll_backend__ll_pseudo_type_info__RttiTypeCtor_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__ll_pseudo_type_info__Pseudo_6, (MR_Integer) 0)));

          {
            ll_backend__ll_pseudo_type_info__convert_compound_pseudo_type_info_7_p_0(ll_backend__ll_pseudo_type_info__RttiTypeCtor_30, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__ll_pseudo_type_info__Args_13, ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_0_17, ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_18, ll_backend__ll_pseudo_type_info__Rval_8, ll_backend__ll_pseudo_type_info__LldsType_9);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ll_backend__ll_pseudo_type_info__VarArityId_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__ll_pseudo_type_info__Pseudo_6, (MR_Integer) 0)));
          MR_Integer ll_backend__ll_pseudo_type_info__Arity_15;
          MR_Word ll_backend__ll_pseudo_type_info__ArityArg_16;
          MR_Word ll_backend__ll_pseudo_type_info__V_19_19;
          MR_Word ll_backend__ll_pseudo_type_info__V_20_20;
          MR_Word ll_backend__ll_pseudo_type_info__RttiTypeCtor_31;
          MR_Word ll_backend__ll_pseudo_type_info__Args_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__ll_pseudo_type_info__Pseudo_6, (MR_Integer) 1)));

          {
            mercury__list__length_2_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0, ll_backend__ll_pseudo_type_info__Args_32, &ll_backend__ll_pseudo_type_info__Arity_15);
          }
          {
            ll_backend__ll_pseudo_type_info__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__ll_pseudo_type_info__V_19_19, 0) = ((MR_Box) (ll_backend__ll_pseudo_type_info__Arity_15));
          }
          {
            ll_backend__ll_pseudo_type_info__ArityArg_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__ArityArg_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__ArityArg_16, 1) = ((MR_Box) (ll_backend__ll_pseudo_type_info__V_19_19));
          }
          {
            ll_backend__ll_pseudo_type_info__RttiTypeCtor_31 = backend_libs__rtti__var_arity_id_to_rtti_type_ctor_1_f_0(ll_backend__ll_pseudo_type_info__VarArityId_14);
          }
          {
            ll_backend__ll_pseudo_type_info__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__ll_pseudo_type_info__V_20_20, 0) = ((MR_Box) (ll_backend__ll_pseudo_type_info__ArityArg_16));
            MR_hl_field(MR_mktag(1), ll_backend__ll_pseudo_type_info__V_20_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            ll_backend__ll_pseudo_type_info__convert_compound_pseudo_type_info_7_p_0(ll_backend__ll_pseudo_type_info__RttiTypeCtor_31, ll_backend__ll_pseudo_type_info__V_20_20, ll_backend__ll_pseudo_type_info__Args_32, ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_0_17, ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_18, ll_backend__ll_pseudo_type_info__Rval_8, ll_backend__ll_pseudo_type_info__LldsType_9);
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Integer ll_backend__ll_pseudo_type_info__Int_10 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__Pseudo_6, (MR_Integer) 0)));
          MR_Word ll_backend__ll_pseudo_type_info__V_29_29;

          {
            ll_backend__ll_pseudo_type_info__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__ll_pseudo_type_info__V_29_29, 0) = ((MR_Box) (ll_backend__ll_pseudo_type_info__Int_10));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *ll_backend__ll_pseudo_type_info__Rval_8 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__ll_pseudo_type_info__V_29_29));
          }
          *ll_backend__ll_pseudo_type_info__LldsType_9 = (MR_Integer) 7;
          *ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_18 = ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_0_17;
        }
        break;
    }
  }
}

void MR_CALL 
ll_backend__ll_pseudo_type_info__construct_llds_pseudo_type_info_6_p_0(
  MR_Word ll_backend__ll_pseudo_type_info__Type_7,
  MR_Integer ll_backend__ll_pseudo_type_info__NumUnivQTvars_8,
  MR_Word ll_backend__ll_pseudo_type_info__ExistQTvars_9,
  MR_Word ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_0_13,
  MR_Word * ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_14,
  MR_Word * ll_backend__ll_pseudo_type_info__Pseudo_11)
{
  {
    MR_bool ll_backend__ll_pseudo_type_info__succeeded;
    MR_Word ll_backend__ll_pseudo_type_info___LldsType_12;

    {
      ll_backend__ll_pseudo_type_info__construct_typed_llds_pseudo_type_info_7_p_0(ll_backend__ll_pseudo_type_info__Type_7, ll_backend__ll_pseudo_type_info__NumUnivQTvars_8, ll_backend__ll_pseudo_type_info__ExistQTvars_9, ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_0_13, ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_14, ll_backend__ll_pseudo_type_info__Pseudo_11, &ll_backend__ll_pseudo_type_info___LldsType_12);
    }
  }
}

void MR_CALL 
ll_backend__ll_pseudo_type_info__construct_typed_llds_pseudo_type_info_7_p_0(
  MR_Word ll_backend__ll_pseudo_type_info__Type_8,
  MR_Integer ll_backend__ll_pseudo_type_info__NumUnivQTvars_9,
  MR_Word ll_backend__ll_pseudo_type_info__ExistQTvars_10,
  MR_Word ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_0_15,
  MR_Word * ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_16,
  MR_Word * ll_backend__ll_pseudo_type_info__PseudoRval_12,
  MR_Word * ll_backend__ll_pseudo_type_info__LldsType_13)
{
  {
    MR_bool ll_backend__ll_pseudo_type_info__succeeded;
    MR_Word ll_backend__ll_pseudo_type_info__Pseudo_14;

    {
      backend_libs__pseudo_type_info__construct_pseudo_type_info_4_p_0(ll_backend__ll_pseudo_type_info__Type_8, ll_backend__ll_pseudo_type_info__NumUnivQTvars_9, ll_backend__ll_pseudo_type_info__ExistQTvars_10, &ll_backend__ll_pseudo_type_info__Pseudo_14);
    }
    switch (MR_tag((MR_Word) ll_backend__ll_pseudo_type_info__Pseudo_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ll_backend__ll_pseudo_type_info__RttiTypeCtor_25 = (MR_Word) MR_body(((MR_Word) ll_backend__ll_pseudo_type_info__Pseudo_14), (MR_Integer) 0);
          MR_Word ll_backend__ll_pseudo_type_info__DataId_26;
          MR_Word ll_backend__ll_pseudo_type_info__V_37_37;
          MR_Word ll_backend__ll_pseudo_type_info__V_38_38;
          MR_Word ll_backend__ll_pseudo_type_info__V_39_39;

          {
            ll_backend__ll_pseudo_type_info__V_38_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__V_38_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
            MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__V_38_38, 1) = ((MR_Box) (ll_backend__ll_pseudo_type_info__Pseudo_14));
          }
          {
            ll_backend__ll_pseudo_type_info__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__ll_pseudo_type_info__V_37_37, 0) = ((MR_Box) (ll_backend__ll_pseudo_type_info__RttiTypeCtor_25));
            MR_hl_field(MR_mktag(0), ll_backend__ll_pseudo_type_info__V_37_37, 1) = ((MR_Box) (ll_backend__ll_pseudo_type_info__V_38_38));
          }
          {
            ll_backend__ll_pseudo_type_info__DataId_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__ll_pseudo_type_info__DataId_26, 0) = ((MR_Box) (ll_backend__ll_pseudo_type_info__V_37_37));
          }
          {
            ll_backend__ll_pseudo_type_info__V_39_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__V_39_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
            MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__V_39_39, 1) = ((MR_Box) (ll_backend__ll_pseudo_type_info__DataId_26));
            MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__V_39_39, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *ll_backend__ll_pseudo_type_info__PseudoRval_12 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__ll_pseudo_type_info__V_39_39));
          }
          *ll_backend__ll_pseudo_type_info__LldsType_13 = (MR_Integer) 11;
          *ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_16 = ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_0_15;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__ll_pseudo_type_info__Args_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__ll_pseudo_type_info__Pseudo_14, (MR_Integer) 1)));
          MR_Word ll_backend__ll_pseudo_type_info__RttiTypeCtor_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__ll_pseudo_type_info__Pseudo_14, (MR_Integer) 0)));

          {
            ll_backend__ll_pseudo_type_info__convert_compound_pseudo_type_info_7_p_0(ll_backend__ll_pseudo_type_info__RttiTypeCtor_42, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__ll_pseudo_type_info__Args_27, ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_0_15, ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_16, ll_backend__ll_pseudo_type_info__PseudoRval_12, ll_backend__ll_pseudo_type_info__LldsType_13);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ll_backend__ll_pseudo_type_info__VarArityId_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__ll_pseudo_type_info__Pseudo_14, (MR_Integer) 0)));
          MR_Integer ll_backend__ll_pseudo_type_info__Arity_29;
          MR_Word ll_backend__ll_pseudo_type_info__ArityArg_30;
          MR_Word ll_backend__ll_pseudo_type_info__V_31_31;
          MR_Word ll_backend__ll_pseudo_type_info__V_32_32;
          MR_Word ll_backend__ll_pseudo_type_info__RttiTypeCtor_43;
          MR_Word ll_backend__ll_pseudo_type_info__Args_44 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__ll_pseudo_type_info__Pseudo_14, (MR_Integer) 1)));

          {
            mercury__list__length_2_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0, ll_backend__ll_pseudo_type_info__Args_44, &ll_backend__ll_pseudo_type_info__Arity_29);
          }
          {
            ll_backend__ll_pseudo_type_info__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__ll_pseudo_type_info__V_31_31, 0) = ((MR_Box) (ll_backend__ll_pseudo_type_info__Arity_29));
          }
          {
            ll_backend__ll_pseudo_type_info__ArityArg_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__ArityArg_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__ArityArg_30, 1) = ((MR_Box) (ll_backend__ll_pseudo_type_info__V_31_31));
          }
          {
            ll_backend__ll_pseudo_type_info__RttiTypeCtor_43 = backend_libs__rtti__var_arity_id_to_rtti_type_ctor_1_f_0(ll_backend__ll_pseudo_type_info__VarArityId_28);
          }
          {
            ll_backend__ll_pseudo_type_info__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__ll_pseudo_type_info__V_32_32, 0) = ((MR_Box) (ll_backend__ll_pseudo_type_info__ArityArg_30));
            MR_hl_field(MR_mktag(1), ll_backend__ll_pseudo_type_info__V_32_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            ll_backend__ll_pseudo_type_info__convert_compound_pseudo_type_info_7_p_0(ll_backend__ll_pseudo_type_info__RttiTypeCtor_43, ll_backend__ll_pseudo_type_info__V_32_32, ll_backend__ll_pseudo_type_info__Args_44, ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_0_15, ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_16, ll_backend__ll_pseudo_type_info__PseudoRval_12, ll_backend__ll_pseudo_type_info__LldsType_13);
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Integer ll_backend__ll_pseudo_type_info__Int_24 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__Pseudo_14, (MR_Integer) 0)));
          MR_Word ll_backend__ll_pseudo_type_info__V_41_41;

          {
            ll_backend__ll_pseudo_type_info__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__ll_pseudo_type_info__V_41_41, 0) = ((MR_Box) (ll_backend__ll_pseudo_type_info__Int_24));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *ll_backend__ll_pseudo_type_info__PseudoRval_12 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__ll_pseudo_type_info__V_41_41));
          }
          *ll_backend__ll_pseudo_type_info__LldsType_13 = (MR_Integer) 7;
          *ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_16 = ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_0_15;
        }
        break;
    }
  }
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
