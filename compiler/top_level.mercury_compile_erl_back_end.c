/*
** Automatically generated from `mercury_compile_erl_back_end.m'
** by the Mercury compiler,
** version rotd-2013-03-21, configured for x86_64-apple-darwin12.2.1.
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


/* :- module top_level.mercury_compile_erl_back_end. */
/* :- implementation. */

/*
INIT mercury__top_level__mercury_compile_erl_back_end__init
ENDINIT
*/

#include "top_level.mercury_compile_erl_back_end.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "bytecode_backend.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "erl_backend.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "ll_backend.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "ml_backend.mih"
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
#include "top_level.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "tree_bitset.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.base_typeclass_info.mih"
#include "backend_libs.erlang_rtti.mih"
#include "backend_libs.rtti.mih"
#include "backend_libs.type_class_info.mih"
#include "backend_libs.type_ctor_info.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.unify_proc.mih"
#include "erl_backend.elds.mih"
#include "erl_backend.elds_to_erlang.mih"
#include "erl_backend.erl_code_gen.mih"
#include "erl_backend.erl_rtti.mih"
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
#include "hlds.passes_aux.mih"
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
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "top_level.mercury_compile.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 81 "mercury_compile_erl_back_end.m"
static MR_Box MR_CALL 
top_level__mercury_compile_erl_back_end__erlang_backend_6_p_0_1(
#line 81 "mercury_compile_erl_back_end.m"
  MR_Box top_level__mercury_compile_erl_back_end__closure_arg,
#line 81 "mercury_compile_erl_back_end.m"
  MR_Box top_level__mercury_compile_erl_back_end__wrapper_arg_1);


static /* final */ const MR_Box top_level__mercury_compile_erl_back_end_scalar_common_1[1][6];




static /* final */ const MR_Box top_level__mercury_compile_erl_back_end_scalar_common_1[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0)),
    ((MR_Box) (&backend_libs__erlang_rtti__backend_libs__erlang_rtti__type_ctor_info_erlang_rtti_data_0))
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



#line 29 "mercury_compile_erl_back_end.m"
void MR_CALL 
top_level__mercury_compile_erl_back_end__elds_to_erlang_4_p_0(
#line 29 "mercury_compile_erl_back_end.m"
  MR_Word top_level__mercury_compile_erl_back_end__HLDS_5,
#line 29 "mercury_compile_erl_back_end.m"
  MR_Word top_level__mercury_compile_erl_back_end__ELDS_6)
#line 29 "mercury_compile_erl_back_end.m"
{
#line 87 "mercury_compile_erl_back_end.m"
  {
#line 87 "mercury_compile_erl_back_end.m"
    MR_bool top_level__mercury_compile_erl_back_end__succeeded;
#line 87 "mercury_compile_erl_back_end.m"
    MR_Word top_level__mercury_compile_erl_back_end__Globals_8;
#line 87 "mercury_compile_erl_back_end.m"
    MR_Word top_level__mercury_compile_erl_back_end__Verbose_9;
#line 87 "mercury_compile_erl_back_end.m"
    MR_Word top_level__mercury_compile_erl_back_end__Stats_10;

#line 88 "mercury_compile_erl_back_end.m"
    {
#line 88 "mercury_compile_erl_back_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_erl_back_end__HLDS_5, &top_level__mercury_compile_erl_back_end__Globals_8);
    }
#line 89 "mercury_compile_erl_back_end.m"
    {
#line 89 "mercury_compile_erl_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_erl_back_end__Globals_8, (MR_Integer) 44, &top_level__mercury_compile_erl_back_end__Verbose_9);
    }
#line 90 "mercury_compile_erl_back_end.m"
    {
#line 90 "mercury_compile_erl_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_erl_back_end__Globals_8, (MR_Integer) 54, &top_level__mercury_compile_erl_back_end__Stats_10);
    }
#line 92 "mercury_compile_erl_back_end.m"
    {
#line 92 "mercury_compile_erl_back_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_erl_back_end__Verbose_9, (MR_String) "% Converting ELDS to Erlang...\n");
    }
#line 93 "mercury_compile_erl_back_end.m"
    {
#line 93 "mercury_compile_erl_back_end.m"
      erl_backend__elds_to_erlang__output_elds_4_p_0(top_level__mercury_compile_erl_back_end__HLDS_5, top_level__mercury_compile_erl_back_end__ELDS_6);
    }
#line 94 "mercury_compile_erl_back_end.m"
    {
#line 94 "mercury_compile_erl_back_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_erl_back_end__Verbose_9, (MR_String) "% Finished converting ELDS to Erlang.\n");
    }
#line 96 "mercury_compile_erl_back_end.m"
    {
#line 96 "mercury_compile_erl_back_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_erl_back_end__Stats_10);
#line 96 "mercury_compile_erl_back_end.m"
      return;
    }
#line 87 "mercury_compile_erl_back_end.m"
  }
#line 29 "mercury_compile_erl_back_end.m"
}

#line 81 "mercury_compile_erl_back_end.m"
static MR_Box MR_CALL 
top_level__mercury_compile_erl_back_end__erlang_backend_6_p_0_1(
#line 81 "mercury_compile_erl_back_end.m"
  MR_Box top_level__mercury_compile_erl_back_end__closure_arg,
#line 81 "mercury_compile_erl_back_end.m"
  MR_Box top_level__mercury_compile_erl_back_end__wrapper_arg_1)
#line 81 "mercury_compile_erl_back_end.m"
{
#line 81 "mercury_compile_erl_back_end.m"
  {
#line 81 "mercury_compile_erl_back_end.m"
    MR_Box top_level__mercury_compile_erl_back_end__wrapper_arg_2;
#line 81 "mercury_compile_erl_back_end.m"
    MR_Box top_level__mercury_compile_erl_back_end__closure = top_level__mercury_compile_erl_back_end__closure_arg;
#line 81 "mercury_compile_erl_back_end.m"
    MR_Word top_level__mercury_compile_erl_back_end__conv0_HeadVar__3_3;

#line 81 "mercury_compile_erl_back_end.m"
    {
#line 81 "mercury_compile_erl_back_end.m"
      top_level__mercury_compile_erl_back_end__conv0_HeadVar__3_3 = erl_backend__erl_rtti__erlang_rtti_data_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_erl_back_end__closure, (MR_Integer) 3))), ((MR_Word) top_level__mercury_compile_erl_back_end__wrapper_arg_1));
    }
#line 81 "mercury_compile_erl_back_end.m"
    top_level__mercury_compile_erl_back_end__wrapper_arg_2 = ((MR_Box) (top_level__mercury_compile_erl_back_end__conv0_HeadVar__3_3));
#line 81 "mercury_compile_erl_back_end.m"
    return top_level__mercury_compile_erl_back_end__wrapper_arg_2;
#line 81 "mercury_compile_erl_back_end.m"
  }
#line 81 "mercury_compile_erl_back_end.m"
}

#line 26 "mercury_compile_erl_back_end.m"
void MR_CALL 
top_level__mercury_compile_erl_back_end__erlang_backend_6_p_0(
#line 26 "mercury_compile_erl_back_end.m"
  MR_Word top_level__mercury_compile_erl_back_end__HLDS_7,
#line 26 "mercury_compile_erl_back_end.m"
  MR_Word * top_level__mercury_compile_erl_back_end__ELDS_8,
#line 26 "mercury_compile_erl_back_end.m"
  MR_Word top_level__mercury_compile_erl_back_end__STATE_VARIABLE_DumpInfo_0_15,
#line 26 "mercury_compile_erl_back_end.m"
  MR_Word * top_level__mercury_compile_erl_back_end__STATE_VARIABLE_DumpInfo_16)
#line 26 "mercury_compile_erl_back_end.m"
{
#line 51 "mercury_compile_erl_back_end.m"
  {
#line 51 "mercury_compile_erl_back_end.m"
    MR_bool top_level__mercury_compile_erl_back_end__succeeded;
#line 51 "mercury_compile_erl_back_end.m"
    MR_Word top_level__mercury_compile_erl_back_end__TypeCtorInfo_44_71;
#line 51 "mercury_compile_erl_back_end.m"
    MR_Word top_level__mercury_compile_erl_back_end__Globals_11;
#line 51 "mercury_compile_erl_back_end.m"
    MR_Word top_level__mercury_compile_erl_back_end__Verbose_12;
#line 51 "mercury_compile_erl_back_end.m"
    MR_Word top_level__mercury_compile_erl_back_end__Stats_13;
#line 51 "mercury_compile_erl_back_end.m"
    MR_Word top_level__mercury_compile_erl_back_end__ELDS0_14;
#line 51 "mercury_compile_erl_back_end.m"
    MR_Word top_level__mercury_compile_erl_back_end__Globals_40;
#line 51 "mercury_compile_erl_back_end.m"
    MR_Word top_level__mercury_compile_erl_back_end__TypeCtorRttiData_41;
#line 51 "mercury_compile_erl_back_end.m"
    MR_Word top_level__mercury_compile_erl_back_end__OldTypeClassInfoRttiData_42;
#line 51 "mercury_compile_erl_back_end.m"
    MR_Word top_level__mercury_compile_erl_back_end__NewTypeClassRtti_43;
#line 51 "mercury_compile_erl_back_end.m"
    MR_Word top_level__mercury_compile_erl_back_end__NewTypeClassInfoRttiData_44;
#line 51 "mercury_compile_erl_back_end.m"
    MR_Word top_level__mercury_compile_erl_back_end__TypeClassInfoRttiData_45;
#line 51 "mercury_compile_erl_back_end.m"
    MR_Word top_level__mercury_compile_erl_back_end__RttiDatas_46;
#line 51 "mercury_compile_erl_back_end.m"
    MR_Word top_level__mercury_compile_erl_back_end__ErlangRttiDatas_47;
#line 51 "mercury_compile_erl_back_end.m"
    MR_Word top_level__mercury_compile_erl_back_end__RttiDefns0_48;
#line 51 "mercury_compile_erl_back_end.m"
    MR_Word top_level__mercury_compile_erl_back_end__RttiDefns_49;
#line 51 "mercury_compile_erl_back_end.m"
    MR_Word top_level__mercury_compile_erl_back_end__V_51_51;
#line 51 "mercury_compile_erl_back_end.m"
    MR_Word top_level__mercury_compile_erl_back_end__V_53_53;
#line 83 "mercury_compile_erl_back_end.m"
    MR_Word top_level__mercury_compile_erl_back_end__V_54_54;
#line 83 "mercury_compile_erl_back_end.m"
    MR_Word top_level__mercury_compile_erl_back_end__V_55_55;
#line 83 "mercury_compile_erl_back_end.m"
    MR_Word top_level__mercury_compile_erl_back_end__V_56_56;
#line 83 "mercury_compile_erl_back_end.m"
    MR_Word top_level__mercury_compile_erl_back_end__V_57_57;
#line 83 "mercury_compile_erl_back_end.m"
    MR_Word top_level__mercury_compile_erl_back_end__V_58_58;
#line 83 "mercury_compile_erl_back_end.m"
    MR_Word top_level__mercury_compile_erl_back_end__V_59_59;
#line 83 "mercury_compile_erl_back_end.m"
    MR_Word top_level__mercury_compile_erl_back_end__V_60_60;
#line 83 "mercury_compile_erl_back_end.m"
    MR_Word top_level__mercury_compile_erl_back_end__V_61_61;
#line 85 "mercury_compile_erl_back_end.m"
    MR_Word top_level__mercury_compile_erl_back_end__V_62_62;
#line 85 "mercury_compile_erl_back_end.m"
    MR_Word top_level__mercury_compile_erl_back_end__V_63_63;
#line 85 "mercury_compile_erl_back_end.m"
    MR_Word top_level__mercury_compile_erl_back_end__V_64_64;
#line 85 "mercury_compile_erl_back_end.m"
    MR_Word top_level__mercury_compile_erl_back_end__V_65_65;
#line 85 "mercury_compile_erl_back_end.m"
    MR_Word top_level__mercury_compile_erl_back_end__V_66_66;
#line 85 "mercury_compile_erl_back_end.m"
    MR_Word top_level__mercury_compile_erl_back_end__V_67_67;
#line 85 "mercury_compile_erl_back_end.m"
    MR_Word top_level__mercury_compile_erl_back_end__V_69_69;
#line 85 "mercury_compile_erl_back_end.m"
    MR_Word top_level__mercury_compile_erl_back_end__V_70_70;
#line 85 "mercury_compile_erl_back_end.m"
    MR_Word top_level__mercury_compile_erl_back_end__V_68_68;

#line 52 "mercury_compile_erl_back_end.m"
    {
#line 52 "mercury_compile_erl_back_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_erl_back_end__HLDS_7, &top_level__mercury_compile_erl_back_end__Globals_11);
    }
#line 53 "mercury_compile_erl_back_end.m"
    {
#line 53 "mercury_compile_erl_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_erl_back_end__Globals_11, (MR_Integer) 44, &top_level__mercury_compile_erl_back_end__Verbose_12);
    }
#line 54 "mercury_compile_erl_back_end.m"
    {
#line 54 "mercury_compile_erl_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_erl_back_end__Globals_11, (MR_Integer) 54, &top_level__mercury_compile_erl_back_end__Stats_13);
    }
#line 56 "mercury_compile_erl_back_end.m"
    {
#line 56 "mercury_compile_erl_back_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_erl_back_end__Verbose_12, (MR_String) "% Converting HLDS to ELDS...\n");
    }
#line 57 "mercury_compile_erl_back_end.m"
    {
#line 57 "mercury_compile_erl_back_end.m"
      erl_backend__erl_code_gen__erl_code_gen_4_p_0(top_level__mercury_compile_erl_back_end__HLDS_7, &top_level__mercury_compile_erl_back_end__ELDS0_14);
    }
#line 58 "mercury_compile_erl_back_end.m"
    {
#line 58 "mercury_compile_erl_back_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_erl_back_end__Verbose_12, (MR_String) "% done.\n");
    }
#line 59 "mercury_compile_erl_back_end.m"
    {
#line 59 "mercury_compile_erl_back_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_erl_back_end__Stats_13);
    }
#line 61 "mercury_compile_erl_back_end.m"
    {
#line 61 "mercury_compile_erl_back_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_erl_back_end__Verbose_12, (MR_String) "% Generating RTTI data...\n");
    }
#line 72 "mercury_compile_erl_back_end.m"
    {
#line 72 "mercury_compile_erl_back_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_erl_back_end__HLDS_7, &top_level__mercury_compile_erl_back_end__Globals_40);
    }
#line 73 "mercury_compile_erl_back_end.m"
    {
#line 73 "mercury_compile_erl_back_end.m"
      backend_libs__type_ctor_info__generate_rtti_2_p_0(top_level__mercury_compile_erl_back_end__HLDS_7, &top_level__mercury_compile_erl_back_end__TypeCtorRttiData_41);
    }
#line 74 "mercury_compile_erl_back_end.m"
    {
#line 74 "mercury_compile_erl_back_end.m"
      backend_libs__base_typeclass_info__generate_base_typeclass_info_rtti_2_p_0(top_level__mercury_compile_erl_back_end__HLDS_7, &top_level__mercury_compile_erl_back_end__OldTypeClassInfoRttiData_42);
    }
#line 75 "mercury_compile_erl_back_end.m"
    {
#line 75 "mercury_compile_erl_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_erl_back_end__Globals_40, (MR_Integer) 279, &top_level__mercury_compile_erl_back_end__NewTypeClassRtti_43);
    }
#line 76 "mercury_compile_erl_back_end.m"
    {
#line 76 "mercury_compile_erl_back_end.m"
      backend_libs__type_class_info__generate_type_class_info_rtti_3_p_0(top_level__mercury_compile_erl_back_end__HLDS_7, top_level__mercury_compile_erl_back_end__NewTypeClassRtti_43, &top_level__mercury_compile_erl_back_end__NewTypeClassInfoRttiData_44);
    }
#line 435 "top_level.mercury_compile_erl_back_end.c"
    top_level__mercury_compile_erl_back_end__TypeCtorInfo_44_71 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0;
#line 78 "mercury_compile_erl_back_end.m"
    {
#line 78 "mercury_compile_erl_back_end.m"
      mercury__list__append_3_p_1(top_level__mercury_compile_erl_back_end__TypeCtorInfo_44_71, top_level__mercury_compile_erl_back_end__OldTypeClassInfoRttiData_42, top_level__mercury_compile_erl_back_end__NewTypeClassInfoRttiData_44, &top_level__mercury_compile_erl_back_end__TypeClassInfoRttiData_45);
    }
#line 80 "mercury_compile_erl_back_end.m"
    {
#line 80 "mercury_compile_erl_back_end.m"
      top_level__mercury_compile_erl_back_end__RttiDatas_46 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile_erl_back_end__TypeCtorInfo_44_71, top_level__mercury_compile_erl_back_end__TypeCtorRttiData_41, top_level__mercury_compile_erl_back_end__TypeClassInfoRttiData_45);
    }
#line 81 "mercury_compile_erl_back_end.m"
    {
#line 81 "mercury_compile_erl_back_end.m"
      top_level__mercury_compile_erl_back_end__V_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 81 "mercury_compile_erl_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_erl_back_end__V_51_51, 0) = ((MR_Box) (&top_level__mercury_compile_erl_back_end_scalar_common_1[0]));
#line 81 "mercury_compile_erl_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_erl_back_end__V_51_51, 1) = ((MR_Box) (top_level__mercury_compile_erl_back_end__erlang_backend_6_p_0_1));
#line 81 "mercury_compile_erl_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_erl_back_end__V_51_51, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 81 "mercury_compile_erl_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_erl_back_end__V_51_51, 3) = ((MR_Box) (top_level__mercury_compile_erl_back_end__HLDS_7));
#line 81 "mercury_compile_erl_back_end.m"
    }
#line 81 "mercury_compile_erl_back_end.m"
    {
#line 81 "mercury_compile_erl_back_end.m"
      top_level__mercury_compile_erl_back_end__ErlangRttiDatas_47 = mercury__list__map_2_f_0(top_level__mercury_compile_erl_back_end__TypeCtorInfo_44_71, (MR_Word) &backend_libs__erlang_rtti__backend_libs__erlang_rtti__type_ctor_info_erlang_rtti_data_0, top_level__mercury_compile_erl_back_end__V_51_51, top_level__mercury_compile_erl_back_end__RttiDatas_46);
    }
#line 83 "mercury_compile_erl_back_end.m"
    top_level__mercury_compile_erl_back_end__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_erl_back_end__ELDS0_14, (MR_Integer) 0)));
#line 83 "mercury_compile_erl_back_end.m"
    top_level__mercury_compile_erl_back_end__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_erl_back_end__ELDS0_14, (MR_Integer) 1)));
#line 83 "mercury_compile_erl_back_end.m"
    top_level__mercury_compile_erl_back_end__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_erl_back_end__ELDS0_14, (MR_Integer) 2)));
#line 83 "mercury_compile_erl_back_end.m"
    top_level__mercury_compile_erl_back_end__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_erl_back_end__ELDS0_14, (MR_Integer) 3)));
#line 83 "mercury_compile_erl_back_end.m"
    top_level__mercury_compile_erl_back_end__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_erl_back_end__ELDS0_14, (MR_Integer) 4)));
#line 83 "mercury_compile_erl_back_end.m"
    top_level__mercury_compile_erl_back_end__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_erl_back_end__ELDS0_14, (MR_Integer) 5)));
#line 83 "mercury_compile_erl_back_end.m"
    top_level__mercury_compile_erl_back_end__RttiDefns0_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_erl_back_end__ELDS0_14, (MR_Integer) 6)));
#line 83 "mercury_compile_erl_back_end.m"
    top_level__mercury_compile_erl_back_end__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_erl_back_end__ELDS0_14, (MR_Integer) 7)));
#line 83 "mercury_compile_erl_back_end.m"
    top_level__mercury_compile_erl_back_end__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_erl_back_end__ELDS0_14, (MR_Integer) 8)));
#line 84 "mercury_compile_erl_back_end.m"
    {
#line 84 "mercury_compile_erl_back_end.m"
      erl_backend__erl_rtti__rtti_data_list_to_elds_3_p_0(top_level__mercury_compile_erl_back_end__HLDS_7, top_level__mercury_compile_erl_back_end__ErlangRttiDatas_47, &top_level__mercury_compile_erl_back_end__RttiDefns_49);
    }
#line 85 "mercury_compile_erl_back_end.m"
    {
#line 85 "mercury_compile_erl_back_end.m"
      top_level__mercury_compile_erl_back_end__V_53_53 = mercury__list__f_43_43_2_f_0((MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_rtti_defn_0, top_level__mercury_compile_erl_back_end__RttiDefns0_48, top_level__mercury_compile_erl_back_end__RttiDefns_49);
    }
#line 85 "mercury_compile_erl_back_end.m"
    top_level__mercury_compile_erl_back_end__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_erl_back_end__ELDS0_14, (MR_Integer) 0)));
#line 85 "mercury_compile_erl_back_end.m"
    top_level__mercury_compile_erl_back_end__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_erl_back_end__ELDS0_14, (MR_Integer) 1)));
#line 85 "mercury_compile_erl_back_end.m"
    top_level__mercury_compile_erl_back_end__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_erl_back_end__ELDS0_14, (MR_Integer) 2)));
#line 85 "mercury_compile_erl_back_end.m"
    top_level__mercury_compile_erl_back_end__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_erl_back_end__ELDS0_14, (MR_Integer) 3)));
#line 85 "mercury_compile_erl_back_end.m"
    top_level__mercury_compile_erl_back_end__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_erl_back_end__ELDS0_14, (MR_Integer) 4)));
#line 85 "mercury_compile_erl_back_end.m"
    top_level__mercury_compile_erl_back_end__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_erl_back_end__ELDS0_14, (MR_Integer) 5)));
#line 85 "mercury_compile_erl_back_end.m"
    top_level__mercury_compile_erl_back_end__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_erl_back_end__ELDS0_14, (MR_Integer) 6)));
#line 85 "mercury_compile_erl_back_end.m"
    top_level__mercury_compile_erl_back_end__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_erl_back_end__ELDS0_14, (MR_Integer) 7)));
#line 85 "mercury_compile_erl_back_end.m"
    top_level__mercury_compile_erl_back_end__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_erl_back_end__ELDS0_14, (MR_Integer) 8)));
#line 85 "mercury_compile_erl_back_end.m"
    {
#line 85 "mercury_compile_erl_back_end.m"
      MR_Word base;
#line 85 "mercury_compile_erl_back_end.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 85 "mercury_compile_erl_back_end.m"
      *top_level__mercury_compile_erl_back_end__ELDS_8 = base;
#line 85 "mercury_compile_erl_back_end.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (top_level__mercury_compile_erl_back_end__V_62_62));
#line 85 "mercury_compile_erl_back_end.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (top_level__mercury_compile_erl_back_end__V_63_63));
#line 85 "mercury_compile_erl_back_end.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (top_level__mercury_compile_erl_back_end__V_64_64));
#line 85 "mercury_compile_erl_back_end.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (top_level__mercury_compile_erl_back_end__V_65_65));
#line 85 "mercury_compile_erl_back_end.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (top_level__mercury_compile_erl_back_end__V_66_66));
#line 85 "mercury_compile_erl_back_end.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (top_level__mercury_compile_erl_back_end__V_67_67));
#line 85 "mercury_compile_erl_back_end.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (top_level__mercury_compile_erl_back_end__V_53_53));
#line 85 "mercury_compile_erl_back_end.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (top_level__mercury_compile_erl_back_end__V_69_69));
#line 85 "mercury_compile_erl_back_end.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (top_level__mercury_compile_erl_back_end__V_70_70));
#line 85 "mercury_compile_erl_back_end.m"
    }
#line 63 "mercury_compile_erl_back_end.m"
    {
#line 63 "mercury_compile_erl_back_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_erl_back_end__Verbose_12, (MR_String) "% done.\n");
    }
#line 64 "mercury_compile_erl_back_end.m"
    {
#line 64 "mercury_compile_erl_back_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_erl_back_end__Stats_13);
    }
#line 64 "mercury_compile_erl_back_end.m"
    *top_level__mercury_compile_erl_back_end__STATE_VARIABLE_DumpInfo_16 = top_level__mercury_compile_erl_back_end__STATE_VARIABLE_DumpInfo_0_15;
#line 51 "mercury_compile_erl_back_end.m"
  }
#line 26 "mercury_compile_erl_back_end.m"
}

void mercury__top_level__mercury_compile_erl_back_end__init(void)
{
}

void mercury__top_level__mercury_compile_erl_back_end__init_type_tables(void)
{
}

void mercury__top_level__mercury_compile_erl_back_end__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module top_level.mercury_compile_erl_back_end. */
