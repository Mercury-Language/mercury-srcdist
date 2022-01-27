/*
** Automatically generated from `mlds_to_ilasm.m'
** by the Mercury compiler,
** version 14.01.1, configured for x86_64-apple-darwin13.3.0.
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


/* :- module ml_backend.mlds_to_ilasm. */
/* :- implementation. */

/*
INIT mercury__ml_backend__mlds_to_ilasm__init
ENDINIT
*/

#include "ml_backend.mlds_to_ilasm.mih"


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
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
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
#include "require.mih"
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
#include "tree234.mih"
#include "tree_bitset.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.foreign.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
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
#include "ml_backend.il_peephole.mih"
#include "ml_backend.ilasm.mih"
#include "ml_backend.ilds.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.mlds.mih"
#include "ml_backend.mlds_to_il.mih"
#include "ml_backend.mlds_to_managed.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
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




#line 148 "ml_backend.mlds_to_ilasm.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_ilasm__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0;

#line 109 "mlds_to_ilasm.m"
static void MR_CALL 
ml_backend__mlds_to_ilasm__output_assembler_5_p_0(
#line 109 "mlds_to_ilasm.m"
  MR_Word ml_backend__mlds_to_ilasm__Globals_6,
#line 109 "mlds_to_ilasm.m"
  MR_Word ml_backend__mlds_to_ilasm__MLDS_7,
#line 109 "mlds_to_ilasm.m"
  MR_Word * ml_backend__mlds_to_ilasm__ForeignLangs_8);

#line 87 "mlds_to_ilasm.m"
static void MR_CALL 
ml_backend__mlds_to_ilasm__output_foreign_file_5_p_0_1(
#line 87 "mlds_to_ilasm.m"
  MR_Box ml_backend__mlds_to_ilasm__closure_arg,
#line 87 "mlds_to_ilasm.m"
  MR_Box ml_backend__mlds_to_ilasm__wrapper_arg_1,
#line 87 "mlds_to_ilasm.m"
  MR_Box * ml_backend__mlds_to_ilasm__wrapper_arg_2);

#line 73 "mlds_to_ilasm.m"
static void MR_CALL 
ml_backend__mlds_to_ilasm__output_foreign_file_5_p_0(
#line 73 "mlds_to_ilasm.m"
  MR_Word ml_backend__mlds_to_ilasm__Globals_6,
#line 73 "mlds_to_ilasm.m"
  MR_Word ml_backend__mlds_to_ilasm__MLDS_7,
#line 73 "mlds_to_ilasm.m"
  MR_Word ml_backend__mlds_to_ilasm__ForeignLang_8);

#line 65 "mlds_to_ilasm.m"
static void MR_CALL 
ml_backend__mlds_to_ilasm__output_mlds_via_ilasm_4_p_0_2(
#line 65 "mlds_to_ilasm.m"
  MR_Box ml_backend__mlds_to_ilasm__closure_arg,
#line 65 "mlds_to_ilasm.m"
  MR_Box ml_backend__mlds_to_ilasm__wrapper_arg_1,
#line 65 "mlds_to_ilasm.m"
  MR_Box ml_backend__mlds_to_ilasm__wrapper_arg_2,
#line 65 "mlds_to_ilasm.m"
  MR_Box * ml_backend__mlds_to_ilasm__wrapper_arg_3);

#line 58 "mlds_to_ilasm.m"
static void MR_CALL 
ml_backend__mlds_to_ilasm__output_mlds_via_ilasm_4_p_0_1(
#line 58 "mlds_to_ilasm.m"
  MR_Box ml_backend__mlds_to_ilasm__closure_arg,
#line 58 "mlds_to_ilasm.m"
  MR_Box * ml_backend__mlds_to_ilasm__wrapper_arg_1,
#line 58 "mlds_to_ilasm.m"
  MR_Box ml_backend__mlds_to_ilasm__wrapper_arg_2,
#line 58 "mlds_to_ilasm.m"
  MR_Box * ml_backend__mlds_to_ilasm__wrapper_arg_3);


static /* final */ const MR_Box ml_backend__mlds_to_ilasm_scalar_common_1[1][2];

static /* final */ const MR_Box ml_backend__mlds_to_ilasm_scalar_common_2[2][8];

static /* final */ const MR_Box ml_backend__mlds_to_ilasm_scalar_common_3[1][7];




static /* final */ const MR_Box ml_backend__mlds_to_ilasm_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_ilasm_scalar_common_2[2][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_0)),
    ((MR_Box) (&ml_backend__mlds_to_ilasm__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_ilasm_scalar_common_3[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_0)),
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
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "array.mh"
#include "array.mh"



#line 278 "ml_backend.mlds_to_ilasm.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_ilasm__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_foreign_language_0
  }
};

#line 109 "mlds_to_ilasm.m"
static void MR_CALL 
ml_backend__mlds_to_ilasm__output_assembler_5_p_0(
#line 109 "mlds_to_ilasm.m"
  MR_Word ml_backend__mlds_to_ilasm__Globals_6,
#line 109 "mlds_to_ilasm.m"
  MR_Word ml_backend__mlds_to_ilasm__MLDS_7,
#line 109 "mlds_to_ilasm.m"
  MR_Word * ml_backend__mlds_to_ilasm__ForeignLangs_8)
#line 109 "mlds_to_ilasm.m"
{
#line 112 "mlds_to_ilasm.m"
  {
#line 112 "mlds_to_ilasm.m"
    MR_bool ml_backend__mlds_to_ilasm__succeeded;
#line 112 "mlds_to_ilasm.m"
    MR_Word ml_backend__mlds_to_ilasm__ModuleName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_ilasm__MLDS_7, (MR_Integer) 0)));
#line 112 "mlds_to_ilasm.m"
    MR_Word ml_backend__mlds_to_ilasm__ILAsm0_18;
#line 112 "mlds_to_ilasm.m"
    MR_Word ml_backend__mlds_to_ilasm__Peephole_19;
#line 112 "mlds_to_ilasm.m"
    MR_Word ml_backend__mlds_to_ilasm__Verifiable_20;
#line 112 "mlds_to_ilasm.m"
    MR_Word ml_backend__mlds_to_ilasm__ILAsm_22;
#line 113 "mlds_to_ilasm.m"
    MR_Word ml_backend__mlds_to_ilasm___ForeignCode_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_ilasm__MLDS_7, (MR_Integer) 1)));
#line 113 "mlds_to_ilasm.m"
    MR_Word ml_backend__mlds_to_ilasm___Imports_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_ilasm__MLDS_7, (MR_Integer) 2)));
#line 113 "mlds_to_ilasm.m"
    MR_Word ml_backend__mlds_to_ilasm___GlobalData_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_ilasm__MLDS_7, (MR_Integer) 3)));
#line 113 "mlds_to_ilasm.m"
    MR_Word ml_backend__mlds_to_ilasm___Defns_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_ilasm__MLDS_7, (MR_Integer) 4)));
#line 113 "mlds_to_ilasm.m"
    MR_Word ml_backend__mlds_to_ilasm___InitPreds_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_ilasm__MLDS_7, (MR_Integer) 5)));
#line 113 "mlds_to_ilasm.m"
    MR_Word ml_backend__mlds_to_ilasm___FinalPreds_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_ilasm__MLDS_7, (MR_Integer) 6)));
#line 113 "mlds_to_ilasm.m"
    MR_Word ml_backend__mlds_to_ilasm___ExportedEnums_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_ilasm__MLDS_7, (MR_Integer) 7)));

#line 115 "mlds_to_ilasm.m"
    {
#line 115 "mlds_to_ilasm.m"
      ml_backend__mlds_to_managed__output_src_start_3_p_0(ml_backend__mlds_to_ilasm__ModuleName_10);
    }
#line 116 "mlds_to_ilasm.m"
    {
#line 116 "mlds_to_ilasm.m"
      mercury__io__nl_2_p_0();
    }
#line 118 "mlds_to_ilasm.m"
    {
#line 118 "mlds_to_ilasm.m"
      ml_backend__mlds_to_il__generate_il_4_p_0(ml_backend__mlds_to_ilasm__Globals_6, ml_backend__mlds_to_ilasm__MLDS_7, &ml_backend__mlds_to_ilasm__ILAsm0_18, ml_backend__mlds_to_ilasm__ForeignLangs_8);
    }
#line 124 "mlds_to_ilasm.m"
    {
#line 124 "mlds_to_ilasm.m"
      libs__globals__lookup_bool_option_3_p_0(ml_backend__mlds_to_ilasm__Globals_6, (MR_Integer) 461, &ml_backend__mlds_to_ilasm__Peephole_19);
    }
#line 125 "mlds_to_ilasm.m"
    {
#line 125 "mlds_to_ilasm.m"
      libs__globals__lookup_bool_option_3_p_0(ml_backend__mlds_to_ilasm__Globals_6, (MR_Integer) 257, &ml_backend__mlds_to_ilasm__Verifiable_20);
    }
#line 126 "mlds_to_ilasm.m"
    ml_backend__mlds_to_ilasm__succeeded = (ml_backend__mlds_to_ilasm__Peephole_19 == (MR_Integer) 1);
#line 129 "mlds_to_ilasm.m"
    if (ml_backend__mlds_to_ilasm__succeeded)
#line 127 "mlds_to_ilasm.m"
      {
#line 128 "mlds_to_ilasm.m"
        {
#line 128 "mlds_to_ilasm.m"
          ml_backend__il_peephole__il_peephole_optimize_3_p_0((MR_Integer) 0, ml_backend__mlds_to_ilasm__ILAsm0_18, &ml_backend__mlds_to_ilasm__ILAsm_22);
        }
#line 127 "mlds_to_ilasm.m"
      }
#line 129 "mlds_to_ilasm.m"
    else
#line 132 "mlds_to_ilasm.m"
      {
#line 129 "mlds_to_ilasm.m"
        ml_backend__mlds_to_ilasm__succeeded = (ml_backend__mlds_to_ilasm__Verifiable_20 == (MR_Integer) 1);
#line 132 "mlds_to_ilasm.m"
        if (ml_backend__mlds_to_ilasm__succeeded)
#line 130 "mlds_to_ilasm.m"
          {
#line 131 "mlds_to_ilasm.m"
            {
#line 131 "mlds_to_ilasm.m"
              ml_backend__il_peephole__il_peephole_optimize_3_p_0((MR_Integer) 1, ml_backend__mlds_to_ilasm__ILAsm0_18, &ml_backend__mlds_to_ilasm__ILAsm_22);
            }
#line 130 "mlds_to_ilasm.m"
          }
#line 132 "mlds_to_ilasm.m"
        else
#line 133 "mlds_to_ilasm.m"
          ml_backend__mlds_to_ilasm__ILAsm_22 = ml_backend__mlds_to_ilasm__ILAsm0_18;
#line 132 "mlds_to_ilasm.m"
      }
#line 137 "mlds_to_ilasm.m"
    {
#line 137 "mlds_to_ilasm.m"
      ml_backend__ilasm__ilasm_output_4_p_0(ml_backend__mlds_to_ilasm__Globals_6, ml_backend__mlds_to_ilasm__ILAsm_22);
    }
#line 138 "mlds_to_ilasm.m"
    {
#line 138 "mlds_to_ilasm.m"
      ml_backend__mlds_to_managed__output_src_end_3_p_0(ml_backend__mlds_to_ilasm__ModuleName_10);
#line 138 "mlds_to_ilasm.m"
      return;
    }
#line 112 "mlds_to_ilasm.m"
  }
#line 109 "mlds_to_ilasm.m"
}

#line 87 "mlds_to_ilasm.m"
static void MR_CALL 
ml_backend__mlds_to_ilasm__output_foreign_file_5_p_0_1(
#line 87 "mlds_to_ilasm.m"
  MR_Box ml_backend__mlds_to_ilasm__closure_arg,
#line 87 "mlds_to_ilasm.m"
  MR_Box ml_backend__mlds_to_ilasm__wrapper_arg_1,
#line 87 "mlds_to_ilasm.m"
  MR_Box * ml_backend__mlds_to_ilasm__wrapper_arg_2)
#line 87 "mlds_to_ilasm.m"
{
#line 87 "mlds_to_ilasm.m"
  {
#line 87 "mlds_to_ilasm.m"
    MR_Box ml_backend__mlds_to_ilasm__closure = ml_backend__mlds_to_ilasm__closure_arg;

#line 87 "mlds_to_ilasm.m"
    {
#line 87 "mlds_to_ilasm.m"
      ml_backend__mlds_to_managed__output_csharp_code_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_ilasm__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_ilasm__closure, (MR_Integer) 4))));
#line 87 "mlds_to_ilasm.m"
      return;
    }
#line 87 "mlds_to_ilasm.m"
  }
#line 87 "mlds_to_ilasm.m"
}

#line 73 "mlds_to_ilasm.m"
static void MR_CALL 
ml_backend__mlds_to_ilasm__output_foreign_file_5_p_0(
#line 73 "mlds_to_ilasm.m"
  MR_Word ml_backend__mlds_to_ilasm__Globals_6,
#line 73 "mlds_to_ilasm.m"
  MR_Word ml_backend__mlds_to_ilasm__MLDS_7,
#line 73 "mlds_to_ilasm.m"
  MR_Word ml_backend__mlds_to_ilasm__ForeignLang_8)
#line 73 "mlds_to_ilasm.m"
{
#line 76 "mlds_to_ilasm.m"
  {
#line 76 "mlds_to_ilasm.m"
    MR_bool ml_backend__mlds_to_ilasm__succeeded;
#line 76 "mlds_to_ilasm.m"
    MR_Word ml_backend__mlds_to_ilasm__ModuleName_10;
#line 102 "mlds_to_ilasm.m"
    MR_Word ml_backend__mlds_to_ilasm__ForeignModuleName_11;
#line 102 "mlds_to_ilasm.m"
    MR_String ml_backend__mlds_to_ilasm__Extension_12;

#line 77 "mlds_to_ilasm.m"
    {
#line 77 "mlds_to_ilasm.m"
      ml_backend__mlds_to_ilasm__ModuleName_10 = ml_backend__mlds__mlds_get_module_name_1_f_0(ml_backend__mlds_to_ilasm__MLDS_7);
    }
#line 79 "mlds_to_ilasm.m"
    {
#line 79 "mlds_to_ilasm.m"
      ml_backend__mlds_to_ilasm__succeeded = parse_tree__prog_foreign__foreign_language_module_name_2_f_0(ml_backend__mlds_to_ilasm__ModuleName_10, ml_backend__mlds_to_ilasm__ForeignLang_8, &ml_backend__mlds_to_ilasm__ForeignModuleName_11);
    }
#line 80 "mlds_to_ilasm.m"
    if (ml_backend__mlds_to_ilasm__succeeded)
#line 81 "mlds_to_ilasm.m"
      {
#line 81 "mlds_to_ilasm.m"
        ml_backend__mlds_to_ilasm__succeeded = parse_tree__prog_foreign__foreign_language_file_extension_1_f_0(ml_backend__mlds_to_ilasm__ForeignLang_8, &ml_backend__mlds_to_ilasm__Extension_12);
      }
#line 102 "mlds_to_ilasm.m"
    if (ml_backend__mlds_to_ilasm__succeeded)
#line 89 "mlds_to_ilasm.m"
      if ((ml_backend__mlds_to_ilasm__ForeignLang_8 == (MR_Integer) 0))
#line 90 "mlds_to_ilasm.m"
        {
#line 91 "mlds_to_ilasm.m"
          {
#line 91 "mlds_to_ilasm.m"
            mercury__require__sorry_3_p_0((MR_String) "ml_backend.mlds_to_ilasm", (MR_String) "predicate \140ml_backend.mlds_to_ilasm.output_foreign_file\'/5", (MR_String) "language C foreign code not supported");
#line 91 "mlds_to_ilasm.m"
            return;
          }
#line 90 "mlds_to_ilasm.m"
        }
#line 89 "mlds_to_ilasm.m"
      else
#line 89 "mlds_to_ilasm.m"
        if ((ml_backend__mlds_to_ilasm__ForeignLang_8 == (MR_Integer) 1))
#line 84 "mlds_to_ilasm.m"
          {
#line 84 "mlds_to_ilasm.m"
            MR_String ml_backend__mlds_to_ilasm__File_13;
#line 84 "mlds_to_ilasm.m"
            MR_Word ml_backend__mlds_to_ilasm__V_30_30;

#line 85 "mlds_to_ilasm.m"
            {
#line 85 "mlds_to_ilasm.m"
              parse_tree__file_names__module_name_to_file_name_7_p_0(ml_backend__mlds_to_ilasm__Globals_6, ml_backend__mlds_to_ilasm__ForeignModuleName_11, ml_backend__mlds_to_ilasm__Extension_12, (MR_Integer) 0, &ml_backend__mlds_to_ilasm__File_13);
            }
#line 87 "mlds_to_ilasm.m"
            {
#line 87 "mlds_to_ilasm.m"
              ml_backend__mlds_to_ilasm__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 87 "mlds_to_ilasm.m"
              MR_hl_field(MR_mktag(0), ml_backend__mlds_to_ilasm__V_30_30, 0) = ((MR_Box) (&ml_backend__mlds_to_ilasm_scalar_common_3[0]));
#line 87 "mlds_to_ilasm.m"
              MR_hl_field(MR_mktag(0), ml_backend__mlds_to_ilasm__V_30_30, 1) = ((MR_Box) (ml_backend__mlds_to_ilasm__output_foreign_file_5_p_0_1));
#line 87 "mlds_to_ilasm.m"
              MR_hl_field(MR_mktag(0), ml_backend__mlds_to_ilasm__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 87 "mlds_to_ilasm.m"
              MR_hl_field(MR_mktag(0), ml_backend__mlds_to_ilasm__V_30_30, 3) = ((MR_Box) (ml_backend__mlds_to_ilasm__Globals_6));
#line 87 "mlds_to_ilasm.m"
              MR_hl_field(MR_mktag(0), ml_backend__mlds_to_ilasm__V_30_30, 4) = ((MR_Box) (ml_backend__mlds_to_ilasm__MLDS_7));
#line 87 "mlds_to_ilasm.m"
            }
#line 87 "mlds_to_ilasm.m"
            {
#line 87 "mlds_to_ilasm.m"
              libs__file_util__output_to_file_5_p_0(ml_backend__mlds_to_ilasm__Globals_6, ml_backend__mlds_to_ilasm__File_13, ml_backend__mlds_to_ilasm__V_30_30);
#line 87 "mlds_to_ilasm.m"
              return;
            }
#line 84 "mlds_to_ilasm.m"
          }
#line 89 "mlds_to_ilasm.m"
        else
#line 89 "mlds_to_ilasm.m"
          if ((ml_backend__mlds_to_ilasm__ForeignLang_8 == (MR_Integer) 4))
#line 99 "mlds_to_ilasm.m"
            {
#line 100 "mlds_to_ilasm.m"
              {
#line 100 "mlds_to_ilasm.m"
                mercury__require__sorry_3_p_0((MR_String) "ml_backend.mlds_to_ilasm", (MR_String) "predicate \140ml_backend.mlds_to_ilasm.output_foreign_file\'/5", (MR_String) "language Erlang foreign code not supported");
#line 100 "mlds_to_ilasm.m"
                return;
              }
#line 99 "mlds_to_ilasm.m"
            }
#line 89 "mlds_to_ilasm.m"
          else
#line 89 "mlds_to_ilasm.m"
            if ((ml_backend__mlds_to_ilasm__ForeignLang_8 == (MR_Integer) 3))
#line 93 "mlds_to_ilasm.m"
              {
#line 94 "mlds_to_ilasm.m"
                {
#line 94 "mlds_to_ilasm.m"
                  mercury__require__sorry_3_p_0((MR_String) "ml_backend.mlds_to_ilasm", (MR_String) "predicate \140ml_backend.mlds_to_ilasm.output_foreign_file\'/5", (MR_String) "language IL foreign code not supported");
#line 94 "mlds_to_ilasm.m"
                  return;
                }
#line 93 "mlds_to_ilasm.m"
              }
#line 89 "mlds_to_ilasm.m"
            else
#line 96 "mlds_to_ilasm.m"
              {
#line 97 "mlds_to_ilasm.m"
                {
#line 97 "mlds_to_ilasm.m"
                  mercury__require__sorry_3_p_0((MR_String) "ml_backend.mlds_to_ilasm", (MR_String) "predicate \140ml_backend.mlds_to_ilasm.output_foreign_file\'/5", (MR_String) "language Java foreign code not supported");
#line 97 "mlds_to_ilasm.m"
                  return;
                }
#line 96 "mlds_to_ilasm.m"
              }
#line 102 "mlds_to_ilasm.m"
    else
#line 103 "mlds_to_ilasm.m"
      {
#line 103 "mlds_to_ilasm.m"
        {
#line 103 "mlds_to_ilasm.m"
          mercury__require__unexpected_3_p_0((MR_String) "ml_backend.mlds_to_ilasm", (MR_String) "predicate \140ml_backend.mlds_to_ilasm.output_foreign_file\'/5", (MR_String) "output_foreign_file: unexpected language");
#line 103 "mlds_to_ilasm.m"
          return;
        }
#line 103 "mlds_to_ilasm.m"
      }
#line 76 "mlds_to_ilasm.m"
  }
#line 73 "mlds_to_ilasm.m"
}

#line 65 "mlds_to_ilasm.m"
static void MR_CALL 
ml_backend__mlds_to_ilasm__output_mlds_via_ilasm_4_p_0_2(
#line 65 "mlds_to_ilasm.m"
  MR_Box ml_backend__mlds_to_ilasm__closure_arg,
#line 65 "mlds_to_ilasm.m"
  MR_Box ml_backend__mlds_to_ilasm__wrapper_arg_1,
#line 65 "mlds_to_ilasm.m"
  MR_Box ml_backend__mlds_to_ilasm__wrapper_arg_2,
#line 65 "mlds_to_ilasm.m"
  MR_Box * ml_backend__mlds_to_ilasm__wrapper_arg_3)
#line 65 "mlds_to_ilasm.m"
{
#line 65 "mlds_to_ilasm.m"
  {
#line 65 "mlds_to_ilasm.m"
    MR_Box ml_backend__mlds_to_ilasm__closure = ml_backend__mlds_to_ilasm__closure_arg;

#line 65 "mlds_to_ilasm.m"
    {
#line 65 "mlds_to_ilasm.m"
      ml_backend__mlds_to_ilasm__output_foreign_file_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_ilasm__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_ilasm__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__mlds_to_ilasm__wrapper_arg_1));
#line 65 "mlds_to_ilasm.m"
      return;
    }
#line 65 "mlds_to_ilasm.m"
  }
#line 65 "mlds_to_ilasm.m"
}

#line 58 "mlds_to_ilasm.m"
static void MR_CALL 
ml_backend__mlds_to_ilasm__output_mlds_via_ilasm_4_p_0_1(
#line 58 "mlds_to_ilasm.m"
  MR_Box ml_backend__mlds_to_ilasm__closure_arg,
#line 58 "mlds_to_ilasm.m"
  MR_Box * ml_backend__mlds_to_ilasm__wrapper_arg_1,
#line 58 "mlds_to_ilasm.m"
  MR_Box ml_backend__mlds_to_ilasm__wrapper_arg_2,
#line 58 "mlds_to_ilasm.m"
  MR_Box * ml_backend__mlds_to_ilasm__wrapper_arg_3)
#line 58 "mlds_to_ilasm.m"
{
#line 58 "mlds_to_ilasm.m"
  {
#line 58 "mlds_to_ilasm.m"
    MR_Box ml_backend__mlds_to_ilasm__closure = ml_backend__mlds_to_ilasm__closure_arg;
#line 58 "mlds_to_ilasm.m"
    MR_Word ml_backend__mlds_to_ilasm__conv0_ForeignLangs_8;

#line 58 "mlds_to_ilasm.m"
    {
#line 58 "mlds_to_ilasm.m"
      ml_backend__mlds_to_ilasm__output_assembler_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_ilasm__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_ilasm__closure, (MR_Integer) 4))), &ml_backend__mlds_to_ilasm__conv0_ForeignLangs_8);
    }
#line 58 "mlds_to_ilasm.m"
    *ml_backend__mlds_to_ilasm__wrapper_arg_1 = ((MR_Box) (ml_backend__mlds_to_ilasm__conv0_ForeignLangs_8));
#line 58 "mlds_to_ilasm.m"
  }
#line 58 "mlds_to_ilasm.m"
}

#line 30 "mlds_to_ilasm.m"
void MR_CALL 
ml_backend__mlds_to_ilasm__output_mlds_via_ilasm_4_p_0(
#line 30 "mlds_to_ilasm.m"
  MR_Word ml_backend__mlds_to_ilasm__Globals_5,
#line 30 "mlds_to_ilasm.m"
  MR_Word ml_backend__mlds_to_ilasm__MLDS_6)
#line 30 "mlds_to_ilasm.m"
{
#line 54 "mlds_to_ilasm.m"
  {
#line 54 "mlds_to_ilasm.m"
    MR_bool ml_backend__mlds_to_ilasm__succeeded;
#line 54 "mlds_to_ilasm.m"
    MR_Word ml_backend__mlds_to_ilasm__ModuleName_8;
#line 54 "mlds_to_ilasm.m"
    MR_String ml_backend__mlds_to_ilasm__ILAsmFile_9;
#line 54 "mlds_to_ilasm.m"
    MR_Word ml_backend__mlds_to_ilasm__Result_10;
#line 54 "mlds_to_ilasm.m"
    MR_Word ml_backend__mlds_to_ilasm__V_17_17;

#line 55 "mlds_to_ilasm.m"
    {
#line 55 "mlds_to_ilasm.m"
      ml_backend__mlds_to_ilasm__ModuleName_8 = ml_backend__mlds__mlds_get_module_name_1_f_0(ml_backend__mlds_to_ilasm__MLDS_6);
    }
#line 56 "mlds_to_ilasm.m"
    {
#line 56 "mlds_to_ilasm.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(ml_backend__mlds_to_ilasm__Globals_5, ml_backend__mlds_to_ilasm__ModuleName_8, (MR_String) ".il", (MR_Integer) 0, &ml_backend__mlds_to_ilasm__ILAsmFile_9);
    }
#line 58 "mlds_to_ilasm.m"
    {
#line 58 "mlds_to_ilasm.m"
      ml_backend__mlds_to_ilasm__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 58 "mlds_to_ilasm.m"
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_ilasm__V_17_17, 0) = ((MR_Box) (&ml_backend__mlds_to_ilasm_scalar_common_2[0]));
#line 58 "mlds_to_ilasm.m"
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_ilasm__V_17_17, 1) = ((MR_Box) (ml_backend__mlds_to_ilasm__output_mlds_via_ilasm_4_p_0_1));
#line 58 "mlds_to_ilasm.m"
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_ilasm__V_17_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 58 "mlds_to_ilasm.m"
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_ilasm__V_17_17, 3) = ((MR_Box) (ml_backend__mlds_to_ilasm__Globals_5));
#line 58 "mlds_to_ilasm.m"
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_ilasm__V_17_17, 4) = ((MR_Box) (ml_backend__mlds_to_ilasm__MLDS_6));
#line 58 "mlds_to_ilasm.m"
    }
#line 58 "mlds_to_ilasm.m"
    {
#line 58 "mlds_to_ilasm.m"
      libs__file_util__output_to_file_return_result_6_p_0((MR_Word) &ml_backend__mlds_to_ilasm_scalar_common_1[0], ml_backend__mlds_to_ilasm__Globals_5, ml_backend__mlds_to_ilasm__ILAsmFile_9, ml_backend__mlds_to_ilasm__V_17_17, &ml_backend__mlds_to_ilasm__Result_10);
    }
#line 67 "mlds_to_ilasm.m"
    if ((ml_backend__mlds_to_ilasm__Result_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 70 "mlds_to_ilasm.m"
      {
#line 70 "mlds_to_ilasm.m"
      }
#line 67 "mlds_to_ilasm.m"
    else
#line 62 "mlds_to_ilasm.m"
      {
#line 62 "mlds_to_ilasm.m"
        MR_Word ml_backend__mlds_to_ilasm__TypeCtorInfo_29_29;
#line 62 "mlds_to_ilasm.m"
        MR_Word ml_backend__mlds_to_ilasm__ForeignLangs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_ilasm__Result_10, (MR_Integer) 0)));
#line 62 "mlds_to_ilasm.m"
        MR_Word ml_backend__mlds_to_ilasm__V_19_19;
#line 62 "mlds_to_ilasm.m"
        MR_Word ml_backend__mlds_to_ilasm__V_20_20;
#line 65 "mlds_to_ilasm.m"
        MR_Box ml_backend__mlds_to_ilasm__conv1_STATE_VARIABLE_IO_13;

#line 65 "mlds_to_ilasm.m"
        {
#line 65 "mlds_to_ilasm.m"
          ml_backend__mlds_to_ilasm__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 65 "mlds_to_ilasm.m"
          MR_hl_field(MR_mktag(0), ml_backend__mlds_to_ilasm__V_19_19, 0) = ((MR_Box) (&ml_backend__mlds_to_ilasm_scalar_common_2[1]));
#line 65 "mlds_to_ilasm.m"
          MR_hl_field(MR_mktag(0), ml_backend__mlds_to_ilasm__V_19_19, 1) = ((MR_Box) (ml_backend__mlds_to_ilasm__output_mlds_via_ilasm_4_p_0_2));
#line 65 "mlds_to_ilasm.m"
          MR_hl_field(MR_mktag(0), ml_backend__mlds_to_ilasm__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 65 "mlds_to_ilasm.m"
          MR_hl_field(MR_mktag(0), ml_backend__mlds_to_ilasm__V_19_19, 3) = ((MR_Box) (ml_backend__mlds_to_ilasm__Globals_5));
#line 65 "mlds_to_ilasm.m"
          MR_hl_field(MR_mktag(0), ml_backend__mlds_to_ilasm__V_19_19, 4) = ((MR_Box) (ml_backend__mlds_to_ilasm__MLDS_6));
#line 65 "mlds_to_ilasm.m"
        }
#line 740 "ml_backend.mlds_to_ilasm.c"
        ml_backend__mlds_to_ilasm__TypeCtorInfo_29_29 = (MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0;
#line 65 "mlds_to_ilasm.m"
        {
#line 65 "mlds_to_ilasm.m"
          ml_backend__mlds_to_ilasm__V_20_20 = mercury__set__to_sorted_list_1_f_0(ml_backend__mlds_to_ilasm__TypeCtorInfo_29_29, ml_backend__mlds_to_ilasm__ForeignLangs_11);
        }
#line 65 "mlds_to_ilasm.m"
        {
#line 65 "mlds_to_ilasm.m"
          mercury__list__foldl_4_p_2(ml_backend__mlds_to_ilasm__TypeCtorInfo_29_29, (MR_Word) &mercury__io__io__type_ctor_info_state_0, ml_backend__mlds_to_ilasm__V_19_19, ml_backend__mlds_to_ilasm__V_20_20, ((MR_Box) ((MR_Integer) 0)), &ml_backend__mlds_to_ilasm__conv1_STATE_VARIABLE_IO_13);
        }
#line 62 "mlds_to_ilasm.m"
      }
#line 54 "mlds_to_ilasm.m"
  }
#line 30 "mlds_to_ilasm.m"
}

void mercury__ml_backend__mlds_to_ilasm__init(void)
{
}

void mercury__ml_backend__mlds_to_ilasm__init_type_tables(void)
{
}

void mercury__ml_backend__mlds_to_ilasm__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ml_backend.mlds_to_ilasm. */
