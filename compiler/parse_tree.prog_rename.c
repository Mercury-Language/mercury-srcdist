/*
** Automatically generated from `prog_rename.m'
** by the Mercury compiler,
** version rotd-2016-02-08
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


/* :- module parse_tree.prog_rename. */
/* :- implementation. */

/*
INIT mercury__parse_tree__prog_rename__init
ENDINIT
*/

#include "parse_tree.prog_rename.mih"


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
#include "require.mih"
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
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_EnumFunctorDesc parse_tree__prog_rename__parse_tree__prog_rename__enum_functor_desc_must_rename_0_0;

static const MR_EnumFunctorDesc parse_tree__prog_rename__parse_tree__prog_rename__enum_functor_desc_must_rename_0_1;

static const MR_EnumFunctorDescPtr parse_tree__prog_rename__parse_tree__prog_rename__enum_value_ordered_must_rename_0[2];

static const MR_EnumFunctorDescPtr parse_tree__prog_rename__parse_tree__prog_rename__enum_name_ordered_must_rename_0[2];

static const MR_Integer parse_tree__prog_rename__parse_tree__prog_rename__functor_number_map_must_rename_0[2];

static MR_bool MR_CALL 
parse_tree__prog_rename____Unify____must_rename_0_0_10001(
  MR_Box parse_tree__prog_rename__wrapper_arg_1,
  MR_Box parse_tree__prog_rename__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_rename____Compare____must_rename_0_0_10001(
  MR_Box * parse_tree__prog_rename__wrapper_arg_1,
  MR_Box parse_tree__prog_rename__wrapper_arg_2,
  MR_Box parse_tree__prog_rename__wrapper_arg_3);


static /* final */ const MR_Box parse_tree__prog_rename_scalar_common_1[1][1];




static /* final */ const MR_Box parse_tree__prog_rename_scalar_common_1[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_EnumFunctorDesc parse_tree__prog_rename__parse_tree__prog_rename__enum_functor_desc_must_rename_0_0 = {
  (MR_String) "must_rename",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc parse_tree__prog_rename__parse_tree__prog_rename__enum_functor_desc_must_rename_0_1 = {
  (MR_String) "need_not_rename",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr parse_tree__prog_rename__parse_tree__prog_rename__enum_value_ordered_must_rename_0[2] = {
  &parse_tree__prog_rename__parse_tree__prog_rename__enum_functor_desc_must_rename_0_0,
  &parse_tree__prog_rename__parse_tree__prog_rename__enum_functor_desc_must_rename_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__prog_rename__parse_tree__prog_rename__enum_name_ordered_must_rename_0[2] = {
  &parse_tree__prog_rename__parse_tree__prog_rename__enum_functor_desc_must_rename_0_0,
  &parse_tree__prog_rename__parse_tree__prog_rename__enum_functor_desc_must_rename_0_1
};

static const MR_Integer parse_tree__prog_rename__parse_tree__prog_rename__functor_number_map_must_rename_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__prog_rename__parse_tree__prog_rename__type_ctor_info_must_rename_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__prog_rename____Unify____must_rename_0_0_10001)),
  ((MR_Box) (parse_tree__prog_rename____Compare____must_rename_0_0_10001)),
  (MR_String) "parse_tree.prog_rename",
  (MR_String) "must_rename",
  {     parse_tree__prog_rename__parse_tree__prog_rename__enum_name_ordered_must_rename_0 },
  {     parse_tree__prog_rename__parse_tree__prog_rename__enum_value_ordered_must_rename_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__prog_rename__parse_tree__prog_rename__functor_number_map_must_rename_0
};

static MR_bool MR_CALL 
parse_tree__prog_rename____Unify____must_rename_0_0_10001(
  MR_Box parse_tree__prog_rename__wrapper_arg_1,
  MR_Box parse_tree__prog_rename__wrapper_arg_2)
{
  {
    MR_bool parse_tree__prog_rename__succeeded;

    {
      parse_tree__prog_rename__succeeded = parse_tree__prog_rename____Unify____must_rename_0_0(((MR_Word) parse_tree__prog_rename__wrapper_arg_1), ((MR_Word) parse_tree__prog_rename__wrapper_arg_2));
    }
    return parse_tree__prog_rename__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_rename____Compare____must_rename_0_0_10001(
  MR_Box * parse_tree__prog_rename__wrapper_arg_1,
  MR_Box parse_tree__prog_rename__wrapper_arg_2,
  MR_Box parse_tree__prog_rename__wrapper_arg_3)
{
  {
    MR_Word parse_tree__prog_rename__conv0_HeadVar__1_1;

    {
      parse_tree__prog_rename____Compare____must_rename_0_0(&parse_tree__prog_rename__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_rename__wrapper_arg_2), ((MR_Word) parse_tree__prog_rename__wrapper_arg_3));
    }
    *parse_tree__prog_rename__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_rename__conv0_HeadVar__1_1));
  }
}

void MR_CALL 
parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_95_95_91_50_93_95_49_4_p_1(
  MR_Word parse_tree__prog_rename__TypeInfo_for_V_18,
  MR_Word parse_tree__prog_rename__Renaming_6,
  MR_Word parse_tree__prog_rename__Var0_7,
  MR_Word * parse_tree__prog_rename__Var_8)
{
  {
    MR_bool parse_tree__prog_rename__succeeded;
    MR_Word parse_tree__prog_rename__VarPrime_9;
    MR_Word parse_tree__prog_rename__TypeInfo_20_20;
    MR_Box parse_tree__prog_rename__conv0_VarPrime_9;

    {
      parse_tree__prog_rename__TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__prog_rename__TypeInfo_20_20, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), parse_tree__prog_rename__TypeInfo_20_20, 1) = ((MR_Box) (parse_tree__prog_rename__TypeInfo_for_V_18));
    }
    {
      parse_tree__prog_rename__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(parse_tree__prog_rename__TypeInfo_for_V_18, parse_tree__prog_rename__TypeInfo_20_20, parse_tree__prog_rename__TypeInfo_20_20, (MR_Word) parse_tree__prog_rename__Renaming_6, parse_tree__prog_rename__Var0_7, &parse_tree__prog_rename__conv0_VarPrime_9);
    }
    if (parse_tree__prog_rename__succeeded)
      {
        parse_tree__prog_rename__VarPrime_9 = ((MR_Word) parse_tree__prog_rename__conv0_VarPrime_9);
        parse_tree__prog_rename__succeeded = MR_TRUE;
      }
    if (parse_tree__prog_rename__succeeded)
      *parse_tree__prog_rename__Var_8 = parse_tree__prog_rename__VarPrime_9;
    else
      *parse_tree__prog_rename__Var_8 = parse_tree__prog_rename__Var0_7;
  }
}

void MR_CALL 
parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_95_95_91_50_93_95_48_4_p_0(
  MR_Word parse_tree__prog_rename__TypeInfo_for_V_18,
  MR_Word parse_tree__prog_rename__Renaming_6,
  MR_Word parse_tree__prog_rename__Var0_7,
  MR_Word * parse_tree__prog_rename__Var_8)
{
  {
    MR_bool parse_tree__prog_rename__succeeded;
    MR_Word parse_tree__prog_rename__VarPrime_9;
    MR_Word parse_tree__prog_rename__TypeInfo_20_20;
    MR_Box parse_tree__prog_rename__conv0_VarPrime_9;

    {
      parse_tree__prog_rename__TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__prog_rename__TypeInfo_20_20, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), parse_tree__prog_rename__TypeInfo_20_20, 1) = ((MR_Box) (parse_tree__prog_rename__TypeInfo_for_V_18));
    }
    {
      parse_tree__prog_rename__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(parse_tree__prog_rename__TypeInfo_for_V_18, parse_tree__prog_rename__TypeInfo_20_20, parse_tree__prog_rename__TypeInfo_20_20, (MR_Word) parse_tree__prog_rename__Renaming_6, parse_tree__prog_rename__Var0_7, &parse_tree__prog_rename__conv0_VarPrime_9);
    }
    if (parse_tree__prog_rename__succeeded)
      {
        parse_tree__prog_rename__VarPrime_9 = ((MR_Word) parse_tree__prog_rename__conv0_VarPrime_9);
        parse_tree__prog_rename__succeeded = MR_TRUE;
      }
    if (parse_tree__prog_rename__succeeded)
      *parse_tree__prog_rename__Var_8 = parse_tree__prog_rename__VarPrime_9;
    else
      {
        MR_Integer parse_tree__prog_rename__Var0Int_10;
        MR_String parse_tree__prog_rename__Msg_11;
        MR_String parse_tree__prog_rename__V_21_21;

        {
          mercury__term__var_to_int_2_p_0(parse_tree__prog_rename__TypeInfo_for_V_18, parse_tree__prog_rename__Var0_7, &parse_tree__prog_rename__Var0Int_10);
        }
        {
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &parse_tree__prog_rename_scalar_common_1[0], parse_tree__prog_rename__Var0Int_10, &parse_tree__prog_rename__V_21_21);
        }
        {
          parse_tree__prog_rename__Msg_11 = mercury__string__f_43_43_2_f_0((MR_String) "rename_var: no substitute for var ", parse_tree__prog_rename__V_21_21);
        }
        {
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_rename", (MR_String) "predicate \140parse_tree.prog_rename.rename_var\'/4", parse_tree__prog_rename__Msg_11);
          return;
        }
      }
  }
}

void MR_CALL 
parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_95_108_105_115_116_95_95_91_50_93_95_49_4_p_1(
  MR_Word parse_tree__prog_rename__TypeInfo_for_V_13,
  MR_Word parse_tree__prog_rename__HeadVar__2_2,
  MR_Word parse_tree__prog_rename__HeadVar__3_3,
  MR_Word * parse_tree__prog_rename__HeadVar__4_4)
{
  {
    MR_bool parse_tree__prog_rename__succeeded;

    if ((parse_tree__prog_rename__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *parse_tree__prog_rename__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word parse_tree__prog_rename__Var0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_rename__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word parse_tree__prog_rename__Vars0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_rename__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word parse_tree__prog_rename__Var_11;
        MR_Word parse_tree__prog_rename__Vars_12;
        MR_Word parse_tree__prog_rename__VarPrime_18;
        MR_Word parse_tree__prog_rename__TypeInfo_20_28;
        MR_Box parse_tree__prog_rename__conv0_VarPrime_18;

        {
          parse_tree__prog_rename__TypeInfo_20_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__prog_rename__TypeInfo_20_28, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
          MR_hl_field(MR_mktag(0), parse_tree__prog_rename__TypeInfo_20_28, 1) = ((MR_Box) (parse_tree__prog_rename__TypeInfo_for_V_13));
        }
        {
          parse_tree__prog_rename__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(parse_tree__prog_rename__TypeInfo_for_V_13, parse_tree__prog_rename__TypeInfo_20_28, parse_tree__prog_rename__TypeInfo_20_28, (MR_Word) parse_tree__prog_rename__HeadVar__2_2, parse_tree__prog_rename__Var0_9, &parse_tree__prog_rename__conv0_VarPrime_18);
        }
        if (parse_tree__prog_rename__succeeded)
          {
            parse_tree__prog_rename__VarPrime_18 = ((MR_Word) parse_tree__prog_rename__conv0_VarPrime_18);
            parse_tree__prog_rename__succeeded = MR_TRUE;
          }
        if (parse_tree__prog_rename__succeeded)
          parse_tree__prog_rename__Var_11 = parse_tree__prog_rename__VarPrime_18;
        else
          parse_tree__prog_rename__Var_11 = parse_tree__prog_rename__Var0_9;
        {
          parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_95_108_105_115_116_95_95_91_50_93_95_49_4_p_1(parse_tree__prog_rename__TypeInfo_for_V_13, parse_tree__prog_rename__HeadVar__2_2, parse_tree__prog_rename__Vars0_10, &parse_tree__prog_rename__Vars_12);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *parse_tree__prog_rename__HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_rename__Var_11));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_rename__Vars_12));
        }
      }
  }
}

void MR_CALL 
parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_95_108_105_115_116_95_95_91_50_93_95_48_4_p_0(
  MR_Word parse_tree__prog_rename__TypeInfo_for_V_13,
  MR_Word parse_tree__prog_rename__HeadVar__2_2,
  MR_Word parse_tree__prog_rename__HeadVar__3_3,
  MR_Word * parse_tree__prog_rename__HeadVar__4_4)
{
  {
    MR_bool parse_tree__prog_rename__succeeded;

    if ((parse_tree__prog_rename__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *parse_tree__prog_rename__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word parse_tree__prog_rename__Var0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_rename__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word parse_tree__prog_rename__Vars0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_rename__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word parse_tree__prog_rename__Var_11;
        MR_Word parse_tree__prog_rename__Vars_12;

        {
          parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_95_95_91_50_93_95_48_4_p_0(parse_tree__prog_rename__TypeInfo_for_V_13, parse_tree__prog_rename__HeadVar__2_2, parse_tree__prog_rename__Var0_9, &parse_tree__prog_rename__Var_11);
        }
        {
          parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_95_108_105_115_116_95_95_91_50_93_95_48_4_p_0(parse_tree__prog_rename__TypeInfo_for_V_13, parse_tree__prog_rename__HeadVar__2_2, parse_tree__prog_rename__Vars0_10, &parse_tree__prog_rename__Vars_12);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *parse_tree__prog_rename__HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_rename__Var_11));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_rename__Vars_12));
        }
      }
  }
}

void MR_CALL 
parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_105_110_95_115_101_116_95_111_102_95_118_97_114_95_95_91_50_93_95_49_4_p_1(
  MR_Word parse_tree__prog_rename__TypeInfo_for_V_11,
  MR_Word parse_tree__prog_rename__Renaming_6,
  MR_Word parse_tree__prog_rename__Vars0_7,
  MR_Word * parse_tree__prog_rename__Vars_8)
{
  {
    MR_bool parse_tree__prog_rename__succeeded;
    MR_Word parse_tree__prog_rename__VarsList0_9;
    MR_Word parse_tree__prog_rename__VarsList_10;

    {
      parse_tree__set_of_var__to_sorted_list_2_p_0(parse_tree__prog_rename__TypeInfo_for_V_11, parse_tree__prog_rename__Vars0_7, &parse_tree__prog_rename__VarsList0_9);
    }
    {
      parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_95_108_105_115_116_95_95_91_50_93_95_49_4_p_1(parse_tree__prog_rename__TypeInfo_for_V_11, parse_tree__prog_rename__Renaming_6, parse_tree__prog_rename__VarsList0_9, &parse_tree__prog_rename__VarsList_10);
    }
    {
      parse_tree__set_of_var__list_to_set_2_p_0(parse_tree__prog_rename__TypeInfo_for_V_11, parse_tree__prog_rename__VarsList_10, parse_tree__prog_rename__Vars_8);
    }
  }
}

void MR_CALL 
parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_105_110_95_115_101_116_95_111_102_95_118_97_114_95_95_91_50_93_95_48_4_p_0(
  MR_Word parse_tree__prog_rename__TypeInfo_for_V_11,
  MR_Word parse_tree__prog_rename__Renaming_6,
  MR_Word parse_tree__prog_rename__Vars0_7,
  MR_Word * parse_tree__prog_rename__Vars_8)
{
  {
    MR_bool parse_tree__prog_rename__succeeded;
    MR_Word parse_tree__prog_rename__VarsList0_9;
    MR_Word parse_tree__prog_rename__VarsList_10;

    {
      parse_tree__set_of_var__to_sorted_list_2_p_0(parse_tree__prog_rename__TypeInfo_for_V_11, parse_tree__prog_rename__Vars0_7, &parse_tree__prog_rename__VarsList0_9);
    }
    {
      parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_95_108_105_115_116_95_95_91_50_93_95_48_4_p_0(parse_tree__prog_rename__TypeInfo_for_V_11, parse_tree__prog_rename__Renaming_6, parse_tree__prog_rename__VarsList0_9, &parse_tree__prog_rename__VarsList_10);
    }
    {
      parse_tree__set_of_var__list_to_set_2_p_0(parse_tree__prog_rename__TypeInfo_for_V_11, parse_tree__prog_rename__VarsList_10, parse_tree__prog_rename__Vars_8);
    }
  }
}

void MR_CALL 
parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_105_110_95_118_97_114_95_115_101_116_95_95_91_50_93_95_49_4_p_1(
  MR_Word parse_tree__prog_rename__TypeInfo_for_V_11,
  MR_Word parse_tree__prog_rename__Renaming_6,
  MR_Word parse_tree__prog_rename__Vars0_7,
  MR_Word * parse_tree__prog_rename__Vars_8)
{
  {
    MR_bool parse_tree__prog_rename__succeeded;
    MR_Word parse_tree__prog_rename__TypeInfo_13_13;
    MR_Word parse_tree__prog_rename__VarsList0_9;
    MR_Word parse_tree__prog_rename__VarsList_10;
    MR_Word parse_tree__prog_rename__conv0_VarsList0_9;

    {
      parse_tree__prog_rename__TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__prog_rename__TypeInfo_13_13, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), parse_tree__prog_rename__TypeInfo_13_13, 1) = ((MR_Box) (parse_tree__prog_rename__TypeInfo_for_V_11));
    }
    {
      mercury__set__to_sorted_list_2_p_0(parse_tree__prog_rename__TypeInfo_13_13, (MR_Word) parse_tree__prog_rename__Vars0_7, &parse_tree__prog_rename__conv0_VarsList0_9);
    }
    parse_tree__prog_rename__VarsList0_9 = (MR_Word) parse_tree__prog_rename__conv0_VarsList0_9;
    {
      parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_95_108_105_115_116_95_95_91_50_93_95_49_4_p_1(parse_tree__prog_rename__TypeInfo_for_V_11, parse_tree__prog_rename__Renaming_6, parse_tree__prog_rename__VarsList0_9, &parse_tree__prog_rename__VarsList_10);
    }
    {
      mercury__set__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_rename__TypeInfo_for_V_11, parse_tree__prog_rename__TypeInfo_13_13, parse_tree__prog_rename__VarsList_10, parse_tree__prog_rename__Vars_8);
    }
  }
}

void MR_CALL 
parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_105_110_95_118_97_114_95_115_101_116_95_95_91_50_93_95_48_4_p_0(
  MR_Word parse_tree__prog_rename__TypeInfo_for_V_11,
  MR_Word parse_tree__prog_rename__Renaming_6,
  MR_Word parse_tree__prog_rename__Vars0_7,
  MR_Word * parse_tree__prog_rename__Vars_8)
{
  {
    MR_bool parse_tree__prog_rename__succeeded;
    MR_Word parse_tree__prog_rename__TypeInfo_13_13;
    MR_Word parse_tree__prog_rename__VarsList0_9;
    MR_Word parse_tree__prog_rename__VarsList_10;
    MR_Word parse_tree__prog_rename__conv0_VarsList0_9;

    {
      parse_tree__prog_rename__TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__prog_rename__TypeInfo_13_13, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), parse_tree__prog_rename__TypeInfo_13_13, 1) = ((MR_Box) (parse_tree__prog_rename__TypeInfo_for_V_11));
    }
    {
      mercury__set__to_sorted_list_2_p_0(parse_tree__prog_rename__TypeInfo_13_13, (MR_Word) parse_tree__prog_rename__Vars0_7, &parse_tree__prog_rename__conv0_VarsList0_9);
    }
    parse_tree__prog_rename__VarsList0_9 = (MR_Word) parse_tree__prog_rename__conv0_VarsList0_9;
    {
      parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_95_108_105_115_116_95_95_91_50_93_95_48_4_p_0(parse_tree__prog_rename__TypeInfo_for_V_11, parse_tree__prog_rename__Renaming_6, parse_tree__prog_rename__VarsList0_9, &parse_tree__prog_rename__VarsList_10);
    }
    {
      mercury__set__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_rename__TypeInfo_for_V_11, parse_tree__prog_rename__TypeInfo_13_13, parse_tree__prog_rename__VarsList_10, parse_tree__prog_rename__Vars_8);
    }
  }
}

void MR_CALL 
parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_105_110_95_116_101_114_109_95_108_105_115_116_95_95_91_50_93_95_49_4_p_1(
  MR_Word parse_tree__prog_rename__TypeInfo_for_V_13,
  MR_Word parse_tree__prog_rename__HeadVar__2_2,
  MR_Word parse_tree__prog_rename__HeadVar__3_3,
  MR_Word * parse_tree__prog_rename__HeadVar__4_4)
{
  {
    MR_bool parse_tree__prog_rename__succeeded;

    if ((parse_tree__prog_rename__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *parse_tree__prog_rename__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word parse_tree__prog_rename__Term0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_rename__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word parse_tree__prog_rename__Terms0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_rename__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word parse_tree__prog_rename__Term_11;
        MR_Word parse_tree__prog_rename__Terms_12;

        {
          parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_105_110_95_116_101_114_109_95_95_91_50_93_95_49_4_p_1(parse_tree__prog_rename__TypeInfo_for_V_13, parse_tree__prog_rename__HeadVar__2_2, parse_tree__prog_rename__Term0_9, &parse_tree__prog_rename__Term_11);
        }
        {
          parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_105_110_95_116_101_114_109_95_108_105_115_116_95_95_91_50_93_95_49_4_p_1(parse_tree__prog_rename__TypeInfo_for_V_13, parse_tree__prog_rename__HeadVar__2_2, parse_tree__prog_rename__Terms0_10, &parse_tree__prog_rename__Terms_12);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *parse_tree__prog_rename__HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_rename__Term_11));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_rename__Terms_12));
        }
      }
  }
}

void MR_CALL 
parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_105_110_95_116_101_114_109_95_108_105_115_116_95_95_91_50_93_95_48_4_p_0(
  MR_Word parse_tree__prog_rename__TypeInfo_for_V_13,
  MR_Word parse_tree__prog_rename__HeadVar__2_2,
  MR_Word parse_tree__prog_rename__HeadVar__3_3,
  MR_Word * parse_tree__prog_rename__HeadVar__4_4)
{
  {
    MR_bool parse_tree__prog_rename__succeeded;

    if ((parse_tree__prog_rename__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *parse_tree__prog_rename__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word parse_tree__prog_rename__Term0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_rename__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word parse_tree__prog_rename__Terms0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_rename__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word parse_tree__prog_rename__Term_11;
        MR_Word parse_tree__prog_rename__Terms_12;

        {
          parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_105_110_95_116_101_114_109_95_95_91_50_93_95_48_4_p_0(parse_tree__prog_rename__TypeInfo_for_V_13, parse_tree__prog_rename__HeadVar__2_2, parse_tree__prog_rename__Term0_9, &parse_tree__prog_rename__Term_11);
        }
        {
          parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_105_110_95_116_101_114_109_95_108_105_115_116_95_95_91_50_93_95_48_4_p_0(parse_tree__prog_rename__TypeInfo_for_V_13, parse_tree__prog_rename__HeadVar__2_2, parse_tree__prog_rename__Terms0_10, &parse_tree__prog_rename__Terms_12);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *parse_tree__prog_rename__HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_rename__Term_11));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_rename__Terms_12));
        }
      }
  }
}

void MR_CALL 
parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_105_110_95_116_101_114_109_95_95_91_50_93_95_49_4_p_1(
  MR_Word parse_tree__prog_rename__TypeInfo_for_V_40,
  MR_Word parse_tree__prog_rename__Renaming_6,
  MR_Word parse_tree__prog_rename__Term0_7,
  MR_Word * parse_tree__prog_rename__Term_8)
{
  {
    MR_bool parse_tree__prog_rename__succeeded;

    if (((MR_tag((MR_Word) parse_tree__prog_rename__Term0_7)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word parse_tree__prog_rename__ConsId_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_rename__Term0_7, (MR_Integer) 0)));
        MR_Word parse_tree__prog_rename__Args0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_rename__Term0_7, (MR_Integer) 1)));
        MR_Word parse_tree__prog_rename__Args_14;
        MR_Word parse_tree__prog_rename__Context_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_rename__Term0_7, (MR_Integer) 2)));

        if ((parse_tree__prog_rename__Args0_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          parse_tree__prog_rename__Args_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_Word parse_tree__prog_rename__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_rename__Args0_13, (MR_Integer) 1)));
            MR_Word parse_tree__prog_rename__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_rename__Args0_13, (MR_Integer) 0)));

            if ((parse_tree__prog_rename__V_41_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Word parse_tree__prog_rename__Arg1Term_16;

                {
                  parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_105_110_95_116_101_114_109_95_95_91_50_93_95_49_4_p_1(parse_tree__prog_rename__TypeInfo_for_V_40, parse_tree__prog_rename__Renaming_6, parse_tree__prog_rename__V_42_42, &parse_tree__prog_rename__Arg1Term_16);
                }
                {
                  parse_tree__prog_rename__Args_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__prog_rename__Args_14, 0) = ((MR_Box) (parse_tree__prog_rename__Arg1Term_16));
                  MR_hl_field(MR_mktag(1), parse_tree__prog_rename__Args_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
              }
            else
              {
                MR_Word parse_tree__prog_rename__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_rename__V_41_41, (MR_Integer) 1)));
                MR_Word parse_tree__prog_rename__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_rename__V_41_41, (MR_Integer) 0)));

                if ((parse_tree__prog_rename__V_43_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    MR_Word parse_tree__prog_rename__Arg2Term_18;
                    MR_Word parse_tree__prog_rename__V_29_29;
                    MR_Word parse_tree__prog_rename__Arg1Term_34;

                    {
                      parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_105_110_95_116_101_114_109_95_95_91_50_93_95_49_4_p_1(parse_tree__prog_rename__TypeInfo_for_V_40, parse_tree__prog_rename__Renaming_6, parse_tree__prog_rename__V_42_42, &parse_tree__prog_rename__Arg1Term_34);
                    }
                    {
                      parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_105_110_95_116_101_114_109_95_95_91_50_93_95_49_4_p_1(parse_tree__prog_rename__TypeInfo_for_V_40, parse_tree__prog_rename__Renaming_6, parse_tree__prog_rename__V_44_44, &parse_tree__prog_rename__Arg2Term_18);
                    }
                    {
                      parse_tree__prog_rename__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__prog_rename__V_29_29, 0) = ((MR_Box) (parse_tree__prog_rename__Arg2Term_18));
                      MR_hl_field(MR_mktag(1), parse_tree__prog_rename__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      parse_tree__prog_rename__Args_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__prog_rename__Args_14, 0) = ((MR_Box) (parse_tree__prog_rename__Arg1Term_34));
                      MR_hl_field(MR_mktag(1), parse_tree__prog_rename__Args_14, 1) = ((MR_Box) (parse_tree__prog_rename__V_29_29));
                    }
                  }
                else
                  {
                    MR_Word parse_tree__prog_rename__Arg3Term0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_rename__V_43_43, (MR_Integer) 0)));
                    MR_Word parse_tree__prog_rename__OtherArgTerms0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_rename__V_43_43, (MR_Integer) 1)));
                    MR_Word parse_tree__prog_rename__Arg3Term_21;
                    MR_Word parse_tree__prog_rename__OtherArgTerms_22;
                    MR_Word parse_tree__prog_rename__V_25_25;
                    MR_Word parse_tree__prog_rename__V_26_26;
                    MR_Word parse_tree__prog_rename__Arg1Term_36;
                    MR_Word parse_tree__prog_rename__Arg2Term_38;

                    {
                      parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_105_110_95_116_101_114_109_95_95_91_50_93_95_49_4_p_1(parse_tree__prog_rename__TypeInfo_for_V_40, parse_tree__prog_rename__Renaming_6, parse_tree__prog_rename__V_42_42, &parse_tree__prog_rename__Arg1Term_36);
                    }
                    {
                      parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_105_110_95_116_101_114_109_95_95_91_50_93_95_49_4_p_1(parse_tree__prog_rename__TypeInfo_for_V_40, parse_tree__prog_rename__Renaming_6, parse_tree__prog_rename__V_44_44, &parse_tree__prog_rename__Arg2Term_38);
                    }
                    {
                      parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_105_110_95_116_101_114_109_95_95_91_50_93_95_49_4_p_1(parse_tree__prog_rename__TypeInfo_for_V_40, parse_tree__prog_rename__Renaming_6, parse_tree__prog_rename__Arg3Term0_19, &parse_tree__prog_rename__Arg3Term_21);
                    }
                    {
                      parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_105_110_95_116_101_114_109_95_108_105_115_116_95_95_91_50_93_95_49_4_p_1(parse_tree__prog_rename__TypeInfo_for_V_40, parse_tree__prog_rename__Renaming_6, parse_tree__prog_rename__OtherArgTerms0_20, &parse_tree__prog_rename__OtherArgTerms_22);
                    }
                    {
                      parse_tree__prog_rename__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__prog_rename__V_26_26, 0) = ((MR_Box) (parse_tree__prog_rename__Arg3Term_21));
                      MR_hl_field(MR_mktag(1), parse_tree__prog_rename__V_26_26, 1) = ((MR_Box) (parse_tree__prog_rename__OtherArgTerms_22));
                    }
                    {
                      parse_tree__prog_rename__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__prog_rename__V_25_25, 0) = ((MR_Box) (parse_tree__prog_rename__Arg2Term_38));
                      MR_hl_field(MR_mktag(1), parse_tree__prog_rename__V_25_25, 1) = ((MR_Box) (parse_tree__prog_rename__V_26_26));
                    }
                    {
                      parse_tree__prog_rename__Args_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__prog_rename__Args_14, 0) = ((MR_Box) (parse_tree__prog_rename__Arg1Term_36));
                      MR_hl_field(MR_mktag(1), parse_tree__prog_rename__Args_14, 1) = ((MR_Box) (parse_tree__prog_rename__V_25_25));
                    }
                  }
              }
          }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__prog_rename__Term_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_rename__ConsId_12));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_rename__Args_14));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_rename__Context_39));
        }
      }
    else
      {
        MR_Word parse_tree__prog_rename__Var0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_rename__Term0_7, (MR_Integer) 0)));
        MR_Word parse_tree__prog_rename__Context_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_rename__Term0_7, (MR_Integer) 1)));
        MR_Word parse_tree__prog_rename__Var_11;
        MR_Word parse_tree__prog_rename__VarPrime_49;
        MR_Word parse_tree__prog_rename__TypeInfo_20_59;
        MR_Box parse_tree__prog_rename__conv0_VarPrime_49;

        {
          parse_tree__prog_rename__TypeInfo_20_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__prog_rename__TypeInfo_20_59, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
          MR_hl_field(MR_mktag(0), parse_tree__prog_rename__TypeInfo_20_59, 1) = ((MR_Box) (parse_tree__prog_rename__TypeInfo_for_V_40));
        }
        {
          parse_tree__prog_rename__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(parse_tree__prog_rename__TypeInfo_for_V_40, parse_tree__prog_rename__TypeInfo_20_59, parse_tree__prog_rename__TypeInfo_20_59, (MR_Word) parse_tree__prog_rename__Renaming_6, parse_tree__prog_rename__Var0_9, &parse_tree__prog_rename__conv0_VarPrime_49);
        }
        if (parse_tree__prog_rename__succeeded)
          {
            parse_tree__prog_rename__VarPrime_49 = ((MR_Word) parse_tree__prog_rename__conv0_VarPrime_49);
            parse_tree__prog_rename__succeeded = MR_TRUE;
          }
        if (parse_tree__prog_rename__succeeded)
          parse_tree__prog_rename__Var_11 = parse_tree__prog_rename__VarPrime_49;
        else
          parse_tree__prog_rename__Var_11 = parse_tree__prog_rename__Var0_9;
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *parse_tree__prog_rename__Term_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_rename__Var_11));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_rename__Context_10));
        }
      }
  }
}

void MR_CALL 
parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_105_110_95_116_101_114_109_95_95_91_50_93_95_48_4_p_0(
  MR_Word parse_tree__prog_rename__TypeInfo_for_V_40,
  MR_Word parse_tree__prog_rename__Renaming_6,
  MR_Word parse_tree__prog_rename__Term0_7,
  MR_Word * parse_tree__prog_rename__Term_8)
{
  {
    MR_bool parse_tree__prog_rename__succeeded;

    if (((MR_tag((MR_Word) parse_tree__prog_rename__Term0_7)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word parse_tree__prog_rename__ConsId_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_rename__Term0_7, (MR_Integer) 0)));
        MR_Word parse_tree__prog_rename__Args0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_rename__Term0_7, (MR_Integer) 1)));
        MR_Word parse_tree__prog_rename__Args_14;
        MR_Word parse_tree__prog_rename__Context_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_rename__Term0_7, (MR_Integer) 2)));

        if ((parse_tree__prog_rename__Args0_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          parse_tree__prog_rename__Args_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_Word parse_tree__prog_rename__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_rename__Args0_13, (MR_Integer) 1)));
            MR_Word parse_tree__prog_rename__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_rename__Args0_13, (MR_Integer) 0)));

            if ((parse_tree__prog_rename__V_41_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Word parse_tree__prog_rename__Arg1Term_16;

                {
                  parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_105_110_95_116_101_114_109_95_95_91_50_93_95_48_4_p_0(parse_tree__prog_rename__TypeInfo_for_V_40, parse_tree__prog_rename__Renaming_6, parse_tree__prog_rename__V_42_42, &parse_tree__prog_rename__Arg1Term_16);
                }
                {
                  parse_tree__prog_rename__Args_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__prog_rename__Args_14, 0) = ((MR_Box) (parse_tree__prog_rename__Arg1Term_16));
                  MR_hl_field(MR_mktag(1), parse_tree__prog_rename__Args_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
              }
            else
              {
                MR_Word parse_tree__prog_rename__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_rename__V_41_41, (MR_Integer) 1)));
                MR_Word parse_tree__prog_rename__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_rename__V_41_41, (MR_Integer) 0)));

                if ((parse_tree__prog_rename__V_43_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    MR_Word parse_tree__prog_rename__Arg2Term_18;
                    MR_Word parse_tree__prog_rename__V_29_29;
                    MR_Word parse_tree__prog_rename__Arg1Term_34;

                    {
                      parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_105_110_95_116_101_114_109_95_95_91_50_93_95_48_4_p_0(parse_tree__prog_rename__TypeInfo_for_V_40, parse_tree__prog_rename__Renaming_6, parse_tree__prog_rename__V_42_42, &parse_tree__prog_rename__Arg1Term_34);
                    }
                    {
                      parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_105_110_95_116_101_114_109_95_95_91_50_93_95_48_4_p_0(parse_tree__prog_rename__TypeInfo_for_V_40, parse_tree__prog_rename__Renaming_6, parse_tree__prog_rename__V_44_44, &parse_tree__prog_rename__Arg2Term_18);
                    }
                    {
                      parse_tree__prog_rename__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__prog_rename__V_29_29, 0) = ((MR_Box) (parse_tree__prog_rename__Arg2Term_18));
                      MR_hl_field(MR_mktag(1), parse_tree__prog_rename__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      parse_tree__prog_rename__Args_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__prog_rename__Args_14, 0) = ((MR_Box) (parse_tree__prog_rename__Arg1Term_34));
                      MR_hl_field(MR_mktag(1), parse_tree__prog_rename__Args_14, 1) = ((MR_Box) (parse_tree__prog_rename__V_29_29));
                    }
                  }
                else
                  {
                    MR_Word parse_tree__prog_rename__Arg3Term0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_rename__V_43_43, (MR_Integer) 0)));
                    MR_Word parse_tree__prog_rename__OtherArgTerms0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_rename__V_43_43, (MR_Integer) 1)));
                    MR_Word parse_tree__prog_rename__Arg3Term_21;
                    MR_Word parse_tree__prog_rename__OtherArgTerms_22;
                    MR_Word parse_tree__prog_rename__V_25_25;
                    MR_Word parse_tree__prog_rename__V_26_26;
                    MR_Word parse_tree__prog_rename__Arg1Term_36;
                    MR_Word parse_tree__prog_rename__Arg2Term_38;

                    {
                      parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_105_110_95_116_101_114_109_95_95_91_50_93_95_48_4_p_0(parse_tree__prog_rename__TypeInfo_for_V_40, parse_tree__prog_rename__Renaming_6, parse_tree__prog_rename__V_42_42, &parse_tree__prog_rename__Arg1Term_36);
                    }
                    {
                      parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_105_110_95_116_101_114_109_95_95_91_50_93_95_48_4_p_0(parse_tree__prog_rename__TypeInfo_for_V_40, parse_tree__prog_rename__Renaming_6, parse_tree__prog_rename__V_44_44, &parse_tree__prog_rename__Arg2Term_38);
                    }
                    {
                      parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_105_110_95_116_101_114_109_95_95_91_50_93_95_48_4_p_0(parse_tree__prog_rename__TypeInfo_for_V_40, parse_tree__prog_rename__Renaming_6, parse_tree__prog_rename__Arg3Term0_19, &parse_tree__prog_rename__Arg3Term_21);
                    }
                    {
                      parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_105_110_95_116_101_114_109_95_108_105_115_116_95_95_91_50_93_95_48_4_p_0(parse_tree__prog_rename__TypeInfo_for_V_40, parse_tree__prog_rename__Renaming_6, parse_tree__prog_rename__OtherArgTerms0_20, &parse_tree__prog_rename__OtherArgTerms_22);
                    }
                    {
                      parse_tree__prog_rename__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__prog_rename__V_26_26, 0) = ((MR_Box) (parse_tree__prog_rename__Arg3Term_21));
                      MR_hl_field(MR_mktag(1), parse_tree__prog_rename__V_26_26, 1) = ((MR_Box) (parse_tree__prog_rename__OtherArgTerms_22));
                    }
                    {
                      parse_tree__prog_rename__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__prog_rename__V_25_25, 0) = ((MR_Box) (parse_tree__prog_rename__Arg2Term_38));
                      MR_hl_field(MR_mktag(1), parse_tree__prog_rename__V_25_25, 1) = ((MR_Box) (parse_tree__prog_rename__V_26_26));
                    }
                    {
                      parse_tree__prog_rename__Args_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__prog_rename__Args_14, 0) = ((MR_Box) (parse_tree__prog_rename__Arg1Term_36));
                      MR_hl_field(MR_mktag(1), parse_tree__prog_rename__Args_14, 1) = ((MR_Box) (parse_tree__prog_rename__V_25_25));
                    }
                  }
              }
          }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__prog_rename__Term_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_rename__ConsId_12));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_rename__Args_14));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_rename__Context_39));
        }
      }
    else
      {
        MR_Word parse_tree__prog_rename__Var0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_rename__Term0_7, (MR_Integer) 0)));
        MR_Word parse_tree__prog_rename__Context_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_rename__Term0_7, (MR_Integer) 1)));
        MR_Word parse_tree__prog_rename__Var_11;

        {
          parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_95_95_91_50_93_95_48_4_p_0(parse_tree__prog_rename__TypeInfo_for_V_40, parse_tree__prog_rename__Renaming_6, parse_tree__prog_rename__Var0_9, &parse_tree__prog_rename__Var_11);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *parse_tree__prog_rename__Term_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_rename__Var_11));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_rename__Context_10));
        }
      }
  }
}

void MR_CALL 
parse_tree__prog_rename____Compare____must_rename_0_0(
  MR_Word * parse_tree__prog_rename__HeadVar__1_1,
  MR_Word parse_tree__prog_rename__HeadVar__2_2,
  MR_Word parse_tree__prog_rename__HeadVar__3_3)
{
  {
    MR_bool parse_tree__prog_rename__succeeded;
    MR_Integer parse_tree__prog_rename__Cast_HeadVar1_4 = (MR_Integer) parse_tree__prog_rename__HeadVar__2_2;
    MR_Integer parse_tree__prog_rename__Cast_HeadVar2_5 = (MR_Integer) parse_tree__prog_rename__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_rename__HeadVar__1_1, parse_tree__prog_rename__Cast_HeadVar1_4, parse_tree__prog_rename__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
parse_tree__prog_rename____Unify____must_rename_0_0(
  MR_Word parse_tree__prog_rename__HeadVar__2_1,
  MR_Word parse_tree__prog_rename__HeadVar__2_2)
{
  {
    MR_bool parse_tree__prog_rename__succeeded = (parse_tree__prog_rename__HeadVar__2_1 == parse_tree__prog_rename__HeadVar__2_2);

    return parse_tree__prog_rename__succeeded;
  }
}

void MR_CALL 
parse_tree__prog_rename__rename_var_4_p_2(
  MR_Word parse_tree__prog_rename__TypeInfo_for_V_18,
  MR_Word parse_tree__prog_rename__Must_5,
  MR_Word parse_tree__prog_rename__Renaming_6,
  MR_Word parse_tree__prog_rename__Var0_7,
  MR_Word * parse_tree__prog_rename__Var_8)
{
  {
    MR_bool parse_tree__prog_rename__succeeded;
    MR_Word parse_tree__prog_rename__VarPrime_9;
    MR_Word parse_tree__prog_rename__TypeInfo_20_20;
    MR_Box parse_tree__prog_rename__conv0_VarPrime_9;

    {
      parse_tree__prog_rename__TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__prog_rename__TypeInfo_20_20, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), parse_tree__prog_rename__TypeInfo_20_20, 1) = ((MR_Box) (parse_tree__prog_rename__TypeInfo_for_V_18));
    }
    {
      parse_tree__prog_rename__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(parse_tree__prog_rename__TypeInfo_for_V_18, parse_tree__prog_rename__TypeInfo_20_20, parse_tree__prog_rename__TypeInfo_20_20, (MR_Word) parse_tree__prog_rename__Renaming_6, parse_tree__prog_rename__Var0_7, &parse_tree__prog_rename__conv0_VarPrime_9);
    }
    if (parse_tree__prog_rename__succeeded)
      {
        parse_tree__prog_rename__VarPrime_9 = ((MR_Word) parse_tree__prog_rename__conv0_VarPrime_9);
        parse_tree__prog_rename__succeeded = MR_TRUE;
      }
    if (parse_tree__prog_rename__succeeded)
      *parse_tree__prog_rename__Var_8 = parse_tree__prog_rename__VarPrime_9;
    else
      switch (parse_tree__prog_rename__Must_5) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer parse_tree__prog_rename__Var0Int_10;
            MR_String parse_tree__prog_rename__Msg_11;
            MR_String parse_tree__prog_rename__V_21_21;

            {
              mercury__term__var_to_int_2_p_0(parse_tree__prog_rename__TypeInfo_for_V_18, parse_tree__prog_rename__Var0_7, &parse_tree__prog_rename__Var0Int_10);
            }
            {
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &parse_tree__prog_rename_scalar_common_1[0], parse_tree__prog_rename__Var0Int_10, &parse_tree__prog_rename__V_21_21);
            }
            {
              parse_tree__prog_rename__Msg_11 = mercury__string__f_43_43_2_f_0((MR_String) "rename_var: no substitute for var ", parse_tree__prog_rename__V_21_21);
            }
            {
              mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_rename", (MR_String) "predicate \140parse_tree.prog_rename.rename_var\'/4", parse_tree__prog_rename__Msg_11);
              return;
            }
          }
          break;
        case (MR_Integer) 1:
          *parse_tree__prog_rename__Var_8 = parse_tree__prog_rename__Var0_7;
          break;
      }
  }
}

void MR_CALL 
parse_tree__prog_rename__rename_var_4_p_1(
  MR_Word parse_tree__prog_rename__TypeInfo_for_V_18,
  MR_Word parse_tree__prog_rename__Must_5,
  MR_Word parse_tree__prog_rename__Renaming_6,
  MR_Word parse_tree__prog_rename__Var0_7,
  MR_Word * parse_tree__prog_rename__Var_8)
{
  {
    MR_bool parse_tree__prog_rename__succeeded;

    {
      parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_95_95_91_50_93_95_49_4_p_1(parse_tree__prog_rename__TypeInfo_for_V_18, parse_tree__prog_rename__Renaming_6, parse_tree__prog_rename__Var0_7, parse_tree__prog_rename__Var_8);
    }
  }
}

void MR_CALL 
parse_tree__prog_rename__rename_var_4_p_0(
  MR_Word parse_tree__prog_rename__TypeInfo_for_V_18,
  MR_Word parse_tree__prog_rename__Must_5,
  MR_Word parse_tree__prog_rename__Renaming_6,
  MR_Word parse_tree__prog_rename__Var0_7,
  MR_Word * parse_tree__prog_rename__Var_8)
{
  {
    MR_bool parse_tree__prog_rename__succeeded;

    {
      parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_95_95_91_50_93_95_48_4_p_0(parse_tree__prog_rename__TypeInfo_for_V_18, parse_tree__prog_rename__Renaming_6, parse_tree__prog_rename__Var0_7, parse_tree__prog_rename__Var_8);
    }
  }
}

void MR_CALL 
parse_tree__prog_rename__rename_var_list_4_p_2(
  MR_Word parse_tree__prog_rename__TypeInfo_for_V_13,
  MR_Word parse_tree__prog_rename__HeadVar__1_1,
  MR_Word parse_tree__prog_rename__HeadVar__2_2,
  MR_Word parse_tree__prog_rename__HeadVar__3_3,
  MR_Word * parse_tree__prog_rename__HeadVar__4_4)
{
  {
    MR_bool parse_tree__prog_rename__succeeded;

    if ((parse_tree__prog_rename__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *parse_tree__prog_rename__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word parse_tree__prog_rename__Var0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_rename__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word parse_tree__prog_rename__Vars0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_rename__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word parse_tree__prog_rename__Var_11;
        MR_Word parse_tree__prog_rename__Vars_12;

        {
          parse_tree__prog_rename__rename_var_4_p_2(parse_tree__prog_rename__TypeInfo_for_V_13, parse_tree__prog_rename__HeadVar__1_1, parse_tree__prog_rename__HeadVar__2_2, parse_tree__prog_rename__Var0_9, &parse_tree__prog_rename__Var_11);
        }
        {
          parse_tree__prog_rename__rename_var_list_4_p_2(parse_tree__prog_rename__TypeInfo_for_V_13, parse_tree__prog_rename__HeadVar__1_1, parse_tree__prog_rename__HeadVar__2_2, parse_tree__prog_rename__Vars0_10, &parse_tree__prog_rename__Vars_12);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *parse_tree__prog_rename__HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_rename__Var_11));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_rename__Vars_12));
        }
      }
  }
}

void MR_CALL 
parse_tree__prog_rename__rename_var_list_4_p_1(
  MR_Word parse_tree__prog_rename__TypeInfo_for_V_13,
  MR_Word parse_tree__prog_rename__HeadVar__1_1,
  MR_Word parse_tree__prog_rename__HeadVar__2_2,
  MR_Word parse_tree__prog_rename__HeadVar__3_3,
  MR_Word * parse_tree__prog_rename__HeadVar__4_4)
{
  {
    MR_bool parse_tree__prog_rename__succeeded;

    {
      parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_95_108_105_115_116_95_95_91_50_93_95_49_4_p_1(parse_tree__prog_rename__TypeInfo_for_V_13, parse_tree__prog_rename__HeadVar__2_2, parse_tree__prog_rename__HeadVar__3_3, parse_tree__prog_rename__HeadVar__4_4);
    }
  }
}

void MR_CALL 
parse_tree__prog_rename__rename_var_list_4_p_0(
  MR_Word parse_tree__prog_rename__TypeInfo_for_V_13,
  MR_Word parse_tree__prog_rename__HeadVar__1_1,
  MR_Word parse_tree__prog_rename__HeadVar__2_2,
  MR_Word parse_tree__prog_rename__HeadVar__3_3,
  MR_Word * parse_tree__prog_rename__HeadVar__4_4)
{
  {
    MR_bool parse_tree__prog_rename__succeeded;

    {
      parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_95_108_105_115_116_95_95_91_50_93_95_48_4_p_0(parse_tree__prog_rename__TypeInfo_for_V_13, parse_tree__prog_rename__HeadVar__2_2, parse_tree__prog_rename__HeadVar__3_3, parse_tree__prog_rename__HeadVar__4_4);
    }
  }
}

void MR_CALL 
parse_tree__prog_rename__rename_vars_in_set_of_var_4_p_2(
  MR_Word parse_tree__prog_rename__TypeInfo_for_V_11,
  MR_Word parse_tree__prog_rename__Must_5,
  MR_Word parse_tree__prog_rename__Renaming_6,
  MR_Word parse_tree__prog_rename__Vars0_7,
  MR_Word * parse_tree__prog_rename__Vars_8)
{
  {
    MR_bool parse_tree__prog_rename__succeeded;
    MR_Word parse_tree__prog_rename__VarsList0_9;
    MR_Word parse_tree__prog_rename__VarsList_10;

    {
      parse_tree__set_of_var__to_sorted_list_2_p_0(parse_tree__prog_rename__TypeInfo_for_V_11, parse_tree__prog_rename__Vars0_7, &parse_tree__prog_rename__VarsList0_9);
    }
    {
      parse_tree__prog_rename__rename_var_list_4_p_2(parse_tree__prog_rename__TypeInfo_for_V_11, parse_tree__prog_rename__Must_5, parse_tree__prog_rename__Renaming_6, parse_tree__prog_rename__VarsList0_9, &parse_tree__prog_rename__VarsList_10);
    }
    {
      parse_tree__set_of_var__list_to_set_2_p_0(parse_tree__prog_rename__TypeInfo_for_V_11, parse_tree__prog_rename__VarsList_10, parse_tree__prog_rename__Vars_8);
    }
  }
}

void MR_CALL 
parse_tree__prog_rename__rename_vars_in_set_of_var_4_p_1(
  MR_Word parse_tree__prog_rename__TypeInfo_for_V_11,
  MR_Word parse_tree__prog_rename__Must_5,
  MR_Word parse_tree__prog_rename__Renaming_6,
  MR_Word parse_tree__prog_rename__Vars0_7,
  MR_Word * parse_tree__prog_rename__Vars_8)
{
  {
    MR_bool parse_tree__prog_rename__succeeded;

    {
      parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_105_110_95_115_101_116_95_111_102_95_118_97_114_95_95_91_50_93_95_49_4_p_1(parse_tree__prog_rename__TypeInfo_for_V_11, parse_tree__prog_rename__Renaming_6, parse_tree__prog_rename__Vars0_7, parse_tree__prog_rename__Vars_8);
    }
  }
}

void MR_CALL 
parse_tree__prog_rename__rename_vars_in_set_of_var_4_p_0(
  MR_Word parse_tree__prog_rename__TypeInfo_for_V_11,
  MR_Word parse_tree__prog_rename__Must_5,
  MR_Word parse_tree__prog_rename__Renaming_6,
  MR_Word parse_tree__prog_rename__Vars0_7,
  MR_Word * parse_tree__prog_rename__Vars_8)
{
  {
    MR_bool parse_tree__prog_rename__succeeded;

    {
      parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_105_110_95_115_101_116_95_111_102_95_118_97_114_95_95_91_50_93_95_48_4_p_0(parse_tree__prog_rename__TypeInfo_for_V_11, parse_tree__prog_rename__Renaming_6, parse_tree__prog_rename__Vars0_7, parse_tree__prog_rename__Vars_8);
    }
  }
}

void MR_CALL 
parse_tree__prog_rename__rename_vars_in_var_set_4_p_2(
  MR_Word parse_tree__prog_rename__TypeInfo_for_V_11,
  MR_Word parse_tree__prog_rename__Must_5,
  MR_Word parse_tree__prog_rename__Renaming_6,
  MR_Word parse_tree__prog_rename__Vars0_7,
  MR_Word * parse_tree__prog_rename__Vars_8)
{
  {
    MR_bool parse_tree__prog_rename__succeeded;
    MR_Word parse_tree__prog_rename__TypeInfo_13_13;
    MR_Word parse_tree__prog_rename__VarsList0_9;
    MR_Word parse_tree__prog_rename__VarsList_10;
    MR_Word parse_tree__prog_rename__conv0_VarsList0_9;

    {
      parse_tree__prog_rename__TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__prog_rename__TypeInfo_13_13, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), parse_tree__prog_rename__TypeInfo_13_13, 1) = ((MR_Box) (parse_tree__prog_rename__TypeInfo_for_V_11));
    }
    {
      mercury__set__to_sorted_list_2_p_0(parse_tree__prog_rename__TypeInfo_13_13, (MR_Word) parse_tree__prog_rename__Vars0_7, &parse_tree__prog_rename__conv0_VarsList0_9);
    }
    parse_tree__prog_rename__VarsList0_9 = (MR_Word) parse_tree__prog_rename__conv0_VarsList0_9;
    {
      parse_tree__prog_rename__rename_var_list_4_p_2(parse_tree__prog_rename__TypeInfo_for_V_11, parse_tree__prog_rename__Must_5, parse_tree__prog_rename__Renaming_6, parse_tree__prog_rename__VarsList0_9, &parse_tree__prog_rename__VarsList_10);
    }
    {
      mercury__set__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_rename__TypeInfo_for_V_11, parse_tree__prog_rename__TypeInfo_13_13, parse_tree__prog_rename__VarsList_10, parse_tree__prog_rename__Vars_8);
    }
  }
}

void MR_CALL 
parse_tree__prog_rename__rename_vars_in_var_set_4_p_1(
  MR_Word parse_tree__prog_rename__TypeInfo_for_V_11,
  MR_Word parse_tree__prog_rename__Must_5,
  MR_Word parse_tree__prog_rename__Renaming_6,
  MR_Word parse_tree__prog_rename__Vars0_7,
  MR_Word * parse_tree__prog_rename__Vars_8)
{
  {
    MR_bool parse_tree__prog_rename__succeeded;

    {
      parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_105_110_95_118_97_114_95_115_101_116_95_95_91_50_93_95_49_4_p_1(parse_tree__prog_rename__TypeInfo_for_V_11, parse_tree__prog_rename__Renaming_6, parse_tree__prog_rename__Vars0_7, parse_tree__prog_rename__Vars_8);
    }
  }
}

void MR_CALL 
parse_tree__prog_rename__rename_vars_in_var_set_4_p_0(
  MR_Word parse_tree__prog_rename__TypeInfo_for_V_11,
  MR_Word parse_tree__prog_rename__Must_5,
  MR_Word parse_tree__prog_rename__Renaming_6,
  MR_Word parse_tree__prog_rename__Vars0_7,
  MR_Word * parse_tree__prog_rename__Vars_8)
{
  {
    MR_bool parse_tree__prog_rename__succeeded;

    {
      parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_105_110_95_118_97_114_95_115_101_116_95_95_91_50_93_95_48_4_p_0(parse_tree__prog_rename__TypeInfo_for_V_11, parse_tree__prog_rename__Renaming_6, parse_tree__prog_rename__Vars0_7, parse_tree__prog_rename__Vars_8);
    }
  }
}

void MR_CALL 
parse_tree__prog_rename__rename_vars_in_term_list_4_p_2(
  MR_Word parse_tree__prog_rename__TypeInfo_for_V_13,
  MR_Word parse_tree__prog_rename__HeadVar__1_1,
  MR_Word parse_tree__prog_rename__HeadVar__2_2,
  MR_Word parse_tree__prog_rename__HeadVar__3_3,
  MR_Word * parse_tree__prog_rename__HeadVar__4_4)
{
  {
    MR_bool parse_tree__prog_rename__succeeded;

    if ((parse_tree__prog_rename__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *parse_tree__prog_rename__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word parse_tree__prog_rename__Term0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_rename__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word parse_tree__prog_rename__Terms0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_rename__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word parse_tree__prog_rename__Term_11;
        MR_Word parse_tree__prog_rename__Terms_12;

        {
          parse_tree__prog_rename__rename_vars_in_term_4_p_2(parse_tree__prog_rename__TypeInfo_for_V_13, parse_tree__prog_rename__HeadVar__1_1, parse_tree__prog_rename__HeadVar__2_2, parse_tree__prog_rename__Term0_9, &parse_tree__prog_rename__Term_11);
        }
        {
          parse_tree__prog_rename__rename_vars_in_term_list_4_p_2(parse_tree__prog_rename__TypeInfo_for_V_13, parse_tree__prog_rename__HeadVar__1_1, parse_tree__prog_rename__HeadVar__2_2, parse_tree__prog_rename__Terms0_10, &parse_tree__prog_rename__Terms_12);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *parse_tree__prog_rename__HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_rename__Term_11));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_rename__Terms_12));
        }
      }
  }
}

void MR_CALL 
parse_tree__prog_rename__rename_vars_in_term_list_4_p_1(
  MR_Word parse_tree__prog_rename__TypeInfo_for_V_13,
  MR_Word parse_tree__prog_rename__HeadVar__1_1,
  MR_Word parse_tree__prog_rename__HeadVar__2_2,
  MR_Word parse_tree__prog_rename__HeadVar__3_3,
  MR_Word * parse_tree__prog_rename__HeadVar__4_4)
{
  {
    MR_bool parse_tree__prog_rename__succeeded;

    {
      parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_105_110_95_116_101_114_109_95_108_105_115_116_95_95_91_50_93_95_49_4_p_1(parse_tree__prog_rename__TypeInfo_for_V_13, parse_tree__prog_rename__HeadVar__2_2, parse_tree__prog_rename__HeadVar__3_3, parse_tree__prog_rename__HeadVar__4_4);
    }
  }
}

void MR_CALL 
parse_tree__prog_rename__rename_vars_in_term_list_4_p_0(
  MR_Word parse_tree__prog_rename__TypeInfo_for_V_13,
  MR_Word parse_tree__prog_rename__HeadVar__1_1,
  MR_Word parse_tree__prog_rename__HeadVar__2_2,
  MR_Word parse_tree__prog_rename__HeadVar__3_3,
  MR_Word * parse_tree__prog_rename__HeadVar__4_4)
{
  {
    MR_bool parse_tree__prog_rename__succeeded;

    {
      parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_105_110_95_116_101_114_109_95_108_105_115_116_95_95_91_50_93_95_48_4_p_0(parse_tree__prog_rename__TypeInfo_for_V_13, parse_tree__prog_rename__HeadVar__2_2, parse_tree__prog_rename__HeadVar__3_3, parse_tree__prog_rename__HeadVar__4_4);
    }
  }
}

void MR_CALL 
parse_tree__prog_rename__rename_vars_in_term_4_p_2(
  MR_Word parse_tree__prog_rename__TypeInfo_for_V_40,
  MR_Word parse_tree__prog_rename__Must_5,
  MR_Word parse_tree__prog_rename__Renaming_6,
  MR_Word parse_tree__prog_rename__Term0_7,
  MR_Word * parse_tree__prog_rename__Term_8)
{
  {
    MR_bool parse_tree__prog_rename__succeeded;

    if (((MR_tag((MR_Word) parse_tree__prog_rename__Term0_7)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word parse_tree__prog_rename__ConsId_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_rename__Term0_7, (MR_Integer) 0)));
        MR_Word parse_tree__prog_rename__Args0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_rename__Term0_7, (MR_Integer) 1)));
        MR_Word parse_tree__prog_rename__Args_14;
        MR_Word parse_tree__prog_rename__Context_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_rename__Term0_7, (MR_Integer) 2)));

        if ((parse_tree__prog_rename__Args0_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          parse_tree__prog_rename__Args_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_Word parse_tree__prog_rename__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_rename__Args0_13, (MR_Integer) 1)));
            MR_Word parse_tree__prog_rename__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_rename__Args0_13, (MR_Integer) 0)));

            if ((parse_tree__prog_rename__V_41_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Word parse_tree__prog_rename__Arg1Term_16;

                {
                  parse_tree__prog_rename__rename_vars_in_term_4_p_2(parse_tree__prog_rename__TypeInfo_for_V_40, parse_tree__prog_rename__Must_5, parse_tree__prog_rename__Renaming_6, parse_tree__prog_rename__V_42_42, &parse_tree__prog_rename__Arg1Term_16);
                }
                {
                  parse_tree__prog_rename__Args_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__prog_rename__Args_14, 0) = ((MR_Box) (parse_tree__prog_rename__Arg1Term_16));
                  MR_hl_field(MR_mktag(1), parse_tree__prog_rename__Args_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
              }
            else
              {
                MR_Word parse_tree__prog_rename__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_rename__V_41_41, (MR_Integer) 1)));
                MR_Word parse_tree__prog_rename__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_rename__V_41_41, (MR_Integer) 0)));

                if ((parse_tree__prog_rename__V_43_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    MR_Word parse_tree__prog_rename__Arg2Term_18;
                    MR_Word parse_tree__prog_rename__V_29_29;
                    MR_Word parse_tree__prog_rename__Arg1Term_34;

                    {
                      parse_tree__prog_rename__rename_vars_in_term_4_p_2(parse_tree__prog_rename__TypeInfo_for_V_40, parse_tree__prog_rename__Must_5, parse_tree__prog_rename__Renaming_6, parse_tree__prog_rename__V_42_42, &parse_tree__prog_rename__Arg1Term_34);
                    }
                    {
                      parse_tree__prog_rename__rename_vars_in_term_4_p_2(parse_tree__prog_rename__TypeInfo_for_V_40, parse_tree__prog_rename__Must_5, parse_tree__prog_rename__Renaming_6, parse_tree__prog_rename__V_44_44, &parse_tree__prog_rename__Arg2Term_18);
                    }
                    {
                      parse_tree__prog_rename__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__prog_rename__V_29_29, 0) = ((MR_Box) (parse_tree__prog_rename__Arg2Term_18));
                      MR_hl_field(MR_mktag(1), parse_tree__prog_rename__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      parse_tree__prog_rename__Args_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__prog_rename__Args_14, 0) = ((MR_Box) (parse_tree__prog_rename__Arg1Term_34));
                      MR_hl_field(MR_mktag(1), parse_tree__prog_rename__Args_14, 1) = ((MR_Box) (parse_tree__prog_rename__V_29_29));
                    }
                  }
                else
                  {
                    MR_Word parse_tree__prog_rename__Arg3Term0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_rename__V_43_43, (MR_Integer) 0)));
                    MR_Word parse_tree__prog_rename__OtherArgTerms0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_rename__V_43_43, (MR_Integer) 1)));
                    MR_Word parse_tree__prog_rename__Arg3Term_21;
                    MR_Word parse_tree__prog_rename__OtherArgTerms_22;
                    MR_Word parse_tree__prog_rename__V_25_25;
                    MR_Word parse_tree__prog_rename__V_26_26;
                    MR_Word parse_tree__prog_rename__Arg1Term_36;
                    MR_Word parse_tree__prog_rename__Arg2Term_38;

                    {
                      parse_tree__prog_rename__rename_vars_in_term_4_p_2(parse_tree__prog_rename__TypeInfo_for_V_40, parse_tree__prog_rename__Must_5, parse_tree__prog_rename__Renaming_6, parse_tree__prog_rename__V_42_42, &parse_tree__prog_rename__Arg1Term_36);
                    }
                    {
                      parse_tree__prog_rename__rename_vars_in_term_4_p_2(parse_tree__prog_rename__TypeInfo_for_V_40, parse_tree__prog_rename__Must_5, parse_tree__prog_rename__Renaming_6, parse_tree__prog_rename__V_44_44, &parse_tree__prog_rename__Arg2Term_38);
                    }
                    {
                      parse_tree__prog_rename__rename_vars_in_term_4_p_2(parse_tree__prog_rename__TypeInfo_for_V_40, parse_tree__prog_rename__Must_5, parse_tree__prog_rename__Renaming_6, parse_tree__prog_rename__Arg3Term0_19, &parse_tree__prog_rename__Arg3Term_21);
                    }
                    {
                      parse_tree__prog_rename__rename_vars_in_term_list_4_p_2(parse_tree__prog_rename__TypeInfo_for_V_40, parse_tree__prog_rename__Must_5, parse_tree__prog_rename__Renaming_6, parse_tree__prog_rename__OtherArgTerms0_20, &parse_tree__prog_rename__OtherArgTerms_22);
                    }
                    {
                      parse_tree__prog_rename__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__prog_rename__V_26_26, 0) = ((MR_Box) (parse_tree__prog_rename__Arg3Term_21));
                      MR_hl_field(MR_mktag(1), parse_tree__prog_rename__V_26_26, 1) = ((MR_Box) (parse_tree__prog_rename__OtherArgTerms_22));
                    }
                    {
                      parse_tree__prog_rename__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__prog_rename__V_25_25, 0) = ((MR_Box) (parse_tree__prog_rename__Arg2Term_38));
                      MR_hl_field(MR_mktag(1), parse_tree__prog_rename__V_25_25, 1) = ((MR_Box) (parse_tree__prog_rename__V_26_26));
                    }
                    {
                      parse_tree__prog_rename__Args_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__prog_rename__Args_14, 0) = ((MR_Box) (parse_tree__prog_rename__Arg1Term_36));
                      MR_hl_field(MR_mktag(1), parse_tree__prog_rename__Args_14, 1) = ((MR_Box) (parse_tree__prog_rename__V_25_25));
                    }
                  }
              }
          }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__prog_rename__Term_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_rename__ConsId_12));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_rename__Args_14));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_rename__Context_39));
        }
      }
    else
      {
        MR_Word parse_tree__prog_rename__Var0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_rename__Term0_7, (MR_Integer) 0)));
        MR_Word parse_tree__prog_rename__Context_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_rename__Term0_7, (MR_Integer) 1)));
        MR_Word parse_tree__prog_rename__Var_11;

        {
          parse_tree__prog_rename__rename_var_4_p_2(parse_tree__prog_rename__TypeInfo_for_V_40, parse_tree__prog_rename__Must_5, parse_tree__prog_rename__Renaming_6, parse_tree__prog_rename__Var0_9, &parse_tree__prog_rename__Var_11);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *parse_tree__prog_rename__Term_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_rename__Var_11));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_rename__Context_10));
        }
      }
  }
}

void MR_CALL 
parse_tree__prog_rename__rename_vars_in_term_4_p_1(
  MR_Word parse_tree__prog_rename__TypeInfo_for_V_40,
  MR_Word parse_tree__prog_rename__Must_5,
  MR_Word parse_tree__prog_rename__Renaming_6,
  MR_Word parse_tree__prog_rename__Term0_7,
  MR_Word * parse_tree__prog_rename__Term_8)
{
  {
    MR_bool parse_tree__prog_rename__succeeded;

    {
      parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_105_110_95_116_101_114_109_95_95_91_50_93_95_49_4_p_1(parse_tree__prog_rename__TypeInfo_for_V_40, parse_tree__prog_rename__Renaming_6, parse_tree__prog_rename__Term0_7, parse_tree__prog_rename__Term_8);
    }
  }
}

void MR_CALL 
parse_tree__prog_rename__rename_vars_in_term_4_p_0(
  MR_Word parse_tree__prog_rename__TypeInfo_for_V_40,
  MR_Word parse_tree__prog_rename__Must_5,
  MR_Word parse_tree__prog_rename__Renaming_6,
  MR_Word parse_tree__prog_rename__Term0_7,
  MR_Word * parse_tree__prog_rename__Term_8)
{
  {
    MR_bool parse_tree__prog_rename__succeeded;

    {
      parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_105_110_95_116_101_114_109_95_95_91_50_93_95_48_4_p_0(parse_tree__prog_rename__TypeInfo_for_V_40, parse_tree__prog_rename__Renaming_6, parse_tree__prog_rename__Term0_7, parse_tree__prog_rename__Term_8);
    }
  }
}

void mercury__parse_tree__prog_rename__init(void)
{
}

void mercury__parse_tree__prog_rename__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__prog_rename__parse_tree__prog_rename__type_ctor_info_must_rename_0);
}

void mercury__parse_tree__prog_rename__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree.prog_rename. */
