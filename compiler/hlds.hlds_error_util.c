/*
** Automatically generated from `hlds_error_util.m'
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


/* :- module hlds.hlds_error_util. */
/* :- implementation. */

/*
INIT mercury__hlds__hlds_error_util__init
ENDINIT
*/

#include "hlds.hlds_error_util.mih"


#include "analysis.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
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
#include "libs.dependency_graph.mih"
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
#include "int.mih"
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
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_inst.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_error_util__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_error_util__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_term__type_ctor_info_context_0;

static const MR_EnumFunctorDesc hlds__hlds_error_util__hlds__hlds_error_util__enum_functor_desc_should_module_qualify_0_0;

static const MR_EnumFunctorDesc hlds__hlds_error_util__hlds__hlds_error_util__enum_functor_desc_should_module_qualify_0_1;

static const MR_EnumFunctorDescPtr hlds__hlds_error_util__hlds__hlds_error_util__enum_value_ordered_should_module_qualify_0[2];

static const MR_EnumFunctorDescPtr hlds__hlds_error_util__hlds__hlds_error_util__enum_name_ordered_should_module_qualify_0[2];

static const MR_Integer hlds__hlds_error_util__hlds__hlds_error_util__functor_number_map_should_module_qualify_0[2];

static MR_Box MR_CALL 
hlds__hlds_error_util__describe_several_call_sites_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__hlds_error_util__describe_several_proc_names_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__hlds_error_util__describe_several_pred_names_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
hlds__hlds_error_util____Unify____should_module_qualify_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_error_util____Compare____should_module_qualify_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__hlds_error_util_scalar_common_1[12][2];

static /* final */ const MR_Box hlds__hlds_error_util_scalar_common_2[1][3];

static /* final */ const MR_Box hlds__hlds_error_util_scalar_common_3[3][7];




static /* final */ const MR_Box hlds__hlds_error_util_scalar_common_1[12][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "for type"))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "for type constructor"))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "type class method implementation"))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_error_util_scalar_common_1[3]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_error_util_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "type class"))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "method"))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_error_util_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "mode"))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "at"))
  },
};

static /* final */ const MR_Box hlds__hlds_error_util_scalar_common_2[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0))
  },
};

static /* final */ const MR_Box hlds__hlds_error_util_scalar_common_3[3][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_error_util__hlds__hlds_error_util__type_ctor_info_should_module_qualify_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_error_util__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_error_util__hlds__hlds_error_util__type_ctor_info_should_module_qualify_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_error_util__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_error_util__hlds__hlds_error_util__type_ctor_info_should_module_qualify_0)),
    ((MR_Box) (&hlds__hlds_error_util__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_term__type_ctor_info_context_0)),
    ((MR_Box) (&hlds__hlds_error_util__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_error_util__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_error_util__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_term__type_ctor_info_context_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
  }
};

static const MR_EnumFunctorDesc hlds__hlds_error_util__hlds__hlds_error_util__enum_functor_desc_should_module_qualify_0_0 = {
  (MR_String) "should_module_qualify",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc hlds__hlds_error_util__hlds__hlds_error_util__enum_functor_desc_should_module_qualify_0_1 = {
  (MR_String) "should_not_module_qualify",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr hlds__hlds_error_util__hlds__hlds_error_util__enum_value_ordered_should_module_qualify_0[2] = {
  &hlds__hlds_error_util__hlds__hlds_error_util__enum_functor_desc_should_module_qualify_0_0,
  &hlds__hlds_error_util__hlds__hlds_error_util__enum_functor_desc_should_module_qualify_0_1
};

static const MR_EnumFunctorDescPtr hlds__hlds_error_util__hlds__hlds_error_util__enum_name_ordered_should_module_qualify_0[2] = {
  &hlds__hlds_error_util__hlds__hlds_error_util__enum_functor_desc_should_module_qualify_0_0,
  &hlds__hlds_error_util__hlds__hlds_error_util__enum_functor_desc_should_module_qualify_0_1
};

static const MR_Integer hlds__hlds_error_util__hlds__hlds_error_util__functor_number_map_should_module_qualify_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__hlds_error_util__hlds__hlds_error_util__type_ctor_info_should_module_qualify_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__hlds_error_util____Unify____should_module_qualify_0_0_10001)),
  ((MR_Box) (hlds__hlds_error_util____Compare____should_module_qualify_0_0_10001)),
  (MR_String) "hlds.hlds_error_util",
  (MR_String) "should_module_qualify",
  {     hlds__hlds_error_util__hlds__hlds_error_util__enum_name_ordered_should_module_qualify_0 },
  {     hlds__hlds_error_util__hlds__hlds_error_util__enum_value_ordered_should_module_qualify_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__hlds_error_util__hlds__hlds_error_util__functor_number_map_should_module_qualify_0
};

void MR_CALL 
hlds__hlds_error_util____Compare____should_module_qualify_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
hlds__hlds_error_util____Unify____should_module_qualify_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
hlds__hlds_error_util__maybe_write_out_errors_8_p_0(
  MR_Word Verbose_9,
  MR_Word Globals_10,
  MR_Word STATE_VARIABLE_HLDS_0_16,
  MR_Word * STATE_VARIABLE_HLDS_17,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19)
{
  switch (Verbose_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *STATE_VARIABLE_HLDS_17 = STATE_VARIABLE_HLDS_0_16;
        *STATE_VARIABLE_Specs_19 = STATE_VARIABLE_Specs_0_18;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Integer NumErrors_15;
        MR_Integer _NumWarnings_14;

        parse_tree__error_util__write_error_specs_8_p_0(STATE_VARIABLE_Specs_0_18, Globals_10, (MR_Integer) 0, &_NumWarnings_14, (MR_Integer) 0, &NumErrors_15);
        hlds__hlds_module__module_info_incr_num_errors_3_p_0(NumErrors_15, STATE_VARIABLE_HLDS_0_16, STATE_VARIABLE_HLDS_17);
        *STATE_VARIABLE_Specs_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
      break;
  }
}

void MR_CALL 
hlds__hlds_error_util__definitely_write_out_errors_6_p_0(
  MR_Word Globals_7,
  MR_Word STATE_VARIABLE_HLDS_0_13,
  MR_Word * STATE_VARIABLE_HLDS_14,
  MR_Word Specs_9)
{
  {
    MR_Integer NumErrors_12;
    MR_Integer _NumWarnings_11;

    parse_tree__error_util__write_error_specs_8_p_0(Specs_9, Globals_7, (MR_Integer) 0, &_NumWarnings_11, (MR_Integer) 0, &NumErrors_12);
    hlds__hlds_module__module_info_incr_num_errors_3_p_0(NumErrors_12, STATE_VARIABLE_HLDS_0_13, STATE_VARIABLE_HLDS_14);
  }
}

static MR_Box MR_CALL 
hlds__hlds_error_util__describe_several_call_sites_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_Pieces_9;

    conv0_Pieces_9 = hlds__hlds_error_util__describe_one_call_site_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_Pieces_9));
    return wrapper_arg_2;
  }
}

MR_Word MR_CALL 
hlds__hlds_error_util__describe_several_call_sites_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word ShouldModuleQualify_6,
  MR_Word Sites_7)
{
  {
    MR_Word Pieces_8;
    MR_Word PiecesList_9;
    MR_Word Var_10;

    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (&hlds__hlds_error_util_scalar_common_3[2]));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (hlds__hlds_error_util__describe_several_call_sites_3_f_0_1));
      MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (ModuleInfo_5));
      MR_hl_field(MR_mktag(0), Var_10, 4) = ((MR_Box) (ShouldModuleQualify_6));
    }
    PiecesList_9 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_error_util_scalar_common_2[0], (MR_Word) &hlds__hlds_error_util_scalar_common_1[0], Var_10, Sites_7);
    Pieces_8 = parse_tree__error_util__component_lists_to_pieces_2_f_0((MR_String) "and", PiecesList_9);
    return Pieces_8;
  }
}

MR_Word MR_CALL 
hlds__hlds_error_util__describe_one_call_site_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word ShouldModuleQualify_6,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Pieces_9;
    MR_Word PPId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
    MR_Word Context_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
    MR_Word ProcNamePieces_10;
    MR_String FileName_11;
    MR_Integer LineNumber_12;
    MR_String LineNumberStr_13;
    MR_Word Var_14;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_String Var_19;
    MR_String Var_20;

    ProcNamePieces_10 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(ModuleInfo_5, ShouldModuleQualify_6, PPId_7);
    mercury__term__context_file_2_p_0(Context_8, &FileName_11);
    mercury__term__context_line_2_p_0(Context_8, &LineNumber_12);
    mercury__string__int_to_string_2_p_0(LineNumber_12, &LineNumberStr_13);
    Var_20 = mercury__string__f_43_43_2_f_0((MR_String) ":", LineNumberStr_13);
    Var_19 = mercury__string__f_43_43_2_f_0(FileName_11, Var_20);
    {
      Var_18 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_18, 0) = ((MR_Box) (Var_19));
    }
    {
      Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_error_util_scalar_common_1[11])));
      MR_hl_field(MR_mktag(1), Var_14, 1) = ((MR_Box) (Var_17));
    }
    Pieces_9 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, ProcNamePieces_10, Var_14);
    return Pieces_9;
  }
}

static MR_Box MR_CALL 
hlds__hlds_error_util__describe_several_proc_names_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_Pieces_9;

    conv0_Pieces_9 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_Pieces_9));
    return wrapper_arg_2;
  }
}

MR_Word MR_CALL 
hlds__hlds_error_util__describe_several_proc_names_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word ShouldModuleQualify_6,
  MR_Word PPIds_7)
{
  {
    MR_Word Pieces_8;
    MR_Word PiecesList_9;
    MR_Word Var_10;

    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (&hlds__hlds_error_util_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (hlds__hlds_error_util__describe_several_proc_names_3_f_0_1));
      MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (ModuleInfo_5));
      MR_hl_field(MR_mktag(0), Var_10, 4) = ((MR_Box) (ShouldModuleQualify_6));
    }
    PiecesList_9 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &hlds__hlds_error_util_scalar_common_1[0], Var_10, PPIds_7);
    Pieces_8 = parse_tree__error_util__component_lists_to_pieces_2_f_0((MR_String) "and", PiecesList_9);
    return Pieces_8;
  }
}

MR_Word MR_CALL 
hlds__hlds_error_util__describe_one_proc_name_mode_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word ShouldModuleQualify_6,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Pieces_9;
    MR_Word PredId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
    MR_Integer ProcId_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
    MR_Word ProcInfo_11;
    MR_Word ArgModes_12;
    MR_Word InstVarSet_13;
    MR_Word Var_10;

    hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_5, PredId_7, ProcId_8, &Var_10, &ProcInfo_11);
    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_11, &ArgModes_12);
    hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(ProcInfo_11, &InstVarSet_13);
    Pieces_9 = hlds__hlds_error_util__describe_one_pred_name_mode_5_f_0(ModuleInfo_5, ShouldModuleQualify_6, PredId_7, InstVarSet_13, ArgModes_12);
    return Pieces_9;
  }
}

MR_Word MR_CALL 
hlds__hlds_error_util__describe_one_proc_name_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word ShouldModuleQualify_6,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Pieces_9;
    MR_Word PredId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
    MR_Integer ProcId_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
    MR_Word PredPieces_10;
    MR_Integer ProcIdInt_11;
    MR_String ProcIdStr_12;
    MR_Word Var_13;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word PredInfo_24;

    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_5, PredId_7, &PredInfo_24);
    PredPieces_10 = hlds__hlds_error_util__describe_one_pred_info_name_2_f_0(ShouldModuleQualify_6, PredInfo_24);
    hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_8, &ProcIdInt_11);
    mercury__string__int_to_string_2_p_0(ProcIdInt_11, &ProcIdStr_12);
    {
      Var_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), Var_17, 1) = ((MR_Box) (ProcIdStr_12));
    }
    {
      Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_error_util_scalar_common_1[10])));
      MR_hl_field(MR_mktag(1), Var_13, 1) = ((MR_Box) (Var_16));
    }
    Pieces_9 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, PredPieces_10, Var_13);
    return Pieces_9;
  }
}

static MR_Box MR_CALL 
hlds__hlds_error_util__describe_several_pred_names_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_Pieces_8;

    conv0_Pieces_8 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_Pieces_8));
    return wrapper_arg_2;
  }
}

MR_Word MR_CALL 
hlds__hlds_error_util__describe_several_pred_names_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word ShouldModuleQualify_6,
  MR_Word PredIds_7)
{
  {
    MR_Word Pieces_8;
    MR_Word PiecesList_9;
    MR_Word Var_10;

    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (&hlds__hlds_error_util_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (hlds__hlds_error_util__describe_several_pred_names_3_f_0_1));
      MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (ModuleInfo_5));
      MR_hl_field(MR_mktag(0), Var_10, 4) = ((MR_Box) (ShouldModuleQualify_6));
    }
    PiecesList_9 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_error_util_scalar_common_1[0], Var_10, PredIds_7);
    Pieces_8 = parse_tree__error_util__component_lists_to_pieces_2_f_0((MR_String) "and", PiecesList_9);
    return Pieces_8;
  }
}

MR_Word MR_CALL 
hlds__hlds_error_util__describe_one_pred_name_mode_5_f_0(
  MR_Word ModuleInfo_7,
  MR_Word ShouldModuleQualify_8,
  MR_Word PredId_9,
  MR_Word InstVarSet_10,
  MR_Word ArgModes0_11)
{
  {
    MR_bool succeeded;
    MR_Word Pieces_12;
    MR_Word TypeCtorInfo_45_45;
    MR_Word PredInfo_13;
    MR_Word ModuleName_14;
    MR_String PredName_15;
    MR_Integer Arity_16;
    MR_Word PredOrFunc_17;
    MR_Integer NumArgModes_18;
    MR_Word StrippedArgModes_20;
    MR_String ArgModesPart_21;
    MR_String Descr_24;
    MR_Word Var_34;
    MR_Word Var_36;
    MR_String Var_37;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_41;
    MR_Word Var_43;
    MR_Word ArgModes_19;
    MR_Integer Var_25;

    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_7, PredId_9, &PredInfo_13);
    ModuleName_14 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_13);
    PredName_15 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_13);
    Arity_16 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(PredInfo_13);
    PredOrFunc_17 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_13);
    TypeCtorInfo_45_45 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
    mercury__list__length_2_p_0(TypeCtorInfo_45_45, ArgModes0_11, &NumArgModes_18);
    Var_25 = (NumArgModes_18 - Arity_16);
    succeeded = mercury__list__drop_3_p_0(TypeCtorInfo_45_45, Var_25, ArgModes0_11, &ArgModes_19);
    if (succeeded)
      parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_list_2_p_0(ArgModes_19, &StrippedArgModes_20);
    else
    {
      mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_error_util", (MR_String) "function \140hlds.hlds_error_util.describe_one_pred_name_mode\'/5", (MR_String) "bad argument list");
    }
    switch (PredOrFunc_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word FuncArgModes_22;
          MR_Word FuncRetMode_23;
          MR_String Var_29;
          MR_String Var_30;
          MR_String Var_32;
          MR_Box conv0_FuncRetMode_23;

          parse_tree__prog_util__pred_args_to_func_args_3_p_0(TypeCtorInfo_45_45, StrippedArgModes_20, &FuncArgModes_22, &conv0_FuncRetMode_23);
          FuncRetMode_23 = ((MR_Word) conv0_FuncRetMode_23);
          if ((FuncArgModes_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            Var_29 = (MR_String) "";
          else
          {
            MR_String ArgsStr_51;
            MR_String Var_54;

            ArgsStr_51 = parse_tree__parse_tree_out_inst__mercury_mode_list_to_string_3_f_0((MR_Integer) 1, InstVarSet_10, FuncArgModes_22);
            Var_54 = mercury__string__f_43_43_2_f_0(ArgsStr_51, (MR_String) ")");
            Var_29 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_54);
          }
          Var_32 = parse_tree__parse_tree_out_inst__mercury_mode_to_string_3_f_0((MR_Integer) 1, InstVarSet_10, FuncRetMode_23);
          Var_30 = mercury__string__f_43_43_2_f_0((MR_String) " = ", Var_32);
          ArgModesPart_21 = mercury__string__f_43_43_2_f_0(Var_29, Var_30);
        }
        break;
      case (MR_Integer) 0:
        if ((StrippedArgModes_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          ArgModesPart_21 = (MR_String) "";
        else
        {
          MR_String ArgsStr_61;
          MR_String Var_64;

          ArgsStr_61 = parse_tree__parse_tree_out_inst__mercury_mode_list_to_string_3_f_0((MR_Integer) 1, InstVarSet_10, StrippedArgModes_20);
          Var_64 = mercury__string__f_43_43_2_f_0(ArgsStr_61, (MR_String) ")");
          ArgModesPart_21 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_64);
        }
        break;
    }
    switch (ShouldModuleQualify_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String Var_69;

          Var_69 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_14);
          Var_37 = mercury__string__f_43_43_2_f_0(Var_69, (MR_String) ".");
        }
        break;
      case (MR_Integer) 1:
        Var_37 = (MR_String) "";
        break;
    }
    {
      Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (ArgModesPart_21));
      MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) ((MR_String) "\'"));
      MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (Var_41));
    }
    {
      Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (PredName_15));
      MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (Var_39));
    }
    {
      Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (Var_38));
    }
    {
      Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) ((MR_String) "\140"));
      MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (Var_36));
    }
    mercury__string__append_list_2_p_0(Var_34, &Descr_24);
    {
      Var_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), Var_43, 1) = ((MR_Box) (Descr_24));
    }
    {
      Pieces_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_12, 0) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(1), Pieces_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    return Pieces_12;
  }
}

MR_Word MR_CALL 
hlds__hlds_error_util__describe_one_pred_name_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word ShouldModuleQualify_6,
  MR_Word PredId_7)
{
  {
    MR_Word Pieces_8;
    MR_Word PredInfo_9;

    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_5, PredId_7, &PredInfo_9);
    Pieces_8 = hlds__hlds_error_util__describe_one_pred_info_name_2_f_0(ShouldModuleQualify_6, PredInfo_9);
    return Pieces_8;
  }
}

MR_Word MR_CALL 
hlds__hlds_error_util__describe_one_pred_info_name_2_f_0(
  MR_Word ShouldModuleQualify_4,
  MR_Word PredInfo_5)
{
  {
    MR_bool succeeded;
    MR_Word Pieces_6;
    MR_String PredName_7;
    MR_Word ModuleName_8;
    MR_Integer Arity_9;
    MR_Word PredOrFunc_10;
    MR_Integer OrigArity_11;
    MR_Word Markers_12;
    MR_Word Origin_13;
    MR_Word SpecialId_14;
    MR_Word TypeCtor_15;

    PredName_7 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_5);
    ModuleName_8 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_5);
    Arity_9 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(PredInfo_5);
    PredOrFunc_10 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_5);
    parse_tree__prog_util__adjust_func_arity_3_p_1(PredOrFunc_10, &OrigArity_11, Arity_9);
    hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_5, &Markers_12);
    hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo_5, &Origin_13);
    succeeded = ((MR_tag((MR_Word) Origin_13)) == (MR_mktag((MR_Integer) 0)));
    if (succeeded)
    {
      SpecialId_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Origin_13, (MR_Integer) 0)));
      TypeCtor_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Origin_13, (MR_Integer) 1)));
      {
        MR_String Descr_16;
        MR_Word TypeSymName0_17;
        MR_Integer TypeArity_18;
        MR_Word TypeSymName_19;

        hlds__special_pred__special_pred_description_2_p_0(SpecialId_14, &Descr_16);
        TypeSymName0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeCtor_15, (MR_Integer) 0)));
        TypeArity_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), TypeCtor_15, (MR_Integer) 1)));
        switch (ShouldModuleQualify_4) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            TypeSymName_19 = TypeSymName0_17;
            break;
          case (MR_Integer) 1:
            {
              MR_String Var_25;

              Var_25 = mdbcomp__sym_name__unqualify_name_1_f_0(TypeSymName0_17);
              {
                TypeSymName_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), TypeSymName_19, 0) = ((MR_Box) (Var_25));
              }
            }
            break;
        }
        succeeded = (TypeArity_18 == (MR_Integer) 0);
        if (succeeded)
        {
          MR_Word Var_26;
          MR_Word Var_27;
          MR_Word Var_30;
          MR_Word Var_31;

          {
            Var_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
            MR_hl_field(MR_mktag(3), Var_26, 1) = ((MR_Box) (Descr_16));
          }
          {
            Var_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
            MR_hl_field(MR_mktag(3), Var_31, 1) = ((MR_Box) (TypeSymName_19));
          }
          {
            Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Var_31));
            MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_error_util_scalar_common_1[1])));
            MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (Var_30));
          }
          {
            Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_6, 0) = ((MR_Box) (Var_26));
            MR_hl_field(MR_mktag(1), Pieces_6, 1) = ((MR_Box) (Var_27));
          }
        }
        else
        {
          MR_Word Var_33;
          MR_Word Var_34;
          MR_Word Var_37;
          MR_Word Var_38;

          {
            Var_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
            MR_hl_field(MR_mktag(3), Var_33, 1) = ((MR_Box) (Descr_16));
          }
          {
            Var_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
            MR_hl_field(MR_mktag(3), Var_38, 1) = ((MR_Box) (TypeSymName_19));
          }
          {
            Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (Var_38));
            MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_error_util_scalar_common_1[2])));
            MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (Var_37));
          }
          {
            Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_6, 0) = ((MR_Box) (Var_33));
            MR_hl_field(MR_mktag(1), Pieces_6, 1) = ((MR_Box) (Var_34));
          }
        }
      }
    }
    else
    {
      succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_12, (MR_Integer) 12);
      if (succeeded)
      {
        Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__hlds_error_util_scalar_common_1[4]);
      }
      else
      {
        MR_Word PromiseType_20;

        succeeded = hlds__hlds_pred__pred_info_is_promise_2_p_0(PredInfo_5, &PromiseType_20);
        if (succeeded)
        {
          MR_Word Var_44;
          MR_String Var_45;

          Var_45 = parse_tree__prog_out__promise_to_string_1_f_0(PromiseType_20);
          {
            Var_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), Var_44, 1) = ((MR_Box) (Var_45));
          }
          {
            Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_6, 0) = ((MR_Box) (Var_44));
            MR_hl_field(MR_mktag(1), Pieces_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__hlds_error_util_scalar_common_1[6])));
          }
        }
        else
        {
          MR_Word Prefix_21;
          MR_Word PredSymName_22;
          MR_Word PredSymNameAndArity_23;
          MR_Word PredSymNamePiece_24;
          MR_Word Var_61;

          succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_12, (MR_Integer) 11);
          if (succeeded)
          {
            MR_Word Var_53;
            MR_Word Var_54;

            {
              Var_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
              MR_hl_field(MR_mktag(3), Var_54, 1) = ((MR_Box) (PredOrFunc_10));
            }
            {
              Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (Var_54));
              MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__hlds_error_util_scalar_common_1[9])));
            }
            {
              Prefix_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Prefix_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__hlds_error_util_scalar_common_1[7])));
              MR_hl_field(MR_mktag(1), Prefix_21, 1) = ((MR_Box) (Var_53));
            }
          }
          else
          {
            MR_Word Var_59;

            {
              Var_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
              MR_hl_field(MR_mktag(3), Var_59, 1) = ((MR_Box) (PredOrFunc_10));
            }
            {
              Prefix_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Prefix_21, 0) = ((MR_Box) (Var_59));
              MR_hl_field(MR_mktag(1), Prefix_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
          }
          {
            PredSymName_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), PredSymName_22, 0) = ((MR_Box) (ModuleName_8));
            MR_hl_field(MR_mktag(1), PredSymName_22, 1) = ((MR_Box) (PredName_7));
          }
          {
            PredSymNameAndArity_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), PredSymNameAndArity_23, 0) = ((MR_Box) (PredSymName_22));
            MR_hl_field(MR_mktag(0), PredSymNameAndArity_23, 1) = ((MR_Box) (OrigArity_11));
          }
          switch (ShouldModuleQualify_4) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                PredSymNamePiece_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), PredSymNamePiece_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                MR_hl_field(MR_mktag(3), PredSymNamePiece_24, 1) = ((MR_Box) (PredSymNameAndArity_23));
              }
              break;
            case (MR_Integer) 1:
              {
                PredSymNamePiece_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), PredSymNamePiece_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
                MR_hl_field(MR_mktag(3), PredSymNamePiece_24, 1) = ((MR_Box) (PredSymNameAndArity_23));
              }
              break;
          }
          {
            Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (PredSymNamePiece_24));
            MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          Pieces_6 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, Prefix_21, Var_61);
        }
      }
    }
    return Pieces_6;
  }
}

static MR_bool MR_CALL 
hlds__hlds_error_util____Unify____should_module_qualify_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_error_util____Unify____should_module_qualify_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_error_util____Compare____should_module_qualify_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_error_util____Compare____should_module_qualify_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__hlds__hlds_error_util__init(void)
{
}

void mercury__hlds__hlds_error_util__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__hlds_error_util__hlds__hlds_error_util__type_ctor_info_should_module_qualify_0);
}

void mercury__hlds__hlds_error_util__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__hlds_error_util__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module hlds.hlds_error_util. */
