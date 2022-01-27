/*
** Automatically generated from `java_names.m'
** by the Mercury compiler,
** version rotd-2017-01-21
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


/* :- module parse_tree.java_names. */
/* :- implementation. */

/*
INIT mercury__parse_tree__java_names__init
ENDINIT
*/

#include "parse_tree.java_names.mih"


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
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_EnumFunctorDesc parse_tree__java_names__parse_tree__java_names__enum_functor_desc_csj_qual_kind_0_0;

static const MR_EnumFunctorDesc parse_tree__java_names__parse_tree__java_names__enum_functor_desc_csj_qual_kind_0_1;

static const MR_EnumFunctorDescPtr parse_tree__java_names__parse_tree__java_names__enum_value_ordered_csj_qual_kind_0[2];

static const MR_EnumFunctorDescPtr parse_tree__java_names__parse_tree__java_names__enum_name_ordered_csj_qual_kind_0[2];

static const MR_Integer parse_tree__java_names__parse_tree__java_names__functor_number_map_csj_qual_kind_0[2];

static MR_bool MR_CALL 
parse_tree__java_names____Unify____csj_qual_kind_0_0_10001(
  MR_Box parse_tree__java_names__wrapper_arg_1,
  MR_Box parse_tree__java_names__wrapper_arg_2);

static void MR_CALL 
parse_tree__java_names____Compare____csj_qual_kind_0_0_10001(
  MR_Box * parse_tree__java_names__wrapper_arg_1,
  MR_Box parse_tree__java_names__wrapper_arg_2,
  MR_Box parse_tree__java_names__wrapper_arg_3);

static void MR_CALL 
parse_tree__java_names__mangle_sym_name_for_csharp_2_3_p_0(
  MR_Word parse_tree__java_names__SymName_4,
  MR_Word parse_tree__java_names__QualKind_5,
  MR_Word * parse_tree__java_names__MangledSymName_6);

static void MR_CALL 
parse_tree__java_names__mangle_sym_name_for_java_2_3_p_0(
  MR_Word parse_tree__java_names__SymName_4,
  MR_Word parse_tree__java_names__QualKind_5,
  MR_Word * parse_tree__java_names__MangledSymName_6);


static /* final */ const MR_Box parse_tree__java_names_scalar_common_1[2][1];

static /* final */ const MR_Box parse_tree__java_names_scalar_common_2[2][2];




static /* final */ const MR_Box parse_tree__java_names_scalar_common_1[2][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "jmercury"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "mercury"))
  },
};

static /* final */ const MR_Box parse_tree__java_names_scalar_common_2[2][2] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__java_names_scalar_common_1[0])),
    ((MR_Box) ((MR_String) "runtime"))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__java_names_scalar_common_1[1])),
    ((MR_Box) ((MR_String) "runtime"))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_EnumFunctorDesc parse_tree__java_names__parse_tree__java_names__enum_functor_desc_csj_qual_kind_0_0 = {
  (MR_String) "module_qual",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc parse_tree__java_names__parse_tree__java_names__enum_functor_desc_csj_qual_kind_0_1 = {
  (MR_String) "type_qual",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr parse_tree__java_names__parse_tree__java_names__enum_value_ordered_csj_qual_kind_0[2] = {
  &parse_tree__java_names__parse_tree__java_names__enum_functor_desc_csj_qual_kind_0_0,
  &parse_tree__java_names__parse_tree__java_names__enum_functor_desc_csj_qual_kind_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__java_names__parse_tree__java_names__enum_name_ordered_csj_qual_kind_0[2] = {
  &parse_tree__java_names__parse_tree__java_names__enum_functor_desc_csj_qual_kind_0_0,
  &parse_tree__java_names__parse_tree__java_names__enum_functor_desc_csj_qual_kind_0_1
};

static const MR_Integer parse_tree__java_names__parse_tree__java_names__functor_number_map_csj_qual_kind_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__java_names__parse_tree__java_names__type_ctor_info_csj_qual_kind_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__java_names____Unify____csj_qual_kind_0_0_10001)),
  ((MR_Box) (parse_tree__java_names____Compare____csj_qual_kind_0_0_10001)),
  (MR_String) "parse_tree.java_names",
  (MR_String) "csj_qual_kind",
  {     parse_tree__java_names__parse_tree__java_names__enum_name_ordered_csj_qual_kind_0 },
  {     parse_tree__java_names__parse_tree__java_names__enum_value_ordered_csj_qual_kind_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__java_names__parse_tree__java_names__functor_number_map_csj_qual_kind_0
};

static MR_bool MR_CALL 
parse_tree__java_names____Unify____csj_qual_kind_0_0_10001(
  MR_Box parse_tree__java_names__wrapper_arg_1,
  MR_Box parse_tree__java_names__wrapper_arg_2)
{
  {
    MR_bool parse_tree__java_names__succeeded;

    {
      parse_tree__java_names__succeeded = parse_tree__java_names____Unify____csj_qual_kind_0_0(((MR_Word) parse_tree__java_names__wrapper_arg_1), ((MR_Word) parse_tree__java_names__wrapper_arg_2));
    }
    return parse_tree__java_names__succeeded;
  }
}

static void MR_CALL 
parse_tree__java_names____Compare____csj_qual_kind_0_0_10001(
  MR_Box * parse_tree__java_names__wrapper_arg_1,
  MR_Box parse_tree__java_names__wrapper_arg_2,
  MR_Box parse_tree__java_names__wrapper_arg_3)
{
  {
    MR_Word parse_tree__java_names__conv0_HeadVar__1_1;

    {
      parse_tree__java_names____Compare____csj_qual_kind_0_0(&parse_tree__java_names__conv0_HeadVar__1_1, ((MR_Word) parse_tree__java_names__wrapper_arg_2), ((MR_Word) parse_tree__java_names__wrapper_arg_3));
    }
    *parse_tree__java_names__wrapper_arg_1 = ((MR_Box) (parse_tree__java_names__conv0_HeadVar__1_1));
  }
}

void MR_CALL 
parse_tree__java_names____Compare____csj_qual_kind_0_0(
  MR_Word * parse_tree__java_names__HeadVar__1_1,
  MR_Word parse_tree__java_names__HeadVar__2_2,
  MR_Word parse_tree__java_names__HeadVar__3_3)
{
  {
    MR_bool parse_tree__java_names__succeeded;
    MR_Integer parse_tree__java_names__Cast_HeadVar1_4 = (MR_Integer) parse_tree__java_names__HeadVar__2_2;
    MR_Integer parse_tree__java_names__Cast_HeadVar2_5 = (MR_Integer) parse_tree__java_names__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__java_names__HeadVar__1_1, parse_tree__java_names__Cast_HeadVar1_4, parse_tree__java_names__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
parse_tree__java_names____Unify____csj_qual_kind_0_0(
  MR_Word parse_tree__java_names__HeadVar__2_1,
  MR_Word parse_tree__java_names__HeadVar__2_2)
{
  {
    MR_bool parse_tree__java_names__succeeded = (parse_tree__java_names__HeadVar__2_1 == parse_tree__java_names__HeadVar__2_2);

    return parse_tree__java_names__succeeded;
  }
}

static void MR_CALL 
parse_tree__java_names__mangle_sym_name_for_csharp_2_3_p_0(
  MR_Word parse_tree__java_names__SymName_4,
  MR_Word parse_tree__java_names__QualKind_5,
  MR_Word * parse_tree__java_names__MangledSymName_6)
{
  {
    MR_bool parse_tree__java_names__succeeded;

    if (((MR_tag((MR_Word) parse_tree__java_names__SymName_4)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word parse_tree__java_names__ModuleName0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__java_names__SymName_4, (MR_Integer) 0)));
        MR_String parse_tree__java_names__PlainName_10 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__java_names__SymName_4, (MR_Integer) 1)));
        MR_Word parse_tree__java_names__MangledModuleName_11;
        MR_String parse_tree__java_names__SafePlainName_12;
        MR_String parse_tree__java_names__MangledName_17;
        MR_String parse_tree__java_names__FlippedName_18;

        {
          parse_tree__java_names__mangle_sym_name_for_csharp_2_3_p_0(parse_tree__java_names__ModuleName0_9, (MR_Integer) 0, &parse_tree__java_names__MangledModuleName_11);
        }
        {
          parse_tree__java_names__MangledName_17 = parse_tree__prog_foreign__name_mangle_no_leading_digit_1_f_0(parse_tree__java_names__PlainName_10);
        }
        switch (parse_tree__java_names__QualKind_5) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            parse_tree__java_names__FlippedName_18 = parse_tree__java_names__MangledName_17;
            break;
          case (MR_Integer) 1:
            {
              parse_tree__java_names__FlippedName_18 = parse_tree__java_names__flip_initial_case_1_f_0(parse_tree__java_names__MangledName_17);
            }
            break;
        }
        {
          parse_tree__java_names__SafePlainName_12 = parse_tree__java_names__valid_csharp_symbol_name_1_f_0(parse_tree__java_names__FlippedName_18);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *parse_tree__java_names__MangledSymName_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__java_names__MangledModuleName_11));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__java_names__SafePlainName_12));
        }
      }
    else
      {
        MR_String parse_tree__java_names__Name_7 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__java_names__SymName_4, (MR_Integer) 0)));
        MR_String parse_tree__java_names__SafeName_8;
        MR_String parse_tree__java_names__MangledName_22;
        MR_String parse_tree__java_names__FlippedName_23;

        {
          parse_tree__java_names__MangledName_22 = parse_tree__prog_foreign__name_mangle_no_leading_digit_1_f_0(parse_tree__java_names__Name_7);
        }
        switch (parse_tree__java_names__QualKind_5) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            parse_tree__java_names__FlippedName_23 = parse_tree__java_names__MangledName_22;
            break;
          case (MR_Integer) 1:
            {
              parse_tree__java_names__FlippedName_23 = parse_tree__java_names__flip_initial_case_1_f_0(parse_tree__java_names__MangledName_22);
            }
            break;
        }
        {
          parse_tree__java_names__SafeName_8 = parse_tree__java_names__valid_csharp_symbol_name_1_f_0(parse_tree__java_names__FlippedName_23);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__java_names__MangledSymName_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__java_names__SafeName_8));
        }
      }
  }
}

static void MR_CALL 
parse_tree__java_names__mangle_sym_name_for_java_2_3_p_0(
  MR_Word parse_tree__java_names__SymName_4,
  MR_Word parse_tree__java_names__QualKind_5,
  MR_Word * parse_tree__java_names__MangledSymName_6)
{
  {
    MR_bool parse_tree__java_names__succeeded;

    if (((MR_tag((MR_Word) parse_tree__java_names__SymName_4)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word parse_tree__java_names__ModuleName0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__java_names__SymName_4, (MR_Integer) 0)));
        MR_String parse_tree__java_names__PlainName_10 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__java_names__SymName_4, (MR_Integer) 1)));
        MR_Word parse_tree__java_names__MangledModuleName_11;
        MR_String parse_tree__java_names__JavaSafePlainName_12;
        MR_String parse_tree__java_names__MangledName_17;
        MR_String parse_tree__java_names__FlippedName_18;

        {
          parse_tree__java_names__mangle_sym_name_for_java_2_3_p_0(parse_tree__java_names__ModuleName0_9, (MR_Integer) 0, &parse_tree__java_names__MangledModuleName_11);
        }
        {
          parse_tree__java_names__MangledName_17 = parse_tree__prog_foreign__name_mangle_no_leading_digit_1_f_0(parse_tree__java_names__PlainName_10);
        }
        switch (parse_tree__java_names__QualKind_5) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            parse_tree__java_names__FlippedName_18 = parse_tree__java_names__MangledName_17;
            break;
          case (MR_Integer) 1:
            {
              parse_tree__java_names__FlippedName_18 = parse_tree__java_names__flip_initial_case_1_f_0(parse_tree__java_names__MangledName_17);
            }
            break;
        }
        {
          parse_tree__java_names__JavaSafePlainName_12 = parse_tree__java_names__valid_java_symbol_name_1_f_0(parse_tree__java_names__FlippedName_18);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *parse_tree__java_names__MangledSymName_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__java_names__MangledModuleName_11));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__java_names__JavaSafePlainName_12));
        }
      }
    else
      {
        MR_String parse_tree__java_names__Name_7 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__java_names__SymName_4, (MR_Integer) 0)));
        MR_String parse_tree__java_names__JavaSafeName_8;
        MR_String parse_tree__java_names__MangledName_22;
        MR_String parse_tree__java_names__FlippedName_23;

        {
          parse_tree__java_names__MangledName_22 = parse_tree__prog_foreign__name_mangle_no_leading_digit_1_f_0(parse_tree__java_names__Name_7);
        }
        switch (parse_tree__java_names__QualKind_5) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            parse_tree__java_names__FlippedName_23 = parse_tree__java_names__MangledName_22;
            break;
          case (MR_Integer) 1:
            {
              parse_tree__java_names__FlippedName_23 = parse_tree__java_names__flip_initial_case_1_f_0(parse_tree__java_names__MangledName_22);
            }
            break;
        }
        {
          parse_tree__java_names__JavaSafeName_8 = parse_tree__java_names__valid_java_symbol_name_1_f_0(parse_tree__java_names__FlippedName_23);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__java_names__MangledSymName_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__java_names__JavaSafeName_8));
        }
      }
  }
}

MR_Word MR_CALL 
parse_tree__java_names__flip_initial_case_of_final_part_1_f_0(
  MR_Word parse_tree__java_names__HeadVar__1_1)
{
  {
    MR_bool parse_tree__java_names__succeeded;
    MR_Word parse_tree__java_names__HeadVar__2_2;

    if (((MR_tag((MR_Word) parse_tree__java_names__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word parse_tree__java_names__Qual_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__java_names__HeadVar__1_1, (MR_Integer) 0)));
        MR_String parse_tree__java_names__Name_6 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__java_names__HeadVar__1_1, (MR_Integer) 1)));
        MR_String parse_tree__java_names__V_7_7;

        {
          parse_tree__java_names__V_7_7 = parse_tree__java_names__flip_initial_case_1_f_0(parse_tree__java_names__Name_6);
        }
        {
          parse_tree__java_names__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__java_names__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__java_names__Qual_5));
          MR_hl_field(MR_mktag(1), parse_tree__java_names__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__java_names__V_7_7));
        }
      }
    else
      {
        MR_String parse_tree__java_names__Name_3 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__java_names__HeadVar__1_1, (MR_Integer) 0)));
        MR_String parse_tree__java_names__V_4_4;

        {
          parse_tree__java_names__V_4_4 = parse_tree__java_names__flip_initial_case_1_f_0(parse_tree__java_names__Name_3);
        }
        {
          parse_tree__java_names__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__java_names__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__java_names__V_4_4));
        }
      }
    return parse_tree__java_names__HeadVar__2_2;
  }
}

MR_String MR_CALL 
parse_tree__java_names__flip_initial_case_1_f_0(
  MR_String parse_tree__java_names__S0_3)
{
  {
    MR_bool parse_tree__java_names__succeeded;
    MR_String parse_tree__java_names__S_4;
    MR_Char parse_tree__java_names__First0_5;
    MR_String parse_tree__java_names__Rest_6;

    {
      parse_tree__java_names__succeeded = mercury__string__first_char_3_p_3(parse_tree__java_names__S0_3, &parse_tree__java_names__First0_5, &parse_tree__java_names__Rest_6);
    }
    if (parse_tree__java_names__succeeded)
      {
        MR_Char parse_tree__java_names__First_7;

        {
          parse_tree__java_names__succeeded = mercury__char__is_upper_1_p_0(parse_tree__java_names__First0_5);
        }
        if (parse_tree__java_names__succeeded)
          {
            parse_tree__java_names__First_7 = mercury__char__to_lower_1_f_0(parse_tree__java_names__First0_5);
          }
        else
          {
            {
              parse_tree__java_names__succeeded = mercury__char__is_lower_1_p_0(parse_tree__java_names__First0_5);
            }
            if (parse_tree__java_names__succeeded)
              {
                parse_tree__java_names__First_7 = mercury__char__to_upper_1_f_0(parse_tree__java_names__First0_5);
              }
            else
              parse_tree__java_names__First_7 = parse_tree__java_names__First0_5;
          }
        {
          mercury__string__first_char_3_p_4(&parse_tree__java_names__S_4, parse_tree__java_names__First_7, parse_tree__java_names__Rest_6);
        }
      }
    else
      parse_tree__java_names__S_4 = parse_tree__java_names__S0_3;
    return parse_tree__java_names__S_4;
  }
}

MR_Word MR_CALL 
parse_tree__java_names__csharp_mercury_runtime_package_name_0_f_0(void)
{
  {
    MR_bool parse_tree__java_names__succeeded;

    return (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__java_names_scalar_common_2[1]);
  }
}

MR_bool MR_CALL 
parse_tree__java_names__csharp_is_keyword_1_p_0(
  MR_String parse_tree__java_names__HeadVar__1_1)
{
  {
    MR_bool parse_tree__java_names__succeeded;

    {
      MR_Integer parse_tree__java_names__case_num_0 = (MR_Integer) -1;

      switch (MR_nth_code_unit(parse_tree__java_names__HeadVar__1_1, 0)) {
        case (MR_Integer) 97:
          switch (MR_nth_code_unit(parse_tree__java_names__HeadVar__1_1, 1)) {
            case (MR_Integer) 98:
              if (MR_offset_streq(2, parse_tree__java_names__HeadVar__1_1, (MR_String) "abstract"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 0;
              break;
            case (MR_Integer) 115:
              if (MR_offset_streq(2, parse_tree__java_names__HeadVar__1_1, (MR_String) "as"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 1;
              break;
          }
          break;
        case (MR_Integer) 98:
          switch (MR_nth_code_unit(parse_tree__java_names__HeadVar__1_1, 1)) {
            case (MR_Integer) 97:
              if (MR_offset_streq(2, parse_tree__java_names__HeadVar__1_1, (MR_String) "base"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 2;
              break;
            case (MR_Integer) 111:
              if (MR_offset_streq(2, parse_tree__java_names__HeadVar__1_1, (MR_String) "bool"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 3;
              break;
            case (MR_Integer) 114:
              if (MR_offset_streq(2, parse_tree__java_names__HeadVar__1_1, (MR_String) "break"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 4;
              break;
            case (MR_Integer) 121:
              if (MR_offset_streq(2, parse_tree__java_names__HeadVar__1_1, (MR_String) "byte"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 5;
              break;
          }
          break;
        case (MR_Integer) 99:
          switch (MR_nth_code_unit(parse_tree__java_names__HeadVar__1_1, 1)) {
            case (MR_Integer) 97:
              switch (MR_nth_code_unit(parse_tree__java_names__HeadVar__1_1, 2)) {
                case (MR_Integer) 115:
                  if (MR_offset_streq(3, parse_tree__java_names__HeadVar__1_1, (MR_String) "case"))
                    parse_tree__java_names__case_num_0 = (MR_Integer) 6;
                  break;
                case (MR_Integer) 116:
                  if (MR_offset_streq(3, parse_tree__java_names__HeadVar__1_1, (MR_String) "catch"))
                    parse_tree__java_names__case_num_0 = (MR_Integer) 7;
                  break;
              }
              break;
            case (MR_Integer) 104:
              switch (MR_nth_code_unit(parse_tree__java_names__HeadVar__1_1, 2)) {
                case (MR_Integer) 97:
                  if (MR_offset_streq(3, parse_tree__java_names__HeadVar__1_1, (MR_String) "char"))
                    parse_tree__java_names__case_num_0 = (MR_Integer) 8;
                  break;
                case (MR_Integer) 101:
                  if (MR_offset_streq(3, parse_tree__java_names__HeadVar__1_1, (MR_String) "checked"))
                    parse_tree__java_names__case_num_0 = (MR_Integer) 9;
                  break;
              }
              break;
            case (MR_Integer) 108:
              if (MR_offset_streq(2, parse_tree__java_names__HeadVar__1_1, (MR_String) "class"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 10;
              break;
            case (MR_Integer) 111:
              if (((MR_nth_code_unit(parse_tree__java_names__HeadVar__1_1, 2)) == (MR_Integer) 110))
                switch (MR_nth_code_unit(parse_tree__java_names__HeadVar__1_1, 3)) {
                  case (MR_Integer) 115:
                    if (MR_offset_streq(4, parse_tree__java_names__HeadVar__1_1, (MR_String) "const"))
                      parse_tree__java_names__case_num_0 = (MR_Integer) 11;
                    break;
                  case (MR_Integer) 116:
                    if (MR_offset_streq(4, parse_tree__java_names__HeadVar__1_1, (MR_String) "continue"))
                      parse_tree__java_names__case_num_0 = (MR_Integer) 12;
                    break;
                }
              break;
          }
          break;
        case (MR_Integer) 100:
          switch (MR_nth_code_unit(parse_tree__java_names__HeadVar__1_1, 1)) {
            case (MR_Integer) 101:
              switch (MR_nth_code_unit(parse_tree__java_names__HeadVar__1_1, 2)) {
                case (MR_Integer) 99:
                  if (MR_offset_streq(3, parse_tree__java_names__HeadVar__1_1, (MR_String) "decimal"))
                    parse_tree__java_names__case_num_0 = (MR_Integer) 13;
                  break;
                case (MR_Integer) 102:
                  if (MR_offset_streq(3, parse_tree__java_names__HeadVar__1_1, (MR_String) "default"))
                    parse_tree__java_names__case_num_0 = (MR_Integer) 14;
                  break;
                case (MR_Integer) 108:
                  if (MR_offset_streq(3, parse_tree__java_names__HeadVar__1_1, (MR_String) "delegate"))
                    parse_tree__java_names__case_num_0 = (MR_Integer) 15;
                  break;
              }
              break;
            case (MR_Integer) 111:
              switch (MR_nth_code_unit(parse_tree__java_names__HeadVar__1_1, 2)) {
                case (MR_Integer) 0:
                  parse_tree__java_names__case_num_0 = (MR_Integer) 16;
                  break;
                case (MR_Integer) 117:
                  if (MR_offset_streq(3, parse_tree__java_names__HeadVar__1_1, (MR_String) "double"))
                    parse_tree__java_names__case_num_0 = (MR_Integer) 17;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 101:
          switch (MR_nth_code_unit(parse_tree__java_names__HeadVar__1_1, 1)) {
            case (MR_Integer) 108:
              if (MR_offset_streq(2, parse_tree__java_names__HeadVar__1_1, (MR_String) "else"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 18;
              break;
            case (MR_Integer) 110:
              if (MR_offset_streq(2, parse_tree__java_names__HeadVar__1_1, (MR_String) "enum"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 19;
              break;
            case (MR_Integer) 118:
              if (MR_offset_streq(2, parse_tree__java_names__HeadVar__1_1, (MR_String) "event"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 20;
              break;
            case (MR_Integer) 120:
              switch (MR_nth_code_unit(parse_tree__java_names__HeadVar__1_1, 2)) {
                case (MR_Integer) 112:
                  if (MR_offset_streq(3, parse_tree__java_names__HeadVar__1_1, (MR_String) "explicit"))
                    parse_tree__java_names__case_num_0 = (MR_Integer) 21;
                  break;
                case (MR_Integer) 116:
                  if (MR_offset_streq(3, parse_tree__java_names__HeadVar__1_1, (MR_String) "extern"))
                    parse_tree__java_names__case_num_0 = (MR_Integer) 22;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 102:
          switch (MR_nth_code_unit(parse_tree__java_names__HeadVar__1_1, 1)) {
            case (MR_Integer) 97:
              if (MR_offset_streq(2, parse_tree__java_names__HeadVar__1_1, (MR_String) "false"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 23;
              break;
            case (MR_Integer) 105:
              switch (MR_nth_code_unit(parse_tree__java_names__HeadVar__1_1, 2)) {
                case (MR_Integer) 110:
                  if (MR_offset_streq(3, parse_tree__java_names__HeadVar__1_1, (MR_String) "finally"))
                    parse_tree__java_names__case_num_0 = (MR_Integer) 24;
                  break;
                case (MR_Integer) 120:
                  if (MR_offset_streq(3, parse_tree__java_names__HeadVar__1_1, (MR_String) "fixed"))
                    parse_tree__java_names__case_num_0 = (MR_Integer) 25;
                  break;
              }
              break;
            case (MR_Integer) 108:
              if (MR_offset_streq(2, parse_tree__java_names__HeadVar__1_1, (MR_String) "float"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 26;
              break;
            case (MR_Integer) 111:
              if (((MR_nth_code_unit(parse_tree__java_names__HeadVar__1_1, 2)) == (MR_Integer) 114))
                switch (MR_nth_code_unit(parse_tree__java_names__HeadVar__1_1, 3)) {
                  case (MR_Integer) 0:
                    parse_tree__java_names__case_num_0 = (MR_Integer) 27;
                    break;
                  case (MR_Integer) 101:
                    if (MR_offset_streq(4, parse_tree__java_names__HeadVar__1_1, (MR_String) "foreach"))
                      parse_tree__java_names__case_num_0 = (MR_Integer) 28;
                    break;
                }
              break;
          }
          break;
        case (MR_Integer) 103:
          if (MR_offset_streq(1, parse_tree__java_names__HeadVar__1_1, (MR_String) "goto"))
            parse_tree__java_names__case_num_0 = (MR_Integer) 29;
          break;
        case (MR_Integer) 105:
          switch (MR_nth_code_unit(parse_tree__java_names__HeadVar__1_1, 1)) {
            case (MR_Integer) 102:
              if (MR_offset_streq(2, parse_tree__java_names__HeadVar__1_1, (MR_String) "if"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 30;
              break;
            case (MR_Integer) 109:
              if (MR_offset_streq(2, parse_tree__java_names__HeadVar__1_1, (MR_String) "implicit"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 31;
              break;
            case (MR_Integer) 110:
              switch (MR_nth_code_unit(parse_tree__java_names__HeadVar__1_1, 2)) {
                case (MR_Integer) 0:
                  parse_tree__java_names__case_num_0 = (MR_Integer) 32;
                  break;
                case (MR_Integer) 116:
                  switch (MR_nth_code_unit(parse_tree__java_names__HeadVar__1_1, 3)) {
                    case (MR_Integer) 0:
                      parse_tree__java_names__case_num_0 = (MR_Integer) 33;
                      break;
                    case (MR_Integer) 101:
                      if (((MR_nth_code_unit(parse_tree__java_names__HeadVar__1_1, 4)) == (MR_Integer) 114))
                        switch (MR_nth_code_unit(parse_tree__java_names__HeadVar__1_1, 5)) {
                          case (MR_Integer) 102:
                            if (MR_offset_streq(6, parse_tree__java_names__HeadVar__1_1, (MR_String) "interface"))
                              parse_tree__java_names__case_num_0 = (MR_Integer) 34;
                            break;
                          case (MR_Integer) 110:
                            if (MR_offset_streq(6, parse_tree__java_names__HeadVar__1_1, (MR_String) "internal"))
                              parse_tree__java_names__case_num_0 = (MR_Integer) 35;
                            break;
                        }
                      break;
                  }
                  break;
              }
              break;
            case (MR_Integer) 115:
              if (MR_offset_streq(2, parse_tree__java_names__HeadVar__1_1, (MR_String) "is"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 36;
              break;
          }
          break;
        case (MR_Integer) 108:
          if (((MR_nth_code_unit(parse_tree__java_names__HeadVar__1_1, 1)) == (MR_Integer) 111))
            switch (MR_nth_code_unit(parse_tree__java_names__HeadVar__1_1, 2)) {
              case (MR_Integer) 99:
                if (MR_offset_streq(3, parse_tree__java_names__HeadVar__1_1, (MR_String) "lock"))
                  parse_tree__java_names__case_num_0 = (MR_Integer) 37;
                break;
              case (MR_Integer) 110:
                if (MR_offset_streq(3, parse_tree__java_names__HeadVar__1_1, (MR_String) "long"))
                  parse_tree__java_names__case_num_0 = (MR_Integer) 38;
                break;
            }
          break;
        case (MR_Integer) 110:
          switch (MR_nth_code_unit(parse_tree__java_names__HeadVar__1_1, 1)) {
            case (MR_Integer) 97:
              if (MR_offset_streq(2, parse_tree__java_names__HeadVar__1_1, (MR_String) "namespace"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 39;
              break;
            case (MR_Integer) 101:
              if (MR_offset_streq(2, parse_tree__java_names__HeadVar__1_1, (MR_String) "new"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 40;
              break;
            case (MR_Integer) 117:
              if (MR_offset_streq(2, parse_tree__java_names__HeadVar__1_1, (MR_String) "null"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 41;
              break;
          }
          break;
        case (MR_Integer) 111:
          switch (MR_nth_code_unit(parse_tree__java_names__HeadVar__1_1, 1)) {
            case (MR_Integer) 98:
              if (MR_offset_streq(2, parse_tree__java_names__HeadVar__1_1, (MR_String) "object"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 42;
              break;
            case (MR_Integer) 112:
              if (MR_offset_streq(2, parse_tree__java_names__HeadVar__1_1, (MR_String) "operator"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 43;
              break;
            case (MR_Integer) 117:
              if (MR_offset_streq(2, parse_tree__java_names__HeadVar__1_1, (MR_String) "out"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 44;
              break;
            case (MR_Integer) 118:
              if (MR_offset_streq(2, parse_tree__java_names__HeadVar__1_1, (MR_String) "override"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 45;
              break;
          }
          break;
        case (MR_Integer) 112:
          switch (MR_nth_code_unit(parse_tree__java_names__HeadVar__1_1, 1)) {
            case (MR_Integer) 97:
              if (MR_offset_streq(2, parse_tree__java_names__HeadVar__1_1, (MR_String) "params"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 46;
              break;
            case (MR_Integer) 114:
              switch (MR_nth_code_unit(parse_tree__java_names__HeadVar__1_1, 2)) {
                case (MR_Integer) 105:
                  if (MR_offset_streq(3, parse_tree__java_names__HeadVar__1_1, (MR_String) "private"))
                    parse_tree__java_names__case_num_0 = (MR_Integer) 47;
                  break;
                case (MR_Integer) 111:
                  if (MR_offset_streq(3, parse_tree__java_names__HeadVar__1_1, (MR_String) "protected"))
                    parse_tree__java_names__case_num_0 = (MR_Integer) 48;
                  break;
              }
              break;
            case (MR_Integer) 117:
              if (MR_offset_streq(2, parse_tree__java_names__HeadVar__1_1, (MR_String) "public"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 49;
              break;
          }
          break;
        case (MR_Integer) 114:
          if (((MR_nth_code_unit(parse_tree__java_names__HeadVar__1_1, 1)) == (MR_Integer) 101))
            switch (MR_nth_code_unit(parse_tree__java_names__HeadVar__1_1, 2)) {
              case (MR_Integer) 97:
                if (MR_offset_streq(3, parse_tree__java_names__HeadVar__1_1, (MR_String) "readonly"))
                  parse_tree__java_names__case_num_0 = (MR_Integer) 50;
                break;
              case (MR_Integer) 102:
                if (MR_offset_streq(3, parse_tree__java_names__HeadVar__1_1, (MR_String) "ref"))
                  parse_tree__java_names__case_num_0 = (MR_Integer) 51;
                break;
              case (MR_Integer) 116:
                if (MR_offset_streq(3, parse_tree__java_names__HeadVar__1_1, (MR_String) "return"))
                  parse_tree__java_names__case_num_0 = (MR_Integer) 52;
                break;
            }
          break;
        case (MR_Integer) 115:
          switch (MR_nth_code_unit(parse_tree__java_names__HeadVar__1_1, 1)) {
            case (MR_Integer) 98:
              if (MR_offset_streq(2, parse_tree__java_names__HeadVar__1_1, (MR_String) "sbyte"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 53;
              break;
            case (MR_Integer) 101:
              if (MR_offset_streq(2, parse_tree__java_names__HeadVar__1_1, (MR_String) "sealed"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 54;
              break;
            case (MR_Integer) 104:
              if (MR_offset_streq(2, parse_tree__java_names__HeadVar__1_1, (MR_String) "short"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 55;
              break;
            case (MR_Integer) 105:
              if (MR_offset_streq(2, parse_tree__java_names__HeadVar__1_1, (MR_String) "sizeof"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 56;
              break;
            case (MR_Integer) 116:
              switch (MR_nth_code_unit(parse_tree__java_names__HeadVar__1_1, 2)) {
                case (MR_Integer) 97:
                  switch (MR_nth_code_unit(parse_tree__java_names__HeadVar__1_1, 3)) {
                    case (MR_Integer) 99:
                      if (MR_offset_streq(4, parse_tree__java_names__HeadVar__1_1, (MR_String) "stackalloc"))
                        parse_tree__java_names__case_num_0 = (MR_Integer) 57;
                      break;
                    case (MR_Integer) 116:
                      if (MR_offset_streq(4, parse_tree__java_names__HeadVar__1_1, (MR_String) "static"))
                        parse_tree__java_names__case_num_0 = (MR_Integer) 58;
                      break;
                  }
                  break;
                case (MR_Integer) 114:
                  switch (MR_nth_code_unit(parse_tree__java_names__HeadVar__1_1, 3)) {
                    case (MR_Integer) 105:
                      if (MR_offset_streq(4, parse_tree__java_names__HeadVar__1_1, (MR_String) "string"))
                        parse_tree__java_names__case_num_0 = (MR_Integer) 59;
                      break;
                    case (MR_Integer) 117:
                      if (MR_offset_streq(4, parse_tree__java_names__HeadVar__1_1, (MR_String) "struct"))
                        parse_tree__java_names__case_num_0 = (MR_Integer) 60;
                      break;
                  }
                  break;
              }
              break;
            case (MR_Integer) 119:
              if (MR_offset_streq(2, parse_tree__java_names__HeadVar__1_1, (MR_String) "switch"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 61;
              break;
          }
          break;
        case (MR_Integer) 116:
          switch (MR_nth_code_unit(parse_tree__java_names__HeadVar__1_1, 1)) {
            case (MR_Integer) 104:
              switch (MR_nth_code_unit(parse_tree__java_names__HeadVar__1_1, 2)) {
                case (MR_Integer) 105:
                  if (MR_offset_streq(3, parse_tree__java_names__HeadVar__1_1, (MR_String) "this"))
                    parse_tree__java_names__case_num_0 = (MR_Integer) 62;
                  break;
                case (MR_Integer) 114:
                  if (MR_offset_streq(3, parse_tree__java_names__HeadVar__1_1, (MR_String) "throw"))
                    parse_tree__java_names__case_num_0 = (MR_Integer) 63;
                  break;
              }
              break;
            case (MR_Integer) 114:
              switch (MR_nth_code_unit(parse_tree__java_names__HeadVar__1_1, 2)) {
                case (MR_Integer) 117:
                  if (MR_offset_streq(3, parse_tree__java_names__HeadVar__1_1, (MR_String) "true"))
                    parse_tree__java_names__case_num_0 = (MR_Integer) 64;
                  break;
                case (MR_Integer) 121:
                  if (MR_offset_streq(3, parse_tree__java_names__HeadVar__1_1, (MR_String) "try"))
                    parse_tree__java_names__case_num_0 = (MR_Integer) 65;
                  break;
              }
              break;
            case (MR_Integer) 121:
              if (MR_offset_streq(2, parse_tree__java_names__HeadVar__1_1, (MR_String) "typeof"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 66;
              break;
          }
          break;
        case (MR_Integer) 117:
          switch (MR_nth_code_unit(parse_tree__java_names__HeadVar__1_1, 1)) {
            case (MR_Integer) 105:
              if (MR_offset_streq(2, parse_tree__java_names__HeadVar__1_1, (MR_String) "uint"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 67;
              break;
            case (MR_Integer) 108:
              if (MR_offset_streq(2, parse_tree__java_names__HeadVar__1_1, (MR_String) "ulong"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 68;
              break;
            case (MR_Integer) 110:
              switch (MR_nth_code_unit(parse_tree__java_names__HeadVar__1_1, 2)) {
                case (MR_Integer) 99:
                  if (MR_offset_streq(3, parse_tree__java_names__HeadVar__1_1, (MR_String) "unchecked"))
                    parse_tree__java_names__case_num_0 = (MR_Integer) 69;
                  break;
                case (MR_Integer) 115:
                  if (MR_offset_streq(3, parse_tree__java_names__HeadVar__1_1, (MR_String) "unsafe"))
                    parse_tree__java_names__case_num_0 = (MR_Integer) 70;
                  break;
              }
              break;
            case (MR_Integer) 115:
              switch (MR_nth_code_unit(parse_tree__java_names__HeadVar__1_1, 2)) {
                case (MR_Integer) 104:
                  if (MR_offset_streq(3, parse_tree__java_names__HeadVar__1_1, (MR_String) "ushort"))
                    parse_tree__java_names__case_num_0 = (MR_Integer) 71;
                  break;
                case (MR_Integer) 105:
                  if (MR_offset_streq(3, parse_tree__java_names__HeadVar__1_1, (MR_String) "using"))
                    parse_tree__java_names__case_num_0 = (MR_Integer) 72;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 118:
          switch (MR_nth_code_unit(parse_tree__java_names__HeadVar__1_1, 1)) {
            case (MR_Integer) 105:
              if (MR_offset_streq(2, parse_tree__java_names__HeadVar__1_1, (MR_String) "virtual"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 73;
              break;
            case (MR_Integer) 111:
              switch (MR_nth_code_unit(parse_tree__java_names__HeadVar__1_1, 2)) {
                case (MR_Integer) 105:
                  if (MR_offset_streq(3, parse_tree__java_names__HeadVar__1_1, (MR_String) "void"))
                    parse_tree__java_names__case_num_0 = (MR_Integer) 74;
                  break;
                case (MR_Integer) 108:
                  if (MR_offset_streq(3, parse_tree__java_names__HeadVar__1_1, (MR_String) "volatile"))
                    parse_tree__java_names__case_num_0 = (MR_Integer) 75;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 119:
          if (MR_offset_streq(1, parse_tree__java_names__HeadVar__1_1, (MR_String) "while"))
            parse_tree__java_names__case_num_0 = (MR_Integer) 76;
          break;
      }
      if ((parse_tree__java_names__case_num_0 < (MR_Integer) 0))
        parse_tree__java_names__succeeded = MR_FALSE;
      else
        {
          /* we found a match; look up the results */
          parse_tree__java_names__succeeded = MR_TRUE;
        }
    }
    return parse_tree__java_names__succeeded;
  }
}

MR_String MR_CALL 
parse_tree__java_names__valid_csharp_symbol_name_1_f_0(
  MR_String parse_tree__java_names__SymName_3)
{
  {
    MR_bool parse_tree__java_names__succeeded;
    MR_String parse_tree__java_names__ValidSymName_4;

    {
      MR_Integer parse_tree__java_names__case_num_0 = (MR_Integer) -1;

      switch (MR_nth_code_unit(parse_tree__java_names__SymName_3, 0)) {
        case (MR_Integer) 97:
          switch (MR_nth_code_unit(parse_tree__java_names__SymName_3, 1)) {
            case (MR_Integer) 98:
              if (MR_offset_streq(2, parse_tree__java_names__SymName_3, (MR_String) "abstract"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 0;
              break;
            case (MR_Integer) 115:
              if (MR_offset_streq(2, parse_tree__java_names__SymName_3, (MR_String) "as"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 1;
              break;
          }
          break;
        case (MR_Integer) 98:
          switch (MR_nth_code_unit(parse_tree__java_names__SymName_3, 1)) {
            case (MR_Integer) 97:
              if (MR_offset_streq(2, parse_tree__java_names__SymName_3, (MR_String) "base"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 2;
              break;
            case (MR_Integer) 111:
              if (MR_offset_streq(2, parse_tree__java_names__SymName_3, (MR_String) "bool"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 3;
              break;
            case (MR_Integer) 114:
              if (MR_offset_streq(2, parse_tree__java_names__SymName_3, (MR_String) "break"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 4;
              break;
            case (MR_Integer) 121:
              if (MR_offset_streq(2, parse_tree__java_names__SymName_3, (MR_String) "byte"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 5;
              break;
          }
          break;
        case (MR_Integer) 99:
          switch (MR_nth_code_unit(parse_tree__java_names__SymName_3, 1)) {
            case (MR_Integer) 97:
              switch (MR_nth_code_unit(parse_tree__java_names__SymName_3, 2)) {
                case (MR_Integer) 115:
                  if (MR_offset_streq(3, parse_tree__java_names__SymName_3, (MR_String) "case"))
                    parse_tree__java_names__case_num_0 = (MR_Integer) 6;
                  break;
                case (MR_Integer) 116:
                  if (MR_offset_streq(3, parse_tree__java_names__SymName_3, (MR_String) "catch"))
                    parse_tree__java_names__case_num_0 = (MR_Integer) 7;
                  break;
              }
              break;
            case (MR_Integer) 104:
              switch (MR_nth_code_unit(parse_tree__java_names__SymName_3, 2)) {
                case (MR_Integer) 97:
                  if (MR_offset_streq(3, parse_tree__java_names__SymName_3, (MR_String) "char"))
                    parse_tree__java_names__case_num_0 = (MR_Integer) 8;
                  break;
                case (MR_Integer) 101:
                  if (MR_offset_streq(3, parse_tree__java_names__SymName_3, (MR_String) "checked"))
                    parse_tree__java_names__case_num_0 = (MR_Integer) 9;
                  break;
              }
              break;
            case (MR_Integer) 108:
              if (MR_offset_streq(2, parse_tree__java_names__SymName_3, (MR_String) "class"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 10;
              break;
            case (MR_Integer) 111:
              if (((MR_nth_code_unit(parse_tree__java_names__SymName_3, 2)) == (MR_Integer) 110))
                switch (MR_nth_code_unit(parse_tree__java_names__SymName_3, 3)) {
                  case (MR_Integer) 115:
                    if (MR_offset_streq(4, parse_tree__java_names__SymName_3, (MR_String) "const"))
                      parse_tree__java_names__case_num_0 = (MR_Integer) 11;
                    break;
                  case (MR_Integer) 116:
                    if (MR_offset_streq(4, parse_tree__java_names__SymName_3, (MR_String) "continue"))
                      parse_tree__java_names__case_num_0 = (MR_Integer) 12;
                    break;
                }
              break;
          }
          break;
        case (MR_Integer) 100:
          switch (MR_nth_code_unit(parse_tree__java_names__SymName_3, 1)) {
            case (MR_Integer) 101:
              switch (MR_nth_code_unit(parse_tree__java_names__SymName_3, 2)) {
                case (MR_Integer) 99:
                  if (MR_offset_streq(3, parse_tree__java_names__SymName_3, (MR_String) "decimal"))
                    parse_tree__java_names__case_num_0 = (MR_Integer) 13;
                  break;
                case (MR_Integer) 102:
                  if (MR_offset_streq(3, parse_tree__java_names__SymName_3, (MR_String) "default"))
                    parse_tree__java_names__case_num_0 = (MR_Integer) 14;
                  break;
                case (MR_Integer) 108:
                  if (MR_offset_streq(3, parse_tree__java_names__SymName_3, (MR_String) "delegate"))
                    parse_tree__java_names__case_num_0 = (MR_Integer) 15;
                  break;
              }
              break;
            case (MR_Integer) 111:
              switch (MR_nth_code_unit(parse_tree__java_names__SymName_3, 2)) {
                case (MR_Integer) 0:
                  parse_tree__java_names__case_num_0 = (MR_Integer) 16;
                  break;
                case (MR_Integer) 117:
                  if (MR_offset_streq(3, parse_tree__java_names__SymName_3, (MR_String) "double"))
                    parse_tree__java_names__case_num_0 = (MR_Integer) 17;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 101:
          switch (MR_nth_code_unit(parse_tree__java_names__SymName_3, 1)) {
            case (MR_Integer) 108:
              if (MR_offset_streq(2, parse_tree__java_names__SymName_3, (MR_String) "else"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 18;
              break;
            case (MR_Integer) 110:
              if (MR_offset_streq(2, parse_tree__java_names__SymName_3, (MR_String) "enum"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 19;
              break;
            case (MR_Integer) 118:
              if (MR_offset_streq(2, parse_tree__java_names__SymName_3, (MR_String) "event"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 20;
              break;
            case (MR_Integer) 120:
              switch (MR_nth_code_unit(parse_tree__java_names__SymName_3, 2)) {
                case (MR_Integer) 112:
                  if (MR_offset_streq(3, parse_tree__java_names__SymName_3, (MR_String) "explicit"))
                    parse_tree__java_names__case_num_0 = (MR_Integer) 21;
                  break;
                case (MR_Integer) 116:
                  if (MR_offset_streq(3, parse_tree__java_names__SymName_3, (MR_String) "extern"))
                    parse_tree__java_names__case_num_0 = (MR_Integer) 22;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 102:
          switch (MR_nth_code_unit(parse_tree__java_names__SymName_3, 1)) {
            case (MR_Integer) 97:
              if (MR_offset_streq(2, parse_tree__java_names__SymName_3, (MR_String) "false"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 23;
              break;
            case (MR_Integer) 105:
              switch (MR_nth_code_unit(parse_tree__java_names__SymName_3, 2)) {
                case (MR_Integer) 110:
                  if (MR_offset_streq(3, parse_tree__java_names__SymName_3, (MR_String) "finally"))
                    parse_tree__java_names__case_num_0 = (MR_Integer) 24;
                  break;
                case (MR_Integer) 120:
                  if (MR_offset_streq(3, parse_tree__java_names__SymName_3, (MR_String) "fixed"))
                    parse_tree__java_names__case_num_0 = (MR_Integer) 25;
                  break;
              }
              break;
            case (MR_Integer) 108:
              if (MR_offset_streq(2, parse_tree__java_names__SymName_3, (MR_String) "float"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 26;
              break;
            case (MR_Integer) 111:
              if (((MR_nth_code_unit(parse_tree__java_names__SymName_3, 2)) == (MR_Integer) 114))
                switch (MR_nth_code_unit(parse_tree__java_names__SymName_3, 3)) {
                  case (MR_Integer) 0:
                    parse_tree__java_names__case_num_0 = (MR_Integer) 27;
                    break;
                  case (MR_Integer) 101:
                    if (MR_offset_streq(4, parse_tree__java_names__SymName_3, (MR_String) "foreach"))
                      parse_tree__java_names__case_num_0 = (MR_Integer) 28;
                    break;
                }
              break;
          }
          break;
        case (MR_Integer) 103:
          if (MR_offset_streq(1, parse_tree__java_names__SymName_3, (MR_String) "goto"))
            parse_tree__java_names__case_num_0 = (MR_Integer) 29;
          break;
        case (MR_Integer) 105:
          switch (MR_nth_code_unit(parse_tree__java_names__SymName_3, 1)) {
            case (MR_Integer) 102:
              if (MR_offset_streq(2, parse_tree__java_names__SymName_3, (MR_String) "if"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 30;
              break;
            case (MR_Integer) 109:
              if (MR_offset_streq(2, parse_tree__java_names__SymName_3, (MR_String) "implicit"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 31;
              break;
            case (MR_Integer) 110:
              switch (MR_nth_code_unit(parse_tree__java_names__SymName_3, 2)) {
                case (MR_Integer) 0:
                  parse_tree__java_names__case_num_0 = (MR_Integer) 32;
                  break;
                case (MR_Integer) 116:
                  switch (MR_nth_code_unit(parse_tree__java_names__SymName_3, 3)) {
                    case (MR_Integer) 0:
                      parse_tree__java_names__case_num_0 = (MR_Integer) 33;
                      break;
                    case (MR_Integer) 101:
                      if (((MR_nth_code_unit(parse_tree__java_names__SymName_3, 4)) == (MR_Integer) 114))
                        switch (MR_nth_code_unit(parse_tree__java_names__SymName_3, 5)) {
                          case (MR_Integer) 102:
                            if (MR_offset_streq(6, parse_tree__java_names__SymName_3, (MR_String) "interface"))
                              parse_tree__java_names__case_num_0 = (MR_Integer) 34;
                            break;
                          case (MR_Integer) 110:
                            if (MR_offset_streq(6, parse_tree__java_names__SymName_3, (MR_String) "internal"))
                              parse_tree__java_names__case_num_0 = (MR_Integer) 35;
                            break;
                        }
                      break;
                  }
                  break;
              }
              break;
            case (MR_Integer) 115:
              if (MR_offset_streq(2, parse_tree__java_names__SymName_3, (MR_String) "is"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 36;
              break;
          }
          break;
        case (MR_Integer) 108:
          if (((MR_nth_code_unit(parse_tree__java_names__SymName_3, 1)) == (MR_Integer) 111))
            switch (MR_nth_code_unit(parse_tree__java_names__SymName_3, 2)) {
              case (MR_Integer) 99:
                if (MR_offset_streq(3, parse_tree__java_names__SymName_3, (MR_String) "lock"))
                  parse_tree__java_names__case_num_0 = (MR_Integer) 37;
                break;
              case (MR_Integer) 110:
                if (MR_offset_streq(3, parse_tree__java_names__SymName_3, (MR_String) "long"))
                  parse_tree__java_names__case_num_0 = (MR_Integer) 38;
                break;
            }
          break;
        case (MR_Integer) 110:
          switch (MR_nth_code_unit(parse_tree__java_names__SymName_3, 1)) {
            case (MR_Integer) 97:
              if (MR_offset_streq(2, parse_tree__java_names__SymName_3, (MR_String) "namespace"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 39;
              break;
            case (MR_Integer) 101:
              if (MR_offset_streq(2, parse_tree__java_names__SymName_3, (MR_String) "new"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 40;
              break;
            case (MR_Integer) 117:
              if (MR_offset_streq(2, parse_tree__java_names__SymName_3, (MR_String) "null"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 41;
              break;
          }
          break;
        case (MR_Integer) 111:
          switch (MR_nth_code_unit(parse_tree__java_names__SymName_3, 1)) {
            case (MR_Integer) 98:
              if (MR_offset_streq(2, parse_tree__java_names__SymName_3, (MR_String) "object"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 42;
              break;
            case (MR_Integer) 112:
              if (MR_offset_streq(2, parse_tree__java_names__SymName_3, (MR_String) "operator"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 43;
              break;
            case (MR_Integer) 117:
              if (MR_offset_streq(2, parse_tree__java_names__SymName_3, (MR_String) "out"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 44;
              break;
            case (MR_Integer) 118:
              if (MR_offset_streq(2, parse_tree__java_names__SymName_3, (MR_String) "override"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 45;
              break;
          }
          break;
        case (MR_Integer) 112:
          switch (MR_nth_code_unit(parse_tree__java_names__SymName_3, 1)) {
            case (MR_Integer) 97:
              if (MR_offset_streq(2, parse_tree__java_names__SymName_3, (MR_String) "params"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 46;
              break;
            case (MR_Integer) 114:
              switch (MR_nth_code_unit(parse_tree__java_names__SymName_3, 2)) {
                case (MR_Integer) 105:
                  if (MR_offset_streq(3, parse_tree__java_names__SymName_3, (MR_String) "private"))
                    parse_tree__java_names__case_num_0 = (MR_Integer) 47;
                  break;
                case (MR_Integer) 111:
                  if (MR_offset_streq(3, parse_tree__java_names__SymName_3, (MR_String) "protected"))
                    parse_tree__java_names__case_num_0 = (MR_Integer) 48;
                  break;
              }
              break;
            case (MR_Integer) 117:
              if (MR_offset_streq(2, parse_tree__java_names__SymName_3, (MR_String) "public"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 49;
              break;
          }
          break;
        case (MR_Integer) 114:
          if (((MR_nth_code_unit(parse_tree__java_names__SymName_3, 1)) == (MR_Integer) 101))
            switch (MR_nth_code_unit(parse_tree__java_names__SymName_3, 2)) {
              case (MR_Integer) 97:
                if (MR_offset_streq(3, parse_tree__java_names__SymName_3, (MR_String) "readonly"))
                  parse_tree__java_names__case_num_0 = (MR_Integer) 50;
                break;
              case (MR_Integer) 102:
                if (MR_offset_streq(3, parse_tree__java_names__SymName_3, (MR_String) "ref"))
                  parse_tree__java_names__case_num_0 = (MR_Integer) 51;
                break;
              case (MR_Integer) 116:
                if (MR_offset_streq(3, parse_tree__java_names__SymName_3, (MR_String) "return"))
                  parse_tree__java_names__case_num_0 = (MR_Integer) 52;
                break;
            }
          break;
        case (MR_Integer) 115:
          switch (MR_nth_code_unit(parse_tree__java_names__SymName_3, 1)) {
            case (MR_Integer) 98:
              if (MR_offset_streq(2, parse_tree__java_names__SymName_3, (MR_String) "sbyte"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 53;
              break;
            case (MR_Integer) 101:
              if (MR_offset_streq(2, parse_tree__java_names__SymName_3, (MR_String) "sealed"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 54;
              break;
            case (MR_Integer) 104:
              if (MR_offset_streq(2, parse_tree__java_names__SymName_3, (MR_String) "short"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 55;
              break;
            case (MR_Integer) 105:
              if (MR_offset_streq(2, parse_tree__java_names__SymName_3, (MR_String) "sizeof"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 56;
              break;
            case (MR_Integer) 116:
              switch (MR_nth_code_unit(parse_tree__java_names__SymName_3, 2)) {
                case (MR_Integer) 97:
                  switch (MR_nth_code_unit(parse_tree__java_names__SymName_3, 3)) {
                    case (MR_Integer) 99:
                      if (MR_offset_streq(4, parse_tree__java_names__SymName_3, (MR_String) "stackalloc"))
                        parse_tree__java_names__case_num_0 = (MR_Integer) 57;
                      break;
                    case (MR_Integer) 116:
                      if (MR_offset_streq(4, parse_tree__java_names__SymName_3, (MR_String) "static"))
                        parse_tree__java_names__case_num_0 = (MR_Integer) 58;
                      break;
                  }
                  break;
                case (MR_Integer) 114:
                  switch (MR_nth_code_unit(parse_tree__java_names__SymName_3, 3)) {
                    case (MR_Integer) 105:
                      if (MR_offset_streq(4, parse_tree__java_names__SymName_3, (MR_String) "string"))
                        parse_tree__java_names__case_num_0 = (MR_Integer) 59;
                      break;
                    case (MR_Integer) 117:
                      if (MR_offset_streq(4, parse_tree__java_names__SymName_3, (MR_String) "struct"))
                        parse_tree__java_names__case_num_0 = (MR_Integer) 60;
                      break;
                  }
                  break;
              }
              break;
            case (MR_Integer) 119:
              if (MR_offset_streq(2, parse_tree__java_names__SymName_3, (MR_String) "switch"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 61;
              break;
          }
          break;
        case (MR_Integer) 116:
          switch (MR_nth_code_unit(parse_tree__java_names__SymName_3, 1)) {
            case (MR_Integer) 104:
              switch (MR_nth_code_unit(parse_tree__java_names__SymName_3, 2)) {
                case (MR_Integer) 105:
                  if (MR_offset_streq(3, parse_tree__java_names__SymName_3, (MR_String) "this"))
                    parse_tree__java_names__case_num_0 = (MR_Integer) 62;
                  break;
                case (MR_Integer) 114:
                  if (MR_offset_streq(3, parse_tree__java_names__SymName_3, (MR_String) "throw"))
                    parse_tree__java_names__case_num_0 = (MR_Integer) 63;
                  break;
              }
              break;
            case (MR_Integer) 114:
              switch (MR_nth_code_unit(parse_tree__java_names__SymName_3, 2)) {
                case (MR_Integer) 117:
                  if (MR_offset_streq(3, parse_tree__java_names__SymName_3, (MR_String) "true"))
                    parse_tree__java_names__case_num_0 = (MR_Integer) 64;
                  break;
                case (MR_Integer) 121:
                  if (MR_offset_streq(3, parse_tree__java_names__SymName_3, (MR_String) "try"))
                    parse_tree__java_names__case_num_0 = (MR_Integer) 65;
                  break;
              }
              break;
            case (MR_Integer) 121:
              if (MR_offset_streq(2, parse_tree__java_names__SymName_3, (MR_String) "typeof"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 66;
              break;
          }
          break;
        case (MR_Integer) 117:
          switch (MR_nth_code_unit(parse_tree__java_names__SymName_3, 1)) {
            case (MR_Integer) 105:
              if (MR_offset_streq(2, parse_tree__java_names__SymName_3, (MR_String) "uint"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 67;
              break;
            case (MR_Integer) 108:
              if (MR_offset_streq(2, parse_tree__java_names__SymName_3, (MR_String) "ulong"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 68;
              break;
            case (MR_Integer) 110:
              switch (MR_nth_code_unit(parse_tree__java_names__SymName_3, 2)) {
                case (MR_Integer) 99:
                  if (MR_offset_streq(3, parse_tree__java_names__SymName_3, (MR_String) "unchecked"))
                    parse_tree__java_names__case_num_0 = (MR_Integer) 69;
                  break;
                case (MR_Integer) 115:
                  if (MR_offset_streq(3, parse_tree__java_names__SymName_3, (MR_String) "unsafe"))
                    parse_tree__java_names__case_num_0 = (MR_Integer) 70;
                  break;
              }
              break;
            case (MR_Integer) 115:
              switch (MR_nth_code_unit(parse_tree__java_names__SymName_3, 2)) {
                case (MR_Integer) 104:
                  if (MR_offset_streq(3, parse_tree__java_names__SymName_3, (MR_String) "ushort"))
                    parse_tree__java_names__case_num_0 = (MR_Integer) 71;
                  break;
                case (MR_Integer) 105:
                  if (MR_offset_streq(3, parse_tree__java_names__SymName_3, (MR_String) "using"))
                    parse_tree__java_names__case_num_0 = (MR_Integer) 72;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 118:
          switch (MR_nth_code_unit(parse_tree__java_names__SymName_3, 1)) {
            case (MR_Integer) 105:
              if (MR_offset_streq(2, parse_tree__java_names__SymName_3, (MR_String) "virtual"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 73;
              break;
            case (MR_Integer) 111:
              switch (MR_nth_code_unit(parse_tree__java_names__SymName_3, 2)) {
                case (MR_Integer) 105:
                  if (MR_offset_streq(3, parse_tree__java_names__SymName_3, (MR_String) "void"))
                    parse_tree__java_names__case_num_0 = (MR_Integer) 74;
                  break;
                case (MR_Integer) 108:
                  if (MR_offset_streq(3, parse_tree__java_names__SymName_3, (MR_String) "volatile"))
                    parse_tree__java_names__case_num_0 = (MR_Integer) 75;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 119:
          if (MR_offset_streq(1, parse_tree__java_names__SymName_3, (MR_String) "while"))
            parse_tree__java_names__case_num_0 = (MR_Integer) 76;
          break;
      }
      if ((parse_tree__java_names__case_num_0 < (MR_Integer) 0))
        parse_tree__java_names__succeeded = MR_FALSE;
      else
        {
          /* we found a match; look up the results */
          parse_tree__java_names__succeeded = MR_TRUE;
        }
    }
    if (parse_tree__java_names__succeeded)
      {
        parse_tree__java_names__ValidSymName_4 = mercury__string__f_43_43_2_f_0((MR_String) "mr_", parse_tree__java_names__SymName_3);
      }
    else
      {
        MR_String parse_tree__java_names__Suffix_6;

        {
          parse_tree__java_names__succeeded = mercury__string__append_3_p_1((MR_String) "mr_", &parse_tree__java_names__Suffix_6, parse_tree__java_names__SymName_3);
        }
        if (parse_tree__java_names__succeeded)
          {
            MR_String parse_tree__java_names__V_7_7;

            {
              parse_tree__java_names__V_7_7 = mercury__string__f_43_43_2_f_0((MR_String) "_", parse_tree__java_names__Suffix_6);
            }
            {
              parse_tree__java_names__ValidSymName_4 = mercury__string__f_43_43_2_f_0((MR_String) "mr_", parse_tree__java_names__V_7_7);
            }
          }
        else
          parse_tree__java_names__ValidSymName_4 = parse_tree__java_names__SymName_3;
      }
    return parse_tree__java_names__ValidSymName_4;
  }
}

void MR_CALL 
parse_tree__java_names__mangle_sym_name_for_csharp_4_p_0(
  MR_Word parse_tree__java_names__SymName_5,
  MR_Word parse_tree__java_names__QualKind_6,
  MR_String parse_tree__java_names__QualifierOp_7,
  MR_String * parse_tree__java_names__SafeName_8)
{
  {
    MR_bool parse_tree__java_names__succeeded;
    MR_Word parse_tree__java_names__MangledSymName_9;

    {
      parse_tree__java_names__mangle_sym_name_for_csharp_2_3_p_0(parse_tree__java_names__SymName_5, parse_tree__java_names__QualKind_6, &parse_tree__java_names__MangledSymName_9);
    }
    {
      *parse_tree__java_names__SafeName_8 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(parse_tree__java_names__MangledSymName_9, parse_tree__java_names__QualifierOp_7);
    }
  }
}

MR_Word MR_CALL 
parse_tree__java_names__java_mercury_runtime_package_name_0_f_0(void)
{
  {
    MR_bool parse_tree__java_names__succeeded;

    return (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__java_names_scalar_common_2[0]);
  }
}

MR_bool MR_CALL 
parse_tree__java_names__java_is_keyword_1_p_0(
  MR_String parse_tree__java_names__HeadVar__1_1)
{
  {
    MR_bool parse_tree__java_names__succeeded;

    {
      MR_Integer parse_tree__java_names__case_num_0 = (MR_Integer) -1;

      switch (MR_nth_code_unit(parse_tree__java_names__HeadVar__1_1, 0)) {
        case (MR_Integer) 97:
          if (MR_offset_streq(1, parse_tree__java_names__HeadVar__1_1, (MR_String) "abstract"))
            parse_tree__java_names__case_num_0 = (MR_Integer) 0;
          break;
        case (MR_Integer) 98:
          switch (MR_nth_code_unit(parse_tree__java_names__HeadVar__1_1, 1)) {
            case (MR_Integer) 111:
              if (MR_offset_streq(2, parse_tree__java_names__HeadVar__1_1, (MR_String) "boolean"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 1;
              break;
            case (MR_Integer) 114:
              if (MR_offset_streq(2, parse_tree__java_names__HeadVar__1_1, (MR_String) "break"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 2;
              break;
            case (MR_Integer) 121:
              if (MR_offset_streq(2, parse_tree__java_names__HeadVar__1_1, (MR_String) "byte"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 3;
              break;
          }
          break;
        case (MR_Integer) 99:
          switch (MR_nth_code_unit(parse_tree__java_names__HeadVar__1_1, 1)) {
            case (MR_Integer) 97:
              switch (MR_nth_code_unit(parse_tree__java_names__HeadVar__1_1, 2)) {
                case (MR_Integer) 115:
                  if (MR_offset_streq(3, parse_tree__java_names__HeadVar__1_1, (MR_String) "case"))
                    parse_tree__java_names__case_num_0 = (MR_Integer) 4;
                  break;
                case (MR_Integer) 116:
                  if (MR_offset_streq(3, parse_tree__java_names__HeadVar__1_1, (MR_String) "catch"))
                    parse_tree__java_names__case_num_0 = (MR_Integer) 5;
                  break;
              }
              break;
            case (MR_Integer) 104:
              if (MR_offset_streq(2, parse_tree__java_names__HeadVar__1_1, (MR_String) "char"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 6;
              break;
            case (MR_Integer) 108:
              if (MR_offset_streq(2, parse_tree__java_names__HeadVar__1_1, (MR_String) "class"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 7;
              break;
            case (MR_Integer) 111:
              if (((MR_nth_code_unit(parse_tree__java_names__HeadVar__1_1, 2)) == (MR_Integer) 110))
                switch (MR_nth_code_unit(parse_tree__java_names__HeadVar__1_1, 3)) {
                  case (MR_Integer) 115:
                    if (MR_offset_streq(4, parse_tree__java_names__HeadVar__1_1, (MR_String) "const"))
                      parse_tree__java_names__case_num_0 = (MR_Integer) 8;
                    break;
                  case (MR_Integer) 116:
                    if (MR_offset_streq(4, parse_tree__java_names__HeadVar__1_1, (MR_String) "continue"))
                      parse_tree__java_names__case_num_0 = (MR_Integer) 9;
                    break;
                }
              break;
          }
          break;
        case (MR_Integer) 100:
          switch (MR_nth_code_unit(parse_tree__java_names__HeadVar__1_1, 1)) {
            case (MR_Integer) 101:
              if (MR_offset_streq(2, parse_tree__java_names__HeadVar__1_1, (MR_String) "default"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 10;
              break;
            case (MR_Integer) 111:
              switch (MR_nth_code_unit(parse_tree__java_names__HeadVar__1_1, 2)) {
                case (MR_Integer) 0:
                  parse_tree__java_names__case_num_0 = (MR_Integer) 11;
                  break;
                case (MR_Integer) 117:
                  if (MR_offset_streq(3, parse_tree__java_names__HeadVar__1_1, (MR_String) "double"))
                    parse_tree__java_names__case_num_0 = (MR_Integer) 12;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 101:
          switch (MR_nth_code_unit(parse_tree__java_names__HeadVar__1_1, 1)) {
            case (MR_Integer) 108:
              if (MR_offset_streq(2, parse_tree__java_names__HeadVar__1_1, (MR_String) "else"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 13;
              break;
            case (MR_Integer) 110:
              if (MR_offset_streq(2, parse_tree__java_names__HeadVar__1_1, (MR_String) "enum"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 14;
              break;
            case (MR_Integer) 120:
              if (MR_offset_streq(2, parse_tree__java_names__HeadVar__1_1, (MR_String) "extends"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 15;
              break;
          }
          break;
        case (MR_Integer) 102:
          switch (MR_nth_code_unit(parse_tree__java_names__HeadVar__1_1, 1)) {
            case (MR_Integer) 97:
              if (MR_offset_streq(2, parse_tree__java_names__HeadVar__1_1, (MR_String) "false"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 16;
              break;
            case (MR_Integer) 105:
              if (((((((MR_nth_code_unit(parse_tree__java_names__HeadVar__1_1, 2)) == (MR_Integer) 110)) && (((MR_nth_code_unit(parse_tree__java_names__HeadVar__1_1, 3)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(parse_tree__java_names__HeadVar__1_1, 4)) == (MR_Integer) 108))))
                switch (MR_nth_code_unit(parse_tree__java_names__HeadVar__1_1, 5)) {
                  case (MR_Integer) 0:
                    parse_tree__java_names__case_num_0 = (MR_Integer) 17;
                    break;
                  case (MR_Integer) 108:
                    if (MR_offset_streq(6, parse_tree__java_names__HeadVar__1_1, (MR_String) "finally"))
                      parse_tree__java_names__case_num_0 = (MR_Integer) 18;
                    break;
                }
              break;
            case (MR_Integer) 108:
              if (MR_offset_streq(2, parse_tree__java_names__HeadVar__1_1, (MR_String) "float"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 19;
              break;
            case (MR_Integer) 111:
              if (MR_offset_streq(2, parse_tree__java_names__HeadVar__1_1, (MR_String) "for"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 20;
              break;
          }
          break;
        case (MR_Integer) 103:
          if (MR_offset_streq(1, parse_tree__java_names__HeadVar__1_1, (MR_String) "goto"))
            parse_tree__java_names__case_num_0 = (MR_Integer) 21;
          break;
        case (MR_Integer) 105:
          switch (MR_nth_code_unit(parse_tree__java_names__HeadVar__1_1, 1)) {
            case (MR_Integer) 102:
              if (MR_offset_streq(2, parse_tree__java_names__HeadVar__1_1, (MR_String) "if"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 22;
              break;
            case (MR_Integer) 109:
              if (((MR_nth_code_unit(parse_tree__java_names__HeadVar__1_1, 2)) == (MR_Integer) 112))
                switch (MR_nth_code_unit(parse_tree__java_names__HeadVar__1_1, 3)) {
                  case (MR_Integer) 108:
                    if (MR_offset_streq(4, parse_tree__java_names__HeadVar__1_1, (MR_String) "implements"))
                      parse_tree__java_names__case_num_0 = (MR_Integer) 23;
                    break;
                  case (MR_Integer) 111:
                    if (MR_offset_streq(4, parse_tree__java_names__HeadVar__1_1, (MR_String) "import"))
                      parse_tree__java_names__case_num_0 = (MR_Integer) 24;
                    break;
                }
              break;
            case (MR_Integer) 110:
              switch (MR_nth_code_unit(parse_tree__java_names__HeadVar__1_1, 2)) {
                case (MR_Integer) 115:
                  if (MR_offset_streq(3, parse_tree__java_names__HeadVar__1_1, (MR_String) "instanceof"))
                    parse_tree__java_names__case_num_0 = (MR_Integer) 25;
                  break;
                case (MR_Integer) 116:
                  switch (MR_nth_code_unit(parse_tree__java_names__HeadVar__1_1, 3)) {
                    case (MR_Integer) 0:
                      parse_tree__java_names__case_num_0 = (MR_Integer) 26;
                      break;
                    case (MR_Integer) 101:
                      if (MR_offset_streq(4, parse_tree__java_names__HeadVar__1_1, (MR_String) "interface"))
                        parse_tree__java_names__case_num_0 = (MR_Integer) 27;
                      break;
                  }
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 108:
          if (MR_offset_streq(1, parse_tree__java_names__HeadVar__1_1, (MR_String) "long"))
            parse_tree__java_names__case_num_0 = (MR_Integer) 28;
          break;
        case (MR_Integer) 110:
          switch (MR_nth_code_unit(parse_tree__java_names__HeadVar__1_1, 1)) {
            case (MR_Integer) 97:
              if (MR_offset_streq(2, parse_tree__java_names__HeadVar__1_1, (MR_String) "native"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 29;
              break;
            case (MR_Integer) 101:
              if (MR_offset_streq(2, parse_tree__java_names__HeadVar__1_1, (MR_String) "new"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 30;
              break;
            case (MR_Integer) 117:
              if (MR_offset_streq(2, parse_tree__java_names__HeadVar__1_1, (MR_String) "null"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 31;
              break;
          }
          break;
        case (MR_Integer) 112:
          switch (MR_nth_code_unit(parse_tree__java_names__HeadVar__1_1, 1)) {
            case (MR_Integer) 97:
              if (MR_offset_streq(2, parse_tree__java_names__HeadVar__1_1, (MR_String) "package"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 32;
              break;
            case (MR_Integer) 114:
              switch (MR_nth_code_unit(parse_tree__java_names__HeadVar__1_1, 2)) {
                case (MR_Integer) 105:
                  if (MR_offset_streq(3, parse_tree__java_names__HeadVar__1_1, (MR_String) "private"))
                    parse_tree__java_names__case_num_0 = (MR_Integer) 33;
                  break;
                case (MR_Integer) 111:
                  if (MR_offset_streq(3, parse_tree__java_names__HeadVar__1_1, (MR_String) "protected"))
                    parse_tree__java_names__case_num_0 = (MR_Integer) 34;
                  break;
              }
              break;
            case (MR_Integer) 117:
              if (MR_offset_streq(2, parse_tree__java_names__HeadVar__1_1, (MR_String) "public"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 35;
              break;
          }
          break;
        case (MR_Integer) 114:
          if (MR_offset_streq(1, parse_tree__java_names__HeadVar__1_1, (MR_String) "return"))
            parse_tree__java_names__case_num_0 = (MR_Integer) 36;
          break;
        case (MR_Integer) 115:
          switch (MR_nth_code_unit(parse_tree__java_names__HeadVar__1_1, 1)) {
            case (MR_Integer) 104:
              if (MR_offset_streq(2, parse_tree__java_names__HeadVar__1_1, (MR_String) "short"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 37;
              break;
            case (MR_Integer) 116:
              switch (MR_nth_code_unit(parse_tree__java_names__HeadVar__1_1, 2)) {
                case (MR_Integer) 97:
                  if (MR_offset_streq(3, parse_tree__java_names__HeadVar__1_1, (MR_String) "static"))
                    parse_tree__java_names__case_num_0 = (MR_Integer) 38;
                  break;
                case (MR_Integer) 114:
                  if (MR_offset_streq(3, parse_tree__java_names__HeadVar__1_1, (MR_String) "strictfp"))
                    parse_tree__java_names__case_num_0 = (MR_Integer) 39;
                  break;
              }
              break;
            case (MR_Integer) 117:
              if (MR_offset_streq(2, parse_tree__java_names__HeadVar__1_1, (MR_String) "super"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 40;
              break;
            case (MR_Integer) 119:
              if (MR_offset_streq(2, parse_tree__java_names__HeadVar__1_1, (MR_String) "switch"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 41;
              break;
            case (MR_Integer) 121:
              if (MR_offset_streq(2, parse_tree__java_names__HeadVar__1_1, (MR_String) "synchronized"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 42;
              break;
          }
          break;
        case (MR_Integer) 116:
          switch (MR_nth_code_unit(parse_tree__java_names__HeadVar__1_1, 1)) {
            case (MR_Integer) 104:
              switch (MR_nth_code_unit(parse_tree__java_names__HeadVar__1_1, 2)) {
                case (MR_Integer) 105:
                  if (MR_offset_streq(3, parse_tree__java_names__HeadVar__1_1, (MR_String) "this"))
                    parse_tree__java_names__case_num_0 = (MR_Integer) 43;
                  break;
                case (MR_Integer) 114:
                  if (((((MR_nth_code_unit(parse_tree__java_names__HeadVar__1_1, 3)) == (MR_Integer) 111)) && (((MR_nth_code_unit(parse_tree__java_names__HeadVar__1_1, 4)) == (MR_Integer) 119))))
                    switch (MR_nth_code_unit(parse_tree__java_names__HeadVar__1_1, 5)) {
                      case (MR_Integer) 0:
                        parse_tree__java_names__case_num_0 = (MR_Integer) 44;
                        break;
                      case (MR_Integer) 115:
                        if (MR_offset_streq(6, parse_tree__java_names__HeadVar__1_1, (MR_String) "throws"))
                          parse_tree__java_names__case_num_0 = (MR_Integer) 45;
                        break;
                    }
                  break;
              }
              break;
            case (MR_Integer) 114:
              switch (MR_nth_code_unit(parse_tree__java_names__HeadVar__1_1, 2)) {
                case (MR_Integer) 97:
                  if (MR_offset_streq(3, parse_tree__java_names__HeadVar__1_1, (MR_String) "transient"))
                    parse_tree__java_names__case_num_0 = (MR_Integer) 46;
                  break;
                case (MR_Integer) 117:
                  if (MR_offset_streq(3, parse_tree__java_names__HeadVar__1_1, (MR_String) "true"))
                    parse_tree__java_names__case_num_0 = (MR_Integer) 47;
                  break;
                case (MR_Integer) 121:
                  if (MR_offset_streq(3, parse_tree__java_names__HeadVar__1_1, (MR_String) "try"))
                    parse_tree__java_names__case_num_0 = (MR_Integer) 48;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 118:
          if (((MR_nth_code_unit(parse_tree__java_names__HeadVar__1_1, 1)) == (MR_Integer) 111))
            switch (MR_nth_code_unit(parse_tree__java_names__HeadVar__1_1, 2)) {
              case (MR_Integer) 105:
                if (MR_offset_streq(3, parse_tree__java_names__HeadVar__1_1, (MR_String) "void"))
                  parse_tree__java_names__case_num_0 = (MR_Integer) 49;
                break;
              case (MR_Integer) 108:
                if (MR_offset_streq(3, parse_tree__java_names__HeadVar__1_1, (MR_String) "volatile"))
                  parse_tree__java_names__case_num_0 = (MR_Integer) 50;
                break;
            }
          break;
        case (MR_Integer) 119:
          if (MR_offset_streq(1, parse_tree__java_names__HeadVar__1_1, (MR_String) "while"))
            parse_tree__java_names__case_num_0 = (MR_Integer) 51;
          break;
      }
      if ((parse_tree__java_names__case_num_0 < (MR_Integer) 0))
        parse_tree__java_names__succeeded = MR_FALSE;
      else
        {
          /* we found a match; look up the results */
          parse_tree__java_names__succeeded = MR_TRUE;
        }
    }
    return parse_tree__java_names__succeeded;
  }
}

MR_String MR_CALL 
parse_tree__java_names__valid_java_symbol_name_1_f_0(
  MR_String parse_tree__java_names__SymName_3)
{
  {
    MR_bool parse_tree__java_names__succeeded;
    MR_String parse_tree__java_names__ValidSymName_4;

    {
      MR_Integer parse_tree__java_names__case_num_0 = (MR_Integer) -1;

      switch (MR_nth_code_unit(parse_tree__java_names__SymName_3, 0)) {
        case (MR_Integer) 97:
          if (MR_offset_streq(1, parse_tree__java_names__SymName_3, (MR_String) "abstract"))
            parse_tree__java_names__case_num_0 = (MR_Integer) 0;
          break;
        case (MR_Integer) 98:
          switch (MR_nth_code_unit(parse_tree__java_names__SymName_3, 1)) {
            case (MR_Integer) 111:
              if (MR_offset_streq(2, parse_tree__java_names__SymName_3, (MR_String) "boolean"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 1;
              break;
            case (MR_Integer) 114:
              if (MR_offset_streq(2, parse_tree__java_names__SymName_3, (MR_String) "break"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 2;
              break;
            case (MR_Integer) 121:
              if (MR_offset_streq(2, parse_tree__java_names__SymName_3, (MR_String) "byte"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 3;
              break;
          }
          break;
        case (MR_Integer) 99:
          switch (MR_nth_code_unit(parse_tree__java_names__SymName_3, 1)) {
            case (MR_Integer) 97:
              switch (MR_nth_code_unit(parse_tree__java_names__SymName_3, 2)) {
                case (MR_Integer) 115:
                  if (MR_offset_streq(3, parse_tree__java_names__SymName_3, (MR_String) "case"))
                    parse_tree__java_names__case_num_0 = (MR_Integer) 4;
                  break;
                case (MR_Integer) 116:
                  if (MR_offset_streq(3, parse_tree__java_names__SymName_3, (MR_String) "catch"))
                    parse_tree__java_names__case_num_0 = (MR_Integer) 5;
                  break;
              }
              break;
            case (MR_Integer) 104:
              if (MR_offset_streq(2, parse_tree__java_names__SymName_3, (MR_String) "char"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 6;
              break;
            case (MR_Integer) 108:
              if (MR_offset_streq(2, parse_tree__java_names__SymName_3, (MR_String) "class"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 7;
              break;
            case (MR_Integer) 111:
              if (((MR_nth_code_unit(parse_tree__java_names__SymName_3, 2)) == (MR_Integer) 110))
                switch (MR_nth_code_unit(parse_tree__java_names__SymName_3, 3)) {
                  case (MR_Integer) 115:
                    if (MR_offset_streq(4, parse_tree__java_names__SymName_3, (MR_String) "const"))
                      parse_tree__java_names__case_num_0 = (MR_Integer) 8;
                    break;
                  case (MR_Integer) 116:
                    if (MR_offset_streq(4, parse_tree__java_names__SymName_3, (MR_String) "continue"))
                      parse_tree__java_names__case_num_0 = (MR_Integer) 9;
                    break;
                }
              break;
          }
          break;
        case (MR_Integer) 100:
          switch (MR_nth_code_unit(parse_tree__java_names__SymName_3, 1)) {
            case (MR_Integer) 101:
              if (MR_offset_streq(2, parse_tree__java_names__SymName_3, (MR_String) "default"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 10;
              break;
            case (MR_Integer) 111:
              switch (MR_nth_code_unit(parse_tree__java_names__SymName_3, 2)) {
                case (MR_Integer) 0:
                  parse_tree__java_names__case_num_0 = (MR_Integer) 11;
                  break;
                case (MR_Integer) 117:
                  if (MR_offset_streq(3, parse_tree__java_names__SymName_3, (MR_String) "double"))
                    parse_tree__java_names__case_num_0 = (MR_Integer) 12;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 101:
          switch (MR_nth_code_unit(parse_tree__java_names__SymName_3, 1)) {
            case (MR_Integer) 108:
              if (MR_offset_streq(2, parse_tree__java_names__SymName_3, (MR_String) "else"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 13;
              break;
            case (MR_Integer) 110:
              if (MR_offset_streq(2, parse_tree__java_names__SymName_3, (MR_String) "enum"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 14;
              break;
            case (MR_Integer) 120:
              if (MR_offset_streq(2, parse_tree__java_names__SymName_3, (MR_String) "extends"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 15;
              break;
          }
          break;
        case (MR_Integer) 102:
          switch (MR_nth_code_unit(parse_tree__java_names__SymName_3, 1)) {
            case (MR_Integer) 97:
              if (MR_offset_streq(2, parse_tree__java_names__SymName_3, (MR_String) "false"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 16;
              break;
            case (MR_Integer) 105:
              if (((((((MR_nth_code_unit(parse_tree__java_names__SymName_3, 2)) == (MR_Integer) 110)) && (((MR_nth_code_unit(parse_tree__java_names__SymName_3, 3)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(parse_tree__java_names__SymName_3, 4)) == (MR_Integer) 108))))
                switch (MR_nth_code_unit(parse_tree__java_names__SymName_3, 5)) {
                  case (MR_Integer) 0:
                    parse_tree__java_names__case_num_0 = (MR_Integer) 17;
                    break;
                  case (MR_Integer) 108:
                    if (MR_offset_streq(6, parse_tree__java_names__SymName_3, (MR_String) "finally"))
                      parse_tree__java_names__case_num_0 = (MR_Integer) 18;
                    break;
                }
              break;
            case (MR_Integer) 108:
              if (MR_offset_streq(2, parse_tree__java_names__SymName_3, (MR_String) "float"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 19;
              break;
            case (MR_Integer) 111:
              if (MR_offset_streq(2, parse_tree__java_names__SymName_3, (MR_String) "for"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 20;
              break;
          }
          break;
        case (MR_Integer) 103:
          if (MR_offset_streq(1, parse_tree__java_names__SymName_3, (MR_String) "goto"))
            parse_tree__java_names__case_num_0 = (MR_Integer) 21;
          break;
        case (MR_Integer) 105:
          switch (MR_nth_code_unit(parse_tree__java_names__SymName_3, 1)) {
            case (MR_Integer) 102:
              if (MR_offset_streq(2, parse_tree__java_names__SymName_3, (MR_String) "if"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 22;
              break;
            case (MR_Integer) 109:
              if (((MR_nth_code_unit(parse_tree__java_names__SymName_3, 2)) == (MR_Integer) 112))
                switch (MR_nth_code_unit(parse_tree__java_names__SymName_3, 3)) {
                  case (MR_Integer) 108:
                    if (MR_offset_streq(4, parse_tree__java_names__SymName_3, (MR_String) "implements"))
                      parse_tree__java_names__case_num_0 = (MR_Integer) 23;
                    break;
                  case (MR_Integer) 111:
                    if (MR_offset_streq(4, parse_tree__java_names__SymName_3, (MR_String) "import"))
                      parse_tree__java_names__case_num_0 = (MR_Integer) 24;
                    break;
                }
              break;
            case (MR_Integer) 110:
              switch (MR_nth_code_unit(parse_tree__java_names__SymName_3, 2)) {
                case (MR_Integer) 115:
                  if (MR_offset_streq(3, parse_tree__java_names__SymName_3, (MR_String) "instanceof"))
                    parse_tree__java_names__case_num_0 = (MR_Integer) 25;
                  break;
                case (MR_Integer) 116:
                  switch (MR_nth_code_unit(parse_tree__java_names__SymName_3, 3)) {
                    case (MR_Integer) 0:
                      parse_tree__java_names__case_num_0 = (MR_Integer) 26;
                      break;
                    case (MR_Integer) 101:
                      if (MR_offset_streq(4, parse_tree__java_names__SymName_3, (MR_String) "interface"))
                        parse_tree__java_names__case_num_0 = (MR_Integer) 27;
                      break;
                  }
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 108:
          if (MR_offset_streq(1, parse_tree__java_names__SymName_3, (MR_String) "long"))
            parse_tree__java_names__case_num_0 = (MR_Integer) 28;
          break;
        case (MR_Integer) 110:
          switch (MR_nth_code_unit(parse_tree__java_names__SymName_3, 1)) {
            case (MR_Integer) 97:
              if (MR_offset_streq(2, parse_tree__java_names__SymName_3, (MR_String) "native"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 29;
              break;
            case (MR_Integer) 101:
              if (MR_offset_streq(2, parse_tree__java_names__SymName_3, (MR_String) "new"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 30;
              break;
            case (MR_Integer) 117:
              if (MR_offset_streq(2, parse_tree__java_names__SymName_3, (MR_String) "null"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 31;
              break;
          }
          break;
        case (MR_Integer) 112:
          switch (MR_nth_code_unit(parse_tree__java_names__SymName_3, 1)) {
            case (MR_Integer) 97:
              if (MR_offset_streq(2, parse_tree__java_names__SymName_3, (MR_String) "package"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 32;
              break;
            case (MR_Integer) 114:
              switch (MR_nth_code_unit(parse_tree__java_names__SymName_3, 2)) {
                case (MR_Integer) 105:
                  if (MR_offset_streq(3, parse_tree__java_names__SymName_3, (MR_String) "private"))
                    parse_tree__java_names__case_num_0 = (MR_Integer) 33;
                  break;
                case (MR_Integer) 111:
                  if (MR_offset_streq(3, parse_tree__java_names__SymName_3, (MR_String) "protected"))
                    parse_tree__java_names__case_num_0 = (MR_Integer) 34;
                  break;
              }
              break;
            case (MR_Integer) 117:
              if (MR_offset_streq(2, parse_tree__java_names__SymName_3, (MR_String) "public"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 35;
              break;
          }
          break;
        case (MR_Integer) 114:
          if (MR_offset_streq(1, parse_tree__java_names__SymName_3, (MR_String) "return"))
            parse_tree__java_names__case_num_0 = (MR_Integer) 36;
          break;
        case (MR_Integer) 115:
          switch (MR_nth_code_unit(parse_tree__java_names__SymName_3, 1)) {
            case (MR_Integer) 104:
              if (MR_offset_streq(2, parse_tree__java_names__SymName_3, (MR_String) "short"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 37;
              break;
            case (MR_Integer) 116:
              switch (MR_nth_code_unit(parse_tree__java_names__SymName_3, 2)) {
                case (MR_Integer) 97:
                  if (MR_offset_streq(3, parse_tree__java_names__SymName_3, (MR_String) "static"))
                    parse_tree__java_names__case_num_0 = (MR_Integer) 38;
                  break;
                case (MR_Integer) 114:
                  if (MR_offset_streq(3, parse_tree__java_names__SymName_3, (MR_String) "strictfp"))
                    parse_tree__java_names__case_num_0 = (MR_Integer) 39;
                  break;
              }
              break;
            case (MR_Integer) 117:
              if (MR_offset_streq(2, parse_tree__java_names__SymName_3, (MR_String) "super"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 40;
              break;
            case (MR_Integer) 119:
              if (MR_offset_streq(2, parse_tree__java_names__SymName_3, (MR_String) "switch"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 41;
              break;
            case (MR_Integer) 121:
              if (MR_offset_streq(2, parse_tree__java_names__SymName_3, (MR_String) "synchronized"))
                parse_tree__java_names__case_num_0 = (MR_Integer) 42;
              break;
          }
          break;
        case (MR_Integer) 116:
          switch (MR_nth_code_unit(parse_tree__java_names__SymName_3, 1)) {
            case (MR_Integer) 104:
              switch (MR_nth_code_unit(parse_tree__java_names__SymName_3, 2)) {
                case (MR_Integer) 105:
                  if (MR_offset_streq(3, parse_tree__java_names__SymName_3, (MR_String) "this"))
                    parse_tree__java_names__case_num_0 = (MR_Integer) 43;
                  break;
                case (MR_Integer) 114:
                  if (((((MR_nth_code_unit(parse_tree__java_names__SymName_3, 3)) == (MR_Integer) 111)) && (((MR_nth_code_unit(parse_tree__java_names__SymName_3, 4)) == (MR_Integer) 119))))
                    switch (MR_nth_code_unit(parse_tree__java_names__SymName_3, 5)) {
                      case (MR_Integer) 0:
                        parse_tree__java_names__case_num_0 = (MR_Integer) 44;
                        break;
                      case (MR_Integer) 115:
                        if (MR_offset_streq(6, parse_tree__java_names__SymName_3, (MR_String) "throws"))
                          parse_tree__java_names__case_num_0 = (MR_Integer) 45;
                        break;
                    }
                  break;
              }
              break;
            case (MR_Integer) 114:
              switch (MR_nth_code_unit(parse_tree__java_names__SymName_3, 2)) {
                case (MR_Integer) 97:
                  if (MR_offset_streq(3, parse_tree__java_names__SymName_3, (MR_String) "transient"))
                    parse_tree__java_names__case_num_0 = (MR_Integer) 46;
                  break;
                case (MR_Integer) 117:
                  if (MR_offset_streq(3, parse_tree__java_names__SymName_3, (MR_String) "true"))
                    parse_tree__java_names__case_num_0 = (MR_Integer) 47;
                  break;
                case (MR_Integer) 121:
                  if (MR_offset_streq(3, parse_tree__java_names__SymName_3, (MR_String) "try"))
                    parse_tree__java_names__case_num_0 = (MR_Integer) 48;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 118:
          if (((MR_nth_code_unit(parse_tree__java_names__SymName_3, 1)) == (MR_Integer) 111))
            switch (MR_nth_code_unit(parse_tree__java_names__SymName_3, 2)) {
              case (MR_Integer) 105:
                if (MR_offset_streq(3, parse_tree__java_names__SymName_3, (MR_String) "void"))
                  parse_tree__java_names__case_num_0 = (MR_Integer) 49;
                break;
              case (MR_Integer) 108:
                if (MR_offset_streq(3, parse_tree__java_names__SymName_3, (MR_String) "volatile"))
                  parse_tree__java_names__case_num_0 = (MR_Integer) 50;
                break;
            }
          break;
        case (MR_Integer) 119:
          if (MR_offset_streq(1, parse_tree__java_names__SymName_3, (MR_String) "while"))
            parse_tree__java_names__case_num_0 = (MR_Integer) 51;
          break;
      }
      if ((parse_tree__java_names__case_num_0 < (MR_Integer) 0))
        parse_tree__java_names__succeeded = MR_FALSE;
      else
        {
          /* we found a match; look up the results */
          parse_tree__java_names__succeeded = MR_TRUE;
        }
    }
    if (parse_tree__java_names__succeeded)
      {
        parse_tree__java_names__ValidSymName_4 = mercury__string__f_43_43_2_f_0((MR_String) "mr_", parse_tree__java_names__SymName_3);
      }
    else
      {
        MR_String parse_tree__java_names__Suffix_6;

        {
          parse_tree__java_names__succeeded = mercury__string__append_3_p_1((MR_String) "mr_", &parse_tree__java_names__Suffix_6, parse_tree__java_names__SymName_3);
        }
        if (parse_tree__java_names__succeeded)
          {
            MR_String parse_tree__java_names__V_7_7;

            {
              parse_tree__java_names__V_7_7 = mercury__string__f_43_43_2_f_0((MR_String) "_", parse_tree__java_names__Suffix_6);
            }
            {
              parse_tree__java_names__ValidSymName_4 = mercury__string__f_43_43_2_f_0((MR_String) "mr_", parse_tree__java_names__V_7_7);
            }
          }
        else
          parse_tree__java_names__ValidSymName_4 = parse_tree__java_names__SymName_3;
      }
    return parse_tree__java_names__ValidSymName_4;
  }
}

void MR_CALL 
parse_tree__java_names__mangle_sym_name_for_java_4_p_0(
  MR_Word parse_tree__java_names__SymName0_5,
  MR_Word parse_tree__java_names__QualKind_6,
  MR_String parse_tree__java_names__QualifierOp_7,
  MR_String * parse_tree__java_names__JavaSafeName_8)
{
  {
    MR_bool parse_tree__java_names__succeeded;
    MR_Word parse_tree__java_names__SymName_10;
    MR_Word parse_tree__java_names__MangledSymName_11;
    MR_Word parse_tree__java_names__StrippedSymName_9;
    MR_String parse_tree__java_names__V_13_13;

    {
      parse_tree__java_names__succeeded = mdbcomp__sym_name__strip_outermost_qualifier_3_p_0(parse_tree__java_names__SymName0_5, &parse_tree__java_names__V_13_13, &parse_tree__java_names__StrippedSymName_9);
    }
    if (parse_tree__java_names__succeeded)
      parse_tree__java_names__succeeded = (strcmp((MR_String) "mercury", parse_tree__java_names__V_13_13) == 0);
    if (parse_tree__java_names__succeeded)
      parse_tree__java_names__SymName_10 = parse_tree__java_names__StrippedSymName_9;
    else
      parse_tree__java_names__SymName_10 = parse_tree__java_names__SymName0_5;
    {
      parse_tree__java_names__mangle_sym_name_for_java_2_3_p_0(parse_tree__java_names__SymName_10, parse_tree__java_names__QualKind_6, &parse_tree__java_names__MangledSymName_11);
    }
    {
      *parse_tree__java_names__JavaSafeName_8 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(parse_tree__java_names__MangledSymName_11, parse_tree__java_names__QualifierOp_7);
    }
  }
}

void mercury__parse_tree__java_names__init(void)
{
}

void mercury__parse_tree__java_names__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__java_names__parse_tree__java_names__type_ctor_info_csj_qual_kind_0);
}

void mercury__parse_tree__java_names__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__java_names__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module parse_tree.java_names. */
