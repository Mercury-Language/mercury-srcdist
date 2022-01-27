/*
** Automatically generated from `trans_opt.m'
** by the Mercury compiler,
** version DEV
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


/* :- module transform_hlds.trans_opt. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__trans_opt__init
ENDINIT
*/

#include "transform_hlds.trans_opt.mih"


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
#include "integer.mih"
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
#include "hlds.vartypes.mih"
#include "libs.file_util.mih"
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
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.item_util.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_cmds.mih"
#include "parse_tree.module_imports.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_io.mih"
#include "parse_tree.prog_io_error.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
#include "transform_hlds.ctgc.mih"
#include "transform_hlds.exception_analysis.mih"
#include "transform_hlds.intermod.mih"
#include "transform_hlds.tabling_analysis.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "transform_hlds.termination.mih"
#include "transform_hlds.trailing_analysis.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "transform_hlds.ctgc.livedata.mih"
#include "transform_hlds.ctgc.structure_reuse.mih"
#include "transform_hlds.ctgc.structure_sharing.mih"
#include "transform_hlds.ctgc.structure_reuse.analysis.mih"
#include "transform_hlds.ctgc.structure_reuse.domain.mih"
#include "transform_hlds.ctgc.structure_sharing.analysis.mih"
#include "transform_hlds.ctgc.structure_sharing.domain.mih"




#line 159 "transform_hlds.trans_opt.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__trans_opt__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_hlds__hlds_module__type_ctor_info_proc_exception_info_0;

#line 162 "transform_hlds.trans_opt.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__trans_opt__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_hlds__hlds_module__type_ctor_info_proc_trailing_info_0;

#line 165 "transform_hlds.trans_opt.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__trans_opt__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_hlds__hlds_module__type_ctor_info_proc_mm_tabling_info_0;

#line 245 "trans_opt.m"
static MR_Box MR_CALL 
transform_hlds__trans_opt__read_trans_opt_files_10_p_0_1(
#line 245 "trans_opt.m"
  MR_Box transform_hlds__trans_opt__closure_arg,
#line 245 "trans_opt.m"
  MR_Box transform_hlds__trans_opt__wrapper_arg_1);

#line 214 "trans_opt.m"
static void MR_CALL 
transform_hlds__trans_opt__read_trans_opt_files_10_p_0(
#line 214 "trans_opt.m"
  MR_Word transform_hlds__trans_opt__Globals_1,
#line 214 "trans_opt.m"
  MR_Word transform_hlds__trans_opt__HeadVar__2_2,
#line 214 "trans_opt.m"
  MR_Word transform_hlds__trans_opt__STATE_VARIABLE_OptItemBlocks_0_3,
#line 214 "trans_opt.m"
  MR_Word * transform_hlds__trans_opt__STATE_VARIABLE_OptItemBlocks_4,
#line 214 "trans_opt.m"
  MR_Word transform_hlds__trans_opt__STATE_VARIABLE_Specs_0_5,
#line 214 "trans_opt.m"
  MR_Word * transform_hlds__trans_opt__STATE_VARIABLE_Specs_6,
#line 214 "trans_opt.m"
  MR_Word transform_hlds__trans_opt__STATE_VARIABLE_Error_0_7,
#line 214 "trans_opt.m"
  MR_Word * transform_hlds__trans_opt__STATE_VARIABLE_Error_8);

#line 181 "trans_opt.m"
static void MR_CALL 
transform_hlds__trans_opt__write_trans_opt_file_3_p_0_7(
#line 181 "trans_opt.m"
  MR_Box transform_hlds__trans_opt__closure_arg,
#line 181 "trans_opt.m"
  MR_Box transform_hlds__trans_opt__wrapper_arg_1,
#line 181 "trans_opt.m"
  MR_Box transform_hlds__trans_opt__wrapper_arg_2,
#line 181 "trans_opt.m"
  MR_Box * transform_hlds__trans_opt__wrapper_arg_3);

#line 176 "trans_opt.m"
static void MR_CALL 
transform_hlds__trans_opt__write_trans_opt_file_3_p_0_6(
#line 176 "trans_opt.m"
  MR_Box transform_hlds__trans_opt__closure_arg,
#line 176 "trans_opt.m"
  MR_Box transform_hlds__trans_opt__wrapper_arg_1,
#line 176 "trans_opt.m"
  MR_Box transform_hlds__trans_opt__wrapper_arg_2,
#line 176 "trans_opt.m"
  MR_Box * transform_hlds__trans_opt__wrapper_arg_3);

#line 170 "trans_opt.m"
static void MR_CALL 
transform_hlds__trans_opt__write_trans_opt_file_3_p_0_5(
#line 170 "trans_opt.m"
  MR_Box transform_hlds__trans_opt__closure_arg,
#line 170 "trans_opt.m"
  MR_Box transform_hlds__trans_opt__wrapper_arg_1,
#line 170 "trans_opt.m"
  MR_Box transform_hlds__trans_opt__wrapper_arg_2,
#line 170 "trans_opt.m"
  MR_Box * transform_hlds__trans_opt__wrapper_arg_3);

#line 165 "trans_opt.m"
static void MR_CALL 
transform_hlds__trans_opt__write_trans_opt_file_3_p_0_4(
#line 165 "trans_opt.m"
  MR_Box transform_hlds__trans_opt__closure_arg,
#line 165 "trans_opt.m"
  MR_Box transform_hlds__trans_opt__wrapper_arg_1,
#line 165 "trans_opt.m"
  MR_Box transform_hlds__trans_opt__wrapper_arg_2,
#line 165 "trans_opt.m"
  MR_Box * transform_hlds__trans_opt__wrapper_arg_3);

#line 163 "trans_opt.m"
static void MR_CALL 
transform_hlds__trans_opt__write_trans_opt_file_3_p_0_3(
#line 163 "trans_opt.m"
  MR_Box transform_hlds__trans_opt__closure_arg,
#line 163 "trans_opt.m"
  MR_Box transform_hlds__trans_opt__wrapper_arg_1,
#line 163 "trans_opt.m"
  MR_Box transform_hlds__trans_opt__wrapper_arg_2,
#line 163 "trans_opt.m"
  MR_Box * transform_hlds__trans_opt__wrapper_arg_3);

#line 159 "trans_opt.m"
static void MR_CALL 
transform_hlds__trans_opt__write_trans_opt_file_3_p_0_2(
#line 159 "trans_opt.m"
  MR_Box transform_hlds__trans_opt__closure_arg,
#line 159 "trans_opt.m"
  MR_Box transform_hlds__trans_opt__wrapper_arg_1,
#line 159 "trans_opt.m"
  MR_Box transform_hlds__trans_opt__wrapper_arg_2,
#line 159 "trans_opt.m"
  MR_Box * transform_hlds__trans_opt__wrapper_arg_3);

#line 157 "trans_opt.m"
static void MR_CALL 
transform_hlds__trans_opt__write_trans_opt_file_3_p_0_1(
#line 157 "trans_opt.m"
  MR_Box transform_hlds__trans_opt__closure_arg,
#line 157 "trans_opt.m"
  MR_Box transform_hlds__trans_opt__wrapper_arg_1,
#line 157 "trans_opt.m"
  MR_Box transform_hlds__trans_opt__wrapper_arg_2,
#line 157 "trans_opt.m"
  MR_Box * transform_hlds__trans_opt__wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__trans_opt_scalar_common_1[1][2];

static /* final */ const MR_Box transform_hlds__trans_opt_scalar_common_2[1][7];

static /* final */ const MR_Box transform_hlds__trans_opt_scalar_common_3[3][8];

static /* final */ const MR_Box transform_hlds__trans_opt_scalar_common_4[1][5];

static /* final */ const MR_Box transform_hlds__trans_opt_scalar_common_5[1][3];




static /* final */ const MR_Box transform_hlds__trans_opt_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1)),
    ((MR_Box) (&parse_tree__status__parse_tree__status__type_ctor_info_opt_module_section_0))
  },
};

static /* final */ const MR_Box transform_hlds__trans_opt_scalar_common_2[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box transform_hlds__trans_opt_scalar_common_3[3][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__trans_opt__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_hlds__hlds_module__type_ctor_info_proc_exception_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__trans_opt__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_hlds__hlds_module__type_ctor_info_proc_trailing_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__trans_opt__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_hlds__hlds_module__type_ctor_info_proc_mm_tabling_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box transform_hlds__trans_opt_scalar_common_4[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_avail_use_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0))
  },
};

static /* final */ const MR_Box transform_hlds__trans_opt_scalar_common_5[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&transform_hlds__trans_opt_scalar_common_4[0])),
    ((MR_Box) (transform_hlds__trans_opt__read_trans_opt_files_10_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 380 "transform_hlds.trans_opt.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__trans_opt__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_hlds__hlds_module__type_ctor_info_proc_exception_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_proc_exception_info_0
  }
};

#line 389 "transform_hlds.trans_opt.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__trans_opt__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_hlds__hlds_module__type_ctor_info_proc_trailing_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_proc_trailing_info_0
  }
};

#line 398 "transform_hlds.trans_opt.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__trans_opt__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_hlds__hlds_module__type_ctor_info_proc_mm_tabling_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_proc_mm_tabling_info_0
  }
};

#line 245 "trans_opt.m"
static MR_Box MR_CALL 
transform_hlds__trans_opt__read_trans_opt_files_10_p_0_1(
#line 245 "trans_opt.m"
  MR_Box transform_hlds__trans_opt__closure_arg,
#line 245 "trans_opt.m"
  MR_Box transform_hlds__trans_opt__wrapper_arg_1)
#line 245 "trans_opt.m"
{
#line 245 "trans_opt.m"
  {
#line 245 "trans_opt.m"
    MR_Box transform_hlds__trans_opt__wrapper_arg_2;
#line 245 "trans_opt.m"
    MR_Box transform_hlds__trans_opt__closure = transform_hlds__trans_opt__closure_arg;
#line 245 "trans_opt.m"
    MR_Word transform_hlds__trans_opt__conv0_HeadVar__2_2;

#line 245 "trans_opt.m"
    {
#line 245 "trans_opt.m"
      transform_hlds__trans_opt__conv0_HeadVar__2_2 = parse_tree__prog_item__wrap_avail_use_1_f_0(((MR_Word) transform_hlds__trans_opt__wrapper_arg_1));
    }
#line 245 "trans_opt.m"
    transform_hlds__trans_opt__wrapper_arg_2 = ((MR_Box) (transform_hlds__trans_opt__conv0_HeadVar__2_2));
#line 245 "trans_opt.m"
    return transform_hlds__trans_opt__wrapper_arg_2;
#line 245 "trans_opt.m"
  }
#line 245 "trans_opt.m"
}

#line 214 "trans_opt.m"
static void MR_CALL 
transform_hlds__trans_opt__read_trans_opt_files_10_p_0(
#line 214 "trans_opt.m"
  MR_Word transform_hlds__trans_opt__Globals_1,
#line 214 "trans_opt.m"
  MR_Word transform_hlds__trans_opt__HeadVar__2_2,
#line 214 "trans_opt.m"
  MR_Word transform_hlds__trans_opt__STATE_VARIABLE_OptItemBlocks_0_3,
#line 214 "trans_opt.m"
  MR_Word * transform_hlds__trans_opt__STATE_VARIABLE_OptItemBlocks_4,
#line 214 "trans_opt.m"
  MR_Word transform_hlds__trans_opt__STATE_VARIABLE_Specs_0_5,
#line 214 "trans_opt.m"
  MR_Word * transform_hlds__trans_opt__STATE_VARIABLE_Specs_6,
#line 214 "trans_opt.m"
  MR_Word transform_hlds__trans_opt__STATE_VARIABLE_Error_0_7,
#line 214 "trans_opt.m"
  MR_Word * transform_hlds__trans_opt__STATE_VARIABLE_Error_8)
#line 214 "trans_opt.m"
{
#line 219 "trans_opt.m"
  while (MR_TRUE)
#line 219 "trans_opt.m"
    {
#line 219 "trans_opt.m"
      /* tailcall optimized into a loop */
#line 219 "trans_opt.m"
      {
#line 219 "trans_opt.m"
        MR_bool transform_hlds__trans_opt__succeeded;

#line 219 "trans_opt.m"
        if ((transform_hlds__trans_opt__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 219 "trans_opt.m"
          {
#line 219 "trans_opt.m"
            *transform_hlds__trans_opt__STATE_VARIABLE_Error_8 = transform_hlds__trans_opt__STATE_VARIABLE_Error_0_7;
#line 219 "trans_opt.m"
            *transform_hlds__trans_opt__STATE_VARIABLE_Specs_6 = transform_hlds__trans_opt__STATE_VARIABLE_Specs_0_5;
#line 219 "trans_opt.m"
            *transform_hlds__trans_opt__STATE_VARIABLE_OptItemBlocks_4 = transform_hlds__trans_opt__STATE_VARIABLE_OptItemBlocks_0_3;
#line 219 "trans_opt.m"
          }
#line 219 "trans_opt.m"
        else
#line 221 "trans_opt.m"
          {
#line 221 "trans_opt.m"
            MR_Word transform_hlds__trans_opt__Import_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__trans_opt__HeadVar__2_2, (MR_Integer) 0)));
#line 221 "trans_opt.m"
            MR_Word transform_hlds__trans_opt__Imports_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__trans_opt__HeadVar__2_2, (MR_Integer) 1)));
#line 221 "trans_opt.m"
            MR_Word transform_hlds__trans_opt__VeryVerbose_31;
#line 221 "trans_opt.m"
            MR_String transform_hlds__trans_opt__ImportString_32;
#line 221 "trans_opt.m"
            MR_String transform_hlds__trans_opt__FileName_33;
#line 221 "trans_opt.m"
            MR_Word transform_hlds__trans_opt__ParseTreeOpt_34;
#line 221 "trans_opt.m"
            MR_Word transform_hlds__trans_opt__OptSpecs_35;
#line 221 "trans_opt.m"
            MR_Word transform_hlds__trans_opt__OptError_36;
#line 221 "trans_opt.m"
            MR_Word transform_hlds__trans_opt__OptModuleName_37;
#line 221 "trans_opt.m"
            MR_Word transform_hlds__trans_opt__OptContext_39;
#line 221 "trans_opt.m"
            MR_Word transform_hlds__trans_opt__OptUses_40;
#line 221 "trans_opt.m"
            MR_Word transform_hlds__trans_opt__OptItems_41;
#line 221 "trans_opt.m"
            MR_Word transform_hlds__trans_opt__OptSection_42;
#line 221 "trans_opt.m"
            MR_Word transform_hlds__trans_opt__OptAvails_43;
#line 221 "trans_opt.m"
            MR_Word transform_hlds__trans_opt__OptItemBlock_44;
#line 221 "trans_opt.m"
            MR_Word transform_hlds__trans_opt__STATE_VARIABLE_Specs_54_54;
#line 221 "trans_opt.m"
            MR_Word transform_hlds__trans_opt__STATE_VARIABLE_Specs_70_70;
#line 221 "trans_opt.m"
            MR_Word transform_hlds__trans_opt__STATE_VARIABLE_Specs_72_72;
#line 221 "trans_opt.m"
            MR_Word transform_hlds__trans_opt__STATE_VARIABLE_Error_73_73;
#line 221 "trans_opt.m"
            MR_Word transform_hlds__trans_opt__STATE_VARIABLE_Specs_74_74;
#line 221 "trans_opt.m"
            MR_Word transform_hlds__trans_opt__STATE_VARIABLE_OptItemBlocks_79_79;
#line 242 "trans_opt.m"
            MR_Word transform_hlds__trans_opt___OptFileKind_38;

#line 222 "trans_opt.m"
            {
#line 222 "trans_opt.m"
              libs__globals__lookup_bool_option_3_p_0(transform_hlds__trans_opt__Globals_1, (MR_Integer) 46, &transform_hlds__trans_opt__VeryVerbose_31);
            }
#line 223 "trans_opt.m"
            {
#line 223 "trans_opt.m"
              parse_tree__error_util__maybe_write_out_errors_no_module_6_p_0(transform_hlds__trans_opt__VeryVerbose_31, transform_hlds__trans_opt__Globals_1, transform_hlds__trans_opt__STATE_VARIABLE_Specs_0_5, &transform_hlds__trans_opt__STATE_VARIABLE_Specs_54_54);
            }
#line 224 "trans_opt.m"
            {
#line 224 "trans_opt.m"
              libs__file_util__maybe_write_string_4_p_0(transform_hlds__trans_opt__VeryVerbose_31, (MR_String) "% Reading transitive optimization interface for module");
            }
#line 226 "trans_opt.m"
            {
#line 226 "trans_opt.m"
              libs__file_util__maybe_write_string_4_p_0(transform_hlds__trans_opt__VeryVerbose_31, (MR_String) " \140");
            }
#line 227 "trans_opt.m"
            {
#line 227 "trans_opt.m"
              transform_hlds__trans_opt__ImportString_32 = mdbcomp__sym_name__sym_name_to_string_1_f_0(transform_hlds__trans_opt__Import_25);
            }
#line 228 "trans_opt.m"
            {
#line 228 "trans_opt.m"
              libs__file_util__maybe_write_string_4_p_0(transform_hlds__trans_opt__VeryVerbose_31, transform_hlds__trans_opt__ImportString_32);
            }
#line 229 "trans_opt.m"
            {
#line 229 "trans_opt.m"
              libs__file_util__maybe_write_string_4_p_0(transform_hlds__trans_opt__VeryVerbose_31, (MR_String) "\'... ");
            }
#line 230 "trans_opt.m"
            {
#line 230 "trans_opt.m"
              libs__file_util__maybe_flush_output_3_p_0(transform_hlds__trans_opt__VeryVerbose_31);
            }
#line 232 "trans_opt.m"
            {
#line 232 "trans_opt.m"
              parse_tree__file_names__module_name_to_search_file_name_6_p_0(transform_hlds__trans_opt__Globals_1, transform_hlds__trans_opt__Import_25, (MR_String) ".trans_opt", &transform_hlds__trans_opt__FileName_33);
            }
#line 234 "trans_opt.m"
            {
#line 234 "trans_opt.m"
              parse_tree__prog_io__actually_read_module_opt_9_p_0((MR_Integer) 1, transform_hlds__trans_opt__Globals_1, transform_hlds__trans_opt__FileName_33, transform_hlds__trans_opt__Import_25, &transform_hlds__trans_opt__ParseTreeOpt_34, &transform_hlds__trans_opt__OptSpecs_35, &transform_hlds__trans_opt__OptError_36);
            }
#line 236 "trans_opt.m"
            {
#line 236 "trans_opt.m"
              libs__file_util__maybe_write_string_4_p_0(transform_hlds__trans_opt__VeryVerbose_31, (MR_String) " done.\n");
            }
#line 237 "trans_opt.m"
            {
#line 237 "trans_opt.m"
              transform_hlds__trans_opt__STATE_VARIABLE_Specs_70_70 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, transform_hlds__trans_opt__OptSpecs_35, transform_hlds__trans_opt__STATE_VARIABLE_Specs_54_54);
            }
#line 238 "trans_opt.m"
            {
#line 238 "trans_opt.m"
              transform_hlds__intermod__update_error_status_9_p_0(transform_hlds__trans_opt__Globals_1, (MR_Integer) 1, transform_hlds__trans_opt__FileName_33, transform_hlds__trans_opt__OptSpecs_35, transform_hlds__trans_opt__STATE_VARIABLE_Specs_70_70, &transform_hlds__trans_opt__STATE_VARIABLE_Specs_72_72, transform_hlds__trans_opt__OptError_36, transform_hlds__trans_opt__STATE_VARIABLE_Error_0_7, &transform_hlds__trans_opt__STATE_VARIABLE_Error_73_73);
            }
#line 240 "trans_opt.m"
            {
#line 240 "trans_opt.m"
              parse_tree__error_util__maybe_write_out_errors_no_module_6_p_0(transform_hlds__trans_opt__VeryVerbose_31, transform_hlds__trans_opt__Globals_1, transform_hlds__trans_opt__STATE_VARIABLE_Specs_72_72, &transform_hlds__trans_opt__STATE_VARIABLE_Specs_74_74);
            }
#line 242 "trans_opt.m"
            transform_hlds__trans_opt__OptModuleName_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trans_opt__ParseTreeOpt_34, (MR_Integer) 0)));
#line 242 "trans_opt.m"
            transform_hlds__trans_opt___OptFileKind_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trans_opt__ParseTreeOpt_34, (MR_Integer) 1)));
#line 242 "trans_opt.m"
            transform_hlds__trans_opt__OptContext_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trans_opt__ParseTreeOpt_34, (MR_Integer) 2)));
#line 242 "trans_opt.m"
            transform_hlds__trans_opt__OptUses_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trans_opt__ParseTreeOpt_34, (MR_Integer) 3)));
#line 242 "trans_opt.m"
            transform_hlds__trans_opt__OptItems_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trans_opt__ParseTreeOpt_34, (MR_Integer) 4)));
#line 244 "trans_opt.m"
            {
#line 244 "trans_opt.m"
              transform_hlds__trans_opt__OptSection_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 244 "trans_opt.m"
              MR_hl_field(MR_mktag(0), transform_hlds__trans_opt__OptSection_42, 0) = ((MR_Box) (transform_hlds__trans_opt__OptModuleName_37));
#line 244 "trans_opt.m"
              MR_hl_field(MR_mktag(0), transform_hlds__trans_opt__OptSection_42, 1) = ((MR_Box) ((MR_Integer) 1));
#line 244 "trans_opt.m"
            }
#line 245 "trans_opt.m"
            {
#line 245 "trans_opt.m"
              transform_hlds__trans_opt__OptAvails_43 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_avail_use_info_0, (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0, (MR_Word) &transform_hlds__trans_opt_scalar_common_5[0], transform_hlds__trans_opt__OptUses_40);
            }
#line 246 "trans_opt.m"
            {
#line 246 "trans_opt.m"
              transform_hlds__trans_opt__OptItemBlock_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 246 "trans_opt.m"
              MR_hl_field(MR_mktag(0), transform_hlds__trans_opt__OptItemBlock_44, 0) = ((MR_Box) (transform_hlds__trans_opt__OptSection_42));
#line 246 "trans_opt.m"
              MR_hl_field(MR_mktag(0), transform_hlds__trans_opt__OptItemBlock_44, 1) = ((MR_Box) (transform_hlds__trans_opt__OptContext_39));
#line 246 "trans_opt.m"
              MR_hl_field(MR_mktag(0), transform_hlds__trans_opt__OptItemBlock_44, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 246 "trans_opt.m"
              MR_hl_field(MR_mktag(0), transform_hlds__trans_opt__OptItemBlock_44, 3) = ((MR_Box) (transform_hlds__trans_opt__OptAvails_43));
#line 246 "trans_opt.m"
              MR_hl_field(MR_mktag(0), transform_hlds__trans_opt__OptItemBlock_44, 4) = ((MR_Box) (transform_hlds__trans_opt__OptItems_41));
#line 246 "trans_opt.m"
            }
#line 248 "trans_opt.m"
            {
#line 248 "trans_opt.m"
              transform_hlds__trans_opt__STATE_VARIABLE_OptItemBlocks_79_79 = mercury__cord__snoc_2_f_0((MR_Word) &transform_hlds__trans_opt_scalar_common_1[0], transform_hlds__trans_opt__STATE_VARIABLE_OptItemBlocks_0_3, ((MR_Box) (transform_hlds__trans_opt__OptItemBlock_44)));
            }
#line 249 "trans_opt.m"
            /* direct tailcall eliminated */
#line 249 "trans_opt.m"
            {
#line 249 "trans_opt.m"
              MR_Word transform_hlds__trans_opt__HeadVar__2__tmp_copy_2 = transform_hlds__trans_opt__Imports_26;
#line 249 "trans_opt.m"
              MR_Word transform_hlds__trans_opt__STATE_VARIABLE_OptItemBlocks_0__tmp_copy_3 = transform_hlds__trans_opt__STATE_VARIABLE_OptItemBlocks_79_79;
#line 249 "trans_opt.m"
              MR_Word transform_hlds__trans_opt__STATE_VARIABLE_Specs_0__tmp_copy_5 = transform_hlds__trans_opt__STATE_VARIABLE_Specs_74_74;
#line 249 "trans_opt.m"
              MR_Word transform_hlds__trans_opt__STATE_VARIABLE_Error_0__tmp_copy_7 = transform_hlds__trans_opt__STATE_VARIABLE_Error_73_73;

#line 249 "trans_opt.m"
              transform_hlds__trans_opt__STATE_VARIABLE_Error_0_7 = transform_hlds__trans_opt__STATE_VARIABLE_Error_0__tmp_copy_7;
#line 249 "trans_opt.m"
              transform_hlds__trans_opt__STATE_VARIABLE_Specs_0_5 = transform_hlds__trans_opt__STATE_VARIABLE_Specs_0__tmp_copy_5;
#line 249 "trans_opt.m"
              transform_hlds__trans_opt__STATE_VARIABLE_OptItemBlocks_0_3 = transform_hlds__trans_opt__STATE_VARIABLE_OptItemBlocks_0__tmp_copy_3;
#line 249 "trans_opt.m"
              transform_hlds__trans_opt__HeadVar__2_2 = transform_hlds__trans_opt__HeadVar__2__tmp_copy_2;
#line 249 "trans_opt.m"
            }
#line 249 "trans_opt.m"
            continue;
#line 221 "trans_opt.m"
          }
#line 219 "trans_opt.m"
      }
#line 219 "trans_opt.m"
      break;
#line 219 "trans_opt.m"
    }
#line 214 "trans_opt.m"
}

#line 78 "trans_opt.m"
void MR_CALL 
transform_hlds__trans_opt__grab_trans_opt_files_7_p_0(
#line 78 "trans_opt.m"
  MR_Word transform_hlds__trans_opt__Globals_8,
#line 78 "trans_opt.m"
  MR_Word transform_hlds__trans_opt__TransOptDeps_9,
#line 78 "trans_opt.m"
  MR_Word transform_hlds__trans_opt__STATE_VARIABLE_Module_0_17,
#line 78 "trans_opt.m"
  MR_Word * transform_hlds__trans_opt__STATE_VARIABLE_Module_18,
#line 78 "trans_opt.m"
  MR_Word * transform_hlds__trans_opt__FoundError_11)
#line 78 "trans_opt.m"
{
#line 198 "trans_opt.m"
  {
#line 198 "trans_opt.m"
    MR_bool transform_hlds__trans_opt__succeeded;
#line 198 "trans_opt.m"
    MR_Word transform_hlds__trans_opt__TypeInfo_35_35;
#line 198 "trans_opt.m"
    MR_Word transform_hlds__trans_opt__Verbose_13;
#line 198 "trans_opt.m"
    MR_Word transform_hlds__trans_opt__OptItemBlocksCord_14;
#line 198 "trans_opt.m"
    MR_Word transform_hlds__trans_opt__OptSpecs_15;
#line 198 "trans_opt.m"
    MR_Word transform_hlds__trans_opt__OptItemBlocks_16;
#line 198 "trans_opt.m"
    MR_Word transform_hlds__trans_opt__V_25_25;
#line 198 "trans_opt.m"
    MR_Word transform_hlds__trans_opt__STATE_VARIABLE_Module_29_29;
#line 198 "trans_opt.m"
    MR_Word transform_hlds__trans_opt__STATE_VARIABLE_Module_30_30;
#line 198 "trans_opt.m"
    MR_Word transform_hlds__trans_opt__V_31_31;

#line 199 "trans_opt.m"
    {
#line 199 "trans_opt.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__trans_opt__Globals_8, (MR_Integer) 45, &transform_hlds__trans_opt__Verbose_13);
    }
#line 200 "trans_opt.m"
    {
#line 200 "trans_opt.m"
      libs__file_util__maybe_write_string_4_p_0(transform_hlds__trans_opt__Verbose_13, (MR_String) "% Reading .trans_opt files..\n");
    }
#line 201 "trans_opt.m"
    {
#line 201 "trans_opt.m"
      libs__file_util__maybe_flush_output_3_p_0(transform_hlds__trans_opt__Verbose_13);
    }
#line 737 "transform_hlds.trans_opt.c"
    transform_hlds__trans_opt__TypeInfo_35_35 = (MR_Word) &transform_hlds__trans_opt_scalar_common_1[0];
#line 204 "trans_opt.m"
    {
#line 204 "trans_opt.m"
      transform_hlds__trans_opt__V_25_25 = mercury__cord__empty_0_f_0(transform_hlds__trans_opt__TypeInfo_35_35);
    }
#line 203 "trans_opt.m"
    {
#line 203 "trans_opt.m"
      transform_hlds__trans_opt__read_trans_opt_files_10_p_0(transform_hlds__trans_opt__Globals_8, transform_hlds__trans_opt__TransOptDeps_9, transform_hlds__trans_opt__V_25_25, &transform_hlds__trans_opt__OptItemBlocksCord_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__trans_opt__OptSpecs_15, (MR_Integer) 0, transform_hlds__trans_opt__FoundError_11);
    }
#line 206 "trans_opt.m"
    {
#line 206 "trans_opt.m"
      transform_hlds__trans_opt__OptItemBlocks_16 = mercury__cord__list_1_f_0(transform_hlds__trans_opt__TypeInfo_35_35, transform_hlds__trans_opt__OptItemBlocksCord_14);
    }
#line 207 "trans_opt.m"
    {
#line 207 "trans_opt.m"
      parse_tree__module_imports__module_and_imports_add_opt_item_blocks_3_p_0(transform_hlds__trans_opt__OptItemBlocks_16, transform_hlds__trans_opt__STATE_VARIABLE_Module_0_17, &transform_hlds__trans_opt__STATE_VARIABLE_Module_29_29);
    }
#line 208 "trans_opt.m"
    {
#line 208 "trans_opt.m"
      parse_tree__module_imports__module_and_imports_add_specs_3_p_0(transform_hlds__trans_opt__OptSpecs_15, transform_hlds__trans_opt__STATE_VARIABLE_Module_29_29, &transform_hlds__trans_opt__STATE_VARIABLE_Module_30_30);
    }
#line 210 "trans_opt.m"
    {
#line 210 "trans_opt.m"
      transform_hlds__trans_opt__V_31_31 = mercury__set__init_0_f_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0);
    }
#line 210 "trans_opt.m"
    {
#line 210 "trans_opt.m"
      parse_tree__module_imports__module_and_imports_set_errors_3_p_0(transform_hlds__trans_opt__V_31_31, transform_hlds__trans_opt__STATE_VARIABLE_Module_30_30, transform_hlds__trans_opt__STATE_VARIABLE_Module_18);
    }
#line 212 "trans_opt.m"
    {
#line 212 "trans_opt.m"
      libs__file_util__maybe_write_string_4_p_0(transform_hlds__trans_opt__Verbose_13, (MR_String) "% Done.\n");
#line 212 "trans_opt.m"
      return;
    }
#line 198 "trans_opt.m"
  }
#line 78 "trans_opt.m"
}

#line 181 "trans_opt.m"
static void MR_CALL 
transform_hlds__trans_opt__write_trans_opt_file_3_p_0_7(
#line 181 "trans_opt.m"
  MR_Box transform_hlds__trans_opt__closure_arg,
#line 181 "trans_opt.m"
  MR_Box transform_hlds__trans_opt__wrapper_arg_1,
#line 181 "trans_opt.m"
  MR_Box transform_hlds__trans_opt__wrapper_arg_2,
#line 181 "trans_opt.m"
  MR_Box * transform_hlds__trans_opt__wrapper_arg_3)
#line 181 "trans_opt.m"
{
#line 181 "trans_opt.m"
  {
#line 181 "trans_opt.m"
    MR_Box transform_hlds__trans_opt__closure = transform_hlds__trans_opt__closure_arg;

#line 181 "trans_opt.m"
    {
#line 181 "trans_opt.m"
      transform_hlds__tabling_analysis__write_pragma_mm_tabling_info_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trans_opt__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trans_opt__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__trans_opt__wrapper_arg_1));
#line 181 "trans_opt.m"
      return;
    }
#line 181 "trans_opt.m"
  }
#line 181 "trans_opt.m"
}

#line 176 "trans_opt.m"
static void MR_CALL 
transform_hlds__trans_opt__write_trans_opt_file_3_p_0_6(
#line 176 "trans_opt.m"
  MR_Box transform_hlds__trans_opt__closure_arg,
#line 176 "trans_opt.m"
  MR_Box transform_hlds__trans_opt__wrapper_arg_1,
#line 176 "trans_opt.m"
  MR_Box transform_hlds__trans_opt__wrapper_arg_2,
#line 176 "trans_opt.m"
  MR_Box * transform_hlds__trans_opt__wrapper_arg_3)
#line 176 "trans_opt.m"
{
#line 176 "trans_opt.m"
  {
#line 176 "trans_opt.m"
    MR_Box transform_hlds__trans_opt__closure = transform_hlds__trans_opt__closure_arg;

#line 176 "trans_opt.m"
    {
#line 176 "trans_opt.m"
      transform_hlds__trailing_analysis__write_pragma_trailing_info_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trans_opt__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trans_opt__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__trans_opt__wrapper_arg_1));
#line 176 "trans_opt.m"
      return;
    }
#line 176 "trans_opt.m"
  }
#line 176 "trans_opt.m"
}

#line 170 "trans_opt.m"
static void MR_CALL 
transform_hlds__trans_opt__write_trans_opt_file_3_p_0_5(
#line 170 "trans_opt.m"
  MR_Box transform_hlds__trans_opt__closure_arg,
#line 170 "trans_opt.m"
  MR_Box transform_hlds__trans_opt__wrapper_arg_1,
#line 170 "trans_opt.m"
  MR_Box transform_hlds__trans_opt__wrapper_arg_2,
#line 170 "trans_opt.m"
  MR_Box * transform_hlds__trans_opt__wrapper_arg_3)
#line 170 "trans_opt.m"
{
#line 170 "trans_opt.m"
  {
#line 170 "trans_opt.m"
    MR_Box transform_hlds__trans_opt__closure = transform_hlds__trans_opt__closure_arg;

#line 170 "trans_opt.m"
    {
#line 170 "trans_opt.m"
      transform_hlds__exception_analysis__write_pragma_exceptions_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trans_opt__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trans_opt__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__trans_opt__wrapper_arg_1));
#line 170 "trans_opt.m"
      return;
    }
#line 170 "trans_opt.m"
  }
#line 170 "trans_opt.m"
}

#line 165 "trans_opt.m"
static void MR_CALL 
transform_hlds__trans_opt__write_trans_opt_file_3_p_0_4(
#line 165 "trans_opt.m"
  MR_Box transform_hlds__trans_opt__closure_arg,
#line 165 "trans_opt.m"
  MR_Box transform_hlds__trans_opt__wrapper_arg_1,
#line 165 "trans_opt.m"
  MR_Box transform_hlds__trans_opt__wrapper_arg_2,
#line 165 "trans_opt.m"
  MR_Box * transform_hlds__trans_opt__wrapper_arg_3)
#line 165 "trans_opt.m"
{
#line 165 "trans_opt.m"
  {
#line 165 "trans_opt.m"
    MR_Box transform_hlds__trans_opt__closure = transform_hlds__trans_opt__closure_arg;

#line 165 "trans_opt.m"
    {
#line 165 "trans_opt.m"
      transform_hlds__ctgc__structure_reuse__analysis__write_pred_reuse_info_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trans_opt__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__trans_opt__wrapper_arg_1));
#line 165 "trans_opt.m"
      return;
    }
#line 165 "trans_opt.m"
  }
#line 165 "trans_opt.m"
}

#line 163 "trans_opt.m"
static void MR_CALL 
transform_hlds__trans_opt__write_trans_opt_file_3_p_0_3(
#line 163 "trans_opt.m"
  MR_Box transform_hlds__trans_opt__closure_arg,
#line 163 "trans_opt.m"
  MR_Box transform_hlds__trans_opt__wrapper_arg_1,
#line 163 "trans_opt.m"
  MR_Box transform_hlds__trans_opt__wrapper_arg_2,
#line 163 "trans_opt.m"
  MR_Box * transform_hlds__trans_opt__wrapper_arg_3)
#line 163 "trans_opt.m"
{
#line 163 "trans_opt.m"
  {
#line 163 "trans_opt.m"
    MR_Box transform_hlds__trans_opt__closure = transform_hlds__trans_opt__closure_arg;

#line 163 "trans_opt.m"
    {
#line 163 "trans_opt.m"
      transform_hlds__ctgc__structure_sharing__analysis__write_pred_sharing_info_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trans_opt__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__trans_opt__wrapper_arg_1));
#line 163 "trans_opt.m"
      return;
    }
#line 163 "trans_opt.m"
  }
#line 163 "trans_opt.m"
}

#line 159 "trans_opt.m"
static void MR_CALL 
transform_hlds__trans_opt__write_trans_opt_file_3_p_0_2(
#line 159 "trans_opt.m"
  MR_Box transform_hlds__trans_opt__closure_arg,
#line 159 "trans_opt.m"
  MR_Box transform_hlds__trans_opt__wrapper_arg_1,
#line 159 "trans_opt.m"
  MR_Box transform_hlds__trans_opt__wrapper_arg_2,
#line 159 "trans_opt.m"
  MR_Box * transform_hlds__trans_opt__wrapper_arg_3)
#line 159 "trans_opt.m"
{
#line 159 "trans_opt.m"
  {
#line 159 "trans_opt.m"
    MR_Box transform_hlds__trans_opt__closure = transform_hlds__trans_opt__closure_arg;

#line 159 "trans_opt.m"
    {
#line 159 "trans_opt.m"
      transform_hlds__term_constr_main__output_pred_termination2_info_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trans_opt__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__trans_opt__wrapper_arg_1));
#line 159 "trans_opt.m"
      return;
    }
#line 159 "trans_opt.m"
  }
#line 159 "trans_opt.m"
}

#line 157 "trans_opt.m"
static void MR_CALL 
transform_hlds__trans_opt__write_trans_opt_file_3_p_0_1(
#line 157 "trans_opt.m"
  MR_Box transform_hlds__trans_opt__closure_arg,
#line 157 "trans_opt.m"
  MR_Box transform_hlds__trans_opt__wrapper_arg_1,
#line 157 "trans_opt.m"
  MR_Box transform_hlds__trans_opt__wrapper_arg_2,
#line 157 "trans_opt.m"
  MR_Box * transform_hlds__trans_opt__wrapper_arg_3)
#line 157 "trans_opt.m"
{
#line 157 "trans_opt.m"
  {
#line 157 "trans_opt.m"
    MR_Box transform_hlds__trans_opt__closure = transform_hlds__trans_opt__closure_arg;

#line 157 "trans_opt.m"
    {
#line 157 "trans_opt.m"
      transform_hlds__termination__write_pred_termination_info_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trans_opt__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__trans_opt__wrapper_arg_1));
#line 157 "trans_opt.m"
      return;
    }
#line 157 "trans_opt.m"
  }
#line 157 "trans_opt.m"
}

#line 71 "trans_opt.m"
void MR_CALL 
transform_hlds__trans_opt__write_trans_opt_file_3_p_0(
#line 71 "trans_opt.m"
  MR_Word transform_hlds__trans_opt__ModuleInfo_4)
#line 71 "trans_opt.m"
{
#line 119 "trans_opt.m"
  {
#line 119 "trans_opt.m"
    MR_bool transform_hlds__trans_opt__succeeded;
#line 119 "trans_opt.m"
    MR_Word transform_hlds__trans_opt__Globals_6;
#line 119 "trans_opt.m"
    MR_Word transform_hlds__trans_opt__ModuleName_7;
#line 119 "trans_opt.m"
    MR_String transform_hlds__trans_opt__TmpOptName_8;
#line 119 "trans_opt.m"
    MR_Word transform_hlds__trans_opt__Result_9;

#line 120 "trans_opt.m"
    {
#line 120 "trans_opt.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__trans_opt__ModuleInfo_4, &transform_hlds__trans_opt__Globals_6);
    }
#line 121 "trans_opt.m"
    {
#line 121 "trans_opt.m"
      hlds__hlds_module__module_info_get_name_2_p_0(transform_hlds__trans_opt__ModuleInfo_4, &transform_hlds__trans_opt__ModuleName_7);
    }
#line 122 "trans_opt.m"
    {
#line 122 "trans_opt.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(transform_hlds__trans_opt__Globals_6, transform_hlds__trans_opt__ModuleName_7, (MR_String) ".trans_opt.tmp", (MR_Integer) 0, &transform_hlds__trans_opt__TmpOptName_8);
    }
#line 124 "trans_opt.m"
    {
#line 124 "trans_opt.m"
      mercury__io__open_output_4_p_0(transform_hlds__trans_opt__TmpOptName_8, &transform_hlds__trans_opt__Result_9);
    }
#line 138 "trans_opt.m"
    if (((MR_tag((MR_Word) transform_hlds__trans_opt__Result_9)) == (MR_mktag((MR_Integer) 1))))
#line 126 "trans_opt.m"
      {
#line 126 "trans_opt.m"
        MR_Word transform_hlds__trans_opt__Error_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__trans_opt__Result_9, (MR_Integer) 0)));
#line 126 "trans_opt.m"
        MR_String transform_hlds__trans_opt__Msg_11;
#line 126 "trans_opt.m"
        MR_String transform_hlds__trans_opt__ProgName_12;

#line 127 "trans_opt.m"
        {
#line 127 "trans_opt.m"
          mercury__io__error_message_2_p_0(transform_hlds__trans_opt__Error_10, &transform_hlds__trans_opt__Msg_11);
        }
#line 128 "trans_opt.m"
        {
#line 128 "trans_opt.m"
          mercury__io__progname_base_4_p_0((MR_String) "trans_opt.m", &transform_hlds__trans_opt__ProgName_12);
        }
#line 129 "trans_opt.m"
        {
#line 129 "trans_opt.m"
          mercury__io__write_string_3_p_0(transform_hlds__trans_opt__ProgName_12);
        }
#line 130 "trans_opt.m"
        {
#line 130 "trans_opt.m"
          mercury__io__write_string_3_p_0((MR_String) ": cannot open transitive optimisation file \140");
        }
#line 131 "trans_opt.m"
        {
#line 131 "trans_opt.m"
          mercury__io__write_string_3_p_0(transform_hlds__trans_opt__TmpOptName_8);
        }
#line 132 "trans_opt.m"
        {
#line 132 "trans_opt.m"
          mercury__io__write_string_3_p_0((MR_String) "\' \n");
        }
#line 133 "trans_opt.m"
        {
#line 133 "trans_opt.m"
          mercury__io__write_string_3_p_0(transform_hlds__trans_opt__ProgName_12);
        }
#line 134 "trans_opt.m"
        {
#line 134 "trans_opt.m"
          mercury__io__write_string_3_p_0((MR_String) ": for output: ");
        }
#line 135 "trans_opt.m"
        {
#line 135 "trans_opt.m"
          mercury__io__write_string_3_p_0(transform_hlds__trans_opt__Msg_11);
        }
#line 136 "trans_opt.m"
        {
#line 136 "trans_opt.m"
          mercury__io__nl_2_p_0();
        }
#line 137 "trans_opt.m"
        {
#line 137 "trans_opt.m"
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 137 "trans_opt.m"
          return;
        }
#line 126 "trans_opt.m"
      }
#line 138 "trans_opt.m"
    else
#line 139 "trans_opt.m"
      {
#line 139 "trans_opt.m"
        MR_Word transform_hlds__trans_opt__TypeCtorInfo_74_74;
#line 139 "trans_opt.m"
        MR_Word transform_hlds__trans_opt__TypeCtorInfo_78_78;
#line 139 "trans_opt.m"
        MR_Word transform_hlds__trans_opt__Stream_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trans_opt__Result_9, (MR_Integer) 0)));
#line 139 "trans_opt.m"
        MR_Word transform_hlds__trans_opt__OldStream_14;
#line 139 "trans_opt.m"
        MR_Word transform_hlds__trans_opt__PredIds_15;
#line 139 "trans_opt.m"
        MR_Word transform_hlds__trans_opt__PredIdsSet_16;
#line 139 "trans_opt.m"
        MR_Word transform_hlds__trans_opt__ReusePredsSet_17;
#line 139 "trans_opt.m"
        MR_Word transform_hlds__trans_opt__PredIdsNoReusePredsSet_18;
#line 139 "trans_opt.m"
        MR_Word transform_hlds__trans_opt__PredIdsNoReuseVersions_19;
#line 139 "trans_opt.m"
        MR_Word transform_hlds__trans_opt__ExceptionInfo_20;
#line 139 "trans_opt.m"
        MR_Word transform_hlds__trans_opt__TrailingInfo_21;
#line 139 "trans_opt.m"
        MR_Word transform_hlds__trans_opt__TablingInfo_22;
#line 139 "trans_opt.m"
        MR_String transform_hlds__trans_opt__OptName_24;
#line 139 "trans_opt.m"
        MR_Word transform_hlds__trans_opt__V_37_37;
#line 139 "trans_opt.m"
        MR_Word transform_hlds__trans_opt__V_39_39;
#line 139 "trans_opt.m"
        MR_Word transform_hlds__trans_opt__V_41_41;
#line 139 "trans_opt.m"
        MR_Word transform_hlds__trans_opt__V_43_43;
#line 139 "trans_opt.m"
        MR_Word transform_hlds__trans_opt__V_45_45;
#line 139 "trans_opt.m"
        MR_Word transform_hlds__trans_opt__V_47_47;
#line 139 "trans_opt.m"
        MR_Word transform_hlds__trans_opt__V_49_49;
#line 157 "trans_opt.m"
        MR_Box transform_hlds__trans_opt__conv0_STATE_VARIABLE_IO_38_38;
#line 159 "trans_opt.m"
        MR_Box transform_hlds__trans_opt__conv1_STATE_VARIABLE_IO_40_40;
#line 162 "trans_opt.m"
        MR_Box transform_hlds__trans_opt__conv2_STATE_VARIABLE_IO_42_42;
#line 165 "trans_opt.m"
        MR_Box transform_hlds__trans_opt__conv3_STATE_VARIABLE_IO_44_44;
#line 169 "trans_opt.m"
        MR_Box transform_hlds__trans_opt__conv4_STATE_VARIABLE_IO_46_46;
#line 175 "trans_opt.m"
        MR_Box transform_hlds__trans_opt__conv5_STATE_VARIABLE_IO_48_48;
#line 180 "trans_opt.m"
        MR_Box transform_hlds__trans_opt__conv6_STATE_VARIABLE_IO_50_50;
#line 184 "trans_opt.m"
        MR_Word transform_hlds__trans_opt__V_23_23;

#line 140 "trans_opt.m"
        {
#line 140 "trans_opt.m"
          mercury__io__set_output_stream_4_p_0(transform_hlds__trans_opt__Stream_13, &transform_hlds__trans_opt__OldStream_14);
        }
#line 141 "trans_opt.m"
        {
#line 141 "trans_opt.m"
          mercury__io__write_string_3_p_0((MR_String) ":- module ");
        }
#line 142 "trans_opt.m"
        {
#line 142 "trans_opt.m"
          parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(transform_hlds__trans_opt__ModuleName_7);
        }
#line 143 "trans_opt.m"
        {
#line 143 "trans_opt.m"
          mercury__io__write_string_3_p_0((MR_String) ".\n");
        }
#line 151 "trans_opt.m"
        {
#line 151 "trans_opt.m"
          hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(transform_hlds__trans_opt__ModuleInfo_4, &transform_hlds__trans_opt__PredIds_15);
        }
#line 1192 "transform_hlds.trans_opt.c"
        transform_hlds__trans_opt__TypeCtorInfo_74_74 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 152 "trans_opt.m"
        {
#line 152 "trans_opt.m"
          transform_hlds__trans_opt__PredIdsSet_16 = mercury__set__from_list_1_f_0(transform_hlds__trans_opt__TypeCtorInfo_74_74, transform_hlds__trans_opt__PredIds_15);
        }
#line 153 "trans_opt.m"
        {
#line 153 "trans_opt.m"
          hlds__hlds_module__module_info_get_structure_reuse_preds_2_p_0(transform_hlds__trans_opt__ModuleInfo_4, &transform_hlds__trans_opt__ReusePredsSet_17);
        }
#line 154 "trans_opt.m"
        {
#line 154 "trans_opt.m"
          transform_hlds__trans_opt__PredIdsNoReusePredsSet_18 = mercury__set__difference_2_f_0(transform_hlds__trans_opt__TypeCtorInfo_74_74, transform_hlds__trans_opt__PredIdsSet_16, transform_hlds__trans_opt__ReusePredsSet_17);
        }
#line 155 "trans_opt.m"
        {
#line 155 "trans_opt.m"
          transform_hlds__trans_opt__PredIdsNoReuseVersions_19 = mercury__set__to_sorted_list_1_f_0(transform_hlds__trans_opt__TypeCtorInfo_74_74, transform_hlds__trans_opt__PredIdsNoReusePredsSet_18);
        }
#line 157 "trans_opt.m"
        {
#line 157 "trans_opt.m"
          transform_hlds__trans_opt__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 157 "trans_opt.m"
          MR_hl_field(MR_mktag(0), transform_hlds__trans_opt__V_37_37, 0) = ((MR_Box) (&transform_hlds__trans_opt_scalar_common_2[0]));
#line 157 "trans_opt.m"
          MR_hl_field(MR_mktag(0), transform_hlds__trans_opt__V_37_37, 1) = ((MR_Box) (transform_hlds__trans_opt__write_trans_opt_file_3_p_0_1));
#line 157 "trans_opt.m"
          MR_hl_field(MR_mktag(0), transform_hlds__trans_opt__V_37_37, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 157 "trans_opt.m"
          MR_hl_field(MR_mktag(0), transform_hlds__trans_opt__V_37_37, 3) = ((MR_Box) (transform_hlds__trans_opt__ModuleInfo_4));
#line 157 "trans_opt.m"
        }
#line 1228 "transform_hlds.trans_opt.c"
        transform_hlds__trans_opt__TypeCtorInfo_78_78 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
#line 157 "trans_opt.m"
        {
#line 157 "trans_opt.m"
          mercury__list__foldl_4_p_2(transform_hlds__trans_opt__TypeCtorInfo_74_74, transform_hlds__trans_opt__TypeCtorInfo_78_78, transform_hlds__trans_opt__V_37_37, transform_hlds__trans_opt__PredIdsNoReuseVersions_19, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__trans_opt__conv0_STATE_VARIABLE_IO_38_38);
        }
#line 159 "trans_opt.m"
        {
#line 159 "trans_opt.m"
          transform_hlds__trans_opt__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 159 "trans_opt.m"
          MR_hl_field(MR_mktag(0), transform_hlds__trans_opt__V_39_39, 0) = ((MR_Box) (&transform_hlds__trans_opt_scalar_common_2[0]));
#line 159 "trans_opt.m"
          MR_hl_field(MR_mktag(0), transform_hlds__trans_opt__V_39_39, 1) = ((MR_Box) (transform_hlds__trans_opt__write_trans_opt_file_3_p_0_2));
#line 159 "trans_opt.m"
          MR_hl_field(MR_mktag(0), transform_hlds__trans_opt__V_39_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 159 "trans_opt.m"
          MR_hl_field(MR_mktag(0), transform_hlds__trans_opt__V_39_39, 3) = ((MR_Box) (transform_hlds__trans_opt__ModuleInfo_4));
#line 159 "trans_opt.m"
        }
#line 159 "trans_opt.m"
        {
#line 159 "trans_opt.m"
          mercury__list__foldl_4_p_2(transform_hlds__trans_opt__TypeCtorInfo_74_74, transform_hlds__trans_opt__TypeCtorInfo_78_78, transform_hlds__trans_opt__V_39_39, transform_hlds__trans_opt__PredIdsNoReuseVersions_19, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__trans_opt__conv1_STATE_VARIABLE_IO_40_40);
        }
#line 163 "trans_opt.m"
        {
#line 163 "trans_opt.m"
          transform_hlds__trans_opt__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 163 "trans_opt.m"
          MR_hl_field(MR_mktag(0), transform_hlds__trans_opt__V_41_41, 0) = ((MR_Box) (&transform_hlds__trans_opt_scalar_common_2[0]));
#line 163 "trans_opt.m"
          MR_hl_field(MR_mktag(0), transform_hlds__trans_opt__V_41_41, 1) = ((MR_Box) (transform_hlds__trans_opt__write_trans_opt_file_3_p_0_3));
#line 163 "trans_opt.m"
          MR_hl_field(MR_mktag(0), transform_hlds__trans_opt__V_41_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 163 "trans_opt.m"
          MR_hl_field(MR_mktag(0), transform_hlds__trans_opt__V_41_41, 3) = ((MR_Box) (transform_hlds__trans_opt__ModuleInfo_4));
#line 163 "trans_opt.m"
        }
#line 162 "trans_opt.m"
        {
#line 162 "trans_opt.m"
          mercury__list__foldl_4_p_2(transform_hlds__trans_opt__TypeCtorInfo_74_74, transform_hlds__trans_opt__TypeCtorInfo_78_78, transform_hlds__trans_opt__V_41_41, transform_hlds__trans_opt__PredIdsNoReuseVersions_19, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__trans_opt__conv2_STATE_VARIABLE_IO_42_42);
        }
#line 165 "trans_opt.m"
        {
#line 165 "trans_opt.m"
          transform_hlds__trans_opt__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 165 "trans_opt.m"
          MR_hl_field(MR_mktag(0), transform_hlds__trans_opt__V_43_43, 0) = ((MR_Box) (&transform_hlds__trans_opt_scalar_common_2[0]));
#line 165 "trans_opt.m"
          MR_hl_field(MR_mktag(0), transform_hlds__trans_opt__V_43_43, 1) = ((MR_Box) (transform_hlds__trans_opt__write_trans_opt_file_3_p_0_4));
#line 165 "trans_opt.m"
          MR_hl_field(MR_mktag(0), transform_hlds__trans_opt__V_43_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 165 "trans_opt.m"
          MR_hl_field(MR_mktag(0), transform_hlds__trans_opt__V_43_43, 3) = ((MR_Box) (transform_hlds__trans_opt__ModuleInfo_4));
#line 165 "trans_opt.m"
        }
#line 165 "trans_opt.m"
        {
#line 165 "trans_opt.m"
          mercury__list__foldl_4_p_2(transform_hlds__trans_opt__TypeCtorInfo_74_74, transform_hlds__trans_opt__TypeCtorInfo_78_78, transform_hlds__trans_opt__V_43_43, transform_hlds__trans_opt__PredIdsNoReuseVersions_19, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__trans_opt__conv3_STATE_VARIABLE_IO_44_44);
        }
#line 168 "trans_opt.m"
        {
#line 168 "trans_opt.m"
          hlds__hlds_module__module_info_get_exception_info_2_p_0(transform_hlds__trans_opt__ModuleInfo_4, &transform_hlds__trans_opt__ExceptionInfo_20);
        }
#line 170 "trans_opt.m"
        {
#line 170 "trans_opt.m"
          transform_hlds__trans_opt__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 170 "trans_opt.m"
          MR_hl_field(MR_mktag(0), transform_hlds__trans_opt__V_45_45, 0) = ((MR_Box) (&transform_hlds__trans_opt_scalar_common_3[0]));
#line 170 "trans_opt.m"
          MR_hl_field(MR_mktag(0), transform_hlds__trans_opt__V_45_45, 1) = ((MR_Box) (transform_hlds__trans_opt__write_trans_opt_file_3_p_0_5));
#line 170 "trans_opt.m"
          MR_hl_field(MR_mktag(0), transform_hlds__trans_opt__V_45_45, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 170 "trans_opt.m"
          MR_hl_field(MR_mktag(0), transform_hlds__trans_opt__V_45_45, 3) = ((MR_Box) (transform_hlds__trans_opt__ModuleInfo_4));
#line 170 "trans_opt.m"
          MR_hl_field(MR_mktag(0), transform_hlds__trans_opt__V_45_45, 4) = ((MR_Box) (transform_hlds__trans_opt__ExceptionInfo_20));
#line 170 "trans_opt.m"
        }
#line 169 "trans_opt.m"
        {
#line 169 "trans_opt.m"
          mercury__list__foldl_4_p_2(transform_hlds__trans_opt__TypeCtorInfo_74_74, transform_hlds__trans_opt__TypeCtorInfo_78_78, transform_hlds__trans_opt__V_45_45, transform_hlds__trans_opt__PredIdsNoReuseVersions_19, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__trans_opt__conv4_STATE_VARIABLE_IO_46_46);
        }
#line 174 "trans_opt.m"
        {
#line 174 "trans_opt.m"
          hlds__hlds_module__module_info_get_trailing_info_2_p_0(transform_hlds__trans_opt__ModuleInfo_4, &transform_hlds__trans_opt__TrailingInfo_21);
        }
#line 176 "trans_opt.m"
        {
#line 176 "trans_opt.m"
          transform_hlds__trans_opt__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 176 "trans_opt.m"
          MR_hl_field(MR_mktag(0), transform_hlds__trans_opt__V_47_47, 0) = ((MR_Box) (&transform_hlds__trans_opt_scalar_common_3[1]));
#line 176 "trans_opt.m"
          MR_hl_field(MR_mktag(0), transform_hlds__trans_opt__V_47_47, 1) = ((MR_Box) (transform_hlds__trans_opt__write_trans_opt_file_3_p_0_6));
#line 176 "trans_opt.m"
          MR_hl_field(MR_mktag(0), transform_hlds__trans_opt__V_47_47, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 176 "trans_opt.m"
          MR_hl_field(MR_mktag(0), transform_hlds__trans_opt__V_47_47, 3) = ((MR_Box) (transform_hlds__trans_opt__ModuleInfo_4));
#line 176 "trans_opt.m"
          MR_hl_field(MR_mktag(0), transform_hlds__trans_opt__V_47_47, 4) = ((MR_Box) (transform_hlds__trans_opt__TrailingInfo_21));
#line 176 "trans_opt.m"
        }
#line 175 "trans_opt.m"
        {
#line 175 "trans_opt.m"
          mercury__list__foldl_4_p_2(transform_hlds__trans_opt__TypeCtorInfo_74_74, transform_hlds__trans_opt__TypeCtorInfo_78_78, transform_hlds__trans_opt__V_47_47, transform_hlds__trans_opt__PredIdsNoReuseVersions_19, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__trans_opt__conv5_STATE_VARIABLE_IO_48_48);
        }
#line 179 "trans_opt.m"
        {
#line 179 "trans_opt.m"
          hlds__hlds_module__module_info_get_mm_tabling_info_2_p_0(transform_hlds__trans_opt__ModuleInfo_4, &transform_hlds__trans_opt__TablingInfo_22);
        }
#line 181 "trans_opt.m"
        {
#line 181 "trans_opt.m"
          transform_hlds__trans_opt__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 181 "trans_opt.m"
          MR_hl_field(MR_mktag(0), transform_hlds__trans_opt__V_49_49, 0) = ((MR_Box) (&transform_hlds__trans_opt_scalar_common_3[2]));
#line 181 "trans_opt.m"
          MR_hl_field(MR_mktag(0), transform_hlds__trans_opt__V_49_49, 1) = ((MR_Box) (transform_hlds__trans_opt__write_trans_opt_file_3_p_0_7));
#line 181 "trans_opt.m"
          MR_hl_field(MR_mktag(0), transform_hlds__trans_opt__V_49_49, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 181 "trans_opt.m"
          MR_hl_field(MR_mktag(0), transform_hlds__trans_opt__V_49_49, 3) = ((MR_Box) (transform_hlds__trans_opt__ModuleInfo_4));
#line 181 "trans_opt.m"
          MR_hl_field(MR_mktag(0), transform_hlds__trans_opt__V_49_49, 4) = ((MR_Box) (transform_hlds__trans_opt__TablingInfo_22));
#line 181 "trans_opt.m"
        }
#line 180 "trans_opt.m"
        {
#line 180 "trans_opt.m"
          mercury__list__foldl_4_p_2(transform_hlds__trans_opt__TypeCtorInfo_74_74, transform_hlds__trans_opt__TypeCtorInfo_78_78, transform_hlds__trans_opt__V_49_49, transform_hlds__trans_opt__PredIdsNoReuseVersions_19, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__trans_opt__conv6_STATE_VARIABLE_IO_50_50);
        }
#line 184 "trans_opt.m"
        {
#line 184 "trans_opt.m"
          mercury__io__set_output_stream_4_p_0(transform_hlds__trans_opt__OldStream_14, &transform_hlds__trans_opt__V_23_23);
        }
#line 185 "trans_opt.m"
        {
#line 185 "trans_opt.m"
          mercury__io__close_output_3_p_0(transform_hlds__trans_opt__Stream_13);
        }
#line 187 "trans_opt.m"
        {
#line 187 "trans_opt.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(transform_hlds__trans_opt__Globals_6, transform_hlds__trans_opt__ModuleName_7, (MR_String) ".trans_opt", (MR_Integer) 1, &transform_hlds__trans_opt__OptName_24);
        }
#line 189 "trans_opt.m"
        {
#line 189 "trans_opt.m"
          parse_tree__module_cmds__update_interface_4_p_0(transform_hlds__trans_opt__Globals_6, transform_hlds__trans_opt__OptName_24);
        }
#line 190 "trans_opt.m"
        {
#line 190 "trans_opt.m"
          parse_tree__module_cmds__touch_interface_datestamp_5_p_0(transform_hlds__trans_opt__Globals_6, transform_hlds__trans_opt__ModuleName_7, (MR_String) ".trans_opt_date");
#line 190 "trans_opt.m"
          return;
        }
#line 139 "trans_opt.m"
      }
#line 119 "trans_opt.m"
  }
#line 71 "trans_opt.m"
}

void mercury__transform_hlds__trans_opt__init(void)
{
}

void mercury__transform_hlds__trans_opt__init_type_tables(void)
{
}

void mercury__transform_hlds__trans_opt__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module transform_hlds.trans_opt. */
