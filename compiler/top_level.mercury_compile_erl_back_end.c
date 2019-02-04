/*
** Automatically generated from `mercury_compile_erl_back_end.m'
** by the Mercury compiler,
** version rotd-2018-09-16
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


// :- module top_level.mercury_compile_erl_back_end.
// :- implementation.

/*
INIT mercury__top_level__mercury_compile_erl_back_end__init
ENDINIT
*/

#include "top_level.mercury_compile_erl_back_end.mih"


#include "analysis.mih"
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "erl_backend.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "top_level.mih"
#include "transform_hlds.mih"
#include "backend_libs.base_typeclass_info.mih"
#include "backend_libs.erlang_rtti.mih"
#include "backend_libs.rtti.mih"
#include "backend_libs.type_class_info.mih"
#include "backend_libs.type_ctor_info.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "erl_backend.elds.mih"
#include "erl_backend.elds_to_erlang.mih"
#include "erl_backend.erl_code_gen.mih"
#include "erl_backend.erl_rtti.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
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
#include "hlds.passes_aux.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
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
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static MR_Box MR_CALL 
top_level__mercury_compile_erl_back_end__erlang_backend_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);


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
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



void MR_CALL 
top_level__mercury_compile_erl_back_end__elds_to_erlang_5_p_0(
  MR_Word HLDS_6,
  MR_Word ELDS_7,
  MR_Word * Succeeded_8)
{
  {
    MR_Word Globals_10;
    MR_Word Verbose_11;
    MR_Word Stats_12;

    hlds__hlds_module__module_info_get_globals_2_p_0(HLDS_6, &Globals_10);
    libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 59, &Verbose_11);
    libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 69, &Stats_12);
    libs__file_util__maybe_write_string_4_p_0(Verbose_11, (MR_String) "% Converting ELDS to Erlang...\n");
    erl_backend__elds_to_erlang__output_elds_5_p_0(HLDS_6, ELDS_7, Succeeded_8);
    libs__file_util__maybe_write_string_4_p_0(Verbose_11, (MR_String) "% Finished converting ELDS to Erlang.\n");
    libs__file_util__maybe_report_stats_3_p_0(Stats_12);
  }
}

static MR_Box MR_CALL 
top_level__mercury_compile_erl_back_end__erlang_backend_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    conv0_HeadVar__3_3 = erl_backend__erl_rtti__erlang_rtti_data_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
    return wrapper_arg_2;
  }
}

void MR_CALL 
top_level__mercury_compile_erl_back_end__erlang_backend_6_p_0(
  MR_Word HLDS_7,
  MR_Word * ELDS_8,
  MR_Word STATE_VARIABLE_DumpInfo_0_15,
  MR_Word * STATE_VARIABLE_DumpInfo_16)
{
  {
    MR_Word Globals_11;
    MR_Word Verbose_12;
    MR_Word Stats_13;
    MR_Word ELDS0_14;
    MR_Word Globals_40;
    MR_Word TypeCtorRttiData_41;
    MR_Word OldTypeClassInfoRttiData_42;
    MR_Word NewTypeClassRtti_43;
    MR_Word NewTypeClassInfoRttiData_44;
    MR_Word TypeClassInfoRttiData_45;
    MR_Word RttiDatas_46;
    MR_Word ErlangRttiDatas_47;
    MR_Word RttiDefns0_48;
    MR_Word RttiDefns_49;
    MR_Word Var_51;
    MR_Word Var_53;
    MR_Word Var_62;
    MR_Word Var_63;
    MR_Word Var_64;
    MR_Word Var_65;
    MR_Word Var_66;
    MR_Word Var_67;
    MR_Word Var_69;
    MR_Word Var_70;

    hlds__hlds_module__module_info_get_globals_2_p_0(HLDS_7, &Globals_11);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 59, &Verbose_12);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 69, &Stats_13);
    libs__file_util__maybe_write_string_4_p_0(Verbose_12, (MR_String) "% Converting HLDS to ELDS...\n");
    erl_backend__erl_code_gen__erl_code_gen_4_p_0(HLDS_7, &ELDS0_14);
    libs__file_util__maybe_write_string_4_p_0(Verbose_12, (MR_String) "% done.\n");
    libs__file_util__maybe_report_stats_3_p_0(Stats_13);
    libs__file_util__maybe_write_string_4_p_0(Verbose_12, (MR_String) "% Generating RTTI data...\n");
    hlds__hlds_module__module_info_get_globals_2_p_0(HLDS_7, &Globals_40);
    backend_libs__type_ctor_info__generate_rtti_2_p_0(HLDS_7, &TypeCtorRttiData_41);
    backend_libs__base_typeclass_info__generate_base_typeclass_info_rtti_2_p_0(HLDS_7, &OldTypeClassInfoRttiData_42);
    libs__globals__lookup_bool_option_3_p_0(Globals_40, (MR_Integer) 297, &NewTypeClassRtti_43);
    backend_libs__type_class_info__generate_type_class_info_rtti_3_p_0(HLDS_7, NewTypeClassRtti_43, &NewTypeClassInfoRttiData_44);
    mercury__list__append_3_p_1((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0), OldTypeClassInfoRttiData_42, NewTypeClassInfoRttiData_44, &TypeClassInfoRttiData_45);
    RttiDatas_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0), TypeCtorRttiData_41, TypeClassInfoRttiData_45);
    {
      Var_51 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_51, 0) = ((MR_Box) (&top_level__mercury_compile_erl_back_end_scalar_common_1[0]));
      MR_hl_field(MR_mktag(0), Var_51, 1) = ((MR_Box) (top_level__mercury_compile_erl_back_end__erlang_backend_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_51, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_51, 3) = ((MR_Box) (HLDS_7));
    }
    ErlangRttiDatas_47 = mercury__list__map_2_f_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0), (MR_Word) (&backend_libs__erlang_rtti__backend_libs__erlang_rtti__type_ctor_info_erlang_rtti_data_0), Var_51, RttiDatas_46);
    RttiDefns0_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ELDS0_14, (MR_Integer) 6))));
    erl_backend__erl_rtti__rtti_data_list_to_elds_3_p_0(HLDS_7, ErlangRttiDatas_47, &RttiDefns_49);
    Var_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_rtti_defn_0), RttiDefns0_48, RttiDefns_49);
    Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ELDS0_14, (MR_Integer) 0))));
    Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ELDS0_14, (MR_Integer) 1))));
    Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ELDS0_14, (MR_Integer) 2))));
    Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ELDS0_14, (MR_Integer) 3))));
    Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ELDS0_14, (MR_Integer) 4))));
    Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ELDS0_14, (MR_Integer) 5))));
    Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ELDS0_14, (MR_Integer) 7))));
    Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ELDS0_14, (MR_Integer) 8))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      *ELDS_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_62));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_63));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_64));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_65));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_66));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_67));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_53));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_69));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_70));
    }
    libs__file_util__maybe_write_string_4_p_0(Verbose_12, (MR_String) "% done.\n");
    libs__file_util__maybe_report_stats_3_p_0(Stats_13);
    *STATE_VARIABLE_DumpInfo_16 = STATE_VARIABLE_DumpInfo_0_15;
  }
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

// Ensure everything is compiled with the same grade.
const char *mercury__top_level__mercury_compile_erl_back_end__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module top_level.mercury_compile_erl_back_end.
