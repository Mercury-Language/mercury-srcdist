/*
** Automatically generated from `trans_opt.m'
** by the Mercury compiler,
** version rotd-2014-12-12
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
#include "parse_tree.set_of_var.mih"
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




#line 154 "transform_hlds.trans_opt.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__trans_opt__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_hlds__hlds_module__type_ctor_info_proc_exception_info_0;

#line 157 "transform_hlds.trans_opt.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__trans_opt__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_hlds__hlds_module__type_ctor_info_proc_trailing_info_0;

#line 160 "transform_hlds.trans_opt.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__trans_opt__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_hlds__hlds_module__type_ctor_info_proc_mm_tabling_info_0;

#line 211 "trans_opt.m"
static void MR_CALL 
transform_hlds__trans_opt__read_trans_opt_files_10_p_0(
#line 211 "trans_opt.m"
  MR_Word transform_hlds__trans_opt__Globals_1,
#line 211 "trans_opt.m"
  MR_Word transform_hlds__trans_opt__HeadVar__2_2,
#line 211 "trans_opt.m"
  MR_Word transform_hlds__trans_opt__STATE_VARIABLE_Items_0_3,
#line 211 "trans_opt.m"
  MR_Word * transform_hlds__trans_opt__STATE_VARIABLE_Items_4,
#line 211 "trans_opt.m"
  MR_Word transform_hlds__trans_opt__STATE_VARIABLE_Specs_0_5,
#line 211 "trans_opt.m"
  MR_Word * transform_hlds__trans_opt__STATE_VARIABLE_Specs_6,
#line 211 "trans_opt.m"
  MR_Word transform_hlds__trans_opt__STATE_VARIABLE_Error_0_7,
#line 211 "trans_opt.m"
  MR_Word * transform_hlds__trans_opt__STATE_VARIABLE_Error_8);

#line 178 "trans_opt.m"
static void MR_CALL 
transform_hlds__trans_opt__write_trans_opt_file_3_p_0_7(
#line 178 "trans_opt.m"
  MR_Box transform_hlds__trans_opt__closure_arg,
#line 178 "trans_opt.m"
  MR_Box transform_hlds__trans_opt__wrapper_arg_1,
#line 178 "trans_opt.m"
  MR_Box transform_hlds__trans_opt__wrapper_arg_2,
#line 178 "trans_opt.m"
  MR_Box * transform_hlds__trans_opt__wrapper_arg_3);

#line 173 "trans_opt.m"
static void MR_CALL 
transform_hlds__trans_opt__write_trans_opt_file_3_p_0_6(
#line 173 "trans_opt.m"
  MR_Box transform_hlds__trans_opt__closure_arg,
#line 173 "trans_opt.m"
  MR_Box transform_hlds__trans_opt__wrapper_arg_1,
#line 173 "trans_opt.m"
  MR_Box transform_hlds__trans_opt__wrapper_arg_2,
#line 173 "trans_opt.m"
  MR_Box * transform_hlds__trans_opt__wrapper_arg_3);

#line 167 "trans_opt.m"
static void MR_CALL 
transform_hlds__trans_opt__write_trans_opt_file_3_p_0_5(
#line 167 "trans_opt.m"
  MR_Box transform_hlds__trans_opt__closure_arg,
#line 167 "trans_opt.m"
  MR_Box transform_hlds__trans_opt__wrapper_arg_1,
#line 167 "trans_opt.m"
  MR_Box transform_hlds__trans_opt__wrapper_arg_2,
#line 167 "trans_opt.m"
  MR_Box * transform_hlds__trans_opt__wrapper_arg_3);

#line 162 "trans_opt.m"
static void MR_CALL 
transform_hlds__trans_opt__write_trans_opt_file_3_p_0_4(
#line 162 "trans_opt.m"
  MR_Box transform_hlds__trans_opt__closure_arg,
#line 162 "trans_opt.m"
  MR_Box transform_hlds__trans_opt__wrapper_arg_1,
#line 162 "trans_opt.m"
  MR_Box transform_hlds__trans_opt__wrapper_arg_2,
#line 162 "trans_opt.m"
  MR_Box * transform_hlds__trans_opt__wrapper_arg_3);

#line 160 "trans_opt.m"
static void MR_CALL 
transform_hlds__trans_opt__write_trans_opt_file_3_p_0_3(
#line 160 "trans_opt.m"
  MR_Box transform_hlds__trans_opt__closure_arg,
#line 160 "trans_opt.m"
  MR_Box transform_hlds__trans_opt__wrapper_arg_1,
#line 160 "trans_opt.m"
  MR_Box transform_hlds__trans_opt__wrapper_arg_2,
#line 160 "trans_opt.m"
  MR_Box * transform_hlds__trans_opt__wrapper_arg_3);

#line 156 "trans_opt.m"
static void MR_CALL 
transform_hlds__trans_opt__write_trans_opt_file_3_p_0_2(
#line 156 "trans_opt.m"
  MR_Box transform_hlds__trans_opt__closure_arg,
#line 156 "trans_opt.m"
  MR_Box transform_hlds__trans_opt__wrapper_arg_1,
#line 156 "trans_opt.m"
  MR_Box transform_hlds__trans_opt__wrapper_arg_2,
#line 156 "trans_opt.m"
  MR_Box * transform_hlds__trans_opt__wrapper_arg_3);

#line 154 "trans_opt.m"
static void MR_CALL 
transform_hlds__trans_opt__write_trans_opt_file_3_p_0_1(
#line 154 "trans_opt.m"
  MR_Box transform_hlds__trans_opt__closure_arg,
#line 154 "trans_opt.m"
  MR_Box transform_hlds__trans_opt__wrapper_arg_1,
#line 154 "trans_opt.m"
  MR_Box transform_hlds__trans_opt__wrapper_arg_2,
#line 154 "trans_opt.m"
  MR_Box * transform_hlds__trans_opt__wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__trans_opt_scalar_common_1[1][7];

static /* final */ const MR_Box transform_hlds__trans_opt_scalar_common_2[3][8];




static /* final */ const MR_Box transform_hlds__trans_opt_scalar_common_1[1][7] = {
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

static /* final */ const MR_Box transform_hlds__trans_opt_scalar_common_2[3][8] = {
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



#line 341 "transform_hlds.trans_opt.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__trans_opt__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_hlds__hlds_module__type_ctor_info_proc_exception_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_proc_exception_info_0
  }
};

#line 350 "transform_hlds.trans_opt.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__trans_opt__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_hlds__hlds_module__type_ctor_info_proc_trailing_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_proc_trailing_info_0
  }
};

#line 359 "transform_hlds.trans_opt.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__trans_opt__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_hlds__hlds_module__type_ctor_info_proc_mm_tabling_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_proc_mm_tabling_info_0
  }
};

#line 211 "trans_opt.m"
static void MR_CALL 
transform_hlds__trans_opt__read_trans_opt_files_10_p_0(
#line 211 "trans_opt.m"
  MR_Word transform_hlds__trans_opt__Globals_1,
#line 211 "trans_opt.m"
  MR_Word transform_hlds__trans_opt__HeadVar__2_2,
#line 211 "trans_opt.m"
  MR_Word transform_hlds__trans_opt__STATE_VARIABLE_Items_0_3,
#line 211 "trans_opt.m"
  MR_Word * transform_hlds__trans_opt__STATE_VARIABLE_Items_4,
#line 211 "trans_opt.m"
  MR_Word transform_hlds__trans_opt__STATE_VARIABLE_Specs_0_5,
#line 211 "trans_opt.m"
  MR_Word * transform_hlds__trans_opt__STATE_VARIABLE_Specs_6,
#line 211 "trans_opt.m"
  MR_Word transform_hlds__trans_opt__STATE_VARIABLE_Error_0_7,
#line 211 "trans_opt.m"
  MR_Word * transform_hlds__trans_opt__STATE_VARIABLE_Error_8)
#line 211 "trans_opt.m"
{
#line 216 "trans_opt.m"
  while (MR_TRUE)
#line 216 "trans_opt.m"
    {
#line 216 "trans_opt.m"
      /* tailcall optimized into a loop */
#line 216 "trans_opt.m"
      {
#line 216 "trans_opt.m"
        MR_bool transform_hlds__trans_opt__succeeded;

#line 216 "trans_opt.m"
        if ((transform_hlds__trans_opt__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 216 "trans_opt.m"
          {
#line 216 "trans_opt.m"
            *transform_hlds__trans_opt__STATE_VARIABLE_Error_8 = transform_hlds__trans_opt__STATE_VARIABLE_Error_0_7;
#line 216 "trans_opt.m"
            *transform_hlds__trans_opt__STATE_VARIABLE_Specs_6 = transform_hlds__trans_opt__STATE_VARIABLE_Specs_0_5;
#line 216 "trans_opt.m"
            *transform_hlds__trans_opt__STATE_VARIABLE_Items_4 = transform_hlds__trans_opt__STATE_VARIABLE_Items_0_3;
#line 216 "trans_opt.m"
          }
#line 216 "trans_opt.m"
        else
#line 218 "trans_opt.m"
          {
#line 218 "trans_opt.m"
            MR_Word transform_hlds__trans_opt__TypeCtorInfo_74_74;
#line 218 "trans_opt.m"
            MR_Word transform_hlds__trans_opt__Import_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__trans_opt__HeadVar__2_2, (MR_Integer) 0)));
#line 218 "trans_opt.m"
            MR_Word transform_hlds__trans_opt__Imports_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__trans_opt__HeadVar__2_2, (MR_Integer) 1)));
#line 218 "trans_opt.m"
            MR_Word transform_hlds__trans_opt__VeryVerbose_31;
#line 218 "trans_opt.m"
            MR_String transform_hlds__trans_opt__ImportString_32;
#line 218 "trans_opt.m"
            MR_String transform_hlds__trans_opt__FileName_33;
#line 218 "trans_opt.m"
            MR_Word transform_hlds__trans_opt__NewItems_34;
#line 218 "trans_opt.m"
            MR_Word transform_hlds__trans_opt__NewSpecs_35;
#line 218 "trans_opt.m"
            MR_Word transform_hlds__trans_opt__NewError_36;
#line 218 "trans_opt.m"
            MR_Word transform_hlds__trans_opt__STATE_VARIABLE_Specs_46_46;
#line 218 "trans_opt.m"
            MR_Word transform_hlds__trans_opt__STATE_VARIABLE_Specs_61_61;
#line 218 "trans_opt.m"
            MR_Word transform_hlds__trans_opt__STATE_VARIABLE_Specs_63_63;
#line 218 "trans_opt.m"
            MR_Word transform_hlds__trans_opt__STATE_VARIABLE_Error_64_64;
#line 218 "trans_opt.m"
            MR_Word transform_hlds__trans_opt__STATE_VARIABLE_Specs_65_65;
#line 218 "trans_opt.m"
            MR_Word transform_hlds__trans_opt__STATE_VARIABLE_Items_67_67;
#line 218 "trans_opt.m"
            MR_Word transform_hlds__trans_opt__V_68_68;

#line 219 "trans_opt.m"
            {
#line 219 "trans_opt.m"
              libs__globals__lookup_bool_option_3_p_0(transform_hlds__trans_opt__Globals_1, (MR_Integer) 46, &transform_hlds__trans_opt__VeryVerbose_31);
            }
#line 220 "trans_opt.m"
            {
#line 220 "trans_opt.m"
              parse_tree__error_util__maybe_write_out_errors_no_module_6_p_0(transform_hlds__trans_opt__VeryVerbose_31, transform_hlds__trans_opt__Globals_1, transform_hlds__trans_opt__STATE_VARIABLE_Specs_0_5, &transform_hlds__trans_opt__STATE_VARIABLE_Specs_46_46);
            }
#line 221 "trans_opt.m"
            {
#line 221 "trans_opt.m"
              libs__file_util__maybe_write_string_4_p_0(transform_hlds__trans_opt__VeryVerbose_31, (MR_String) "% Reading transitive optimization interface for module");
            }
#line 223 "trans_opt.m"
            {
#line 223 "trans_opt.m"
              libs__file_util__maybe_write_string_4_p_0(transform_hlds__trans_opt__VeryVerbose_31, (MR_String) " \140");
            }
#line 224 "trans_opt.m"
            {
#line 224 "trans_opt.m"
              transform_hlds__trans_opt__ImportString_32 = mdbcomp__sym_name__sym_name_to_string_1_f_0(transform_hlds__trans_opt__Import_25);
            }
#line 225 "trans_opt.m"
            {
#line 225 "trans_opt.m"
              libs__file_util__maybe_write_string_4_p_0(transform_hlds__trans_opt__VeryVerbose_31, transform_hlds__trans_opt__ImportString_32);
            }
#line 226 "trans_opt.m"
            {
#line 226 "trans_opt.m"
              libs__file_util__maybe_write_string_4_p_0(transform_hlds__trans_opt__VeryVerbose_31, (MR_String) "\'... ");
            }
#line 227 "trans_opt.m"
            {
#line 227 "trans_opt.m"
              libs__file_util__maybe_flush_output_3_p_0(transform_hlds__trans_opt__VeryVerbose_31);
            }
#line 229 "trans_opt.m"
            {
#line 229 "trans_opt.m"
              parse_tree__file_names__module_name_to_search_file_name_6_p_0(transform_hlds__trans_opt__Globals_1, transform_hlds__trans_opt__Import_25, (MR_String) ".trans_opt", &transform_hlds__trans_opt__FileName_33);
            }
#line 231 "trans_opt.m"
            {
#line 231 "trans_opt.m"
              parse_tree__prog_io__actually_read_opt_file_8_p_0(transform_hlds__trans_opt__Globals_1, transform_hlds__trans_opt__FileName_33, transform_hlds__trans_opt__Import_25, &transform_hlds__trans_opt__NewItems_34, &transform_hlds__trans_opt__NewSpecs_35, &transform_hlds__trans_opt__NewError_36);
            }
#line 233 "trans_opt.m"
            {
#line 233 "trans_opt.m"
              libs__file_util__maybe_write_string_4_p_0(transform_hlds__trans_opt__VeryVerbose_31, (MR_String) " done.\n");
            }
#line 234 "trans_opt.m"
            {
#line 234 "trans_opt.m"
              transform_hlds__trans_opt__STATE_VARIABLE_Specs_61_61 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, transform_hlds__trans_opt__NewSpecs_35, transform_hlds__trans_opt__STATE_VARIABLE_Specs_46_46);
            }
#line 235 "trans_opt.m"
            {
#line 235 "trans_opt.m"
              transform_hlds__intermod__update_error_status_9_p_0(transform_hlds__trans_opt__Globals_1, (MR_Integer) 1, transform_hlds__trans_opt__FileName_33, transform_hlds__trans_opt__NewSpecs_35, transform_hlds__trans_opt__STATE_VARIABLE_Specs_61_61, &transform_hlds__trans_opt__STATE_VARIABLE_Specs_63_63, transform_hlds__trans_opt__NewError_36, transform_hlds__trans_opt__STATE_VARIABLE_Error_0_7, &transform_hlds__trans_opt__STATE_VARIABLE_Error_64_64);
            }
#line 237 "trans_opt.m"
            {
#line 237 "trans_opt.m"
              parse_tree__error_util__maybe_write_out_errors_no_module_6_p_0(transform_hlds__trans_opt__VeryVerbose_31, transform_hlds__trans_opt__Globals_1, transform_hlds__trans_opt__STATE_VARIABLE_Specs_63_63, &transform_hlds__trans_opt__STATE_VARIABLE_Specs_65_65);
            }
#line 519 "transform_hlds.trans_opt.c"
            transform_hlds__trans_opt__TypeCtorInfo_74_74 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 238 "trans_opt.m"
            {
#line 238 "trans_opt.m"
              transform_hlds__trans_opt__V_68_68 = mercury__cord__from_list_1_f_0(transform_hlds__trans_opt__TypeCtorInfo_74_74, transform_hlds__trans_opt__NewItems_34);
            }
#line 238 "trans_opt.m"
            {
#line 238 "trans_opt.m"
              transform_hlds__trans_opt__STATE_VARIABLE_Items_67_67 = mercury__cord__f_43_43_2_f_0(transform_hlds__trans_opt__TypeCtorInfo_74_74, transform_hlds__trans_opt__STATE_VARIABLE_Items_0_3, transform_hlds__trans_opt__V_68_68);
            }
#line 239 "trans_opt.m"
            /* direct tailcall eliminated */
#line 239 "trans_opt.m"
            {
#line 239 "trans_opt.m"
              MR_Word transform_hlds__trans_opt__HeadVar__2__tmp_copy_2 = transform_hlds__trans_opt__Imports_26;
#line 239 "trans_opt.m"
              MR_Word transform_hlds__trans_opt__STATE_VARIABLE_Items_0__tmp_copy_3 = transform_hlds__trans_opt__STATE_VARIABLE_Items_67_67;
#line 239 "trans_opt.m"
              MR_Word transform_hlds__trans_opt__STATE_VARIABLE_Specs_0__tmp_copy_5 = transform_hlds__trans_opt__STATE_VARIABLE_Specs_65_65;
#line 239 "trans_opt.m"
              MR_Word transform_hlds__trans_opt__STATE_VARIABLE_Error_0__tmp_copy_7 = transform_hlds__trans_opt__STATE_VARIABLE_Error_64_64;

#line 239 "trans_opt.m"
              transform_hlds__trans_opt__STATE_VARIABLE_Error_0_7 = transform_hlds__trans_opt__STATE_VARIABLE_Error_0__tmp_copy_7;
#line 239 "trans_opt.m"
              transform_hlds__trans_opt__STATE_VARIABLE_Specs_0_5 = transform_hlds__trans_opt__STATE_VARIABLE_Specs_0__tmp_copy_5;
#line 239 "trans_opt.m"
              transform_hlds__trans_opt__STATE_VARIABLE_Items_0_3 = transform_hlds__trans_opt__STATE_VARIABLE_Items_0__tmp_copy_3;
#line 239 "trans_opt.m"
              transform_hlds__trans_opt__HeadVar__2_2 = transform_hlds__trans_opt__HeadVar__2__tmp_copy_2;
#line 239 "trans_opt.m"
            }
#line 239 "trans_opt.m"
            continue;
#line 218 "trans_opt.m"
          }
#line 216 "trans_opt.m"
      }
#line 216 "trans_opt.m"
      break;
#line 216 "trans_opt.m"
    }
#line 211 "trans_opt.m"
}

#line 78 "trans_opt.m"
void MR_CALL 
transform_hlds__trans_opt__grab_trans_opt_files_7_p_0(
#line 78 "trans_opt.m"
  MR_Word transform_hlds__trans_opt__Globals_8,
#line 78 "trans_opt.m"
  MR_Word transform_hlds__trans_opt__TransOptDeps_9,
#line 78 "trans_opt.m"
  MR_Word transform_hlds__trans_opt__STATE_VARIABLE_Module_0_16,
#line 78 "trans_opt.m"
  MR_Word * transform_hlds__trans_opt__STATE_VARIABLE_Module_17,
#line 78 "trans_opt.m"
  MR_Word * transform_hlds__trans_opt__FoundError_11)
#line 78 "trans_opt.m"
{
#line 195 "trans_opt.m"
  {
#line 195 "trans_opt.m"
    MR_bool transform_hlds__trans_opt__succeeded;
#line 195 "trans_opt.m"
    MR_Word transform_hlds__trans_opt__Verbose_13;
#line 195 "trans_opt.m"
    MR_Word transform_hlds__trans_opt__OptItems_14;
#line 195 "trans_opt.m"
    MR_Word transform_hlds__trans_opt__OptSpecs_15;
#line 195 "trans_opt.m"
    MR_Word transform_hlds__trans_opt__V_24_24;
#line 195 "trans_opt.m"
    MR_Word transform_hlds__trans_opt__STATE_VARIABLE_Module_29_29;
#line 195 "trans_opt.m"
    MR_Word transform_hlds__trans_opt__STATE_VARIABLE_Module_30_30;
#line 195 "trans_opt.m"
    MR_Word transform_hlds__trans_opt__STATE_VARIABLE_Module_31_31;
#line 195 "trans_opt.m"
    MR_Word transform_hlds__trans_opt__V_32_32;

#line 196 "trans_opt.m"
    {
#line 196 "trans_opt.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__trans_opt__Globals_8, (MR_Integer) 45, &transform_hlds__trans_opt__Verbose_13);
    }
#line 197 "trans_opt.m"
    {
#line 197 "trans_opt.m"
      libs__file_util__maybe_write_string_4_p_0(transform_hlds__trans_opt__Verbose_13, (MR_String) "% Reading .trans_opt files..\n");
    }
#line 198 "trans_opt.m"
    {
#line 198 "trans_opt.m"
      libs__file_util__maybe_flush_output_3_p_0(transform_hlds__trans_opt__Verbose_13);
    }
#line 201 "trans_opt.m"
    {
#line 201 "trans_opt.m"
      transform_hlds__trans_opt__V_24_24 = mercury__cord__empty_0_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0);
    }
#line 200 "trans_opt.m"
    {
#line 200 "trans_opt.m"
      transform_hlds__trans_opt__read_trans_opt_files_10_p_0(transform_hlds__trans_opt__Globals_8, transform_hlds__trans_opt__TransOptDeps_9, transform_hlds__trans_opt__V_24_24, &transform_hlds__trans_opt__OptItems_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__trans_opt__OptSpecs_15, (MR_Integer) 0, transform_hlds__trans_opt__FoundError_11);
    }
#line 203 "trans_opt.m"
    {
#line 203 "trans_opt.m"
      parse_tree__item_util__append_pseudo_decl_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)), transform_hlds__trans_opt__STATE_VARIABLE_Module_0_16, &transform_hlds__trans_opt__STATE_VARIABLE_Module_29_29);
    }
#line 204 "trans_opt.m"
    {
#line 204 "trans_opt.m"
      parse_tree__module_imports__module_and_imports_add_items_3_p_0(transform_hlds__trans_opt__OptItems_14, transform_hlds__trans_opt__STATE_VARIABLE_Module_29_29, &transform_hlds__trans_opt__STATE_VARIABLE_Module_30_30);
    }
#line 205 "trans_opt.m"
    {
#line 205 "trans_opt.m"
      parse_tree__module_imports__module_and_imports_add_specs_3_p_0(transform_hlds__trans_opt__OptSpecs_15, transform_hlds__trans_opt__STATE_VARIABLE_Module_30_30, &transform_hlds__trans_opt__STATE_VARIABLE_Module_31_31);
    }
#line 207 "trans_opt.m"
    {
#line 207 "trans_opt.m"
      transform_hlds__trans_opt__V_32_32 = mercury__set__init_0_f_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0);
    }
#line 207 "trans_opt.m"
    {
#line 207 "trans_opt.m"
      parse_tree__module_imports__module_and_imports_set_errors_3_p_0(transform_hlds__trans_opt__V_32_32, transform_hlds__trans_opt__STATE_VARIABLE_Module_31_31, transform_hlds__trans_opt__STATE_VARIABLE_Module_17);
    }
#line 209 "trans_opt.m"
    {
#line 209 "trans_opt.m"
      libs__file_util__maybe_write_string_4_p_0(transform_hlds__trans_opt__Verbose_13, (MR_String) "% Done.\n");
#line 209 "trans_opt.m"
      return;
    }
#line 195 "trans_opt.m"
  }
#line 78 "trans_opt.m"
}

#line 178 "trans_opt.m"
static void MR_CALL 
transform_hlds__trans_opt__write_trans_opt_file_3_p_0_7(
#line 178 "trans_opt.m"
  MR_Box transform_hlds__trans_opt__closure_arg,
#line 178 "trans_opt.m"
  MR_Box transform_hlds__trans_opt__wrapper_arg_1,
#line 178 "trans_opt.m"
  MR_Box transform_hlds__trans_opt__wrapper_arg_2,
#line 178 "trans_opt.m"
  MR_Box * transform_hlds__trans_opt__wrapper_arg_3)
#line 178 "trans_opt.m"
{
#line 178 "trans_opt.m"
  {
#line 178 "trans_opt.m"
    MR_Box transform_hlds__trans_opt__closure = transform_hlds__trans_opt__closure_arg;

#line 178 "trans_opt.m"
    {
#line 178 "trans_opt.m"
      transform_hlds__tabling_analysis__write_pragma_mm_tabling_info_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trans_opt__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trans_opt__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__trans_opt__wrapper_arg_1));
#line 178 "trans_opt.m"
      return;
    }
#line 178 "trans_opt.m"
  }
#line 178 "trans_opt.m"
}

#line 173 "trans_opt.m"
static void MR_CALL 
transform_hlds__trans_opt__write_trans_opt_file_3_p_0_6(
#line 173 "trans_opt.m"
  MR_Box transform_hlds__trans_opt__closure_arg,
#line 173 "trans_opt.m"
  MR_Box transform_hlds__trans_opt__wrapper_arg_1,
#line 173 "trans_opt.m"
  MR_Box transform_hlds__trans_opt__wrapper_arg_2,
#line 173 "trans_opt.m"
  MR_Box * transform_hlds__trans_opt__wrapper_arg_3)
#line 173 "trans_opt.m"
{
#line 173 "trans_opt.m"
  {
#line 173 "trans_opt.m"
    MR_Box transform_hlds__trans_opt__closure = transform_hlds__trans_opt__closure_arg;

#line 173 "trans_opt.m"
    {
#line 173 "trans_opt.m"
      transform_hlds__trailing_analysis__write_pragma_trailing_info_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trans_opt__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trans_opt__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__trans_opt__wrapper_arg_1));
#line 173 "trans_opt.m"
      return;
    }
#line 173 "trans_opt.m"
  }
#line 173 "trans_opt.m"
}

#line 167 "trans_opt.m"
static void MR_CALL 
transform_hlds__trans_opt__write_trans_opt_file_3_p_0_5(
#line 167 "trans_opt.m"
  MR_Box transform_hlds__trans_opt__closure_arg,
#line 167 "trans_opt.m"
  MR_Box transform_hlds__trans_opt__wrapper_arg_1,
#line 167 "trans_opt.m"
  MR_Box transform_hlds__trans_opt__wrapper_arg_2,
#line 167 "trans_opt.m"
  MR_Box * transform_hlds__trans_opt__wrapper_arg_3)
#line 167 "trans_opt.m"
{
#line 167 "trans_opt.m"
  {
#line 167 "trans_opt.m"
    MR_Box transform_hlds__trans_opt__closure = transform_hlds__trans_opt__closure_arg;

#line 167 "trans_opt.m"
    {
#line 167 "trans_opt.m"
      transform_hlds__exception_analysis__write_pragma_exceptions_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trans_opt__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trans_opt__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__trans_opt__wrapper_arg_1));
#line 167 "trans_opt.m"
      return;
    }
#line 167 "trans_opt.m"
  }
#line 167 "trans_opt.m"
}

#line 162 "trans_opt.m"
static void MR_CALL 
transform_hlds__trans_opt__write_trans_opt_file_3_p_0_4(
#line 162 "trans_opt.m"
  MR_Box transform_hlds__trans_opt__closure_arg,
#line 162 "trans_opt.m"
  MR_Box transform_hlds__trans_opt__wrapper_arg_1,
#line 162 "trans_opt.m"
  MR_Box transform_hlds__trans_opt__wrapper_arg_2,
#line 162 "trans_opt.m"
  MR_Box * transform_hlds__trans_opt__wrapper_arg_3)
#line 162 "trans_opt.m"
{
#line 162 "trans_opt.m"
  {
#line 162 "trans_opt.m"
    MR_Box transform_hlds__trans_opt__closure = transform_hlds__trans_opt__closure_arg;

#line 162 "trans_opt.m"
    {
#line 162 "trans_opt.m"
      transform_hlds__ctgc__structure_reuse__analysis__write_pred_reuse_info_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trans_opt__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__trans_opt__wrapper_arg_1));
#line 162 "trans_opt.m"
      return;
    }
#line 162 "trans_opt.m"
  }
#line 162 "trans_opt.m"
}

#line 160 "trans_opt.m"
static void MR_CALL 
transform_hlds__trans_opt__write_trans_opt_file_3_p_0_3(
#line 160 "trans_opt.m"
  MR_Box transform_hlds__trans_opt__closure_arg,
#line 160 "trans_opt.m"
  MR_Box transform_hlds__trans_opt__wrapper_arg_1,
#line 160 "trans_opt.m"
  MR_Box transform_hlds__trans_opt__wrapper_arg_2,
#line 160 "trans_opt.m"
  MR_Box * transform_hlds__trans_opt__wrapper_arg_3)
#line 160 "trans_opt.m"
{
#line 160 "trans_opt.m"
  {
#line 160 "trans_opt.m"
    MR_Box transform_hlds__trans_opt__closure = transform_hlds__trans_opt__closure_arg;

#line 160 "trans_opt.m"
    {
#line 160 "trans_opt.m"
      transform_hlds__ctgc__structure_sharing__analysis__write_pred_sharing_info_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trans_opt__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__trans_opt__wrapper_arg_1));
#line 160 "trans_opt.m"
      return;
    }
#line 160 "trans_opt.m"
  }
#line 160 "trans_opt.m"
}

#line 156 "trans_opt.m"
static void MR_CALL 
transform_hlds__trans_opt__write_trans_opt_file_3_p_0_2(
#line 156 "trans_opt.m"
  MR_Box transform_hlds__trans_opt__closure_arg,
#line 156 "trans_opt.m"
  MR_Box transform_hlds__trans_opt__wrapper_arg_1,
#line 156 "trans_opt.m"
  MR_Box transform_hlds__trans_opt__wrapper_arg_2,
#line 156 "trans_opt.m"
  MR_Box * transform_hlds__trans_opt__wrapper_arg_3)
#line 156 "trans_opt.m"
{
#line 156 "trans_opt.m"
  {
#line 156 "trans_opt.m"
    MR_Box transform_hlds__trans_opt__closure = transform_hlds__trans_opt__closure_arg;

#line 156 "trans_opt.m"
    {
#line 156 "trans_opt.m"
      transform_hlds__term_constr_main__output_pred_termination2_info_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trans_opt__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__trans_opt__wrapper_arg_1));
#line 156 "trans_opt.m"
      return;
    }
#line 156 "trans_opt.m"
  }
#line 156 "trans_opt.m"
}

#line 154 "trans_opt.m"
static void MR_CALL 
transform_hlds__trans_opt__write_trans_opt_file_3_p_0_1(
#line 154 "trans_opt.m"
  MR_Box transform_hlds__trans_opt__closure_arg,
#line 154 "trans_opt.m"
  MR_Box transform_hlds__trans_opt__wrapper_arg_1,
#line 154 "trans_opt.m"
  MR_Box transform_hlds__trans_opt__wrapper_arg_2,
#line 154 "trans_opt.m"
  MR_Box * transform_hlds__trans_opt__wrapper_arg_3)
#line 154 "trans_opt.m"
{
#line 154 "trans_opt.m"
  {
#line 154 "trans_opt.m"
    MR_Box transform_hlds__trans_opt__closure = transform_hlds__trans_opt__closure_arg;

#line 154 "trans_opt.m"
    {
#line 154 "trans_opt.m"
      transform_hlds__termination__write_pred_termination_info_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trans_opt__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__trans_opt__wrapper_arg_1));
#line 154 "trans_opt.m"
      return;
    }
#line 154 "trans_opt.m"
  }
#line 154 "trans_opt.m"
}

#line 71 "trans_opt.m"
void MR_CALL 
transform_hlds__trans_opt__write_trans_opt_file_3_p_0(
#line 71 "trans_opt.m"
  MR_Word transform_hlds__trans_opt__ModuleInfo_4)
#line 71 "trans_opt.m"
{
#line 116 "trans_opt.m"
  {
#line 116 "trans_opt.m"
    MR_bool transform_hlds__trans_opt__succeeded;
#line 116 "trans_opt.m"
    MR_Word transform_hlds__trans_opt__Globals_6;
#line 116 "trans_opt.m"
    MR_Word transform_hlds__trans_opt__ModuleName_7;
#line 116 "trans_opt.m"
    MR_String transform_hlds__trans_opt__TmpOptName_8;
#line 116 "trans_opt.m"
    MR_Word transform_hlds__trans_opt__Result_9;

#line 117 "trans_opt.m"
    {
#line 117 "trans_opt.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__trans_opt__ModuleInfo_4, &transform_hlds__trans_opt__Globals_6);
    }
#line 118 "trans_opt.m"
    {
#line 118 "trans_opt.m"
      hlds__hlds_module__module_info_get_name_2_p_0(transform_hlds__trans_opt__ModuleInfo_4, &transform_hlds__trans_opt__ModuleName_7);
    }
#line 119 "trans_opt.m"
    {
#line 119 "trans_opt.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(transform_hlds__trans_opt__Globals_6, transform_hlds__trans_opt__ModuleName_7, (MR_String) ".trans_opt.tmp", (MR_Integer) 0, &transform_hlds__trans_opt__TmpOptName_8);
    }
#line 121 "trans_opt.m"
    {
#line 121 "trans_opt.m"
      mercury__io__open_output_4_p_0(transform_hlds__trans_opt__TmpOptName_8, &transform_hlds__trans_opt__Result_9);
    }
#line 135 "trans_opt.m"
    if (((MR_tag((MR_Word) transform_hlds__trans_opt__Result_9)) == (MR_mktag((MR_Integer) 1))))
#line 123 "trans_opt.m"
      {
#line 123 "trans_opt.m"
        MR_Word transform_hlds__trans_opt__Error_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__trans_opt__Result_9, (MR_Integer) 0)));
#line 123 "trans_opt.m"
        MR_String transform_hlds__trans_opt__Msg_11;
#line 123 "trans_opt.m"
        MR_String transform_hlds__trans_opt__ProgName_12;

#line 124 "trans_opt.m"
        {
#line 124 "trans_opt.m"
          mercury__io__error_message_2_p_0(transform_hlds__trans_opt__Error_10, &transform_hlds__trans_opt__Msg_11);
        }
#line 125 "trans_opt.m"
        {
#line 125 "trans_opt.m"
          mercury__io__progname_base_4_p_0((MR_String) "trans_opt.m", &transform_hlds__trans_opt__ProgName_12);
        }
#line 126 "trans_opt.m"
        {
#line 126 "trans_opt.m"
          mercury__io__write_string_3_p_0(transform_hlds__trans_opt__ProgName_12);
        }
#line 127 "trans_opt.m"
        {
#line 127 "trans_opt.m"
          mercury__io__write_string_3_p_0((MR_String) ": cannot open transitive optimisation file \140");
        }
#line 128 "trans_opt.m"
        {
#line 128 "trans_opt.m"
          mercury__io__write_string_3_p_0(transform_hlds__trans_opt__TmpOptName_8);
        }
#line 129 "trans_opt.m"
        {
#line 129 "trans_opt.m"
          mercury__io__write_string_3_p_0((MR_String) "\' \n");
        }
#line 130 "trans_opt.m"
        {
#line 130 "trans_opt.m"
          mercury__io__write_string_3_p_0(transform_hlds__trans_opt__ProgName_12);
        }
#line 131 "trans_opt.m"
        {
#line 131 "trans_opt.m"
          mercury__io__write_string_3_p_0((MR_String) ": for output: ");
        }
#line 132 "trans_opt.m"
        {
#line 132 "trans_opt.m"
          mercury__io__write_string_3_p_0(transform_hlds__trans_opt__Msg_11);
        }
#line 133 "trans_opt.m"
        {
#line 133 "trans_opt.m"
          mercury__io__nl_2_p_0();
        }
#line 134 "trans_opt.m"
        {
#line 134 "trans_opt.m"
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 134 "trans_opt.m"
          return;
        }
#line 123 "trans_opt.m"
      }
#line 135 "trans_opt.m"
    else
#line 136 "trans_opt.m"
      {
#line 136 "trans_opt.m"
        MR_Word transform_hlds__trans_opt__TypeCtorInfo_75_75;
#line 136 "trans_opt.m"
        MR_Word transform_hlds__trans_opt__TypeCtorInfo_79_79;
#line 136 "trans_opt.m"
        MR_Word transform_hlds__trans_opt__Stream_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__trans_opt__Result_9, (MR_Integer) 0)));
#line 136 "trans_opt.m"
        MR_Word transform_hlds__trans_opt__OldStream_14;
#line 136 "trans_opt.m"
        MR_Word transform_hlds__trans_opt__PredIds_15;
#line 136 "trans_opt.m"
        MR_Word transform_hlds__trans_opt__PredIdsSet_17;
#line 136 "trans_opt.m"
        MR_Word transform_hlds__trans_opt__ReusePredsSet_18;
#line 136 "trans_opt.m"
        MR_Word transform_hlds__trans_opt__PredIdsNoReusePredsSet_19;
#line 136 "trans_opt.m"
        MR_Word transform_hlds__trans_opt__PredIdsNoReuseVersions_20;
#line 136 "trans_opt.m"
        MR_Word transform_hlds__trans_opt__ExceptionInfo_21;
#line 136 "trans_opt.m"
        MR_Word transform_hlds__trans_opt__TrailingInfo_22;
#line 136 "trans_opt.m"
        MR_Word transform_hlds__trans_opt__TablingInfo_23;
#line 136 "trans_opt.m"
        MR_String transform_hlds__trans_opt__OptName_25;
#line 136 "trans_opt.m"
        MR_Word transform_hlds__trans_opt__V_38_38;
#line 136 "trans_opt.m"
        MR_Word transform_hlds__trans_opt__V_40_40;
#line 136 "trans_opt.m"
        MR_Word transform_hlds__trans_opt__V_42_42;
#line 136 "trans_opt.m"
        MR_Word transform_hlds__trans_opt__V_44_44;
#line 136 "trans_opt.m"
        MR_Word transform_hlds__trans_opt__V_46_46;
#line 136 "trans_opt.m"
        MR_Word transform_hlds__trans_opt__V_48_48;
#line 136 "trans_opt.m"
        MR_Word transform_hlds__trans_opt__V_50_50;
#line 148 "trans_opt.m"
        MR_Word transform_hlds__trans_opt___UpdatedModuleInfo_16;
#line 154 "trans_opt.m"
        MR_Box transform_hlds__trans_opt__conv0_STATE_VARIABLE_IO_39_39;
#line 156 "trans_opt.m"
        MR_Box transform_hlds__trans_opt__conv1_STATE_VARIABLE_IO_41_41;
#line 159 "trans_opt.m"
        MR_Box transform_hlds__trans_opt__conv2_STATE_VARIABLE_IO_43_43;
#line 162 "trans_opt.m"
        MR_Box transform_hlds__trans_opt__conv3_STATE_VARIABLE_IO_45_45;
#line 166 "trans_opt.m"
        MR_Box transform_hlds__trans_opt__conv4_STATE_VARIABLE_IO_47_47;
#line 172 "trans_opt.m"
        MR_Box transform_hlds__trans_opt__conv5_STATE_VARIABLE_IO_49_49;
#line 177 "trans_opt.m"
        MR_Box transform_hlds__trans_opt__conv6_STATE_VARIABLE_IO_51_51;
#line 181 "trans_opt.m"
        MR_Word transform_hlds__trans_opt__V_24_24;

#line 137 "trans_opt.m"
        {
#line 137 "trans_opt.m"
          mercury__io__set_output_stream_4_p_0(transform_hlds__trans_opt__Stream_13, &transform_hlds__trans_opt__OldStream_14);
        }
#line 138 "trans_opt.m"
        {
#line 138 "trans_opt.m"
          mercury__io__write_string_3_p_0((MR_String) ":- module ");
        }
#line 139 "trans_opt.m"
        {
#line 139 "trans_opt.m"
          parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(transform_hlds__trans_opt__ModuleName_7);
        }
#line 140 "trans_opt.m"
        {
#line 140 "trans_opt.m"
          mercury__io__write_string_3_p_0((MR_String) ".\n");
        }
#line 148 "trans_opt.m"
        {
#line 148 "trans_opt.m"
          hlds__hlds_module__module_info_get_valid_predids_3_p_0(&transform_hlds__trans_opt__PredIds_15, transform_hlds__trans_opt__ModuleInfo_4, &transform_hlds__trans_opt___UpdatedModuleInfo_16);
        }
#line 1073 "transform_hlds.trans_opt.c"
        transform_hlds__trans_opt__TypeCtorInfo_75_75 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 149 "trans_opt.m"
        {
#line 149 "trans_opt.m"
          transform_hlds__trans_opt__PredIdsSet_17 = mercury__set__from_list_1_f_0(transform_hlds__trans_opt__TypeCtorInfo_75_75, transform_hlds__trans_opt__PredIds_15);
        }
#line 150 "trans_opt.m"
        {
#line 150 "trans_opt.m"
          hlds__hlds_module__module_info_get_structure_reuse_preds_2_p_0(transform_hlds__trans_opt__ModuleInfo_4, &transform_hlds__trans_opt__ReusePredsSet_18);
        }
#line 151 "trans_opt.m"
        {
#line 151 "trans_opt.m"
          transform_hlds__trans_opt__PredIdsNoReusePredsSet_19 = mercury__set__difference_2_f_0(transform_hlds__trans_opt__TypeCtorInfo_75_75, transform_hlds__trans_opt__PredIdsSet_17, transform_hlds__trans_opt__ReusePredsSet_18);
        }
#line 152 "trans_opt.m"
        {
#line 152 "trans_opt.m"
          transform_hlds__trans_opt__PredIdsNoReuseVersions_20 = mercury__set__to_sorted_list_1_f_0(transform_hlds__trans_opt__TypeCtorInfo_75_75, transform_hlds__trans_opt__PredIdsNoReusePredsSet_19);
        }
#line 154 "trans_opt.m"
        {
#line 154 "trans_opt.m"
          transform_hlds__trans_opt__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 154 "trans_opt.m"
          MR_hl_field(MR_mktag(0), transform_hlds__trans_opt__V_38_38, 0) = ((MR_Box) (&transform_hlds__trans_opt_scalar_common_1[0]));
#line 154 "trans_opt.m"
          MR_hl_field(MR_mktag(0), transform_hlds__trans_opt__V_38_38, 1) = ((MR_Box) (transform_hlds__trans_opt__write_trans_opt_file_3_p_0_1));
#line 154 "trans_opt.m"
          MR_hl_field(MR_mktag(0), transform_hlds__trans_opt__V_38_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 154 "trans_opt.m"
          MR_hl_field(MR_mktag(0), transform_hlds__trans_opt__V_38_38, 3) = ((MR_Box) (transform_hlds__trans_opt__ModuleInfo_4));
#line 154 "trans_opt.m"
        }
#line 1109 "transform_hlds.trans_opt.c"
        transform_hlds__trans_opt__TypeCtorInfo_79_79 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
#line 154 "trans_opt.m"
        {
#line 154 "trans_opt.m"
          mercury__list__foldl_4_p_2(transform_hlds__trans_opt__TypeCtorInfo_75_75, transform_hlds__trans_opt__TypeCtorInfo_79_79, transform_hlds__trans_opt__V_38_38, transform_hlds__trans_opt__PredIdsNoReuseVersions_20, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__trans_opt__conv0_STATE_VARIABLE_IO_39_39);
        }
#line 156 "trans_opt.m"
        {
#line 156 "trans_opt.m"
          transform_hlds__trans_opt__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 156 "trans_opt.m"
          MR_hl_field(MR_mktag(0), transform_hlds__trans_opt__V_40_40, 0) = ((MR_Box) (&transform_hlds__trans_opt_scalar_common_1[0]));
#line 156 "trans_opt.m"
          MR_hl_field(MR_mktag(0), transform_hlds__trans_opt__V_40_40, 1) = ((MR_Box) (transform_hlds__trans_opt__write_trans_opt_file_3_p_0_2));
#line 156 "trans_opt.m"
          MR_hl_field(MR_mktag(0), transform_hlds__trans_opt__V_40_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 156 "trans_opt.m"
          MR_hl_field(MR_mktag(0), transform_hlds__trans_opt__V_40_40, 3) = ((MR_Box) (transform_hlds__trans_opt__ModuleInfo_4));
#line 156 "trans_opt.m"
        }
#line 156 "trans_opt.m"
        {
#line 156 "trans_opt.m"
          mercury__list__foldl_4_p_2(transform_hlds__trans_opt__TypeCtorInfo_75_75, transform_hlds__trans_opt__TypeCtorInfo_79_79, transform_hlds__trans_opt__V_40_40, transform_hlds__trans_opt__PredIdsNoReuseVersions_20, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__trans_opt__conv1_STATE_VARIABLE_IO_41_41);
        }
#line 160 "trans_opt.m"
        {
#line 160 "trans_opt.m"
          transform_hlds__trans_opt__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 160 "trans_opt.m"
          MR_hl_field(MR_mktag(0), transform_hlds__trans_opt__V_42_42, 0) = ((MR_Box) (&transform_hlds__trans_opt_scalar_common_1[0]));
#line 160 "trans_opt.m"
          MR_hl_field(MR_mktag(0), transform_hlds__trans_opt__V_42_42, 1) = ((MR_Box) (transform_hlds__trans_opt__write_trans_opt_file_3_p_0_3));
#line 160 "trans_opt.m"
          MR_hl_field(MR_mktag(0), transform_hlds__trans_opt__V_42_42, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 160 "trans_opt.m"
          MR_hl_field(MR_mktag(0), transform_hlds__trans_opt__V_42_42, 3) = ((MR_Box) (transform_hlds__trans_opt__ModuleInfo_4));
#line 160 "trans_opt.m"
        }
#line 159 "trans_opt.m"
        {
#line 159 "trans_opt.m"
          mercury__list__foldl_4_p_2(transform_hlds__trans_opt__TypeCtorInfo_75_75, transform_hlds__trans_opt__TypeCtorInfo_79_79, transform_hlds__trans_opt__V_42_42, transform_hlds__trans_opt__PredIdsNoReuseVersions_20, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__trans_opt__conv2_STATE_VARIABLE_IO_43_43);
        }
#line 162 "trans_opt.m"
        {
#line 162 "trans_opt.m"
          transform_hlds__trans_opt__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 162 "trans_opt.m"
          MR_hl_field(MR_mktag(0), transform_hlds__trans_opt__V_44_44, 0) = ((MR_Box) (&transform_hlds__trans_opt_scalar_common_1[0]));
#line 162 "trans_opt.m"
          MR_hl_field(MR_mktag(0), transform_hlds__trans_opt__V_44_44, 1) = ((MR_Box) (transform_hlds__trans_opt__write_trans_opt_file_3_p_0_4));
#line 162 "trans_opt.m"
          MR_hl_field(MR_mktag(0), transform_hlds__trans_opt__V_44_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 162 "trans_opt.m"
          MR_hl_field(MR_mktag(0), transform_hlds__trans_opt__V_44_44, 3) = ((MR_Box) (transform_hlds__trans_opt__ModuleInfo_4));
#line 162 "trans_opt.m"
        }
#line 162 "trans_opt.m"
        {
#line 162 "trans_opt.m"
          mercury__list__foldl_4_p_2(transform_hlds__trans_opt__TypeCtorInfo_75_75, transform_hlds__trans_opt__TypeCtorInfo_79_79, transform_hlds__trans_opt__V_44_44, transform_hlds__trans_opt__PredIdsNoReuseVersions_20, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__trans_opt__conv3_STATE_VARIABLE_IO_45_45);
        }
#line 165 "trans_opt.m"
        {
#line 165 "trans_opt.m"
          hlds__hlds_module__module_info_get_exception_info_2_p_0(transform_hlds__trans_opt__ModuleInfo_4, &transform_hlds__trans_opt__ExceptionInfo_21);
        }
#line 167 "trans_opt.m"
        {
#line 167 "trans_opt.m"
          transform_hlds__trans_opt__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 167 "trans_opt.m"
          MR_hl_field(MR_mktag(0), transform_hlds__trans_opt__V_46_46, 0) = ((MR_Box) (&transform_hlds__trans_opt_scalar_common_2[0]));
#line 167 "trans_opt.m"
          MR_hl_field(MR_mktag(0), transform_hlds__trans_opt__V_46_46, 1) = ((MR_Box) (transform_hlds__trans_opt__write_trans_opt_file_3_p_0_5));
#line 167 "trans_opt.m"
          MR_hl_field(MR_mktag(0), transform_hlds__trans_opt__V_46_46, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 167 "trans_opt.m"
          MR_hl_field(MR_mktag(0), transform_hlds__trans_opt__V_46_46, 3) = ((MR_Box) (transform_hlds__trans_opt__ModuleInfo_4));
#line 167 "trans_opt.m"
          MR_hl_field(MR_mktag(0), transform_hlds__trans_opt__V_46_46, 4) = ((MR_Box) (transform_hlds__trans_opt__ExceptionInfo_21));
#line 167 "trans_opt.m"
        }
#line 166 "trans_opt.m"
        {
#line 166 "trans_opt.m"
          mercury__list__foldl_4_p_2(transform_hlds__trans_opt__TypeCtorInfo_75_75, transform_hlds__trans_opt__TypeCtorInfo_79_79, transform_hlds__trans_opt__V_46_46, transform_hlds__trans_opt__PredIdsNoReuseVersions_20, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__trans_opt__conv4_STATE_VARIABLE_IO_47_47);
        }
#line 171 "trans_opt.m"
        {
#line 171 "trans_opt.m"
          hlds__hlds_module__module_info_get_trailing_info_2_p_0(transform_hlds__trans_opt__ModuleInfo_4, &transform_hlds__trans_opt__TrailingInfo_22);
        }
#line 173 "trans_opt.m"
        {
#line 173 "trans_opt.m"
          transform_hlds__trans_opt__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 173 "trans_opt.m"
          MR_hl_field(MR_mktag(0), transform_hlds__trans_opt__V_48_48, 0) = ((MR_Box) (&transform_hlds__trans_opt_scalar_common_2[1]));
#line 173 "trans_opt.m"
          MR_hl_field(MR_mktag(0), transform_hlds__trans_opt__V_48_48, 1) = ((MR_Box) (transform_hlds__trans_opt__write_trans_opt_file_3_p_0_6));
#line 173 "trans_opt.m"
          MR_hl_field(MR_mktag(0), transform_hlds__trans_opt__V_48_48, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 173 "trans_opt.m"
          MR_hl_field(MR_mktag(0), transform_hlds__trans_opt__V_48_48, 3) = ((MR_Box) (transform_hlds__trans_opt__ModuleInfo_4));
#line 173 "trans_opt.m"
          MR_hl_field(MR_mktag(0), transform_hlds__trans_opt__V_48_48, 4) = ((MR_Box) (transform_hlds__trans_opt__TrailingInfo_22));
#line 173 "trans_opt.m"
        }
#line 172 "trans_opt.m"
        {
#line 172 "trans_opt.m"
          mercury__list__foldl_4_p_2(transform_hlds__trans_opt__TypeCtorInfo_75_75, transform_hlds__trans_opt__TypeCtorInfo_79_79, transform_hlds__trans_opt__V_48_48, transform_hlds__trans_opt__PredIdsNoReuseVersions_20, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__trans_opt__conv5_STATE_VARIABLE_IO_49_49);
        }
#line 176 "trans_opt.m"
        {
#line 176 "trans_opt.m"
          hlds__hlds_module__module_info_get_mm_tabling_info_2_p_0(transform_hlds__trans_opt__ModuleInfo_4, &transform_hlds__trans_opt__TablingInfo_23);
        }
#line 178 "trans_opt.m"
        {
#line 178 "trans_opt.m"
          transform_hlds__trans_opt__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 178 "trans_opt.m"
          MR_hl_field(MR_mktag(0), transform_hlds__trans_opt__V_50_50, 0) = ((MR_Box) (&transform_hlds__trans_opt_scalar_common_2[2]));
#line 178 "trans_opt.m"
          MR_hl_field(MR_mktag(0), transform_hlds__trans_opt__V_50_50, 1) = ((MR_Box) (transform_hlds__trans_opt__write_trans_opt_file_3_p_0_7));
#line 178 "trans_opt.m"
          MR_hl_field(MR_mktag(0), transform_hlds__trans_opt__V_50_50, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 178 "trans_opt.m"
          MR_hl_field(MR_mktag(0), transform_hlds__trans_opt__V_50_50, 3) = ((MR_Box) (transform_hlds__trans_opt__ModuleInfo_4));
#line 178 "trans_opt.m"
          MR_hl_field(MR_mktag(0), transform_hlds__trans_opt__V_50_50, 4) = ((MR_Box) (transform_hlds__trans_opt__TablingInfo_23));
#line 178 "trans_opt.m"
        }
#line 177 "trans_opt.m"
        {
#line 177 "trans_opt.m"
          mercury__list__foldl_4_p_2(transform_hlds__trans_opt__TypeCtorInfo_75_75, transform_hlds__trans_opt__TypeCtorInfo_79_79, transform_hlds__trans_opt__V_50_50, transform_hlds__trans_opt__PredIdsNoReuseVersions_20, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__trans_opt__conv6_STATE_VARIABLE_IO_51_51);
        }
#line 181 "trans_opt.m"
        {
#line 181 "trans_opt.m"
          mercury__io__set_output_stream_4_p_0(transform_hlds__trans_opt__OldStream_14, &transform_hlds__trans_opt__V_24_24);
        }
#line 182 "trans_opt.m"
        {
#line 182 "trans_opt.m"
          mercury__io__close_output_3_p_0(transform_hlds__trans_opt__Stream_13);
        }
#line 184 "trans_opt.m"
        {
#line 184 "trans_opt.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(transform_hlds__trans_opt__Globals_6, transform_hlds__trans_opt__ModuleName_7, (MR_String) ".trans_opt", (MR_Integer) 1, &transform_hlds__trans_opt__OptName_25);
        }
#line 186 "trans_opt.m"
        {
#line 186 "trans_opt.m"
          parse_tree__module_cmds__update_interface_4_p_0(transform_hlds__trans_opt__Globals_6, transform_hlds__trans_opt__OptName_25);
        }
#line 187 "trans_opt.m"
        {
#line 187 "trans_opt.m"
          parse_tree__module_cmds__touch_interface_datestamp_5_p_0(transform_hlds__trans_opt__Globals_6, transform_hlds__trans_opt__ModuleName_7, (MR_String) ".trans_opt_date");
#line 187 "trans_opt.m"
          return;
        }
#line 136 "trans_opt.m"
      }
#line 116 "trans_opt.m"
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
