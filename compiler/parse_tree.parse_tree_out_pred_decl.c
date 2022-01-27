/*
** Automatically generated from `parse_tree_out_pred_decl.m'
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


/* :- module parse_tree.parse_tree_out_pred_decl. */
/* :- implementation. */

/*
INIT mercury__parse_tree__parse_tree_out_pred_decl__init
ENDINIT
*/

#include "parse_tree.parse_tree_out_pred_decl.mih"


#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
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
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_inst.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 102 "parse_tree.parse_tree_out_pred_decl.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out_pred_decl__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 423 "parse_tree_out_pred_decl.m"
static void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_mode_subdecl_8_p_0(
#line 423 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_36,
#line 423 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__Lang_9,
#line 423 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__VarSet_10,
#line 423 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__PredName_11,
#line 423 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__Modes_12,
#line 423 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__MaybeWithInst_13,
#line 423 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__MaybeDet_14,
#line 423 "parse_tree_out_pred_decl.m"
  MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_0_19,
#line 423 "parse_tree_out_pred_decl.m"
  MR_Box * parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_20);

#line 329 "parse_tree_out_pred_decl.m"
static void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_format_func_type_2_13_p_0_1(
#line 329 "parse_tree_out_pred_decl.m"
  MR_Box parse_tree__parse_tree_out_pred_decl__closure_arg,
#line 329 "parse_tree_out_pred_decl.m"
  MR_Box parse_tree__parse_tree_out_pred_decl__wrapper_arg_1,
#line 329 "parse_tree_out_pred_decl.m"
  MR_Box parse_tree__parse_tree_out_pred_decl__wrapper_arg_2,
#line 329 "parse_tree_out_pred_decl.m"
  MR_Box * parse_tree__parse_tree_out_pred_decl__wrapper_arg_3);

#line 306 "parse_tree_out_pred_decl.m"
static void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_format_func_type_2_13_p_0(
#line 306 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_54,
#line 306 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__VarSet_14,
#line 306 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__VarNamePrint_15,
#line 306 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__ExistQVars_16,
#line 306 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__FuncName_17,
#line 306 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__Types_18,
#line 306 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__RetType_19,
#line 306 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__MaybeDet_20,
#line 306 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__Purity_21,
#line 306 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__ClassContext_22,
#line 306 "parse_tree_out_pred_decl.m"
  MR_String parse_tree__parse_tree_out_pred_decl__StartString_23,
#line 306 "parse_tree_out_pred_decl.m"
  MR_String parse_tree__parse_tree_out_pred_decl__Separator_24,
#line 306 "parse_tree_out_pred_decl.m"
  MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_0_29,
#line 306 "parse_tree_out_pred_decl.m"
  MR_Box * parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_30);

#line 265 "parse_tree_out_pred_decl.m"
static void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_type_2_14_p_0_1(
#line 265 "parse_tree_out_pred_decl.m"
  MR_Box parse_tree__parse_tree_out_pred_decl__closure_arg,
#line 265 "parse_tree_out_pred_decl.m"
  MR_Box parse_tree__parse_tree_out_pred_decl__wrapper_arg_1,
#line 265 "parse_tree_out_pred_decl.m"
  MR_Box parse_tree__parse_tree_out_pred_decl__wrapper_arg_2,
#line 265 "parse_tree_out_pred_decl.m"
  MR_Box * parse_tree__parse_tree_out_pred_decl__wrapper_arg_3);

#line 238 "parse_tree_out_pred_decl.m"
static void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_type_2_14_p_0(
#line 238 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_66,
#line 238 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__TypeVarSet_15,
#line 238 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__VarNamePrint_16,
#line 238 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__PredOrFunc_17,
#line 238 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__ExistQVars_18,
#line 238 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__PredName_19,
#line 238 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__Types_20,
#line 238 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__MaybeWithType_21,
#line 238 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__MaybeDet_22,
#line 238 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__Purity_23,
#line 238 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__ClassContext_24,
#line 238 "parse_tree_out_pred_decl.m"
  MR_String parse_tree__parse_tree_out_pred_decl__StartString_25,
#line 238 "parse_tree_out_pred_decl.m"
  MR_String parse_tree__parse_tree_out_pred_decl__Separator_26,
#line 238 "parse_tree_out_pred_decl.m"
  MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_0_33,
#line 238 "parse_tree_out_pred_decl.m"
  MR_Box * parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_34);


static /* final */ const MR_Box parse_tree__parse_tree_out_pred_decl_scalar_common_1[3][2];

static /* final */ const MR_Integer parse_tree__parse_tree_out_pred_decl_scalar_common_2[1][2];

static /* final */ const MR_Box parse_tree__parse_tree_out_pred_decl_scalar_common_3[1][9];




static /* final */ const MR_Box parse_tree__parse_tree_out_pred_decl_scalar_common_1[3][2] = {
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
  /* row 2 */
  {
    ((MR_Box) (base_typeclass_info_parse_tree__parse_tree_out_inst__inst_info__arity1__parse_tree__parse_tree_out_inst__simple_inst_info__arity0__)),
    ((MR_Box) (&parse_tree__parse_tree_out_inst__parse_tree__parse_tree_out_inst__type_ctor_info_simple_inst_info_0))
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



#line 277 "parse_tree.parse_tree_out_pred_decl.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out_pred_decl__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 423 "parse_tree_out_pred_decl.m"
static void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_mode_subdecl_8_p_0(
#line 423 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_36,
#line 423 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__Lang_9,
#line 423 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__VarSet_10,
#line 423 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__PredName_11,
#line 423 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__Modes_12,
#line 423 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__MaybeWithInst_13,
#line 423 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__MaybeDet_14,
#line 423 "parse_tree_out_pred_decl.m"
  MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_0_19,
#line 423 "parse_tree_out_pred_decl.m"
  MR_Box * parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_20)
#line 423 "parse_tree_out_pred_decl.m"
{
#line 428 "parse_tree_out_pred_decl.m"
  {
#line 428 "parse_tree_out_pred_decl.m"
    MR_bool parse_tree__parse_tree_out_pred_decl__succeeded;
#line 428 "parse_tree_out_pred_decl.m"
    MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_28_28;
#line 428 "parse_tree_out_pred_decl.m"
    MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_34_34;

#line 435 "parse_tree_out_pred_decl.m"
    if ((parse_tree__parse_tree_out_pred_decl__Modes_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 437 "parse_tree_out_pred_decl.m"
      {
#line 437 "parse_tree_out_pred_decl.m"
        parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_3_p_0(parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_36, parse_tree__parse_tree_out_pred_decl__PredName_11, parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_0_19, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_28_28);
      }
#line 435 "parse_tree_out_pred_decl.m"
    else
#line 430 "parse_tree_out_pred_decl.m"
      {
#line 430 "parse_tree_out_pred_decl.m"
        MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_22_22;
#line 430 "parse_tree_out_pred_decl.m"
        MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_24_24;
#line 430 "parse_tree_out_pred_decl.m"
        MR_Word parse_tree__parse_tree_out_pred_decl__V_25_25;
#line 430 "parse_tree_out_pred_decl.m"
        MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_26_26;
#line 32 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 431 "parse_tree_out_pred_decl.m"
        {
#line 431 "parse_tree_out_pred_decl.m"
          parse_tree__mercury_to_mercury__mercury_format_sym_name_3_p_0(parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_36, parse_tree__parse_tree_out_pred_decl__PredName_11, parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_0_19, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_22_22);
        }
#line 32 "parse_tree.parse_tree_out_info.int"
        parse_tree__parse_tree_out_pred_decl__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_36, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
        {
#line 32 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pred_decl__func_0(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_36), ((MR_Box) ((MR_String) "(")), parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_22_22, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_24_24);
        }
#line 433 "parse_tree_out_pred_decl.m"
        parse_tree__parse_tree_out_pred_decl__V_25_25 = (MR_Word) parse_tree__parse_tree_out_pred_decl__VarSet_10;
#line 433 "parse_tree_out_pred_decl.m"
        {
#line 433 "parse_tree_out_pred_decl.m"
          parse_tree__parse_tree_out_inst__mercury_format_mode_list_5_p_0(parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_36, (MR_Word) &parse_tree__parse_tree_out_pred_decl_scalar_common_1[2], parse_tree__parse_tree_out_pred_decl__Lang_9, ((MR_Box) (parse_tree__parse_tree_out_pred_decl__V_25_25)), parse_tree__parse_tree_out_pred_decl__Modes_12, parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_24_24, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_26_26);
        }
#line 32 "parse_tree.parse_tree_out_info.int"
        parse_tree__parse_tree_out_pred_decl__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_36, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
        {
#line 32 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pred_decl__func_1(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_36), ((MR_Box) ((MR_String) ")")), parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_26_26, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_28_28);
        }
#line 430 "parse_tree_out_pred_decl.m"
      }
#line 444 "parse_tree_out_pred_decl.m"
    if ((parse_tree__parse_tree_out_pred_decl__MaybeWithInst_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 445 "parse_tree_out_pred_decl.m"
      parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_34_34 = parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_28_28;
#line 444 "parse_tree_out_pred_decl.m"
    else
#line 440 "parse_tree_out_pred_decl.m"
      {
#line 440 "parse_tree_out_pred_decl.m"
        MR_Word parse_tree__parse_tree_out_pred_decl__WithInst_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pred_decl__MaybeWithInst_13, (MR_Integer) 0)));
#line 440 "parse_tree_out_pred_decl.m"
        MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_30_30;
#line 440 "parse_tree_out_pred_decl.m"
        MR_Word parse_tree__parse_tree_out_pred_decl__V_31_31;
#line 440 "parse_tree_out_pred_decl.m"
        MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_32_32;
#line 32 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_36, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_3)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 32 "parse_tree.parse_tree_out_info.int"
        {
#line 32 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pred_decl__func_2(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_36), ((MR_Box) ((MR_String) " \140with_inst\140 (")), parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_28_28, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_30_30);
        }
#line 442 "parse_tree_out_pred_decl.m"
        parse_tree__parse_tree_out_pred_decl__V_31_31 = (MR_Word) parse_tree__parse_tree_out_pred_decl__VarSet_10;
#line 442 "parse_tree_out_pred_decl.m"
        {
#line 442 "parse_tree_out_pred_decl.m"
          parse_tree__parse_tree_out_inst__mercury_format_inst_5_p_0(parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_36, (MR_Word) &parse_tree__parse_tree_out_pred_decl_scalar_common_1[2], parse_tree__parse_tree_out_pred_decl__Lang_9, ((MR_Box) (parse_tree__parse_tree_out_pred_decl__V_31_31)), parse_tree__parse_tree_out_pred_decl__WithInst_18, parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_30_30, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_32_32);
        }
#line 32 "parse_tree.parse_tree_out_info.int"
        parse_tree__parse_tree_out_pred_decl__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_36, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
        {
#line 32 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pred_decl__func_3(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_36), ((MR_Box) ((MR_String) ")")), parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_32_32, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_34_34);
        }
#line 440 "parse_tree_out_pred_decl.m"
      }
#line 488 "parse_tree_out_pred_decl.m"
    if ((parse_tree__parse_tree_out_pred_decl__MaybeDet_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 488 "parse_tree_out_pred_decl.m"
      *parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_20 = parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_34_34;
#line 488 "parse_tree_out_pred_decl.m"
    else
#line 490 "parse_tree_out_pred_decl.m"
      {
#line 490 "parse_tree_out_pred_decl.m"
        MR_Word parse_tree__parse_tree_out_pred_decl__Det_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pred_decl__MaybeDet_14, (MR_Integer) 0)));
#line 490 "parse_tree_out_pred_decl.m"
        MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_10_45;
#line 490 "parse_tree_out_pred_decl.m"
        MR_String parse_tree__parse_tree_out_pred_decl__V_46_46;
#line 32 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_4)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_36, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_5)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 32 "parse_tree.parse_tree_out_info.int"
        {
#line 32 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pred_decl__func_4(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_36), ((MR_Box) ((MR_String) " is ")), parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_34_34, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_10_45);
        }
#line 492 "parse_tree_out_pred_decl.m"
        {
#line 492 "parse_tree_out_pred_decl.m"
          parse_tree__parse_tree_out_pred_decl__V_46_46 = parse_tree__mercury_to_mercury__mercury_det_to_string_1_f_0(parse_tree__parse_tree_out_pred_decl__Det_43);
        }
#line 32 "parse_tree.parse_tree_out_info.int"
        parse_tree__parse_tree_out_pred_decl__func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_36, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
        {
#line 32 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pred_decl__func_5(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_36), ((MR_Box) (parse_tree__parse_tree_out_pred_decl__V_46_46)), parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_10_45, parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_20);
        }
#line 490 "parse_tree_out_pred_decl.m"
      }
#line 428 "parse_tree_out_pred_decl.m"
  }
#line 423 "parse_tree_out_pred_decl.m"
}

#line 329 "parse_tree_out_pred_decl.m"
static void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_format_func_type_2_13_p_0_1(
#line 329 "parse_tree_out_pred_decl.m"
  MR_Box parse_tree__parse_tree_out_pred_decl__closure_arg,
#line 329 "parse_tree_out_pred_decl.m"
  MR_Box parse_tree__parse_tree_out_pred_decl__wrapper_arg_1,
#line 329 "parse_tree_out_pred_decl.m"
  MR_Box parse_tree__parse_tree_out_pred_decl__wrapper_arg_2,
#line 329 "parse_tree_out_pred_decl.m"
  MR_Box * parse_tree__parse_tree_out_pred_decl__wrapper_arg_3)
#line 329 "parse_tree_out_pred_decl.m"
{
#line 329 "parse_tree_out_pred_decl.m"
  {
#line 329 "parse_tree_out_pred_decl.m"
    MR_Box parse_tree__parse_tree_out_pred_decl__closure = parse_tree__parse_tree_out_pred_decl__closure_arg;

#line 329 "parse_tree_out_pred_decl.m"
    {
#line 329 "parse_tree_out_pred_decl.m"
      parse_tree__mercury_to_mercury__mercury_format_type_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__closure, (MR_Integer) 5))), ((MR_Word) parse_tree__parse_tree_out_pred_decl__wrapper_arg_1), parse_tree__parse_tree_out_pred_decl__wrapper_arg_2, parse_tree__parse_tree_out_pred_decl__wrapper_arg_3);
    }
#line 329 "parse_tree_out_pred_decl.m"
  }
#line 329 "parse_tree_out_pred_decl.m"
}

#line 306 "parse_tree_out_pred_decl.m"
static void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_format_func_type_2_13_p_0(
#line 306 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_54,
#line 306 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__VarSet_14,
#line 306 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__VarNamePrint_15,
#line 306 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__ExistQVars_16,
#line 306 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__FuncName_17,
#line 306 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__Types_18,
#line 306 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__RetType_19,
#line 306 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__MaybeDet_20,
#line 306 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__Purity_21,
#line 306 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__ClassContext_22,
#line 306 "parse_tree_out_pred_decl.m"
  MR_String parse_tree__parse_tree_out_pred_decl__StartString_23,
#line 306 "parse_tree_out_pred_decl.m"
  MR_String parse_tree__parse_tree_out_pred_decl__Separator_24,
#line 306 "parse_tree_out_pred_decl.m"
  MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_0_29,
#line 306 "parse_tree_out_pred_decl.m"
  MR_Box * parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_30)
#line 306 "parse_tree_out_pred_decl.m"
{
#line 312 "parse_tree_out_pred_decl.m"
  {
#line 312 "parse_tree_out_pred_decl.m"
    MR_bool parse_tree__parse_tree_out_pred_decl__succeeded;
#line 312 "parse_tree_out_pred_decl.m"
    MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_31_31;
#line 312 "parse_tree_out_pred_decl.m"
    MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_32_32;
#line 312 "parse_tree_out_pred_decl.m"
    MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_35_35;
#line 312 "parse_tree_out_pred_decl.m"
    MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_36_36;
#line 312 "parse_tree_out_pred_decl.m"
    MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_38_38;
#line 312 "parse_tree_out_pred_decl.m"
    MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_47_47;
#line 312 "parse_tree_out_pred_decl.m"
    MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_49_49;
#line 312 "parse_tree_out_pred_decl.m"
    MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_50_50;
#line 312 "parse_tree_out_pred_decl.m"
    MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_51_51;
#line 312 "parse_tree_out_pred_decl.m"
    MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_52_52;
#line 32 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_54, (MR_Integer) 0)), (MR_Integer) 5)));
#line 316 "parse_tree_out_pred_decl.m"
    MR_Word parse_tree__parse_tree_out_pred_decl__V_33_33;
#line 317 "parse_tree_out_pred_decl.m"
    MR_Word parse_tree__parse_tree_out_pred_decl__V_26_26;
#line 42 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_3)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_7)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_10)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 32 "parse_tree.parse_tree_out_info.int"
    {
#line 32 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pred_decl__func_0(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_54), ((MR_Box) (parse_tree__parse_tree_out_pred_decl__StartString_23)), parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_0_29, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_31_31);
    }
#line 314 "parse_tree_out_pred_decl.m"
    {
#line 314 "parse_tree_out_pred_decl.m"
      parse_tree__mercury_to_mercury__mercury_format_quantifier_5_p_0(parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_54, parse_tree__parse_tree_out_pred_decl__VarSet_14, parse_tree__parse_tree_out_pred_decl__VarNamePrint_15, parse_tree__parse_tree_out_pred_decl__ExistQVars_16, parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_31_31, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_32_32);
    }
#line 316 "parse_tree_out_pred_decl.m"
    parse_tree__parse_tree_out_pred_decl__succeeded = (parse_tree__parse_tree_out_pred_decl__ExistQVars_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 316 "parse_tree_out_pred_decl.m"
    if (parse_tree__parse_tree_out_pred_decl__succeeded)
#line 316 "parse_tree_out_pred_decl.m"
      {
#line 317 "parse_tree_out_pred_decl.m"
        parse_tree__parse_tree_out_pred_decl__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__ClassContext_22, (MR_Integer) 0)));
#line 317 "parse_tree_out_pred_decl.m"
        parse_tree__parse_tree_out_pred_decl__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__ClassContext_22, (MR_Integer) 1)));
#line 317 "parse_tree_out_pred_decl.m"
        parse_tree__parse_tree_out_pred_decl__succeeded = (parse_tree__parse_tree_out_pred_decl__V_33_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 316 "parse_tree_out_pred_decl.m"
      }
#line 320 "parse_tree_out_pred_decl.m"
    if (parse_tree__parse_tree_out_pred_decl__succeeded)
#line 320 "parse_tree_out_pred_decl.m"
      parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_35_35 = parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_32_32;
#line 320 "parse_tree_out_pred_decl.m"
    else
#line 321 "parse_tree_out_pred_decl.m"
      {
#line 32 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_54, (MR_Integer) 0)), (MR_Integer) 5)));

#line 32 "parse_tree.parse_tree_out_info.int"
        {
#line 32 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pred_decl__func_1(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_54), ((MR_Box) ((MR_String) "(")), parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_32_32, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_35_35);
        }
#line 321 "parse_tree_out_pred_decl.m"
      }
#line 42 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pred_decl__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_54, (MR_Integer) 0)), (MR_Integer) 10)));
#line 42 "parse_tree.parse_tree_out_info.int"
    {
#line 42 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pred_decl__func_2(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_54), ((MR_Box) (parse_tree__parse_tree_out_pred_decl__Purity_21)), parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_35_35, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_36_36);
    }
#line 32 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pred_decl__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_54, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
    {
#line 32 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pred_decl__func_3(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_54), ((MR_Box) ((MR_String) "func ")), parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_36_36, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_38_38);
    }
#line 331 "parse_tree_out_pred_decl.m"
    if ((parse_tree__parse_tree_out_pred_decl__Types_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 333 "parse_tree_out_pred_decl.m"
      {
#line 333 "parse_tree_out_pred_decl.m"
        parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_3_p_0(parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_54, parse_tree__parse_tree_out_pred_decl__FuncName_17, parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_38_38, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_47_47);
      }
#line 331 "parse_tree_out_pred_decl.m"
    else
#line 326 "parse_tree_out_pred_decl.m"
      {
#line 326 "parse_tree_out_pred_decl.m"
        MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_40_40;
#line 326 "parse_tree_out_pred_decl.m"
        MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_42_42;
#line 326 "parse_tree_out_pred_decl.m"
        MR_Word parse_tree__parse_tree_out_pred_decl__V_44_44;
#line 326 "parse_tree_out_pred_decl.m"
        MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_45_45;
#line 32 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_4)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 58 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_6)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 327 "parse_tree_out_pred_decl.m"
        {
#line 327 "parse_tree_out_pred_decl.m"
          parse_tree__mercury_to_mercury__mercury_format_sym_name_3_p_0(parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_54, parse_tree__parse_tree_out_pred_decl__FuncName_17, parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_38_38, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_40_40);
        }
#line 32 "parse_tree.parse_tree_out_info.int"
        parse_tree__parse_tree_out_pred_decl__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_54, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
        {
#line 32 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pred_decl__func_4(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_54), ((MR_Box) ((MR_String) "(")), parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_40_40, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_42_42);
        }
#line 329 "parse_tree_out_pred_decl.m"
        {
#line 329 "parse_tree_out_pred_decl.m"
          parse_tree__parse_tree_out_pred_decl__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 329 "parse_tree_out_pred_decl.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__V_44_44, 0) = ((MR_Box) (&parse_tree__parse_tree_out_pred_decl_scalar_common_3[0]));
#line 329 "parse_tree_out_pred_decl.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__V_44_44, 1) = ((MR_Box) (parse_tree__parse_tree_out_pred_decl__mercury_format_func_type_2_13_p_0_1));
#line 329 "parse_tree_out_pred_decl.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__V_44_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 329 "parse_tree_out_pred_decl.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__V_44_44, 3) = ((MR_Box) (parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_54));
#line 329 "parse_tree_out_pred_decl.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__V_44_44, 4) = ((MR_Box) (parse_tree__parse_tree_out_pred_decl__VarSet_14));
#line 329 "parse_tree_out_pred_decl.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__V_44_44, 5) = ((MR_Box) (parse_tree__parse_tree_out_pred_decl__VarNamePrint_15));
#line 329 "parse_tree_out_pred_decl.m"
        }
#line 58 "parse_tree.parse_tree_out_info.int"
        parse_tree__parse_tree_out_pred_decl__func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_54, (MR_Integer) 0)), (MR_Integer) 18)));
#line 58 "parse_tree.parse_tree_out_info.int"
        {
#line 58 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pred_decl__func_5(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_54), ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)), ((MR_Box) (parse_tree__parse_tree_out_pred_decl__Types_18)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (parse_tree__parse_tree_out_pred_decl__V_44_44)), parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_42_42, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_45_45);
        }
#line 32 "parse_tree.parse_tree_out_info.int"
        parse_tree__parse_tree_out_pred_decl__func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_54, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
        {
#line 32 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pred_decl__func_6(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_54), ((MR_Box) ((MR_String) ")")), parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_45_45, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_47_47);
        }
#line 326 "parse_tree_out_pred_decl.m"
      }
#line 32 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pred_decl__func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_54, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
    {
#line 32 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pred_decl__func_7(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_54), ((MR_Box) ((MR_String) " = ")), parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_47_47, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_49_49);
    }
#line 336 "parse_tree_out_pred_decl.m"
    {
#line 336 "parse_tree_out_pred_decl.m"
      parse_tree__mercury_to_mercury__mercury_format_type_5_p_0(parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_54, parse_tree__parse_tree_out_pred_decl__VarSet_14, parse_tree__parse_tree_out_pred_decl__VarNamePrint_15, parse_tree__parse_tree_out_pred_decl__RetType_19, parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_49_49, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_50_50);
    }
#line 488 "parse_tree_out_pred_decl.m"
    if ((parse_tree__parse_tree_out_pred_decl__MaybeDet_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 488 "parse_tree_out_pred_decl.m"
      parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_51_51 = parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_50_50;
#line 488 "parse_tree_out_pred_decl.m"
    else
#line 490 "parse_tree_out_pred_decl.m"
      {
#line 490 "parse_tree_out_pred_decl.m"
        MR_Word parse_tree__parse_tree_out_pred_decl__Det_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pred_decl__MaybeDet_20, (MR_Integer) 0)));
#line 490 "parse_tree_out_pred_decl.m"
        MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_10_65;
#line 490 "parse_tree_out_pred_decl.m"
        MR_String parse_tree__parse_tree_out_pred_decl__V_66_66;
#line 32 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_8)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_54, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_9)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 32 "parse_tree.parse_tree_out_info.int"
        {
#line 32 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pred_decl__func_8(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_54), ((MR_Box) ((MR_String) " is ")), parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_50_50, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_10_65);
        }
#line 492 "parse_tree_out_pred_decl.m"
        {
#line 492 "parse_tree_out_pred_decl.m"
          parse_tree__parse_tree_out_pred_decl__V_66_66 = parse_tree__mercury_to_mercury__mercury_det_to_string_1_f_0(parse_tree__parse_tree_out_pred_decl__Det_63);
        }
#line 32 "parse_tree.parse_tree_out_info.int"
        parse_tree__parse_tree_out_pred_decl__func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_54, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
        {
#line 32 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pred_decl__func_9(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_54), ((MR_Box) (parse_tree__parse_tree_out_pred_decl__V_66_66)), parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_10_65, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_51_51);
        }
#line 490 "parse_tree_out_pred_decl.m"
      }
#line 338 "parse_tree_out_pred_decl.m"
    {
#line 338 "parse_tree_out_pred_decl.m"
      parse_tree__mercury_to_mercury__mercury_format_class_context_6_p_0(parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_54, parse_tree__parse_tree_out_pred_decl__VarSet_14, parse_tree__parse_tree_out_pred_decl__VarNamePrint_15, parse_tree__parse_tree_out_pred_decl__ClassContext_22, parse_tree__parse_tree_out_pred_decl__ExistQVars_16, parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_51_51, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_52_52);
    }
#line 32 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pred_decl__func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_54, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
    {
#line 32 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pred_decl__func_10(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_54), ((MR_Box) (parse_tree__parse_tree_out_pred_decl__Separator_24)), parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_52_52, parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_30);
    }
#line 312 "parse_tree_out_pred_decl.m"
  }
#line 306 "parse_tree_out_pred_decl.m"
}

#line 265 "parse_tree_out_pred_decl.m"
static void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_type_2_14_p_0_1(
#line 265 "parse_tree_out_pred_decl.m"
  MR_Box parse_tree__parse_tree_out_pred_decl__closure_arg,
#line 265 "parse_tree_out_pred_decl.m"
  MR_Box parse_tree__parse_tree_out_pred_decl__wrapper_arg_1,
#line 265 "parse_tree_out_pred_decl.m"
  MR_Box parse_tree__parse_tree_out_pred_decl__wrapper_arg_2,
#line 265 "parse_tree_out_pred_decl.m"
  MR_Box * parse_tree__parse_tree_out_pred_decl__wrapper_arg_3)
#line 265 "parse_tree_out_pred_decl.m"
{
#line 265 "parse_tree_out_pred_decl.m"
  {
#line 265 "parse_tree_out_pred_decl.m"
    MR_Box parse_tree__parse_tree_out_pred_decl__closure = parse_tree__parse_tree_out_pred_decl__closure_arg;

#line 265 "parse_tree_out_pred_decl.m"
    {
#line 265 "parse_tree_out_pred_decl.m"
      parse_tree__mercury_to_mercury__mercury_format_type_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__closure, (MR_Integer) 5))), ((MR_Word) parse_tree__parse_tree_out_pred_decl__wrapper_arg_1), parse_tree__parse_tree_out_pred_decl__wrapper_arg_2, parse_tree__parse_tree_out_pred_decl__wrapper_arg_3);
    }
#line 265 "parse_tree_out_pred_decl.m"
  }
#line 265 "parse_tree_out_pred_decl.m"
}

#line 238 "parse_tree_out_pred_decl.m"
static void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_type_2_14_p_0(
#line 238 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_66,
#line 238 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__TypeVarSet_15,
#line 238 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__VarNamePrint_16,
#line 238 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__PredOrFunc_17,
#line 238 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__ExistQVars_18,
#line 238 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__PredName_19,
#line 238 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__Types_20,
#line 238 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__MaybeWithType_21,
#line 238 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__MaybeDet_22,
#line 238 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__Purity_23,
#line 238 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__ClassContext_24,
#line 238 "parse_tree_out_pred_decl.m"
  MR_String parse_tree__parse_tree_out_pred_decl__StartString_25,
#line 238 "parse_tree_out_pred_decl.m"
  MR_String parse_tree__parse_tree_out_pred_decl__Separator_26,
#line 238 "parse_tree_out_pred_decl.m"
  MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_0_33,
#line 238 "parse_tree_out_pred_decl.m"
  MR_Box * parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_34)
#line 238 "parse_tree_out_pred_decl.m"
{
#line 246 "parse_tree_out_pred_decl.m"
  {
#line 246 "parse_tree_out_pred_decl.m"
    MR_bool parse_tree__parse_tree_out_pred_decl__succeeded;
#line 246 "parse_tree_out_pred_decl.m"
    MR_String parse_tree__parse_tree_out_pred_decl__PredOrFuncStr_29;
#line 246 "parse_tree_out_pred_decl.m"
    MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_35_35;
#line 246 "parse_tree_out_pred_decl.m"
    MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_36_36;
#line 246 "parse_tree_out_pred_decl.m"
    MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_39_39;
#line 246 "parse_tree_out_pred_decl.m"
    MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_40_40;
#line 246 "parse_tree_out_pred_decl.m"
    MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_41_41;
#line 246 "parse_tree_out_pred_decl.m"
    MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_43_43;
#line 246 "parse_tree_out_pred_decl.m"
    MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_52_52;
#line 246 "parse_tree_out_pred_decl.m"
    MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_57_57;
#line 246 "parse_tree_out_pred_decl.m"
    MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_61_61;
#line 246 "parse_tree_out_pred_decl.m"
    MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_64_64;
#line 32 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_66, (MR_Integer) 0)), (MR_Integer) 5)));
#line 250 "parse_tree_out_pred_decl.m"
    MR_Word parse_tree__parse_tree_out_pred_decl__V_37_37;
#line 251 "parse_tree_out_pred_decl.m"
    MR_Word parse_tree__parse_tree_out_pred_decl__V_28_28;
#line 42 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_3)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_4)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 290 "parse_tree_out_pred_decl.m"
    MR_Word parse_tree__parse_tree_out_pred_decl__TypeCtorInfo_71_71;
#line 290 "parse_tree_out_pred_decl.m"
    MR_String parse_tree__parse_tree_out_pred_decl__V_58_58;
#line 290 "parse_tree_out_pred_decl.m"
    MR_Integer parse_tree__parse_tree_out_pred_decl__V_59_59;
#line 290 "parse_tree_out_pred_decl.m"
    MR_Integer parse_tree__parse_tree_out_pred_decl__V_72_72;
#line 32 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_14)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 32 "parse_tree.parse_tree_out_info.int"
    {
#line 32 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pred_decl__func_0(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_66), ((MR_Box) (parse_tree__parse_tree_out_pred_decl__StartString_25)), parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_0_33, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_35_35);
    }
#line 248 "parse_tree_out_pred_decl.m"
    {
#line 248 "parse_tree_out_pred_decl.m"
      parse_tree__mercury_to_mercury__mercury_format_quantifier_5_p_0(parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_66, parse_tree__parse_tree_out_pred_decl__TypeVarSet_15, parse_tree__parse_tree_out_pred_decl__VarNamePrint_16, parse_tree__parse_tree_out_pred_decl__ExistQVars_18, parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_35_35, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_36_36);
    }
#line 250 "parse_tree_out_pred_decl.m"
    parse_tree__parse_tree_out_pred_decl__succeeded = (parse_tree__parse_tree_out_pred_decl__ExistQVars_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 250 "parse_tree_out_pred_decl.m"
    if (parse_tree__parse_tree_out_pred_decl__succeeded)
#line 250 "parse_tree_out_pred_decl.m"
      {
#line 251 "parse_tree_out_pred_decl.m"
        parse_tree__parse_tree_out_pred_decl__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__ClassContext_24, (MR_Integer) 0)));
#line 251 "parse_tree_out_pred_decl.m"
        parse_tree__parse_tree_out_pred_decl__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__ClassContext_24, (MR_Integer) 1)));
#line 251 "parse_tree_out_pred_decl.m"
        parse_tree__parse_tree_out_pred_decl__succeeded = (parse_tree__parse_tree_out_pred_decl__V_37_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 250 "parse_tree_out_pred_decl.m"
      }
#line 254 "parse_tree_out_pred_decl.m"
    if (parse_tree__parse_tree_out_pred_decl__succeeded)
#line 254 "parse_tree_out_pred_decl.m"
      parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_39_39 = parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_36_36;
#line 254 "parse_tree_out_pred_decl.m"
    else
#line 255 "parse_tree_out_pred_decl.m"
      {
#line 32 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_66, (MR_Integer) 0)), (MR_Integer) 5)));

#line 32 "parse_tree.parse_tree_out_info.int"
        {
#line 32 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pred_decl__func_1(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_66), ((MR_Box) ((MR_String) "(")), parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_36_36, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_39_39);
        }
#line 255 "parse_tree_out_pred_decl.m"
      }
#line 42 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pred_decl__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_66, (MR_Integer) 0)), (MR_Integer) 10)));
#line 42 "parse_tree.parse_tree_out_info.int"
    {
#line 42 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pred_decl__func_2(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_66), ((MR_Box) (parse_tree__parse_tree_out_pred_decl__Purity_23)), parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_39_39, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_40_40);
    }
#line 258 "parse_tree_out_pred_decl.m"
    {
#line 258 "parse_tree_out_pred_decl.m"
      parse_tree__parse_tree_out_pred_decl__PredOrFuncStr_29 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(parse_tree__parse_tree_out_pred_decl__PredOrFunc_17);
    }
#line 32 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pred_decl__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_66, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
    {
#line 32 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pred_decl__func_3(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_66), ((MR_Box) (parse_tree__parse_tree_out_pred_decl__PredOrFuncStr_29)), parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_40_40, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_41_41);
    }
#line 32 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pred_decl__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_66, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
    {
#line 32 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pred_decl__func_4(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_66), ((MR_Box) ((MR_String) " ")), parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_41_41, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_43_43);
    }
#line 268 "parse_tree_out_pred_decl.m"
    if ((parse_tree__parse_tree_out_pred_decl__Types_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 270 "parse_tree_out_pred_decl.m"
      {
#line 270 "parse_tree_out_pred_decl.m"
        parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_3_p_0(parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_66, parse_tree__parse_tree_out_pred_decl__PredName_19, parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_43_43, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_52_52);
      }
#line 268 "parse_tree_out_pred_decl.m"
    else
#line 262 "parse_tree_out_pred_decl.m"
      {
#line 262 "parse_tree_out_pred_decl.m"
        MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_45_45;
#line 262 "parse_tree_out_pred_decl.m"
        MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_47_47;
#line 262 "parse_tree_out_pred_decl.m"
        MR_Word parse_tree__parse_tree_out_pred_decl__V_49_49;
#line 262 "parse_tree_out_pred_decl.m"
        MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_50_50;
#line 32 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_5)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 58 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_7)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 263 "parse_tree_out_pred_decl.m"
        {
#line 263 "parse_tree_out_pred_decl.m"
          parse_tree__mercury_to_mercury__mercury_format_sym_name_3_p_0(parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_66, parse_tree__parse_tree_out_pred_decl__PredName_19, parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_43_43, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_45_45);
        }
#line 32 "parse_tree.parse_tree_out_info.int"
        parse_tree__parse_tree_out_pred_decl__func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_66, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
        {
#line 32 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pred_decl__func_5(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_66), ((MR_Box) ((MR_String) "(")), parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_45_45, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_47_47);
        }
#line 265 "parse_tree_out_pred_decl.m"
        {
#line 265 "parse_tree_out_pred_decl.m"
          parse_tree__parse_tree_out_pred_decl__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 265 "parse_tree_out_pred_decl.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__V_49_49, 0) = ((MR_Box) (&parse_tree__parse_tree_out_pred_decl_scalar_common_3[0]));
#line 265 "parse_tree_out_pred_decl.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__V_49_49, 1) = ((MR_Box) (parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_type_2_14_p_0_1));
#line 265 "parse_tree_out_pred_decl.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__V_49_49, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 265 "parse_tree_out_pred_decl.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__V_49_49, 3) = ((MR_Box) (parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_66));
#line 265 "parse_tree_out_pred_decl.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__V_49_49, 4) = ((MR_Box) (parse_tree__parse_tree_out_pred_decl__TypeVarSet_15));
#line 265 "parse_tree_out_pred_decl.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__V_49_49, 5) = ((MR_Box) (parse_tree__parse_tree_out_pred_decl__VarNamePrint_16));
#line 265 "parse_tree_out_pred_decl.m"
        }
#line 58 "parse_tree.parse_tree_out_info.int"
        parse_tree__parse_tree_out_pred_decl__func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_66, (MR_Integer) 0)), (MR_Integer) 18)));
#line 58 "parse_tree.parse_tree_out_info.int"
        {
#line 58 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pred_decl__func_6(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_66), ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)), ((MR_Box) (parse_tree__parse_tree_out_pred_decl__Types_20)), ((MR_Box) ((MR_String) ", ")), ((MR_Box) (parse_tree__parse_tree_out_pred_decl__V_49_49)), parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_47_47, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_50_50);
        }
#line 32 "parse_tree.parse_tree_out_info.int"
        parse_tree__parse_tree_out_pred_decl__func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_66, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
        {
#line 32 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pred_decl__func_7(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_66), ((MR_Box) ((MR_String) ")")), parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_50_50, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_52_52);
        }
#line 262 "parse_tree_out_pred_decl.m"
      }
#line 277 "parse_tree_out_pred_decl.m"
    if ((parse_tree__parse_tree_out_pred_decl__MaybeWithType_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 278 "parse_tree_out_pred_decl.m"
      parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_57_57 = parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_52_52;
#line 277 "parse_tree_out_pred_decl.m"
    else
#line 273 "parse_tree_out_pred_decl.m"
      {
#line 273 "parse_tree_out_pred_decl.m"
        MR_Word parse_tree__parse_tree_out_pred_decl__WithType_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pred_decl__MaybeWithType_21, (MR_Integer) 0)));
#line 273 "parse_tree_out_pred_decl.m"
        MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_54_54;
#line 273 "parse_tree_out_pred_decl.m"
        MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_55_55;
#line 32 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_8)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_66, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_9)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 32 "parse_tree.parse_tree_out_info.int"
        {
#line 32 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pred_decl__func_8(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_66), ((MR_Box) ((MR_String) " \140with_type\140 (")), parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_52_52, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_54_54);
        }
#line 275 "parse_tree_out_pred_decl.m"
        {
#line 275 "parse_tree_out_pred_decl.m"
          parse_tree__mercury_to_mercury__mercury_format_type_5_p_0(parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_66, parse_tree__parse_tree_out_pred_decl__TypeVarSet_15, parse_tree__parse_tree_out_pred_decl__VarNamePrint_16, parse_tree__parse_tree_out_pred_decl__WithType_32, parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_54_54, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_55_55);
        }
#line 32 "parse_tree.parse_tree_out_info.int"
        parse_tree__parse_tree_out_pred_decl__func_9 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_66, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
        {
#line 32 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pred_decl__func_9(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_66), ((MR_Box) ((MR_String) ")")), parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_55_55, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_57_57);
        }
#line 273 "parse_tree_out_pred_decl.m"
      }
#line 290 "parse_tree_out_pred_decl.m"
    parse_tree__parse_tree_out_pred_decl__succeeded = (parse_tree__parse_tree_out_pred_decl__PredOrFunc_17 == (MR_Integer) 0);
#line 290 "parse_tree_out_pred_decl.m"
    if (parse_tree__parse_tree_out_pred_decl__succeeded)
#line 290 "parse_tree_out_pred_decl.m"
      {
#line 291 "parse_tree_out_pred_decl.m"
        parse_tree__parse_tree_out_pred_decl__succeeded = (parse_tree__parse_tree_out_pred_decl__MaybeDet_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 290 "parse_tree_out_pred_decl.m"
        if (parse_tree__parse_tree_out_pred_decl__succeeded)
#line 290 "parse_tree_out_pred_decl.m"
          {
#line 292 "parse_tree_out_pred_decl.m"
            {
#line 292 "parse_tree_out_pred_decl.m"
              parse_tree__parse_tree_out_pred_decl__V_58_58 = mdbcomp__sym_name__unqualify_name_1_f_0(parse_tree__parse_tree_out_pred_decl__PredName_19);
            }
#line 292 "parse_tree_out_pred_decl.m"
            parse_tree__parse_tree_out_pred_decl__succeeded = (strcmp(parse_tree__parse_tree_out_pred_decl__V_58_58, (MR_String) "is") == 0);
#line 290 "parse_tree_out_pred_decl.m"
            if (parse_tree__parse_tree_out_pred_decl__succeeded)
#line 290 "parse_tree_out_pred_decl.m"
              {
#line 293 "parse_tree_out_pred_decl.m"
                parse_tree__parse_tree_out_pred_decl__V_59_59 = (MR_Integer) 2;
#line 1064 "parse_tree.parse_tree_out_pred_decl.c"
                parse_tree__parse_tree_out_pred_decl__TypeCtorInfo_71_71 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 293 "parse_tree_out_pred_decl.m"
                {
#line 293 "parse_tree_out_pred_decl.m"
                  mercury__list__length_2_p_0(parse_tree__parse_tree_out_pred_decl__TypeCtorInfo_71_71, parse_tree__parse_tree_out_pred_decl__Types_20, &parse_tree__parse_tree_out_pred_decl__V_72_72);
                }
#line 293 "parse_tree_out_pred_decl.m"
                parse_tree__parse_tree_out_pred_decl__succeeded = (parse_tree__parse_tree_out_pred_decl__V_59_59 == parse_tree__parse_tree_out_pred_decl__V_72_72);
#line 290 "parse_tree_out_pred_decl.m"
              }
#line 290 "parse_tree_out_pred_decl.m"
          }
#line 290 "parse_tree_out_pred_decl.m"
      }
#line 297 "parse_tree_out_pred_decl.m"
    if (parse_tree__parse_tree_out_pred_decl__succeeded)
#line 296 "parse_tree_out_pred_decl.m"
      {
#line 296 "parse_tree_out_pred_decl.m"
        MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_10_79;
#line 296 "parse_tree_out_pred_decl.m"
        MR_String parse_tree__parse_tree_out_pred_decl__V_80_80;
#line 32 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_10)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_66, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_11)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 32 "parse_tree.parse_tree_out_info.int"
        {
#line 32 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pred_decl__func_10(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_66), ((MR_Box) ((MR_String) " is ")), parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_57_57, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_10_79);
        }
#line 492 "parse_tree_out_pred_decl.m"
        {
#line 492 "parse_tree_out_pred_decl.m"
          parse_tree__parse_tree_out_pred_decl__V_80_80 = parse_tree__mercury_to_mercury__mercury_det_to_string_1_f_0((MR_Integer) 0);
        }
#line 32 "parse_tree.parse_tree_out_info.int"
        parse_tree__parse_tree_out_pred_decl__func_11 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_66, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
        {
#line 32 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pred_decl__func_11(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_66), ((MR_Box) (parse_tree__parse_tree_out_pred_decl__V_80_80)), parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_10_79, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_61_61);
        }
#line 296 "parse_tree_out_pred_decl.m"
      }
#line 297 "parse_tree_out_pred_decl.m"
    else
#line 488 "parse_tree_out_pred_decl.m"
    if ((parse_tree__parse_tree_out_pred_decl__MaybeDet_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 488 "parse_tree_out_pred_decl.m"
      parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_61_61 = parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_57_57;
#line 488 "parse_tree_out_pred_decl.m"
    else
#line 490 "parse_tree_out_pred_decl.m"
      {
#line 490 "parse_tree_out_pred_decl.m"
        MR_Word parse_tree__parse_tree_out_pred_decl__Det_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pred_decl__MaybeDet_22, (MR_Integer) 0)));
#line 490 "parse_tree_out_pred_decl.m"
        MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_10_88;
#line 490 "parse_tree_out_pred_decl.m"
        MR_String parse_tree__parse_tree_out_pred_decl__V_89_89;
#line 32 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_12)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_66, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_13)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 32 "parse_tree.parse_tree_out_info.int"
        {
#line 32 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pred_decl__func_12(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_66), ((MR_Box) ((MR_String) " is ")), parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_57_57, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_10_88);
        }
#line 492 "parse_tree_out_pred_decl.m"
        {
#line 492 "parse_tree_out_pred_decl.m"
          parse_tree__parse_tree_out_pred_decl__V_89_89 = parse_tree__mercury_to_mercury__mercury_det_to_string_1_f_0(parse_tree__parse_tree_out_pred_decl__Det_86);
        }
#line 32 "parse_tree.parse_tree_out_info.int"
        parse_tree__parse_tree_out_pred_decl__func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_66, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
        {
#line 32 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pred_decl__func_13(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_66), ((MR_Box) (parse_tree__parse_tree_out_pred_decl__V_89_89)), parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_10_88, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_61_61);
        }
#line 490 "parse_tree_out_pred_decl.m"
      }
#line 300 "parse_tree_out_pred_decl.m"
    {
#line 300 "parse_tree_out_pred_decl.m"
      parse_tree__mercury_to_mercury__mercury_format_class_context_6_p_0(parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_66, parse_tree__parse_tree_out_pred_decl__TypeVarSet_15, parse_tree__parse_tree_out_pred_decl__VarNamePrint_16, parse_tree__parse_tree_out_pred_decl__ClassContext_24, parse_tree__parse_tree_out_pred_decl__ExistQVars_18, parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_61_61, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_64_64);
    }
#line 32 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pred_decl__func_14 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_66, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
    {
#line 32 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pred_decl__func_14(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_66), ((MR_Box) (parse_tree__parse_tree_out_pred_decl__Separator_26)), parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_64_64, parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_34);
    }
#line 246 "parse_tree_out_pred_decl.m"
  }
#line 238 "parse_tree_out_pred_decl.m"
}

#line 119 "parse_tree_out_pred_decl.m"
MR_String MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_func_mode_subdecl_to_string_6_f_0(
#line 119 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__Lang_8,
#line 119 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__VarSet_9,
#line 119 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__FuncName_10,
#line 119 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__Modes_11,
#line 119 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__RetMode_12,
#line 119 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__MaybeDet_13)
#line 119 "parse_tree_out_pred_decl.m"
{
#line 457 "parse_tree_out_pred_decl.m"
  {
#line 457 "parse_tree_out_pred_decl.m"
    MR_bool parse_tree__parse_tree_out_pred_decl__succeeded;
#line 457 "parse_tree_out_pred_decl.m"
    MR_String parse_tree__parse_tree_out_pred_decl__String_14;
#line 457 "parse_tree_out_pred_decl.m"
    MR_Word parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_16 = (MR_Word) &parse_tree__parse_tree_out_pred_decl_scalar_common_1[1];
#line 457 "parse_tree_out_pred_decl.m"
    MR_String parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_27_35;
#line 457 "parse_tree_out_pred_decl.m"
    MR_String parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_29_37;
#line 457 "parse_tree_out_pred_decl.m"
    MR_Word parse_tree__parse_tree_out_pred_decl__V_38_38;
#line 457 "parse_tree_out_pred_decl.m"
    MR_String parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_31_39;
#line 32 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_7)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
    MR_Box parse_tree__parse_tree_out_pred_decl__conv8_STATE_VARIABLE_U_29_37;
#line 478 "parse_tree_out_pred_decl.m"
    MR_Box parse_tree__parse_tree_out_pred_decl__conv9_STATE_VARIABLE_U_31_39;

#line 473 "parse_tree_out_pred_decl.m"
    if ((parse_tree__parse_tree_out_pred_decl__Modes_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 475 "parse_tree_out_pred_decl.m"
      {
#line 475 "parse_tree_out_pred_decl.m"
        MR_Box parse_tree__parse_tree_out_pred_decl__conv0_STATE_VARIABLE_U_27_35;

#line 475 "parse_tree_out_pred_decl.m"
        {
#line 475 "parse_tree_out_pred_decl.m"
          parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_3_p_0(parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_16, parse_tree__parse_tree_out_pred_decl__FuncName_10, ((MR_Box) ((MR_String) "")), &parse_tree__parse_tree_out_pred_decl__conv0_STATE_VARIABLE_U_27_35);
        }
#line 475 "parse_tree_out_pred_decl.m"
        parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_27_35 = ((MR_String) parse_tree__parse_tree_out_pred_decl__conv0_STATE_VARIABLE_U_27_35);
#line 475 "parse_tree_out_pred_decl.m"
      }
#line 473 "parse_tree_out_pred_decl.m"
    else
#line 468 "parse_tree_out_pred_decl.m"
      {
#line 468 "parse_tree_out_pred_decl.m"
        MR_String parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_21_29;
#line 468 "parse_tree_out_pred_decl.m"
        MR_String parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_23_31;
#line 468 "parse_tree_out_pred_decl.m"
        MR_Word parse_tree__parse_tree_out_pred_decl__V_32_32;
#line 468 "parse_tree_out_pred_decl.m"
        MR_String parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_25_33;
#line 469 "parse_tree_out_pred_decl.m"
        MR_Box parse_tree__parse_tree_out_pred_decl__conv1_STATE_VARIABLE_U_21_29;
#line 32 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
        MR_Box parse_tree__parse_tree_out_pred_decl__conv3_STATE_VARIABLE_U_23_31;
#line 471 "parse_tree_out_pred_decl.m"
        MR_Box parse_tree__parse_tree_out_pred_decl__conv4_STATE_VARIABLE_U_25_33;
#line 32 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_5)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
        MR_Box parse_tree__parse_tree_out_pred_decl__conv6_STATE_VARIABLE_U_27_35;

#line 469 "parse_tree_out_pred_decl.m"
        {
#line 469 "parse_tree_out_pred_decl.m"
          parse_tree__mercury_to_mercury__mercury_format_sym_name_3_p_0(parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_16, parse_tree__parse_tree_out_pred_decl__FuncName_10, ((MR_Box) ((MR_String) "")), &parse_tree__parse_tree_out_pred_decl__conv1_STATE_VARIABLE_U_21_29);
        }
#line 469 "parse_tree_out_pred_decl.m"
        parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_21_29 = ((MR_String) parse_tree__parse_tree_out_pred_decl__conv1_STATE_VARIABLE_U_21_29);
#line 32 "parse_tree.parse_tree_out_info.int"
        parse_tree__parse_tree_out_pred_decl__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_16, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
        {
#line 32 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pred_decl__func_2(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_16), ((MR_Box) ((MR_String) "(")), ((MR_Box) (parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_21_29)), &parse_tree__parse_tree_out_pred_decl__conv3_STATE_VARIABLE_U_23_31);
        }
#line 32 "parse_tree.parse_tree_out_info.int"
        parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_23_31 = ((MR_String) parse_tree__parse_tree_out_pred_decl__conv3_STATE_VARIABLE_U_23_31);
#line 471 "parse_tree_out_pred_decl.m"
        parse_tree__parse_tree_out_pred_decl__V_32_32 = (MR_Word) parse_tree__parse_tree_out_pred_decl__VarSet_9;
#line 471 "parse_tree_out_pred_decl.m"
        {
#line 471 "parse_tree_out_pred_decl.m"
          parse_tree__parse_tree_out_inst__mercury_format_mode_list_5_p_0(parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_16, (MR_Word) &parse_tree__parse_tree_out_pred_decl_scalar_common_1[2], parse_tree__parse_tree_out_pred_decl__Lang_8, ((MR_Box) (parse_tree__parse_tree_out_pred_decl__V_32_32)), parse_tree__parse_tree_out_pred_decl__Modes_11, ((MR_Box) (parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_23_31)), &parse_tree__parse_tree_out_pred_decl__conv4_STATE_VARIABLE_U_25_33);
        }
#line 471 "parse_tree_out_pred_decl.m"
        parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_25_33 = ((MR_String) parse_tree__parse_tree_out_pred_decl__conv4_STATE_VARIABLE_U_25_33);
#line 32 "parse_tree.parse_tree_out_info.int"
        parse_tree__parse_tree_out_pred_decl__func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_16, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
        {
#line 32 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pred_decl__func_5(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_16), ((MR_Box) ((MR_String) ")")), ((MR_Box) (parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_25_33)), &parse_tree__parse_tree_out_pred_decl__conv6_STATE_VARIABLE_U_27_35);
        }
#line 32 "parse_tree.parse_tree_out_info.int"
        parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_27_35 = ((MR_String) parse_tree__parse_tree_out_pred_decl__conv6_STATE_VARIABLE_U_27_35);
#line 468 "parse_tree_out_pred_decl.m"
      }
#line 32 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pred_decl__func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_16, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
    {
#line 32 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pred_decl__func_7(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_16), ((MR_Box) ((MR_String) " = ")), ((MR_Box) (parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_27_35)), &parse_tree__parse_tree_out_pred_decl__conv8_STATE_VARIABLE_U_29_37);
    }
#line 32 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_29_37 = ((MR_String) parse_tree__parse_tree_out_pred_decl__conv8_STATE_VARIABLE_U_29_37);
#line 478 "parse_tree_out_pred_decl.m"
    parse_tree__parse_tree_out_pred_decl__V_38_38 = (MR_Word) parse_tree__parse_tree_out_pred_decl__VarSet_9;
#line 478 "parse_tree_out_pred_decl.m"
    {
#line 478 "parse_tree_out_pred_decl.m"
      parse_tree__parse_tree_out_inst__mercury_format_mode_5_p_0(parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_16, (MR_Word) &parse_tree__parse_tree_out_pred_decl_scalar_common_1[2], parse_tree__parse_tree_out_pred_decl__Lang_8, ((MR_Box) (parse_tree__parse_tree_out_pred_decl__V_38_38)), parse_tree__parse_tree_out_pred_decl__RetMode_12, ((MR_Box) (parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_29_37)), &parse_tree__parse_tree_out_pred_decl__conv9_STATE_VARIABLE_U_31_39);
    }
#line 478 "parse_tree_out_pred_decl.m"
    parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_31_39 = ((MR_String) parse_tree__parse_tree_out_pred_decl__conv9_STATE_VARIABLE_U_31_39);
#line 488 "parse_tree_out_pred_decl.m"
    if ((parse_tree__parse_tree_out_pred_decl__MaybeDet_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 488 "parse_tree_out_pred_decl.m"
      parse_tree__parse_tree_out_pred_decl__String_14 = parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_31_39;
#line 488 "parse_tree_out_pred_decl.m"
    else
#line 490 "parse_tree_out_pred_decl.m"
      {
#line 490 "parse_tree_out_pred_decl.m"
        MR_Word parse_tree__parse_tree_out_pred_decl__Det_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pred_decl__MaybeDet_13, (MR_Integer) 0)));
#line 490 "parse_tree_out_pred_decl.m"
        MR_String parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_10_49;
#line 490 "parse_tree_out_pred_decl.m"
        MR_String parse_tree__parse_tree_out_pred_decl__V_50_50;
#line 32 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_10)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_16, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
        MR_Box parse_tree__parse_tree_out_pred_decl__conv11_STATE_VARIABLE_U_10_49;
#line 32 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_12)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
        MR_Box parse_tree__parse_tree_out_pred_decl__conv13_String_14;

#line 32 "parse_tree.parse_tree_out_info.int"
        {
#line 32 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pred_decl__func_10(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_16), ((MR_Box) ((MR_String) " is ")), ((MR_Box) (parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_31_39)), &parse_tree__parse_tree_out_pred_decl__conv11_STATE_VARIABLE_U_10_49);
        }
#line 32 "parse_tree.parse_tree_out_info.int"
        parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_10_49 = ((MR_String) parse_tree__parse_tree_out_pred_decl__conv11_STATE_VARIABLE_U_10_49);
#line 492 "parse_tree_out_pred_decl.m"
        {
#line 492 "parse_tree_out_pred_decl.m"
          parse_tree__parse_tree_out_pred_decl__V_50_50 = parse_tree__mercury_to_mercury__mercury_det_to_string_1_f_0(parse_tree__parse_tree_out_pred_decl__Det_47);
        }
#line 32 "parse_tree.parse_tree_out_info.int"
        parse_tree__parse_tree_out_pred_decl__func_12 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_16, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
        {
#line 32 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pred_decl__func_12(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_16), ((MR_Box) (parse_tree__parse_tree_out_pred_decl__V_50_50)), ((MR_Box) (parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_10_49)), &parse_tree__parse_tree_out_pred_decl__conv13_String_14);
        }
#line 32 "parse_tree.parse_tree_out_info.int"
        parse_tree__parse_tree_out_pred_decl__String_14 = ((MR_String) parse_tree__parse_tree_out_pred_decl__conv13_String_14);
#line 490 "parse_tree_out_pred_decl.m"
      }
#line 457 "parse_tree_out_pred_decl.m"
    return parse_tree__parse_tree_out_pred_decl__String_14;
#line 457 "parse_tree_out_pred_decl.m"
  }
#line 119 "parse_tree_out_pred_decl.m"
}

#line 116 "parse_tree_out_pred_decl.m"
void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_output_func_mode_subdecl_8_p_0(
#line 116 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__Lang_9,
#line 116 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__VarSet_10,
#line 116 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__FuncName_11,
#line 116 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__Modes_12,
#line 116 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__RetMode_13,
#line 116 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__MaybeDet_14)
#line 116 "parse_tree_out_pred_decl.m"
{
#line 453 "parse_tree_out_pred_decl.m"
  {
#line 453 "parse_tree_out_pred_decl.m"
    MR_bool parse_tree__parse_tree_out_pred_decl__succeeded;
#line 453 "parse_tree_out_pred_decl.m"
    MR_Word parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_19 = (MR_Word) &parse_tree__parse_tree_out_pred_decl_scalar_common_1[0];
#line 453 "parse_tree_out_pred_decl.m"
    MR_Word parse_tree__parse_tree_out_pred_decl__V_41_41;
#line 32 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_7)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
    MR_Box parse_tree__parse_tree_out_pred_decl__conv8_STATE_VARIABLE_U_29_40;
#line 478 "parse_tree_out_pred_decl.m"
    MR_Box parse_tree__parse_tree_out_pred_decl__conv9_STATE_VARIABLE_U_31_42;

#line 473 "parse_tree_out_pred_decl.m"
    if ((parse_tree__parse_tree_out_pred_decl__Modes_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 475 "parse_tree_out_pred_decl.m"
      {
#line 475 "parse_tree_out_pred_decl.m"
        MR_Box parse_tree__parse_tree_out_pred_decl__conv0_STATE_VARIABLE_U_27_38;

#line 475 "parse_tree_out_pred_decl.m"
        {
#line 475 "parse_tree_out_pred_decl.m"
          parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_3_p_0(parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_19, parse_tree__parse_tree_out_pred_decl__FuncName_11, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pred_decl__conv0_STATE_VARIABLE_U_27_38);
        }
#line 475 "parse_tree_out_pred_decl.m"
      }
#line 473 "parse_tree_out_pred_decl.m"
    else
#line 468 "parse_tree_out_pred_decl.m"
      {
#line 468 "parse_tree_out_pred_decl.m"
        MR_Word parse_tree__parse_tree_out_pred_decl__V_35_35;
#line 469 "parse_tree_out_pred_decl.m"
        MR_Box parse_tree__parse_tree_out_pred_decl__conv1_STATE_VARIABLE_U_21_32;
#line 32 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
        MR_Box parse_tree__parse_tree_out_pred_decl__conv3_STATE_VARIABLE_U_23_34;
#line 471 "parse_tree_out_pred_decl.m"
        MR_Box parse_tree__parse_tree_out_pred_decl__conv4_STATE_VARIABLE_U_25_36;
#line 32 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_5)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
        MR_Box parse_tree__parse_tree_out_pred_decl__conv6_STATE_VARIABLE_U_27_38;

#line 469 "parse_tree_out_pred_decl.m"
        {
#line 469 "parse_tree_out_pred_decl.m"
          parse_tree__mercury_to_mercury__mercury_format_sym_name_3_p_0(parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_19, parse_tree__parse_tree_out_pred_decl__FuncName_11, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pred_decl__conv1_STATE_VARIABLE_U_21_32);
        }
#line 32 "parse_tree.parse_tree_out_info.int"
        parse_tree__parse_tree_out_pred_decl__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_19, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
        {
#line 32 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pred_decl__func_2(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_19), ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pred_decl__conv3_STATE_VARIABLE_U_23_34);
        }
#line 471 "parse_tree_out_pred_decl.m"
        parse_tree__parse_tree_out_pred_decl__V_35_35 = (MR_Word) parse_tree__parse_tree_out_pred_decl__VarSet_10;
#line 471 "parse_tree_out_pred_decl.m"
        {
#line 471 "parse_tree_out_pred_decl.m"
          parse_tree__parse_tree_out_inst__mercury_format_mode_list_5_p_0(parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_19, (MR_Word) &parse_tree__parse_tree_out_pred_decl_scalar_common_1[2], parse_tree__parse_tree_out_pred_decl__Lang_9, ((MR_Box) (parse_tree__parse_tree_out_pred_decl__V_35_35)), parse_tree__parse_tree_out_pred_decl__Modes_12, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pred_decl__conv4_STATE_VARIABLE_U_25_36);
        }
#line 32 "parse_tree.parse_tree_out_info.int"
        parse_tree__parse_tree_out_pred_decl__func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_19, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
        {
#line 32 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pred_decl__func_5(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_19), ((MR_Box) ((MR_String) ")")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pred_decl__conv6_STATE_VARIABLE_U_27_38);
        }
#line 468 "parse_tree_out_pred_decl.m"
      }
#line 32 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pred_decl__func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_19, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
    {
#line 32 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pred_decl__func_7(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_19), ((MR_Box) ((MR_String) " = ")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pred_decl__conv8_STATE_VARIABLE_U_29_40);
    }
#line 478 "parse_tree_out_pred_decl.m"
    parse_tree__parse_tree_out_pred_decl__V_41_41 = (MR_Word) parse_tree__parse_tree_out_pred_decl__VarSet_10;
#line 478 "parse_tree_out_pred_decl.m"
    {
#line 478 "parse_tree_out_pred_decl.m"
      parse_tree__parse_tree_out_inst__mercury_format_mode_5_p_0(parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_19, (MR_Word) &parse_tree__parse_tree_out_pred_decl_scalar_common_1[2], parse_tree__parse_tree_out_pred_decl__Lang_9, ((MR_Box) (parse_tree__parse_tree_out_pred_decl__V_41_41)), parse_tree__parse_tree_out_pred_decl__RetMode_13, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pred_decl__conv9_STATE_VARIABLE_U_31_42);
    }
#line 488 "parse_tree_out_pred_decl.m"
    if ((parse_tree__parse_tree_out_pred_decl__MaybeDet_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 488 "parse_tree_out_pred_decl.m"
      {
#line 488 "parse_tree_out_pred_decl.m"
      }
#line 488 "parse_tree_out_pred_decl.m"
    else
#line 490 "parse_tree_out_pred_decl.m"
      {
#line 490 "parse_tree_out_pred_decl.m"
        MR_Word parse_tree__parse_tree_out_pred_decl__Det_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pred_decl__MaybeDet_14, (MR_Integer) 0)));
#line 490 "parse_tree_out_pred_decl.m"
        MR_String parse_tree__parse_tree_out_pred_decl__V_53_53;
#line 32 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_10)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_19, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
        MR_Box parse_tree__parse_tree_out_pred_decl__conv11_STATE_VARIABLE_U_10_52;
#line 32 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_12)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
        MR_Box parse_tree__parse_tree_out_pred_decl__conv13_STATE_VARIABLE_IO_17;

#line 32 "parse_tree.parse_tree_out_info.int"
        {
#line 32 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pred_decl__func_10(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_19), ((MR_Box) ((MR_String) " is ")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pred_decl__conv11_STATE_VARIABLE_U_10_52);
        }
#line 492 "parse_tree_out_pred_decl.m"
        {
#line 492 "parse_tree_out_pred_decl.m"
          parse_tree__parse_tree_out_pred_decl__V_53_53 = parse_tree__mercury_to_mercury__mercury_det_to_string_1_f_0(parse_tree__parse_tree_out_pred_decl__Det_50);
        }
#line 32 "parse_tree.parse_tree_out_info.int"
        parse_tree__parse_tree_out_pred_decl__func_12 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_19, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
        {
#line 32 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pred_decl__func_12(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_19), ((MR_Box) (parse_tree__parse_tree_out_pred_decl__V_53_53)), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pred_decl__conv13_STATE_VARIABLE_IO_17);
        }
#line 490 "parse_tree_out_pred_decl.m"
      }
#line 453 "parse_tree_out_pred_decl.m"
  }
#line 116 "parse_tree_out_pred_decl.m"
}

#line 111 "parse_tree_out_pred_decl.m"
MR_String MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_pred_mode_subdecl_to_string_5_f_0(
#line 111 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__Lang_7,
#line 111 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__VarSet_8,
#line 111 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__PredName_9,
#line 111 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__Modes_10,
#line 111 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__MaybeDet_11)
#line 111 "parse_tree_out_pred_decl.m"
{
#line 419 "parse_tree_out_pred_decl.m"
  {
#line 419 "parse_tree_out_pred_decl.m"
    MR_bool parse_tree__parse_tree_out_pred_decl__succeeded;
#line 419 "parse_tree_out_pred_decl.m"
    MR_String parse_tree__parse_tree_out_pred_decl__String_12;
#line 420 "parse_tree_out_pred_decl.m"
    MR_Box parse_tree__parse_tree_out_pred_decl__conv0_String_12;

#line 420 "parse_tree_out_pred_decl.m"
    {
#line 420 "parse_tree_out_pred_decl.m"
      parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_mode_subdecl_8_p_0((MR_Word) &parse_tree__parse_tree_out_pred_decl_scalar_common_1[1], parse_tree__parse_tree_out_pred_decl__Lang_7, parse_tree__parse_tree_out_pred_decl__VarSet_8, parse_tree__parse_tree_out_pred_decl__PredName_9, parse_tree__parse_tree_out_pred_decl__Modes_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__parse_tree_out_pred_decl__MaybeDet_11, ((MR_Box) ((MR_String) "")), &parse_tree__parse_tree_out_pred_decl__conv0_String_12);
    }
#line 420 "parse_tree_out_pred_decl.m"
    parse_tree__parse_tree_out_pred_decl__String_12 = ((MR_String) parse_tree__parse_tree_out_pred_decl__conv0_String_12);
#line 419 "parse_tree_out_pred_decl.m"
    return parse_tree__parse_tree_out_pred_decl__String_12;
#line 419 "parse_tree_out_pred_decl.m"
  }
#line 111 "parse_tree_out_pred_decl.m"
}

#line 108 "parse_tree_out_pred_decl.m"
void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_output_pred_mode_subdecl_7_p_0(
#line 108 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__Lang_8,
#line 108 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__VarSet_9,
#line 108 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__PredName_10,
#line 108 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__Modes_11,
#line 108 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__MaybeDet_12)
#line 108 "parse_tree_out_pred_decl.m"
{
#line 414 "parse_tree_out_pred_decl.m"
  {
#line 414 "parse_tree_out_pred_decl.m"
    MR_bool parse_tree__parse_tree_out_pred_decl__succeeded;
#line 415 "parse_tree_out_pred_decl.m"
    MR_Box parse_tree__parse_tree_out_pred_decl__conv0_STATE_VARIABLE_IO_15;

#line 415 "parse_tree_out_pred_decl.m"
    {
#line 415 "parse_tree_out_pred_decl.m"
      parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_mode_subdecl_8_p_0((MR_Word) &parse_tree__parse_tree_out_pred_decl_scalar_common_1[0], parse_tree__parse_tree_out_pred_decl__Lang_8, parse_tree__parse_tree_out_pred_decl__VarSet_9, parse_tree__parse_tree_out_pred_decl__PredName_10, parse_tree__parse_tree_out_pred_decl__Modes_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__parse_tree_out_pred_decl__MaybeDet_12, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pred_decl__conv0_STATE_VARIABLE_IO_15);
    }
#line 414 "parse_tree_out_pred_decl.m"
  }
#line 108 "parse_tree_out_pred_decl.m"
}

#line 103 "parse_tree_out_pred_decl.m"
MR_String MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_mode_subdecl_to_string_6_f_0(
#line 103 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__Lang_8,
#line 103 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__PredOrFunc_9,
#line 103 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__InstVarSet_10,
#line 103 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__Name_11,
#line 103 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__Modes_12,
#line 103 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__MaybeDet_13)
#line 103 "parse_tree_out_pred_decl.m"
{
#line 390 "parse_tree_out_pred_decl.m"
  {
#line 390 "parse_tree_out_pred_decl.m"
    MR_bool parse_tree__parse_tree_out_pred_decl__succeeded;
#line 390 "parse_tree_out_pred_decl.m"
    MR_String parse_tree__parse_tree_out_pred_decl__String_14;
#line 390 "parse_tree_out_pred_decl.m"
    MR_Word parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_16 = (MR_Word) &parse_tree__parse_tree_out_pred_decl_scalar_common_1[1];

#line 401 "parse_tree_out_pred_decl.m"
#line 401 "parse_tree_out_pred_decl.m"
    switch (parse_tree__parse_tree_out_pred_decl__PredOrFunc_9) {
#line 401 "parse_tree_out_pred_decl.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 401 "parse_tree_out_pred_decl.m"
      case (MR_Integer) 1:
#line 405 "parse_tree_out_pred_decl.m"
        {
#line 405 "parse_tree_out_pred_decl.m"
          MR_Word parse_tree__parse_tree_out_pred_decl__ArgModes_26;
#line 405 "parse_tree_out_pred_decl.m"
          MR_Word parse_tree__parse_tree_out_pred_decl__RetMode_27;
#line 405 "parse_tree_out_pred_decl.m"
          MR_String parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_27_50;
#line 405 "parse_tree_out_pred_decl.m"
          MR_String parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_29_52;
#line 405 "parse_tree_out_pred_decl.m"
          MR_Word parse_tree__parse_tree_out_pred_decl__V_53_53;
#line 405 "parse_tree_out_pred_decl.m"
          MR_String parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_31_54;
#line 406 "parse_tree_out_pred_decl.m"
          MR_Box parse_tree__parse_tree_out_pred_decl__conv0_RetMode_27;
#line 32 "parse_tree.parse_tree_out_info.int"
          void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_8)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
          MR_Box parse_tree__parse_tree_out_pred_decl__conv9_STATE_VARIABLE_U_29_52;
#line 478 "parse_tree_out_pred_decl.m"
          MR_Box parse_tree__parse_tree_out_pred_decl__conv10_STATE_VARIABLE_U_31_54;

#line 406 "parse_tree_out_pred_decl.m"
          {
#line 406 "parse_tree_out_pred_decl.m"
            parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, parse_tree__parse_tree_out_pred_decl__Modes_12, &parse_tree__parse_tree_out_pred_decl__ArgModes_26, &parse_tree__parse_tree_out_pred_decl__conv0_RetMode_27);
          }
#line 406 "parse_tree_out_pred_decl.m"
          parse_tree__parse_tree_out_pred_decl__RetMode_27 = ((MR_Word) parse_tree__parse_tree_out_pred_decl__conv0_RetMode_27);
#line 473 "parse_tree_out_pred_decl.m"
          if ((parse_tree__parse_tree_out_pred_decl__ArgModes_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 475 "parse_tree_out_pred_decl.m"
            {
#line 475 "parse_tree_out_pred_decl.m"
              MR_Box parse_tree__parse_tree_out_pred_decl__conv1_STATE_VARIABLE_U_27_50;

#line 475 "parse_tree_out_pred_decl.m"
              {
#line 475 "parse_tree_out_pred_decl.m"
                parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_3_p_0(parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_16, parse_tree__parse_tree_out_pred_decl__Name_11, ((MR_Box) ((MR_String) "")), &parse_tree__parse_tree_out_pred_decl__conv1_STATE_VARIABLE_U_27_50);
              }
#line 475 "parse_tree_out_pred_decl.m"
              parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_27_50 = ((MR_String) parse_tree__parse_tree_out_pred_decl__conv1_STATE_VARIABLE_U_27_50);
#line 475 "parse_tree_out_pred_decl.m"
            }
#line 473 "parse_tree_out_pred_decl.m"
          else
#line 468 "parse_tree_out_pred_decl.m"
            {
#line 468 "parse_tree_out_pred_decl.m"
              MR_String parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_21_44;
#line 468 "parse_tree_out_pred_decl.m"
              MR_String parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_23_46;
#line 468 "parse_tree_out_pred_decl.m"
              MR_Word parse_tree__parse_tree_out_pred_decl__V_47_47;
#line 468 "parse_tree_out_pred_decl.m"
              MR_String parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_25_48;
#line 469 "parse_tree_out_pred_decl.m"
              MR_Box parse_tree__parse_tree_out_pred_decl__conv2_STATE_VARIABLE_U_21_44;
#line 32 "parse_tree.parse_tree_out_info.int"
              void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_3)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
              MR_Box parse_tree__parse_tree_out_pred_decl__conv4_STATE_VARIABLE_U_23_46;
#line 471 "parse_tree_out_pred_decl.m"
              MR_Box parse_tree__parse_tree_out_pred_decl__conv5_STATE_VARIABLE_U_25_48;
#line 32 "parse_tree.parse_tree_out_info.int"
              void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_6)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
              MR_Box parse_tree__parse_tree_out_pred_decl__conv7_STATE_VARIABLE_U_27_50;

#line 469 "parse_tree_out_pred_decl.m"
              {
#line 469 "parse_tree_out_pred_decl.m"
                parse_tree__mercury_to_mercury__mercury_format_sym_name_3_p_0(parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_16, parse_tree__parse_tree_out_pred_decl__Name_11, ((MR_Box) ((MR_String) "")), &parse_tree__parse_tree_out_pred_decl__conv2_STATE_VARIABLE_U_21_44);
              }
#line 469 "parse_tree_out_pred_decl.m"
              parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_21_44 = ((MR_String) parse_tree__parse_tree_out_pred_decl__conv2_STATE_VARIABLE_U_21_44);
#line 32 "parse_tree.parse_tree_out_info.int"
              parse_tree__parse_tree_out_pred_decl__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_16, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
              {
#line 32 "parse_tree.parse_tree_out_info.int"
                parse_tree__parse_tree_out_pred_decl__func_3(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_16), ((MR_Box) ((MR_String) "(")), ((MR_Box) (parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_21_44)), &parse_tree__parse_tree_out_pred_decl__conv4_STATE_VARIABLE_U_23_46);
              }
#line 32 "parse_tree.parse_tree_out_info.int"
              parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_23_46 = ((MR_String) parse_tree__parse_tree_out_pred_decl__conv4_STATE_VARIABLE_U_23_46);
#line 471 "parse_tree_out_pred_decl.m"
              parse_tree__parse_tree_out_pred_decl__V_47_47 = (MR_Word) parse_tree__parse_tree_out_pred_decl__InstVarSet_10;
#line 471 "parse_tree_out_pred_decl.m"
              {
#line 471 "parse_tree_out_pred_decl.m"
                parse_tree__parse_tree_out_inst__mercury_format_mode_list_5_p_0(parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_16, (MR_Word) &parse_tree__parse_tree_out_pred_decl_scalar_common_1[2], parse_tree__parse_tree_out_pred_decl__Lang_8, ((MR_Box) (parse_tree__parse_tree_out_pred_decl__V_47_47)), parse_tree__parse_tree_out_pred_decl__ArgModes_26, ((MR_Box) (parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_23_46)), &parse_tree__parse_tree_out_pred_decl__conv5_STATE_VARIABLE_U_25_48);
              }
#line 471 "parse_tree_out_pred_decl.m"
              parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_25_48 = ((MR_String) parse_tree__parse_tree_out_pred_decl__conv5_STATE_VARIABLE_U_25_48);
#line 32 "parse_tree.parse_tree_out_info.int"
              parse_tree__parse_tree_out_pred_decl__func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_16, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
              {
#line 32 "parse_tree.parse_tree_out_info.int"
                parse_tree__parse_tree_out_pred_decl__func_6(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_16), ((MR_Box) ((MR_String) ")")), ((MR_Box) (parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_25_48)), &parse_tree__parse_tree_out_pred_decl__conv7_STATE_VARIABLE_U_27_50);
              }
#line 32 "parse_tree.parse_tree_out_info.int"
              parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_27_50 = ((MR_String) parse_tree__parse_tree_out_pred_decl__conv7_STATE_VARIABLE_U_27_50);
#line 468 "parse_tree_out_pred_decl.m"
            }
#line 32 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pred_decl__func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_16, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
          {
#line 32 "parse_tree.parse_tree_out_info.int"
            parse_tree__parse_tree_out_pred_decl__func_8(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_16), ((MR_Box) ((MR_String) " = ")), ((MR_Box) (parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_27_50)), &parse_tree__parse_tree_out_pred_decl__conv9_STATE_VARIABLE_U_29_52);
          }
#line 32 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_29_52 = ((MR_String) parse_tree__parse_tree_out_pred_decl__conv9_STATE_VARIABLE_U_29_52);
#line 478 "parse_tree_out_pred_decl.m"
          parse_tree__parse_tree_out_pred_decl__V_53_53 = (MR_Word) parse_tree__parse_tree_out_pred_decl__InstVarSet_10;
#line 478 "parse_tree_out_pred_decl.m"
          {
#line 478 "parse_tree_out_pred_decl.m"
            parse_tree__parse_tree_out_inst__mercury_format_mode_5_p_0(parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_16, (MR_Word) &parse_tree__parse_tree_out_pred_decl_scalar_common_1[2], parse_tree__parse_tree_out_pred_decl__Lang_8, ((MR_Box) (parse_tree__parse_tree_out_pred_decl__V_53_53)), parse_tree__parse_tree_out_pred_decl__RetMode_27, ((MR_Box) (parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_29_52)), &parse_tree__parse_tree_out_pred_decl__conv10_STATE_VARIABLE_U_31_54);
          }
#line 478 "parse_tree_out_pred_decl.m"
          parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_31_54 = ((MR_String) parse_tree__parse_tree_out_pred_decl__conv10_STATE_VARIABLE_U_31_54);
#line 488 "parse_tree_out_pred_decl.m"
          if ((parse_tree__parse_tree_out_pred_decl__MaybeDet_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 488 "parse_tree_out_pred_decl.m"
            parse_tree__parse_tree_out_pred_decl__String_14 = parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_31_54;
#line 488 "parse_tree_out_pred_decl.m"
          else
#line 490 "parse_tree_out_pred_decl.m"
            {
#line 490 "parse_tree_out_pred_decl.m"
              MR_Word parse_tree__parse_tree_out_pred_decl__Det_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pred_decl__MaybeDet_13, (MR_Integer) 0)));
#line 490 "parse_tree_out_pred_decl.m"
              MR_String parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_10_64;
#line 490 "parse_tree_out_pred_decl.m"
              MR_String parse_tree__parse_tree_out_pred_decl__V_65_65;
#line 32 "parse_tree.parse_tree_out_info.int"
              void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_11)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_16, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
              MR_Box parse_tree__parse_tree_out_pred_decl__conv12_STATE_VARIABLE_U_10_64;
#line 32 "parse_tree.parse_tree_out_info.int"
              void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_13)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
              MR_Box parse_tree__parse_tree_out_pred_decl__conv14_String_14;

#line 32 "parse_tree.parse_tree_out_info.int"
              {
#line 32 "parse_tree.parse_tree_out_info.int"
                parse_tree__parse_tree_out_pred_decl__func_11(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_16), ((MR_Box) ((MR_String) " is ")), ((MR_Box) (parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_31_54)), &parse_tree__parse_tree_out_pred_decl__conv12_STATE_VARIABLE_U_10_64);
              }
#line 32 "parse_tree.parse_tree_out_info.int"
              parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_10_64 = ((MR_String) parse_tree__parse_tree_out_pred_decl__conv12_STATE_VARIABLE_U_10_64);
#line 492 "parse_tree_out_pred_decl.m"
              {
#line 492 "parse_tree_out_pred_decl.m"
                parse_tree__parse_tree_out_pred_decl__V_65_65 = parse_tree__mercury_to_mercury__mercury_det_to_string_1_f_0(parse_tree__parse_tree_out_pred_decl__Det_62);
              }
#line 32 "parse_tree.parse_tree_out_info.int"
              parse_tree__parse_tree_out_pred_decl__func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_16, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
              {
#line 32 "parse_tree.parse_tree_out_info.int"
                parse_tree__parse_tree_out_pred_decl__func_13(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_16), ((MR_Box) (parse_tree__parse_tree_out_pred_decl__V_65_65)), ((MR_Box) (parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_10_64)), &parse_tree__parse_tree_out_pred_decl__conv14_String_14);
              }
#line 32 "parse_tree.parse_tree_out_info.int"
              parse_tree__parse_tree_out_pred_decl__String_14 = ((MR_String) parse_tree__parse_tree_out_pred_decl__conv14_String_14);
#line 490 "parse_tree_out_pred_decl.m"
            }
#line 405 "parse_tree_out_pred_decl.m"
        }
#line 401 "parse_tree_out_pred_decl.m"
        break;
#line 401 "parse_tree_out_pred_decl.m"
      case (MR_Integer) 0:
#line 401 "parse_tree_out_pred_decl.m"
        {
#line 402 "parse_tree_out_pred_decl.m"
          MR_Box parse_tree__parse_tree_out_pred_decl__conv15_String_14;

#line 402 "parse_tree_out_pred_decl.m"
          {
#line 402 "parse_tree_out_pred_decl.m"
            parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_mode_subdecl_8_p_0(parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_16, parse_tree__parse_tree_out_pred_decl__Lang_8, parse_tree__parse_tree_out_pred_decl__InstVarSet_10, parse_tree__parse_tree_out_pred_decl__Name_11, parse_tree__parse_tree_out_pred_decl__Modes_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__parse_tree_out_pred_decl__MaybeDet_13, ((MR_Box) ((MR_String) "")), &parse_tree__parse_tree_out_pred_decl__conv15_String_14);
          }
#line 402 "parse_tree_out_pred_decl.m"
          parse_tree__parse_tree_out_pred_decl__String_14 = ((MR_String) parse_tree__parse_tree_out_pred_decl__conv15_String_14);
#line 401 "parse_tree_out_pred_decl.m"
        }
#line 401 "parse_tree_out_pred_decl.m"
        break;
#line 401 "parse_tree_out_pred_decl.m"
    }
#line 390 "parse_tree_out_pred_decl.m"
    return parse_tree__parse_tree_out_pred_decl__String_14;
#line 390 "parse_tree_out_pred_decl.m"
  }
#line 103 "parse_tree_out_pred_decl.m"
}

#line 100 "parse_tree_out_pred_decl.m"
void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_output_mode_subdecl_8_p_0(
#line 100 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__Lang_9,
#line 100 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__PredOrFunc_10,
#line 100 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__InstVarSet_11,
#line 100 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__Name_12,
#line 100 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__Modes_13,
#line 100 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__MaybeDet_14)
#line 100 "parse_tree_out_pred_decl.m"
{
#line 386 "parse_tree_out_pred_decl.m"
  {
#line 386 "parse_tree_out_pred_decl.m"
    MR_bool parse_tree__parse_tree_out_pred_decl__succeeded;
#line 386 "parse_tree_out_pred_decl.m"
    MR_Word parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_19 = (MR_Word) &parse_tree__parse_tree_out_pred_decl_scalar_common_1[0];

#line 401 "parse_tree_out_pred_decl.m"
#line 401 "parse_tree_out_pred_decl.m"
    switch (parse_tree__parse_tree_out_pred_decl__PredOrFunc_10) {
#line 401 "parse_tree_out_pred_decl.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 401 "parse_tree_out_pred_decl.m"
      case (MR_Integer) 1:
#line 405 "parse_tree_out_pred_decl.m"
        {
#line 405 "parse_tree_out_pred_decl.m"
          MR_Word parse_tree__parse_tree_out_pred_decl__ArgModes_29;
#line 405 "parse_tree_out_pred_decl.m"
          MR_Word parse_tree__parse_tree_out_pred_decl__RetMode_30;
#line 405 "parse_tree_out_pred_decl.m"
          MR_Word parse_tree__parse_tree_out_pred_decl__V_56_56;
#line 406 "parse_tree_out_pred_decl.m"
          MR_Box parse_tree__parse_tree_out_pred_decl__conv0_RetMode_30;
#line 32 "parse_tree.parse_tree_out_info.int"
          void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_8)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
          MR_Box parse_tree__parse_tree_out_pred_decl__conv9_STATE_VARIABLE_U_29_55;
#line 478 "parse_tree_out_pred_decl.m"
          MR_Box parse_tree__parse_tree_out_pred_decl__conv10_STATE_VARIABLE_U_31_57;

#line 406 "parse_tree_out_pred_decl.m"
          {
#line 406 "parse_tree_out_pred_decl.m"
            parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, parse_tree__parse_tree_out_pred_decl__Modes_13, &parse_tree__parse_tree_out_pred_decl__ArgModes_29, &parse_tree__parse_tree_out_pred_decl__conv0_RetMode_30);
          }
#line 406 "parse_tree_out_pred_decl.m"
          parse_tree__parse_tree_out_pred_decl__RetMode_30 = ((MR_Word) parse_tree__parse_tree_out_pred_decl__conv0_RetMode_30);
#line 473 "parse_tree_out_pred_decl.m"
          if ((parse_tree__parse_tree_out_pred_decl__ArgModes_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 475 "parse_tree_out_pred_decl.m"
            {
#line 475 "parse_tree_out_pred_decl.m"
              MR_Box parse_tree__parse_tree_out_pred_decl__conv1_STATE_VARIABLE_U_27_53;

#line 475 "parse_tree_out_pred_decl.m"
              {
#line 475 "parse_tree_out_pred_decl.m"
                parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_3_p_0(parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_19, parse_tree__parse_tree_out_pred_decl__Name_12, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pred_decl__conv1_STATE_VARIABLE_U_27_53);
              }
#line 475 "parse_tree_out_pred_decl.m"
            }
#line 473 "parse_tree_out_pred_decl.m"
          else
#line 468 "parse_tree_out_pred_decl.m"
            {
#line 468 "parse_tree_out_pred_decl.m"
              MR_Word parse_tree__parse_tree_out_pred_decl__V_50_50;
#line 469 "parse_tree_out_pred_decl.m"
              MR_Box parse_tree__parse_tree_out_pred_decl__conv2_STATE_VARIABLE_U_21_47;
#line 32 "parse_tree.parse_tree_out_info.int"
              void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_3)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
              MR_Box parse_tree__parse_tree_out_pred_decl__conv4_STATE_VARIABLE_U_23_49;
#line 471 "parse_tree_out_pred_decl.m"
              MR_Box parse_tree__parse_tree_out_pred_decl__conv5_STATE_VARIABLE_U_25_51;
#line 32 "parse_tree.parse_tree_out_info.int"
              void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_6)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
              MR_Box parse_tree__parse_tree_out_pred_decl__conv7_STATE_VARIABLE_U_27_53;

#line 469 "parse_tree_out_pred_decl.m"
              {
#line 469 "parse_tree_out_pred_decl.m"
                parse_tree__mercury_to_mercury__mercury_format_sym_name_3_p_0(parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_19, parse_tree__parse_tree_out_pred_decl__Name_12, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pred_decl__conv2_STATE_VARIABLE_U_21_47);
              }
#line 32 "parse_tree.parse_tree_out_info.int"
              parse_tree__parse_tree_out_pred_decl__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_19, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
              {
#line 32 "parse_tree.parse_tree_out_info.int"
                parse_tree__parse_tree_out_pred_decl__func_3(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_19), ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pred_decl__conv4_STATE_VARIABLE_U_23_49);
              }
#line 471 "parse_tree_out_pred_decl.m"
              parse_tree__parse_tree_out_pred_decl__V_50_50 = (MR_Word) parse_tree__parse_tree_out_pred_decl__InstVarSet_11;
#line 471 "parse_tree_out_pred_decl.m"
              {
#line 471 "parse_tree_out_pred_decl.m"
                parse_tree__parse_tree_out_inst__mercury_format_mode_list_5_p_0(parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_19, (MR_Word) &parse_tree__parse_tree_out_pred_decl_scalar_common_1[2], parse_tree__parse_tree_out_pred_decl__Lang_9, ((MR_Box) (parse_tree__parse_tree_out_pred_decl__V_50_50)), parse_tree__parse_tree_out_pred_decl__ArgModes_29, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pred_decl__conv5_STATE_VARIABLE_U_25_51);
              }
#line 32 "parse_tree.parse_tree_out_info.int"
              parse_tree__parse_tree_out_pred_decl__func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_19, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
              {
#line 32 "parse_tree.parse_tree_out_info.int"
                parse_tree__parse_tree_out_pred_decl__func_6(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_19), ((MR_Box) ((MR_String) ")")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pred_decl__conv7_STATE_VARIABLE_U_27_53);
              }
#line 468 "parse_tree_out_pred_decl.m"
            }
#line 32 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pred_decl__func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_19, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
          {
#line 32 "parse_tree.parse_tree_out_info.int"
            parse_tree__parse_tree_out_pred_decl__func_8(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_19), ((MR_Box) ((MR_String) " = ")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pred_decl__conv9_STATE_VARIABLE_U_29_55);
          }
#line 478 "parse_tree_out_pred_decl.m"
          parse_tree__parse_tree_out_pred_decl__V_56_56 = (MR_Word) parse_tree__parse_tree_out_pred_decl__InstVarSet_11;
#line 478 "parse_tree_out_pred_decl.m"
          {
#line 478 "parse_tree_out_pred_decl.m"
            parse_tree__parse_tree_out_inst__mercury_format_mode_5_p_0(parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_19, (MR_Word) &parse_tree__parse_tree_out_pred_decl_scalar_common_1[2], parse_tree__parse_tree_out_pred_decl__Lang_9, ((MR_Box) (parse_tree__parse_tree_out_pred_decl__V_56_56)), parse_tree__parse_tree_out_pred_decl__RetMode_30, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pred_decl__conv10_STATE_VARIABLE_U_31_57);
          }
#line 488 "parse_tree_out_pred_decl.m"
          if ((parse_tree__parse_tree_out_pred_decl__MaybeDet_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 488 "parse_tree_out_pred_decl.m"
            {
#line 488 "parse_tree_out_pred_decl.m"
            }
#line 488 "parse_tree_out_pred_decl.m"
          else
#line 490 "parse_tree_out_pred_decl.m"
            {
#line 490 "parse_tree_out_pred_decl.m"
              MR_Word parse_tree__parse_tree_out_pred_decl__Det_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pred_decl__MaybeDet_14, (MR_Integer) 0)));
#line 490 "parse_tree_out_pred_decl.m"
              MR_String parse_tree__parse_tree_out_pred_decl__V_68_68;
#line 32 "parse_tree.parse_tree_out_info.int"
              void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_11)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_19, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
              MR_Box parse_tree__parse_tree_out_pred_decl__conv12_STATE_VARIABLE_U_10_67;
#line 32 "parse_tree.parse_tree_out_info.int"
              void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_13)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
              MR_Box parse_tree__parse_tree_out_pred_decl__conv14_STATE_VARIABLE_IO_17;

#line 32 "parse_tree.parse_tree_out_info.int"
              {
#line 32 "parse_tree.parse_tree_out_info.int"
                parse_tree__parse_tree_out_pred_decl__func_11(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_19), ((MR_Box) ((MR_String) " is ")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pred_decl__conv12_STATE_VARIABLE_U_10_67);
              }
#line 492 "parse_tree_out_pred_decl.m"
              {
#line 492 "parse_tree_out_pred_decl.m"
                parse_tree__parse_tree_out_pred_decl__V_68_68 = parse_tree__mercury_to_mercury__mercury_det_to_string_1_f_0(parse_tree__parse_tree_out_pred_decl__Det_65);
              }
#line 32 "parse_tree.parse_tree_out_info.int"
              parse_tree__parse_tree_out_pred_decl__func_13 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_19, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
              {
#line 32 "parse_tree.parse_tree_out_info.int"
                parse_tree__parse_tree_out_pred_decl__func_13(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_19), ((MR_Box) (parse_tree__parse_tree_out_pred_decl__V_68_68)), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pred_decl__conv14_STATE_VARIABLE_IO_17);
              }
#line 490 "parse_tree_out_pred_decl.m"
            }
#line 405 "parse_tree_out_pred_decl.m"
        }
#line 401 "parse_tree_out_pred_decl.m"
        break;
#line 401 "parse_tree_out_pred_decl.m"
      case (MR_Integer) 0:
#line 401 "parse_tree_out_pred_decl.m"
        {
#line 402 "parse_tree_out_pred_decl.m"
          MR_Box parse_tree__parse_tree_out_pred_decl__conv15_STATE_VARIABLE_IO_17;

#line 402 "parse_tree_out_pred_decl.m"
          {
#line 402 "parse_tree_out_pred_decl.m"
            parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_mode_subdecl_8_p_0(parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_19, parse_tree__parse_tree_out_pred_decl__Lang_9, parse_tree__parse_tree_out_pred_decl__InstVarSet_11, parse_tree__parse_tree_out_pred_decl__Name_12, parse_tree__parse_tree_out_pred_decl__Modes_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__parse_tree_out_pred_decl__MaybeDet_14, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pred_decl__conv15_STATE_VARIABLE_IO_17);
          }
#line 401 "parse_tree_out_pred_decl.m"
        }
#line 401 "parse_tree_out_pred_decl.m"
        break;
#line 401 "parse_tree_out_pred_decl.m"
    }
#line 386 "parse_tree_out_pred_decl.m"
  }
#line 100 "parse_tree_out_pred_decl.m"
}

#line 93 "parse_tree_out_pred_decl.m"
void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_format_func_mode_decl_10_p_0(
#line 93 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_27,
#line 93 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__Lang_11,
#line 93 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__VarSet_12,
#line 93 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__FuncName_13,
#line 93 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__Modes_14,
#line 93 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__RetMode_15,
#line 93 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__MaybeDet_16,
#line 93 "parse_tree_out_pred_decl.m"
  MR_String parse_tree__parse_tree_out_pred_decl__StartString_17,
#line 93 "parse_tree_out_pred_decl.m"
  MR_String parse_tree__parse_tree_out_pred_decl__Separator_18,
#line 93 "parse_tree_out_pred_decl.m"
  MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_0_20,
#line 93 "parse_tree_out_pred_decl.m"
  MR_Box * parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_21)
#line 93 "parse_tree_out_pred_decl.m"
{
#line 375 "parse_tree_out_pred_decl.m"
  {
#line 375 "parse_tree_out_pred_decl.m"
    MR_bool parse_tree__parse_tree_out_pred_decl__succeeded;
#line 375 "parse_tree_out_pred_decl.m"
    MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_22_22;
#line 375 "parse_tree_out_pred_decl.m"
    MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_24_24;
#line 375 "parse_tree_out_pred_decl.m"
    MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_25_25;
#line 375 "parse_tree_out_pred_decl.m"
    MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_27_46;
#line 375 "parse_tree_out_pred_decl.m"
    MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_29_48;
#line 375 "parse_tree_out_pred_decl.m"
    MR_Word parse_tree__parse_tree_out_pred_decl__V_49_49;
#line 375 "parse_tree_out_pred_decl.m"
    MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_31_50;
#line 32 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_27, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_4)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_7)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 32 "parse_tree.parse_tree_out_info.int"
    {
#line 32 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pred_decl__func_0(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_27), ((MR_Box) (parse_tree__parse_tree_out_pred_decl__StartString_17)), parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_0_20, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_22_22);
    }
#line 32 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pred_decl__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_27, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
    {
#line 32 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pred_decl__func_1(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_27), ((MR_Box) ((MR_String) "mode ")), parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_22_22, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_24_24);
    }
#line 473 "parse_tree_out_pred_decl.m"
    if ((parse_tree__parse_tree_out_pred_decl__Modes_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 475 "parse_tree_out_pred_decl.m"
      {
#line 475 "parse_tree_out_pred_decl.m"
        parse_tree__mercury_to_mercury__mercury_format_bracketed_sym_name_3_p_0(parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_27, parse_tree__parse_tree_out_pred_decl__FuncName_13, parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_24_24, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_27_46);
      }
#line 473 "parse_tree_out_pred_decl.m"
    else
#line 468 "parse_tree_out_pred_decl.m"
      {
#line 468 "parse_tree_out_pred_decl.m"
        MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_21_40;
#line 468 "parse_tree_out_pred_decl.m"
        MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_23_42;
#line 468 "parse_tree_out_pred_decl.m"
        MR_Word parse_tree__parse_tree_out_pred_decl__V_43_43;
#line 468 "parse_tree_out_pred_decl.m"
        MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_25_44;
#line 32 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_3)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 469 "parse_tree_out_pred_decl.m"
        {
#line 469 "parse_tree_out_pred_decl.m"
          parse_tree__mercury_to_mercury__mercury_format_sym_name_3_p_0(parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_27, parse_tree__parse_tree_out_pred_decl__FuncName_13, parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_24_24, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_21_40);
        }
#line 32 "parse_tree.parse_tree_out_info.int"
        parse_tree__parse_tree_out_pred_decl__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_27, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
        {
#line 32 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pred_decl__func_2(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_27), ((MR_Box) ((MR_String) "(")), parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_21_40, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_23_42);
        }
#line 471 "parse_tree_out_pred_decl.m"
        parse_tree__parse_tree_out_pred_decl__V_43_43 = (MR_Word) parse_tree__parse_tree_out_pred_decl__VarSet_12;
#line 471 "parse_tree_out_pred_decl.m"
        {
#line 471 "parse_tree_out_pred_decl.m"
          parse_tree__parse_tree_out_inst__mercury_format_mode_list_5_p_0(parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_27, (MR_Word) &parse_tree__parse_tree_out_pred_decl_scalar_common_1[2], parse_tree__parse_tree_out_pred_decl__Lang_11, ((MR_Box) (parse_tree__parse_tree_out_pred_decl__V_43_43)), parse_tree__parse_tree_out_pred_decl__Modes_14, parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_23_42, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_25_44);
        }
#line 32 "parse_tree.parse_tree_out_info.int"
        parse_tree__parse_tree_out_pred_decl__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_27, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
        {
#line 32 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pred_decl__func_3(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_27), ((MR_Box) ((MR_String) ")")), parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_25_44, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_27_46);
        }
#line 468 "parse_tree_out_pred_decl.m"
      }
#line 32 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pred_decl__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_27, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
    {
#line 32 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pred_decl__func_4(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_27), ((MR_Box) ((MR_String) " = ")), parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_27_46, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_29_48);
    }
#line 478 "parse_tree_out_pred_decl.m"
    parse_tree__parse_tree_out_pred_decl__V_49_49 = (MR_Word) parse_tree__parse_tree_out_pred_decl__VarSet_12;
#line 478 "parse_tree_out_pred_decl.m"
    {
#line 478 "parse_tree_out_pred_decl.m"
      parse_tree__parse_tree_out_inst__mercury_format_mode_5_p_0(parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_27, (MR_Word) &parse_tree__parse_tree_out_pred_decl_scalar_common_1[2], parse_tree__parse_tree_out_pred_decl__Lang_11, ((MR_Box) (parse_tree__parse_tree_out_pred_decl__V_49_49)), parse_tree__parse_tree_out_pred_decl__RetMode_15, parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_29_48, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_31_50);
    }
#line 488 "parse_tree_out_pred_decl.m"
    if ((parse_tree__parse_tree_out_pred_decl__MaybeDet_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 488 "parse_tree_out_pred_decl.m"
      parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_25_25 = parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_31_50;
#line 488 "parse_tree_out_pred_decl.m"
    else
#line 490 "parse_tree_out_pred_decl.m"
      {
#line 490 "parse_tree_out_pred_decl.m"
        MR_Word parse_tree__parse_tree_out_pred_decl__Det_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pred_decl__MaybeDet_16, (MR_Integer) 0)));
#line 490 "parse_tree_out_pred_decl.m"
        MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_10_60;
#line 490 "parse_tree_out_pred_decl.m"
        MR_String parse_tree__parse_tree_out_pred_decl__V_61_61;
#line 32 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_5)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_27, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_6)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 32 "parse_tree.parse_tree_out_info.int"
        {
#line 32 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pred_decl__func_5(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_27), ((MR_Box) ((MR_String) " is ")), parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_31_50, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_10_60);
        }
#line 492 "parse_tree_out_pred_decl.m"
        {
#line 492 "parse_tree_out_pred_decl.m"
          parse_tree__parse_tree_out_pred_decl__V_61_61 = parse_tree__mercury_to_mercury__mercury_det_to_string_1_f_0(parse_tree__parse_tree_out_pred_decl__Det_58);
        }
#line 32 "parse_tree.parse_tree_out_info.int"
        parse_tree__parse_tree_out_pred_decl__func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_27, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
        {
#line 32 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pred_decl__func_6(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_27), ((MR_Box) (parse_tree__parse_tree_out_pred_decl__V_61_61)), parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_10_60, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_25_25);
        }
#line 490 "parse_tree_out_pred_decl.m"
      }
#line 32 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pred_decl__func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_27, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
    {
#line 32 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pred_decl__func_7(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_27), ((MR_Box) (parse_tree__parse_tree_out_pred_decl__Separator_18)), parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_25_25, parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_21);
    }
#line 375 "parse_tree_out_pred_decl.m"
  }
#line 93 "parse_tree_out_pred_decl.m"
}

#line 91 "parse_tree_out_pred_decl.m"
MR_String MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_func_mode_decl_to_string_6_f_0(
#line 91 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__Lang_8,
#line 91 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__VarSet_9,
#line 91 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__FuncName_10,
#line 91 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__Modes_11,
#line 91 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__RetMode_12,
#line 91 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__MaybeDet_13)
#line 91 "parse_tree_out_pred_decl.m"
{
#line 370 "parse_tree_out_pred_decl.m"
  {
#line 370 "parse_tree_out_pred_decl.m"
    MR_bool parse_tree__parse_tree_out_pred_decl__succeeded;
#line 370 "parse_tree_out_pred_decl.m"
    MR_String parse_tree__parse_tree_out_pred_decl__String_14;
#line 371 "parse_tree_out_pred_decl.m"
    MR_Box parse_tree__parse_tree_out_pred_decl__conv0_String_14;

#line 371 "parse_tree_out_pred_decl.m"
    {
#line 371 "parse_tree_out_pred_decl.m"
      parse_tree__parse_tree_out_pred_decl__mercury_format_func_mode_decl_10_p_0((MR_Word) &parse_tree__parse_tree_out_pred_decl_scalar_common_1[1], parse_tree__parse_tree_out_pred_decl__Lang_8, parse_tree__parse_tree_out_pred_decl__VarSet_9, parse_tree__parse_tree_out_pred_decl__FuncName_10, parse_tree__parse_tree_out_pred_decl__Modes_11, parse_tree__parse_tree_out_pred_decl__RetMode_12, parse_tree__parse_tree_out_pred_decl__MaybeDet_13, (MR_String) ":- ", (MR_String) ".\n", ((MR_Box) ((MR_String) "")), &parse_tree__parse_tree_out_pred_decl__conv0_String_14);
    }
#line 371 "parse_tree_out_pred_decl.m"
    parse_tree__parse_tree_out_pred_decl__String_14 = ((MR_String) parse_tree__parse_tree_out_pred_decl__conv0_String_14);
#line 370 "parse_tree_out_pred_decl.m"
    return parse_tree__parse_tree_out_pred_decl__String_14;
#line 370 "parse_tree_out_pred_decl.m"
  }
#line 91 "parse_tree_out_pred_decl.m"
}

#line 88 "parse_tree_out_pred_decl.m"
void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_output_func_mode_decl_8_p_0(
#line 88 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__Lang_9,
#line 88 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__VarSet_10,
#line 88 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__FuncName_11,
#line 88 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__Modes_12,
#line 88 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__RetMode_13,
#line 88 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__MaybeDet_14)
#line 88 "parse_tree_out_pred_decl.m"
{
#line 365 "parse_tree_out_pred_decl.m"
  {
#line 365 "parse_tree_out_pred_decl.m"
    MR_bool parse_tree__parse_tree_out_pred_decl__succeeded;
#line 366 "parse_tree_out_pred_decl.m"
    MR_Box parse_tree__parse_tree_out_pred_decl__conv0_STATE_VARIABLE_IO_17;

#line 366 "parse_tree_out_pred_decl.m"
    {
#line 366 "parse_tree_out_pred_decl.m"
      parse_tree__parse_tree_out_pred_decl__mercury_format_func_mode_decl_10_p_0((MR_Word) &parse_tree__parse_tree_out_pred_decl_scalar_common_1[0], parse_tree__parse_tree_out_pred_decl__Lang_9, parse_tree__parse_tree_out_pred_decl__VarSet_10, parse_tree__parse_tree_out_pred_decl__FuncName_11, parse_tree__parse_tree_out_pred_decl__Modes_12, parse_tree__parse_tree_out_pred_decl__RetMode_13, parse_tree__parse_tree_out_pred_decl__MaybeDet_14, (MR_String) ":- ", (MR_String) ".\n", ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pred_decl__conv0_STATE_VARIABLE_IO_17);
    }
#line 365 "parse_tree_out_pred_decl.m"
  }
#line 88 "parse_tree_out_pred_decl.m"
}

#line 81 "parse_tree_out_pred_decl.m"
void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_mode_decl_10_p_0(
#line 81 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_27,
#line 81 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__Lang_11,
#line 81 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__VarSet_12,
#line 81 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__PredName_13,
#line 81 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__Modes_14,
#line 81 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__WithInst_15,
#line 81 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__MaybeDet_16,
#line 81 "parse_tree_out_pred_decl.m"
  MR_String parse_tree__parse_tree_out_pred_decl__StartString_17,
#line 81 "parse_tree_out_pred_decl.m"
  MR_String parse_tree__parse_tree_out_pred_decl__Separator_18,
#line 81 "parse_tree_out_pred_decl.m"
  MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_0_20,
#line 81 "parse_tree_out_pred_decl.m"
  MR_Box * parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_21)
#line 81 "parse_tree_out_pred_decl.m"
{
#line 355 "parse_tree_out_pred_decl.m"
  {
#line 355 "parse_tree_out_pred_decl.m"
    MR_bool parse_tree__parse_tree_out_pred_decl__succeeded;
#line 355 "parse_tree_out_pred_decl.m"
    MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_22_22;
#line 355 "parse_tree_out_pred_decl.m"
    MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_24_24;
#line 355 "parse_tree_out_pred_decl.m"
    MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_25_25;
#line 32 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_27, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 32 "parse_tree.parse_tree_out_info.int"
    {
#line 32 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pred_decl__func_0(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_27), ((MR_Box) (parse_tree__parse_tree_out_pred_decl__StartString_17)), parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_0_20, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_22_22);
    }
#line 32 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pred_decl__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_27, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
    {
#line 32 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pred_decl__func_1(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_27), ((MR_Box) ((MR_String) "mode ")), parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_22_22, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_24_24);
    }
#line 358 "parse_tree_out_pred_decl.m"
    {
#line 358 "parse_tree_out_pred_decl.m"
      parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_mode_subdecl_8_p_0(parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_27, parse_tree__parse_tree_out_pred_decl__Lang_11, parse_tree__parse_tree_out_pred_decl__VarSet_12, parse_tree__parse_tree_out_pred_decl__PredName_13, parse_tree__parse_tree_out_pred_decl__Modes_14, parse_tree__parse_tree_out_pred_decl__WithInst_15, parse_tree__parse_tree_out_pred_decl__MaybeDet_16, parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_24_24, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_25_25);
    }
#line 32 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pred_decl__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_27, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
    {
#line 32 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pred_decl__func_2(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_27), ((MR_Box) (parse_tree__parse_tree_out_pred_decl__Separator_18)), parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_25_25, parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_21);
    }
#line 355 "parse_tree_out_pred_decl.m"
  }
#line 81 "parse_tree_out_pred_decl.m"
}

#line 79 "parse_tree_out_pred_decl.m"
MR_String MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_pred_mode_decl_to_string_6_f_0(
#line 79 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__Lang_8,
#line 79 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__VarSet_9,
#line 79 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__PredName_10,
#line 79 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__Modes_11,
#line 79 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__MaybeWithInst_12,
#line 79 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__MaybeDet_13)
#line 79 "parse_tree_out_pred_decl.m"
{
#line 350 "parse_tree_out_pred_decl.m"
  {
#line 350 "parse_tree_out_pred_decl.m"
    MR_bool parse_tree__parse_tree_out_pred_decl__succeeded;
#line 350 "parse_tree_out_pred_decl.m"
    MR_String parse_tree__parse_tree_out_pred_decl__String_14;
#line 350 "parse_tree_out_pred_decl.m"
    MR_Word parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_18 = (MR_Word) &parse_tree__parse_tree_out_pred_decl_scalar_common_1[1];
#line 350 "parse_tree_out_pred_decl.m"
    MR_String parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_22_30;
#line 350 "parse_tree_out_pred_decl.m"
    MR_String parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_24_32;
#line 350 "parse_tree_out_pred_decl.m"
    MR_String parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_25_33;
#line 32 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_18, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
    MR_Box parse_tree__parse_tree_out_pred_decl__conv1_STATE_VARIABLE_U_22_30;
#line 32 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
    MR_Box parse_tree__parse_tree_out_pred_decl__conv3_STATE_VARIABLE_U_24_32;
#line 358 "parse_tree_out_pred_decl.m"
    MR_Box parse_tree__parse_tree_out_pred_decl__conv4_STATE_VARIABLE_U_25_33;
#line 32 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_5)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
    MR_Box parse_tree__parse_tree_out_pred_decl__conv6_String_14;

#line 32 "parse_tree.parse_tree_out_info.int"
    {
#line 32 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pred_decl__func_0(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_18), ((MR_Box) ((MR_String) ":- ")), ((MR_Box) ((MR_String) "")), &parse_tree__parse_tree_out_pred_decl__conv1_STATE_VARIABLE_U_22_30);
    }
#line 32 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_22_30 = ((MR_String) parse_tree__parse_tree_out_pred_decl__conv1_STATE_VARIABLE_U_22_30);
#line 32 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pred_decl__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_18, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
    {
#line 32 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pred_decl__func_2(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_18), ((MR_Box) ((MR_String) "mode ")), ((MR_Box) (parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_22_30)), &parse_tree__parse_tree_out_pred_decl__conv3_STATE_VARIABLE_U_24_32);
    }
#line 32 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_24_32 = ((MR_String) parse_tree__parse_tree_out_pred_decl__conv3_STATE_VARIABLE_U_24_32);
#line 358 "parse_tree_out_pred_decl.m"
    {
#line 358 "parse_tree_out_pred_decl.m"
      parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_mode_subdecl_8_p_0(parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_18, parse_tree__parse_tree_out_pred_decl__Lang_8, parse_tree__parse_tree_out_pred_decl__VarSet_9, parse_tree__parse_tree_out_pred_decl__PredName_10, parse_tree__parse_tree_out_pred_decl__Modes_11, parse_tree__parse_tree_out_pred_decl__MaybeWithInst_12, parse_tree__parse_tree_out_pred_decl__MaybeDet_13, ((MR_Box) (parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_24_32)), &parse_tree__parse_tree_out_pred_decl__conv4_STATE_VARIABLE_U_25_33);
    }
#line 358 "parse_tree_out_pred_decl.m"
    parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_25_33 = ((MR_String) parse_tree__parse_tree_out_pred_decl__conv4_STATE_VARIABLE_U_25_33);
#line 32 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pred_decl__func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_18, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
    {
#line 32 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pred_decl__func_5(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_18), ((MR_Box) ((MR_String) ".\n")), ((MR_Box) (parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_25_33)), &parse_tree__parse_tree_out_pred_decl__conv6_String_14);
    }
#line 32 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pred_decl__String_14 = ((MR_String) parse_tree__parse_tree_out_pred_decl__conv6_String_14);
#line 350 "parse_tree_out_pred_decl.m"
    return parse_tree__parse_tree_out_pred_decl__String_14;
#line 350 "parse_tree_out_pred_decl.m"
  }
#line 79 "parse_tree_out_pred_decl.m"
}

#line 76 "parse_tree_out_pred_decl.m"
void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_output_pred_mode_decl_8_p_0(
#line 76 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__Lang_9,
#line 76 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__VarSet_10,
#line 76 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__PredName_11,
#line 76 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__Modes_12,
#line 76 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__WithInst_13,
#line 76 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__MaybeDet_14)
#line 76 "parse_tree_out_pred_decl.m"
{
#line 345 "parse_tree_out_pred_decl.m"
  {
#line 345 "parse_tree_out_pred_decl.m"
    MR_bool parse_tree__parse_tree_out_pred_decl__succeeded;
#line 345 "parse_tree_out_pred_decl.m"
    MR_Word parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_21 = (MR_Word) &parse_tree__parse_tree_out_pred_decl_scalar_common_1[0];
#line 32 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_21, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
    MR_Box parse_tree__parse_tree_out_pred_decl__conv1_STATE_VARIABLE_U_22_33;
#line 32 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
    MR_Box parse_tree__parse_tree_out_pred_decl__conv3_STATE_VARIABLE_U_24_35;
#line 358 "parse_tree_out_pred_decl.m"
    MR_Box parse_tree__parse_tree_out_pred_decl__conv4_STATE_VARIABLE_U_25_36;
#line 32 "parse_tree.parse_tree_out_info.int"
    void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_5)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
    MR_Box parse_tree__parse_tree_out_pred_decl__conv6_STATE_VARIABLE_IO_17;

#line 32 "parse_tree.parse_tree_out_info.int"
    {
#line 32 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pred_decl__func_0(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_21), ((MR_Box) ((MR_String) ":- ")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pred_decl__conv1_STATE_VARIABLE_U_22_33);
    }
#line 32 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pred_decl__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_21, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
    {
#line 32 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pred_decl__func_2(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_21), ((MR_Box) ((MR_String) "mode ")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pred_decl__conv3_STATE_VARIABLE_U_24_35);
    }
#line 358 "parse_tree_out_pred_decl.m"
    {
#line 358 "parse_tree_out_pred_decl.m"
      parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_mode_subdecl_8_p_0(parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_21, parse_tree__parse_tree_out_pred_decl__Lang_9, parse_tree__parse_tree_out_pred_decl__VarSet_10, parse_tree__parse_tree_out_pred_decl__PredName_11, parse_tree__parse_tree_out_pred_decl__Modes_12, parse_tree__parse_tree_out_pred_decl__WithInst_13, parse_tree__parse_tree_out_pred_decl__MaybeDet_14, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pred_decl__conv4_STATE_VARIABLE_U_25_36);
    }
#line 32 "parse_tree.parse_tree_out_info.int"
    parse_tree__parse_tree_out_pred_decl__func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_21, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
    {
#line 32 "parse_tree.parse_tree_out_info.int"
      parse_tree__parse_tree_out_pred_decl__func_5(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_21), ((MR_Box) ((MR_String) ".\n")), ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pred_decl__conv6_STATE_VARIABLE_IO_17);
    }
#line 345 "parse_tree_out_pred_decl.m"
  }
#line 76 "parse_tree_out_pred_decl.m"
}

#line 68 "parse_tree_out_pred_decl.m"
MR_String MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_func_type_to_string_9_f_0(
#line 68 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__TypeVarSet_11,
#line 68 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__VarNamePrint_12,
#line 68 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__ExistQVars_13,
#line 68 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__FuncName_14,
#line 68 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__Types_15,
#line 68 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__RetType_16,
#line 68 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__MaybeDet_17,
#line 68 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__Purity_18,
#line 68 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__ClassContext_19)
#line 68 "parse_tree_out_pred_decl.m"
{
#line 215 "parse_tree_out_pred_decl.m"
  {
#line 215 "parse_tree_out_pred_decl.m"
    MR_bool parse_tree__parse_tree_out_pred_decl__succeeded;
#line 215 "parse_tree_out_pred_decl.m"
    MR_String parse_tree__parse_tree_out_pred_decl__String_20;
#line 227 "parse_tree_out_pred_decl.m"
    MR_Box parse_tree__parse_tree_out_pred_decl__conv0_String_20;

#line 227 "parse_tree_out_pred_decl.m"
    {
#line 227 "parse_tree_out_pred_decl.m"
      parse_tree__parse_tree_out_pred_decl__mercury_format_func_type_2_13_p_0((MR_Word) &parse_tree__parse_tree_out_pred_decl_scalar_common_1[1], parse_tree__parse_tree_out_pred_decl__TypeVarSet_11, parse_tree__parse_tree_out_pred_decl__VarNamePrint_12, parse_tree__parse_tree_out_pred_decl__ExistQVars_13, parse_tree__parse_tree_out_pred_decl__FuncName_14, parse_tree__parse_tree_out_pred_decl__Types_15, parse_tree__parse_tree_out_pred_decl__RetType_16, parse_tree__parse_tree_out_pred_decl__MaybeDet_17, parse_tree__parse_tree_out_pred_decl__Purity_18, parse_tree__parse_tree_out_pred_decl__ClassContext_19, (MR_String) ":- ", (MR_String) ".\n", ((MR_Box) ((MR_String) "")), &parse_tree__parse_tree_out_pred_decl__conv0_String_20);
    }
#line 227 "parse_tree_out_pred_decl.m"
    parse_tree__parse_tree_out_pred_decl__String_20 = ((MR_String) parse_tree__parse_tree_out_pred_decl__conv0_String_20);
#line 215 "parse_tree_out_pred_decl.m"
    return parse_tree__parse_tree_out_pred_decl__String_20;
#line 215 "parse_tree_out_pred_decl.m"
  }
#line 68 "parse_tree_out_pred_decl.m"
}

#line 64 "parse_tree_out_pred_decl.m"
void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_output_func_type_11_p_0(
#line 64 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__VarSet_12,
#line 64 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__ExistQVars_13,
#line 64 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__FuncName_14,
#line 64 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__Types_15,
#line 64 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__RetType_16,
#line 64 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__MaybeDet_17,
#line 64 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__Purity_18,
#line 64 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__ClassContext_19,
#line 64 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__VarNamePrint_20)
#line 64 "parse_tree_out_pred_decl.m"
{
#line 211 "parse_tree_out_pred_decl.m"
  {
#line 211 "parse_tree_out_pred_decl.m"
    MR_bool parse_tree__parse_tree_out_pred_decl__succeeded;
#line 227 "parse_tree_out_pred_decl.m"
    MR_Box parse_tree__parse_tree_out_pred_decl__conv0_STATE_VARIABLE_IO_23;

#line 227 "parse_tree_out_pred_decl.m"
    {
#line 227 "parse_tree_out_pred_decl.m"
      parse_tree__parse_tree_out_pred_decl__mercury_format_func_type_2_13_p_0((MR_Word) &parse_tree__parse_tree_out_pred_decl_scalar_common_1[0], parse_tree__parse_tree_out_pred_decl__VarSet_12, parse_tree__parse_tree_out_pred_decl__ExistQVars_13, parse_tree__parse_tree_out_pred_decl__FuncName_14, parse_tree__parse_tree_out_pred_decl__Types_15, parse_tree__parse_tree_out_pred_decl__RetType_16, parse_tree__parse_tree_out_pred_decl__MaybeDet_17, parse_tree__parse_tree_out_pred_decl__Purity_18, parse_tree__parse_tree_out_pred_decl__ClassContext_19, parse_tree__parse_tree_out_pred_decl__VarNamePrint_20, (MR_String) ":- ", (MR_String) ".\n", ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pred_decl__conv0_STATE_VARIABLE_IO_23);
    }
#line 211 "parse_tree_out_pred_decl.m"
  }
#line 64 "parse_tree_out_pred_decl.m"
}

#line 58 "parse_tree_out_pred_decl.m"
MR_String MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_pred_type_to_string_8_f_0(
#line 58 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__TypeVarSet_10,
#line 58 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__VarNamePrint_11,
#line 58 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__ExistQVars_12,
#line 58 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__PredName_13,
#line 58 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__Types_14,
#line 58 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__MaybeDet_15,
#line 58 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__Purity_16,
#line 58 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__ClassContext_17)
#line 58 "parse_tree_out_pred_decl.m"
{
#line 192 "parse_tree_out_pred_decl.m"
  {
#line 192 "parse_tree_out_pred_decl.m"
    MR_bool parse_tree__parse_tree_out_pred_decl__succeeded;
#line 192 "parse_tree_out_pred_decl.m"
    MR_String parse_tree__parse_tree_out_pred_decl__String_18;
#line 203 "parse_tree_out_pred_decl.m"
    MR_Box parse_tree__parse_tree_out_pred_decl__conv0_String_18;

#line 203 "parse_tree_out_pred_decl.m"
    {
#line 203 "parse_tree_out_pred_decl.m"
      parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_type_2_14_p_0((MR_Word) &parse_tree__parse_tree_out_pred_decl_scalar_common_1[1], parse_tree__parse_tree_out_pred_decl__TypeVarSet_10, parse_tree__parse_tree_out_pred_decl__VarNamePrint_11, (MR_Integer) 0, parse_tree__parse_tree_out_pred_decl__ExistQVars_12, parse_tree__parse_tree_out_pred_decl__PredName_13, parse_tree__parse_tree_out_pred_decl__Types_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__parse_tree_out_pred_decl__MaybeDet_15, parse_tree__parse_tree_out_pred_decl__Purity_16, parse_tree__parse_tree_out_pred_decl__ClassContext_17, (MR_String) ":- ", (MR_String) ".\n", ((MR_Box) ((MR_String) "")), &parse_tree__parse_tree_out_pred_decl__conv0_String_18);
    }
#line 203 "parse_tree_out_pred_decl.m"
    parse_tree__parse_tree_out_pred_decl__String_18 = ((MR_String) parse_tree__parse_tree_out_pred_decl__conv0_String_18);
#line 192 "parse_tree_out_pred_decl.m"
    return parse_tree__parse_tree_out_pred_decl__String_18;
#line 192 "parse_tree_out_pred_decl.m"
  }
#line 58 "parse_tree_out_pred_decl.m"
}

#line 55 "parse_tree_out_pred_decl.m"
void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_output_pred_type_10_p_0(
#line 55 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__TypeVarSet_11,
#line 55 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__VarNamePrint_12,
#line 55 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__ExistQVars_13,
#line 55 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__PredName_14,
#line 55 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__Types_15,
#line 55 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__MaybeDet_16,
#line 55 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__Purity_17,
#line 55 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__ClassContext_18)
#line 55 "parse_tree_out_pred_decl.m"
{
#line 187 "parse_tree_out_pred_decl.m"
  {
#line 187 "parse_tree_out_pred_decl.m"
    MR_bool parse_tree__parse_tree_out_pred_decl__succeeded;
#line 203 "parse_tree_out_pred_decl.m"
    MR_Box parse_tree__parse_tree_out_pred_decl__conv0_STATE_VARIABLE_IO_21;

#line 203 "parse_tree_out_pred_decl.m"
    {
#line 203 "parse_tree_out_pred_decl.m"
      parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_type_2_14_p_0((MR_Word) &parse_tree__parse_tree_out_pred_decl_scalar_common_1[0], parse_tree__parse_tree_out_pred_decl__TypeVarSet_11, parse_tree__parse_tree_out_pred_decl__VarNamePrint_12, (MR_Integer) 0, parse_tree__parse_tree_out_pred_decl__ExistQVars_13, parse_tree__parse_tree_out_pred_decl__PredName_14, parse_tree__parse_tree_out_pred_decl__Types_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__parse_tree_out_pred_decl__MaybeDet_16, parse_tree__parse_tree_out_pred_decl__Purity_17, parse_tree__parse_tree_out_pred_decl__ClassContext_18, (MR_String) ":- ", (MR_String) ".\n", ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_pred_decl__conv0_STATE_VARIABLE_IO_21);
    }
#line 187 "parse_tree_out_pred_decl.m"
  }
#line 55 "parse_tree_out_pred_decl.m"
}

#line 45 "parse_tree_out_pred_decl.m"
void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_format_func_decl_15_p_0(
#line 45 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_44,
#line 45 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__Lang_16,
#line 45 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__TypeVarSet_17,
#line 45 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__InstVarSet_18,
#line 45 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__ExistQVars_19,
#line 45 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__FuncName_20,
#line 45 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__TypesAndModes_21,
#line 45 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__RetTypeAndMode_22,
#line 45 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__MaybeDet_23,
#line 45 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__Purity_24,
#line 45 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__ClassContext_25,
#line 45 "parse_tree_out_pred_decl.m"
  MR_String parse_tree__parse_tree_out_pred_decl__StartString_26,
#line 45 "parse_tree_out_pred_decl.m"
  MR_String parse_tree__parse_tree_out_pred_decl__Separator_27,
#line 45 "parse_tree_out_pred_decl.m"
  MR_String parse_tree__parse_tree_out_pred_decl__Terminator_28,
#line 45 "parse_tree_out_pred_decl.m"
  MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_0_36,
#line 45 "parse_tree_out_pred_decl.m"
  MR_Box * parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_37)
#line 45 "parse_tree_out_pred_decl.m"
{
#line 166 "parse_tree_out_pred_decl.m"
  {
#line 166 "parse_tree_out_pred_decl.m"
    MR_bool parse_tree__parse_tree_out_pred_decl__succeeded;
#line 166 "parse_tree_out_pred_decl.m"
    MR_Word parse_tree__parse_tree_out_pred_decl__Types_30;
#line 166 "parse_tree_out_pred_decl.m"
    MR_Word parse_tree__parse_tree_out_pred_decl__MaybeModes_31;
#line 166 "parse_tree_out_pred_decl.m"
    MR_Word parse_tree__parse_tree_out_pred_decl__RetType_32;
#line 166 "parse_tree_out_pred_decl.m"
    MR_Word parse_tree__parse_tree_out_pred_decl__MaybeRetMode_33;
#line 178 "parse_tree_out_pred_decl.m"
    MR_Word parse_tree__parse_tree_out_pred_decl__Modes_34;
#line 178 "parse_tree_out_pred_decl.m"
    MR_Word parse_tree__parse_tree_out_pred_decl__RetMode_35;

#line 167 "parse_tree_out_pred_decl.m"
    {
#line 167 "parse_tree_out_pred_decl.m"
      parse_tree__prog_util__split_types_and_modes_3_p_0(parse_tree__parse_tree_out_pred_decl__TypesAndModes_21, &parse_tree__parse_tree_out_pred_decl__Types_30, &parse_tree__parse_tree_out_pred_decl__MaybeModes_31);
    }
#line 168 "parse_tree_out_pred_decl.m"
    {
#line 168 "parse_tree_out_pred_decl.m"
      parse_tree__prog_util__split_type_and_mode_3_p_0(parse_tree__parse_tree_out_pred_decl__RetTypeAndMode_22, &parse_tree__parse_tree_out_pred_decl__RetType_32, &parse_tree__parse_tree_out_pred_decl__MaybeRetMode_33);
    }
#line 170 "parse_tree_out_pred_decl.m"
    parse_tree__parse_tree_out_pred_decl__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_pred_decl__MaybeModes_31)) == (MR_mktag((MR_Integer) 1)));
#line 170 "parse_tree_out_pred_decl.m"
    if (parse_tree__parse_tree_out_pred_decl__succeeded)
#line 170 "parse_tree_out_pred_decl.m"
      {
#line 170 "parse_tree_out_pred_decl.m"
        parse_tree__parse_tree_out_pred_decl__Modes_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pred_decl__MaybeModes_31, (MR_Integer) 0)));
#line 171 "parse_tree_out_pred_decl.m"
        parse_tree__parse_tree_out_pred_decl__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_pred_decl__MaybeRetMode_33)) == (MR_mktag((MR_Integer) 1)));
#line 171 "parse_tree_out_pred_decl.m"
        if (parse_tree__parse_tree_out_pred_decl__succeeded)
#line 171 "parse_tree_out_pred_decl.m"
          parse_tree__parse_tree_out_pred_decl__RetMode_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pred_decl__MaybeRetMode_33, (MR_Integer) 0)));
#line 170 "parse_tree_out_pred_decl.m"
      }
#line 178 "parse_tree_out_pred_decl.m"
    if (parse_tree__parse_tree_out_pred_decl__succeeded)
#line 175 "parse_tree_out_pred_decl.m"
      {
#line 175 "parse_tree_out_pred_decl.m"
        MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_40_40;

#line 173 "parse_tree_out_pred_decl.m"
        {
#line 173 "parse_tree_out_pred_decl.m"
          parse_tree__parse_tree_out_pred_decl__mercury_format_func_type_2_13_p_0(parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_44, parse_tree__parse_tree_out_pred_decl__TypeVarSet_17, (MR_Integer) 0, parse_tree__parse_tree_out_pred_decl__ExistQVars_19, parse_tree__parse_tree_out_pred_decl__FuncName_20, parse_tree__parse_tree_out_pred_decl__Types_30, parse_tree__parse_tree_out_pred_decl__RetType_32, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__parse_tree_out_pred_decl__Purity_24, parse_tree__parse_tree_out_pred_decl__ClassContext_25, parse_tree__parse_tree_out_pred_decl__StartString_26, parse_tree__parse_tree_out_pred_decl__Separator_27, parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_0_36, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_40_40);
        }
#line 176 "parse_tree_out_pred_decl.m"
        {
#line 176 "parse_tree_out_pred_decl.m"
          parse_tree__parse_tree_out_pred_decl__mercury_format_func_mode_decl_10_p_0(parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_44, parse_tree__parse_tree_out_pred_decl__Lang_16, parse_tree__parse_tree_out_pred_decl__InstVarSet_18, parse_tree__parse_tree_out_pred_decl__FuncName_20, parse_tree__parse_tree_out_pred_decl__Modes_34, parse_tree__parse_tree_out_pred_decl__RetMode_35, parse_tree__parse_tree_out_pred_decl__MaybeDet_23, parse_tree__parse_tree_out_pred_decl__StartString_26, parse_tree__parse_tree_out_pred_decl__Terminator_28, parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_40_40, parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_37);
        }
#line 175 "parse_tree_out_pred_decl.m"
      }
#line 178 "parse_tree_out_pred_decl.m"
    else
#line 179 "parse_tree_out_pred_decl.m"
      {
#line 179 "parse_tree_out_pred_decl.m"
        {
#line 179 "parse_tree_out_pred_decl.m"
          parse_tree__parse_tree_out_pred_decl__mercury_format_func_type_2_13_p_0(parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_44, parse_tree__parse_tree_out_pred_decl__TypeVarSet_17, (MR_Integer) 0, parse_tree__parse_tree_out_pred_decl__ExistQVars_19, parse_tree__parse_tree_out_pred_decl__FuncName_20, parse_tree__parse_tree_out_pred_decl__Types_30, parse_tree__parse_tree_out_pred_decl__RetType_32, parse_tree__parse_tree_out_pred_decl__MaybeDet_23, parse_tree__parse_tree_out_pred_decl__Purity_24, parse_tree__parse_tree_out_pred_decl__ClassContext_25, parse_tree__parse_tree_out_pred_decl__StartString_26, parse_tree__parse_tree_out_pred_decl__Terminator_28, parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_0_36, parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_37);
        }
#line 179 "parse_tree_out_pred_decl.m"
      }
#line 166 "parse_tree_out_pred_decl.m"
  }
#line 45 "parse_tree_out_pred_decl.m"
}

#line 37 "parse_tree_out_pred_decl.m"
void MR_CALL 
parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_decl_17_p_0(
#line 37 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_48,
#line 37 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__Lang_18,
#line 37 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__TypeVarSet_19,
#line 37 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__InstVarSet_20,
#line 37 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__PredOrFunc_21,
#line 37 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__ExistQVars_22,
#line 37 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__PredName_23,
#line 37 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__TypesAndModes_24,
#line 37 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__WithType_25,
#line 37 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__WithInst_26,
#line 37 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__MaybeDet_27,
#line 37 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__Purity_28,
#line 37 "parse_tree_out_pred_decl.m"
  MR_Word parse_tree__parse_tree_out_pred_decl__ClassContext_29,
#line 37 "parse_tree_out_pred_decl.m"
  MR_String parse_tree__parse_tree_out_pred_decl__StartString_30,
#line 37 "parse_tree_out_pred_decl.m"
  MR_String parse_tree__parse_tree_out_pred_decl__Separator_31,
#line 37 "parse_tree_out_pred_decl.m"
  MR_String parse_tree__parse_tree_out_pred_decl__Terminator_32,
#line 37 "parse_tree_out_pred_decl.m"
  MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_IO_0_40,
#line 37 "parse_tree_out_pred_decl.m"
  MR_Box * parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_IO_41)
#line 37 "parse_tree_out_pred_decl.m"
{
#line 143 "parse_tree_out_pred_decl.m"
  {
#line 143 "parse_tree_out_pred_decl.m"
    MR_bool parse_tree__parse_tree_out_pred_decl__succeeded;
#line 143 "parse_tree_out_pred_decl.m"
    MR_Word parse_tree__parse_tree_out_pred_decl__Types_34;
#line 143 "parse_tree_out_pred_decl.m"
    MR_Word parse_tree__parse_tree_out_pred_decl__MaybeModes_35;
#line 156 "parse_tree_out_pred_decl.m"
    MR_Word parse_tree__parse_tree_out_pred_decl__Modes_36;

#line 144 "parse_tree_out_pred_decl.m"
    {
#line 144 "parse_tree_out_pred_decl.m"
      parse_tree__prog_util__split_types_and_modes_3_p_0(parse_tree__parse_tree_out_pred_decl__TypesAndModes_24, &parse_tree__parse_tree_out_pred_decl__Types_34, &parse_tree__parse_tree_out_pred_decl__MaybeModes_35);
    }
#line 146 "parse_tree_out_pred_decl.m"
    parse_tree__parse_tree_out_pred_decl__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_pred_decl__MaybeModes_35)) == (MR_mktag((MR_Integer) 1)));
#line 146 "parse_tree_out_pred_decl.m"
    if (parse_tree__parse_tree_out_pred_decl__succeeded)
#line 146 "parse_tree_out_pred_decl.m"
      {
#line 146 "parse_tree_out_pred_decl.m"
        parse_tree__parse_tree_out_pred_decl__Modes_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pred_decl__MaybeModes_35, (MR_Integer) 0)));
#line 147 "parse_tree_out_pred_decl.m"
        {
#line 147 "parse_tree_out_pred_decl.m"
          MR_Word parse_tree__parse_tree_out_pred_decl__V_37_37;
#line 147 "parse_tree_out_pred_decl.m"
          MR_Word parse_tree__parse_tree_out_pred_decl__V_38_38;

#line 147 "parse_tree_out_pred_decl.m"
          parse_tree__parse_tree_out_pred_decl__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_pred_decl__Modes_36)) == (MR_mktag((MR_Integer) 1)));
#line 147 "parse_tree_out_pred_decl.m"
          if (parse_tree__parse_tree_out_pred_decl__succeeded)
#line 147 "parse_tree_out_pred_decl.m"
            {
#line 147 "parse_tree_out_pred_decl.m"
              parse_tree__parse_tree_out_pred_decl__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pred_decl__Modes_36, (MR_Integer) 0)));
#line 147 "parse_tree_out_pred_decl.m"
              parse_tree__parse_tree_out_pred_decl__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pred_decl__Modes_36, (MR_Integer) 1)));
#line 147 "parse_tree_out_pred_decl.m"
            }
#line 147 "parse_tree_out_pred_decl.m"
        }
#line 148 "parse_tree_out_pred_decl.m"
        if (!(parse_tree__parse_tree_out_pred_decl__succeeded))
#line 148 "parse_tree_out_pred_decl.m"
          {
#line 148 "parse_tree_out_pred_decl.m"
            MR_Word parse_tree__parse_tree_out_pred_decl__V_39_39;

#line 148 "parse_tree_out_pred_decl.m"
            parse_tree__parse_tree_out_pred_decl__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_pred_decl__WithInst_26)) == (MR_mktag((MR_Integer) 1)));
#line 148 "parse_tree_out_pred_decl.m"
            if (parse_tree__parse_tree_out_pred_decl__succeeded)
#line 148 "parse_tree_out_pred_decl.m"
              parse_tree__parse_tree_out_pred_decl__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_pred_decl__WithInst_26, (MR_Integer) 0)));
#line 148 "parse_tree_out_pred_decl.m"
          }
#line 146 "parse_tree_out_pred_decl.m"
      }
#line 156 "parse_tree_out_pred_decl.m"
    if (parse_tree__parse_tree_out_pred_decl__succeeded)
#line 153 "parse_tree_out_pred_decl.m"
      {
#line 153 "parse_tree_out_pred_decl.m"
        MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_IO_44_44;
#line 153 "parse_tree_out_pred_decl.m"
        MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_22_60;
#line 153 "parse_tree_out_pred_decl.m"
        MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_24_62;
#line 153 "parse_tree_out_pred_decl.m"
        MR_Box parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_25_63;
#line 32 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 32 "parse_tree.parse_tree_out_info.int"
        void MR_CALL (* parse_tree__parse_tree_out_pred_decl__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 151 "parse_tree_out_pred_decl.m"
        {
#line 151 "parse_tree_out_pred_decl.m"
          parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_type_2_14_p_0(parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_48, parse_tree__parse_tree_out_pred_decl__TypeVarSet_19, (MR_Integer) 0, parse_tree__parse_tree_out_pred_decl__PredOrFunc_21, parse_tree__parse_tree_out_pred_decl__ExistQVars_22, parse_tree__parse_tree_out_pred_decl__PredName_23, parse_tree__parse_tree_out_pred_decl__Types_34, parse_tree__parse_tree_out_pred_decl__WithType_25, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__parse_tree_out_pred_decl__Purity_28, parse_tree__parse_tree_out_pred_decl__ClassContext_29, parse_tree__parse_tree_out_pred_decl__StartString_30, parse_tree__parse_tree_out_pred_decl__Separator_31, parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_IO_0_40, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_IO_44_44);
        }
#line 32 "parse_tree.parse_tree_out_info.int"
        parse_tree__parse_tree_out_pred_decl__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_48, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
        {
#line 32 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pred_decl__func_0(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_48), ((MR_Box) (parse_tree__parse_tree_out_pred_decl__StartString_30)), parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_IO_44_44, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_22_60);
        }
#line 32 "parse_tree.parse_tree_out_info.int"
        parse_tree__parse_tree_out_pred_decl__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_48, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
        {
#line 32 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pred_decl__func_1(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_48), ((MR_Box) ((MR_String) "mode ")), parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_22_60, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_24_62);
        }
#line 358 "parse_tree_out_pred_decl.m"
        {
#line 358 "parse_tree_out_pred_decl.m"
          parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_mode_subdecl_8_p_0(parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_48, parse_tree__parse_tree_out_pred_decl__Lang_18, parse_tree__parse_tree_out_pred_decl__InstVarSet_20, parse_tree__parse_tree_out_pred_decl__PredName_23, parse_tree__parse_tree_out_pred_decl__Modes_36, parse_tree__parse_tree_out_pred_decl__WithInst_26, parse_tree__parse_tree_out_pred_decl__MaybeDet_27, parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_24_62, &parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_25_63);
        }
#line 32 "parse_tree.parse_tree_out_info.int"
        parse_tree__parse_tree_out_pred_decl__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_48, (MR_Integer) 0)), (MR_Integer) 5)));
#line 32 "parse_tree.parse_tree_out_info.int"
        {
#line 32 "parse_tree.parse_tree_out_info.int"
          parse_tree__parse_tree_out_pred_decl__func_2(((MR_Box) parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_48), ((MR_Box) (parse_tree__parse_tree_out_pred_decl__Terminator_32)), parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_U_25_63, parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_IO_41);
        }
#line 153 "parse_tree_out_pred_decl.m"
      }
#line 156 "parse_tree_out_pred_decl.m"
    else
#line 157 "parse_tree_out_pred_decl.m"
      {
#line 157 "parse_tree_out_pred_decl.m"
        {
#line 157 "parse_tree_out_pred_decl.m"
          parse_tree__parse_tree_out_pred_decl__mercury_format_pred_or_func_type_2_14_p_0(parse_tree__parse_tree_out_pred_decl__TypeClassInfo_for_output_48, parse_tree__parse_tree_out_pred_decl__TypeVarSet_19, (MR_Integer) 0, parse_tree__parse_tree_out_pred_decl__PredOrFunc_21, parse_tree__parse_tree_out_pred_decl__ExistQVars_22, parse_tree__parse_tree_out_pred_decl__PredName_23, parse_tree__parse_tree_out_pred_decl__Types_34, parse_tree__parse_tree_out_pred_decl__WithType_25, parse_tree__parse_tree_out_pred_decl__MaybeDet_27, parse_tree__parse_tree_out_pred_decl__Purity_28, parse_tree__parse_tree_out_pred_decl__ClassContext_29, parse_tree__parse_tree_out_pred_decl__StartString_30, parse_tree__parse_tree_out_pred_decl__Terminator_32, parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_IO_0_40, parse_tree__parse_tree_out_pred_decl__STATE_VARIABLE_IO_41);
        }
#line 157 "parse_tree_out_pred_decl.m"
      }
#line 143 "parse_tree_out_pred_decl.m"
  }
#line 37 "parse_tree_out_pred_decl.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree.parse_tree_out_pred_decl. */
