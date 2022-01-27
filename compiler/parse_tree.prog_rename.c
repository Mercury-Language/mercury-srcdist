/*
** Automatically generated from `prog_rename.m'
** by the Mercury compiler,
** version rotd-2015-09-15
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


#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
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
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "recompilation.mih"
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
#include "libs.globals.mih"
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
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 98 "parse_tree.prog_rename.c"
static const MR_EnumFunctorDesc parse_tree__prog_rename__parse_tree__prog_rename__enum_functor_desc_must_rename_0_0;

#line 101 "parse_tree.prog_rename.c"
static const MR_EnumFunctorDesc parse_tree__prog_rename__parse_tree__prog_rename__enum_functor_desc_must_rename_0_1;

#line 104 "parse_tree.prog_rename.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_rename__parse_tree__prog_rename__enum_value_ordered_must_rename_0[2];

#line 107 "parse_tree.prog_rename.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_rename__parse_tree__prog_rename__enum_name_ordered_must_rename_0[2];

#line 110 "parse_tree.prog_rename.c"
static const MR_Integer parse_tree__prog_rename__parse_tree__prog_rename__functor_number_map_must_rename_0[2];

#line 113 "parse_tree.prog_rename.c"
static MR_bool MR_CALL 
parse_tree__prog_rename____Unify____must_rename_0_0_10001(
#line 116 "parse_tree.prog_rename.c"
  MR_Box parse_tree__prog_rename__wrapper_arg_1,
#line 118 "parse_tree.prog_rename.c"
  MR_Box parse_tree__prog_rename__wrapper_arg_2);

#line 121 "parse_tree.prog_rename.c"
static void MR_CALL 
parse_tree__prog_rename____Compare____must_rename_0_0_10001(
#line 124 "parse_tree.prog_rename.c"
  MR_Box * parse_tree__prog_rename__wrapper_arg_1,
#line 126 "parse_tree.prog_rename.c"
  MR_Box parse_tree__prog_rename__wrapper_arg_2,
#line 128 "parse_tree.prog_rename.c"
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



#line 153 "parse_tree.prog_rename.c"
static const MR_EnumFunctorDesc parse_tree__prog_rename__parse_tree__prog_rename__enum_functor_desc_must_rename_0_0 = {
  (MR_String) "must_rename",
  (MR_Integer) 0
};

#line 159 "parse_tree.prog_rename.c"
static const MR_EnumFunctorDesc parse_tree__prog_rename__parse_tree__prog_rename__enum_functor_desc_must_rename_0_1 = {
  (MR_String) "need_not_rename",
  (MR_Integer) 1
};

#line 165 "parse_tree.prog_rename.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_rename__parse_tree__prog_rename__enum_value_ordered_must_rename_0[2] = {
  &parse_tree__prog_rename__parse_tree__prog_rename__enum_functor_desc_must_rename_0_0,
  &parse_tree__prog_rename__parse_tree__prog_rename__enum_functor_desc_must_rename_0_1
};

#line 171 "parse_tree.prog_rename.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_rename__parse_tree__prog_rename__enum_name_ordered_must_rename_0[2] = {
  &parse_tree__prog_rename__parse_tree__prog_rename__enum_functor_desc_must_rename_0_0,
  &parse_tree__prog_rename__parse_tree__prog_rename__enum_functor_desc_must_rename_0_1
};

#line 177 "parse_tree.prog_rename.c"
static const MR_Integer parse_tree__prog_rename__parse_tree__prog_rename__functor_number_map_must_rename_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 183 "parse_tree.prog_rename.c"
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

#line 200 "parse_tree.prog_rename.c"
static MR_bool MR_CALL 
parse_tree__prog_rename____Unify____must_rename_0_0_10001(
#line 203 "parse_tree.prog_rename.c"
  MR_Box parse_tree__prog_rename__wrapper_arg_1,
#line 205 "parse_tree.prog_rename.c"
  MR_Box parse_tree__prog_rename__wrapper_arg_2)
#line 207 "parse_tree.prog_rename.c"
{
#line 209 "parse_tree.prog_rename.c"
  {
#line 211 "parse_tree.prog_rename.c"
    MR_bool parse_tree__prog_rename__succeeded;

#line 214 "parse_tree.prog_rename.c"
    {
#line 216 "parse_tree.prog_rename.c"
      parse_tree__prog_rename__succeeded = parse_tree__prog_rename____Unify____must_rename_0_0(((MR_Word) parse_tree__prog_rename__wrapper_arg_1), ((MR_Word) parse_tree__prog_rename__wrapper_arg_2));
    }
#line 219 "parse_tree.prog_rename.c"
    return parse_tree__prog_rename__succeeded;
#line 221 "parse_tree.prog_rename.c"
  }
#line 223 "parse_tree.prog_rename.c"
}

#line 226 "parse_tree.prog_rename.c"
static void MR_CALL 
parse_tree__prog_rename____Compare____must_rename_0_0_10001(
#line 229 "parse_tree.prog_rename.c"
  MR_Box * parse_tree__prog_rename__wrapper_arg_1,
#line 231 "parse_tree.prog_rename.c"
  MR_Box parse_tree__prog_rename__wrapper_arg_2,
#line 233 "parse_tree.prog_rename.c"
  MR_Box parse_tree__prog_rename__wrapper_arg_3)
#line 235 "parse_tree.prog_rename.c"
{
#line 237 "parse_tree.prog_rename.c"
  {
#line 239 "parse_tree.prog_rename.c"
    MR_Word parse_tree__prog_rename__conv0_HeadVar__1_1;

#line 242 "parse_tree.prog_rename.c"
    {
#line 244 "parse_tree.prog_rename.c"
      parse_tree__prog_rename____Compare____must_rename_0_0(&parse_tree__prog_rename__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_rename__wrapper_arg_2), ((MR_Word) parse_tree__prog_rename__wrapper_arg_3));
    }
#line 247 "parse_tree.prog_rename.c"
    *parse_tree__prog_rename__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_rename__conv0_HeadVar__1_1));
#line 249 "parse_tree.prog_rename.c"
  }
#line 251 "parse_tree.prog_rename.c"
}

#line 70 "prog_rename.m"
void MR_CALL 
parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_95_95_91_50_93_95_49_4_p_1(
#line 70 "prog_rename.m"
  MR_Word parse_tree__prog_rename__TypeInfo_for_V_18,
#line 70 "prog_rename.m"
  MR_Word parse_tree__prog_rename__Renaming_6,
#line 70 "prog_rename.m"
  MR_Word parse_tree__prog_rename__Var0_7,
#line 70 "prog_rename.m"
  MR_Word * parse_tree__prog_rename__Var_8)
#line 70 "prog_rename.m"
{
#line 144 "prog_rename.m"
  {
#line 144 "prog_rename.m"
    MR_bool parse_tree__prog_rename__succeeded;
#line 144 "prog_rename.m"
    MR_Word parse_tree__prog_rename__VarPrime_9;
#line 142 "prog_rename.m"
    MR_Word parse_tree__prog_rename__TypeInfo_20_20;
#line 142 "prog_rename.m"
    MR_Box parse_tree__prog_rename__conv0_VarPrime_9;

#line 278 "parse_tree.prog_rename.c"
    {
#line 280 "parse_tree.prog_rename.c"
      parse_tree__prog_rename__TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 282 "parse_tree.prog_rename.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_rename__TypeInfo_20_20, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 284 "parse_tree.prog_rename.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_rename__TypeInfo_20_20, 1) = ((MR_Box) (parse_tree__prog_rename__TypeInfo_for_V_18));
#line 286 "parse_tree.prog_rename.c"
    }
#line 142 "prog_rename.m"
    {
#line 142 "prog_rename.m"
      parse_tree__prog_rename__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(parse_tree__prog_rename__TypeInfo_for_V_18, parse_tree__prog_rename__TypeInfo_20_20, parse_tree__prog_rename__TypeInfo_20_20, (MR_Word) parse_tree__prog_rename__Renaming_6, parse_tree__prog_rename__Var0_7, &parse_tree__prog_rename__conv0_VarPrime_9);
    }
#line 142 "prog_rename.m"
    if (parse_tree__prog_rename__succeeded)
#line 142 "prog_rename.m"
      {
#line 142 "prog_rename.m"
        parse_tree__prog_rename__VarPrime_9 = ((MR_Word) parse_tree__prog_rename__conv0_VarPrime_9);
#line 142 "prog_rename.m"
        parse_tree__prog_rename__succeeded = MR_TRUE;
#line 142 "prog_rename.m"
      }
#line 144 "prog_rename.m"
    if (parse_tree__prog_rename__succeeded)
#line 143 "prog_rename.m"
      *parse_tree__prog_rename__Var_8 = parse_tree__prog_rename__VarPrime_9;
#line 144 "prog_rename.m"
    else
#line 147 "prog_rename.m"
      *parse_tree__prog_rename__Var_8 = parse_tree__prog_rename__Var0_7;
#line 144 "prog_rename.m"
  }
#line 70 "prog_rename.m"
}

#line 69 "prog_rename.m"
void MR_CALL 
parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_95_95_91_50_93_95_48_4_p_0(
#line 69 "prog_rename.m"
  MR_Word parse_tree__prog_rename__TypeInfo_for_V_18,
#line 69 "prog_rename.m"
  MR_Word parse_tree__prog_rename__Renaming_6,
#line 69 "prog_rename.m"
  MR_Word parse_tree__prog_rename__Var0_7,
#line 69 "prog_rename.m"
  MR_Word * parse_tree__prog_rename__Var_8)
#line 69 "prog_rename.m"
{
#line 144 "prog_rename.m"
  {
#line 144 "prog_rename.m"
    MR_bool parse_tree__prog_rename__succeeded;
#line 144 "prog_rename.m"
    MR_Word parse_tree__prog_rename__VarPrime_9;
#line 142 "prog_rename.m"
    MR_Word parse_tree__prog_rename__TypeInfo_20_20;
#line 142 "prog_rename.m"
    MR_Box parse_tree__prog_rename__conv0_VarPrime_9;

#line 340 "parse_tree.prog_rename.c"
    {
#line 342 "parse_tree.prog_rename.c"
      parse_tree__prog_rename__TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 344 "parse_tree.prog_rename.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_rename__TypeInfo_20_20, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 346 "parse_tree.prog_rename.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_rename__TypeInfo_20_20, 1) = ((MR_Box) (parse_tree__prog_rename__TypeInfo_for_V_18));
#line 348 "parse_tree.prog_rename.c"
    }
#line 142 "prog_rename.m"
    {
#line 142 "prog_rename.m"
      parse_tree__prog_rename__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(parse_tree__prog_rename__TypeInfo_for_V_18, parse_tree__prog_rename__TypeInfo_20_20, parse_tree__prog_rename__TypeInfo_20_20, (MR_Word) parse_tree__prog_rename__Renaming_6, parse_tree__prog_rename__Var0_7, &parse_tree__prog_rename__conv0_VarPrime_9);
    }
#line 142 "prog_rename.m"
    if (parse_tree__prog_rename__succeeded)
#line 142 "prog_rename.m"
      {
#line 142 "prog_rename.m"
        parse_tree__prog_rename__VarPrime_9 = ((MR_Word) parse_tree__prog_rename__conv0_VarPrime_9);
#line 142 "prog_rename.m"
        parse_tree__prog_rename__succeeded = MR_TRUE;
#line 142 "prog_rename.m"
      }
#line 144 "prog_rename.m"
    if (parse_tree__prog_rename__succeeded)
#line 143 "prog_rename.m"
      *parse_tree__prog_rename__Var_8 = parse_tree__prog_rename__VarPrime_9;
#line 144 "prog_rename.m"
    else
#line 148 "prog_rename.m"
      {
#line 148 "prog_rename.m"
        MR_Integer parse_tree__prog_rename__Var0Int_10;
#line 148 "prog_rename.m"
        MR_String parse_tree__prog_rename__Msg_11;
#line 148 "prog_rename.m"
        MR_String parse_tree__prog_rename__V_21_21;

#line 150 "prog_rename.m"
        {
#line 150 "prog_rename.m"
          mercury__term__var_to_int_2_p_0(parse_tree__prog_rename__TypeInfo_for_V_18, parse_tree__prog_rename__Var0_7, &parse_tree__prog_rename__Var0Int_10);
        }
#line 151 "prog_rename.m"
        {
#line 151 "prog_rename.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &parse_tree__prog_rename_scalar_common_1[0], parse_tree__prog_rename__Var0Int_10, &parse_tree__prog_rename__V_21_21);
        }
#line 151 "prog_rename.m"
        {
#line 151 "prog_rename.m"
          parse_tree__prog_rename__Msg_11 = mercury__string__f_43_43_2_f_0((MR_String) "rename_var: no substitute for var ", parse_tree__prog_rename__V_21_21);
        }
#line 153 "prog_rename.m"
        {
#line 153 "prog_rename.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_rename", (MR_String) "predicate \140parse_tree.prog_rename.rename_var\'/4", parse_tree__prog_rename__Msg_11);
#line 153 "prog_rename.m"
          return;
        }
#line 148 "prog_rename.m"
      }
#line 144 "prog_rename.m"
  }
#line 69 "prog_rename.m"
}

#line 64 "prog_rename.m"
void MR_CALL 
parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_95_108_105_115_116_95_95_91_50_93_95_49_4_p_1(
#line 64 "prog_rename.m"
  MR_Word parse_tree__prog_rename__TypeInfo_for_V_13,
#line 64 "prog_rename.m"
  MR_Word parse_tree__prog_rename__HeadVar__2_2,
#line 64 "prog_rename.m"
  MR_Word parse_tree__prog_rename__HeadVar__3_3,
#line 64 "prog_rename.m"
  MR_Word * parse_tree__prog_rename__HeadVar__4_4)
#line 64 "prog_rename.m"
{
#line 136 "prog_rename.m"
  {
#line 136 "prog_rename.m"
    MR_bool parse_tree__prog_rename__succeeded;

#line 136 "prog_rename.m"
    if ((parse_tree__prog_rename__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 136 "prog_rename.m"
      *parse_tree__prog_rename__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 136 "prog_rename.m"
    else
#line 137 "prog_rename.m"
      {
#line 137 "prog_rename.m"
        MR_Word parse_tree__prog_rename__Var0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_rename__HeadVar__3_3, (MR_Integer) 0)));
#line 137 "prog_rename.m"
        MR_Word parse_tree__prog_rename__Vars0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_rename__HeadVar__3_3, (MR_Integer) 1)));
#line 137 "prog_rename.m"
        MR_Word parse_tree__prog_rename__Var_11;
#line 137 "prog_rename.m"
        MR_Word parse_tree__prog_rename__Vars_12;
#line 144 "prog_rename.m"
        MR_Word parse_tree__prog_rename__VarPrime_18;
#line 142 "prog_rename.m"
        MR_Word parse_tree__prog_rename__TypeInfo_20_28;
#line 142 "prog_rename.m"
        MR_Box parse_tree__prog_rename__conv0_VarPrime_18;

#line 450 "parse_tree.prog_rename.c"
        {
#line 452 "parse_tree.prog_rename.c"
          parse_tree__prog_rename__TypeInfo_20_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 454 "parse_tree.prog_rename.c"
          MR_hl_field(MR_mktag(0), parse_tree__prog_rename__TypeInfo_20_28, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 456 "parse_tree.prog_rename.c"
          MR_hl_field(MR_mktag(0), parse_tree__prog_rename__TypeInfo_20_28, 1) = ((MR_Box) (parse_tree__prog_rename__TypeInfo_for_V_13));
#line 458 "parse_tree.prog_rename.c"
        }
#line 142 "prog_rename.m"
        {
#line 142 "prog_rename.m"
          parse_tree__prog_rename__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(parse_tree__prog_rename__TypeInfo_for_V_13, parse_tree__prog_rename__TypeInfo_20_28, parse_tree__prog_rename__TypeInfo_20_28, (MR_Word) parse_tree__prog_rename__HeadVar__2_2, parse_tree__prog_rename__Var0_9, &parse_tree__prog_rename__conv0_VarPrime_18);
        }
#line 142 "prog_rename.m"
        if (parse_tree__prog_rename__succeeded)
#line 142 "prog_rename.m"
          {
#line 142 "prog_rename.m"
            parse_tree__prog_rename__VarPrime_18 = ((MR_Word) parse_tree__prog_rename__conv0_VarPrime_18);
#line 142 "prog_rename.m"
            parse_tree__prog_rename__succeeded = MR_TRUE;
#line 142 "prog_rename.m"
          }
#line 144 "prog_rename.m"
        if (parse_tree__prog_rename__succeeded)
#line 143 "prog_rename.m"
          parse_tree__prog_rename__Var_11 = parse_tree__prog_rename__VarPrime_18;
#line 144 "prog_rename.m"
        else
#line 147 "prog_rename.m"
          parse_tree__prog_rename__Var_11 = parse_tree__prog_rename__Var0_9;
#line 139 "prog_rename.m"
        {
#line 139 "prog_rename.m"
          parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_95_108_105_115_116_95_95_91_50_93_95_49_4_p_1(parse_tree__prog_rename__TypeInfo_for_V_13, parse_tree__prog_rename__HeadVar__2_2, parse_tree__prog_rename__Vars0_10, &parse_tree__prog_rename__Vars_12);
        }
#line 137 "prog_rename.m"
        {
#line 137 "prog_rename.m"
          MR_Word base;
#line 137 "prog_rename.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 137 "prog_rename.m"
          *parse_tree__prog_rename__HeadVar__4_4 = base;
#line 137 "prog_rename.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_rename__Var_11));
#line 137 "prog_rename.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_rename__Vars_12));
#line 137 "prog_rename.m"
        }
#line 137 "prog_rename.m"
      }
#line 136 "prog_rename.m"
  }
#line 64 "prog_rename.m"
}

#line 63 "prog_rename.m"
void MR_CALL 
parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_95_108_105_115_116_95_95_91_50_93_95_48_4_p_0(
#line 63 "prog_rename.m"
  MR_Word parse_tree__prog_rename__TypeInfo_for_V_13,
#line 63 "prog_rename.m"
  MR_Word parse_tree__prog_rename__HeadVar__2_2,
#line 63 "prog_rename.m"
  MR_Word parse_tree__prog_rename__HeadVar__3_3,
#line 63 "prog_rename.m"
  MR_Word * parse_tree__prog_rename__HeadVar__4_4)
#line 63 "prog_rename.m"
{
#line 136 "prog_rename.m"
  {
#line 136 "prog_rename.m"
    MR_bool parse_tree__prog_rename__succeeded;

#line 136 "prog_rename.m"
    if ((parse_tree__prog_rename__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 136 "prog_rename.m"
      *parse_tree__prog_rename__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 136 "prog_rename.m"
    else
#line 137 "prog_rename.m"
      {
#line 137 "prog_rename.m"
        MR_Word parse_tree__prog_rename__Var0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_rename__HeadVar__3_3, (MR_Integer) 0)));
#line 137 "prog_rename.m"
        MR_Word parse_tree__prog_rename__Vars0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_rename__HeadVar__3_3, (MR_Integer) 1)));
#line 137 "prog_rename.m"
        MR_Word parse_tree__prog_rename__Var_11;
#line 137 "prog_rename.m"
        MR_Word parse_tree__prog_rename__Vars_12;

#line 138 "prog_rename.m"
        {
#line 138 "prog_rename.m"
          parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_95_95_91_50_93_95_48_4_p_0(parse_tree__prog_rename__TypeInfo_for_V_13, parse_tree__prog_rename__HeadVar__2_2, parse_tree__prog_rename__Var0_9, &parse_tree__prog_rename__Var_11);
        }
#line 139 "prog_rename.m"
        {
#line 139 "prog_rename.m"
          parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_95_108_105_115_116_95_95_91_50_93_95_48_4_p_0(parse_tree__prog_rename__TypeInfo_for_V_13, parse_tree__prog_rename__HeadVar__2_2, parse_tree__prog_rename__Vars0_10, &parse_tree__prog_rename__Vars_12);
        }
#line 137 "prog_rename.m"
        {
#line 137 "prog_rename.m"
          MR_Word base;
#line 137 "prog_rename.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 137 "prog_rename.m"
          *parse_tree__prog_rename__HeadVar__4_4 = base;
#line 137 "prog_rename.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_rename__Var_11));
#line 137 "prog_rename.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_rename__Vars_12));
#line 137 "prog_rename.m"
        }
#line 137 "prog_rename.m"
      }
#line 136 "prog_rename.m"
  }
#line 63 "prog_rename.m"
}

#line 58 "prog_rename.m"
void MR_CALL 
parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_105_110_95_115_101_116_95_111_102_95_118_97_114_95_95_91_50_93_95_49_4_p_1(
#line 58 "prog_rename.m"
  MR_Word parse_tree__prog_rename__TypeInfo_for_V_11,
#line 58 "prog_rename.m"
  MR_Word parse_tree__prog_rename__Renaming_6,
#line 58 "prog_rename.m"
  MR_Word parse_tree__prog_rename__Vars0_7,
#line 58 "prog_rename.m"
  MR_Word * parse_tree__prog_rename__Vars_8)
#line 58 "prog_rename.m"
{
#line 131 "prog_rename.m"
  {
#line 131 "prog_rename.m"
    MR_bool parse_tree__prog_rename__succeeded;
#line 131 "prog_rename.m"
    MR_Word parse_tree__prog_rename__VarsList0_9;
#line 131 "prog_rename.m"
    MR_Word parse_tree__prog_rename__VarsList_10;

#line 132 "prog_rename.m"
    {
#line 132 "prog_rename.m"
      parse_tree__set_of_var__to_sorted_list_2_p_0(parse_tree__prog_rename__TypeInfo_for_V_11, parse_tree__prog_rename__Vars0_7, &parse_tree__prog_rename__VarsList0_9);
    }
#line 133 "prog_rename.m"
    {
#line 133 "prog_rename.m"
      parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_95_108_105_115_116_95_95_91_50_93_95_49_4_p_1(parse_tree__prog_rename__TypeInfo_for_V_11, parse_tree__prog_rename__Renaming_6, parse_tree__prog_rename__VarsList0_9, &parse_tree__prog_rename__VarsList_10);
    }
#line 134 "prog_rename.m"
    {
#line 134 "prog_rename.m"
      parse_tree__set_of_var__list_to_set_2_p_0(parse_tree__prog_rename__TypeInfo_for_V_11, parse_tree__prog_rename__VarsList_10, parse_tree__prog_rename__Vars_8);
#line 134 "prog_rename.m"
      return;
    }
#line 131 "prog_rename.m"
  }
#line 58 "prog_rename.m"
}

#line 57 "prog_rename.m"
void MR_CALL 
parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_105_110_95_115_101_116_95_111_102_95_118_97_114_95_95_91_50_93_95_48_4_p_0(
#line 57 "prog_rename.m"
  MR_Word parse_tree__prog_rename__TypeInfo_for_V_11,
#line 57 "prog_rename.m"
  MR_Word parse_tree__prog_rename__Renaming_6,
#line 57 "prog_rename.m"
  MR_Word parse_tree__prog_rename__Vars0_7,
#line 57 "prog_rename.m"
  MR_Word * parse_tree__prog_rename__Vars_8)
#line 57 "prog_rename.m"
{
#line 131 "prog_rename.m"
  {
#line 131 "prog_rename.m"
    MR_bool parse_tree__prog_rename__succeeded;
#line 131 "prog_rename.m"
    MR_Word parse_tree__prog_rename__VarsList0_9;
#line 131 "prog_rename.m"
    MR_Word parse_tree__prog_rename__VarsList_10;

#line 132 "prog_rename.m"
    {
#line 132 "prog_rename.m"
      parse_tree__set_of_var__to_sorted_list_2_p_0(parse_tree__prog_rename__TypeInfo_for_V_11, parse_tree__prog_rename__Vars0_7, &parse_tree__prog_rename__VarsList0_9);
    }
#line 133 "prog_rename.m"
    {
#line 133 "prog_rename.m"
      parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_95_108_105_115_116_95_95_91_50_93_95_48_4_p_0(parse_tree__prog_rename__TypeInfo_for_V_11, parse_tree__prog_rename__Renaming_6, parse_tree__prog_rename__VarsList0_9, &parse_tree__prog_rename__VarsList_10);
    }
#line 134 "prog_rename.m"
    {
#line 134 "prog_rename.m"
      parse_tree__set_of_var__list_to_set_2_p_0(parse_tree__prog_rename__TypeInfo_for_V_11, parse_tree__prog_rename__VarsList_10, parse_tree__prog_rename__Vars_8);
#line 134 "prog_rename.m"
      return;
    }
#line 131 "prog_rename.m"
  }
#line 57 "prog_rename.m"
}

#line 52 "prog_rename.m"
void MR_CALL 
parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_105_110_95_118_97_114_95_115_101_116_95_95_91_50_93_95_49_4_p_1(
#line 52 "prog_rename.m"
  MR_Word parse_tree__prog_rename__TypeInfo_for_V_11,
#line 52 "prog_rename.m"
  MR_Word parse_tree__prog_rename__Renaming_6,
#line 52 "prog_rename.m"
  MR_Word parse_tree__prog_rename__Vars0_7,
#line 52 "prog_rename.m"
  MR_Word * parse_tree__prog_rename__Vars_8)
#line 52 "prog_rename.m"
{
#line 126 "prog_rename.m"
  {
#line 126 "prog_rename.m"
    MR_bool parse_tree__prog_rename__succeeded;
#line 126 "prog_rename.m"
    MR_Word parse_tree__prog_rename__TypeInfo_13_13;
#line 126 "prog_rename.m"
    MR_Word parse_tree__prog_rename__VarsList0_9;
#line 126 "prog_rename.m"
    MR_Word parse_tree__prog_rename__VarsList_10;
#line 127 "prog_rename.m"
    MR_Word parse_tree__prog_rename__conv0_VarsList0_9;

#line 689 "parse_tree.prog_rename.c"
    {
#line 691 "parse_tree.prog_rename.c"
      parse_tree__prog_rename__TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 693 "parse_tree.prog_rename.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_rename__TypeInfo_13_13, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 695 "parse_tree.prog_rename.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_rename__TypeInfo_13_13, 1) = ((MR_Box) (parse_tree__prog_rename__TypeInfo_for_V_11));
#line 697 "parse_tree.prog_rename.c"
    }
#line 127 "prog_rename.m"
    {
#line 127 "prog_rename.m"
      mercury__set__to_sorted_list_2_p_0(parse_tree__prog_rename__TypeInfo_13_13, (MR_Word) parse_tree__prog_rename__Vars0_7, &parse_tree__prog_rename__conv0_VarsList0_9);
    }
#line 127 "prog_rename.m"
    parse_tree__prog_rename__VarsList0_9 = (MR_Word) parse_tree__prog_rename__conv0_VarsList0_9;
#line 128 "prog_rename.m"
    {
#line 128 "prog_rename.m"
      parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_95_108_105_115_116_95_95_91_50_93_95_49_4_p_1(parse_tree__prog_rename__TypeInfo_for_V_11, parse_tree__prog_rename__Renaming_6, parse_tree__prog_rename__VarsList0_9, &parse_tree__prog_rename__VarsList_10);
    }
#line 129 "prog_rename.m"
    {
#line 129 "prog_rename.m"
      mercury__set__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_rename__TypeInfo_for_V_11, parse_tree__prog_rename__TypeInfo_13_13, parse_tree__prog_rename__VarsList_10, parse_tree__prog_rename__Vars_8);
#line 129 "prog_rename.m"
      return;
    }
#line 126 "prog_rename.m"
  }
#line 52 "prog_rename.m"
}

#line 51 "prog_rename.m"
void MR_CALL 
parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_105_110_95_118_97_114_95_115_101_116_95_95_91_50_93_95_48_4_p_0(
#line 51 "prog_rename.m"
  MR_Word parse_tree__prog_rename__TypeInfo_for_V_11,
#line 51 "prog_rename.m"
  MR_Word parse_tree__prog_rename__Renaming_6,
#line 51 "prog_rename.m"
  MR_Word parse_tree__prog_rename__Vars0_7,
#line 51 "prog_rename.m"
  MR_Word * parse_tree__prog_rename__Vars_8)
#line 51 "prog_rename.m"
{
#line 126 "prog_rename.m"
  {
#line 126 "prog_rename.m"
    MR_bool parse_tree__prog_rename__succeeded;
#line 126 "prog_rename.m"
    MR_Word parse_tree__prog_rename__TypeInfo_13_13;
#line 126 "prog_rename.m"
    MR_Word parse_tree__prog_rename__VarsList0_9;
#line 126 "prog_rename.m"
    MR_Word parse_tree__prog_rename__VarsList_10;
#line 127 "prog_rename.m"
    MR_Word parse_tree__prog_rename__conv0_VarsList0_9;

#line 749 "parse_tree.prog_rename.c"
    {
#line 751 "parse_tree.prog_rename.c"
      parse_tree__prog_rename__TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 753 "parse_tree.prog_rename.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_rename__TypeInfo_13_13, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 755 "parse_tree.prog_rename.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_rename__TypeInfo_13_13, 1) = ((MR_Box) (parse_tree__prog_rename__TypeInfo_for_V_11));
#line 757 "parse_tree.prog_rename.c"
    }
#line 127 "prog_rename.m"
    {
#line 127 "prog_rename.m"
      mercury__set__to_sorted_list_2_p_0(parse_tree__prog_rename__TypeInfo_13_13, (MR_Word) parse_tree__prog_rename__Vars0_7, &parse_tree__prog_rename__conv0_VarsList0_9);
    }
#line 127 "prog_rename.m"
    parse_tree__prog_rename__VarsList0_9 = (MR_Word) parse_tree__prog_rename__conv0_VarsList0_9;
#line 128 "prog_rename.m"
    {
#line 128 "prog_rename.m"
      parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_95_108_105_115_116_95_95_91_50_93_95_48_4_p_0(parse_tree__prog_rename__TypeInfo_for_V_11, parse_tree__prog_rename__Renaming_6, parse_tree__prog_rename__VarsList0_9, &parse_tree__prog_rename__VarsList_10);
    }
#line 129 "prog_rename.m"
    {
#line 129 "prog_rename.m"
      mercury__set__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_rename__TypeInfo_for_V_11, parse_tree__prog_rename__TypeInfo_13_13, parse_tree__prog_rename__VarsList_10, parse_tree__prog_rename__Vars_8);
#line 129 "prog_rename.m"
      return;
    }
#line 126 "prog_rename.m"
  }
#line 51 "prog_rename.m"
}

#line 46 "prog_rename.m"
void MR_CALL 
parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_105_110_95_116_101_114_109_95_108_105_115_116_95_95_91_50_93_95_49_4_p_1(
#line 46 "prog_rename.m"
  MR_Word parse_tree__prog_rename__TypeInfo_for_V_13,
#line 46 "prog_rename.m"
  MR_Word parse_tree__prog_rename__HeadVar__2_2,
#line 46 "prog_rename.m"
  MR_Word parse_tree__prog_rename__HeadVar__3_3,
#line 46 "prog_rename.m"
  MR_Word * parse_tree__prog_rename__HeadVar__4_4)
#line 46 "prog_rename.m"
{
#line 121 "prog_rename.m"
  {
#line 121 "prog_rename.m"
    MR_bool parse_tree__prog_rename__succeeded;

#line 121 "prog_rename.m"
    if ((parse_tree__prog_rename__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 121 "prog_rename.m"
      *parse_tree__prog_rename__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 121 "prog_rename.m"
    else
#line 122 "prog_rename.m"
      {
#line 122 "prog_rename.m"
        MR_Word parse_tree__prog_rename__Term0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_rename__HeadVar__3_3, (MR_Integer) 0)));
#line 122 "prog_rename.m"
        MR_Word parse_tree__prog_rename__Terms0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_rename__HeadVar__3_3, (MR_Integer) 1)));
#line 122 "prog_rename.m"
        MR_Word parse_tree__prog_rename__Term_11;
#line 122 "prog_rename.m"
        MR_Word parse_tree__prog_rename__Terms_12;

#line 123 "prog_rename.m"
        {
#line 123 "prog_rename.m"
          parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_105_110_95_116_101_114_109_95_95_91_50_93_95_49_4_p_1(parse_tree__prog_rename__TypeInfo_for_V_13, parse_tree__prog_rename__HeadVar__2_2, parse_tree__prog_rename__Term0_9, &parse_tree__prog_rename__Term_11);
        }
#line 124 "prog_rename.m"
        {
#line 124 "prog_rename.m"
          parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_105_110_95_116_101_114_109_95_108_105_115_116_95_95_91_50_93_95_49_4_p_1(parse_tree__prog_rename__TypeInfo_for_V_13, parse_tree__prog_rename__HeadVar__2_2, parse_tree__prog_rename__Terms0_10, &parse_tree__prog_rename__Terms_12);
        }
#line 122 "prog_rename.m"
        {
#line 122 "prog_rename.m"
          MR_Word base;
#line 122 "prog_rename.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 122 "prog_rename.m"
          *parse_tree__prog_rename__HeadVar__4_4 = base;
#line 122 "prog_rename.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_rename__Term_11));
#line 122 "prog_rename.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_rename__Terms_12));
#line 122 "prog_rename.m"
        }
#line 122 "prog_rename.m"
      }
#line 121 "prog_rename.m"
  }
#line 46 "prog_rename.m"
}

#line 45 "prog_rename.m"
void MR_CALL 
parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_105_110_95_116_101_114_109_95_108_105_115_116_95_95_91_50_93_95_48_4_p_0(
#line 45 "prog_rename.m"
  MR_Word parse_tree__prog_rename__TypeInfo_for_V_13,
#line 45 "prog_rename.m"
  MR_Word parse_tree__prog_rename__HeadVar__2_2,
#line 45 "prog_rename.m"
  MR_Word parse_tree__prog_rename__HeadVar__3_3,
#line 45 "prog_rename.m"
  MR_Word * parse_tree__prog_rename__HeadVar__4_4)
#line 45 "prog_rename.m"
{
#line 121 "prog_rename.m"
  {
#line 121 "prog_rename.m"
    MR_bool parse_tree__prog_rename__succeeded;

#line 121 "prog_rename.m"
    if ((parse_tree__prog_rename__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 121 "prog_rename.m"
      *parse_tree__prog_rename__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 121 "prog_rename.m"
    else
#line 122 "prog_rename.m"
      {
#line 122 "prog_rename.m"
        MR_Word parse_tree__prog_rename__Term0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_rename__HeadVar__3_3, (MR_Integer) 0)));
#line 122 "prog_rename.m"
        MR_Word parse_tree__prog_rename__Terms0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_rename__HeadVar__3_3, (MR_Integer) 1)));
#line 122 "prog_rename.m"
        MR_Word parse_tree__prog_rename__Term_11;
#line 122 "prog_rename.m"
        MR_Word parse_tree__prog_rename__Terms_12;

#line 123 "prog_rename.m"
        {
#line 123 "prog_rename.m"
          parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_105_110_95_116_101_114_109_95_95_91_50_93_95_48_4_p_0(parse_tree__prog_rename__TypeInfo_for_V_13, parse_tree__prog_rename__HeadVar__2_2, parse_tree__prog_rename__Term0_9, &parse_tree__prog_rename__Term_11);
        }
#line 124 "prog_rename.m"
        {
#line 124 "prog_rename.m"
          parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_105_110_95_116_101_114_109_95_108_105_115_116_95_95_91_50_93_95_48_4_p_0(parse_tree__prog_rename__TypeInfo_for_V_13, parse_tree__prog_rename__HeadVar__2_2, parse_tree__prog_rename__Terms0_10, &parse_tree__prog_rename__Terms_12);
        }
#line 122 "prog_rename.m"
        {
#line 122 "prog_rename.m"
          MR_Word base;
#line 122 "prog_rename.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 122 "prog_rename.m"
          *parse_tree__prog_rename__HeadVar__4_4 = base;
#line 122 "prog_rename.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_rename__Term_11));
#line 122 "prog_rename.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_rename__Terms_12));
#line 122 "prog_rename.m"
        }
#line 122 "prog_rename.m"
      }
#line 121 "prog_rename.m"
  }
#line 45 "prog_rename.m"
}

#line 40 "prog_rename.m"
void MR_CALL 
parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_105_110_95_116_101_114_109_95_95_91_50_93_95_49_4_p_1(
#line 40 "prog_rename.m"
  MR_Word parse_tree__prog_rename__TypeInfo_for_V_40,
#line 40 "prog_rename.m"
  MR_Word parse_tree__prog_rename__Renaming_6,
#line 40 "prog_rename.m"
  MR_Word parse_tree__prog_rename__Term0_7,
#line 40 "prog_rename.m"
  MR_Word * parse_tree__prog_rename__Term_8)
#line 40 "prog_rename.m"
{
#line 85 "prog_rename.m"
  {
#line 85 "prog_rename.m"
    MR_bool parse_tree__prog_rename__succeeded;

#line 85 "prog_rename.m"
    if (((MR_tag((MR_Word) parse_tree__prog_rename__Term0_7)) == (MR_mktag((MR_Integer) 0))))
#line 86 "prog_rename.m"
      {
#line 86 "prog_rename.m"
        MR_Word parse_tree__prog_rename__ConsId_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_rename__Term0_7, (MR_Integer) 0)));
#line 86 "prog_rename.m"
        MR_Word parse_tree__prog_rename__Args0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_rename__Term0_7, (MR_Integer) 1)));
#line 86 "prog_rename.m"
        MR_Word parse_tree__prog_rename__Args_14;
#line 86 "prog_rename.m"
        MR_Word parse_tree__prog_rename__Context_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_rename__Term0_7, (MR_Integer) 2)));

#line 100 "prog_rename.m"
        if ((parse_tree__prog_rename__Args0_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 98 "prog_rename.m"
          parse_tree__prog_rename__Args_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 100 "prog_rename.m"
        else
#line 100 "prog_rename.m"
          {
#line 100 "prog_rename.m"
            MR_Word parse_tree__prog_rename__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_rename__Args0_13, (MR_Integer) 1)));
#line 100 "prog_rename.m"
            MR_Word parse_tree__prog_rename__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_rename__Args0_13, (MR_Integer) 0)));

#line 100 "prog_rename.m"
            if ((parse_tree__prog_rename__V_41_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 101 "prog_rename.m"
              {
#line 101 "prog_rename.m"
                MR_Word parse_tree__prog_rename__Arg1Term_16;

#line 102 "prog_rename.m"
                {
#line 102 "prog_rename.m"
                  parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_105_110_95_116_101_114_109_95_95_91_50_93_95_49_4_p_1(parse_tree__prog_rename__TypeInfo_for_V_40, parse_tree__prog_rename__Renaming_6, parse_tree__prog_rename__V_42_42, &parse_tree__prog_rename__Arg1Term_16);
                }
#line 103 "prog_rename.m"
                {
#line 103 "prog_rename.m"
                  parse_tree__prog_rename__Args_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 103 "prog_rename.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_rename__Args_14, 0) = ((MR_Box) (parse_tree__prog_rename__Arg1Term_16));
#line 103 "prog_rename.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_rename__Args_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 103 "prog_rename.m"
                }
#line 101 "prog_rename.m"
              }
#line 100 "prog_rename.m"
            else
#line 100 "prog_rename.m"
              {
#line 100 "prog_rename.m"
                MR_Word parse_tree__prog_rename__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_rename__V_41_41, (MR_Integer) 1)));
#line 100 "prog_rename.m"
                MR_Word parse_tree__prog_rename__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_rename__V_41_41, (MR_Integer) 0)));

#line 100 "prog_rename.m"
                if ((parse_tree__prog_rename__V_43_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 105 "prog_rename.m"
                  {
#line 105 "prog_rename.m"
                    MR_Word parse_tree__prog_rename__Arg2Term_18;
#line 105 "prog_rename.m"
                    MR_Word parse_tree__prog_rename__V_29_29;
#line 105 "prog_rename.m"
                    MR_Word parse_tree__prog_rename__Arg1Term_34;

#line 106 "prog_rename.m"
                    {
#line 106 "prog_rename.m"
                      parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_105_110_95_116_101_114_109_95_95_91_50_93_95_49_4_p_1(parse_tree__prog_rename__TypeInfo_for_V_40, parse_tree__prog_rename__Renaming_6, parse_tree__prog_rename__V_42_42, &parse_tree__prog_rename__Arg1Term_34);
                    }
#line 107 "prog_rename.m"
                    {
#line 107 "prog_rename.m"
                      parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_105_110_95_116_101_114_109_95_95_91_50_93_95_49_4_p_1(parse_tree__prog_rename__TypeInfo_for_V_40, parse_tree__prog_rename__Renaming_6, parse_tree__prog_rename__V_44_44, &parse_tree__prog_rename__Arg2Term_18);
                    }
#line 108 "prog_rename.m"
                    {
#line 108 "prog_rename.m"
                      parse_tree__prog_rename__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 108 "prog_rename.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_rename__V_29_29, 0) = ((MR_Box) (parse_tree__prog_rename__Arg2Term_18));
#line 108 "prog_rename.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_rename__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 108 "prog_rename.m"
                    }
#line 108 "prog_rename.m"
                    {
#line 108 "prog_rename.m"
                      parse_tree__prog_rename__Args_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 108 "prog_rename.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_rename__Args_14, 0) = ((MR_Box) (parse_tree__prog_rename__Arg1Term_34));
#line 108 "prog_rename.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_rename__Args_14, 1) = ((MR_Box) (parse_tree__prog_rename__V_29_29));
#line 108 "prog_rename.m"
                    }
#line 105 "prog_rename.m"
                  }
#line 100 "prog_rename.m"
                else
#line 110 "prog_rename.m"
                  {
#line 110 "prog_rename.m"
                    MR_Word parse_tree__prog_rename__Arg3Term0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_rename__V_43_43, (MR_Integer) 0)));
#line 110 "prog_rename.m"
                    MR_Word parse_tree__prog_rename__OtherArgTerms0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_rename__V_43_43, (MR_Integer) 1)));
#line 110 "prog_rename.m"
                    MR_Word parse_tree__prog_rename__Arg3Term_21;
#line 110 "prog_rename.m"
                    MR_Word parse_tree__prog_rename__OtherArgTerms_22;
#line 110 "prog_rename.m"
                    MR_Word parse_tree__prog_rename__V_25_25;
#line 110 "prog_rename.m"
                    MR_Word parse_tree__prog_rename__V_26_26;
#line 110 "prog_rename.m"
                    MR_Word parse_tree__prog_rename__Arg1Term_36;
#line 110 "prog_rename.m"
                    MR_Word parse_tree__prog_rename__Arg2Term_38;

#line 111 "prog_rename.m"
                    {
#line 111 "prog_rename.m"
                      parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_105_110_95_116_101_114_109_95_95_91_50_93_95_49_4_p_1(parse_tree__prog_rename__TypeInfo_for_V_40, parse_tree__prog_rename__Renaming_6, parse_tree__prog_rename__V_42_42, &parse_tree__prog_rename__Arg1Term_36);
                    }
#line 112 "prog_rename.m"
                    {
#line 112 "prog_rename.m"
                      parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_105_110_95_116_101_114_109_95_95_91_50_93_95_49_4_p_1(parse_tree__prog_rename__TypeInfo_for_V_40, parse_tree__prog_rename__Renaming_6, parse_tree__prog_rename__V_44_44, &parse_tree__prog_rename__Arg2Term_38);
                    }
#line 113 "prog_rename.m"
                    {
#line 113 "prog_rename.m"
                      parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_105_110_95_116_101_114_109_95_95_91_50_93_95_49_4_p_1(parse_tree__prog_rename__TypeInfo_for_V_40, parse_tree__prog_rename__Renaming_6, parse_tree__prog_rename__Arg3Term0_19, &parse_tree__prog_rename__Arg3Term_21);
                    }
#line 114 "prog_rename.m"
                    {
#line 114 "prog_rename.m"
                      parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_105_110_95_116_101_114_109_95_108_105_115_116_95_95_91_50_93_95_49_4_p_1(parse_tree__prog_rename__TypeInfo_for_V_40, parse_tree__prog_rename__Renaming_6, parse_tree__prog_rename__OtherArgTerms0_20, &parse_tree__prog_rename__OtherArgTerms_22);
                    }
#line 116 "prog_rename.m"
                    {
#line 116 "prog_rename.m"
                      parse_tree__prog_rename__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 116 "prog_rename.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_rename__V_26_26, 0) = ((MR_Box) (parse_tree__prog_rename__Arg3Term_21));
#line 116 "prog_rename.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_rename__V_26_26, 1) = ((MR_Box) (parse_tree__prog_rename__OtherArgTerms_22));
#line 116 "prog_rename.m"
                    }
#line 116 "prog_rename.m"
                    {
#line 116 "prog_rename.m"
                      parse_tree__prog_rename__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 116 "prog_rename.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_rename__V_25_25, 0) = ((MR_Box) (parse_tree__prog_rename__Arg2Term_38));
#line 116 "prog_rename.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_rename__V_25_25, 1) = ((MR_Box) (parse_tree__prog_rename__V_26_26));
#line 116 "prog_rename.m"
                    }
#line 116 "prog_rename.m"
                    {
#line 116 "prog_rename.m"
                      parse_tree__prog_rename__Args_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 116 "prog_rename.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_rename__Args_14, 0) = ((MR_Box) (parse_tree__prog_rename__Arg1Term_36));
#line 116 "prog_rename.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_rename__Args_14, 1) = ((MR_Box) (parse_tree__prog_rename__V_25_25));
#line 116 "prog_rename.m"
                    }
#line 110 "prog_rename.m"
                  }
#line 100 "prog_rename.m"
              }
#line 100 "prog_rename.m"
          }
#line 118 "prog_rename.m"
        {
#line 118 "prog_rename.m"
          MR_Word base;
#line 118 "prog_rename.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 118 "prog_rename.m"
          *parse_tree__prog_rename__Term_8 = base;
#line 118 "prog_rename.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_rename__ConsId_12));
#line 118 "prog_rename.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_rename__Args_14));
#line 118 "prog_rename.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_rename__Context_39));
#line 118 "prog_rename.m"
        }
#line 86 "prog_rename.m"
      }
#line 85 "prog_rename.m"
    else
#line 82 "prog_rename.m"
      {
#line 82 "prog_rename.m"
        MR_Word parse_tree__prog_rename__Var0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_rename__Term0_7, (MR_Integer) 0)));
#line 82 "prog_rename.m"
        MR_Word parse_tree__prog_rename__Context_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_rename__Term0_7, (MR_Integer) 1)));
#line 82 "prog_rename.m"
        MR_Word parse_tree__prog_rename__Var_11;
#line 144 "prog_rename.m"
        MR_Word parse_tree__prog_rename__VarPrime_49;
#line 142 "prog_rename.m"
        MR_Word parse_tree__prog_rename__TypeInfo_20_59;
#line 142 "prog_rename.m"
        MR_Box parse_tree__prog_rename__conv0_VarPrime_49;

#line 1147 "parse_tree.prog_rename.c"
        {
#line 1149 "parse_tree.prog_rename.c"
          parse_tree__prog_rename__TypeInfo_20_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1151 "parse_tree.prog_rename.c"
          MR_hl_field(MR_mktag(0), parse_tree__prog_rename__TypeInfo_20_59, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 1153 "parse_tree.prog_rename.c"
          MR_hl_field(MR_mktag(0), parse_tree__prog_rename__TypeInfo_20_59, 1) = ((MR_Box) (parse_tree__prog_rename__TypeInfo_for_V_40));
#line 1155 "parse_tree.prog_rename.c"
        }
#line 142 "prog_rename.m"
        {
#line 142 "prog_rename.m"
          parse_tree__prog_rename__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(parse_tree__prog_rename__TypeInfo_for_V_40, parse_tree__prog_rename__TypeInfo_20_59, parse_tree__prog_rename__TypeInfo_20_59, (MR_Word) parse_tree__prog_rename__Renaming_6, parse_tree__prog_rename__Var0_9, &parse_tree__prog_rename__conv0_VarPrime_49);
        }
#line 142 "prog_rename.m"
        if (parse_tree__prog_rename__succeeded)
#line 142 "prog_rename.m"
          {
#line 142 "prog_rename.m"
            parse_tree__prog_rename__VarPrime_49 = ((MR_Word) parse_tree__prog_rename__conv0_VarPrime_49);
#line 142 "prog_rename.m"
            parse_tree__prog_rename__succeeded = MR_TRUE;
#line 142 "prog_rename.m"
          }
#line 144 "prog_rename.m"
        if (parse_tree__prog_rename__succeeded)
#line 143 "prog_rename.m"
          parse_tree__prog_rename__Var_11 = parse_tree__prog_rename__VarPrime_49;
#line 144 "prog_rename.m"
        else
#line 147 "prog_rename.m"
          parse_tree__prog_rename__Var_11 = parse_tree__prog_rename__Var0_9;
#line 84 "prog_rename.m"
        {
#line 84 "prog_rename.m"
          MR_Word base;
#line 84 "prog_rename.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 84 "prog_rename.m"
          *parse_tree__prog_rename__Term_8 = base;
#line 84 "prog_rename.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_rename__Var_11));
#line 84 "prog_rename.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_rename__Context_10));
#line 84 "prog_rename.m"
        }
#line 82 "prog_rename.m"
      }
#line 85 "prog_rename.m"
  }
#line 40 "prog_rename.m"
}

#line 39 "prog_rename.m"
void MR_CALL 
parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_105_110_95_116_101_114_109_95_95_91_50_93_95_48_4_p_0(
#line 39 "prog_rename.m"
  MR_Word parse_tree__prog_rename__TypeInfo_for_V_40,
#line 39 "prog_rename.m"
  MR_Word parse_tree__prog_rename__Renaming_6,
#line 39 "prog_rename.m"
  MR_Word parse_tree__prog_rename__Term0_7,
#line 39 "prog_rename.m"
  MR_Word * parse_tree__prog_rename__Term_8)
#line 39 "prog_rename.m"
{
#line 85 "prog_rename.m"
  {
#line 85 "prog_rename.m"
    MR_bool parse_tree__prog_rename__succeeded;

#line 85 "prog_rename.m"
    if (((MR_tag((MR_Word) parse_tree__prog_rename__Term0_7)) == (MR_mktag((MR_Integer) 0))))
#line 86 "prog_rename.m"
      {
#line 86 "prog_rename.m"
        MR_Word parse_tree__prog_rename__ConsId_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_rename__Term0_7, (MR_Integer) 0)));
#line 86 "prog_rename.m"
        MR_Word parse_tree__prog_rename__Args0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_rename__Term0_7, (MR_Integer) 1)));
#line 86 "prog_rename.m"
        MR_Word parse_tree__prog_rename__Args_14;
#line 86 "prog_rename.m"
        MR_Word parse_tree__prog_rename__Context_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_rename__Term0_7, (MR_Integer) 2)));

#line 100 "prog_rename.m"
        if ((parse_tree__prog_rename__Args0_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 98 "prog_rename.m"
          parse_tree__prog_rename__Args_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 100 "prog_rename.m"
        else
#line 100 "prog_rename.m"
          {
#line 100 "prog_rename.m"
            MR_Word parse_tree__prog_rename__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_rename__Args0_13, (MR_Integer) 1)));
#line 100 "prog_rename.m"
            MR_Word parse_tree__prog_rename__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_rename__Args0_13, (MR_Integer) 0)));

#line 100 "prog_rename.m"
            if ((parse_tree__prog_rename__V_41_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 101 "prog_rename.m"
              {
#line 101 "prog_rename.m"
                MR_Word parse_tree__prog_rename__Arg1Term_16;

#line 102 "prog_rename.m"
                {
#line 102 "prog_rename.m"
                  parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_105_110_95_116_101_114_109_95_95_91_50_93_95_48_4_p_0(parse_tree__prog_rename__TypeInfo_for_V_40, parse_tree__prog_rename__Renaming_6, parse_tree__prog_rename__V_42_42, &parse_tree__prog_rename__Arg1Term_16);
                }
#line 103 "prog_rename.m"
                {
#line 103 "prog_rename.m"
                  parse_tree__prog_rename__Args_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 103 "prog_rename.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_rename__Args_14, 0) = ((MR_Box) (parse_tree__prog_rename__Arg1Term_16));
#line 103 "prog_rename.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_rename__Args_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 103 "prog_rename.m"
                }
#line 101 "prog_rename.m"
              }
#line 100 "prog_rename.m"
            else
#line 100 "prog_rename.m"
              {
#line 100 "prog_rename.m"
                MR_Word parse_tree__prog_rename__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_rename__V_41_41, (MR_Integer) 1)));
#line 100 "prog_rename.m"
                MR_Word parse_tree__prog_rename__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_rename__V_41_41, (MR_Integer) 0)));

#line 100 "prog_rename.m"
                if ((parse_tree__prog_rename__V_43_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 105 "prog_rename.m"
                  {
#line 105 "prog_rename.m"
                    MR_Word parse_tree__prog_rename__Arg2Term_18;
#line 105 "prog_rename.m"
                    MR_Word parse_tree__prog_rename__V_29_29;
#line 105 "prog_rename.m"
                    MR_Word parse_tree__prog_rename__Arg1Term_34;

#line 106 "prog_rename.m"
                    {
#line 106 "prog_rename.m"
                      parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_105_110_95_116_101_114_109_95_95_91_50_93_95_48_4_p_0(parse_tree__prog_rename__TypeInfo_for_V_40, parse_tree__prog_rename__Renaming_6, parse_tree__prog_rename__V_42_42, &parse_tree__prog_rename__Arg1Term_34);
                    }
#line 107 "prog_rename.m"
                    {
#line 107 "prog_rename.m"
                      parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_105_110_95_116_101_114_109_95_95_91_50_93_95_48_4_p_0(parse_tree__prog_rename__TypeInfo_for_V_40, parse_tree__prog_rename__Renaming_6, parse_tree__prog_rename__V_44_44, &parse_tree__prog_rename__Arg2Term_18);
                    }
#line 108 "prog_rename.m"
                    {
#line 108 "prog_rename.m"
                      parse_tree__prog_rename__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 108 "prog_rename.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_rename__V_29_29, 0) = ((MR_Box) (parse_tree__prog_rename__Arg2Term_18));
#line 108 "prog_rename.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_rename__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 108 "prog_rename.m"
                    }
#line 108 "prog_rename.m"
                    {
#line 108 "prog_rename.m"
                      parse_tree__prog_rename__Args_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 108 "prog_rename.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_rename__Args_14, 0) = ((MR_Box) (parse_tree__prog_rename__Arg1Term_34));
#line 108 "prog_rename.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_rename__Args_14, 1) = ((MR_Box) (parse_tree__prog_rename__V_29_29));
#line 108 "prog_rename.m"
                    }
#line 105 "prog_rename.m"
                  }
#line 100 "prog_rename.m"
                else
#line 110 "prog_rename.m"
                  {
#line 110 "prog_rename.m"
                    MR_Word parse_tree__prog_rename__Arg3Term0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_rename__V_43_43, (MR_Integer) 0)));
#line 110 "prog_rename.m"
                    MR_Word parse_tree__prog_rename__OtherArgTerms0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_rename__V_43_43, (MR_Integer) 1)));
#line 110 "prog_rename.m"
                    MR_Word parse_tree__prog_rename__Arg3Term_21;
#line 110 "prog_rename.m"
                    MR_Word parse_tree__prog_rename__OtherArgTerms_22;
#line 110 "prog_rename.m"
                    MR_Word parse_tree__prog_rename__V_25_25;
#line 110 "prog_rename.m"
                    MR_Word parse_tree__prog_rename__V_26_26;
#line 110 "prog_rename.m"
                    MR_Word parse_tree__prog_rename__Arg1Term_36;
#line 110 "prog_rename.m"
                    MR_Word parse_tree__prog_rename__Arg2Term_38;

#line 111 "prog_rename.m"
                    {
#line 111 "prog_rename.m"
                      parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_105_110_95_116_101_114_109_95_95_91_50_93_95_48_4_p_0(parse_tree__prog_rename__TypeInfo_for_V_40, parse_tree__prog_rename__Renaming_6, parse_tree__prog_rename__V_42_42, &parse_tree__prog_rename__Arg1Term_36);
                    }
#line 112 "prog_rename.m"
                    {
#line 112 "prog_rename.m"
                      parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_105_110_95_116_101_114_109_95_95_91_50_93_95_48_4_p_0(parse_tree__prog_rename__TypeInfo_for_V_40, parse_tree__prog_rename__Renaming_6, parse_tree__prog_rename__V_44_44, &parse_tree__prog_rename__Arg2Term_38);
                    }
#line 113 "prog_rename.m"
                    {
#line 113 "prog_rename.m"
                      parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_105_110_95_116_101_114_109_95_95_91_50_93_95_48_4_p_0(parse_tree__prog_rename__TypeInfo_for_V_40, parse_tree__prog_rename__Renaming_6, parse_tree__prog_rename__Arg3Term0_19, &parse_tree__prog_rename__Arg3Term_21);
                    }
#line 114 "prog_rename.m"
                    {
#line 114 "prog_rename.m"
                      parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_105_110_95_116_101_114_109_95_108_105_115_116_95_95_91_50_93_95_48_4_p_0(parse_tree__prog_rename__TypeInfo_for_V_40, parse_tree__prog_rename__Renaming_6, parse_tree__prog_rename__OtherArgTerms0_20, &parse_tree__prog_rename__OtherArgTerms_22);
                    }
#line 116 "prog_rename.m"
                    {
#line 116 "prog_rename.m"
                      parse_tree__prog_rename__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 116 "prog_rename.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_rename__V_26_26, 0) = ((MR_Box) (parse_tree__prog_rename__Arg3Term_21));
#line 116 "prog_rename.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_rename__V_26_26, 1) = ((MR_Box) (parse_tree__prog_rename__OtherArgTerms_22));
#line 116 "prog_rename.m"
                    }
#line 116 "prog_rename.m"
                    {
#line 116 "prog_rename.m"
                      parse_tree__prog_rename__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 116 "prog_rename.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_rename__V_25_25, 0) = ((MR_Box) (parse_tree__prog_rename__Arg2Term_38));
#line 116 "prog_rename.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_rename__V_25_25, 1) = ((MR_Box) (parse_tree__prog_rename__V_26_26));
#line 116 "prog_rename.m"
                    }
#line 116 "prog_rename.m"
                    {
#line 116 "prog_rename.m"
                      parse_tree__prog_rename__Args_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 116 "prog_rename.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_rename__Args_14, 0) = ((MR_Box) (parse_tree__prog_rename__Arg1Term_36));
#line 116 "prog_rename.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_rename__Args_14, 1) = ((MR_Box) (parse_tree__prog_rename__V_25_25));
#line 116 "prog_rename.m"
                    }
#line 110 "prog_rename.m"
                  }
#line 100 "prog_rename.m"
              }
#line 100 "prog_rename.m"
          }
#line 118 "prog_rename.m"
        {
#line 118 "prog_rename.m"
          MR_Word base;
#line 118 "prog_rename.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 118 "prog_rename.m"
          *parse_tree__prog_rename__Term_8 = base;
#line 118 "prog_rename.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_rename__ConsId_12));
#line 118 "prog_rename.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_rename__Args_14));
#line 118 "prog_rename.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_rename__Context_39));
#line 118 "prog_rename.m"
        }
#line 86 "prog_rename.m"
      }
#line 85 "prog_rename.m"
    else
#line 82 "prog_rename.m"
      {
#line 82 "prog_rename.m"
        MR_Word parse_tree__prog_rename__Var0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_rename__Term0_7, (MR_Integer) 0)));
#line 82 "prog_rename.m"
        MR_Word parse_tree__prog_rename__Context_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_rename__Term0_7, (MR_Integer) 1)));
#line 82 "prog_rename.m"
        MR_Word parse_tree__prog_rename__Var_11;

#line 83 "prog_rename.m"
        {
#line 83 "prog_rename.m"
          parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_95_95_91_50_93_95_48_4_p_0(parse_tree__prog_rename__TypeInfo_for_V_40, parse_tree__prog_rename__Renaming_6, parse_tree__prog_rename__Var0_9, &parse_tree__prog_rename__Var_11);
        }
#line 84 "prog_rename.m"
        {
#line 84 "prog_rename.m"
          MR_Word base;
#line 84 "prog_rename.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 84 "prog_rename.m"
          *parse_tree__prog_rename__Term_8 = base;
#line 84 "prog_rename.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_rename__Var_11));
#line 84 "prog_rename.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_rename__Context_10));
#line 84 "prog_rename.m"
        }
#line 82 "prog_rename.m"
      }
#line 85 "prog_rename.m"
  }
#line 39 "prog_rename.m"
}

#line 28 "prog_rename.m"
void MR_CALL 
parse_tree__prog_rename____Compare____must_rename_0_0(
#line 28 "prog_rename.m"
  MR_Word * parse_tree__prog_rename__HeadVar__1_1,
#line 28 "prog_rename.m"
  MR_Word parse_tree__prog_rename__HeadVar__2_2,
#line 28 "prog_rename.m"
  MR_Word parse_tree__prog_rename__HeadVar__3_3)
#line 28 "prog_rename.m"
{
#line 28 "prog_rename.m"
  {
#line 28 "prog_rename.m"
    MR_bool parse_tree__prog_rename__succeeded;
#line 28 "prog_rename.m"
    MR_Integer parse_tree__prog_rename__Cast_HeadVar1_4 = (MR_Integer) parse_tree__prog_rename__HeadVar__2_2;
#line 28 "prog_rename.m"
    MR_Integer parse_tree__prog_rename__Cast_HeadVar2_5 = (MR_Integer) parse_tree__prog_rename__HeadVar__3_3;

#line 28 "prog_rename.m"
    {
#line 28 "prog_rename.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_rename__HeadVar__1_1, parse_tree__prog_rename__Cast_HeadVar1_4, parse_tree__prog_rename__Cast_HeadVar2_5);
#line 28 "prog_rename.m"
      return;
    }
#line 28 "prog_rename.m"
  }
#line 28 "prog_rename.m"
}

#line 28 "prog_rename.m"
MR_bool MR_CALL 
parse_tree__prog_rename____Unify____must_rename_0_0(
#line 28 "prog_rename.m"
  MR_Word parse_tree__prog_rename__HeadVar__2_1,
#line 28 "prog_rename.m"
  MR_Word parse_tree__prog_rename__HeadVar__2_2)
#line 28 "prog_rename.m"
{
#line 1494 "parse_tree.prog_rename.c"
  {
#line 1496 "parse_tree.prog_rename.c"
    MR_bool parse_tree__prog_rename__succeeded = (parse_tree__prog_rename__HeadVar__2_1 == parse_tree__prog_rename__HeadVar__2_2);

#line 1499 "parse_tree.prog_rename.c"
    return parse_tree__prog_rename__succeeded;
#line 1501 "parse_tree.prog_rename.c"
  }
#line 28 "prog_rename.m"
}

#line 71 "prog_rename.m"
void MR_CALL 
parse_tree__prog_rename__rename_var_4_p_2(
#line 71 "prog_rename.m"
  MR_Word parse_tree__prog_rename__TypeInfo_for_V_18,
#line 71 "prog_rename.m"
  MR_Word parse_tree__prog_rename__Must_5,
#line 71 "prog_rename.m"
  MR_Word parse_tree__prog_rename__Renaming_6,
#line 71 "prog_rename.m"
  MR_Word parse_tree__prog_rename__Var0_7,
#line 71 "prog_rename.m"
  MR_Word * parse_tree__prog_rename__Var_8)
#line 71 "prog_rename.m"
{
#line 144 "prog_rename.m"
  {
#line 144 "prog_rename.m"
    MR_bool parse_tree__prog_rename__succeeded;
#line 144 "prog_rename.m"
    MR_Word parse_tree__prog_rename__VarPrime_9;
#line 142 "prog_rename.m"
    MR_Word parse_tree__prog_rename__TypeInfo_20_20;
#line 142 "prog_rename.m"
    MR_Box parse_tree__prog_rename__conv0_VarPrime_9;

#line 1532 "parse_tree.prog_rename.c"
    {
#line 1534 "parse_tree.prog_rename.c"
      parse_tree__prog_rename__TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1536 "parse_tree.prog_rename.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_rename__TypeInfo_20_20, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 1538 "parse_tree.prog_rename.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_rename__TypeInfo_20_20, 1) = ((MR_Box) (parse_tree__prog_rename__TypeInfo_for_V_18));
#line 1540 "parse_tree.prog_rename.c"
    }
#line 142 "prog_rename.m"
    {
#line 142 "prog_rename.m"
      parse_tree__prog_rename__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(parse_tree__prog_rename__TypeInfo_for_V_18, parse_tree__prog_rename__TypeInfo_20_20, parse_tree__prog_rename__TypeInfo_20_20, (MR_Word) parse_tree__prog_rename__Renaming_6, parse_tree__prog_rename__Var0_7, &parse_tree__prog_rename__conv0_VarPrime_9);
    }
#line 142 "prog_rename.m"
    if (parse_tree__prog_rename__succeeded)
#line 142 "prog_rename.m"
      {
#line 142 "prog_rename.m"
        parse_tree__prog_rename__VarPrime_9 = ((MR_Word) parse_tree__prog_rename__conv0_VarPrime_9);
#line 142 "prog_rename.m"
        parse_tree__prog_rename__succeeded = MR_TRUE;
#line 142 "prog_rename.m"
      }
#line 144 "prog_rename.m"
    if (parse_tree__prog_rename__succeeded)
#line 143 "prog_rename.m"
      *parse_tree__prog_rename__Var_8 = parse_tree__prog_rename__VarPrime_9;
#line 144 "prog_rename.m"
    else
#line 148 "prog_rename.m"
#line 148 "prog_rename.m"
      switch (parse_tree__prog_rename__Must_5) {
#line 148 "prog_rename.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 148 "prog_rename.m"
        case (MR_Integer) 0:
#line 149 "prog_rename.m"
          {
#line 149 "prog_rename.m"
            MR_Integer parse_tree__prog_rename__Var0Int_10;
#line 149 "prog_rename.m"
            MR_String parse_tree__prog_rename__Msg_11;
#line 149 "prog_rename.m"
            MR_String parse_tree__prog_rename__V_21_21;

#line 150 "prog_rename.m"
            {
#line 150 "prog_rename.m"
              mercury__term__var_to_int_2_p_0(parse_tree__prog_rename__TypeInfo_for_V_18, parse_tree__prog_rename__Var0_7, &parse_tree__prog_rename__Var0Int_10);
            }
#line 151 "prog_rename.m"
            {
#line 151 "prog_rename.m"
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &parse_tree__prog_rename_scalar_common_1[0], parse_tree__prog_rename__Var0Int_10, &parse_tree__prog_rename__V_21_21);
            }
#line 151 "prog_rename.m"
            {
#line 151 "prog_rename.m"
              parse_tree__prog_rename__Msg_11 = mercury__string__f_43_43_2_f_0((MR_String) "rename_var: no substitute for var ", parse_tree__prog_rename__V_21_21);
            }
#line 153 "prog_rename.m"
            {
#line 153 "prog_rename.m"
              mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_rename", (MR_String) "predicate \140parse_tree.prog_rename.rename_var\'/4", parse_tree__prog_rename__Msg_11);
#line 153 "prog_rename.m"
              return;
            }
#line 149 "prog_rename.m"
          }
#line 148 "prog_rename.m"
          break;
#line 148 "prog_rename.m"
        case (MR_Integer) 1:
#line 147 "prog_rename.m"
          *parse_tree__prog_rename__Var_8 = parse_tree__prog_rename__Var0_7;
#line 148 "prog_rename.m"
          break;
#line 148 "prog_rename.m"
      }
#line 144 "prog_rename.m"
  }
#line 71 "prog_rename.m"
}

#line 70 "prog_rename.m"
void MR_CALL 
parse_tree__prog_rename__rename_var_4_p_1(
#line 70 "prog_rename.m"
  MR_Word parse_tree__prog_rename__TypeInfo_for_V_18,
#line 70 "prog_rename.m"
  MR_Word parse_tree__prog_rename__Must_5,
#line 70 "prog_rename.m"
  MR_Word parse_tree__prog_rename__Renaming_6,
#line 70 "prog_rename.m"
  MR_Word parse_tree__prog_rename__Var0_7,
#line 70 "prog_rename.m"
  MR_Word * parse_tree__prog_rename__Var_8)
#line 70 "prog_rename.m"
{
#line 144 "prog_rename.m"
  {
#line 144 "prog_rename.m"
    MR_bool parse_tree__prog_rename__succeeded;

#line 144 "prog_rename.m"
    {
#line 144 "prog_rename.m"
      parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_95_95_91_50_93_95_49_4_p_1(parse_tree__prog_rename__TypeInfo_for_V_18, parse_tree__prog_rename__Renaming_6, parse_tree__prog_rename__Var0_7, parse_tree__prog_rename__Var_8);
#line 144 "prog_rename.m"
      return;
    }
#line 144 "prog_rename.m"
  }
#line 70 "prog_rename.m"
}

#line 69 "prog_rename.m"
void MR_CALL 
parse_tree__prog_rename__rename_var_4_p_0(
#line 69 "prog_rename.m"
  MR_Word parse_tree__prog_rename__TypeInfo_for_V_18,
#line 69 "prog_rename.m"
  MR_Word parse_tree__prog_rename__Must_5,
#line 69 "prog_rename.m"
  MR_Word parse_tree__prog_rename__Renaming_6,
#line 69 "prog_rename.m"
  MR_Word parse_tree__prog_rename__Var0_7,
#line 69 "prog_rename.m"
  MR_Word * parse_tree__prog_rename__Var_8)
#line 69 "prog_rename.m"
{
#line 144 "prog_rename.m"
  {
#line 144 "prog_rename.m"
    MR_bool parse_tree__prog_rename__succeeded;

#line 144 "prog_rename.m"
    {
#line 144 "prog_rename.m"
      parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_95_95_91_50_93_95_48_4_p_0(parse_tree__prog_rename__TypeInfo_for_V_18, parse_tree__prog_rename__Renaming_6, parse_tree__prog_rename__Var0_7, parse_tree__prog_rename__Var_8);
#line 144 "prog_rename.m"
      return;
    }
#line 144 "prog_rename.m"
  }
#line 69 "prog_rename.m"
}

#line 65 "prog_rename.m"
void MR_CALL 
parse_tree__prog_rename__rename_var_list_4_p_2(
#line 65 "prog_rename.m"
  MR_Word parse_tree__prog_rename__TypeInfo_for_V_13,
#line 65 "prog_rename.m"
  MR_Word parse_tree__prog_rename__HeadVar__1_1,
#line 65 "prog_rename.m"
  MR_Word parse_tree__prog_rename__HeadVar__2_2,
#line 65 "prog_rename.m"
  MR_Word parse_tree__prog_rename__HeadVar__3_3,
#line 65 "prog_rename.m"
  MR_Word * parse_tree__prog_rename__HeadVar__4_4)
#line 65 "prog_rename.m"
{
#line 136 "prog_rename.m"
  {
#line 136 "prog_rename.m"
    MR_bool parse_tree__prog_rename__succeeded;

#line 136 "prog_rename.m"
    if ((parse_tree__prog_rename__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 136 "prog_rename.m"
      *parse_tree__prog_rename__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 136 "prog_rename.m"
    else
#line 137 "prog_rename.m"
      {
#line 137 "prog_rename.m"
        MR_Word parse_tree__prog_rename__Var0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_rename__HeadVar__3_3, (MR_Integer) 0)));
#line 137 "prog_rename.m"
        MR_Word parse_tree__prog_rename__Vars0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_rename__HeadVar__3_3, (MR_Integer) 1)));
#line 137 "prog_rename.m"
        MR_Word parse_tree__prog_rename__Var_11;
#line 137 "prog_rename.m"
        MR_Word parse_tree__prog_rename__Vars_12;

#line 138 "prog_rename.m"
        {
#line 138 "prog_rename.m"
          parse_tree__prog_rename__rename_var_4_p_2(parse_tree__prog_rename__TypeInfo_for_V_13, parse_tree__prog_rename__HeadVar__1_1, parse_tree__prog_rename__HeadVar__2_2, parse_tree__prog_rename__Var0_9, &parse_tree__prog_rename__Var_11);
        }
#line 139 "prog_rename.m"
        {
#line 139 "prog_rename.m"
          parse_tree__prog_rename__rename_var_list_4_p_2(parse_tree__prog_rename__TypeInfo_for_V_13, parse_tree__prog_rename__HeadVar__1_1, parse_tree__prog_rename__HeadVar__2_2, parse_tree__prog_rename__Vars0_10, &parse_tree__prog_rename__Vars_12);
        }
#line 137 "prog_rename.m"
        {
#line 137 "prog_rename.m"
          MR_Word base;
#line 137 "prog_rename.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 137 "prog_rename.m"
          *parse_tree__prog_rename__HeadVar__4_4 = base;
#line 137 "prog_rename.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_rename__Var_11));
#line 137 "prog_rename.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_rename__Vars_12));
#line 137 "prog_rename.m"
        }
#line 137 "prog_rename.m"
      }
#line 136 "prog_rename.m"
  }
#line 65 "prog_rename.m"
}

#line 64 "prog_rename.m"
void MR_CALL 
parse_tree__prog_rename__rename_var_list_4_p_1(
#line 64 "prog_rename.m"
  MR_Word parse_tree__prog_rename__TypeInfo_for_V_13,
#line 64 "prog_rename.m"
  MR_Word parse_tree__prog_rename__HeadVar__1_1,
#line 64 "prog_rename.m"
  MR_Word parse_tree__prog_rename__HeadVar__2_2,
#line 64 "prog_rename.m"
  MR_Word parse_tree__prog_rename__HeadVar__3_3,
#line 64 "prog_rename.m"
  MR_Word * parse_tree__prog_rename__HeadVar__4_4)
#line 64 "prog_rename.m"
{
#line 136 "prog_rename.m"
  {
#line 136 "prog_rename.m"
    MR_bool parse_tree__prog_rename__succeeded;

#line 136 "prog_rename.m"
    {
#line 136 "prog_rename.m"
      parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_95_108_105_115_116_95_95_91_50_93_95_49_4_p_1(parse_tree__prog_rename__TypeInfo_for_V_13, parse_tree__prog_rename__HeadVar__2_2, parse_tree__prog_rename__HeadVar__3_3, parse_tree__prog_rename__HeadVar__4_4);
#line 136 "prog_rename.m"
      return;
    }
#line 136 "prog_rename.m"
  }
#line 64 "prog_rename.m"
}

#line 63 "prog_rename.m"
void MR_CALL 
parse_tree__prog_rename__rename_var_list_4_p_0(
#line 63 "prog_rename.m"
  MR_Word parse_tree__prog_rename__TypeInfo_for_V_13,
#line 63 "prog_rename.m"
  MR_Word parse_tree__prog_rename__HeadVar__1_1,
#line 63 "prog_rename.m"
  MR_Word parse_tree__prog_rename__HeadVar__2_2,
#line 63 "prog_rename.m"
  MR_Word parse_tree__prog_rename__HeadVar__3_3,
#line 63 "prog_rename.m"
  MR_Word * parse_tree__prog_rename__HeadVar__4_4)
#line 63 "prog_rename.m"
{
#line 136 "prog_rename.m"
  {
#line 136 "prog_rename.m"
    MR_bool parse_tree__prog_rename__succeeded;

#line 136 "prog_rename.m"
    {
#line 136 "prog_rename.m"
      parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_95_108_105_115_116_95_95_91_50_93_95_48_4_p_0(parse_tree__prog_rename__TypeInfo_for_V_13, parse_tree__prog_rename__HeadVar__2_2, parse_tree__prog_rename__HeadVar__3_3, parse_tree__prog_rename__HeadVar__4_4);
#line 136 "prog_rename.m"
      return;
    }
#line 136 "prog_rename.m"
  }
#line 63 "prog_rename.m"
}

#line 59 "prog_rename.m"
void MR_CALL 
parse_tree__prog_rename__rename_vars_in_set_of_var_4_p_2(
#line 59 "prog_rename.m"
  MR_Word parse_tree__prog_rename__TypeInfo_for_V_11,
#line 59 "prog_rename.m"
  MR_Word parse_tree__prog_rename__Must_5,
#line 59 "prog_rename.m"
  MR_Word parse_tree__prog_rename__Renaming_6,
#line 59 "prog_rename.m"
  MR_Word parse_tree__prog_rename__Vars0_7,
#line 59 "prog_rename.m"
  MR_Word * parse_tree__prog_rename__Vars_8)
#line 59 "prog_rename.m"
{
#line 131 "prog_rename.m"
  {
#line 131 "prog_rename.m"
    MR_bool parse_tree__prog_rename__succeeded;
#line 131 "prog_rename.m"
    MR_Word parse_tree__prog_rename__VarsList0_9;
#line 131 "prog_rename.m"
    MR_Word parse_tree__prog_rename__VarsList_10;

#line 132 "prog_rename.m"
    {
#line 132 "prog_rename.m"
      parse_tree__set_of_var__to_sorted_list_2_p_0(parse_tree__prog_rename__TypeInfo_for_V_11, parse_tree__prog_rename__Vars0_7, &parse_tree__prog_rename__VarsList0_9);
    }
#line 133 "prog_rename.m"
    {
#line 133 "prog_rename.m"
      parse_tree__prog_rename__rename_var_list_4_p_2(parse_tree__prog_rename__TypeInfo_for_V_11, parse_tree__prog_rename__Must_5, parse_tree__prog_rename__Renaming_6, parse_tree__prog_rename__VarsList0_9, &parse_tree__prog_rename__VarsList_10);
    }
#line 134 "prog_rename.m"
    {
#line 134 "prog_rename.m"
      parse_tree__set_of_var__list_to_set_2_p_0(parse_tree__prog_rename__TypeInfo_for_V_11, parse_tree__prog_rename__VarsList_10, parse_tree__prog_rename__Vars_8);
#line 134 "prog_rename.m"
      return;
    }
#line 131 "prog_rename.m"
  }
#line 59 "prog_rename.m"
}

#line 58 "prog_rename.m"
void MR_CALL 
parse_tree__prog_rename__rename_vars_in_set_of_var_4_p_1(
#line 58 "prog_rename.m"
  MR_Word parse_tree__prog_rename__TypeInfo_for_V_11,
#line 58 "prog_rename.m"
  MR_Word parse_tree__prog_rename__Must_5,
#line 58 "prog_rename.m"
  MR_Word parse_tree__prog_rename__Renaming_6,
#line 58 "prog_rename.m"
  MR_Word parse_tree__prog_rename__Vars0_7,
#line 58 "prog_rename.m"
  MR_Word * parse_tree__prog_rename__Vars_8)
#line 58 "prog_rename.m"
{
#line 131 "prog_rename.m"
  {
#line 131 "prog_rename.m"
    MR_bool parse_tree__prog_rename__succeeded;

#line 131 "prog_rename.m"
    {
#line 131 "prog_rename.m"
      parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_105_110_95_115_101_116_95_111_102_95_118_97_114_95_95_91_50_93_95_49_4_p_1(parse_tree__prog_rename__TypeInfo_for_V_11, parse_tree__prog_rename__Renaming_6, parse_tree__prog_rename__Vars0_7, parse_tree__prog_rename__Vars_8);
#line 131 "prog_rename.m"
      return;
    }
#line 131 "prog_rename.m"
  }
#line 58 "prog_rename.m"
}

#line 57 "prog_rename.m"
void MR_CALL 
parse_tree__prog_rename__rename_vars_in_set_of_var_4_p_0(
#line 57 "prog_rename.m"
  MR_Word parse_tree__prog_rename__TypeInfo_for_V_11,
#line 57 "prog_rename.m"
  MR_Word parse_tree__prog_rename__Must_5,
#line 57 "prog_rename.m"
  MR_Word parse_tree__prog_rename__Renaming_6,
#line 57 "prog_rename.m"
  MR_Word parse_tree__prog_rename__Vars0_7,
#line 57 "prog_rename.m"
  MR_Word * parse_tree__prog_rename__Vars_8)
#line 57 "prog_rename.m"
{
#line 131 "prog_rename.m"
  {
#line 131 "prog_rename.m"
    MR_bool parse_tree__prog_rename__succeeded;

#line 131 "prog_rename.m"
    {
#line 131 "prog_rename.m"
      parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_105_110_95_115_101_116_95_111_102_95_118_97_114_95_95_91_50_93_95_48_4_p_0(parse_tree__prog_rename__TypeInfo_for_V_11, parse_tree__prog_rename__Renaming_6, parse_tree__prog_rename__Vars0_7, parse_tree__prog_rename__Vars_8);
#line 131 "prog_rename.m"
      return;
    }
#line 131 "prog_rename.m"
  }
#line 57 "prog_rename.m"
}

#line 53 "prog_rename.m"
void MR_CALL 
parse_tree__prog_rename__rename_vars_in_var_set_4_p_2(
#line 53 "prog_rename.m"
  MR_Word parse_tree__prog_rename__TypeInfo_for_V_11,
#line 53 "prog_rename.m"
  MR_Word parse_tree__prog_rename__Must_5,
#line 53 "prog_rename.m"
  MR_Word parse_tree__prog_rename__Renaming_6,
#line 53 "prog_rename.m"
  MR_Word parse_tree__prog_rename__Vars0_7,
#line 53 "prog_rename.m"
  MR_Word * parse_tree__prog_rename__Vars_8)
#line 53 "prog_rename.m"
{
#line 126 "prog_rename.m"
  {
#line 126 "prog_rename.m"
    MR_bool parse_tree__prog_rename__succeeded;
#line 126 "prog_rename.m"
    MR_Word parse_tree__prog_rename__TypeInfo_13_13;
#line 126 "prog_rename.m"
    MR_Word parse_tree__prog_rename__VarsList0_9;
#line 126 "prog_rename.m"
    MR_Word parse_tree__prog_rename__VarsList_10;
#line 127 "prog_rename.m"
    MR_Word parse_tree__prog_rename__conv0_VarsList0_9;

#line 1952 "parse_tree.prog_rename.c"
    {
#line 1954 "parse_tree.prog_rename.c"
      parse_tree__prog_rename__TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1956 "parse_tree.prog_rename.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_rename__TypeInfo_13_13, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 1958 "parse_tree.prog_rename.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_rename__TypeInfo_13_13, 1) = ((MR_Box) (parse_tree__prog_rename__TypeInfo_for_V_11));
#line 1960 "parse_tree.prog_rename.c"
    }
#line 127 "prog_rename.m"
    {
#line 127 "prog_rename.m"
      mercury__set__to_sorted_list_2_p_0(parse_tree__prog_rename__TypeInfo_13_13, (MR_Word) parse_tree__prog_rename__Vars0_7, &parse_tree__prog_rename__conv0_VarsList0_9);
    }
#line 127 "prog_rename.m"
    parse_tree__prog_rename__VarsList0_9 = (MR_Word) parse_tree__prog_rename__conv0_VarsList0_9;
#line 128 "prog_rename.m"
    {
#line 128 "prog_rename.m"
      parse_tree__prog_rename__rename_var_list_4_p_2(parse_tree__prog_rename__TypeInfo_for_V_11, parse_tree__prog_rename__Must_5, parse_tree__prog_rename__Renaming_6, parse_tree__prog_rename__VarsList0_9, &parse_tree__prog_rename__VarsList_10);
    }
#line 129 "prog_rename.m"
    {
#line 129 "prog_rename.m"
      mercury__set__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_rename__TypeInfo_for_V_11, parse_tree__prog_rename__TypeInfo_13_13, parse_tree__prog_rename__VarsList_10, parse_tree__prog_rename__Vars_8);
#line 129 "prog_rename.m"
      return;
    }
#line 126 "prog_rename.m"
  }
#line 53 "prog_rename.m"
}

#line 52 "prog_rename.m"
void MR_CALL 
parse_tree__prog_rename__rename_vars_in_var_set_4_p_1(
#line 52 "prog_rename.m"
  MR_Word parse_tree__prog_rename__TypeInfo_for_V_11,
#line 52 "prog_rename.m"
  MR_Word parse_tree__prog_rename__Must_5,
#line 52 "prog_rename.m"
  MR_Word parse_tree__prog_rename__Renaming_6,
#line 52 "prog_rename.m"
  MR_Word parse_tree__prog_rename__Vars0_7,
#line 52 "prog_rename.m"
  MR_Word * parse_tree__prog_rename__Vars_8)
#line 52 "prog_rename.m"
{
#line 126 "prog_rename.m"
  {
#line 126 "prog_rename.m"
    MR_bool parse_tree__prog_rename__succeeded;

#line 126 "prog_rename.m"
    {
#line 126 "prog_rename.m"
      parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_105_110_95_118_97_114_95_115_101_116_95_95_91_50_93_95_49_4_p_1(parse_tree__prog_rename__TypeInfo_for_V_11, parse_tree__prog_rename__Renaming_6, parse_tree__prog_rename__Vars0_7, parse_tree__prog_rename__Vars_8);
#line 126 "prog_rename.m"
      return;
    }
#line 126 "prog_rename.m"
  }
#line 52 "prog_rename.m"
}

#line 51 "prog_rename.m"
void MR_CALL 
parse_tree__prog_rename__rename_vars_in_var_set_4_p_0(
#line 51 "prog_rename.m"
  MR_Word parse_tree__prog_rename__TypeInfo_for_V_11,
#line 51 "prog_rename.m"
  MR_Word parse_tree__prog_rename__Must_5,
#line 51 "prog_rename.m"
  MR_Word parse_tree__prog_rename__Renaming_6,
#line 51 "prog_rename.m"
  MR_Word parse_tree__prog_rename__Vars0_7,
#line 51 "prog_rename.m"
  MR_Word * parse_tree__prog_rename__Vars_8)
#line 51 "prog_rename.m"
{
#line 126 "prog_rename.m"
  {
#line 126 "prog_rename.m"
    MR_bool parse_tree__prog_rename__succeeded;

#line 126 "prog_rename.m"
    {
#line 126 "prog_rename.m"
      parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_105_110_95_118_97_114_95_115_101_116_95_95_91_50_93_95_48_4_p_0(parse_tree__prog_rename__TypeInfo_for_V_11, parse_tree__prog_rename__Renaming_6, parse_tree__prog_rename__Vars0_7, parse_tree__prog_rename__Vars_8);
#line 126 "prog_rename.m"
      return;
    }
#line 126 "prog_rename.m"
  }
#line 51 "prog_rename.m"
}

#line 47 "prog_rename.m"
void MR_CALL 
parse_tree__prog_rename__rename_vars_in_term_list_4_p_2(
#line 47 "prog_rename.m"
  MR_Word parse_tree__prog_rename__TypeInfo_for_V_13,
#line 47 "prog_rename.m"
  MR_Word parse_tree__prog_rename__HeadVar__1_1,
#line 47 "prog_rename.m"
  MR_Word parse_tree__prog_rename__HeadVar__2_2,
#line 47 "prog_rename.m"
  MR_Word parse_tree__prog_rename__HeadVar__3_3,
#line 47 "prog_rename.m"
  MR_Word * parse_tree__prog_rename__HeadVar__4_4)
#line 47 "prog_rename.m"
{
#line 121 "prog_rename.m"
  {
#line 121 "prog_rename.m"
    MR_bool parse_tree__prog_rename__succeeded;

#line 121 "prog_rename.m"
    if ((parse_tree__prog_rename__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 121 "prog_rename.m"
      *parse_tree__prog_rename__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 121 "prog_rename.m"
    else
#line 122 "prog_rename.m"
      {
#line 122 "prog_rename.m"
        MR_Word parse_tree__prog_rename__Term0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_rename__HeadVar__3_3, (MR_Integer) 0)));
#line 122 "prog_rename.m"
        MR_Word parse_tree__prog_rename__Terms0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_rename__HeadVar__3_3, (MR_Integer) 1)));
#line 122 "prog_rename.m"
        MR_Word parse_tree__prog_rename__Term_11;
#line 122 "prog_rename.m"
        MR_Word parse_tree__prog_rename__Terms_12;

#line 123 "prog_rename.m"
        {
#line 123 "prog_rename.m"
          parse_tree__prog_rename__rename_vars_in_term_4_p_2(parse_tree__prog_rename__TypeInfo_for_V_13, parse_tree__prog_rename__HeadVar__1_1, parse_tree__prog_rename__HeadVar__2_2, parse_tree__prog_rename__Term0_9, &parse_tree__prog_rename__Term_11);
        }
#line 124 "prog_rename.m"
        {
#line 124 "prog_rename.m"
          parse_tree__prog_rename__rename_vars_in_term_list_4_p_2(parse_tree__prog_rename__TypeInfo_for_V_13, parse_tree__prog_rename__HeadVar__1_1, parse_tree__prog_rename__HeadVar__2_2, parse_tree__prog_rename__Terms0_10, &parse_tree__prog_rename__Terms_12);
        }
#line 122 "prog_rename.m"
        {
#line 122 "prog_rename.m"
          MR_Word base;
#line 122 "prog_rename.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 122 "prog_rename.m"
          *parse_tree__prog_rename__HeadVar__4_4 = base;
#line 122 "prog_rename.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_rename__Term_11));
#line 122 "prog_rename.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_rename__Terms_12));
#line 122 "prog_rename.m"
        }
#line 122 "prog_rename.m"
      }
#line 121 "prog_rename.m"
  }
#line 47 "prog_rename.m"
}

#line 46 "prog_rename.m"
void MR_CALL 
parse_tree__prog_rename__rename_vars_in_term_list_4_p_1(
#line 46 "prog_rename.m"
  MR_Word parse_tree__prog_rename__TypeInfo_for_V_13,
#line 46 "prog_rename.m"
  MR_Word parse_tree__prog_rename__HeadVar__1_1,
#line 46 "prog_rename.m"
  MR_Word parse_tree__prog_rename__HeadVar__2_2,
#line 46 "prog_rename.m"
  MR_Word parse_tree__prog_rename__HeadVar__3_3,
#line 46 "prog_rename.m"
  MR_Word * parse_tree__prog_rename__HeadVar__4_4)
#line 46 "prog_rename.m"
{
#line 121 "prog_rename.m"
  {
#line 121 "prog_rename.m"
    MR_bool parse_tree__prog_rename__succeeded;

#line 121 "prog_rename.m"
    {
#line 121 "prog_rename.m"
      parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_105_110_95_116_101_114_109_95_108_105_115_116_95_95_91_50_93_95_49_4_p_1(parse_tree__prog_rename__TypeInfo_for_V_13, parse_tree__prog_rename__HeadVar__2_2, parse_tree__prog_rename__HeadVar__3_3, parse_tree__prog_rename__HeadVar__4_4);
#line 121 "prog_rename.m"
      return;
    }
#line 121 "prog_rename.m"
  }
#line 46 "prog_rename.m"
}

#line 45 "prog_rename.m"
void MR_CALL 
parse_tree__prog_rename__rename_vars_in_term_list_4_p_0(
#line 45 "prog_rename.m"
  MR_Word parse_tree__prog_rename__TypeInfo_for_V_13,
#line 45 "prog_rename.m"
  MR_Word parse_tree__prog_rename__HeadVar__1_1,
#line 45 "prog_rename.m"
  MR_Word parse_tree__prog_rename__HeadVar__2_2,
#line 45 "prog_rename.m"
  MR_Word parse_tree__prog_rename__HeadVar__3_3,
#line 45 "prog_rename.m"
  MR_Word * parse_tree__prog_rename__HeadVar__4_4)
#line 45 "prog_rename.m"
{
#line 121 "prog_rename.m"
  {
#line 121 "prog_rename.m"
    MR_bool parse_tree__prog_rename__succeeded;

#line 121 "prog_rename.m"
    {
#line 121 "prog_rename.m"
      parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_105_110_95_116_101_114_109_95_108_105_115_116_95_95_91_50_93_95_48_4_p_0(parse_tree__prog_rename__TypeInfo_for_V_13, parse_tree__prog_rename__HeadVar__2_2, parse_tree__prog_rename__HeadVar__3_3, parse_tree__prog_rename__HeadVar__4_4);
#line 121 "prog_rename.m"
      return;
    }
#line 121 "prog_rename.m"
  }
#line 45 "prog_rename.m"
}

#line 41 "prog_rename.m"
void MR_CALL 
parse_tree__prog_rename__rename_vars_in_term_4_p_2(
#line 41 "prog_rename.m"
  MR_Word parse_tree__prog_rename__TypeInfo_for_V_40,
#line 41 "prog_rename.m"
  MR_Word parse_tree__prog_rename__Must_5,
#line 41 "prog_rename.m"
  MR_Word parse_tree__prog_rename__Renaming_6,
#line 41 "prog_rename.m"
  MR_Word parse_tree__prog_rename__Term0_7,
#line 41 "prog_rename.m"
  MR_Word * parse_tree__prog_rename__Term_8)
#line 41 "prog_rename.m"
{
#line 85 "prog_rename.m"
  {
#line 85 "prog_rename.m"
    MR_bool parse_tree__prog_rename__succeeded;

#line 85 "prog_rename.m"
    if (((MR_tag((MR_Word) parse_tree__prog_rename__Term0_7)) == (MR_mktag((MR_Integer) 0))))
#line 86 "prog_rename.m"
      {
#line 86 "prog_rename.m"
        MR_Word parse_tree__prog_rename__ConsId_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_rename__Term0_7, (MR_Integer) 0)));
#line 86 "prog_rename.m"
        MR_Word parse_tree__prog_rename__Args0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_rename__Term0_7, (MR_Integer) 1)));
#line 86 "prog_rename.m"
        MR_Word parse_tree__prog_rename__Args_14;
#line 86 "prog_rename.m"
        MR_Word parse_tree__prog_rename__Context_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_rename__Term0_7, (MR_Integer) 2)));

#line 100 "prog_rename.m"
        if ((parse_tree__prog_rename__Args0_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 98 "prog_rename.m"
          parse_tree__prog_rename__Args_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 100 "prog_rename.m"
        else
#line 100 "prog_rename.m"
          {
#line 100 "prog_rename.m"
            MR_Word parse_tree__prog_rename__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_rename__Args0_13, (MR_Integer) 1)));
#line 100 "prog_rename.m"
            MR_Word parse_tree__prog_rename__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_rename__Args0_13, (MR_Integer) 0)));

#line 100 "prog_rename.m"
            if ((parse_tree__prog_rename__V_41_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 101 "prog_rename.m"
              {
#line 101 "prog_rename.m"
                MR_Word parse_tree__prog_rename__Arg1Term_16;

#line 102 "prog_rename.m"
                {
#line 102 "prog_rename.m"
                  parse_tree__prog_rename__rename_vars_in_term_4_p_2(parse_tree__prog_rename__TypeInfo_for_V_40, parse_tree__prog_rename__Must_5, parse_tree__prog_rename__Renaming_6, parse_tree__prog_rename__V_42_42, &parse_tree__prog_rename__Arg1Term_16);
                }
#line 103 "prog_rename.m"
                {
#line 103 "prog_rename.m"
                  parse_tree__prog_rename__Args_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 103 "prog_rename.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_rename__Args_14, 0) = ((MR_Box) (parse_tree__prog_rename__Arg1Term_16));
#line 103 "prog_rename.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_rename__Args_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 103 "prog_rename.m"
                }
#line 101 "prog_rename.m"
              }
#line 100 "prog_rename.m"
            else
#line 100 "prog_rename.m"
              {
#line 100 "prog_rename.m"
                MR_Word parse_tree__prog_rename__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_rename__V_41_41, (MR_Integer) 1)));
#line 100 "prog_rename.m"
                MR_Word parse_tree__prog_rename__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_rename__V_41_41, (MR_Integer) 0)));

#line 100 "prog_rename.m"
                if ((parse_tree__prog_rename__V_43_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 105 "prog_rename.m"
                  {
#line 105 "prog_rename.m"
                    MR_Word parse_tree__prog_rename__Arg2Term_18;
#line 105 "prog_rename.m"
                    MR_Word parse_tree__prog_rename__V_29_29;
#line 105 "prog_rename.m"
                    MR_Word parse_tree__prog_rename__Arg1Term_34;

#line 106 "prog_rename.m"
                    {
#line 106 "prog_rename.m"
                      parse_tree__prog_rename__rename_vars_in_term_4_p_2(parse_tree__prog_rename__TypeInfo_for_V_40, parse_tree__prog_rename__Must_5, parse_tree__prog_rename__Renaming_6, parse_tree__prog_rename__V_42_42, &parse_tree__prog_rename__Arg1Term_34);
                    }
#line 107 "prog_rename.m"
                    {
#line 107 "prog_rename.m"
                      parse_tree__prog_rename__rename_vars_in_term_4_p_2(parse_tree__prog_rename__TypeInfo_for_V_40, parse_tree__prog_rename__Must_5, parse_tree__prog_rename__Renaming_6, parse_tree__prog_rename__V_44_44, &parse_tree__prog_rename__Arg2Term_18);
                    }
#line 108 "prog_rename.m"
                    {
#line 108 "prog_rename.m"
                      parse_tree__prog_rename__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 108 "prog_rename.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_rename__V_29_29, 0) = ((MR_Box) (parse_tree__prog_rename__Arg2Term_18));
#line 108 "prog_rename.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_rename__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 108 "prog_rename.m"
                    }
#line 108 "prog_rename.m"
                    {
#line 108 "prog_rename.m"
                      parse_tree__prog_rename__Args_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 108 "prog_rename.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_rename__Args_14, 0) = ((MR_Box) (parse_tree__prog_rename__Arg1Term_34));
#line 108 "prog_rename.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_rename__Args_14, 1) = ((MR_Box) (parse_tree__prog_rename__V_29_29));
#line 108 "prog_rename.m"
                    }
#line 105 "prog_rename.m"
                  }
#line 100 "prog_rename.m"
                else
#line 110 "prog_rename.m"
                  {
#line 110 "prog_rename.m"
                    MR_Word parse_tree__prog_rename__Arg3Term0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_rename__V_43_43, (MR_Integer) 0)));
#line 110 "prog_rename.m"
                    MR_Word parse_tree__prog_rename__OtherArgTerms0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_rename__V_43_43, (MR_Integer) 1)));
#line 110 "prog_rename.m"
                    MR_Word parse_tree__prog_rename__Arg3Term_21;
#line 110 "prog_rename.m"
                    MR_Word parse_tree__prog_rename__OtherArgTerms_22;
#line 110 "prog_rename.m"
                    MR_Word parse_tree__prog_rename__V_25_25;
#line 110 "prog_rename.m"
                    MR_Word parse_tree__prog_rename__V_26_26;
#line 110 "prog_rename.m"
                    MR_Word parse_tree__prog_rename__Arg1Term_36;
#line 110 "prog_rename.m"
                    MR_Word parse_tree__prog_rename__Arg2Term_38;

#line 111 "prog_rename.m"
                    {
#line 111 "prog_rename.m"
                      parse_tree__prog_rename__rename_vars_in_term_4_p_2(parse_tree__prog_rename__TypeInfo_for_V_40, parse_tree__prog_rename__Must_5, parse_tree__prog_rename__Renaming_6, parse_tree__prog_rename__V_42_42, &parse_tree__prog_rename__Arg1Term_36);
                    }
#line 112 "prog_rename.m"
                    {
#line 112 "prog_rename.m"
                      parse_tree__prog_rename__rename_vars_in_term_4_p_2(parse_tree__prog_rename__TypeInfo_for_V_40, parse_tree__prog_rename__Must_5, parse_tree__prog_rename__Renaming_6, parse_tree__prog_rename__V_44_44, &parse_tree__prog_rename__Arg2Term_38);
                    }
#line 113 "prog_rename.m"
                    {
#line 113 "prog_rename.m"
                      parse_tree__prog_rename__rename_vars_in_term_4_p_2(parse_tree__prog_rename__TypeInfo_for_V_40, parse_tree__prog_rename__Must_5, parse_tree__prog_rename__Renaming_6, parse_tree__prog_rename__Arg3Term0_19, &parse_tree__prog_rename__Arg3Term_21);
                    }
#line 114 "prog_rename.m"
                    {
#line 114 "prog_rename.m"
                      parse_tree__prog_rename__rename_vars_in_term_list_4_p_2(parse_tree__prog_rename__TypeInfo_for_V_40, parse_tree__prog_rename__Must_5, parse_tree__prog_rename__Renaming_6, parse_tree__prog_rename__OtherArgTerms0_20, &parse_tree__prog_rename__OtherArgTerms_22);
                    }
#line 116 "prog_rename.m"
                    {
#line 116 "prog_rename.m"
                      parse_tree__prog_rename__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 116 "prog_rename.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_rename__V_26_26, 0) = ((MR_Box) (parse_tree__prog_rename__Arg3Term_21));
#line 116 "prog_rename.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_rename__V_26_26, 1) = ((MR_Box) (parse_tree__prog_rename__OtherArgTerms_22));
#line 116 "prog_rename.m"
                    }
#line 116 "prog_rename.m"
                    {
#line 116 "prog_rename.m"
                      parse_tree__prog_rename__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 116 "prog_rename.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_rename__V_25_25, 0) = ((MR_Box) (parse_tree__prog_rename__Arg2Term_38));
#line 116 "prog_rename.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_rename__V_25_25, 1) = ((MR_Box) (parse_tree__prog_rename__V_26_26));
#line 116 "prog_rename.m"
                    }
#line 116 "prog_rename.m"
                    {
#line 116 "prog_rename.m"
                      parse_tree__prog_rename__Args_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 116 "prog_rename.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_rename__Args_14, 0) = ((MR_Box) (parse_tree__prog_rename__Arg1Term_36));
#line 116 "prog_rename.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_rename__Args_14, 1) = ((MR_Box) (parse_tree__prog_rename__V_25_25));
#line 116 "prog_rename.m"
                    }
#line 110 "prog_rename.m"
                  }
#line 100 "prog_rename.m"
              }
#line 100 "prog_rename.m"
          }
#line 118 "prog_rename.m"
        {
#line 118 "prog_rename.m"
          MR_Word base;
#line 118 "prog_rename.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 118 "prog_rename.m"
          *parse_tree__prog_rename__Term_8 = base;
#line 118 "prog_rename.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_rename__ConsId_12));
#line 118 "prog_rename.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_rename__Args_14));
#line 118 "prog_rename.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_rename__Context_39));
#line 118 "prog_rename.m"
        }
#line 86 "prog_rename.m"
      }
#line 85 "prog_rename.m"
    else
#line 82 "prog_rename.m"
      {
#line 82 "prog_rename.m"
        MR_Word parse_tree__prog_rename__Var0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_rename__Term0_7, (MR_Integer) 0)));
#line 82 "prog_rename.m"
        MR_Word parse_tree__prog_rename__Context_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_rename__Term0_7, (MR_Integer) 1)));
#line 82 "prog_rename.m"
        MR_Word parse_tree__prog_rename__Var_11;

#line 83 "prog_rename.m"
        {
#line 83 "prog_rename.m"
          parse_tree__prog_rename__rename_var_4_p_2(parse_tree__prog_rename__TypeInfo_for_V_40, parse_tree__prog_rename__Must_5, parse_tree__prog_rename__Renaming_6, parse_tree__prog_rename__Var0_9, &parse_tree__prog_rename__Var_11);
        }
#line 84 "prog_rename.m"
        {
#line 84 "prog_rename.m"
          MR_Word base;
#line 84 "prog_rename.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 84 "prog_rename.m"
          *parse_tree__prog_rename__Term_8 = base;
#line 84 "prog_rename.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_rename__Var_11));
#line 84 "prog_rename.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_rename__Context_10));
#line 84 "prog_rename.m"
        }
#line 82 "prog_rename.m"
      }
#line 85 "prog_rename.m"
  }
#line 41 "prog_rename.m"
}

#line 40 "prog_rename.m"
void MR_CALL 
parse_tree__prog_rename__rename_vars_in_term_4_p_1(
#line 40 "prog_rename.m"
  MR_Word parse_tree__prog_rename__TypeInfo_for_V_40,
#line 40 "prog_rename.m"
  MR_Word parse_tree__prog_rename__Must_5,
#line 40 "prog_rename.m"
  MR_Word parse_tree__prog_rename__Renaming_6,
#line 40 "prog_rename.m"
  MR_Word parse_tree__prog_rename__Term0_7,
#line 40 "prog_rename.m"
  MR_Word * parse_tree__prog_rename__Term_8)
#line 40 "prog_rename.m"
{
#line 85 "prog_rename.m"
  {
#line 85 "prog_rename.m"
    MR_bool parse_tree__prog_rename__succeeded;

#line 85 "prog_rename.m"
    {
#line 85 "prog_rename.m"
      parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_105_110_95_116_101_114_109_95_95_91_50_93_95_49_4_p_1(parse_tree__prog_rename__TypeInfo_for_V_40, parse_tree__prog_rename__Renaming_6, parse_tree__prog_rename__Term0_7, parse_tree__prog_rename__Term_8);
#line 85 "prog_rename.m"
      return;
    }
#line 85 "prog_rename.m"
  }
#line 40 "prog_rename.m"
}

#line 39 "prog_rename.m"
void MR_CALL 
parse_tree__prog_rename__rename_vars_in_term_4_p_0(
#line 39 "prog_rename.m"
  MR_Word parse_tree__prog_rename__TypeInfo_for_V_40,
#line 39 "prog_rename.m"
  MR_Word parse_tree__prog_rename__Must_5,
#line 39 "prog_rename.m"
  MR_Word parse_tree__prog_rename__Renaming_6,
#line 39 "prog_rename.m"
  MR_Word parse_tree__prog_rename__Term0_7,
#line 39 "prog_rename.m"
  MR_Word * parse_tree__prog_rename__Term_8)
#line 39 "prog_rename.m"
{
#line 85 "prog_rename.m"
  {
#line 85 "prog_rename.m"
    MR_bool parse_tree__prog_rename__succeeded;

#line 85 "prog_rename.m"
    {
#line 85 "prog_rename.m"
      parse_tree__prog_rename__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_110_97_109_101_95_118_97_114_115_95_105_110_95_116_101_114_109_95_95_91_50_93_95_48_4_p_0(parse_tree__prog_rename__TypeInfo_for_V_40, parse_tree__prog_rename__Renaming_6, parse_tree__prog_rename__Term0_7, parse_tree__prog_rename__Term_8);
#line 85 "prog_rename.m"
      return;
    }
#line 85 "prog_rename.m"
  }
#line 39 "prog_rename.m"
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
