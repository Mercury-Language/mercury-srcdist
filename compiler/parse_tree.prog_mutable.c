/*
** Automatically generated from `prog_mutable.m'
** by the Mercury compiler,
** version rotd-2016-10-04
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


/* :- module parse_tree.prog_mutable. */
/* :- implementation. */

/*
INIT mercury__parse_tree__prog_mutable__init
ENDINIT
*/

#include "parse_tree.prog_mutable.mih"


#include "libs.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "libs.compiler_util.mih"
#include "libs.file_util.mih"
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
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_EnumFunctorDesc parse_tree__prog_mutable__parse_tree__prog_mutable__enum_functor_desc_get_set_pred_kind_0_0;

static const MR_EnumFunctorDesc parse_tree__prog_mutable__parse_tree__prog_mutable__enum_functor_desc_get_set_pred_kind_0_1;

static const MR_EnumFunctorDesc parse_tree__prog_mutable__parse_tree__prog_mutable__enum_functor_desc_get_set_pred_kind_0_2;

static const MR_EnumFunctorDescPtr parse_tree__prog_mutable__parse_tree__prog_mutable__enum_value_ordered_get_set_pred_kind_0[3];

static const MR_EnumFunctorDescPtr parse_tree__prog_mutable__parse_tree__prog_mutable__enum_name_ordered_get_set_pred_kind_0[3];

static const MR_Integer parse_tree__prog_mutable__parse_tree__prog_mutable__functor_number_map_get_set_pred_kind_0[3];

static MR_bool MR_CALL 
parse_tree__prog_mutable____Unify____get_set_pred_kind_0_0_10001(
  MR_Box parse_tree__prog_mutable__wrapper_arg_1,
  MR_Box parse_tree__prog_mutable__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_mutable____Compare____get_set_pred_kind_0_0_10001(
  MR_Box * parse_tree__prog_mutable__wrapper_arg_1,
  MR_Box parse_tree__prog_mutable__wrapper_arg_2,
  MR_Box parse_tree__prog_mutable__wrapper_arg_3);

static void MR_CALL 
parse_tree__prog_mutable____Compare____get_set_pred_kind_0_0(
  MR_Word * parse_tree__prog_mutable__HeadVar__1_1,
  MR_Word parse_tree__prog_mutable__HeadVar__2_2,
  MR_Word parse_tree__prog_mutable__HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__prog_mutable____Unify____get_set_pred_kind_0_0(
  MR_Word parse_tree__prog_mutable__HeadVar__2_1,
  MR_Word parse_tree__prog_mutable__HeadVar__2_2);

static MR_Word MR_CALL 
parse_tree__prog_mutable__make_mutable_set_pred_decl_6_f_0(
  MR_Word parse_tree__prog_mutable__ModuleName_8,
  MR_String parse_tree__prog_mutable__Name_9,
  MR_Word parse_tree__prog_mutable__Type_10,
  MR_Word parse_tree__prog_mutable__Inst_11,
  MR_Word parse_tree__prog_mutable__PredKind_12,
  MR_Word parse_tree__prog_mutable__Context_13);

static MR_Word MR_CALL 
parse_tree__prog_mutable__make_mutable_get_pred_decl_6_f_0(
  MR_Word parse_tree__prog_mutable__ModuleName_8,
  MR_String parse_tree__prog_mutable__Name_9,
  MR_Word parse_tree__prog_mutable__Type_10,
  MR_Word parse_tree__prog_mutable__Inst_11,
  MR_Word parse_tree__prog_mutable__PredKind_12,
  MR_Word parse_tree__prog_mutable__Context_13);


static /* final */ const MR_Box parse_tree__prog_mutable_scalar_common_1[2][2];

static /* final */ const MR_Box parse_tree__prog_mutable_scalar_common_2[1][1];




static /* final */ const MR_Box parse_tree__prog_mutable_scalar_common_1[2][2] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box parse_tree__prog_mutable_scalar_common_2[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_EnumFunctorDesc parse_tree__prog_mutable__parse_tree__prog_mutable__enum_functor_desc_get_set_pred_kind_0_0 = {
  (MR_String) "get_set_pred_std",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc parse_tree__prog_mutable__parse_tree__prog_mutable__enum_functor_desc_get_set_pred_kind_0_1 = {
  (MR_String) "get_set_pred_constant",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc parse_tree__prog_mutable__parse_tree__prog_mutable__enum_functor_desc_get_set_pred_kind_0_2 = {
  (MR_String) "get_set_pred_io",
  (MR_Integer) 2
};

static const MR_EnumFunctorDescPtr parse_tree__prog_mutable__parse_tree__prog_mutable__enum_value_ordered_get_set_pred_kind_0[3] = {
  &parse_tree__prog_mutable__parse_tree__prog_mutable__enum_functor_desc_get_set_pred_kind_0_0,
  &parse_tree__prog_mutable__parse_tree__prog_mutable__enum_functor_desc_get_set_pred_kind_0_1,
  &parse_tree__prog_mutable__parse_tree__prog_mutable__enum_functor_desc_get_set_pred_kind_0_2
};

static const MR_EnumFunctorDescPtr parse_tree__prog_mutable__parse_tree__prog_mutable__enum_name_ordered_get_set_pred_kind_0[3] = {
  &parse_tree__prog_mutable__parse_tree__prog_mutable__enum_functor_desc_get_set_pred_kind_0_1,
  &parse_tree__prog_mutable__parse_tree__prog_mutable__enum_functor_desc_get_set_pred_kind_0_2,
  &parse_tree__prog_mutable__parse_tree__prog_mutable__enum_functor_desc_get_set_pred_kind_0_0
};

static const MR_Integer parse_tree__prog_mutable__parse_tree__prog_mutable__functor_number_map_get_set_pred_kind_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__prog_mutable__parse_tree__prog_mutable__type_ctor_info_get_set_pred_kind_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__prog_mutable____Unify____get_set_pred_kind_0_0_10001)),
  ((MR_Box) (parse_tree__prog_mutable____Compare____get_set_pred_kind_0_0_10001)),
  (MR_String) "parse_tree.prog_mutable",
  (MR_String) "get_set_pred_kind",
  {     parse_tree__prog_mutable__parse_tree__prog_mutable__enum_name_ordered_get_set_pred_kind_0 },
  {     parse_tree__prog_mutable__parse_tree__prog_mutable__enum_value_ordered_get_set_pred_kind_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  parse_tree__prog_mutable__parse_tree__prog_mutable__functor_number_map_get_set_pred_kind_0
};

static MR_bool MR_CALL 
parse_tree__prog_mutable____Unify____get_set_pred_kind_0_0_10001(
  MR_Box parse_tree__prog_mutable__wrapper_arg_1,
  MR_Box parse_tree__prog_mutable__wrapper_arg_2)
{
  {
    MR_bool parse_tree__prog_mutable__succeeded;

    {
      parse_tree__prog_mutable__succeeded = parse_tree__prog_mutable____Unify____get_set_pred_kind_0_0(((MR_Word) parse_tree__prog_mutable__wrapper_arg_1), ((MR_Word) parse_tree__prog_mutable__wrapper_arg_2));
    }
    return parse_tree__prog_mutable__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_mutable____Compare____get_set_pred_kind_0_0_10001(
  MR_Box * parse_tree__prog_mutable__wrapper_arg_1,
  MR_Box parse_tree__prog_mutable__wrapper_arg_2,
  MR_Box parse_tree__prog_mutable__wrapper_arg_3)
{
  {
    MR_Word parse_tree__prog_mutable__conv0_HeadVar__1_1;

    {
      parse_tree__prog_mutable____Compare____get_set_pred_kind_0_0(&parse_tree__prog_mutable__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_mutable__wrapper_arg_2), ((MR_Word) parse_tree__prog_mutable__wrapper_arg_3));
    }
    *parse_tree__prog_mutable__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_mutable__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
parse_tree__prog_mutable____Compare____get_set_pred_kind_0_0(
  MR_Word * parse_tree__prog_mutable__HeadVar__1_1,
  MR_Word parse_tree__prog_mutable__HeadVar__2_2,
  MR_Word parse_tree__prog_mutable__HeadVar__3_3)
{
  {
    MR_bool parse_tree__prog_mutable__succeeded;
    MR_Integer parse_tree__prog_mutable__Cast_HeadVar1_4 = (MR_Integer) parse_tree__prog_mutable__HeadVar__2_2;
    MR_Integer parse_tree__prog_mutable__Cast_HeadVar2_5 = (MR_Integer) parse_tree__prog_mutable__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_mutable__HeadVar__1_1, parse_tree__prog_mutable__Cast_HeadVar1_4, parse_tree__prog_mutable__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
parse_tree__prog_mutable____Unify____get_set_pred_kind_0_0(
  MR_Word parse_tree__prog_mutable__HeadVar__2_1,
  MR_Word parse_tree__prog_mutable__HeadVar__2_2)
{
  {
    MR_bool parse_tree__prog_mutable__succeeded = (parse_tree__prog_mutable__HeadVar__2_1 == parse_tree__prog_mutable__HeadVar__2_2);

    return parse_tree__prog_mutable__succeeded;
  }
}

static MR_Word MR_CALL 
parse_tree__prog_mutable__make_mutable_set_pred_decl_6_f_0(
  MR_Word parse_tree__prog_mutable__ModuleName_8,
  MR_String parse_tree__prog_mutable__Name_9,
  MR_Word parse_tree__prog_mutable__Type_10,
  MR_Word parse_tree__prog_mutable__Inst_11,
  MR_Word parse_tree__prog_mutable__PredKind_12,
  MR_Word parse_tree__prog_mutable__Context_13)
{
  {
    MR_bool parse_tree__prog_mutable__succeeded;
    MR_Word parse_tree__prog_mutable__SetPredDecl_14;
    MR_Word parse_tree__prog_mutable__TypeVarSet_17;
    MR_Word parse_tree__prog_mutable__InstVarSet_18;
    MR_Word parse_tree__prog_mutable__MainArgTypesAndModes_20;
    MR_Word parse_tree__prog_mutable__SymName_21;
    MR_Word parse_tree__prog_mutable__ArgTypesAndModes_22;
    MR_Word parse_tree__prog_mutable__Purity_23;
    MR_Word parse_tree__prog_mutable__V_29_29;
    MR_Word parse_tree__prog_mutable__V_30_30;

    {
      parse_tree__prog_mutable__TypeVarSet_17 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0);
    }
    {
      parse_tree__prog_mutable__InstVarSet_18 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0);
    }
    {
      parse_tree__prog_mutable__V_30_30 = parse_tree__prog_mode__in_mode_1_f_0(parse_tree__prog_mutable__Inst_11);
    }
    {
      parse_tree__prog_mutable__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_29_29, 0) = ((MR_Box) (parse_tree__prog_mutable__Type_10));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_29_29, 1) = ((MR_Box) (parse_tree__prog_mutable__V_30_30));
    }
    {
      parse_tree__prog_mutable__MainArgTypesAndModes_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__MainArgTypesAndModes_20, 0) = ((MR_Box) (parse_tree__prog_mutable__V_29_29));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__MainArgTypesAndModes_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    switch (parse_tree__prog_mutable__PredKind_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_String parse_tree__prog_mutable__V_44_44;

          {
            parse_tree__prog_mutable__V_44_44 = mercury__string__f_43_43_2_f_0((MR_String) "secret_initialization_only_set_", parse_tree__prog_mutable__Name_9);
          }
          {
            parse_tree__prog_mutable__SymName_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__SymName_21, 0) = ((MR_Box) (parse_tree__prog_mutable__ModuleName_8));
            MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__SymName_21, 1) = ((MR_Box) (parse_tree__prog_mutable__V_44_44));
          }
          parse_tree__prog_mutable__ArgTypesAndModes_22 = parse_tree__prog_mutable__MainArgTypesAndModes_20;
          parse_tree__prog_mutable__Purity_23 = (MR_Integer) 2;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word parse_tree__prog_mutable__V_32_32;
          MR_String parse_tree__prog_mutable__V_48_48;
          MR_Word parse_tree__prog_mutable__V_50_50;
          MR_Word parse_tree__prog_mutable__V_51_51;
          MR_Word parse_tree__prog_mutable__V_52_52;
          MR_Word parse_tree__prog_mutable__V_53_53;
          MR_Word parse_tree__prog_mutable__V_54_54;
          MR_Word parse_tree__prog_mutable__V_55_55;
          MR_Word parse_tree__prog_mutable__V_56_56;

          {
            parse_tree__prog_mutable__V_48_48 = mercury__string__f_43_43_2_f_0((MR_String) "set_", parse_tree__prog_mutable__Name_9);
          }
          {
            parse_tree__prog_mutable__SymName_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__SymName_21, 0) = ((MR_Box) (parse_tree__prog_mutable__ModuleName_8));
            MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__SymName_21, 1) = ((MR_Box) (parse_tree__prog_mutable__V_48_48));
          }
          {
            parse_tree__prog_mutable__V_51_51 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
          }
          {
            parse_tree__prog_mutable__V_52_52 = parse_tree__prog_mode__di_mode_0_f_0();
          }
          {
            parse_tree__prog_mutable__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_50_50, 0) = ((MR_Box) (parse_tree__prog_mutable__V_51_51));
            MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_50_50, 1) = ((MR_Box) (parse_tree__prog_mutable__V_52_52));
          }
          {
            parse_tree__prog_mutable__V_55_55 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
          }
          {
            parse_tree__prog_mutable__V_56_56 = parse_tree__prog_mode__uo_mode_0_f_0();
          }
          {
            parse_tree__prog_mutable__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_54_54, 0) = ((MR_Box) (parse_tree__prog_mutable__V_55_55));
            MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_54_54, 1) = ((MR_Box) (parse_tree__prog_mutable__V_56_56));
          }
          {
            parse_tree__prog_mutable__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_53_53, 0) = ((MR_Box) (parse_tree__prog_mutable__V_54_54));
            MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            parse_tree__prog_mutable__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_32_32, 0) = ((MR_Box) (parse_tree__prog_mutable__V_50_50));
            MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_32_32, 1) = ((MR_Box) (parse_tree__prog_mutable__V_53_53));
          }
          {
            parse_tree__prog_mutable__ArgTypesAndModes_22 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0, parse_tree__prog_mutable__MainArgTypesAndModes_20, parse_tree__prog_mutable__V_32_32);
          }
          parse_tree__prog_mutable__Purity_23 = (MR_Integer) 0;
        }
        break;
      case (MR_Integer) 0:
        {
          MR_String parse_tree__prog_mutable__V_60_60;

          {
            parse_tree__prog_mutable__V_60_60 = mercury__string__f_43_43_2_f_0((MR_String) "set_", parse_tree__prog_mutable__Name_9);
          }
          {
            parse_tree__prog_mutable__SymName_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__SymName_21, 0) = ((MR_Box) (parse_tree__prog_mutable__ModuleName_8));
            MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__SymName_21, 1) = ((MR_Box) (parse_tree__prog_mutable__V_60_60));
          }
          parse_tree__prog_mutable__ArgTypesAndModes_22 = parse_tree__prog_mutable__MainArgTypesAndModes_20;
          parse_tree__prog_mutable__Purity_23 = (MR_Integer) 2;
        }
        break;
    }
    {
      parse_tree__prog_mutable__SetPredDecl_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__SetPredDecl_14, 0) = ((MR_Box) (parse_tree__prog_mutable__SymName_21));
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__SetPredDecl_14, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__SetPredDecl_14, 2) = ((MR_Box) (parse_tree__prog_mutable__ArgTypesAndModes_22));
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__SetPredDecl_14, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__SetPredDecl_14, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__SetPredDecl_14, 5) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_mutable_scalar_common_2[0])));
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__SetPredDecl_14, 6) = ((MR_Box) (MR_mkword(MR_mktag(1), ((MR_Box) (&parse_tree__prog_mutable_scalar_common_1[0])))));
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__SetPredDecl_14, 7) = ((MR_Box) (parse_tree__prog_mutable__TypeVarSet_17));
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__SetPredDecl_14, 8) = ((MR_Box) (parse_tree__prog_mutable__InstVarSet_18));
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__SetPredDecl_14, 9) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__SetPredDecl_14, 10) = ((MR_Box) (parse_tree__prog_mutable__Purity_23));
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__SetPredDecl_14, 11) = ((MR_Box) (&parse_tree__prog_mutable_scalar_common_1[1]));
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__SetPredDecl_14, 12) = ((MR_Box) (parse_tree__prog_mutable__Context_13));
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__SetPredDecl_14, 13) = ((MR_Box) ((MR_Integer) -1));
    }
    return parse_tree__prog_mutable__SetPredDecl_14;
  }
}

static MR_Word MR_CALL 
parse_tree__prog_mutable__make_mutable_get_pred_decl_6_f_0(
  MR_Word parse_tree__prog_mutable__ModuleName_8,
  MR_String parse_tree__prog_mutable__Name_9,
  MR_Word parse_tree__prog_mutable__Type_10,
  MR_Word parse_tree__prog_mutable__Inst_11,
  MR_Word parse_tree__prog_mutable__PredKind_12,
  MR_Word parse_tree__prog_mutable__Context_13)
{
  {
    MR_bool parse_tree__prog_mutable__succeeded;
    MR_Word parse_tree__prog_mutable__GetPredDecl_14;
    MR_Word parse_tree__prog_mutable__TypeVarSet_17;
    MR_Word parse_tree__prog_mutable__InstVarSet_18;
    MR_Word parse_tree__prog_mutable__SymName_20;
    MR_Word parse_tree__prog_mutable__MainArgTypesAndModes_21;
    MR_Word parse_tree__prog_mutable__ArgTypesAndModes_22;
    MR_Word parse_tree__prog_mutable__Purity_23;
    MR_Word parse_tree__prog_mutable__V_29_29;
    MR_Word parse_tree__prog_mutable__V_30_30;
    MR_String parse_tree__prog_mutable__V_44_44;

    {
      parse_tree__prog_mutable__TypeVarSet_17 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0);
    }
    {
      parse_tree__prog_mutable__InstVarSet_18 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0);
    }
    {
      parse_tree__prog_mutable__V_44_44 = mercury__string__f_43_43_2_f_0((MR_String) "get_", parse_tree__prog_mutable__Name_9);
    }
    {
      parse_tree__prog_mutable__SymName_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__SymName_20, 0) = ((MR_Box) (parse_tree__prog_mutable__ModuleName_8));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__SymName_20, 1) = ((MR_Box) (parse_tree__prog_mutable__V_44_44));
    }
    {
      parse_tree__prog_mutable__V_30_30 = parse_tree__prog_mode__out_mode_1_f_0(parse_tree__prog_mutable__Inst_11);
    }
    {
      parse_tree__prog_mutable__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_29_29, 0) = ((MR_Box) (parse_tree__prog_mutable__Type_10));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_29_29, 1) = ((MR_Box) (parse_tree__prog_mutable__V_30_30));
    }
    {
      parse_tree__prog_mutable__MainArgTypesAndModes_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__MainArgTypesAndModes_21, 0) = ((MR_Box) (parse_tree__prog_mutable__V_29_29));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__MainArgTypesAndModes_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    switch (parse_tree__prog_mutable__PredKind_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          parse_tree__prog_mutable__ArgTypesAndModes_22 = parse_tree__prog_mutable__MainArgTypesAndModes_21;
          parse_tree__prog_mutable__Purity_23 = (MR_Integer) 0;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word parse_tree__prog_mutable__V_32_32;
          MR_Word parse_tree__prog_mutable__V_46_46;
          MR_Word parse_tree__prog_mutable__V_47_47;
          MR_Word parse_tree__prog_mutable__V_48_48;
          MR_Word parse_tree__prog_mutable__V_49_49;
          MR_Word parse_tree__prog_mutable__V_50_50;
          MR_Word parse_tree__prog_mutable__V_51_51;
          MR_Word parse_tree__prog_mutable__V_52_52;

          {
            parse_tree__prog_mutable__V_47_47 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
          }
          {
            parse_tree__prog_mutable__V_48_48 = parse_tree__prog_mode__di_mode_0_f_0();
          }
          {
            parse_tree__prog_mutable__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_46_46, 0) = ((MR_Box) (parse_tree__prog_mutable__V_47_47));
            MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_46_46, 1) = ((MR_Box) (parse_tree__prog_mutable__V_48_48));
          }
          {
            parse_tree__prog_mutable__V_51_51 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
          }
          {
            parse_tree__prog_mutable__V_52_52 = parse_tree__prog_mode__uo_mode_0_f_0();
          }
          {
            parse_tree__prog_mutable__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_50_50, 0) = ((MR_Box) (parse_tree__prog_mutable__V_51_51));
            MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_50_50, 1) = ((MR_Box) (parse_tree__prog_mutable__V_52_52));
          }
          {
            parse_tree__prog_mutable__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_49_49, 0) = ((MR_Box) (parse_tree__prog_mutable__V_50_50));
            MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            parse_tree__prog_mutable__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_32_32, 0) = ((MR_Box) (parse_tree__prog_mutable__V_46_46));
            MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__V_32_32, 1) = ((MR_Box) (parse_tree__prog_mutable__V_49_49));
          }
          {
            parse_tree__prog_mutable__ArgTypesAndModes_22 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0, parse_tree__prog_mutable__MainArgTypesAndModes_21, parse_tree__prog_mutable__V_32_32);
          }
          parse_tree__prog_mutable__Purity_23 = (MR_Integer) 0;
        }
        break;
      case (MR_Integer) 0:
        {
          parse_tree__prog_mutable__ArgTypesAndModes_22 = parse_tree__prog_mutable__MainArgTypesAndModes_21;
          parse_tree__prog_mutable__Purity_23 = (MR_Integer) 1;
        }
        break;
    }
    {
      parse_tree__prog_mutable__GetPredDecl_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__GetPredDecl_14, 0) = ((MR_Box) (parse_tree__prog_mutable__SymName_20));
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__GetPredDecl_14, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__GetPredDecl_14, 2) = ((MR_Box) (parse_tree__prog_mutable__ArgTypesAndModes_22));
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__GetPredDecl_14, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__GetPredDecl_14, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__GetPredDecl_14, 5) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_mutable_scalar_common_2[0])));
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__GetPredDecl_14, 6) = ((MR_Box) (MR_mkword(MR_mktag(1), ((MR_Box) (&parse_tree__prog_mutable_scalar_common_1[0])))));
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__GetPredDecl_14, 7) = ((MR_Box) (parse_tree__prog_mutable__TypeVarSet_17));
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__GetPredDecl_14, 8) = ((MR_Box) (parse_tree__prog_mutable__InstVarSet_18));
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__GetPredDecl_14, 9) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__GetPredDecl_14, 10) = ((MR_Box) (parse_tree__prog_mutable__Purity_23));
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__GetPredDecl_14, 11) = ((MR_Box) (&parse_tree__prog_mutable_scalar_common_1[1]));
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__GetPredDecl_14, 12) = ((MR_Box) (parse_tree__prog_mutable__Context_13));
      MR_hl_field(MR_mktag(0), parse_tree__prog_mutable__GetPredDecl_14, 13) = ((MR_Box) ((MR_Integer) -1));
    }
    return parse_tree__prog_mutable__GetPredDecl_14;
  }
}

MR_Word MR_CALL 
parse_tree__prog_mutable__io_set_pred_decl_5_f_0(
  MR_Word parse_tree__prog_mutable__ModuleName_7,
  MR_String parse_tree__prog_mutable__Name_8,
  MR_Word parse_tree__prog_mutable__Type_9,
  MR_Word parse_tree__prog_mutable__Inst_10,
  MR_Word parse_tree__prog_mutable__Context_11)
{
  {
    MR_bool parse_tree__prog_mutable__succeeded;
    MR_Word parse_tree__prog_mutable__HeadVar__6_6;

    {
      parse_tree__prog_mutable__HeadVar__6_6 = parse_tree__prog_mutable__make_mutable_set_pred_decl_6_f_0(parse_tree__prog_mutable__ModuleName_7, parse_tree__prog_mutable__Name_8, parse_tree__prog_mutable__Type_9, parse_tree__prog_mutable__Inst_10, (MR_Integer) 2, parse_tree__prog_mutable__Context_11);
    }
    return parse_tree__prog_mutable__HeadVar__6_6;
  }
}

MR_Word MR_CALL 
parse_tree__prog_mutable__io_get_pred_decl_5_f_0(
  MR_Word parse_tree__prog_mutable__ModuleName_7,
  MR_String parse_tree__prog_mutable__Name_8,
  MR_Word parse_tree__prog_mutable__Type_9,
  MR_Word parse_tree__prog_mutable__Inst_10,
  MR_Word parse_tree__prog_mutable__Context_11)
{
  {
    MR_bool parse_tree__prog_mutable__succeeded;
    MR_Word parse_tree__prog_mutable__HeadVar__6_6;

    {
      parse_tree__prog_mutable__HeadVar__6_6 = parse_tree__prog_mutable__make_mutable_get_pred_decl_6_f_0(parse_tree__prog_mutable__ModuleName_7, parse_tree__prog_mutable__Name_8, parse_tree__prog_mutable__Type_9, parse_tree__prog_mutable__Inst_10, (MR_Integer) 2, parse_tree__prog_mutable__Context_11);
    }
    return parse_tree__prog_mutable__HeadVar__6_6;
  }
}

MR_Word MR_CALL 
parse_tree__prog_mutable__constant_set_pred_decl_5_f_0(
  MR_Word parse_tree__prog_mutable__ModuleName_7,
  MR_String parse_tree__prog_mutable__Name_8,
  MR_Word parse_tree__prog_mutable__Type_9,
  MR_Word parse_tree__prog_mutable__Inst_10,
  MR_Word parse_tree__prog_mutable__Context_11)
{
  {
    MR_bool parse_tree__prog_mutable__succeeded;
    MR_Word parse_tree__prog_mutable__HeadVar__6_6;

    {
      parse_tree__prog_mutable__HeadVar__6_6 = parse_tree__prog_mutable__make_mutable_set_pred_decl_6_f_0(parse_tree__prog_mutable__ModuleName_7, parse_tree__prog_mutable__Name_8, parse_tree__prog_mutable__Type_9, parse_tree__prog_mutable__Inst_10, (MR_Integer) 1, parse_tree__prog_mutable__Context_11);
    }
    return parse_tree__prog_mutable__HeadVar__6_6;
  }
}

MR_Word MR_CALL 
parse_tree__prog_mutable__constant_get_pred_decl_5_f_0(
  MR_Word parse_tree__prog_mutable__ModuleName_7,
  MR_String parse_tree__prog_mutable__Name_8,
  MR_Word parse_tree__prog_mutable__Type_9,
  MR_Word parse_tree__prog_mutable__Inst_10,
  MR_Word parse_tree__prog_mutable__Context_11)
{
  {
    MR_bool parse_tree__prog_mutable__succeeded;
    MR_Word parse_tree__prog_mutable__HeadVar__6_6;

    {
      parse_tree__prog_mutable__HeadVar__6_6 = parse_tree__prog_mutable__make_mutable_get_pred_decl_6_f_0(parse_tree__prog_mutable__ModuleName_7, parse_tree__prog_mutable__Name_8, parse_tree__prog_mutable__Type_9, parse_tree__prog_mutable__Inst_10, (MR_Integer) 1, parse_tree__prog_mutable__Context_11);
    }
    return parse_tree__prog_mutable__HeadVar__6_6;
  }
}

MR_Word MR_CALL 
parse_tree__prog_mutable__std_set_pred_decl_5_f_0(
  MR_Word parse_tree__prog_mutable__ModuleName_7,
  MR_String parse_tree__prog_mutable__Name_8,
  MR_Word parse_tree__prog_mutable__Type_9,
  MR_Word parse_tree__prog_mutable__Inst_10,
  MR_Word parse_tree__prog_mutable__Context_11)
{
  {
    MR_bool parse_tree__prog_mutable__succeeded;
    MR_Word parse_tree__prog_mutable__HeadVar__6_6;

    {
      parse_tree__prog_mutable__HeadVar__6_6 = parse_tree__prog_mutable__make_mutable_set_pred_decl_6_f_0(parse_tree__prog_mutable__ModuleName_7, parse_tree__prog_mutable__Name_8, parse_tree__prog_mutable__Type_9, parse_tree__prog_mutable__Inst_10, (MR_Integer) 0, parse_tree__prog_mutable__Context_11);
    }
    return parse_tree__prog_mutable__HeadVar__6_6;
  }
}

MR_Word MR_CALL 
parse_tree__prog_mutable__std_get_pred_decl_5_f_0(
  MR_Word parse_tree__prog_mutable__ModuleName_7,
  MR_String parse_tree__prog_mutable__Name_8,
  MR_Word parse_tree__prog_mutable__Type_9,
  MR_Word parse_tree__prog_mutable__Inst_10,
  MR_Word parse_tree__prog_mutable__Context_11)
{
  {
    MR_bool parse_tree__prog_mutable__succeeded;
    MR_Word parse_tree__prog_mutable__HeadVar__6_6;

    {
      parse_tree__prog_mutable__HeadVar__6_6 = parse_tree__prog_mutable__make_mutable_get_pred_decl_6_f_0(parse_tree__prog_mutable__ModuleName_7, parse_tree__prog_mutable__Name_8, parse_tree__prog_mutable__Type_9, parse_tree__prog_mutable__Inst_10, (MR_Integer) 0, parse_tree__prog_mutable__Context_11);
    }
    return parse_tree__prog_mutable__HeadVar__6_6;
  }
}

MR_String MR_CALL 
parse_tree__prog_mutable__mutable_mutex_var_name_1_f_0(
  MR_String parse_tree__prog_mutable__TargetMutableVarName_3)
{
  {
    MR_bool parse_tree__prog_mutable__succeeded;
    MR_String parse_tree__prog_mutable__MutexVarName_4;

    {
      parse_tree__prog_mutable__MutexVarName_4 = mercury__string__f_43_43_2_f_0(parse_tree__prog_mutable__TargetMutableVarName_3, (MR_String) "_lock");
    }
    return parse_tree__prog_mutable__MutexVarName_4;
  }
}

MR_String MR_CALL 
parse_tree__prog_mutable__mutable_c_var_name_2_f_0(
  MR_Word parse_tree__prog_mutable__ModuleName_4,
  MR_String parse_tree__prog_mutable__Name_5)
{
  {
    MR_bool parse_tree__prog_mutable__succeeded;
    MR_String parse_tree__prog_mutable__MangledCVarName_6;
    MR_String parse_tree__prog_mutable__RawCVarName_7;
    MR_Word parse_tree__prog_mutable__QualifiedCVarName0_8;
    MR_Word parse_tree__prog_mutable__QualifiedCVarName_9;

    {
      parse_tree__prog_mutable__RawCVarName_7 = mercury__string__f_43_43_2_f_0((MR_String) "mutable_variable_", parse_tree__prog_mutable__Name_5);
    }
    {
      parse_tree__prog_mutable__QualifiedCVarName0_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__QualifiedCVarName0_8, 0) = ((MR_Box) (parse_tree__prog_mutable__ModuleName_4));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__QualifiedCVarName0_8, 1) = ((MR_Box) (parse_tree__prog_mutable__RawCVarName_7));
    }
    {
      parse_tree__prog_mutable__succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(parse_tree__prog_mutable__ModuleName_4);
    }
    if (parse_tree__prog_mutable__succeeded)
      {
        {
          parse_tree__prog_mutable__QualifiedCVarName_9 = mdbcomp__sym_name__add_outermost_qualifier_2_f_0((MR_String) "mercury", parse_tree__prog_mutable__QualifiedCVarName0_8);
        }
      }
    else
      parse_tree__prog_mutable__QualifiedCVarName_9 = parse_tree__prog_mutable__QualifiedCVarName0_8;
    {
      parse_tree__prog_mutable__MangledCVarName_6 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(parse_tree__prog_mutable__QualifiedCVarName_9);
    }
    return parse_tree__prog_mutable__MangledCVarName_6;
  }
}

MR_Word MR_CALL 
parse_tree__prog_mutable__mutable_pre_init_pred_sym_name_2_f_0(
  MR_Word parse_tree__prog_mutable__ModuleName_4,
  MR_String parse_tree__prog_mutable__Name_5)
{
  {
    MR_bool parse_tree__prog_mutable__succeeded;
    MR_Word parse_tree__prog_mutable__HeadVar__3_3;
    MR_String parse_tree__prog_mutable__V_6_6;

    {
      parse_tree__prog_mutable__V_6_6 = mercury__string__f_43_43_2_f_0((MR_String) "pre_initialise_mutable_", parse_tree__prog_mutable__Name_5);
    }
    {
      parse_tree__prog_mutable__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__HeadVar__3_3, 0) = ((MR_Box) (parse_tree__prog_mutable__ModuleName_4));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__HeadVar__3_3, 1) = ((MR_Box) (parse_tree__prog_mutable__V_6_6));
    }
    return parse_tree__prog_mutable__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
parse_tree__prog_mutable__mutable_init_pred_sym_name_2_f_0(
  MR_Word parse_tree__prog_mutable__ModuleName_4,
  MR_String parse_tree__prog_mutable__Name_5)
{
  {
    MR_bool parse_tree__prog_mutable__succeeded;
    MR_Word parse_tree__prog_mutable__HeadVar__3_3;
    MR_String parse_tree__prog_mutable__V_6_6;

    {
      parse_tree__prog_mutable__V_6_6 = mercury__string__f_43_43_2_f_0((MR_String) "initialise_mutable_", parse_tree__prog_mutable__Name_5);
    }
    {
      parse_tree__prog_mutable__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__HeadVar__3_3, 0) = ((MR_Box) (parse_tree__prog_mutable__ModuleName_4));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__HeadVar__3_3, 1) = ((MR_Box) (parse_tree__prog_mutable__V_6_6));
    }
    return parse_tree__prog_mutable__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
parse_tree__prog_mutable__mutable_secret_set_pred_sym_name_2_f_0(
  MR_Word parse_tree__prog_mutable__ModuleName_4,
  MR_String parse_tree__prog_mutable__Name_5)
{
  {
    MR_bool parse_tree__prog_mutable__succeeded;
    MR_Word parse_tree__prog_mutable__HeadVar__3_3;
    MR_String parse_tree__prog_mutable__V_6_6;

    {
      parse_tree__prog_mutable__V_6_6 = mercury__string__f_43_43_2_f_0((MR_String) "secret_initialization_only_set_", parse_tree__prog_mutable__Name_5);
    }
    {
      parse_tree__prog_mutable__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__HeadVar__3_3, 0) = ((MR_Box) (parse_tree__prog_mutable__ModuleName_4));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__HeadVar__3_3, 1) = ((MR_Box) (parse_tree__prog_mutable__V_6_6));
    }
    return parse_tree__prog_mutable__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
parse_tree__prog_mutable__mutable_set_pred_sym_name_2_f_0(
  MR_Word parse_tree__prog_mutable__ModuleName_4,
  MR_String parse_tree__prog_mutable__Name_5)
{
  {
    MR_bool parse_tree__prog_mutable__succeeded;
    MR_Word parse_tree__prog_mutable__HeadVar__3_3;
    MR_String parse_tree__prog_mutable__V_6_6;

    {
      parse_tree__prog_mutable__V_6_6 = mercury__string__f_43_43_2_f_0((MR_String) "set_", parse_tree__prog_mutable__Name_5);
    }
    {
      parse_tree__prog_mutable__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__HeadVar__3_3, 0) = ((MR_Box) (parse_tree__prog_mutable__ModuleName_4));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__HeadVar__3_3, 1) = ((MR_Box) (parse_tree__prog_mutable__V_6_6));
    }
    return parse_tree__prog_mutable__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
parse_tree__prog_mutable__mutable_get_pred_sym_name_2_f_0(
  MR_Word parse_tree__prog_mutable__ModuleName_4,
  MR_String parse_tree__prog_mutable__Name_5)
{
  {
    MR_bool parse_tree__prog_mutable__succeeded;
    MR_Word parse_tree__prog_mutable__HeadVar__3_3;
    MR_String parse_tree__prog_mutable__V_6_6;

    {
      parse_tree__prog_mutable__V_6_6 = mercury__string__f_43_43_2_f_0((MR_String) "get_", parse_tree__prog_mutable__Name_5);
    }
    {
      parse_tree__prog_mutable__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__HeadVar__3_3, 0) = ((MR_Box) (parse_tree__prog_mutable__ModuleName_4));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__HeadVar__3_3, 1) = ((MR_Box) (parse_tree__prog_mutable__V_6_6));
    }
    return parse_tree__prog_mutable__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
parse_tree__prog_mutable__mutable_unsafe_set_pred_sym_name_2_f_0(
  MR_Word parse_tree__prog_mutable__ModuleName_4,
  MR_String parse_tree__prog_mutable__Name_5)
{
  {
    MR_bool parse_tree__prog_mutable__succeeded;
    MR_Word parse_tree__prog_mutable__HeadVar__3_3;
    MR_String parse_tree__prog_mutable__V_6_6;

    {
      parse_tree__prog_mutable__V_6_6 = mercury__string__f_43_43_2_f_0((MR_String) "unsafe_set_", parse_tree__prog_mutable__Name_5);
    }
    {
      parse_tree__prog_mutable__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__HeadVar__3_3, 0) = ((MR_Box) (parse_tree__prog_mutable__ModuleName_4));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__HeadVar__3_3, 1) = ((MR_Box) (parse_tree__prog_mutable__V_6_6));
    }
    return parse_tree__prog_mutable__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
parse_tree__prog_mutable__mutable_unsafe_get_pred_sym_name_2_f_0(
  MR_Word parse_tree__prog_mutable__ModuleName_4,
  MR_String parse_tree__prog_mutable__Name_5)
{
  {
    MR_bool parse_tree__prog_mutable__succeeded;
    MR_Word parse_tree__prog_mutable__HeadVar__3_3;
    MR_String parse_tree__prog_mutable__V_6_6;

    {
      parse_tree__prog_mutable__V_6_6 = mercury__string__f_43_43_2_f_0((MR_String) "unsafe_get_", parse_tree__prog_mutable__Name_5);
    }
    {
      parse_tree__prog_mutable__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__HeadVar__3_3, 0) = ((MR_Box) (parse_tree__prog_mutable__ModuleName_4));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__HeadVar__3_3, 1) = ((MR_Box) (parse_tree__prog_mutable__V_6_6));
    }
    return parse_tree__prog_mutable__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
parse_tree__prog_mutable__mutable_unlock_pred_sym_name_2_f_0(
  MR_Word parse_tree__prog_mutable__ModuleName_4,
  MR_String parse_tree__prog_mutable__Name_5)
{
  {
    MR_bool parse_tree__prog_mutable__succeeded;
    MR_Word parse_tree__prog_mutable__HeadVar__3_3;
    MR_String parse_tree__prog_mutable__V_6_6;

    {
      parse_tree__prog_mutable__V_6_6 = mercury__string__f_43_43_2_f_0((MR_String) "unlock_", parse_tree__prog_mutable__Name_5);
    }
    {
      parse_tree__prog_mutable__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__HeadVar__3_3, 0) = ((MR_Box) (parse_tree__prog_mutable__ModuleName_4));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__HeadVar__3_3, 1) = ((MR_Box) (parse_tree__prog_mutable__V_6_6));
    }
    return parse_tree__prog_mutable__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
parse_tree__prog_mutable__mutable_lock_pred_sym_name_2_f_0(
  MR_Word parse_tree__prog_mutable__ModuleName_4,
  MR_String parse_tree__prog_mutable__Name_5)
{
  {
    MR_bool parse_tree__prog_mutable__succeeded;
    MR_Word parse_tree__prog_mutable__HeadVar__3_3;
    MR_String parse_tree__prog_mutable__V_6_6;

    {
      parse_tree__prog_mutable__V_6_6 = mercury__string__f_43_43_2_f_0((MR_String) "lock_", parse_tree__prog_mutable__Name_5);
    }
    {
      parse_tree__prog_mutable__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__HeadVar__3_3, 0) = ((MR_Box) (parse_tree__prog_mutable__ModuleName_4));
      MR_hl_field(MR_mktag(1), parse_tree__prog_mutable__HeadVar__3_3, 1) = ((MR_Box) (parse_tree__prog_mutable__V_6_6));
    }
    return parse_tree__prog_mutable__HeadVar__3_3;
  }
}

void mercury__parse_tree__prog_mutable__init(void)
{
}

void mercury__parse_tree__prog_mutable__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__prog_mutable__parse_tree__prog_mutable__type_ctor_info_get_set_pred_kind_0);
}

void mercury__parse_tree__prog_mutable__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__prog_mutable__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module parse_tree.prog_mutable. */
