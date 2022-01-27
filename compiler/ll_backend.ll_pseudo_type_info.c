/*
** Automatically generated from `ll_pseudo_type_info.m'
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




#line 174 "ll_pseudo_type_info.m"
static void MR_CALL 
ll_backend__ll_pseudo_type_info__IntroducedFrom__pred__convert_compound_type_info__174__1_4_p_0(
#line 174 "ll_pseudo_type_info.m"
  MR_Word ll_backend__ll_pseudo_type_info__LambdaHeadVar__1_33,
#line 174 "ll_pseudo_type_info.m"
  MR_Word * ll_backend__ll_pseudo_type_info__LambdaHeadVar__2_34,
#line 174 "ll_pseudo_type_info.m"
  MR_Word ll_backend__ll_pseudo_type_info__LambdaHeadVar__3_35,
#line 174 "ll_pseudo_type_info.m"
  MR_Word * ll_backend__ll_pseudo_type_info__LambdaHeadVar__4_36);

#line 151 "ll_pseudo_type_info.m"
static void MR_CALL 
ll_backend__ll_pseudo_type_info__IntroducedFrom__pred__convert_compound_pseudo_type_info__151__1_4_p_0(
#line 151 "ll_pseudo_type_info.m"
  MR_Word ll_backend__ll_pseudo_type_info__LambdaHeadVar__1_34,
#line 151 "ll_pseudo_type_info.m"
  MR_Word * ll_backend__ll_pseudo_type_info__LambdaHeadVar__2_35,
#line 151 "ll_pseudo_type_info.m"
  MR_Word ll_backend__ll_pseudo_type_info__LambdaHeadVar__3_36,
#line 151 "ll_pseudo_type_info.m"
  MR_Word * ll_backend__ll_pseudo_type_info__LambdaHeadVar__4_37);

#line 173 "ll_pseudo_type_info.m"
static void MR_CALL 
ll_backend__ll_pseudo_type_info__convert_compound_type_info_7_p_0_1(
#line 173 "ll_pseudo_type_info.m"
  MR_Box ll_backend__ll_pseudo_type_info__closure_arg,
#line 173 "ll_pseudo_type_info.m"
  MR_Box ll_backend__ll_pseudo_type_info__wrapper_arg_1,
#line 173 "ll_pseudo_type_info.m"
  MR_Box * ll_backend__ll_pseudo_type_info__wrapper_arg_2,
#line 173 "ll_pseudo_type_info.m"
  MR_Box ll_backend__ll_pseudo_type_info__wrapper_arg_3,
#line 173 "ll_pseudo_type_info.m"
  MR_Box * ll_backend__ll_pseudo_type_info__wrapper_arg_4);

#line 161 "ll_pseudo_type_info.m"
static void MR_CALL 
ll_backend__ll_pseudo_type_info__convert_compound_type_info_7_p_0(
#line 161 "ll_pseudo_type_info.m"
  MR_Word ll_backend__ll_pseudo_type_info__RttiTypeCtor_8,
#line 161 "ll_pseudo_type_info.m"
  MR_Word ll_backend__ll_pseudo_type_info__ArgRvals0_9,
#line 161 "ll_pseudo_type_info.m"
  MR_Word ll_backend__ll_pseudo_type_info__Args_10,
#line 161 "ll_pseudo_type_info.m"
  MR_Word ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_0_25,
#line 161 "ll_pseudo_type_info.m"
  MR_Word * ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_26,
#line 161 "ll_pseudo_type_info.m"
  MR_Word * ll_backend__ll_pseudo_type_info__Rval_12,
#line 161 "ll_pseudo_type_info.m"
  MR_Word * ll_backend__ll_pseudo_type_info__LldsType_13);

#line 147 "ll_pseudo_type_info.m"
static void MR_CALL 
ll_backend__ll_pseudo_type_info__convert_compound_pseudo_type_info_7_p_0_1(
#line 147 "ll_pseudo_type_info.m"
  MR_Box ll_backend__ll_pseudo_type_info__closure_arg,
#line 147 "ll_pseudo_type_info.m"
  MR_Box ll_backend__ll_pseudo_type_info__wrapper_arg_1,
#line 147 "ll_pseudo_type_info.m"
  MR_Box * ll_backend__ll_pseudo_type_info__wrapper_arg_2,
#line 147 "ll_pseudo_type_info.m"
  MR_Box ll_backend__ll_pseudo_type_info__wrapper_arg_3,
#line 147 "ll_pseudo_type_info.m"
  MR_Box * ll_backend__ll_pseudo_type_info__wrapper_arg_4);

#line 136 "ll_pseudo_type_info.m"
static void MR_CALL 
ll_backend__ll_pseudo_type_info__convert_compound_pseudo_type_info_7_p_0(
#line 136 "ll_pseudo_type_info.m"
  MR_Word ll_backend__ll_pseudo_type_info__RttiTypeCtor_8,
#line 136 "ll_pseudo_type_info.m"
  MR_Word ll_backend__ll_pseudo_type_info__ArgRvals0_9,
#line 136 "ll_pseudo_type_info.m"
  MR_Word ll_backend__ll_pseudo_type_info__Args_10,
#line 136 "ll_pseudo_type_info.m"
  MR_Word ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_0_26,
#line 136 "ll_pseudo_type_info.m"
  MR_Word * ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_27,
#line 136 "ll_pseudo_type_info.m"
  MR_Word * ll_backend__ll_pseudo_type_info__Rval_12,
#line 136 "ll_pseudo_type_info.m"
  MR_Word * ll_backend__ll_pseudo_type_info__LldsType_13);

#line 84 "ll_pseudo_type_info.m"
static void MR_CALL 
ll_backend__ll_pseudo_type_info__convert_pseudo_type_info_5_p_0(
#line 84 "ll_pseudo_type_info.m"
  MR_Word ll_backend__ll_pseudo_type_info__Pseudo_6,
#line 84 "ll_pseudo_type_info.m"
  MR_Word ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_0_17,
#line 84 "ll_pseudo_type_info.m"
  MR_Word * ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_18,
#line 84 "ll_pseudo_type_info.m"
  MR_Word * ll_backend__ll_pseudo_type_info__Rval_8,
#line 84 "ll_pseudo_type_info.m"
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



#line 174 "ll_pseudo_type_info.m"
static void MR_CALL 
ll_backend__ll_pseudo_type_info__IntroducedFrom__pred__convert_compound_type_info__174__1_4_p_0(
#line 174 "ll_pseudo_type_info.m"
  MR_Word ll_backend__ll_pseudo_type_info__LambdaHeadVar__1_33,
#line 174 "ll_pseudo_type_info.m"
  MR_Word * ll_backend__ll_pseudo_type_info__LambdaHeadVar__2_34,
#line 174 "ll_pseudo_type_info.m"
  MR_Word ll_backend__ll_pseudo_type_info__LambdaHeadVar__3_35,
#line 174 "ll_pseudo_type_info.m"
  MR_Word * ll_backend__ll_pseudo_type_info__LambdaHeadVar__4_36)
#line 174 "ll_pseudo_type_info.m"
{
#line 118 "ll_pseudo_type_info.m"
  {
#line 118 "ll_pseudo_type_info.m"
    MR_bool ll_backend__ll_pseudo_type_info__succeeded;

#line 118 "ll_pseudo_type_info.m"
#line 118 "ll_pseudo_type_info.m"
    switch (MR_tag((MR_Word) ll_backend__ll_pseudo_type_info__LambdaHeadVar__1_33)) {
#line 118 "ll_pseudo_type_info.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 118 "ll_pseudo_type_info.m"
      case (MR_Integer) 0:
#line 118 "ll_pseudo_type_info.m"
        {
#line 118 "ll_pseudo_type_info.m"
          MR_Word ll_backend__ll_pseudo_type_info__RttiTypeCtor_54 = (MR_Word) MR_body(((MR_Word) ll_backend__ll_pseudo_type_info__LambdaHeadVar__1_33), (MR_Integer) 0);
#line 118 "ll_pseudo_type_info.m"
          MR_Word ll_backend__ll_pseudo_type_info__DataId_55;
#line 118 "ll_pseudo_type_info.m"
          MR_Word ll_backend__ll_pseudo_type_info__V_66_66;
#line 118 "ll_pseudo_type_info.m"
          MR_Word ll_backend__ll_pseudo_type_info__V_67_67;
#line 118 "ll_pseudo_type_info.m"
          MR_Word ll_backend__ll_pseudo_type_info__V_68_68;

#line 120 "ll_pseudo_type_info.m"
          {
#line 120 "ll_pseudo_type_info.m"
            ll_backend__ll_pseudo_type_info__V_67_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 120 "ll_pseudo_type_info.m"
            MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__V_67_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
#line 120 "ll_pseudo_type_info.m"
            MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__V_67_67, 1) = ((MR_Box) (ll_backend__ll_pseudo_type_info__LambdaHeadVar__1_33));
#line 120 "ll_pseudo_type_info.m"
          }
#line 119 "ll_pseudo_type_info.m"
          {
#line 119 "ll_pseudo_type_info.m"
            ll_backend__ll_pseudo_type_info__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 119 "ll_pseudo_type_info.m"
            MR_hl_field(MR_mktag(0), ll_backend__ll_pseudo_type_info__V_66_66, 0) = ((MR_Box) (ll_backend__ll_pseudo_type_info__RttiTypeCtor_54));
#line 119 "ll_pseudo_type_info.m"
            MR_hl_field(MR_mktag(0), ll_backend__ll_pseudo_type_info__V_66_66, 1) = ((MR_Box) (ll_backend__ll_pseudo_type_info__V_67_67));
#line 119 "ll_pseudo_type_info.m"
          }
#line 119 "ll_pseudo_type_info.m"
          {
#line 119 "ll_pseudo_type_info.m"
            ll_backend__ll_pseudo_type_info__DataId_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 119 "ll_pseudo_type_info.m"
            MR_hl_field(MR_mktag(0), ll_backend__ll_pseudo_type_info__DataId_55, 0) = ((MR_Box) (ll_backend__ll_pseudo_type_info__V_66_66));
#line 119 "ll_pseudo_type_info.m"
          }
#line 121 "ll_pseudo_type_info.m"
          {
#line 121 "ll_pseudo_type_info.m"
            ll_backend__ll_pseudo_type_info__V_68_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 121 "ll_pseudo_type_info.m"
            MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__V_68_68, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 121 "ll_pseudo_type_info.m"
            MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__V_68_68, 1) = ((MR_Box) (ll_backend__ll_pseudo_type_info__DataId_55));
#line 121 "ll_pseudo_type_info.m"
            MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__V_68_68, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 121 "ll_pseudo_type_info.m"
          }
#line 121 "ll_pseudo_type_info.m"
          {
#line 121 "ll_pseudo_type_info.m"
            MR_Word base;
#line 121 "ll_pseudo_type_info.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 121 "ll_pseudo_type_info.m"
            *ll_backend__ll_pseudo_type_info__LambdaHeadVar__2_34 = base;
#line 121 "ll_pseudo_type_info.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 121 "ll_pseudo_type_info.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__ll_pseudo_type_info__V_68_68));
#line 121 "ll_pseudo_type_info.m"
          }
#line 118 "ll_pseudo_type_info.m"
          *ll_backend__ll_pseudo_type_info__LambdaHeadVar__4_36 = ll_backend__ll_pseudo_type_info__LambdaHeadVar__3_35;
#line 118 "ll_pseudo_type_info.m"
        }
#line 118 "ll_pseudo_type_info.m"
        break;
#line 118 "ll_pseudo_type_info.m"
      case (MR_Integer) 1:
#line 124 "ll_pseudo_type_info.m"
        {
#line 124 "ll_pseudo_type_info.m"
          MR_Word ll_backend__ll_pseudo_type_info__Args_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__ll_pseudo_type_info__LambdaHeadVar__1_33, (MR_Integer) 1)));
#line 124 "ll_pseudo_type_info.m"
          MR_Word ll_backend__ll_pseudo_type_info__RttiTypeCtor_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__ll_pseudo_type_info__LambdaHeadVar__1_33, (MR_Integer) 0)));
#line 125 "ll_pseudo_type_info.m"
          MR_Word ll_backend__ll_pseudo_type_info___LldsType_74;

#line 125 "ll_pseudo_type_info.m"
          {
#line 125 "ll_pseudo_type_info.m"
            ll_backend__ll_pseudo_type_info__convert_compound_type_info_7_p_0(ll_backend__ll_pseudo_type_info__RttiTypeCtor_70, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__ll_pseudo_type_info__Args_56, ll_backend__ll_pseudo_type_info__LambdaHeadVar__3_35, ll_backend__ll_pseudo_type_info__LambdaHeadVar__4_36, ll_backend__ll_pseudo_type_info__LambdaHeadVar__2_34, &ll_backend__ll_pseudo_type_info___LldsType_74);
          }
#line 124 "ll_pseudo_type_info.m"
        }
#line 118 "ll_pseudo_type_info.m"
        break;
#line 118 "ll_pseudo_type_info.m"
      case (MR_Integer) 2:
#line 128 "ll_pseudo_type_info.m"
        {
#line 128 "ll_pseudo_type_info.m"
          MR_Word ll_backend__ll_pseudo_type_info__VarArityId_57 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__ll_pseudo_type_info__LambdaHeadVar__1_33, (MR_Integer) 0)));
#line 128 "ll_pseudo_type_info.m"
          MR_Integer ll_backend__ll_pseudo_type_info__Arity_58;
#line 128 "ll_pseudo_type_info.m"
          MR_Word ll_backend__ll_pseudo_type_info__ArityArg_59;
#line 128 "ll_pseudo_type_info.m"
          MR_Word ll_backend__ll_pseudo_type_info__V_60_60;
#line 128 "ll_pseudo_type_info.m"
          MR_Word ll_backend__ll_pseudo_type_info__V_61_61;
#line 128 "ll_pseudo_type_info.m"
          MR_Word ll_backend__ll_pseudo_type_info__RttiTypeCtor_71;
#line 128 "ll_pseudo_type_info.m"
          MR_Word ll_backend__ll_pseudo_type_info__Args_72 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__ll_pseudo_type_info__LambdaHeadVar__1_33, (MR_Integer) 1)));
#line 132 "ll_pseudo_type_info.m"
          MR_Word ll_backend__ll_pseudo_type_info___LldsType_76;

#line 129 "ll_pseudo_type_info.m"
          {
#line 129 "ll_pseudo_type_info.m"
            mercury__list__length_2_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_info_0, ll_backend__ll_pseudo_type_info__Args_72, &ll_backend__ll_pseudo_type_info__Arity_58);
          }
#line 130 "ll_pseudo_type_info.m"
          {
#line 130 "ll_pseudo_type_info.m"
            ll_backend__ll_pseudo_type_info__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 130 "ll_pseudo_type_info.m"
            MR_hl_field(MR_mktag(1), ll_backend__ll_pseudo_type_info__V_60_60, 0) = ((MR_Box) (ll_backend__ll_pseudo_type_info__Arity_58));
#line 130 "ll_pseudo_type_info.m"
          }
#line 130 "ll_pseudo_type_info.m"
          {
#line 130 "ll_pseudo_type_info.m"
            ll_backend__ll_pseudo_type_info__ArityArg_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 130 "ll_pseudo_type_info.m"
            MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__ArityArg_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 130 "ll_pseudo_type_info.m"
            MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__ArityArg_59, 1) = ((MR_Box) (ll_backend__ll_pseudo_type_info__V_60_60));
#line 130 "ll_pseudo_type_info.m"
          }
#line 131 "ll_pseudo_type_info.m"
          {
#line 131 "ll_pseudo_type_info.m"
            ll_backend__ll_pseudo_type_info__RttiTypeCtor_71 = backend_libs__rtti__var_arity_id_to_rtti_type_ctor_1_f_0(ll_backend__ll_pseudo_type_info__VarArityId_57);
          }
#line 132 "ll_pseudo_type_info.m"
          {
#line 132 "ll_pseudo_type_info.m"
            ll_backend__ll_pseudo_type_info__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 132 "ll_pseudo_type_info.m"
            MR_hl_field(MR_mktag(1), ll_backend__ll_pseudo_type_info__V_61_61, 0) = ((MR_Box) (ll_backend__ll_pseudo_type_info__ArityArg_59));
#line 132 "ll_pseudo_type_info.m"
            MR_hl_field(MR_mktag(1), ll_backend__ll_pseudo_type_info__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 132 "ll_pseudo_type_info.m"
          }
#line 132 "ll_pseudo_type_info.m"
          {
#line 132 "ll_pseudo_type_info.m"
            ll_backend__ll_pseudo_type_info__convert_compound_type_info_7_p_0(ll_backend__ll_pseudo_type_info__RttiTypeCtor_71, ll_backend__ll_pseudo_type_info__V_61_61, ll_backend__ll_pseudo_type_info__Args_72, ll_backend__ll_pseudo_type_info__LambdaHeadVar__3_35, ll_backend__ll_pseudo_type_info__LambdaHeadVar__4_36, ll_backend__ll_pseudo_type_info__LambdaHeadVar__2_34, &ll_backend__ll_pseudo_type_info___LldsType_76);
          }
#line 128 "ll_pseudo_type_info.m"
        }
#line 118 "ll_pseudo_type_info.m"
        break;
#line 118 "ll_pseudo_type_info.m"
    }
#line 118 "ll_pseudo_type_info.m"
  }
#line 174 "ll_pseudo_type_info.m"
}

#line 151 "ll_pseudo_type_info.m"
static void MR_CALL 
ll_backend__ll_pseudo_type_info__IntroducedFrom__pred__convert_compound_pseudo_type_info__151__1_4_p_0(
#line 151 "ll_pseudo_type_info.m"
  MR_Word ll_backend__ll_pseudo_type_info__LambdaHeadVar__1_34,
#line 151 "ll_pseudo_type_info.m"
  MR_Word * ll_backend__ll_pseudo_type_info__LambdaHeadVar__2_35,
#line 151 "ll_pseudo_type_info.m"
  MR_Word ll_backend__ll_pseudo_type_info__LambdaHeadVar__3_36,
#line 151 "ll_pseudo_type_info.m"
  MR_Word * ll_backend__ll_pseudo_type_info__LambdaHeadVar__4_37)
#line 151 "ll_pseudo_type_info.m"
{
#line 151 "ll_pseudo_type_info.m"
  {
#line 151 "ll_pseudo_type_info.m"
    MR_bool ll_backend__ll_pseudo_type_info__succeeded;

#line 151 "ll_pseudo_type_info.m"
    if (((MR_tag((MR_Word) ll_backend__ll_pseudo_type_info__LambdaHeadVar__1_34)) == (MR_mktag((MR_Integer) 1))))
#line 152 "ll_pseudo_type_info.m"
      {
#line 152 "ll_pseudo_type_info.m"
        MR_Word ll_backend__ll_pseudo_type_info__TI_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__ll_pseudo_type_info__LambdaHeadVar__1_34, (MR_Integer) 0)));

#line 118 "ll_pseudo_type_info.m"
#line 118 "ll_pseudo_type_info.m"
        switch (MR_tag((MR_Word) ll_backend__ll_pseudo_type_info__TI_22)) {
#line 118 "ll_pseudo_type_info.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 118 "ll_pseudo_type_info.m"
          case (MR_Integer) 0:
#line 118 "ll_pseudo_type_info.m"
            {
#line 118 "ll_pseudo_type_info.m"
              MR_Word ll_backend__ll_pseudo_type_info__RttiTypeCtor_57 = (MR_Word) MR_body(((MR_Word) ll_backend__ll_pseudo_type_info__TI_22), (MR_Integer) 0);
#line 118 "ll_pseudo_type_info.m"
              MR_Word ll_backend__ll_pseudo_type_info__DataId_58;
#line 118 "ll_pseudo_type_info.m"
              MR_Word ll_backend__ll_pseudo_type_info__V_69_69;
#line 118 "ll_pseudo_type_info.m"
              MR_Word ll_backend__ll_pseudo_type_info__V_70_70;
#line 118 "ll_pseudo_type_info.m"
              MR_Word ll_backend__ll_pseudo_type_info__V_71_71;

#line 120 "ll_pseudo_type_info.m"
              {
#line 120 "ll_pseudo_type_info.m"
                ll_backend__ll_pseudo_type_info__V_70_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 120 "ll_pseudo_type_info.m"
                MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__V_70_70, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
#line 120 "ll_pseudo_type_info.m"
                MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__V_70_70, 1) = ((MR_Box) (ll_backend__ll_pseudo_type_info__TI_22));
#line 120 "ll_pseudo_type_info.m"
              }
#line 119 "ll_pseudo_type_info.m"
              {
#line 119 "ll_pseudo_type_info.m"
                ll_backend__ll_pseudo_type_info__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 119 "ll_pseudo_type_info.m"
                MR_hl_field(MR_mktag(0), ll_backend__ll_pseudo_type_info__V_69_69, 0) = ((MR_Box) (ll_backend__ll_pseudo_type_info__RttiTypeCtor_57));
#line 119 "ll_pseudo_type_info.m"
                MR_hl_field(MR_mktag(0), ll_backend__ll_pseudo_type_info__V_69_69, 1) = ((MR_Box) (ll_backend__ll_pseudo_type_info__V_70_70));
#line 119 "ll_pseudo_type_info.m"
              }
#line 119 "ll_pseudo_type_info.m"
              {
#line 119 "ll_pseudo_type_info.m"
                ll_backend__ll_pseudo_type_info__DataId_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 119 "ll_pseudo_type_info.m"
                MR_hl_field(MR_mktag(0), ll_backend__ll_pseudo_type_info__DataId_58, 0) = ((MR_Box) (ll_backend__ll_pseudo_type_info__V_69_69));
#line 119 "ll_pseudo_type_info.m"
              }
#line 121 "ll_pseudo_type_info.m"
              {
#line 121 "ll_pseudo_type_info.m"
                ll_backend__ll_pseudo_type_info__V_71_71 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 121 "ll_pseudo_type_info.m"
                MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__V_71_71, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 121 "ll_pseudo_type_info.m"
                MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__V_71_71, 1) = ((MR_Box) (ll_backend__ll_pseudo_type_info__DataId_58));
#line 121 "ll_pseudo_type_info.m"
                MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__V_71_71, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 121 "ll_pseudo_type_info.m"
              }
#line 121 "ll_pseudo_type_info.m"
              {
#line 121 "ll_pseudo_type_info.m"
                MR_Word base;
#line 121 "ll_pseudo_type_info.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 121 "ll_pseudo_type_info.m"
                *ll_backend__ll_pseudo_type_info__LambdaHeadVar__2_35 = base;
#line 121 "ll_pseudo_type_info.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 121 "ll_pseudo_type_info.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__ll_pseudo_type_info__V_71_71));
#line 121 "ll_pseudo_type_info.m"
              }
#line 118 "ll_pseudo_type_info.m"
              *ll_backend__ll_pseudo_type_info__LambdaHeadVar__4_37 = ll_backend__ll_pseudo_type_info__LambdaHeadVar__3_36;
#line 118 "ll_pseudo_type_info.m"
            }
#line 118 "ll_pseudo_type_info.m"
            break;
#line 118 "ll_pseudo_type_info.m"
          case (MR_Integer) 1:
#line 124 "ll_pseudo_type_info.m"
            {
#line 124 "ll_pseudo_type_info.m"
              MR_Word ll_backend__ll_pseudo_type_info__Args_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__ll_pseudo_type_info__TI_22, (MR_Integer) 1)));
#line 124 "ll_pseudo_type_info.m"
              MR_Word ll_backend__ll_pseudo_type_info__RttiTypeCtor_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__ll_pseudo_type_info__TI_22, (MR_Integer) 0)));
#line 125 "ll_pseudo_type_info.m"
              MR_Word ll_backend__ll_pseudo_type_info___LldsType_77;

#line 125 "ll_pseudo_type_info.m"
              {
#line 125 "ll_pseudo_type_info.m"
                ll_backend__ll_pseudo_type_info__convert_compound_type_info_7_p_0(ll_backend__ll_pseudo_type_info__RttiTypeCtor_73, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__ll_pseudo_type_info__Args_59, ll_backend__ll_pseudo_type_info__LambdaHeadVar__3_36, ll_backend__ll_pseudo_type_info__LambdaHeadVar__4_37, ll_backend__ll_pseudo_type_info__LambdaHeadVar__2_35, &ll_backend__ll_pseudo_type_info___LldsType_77);
              }
#line 124 "ll_pseudo_type_info.m"
            }
#line 118 "ll_pseudo_type_info.m"
            break;
#line 118 "ll_pseudo_type_info.m"
          case (MR_Integer) 2:
#line 128 "ll_pseudo_type_info.m"
            {
#line 128 "ll_pseudo_type_info.m"
              MR_Word ll_backend__ll_pseudo_type_info__VarArityId_60 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__ll_pseudo_type_info__TI_22, (MR_Integer) 0)));
#line 128 "ll_pseudo_type_info.m"
              MR_Integer ll_backend__ll_pseudo_type_info__Arity_61;
#line 128 "ll_pseudo_type_info.m"
              MR_Word ll_backend__ll_pseudo_type_info__ArityArg_62;
#line 128 "ll_pseudo_type_info.m"
              MR_Word ll_backend__ll_pseudo_type_info__V_63_63;
#line 128 "ll_pseudo_type_info.m"
              MR_Word ll_backend__ll_pseudo_type_info__V_64_64;
#line 128 "ll_pseudo_type_info.m"
              MR_Word ll_backend__ll_pseudo_type_info__RttiTypeCtor_74;
#line 128 "ll_pseudo_type_info.m"
              MR_Word ll_backend__ll_pseudo_type_info__Args_75 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__ll_pseudo_type_info__TI_22, (MR_Integer) 1)));
#line 132 "ll_pseudo_type_info.m"
              MR_Word ll_backend__ll_pseudo_type_info___LldsType_79;

#line 129 "ll_pseudo_type_info.m"
              {
#line 129 "ll_pseudo_type_info.m"
                mercury__list__length_2_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_info_0, ll_backend__ll_pseudo_type_info__Args_75, &ll_backend__ll_pseudo_type_info__Arity_61);
              }
#line 130 "ll_pseudo_type_info.m"
              {
#line 130 "ll_pseudo_type_info.m"
                ll_backend__ll_pseudo_type_info__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 130 "ll_pseudo_type_info.m"
                MR_hl_field(MR_mktag(1), ll_backend__ll_pseudo_type_info__V_63_63, 0) = ((MR_Box) (ll_backend__ll_pseudo_type_info__Arity_61));
#line 130 "ll_pseudo_type_info.m"
              }
#line 130 "ll_pseudo_type_info.m"
              {
#line 130 "ll_pseudo_type_info.m"
                ll_backend__ll_pseudo_type_info__ArityArg_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 130 "ll_pseudo_type_info.m"
                MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__ArityArg_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 130 "ll_pseudo_type_info.m"
                MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__ArityArg_62, 1) = ((MR_Box) (ll_backend__ll_pseudo_type_info__V_63_63));
#line 130 "ll_pseudo_type_info.m"
              }
#line 131 "ll_pseudo_type_info.m"
              {
#line 131 "ll_pseudo_type_info.m"
                ll_backend__ll_pseudo_type_info__RttiTypeCtor_74 = backend_libs__rtti__var_arity_id_to_rtti_type_ctor_1_f_0(ll_backend__ll_pseudo_type_info__VarArityId_60);
              }
#line 132 "ll_pseudo_type_info.m"
              {
#line 132 "ll_pseudo_type_info.m"
                ll_backend__ll_pseudo_type_info__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 132 "ll_pseudo_type_info.m"
                MR_hl_field(MR_mktag(1), ll_backend__ll_pseudo_type_info__V_64_64, 0) = ((MR_Box) (ll_backend__ll_pseudo_type_info__ArityArg_62));
#line 132 "ll_pseudo_type_info.m"
                MR_hl_field(MR_mktag(1), ll_backend__ll_pseudo_type_info__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 132 "ll_pseudo_type_info.m"
              }
#line 132 "ll_pseudo_type_info.m"
              {
#line 132 "ll_pseudo_type_info.m"
                ll_backend__ll_pseudo_type_info__convert_compound_type_info_7_p_0(ll_backend__ll_pseudo_type_info__RttiTypeCtor_74, ll_backend__ll_pseudo_type_info__V_64_64, ll_backend__ll_pseudo_type_info__Args_75, ll_backend__ll_pseudo_type_info__LambdaHeadVar__3_36, ll_backend__ll_pseudo_type_info__LambdaHeadVar__4_37, ll_backend__ll_pseudo_type_info__LambdaHeadVar__2_35, &ll_backend__ll_pseudo_type_info___LldsType_79);
              }
#line 128 "ll_pseudo_type_info.m"
            }
#line 118 "ll_pseudo_type_info.m"
            break;
#line 118 "ll_pseudo_type_info.m"
        }
#line 152 "ll_pseudo_type_info.m"
      }
#line 151 "ll_pseudo_type_info.m"
    else
#line 149 "ll_pseudo_type_info.m"
      {
#line 149 "ll_pseudo_type_info.m"
        MR_Word ll_backend__ll_pseudo_type_info__PTI_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__ll_pseudo_type_info__LambdaHeadVar__1_34, (MR_Integer) 0)));
#line 150 "ll_pseudo_type_info.m"
        MR_Word ll_backend__ll_pseudo_type_info___LldsType_21;

#line 150 "ll_pseudo_type_info.m"
        {
#line 150 "ll_pseudo_type_info.m"
          ll_backend__ll_pseudo_type_info__convert_pseudo_type_info_5_p_0(ll_backend__ll_pseudo_type_info__PTI_20, ll_backend__ll_pseudo_type_info__LambdaHeadVar__3_36, ll_backend__ll_pseudo_type_info__LambdaHeadVar__4_37, ll_backend__ll_pseudo_type_info__LambdaHeadVar__2_35, &ll_backend__ll_pseudo_type_info___LldsType_21);
        }
#line 149 "ll_pseudo_type_info.m"
      }
#line 151 "ll_pseudo_type_info.m"
  }
#line 151 "ll_pseudo_type_info.m"
}

#line 173 "ll_pseudo_type_info.m"
static void MR_CALL 
ll_backend__ll_pseudo_type_info__convert_compound_type_info_7_p_0_1(
#line 173 "ll_pseudo_type_info.m"
  MR_Box ll_backend__ll_pseudo_type_info__closure_arg,
#line 173 "ll_pseudo_type_info.m"
  MR_Box ll_backend__ll_pseudo_type_info__wrapper_arg_1,
#line 173 "ll_pseudo_type_info.m"
  MR_Box * ll_backend__ll_pseudo_type_info__wrapper_arg_2,
#line 173 "ll_pseudo_type_info.m"
  MR_Box ll_backend__ll_pseudo_type_info__wrapper_arg_3,
#line 173 "ll_pseudo_type_info.m"
  MR_Box * ll_backend__ll_pseudo_type_info__wrapper_arg_4)
#line 173 "ll_pseudo_type_info.m"
{
#line 173 "ll_pseudo_type_info.m"
  {
#line 173 "ll_pseudo_type_info.m"
    MR_Box ll_backend__ll_pseudo_type_info__closure = ll_backend__ll_pseudo_type_info__closure_arg;
#line 173 "ll_pseudo_type_info.m"
    MR_Word ll_backend__ll_pseudo_type_info__conv1_LambdaHeadVar__2_34;
#line 173 "ll_pseudo_type_info.m"
    MR_Word ll_backend__ll_pseudo_type_info__conv0_LambdaHeadVar__4_36;

#line 173 "ll_pseudo_type_info.m"
    {
#line 173 "ll_pseudo_type_info.m"
      ll_backend__ll_pseudo_type_info__IntroducedFrom__pred__convert_compound_type_info__174__1_4_p_0(((MR_Word) ll_backend__ll_pseudo_type_info__wrapper_arg_1), &ll_backend__ll_pseudo_type_info__conv1_LambdaHeadVar__2_34, ((MR_Word) ll_backend__ll_pseudo_type_info__wrapper_arg_3), &ll_backend__ll_pseudo_type_info__conv0_LambdaHeadVar__4_36);
    }
#line 173 "ll_pseudo_type_info.m"
    *ll_backend__ll_pseudo_type_info__wrapper_arg_2 = ((MR_Box) (ll_backend__ll_pseudo_type_info__conv1_LambdaHeadVar__2_34));
#line 173 "ll_pseudo_type_info.m"
    *ll_backend__ll_pseudo_type_info__wrapper_arg_4 = ((MR_Box) (ll_backend__ll_pseudo_type_info__conv0_LambdaHeadVar__4_36));
#line 173 "ll_pseudo_type_info.m"
  }
#line 173 "ll_pseudo_type_info.m"
}

#line 161 "ll_pseudo_type_info.m"
static void MR_CALL 
ll_backend__ll_pseudo_type_info__convert_compound_type_info_7_p_0(
#line 161 "ll_pseudo_type_info.m"
  MR_Word ll_backend__ll_pseudo_type_info__RttiTypeCtor_8,
#line 161 "ll_pseudo_type_info.m"
  MR_Word ll_backend__ll_pseudo_type_info__ArgRvals0_9,
#line 161 "ll_pseudo_type_info.m"
  MR_Word ll_backend__ll_pseudo_type_info__Args_10,
#line 161 "ll_pseudo_type_info.m"
  MR_Word ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_0_25,
#line 161 "ll_pseudo_type_info.m"
  MR_Word * ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_26,
#line 161 "ll_pseudo_type_info.m"
  MR_Word * ll_backend__ll_pseudo_type_info__Rval_12,
#line 161 "ll_pseudo_type_info.m"
  MR_Word * ll_backend__ll_pseudo_type_info__LldsType_13)
#line 161 "ll_pseudo_type_info.m"
{
#line 166 "ll_pseudo_type_info.m"
  {
#line 166 "ll_pseudo_type_info.m"
    MR_bool ll_backend__ll_pseudo_type_info__succeeded;
#line 166 "ll_pseudo_type_info.m"
    MR_Word ll_backend__ll_pseudo_type_info__TypeCtorInfo_46_46;
#line 166 "ll_pseudo_type_info.m"
    MR_Word ll_backend__ll_pseudo_type_info__TypeCtorInfoData_14;
#line 166 "ll_pseudo_type_info.m"
    MR_Word ll_backend__ll_pseudo_type_info__TypeCtorInfoDataId_15;
#line 166 "ll_pseudo_type_info.m"
    MR_Word ll_backend__ll_pseudo_type_info__TypeCtorInfoRval_16;
#line 166 "ll_pseudo_type_info.m"
    MR_Word ll_backend__ll_pseudo_type_info__ArgRvals1_22;
#line 166 "ll_pseudo_type_info.m"
    MR_Word ll_backend__ll_pseudo_type_info__ArgRvals_23;
#line 166 "ll_pseudo_type_info.m"
    MR_Word ll_backend__ll_pseudo_type_info__DataId_24;
#line 166 "ll_pseudo_type_info.m"
    MR_Word ll_backend__ll_pseudo_type_info__V_27_27 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) ll_backend__ll_pseudo_type_info__RttiTypeCtor_8);
#line 166 "ll_pseudo_type_info.m"
    MR_Word ll_backend__ll_pseudo_type_info__V_28_28;
#line 166 "ll_pseudo_type_info.m"
    MR_Word ll_backend__ll_pseudo_type_info__V_29_29;
#line 166 "ll_pseudo_type_info.m"
    MR_Word ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_32_32;
#line 166 "ll_pseudo_type_info.m"
    MR_Word ll_backend__ll_pseudo_type_info__V_37_37;
#line 166 "ll_pseudo_type_info.m"
    MR_Word ll_backend__ll_pseudo_type_info__V_39_39;
#line 173 "ll_pseudo_type_info.m"
    MR_Box ll_backend__ll_pseudo_type_info__conv2_STATE_VARIABLE_StaticCellInfo_32_32;

#line 167 "ll_pseudo_type_info.m"
    {
#line 167 "ll_pseudo_type_info.m"
      ll_backend__ll_pseudo_type_info__TypeCtorInfoData_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 167 "ll_pseudo_type_info.m"
      MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__TypeCtorInfoData_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
#line 167 "ll_pseudo_type_info.m"
      MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__TypeCtorInfoData_14, 1) = ((MR_Box) (ll_backend__ll_pseudo_type_info__V_27_27));
#line 167 "ll_pseudo_type_info.m"
    }
#line 170 "ll_pseudo_type_info.m"
    {
#line 170 "ll_pseudo_type_info.m"
      ll_backend__ll_pseudo_type_info__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 170 "ll_pseudo_type_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__ll_pseudo_type_info__V_28_28, 0) = ((MR_Box) (ll_backend__ll_pseudo_type_info__RttiTypeCtor_8));
#line 170 "ll_pseudo_type_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__ll_pseudo_type_info__V_28_28, 1) = ((MR_Box) (ll_backend__ll_pseudo_type_info__TypeCtorInfoData_14));
#line 170 "ll_pseudo_type_info.m"
    }
#line 169 "ll_pseudo_type_info.m"
    {
#line 169 "ll_pseudo_type_info.m"
      ll_backend__ll_pseudo_type_info__TypeCtorInfoDataId_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 169 "ll_pseudo_type_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__ll_pseudo_type_info__TypeCtorInfoDataId_15, 0) = ((MR_Box) (ll_backend__ll_pseudo_type_info__V_28_28));
#line 169 "ll_pseudo_type_info.m"
    }
#line 171 "ll_pseudo_type_info.m"
    {
#line 171 "ll_pseudo_type_info.m"
      ll_backend__ll_pseudo_type_info__V_29_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 171 "ll_pseudo_type_info.m"
      MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__V_29_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 171 "ll_pseudo_type_info.m"
      MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__V_29_29, 1) = ((MR_Box) (ll_backend__ll_pseudo_type_info__TypeCtorInfoDataId_15));
#line 171 "ll_pseudo_type_info.m"
      MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__V_29_29, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 171 "ll_pseudo_type_info.m"
    }
#line 171 "ll_pseudo_type_info.m"
    {
#line 171 "ll_pseudo_type_info.m"
      ll_backend__ll_pseudo_type_info__TypeCtorInfoRval_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 171 "ll_pseudo_type_info.m"
      MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__TypeCtorInfoRval_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 171 "ll_pseudo_type_info.m"
      MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__TypeCtorInfoRval_16, 1) = ((MR_Box) (ll_backend__ll_pseudo_type_info__V_29_29));
#line 171 "ll_pseudo_type_info.m"
    }
#line 172 "ll_pseudo_type_info.m"
    *ll_backend__ll_pseudo_type_info__LldsType_13 = (MR_Integer) 11;
#line 866 "ll_backend.ll_pseudo_type_info.c"
    ll_backend__ll_pseudo_type_info__TypeCtorInfo_46_46 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0;
#line 173 "ll_pseudo_type_info.m"
    {
#line 173 "ll_pseudo_type_info.m"
      mercury__list__map_foldl_5_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_info_0, ll_backend__ll_pseudo_type_info__TypeCtorInfo_46_46, (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_info_0, (MR_Word) &ll_backend__ll_pseudo_type_info_scalar_common_2[1], ll_backend__ll_pseudo_type_info__Args_10, &ll_backend__ll_pseudo_type_info__ArgRvals1_22, ((MR_Box) (ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_0_25)), &ll_backend__ll_pseudo_type_info__conv2_STATE_VARIABLE_StaticCellInfo_32_32);
    }
#line 173 "ll_pseudo_type_info.m"
    ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_32_32 = ((MR_Word) ll_backend__ll_pseudo_type_info__conv2_STATE_VARIABLE_StaticCellInfo_32_32);
#line 176 "ll_pseudo_type_info.m"
    {
#line 176 "ll_pseudo_type_info.m"
      mercury__list__append_3_p_1(ll_backend__ll_pseudo_type_info__TypeCtorInfo_46_46, ll_backend__ll_pseudo_type_info__ArgRvals0_9, ll_backend__ll_pseudo_type_info__ArgRvals1_22, &ll_backend__ll_pseudo_type_info__ArgRvals_23);
    }
#line 177 "ll_pseudo_type_info.m"
    {
#line 177 "ll_pseudo_type_info.m"
      ll_backend__ll_pseudo_type_info__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 177 "ll_pseudo_type_info.m"
      MR_hl_field(MR_mktag(1), ll_backend__ll_pseudo_type_info__V_37_37, 0) = ((MR_Box) (ll_backend__ll_pseudo_type_info__TypeCtorInfoRval_16));
#line 177 "ll_pseudo_type_info.m"
      MR_hl_field(MR_mktag(1), ll_backend__ll_pseudo_type_info__V_37_37, 1) = ((MR_Box) (ll_backend__ll_pseudo_type_info__ArgRvals_23));
#line 177 "ll_pseudo_type_info.m"
    }
#line 177 "ll_pseudo_type_info.m"
    {
#line 177 "ll_pseudo_type_info.m"
      ll_backend__global_data__add_scalar_static_cell_natural_types_4_p_0(ll_backend__ll_pseudo_type_info__V_37_37, &ll_backend__ll_pseudo_type_info__DataId_24, ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_32_32, ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_26);
    }
#line 179 "ll_pseudo_type_info.m"
    {
#line 179 "ll_pseudo_type_info.m"
      ll_backend__ll_pseudo_type_info__V_39_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 179 "ll_pseudo_type_info.m"
      MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__V_39_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 179 "ll_pseudo_type_info.m"
      MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__V_39_39, 1) = ((MR_Box) (ll_backend__ll_pseudo_type_info__DataId_24));
#line 179 "ll_pseudo_type_info.m"
      MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__V_39_39, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 179 "ll_pseudo_type_info.m"
    }
#line 179 "ll_pseudo_type_info.m"
    {
#line 179 "ll_pseudo_type_info.m"
      MR_Word base;
#line 179 "ll_pseudo_type_info.m"
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 179 "ll_pseudo_type_info.m"
      *ll_backend__ll_pseudo_type_info__Rval_12 = base;
#line 179 "ll_pseudo_type_info.m"
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 179 "ll_pseudo_type_info.m"
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__ll_pseudo_type_info__V_39_39));
#line 179 "ll_pseudo_type_info.m"
    }
#line 166 "ll_pseudo_type_info.m"
  }
#line 161 "ll_pseudo_type_info.m"
}

#line 147 "ll_pseudo_type_info.m"
static void MR_CALL 
ll_backend__ll_pseudo_type_info__convert_compound_pseudo_type_info_7_p_0_1(
#line 147 "ll_pseudo_type_info.m"
  MR_Box ll_backend__ll_pseudo_type_info__closure_arg,
#line 147 "ll_pseudo_type_info.m"
  MR_Box ll_backend__ll_pseudo_type_info__wrapper_arg_1,
#line 147 "ll_pseudo_type_info.m"
  MR_Box * ll_backend__ll_pseudo_type_info__wrapper_arg_2,
#line 147 "ll_pseudo_type_info.m"
  MR_Box ll_backend__ll_pseudo_type_info__wrapper_arg_3,
#line 147 "ll_pseudo_type_info.m"
  MR_Box * ll_backend__ll_pseudo_type_info__wrapper_arg_4)
#line 147 "ll_pseudo_type_info.m"
{
#line 147 "ll_pseudo_type_info.m"
  {
#line 147 "ll_pseudo_type_info.m"
    MR_Box ll_backend__ll_pseudo_type_info__closure = ll_backend__ll_pseudo_type_info__closure_arg;
#line 147 "ll_pseudo_type_info.m"
    MR_Word ll_backend__ll_pseudo_type_info__conv1_LambdaHeadVar__2_35;
#line 147 "ll_pseudo_type_info.m"
    MR_Word ll_backend__ll_pseudo_type_info__conv0_LambdaHeadVar__4_37;

#line 147 "ll_pseudo_type_info.m"
    {
#line 147 "ll_pseudo_type_info.m"
      ll_backend__ll_pseudo_type_info__IntroducedFrom__pred__convert_compound_pseudo_type_info__151__1_4_p_0(((MR_Word) ll_backend__ll_pseudo_type_info__wrapper_arg_1), &ll_backend__ll_pseudo_type_info__conv1_LambdaHeadVar__2_35, ((MR_Word) ll_backend__ll_pseudo_type_info__wrapper_arg_3), &ll_backend__ll_pseudo_type_info__conv0_LambdaHeadVar__4_37);
    }
#line 147 "ll_pseudo_type_info.m"
    *ll_backend__ll_pseudo_type_info__wrapper_arg_2 = ((MR_Box) (ll_backend__ll_pseudo_type_info__conv1_LambdaHeadVar__2_35));
#line 147 "ll_pseudo_type_info.m"
    *ll_backend__ll_pseudo_type_info__wrapper_arg_4 = ((MR_Box) (ll_backend__ll_pseudo_type_info__conv0_LambdaHeadVar__4_37));
#line 147 "ll_pseudo_type_info.m"
  }
#line 147 "ll_pseudo_type_info.m"
}

#line 136 "ll_pseudo_type_info.m"
static void MR_CALL 
ll_backend__ll_pseudo_type_info__convert_compound_pseudo_type_info_7_p_0(
#line 136 "ll_pseudo_type_info.m"
  MR_Word ll_backend__ll_pseudo_type_info__RttiTypeCtor_8,
#line 136 "ll_pseudo_type_info.m"
  MR_Word ll_backend__ll_pseudo_type_info__ArgRvals0_9,
#line 136 "ll_pseudo_type_info.m"
  MR_Word ll_backend__ll_pseudo_type_info__Args_10,
#line 136 "ll_pseudo_type_info.m"
  MR_Word ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_0_26,
#line 136 "ll_pseudo_type_info.m"
  MR_Word * ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_27,
#line 136 "ll_pseudo_type_info.m"
  MR_Word * ll_backend__ll_pseudo_type_info__Rval_12,
#line 136 "ll_pseudo_type_info.m"
  MR_Word * ll_backend__ll_pseudo_type_info__LldsType_13)
#line 136 "ll_pseudo_type_info.m"
{
#line 142 "ll_pseudo_type_info.m"
  {
#line 142 "ll_pseudo_type_info.m"
    MR_bool ll_backend__ll_pseudo_type_info__succeeded;
#line 142 "ll_pseudo_type_info.m"
    MR_Word ll_backend__ll_pseudo_type_info__TypeCtorInfo_49_49;
#line 142 "ll_pseudo_type_info.m"
    MR_Word ll_backend__ll_pseudo_type_info__TypeCtorInfoDataId_14;
#line 142 "ll_pseudo_type_info.m"
    MR_Word ll_backend__ll_pseudo_type_info__TypeCtorInfoRval_15;
#line 142 "ll_pseudo_type_info.m"
    MR_Word ll_backend__ll_pseudo_type_info__ArgRvals1_23;
#line 142 "ll_pseudo_type_info.m"
    MR_Word ll_backend__ll_pseudo_type_info__ArgRvals_24;
#line 142 "ll_pseudo_type_info.m"
    MR_Word ll_backend__ll_pseudo_type_info__DataId_25;
#line 142 "ll_pseudo_type_info.m"
    MR_Word ll_backend__ll_pseudo_type_info__V_28_28;
#line 142 "ll_pseudo_type_info.m"
    MR_Word ll_backend__ll_pseudo_type_info__V_30_30;
#line 142 "ll_pseudo_type_info.m"
    MR_Word ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_33_33;
#line 142 "ll_pseudo_type_info.m"
    MR_Word ll_backend__ll_pseudo_type_info__V_38_38;
#line 142 "ll_pseudo_type_info.m"
    MR_Word ll_backend__ll_pseudo_type_info__V_40_40;
#line 147 "ll_pseudo_type_info.m"
    MR_Box ll_backend__ll_pseudo_type_info__conv2_STATE_VARIABLE_StaticCellInfo_33_33;

#line 144 "ll_pseudo_type_info.m"
    {
#line 144 "ll_pseudo_type_info.m"
      ll_backend__ll_pseudo_type_info__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 144 "ll_pseudo_type_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__ll_pseudo_type_info__V_28_28, 0) = ((MR_Box) (ll_backend__ll_pseudo_type_info__RttiTypeCtor_8));
#line 144 "ll_pseudo_type_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__ll_pseudo_type_info__V_28_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16))));
#line 144 "ll_pseudo_type_info.m"
    }
#line 143 "ll_pseudo_type_info.m"
    {
#line 143 "ll_pseudo_type_info.m"
      ll_backend__ll_pseudo_type_info__TypeCtorInfoDataId_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 143 "ll_pseudo_type_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__ll_pseudo_type_info__TypeCtorInfoDataId_14, 0) = ((MR_Box) (ll_backend__ll_pseudo_type_info__V_28_28));
#line 143 "ll_pseudo_type_info.m"
    }
#line 145 "ll_pseudo_type_info.m"
    {
#line 145 "ll_pseudo_type_info.m"
      ll_backend__ll_pseudo_type_info__V_30_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 145 "ll_pseudo_type_info.m"
      MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__V_30_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 145 "ll_pseudo_type_info.m"
      MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__V_30_30, 1) = ((MR_Box) (ll_backend__ll_pseudo_type_info__TypeCtorInfoDataId_14));
#line 145 "ll_pseudo_type_info.m"
      MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__V_30_30, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 145 "ll_pseudo_type_info.m"
    }
#line 145 "ll_pseudo_type_info.m"
    {
#line 145 "ll_pseudo_type_info.m"
      ll_backend__ll_pseudo_type_info__TypeCtorInfoRval_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 145 "ll_pseudo_type_info.m"
      MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__TypeCtorInfoRval_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 145 "ll_pseudo_type_info.m"
      MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__TypeCtorInfoRval_15, 1) = ((MR_Box) (ll_backend__ll_pseudo_type_info__V_30_30));
#line 145 "ll_pseudo_type_info.m"
    }
#line 146 "ll_pseudo_type_info.m"
    *ll_backend__ll_pseudo_type_info__LldsType_13 = (MR_Integer) 11;
#line 1054 "ll_backend.ll_pseudo_type_info.c"
    ll_backend__ll_pseudo_type_info__TypeCtorInfo_49_49 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0;
#line 147 "ll_pseudo_type_info.m"
    {
#line 147 "ll_pseudo_type_info.m"
      mercury__list__map_foldl_5_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0, ll_backend__ll_pseudo_type_info__TypeCtorInfo_49_49, (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_info_0, (MR_Word) &ll_backend__ll_pseudo_type_info_scalar_common_2[0], ll_backend__ll_pseudo_type_info__Args_10, &ll_backend__ll_pseudo_type_info__ArgRvals1_23, ((MR_Box) (ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_0_26)), &ll_backend__ll_pseudo_type_info__conv2_STATE_VARIABLE_StaticCellInfo_33_33);
    }
#line 147 "ll_pseudo_type_info.m"
    ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_33_33 = ((MR_Word) ll_backend__ll_pseudo_type_info__conv2_STATE_VARIABLE_StaticCellInfo_33_33);
#line 156 "ll_pseudo_type_info.m"
    {
#line 156 "ll_pseudo_type_info.m"
      mercury__list__append_3_p_1(ll_backend__ll_pseudo_type_info__TypeCtorInfo_49_49, ll_backend__ll_pseudo_type_info__ArgRvals0_9, ll_backend__ll_pseudo_type_info__ArgRvals1_23, &ll_backend__ll_pseudo_type_info__ArgRvals_24);
    }
#line 157 "ll_pseudo_type_info.m"
    {
#line 157 "ll_pseudo_type_info.m"
      ll_backend__ll_pseudo_type_info__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 157 "ll_pseudo_type_info.m"
      MR_hl_field(MR_mktag(1), ll_backend__ll_pseudo_type_info__V_38_38, 0) = ((MR_Box) (ll_backend__ll_pseudo_type_info__TypeCtorInfoRval_15));
#line 157 "ll_pseudo_type_info.m"
      MR_hl_field(MR_mktag(1), ll_backend__ll_pseudo_type_info__V_38_38, 1) = ((MR_Box) (ll_backend__ll_pseudo_type_info__ArgRvals_24));
#line 157 "ll_pseudo_type_info.m"
    }
#line 157 "ll_pseudo_type_info.m"
    {
#line 157 "ll_pseudo_type_info.m"
      ll_backend__global_data__add_scalar_static_cell_natural_types_4_p_0(ll_backend__ll_pseudo_type_info__V_38_38, &ll_backend__ll_pseudo_type_info__DataId_25, ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_33_33, ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_27);
    }
#line 159 "ll_pseudo_type_info.m"
    {
#line 159 "ll_pseudo_type_info.m"
      ll_backend__ll_pseudo_type_info__V_40_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 159 "ll_pseudo_type_info.m"
      MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__V_40_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 159 "ll_pseudo_type_info.m"
      MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__V_40_40, 1) = ((MR_Box) (ll_backend__ll_pseudo_type_info__DataId_25));
#line 159 "ll_pseudo_type_info.m"
      MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__V_40_40, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 159 "ll_pseudo_type_info.m"
    }
#line 159 "ll_pseudo_type_info.m"
    {
#line 159 "ll_pseudo_type_info.m"
      MR_Word base;
#line 159 "ll_pseudo_type_info.m"
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 159 "ll_pseudo_type_info.m"
      *ll_backend__ll_pseudo_type_info__Rval_12 = base;
#line 159 "ll_pseudo_type_info.m"
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 159 "ll_pseudo_type_info.m"
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__ll_pseudo_type_info__V_40_40));
#line 159 "ll_pseudo_type_info.m"
    }
#line 142 "ll_pseudo_type_info.m"
  }
#line 136 "ll_pseudo_type_info.m"
}

#line 84 "ll_pseudo_type_info.m"
static void MR_CALL 
ll_backend__ll_pseudo_type_info__convert_pseudo_type_info_5_p_0(
#line 84 "ll_pseudo_type_info.m"
  MR_Word ll_backend__ll_pseudo_type_info__Pseudo_6,
#line 84 "ll_pseudo_type_info.m"
  MR_Word ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_0_17,
#line 84 "ll_pseudo_type_info.m"
  MR_Word * ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_18,
#line 84 "ll_pseudo_type_info.m"
  MR_Word * ll_backend__ll_pseudo_type_info__Rval_8,
#line 84 "ll_pseudo_type_info.m"
  MR_Word * ll_backend__ll_pseudo_type_info__LldsType_9)
#line 84 "ll_pseudo_type_info.m"
{
#line 90 "ll_pseudo_type_info.m"
  {
#line 90 "ll_pseudo_type_info.m"
    MR_bool ll_backend__ll_pseudo_type_info__succeeded;

#line 90 "ll_pseudo_type_info.m"
#line 90 "ll_pseudo_type_info.m"
    switch (MR_tag((MR_Word) ll_backend__ll_pseudo_type_info__Pseudo_6)) {
#line 90 "ll_pseudo_type_info.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 90 "ll_pseudo_type_info.m"
      case (MR_Integer) 0:
#line 94 "ll_pseudo_type_info.m"
        {
#line 94 "ll_pseudo_type_info.m"
          MR_Word ll_backend__ll_pseudo_type_info__RttiTypeCtor_11 = (MR_Word) MR_body(((MR_Word) ll_backend__ll_pseudo_type_info__Pseudo_6), (MR_Integer) 0);
#line 94 "ll_pseudo_type_info.m"
          MR_Word ll_backend__ll_pseudo_type_info__DataId_12;
#line 94 "ll_pseudo_type_info.m"
          MR_Word ll_backend__ll_pseudo_type_info__V_25_25;
#line 94 "ll_pseudo_type_info.m"
          MR_Word ll_backend__ll_pseudo_type_info__V_26_26;
#line 94 "ll_pseudo_type_info.m"
          MR_Word ll_backend__ll_pseudo_type_info__V_27_27;

#line 96 "ll_pseudo_type_info.m"
          {
#line 96 "ll_pseudo_type_info.m"
            ll_backend__ll_pseudo_type_info__V_26_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 96 "ll_pseudo_type_info.m"
            MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__V_26_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
#line 96 "ll_pseudo_type_info.m"
            MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__V_26_26, 1) = ((MR_Box) (ll_backend__ll_pseudo_type_info__Pseudo_6));
#line 96 "ll_pseudo_type_info.m"
          }
#line 96 "ll_pseudo_type_info.m"
          {
#line 96 "ll_pseudo_type_info.m"
            ll_backend__ll_pseudo_type_info__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 96 "ll_pseudo_type_info.m"
            MR_hl_field(MR_mktag(0), ll_backend__ll_pseudo_type_info__V_25_25, 0) = ((MR_Box) (ll_backend__ll_pseudo_type_info__RttiTypeCtor_11));
#line 96 "ll_pseudo_type_info.m"
            MR_hl_field(MR_mktag(0), ll_backend__ll_pseudo_type_info__V_25_25, 1) = ((MR_Box) (ll_backend__ll_pseudo_type_info__V_26_26));
#line 96 "ll_pseudo_type_info.m"
          }
#line 95 "ll_pseudo_type_info.m"
          {
#line 95 "ll_pseudo_type_info.m"
            ll_backend__ll_pseudo_type_info__DataId_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 95 "ll_pseudo_type_info.m"
            MR_hl_field(MR_mktag(0), ll_backend__ll_pseudo_type_info__DataId_12, 0) = ((MR_Box) (ll_backend__ll_pseudo_type_info__V_25_25));
#line 95 "ll_pseudo_type_info.m"
          }
#line 97 "ll_pseudo_type_info.m"
          {
#line 97 "ll_pseudo_type_info.m"
            ll_backend__ll_pseudo_type_info__V_27_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 97 "ll_pseudo_type_info.m"
            MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__V_27_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 97 "ll_pseudo_type_info.m"
            MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__V_27_27, 1) = ((MR_Box) (ll_backend__ll_pseudo_type_info__DataId_12));
#line 97 "ll_pseudo_type_info.m"
            MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__V_27_27, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 97 "ll_pseudo_type_info.m"
          }
#line 97 "ll_pseudo_type_info.m"
          {
#line 97 "ll_pseudo_type_info.m"
            MR_Word base;
#line 97 "ll_pseudo_type_info.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 97 "ll_pseudo_type_info.m"
            *ll_backend__ll_pseudo_type_info__Rval_8 = base;
#line 97 "ll_pseudo_type_info.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 97 "ll_pseudo_type_info.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__ll_pseudo_type_info__V_27_27));
#line 97 "ll_pseudo_type_info.m"
          }
#line 98 "ll_pseudo_type_info.m"
          *ll_backend__ll_pseudo_type_info__LldsType_9 = (MR_Integer) 11;
#line 94 "ll_pseudo_type_info.m"
          *ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_18 = ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_0_17;
#line 94 "ll_pseudo_type_info.m"
        }
#line 90 "ll_pseudo_type_info.m"
        break;
#line 90 "ll_pseudo_type_info.m"
      case (MR_Integer) 1:
#line 100 "ll_pseudo_type_info.m"
        {
#line 100 "ll_pseudo_type_info.m"
          MR_Word ll_backend__ll_pseudo_type_info__Args_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__ll_pseudo_type_info__Pseudo_6, (MR_Integer) 1)));
#line 100 "ll_pseudo_type_info.m"
          MR_Word ll_backend__ll_pseudo_type_info__RttiTypeCtor_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__ll_pseudo_type_info__Pseudo_6, (MR_Integer) 0)));

#line 101 "ll_pseudo_type_info.m"
          {
#line 101 "ll_pseudo_type_info.m"
            ll_backend__ll_pseudo_type_info__convert_compound_pseudo_type_info_7_p_0(ll_backend__ll_pseudo_type_info__RttiTypeCtor_30, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__ll_pseudo_type_info__Args_13, ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_0_17, ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_18, ll_backend__ll_pseudo_type_info__Rval_8, ll_backend__ll_pseudo_type_info__LldsType_9);
          }
#line 100 "ll_pseudo_type_info.m"
        }
#line 90 "ll_pseudo_type_info.m"
        break;
#line 90 "ll_pseudo_type_info.m"
      case (MR_Integer) 2:
#line 104 "ll_pseudo_type_info.m"
        {
#line 104 "ll_pseudo_type_info.m"
          MR_Word ll_backend__ll_pseudo_type_info__VarArityId_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__ll_pseudo_type_info__Pseudo_6, (MR_Integer) 0)));
#line 104 "ll_pseudo_type_info.m"
          MR_Integer ll_backend__ll_pseudo_type_info__Arity_15;
#line 104 "ll_pseudo_type_info.m"
          MR_Word ll_backend__ll_pseudo_type_info__ArityArg_16;
#line 104 "ll_pseudo_type_info.m"
          MR_Word ll_backend__ll_pseudo_type_info__V_19_19;
#line 104 "ll_pseudo_type_info.m"
          MR_Word ll_backend__ll_pseudo_type_info__V_20_20;
#line 104 "ll_pseudo_type_info.m"
          MR_Word ll_backend__ll_pseudo_type_info__RttiTypeCtor_31;
#line 104 "ll_pseudo_type_info.m"
          MR_Word ll_backend__ll_pseudo_type_info__Args_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__ll_pseudo_type_info__Pseudo_6, (MR_Integer) 1)));

#line 105 "ll_pseudo_type_info.m"
          {
#line 105 "ll_pseudo_type_info.m"
            mercury__list__length_2_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0, ll_backend__ll_pseudo_type_info__Args_32, &ll_backend__ll_pseudo_type_info__Arity_15);
          }
#line 106 "ll_pseudo_type_info.m"
          {
#line 106 "ll_pseudo_type_info.m"
            ll_backend__ll_pseudo_type_info__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 106 "ll_pseudo_type_info.m"
            MR_hl_field(MR_mktag(1), ll_backend__ll_pseudo_type_info__V_19_19, 0) = ((MR_Box) (ll_backend__ll_pseudo_type_info__Arity_15));
#line 106 "ll_pseudo_type_info.m"
          }
#line 106 "ll_pseudo_type_info.m"
          {
#line 106 "ll_pseudo_type_info.m"
            ll_backend__ll_pseudo_type_info__ArityArg_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 106 "ll_pseudo_type_info.m"
            MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__ArityArg_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 106 "ll_pseudo_type_info.m"
            MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__ArityArg_16, 1) = ((MR_Box) (ll_backend__ll_pseudo_type_info__V_19_19));
#line 106 "ll_pseudo_type_info.m"
          }
#line 107 "ll_pseudo_type_info.m"
          {
#line 107 "ll_pseudo_type_info.m"
            ll_backend__ll_pseudo_type_info__RttiTypeCtor_31 = backend_libs__rtti__var_arity_id_to_rtti_type_ctor_1_f_0(ll_backend__ll_pseudo_type_info__VarArityId_14);
          }
#line 108 "ll_pseudo_type_info.m"
          {
#line 108 "ll_pseudo_type_info.m"
            ll_backend__ll_pseudo_type_info__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 108 "ll_pseudo_type_info.m"
            MR_hl_field(MR_mktag(1), ll_backend__ll_pseudo_type_info__V_20_20, 0) = ((MR_Box) (ll_backend__ll_pseudo_type_info__ArityArg_16));
#line 108 "ll_pseudo_type_info.m"
            MR_hl_field(MR_mktag(1), ll_backend__ll_pseudo_type_info__V_20_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 108 "ll_pseudo_type_info.m"
          }
#line 108 "ll_pseudo_type_info.m"
          {
#line 108 "ll_pseudo_type_info.m"
            ll_backend__ll_pseudo_type_info__convert_compound_pseudo_type_info_7_p_0(ll_backend__ll_pseudo_type_info__RttiTypeCtor_31, ll_backend__ll_pseudo_type_info__V_20_20, ll_backend__ll_pseudo_type_info__Args_32, ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_0_17, ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_18, ll_backend__ll_pseudo_type_info__Rval_8, ll_backend__ll_pseudo_type_info__LldsType_9);
          }
#line 104 "ll_pseudo_type_info.m"
        }
#line 90 "ll_pseudo_type_info.m"
        break;
#line 90 "ll_pseudo_type_info.m"
      case (MR_Integer) 3:
#line 90 "ll_pseudo_type_info.m"
        {
#line 90 "ll_pseudo_type_info.m"
          MR_Integer ll_backend__ll_pseudo_type_info__Int_10 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__Pseudo_6, (MR_Integer) 0)));
#line 90 "ll_pseudo_type_info.m"
          MR_Word ll_backend__ll_pseudo_type_info__V_29_29;

#line 91 "ll_pseudo_type_info.m"
          {
#line 91 "ll_pseudo_type_info.m"
            ll_backend__ll_pseudo_type_info__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 91 "ll_pseudo_type_info.m"
            MR_hl_field(MR_mktag(1), ll_backend__ll_pseudo_type_info__V_29_29, 0) = ((MR_Box) (ll_backend__ll_pseudo_type_info__Int_10));
#line 91 "ll_pseudo_type_info.m"
          }
#line 91 "ll_pseudo_type_info.m"
          {
#line 91 "ll_pseudo_type_info.m"
            MR_Word base;
#line 91 "ll_pseudo_type_info.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 91 "ll_pseudo_type_info.m"
            *ll_backend__ll_pseudo_type_info__Rval_8 = base;
#line 91 "ll_pseudo_type_info.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 91 "ll_pseudo_type_info.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__ll_pseudo_type_info__V_29_29));
#line 91 "ll_pseudo_type_info.m"
          }
#line 92 "ll_pseudo_type_info.m"
          *ll_backend__ll_pseudo_type_info__LldsType_9 = (MR_Integer) 7;
#line 90 "ll_pseudo_type_info.m"
          *ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_18 = ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_0_17;
#line 90 "ll_pseudo_type_info.m"
        }
#line 90 "ll_pseudo_type_info.m"
        break;
#line 90 "ll_pseudo_type_info.m"
    }
#line 90 "ll_pseudo_type_info.m"
  }
#line 84 "ll_pseudo_type_info.m"
}

#line 55 "ll_pseudo_type_info.m"
void MR_CALL 
ll_backend__ll_pseudo_type_info__construct_llds_pseudo_type_info_6_p_0(
#line 55 "ll_pseudo_type_info.m"
  MR_Word ll_backend__ll_pseudo_type_info__Type_7,
#line 55 "ll_pseudo_type_info.m"
  MR_Integer ll_backend__ll_pseudo_type_info__NumUnivQTvars_8,
#line 55 "ll_pseudo_type_info.m"
  MR_Word ll_backend__ll_pseudo_type_info__ExistQTvars_9,
#line 55 "ll_pseudo_type_info.m"
  MR_Word ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_0_13,
#line 55 "ll_pseudo_type_info.m"
  MR_Word * ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_14,
#line 55 "ll_pseudo_type_info.m"
  MR_Word * ll_backend__ll_pseudo_type_info__Pseudo_11)
#line 55 "ll_pseudo_type_info.m"
{
#line 75 "ll_pseudo_type_info.m"
  {
#line 75 "ll_pseudo_type_info.m"
    MR_bool ll_backend__ll_pseudo_type_info__succeeded;
#line 75 "ll_pseudo_type_info.m"
    MR_Word ll_backend__ll_pseudo_type_info___LldsType_12;

#line 75 "ll_pseudo_type_info.m"
    {
#line 75 "ll_pseudo_type_info.m"
      ll_backend__ll_pseudo_type_info__construct_typed_llds_pseudo_type_info_7_p_0(ll_backend__ll_pseudo_type_info__Type_7, ll_backend__ll_pseudo_type_info__NumUnivQTvars_8, ll_backend__ll_pseudo_type_info__ExistQTvars_9, ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_0_13, ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_14, ll_backend__ll_pseudo_type_info__Pseudo_11, &ll_backend__ll_pseudo_type_info___LldsType_12);
    }
#line 75 "ll_pseudo_type_info.m"
  }
#line 55 "ll_pseudo_type_info.m"
}

#line 48 "ll_pseudo_type_info.m"
void MR_CALL 
ll_backend__ll_pseudo_type_info__construct_typed_llds_pseudo_type_info_7_p_0(
#line 48 "ll_pseudo_type_info.m"
  MR_Word ll_backend__ll_pseudo_type_info__Type_8,
#line 48 "ll_pseudo_type_info.m"
  MR_Integer ll_backend__ll_pseudo_type_info__NumUnivQTvars_9,
#line 48 "ll_pseudo_type_info.m"
  MR_Word ll_backend__ll_pseudo_type_info__ExistQTvars_10,
#line 48 "ll_pseudo_type_info.m"
  MR_Word ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_0_15,
#line 48 "ll_pseudo_type_info.m"
  MR_Word * ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_16,
#line 48 "ll_pseudo_type_info.m"
  MR_Word * ll_backend__ll_pseudo_type_info__PseudoRval_12,
#line 48 "ll_pseudo_type_info.m"
  MR_Word * ll_backend__ll_pseudo_type_info__LldsType_13)
#line 48 "ll_pseudo_type_info.m"
{
#line 79 "ll_pseudo_type_info.m"
  {
#line 79 "ll_pseudo_type_info.m"
    MR_bool ll_backend__ll_pseudo_type_info__succeeded;
#line 79 "ll_pseudo_type_info.m"
    MR_Word ll_backend__ll_pseudo_type_info__Pseudo_14;

#line 80 "ll_pseudo_type_info.m"
    {
#line 80 "ll_pseudo_type_info.m"
      backend_libs__pseudo_type_info__construct_pseudo_type_info_4_p_0(ll_backend__ll_pseudo_type_info__Type_8, ll_backend__ll_pseudo_type_info__NumUnivQTvars_9, ll_backend__ll_pseudo_type_info__ExistQTvars_10, &ll_backend__ll_pseudo_type_info__Pseudo_14);
    }
#line 90 "ll_pseudo_type_info.m"
#line 90 "ll_pseudo_type_info.m"
    switch (MR_tag((MR_Word) ll_backend__ll_pseudo_type_info__Pseudo_14)) {
#line 90 "ll_pseudo_type_info.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 90 "ll_pseudo_type_info.m"
      case (MR_Integer) 0:
#line 94 "ll_pseudo_type_info.m"
        {
#line 94 "ll_pseudo_type_info.m"
          MR_Word ll_backend__ll_pseudo_type_info__RttiTypeCtor_25 = (MR_Word) MR_body(((MR_Word) ll_backend__ll_pseudo_type_info__Pseudo_14), (MR_Integer) 0);
#line 94 "ll_pseudo_type_info.m"
          MR_Word ll_backend__ll_pseudo_type_info__DataId_26;
#line 94 "ll_pseudo_type_info.m"
          MR_Word ll_backend__ll_pseudo_type_info__V_37_37;
#line 94 "ll_pseudo_type_info.m"
          MR_Word ll_backend__ll_pseudo_type_info__V_38_38;
#line 94 "ll_pseudo_type_info.m"
          MR_Word ll_backend__ll_pseudo_type_info__V_39_39;

#line 96 "ll_pseudo_type_info.m"
          {
#line 96 "ll_pseudo_type_info.m"
            ll_backend__ll_pseudo_type_info__V_38_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 96 "ll_pseudo_type_info.m"
            MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__V_38_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
#line 96 "ll_pseudo_type_info.m"
            MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__V_38_38, 1) = ((MR_Box) (ll_backend__ll_pseudo_type_info__Pseudo_14));
#line 96 "ll_pseudo_type_info.m"
          }
#line 96 "ll_pseudo_type_info.m"
          {
#line 96 "ll_pseudo_type_info.m"
            ll_backend__ll_pseudo_type_info__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 96 "ll_pseudo_type_info.m"
            MR_hl_field(MR_mktag(0), ll_backend__ll_pseudo_type_info__V_37_37, 0) = ((MR_Box) (ll_backend__ll_pseudo_type_info__RttiTypeCtor_25));
#line 96 "ll_pseudo_type_info.m"
            MR_hl_field(MR_mktag(0), ll_backend__ll_pseudo_type_info__V_37_37, 1) = ((MR_Box) (ll_backend__ll_pseudo_type_info__V_38_38));
#line 96 "ll_pseudo_type_info.m"
          }
#line 95 "ll_pseudo_type_info.m"
          {
#line 95 "ll_pseudo_type_info.m"
            ll_backend__ll_pseudo_type_info__DataId_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 95 "ll_pseudo_type_info.m"
            MR_hl_field(MR_mktag(0), ll_backend__ll_pseudo_type_info__DataId_26, 0) = ((MR_Box) (ll_backend__ll_pseudo_type_info__V_37_37));
#line 95 "ll_pseudo_type_info.m"
          }
#line 97 "ll_pseudo_type_info.m"
          {
#line 97 "ll_pseudo_type_info.m"
            ll_backend__ll_pseudo_type_info__V_39_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 97 "ll_pseudo_type_info.m"
            MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__V_39_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 97 "ll_pseudo_type_info.m"
            MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__V_39_39, 1) = ((MR_Box) (ll_backend__ll_pseudo_type_info__DataId_26));
#line 97 "ll_pseudo_type_info.m"
            MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__V_39_39, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 97 "ll_pseudo_type_info.m"
          }
#line 97 "ll_pseudo_type_info.m"
          {
#line 97 "ll_pseudo_type_info.m"
            MR_Word base;
#line 97 "ll_pseudo_type_info.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 97 "ll_pseudo_type_info.m"
            *ll_backend__ll_pseudo_type_info__PseudoRval_12 = base;
#line 97 "ll_pseudo_type_info.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 97 "ll_pseudo_type_info.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__ll_pseudo_type_info__V_39_39));
#line 97 "ll_pseudo_type_info.m"
          }
#line 98 "ll_pseudo_type_info.m"
          *ll_backend__ll_pseudo_type_info__LldsType_13 = (MR_Integer) 11;
#line 94 "ll_pseudo_type_info.m"
          *ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_16 = ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_0_15;
#line 94 "ll_pseudo_type_info.m"
        }
#line 90 "ll_pseudo_type_info.m"
        break;
#line 90 "ll_pseudo_type_info.m"
      case (MR_Integer) 1:
#line 100 "ll_pseudo_type_info.m"
        {
#line 100 "ll_pseudo_type_info.m"
          MR_Word ll_backend__ll_pseudo_type_info__Args_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__ll_pseudo_type_info__Pseudo_14, (MR_Integer) 1)));
#line 100 "ll_pseudo_type_info.m"
          MR_Word ll_backend__ll_pseudo_type_info__RttiTypeCtor_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__ll_pseudo_type_info__Pseudo_14, (MR_Integer) 0)));

#line 101 "ll_pseudo_type_info.m"
          {
#line 101 "ll_pseudo_type_info.m"
            ll_backend__ll_pseudo_type_info__convert_compound_pseudo_type_info_7_p_0(ll_backend__ll_pseudo_type_info__RttiTypeCtor_42, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__ll_pseudo_type_info__Args_27, ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_0_15, ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_16, ll_backend__ll_pseudo_type_info__PseudoRval_12, ll_backend__ll_pseudo_type_info__LldsType_13);
          }
#line 100 "ll_pseudo_type_info.m"
        }
#line 90 "ll_pseudo_type_info.m"
        break;
#line 90 "ll_pseudo_type_info.m"
      case (MR_Integer) 2:
#line 104 "ll_pseudo_type_info.m"
        {
#line 104 "ll_pseudo_type_info.m"
          MR_Word ll_backend__ll_pseudo_type_info__VarArityId_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__ll_pseudo_type_info__Pseudo_14, (MR_Integer) 0)));
#line 104 "ll_pseudo_type_info.m"
          MR_Integer ll_backend__ll_pseudo_type_info__Arity_29;
#line 104 "ll_pseudo_type_info.m"
          MR_Word ll_backend__ll_pseudo_type_info__ArityArg_30;
#line 104 "ll_pseudo_type_info.m"
          MR_Word ll_backend__ll_pseudo_type_info__V_31_31;
#line 104 "ll_pseudo_type_info.m"
          MR_Word ll_backend__ll_pseudo_type_info__V_32_32;
#line 104 "ll_pseudo_type_info.m"
          MR_Word ll_backend__ll_pseudo_type_info__RttiTypeCtor_43;
#line 104 "ll_pseudo_type_info.m"
          MR_Word ll_backend__ll_pseudo_type_info__Args_44 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__ll_pseudo_type_info__Pseudo_14, (MR_Integer) 1)));

#line 105 "ll_pseudo_type_info.m"
          {
#line 105 "ll_pseudo_type_info.m"
            mercury__list__length_2_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0, ll_backend__ll_pseudo_type_info__Args_44, &ll_backend__ll_pseudo_type_info__Arity_29);
          }
#line 106 "ll_pseudo_type_info.m"
          {
#line 106 "ll_pseudo_type_info.m"
            ll_backend__ll_pseudo_type_info__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 106 "ll_pseudo_type_info.m"
            MR_hl_field(MR_mktag(1), ll_backend__ll_pseudo_type_info__V_31_31, 0) = ((MR_Box) (ll_backend__ll_pseudo_type_info__Arity_29));
#line 106 "ll_pseudo_type_info.m"
          }
#line 106 "ll_pseudo_type_info.m"
          {
#line 106 "ll_pseudo_type_info.m"
            ll_backend__ll_pseudo_type_info__ArityArg_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 106 "ll_pseudo_type_info.m"
            MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__ArityArg_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 106 "ll_pseudo_type_info.m"
            MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__ArityArg_30, 1) = ((MR_Box) (ll_backend__ll_pseudo_type_info__V_31_31));
#line 106 "ll_pseudo_type_info.m"
          }
#line 107 "ll_pseudo_type_info.m"
          {
#line 107 "ll_pseudo_type_info.m"
            ll_backend__ll_pseudo_type_info__RttiTypeCtor_43 = backend_libs__rtti__var_arity_id_to_rtti_type_ctor_1_f_0(ll_backend__ll_pseudo_type_info__VarArityId_28);
          }
#line 108 "ll_pseudo_type_info.m"
          {
#line 108 "ll_pseudo_type_info.m"
            ll_backend__ll_pseudo_type_info__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 108 "ll_pseudo_type_info.m"
            MR_hl_field(MR_mktag(1), ll_backend__ll_pseudo_type_info__V_32_32, 0) = ((MR_Box) (ll_backend__ll_pseudo_type_info__ArityArg_30));
#line 108 "ll_pseudo_type_info.m"
            MR_hl_field(MR_mktag(1), ll_backend__ll_pseudo_type_info__V_32_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 108 "ll_pseudo_type_info.m"
          }
#line 108 "ll_pseudo_type_info.m"
          {
#line 108 "ll_pseudo_type_info.m"
            ll_backend__ll_pseudo_type_info__convert_compound_pseudo_type_info_7_p_0(ll_backend__ll_pseudo_type_info__RttiTypeCtor_43, ll_backend__ll_pseudo_type_info__V_32_32, ll_backend__ll_pseudo_type_info__Args_44, ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_0_15, ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_16, ll_backend__ll_pseudo_type_info__PseudoRval_12, ll_backend__ll_pseudo_type_info__LldsType_13);
          }
#line 104 "ll_pseudo_type_info.m"
        }
#line 90 "ll_pseudo_type_info.m"
        break;
#line 90 "ll_pseudo_type_info.m"
      case (MR_Integer) 3:
#line 90 "ll_pseudo_type_info.m"
        {
#line 90 "ll_pseudo_type_info.m"
          MR_Integer ll_backend__ll_pseudo_type_info__Int_24 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__ll_pseudo_type_info__Pseudo_14, (MR_Integer) 0)));
#line 90 "ll_pseudo_type_info.m"
          MR_Word ll_backend__ll_pseudo_type_info__V_41_41;

#line 91 "ll_pseudo_type_info.m"
          {
#line 91 "ll_pseudo_type_info.m"
            ll_backend__ll_pseudo_type_info__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 91 "ll_pseudo_type_info.m"
            MR_hl_field(MR_mktag(1), ll_backend__ll_pseudo_type_info__V_41_41, 0) = ((MR_Box) (ll_backend__ll_pseudo_type_info__Int_24));
#line 91 "ll_pseudo_type_info.m"
          }
#line 91 "ll_pseudo_type_info.m"
          {
#line 91 "ll_pseudo_type_info.m"
            MR_Word base;
#line 91 "ll_pseudo_type_info.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 91 "ll_pseudo_type_info.m"
            *ll_backend__ll_pseudo_type_info__PseudoRval_12 = base;
#line 91 "ll_pseudo_type_info.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 91 "ll_pseudo_type_info.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__ll_pseudo_type_info__V_41_41));
#line 91 "ll_pseudo_type_info.m"
          }
#line 92 "ll_pseudo_type_info.m"
          *ll_backend__ll_pseudo_type_info__LldsType_13 = (MR_Integer) 7;
#line 90 "ll_pseudo_type_info.m"
          *ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_16 = ll_backend__ll_pseudo_type_info__STATE_VARIABLE_StaticCellInfo_0_15;
#line 90 "ll_pseudo_type_info.m"
        }
#line 90 "ll_pseudo_type_info.m"
        break;
#line 90 "ll_pseudo_type_info.m"
    }
#line 79 "ll_pseudo_type_info.m"
  }
#line 48 "ll_pseudo_type_info.m"
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
