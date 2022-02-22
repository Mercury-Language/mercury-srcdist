/*
** Automatically generated from `transform_llds.m'
** by the Mercury compiler,
** version rotd-2022-02-22
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


// :- module ll_backend.transform_llds.
// :- implementation.

/*
INIT mercury__ll_backend__transform_llds__init
ENDINIT
*/

#include "ll_backend.transform_llds.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
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
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
#include "int.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "ll_backend.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "robdd.mih"
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
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.type_util.mih"
#include "hlds.code_model.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.trace_params.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




static void MR_CALL 
ll_backend__transform_llds__transform_c_module_list_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Integer HeadVar__3_3);

static void MR_CALL 
ll_backend__transform_llds__transform_c_procedure_list_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Integer HeadVar__3_3);

static void MR_CALL 
ll_backend__transform_llds__transform_instructions_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_C_0_3,
  MR_Word * STATE_VARIABLE_C_4,
  MR_Word ProcLabel_5,
  MR_Integer MaxSize_6);

static void MR_CALL 
ll_backend__transform_llds__split_computed_goto_9_p_0(
  MR_Word Rval_10,
  MR_Word Targets_11,
  MR_String Comment_12,
  MR_Word * Instrs_13,
  MR_Word STATE_VARIABLE_C_0_29,
  MR_Word * STATE_VARIABLE_C_30,
  MR_Integer MaxSize_15,
  MR_Integer NumTargets_16,
  MR_Word ProcLabel_17);

static MR_Word MR_CALL 
ll_backend__transform_llds__gen_end_label_module_2_f_0(
  MR_Word ModuleName_4,
  MR_String LastModule_5);


static /* final */ const MR_Box ll_backend__transform_llds_scalar_common_1[2][2];

static /* final */ const MR_Box ll_backend__transform_llds_scalar_common_2[1][1];




static /* final */ const MR_Box ll_backend__transform_llds_scalar_common_1[2][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0))
  },
  /* row   1 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 15U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
};

static /* final */ const MR_Box ll_backend__transform_llds_scalar_common_2[1][1] = {
  /* row   0 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



void MR_CALL 
ll_backend__transform_llds__transform_llds_3_p_0(
  MR_Word Globals_4,
  MR_Word STATE_VARIABLE_CFile_0_17,
  MR_Word * STATE_VARIABLE_CFile_18)
{
  MR_bool succeeded;
  MR_Word ModuleName_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CFile_0_17, (MR_Integer) 0))));
  MR_Word Modules0_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CFile_0_17, (MR_Integer) 35))));
  MR_Integer MaxSize_8;
  MR_Word Modules1_9;
  MR_Word GC_10;
  MR_Word Modules_16;
  MR_Word Var_100;
  MR_Word Var_101;
  MR_Word Var_102;
  MR_Word Var_103;
  MR_Word Var_104;
  MR_Word Var_105;
  MR_Word Var_106;
  MR_Word Var_107;
  MR_Word Var_108;
  MR_Word Var_109;
  MR_Word Var_110;
  MR_Word Var_111;
  MR_Word Var_112;
  MR_Word Var_113;
  MR_Word Var_114;
  MR_Word Var_115;
  MR_Word Var_116;
  MR_Word Var_117;
  MR_Word Var_118;
  MR_Word Var_119;
  MR_Word Var_120;
  MR_Word Var_121;
  MR_Word Var_122;
  MR_Word Var_123;
  MR_Word Var_124;
  MR_Word Var_125;
  MR_Word Var_126;
  MR_Word Var_127;
  MR_Word Var_128;
  MR_Word Var_129;
  MR_Word Var_130;
  MR_Word Var_131;
  MR_Word Var_132;
  MR_Word Var_133;
  MR_Word Var_134;
  MR_Word Var_136;
  MR_Word Var_137;
  MR_Word Var_138;

  libs__globals__lookup_int_option_3_p_0(Globals_4, (MR_Integer) 351, &MaxSize_8);
  succeeded = (MaxSize_8 == (MR_Integer) 0);
  if (succeeded)
    Modules1_9 = Modules0_7;
  else
    ll_backend__transform_llds__transform_c_module_list_3_p_0(Modules0_7, &Modules1_9, MaxSize_8);
  libs__globals__get_gc_method_2_p_0(Globals_4, &GC_10);
  succeeded = (GC_10 == (MR_Integer) 5);
  if (succeeded)
  {
    succeeded = (Modules1_9 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
    }
  }
  if (succeeded)
  {
    MR_Word LastModule_13;
    MR_String LastModuleName_14;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Box conv0_LastModule_13;

    mercury__list__det_last_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_comp_gen_c_module_0), Modules1_9, &conv0_LastModule_13);
    LastModule_13 = ((MR_Word) (conv0_LastModule_13));
    LastModuleName_14 = ((MR_String) ((MR_hl_field(MR_mktag(0), LastModule_13, (MR_Integer) 0))));
    Var_21 = ll_backend__transform_llds__gen_end_label_module_2_f_0(ModuleName_6, LastModuleName_14);
    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Modules_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_comp_gen_c_module_0), Modules1_9, Var_20);
  }
  else
    Modules_16 = Modules1_9;
  Var_100 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CFile_0_17, (MR_Integer) 0))));
  Var_101 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CFile_0_17, (MR_Integer) 1))));
  Var_102 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CFile_0_17, (MR_Integer) 2))));
  Var_103 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CFile_0_17, (MR_Integer) 3))));
  Var_104 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CFile_0_17, (MR_Integer) 4))));
  Var_105 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CFile_0_17, (MR_Integer) 5))));
  Var_106 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CFile_0_17, (MR_Integer) 6))));
  Var_107 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CFile_0_17, (MR_Integer) 7))));
  Var_108 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CFile_0_17, (MR_Integer) 8))));
  Var_109 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CFile_0_17, (MR_Integer) 9))));
  Var_110 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CFile_0_17, (MR_Integer) 10))));
  Var_111 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CFile_0_17, (MR_Integer) 11))));
  Var_112 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CFile_0_17, (MR_Integer) 12))));
  Var_113 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CFile_0_17, (MR_Integer) 13))));
  Var_114 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CFile_0_17, (MR_Integer) 14))));
  Var_115 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CFile_0_17, (MR_Integer) 15))));
  Var_116 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CFile_0_17, (MR_Integer) 16))));
  Var_117 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CFile_0_17, (MR_Integer) 17))));
  Var_118 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CFile_0_17, (MR_Integer) 18))));
  Var_119 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CFile_0_17, (MR_Integer) 19))));
  Var_120 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CFile_0_17, (MR_Integer) 20))));
  Var_121 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CFile_0_17, (MR_Integer) 21))));
  Var_122 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CFile_0_17, (MR_Integer) 22))));
  Var_123 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CFile_0_17, (MR_Integer) 23))));
  Var_124 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CFile_0_17, (MR_Integer) 24))));
  Var_125 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CFile_0_17, (MR_Integer) 25))));
  Var_126 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CFile_0_17, (MR_Integer) 26))));
  Var_127 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CFile_0_17, (MR_Integer) 27))));
  Var_128 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CFile_0_17, (MR_Integer) 28))));
  Var_129 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CFile_0_17, (MR_Integer) 29))));
  Var_130 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CFile_0_17, (MR_Integer) 30))));
  Var_131 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CFile_0_17, (MR_Integer) 31))));
  Var_132 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CFile_0_17, (MR_Integer) 32))));
  Var_133 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CFile_0_17, (MR_Integer) 33))));
  Var_134 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CFile_0_17, (MR_Integer) 34))));
  Var_136 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CFile_0_17, (MR_Integer) 36))));
  Var_137 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CFile_0_17, (MR_Integer) 37))));
  Var_138 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CFile_0_17, (MR_Integer) 38))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (39 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_CFile_18 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_100));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_101));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_102));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_103));
    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_104));
    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_105));
    MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_106));
    MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_107));
    MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_108));
    MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_109));
    MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_110));
    MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_111));
    MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_112));
    MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_113));
    MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_114));
    MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_115));
    MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_116));
    MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_117));
    MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_118));
    MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_119));
    MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_120));
    MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_121));
    MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (Var_122));
    MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (Var_123));
    MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (Var_124));
    MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (Var_125));
    MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (Var_126));
    MR_hl_field(MR_mktag(0), base, 27) = ((MR_Box) (Var_127));
    MR_hl_field(MR_mktag(0), base, 28) = ((MR_Box) (Var_128));
    MR_hl_field(MR_mktag(0), base, 29) = ((MR_Box) (Var_129));
    MR_hl_field(MR_mktag(0), base, 30) = ((MR_Box) (Var_130));
    MR_hl_field(MR_mktag(0), base, 31) = ((MR_Box) (Var_131));
    MR_hl_field(MR_mktag(0), base, 32) = ((MR_Box) (Var_132));
    MR_hl_field(MR_mktag(0), base, 33) = ((MR_Box) (Var_133));
    MR_hl_field(MR_mktag(0), base, 34) = ((MR_Box) (Var_134));
    MR_hl_field(MR_mktag(0), base, 35) = ((MR_Box) (Modules_16));
    MR_hl_field(MR_mktag(0), base, 36) = ((MR_Box) (Var_136));
    MR_hl_field(MR_mktag(0), base, 37) = ((MR_Box) (Var_137));
    MR_hl_field(MR_mktag(0), base, 38) = ((MR_Box) (Var_138));
  }
}

static void MR_CALL 
ll_backend__transform_llds__transform_c_module_list_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Integer HeadVar__3_3)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Module0_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Module0s_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Module_7;
    MR_Word Modules_8;
    MR_String Name_13 = ((MR_String) ((MR_hl_field(MR_mktag(0), Module0_5, (MR_Integer) 0))));
    MR_Word Procedures0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Module0_5, (MR_Integer) 1))));
    MR_Word Procedures_15;

    ll_backend__transform_llds__transform_c_procedure_list_3_p_0(Procedures0_14, &Procedures_15, HeadVar__3_3);
    {
      Module_7 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Module_7, 0) = ((MR_Box) (Name_13));
      MR_hl_field(MR_mktag(0), Module_7, 1) = ((MR_Box) (Procedures_15));
    }
    ll_backend__transform_llds__transform_c_module_list_3_p_0(Module0s_6, &Modules_8, HeadVar__3_3);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Module_7));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Modules_8));
    }
  }
}

static void MR_CALL 
ll_backend__transform_llds__transform_c_procedure_list_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Integer HeadVar__3_3)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Proc0_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Proc0s_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Proc_7;
    MR_Word Procs_8;
    MR_Word ProcLabel_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Proc0_5, (MR_Integer) 3))));
    MR_Word Instrs0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Proc0_5, (MR_Integer) 5))));
    MR_Word C0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Proc0_5, (MR_Integer) 6))));
    MR_Word Instrs_17;
    MR_Word C_18;
    MR_String Var_45;
    MR_Integer Var_46;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_52;
    MR_Word Var_53;

    ll_backend__transform_llds__transform_instructions_6_p_0(Instrs0_15, &Instrs_17, C0_16, &C_18, ProcLabel_14, HeadVar__3_3);
    Var_45 = ((MR_String) ((MR_hl_field(MR_mktag(0), Proc0_5, (MR_Integer) 0))));
    Var_46 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Proc0_5, (MR_Integer) 1))));
    Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Proc0_5, (MR_Integer) 2))));
    Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Proc0_5, (MR_Integer) 3))));
    Var_49 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Proc0_5, (MR_Integer) 4))) & (MR_Integer) 3);
    Var_52 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Proc0_5, (MR_Integer) 7))) & (MR_Integer) 1);
    Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Proc0_5, (MR_Integer) 8))));
    {
      Proc_7 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Proc_7, 0) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), Proc_7, 1) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(0), Proc_7, 2) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(0), Proc_7, 3) = ((MR_Box) (Var_48));
      MR_hl_field(MR_mktag(0), Proc_7, 4) = (MR_Box) ((MR_Unsigned) (Var_49));
      MR_hl_field(MR_mktag(0), Proc_7, 5) = ((MR_Box) (Instrs_17));
      MR_hl_field(MR_mktag(0), Proc_7, 6) = ((MR_Box) (C_18));
      MR_hl_field(MR_mktag(0), Proc_7, 7) = (MR_Box) ((MR_Unsigned) (Var_52));
      MR_hl_field(MR_mktag(0), Proc_7, 8) = ((MR_Box) (Var_53));
    }
    ll_backend__transform_llds__transform_c_procedure_list_3_p_0(Proc0s_6, &Procs_8, HeadVar__3_3);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Proc_7));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Procs_8));
    }
  }
}

static void MR_CALL 
ll_backend__transform_llds__transform_instructions_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_C_0_3,
  MR_Word * STATE_VARIABLE_C_4,
  MR_Word ProcLabel_5,
  MR_Integer MaxSize_6)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_C_4 = STATE_VARIABLE_C_0_3;
  }
  else
  {
    MR_Word Instr0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Instrs0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word InstrsTail_18;
    MR_Word STATE_VARIABLE_C_26_26;
    MR_Word Rval_19;
    MR_Word Targets_20;
    MR_String Comment_21;
    MR_Integer NumTargets_22;
    MR_Word TypeInfo_29_29;
    MR_Word Var_27;

    ll_backend__transform_llds__transform_instructions_6_p_0(Instrs0_13, &InstrsTail_18, STATE_VARIABLE_C_0_3, &STATE_VARIABLE_C_26_26, ProcLabel_5, MaxSize_6);
    Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instr0_12, (MR_Integer) 0))));
    Comment_21 = ((MR_String) ((MR_hl_field(MR_mktag(0), Instr0_12, (MR_Integer) 1))));
    succeeded = ((((MR_tag((MR_Word) Var_27)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_27, (MR_Integer) 0)))) == (MR_Integer) 7)));
    if (succeeded)
    {
      Rval_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_27, (MR_Integer) 1))));
      Targets_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_27, (MR_Integer) 2))));
      TypeInfo_29_29 = (MR_Word) (&ll_backend__transform_llds_scalar_common_1[0]);
      mercury__list__length_2_p_0(TypeInfo_29_29, Targets_20, &NumTargets_22);
      succeeded = (NumTargets_22 > MaxSize_6);
    }
    if (succeeded)
    {
      MR_Word InstrsHead_23;

      ll_backend__transform_llds__split_computed_goto_9_p_0(Rval_19, Targets_20, Comment_21, &InstrsHead_23, STATE_VARIABLE_C_26_26, STATE_VARIABLE_C_4, MaxSize_6, NumTargets_22, ProcLabel_5);
      mercury__list__append_3_p_1((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), InstrsHead_23, InstrsTail_18, HeadVar__2_2);
    }
    else
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__2_2 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Instr0_12));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (InstrsTail_18));
      }
      *STATE_VARIABLE_C_4 = STATE_VARIABLE_C_26_26;
    }
  }
}

static void MR_CALL 
ll_backend__transform_llds__split_computed_goto_9_p_0(
  MR_Word Rval_10,
  MR_Word Targets_11,
  MR_String Comment_12,
  MR_Word * Instrs_13,
  MR_Word STATE_VARIABLE_C_0_29,
  MR_Word * STATE_VARIABLE_C_30,
  MR_Integer MaxSize_15,
  MR_Integer NumTargets_16,
  MR_Word ProcLabel_17)
{
  MR_bool succeeded = (NumTargets_16 <= MaxSize_15);

  if (succeeded)
  {
    MR_Word Var_31;
    MR_Word Var_32;

    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_32, 0) = ((MR_Box) ((MR_Unsigned) 7U));
      MR_hl_field(MR_mktag(3), Var_32, 1) = ((MR_Box) (Rval_10));
      MR_hl_field(MR_mktag(3), Var_32, 2) = ((MR_Box) (Targets_11));
    }
    {
      Var_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) (Comment_12));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Instrs_13 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    *STATE_VARIABLE_C_30 = STATE_VARIABLE_C_0_29;
  }
  else
  {
    MR_Integer LabelNum_18;
    MR_Integer Mid_19;
    MR_Word StartTargets_20;
    MR_Word EndTargets_21;
    MR_Word Index_22;
    MR_Word Test_23;
    MR_Word ElseAddr_24;
    MR_Word IfInstr_25;
    MR_Word ElseInstr_26;
    MR_Word ThenInstrs_27;
    MR_Word ElseInstrs_28;
    MR_Word STATE_VARIABLE_C_34_34;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_47;
    MR_String Var_50;
    MR_Word STATE_VARIABLE_C_51_51;
    MR_String Var_53;
    MR_Integer Var_55;
    MR_Word Var_57;
    MR_Word Var_58;

    mercury__counter__allocate_3_p_0(&LabelNum_18, STATE_VARIABLE_C_0_29, &STATE_VARIABLE_C_34_34);
    Mid_19 = mercury__int__f_47_47_2_f_0(NumTargets_16, (MR_Integer) 2);
    mercury__list__det_split_list_4_p_0((MR_Word) (&ll_backend__transform_llds_scalar_common_1[0]), Mid_19, Targets_11, &StartTargets_20, &EndTargets_21);
    {
      Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (Mid_19));
    }
    {
      Var_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_38, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), Var_38, 1) = ((MR_Box) (Var_39));
    }
    {
      Index_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Index_22, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(3), Index_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ll_backend__transform_llds_scalar_common_2[0])));
      MR_hl_field(MR_mktag(3), Index_22, 2) = ((MR_Box) (Rval_10));
      MR_hl_field(MR_mktag(3), Index_22, 3) = ((MR_Box) (Var_38));
    }
    {
      Test_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Test_23, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(3), Test_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__transform_llds_scalar_common_1[1])));
      MR_hl_field(MR_mktag(3), Test_23, 2) = ((MR_Box) (Rval_10));
      MR_hl_field(MR_mktag(3), Test_23, 3) = ((MR_Box) (Var_38));
    }
    {
      Var_44 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_44, 0) = ((MR_Box) (LabelNum_18));
      MR_hl_field(MR_mktag(0), Var_44, 1) = ((MR_Box) (ProcLabel_17));
    }
    {
      ElseAddr_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ElseAddr_24, 0) = ((MR_Box) (Var_44));
    }
    {
      Var_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_45, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(MR_mktag(3), Var_45, 1) = ((MR_Box) (Test_23));
      MR_hl_field(MR_mktag(3), Var_45, 2) = ((MR_Box) (ElseAddr_24));
    }
    {
      IfInstr_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), IfInstr_25, 0) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), IfInstr_25, 1) = ((MR_Box) ((MR_String) "binary search"));
    }
    {
      Var_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_47, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_47, 1) = ((MR_Box) (Var_44));
    }
    {
      ElseInstr_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ElseInstr_26, 0) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(0), ElseInstr_26, 1) = ((MR_Box) ((MR_String) ""));
    }
    Var_50 = mercury__string__f_43_43_2_f_0(Comment_12, (MR_String) " then");
    ll_backend__transform_llds__split_computed_goto_9_p_0(Rval_10, StartTargets_20, Var_50, &ThenInstrs_27, STATE_VARIABLE_C_34_34, &STATE_VARIABLE_C_51_51, MaxSize_15, Mid_19, ProcLabel_17);
    Var_53 = mercury__string__f_43_43_2_f_0(Comment_12, (MR_String) " else");
    Var_55 = (MR_Integer) ((MR_Unsigned) NumTargets_16 - (MR_Unsigned) Mid_19);
    ll_backend__transform_llds__split_computed_goto_9_p_0(Index_22, EndTargets_21, Var_53, &ElseInstrs_28, STATE_VARIABLE_C_51_51, STATE_VARIABLE_C_30, MaxSize_15, Var_55, ProcLabel_17);
    {
      Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (IfInstr_25));
      MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (ThenInstrs_27));
    }
    {
      Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (ElseInstr_26));
      MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (ElseInstrs_28));
    }
    *Instrs_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_57, Var_58);
  }
}

static MR_Word MR_CALL 
ll_backend__transform_llds__gen_end_label_module_2_f_0(
  MR_Word ModuleName_4,
  MR_String LastModule_5)
{
  MR_Word EndLabelModule_6;
  MR_Integer ProcId_8;
  MR_Word PredId_9;
  MR_Word ProcLabel_11;
  MR_Word Instrs_12;
  MR_Word DummyProc_13;
  MR_Integer Var_16;
  MR_Word Var_17;
  MR_Word Var_18;
  MR_Word Var_19;
  MR_Word Var_23;
  MR_Word Var_25;
  MR_Word Var_28;
  MR_String Var_29;
  MR_Word Var_31;

  ProcId_8 = hlds__hlds_pred__initial_proc_id_0_f_0();
  PredId_9 = hlds__hlds_pred__initial_pred_id_0_f_0();
  Var_16 = hlds__hlds_pred__proc_id_to_int_1_f_0(ProcId_8);
  {
    ProcLabel_11 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), ProcLabel_11, 0) = ((MR_Box) (ModuleName_4));
    MR_hl_field(MR_mktag(0), ProcLabel_11, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(MR_mktag(0), ProcLabel_11, 2) = ((MR_Box) (ModuleName_4));
    MR_hl_field(MR_mktag(0), ProcLabel_11, 3) = ((MR_Box) ((MR_String) "ACCURATE_GC_END_LABEL"));
    MR_hl_field(MR_mktag(0), ProcLabel_11, 4) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(MR_mktag(0), ProcLabel_11, 5) = ((MR_Box) (Var_16));
  }
  {
    Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_19, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (ProcLabel_11));
  }
  {
    Var_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_18, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(MR_mktag(3), Var_18, 1) = ((MR_Box) (Var_19));
  }
  {
    Var_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (Var_18));
    MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) ((MR_String) "label to indicate end of previous procedure"));
  }
  {
    Instrs_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Instrs_12, 0) = ((MR_Box) (Var_17));
    MR_hl_field(MR_mktag(1), Instrs_12, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (PredId_9));
    MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (ProcId_8));
  }
  Var_25 = mercury__counter__init_1_f_0((MR_Integer) 0);
  Var_28 = mercury__set__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
  {
    DummyProc_13 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), DummyProc_13, 0) = ((MR_Box) ((MR_String) "ACCURATE_GC_END_LABEL"));
    MR_hl_field(MR_mktag(0), DummyProc_13, 1) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(MR_mktag(0), DummyProc_13, 2) = ((MR_Box) (Var_23));
    MR_hl_field(MR_mktag(0), DummyProc_13, 3) = ((MR_Box) (ProcLabel_11));
    MR_hl_field(MR_mktag(0), DummyProc_13, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(MR_mktag(0), DummyProc_13, 5) = ((MR_Box) (Instrs_12));
    MR_hl_field(MR_mktag(0), DummyProc_13, 6) = ((MR_Box) (Var_25));
    MR_hl_field(MR_mktag(0), DummyProc_13, 7) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), DummyProc_13, 8) = ((MR_Box) (Var_28));
  }
  Var_29 = mercury__string__f_43_43_2_f_0(LastModule_5, (MR_String) "_END");
  {
    Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (DummyProc_13));
    MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    EndLabelModule_6 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), EndLabelModule_6, 0) = ((MR_Box) (Var_29));
    MR_hl_field(MR_mktag(0), EndLabelModule_6, 1) = ((MR_Box) (Var_31));
  }
  return EndLabelModule_6;
}

void mercury__ll_backend__transform_llds__init(void)
{
}

void mercury__ll_backend__transform_llds__init_type_tables(void)
{
}

void mercury__ll_backend__transform_llds__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ll_backend__transform_llds__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ll_backend.transform_llds.
