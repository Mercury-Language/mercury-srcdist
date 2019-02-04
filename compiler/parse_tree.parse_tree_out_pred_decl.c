/*
** Automatically generated from `parse_tree_out_pred_decl.m'
** by the Mercury compiler,
** version rotd-2017-06-13
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


/* :- module parse_tree.parse_tree_out_pred_decl. */
/* :- implementation. */

/*
INIT mercury__parse_tree__parse_tree_out_pred_decl__init
ENDINIT
*/

#include "parse_tree.parse_tree_out_pred_decl.mih"


#include "libs.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "libs.compiler_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
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
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_inst.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out_pred_decl__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_format_mode_subdecl_8_p_0(
  MR_Word parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_23,
  MR_Word parse_tree__parse_tree_out_pred_decl__Lang_9,
  MR_Word parse_tree__parse_tree_out_pred_decl__PredOrFunc_10,
  MR_Word parse_tree__parse_tree_out_pred_decl__InstVarSet_11,
  MR_Word parse_tree__parse_tree_out_pred_decl__Name_12,
  MR_Word parse_tree__parse_tree_out_pred_decl__Modes_13,
  MR_Word parse_tree__parse_tree_out_pred_decl__MaybeDet_14,
  MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_0_18,
  MR_Box * parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_19);

static void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_format_func_type_2_13_p_0_1(
  MR_Box parse_tree__parse_tree_out_pred_decl__closure_arg,
  MR_Box parse_tree__parse_tree_out_pred_decl__wrapper_arg_1,
  MR_Box parse_tree__parse_tree_out_pred_decl__wrapper_arg_2,
  MR_Box * parse_tree__parse_tree_out_pred_decl__wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_format_func_type_2_13_p_0(
  MR_Word parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_54,
  MR_Word parse_tree__parse_tree_out_pred_decl__VarSet_14,
  MR_Word parse_tree__parse_tree_out_pred_decl__VarNamePrint_15,
  MR_Word parse_tree__parse_tree_out_pred_decl__ExistQVars_16,
  MR_Word parse_tree__parse_tree_out_pred_decl__FuncName_17,
  MR_Word parse_tree__parse_tree_out_pred_decl__Types_18,
  MR_Word parse_tree__parse_tree_out_pred_decl__RetType_19,
  MR_Word parse_tree__parse_tree_out_pred_decl__MaybeDet_20,
  MR_Word parse_tree__parse_tree_out_pred_decl__Purity_21,
  MR_Word parse_tree__parse_tree_out_pred_decl__ClassContext_22,
  MR_String parse_tree__parse_tree_out_pred_decl__StartString_23,
  MR_String parse_tree__parse_tree_out_pred_decl__Separator_24,
  MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_0_29,
  MR_Box * parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_30);

static void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_type_2_14_p_0_1(
  MR_Box parse_tree__parse_tree_out_pred_decl__closure_arg,
  MR_Box parse_tree__parse_tree_out_pred_decl__wrapper_arg_1,
  MR_Box parse_tree__parse_tree_out_pred_decl__wrapper_arg_2,
  MR_Box * parse_tree__parse_tree_out_pred_decl__wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_type_2_14_p_0(
  MR_Word parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_66,
  MR_Word parse_tree__parse_tree_out_pred_decl__TypeVarSet_15,
  MR_Word parse_tree__parse_tree_out_pred_decl__VarNamePrint_16,
  MR_Word parse_tree__parse_tree_out_pred_decl__PredOrFunc_17,
  MR_Word parse_tree__parse_tree_out_pred_decl__ExistQVars_18,
  MR_Word parse_tree__parse_tree_out_pred_decl__PredName_19,
  MR_Word parse_tree__parse_tree_out_pred_decl__Types_20,
  MR_Word parse_tree__parse_tree_out_pred_decl__MaybeWithType_21,
  MR_Word parse_tree__parse_tree_out_pred_decl__MaybeDet_22,
  MR_Word parse_tree__parse_tree_out_pred_decl__Purity_23,
  MR_Word parse_tree__parse_tree_out_pred_decl__ClassContext_24,
  MR_String parse_tree__parse_tree_out_pred_decl__StartString_25,
  MR_String parse_tree__parse_tree_out_pred_decl__Separator_26,
  MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_0_33,
  MR_Box * parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_34);


static /* final */ const MR_Box parse_tree__parse_tree_out_pred_decl_scalar_common_1[2][2];

static /* final */ const MR_Integer parse_tree__parse_tree_out_pred_decl_scalar_common_2[1][2];

static /* final */ const MR_Box parse_tree__parse_tree_out_pred_decl_scalar_common_3[1][9];




static /* final */ const MR_Box parse_tree__parse_tree_out_pred_decl_scalar_common_1[2][2] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_parse_tree__parse_tree_out_info__output__arity1__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_parse_tree__parse_tree_out_info__output__arity1__string__arity0__)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Integer parse_tree__parse_tree_out_pred_decl_scalar_common_2[1][2] = {
  /* row 0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 67631
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_pred_decl_scalar_common_3[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&parse_tree__parse_tree_out_pred_decl_scalar_common_2[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_pred_decl__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out_pred_decl__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_format_mode_subdecl_8_p_0(
  MR_Word parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_23,
  MR_Word parse_tree__parse_tree_out_pred_decl__Lang_9,
  MR_Word parse_tree__parse_tree_out_pred_decl__PredOrFunc_10,
  MR_Word parse_tree__parse_tree_out_pred_decl__InstVarSet_11,
  MR_Word parse_tree__parse_tree_out_pred_decl__Name_12,
  MR_Word parse_tree__parse_tree_out_pred_decl__Modes_13,
  MR_Word parse_tree__parse_tree_out_pred_decl__MaybeDet_14,
  MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_0_18,
  MR_Box * parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_19)
{
  {
    MR_bool parse_tree__parse_tree_out_pred_decl__succeeded;

    switch (parse_tree__parse_tree_out_pred_decl__PredOrFunc_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word parse_tree__parse_tree_out_pred_decl__ArgModes_16;
          MR_Word parse_tree__parse_tree_out_pred_decl__RetMode_17;
          MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_26_42;
          MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_28_44;
          MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_29_45;
          MR_Box parse_tree__parse_tree_out_pred_decl__conv0_RetMode_17;
          void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_3)(MR_Box, MR_Box, MR_Box, MR_Box *);

          {
            parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, parse_tree__parse_tree_out_pred_decl__Modes_13, &parse_tree__parse_tree_out_pred_decl__ArgModes_16, &parse_tree__parse_tree_out_pred_decl__conv0_RetMode_17);
          }
          parse_tree__parse_tree_out_pred_decl__RetMode_17 = ((MR_Word) parse_tree__parse_tree_out_pred_decl__conv0_RetMode_17);
          if ((parse_tree__parse_tree_out_pred_decl__ArgModes_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_3_p_0(parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_23, parse_tree__parse_tree_out_pred_decl__Name_12, parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_0_18, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_26_42);
            }
          else
            {
              MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_21_37;
              MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_23_39;
              MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_24_40;
              void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
              void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);

              {
                parse_tree__mercury_to_mercury__mercury_format_sym_name_3_p_0(parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_23, parse_tree__parse_tree_out_pred_decl__Name_12, parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_0_18, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_21_37);
              }
              parse_tree__parse_tree_out_pred_decl__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_23, (MR_Integer) 0)), (MR_Integer) 5)));
              {
                parse_tree__parse_tree_out_pred_decl__func_1(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_23), ((MR_Box) ((MR_String) "(")), parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_21_37, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_23_39);
              }
              {
                parse_tree__parse_tree_out_inst__mercury_format_mode_list_5_p_0(parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_23, parse_tree__parse_tree_out_pred_decl__Lang_9, parse_tree__parse_tree_out_pred_decl__InstVarSet_11, parse_tree__parse_tree_out_pred_decl__ArgModes_16, parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_23_39, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_24_40);
              }
              parse_tree__parse_tree_out_pred_decl__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_23, (MR_Integer) 0)), (MR_Integer) 5)));
              {
                parse_tree__parse_tree_out_pred_decl__func_2(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_23), ((MR_Box) ((MR_String) ")")), parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_24_40, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_26_42);
              }
            }
          parse_tree__parse_tree_out_pred_decl__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_23, (MR_Integer) 0)), (MR_Integer) 5)));
          {
            parse_tree__parse_tree_out_pred_decl__func_3(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_23), ((MR_Box) ((MR_String) " = ")), parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_26_42, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_28_44);
          }
          {
            parse_tree__parse_tree_out_inst__mercury_format_mode_5_p_0(parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_23, parse_tree__parse_tree_out_pred_decl__Lang_9, parse_tree__parse_tree_out_pred_decl__InstVarSet_11, parse_tree__parse_tree_out_pred_decl__RetMode_17, parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_28_44, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_29_45);
          }
          if ((parse_tree__parse_tree_out_pred_decl__MaybeDet_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            *parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_19 = parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_29_45;
          else
            {
              MR_Word parse_tree__parse_tree_out_pred_decl__Det_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pred_decl__MaybeDet_14, (MR_Integer) 0)));
              MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_10_53;
              MR_String parse_tree__parse_tree_out_pred_decl__Var_54;
              void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_4)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_23, (MR_Integer) 0)), (MR_Integer) 5)));
              void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_5)(MR_Box, MR_Box, MR_Box, MR_Box *);

              {
                parse_tree__parse_tree_out_pred_decl__func_4(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_23), ((MR_Box) ((MR_String) " is ")), parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_29_45, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_10_53);
              }
              {
                parse_tree__parse_tree_out_pred_decl__Var_54 = parse_tree__mercury_to_mercury__mercury_det_to_string_1_f_0(parse_tree__parse_tree_out_pred_decl__Det_51);
              }
              parse_tree__parse_tree_out_pred_decl__func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_23, (MR_Integer) 0)), (MR_Integer) 5)));
              {
                parse_tree__parse_tree_out_pred_decl__func_5(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_23), ((MR_Box) (parse_tree__parse_tree_out_pred_decl__Var_54)), parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_10_53, parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_19);
              }
            }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_32_79;

          if ((parse_tree__parse_tree_out_pred_decl__Modes_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_3_p_0(parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_23, parse_tree__parse_tree_out_pred_decl__Name_12, parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_0_18, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_32_79);
            }
          else
            {
              MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_22_69;
              MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_24_71;
              MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_25_72;
              void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_6)(MR_Box, MR_Box, MR_Box, MR_Box *);
              void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_7)(MR_Box, MR_Box, MR_Box, MR_Box *);

              {
                parse_tree__mercury_to_mercury__mercury_format_sym_name_3_p_0(parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_23, parse_tree__parse_tree_out_pred_decl__Name_12, parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_0_18, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_22_69);
              }
              parse_tree__parse_tree_out_pred_decl__func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_23, (MR_Integer) 0)), (MR_Integer) 5)));
              {
                parse_tree__parse_tree_out_pred_decl__func_6(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_23), ((MR_Box) ((MR_String) "(")), parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_22_69, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_24_71);
              }
              {
                parse_tree__parse_tree_out_inst__mercury_format_mode_list_5_p_0(parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_23, parse_tree__parse_tree_out_pred_decl__Lang_9, parse_tree__parse_tree_out_pred_decl__InstVarSet_11, parse_tree__parse_tree_out_pred_decl__Modes_13, parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_24_71, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_25_72);
              }
              parse_tree__parse_tree_out_pred_decl__func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_23, (MR_Integer) 0)), (MR_Integer) 5)));
              {
                parse_tree__parse_tree_out_pred_decl__func_7(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_23), ((MR_Box) ((MR_String) ")")), parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_25_72, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_32_79);
              }
            }
          if ((parse_tree__parse_tree_out_pred_decl__MaybeDet_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            *parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_19 = parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_32_79;
          else
            {
              MR_Word parse_tree__parse_tree_out_pred_decl__Det_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pred_decl__MaybeDet_14, (MR_Integer) 0)));
              MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_10_87;
              MR_String parse_tree__parse_tree_out_pred_decl__Var_88;
              void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_8)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_23, (MR_Integer) 0)), (MR_Integer) 5)));
              void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_9)(MR_Box, MR_Box, MR_Box, MR_Box *);

              {
                parse_tree__parse_tree_out_pred_decl__func_8(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_23), ((MR_Box) ((MR_String) " is ")), parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_32_79, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_10_87);
              }
              {
                parse_tree__parse_tree_out_pred_decl__Var_88 = parse_tree__mercury_to_mercury__mercury_det_to_string_1_f_0(parse_tree__parse_tree_out_pred_decl__Det_85);
              }
              parse_tree__parse_tree_out_pred_decl__func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_23, (MR_Integer) 0)), (MR_Integer) 5)));
              {
                parse_tree__parse_tree_out_pred_decl__func_9(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_23), ((MR_Box) (parse_tree__parse_tree_out_pred_decl__Var_88)), parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_10_87, parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_19);
              }
            }
        }
        break;
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_format_func_type_2_13_p_0_1(
  MR_Box parse_tree__parse_tree_out_pred_decl__closure_arg,
  MR_Box parse_tree__parse_tree_out_pred_decl__wrapper_arg_1,
  MR_Box parse_tree__parse_tree_out_pred_decl__wrapper_arg_2,
  MR_Box * parse_tree__parse_tree_out_pred_decl__wrapper_arg_3)
{
  {
    MR_Box parse_tree__parse_tree_out_pred_decl__closure = parse_tree__parse_tree_out_pred_decl__closure_arg;

    {
      parse_tree__mercury_to_mercury__mercury_format_type_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__closure, (MR_Integer) 5))), ((MR_Word) parse_tree__parse_tree_out_pred_decl__wrapper_arg_1), parse_tree__parse_tree_out_pred_decl__wrapper_arg_2, parse_tree__parse_tree_out_pred_decl__wrapper_arg_3);
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_format_func_type_2_13_p_0(
  MR_Word parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_54,
  MR_Word parse_tree__parse_tree_out_pred_decl__VarSet_14,
  MR_Word parse_tree__parse_tree_out_pred_decl__VarNamePrint_15,
  MR_Word parse_tree__parse_tree_out_pred_decl__ExistQVars_16,
  MR_Word parse_tree__parse_tree_out_pred_decl__FuncName_17,
  MR_Word parse_tree__parse_tree_out_pred_decl__Types_18,
  MR_Word parse_tree__parse_tree_out_pred_decl__RetType_19,
  MR_Word parse_tree__parse_tree_out_pred_decl__MaybeDet_20,
  MR_Word parse_tree__parse_tree_out_pred_decl__Purity_21,
  MR_Word parse_tree__parse_tree_out_pred_decl__ClassContext_22,
  MR_String parse_tree__parse_tree_out_pred_decl__StartString_23,
  MR_String parse_tree__parse_tree_out_pred_decl__Separator_24,
  MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_0_29,
  MR_Box * parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_30)
{
  {
    MR_bool parse_tree__parse_tree_out_pred_decl__succeeded;
    MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_31_31;
    MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_32_32;
    MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_35_35;
    MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_36_36;
    MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_38_38;
    MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_47_47;
    MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_49_49;
    MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_50_50;
    MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_51_51;
    MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_52_52;
    void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_54, (MR_Integer) 0)), (MR_Integer) 5)));
    MR_Word parse_tree__parse_tree_out_pred_decl__Var_33;
    MR_Word parse_tree__parse_tree_out_pred_decl__Var_26;
    void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_3)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_7)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_10)(MR_Box, MR_Box, MR_Box, MR_Box *);

    {
      parse_tree__parse_tree_out_pred_decl__func_0(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_54), ((MR_Box) (parse_tree__parse_tree_out_pred_decl__StartString_23)), parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_0_29, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_31_31);
    }
    {
      parse_tree__mercury_to_mercury__mercury_format_quantifier_5_p_0(parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_54, parse_tree__parse_tree_out_pred_decl__VarSet_14, parse_tree__parse_tree_out_pred_decl__VarNamePrint_15, parse_tree__parse_tree_out_pred_decl__ExistQVars_16, parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_31_31, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_32_32);
    }
    parse_tree__parse_tree_out_pred_decl__succeeded = (parse_tree__parse_tree_out_pred_decl__ExistQVars_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (parse_tree__parse_tree_out_pred_decl__succeeded)
      {
        parse_tree__parse_tree_out_pred_decl__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__ClassContext_22, (MR_Integer) 0)));
        parse_tree__parse_tree_out_pred_decl__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__ClassContext_22, (MR_Integer) 1)));
        parse_tree__parse_tree_out_pred_decl__succeeded = (parse_tree__parse_tree_out_pred_decl__Var_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    if (parse_tree__parse_tree_out_pred_decl__succeeded)
      parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_35_35 = parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_32_32;
    else
      {
        void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_54, (MR_Integer) 0)), (MR_Integer) 5)));

        {
          parse_tree__parse_tree_out_pred_decl__func_1(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_54), ((MR_Box) ((MR_String) "(")), parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_32_32, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_35_35);
        }
      }
    parse_tree__parse_tree_out_pred_decl__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_54, (MR_Integer) 0)), (MR_Integer) 11)));
    {
      parse_tree__parse_tree_out_pred_decl__func_2(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_54), ((MR_Box) (parse_tree__parse_tree_out_pred_decl__Purity_21)), parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_35_35, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_36_36);
    }
    parse_tree__parse_tree_out_pred_decl__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_54, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      parse_tree__parse_tree_out_pred_decl__func_3(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_54), ((MR_Box) ((MR_String) "func ")), parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_36_36, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_38_38);
    }
    if ((parse_tree__parse_tree_out_pred_decl__Types_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_3_p_0(parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_54, parse_tree__parse_tree_out_pred_decl__FuncName_17, parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_38_38, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_47_47);
      }
    else
      {
        MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_40_40;
        MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_42_42;
        MR_Word parse_tree__parse_tree_out_pred_decl__Var_44;
        MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_45_45;
        void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_4)(MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_6)(MR_Box, MR_Box, MR_Box, MR_Box *);

        {
          parse_tree__mercury_to_mercury__mercury_format_sym_name_3_p_0(parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_54, parse_tree__parse_tree_out_pred_decl__FuncName_17, parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_38_38, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_40_40);
        }
        parse_tree__parse_tree_out_pred_decl__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_54, (MR_Integer) 0)), (MR_Integer) 5)));
        {
          parse_tree__parse_tree_out_pred_decl__func_4(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_54), ((MR_Box) ((MR_String) "(")), parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_40_40, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_42_42);
        }
        {
          parse_tree__parse_tree_out_pred_decl__Var_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__Var_44, 0) = ((MR_Box) (&parse_tree__parse_tree_out_pred_decl_scalar_common_3[0]));
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__Var_44, 1) = ((MR_Box) (parse_tree__parse_tree_out_pred_decl__mercury_format_func_type_2_13_p_0_1));
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__Var_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__Var_44, 3) = ((MR_Box) (parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_54));
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__Var_44, 4) = ((MR_Box) (parse_tree__parse_tree_out_pred_decl__VarSet_14));
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__Var_44, 5) = ((MR_Box) (parse_tree__parse_tree_out_pred_decl__VarNamePrint_15));
        }
        parse_tree__parse_tree_out_pred_decl__func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_54, (MR_Integer) 0)), (MR_Integer) 19)));
        {
          parse_tree__parse_tree_out_pred_decl__func_5(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_54), ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)), ((MR_Box) (parse_tree__parse_tree_out_pred_decl__Types_18)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (parse_tree__parse_tree_out_pred_decl__Var_44)), parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_42_42, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_45_45);
        }
        parse_tree__parse_tree_out_pred_decl__func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_54, (MR_Integer) 0)), (MR_Integer) 5)));
        {
          parse_tree__parse_tree_out_pred_decl__func_6(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_54), ((MR_Box) ((MR_String) ")")), parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_45_45, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_47_47);
        }
      }
    parse_tree__parse_tree_out_pred_decl__func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_54, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      parse_tree__parse_tree_out_pred_decl__func_7(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_54), ((MR_Box) ((MR_String) " = ")), parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_47_47, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_49_49);
    }
    {
      parse_tree__mercury_to_mercury__mercury_format_type_5_p_0(parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_54, parse_tree__parse_tree_out_pred_decl__VarSet_14, parse_tree__parse_tree_out_pred_decl__VarNamePrint_15, parse_tree__parse_tree_out_pred_decl__RetType_19, parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_49_49, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_50_50);
    }
    if ((parse_tree__parse_tree_out_pred_decl__MaybeDet_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_51_51 = parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_50_50;
    else
      {
        MR_Word parse_tree__parse_tree_out_pred_decl__Det_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pred_decl__MaybeDet_20, (MR_Integer) 0)));
        MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_10_65;
        MR_String parse_tree__parse_tree_out_pred_decl__Var_66;
        void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_8)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_54, (MR_Integer) 0)), (MR_Integer) 5)));
        void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_9)(MR_Box, MR_Box, MR_Box, MR_Box *);

        {
          parse_tree__parse_tree_out_pred_decl__func_8(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_54), ((MR_Box) ((MR_String) " is ")), parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_50_50, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_10_65);
        }
        {
          parse_tree__parse_tree_out_pred_decl__Var_66 = parse_tree__mercury_to_mercury__mercury_det_to_string_1_f_0(parse_tree__parse_tree_out_pred_decl__Det_63);
        }
        parse_tree__parse_tree_out_pred_decl__func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_54, (MR_Integer) 0)), (MR_Integer) 5)));
        {
          parse_tree__parse_tree_out_pred_decl__func_9(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_54), ((MR_Box) (parse_tree__parse_tree_out_pred_decl__Var_66)), parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_10_65, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_51_51);
        }
      }
    {
      parse_tree__mercury_to_mercury__mercury_format_class_context_6_p_0(parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_54, parse_tree__parse_tree_out_pred_decl__VarSet_14, parse_tree__parse_tree_out_pred_decl__VarNamePrint_15, parse_tree__parse_tree_out_pred_decl__ClassContext_22, parse_tree__parse_tree_out_pred_decl__ExistQVars_16, parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_51_51, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_52_52);
    }
    parse_tree__parse_tree_out_pred_decl__func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_54, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      parse_tree__parse_tree_out_pred_decl__func_10(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_54), ((MR_Box) (parse_tree__parse_tree_out_pred_decl__Separator_24)), parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_52_52, parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_30);
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_type_2_14_p_0_1(
  MR_Box parse_tree__parse_tree_out_pred_decl__closure_arg,
  MR_Box parse_tree__parse_tree_out_pred_decl__wrapper_arg_1,
  MR_Box parse_tree__parse_tree_out_pred_decl__wrapper_arg_2,
  MR_Box * parse_tree__parse_tree_out_pred_decl__wrapper_arg_3)
{
  {
    MR_Box parse_tree__parse_tree_out_pred_decl__closure = parse_tree__parse_tree_out_pred_decl__closure_arg;

    {
      parse_tree__mercury_to_mercury__mercury_format_type_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__closure, (MR_Integer) 5))), ((MR_Word) parse_tree__parse_tree_out_pred_decl__wrapper_arg_1), parse_tree__parse_tree_out_pred_decl__wrapper_arg_2, parse_tree__parse_tree_out_pred_decl__wrapper_arg_3);
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_type_2_14_p_0(
  MR_Word parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_66,
  MR_Word parse_tree__parse_tree_out_pred_decl__TypeVarSet_15,
  MR_Word parse_tree__parse_tree_out_pred_decl__VarNamePrint_16,
  MR_Word parse_tree__parse_tree_out_pred_decl__PredOrFunc_17,
  MR_Word parse_tree__parse_tree_out_pred_decl__ExistQVars_18,
  MR_Word parse_tree__parse_tree_out_pred_decl__PredName_19,
  MR_Word parse_tree__parse_tree_out_pred_decl__Types_20,
  MR_Word parse_tree__parse_tree_out_pred_decl__MaybeWithType_21,
  MR_Word parse_tree__parse_tree_out_pred_decl__MaybeDet_22,
  MR_Word parse_tree__parse_tree_out_pred_decl__Purity_23,
  MR_Word parse_tree__parse_tree_out_pred_decl__ClassContext_24,
  MR_String parse_tree__parse_tree_out_pred_decl__StartString_25,
  MR_String parse_tree__parse_tree_out_pred_decl__Separator_26,
  MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_0_33,
  MR_Box * parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_34)
{
  {
    MR_bool parse_tree__parse_tree_out_pred_decl__succeeded;
    MR_String parse_tree__parse_tree_out_pred_decl__PredOrFuncStr_29;
    MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_35_35;
    MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_36_36;
    MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_39_39;
    MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_40_40;
    MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_41_41;
    MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_43_43;
    MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_52_52;
    MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_57_57;
    MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_61_61;
    MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_64_64;
    void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_66, (MR_Integer) 0)), (MR_Integer) 5)));
    MR_Word parse_tree__parse_tree_out_pred_decl__Var_37;
    MR_Word parse_tree__parse_tree_out_pred_decl__Var_28;
    void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_3)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_4)(MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Word parse_tree__parse_tree_out_pred_decl__TypeCtorInfo_71_71;
    MR_String parse_tree__parse_tree_out_pred_decl__Var_58;
    MR_Integer parse_tree__parse_tree_out_pred_decl__Var_59;
    MR_Integer parse_tree__parse_tree_out_pred_decl__Var_72;
    void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_14)(MR_Box, MR_Box, MR_Box, MR_Box *);

    {
      parse_tree__parse_tree_out_pred_decl__func_0(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_66), ((MR_Box) (parse_tree__parse_tree_out_pred_decl__StartString_25)), parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_0_33, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_35_35);
    }
    {
      parse_tree__mercury_to_mercury__mercury_format_quantifier_5_p_0(parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_66, parse_tree__parse_tree_out_pred_decl__TypeVarSet_15, parse_tree__parse_tree_out_pred_decl__VarNamePrint_16, parse_tree__parse_tree_out_pred_decl__ExistQVars_18, parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_35_35, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_36_36);
    }
    parse_tree__parse_tree_out_pred_decl__succeeded = (parse_tree__parse_tree_out_pred_decl__ExistQVars_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (parse_tree__parse_tree_out_pred_decl__succeeded)
      {
        parse_tree__parse_tree_out_pred_decl__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__ClassContext_24, (MR_Integer) 0)));
        parse_tree__parse_tree_out_pred_decl__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__ClassContext_24, (MR_Integer) 1)));
        parse_tree__parse_tree_out_pred_decl__succeeded = (parse_tree__parse_tree_out_pred_decl__Var_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    if (parse_tree__parse_tree_out_pred_decl__succeeded)
      parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_39_39 = parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_36_36;
    else
      {
        void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_66, (MR_Integer) 0)), (MR_Integer) 5)));

        {
          parse_tree__parse_tree_out_pred_decl__func_1(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_66), ((MR_Box) ((MR_String) "(")), parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_36_36, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_39_39);
        }
      }
    parse_tree__parse_tree_out_pred_decl__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_66, (MR_Integer) 0)), (MR_Integer) 11)));
    {
      parse_tree__parse_tree_out_pred_decl__func_2(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_66), ((MR_Box) (parse_tree__parse_tree_out_pred_decl__Purity_23)), parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_39_39, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_40_40);
    }
    {
      parse_tree__parse_tree_out_pred_decl__PredOrFuncStr_29 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(parse_tree__parse_tree_out_pred_decl__PredOrFunc_17);
    }
    parse_tree__parse_tree_out_pred_decl__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_66, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      parse_tree__parse_tree_out_pred_decl__func_3(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_66), ((MR_Box) (parse_tree__parse_tree_out_pred_decl__PredOrFuncStr_29)), parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_40_40, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_41_41);
    }
    parse_tree__parse_tree_out_pred_decl__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_66, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      parse_tree__parse_tree_out_pred_decl__func_4(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_66), ((MR_Box) ((MR_String) " ")), parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_41_41, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_43_43);
    }
    if ((parse_tree__parse_tree_out_pred_decl__Types_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_3_p_0(parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_66, parse_tree__parse_tree_out_pred_decl__PredName_19, parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_43_43, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_52_52);
      }
    else
      {
        MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_45_45;
        MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_47_47;
        MR_Word parse_tree__parse_tree_out_pred_decl__Var_49;
        MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_50_50;
        void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_5)(MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_7)(MR_Box, MR_Box, MR_Box, MR_Box *);

        {
          parse_tree__mercury_to_mercury__mercury_format_sym_name_3_p_0(parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_66, parse_tree__parse_tree_out_pred_decl__PredName_19, parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_43_43, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_45_45);
        }
        parse_tree__parse_tree_out_pred_decl__func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_66, (MR_Integer) 0)), (MR_Integer) 5)));
        {
          parse_tree__parse_tree_out_pred_decl__func_5(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_66), ((MR_Box) ((MR_String) "(")), parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_45_45, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_47_47);
        }
        {
          parse_tree__parse_tree_out_pred_decl__Var_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__Var_49, 0) = ((MR_Box) (&parse_tree__parse_tree_out_pred_decl_scalar_common_3[0]));
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__Var_49, 1) = ((MR_Box) (parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_type_2_14_p_0_1));
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__Var_49, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__Var_49, 3) = ((MR_Box) (parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_66));
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__Var_49, 4) = ((MR_Box) (parse_tree__parse_tree_out_pred_decl__TypeVarSet_15));
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__Var_49, 5) = ((MR_Box) (parse_tree__parse_tree_out_pred_decl__VarNamePrint_16));
        }
        parse_tree__parse_tree_out_pred_decl__func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_66, (MR_Integer) 0)), (MR_Integer) 19)));
        {
          parse_tree__parse_tree_out_pred_decl__func_6(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_66), ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)), ((MR_Box) (parse_tree__parse_tree_out_pred_decl__Types_20)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (parse_tree__parse_tree_out_pred_decl__Var_49)), parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_47_47, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_50_50);
        }
        parse_tree__parse_tree_out_pred_decl__func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_66, (MR_Integer) 0)), (MR_Integer) 5)));
        {
          parse_tree__parse_tree_out_pred_decl__func_7(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_66), ((MR_Box) ((MR_String) ")")), parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_50_50, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_52_52);
        }
      }
    if ((parse_tree__parse_tree_out_pred_decl__MaybeWithType_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_57_57 = parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_52_52;
    else
      {
        MR_Word parse_tree__parse_tree_out_pred_decl__WithType_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pred_decl__MaybeWithType_21, (MR_Integer) 0)));
        MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_54_54;
        MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_55_55;
        void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_8)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_66, (MR_Integer) 0)), (MR_Integer) 5)));
        void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_9)(MR_Box, MR_Box, MR_Box, MR_Box *);

        {
          parse_tree__parse_tree_out_pred_decl__func_8(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_66), ((MR_Box) ((MR_String) " \140with_type\140 (")), parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_52_52, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_54_54);
        }
        {
          parse_tree__mercury_to_mercury__mercury_format_type_5_p_0(parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_66, parse_tree__parse_tree_out_pred_decl__TypeVarSet_15, parse_tree__parse_tree_out_pred_decl__VarNamePrint_16, parse_tree__parse_tree_out_pred_decl__WithType_32, parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_54_54, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_55_55);
        }
        parse_tree__parse_tree_out_pred_decl__func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_66, (MR_Integer) 0)), (MR_Integer) 5)));
        {
          parse_tree__parse_tree_out_pred_decl__func_9(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_66), ((MR_Box) ((MR_String) ")")), parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_55_55, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_57_57);
        }
      }
    parse_tree__parse_tree_out_pred_decl__succeeded = (parse_tree__parse_tree_out_pred_decl__PredOrFunc_17 == (MR_Integer) 0);
    if (parse_tree__parse_tree_out_pred_decl__succeeded)
      {
        parse_tree__parse_tree_out_pred_decl__succeeded = (parse_tree__parse_tree_out_pred_decl__MaybeDet_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (parse_tree__parse_tree_out_pred_decl__succeeded)
          {
            {
              parse_tree__parse_tree_out_pred_decl__Var_58 = mdbcomp__sym_name__unqualify_name_1_f_0(parse_tree__parse_tree_out_pred_decl__PredName_19);
            }
            parse_tree__parse_tree_out_pred_decl__succeeded = (strcmp(parse_tree__parse_tree_out_pred_decl__Var_58, (MR_String) "is") == 0);
            if (parse_tree__parse_tree_out_pred_decl__succeeded)
              {
                parse_tree__parse_tree_out_pred_decl__Var_59 = (MR_Integer) 2;
                parse_tree__parse_tree_out_pred_decl__TypeCtorInfo_71_71 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
                {
                  mercury__list__length_2_p_0(parse_tree__parse_tree_out_pred_decl__TypeCtorInfo_71_71, parse_tree__parse_tree_out_pred_decl__Types_20, &parse_tree__parse_tree_out_pred_decl__Var_72);
                }
                parse_tree__parse_tree_out_pred_decl__succeeded = (parse_tree__parse_tree_out_pred_decl__Var_59 == parse_tree__parse_tree_out_pred_decl__Var_72);
              }
          }
      }
    if (parse_tree__parse_tree_out_pred_decl__succeeded)
      {
        MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_10_79;
        MR_String parse_tree__parse_tree_out_pred_decl__Var_80;
        void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_10)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_66, (MR_Integer) 0)), (MR_Integer) 5)));
        void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_11)(MR_Box, MR_Box, MR_Box, MR_Box *);

        {
          parse_tree__parse_tree_out_pred_decl__func_10(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_66), ((MR_Box) ((MR_String) " is ")), parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_57_57, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_10_79);
        }
        {
          parse_tree__parse_tree_out_pred_decl__Var_80 = parse_tree__mercury_to_mercury__mercury_det_to_string_1_f_0((MR_Integer) 0);
        }
        parse_tree__parse_tree_out_pred_decl__func_11 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_66, (MR_Integer) 0)), (MR_Integer) 5)));
        {
          parse_tree__parse_tree_out_pred_decl__func_11(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_66), ((MR_Box) (parse_tree__parse_tree_out_pred_decl__Var_80)), parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_10_79, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_61_61);
        }
      }
    else
    if ((parse_tree__parse_tree_out_pred_decl__MaybeDet_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_61_61 = parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_57_57;
    else
      {
        MR_Word parse_tree__parse_tree_out_pred_decl__Det_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pred_decl__MaybeDet_22, (MR_Integer) 0)));
        MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_10_88;
        MR_String parse_tree__parse_tree_out_pred_decl__Var_89;
        void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_12)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_66, (MR_Integer) 0)), (MR_Integer) 5)));
        void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_13)(MR_Box, MR_Box, MR_Box, MR_Box *);

        {
          parse_tree__parse_tree_out_pred_decl__func_12(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_66), ((MR_Box) ((MR_String) " is ")), parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_57_57, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_10_88);
        }
        {
          parse_tree__parse_tree_out_pred_decl__Var_89 = parse_tree__mercury_to_mercury__mercury_det_to_string_1_f_0(parse_tree__parse_tree_out_pred_decl__Det_86);
        }
        parse_tree__parse_tree_out_pred_decl__func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_66, (MR_Integer) 0)), (MR_Integer) 5)));
        {
          parse_tree__parse_tree_out_pred_decl__func_13(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_66), ((MR_Box) (parse_tree__parse_tree_out_pred_decl__Var_89)), parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_10_88, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_61_61);
        }
      }
    {
      parse_tree__mercury_to_mercury__mercury_format_class_context_6_p_0(parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_66, parse_tree__parse_tree_out_pred_decl__TypeVarSet_15, parse_tree__parse_tree_out_pred_decl__VarNamePrint_16, parse_tree__parse_tree_out_pred_decl__ClassContext_24, parse_tree__parse_tree_out_pred_decl__ExistQVars_18, parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_61_61, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_64_64);
    }
    parse_tree__parse_tree_out_pred_decl__func_14 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_66, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      parse_tree__parse_tree_out_pred_decl__func_14(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_66), ((MR_Box) (parse_tree__parse_tree_out_pred_decl__Separator_26)), parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_64_64, parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_34);
    }
  }
}

MR_String MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_func_mode_subdecl_to_string_6_f_0(
  MR_Word parse_tree__parse_tree_out_pred_decl__Lang_8,
  MR_Word parse_tree__parse_tree_out_pred_decl__VarSet_9,
  MR_Word parse_tree__parse_tree_out_pred_decl__FuncName_10,
  MR_Word parse_tree__parse_tree_out_pred_decl__Modes_11,
  MR_Word parse_tree__parse_tree_out_pred_decl__RetMode_12,
  MR_Word parse_tree__parse_tree_out_pred_decl__MaybeDet_13)
{
  {
    MR_bool parse_tree__parse_tree_out_pred_decl__succeeded;
    MR_String parse_tree__parse_tree_out_pred_decl__String_14;
    MR_Word parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_16 = (MR_Word) &parse_tree__parse_tree_out_pred_decl_scalar_common_1[1];
    MR_String parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_26_34;
    MR_String parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_28_36;
    MR_String parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_29_37;
    void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_7)(MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box parse_tree__parse_tree_out_pred_decl__conv8_STATE_VARIABLE_U_28_36;
    MR_Box parse_tree__parse_tree_out_pred_decl__conv9_STATE_VARIABLE_U_29_37;

    if ((parse_tree__parse_tree_out_pred_decl__Modes_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Box parse_tree__parse_tree_out_pred_decl__conv0_STATE_VARIABLE_U_26_34;

        {
          parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_3_p_0(parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_16, parse_tree__parse_tree_out_pred_decl__FuncName_10, ((MR_Box) ((MR_String) "")), &parse_tree__parse_tree_out_pred_decl__conv0_STATE_VARIABLE_U_26_34);
        }
        parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_26_34 = ((MR_String) parse_tree__parse_tree_out_pred_decl__conv0_STATE_VARIABLE_U_26_34);
      }
    else
      {
        MR_String parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_21_29;
        MR_String parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_23_31;
        MR_String parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_24_32;
        MR_Box parse_tree__parse_tree_out_pred_decl__conv1_STATE_VARIABLE_U_21_29;
        void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box parse_tree__parse_tree_out_pred_decl__conv3_STATE_VARIABLE_U_23_31;
        MR_Box parse_tree__parse_tree_out_pred_decl__conv4_STATE_VARIABLE_U_24_32;
        void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_5)(MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box parse_tree__parse_tree_out_pred_decl__conv6_STATE_VARIABLE_U_26_34;

        {
          parse_tree__mercury_to_mercury__mercury_format_sym_name_3_p_0(parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_16, parse_tree__parse_tree_out_pred_decl__FuncName_10, ((MR_Box) ((MR_String) "")), &parse_tree__parse_tree_out_pred_decl__conv1_STATE_VARIABLE_U_21_29);
        }
        parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_21_29 = ((MR_String) parse_tree__parse_tree_out_pred_decl__conv1_STATE_VARIABLE_U_21_29);
        parse_tree__parse_tree_out_pred_decl__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_16, (MR_Integer) 0)), (MR_Integer) 5)));
        {
          parse_tree__parse_tree_out_pred_decl__func_2(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_16), ((MR_Box) ((MR_String) "(")), ((MR_Box) (parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_21_29)), &parse_tree__parse_tree_out_pred_decl__conv3_STATE_VARIABLE_U_23_31);
        }
        parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_23_31 = ((MR_String) parse_tree__parse_tree_out_pred_decl__conv3_STATE_VARIABLE_U_23_31);
        {
          parse_tree__parse_tree_out_inst__mercury_format_mode_list_5_p_0(parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_16, parse_tree__parse_tree_out_pred_decl__Lang_8, parse_tree__parse_tree_out_pred_decl__VarSet_9, parse_tree__parse_tree_out_pred_decl__Modes_11, ((MR_Box) (parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_23_31)), &parse_tree__parse_tree_out_pred_decl__conv4_STATE_VARIABLE_U_24_32);
        }
        parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_24_32 = ((MR_String) parse_tree__parse_tree_out_pred_decl__conv4_STATE_VARIABLE_U_24_32);
        parse_tree__parse_tree_out_pred_decl__func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_16, (MR_Integer) 0)), (MR_Integer) 5)));
        {
          parse_tree__parse_tree_out_pred_decl__func_5(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_16), ((MR_Box) ((MR_String) ")")), ((MR_Box) (parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_24_32)), &parse_tree__parse_tree_out_pred_decl__conv6_STATE_VARIABLE_U_26_34);
        }
        parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_26_34 = ((MR_String) parse_tree__parse_tree_out_pred_decl__conv6_STATE_VARIABLE_U_26_34);
      }
    parse_tree__parse_tree_out_pred_decl__func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_16, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      parse_tree__parse_tree_out_pred_decl__func_7(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_16), ((MR_Box) ((MR_String) " = ")), ((MR_Box) (parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_26_34)), &parse_tree__parse_tree_out_pred_decl__conv8_STATE_VARIABLE_U_28_36);
    }
    parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_28_36 = ((MR_String) parse_tree__parse_tree_out_pred_decl__conv8_STATE_VARIABLE_U_28_36);
    {
      parse_tree__parse_tree_out_inst__mercury_format_mode_5_p_0(parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_16, parse_tree__parse_tree_out_pred_decl__Lang_8, parse_tree__parse_tree_out_pred_decl__VarSet_9, parse_tree__parse_tree_out_pred_decl__RetMode_12, ((MR_Box) (parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_28_36)), &parse_tree__parse_tree_out_pred_decl__conv9_STATE_VARIABLE_U_29_37);
    }
    parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_29_37 = ((MR_String) parse_tree__parse_tree_out_pred_decl__conv9_STATE_VARIABLE_U_29_37);
    if ((parse_tree__parse_tree_out_pred_decl__MaybeDet_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      parse_tree__parse_tree_out_pred_decl__String_14 = parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_29_37;
    else
      {
        MR_Word parse_tree__parse_tree_out_pred_decl__Det_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pred_decl__MaybeDet_13, (MR_Integer) 0)));
        MR_String parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_10_45;
        MR_String parse_tree__parse_tree_out_pred_decl__Var_46;
        void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_10)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_16, (MR_Integer) 0)), (MR_Integer) 5)));
        MR_Box parse_tree__parse_tree_out_pred_decl__conv11_STATE_VARIABLE_U_10_45;
        void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_12)(MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box parse_tree__parse_tree_out_pred_decl__conv13_String_14;

        {
          parse_tree__parse_tree_out_pred_decl__func_10(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_16), ((MR_Box) ((MR_String) " is ")), ((MR_Box) (parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_29_37)), &parse_tree__parse_tree_out_pred_decl__conv11_STATE_VARIABLE_U_10_45);
        }
        parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_10_45 = ((MR_String) parse_tree__parse_tree_out_pred_decl__conv11_STATE_VARIABLE_U_10_45);
        {
          parse_tree__parse_tree_out_pred_decl__Var_46 = parse_tree__mercury_to_mercury__mercury_det_to_string_1_f_0(parse_tree__parse_tree_out_pred_decl__Det_43);
        }
        parse_tree__parse_tree_out_pred_decl__func_12 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_16, (MR_Integer) 0)), (MR_Integer) 5)));
        {
          parse_tree__parse_tree_out_pred_decl__func_12(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_16), ((MR_Box) (parse_tree__parse_tree_out_pred_decl__Var_46)), ((MR_Box) (parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_10_45)), &parse_tree__parse_tree_out_pred_decl__conv13_String_14);
        }
        parse_tree__parse_tree_out_pred_decl__String_14 = ((MR_String) parse_tree__parse_tree_out_pred_decl__conv13_String_14);
      }
    return parse_tree__parse_tree_out_pred_decl__String_14;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_output_func_mode_subdecl_8_p_0(
  MR_Word parse_tree__parse_tree_out_pred_decl__Lang_9,
  MR_Word parse_tree__parse_tree_out_pred_decl__VarSet_10,
  MR_Word parse_tree__parse_tree_out_pred_decl__FuncName_11,
  MR_Word parse_tree__parse_tree_out_pred_decl__Modes_12,
  MR_Word parse_tree__parse_tree_out_pred_decl__RetMode_13,
  MR_Word parse_tree__parse_tree_out_pred_decl__MaybeDet_14)
{
  {
    MR_bool parse_tree__parse_tree_out_pred_decl__succeeded;
    MR_Word parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_19 = (MR_Word) &parse_tree__parse_tree_out_pred_decl_scalar_common_1[0];
    void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_7)(MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box parse_tree__parse_tree_out_pred_decl__conv8_STATE_VARIABLE_U_28_39;
    MR_Box parse_tree__parse_tree_out_pred_decl__conv9_STATE_VARIABLE_U_29_40;

    if ((parse_tree__parse_tree_out_pred_decl__Modes_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Box parse_tree__parse_tree_out_pred_decl__conv0_STATE_VARIABLE_U_26_37;

        {
          parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_3_p_0(parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_19, parse_tree__parse_tree_out_pred_decl__FuncName_11, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pred_decl__conv0_STATE_VARIABLE_U_26_37);
        }
      }
    else
      {
        MR_Box parse_tree__parse_tree_out_pred_decl__conv1_STATE_VARIABLE_U_21_32;
        void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box parse_tree__parse_tree_out_pred_decl__conv3_STATE_VARIABLE_U_23_34;
        MR_Box parse_tree__parse_tree_out_pred_decl__conv4_STATE_VARIABLE_U_24_35;
        void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_5)(MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box parse_tree__parse_tree_out_pred_decl__conv6_STATE_VARIABLE_U_26_37;

        {
          parse_tree__mercury_to_mercury__mercury_format_sym_name_3_p_0(parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_19, parse_tree__parse_tree_out_pred_decl__FuncName_11, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pred_decl__conv1_STATE_VARIABLE_U_21_32);
        }
        parse_tree__parse_tree_out_pred_decl__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_19, (MR_Integer) 0)), (MR_Integer) 5)));
        {
          parse_tree__parse_tree_out_pred_decl__func_2(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_19), ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pred_decl__conv3_STATE_VARIABLE_U_23_34);
        }
        {
          parse_tree__parse_tree_out_inst__mercury_format_mode_list_5_p_0(parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_19, parse_tree__parse_tree_out_pred_decl__Lang_9, parse_tree__parse_tree_out_pred_decl__VarSet_10, parse_tree__parse_tree_out_pred_decl__Modes_12, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pred_decl__conv4_STATE_VARIABLE_U_24_35);
        }
        parse_tree__parse_tree_out_pred_decl__func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_19, (MR_Integer) 0)), (MR_Integer) 5)));
        {
          parse_tree__parse_tree_out_pred_decl__func_5(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_19), ((MR_Box) ((MR_String) ")")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pred_decl__conv6_STATE_VARIABLE_U_26_37);
        }
      }
    parse_tree__parse_tree_out_pred_decl__func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_19, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      parse_tree__parse_tree_out_pred_decl__func_7(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_19), ((MR_Box) ((MR_String) " = ")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pred_decl__conv8_STATE_VARIABLE_U_28_39);
    }
    {
      parse_tree__parse_tree_out_inst__mercury_format_mode_5_p_0(parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_19, parse_tree__parse_tree_out_pred_decl__Lang_9, parse_tree__parse_tree_out_pred_decl__VarSet_10, parse_tree__parse_tree_out_pred_decl__RetMode_13, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pred_decl__conv9_STATE_VARIABLE_U_29_40);
    }
    if ((parse_tree__parse_tree_out_pred_decl__MaybeDet_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        MR_Word parse_tree__parse_tree_out_pred_decl__Det_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pred_decl__MaybeDet_14, (MR_Integer) 0)));
        MR_String parse_tree__parse_tree_out_pred_decl__Var_49;
        void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_10)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_19, (MR_Integer) 0)), (MR_Integer) 5)));
        MR_Box parse_tree__parse_tree_out_pred_decl__conv11_STATE_VARIABLE_U_10_48;
        void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_12)(MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box parse_tree__parse_tree_out_pred_decl__conv13_STATE_VARIABLE_IO_17;

        {
          parse_tree__parse_tree_out_pred_decl__func_10(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_19), ((MR_Box) ((MR_String) " is ")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pred_decl__conv11_STATE_VARIABLE_U_10_48);
        }
        {
          parse_tree__parse_tree_out_pred_decl__Var_49 = parse_tree__mercury_to_mercury__mercury_det_to_string_1_f_0(parse_tree__parse_tree_out_pred_decl__Det_46);
        }
        parse_tree__parse_tree_out_pred_decl__func_12 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_19, (MR_Integer) 0)), (MR_Integer) 5)));
        {
          parse_tree__parse_tree_out_pred_decl__func_12(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_19), ((MR_Box) (parse_tree__parse_tree_out_pred_decl__Var_49)), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pred_decl__conv13_STATE_VARIABLE_IO_17);
        }
      }
  }
}

MR_String MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_pred_mode_subdecl_to_string_5_f_0(
  MR_Word parse_tree__parse_tree_out_pred_decl__Lang_7,
  MR_Word parse_tree__parse_tree_out_pred_decl__VarSet_8,
  MR_Word parse_tree__parse_tree_out_pred_decl__PredName_9,
  MR_Word parse_tree__parse_tree_out_pred_decl__Modes_10,
  MR_Word parse_tree__parse_tree_out_pred_decl__MaybeDet_11)
{
  {
    MR_bool parse_tree__parse_tree_out_pred_decl__succeeded;
    MR_String parse_tree__parse_tree_out_pred_decl__String_12;
    MR_Word parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_15 = (MR_Word) &parse_tree__parse_tree_out_pred_decl_scalar_common_1[1];
    MR_String parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_32_39;

    if ((parse_tree__parse_tree_out_pred_decl__Modes_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Box parse_tree__parse_tree_out_pred_decl__conv0_STATE_VARIABLE_U_32_39;

        {
          parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_3_p_0(parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_15, parse_tree__parse_tree_out_pred_decl__PredName_9, ((MR_Box) ((MR_String) "")), &parse_tree__parse_tree_out_pred_decl__conv0_STATE_VARIABLE_U_32_39);
        }
        parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_32_39 = ((MR_String) parse_tree__parse_tree_out_pred_decl__conv0_STATE_VARIABLE_U_32_39);
      }
    else
      {
        MR_String parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_22_29;
        MR_String parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_24_31;
        MR_String parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_25_32;
        MR_Box parse_tree__parse_tree_out_pred_decl__conv1_STATE_VARIABLE_U_22_29;
        void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box parse_tree__parse_tree_out_pred_decl__conv3_STATE_VARIABLE_U_24_31;
        MR_Box parse_tree__parse_tree_out_pred_decl__conv4_STATE_VARIABLE_U_25_32;
        void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_5)(MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box parse_tree__parse_tree_out_pred_decl__conv6_STATE_VARIABLE_U_32_39;

        {
          parse_tree__mercury_to_mercury__mercury_format_sym_name_3_p_0(parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_15, parse_tree__parse_tree_out_pred_decl__PredName_9, ((MR_Box) ((MR_String) "")), &parse_tree__parse_tree_out_pred_decl__conv1_STATE_VARIABLE_U_22_29);
        }
        parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_22_29 = ((MR_String) parse_tree__parse_tree_out_pred_decl__conv1_STATE_VARIABLE_U_22_29);
        parse_tree__parse_tree_out_pred_decl__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_15, (MR_Integer) 0)), (MR_Integer) 5)));
        {
          parse_tree__parse_tree_out_pred_decl__func_2(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_15), ((MR_Box) ((MR_String) "(")), ((MR_Box) (parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_22_29)), &parse_tree__parse_tree_out_pred_decl__conv3_STATE_VARIABLE_U_24_31);
        }
        parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_24_31 = ((MR_String) parse_tree__parse_tree_out_pred_decl__conv3_STATE_VARIABLE_U_24_31);
        {
          parse_tree__parse_tree_out_inst__mercury_format_mode_list_5_p_0(parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_15, parse_tree__parse_tree_out_pred_decl__Lang_7, parse_tree__parse_tree_out_pred_decl__VarSet_8, parse_tree__parse_tree_out_pred_decl__Modes_10, ((MR_Box) (parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_24_31)), &parse_tree__parse_tree_out_pred_decl__conv4_STATE_VARIABLE_U_25_32);
        }
        parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_25_32 = ((MR_String) parse_tree__parse_tree_out_pred_decl__conv4_STATE_VARIABLE_U_25_32);
        parse_tree__parse_tree_out_pred_decl__func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_15, (MR_Integer) 0)), (MR_Integer) 5)));
        {
          parse_tree__parse_tree_out_pred_decl__func_5(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_15), ((MR_Box) ((MR_String) ")")), ((MR_Box) (parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_25_32)), &parse_tree__parse_tree_out_pred_decl__conv6_STATE_VARIABLE_U_32_39);
        }
        parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_32_39 = ((MR_String) parse_tree__parse_tree_out_pred_decl__conv6_STATE_VARIABLE_U_32_39);
      }
    if ((parse_tree__parse_tree_out_pred_decl__MaybeDet_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      parse_tree__parse_tree_out_pred_decl__String_12 = parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_32_39;
    else
      {
        MR_Word parse_tree__parse_tree_out_pred_decl__Det_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pred_decl__MaybeDet_11, (MR_Integer) 0)));
        MR_String parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_10_47;
        MR_String parse_tree__parse_tree_out_pred_decl__Var_48;
        void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_7)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_15, (MR_Integer) 0)), (MR_Integer) 5)));
        MR_Box parse_tree__parse_tree_out_pred_decl__conv8_STATE_VARIABLE_U_10_47;
        void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_9)(MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box parse_tree__parse_tree_out_pred_decl__conv10_String_12;

        {
          parse_tree__parse_tree_out_pred_decl__func_7(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_15), ((MR_Box) ((MR_String) " is ")), ((MR_Box) (parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_32_39)), &parse_tree__parse_tree_out_pred_decl__conv8_STATE_VARIABLE_U_10_47);
        }
        parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_10_47 = ((MR_String) parse_tree__parse_tree_out_pred_decl__conv8_STATE_VARIABLE_U_10_47);
        {
          parse_tree__parse_tree_out_pred_decl__Var_48 = parse_tree__mercury_to_mercury__mercury_det_to_string_1_f_0(parse_tree__parse_tree_out_pred_decl__Det_45);
        }
        parse_tree__parse_tree_out_pred_decl__func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_15, (MR_Integer) 0)), (MR_Integer) 5)));
        {
          parse_tree__parse_tree_out_pred_decl__func_9(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_15), ((MR_Box) (parse_tree__parse_tree_out_pred_decl__Var_48)), ((MR_Box) (parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_10_47)), &parse_tree__parse_tree_out_pred_decl__conv10_String_12);
        }
        parse_tree__parse_tree_out_pred_decl__String_12 = ((MR_String) parse_tree__parse_tree_out_pred_decl__conv10_String_12);
      }
    return parse_tree__parse_tree_out_pred_decl__String_12;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_output_pred_mode_subdecl_7_p_0(
  MR_Word parse_tree__parse_tree_out_pred_decl__Lang_8,
  MR_Word parse_tree__parse_tree_out_pred_decl__VarSet_9,
  MR_Word parse_tree__parse_tree_out_pred_decl__PredName_10,
  MR_Word parse_tree__parse_tree_out_pred_decl__Modes_11,
  MR_Word parse_tree__parse_tree_out_pred_decl__MaybeDet_12)
{
  {
    MR_bool parse_tree__parse_tree_out_pred_decl__succeeded;
    MR_Word parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_18 = (MR_Word) &parse_tree__parse_tree_out_pred_decl_scalar_common_1[0];

    if ((parse_tree__parse_tree_out_pred_decl__Modes_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Box parse_tree__parse_tree_out_pred_decl__conv0_STATE_VARIABLE_U_32_42;

        {
          parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_3_p_0(parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_18, parse_tree__parse_tree_out_pred_decl__PredName_10, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pred_decl__conv0_STATE_VARIABLE_U_32_42);
        }
      }
    else
      {
        MR_Box parse_tree__parse_tree_out_pred_decl__conv1_STATE_VARIABLE_U_22_32;
        void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box parse_tree__parse_tree_out_pred_decl__conv3_STATE_VARIABLE_U_24_34;
        MR_Box parse_tree__parse_tree_out_pred_decl__conv4_STATE_VARIABLE_U_25_35;
        void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_5)(MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box parse_tree__parse_tree_out_pred_decl__conv6_STATE_VARIABLE_U_32_42;

        {
          parse_tree__mercury_to_mercury__mercury_format_sym_name_3_p_0(parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_18, parse_tree__parse_tree_out_pred_decl__PredName_10, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pred_decl__conv1_STATE_VARIABLE_U_22_32);
        }
        parse_tree__parse_tree_out_pred_decl__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_18, (MR_Integer) 0)), (MR_Integer) 5)));
        {
          parse_tree__parse_tree_out_pred_decl__func_2(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_18), ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pred_decl__conv3_STATE_VARIABLE_U_24_34);
        }
        {
          parse_tree__parse_tree_out_inst__mercury_format_mode_list_5_p_0(parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_18, parse_tree__parse_tree_out_pred_decl__Lang_8, parse_tree__parse_tree_out_pred_decl__VarSet_9, parse_tree__parse_tree_out_pred_decl__Modes_11, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pred_decl__conv4_STATE_VARIABLE_U_25_35);
        }
        parse_tree__parse_tree_out_pred_decl__func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_18, (MR_Integer) 0)), (MR_Integer) 5)));
        {
          parse_tree__parse_tree_out_pred_decl__func_5(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_18), ((MR_Box) ((MR_String) ")")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pred_decl__conv6_STATE_VARIABLE_U_32_42);
        }
      }
    if ((parse_tree__parse_tree_out_pred_decl__MaybeDet_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        MR_Word parse_tree__parse_tree_out_pred_decl__Det_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pred_decl__MaybeDet_12, (MR_Integer) 0)));
        MR_String parse_tree__parse_tree_out_pred_decl__Var_51;
        void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_7)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_18, (MR_Integer) 0)), (MR_Integer) 5)));
        MR_Box parse_tree__parse_tree_out_pred_decl__conv8_STATE_VARIABLE_U_10_50;
        void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_9)(MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box parse_tree__parse_tree_out_pred_decl__conv10_STATE_VARIABLE_IO_15;

        {
          parse_tree__parse_tree_out_pred_decl__func_7(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_18), ((MR_Box) ((MR_String) " is ")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pred_decl__conv8_STATE_VARIABLE_U_10_50);
        }
        {
          parse_tree__parse_tree_out_pred_decl__Var_51 = parse_tree__mercury_to_mercury__mercury_det_to_string_1_f_0(parse_tree__parse_tree_out_pred_decl__Det_48);
        }
        parse_tree__parse_tree_out_pred_decl__func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_18, (MR_Integer) 0)), (MR_Integer) 5)));
        {
          parse_tree__parse_tree_out_pred_decl__func_9(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_18), ((MR_Box) (parse_tree__parse_tree_out_pred_decl__Var_51)), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pred_decl__conv10_STATE_VARIABLE_IO_15);
        }
      }
  }
}

MR_String MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_mode_subdecl_to_string_6_f_0(
  MR_Word parse_tree__parse_tree_out_pred_decl__Lang_8,
  MR_Word parse_tree__parse_tree_out_pred_decl__PredOrFunc_9,
  MR_Word parse_tree__parse_tree_out_pred_decl__InstVarSet_10,
  MR_Word parse_tree__parse_tree_out_pred_decl__Name_11,
  MR_Word parse_tree__parse_tree_out_pred_decl__Modes_12,
  MR_Word parse_tree__parse_tree_out_pred_decl__MaybeDet_13)
{
  {
    MR_bool parse_tree__parse_tree_out_pred_decl__succeeded;
    MR_String parse_tree__parse_tree_out_pred_decl__String_14;
    MR_Box parse_tree__parse_tree_out_pred_decl__conv0_String_14;

    {
      parse_tree__parse_tree_out_pred_decl__mercury_format_mode_subdecl_8_p_0((MR_Word) &parse_tree__parse_tree_out_pred_decl_scalar_common_1[1], parse_tree__parse_tree_out_pred_decl__Lang_8, parse_tree__parse_tree_out_pred_decl__PredOrFunc_9, parse_tree__parse_tree_out_pred_decl__InstVarSet_10, parse_tree__parse_tree_out_pred_decl__Name_11, parse_tree__parse_tree_out_pred_decl__Modes_12, parse_tree__parse_tree_out_pred_decl__MaybeDet_13, ((MR_Box) ((MR_String) "")), &parse_tree__parse_tree_out_pred_decl__conv0_String_14);
    }
    parse_tree__parse_tree_out_pred_decl__String_14 = ((MR_String) parse_tree__parse_tree_out_pred_decl__conv0_String_14);
    return parse_tree__parse_tree_out_pred_decl__String_14;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_output_mode_subdecl_8_p_0(
  MR_Word parse_tree__parse_tree_out_pred_decl__Lang_9,
  MR_Word parse_tree__parse_tree_out_pred_decl__PredOrFunc_10,
  MR_Word parse_tree__parse_tree_out_pred_decl__InstVarSet_11,
  MR_Word parse_tree__parse_tree_out_pred_decl__Name_12,
  MR_Word parse_tree__parse_tree_out_pred_decl__Modes_13,
  MR_Word parse_tree__parse_tree_out_pred_decl__MaybeDet_14)
{
  {
    MR_bool parse_tree__parse_tree_out_pred_decl__succeeded;
    MR_Box parse_tree__parse_tree_out_pred_decl__conv0_STATE_VARIABLE_IO_17;

    {
      parse_tree__parse_tree_out_pred_decl__mercury_format_mode_subdecl_8_p_0((MR_Word) &parse_tree__parse_tree_out_pred_decl_scalar_common_1[0], parse_tree__parse_tree_out_pred_decl__Lang_9, parse_tree__parse_tree_out_pred_decl__PredOrFunc_10, parse_tree__parse_tree_out_pred_decl__InstVarSet_11, parse_tree__parse_tree_out_pred_decl__Name_12, parse_tree__parse_tree_out_pred_decl__Modes_13, parse_tree__parse_tree_out_pred_decl__MaybeDet_14, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pred_decl__conv0_STATE_VARIABLE_IO_17);
    }
  }
}

void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_format_func_mode_decl_10_p_0(
  MR_Word parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_27,
  MR_Word parse_tree__parse_tree_out_pred_decl__Lang_11,
  MR_Word parse_tree__parse_tree_out_pred_decl__VarSet_12,
  MR_Word parse_tree__parse_tree_out_pred_decl__FuncName_13,
  MR_Word parse_tree__parse_tree_out_pred_decl__Modes_14,
  MR_Word parse_tree__parse_tree_out_pred_decl__RetMode_15,
  MR_Word parse_tree__parse_tree_out_pred_decl__MaybeDet_16,
  MR_String parse_tree__parse_tree_out_pred_decl__StartString_17,
  MR_String parse_tree__parse_tree_out_pred_decl__Separator_18,
  MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_0_20,
  MR_Box * parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_21)
{
  {
    MR_bool parse_tree__parse_tree_out_pred_decl__succeeded;
    MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_22_22;
    MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_24_24;
    MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_25_25;
    MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_26_45;
    MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_28_47;
    MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_29_48;
    void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_27, (MR_Integer) 0)), (MR_Integer) 5)));
    void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_4)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_7)(MR_Box, MR_Box, MR_Box, MR_Box *);

    {
      parse_tree__parse_tree_out_pred_decl__func_0(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_27), ((MR_Box) (parse_tree__parse_tree_out_pred_decl__StartString_17)), parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_0_20, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_22_22);
    }
    parse_tree__parse_tree_out_pred_decl__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_27, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      parse_tree__parse_tree_out_pred_decl__func_1(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_27), ((MR_Box) ((MR_String) "mode ")), parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_22_22, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_24_24);
    }
    if ((parse_tree__parse_tree_out_pred_decl__Modes_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_3_p_0(parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_27, parse_tree__parse_tree_out_pred_decl__FuncName_13, parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_24_24, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_26_45);
      }
    else
      {
        MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_21_40;
        MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_23_42;
        MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_24_43;
        void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_3)(MR_Box, MR_Box, MR_Box, MR_Box *);

        {
          parse_tree__mercury_to_mercury__mercury_format_sym_name_3_p_0(parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_27, parse_tree__parse_tree_out_pred_decl__FuncName_13, parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_24_24, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_21_40);
        }
        parse_tree__parse_tree_out_pred_decl__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_27, (MR_Integer) 0)), (MR_Integer) 5)));
        {
          parse_tree__parse_tree_out_pred_decl__func_2(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_27), ((MR_Box) ((MR_String) "(")), parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_21_40, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_23_42);
        }
        {
          parse_tree__parse_tree_out_inst__mercury_format_mode_list_5_p_0(parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_27, parse_tree__parse_tree_out_pred_decl__Lang_11, parse_tree__parse_tree_out_pred_decl__VarSet_12, parse_tree__parse_tree_out_pred_decl__Modes_14, parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_23_42, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_24_43);
        }
        parse_tree__parse_tree_out_pred_decl__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_27, (MR_Integer) 0)), (MR_Integer) 5)));
        {
          parse_tree__parse_tree_out_pred_decl__func_3(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_27), ((MR_Box) ((MR_String) ")")), parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_24_43, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_26_45);
        }
      }
    parse_tree__parse_tree_out_pred_decl__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_27, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      parse_tree__parse_tree_out_pred_decl__func_4(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_27), ((MR_Box) ((MR_String) " = ")), parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_26_45, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_28_47);
    }
    {
      parse_tree__parse_tree_out_inst__mercury_format_mode_5_p_0(parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_27, parse_tree__parse_tree_out_pred_decl__Lang_11, parse_tree__parse_tree_out_pred_decl__VarSet_12, parse_tree__parse_tree_out_pred_decl__RetMode_15, parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_28_47, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_29_48);
    }
    if ((parse_tree__parse_tree_out_pred_decl__MaybeDet_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_25_25 = parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_29_48;
    else
      {
        MR_Word parse_tree__parse_tree_out_pred_decl__Det_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pred_decl__MaybeDet_16, (MR_Integer) 0)));
        MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_10_56;
        MR_String parse_tree__parse_tree_out_pred_decl__Var_57;
        void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_5)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_27, (MR_Integer) 0)), (MR_Integer) 5)));
        void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_6)(MR_Box, MR_Box, MR_Box, MR_Box *);

        {
          parse_tree__parse_tree_out_pred_decl__func_5(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_27), ((MR_Box) ((MR_String) " is ")), parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_29_48, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_10_56);
        }
        {
          parse_tree__parse_tree_out_pred_decl__Var_57 = parse_tree__mercury_to_mercury__mercury_det_to_string_1_f_0(parse_tree__parse_tree_out_pred_decl__Det_54);
        }
        parse_tree__parse_tree_out_pred_decl__func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_27, (MR_Integer) 0)), (MR_Integer) 5)));
        {
          parse_tree__parse_tree_out_pred_decl__func_6(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_27), ((MR_Box) (parse_tree__parse_tree_out_pred_decl__Var_57)), parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_10_56, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_25_25);
        }
      }
    parse_tree__parse_tree_out_pred_decl__func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_27, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      parse_tree__parse_tree_out_pred_decl__func_7(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_27), ((MR_Box) (parse_tree__parse_tree_out_pred_decl__Separator_18)), parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_25_25, parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_21);
    }
  }
}

MR_String MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_func_mode_decl_to_string_6_f_0(
  MR_Word parse_tree__parse_tree_out_pred_decl__Lang_8,
  MR_Word parse_tree__parse_tree_out_pred_decl__VarSet_9,
  MR_Word parse_tree__parse_tree_out_pred_decl__FuncName_10,
  MR_Word parse_tree__parse_tree_out_pred_decl__Modes_11,
  MR_Word parse_tree__parse_tree_out_pred_decl__RetMode_12,
  MR_Word parse_tree__parse_tree_out_pred_decl__MaybeDet_13)
{
  {
    MR_bool parse_tree__parse_tree_out_pred_decl__succeeded;
    MR_String parse_tree__parse_tree_out_pred_decl__String_14;
    MR_Box parse_tree__parse_tree_out_pred_decl__conv0_String_14;

    {
      parse_tree__parse_tree_out_pred_decl__mercury_format_func_mode_decl_10_p_0((MR_Word) &parse_tree__parse_tree_out_pred_decl_scalar_common_1[1], parse_tree__parse_tree_out_pred_decl__Lang_8, parse_tree__parse_tree_out_pred_decl__VarSet_9, parse_tree__parse_tree_out_pred_decl__FuncName_10, parse_tree__parse_tree_out_pred_decl__Modes_11, parse_tree__parse_tree_out_pred_decl__RetMode_12, parse_tree__parse_tree_out_pred_decl__MaybeDet_13, (MR_String) ":- ", (MR_String) ".\n", ((MR_Box) ((MR_String) "")), &parse_tree__parse_tree_out_pred_decl__conv0_String_14);
    }
    parse_tree__parse_tree_out_pred_decl__String_14 = ((MR_String) parse_tree__parse_tree_out_pred_decl__conv0_String_14);
    return parse_tree__parse_tree_out_pred_decl__String_14;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_output_func_mode_decl_8_p_0(
  MR_Word parse_tree__parse_tree_out_pred_decl__Lang_9,
  MR_Word parse_tree__parse_tree_out_pred_decl__VarSet_10,
  MR_Word parse_tree__parse_tree_out_pred_decl__FuncName_11,
  MR_Word parse_tree__parse_tree_out_pred_decl__Modes_12,
  MR_Word parse_tree__parse_tree_out_pred_decl__RetMode_13,
  MR_Word parse_tree__parse_tree_out_pred_decl__MaybeDet_14)
{
  {
    MR_bool parse_tree__parse_tree_out_pred_decl__succeeded;
    MR_Box parse_tree__parse_tree_out_pred_decl__conv0_STATE_VARIABLE_IO_17;

    {
      parse_tree__parse_tree_out_pred_decl__mercury_format_func_mode_decl_10_p_0((MR_Word) &parse_tree__parse_tree_out_pred_decl_scalar_common_1[0], parse_tree__parse_tree_out_pred_decl__Lang_9, parse_tree__parse_tree_out_pred_decl__VarSet_10, parse_tree__parse_tree_out_pred_decl__FuncName_11, parse_tree__parse_tree_out_pred_decl__Modes_12, parse_tree__parse_tree_out_pred_decl__RetMode_13, parse_tree__parse_tree_out_pred_decl__MaybeDet_14, (MR_String) ":- ", (MR_String) ".\n", ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pred_decl__conv0_STATE_VARIABLE_IO_17);
    }
  }
}

void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_mode_decl_10_p_0(
  MR_Word parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_27,
  MR_Word parse_tree__parse_tree_out_pred_decl__Lang_11,
  MR_Word parse_tree__parse_tree_out_pred_decl__VarSet_12,
  MR_Word parse_tree__parse_tree_out_pred_decl__PredName_13,
  MR_Word parse_tree__parse_tree_out_pred_decl__Modes_14,
  MR_Word parse_tree__parse_tree_out_pred_decl__WithInst_15,
  MR_Word parse_tree__parse_tree_out_pred_decl__MaybeDet_16,
  MR_String parse_tree__parse_tree_out_pred_decl__StartString_17,
  MR_String parse_tree__parse_tree_out_pred_decl__Separator_18,
  MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_0_20,
  MR_Box * parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_21)
{
  {
    MR_bool parse_tree__parse_tree_out_pred_decl__succeeded;
    MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_22_22;
    MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_24_24;
    MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_25_25;
    MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_27_46;
    MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_32_51;
    void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_27, (MR_Integer) 0)), (MR_Integer) 5)));
    void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_8)(MR_Box, MR_Box, MR_Box, MR_Box *);

    {
      parse_tree__parse_tree_out_pred_decl__func_0(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_27), ((MR_Box) (parse_tree__parse_tree_out_pred_decl__StartString_17)), parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_0_20, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_22_22);
    }
    parse_tree__parse_tree_out_pred_decl__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_27, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      parse_tree__parse_tree_out_pred_decl__func_1(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_27), ((MR_Box) ((MR_String) "mode ")), parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_22_22, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_24_24);
    }
    if ((parse_tree__parse_tree_out_pred_decl__Modes_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_3_p_0(parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_27, parse_tree__parse_tree_out_pred_decl__PredName_13, parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_24_24, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_27_46);
      }
    else
      {
        MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_22_41;
        MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_24_43;
        MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_25_44;
        void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);
        void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_3)(MR_Box, MR_Box, MR_Box, MR_Box *);

        {
          parse_tree__mercury_to_mercury__mercury_format_sym_name_3_p_0(parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_27, parse_tree__parse_tree_out_pred_decl__PredName_13, parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_24_24, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_22_41);
        }
        parse_tree__parse_tree_out_pred_decl__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_27, (MR_Integer) 0)), (MR_Integer) 5)));
        {
          parse_tree__parse_tree_out_pred_decl__func_2(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_27), ((MR_Box) ((MR_String) "(")), parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_22_41, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_24_43);
        }
        {
          parse_tree__parse_tree_out_inst__mercury_format_mode_list_5_p_0(parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_27, parse_tree__parse_tree_out_pred_decl__Lang_11, parse_tree__parse_tree_out_pred_decl__VarSet_12, parse_tree__parse_tree_out_pred_decl__Modes_14, parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_24_43, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_25_44);
        }
        parse_tree__parse_tree_out_pred_decl__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_27, (MR_Integer) 0)), (MR_Integer) 5)));
        {
          parse_tree__parse_tree_out_pred_decl__func_3(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_27), ((MR_Box) ((MR_String) ")")), parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_25_44, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_27_46);
        }
      }
    if ((parse_tree__parse_tree_out_pred_decl__WithInst_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_32_51 = parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_27_46;
    else
      {
        MR_Word parse_tree__parse_tree_out_pred_decl__WithInst_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pred_decl__WithInst_15, (MR_Integer) 0)));
        MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_29_48;
        MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_30_49;
        void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_4)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_27, (MR_Integer) 0)), (MR_Integer) 5)));
        void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_5)(MR_Box, MR_Box, MR_Box, MR_Box *);

        {
          parse_tree__parse_tree_out_pred_decl__func_4(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_27), ((MR_Box) ((MR_String) " \140with_inst\140 (")), parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_27_46, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_29_48);
        }
        {
          parse_tree__parse_tree_out_inst__mercury_format_inst_5_p_0(parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_27, parse_tree__parse_tree_out_pred_decl__Lang_11, parse_tree__parse_tree_out_pred_decl__VarSet_12, parse_tree__parse_tree_out_pred_decl__WithInst_39, parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_29_48, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_30_49);
        }
        parse_tree__parse_tree_out_pred_decl__func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_27, (MR_Integer) 0)), (MR_Integer) 5)));
        {
          parse_tree__parse_tree_out_pred_decl__func_5(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_27), ((MR_Box) ((MR_String) ")")), parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_30_49, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_32_51);
        }
      }
    if ((parse_tree__parse_tree_out_pred_decl__MaybeDet_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_25_25 = parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_32_51;
    else
      {
        MR_Word parse_tree__parse_tree_out_pred_decl__Det_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pred_decl__MaybeDet_16, (MR_Integer) 0)));
        MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_10_59;
        MR_String parse_tree__parse_tree_out_pred_decl__Var_60;
        void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_6)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_27, (MR_Integer) 0)), (MR_Integer) 5)));
        void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_7)(MR_Box, MR_Box, MR_Box, MR_Box *);

        {
          parse_tree__parse_tree_out_pred_decl__func_6(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_27), ((MR_Box) ((MR_String) " is ")), parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_32_51, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_10_59);
        }
        {
          parse_tree__parse_tree_out_pred_decl__Var_60 = parse_tree__mercury_to_mercury__mercury_det_to_string_1_f_0(parse_tree__parse_tree_out_pred_decl__Det_57);
        }
        parse_tree__parse_tree_out_pred_decl__func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_27, (MR_Integer) 0)), (MR_Integer) 5)));
        {
          parse_tree__parse_tree_out_pred_decl__func_7(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_27), ((MR_Box) (parse_tree__parse_tree_out_pred_decl__Var_60)), parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_10_59, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_25_25);
        }
      }
    parse_tree__parse_tree_out_pred_decl__func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_27, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      parse_tree__parse_tree_out_pred_decl__func_8(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_27), ((MR_Box) (parse_tree__parse_tree_out_pred_decl__Separator_18)), parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_25_25, parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_21);
    }
  }
}

MR_String MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_pred_mode_decl_to_string_6_f_0(
  MR_Word parse_tree__parse_tree_out_pred_decl__Lang_8,
  MR_Word parse_tree__parse_tree_out_pred_decl__VarSet_9,
  MR_Word parse_tree__parse_tree_out_pred_decl__PredName_10,
  MR_Word parse_tree__parse_tree_out_pred_decl__Modes_11,
  MR_Word parse_tree__parse_tree_out_pred_decl__MaybeWithInst_12,
  MR_Word parse_tree__parse_tree_out_pred_decl__MaybeDet_13)
{
  {
    MR_bool parse_tree__parse_tree_out_pred_decl__succeeded;
    MR_String parse_tree__parse_tree_out_pred_decl__String_14;
    MR_Box parse_tree__parse_tree_out_pred_decl__conv0_String_14;

    {
      parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_mode_decl_10_p_0((MR_Word) &parse_tree__parse_tree_out_pred_decl_scalar_common_1[1], parse_tree__parse_tree_out_pred_decl__Lang_8, parse_tree__parse_tree_out_pred_decl__VarSet_9, parse_tree__parse_tree_out_pred_decl__PredName_10, parse_tree__parse_tree_out_pred_decl__Modes_11, parse_tree__parse_tree_out_pred_decl__MaybeWithInst_12, parse_tree__parse_tree_out_pred_decl__MaybeDet_13, (MR_String) ":- ", (MR_String) ".\n", ((MR_Box) ((MR_String) "")), &parse_tree__parse_tree_out_pred_decl__conv0_String_14);
    }
    parse_tree__parse_tree_out_pred_decl__String_14 = ((MR_String) parse_tree__parse_tree_out_pred_decl__conv0_String_14);
    return parse_tree__parse_tree_out_pred_decl__String_14;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_output_pred_mode_decl_8_p_0(
  MR_Word parse_tree__parse_tree_out_pred_decl__Lang_9,
  MR_Word parse_tree__parse_tree_out_pred_decl__VarSet_10,
  MR_Word parse_tree__parse_tree_out_pred_decl__PredName_11,
  MR_Word parse_tree__parse_tree_out_pred_decl__Modes_12,
  MR_Word parse_tree__parse_tree_out_pred_decl__WithInst_13,
  MR_Word parse_tree__parse_tree_out_pred_decl__MaybeDet_14)
{
  {
    MR_bool parse_tree__parse_tree_out_pred_decl__succeeded;
    MR_Box parse_tree__parse_tree_out_pred_decl__conv0_STATE_VARIABLE_IO_17;

    {
      parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_mode_decl_10_p_0((MR_Word) &parse_tree__parse_tree_out_pred_decl_scalar_common_1[0], parse_tree__parse_tree_out_pred_decl__Lang_9, parse_tree__parse_tree_out_pred_decl__VarSet_10, parse_tree__parse_tree_out_pred_decl__PredName_11, parse_tree__parse_tree_out_pred_decl__Modes_12, parse_tree__parse_tree_out_pred_decl__WithInst_13, parse_tree__parse_tree_out_pred_decl__MaybeDet_14, (MR_String) ":- ", (MR_String) ".\n", ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pred_decl__conv0_STATE_VARIABLE_IO_17);
    }
  }
}

MR_String MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_func_type_to_string_9_f_0(
  MR_Word parse_tree__parse_tree_out_pred_decl__TypeVarSet_11,
  MR_Word parse_tree__parse_tree_out_pred_decl__VarNamePrint_12,
  MR_Word parse_tree__parse_tree_out_pred_decl__ExistQVars_13,
  MR_Word parse_tree__parse_tree_out_pred_decl__FuncName_14,
  MR_Word parse_tree__parse_tree_out_pred_decl__Types_15,
  MR_Word parse_tree__parse_tree_out_pred_decl__RetType_16,
  MR_Word parse_tree__parse_tree_out_pred_decl__MaybeDet_17,
  MR_Word parse_tree__parse_tree_out_pred_decl__Purity_18,
  MR_Word parse_tree__parse_tree_out_pred_decl__ClassContext_19)
{
  {
    MR_bool parse_tree__parse_tree_out_pred_decl__succeeded;
    MR_String parse_tree__parse_tree_out_pred_decl__String_20;
    MR_Box parse_tree__parse_tree_out_pred_decl__conv0_String_20;

    {
      parse_tree__parse_tree_out_pred_decl__mercury_format_func_type_2_13_p_0((MR_Word) &parse_tree__parse_tree_out_pred_decl_scalar_common_1[1], parse_tree__parse_tree_out_pred_decl__TypeVarSet_11, parse_tree__parse_tree_out_pred_decl__VarNamePrint_12, parse_tree__parse_tree_out_pred_decl__ExistQVars_13, parse_tree__parse_tree_out_pred_decl__FuncName_14, parse_tree__parse_tree_out_pred_decl__Types_15, parse_tree__parse_tree_out_pred_decl__RetType_16, parse_tree__parse_tree_out_pred_decl__MaybeDet_17, parse_tree__parse_tree_out_pred_decl__Purity_18, parse_tree__parse_tree_out_pred_decl__ClassContext_19, (MR_String) ":- ", (MR_String) ".\n", ((MR_Box) ((MR_String) "")), &parse_tree__parse_tree_out_pred_decl__conv0_String_20);
    }
    parse_tree__parse_tree_out_pred_decl__String_20 = ((MR_String) parse_tree__parse_tree_out_pred_decl__conv0_String_20);
    return parse_tree__parse_tree_out_pred_decl__String_20;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_output_func_type_11_p_0(
  MR_Word parse_tree__parse_tree_out_pred_decl__VarSet_12,
  MR_Word parse_tree__parse_tree_out_pred_decl__ExistQVars_13,
  MR_Word parse_tree__parse_tree_out_pred_decl__FuncName_14,
  MR_Word parse_tree__parse_tree_out_pred_decl__Types_15,
  MR_Word parse_tree__parse_tree_out_pred_decl__RetType_16,
  MR_Word parse_tree__parse_tree_out_pred_decl__MaybeDet_17,
  MR_Word parse_tree__parse_tree_out_pred_decl__Purity_18,
  MR_Word parse_tree__parse_tree_out_pred_decl__ClassContext_19,
  MR_Word parse_tree__parse_tree_out_pred_decl__VarNamePrint_20)
{
  {
    MR_bool parse_tree__parse_tree_out_pred_decl__succeeded;
    MR_Box parse_tree__parse_tree_out_pred_decl__conv0_STATE_VARIABLE_IO_23;

    {
      parse_tree__parse_tree_out_pred_decl__mercury_format_func_type_2_13_p_0((MR_Word) &parse_tree__parse_tree_out_pred_decl_scalar_common_1[0], parse_tree__parse_tree_out_pred_decl__VarSet_12, parse_tree__parse_tree_out_pred_decl__ExistQVars_13, parse_tree__parse_tree_out_pred_decl__FuncName_14, parse_tree__parse_tree_out_pred_decl__Types_15, parse_tree__parse_tree_out_pred_decl__RetType_16, parse_tree__parse_tree_out_pred_decl__MaybeDet_17, parse_tree__parse_tree_out_pred_decl__Purity_18, parse_tree__parse_tree_out_pred_decl__ClassContext_19, parse_tree__parse_tree_out_pred_decl__VarNamePrint_20, (MR_String) ":- ", (MR_String) ".\n", ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pred_decl__conv0_STATE_VARIABLE_IO_23);
    }
  }
}

MR_String MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_pred_type_to_string_8_f_0(
  MR_Word parse_tree__parse_tree_out_pred_decl__TypeVarSet_10,
  MR_Word parse_tree__parse_tree_out_pred_decl__VarNamePrint_11,
  MR_Word parse_tree__parse_tree_out_pred_decl__ExistQVars_12,
  MR_Word parse_tree__parse_tree_out_pred_decl__PredName_13,
  MR_Word parse_tree__parse_tree_out_pred_decl__Types_14,
  MR_Word parse_tree__parse_tree_out_pred_decl__MaybeDet_15,
  MR_Word parse_tree__parse_tree_out_pred_decl__Purity_16,
  MR_Word parse_tree__parse_tree_out_pred_decl__ClassContext_17)
{
  {
    MR_bool parse_tree__parse_tree_out_pred_decl__succeeded;
    MR_String parse_tree__parse_tree_out_pred_decl__String_18;
    MR_Box parse_tree__parse_tree_out_pred_decl__conv0_String_18;

    {
      parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_type_2_14_p_0((MR_Word) &parse_tree__parse_tree_out_pred_decl_scalar_common_1[1], parse_tree__parse_tree_out_pred_decl__TypeVarSet_10, parse_tree__parse_tree_out_pred_decl__VarNamePrint_11, (MR_Integer) 0, parse_tree__parse_tree_out_pred_decl__ExistQVars_12, parse_tree__parse_tree_out_pred_decl__PredName_13, parse_tree__parse_tree_out_pred_decl__Types_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__parse_tree_out_pred_decl__MaybeDet_15, parse_tree__parse_tree_out_pred_decl__Purity_16, parse_tree__parse_tree_out_pred_decl__ClassContext_17, (MR_String) ":- ", (MR_String) ".\n", ((MR_Box) ((MR_String) "")), &parse_tree__parse_tree_out_pred_decl__conv0_String_18);
    }
    parse_tree__parse_tree_out_pred_decl__String_18 = ((MR_String) parse_tree__parse_tree_out_pred_decl__conv0_String_18);
    return parse_tree__parse_tree_out_pred_decl__String_18;
  }
}

void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_output_pred_type_10_p_0(
  MR_Word parse_tree__parse_tree_out_pred_decl__TypeVarSet_11,
  MR_Word parse_tree__parse_tree_out_pred_decl__VarNamePrint_12,
  MR_Word parse_tree__parse_tree_out_pred_decl__ExistQVars_13,
  MR_Word parse_tree__parse_tree_out_pred_decl__PredName_14,
  MR_Word parse_tree__parse_tree_out_pred_decl__Types_15,
  MR_Word parse_tree__parse_tree_out_pred_decl__MaybeDet_16,
  MR_Word parse_tree__parse_tree_out_pred_decl__Purity_17,
  MR_Word parse_tree__parse_tree_out_pred_decl__ClassContext_18)
{
  {
    MR_bool parse_tree__parse_tree_out_pred_decl__succeeded;
    MR_Box parse_tree__parse_tree_out_pred_decl__conv0_STATE_VARIABLE_IO_21;

    {
      parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_type_2_14_p_0((MR_Word) &parse_tree__parse_tree_out_pred_decl_scalar_common_1[0], parse_tree__parse_tree_out_pred_decl__TypeVarSet_11, parse_tree__parse_tree_out_pred_decl__VarNamePrint_12, (MR_Integer) 0, parse_tree__parse_tree_out_pred_decl__ExistQVars_13, parse_tree__parse_tree_out_pred_decl__PredName_14, parse_tree__parse_tree_out_pred_decl__Types_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__parse_tree_out_pred_decl__MaybeDet_16, parse_tree__parse_tree_out_pred_decl__Purity_17, parse_tree__parse_tree_out_pred_decl__ClassContext_18, (MR_String) ":- ", (MR_String) ".\n", ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pred_decl__conv0_STATE_VARIABLE_IO_21);
    }
  }
}

void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_format_func_decl_15_p_0(
  MR_Word parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_44,
  MR_Word parse_tree__parse_tree_out_pred_decl__Lang_16,
  MR_Word parse_tree__parse_tree_out_pred_decl__TypeVarSet_17,
  MR_Word parse_tree__parse_tree_out_pred_decl__InstVarSet_18,
  MR_Word parse_tree__parse_tree_out_pred_decl__ExistQVars_19,
  MR_Word parse_tree__parse_tree_out_pred_decl__FuncName_20,
  MR_Word parse_tree__parse_tree_out_pred_decl__TypesAndModes_21,
  MR_Word parse_tree__parse_tree_out_pred_decl__RetTypeAndMode_22,
  MR_Word parse_tree__parse_tree_out_pred_decl__MaybeDet_23,
  MR_Word parse_tree__parse_tree_out_pred_decl__Purity_24,
  MR_Word parse_tree__parse_tree_out_pred_decl__ClassContext_25,
  MR_String parse_tree__parse_tree_out_pred_decl__StartString_26,
  MR_String parse_tree__parse_tree_out_pred_decl__Separator_27,
  MR_String parse_tree__parse_tree_out_pred_decl__Terminator_28,
  MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_0_36,
  MR_Box * parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_37)
{
  {
    MR_bool parse_tree__parse_tree_out_pred_decl__succeeded;
    MR_Word parse_tree__parse_tree_out_pred_decl__Types_30;
    MR_Word parse_tree__parse_tree_out_pred_decl__MaybeModes_31;
    MR_Word parse_tree__parse_tree_out_pred_decl__RetType_32;
    MR_Word parse_tree__parse_tree_out_pred_decl__MaybeRetMode_33;
    MR_Word parse_tree__parse_tree_out_pred_decl__Modes_34;
    MR_Word parse_tree__parse_tree_out_pred_decl__RetMode_35;

    {
      parse_tree__prog_util__split_types_and_modes_3_p_0(parse_tree__parse_tree_out_pred_decl__TypesAndModes_21, &parse_tree__parse_tree_out_pred_decl__Types_30, &parse_tree__parse_tree_out_pred_decl__MaybeModes_31);
    }
    {
      parse_tree__prog_util__split_type_and_mode_3_p_0(parse_tree__parse_tree_out_pred_decl__RetTypeAndMode_22, &parse_tree__parse_tree_out_pred_decl__RetType_32, &parse_tree__parse_tree_out_pred_decl__MaybeRetMode_33);
    }
    parse_tree__parse_tree_out_pred_decl__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_pred_decl__MaybeModes_31)) == (MR_mktag((MR_Integer) 1)));
    if (parse_tree__parse_tree_out_pred_decl__succeeded)
      {
        parse_tree__parse_tree_out_pred_decl__Modes_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pred_decl__MaybeModes_31, (MR_Integer) 0)));
        parse_tree__parse_tree_out_pred_decl__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_pred_decl__MaybeRetMode_33)) == (MR_mktag((MR_Integer) 1)));
        if (parse_tree__parse_tree_out_pred_decl__succeeded)
          parse_tree__parse_tree_out_pred_decl__RetMode_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pred_decl__MaybeRetMode_33, (MR_Integer) 0)));
      }
    if (parse_tree__parse_tree_out_pred_decl__succeeded)
      {
        MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_40_40;

        {
          parse_tree__parse_tree_out_pred_decl__mercury_format_func_type_2_13_p_0(parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_44, parse_tree__parse_tree_out_pred_decl__TypeVarSet_17, (MR_Integer) 0, parse_tree__parse_tree_out_pred_decl__ExistQVars_19, parse_tree__parse_tree_out_pred_decl__FuncName_20, parse_tree__parse_tree_out_pred_decl__Types_30, parse_tree__parse_tree_out_pred_decl__RetType_32, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__parse_tree_out_pred_decl__Purity_24, parse_tree__parse_tree_out_pred_decl__ClassContext_25, parse_tree__parse_tree_out_pred_decl__StartString_26, parse_tree__parse_tree_out_pred_decl__Separator_27, parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_0_36, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_40_40);
        }
        {
          parse_tree__parse_tree_out_pred_decl__mercury_format_func_mode_decl_10_p_0(parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_44, parse_tree__parse_tree_out_pred_decl__Lang_16, parse_tree__parse_tree_out_pred_decl__InstVarSet_18, parse_tree__parse_tree_out_pred_decl__FuncName_20, parse_tree__parse_tree_out_pred_decl__Modes_34, parse_tree__parse_tree_out_pred_decl__RetMode_35, parse_tree__parse_tree_out_pred_decl__MaybeDet_23, parse_tree__parse_tree_out_pred_decl__StartString_26, parse_tree__parse_tree_out_pred_decl__Terminator_28, parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_40_40, parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_37);
        }
      }
    else
      {
        {
          parse_tree__parse_tree_out_pred_decl__mercury_format_func_type_2_13_p_0(parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_44, parse_tree__parse_tree_out_pred_decl__TypeVarSet_17, (MR_Integer) 0, parse_tree__parse_tree_out_pred_decl__ExistQVars_19, parse_tree__parse_tree_out_pred_decl__FuncName_20, parse_tree__parse_tree_out_pred_decl__Types_30, parse_tree__parse_tree_out_pred_decl__RetType_32, parse_tree__parse_tree_out_pred_decl__MaybeDet_23, parse_tree__parse_tree_out_pred_decl__Purity_24, parse_tree__parse_tree_out_pred_decl__ClassContext_25, parse_tree__parse_tree_out_pred_decl__StartString_26, parse_tree__parse_tree_out_pred_decl__Terminator_28, parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_0_36, parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_37);
        }
      }
  }
}

void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_decl_17_p_0(
  MR_Word parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_48,
  MR_Word parse_tree__parse_tree_out_pred_decl__Lang_18,
  MR_Word parse_tree__parse_tree_out_pred_decl__TypeVarSet_19,
  MR_Word parse_tree__parse_tree_out_pred_decl__InstVarSet_20,
  MR_Word parse_tree__parse_tree_out_pred_decl__PredOrFunc_21,
  MR_Word parse_tree__parse_tree_out_pred_decl__ExistQVars_22,
  MR_Word parse_tree__parse_tree_out_pred_decl__PredName_23,
  MR_Word parse_tree__parse_tree_out_pred_decl__TypesAndModes_24,
  MR_Word parse_tree__parse_tree_out_pred_decl__WithType_25,
  MR_Word parse_tree__parse_tree_out_pred_decl__WithInst_26,
  MR_Word parse_tree__parse_tree_out_pred_decl__MaybeDet_27,
  MR_Word parse_tree__parse_tree_out_pred_decl__Purity_28,
  MR_Word parse_tree__parse_tree_out_pred_decl__ClassContext_29,
  MR_String parse_tree__parse_tree_out_pred_decl__StartString_30,
  MR_String parse_tree__parse_tree_out_pred_decl__Separator_31,
  MR_String parse_tree__parse_tree_out_pred_decl__Terminator_32,
  MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_IO_0_40,
  MR_Box * parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_IO_41)
{
  {
    MR_bool parse_tree__parse_tree_out_pred_decl__succeeded;
    MR_Word parse_tree__parse_tree_out_pred_decl__Types_34;
    MR_Word parse_tree__parse_tree_out_pred_decl__MaybeModes_35;
    MR_Word parse_tree__parse_tree_out_pred_decl__Modes_36;

    {
      parse_tree__prog_util__split_types_and_modes_3_p_0(parse_tree__parse_tree_out_pred_decl__TypesAndModes_24, &parse_tree__parse_tree_out_pred_decl__Types_34, &parse_tree__parse_tree_out_pred_decl__MaybeModes_35);
    }
    parse_tree__parse_tree_out_pred_decl__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_pred_decl__MaybeModes_35)) == (MR_mktag((MR_Integer) 1)));
    if (parse_tree__parse_tree_out_pred_decl__succeeded)
      {
        parse_tree__parse_tree_out_pred_decl__Modes_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pred_decl__MaybeModes_35, (MR_Integer) 0)));
        {
          MR_Word parse_tree__parse_tree_out_pred_decl__Var_37;
          MR_Word parse_tree__parse_tree_out_pred_decl__Var_38;

          parse_tree__parse_tree_out_pred_decl__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_pred_decl__Modes_36)) == (MR_mktag((MR_Integer) 1)));
          if (parse_tree__parse_tree_out_pred_decl__succeeded)
            {
              parse_tree__parse_tree_out_pred_decl__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pred_decl__Modes_36, (MR_Integer) 0)));
              parse_tree__parse_tree_out_pred_decl__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pred_decl__Modes_36, (MR_Integer) 1)));
            }
        }
        if (!(parse_tree__parse_tree_out_pred_decl__succeeded))
          {
            MR_Word parse_tree__parse_tree_out_pred_decl__Var_39;

            parse_tree__parse_tree_out_pred_decl__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_pred_decl__WithInst_26)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__parse_tree_out_pred_decl__succeeded)
              parse_tree__parse_tree_out_pred_decl__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pred_decl__WithInst_26, (MR_Integer) 0)));
          }
      }
    if (parse_tree__parse_tree_out_pred_decl__succeeded)
      {
        MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_IO_44_44;

        {
          parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_type_2_14_p_0(parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_48, parse_tree__parse_tree_out_pred_decl__TypeVarSet_19, (MR_Integer) 0, parse_tree__parse_tree_out_pred_decl__PredOrFunc_21, parse_tree__parse_tree_out_pred_decl__ExistQVars_22, parse_tree__parse_tree_out_pred_decl__PredName_23, parse_tree__parse_tree_out_pred_decl__Types_34, parse_tree__parse_tree_out_pred_decl__WithType_25, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__parse_tree_out_pred_decl__Purity_28, parse_tree__parse_tree_out_pred_decl__ClassContext_29, parse_tree__parse_tree_out_pred_decl__StartString_30, parse_tree__parse_tree_out_pred_decl__Separator_31, parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_IO_0_40, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_IO_44_44);
        }
        {
          parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_mode_decl_10_p_0(parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_48, parse_tree__parse_tree_out_pred_decl__Lang_18, parse_tree__parse_tree_out_pred_decl__InstVarSet_20, parse_tree__parse_tree_out_pred_decl__PredName_23, parse_tree__parse_tree_out_pred_decl__Modes_36, parse_tree__parse_tree_out_pred_decl__WithInst_26, parse_tree__parse_tree_out_pred_decl__MaybeDet_27, parse_tree__parse_tree_out_pred_decl__StartString_30, parse_tree__parse_tree_out_pred_decl__Terminator_32, parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_IO_44_44, parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_IO_41);
        }
      }
    else
      {
        {
          parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_type_2_14_p_0(parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_48, parse_tree__parse_tree_out_pred_decl__TypeVarSet_19, (MR_Integer) 0, parse_tree__parse_tree_out_pred_decl__PredOrFunc_21, parse_tree__parse_tree_out_pred_decl__ExistQVars_22, parse_tree__parse_tree_out_pred_decl__PredName_23, parse_tree__parse_tree_out_pred_decl__Types_34, parse_tree__parse_tree_out_pred_decl__WithType_25, parse_tree__parse_tree_out_pred_decl__MaybeDet_27, parse_tree__parse_tree_out_pred_decl__Purity_28, parse_tree__parse_tree_out_pred_decl__ClassContext_29, parse_tree__parse_tree_out_pred_decl__StartString_30, parse_tree__parse_tree_out_pred_decl__Terminator_32, parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_IO_0_40, parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_IO_41);
        }
      }
  }
}

void mercury__parse_tree__parse_tree_out_pred_decl__init(void)
{
}

void mercury__parse_tree__parse_tree_out_pred_decl__init_type_tables(void)
{
}

void mercury__parse_tree__parse_tree_out_pred_decl__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__parse_tree_out_pred_decl__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module parse_tree.parse_tree_out_pred_decl. */
