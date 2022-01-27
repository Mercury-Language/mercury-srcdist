/*
** Automatically generated from `java_names.m'
** by the Mercury compiler,
** version 22.01-beta-2022-01-24
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


// :- module parse_tree.java_names.
// :- implementation.

/*
INIT mercury__parse_tree__java_names__init
ENDINIT
*/

#include "parse_tree.java_names.mih"


#include "assoc_list.mih"
#include "bimap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "string.mih"
#include "term.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "varset.mih"
#include "libs.globals.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"




static const MR_EnumFunctorDesc parse_tree__java_names__parse_tree__java_names__enum_functor_desc_csj_qual_kind_0_0;

static const MR_EnumFunctorDesc parse_tree__java_names__parse_tree__java_names__enum_functor_desc_csj_qual_kind_0_1;

static const MR_EnumFunctorDescPtr parse_tree__java_names__parse_tree__java_names__enum_ordinal_ordered_csj_qual_kind_0[2];

static const MR_EnumFunctorDescPtr parse_tree__java_names__parse_tree__java_names__enum_name_ordered_csj_qual_kind_0[2];

static const MR_Integer parse_tree__java_names__parse_tree__java_names__functor_number_map_csj_qual_kind_0[2];

static void MR_CALL 
parse_tree__java_names__mangle_sym_name_for_csharp_2_3_p_0(
  MR_Word SymName_4,
  MR_Word QualKind_5,
  MR_Word * MangledSymName_6);

static void MR_CALL 
parse_tree__java_names__mangle_sym_name_for_java_2_3_p_0(
  MR_Word SymName_4,
  MR_Word QualKind_5,
  MR_Word * MangledSymName_6);

static MR_bool MR_CALL 
parse_tree__java_names____Unify____csj_qual_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__java_names____Compare____csj_qual_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


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






static const MR_EnumFunctorDesc parse_tree__java_names__parse_tree__java_names__enum_functor_desc_csj_qual_kind_0_0 = {
  (MR_String) "module_qual",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__java_names__parse_tree__java_names__enum_functor_desc_csj_qual_kind_0_1 = {
  (MR_String) "type_qual",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__java_names__parse_tree__java_names__enum_ordinal_ordered_csj_qual_kind_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__java_names____Unify____csj_qual_kind_0_0_10001)),
  ((MR_Box) (parse_tree__java_names____Compare____csj_qual_kind_0_0_10001)),
  (MR_String) "parse_tree.java_names",
  (MR_String) "csj_qual_kind",
  {     parse_tree__java_names__parse_tree__java_names__enum_name_ordered_csj_qual_kind_0 },
  {     parse_tree__java_names__parse_tree__java_names__enum_ordinal_ordered_csj_qual_kind_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__java_names__parse_tree__java_names__functor_number_map_csj_qual_kind_0,

};

void MR_CALL 
parse_tree__java_names____Compare____csj_qual_kind_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

    succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
  }
}

MR_bool MR_CALL 
parse_tree__java_names____Unify____csj_qual_kind_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

MR_Word MR_CALL 
parse_tree__java_names__flip_initial_case_of_final_part_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;

    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
    {
      MR_Word Qual_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_String Name_6 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_String Var_7;

      Var_7 = parse_tree__java_names__flip_initial_case_1_f_0(Name_6);
      {
        HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__2_2, 0) = ((MR_Box) (Qual_5));
        MR_hl_field(MR_mktag(1), HeadVar__2_2, 1) = ((MR_Box) (Var_7));
      }
    }
    else
    {
      MR_String Name_3 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_String Var_4;

      Var_4 = parse_tree__java_names__flip_initial_case_1_f_0(Name_3);
      {
        HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), HeadVar__2_2, 0) = ((MR_Box) (Var_4));
      }
    }
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
parse_tree__java_names__csharp_mercury_runtime_package_name_0_f_0(void)
{
  return (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__java_names_scalar_common_2[1]));
}

MR_bool MR_CALL 
parse_tree__java_names__is_csharp_keyword_1_p_0(
  MR_String HeadVar__1_1)
{
  {
    MR_bool succeeded;

    {
      MR_Integer case_num_0 = (MR_Integer) -1;

      switch (MR_nth_code_unit(HeadVar__1_1, 0)) {
        case (MR_Integer) 97:
          switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
            case (MR_Integer) 98:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "abstract"))
                case_num_0 = (MR_Integer) 0;
              break;
            case (MR_Integer) 115:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "as"))
                case_num_0 = (MR_Integer) 1;
              break;
          }
          break;
        case (MR_Integer) 98:
          switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
            case (MR_Integer) 97:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "base"))
                case_num_0 = (MR_Integer) 2;
              break;
            case (MR_Integer) 111:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "bool"))
                case_num_0 = (MR_Integer) 3;
              break;
            case (MR_Integer) 114:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "break"))
                case_num_0 = (MR_Integer) 4;
              break;
            case (MR_Integer) 121:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "byte"))
                case_num_0 = (MR_Integer) 5;
              break;
          }
          break;
        case (MR_Integer) 99:
          switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
            case (MR_Integer) 97:
              switch (MR_nth_code_unit(HeadVar__1_1, 2)) {
                case (MR_Integer) 115:
                  if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "case"))
                    case_num_0 = (MR_Integer) 6;
                  break;
                case (MR_Integer) 116:
                  if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "catch"))
                    case_num_0 = (MR_Integer) 7;
                  break;
              }
              break;
            case (MR_Integer) 104:
              switch (MR_nth_code_unit(HeadVar__1_1, 2)) {
                case (MR_Integer) 97:
                  if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "char"))
                    case_num_0 = (MR_Integer) 8;
                  break;
                case (MR_Integer) 101:
                  if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "checked"))
                    case_num_0 = (MR_Integer) 9;
                  break;
              }
              break;
            case (MR_Integer) 108:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "class"))
                case_num_0 = (MR_Integer) 10;
              break;
            case (MR_Integer) 111:
              if (((MR_nth_code_unit(HeadVar__1_1, 2)) == (MR_Integer) 110))
                switch (MR_nth_code_unit(HeadVar__1_1, 3)) {
                  case (MR_Integer) 115:
                    if (MR_offset_streq(4, HeadVar__1_1, (MR_String) "const"))
                      case_num_0 = (MR_Integer) 11;
                    break;
                  case (MR_Integer) 116:
                    if (MR_offset_streq(4, HeadVar__1_1, (MR_String) "continue"))
                      case_num_0 = (MR_Integer) 12;
                    break;
                }
              break;
          }
          break;
        case (MR_Integer) 100:
          switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
            case (MR_Integer) 101:
              switch (MR_nth_code_unit(HeadVar__1_1, 2)) {
                case (MR_Integer) 99:
                  if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "decimal"))
                    case_num_0 = (MR_Integer) 13;
                  break;
                case (MR_Integer) 102:
                  if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "default"))
                    case_num_0 = (MR_Integer) 14;
                  break;
                case (MR_Integer) 108:
                  if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "delegate"))
                    case_num_0 = (MR_Integer) 15;
                  break;
              }
              break;
            case (MR_Integer) 111:
              switch (MR_nth_code_unit(HeadVar__1_1, 2)) {
                case (MR_Integer) 0:
                  case_num_0 = (MR_Integer) 16;
                  break;
                case (MR_Integer) 117:
                  if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "double"))
                    case_num_0 = (MR_Integer) 17;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 101:
          switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
            case (MR_Integer) 108:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "else"))
                case_num_0 = (MR_Integer) 18;
              break;
            case (MR_Integer) 110:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "enum"))
                case_num_0 = (MR_Integer) 19;
              break;
            case (MR_Integer) 118:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "event"))
                case_num_0 = (MR_Integer) 20;
              break;
            case (MR_Integer) 120:
              switch (MR_nth_code_unit(HeadVar__1_1, 2)) {
                case (MR_Integer) 112:
                  if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "explicit"))
                    case_num_0 = (MR_Integer) 21;
                  break;
                case (MR_Integer) 116:
                  if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "extern"))
                    case_num_0 = (MR_Integer) 22;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 102:
          switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
            case (MR_Integer) 97:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "false"))
                case_num_0 = (MR_Integer) 23;
              break;
            case (MR_Integer) 105:
              switch (MR_nth_code_unit(HeadVar__1_1, 2)) {
                case (MR_Integer) 110:
                  if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "finally"))
                    case_num_0 = (MR_Integer) 24;
                  break;
                case (MR_Integer) 120:
                  if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "fixed"))
                    case_num_0 = (MR_Integer) 25;
                  break;
              }
              break;
            case (MR_Integer) 108:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "float"))
                case_num_0 = (MR_Integer) 26;
              break;
            case (MR_Integer) 111:
              if (((MR_nth_code_unit(HeadVar__1_1, 2)) == (MR_Integer) 114))
                switch (MR_nth_code_unit(HeadVar__1_1, 3)) {
                  case (MR_Integer) 0:
                    case_num_0 = (MR_Integer) 27;
                    break;
                  case (MR_Integer) 101:
                    if (MR_offset_streq(4, HeadVar__1_1, (MR_String) "foreach"))
                      case_num_0 = (MR_Integer) 28;
                    break;
                }
              break;
          }
          break;
        case (MR_Integer) 103:
          if (MR_offset_streq(1, HeadVar__1_1, (MR_String) "goto"))
            case_num_0 = (MR_Integer) 29;
          break;
        case (MR_Integer) 105:
          switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
            case (MR_Integer) 102:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "if"))
                case_num_0 = (MR_Integer) 30;
              break;
            case (MR_Integer) 109:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "implicit"))
                case_num_0 = (MR_Integer) 31;
              break;
            case (MR_Integer) 110:
              switch (MR_nth_code_unit(HeadVar__1_1, 2)) {
                case (MR_Integer) 0:
                  case_num_0 = (MR_Integer) 32;
                  break;
                case (MR_Integer) 116:
                  switch (MR_nth_code_unit(HeadVar__1_1, 3)) {
                    case (MR_Integer) 0:
                      case_num_0 = (MR_Integer) 33;
                      break;
                    case (MR_Integer) 101:
                      if (((MR_nth_code_unit(HeadVar__1_1, 4)) == (MR_Integer) 114))
                        switch (MR_nth_code_unit(HeadVar__1_1, 5)) {
                          case (MR_Integer) 102:
                            if (MR_offset_streq(6, HeadVar__1_1, (MR_String) "interface"))
                              case_num_0 = (MR_Integer) 34;
                            break;
                          case (MR_Integer) 110:
                            if (MR_offset_streq(6, HeadVar__1_1, (MR_String) "internal"))
                              case_num_0 = (MR_Integer) 35;
                            break;
                        }
                      break;
                  }
                  break;
              }
              break;
            case (MR_Integer) 115:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "is"))
                case_num_0 = (MR_Integer) 36;
              break;
          }
          break;
        case (MR_Integer) 108:
          if (((MR_nth_code_unit(HeadVar__1_1, 1)) == (MR_Integer) 111))
            switch (MR_nth_code_unit(HeadVar__1_1, 2)) {
              case (MR_Integer) 99:
                if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "lock"))
                  case_num_0 = (MR_Integer) 37;
                break;
              case (MR_Integer) 110:
                if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "long"))
                  case_num_0 = (MR_Integer) 38;
                break;
            }
          break;
        case (MR_Integer) 110:
          switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
            case (MR_Integer) 97:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "namespace"))
                case_num_0 = (MR_Integer) 39;
              break;
            case (MR_Integer) 101:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "new"))
                case_num_0 = (MR_Integer) 40;
              break;
            case (MR_Integer) 117:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "null"))
                case_num_0 = (MR_Integer) 41;
              break;
          }
          break;
        case (MR_Integer) 111:
          switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
            case (MR_Integer) 98:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "object"))
                case_num_0 = (MR_Integer) 42;
              break;
            case (MR_Integer) 112:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "operator"))
                case_num_0 = (MR_Integer) 43;
              break;
            case (MR_Integer) 117:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "out"))
                case_num_0 = (MR_Integer) 44;
              break;
            case (MR_Integer) 118:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "override"))
                case_num_0 = (MR_Integer) 45;
              break;
          }
          break;
        case (MR_Integer) 112:
          switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
            case (MR_Integer) 97:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "params"))
                case_num_0 = (MR_Integer) 46;
              break;
            case (MR_Integer) 114:
              switch (MR_nth_code_unit(HeadVar__1_1, 2)) {
                case (MR_Integer) 105:
                  if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "private"))
                    case_num_0 = (MR_Integer) 47;
                  break;
                case (MR_Integer) 111:
                  if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "protected"))
                    case_num_0 = (MR_Integer) 48;
                  break;
              }
              break;
            case (MR_Integer) 117:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "public"))
                case_num_0 = (MR_Integer) 49;
              break;
          }
          break;
        case (MR_Integer) 114:
          if (((MR_nth_code_unit(HeadVar__1_1, 1)) == (MR_Integer) 101))
            switch (MR_nth_code_unit(HeadVar__1_1, 2)) {
              case (MR_Integer) 97:
                if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "readonly"))
                  case_num_0 = (MR_Integer) 50;
                break;
              case (MR_Integer) 102:
                if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "ref"))
                  case_num_0 = (MR_Integer) 51;
                break;
              case (MR_Integer) 116:
                if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "return"))
                  case_num_0 = (MR_Integer) 52;
                break;
            }
          break;
        case (MR_Integer) 115:
          switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
            case (MR_Integer) 98:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "sbyte"))
                case_num_0 = (MR_Integer) 53;
              break;
            case (MR_Integer) 101:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "sealed"))
                case_num_0 = (MR_Integer) 54;
              break;
            case (MR_Integer) 104:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "short"))
                case_num_0 = (MR_Integer) 55;
              break;
            case (MR_Integer) 105:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "sizeof"))
                case_num_0 = (MR_Integer) 56;
              break;
            case (MR_Integer) 116:
              switch (MR_nth_code_unit(HeadVar__1_1, 2)) {
                case (MR_Integer) 97:
                  switch (MR_nth_code_unit(HeadVar__1_1, 3)) {
                    case (MR_Integer) 99:
                      if (MR_offset_streq(4, HeadVar__1_1, (MR_String) "stackalloc"))
                        case_num_0 = (MR_Integer) 57;
                      break;
                    case (MR_Integer) 116:
                      if (MR_offset_streq(4, HeadVar__1_1, (MR_String) "static"))
                        case_num_0 = (MR_Integer) 58;
                      break;
                  }
                  break;
                case (MR_Integer) 114:
                  switch (MR_nth_code_unit(HeadVar__1_1, 3)) {
                    case (MR_Integer) 105:
                      if (MR_offset_streq(4, HeadVar__1_1, (MR_String) "string"))
                        case_num_0 = (MR_Integer) 59;
                      break;
                    case (MR_Integer) 117:
                      if (MR_offset_streq(4, HeadVar__1_1, (MR_String) "struct"))
                        case_num_0 = (MR_Integer) 60;
                      break;
                  }
                  break;
              }
              break;
            case (MR_Integer) 119:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "switch"))
                case_num_0 = (MR_Integer) 61;
              break;
          }
          break;
        case (MR_Integer) 116:
          switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
            case (MR_Integer) 104:
              switch (MR_nth_code_unit(HeadVar__1_1, 2)) {
                case (MR_Integer) 105:
                  if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "this"))
                    case_num_0 = (MR_Integer) 62;
                  break;
                case (MR_Integer) 114:
                  if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "throw"))
                    case_num_0 = (MR_Integer) 63;
                  break;
              }
              break;
            case (MR_Integer) 114:
              switch (MR_nth_code_unit(HeadVar__1_1, 2)) {
                case (MR_Integer) 117:
                  if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "true"))
                    case_num_0 = (MR_Integer) 64;
                  break;
                case (MR_Integer) 121:
                  if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "try"))
                    case_num_0 = (MR_Integer) 65;
                  break;
              }
              break;
            case (MR_Integer) 121:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "typeof"))
                case_num_0 = (MR_Integer) 66;
              break;
          }
          break;
        case (MR_Integer) 117:
          switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
            case (MR_Integer) 105:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "uint"))
                case_num_0 = (MR_Integer) 67;
              break;
            case (MR_Integer) 108:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "ulong"))
                case_num_0 = (MR_Integer) 68;
              break;
            case (MR_Integer) 110:
              switch (MR_nth_code_unit(HeadVar__1_1, 2)) {
                case (MR_Integer) 99:
                  if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "unchecked"))
                    case_num_0 = (MR_Integer) 69;
                  break;
                case (MR_Integer) 115:
                  if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "unsafe"))
                    case_num_0 = (MR_Integer) 70;
                  break;
              }
              break;
            case (MR_Integer) 115:
              switch (MR_nth_code_unit(HeadVar__1_1, 2)) {
                case (MR_Integer) 104:
                  if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "ushort"))
                    case_num_0 = (MR_Integer) 71;
                  break;
                case (MR_Integer) 105:
                  if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "using"))
                    case_num_0 = (MR_Integer) 72;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 118:
          switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
            case (MR_Integer) 105:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "virtual"))
                case_num_0 = (MR_Integer) 73;
              break;
            case (MR_Integer) 111:
              switch (MR_nth_code_unit(HeadVar__1_1, 2)) {
                case (MR_Integer) 105:
                  if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "void"))
                    case_num_0 = (MR_Integer) 74;
                  break;
                case (MR_Integer) 108:
                  if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "volatile"))
                    case_num_0 = (MR_Integer) 75;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 119:
          if (MR_offset_streq(1, HeadVar__1_1, (MR_String) "while"))
            case_num_0 = (MR_Integer) 76;
          break;
      }
      if ((case_num_0 < (MR_Integer) 0))
        succeeded = MR_FALSE;
      else
      {
        // we found a match; look up the results
        ;
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

void MR_CALL 
parse_tree__java_names__mangle_sym_name_for_csharp_4_p_0(
  MR_Word SymName_5,
  MR_Word QualKind_6,
  MR_String QualifierOp_7,
  MR_String * SafeName_8)
{
  {
    MR_Word MangledSymName_9;

    parse_tree__java_names__mangle_sym_name_for_csharp_2_3_p_0(SymName_5, QualKind_6, &MangledSymName_9);
    *SafeName_8 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(MangledSymName_9, QualifierOp_7);
  }
}

static void MR_CALL 
parse_tree__java_names__mangle_sym_name_for_csharp_2_3_p_0(
  MR_Word SymName_4,
  MR_Word QualKind_5,
  MR_Word * MangledSymName_6)
{
  if (((MR_tag((MR_Word) SymName_4)) == (MR_Integer) 1))
  {
    MR_Word ModuleName0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SymName_4, (MR_Integer) 0))));
    MR_String PlainName_10 = ((MR_String) ((MR_hl_field(MR_mktag(1), SymName_4, (MR_Integer) 1))));
    MR_Word MangledModuleName_11;
    MR_String SafePlainName_12;
    MR_String MangledName_17;
    MR_String FlippedName_18;

    parse_tree__java_names__mangle_sym_name_for_csharp_2_3_p_0(ModuleName0_9, (MR_Integer) 0, &MangledModuleName_11);
    MangledName_17 = parse_tree__prog_foreign__name_mangle_no_leading_digit_1_f_0(PlainName_10);
    switch (QualKind_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        FlippedName_18 = MangledName_17;
        break;
      case (MR_Integer) 1:
        FlippedName_18 = parse_tree__java_names__flip_initial_case_1_f_0(MangledName_17);
        break;
    }
    SafePlainName_12 = parse_tree__java_names__make_valid_csharp_symbol_name_1_f_0(FlippedName_18);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *MangledSymName_6 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MangledModuleName_11));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (SafePlainName_12));
    }
  }
  else
  {
    MR_String Name_7 = ((MR_String) ((MR_hl_field(MR_mktag(0), SymName_4, (MR_Integer) 0))));
    MR_String SafeName_8;
    MR_String MangledName_22;
    MR_String FlippedName_23;

    MangledName_22 = parse_tree__prog_foreign__name_mangle_no_leading_digit_1_f_0(Name_7);
    switch (QualKind_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        FlippedName_23 = MangledName_22;
        break;
      case (MR_Integer) 1:
        FlippedName_23 = parse_tree__java_names__flip_initial_case_1_f_0(MangledName_22);
        break;
    }
    SafeName_8 = parse_tree__java_names__make_valid_csharp_symbol_name_1_f_0(FlippedName_23);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MangledSymName_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (SafeName_8));
    }
  }
}

MR_String MR_CALL 
parse_tree__java_names__make_valid_csharp_symbol_name_1_f_0(
  MR_String SymName_3)
{
  {
    MR_bool succeeded;
    MR_String ValidSymName_4;

    {
      MR_Integer case_num_0 = (MR_Integer) -1;

      switch (MR_nth_code_unit(SymName_3, 0)) {
        case (MR_Integer) 97:
          switch (MR_nth_code_unit(SymName_3, 1)) {
            case (MR_Integer) 98:
              if (MR_offset_streq(2, SymName_3, (MR_String) "abstract"))
                case_num_0 = (MR_Integer) 0;
              break;
            case (MR_Integer) 115:
              if (MR_offset_streq(2, SymName_3, (MR_String) "as"))
                case_num_0 = (MR_Integer) 1;
              break;
          }
          break;
        case (MR_Integer) 98:
          switch (MR_nth_code_unit(SymName_3, 1)) {
            case (MR_Integer) 97:
              if (MR_offset_streq(2, SymName_3, (MR_String) "base"))
                case_num_0 = (MR_Integer) 2;
              break;
            case (MR_Integer) 111:
              if (MR_offset_streq(2, SymName_3, (MR_String) "bool"))
                case_num_0 = (MR_Integer) 3;
              break;
            case (MR_Integer) 114:
              if (MR_offset_streq(2, SymName_3, (MR_String) "break"))
                case_num_0 = (MR_Integer) 4;
              break;
            case (MR_Integer) 121:
              if (MR_offset_streq(2, SymName_3, (MR_String) "byte"))
                case_num_0 = (MR_Integer) 5;
              break;
          }
          break;
        case (MR_Integer) 99:
          switch (MR_nth_code_unit(SymName_3, 1)) {
            case (MR_Integer) 97:
              switch (MR_nth_code_unit(SymName_3, 2)) {
                case (MR_Integer) 115:
                  if (MR_offset_streq(3, SymName_3, (MR_String) "case"))
                    case_num_0 = (MR_Integer) 6;
                  break;
                case (MR_Integer) 116:
                  if (MR_offset_streq(3, SymName_3, (MR_String) "catch"))
                    case_num_0 = (MR_Integer) 7;
                  break;
              }
              break;
            case (MR_Integer) 104:
              switch (MR_nth_code_unit(SymName_3, 2)) {
                case (MR_Integer) 97:
                  if (MR_offset_streq(3, SymName_3, (MR_String) "char"))
                    case_num_0 = (MR_Integer) 8;
                  break;
                case (MR_Integer) 101:
                  if (MR_offset_streq(3, SymName_3, (MR_String) "checked"))
                    case_num_0 = (MR_Integer) 9;
                  break;
              }
              break;
            case (MR_Integer) 108:
              if (MR_offset_streq(2, SymName_3, (MR_String) "class"))
                case_num_0 = (MR_Integer) 10;
              break;
            case (MR_Integer) 111:
              if (((MR_nth_code_unit(SymName_3, 2)) == (MR_Integer) 110))
                switch (MR_nth_code_unit(SymName_3, 3)) {
                  case (MR_Integer) 115:
                    if (MR_offset_streq(4, SymName_3, (MR_String) "const"))
                      case_num_0 = (MR_Integer) 11;
                    break;
                  case (MR_Integer) 116:
                    if (MR_offset_streq(4, SymName_3, (MR_String) "continue"))
                      case_num_0 = (MR_Integer) 12;
                    break;
                }
              break;
          }
          break;
        case (MR_Integer) 100:
          switch (MR_nth_code_unit(SymName_3, 1)) {
            case (MR_Integer) 101:
              switch (MR_nth_code_unit(SymName_3, 2)) {
                case (MR_Integer) 99:
                  if (MR_offset_streq(3, SymName_3, (MR_String) "decimal"))
                    case_num_0 = (MR_Integer) 13;
                  break;
                case (MR_Integer) 102:
                  if (MR_offset_streq(3, SymName_3, (MR_String) "default"))
                    case_num_0 = (MR_Integer) 14;
                  break;
                case (MR_Integer) 108:
                  if (MR_offset_streq(3, SymName_3, (MR_String) "delegate"))
                    case_num_0 = (MR_Integer) 15;
                  break;
              }
              break;
            case (MR_Integer) 111:
              switch (MR_nth_code_unit(SymName_3, 2)) {
                case (MR_Integer) 0:
                  case_num_0 = (MR_Integer) 16;
                  break;
                case (MR_Integer) 117:
                  if (MR_offset_streq(3, SymName_3, (MR_String) "double"))
                    case_num_0 = (MR_Integer) 17;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 101:
          switch (MR_nth_code_unit(SymName_3, 1)) {
            case (MR_Integer) 108:
              if (MR_offset_streq(2, SymName_3, (MR_String) "else"))
                case_num_0 = (MR_Integer) 18;
              break;
            case (MR_Integer) 110:
              if (MR_offset_streq(2, SymName_3, (MR_String) "enum"))
                case_num_0 = (MR_Integer) 19;
              break;
            case (MR_Integer) 118:
              if (MR_offset_streq(2, SymName_3, (MR_String) "event"))
                case_num_0 = (MR_Integer) 20;
              break;
            case (MR_Integer) 120:
              switch (MR_nth_code_unit(SymName_3, 2)) {
                case (MR_Integer) 112:
                  if (MR_offset_streq(3, SymName_3, (MR_String) "explicit"))
                    case_num_0 = (MR_Integer) 21;
                  break;
                case (MR_Integer) 116:
                  if (MR_offset_streq(3, SymName_3, (MR_String) "extern"))
                    case_num_0 = (MR_Integer) 22;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 102:
          switch (MR_nth_code_unit(SymName_3, 1)) {
            case (MR_Integer) 97:
              if (MR_offset_streq(2, SymName_3, (MR_String) "false"))
                case_num_0 = (MR_Integer) 23;
              break;
            case (MR_Integer) 105:
              switch (MR_nth_code_unit(SymName_3, 2)) {
                case (MR_Integer) 110:
                  if (MR_offset_streq(3, SymName_3, (MR_String) "finally"))
                    case_num_0 = (MR_Integer) 24;
                  break;
                case (MR_Integer) 120:
                  if (MR_offset_streq(3, SymName_3, (MR_String) "fixed"))
                    case_num_0 = (MR_Integer) 25;
                  break;
              }
              break;
            case (MR_Integer) 108:
              if (MR_offset_streq(2, SymName_3, (MR_String) "float"))
                case_num_0 = (MR_Integer) 26;
              break;
            case (MR_Integer) 111:
              if (((MR_nth_code_unit(SymName_3, 2)) == (MR_Integer) 114))
                switch (MR_nth_code_unit(SymName_3, 3)) {
                  case (MR_Integer) 0:
                    case_num_0 = (MR_Integer) 27;
                    break;
                  case (MR_Integer) 101:
                    if (MR_offset_streq(4, SymName_3, (MR_String) "foreach"))
                      case_num_0 = (MR_Integer) 28;
                    break;
                }
              break;
          }
          break;
        case (MR_Integer) 103:
          if (MR_offset_streq(1, SymName_3, (MR_String) "goto"))
            case_num_0 = (MR_Integer) 29;
          break;
        case (MR_Integer) 105:
          switch (MR_nth_code_unit(SymName_3, 1)) {
            case (MR_Integer) 102:
              if (MR_offset_streq(2, SymName_3, (MR_String) "if"))
                case_num_0 = (MR_Integer) 30;
              break;
            case (MR_Integer) 109:
              if (MR_offset_streq(2, SymName_3, (MR_String) "implicit"))
                case_num_0 = (MR_Integer) 31;
              break;
            case (MR_Integer) 110:
              switch (MR_nth_code_unit(SymName_3, 2)) {
                case (MR_Integer) 0:
                  case_num_0 = (MR_Integer) 32;
                  break;
                case (MR_Integer) 116:
                  switch (MR_nth_code_unit(SymName_3, 3)) {
                    case (MR_Integer) 0:
                      case_num_0 = (MR_Integer) 33;
                      break;
                    case (MR_Integer) 101:
                      if (((MR_nth_code_unit(SymName_3, 4)) == (MR_Integer) 114))
                        switch (MR_nth_code_unit(SymName_3, 5)) {
                          case (MR_Integer) 102:
                            if (MR_offset_streq(6, SymName_3, (MR_String) "interface"))
                              case_num_0 = (MR_Integer) 34;
                            break;
                          case (MR_Integer) 110:
                            if (MR_offset_streq(6, SymName_3, (MR_String) "internal"))
                              case_num_0 = (MR_Integer) 35;
                            break;
                        }
                      break;
                  }
                  break;
              }
              break;
            case (MR_Integer) 115:
              if (MR_offset_streq(2, SymName_3, (MR_String) "is"))
                case_num_0 = (MR_Integer) 36;
              break;
          }
          break;
        case (MR_Integer) 108:
          if (((MR_nth_code_unit(SymName_3, 1)) == (MR_Integer) 111))
            switch (MR_nth_code_unit(SymName_3, 2)) {
              case (MR_Integer) 99:
                if (MR_offset_streq(3, SymName_3, (MR_String) "lock"))
                  case_num_0 = (MR_Integer) 37;
                break;
              case (MR_Integer) 110:
                if (MR_offset_streq(3, SymName_3, (MR_String) "long"))
                  case_num_0 = (MR_Integer) 38;
                break;
            }
          break;
        case (MR_Integer) 110:
          switch (MR_nth_code_unit(SymName_3, 1)) {
            case (MR_Integer) 97:
              if (MR_offset_streq(2, SymName_3, (MR_String) "namespace"))
                case_num_0 = (MR_Integer) 39;
              break;
            case (MR_Integer) 101:
              if (MR_offset_streq(2, SymName_3, (MR_String) "new"))
                case_num_0 = (MR_Integer) 40;
              break;
            case (MR_Integer) 117:
              if (MR_offset_streq(2, SymName_3, (MR_String) "null"))
                case_num_0 = (MR_Integer) 41;
              break;
          }
          break;
        case (MR_Integer) 111:
          switch (MR_nth_code_unit(SymName_3, 1)) {
            case (MR_Integer) 98:
              if (MR_offset_streq(2, SymName_3, (MR_String) "object"))
                case_num_0 = (MR_Integer) 42;
              break;
            case (MR_Integer) 112:
              if (MR_offset_streq(2, SymName_3, (MR_String) "operator"))
                case_num_0 = (MR_Integer) 43;
              break;
            case (MR_Integer) 117:
              if (MR_offset_streq(2, SymName_3, (MR_String) "out"))
                case_num_0 = (MR_Integer) 44;
              break;
            case (MR_Integer) 118:
              if (MR_offset_streq(2, SymName_3, (MR_String) "override"))
                case_num_0 = (MR_Integer) 45;
              break;
          }
          break;
        case (MR_Integer) 112:
          switch (MR_nth_code_unit(SymName_3, 1)) {
            case (MR_Integer) 97:
              if (MR_offset_streq(2, SymName_3, (MR_String) "params"))
                case_num_0 = (MR_Integer) 46;
              break;
            case (MR_Integer) 114:
              switch (MR_nth_code_unit(SymName_3, 2)) {
                case (MR_Integer) 105:
                  if (MR_offset_streq(3, SymName_3, (MR_String) "private"))
                    case_num_0 = (MR_Integer) 47;
                  break;
                case (MR_Integer) 111:
                  if (MR_offset_streq(3, SymName_3, (MR_String) "protected"))
                    case_num_0 = (MR_Integer) 48;
                  break;
              }
              break;
            case (MR_Integer) 117:
              if (MR_offset_streq(2, SymName_3, (MR_String) "public"))
                case_num_0 = (MR_Integer) 49;
              break;
          }
          break;
        case (MR_Integer) 114:
          if (((MR_nth_code_unit(SymName_3, 1)) == (MR_Integer) 101))
            switch (MR_nth_code_unit(SymName_3, 2)) {
              case (MR_Integer) 97:
                if (MR_offset_streq(3, SymName_3, (MR_String) "readonly"))
                  case_num_0 = (MR_Integer) 50;
                break;
              case (MR_Integer) 102:
                if (MR_offset_streq(3, SymName_3, (MR_String) "ref"))
                  case_num_0 = (MR_Integer) 51;
                break;
              case (MR_Integer) 116:
                if (MR_offset_streq(3, SymName_3, (MR_String) "return"))
                  case_num_0 = (MR_Integer) 52;
                break;
            }
          break;
        case (MR_Integer) 115:
          switch (MR_nth_code_unit(SymName_3, 1)) {
            case (MR_Integer) 98:
              if (MR_offset_streq(2, SymName_3, (MR_String) "sbyte"))
                case_num_0 = (MR_Integer) 53;
              break;
            case (MR_Integer) 101:
              if (MR_offset_streq(2, SymName_3, (MR_String) "sealed"))
                case_num_0 = (MR_Integer) 54;
              break;
            case (MR_Integer) 104:
              if (MR_offset_streq(2, SymName_3, (MR_String) "short"))
                case_num_0 = (MR_Integer) 55;
              break;
            case (MR_Integer) 105:
              if (MR_offset_streq(2, SymName_3, (MR_String) "sizeof"))
                case_num_0 = (MR_Integer) 56;
              break;
            case (MR_Integer) 116:
              switch (MR_nth_code_unit(SymName_3, 2)) {
                case (MR_Integer) 97:
                  switch (MR_nth_code_unit(SymName_3, 3)) {
                    case (MR_Integer) 99:
                      if (MR_offset_streq(4, SymName_3, (MR_String) "stackalloc"))
                        case_num_0 = (MR_Integer) 57;
                      break;
                    case (MR_Integer) 116:
                      if (MR_offset_streq(4, SymName_3, (MR_String) "static"))
                        case_num_0 = (MR_Integer) 58;
                      break;
                  }
                  break;
                case (MR_Integer) 114:
                  switch (MR_nth_code_unit(SymName_3, 3)) {
                    case (MR_Integer) 105:
                      if (MR_offset_streq(4, SymName_3, (MR_String) "string"))
                        case_num_0 = (MR_Integer) 59;
                      break;
                    case (MR_Integer) 117:
                      if (MR_offset_streq(4, SymName_3, (MR_String) "struct"))
                        case_num_0 = (MR_Integer) 60;
                      break;
                  }
                  break;
              }
              break;
            case (MR_Integer) 119:
              if (MR_offset_streq(2, SymName_3, (MR_String) "switch"))
                case_num_0 = (MR_Integer) 61;
              break;
          }
          break;
        case (MR_Integer) 116:
          switch (MR_nth_code_unit(SymName_3, 1)) {
            case (MR_Integer) 104:
              switch (MR_nth_code_unit(SymName_3, 2)) {
                case (MR_Integer) 105:
                  if (MR_offset_streq(3, SymName_3, (MR_String) "this"))
                    case_num_0 = (MR_Integer) 62;
                  break;
                case (MR_Integer) 114:
                  if (MR_offset_streq(3, SymName_3, (MR_String) "throw"))
                    case_num_0 = (MR_Integer) 63;
                  break;
              }
              break;
            case (MR_Integer) 114:
              switch (MR_nth_code_unit(SymName_3, 2)) {
                case (MR_Integer) 117:
                  if (MR_offset_streq(3, SymName_3, (MR_String) "true"))
                    case_num_0 = (MR_Integer) 64;
                  break;
                case (MR_Integer) 121:
                  if (MR_offset_streq(3, SymName_3, (MR_String) "try"))
                    case_num_0 = (MR_Integer) 65;
                  break;
              }
              break;
            case (MR_Integer) 121:
              if (MR_offset_streq(2, SymName_3, (MR_String) "typeof"))
                case_num_0 = (MR_Integer) 66;
              break;
          }
          break;
        case (MR_Integer) 117:
          switch (MR_nth_code_unit(SymName_3, 1)) {
            case (MR_Integer) 105:
              if (MR_offset_streq(2, SymName_3, (MR_String) "uint"))
                case_num_0 = (MR_Integer) 67;
              break;
            case (MR_Integer) 108:
              if (MR_offset_streq(2, SymName_3, (MR_String) "ulong"))
                case_num_0 = (MR_Integer) 68;
              break;
            case (MR_Integer) 110:
              switch (MR_nth_code_unit(SymName_3, 2)) {
                case (MR_Integer) 99:
                  if (MR_offset_streq(3, SymName_3, (MR_String) "unchecked"))
                    case_num_0 = (MR_Integer) 69;
                  break;
                case (MR_Integer) 115:
                  if (MR_offset_streq(3, SymName_3, (MR_String) "unsafe"))
                    case_num_0 = (MR_Integer) 70;
                  break;
              }
              break;
            case (MR_Integer) 115:
              switch (MR_nth_code_unit(SymName_3, 2)) {
                case (MR_Integer) 104:
                  if (MR_offset_streq(3, SymName_3, (MR_String) "ushort"))
                    case_num_0 = (MR_Integer) 71;
                  break;
                case (MR_Integer) 105:
                  if (MR_offset_streq(3, SymName_3, (MR_String) "using"))
                    case_num_0 = (MR_Integer) 72;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 118:
          switch (MR_nth_code_unit(SymName_3, 1)) {
            case (MR_Integer) 105:
              if (MR_offset_streq(2, SymName_3, (MR_String) "virtual"))
                case_num_0 = (MR_Integer) 73;
              break;
            case (MR_Integer) 111:
              switch (MR_nth_code_unit(SymName_3, 2)) {
                case (MR_Integer) 105:
                  if (MR_offset_streq(3, SymName_3, (MR_String) "void"))
                    case_num_0 = (MR_Integer) 74;
                  break;
                case (MR_Integer) 108:
                  if (MR_offset_streq(3, SymName_3, (MR_String) "volatile"))
                    case_num_0 = (MR_Integer) 75;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 119:
          if (MR_offset_streq(1, SymName_3, (MR_String) "while"))
            case_num_0 = (MR_Integer) 76;
          break;
      }
      if ((case_num_0 < (MR_Integer) 0))
        succeeded = MR_FALSE;
      else
      {
        // we found a match; look up the results
        ;
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
      ValidSymName_4 = mercury__string__f_43_43_2_f_0((MR_String) "mr_", SymName_3);
    else
    {
      MR_String Suffix_6;

      succeeded = mercury__string__append_3_p_1((MR_String) "mr_", &Suffix_6, SymName_3);
      if (succeeded)
      {
        MR_String Var_7;

        Var_7 = mercury__string__f_43_43_2_f_0((MR_String) "_", Suffix_6);
        ValidSymName_4 = mercury__string__f_43_43_2_f_0((MR_String) "mr_", Var_7);
      }
      else
        ValidSymName_4 = SymName_3;
    }
    return ValidSymName_4;
  }
}

MR_Word MR_CALL 
parse_tree__java_names__java_mercury_runtime_package_name_0_f_0(void)
{
  return (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__java_names_scalar_common_2[0]));
}

MR_bool MR_CALL 
parse_tree__java_names__is_java_keyword_1_p_0(
  MR_String HeadVar__1_1)
{
  {
    MR_bool succeeded;

    {
      MR_Integer case_num_0 = (MR_Integer) -1;

      switch (MR_nth_code_unit(HeadVar__1_1, 0)) {
        case (MR_Integer) 97:
          if (MR_offset_streq(1, HeadVar__1_1, (MR_String) "abstract"))
            case_num_0 = (MR_Integer) 0;
          break;
        case (MR_Integer) 98:
          switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
            case (MR_Integer) 111:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "boolean"))
                case_num_0 = (MR_Integer) 1;
              break;
            case (MR_Integer) 114:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "break"))
                case_num_0 = (MR_Integer) 2;
              break;
            case (MR_Integer) 121:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "byte"))
                case_num_0 = (MR_Integer) 3;
              break;
          }
          break;
        case (MR_Integer) 99:
          switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
            case (MR_Integer) 97:
              switch (MR_nth_code_unit(HeadVar__1_1, 2)) {
                case (MR_Integer) 115:
                  if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "case"))
                    case_num_0 = (MR_Integer) 4;
                  break;
                case (MR_Integer) 116:
                  if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "catch"))
                    case_num_0 = (MR_Integer) 5;
                  break;
              }
              break;
            case (MR_Integer) 104:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "char"))
                case_num_0 = (MR_Integer) 6;
              break;
            case (MR_Integer) 108:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "class"))
                case_num_0 = (MR_Integer) 7;
              break;
            case (MR_Integer) 111:
              if (((MR_nth_code_unit(HeadVar__1_1, 2)) == (MR_Integer) 110))
                switch (MR_nth_code_unit(HeadVar__1_1, 3)) {
                  case (MR_Integer) 115:
                    if (MR_offset_streq(4, HeadVar__1_1, (MR_String) "const"))
                      case_num_0 = (MR_Integer) 8;
                    break;
                  case (MR_Integer) 116:
                    if (MR_offset_streq(4, HeadVar__1_1, (MR_String) "continue"))
                      case_num_0 = (MR_Integer) 9;
                    break;
                }
              break;
          }
          break;
        case (MR_Integer) 100:
          switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
            case (MR_Integer) 101:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "default"))
                case_num_0 = (MR_Integer) 10;
              break;
            case (MR_Integer) 111:
              switch (MR_nth_code_unit(HeadVar__1_1, 2)) {
                case (MR_Integer) 0:
                  case_num_0 = (MR_Integer) 11;
                  break;
                case (MR_Integer) 117:
                  if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "double"))
                    case_num_0 = (MR_Integer) 12;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 101:
          switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
            case (MR_Integer) 108:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "else"))
                case_num_0 = (MR_Integer) 13;
              break;
            case (MR_Integer) 110:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "enum"))
                case_num_0 = (MR_Integer) 14;
              break;
            case (MR_Integer) 120:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "extends"))
                case_num_0 = (MR_Integer) 15;
              break;
          }
          break;
        case (MR_Integer) 102:
          switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
            case (MR_Integer) 97:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "false"))
                case_num_0 = (MR_Integer) 16;
              break;
            case (MR_Integer) 105:
              if (((((((MR_nth_code_unit(HeadVar__1_1, 2)) == (MR_Integer) 110)) && (((MR_nth_code_unit(HeadVar__1_1, 3)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(HeadVar__1_1, 4)) == (MR_Integer) 108))))
                switch (MR_nth_code_unit(HeadVar__1_1, 5)) {
                  case (MR_Integer) 0:
                    case_num_0 = (MR_Integer) 17;
                    break;
                  case (MR_Integer) 108:
                    if (MR_offset_streq(6, HeadVar__1_1, (MR_String) "finally"))
                      case_num_0 = (MR_Integer) 18;
                    break;
                }
              break;
            case (MR_Integer) 108:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "float"))
                case_num_0 = (MR_Integer) 19;
              break;
            case (MR_Integer) 111:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "for"))
                case_num_0 = (MR_Integer) 20;
              break;
          }
          break;
        case (MR_Integer) 103:
          if (MR_offset_streq(1, HeadVar__1_1, (MR_String) "goto"))
            case_num_0 = (MR_Integer) 21;
          break;
        case (MR_Integer) 105:
          switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
            case (MR_Integer) 102:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "if"))
                case_num_0 = (MR_Integer) 22;
              break;
            case (MR_Integer) 109:
              if (((MR_nth_code_unit(HeadVar__1_1, 2)) == (MR_Integer) 112))
                switch (MR_nth_code_unit(HeadVar__1_1, 3)) {
                  case (MR_Integer) 108:
                    if (MR_offset_streq(4, HeadVar__1_1, (MR_String) "implements"))
                      case_num_0 = (MR_Integer) 23;
                    break;
                  case (MR_Integer) 111:
                    if (MR_offset_streq(4, HeadVar__1_1, (MR_String) "import"))
                      case_num_0 = (MR_Integer) 24;
                    break;
                }
              break;
            case (MR_Integer) 110:
              switch (MR_nth_code_unit(HeadVar__1_1, 2)) {
                case (MR_Integer) 115:
                  if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "instanceof"))
                    case_num_0 = (MR_Integer) 25;
                  break;
                case (MR_Integer) 116:
                  switch (MR_nth_code_unit(HeadVar__1_1, 3)) {
                    case (MR_Integer) 0:
                      case_num_0 = (MR_Integer) 26;
                      break;
                    case (MR_Integer) 101:
                      if (MR_offset_streq(4, HeadVar__1_1, (MR_String) "interface"))
                        case_num_0 = (MR_Integer) 27;
                      break;
                  }
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 108:
          if (MR_offset_streq(1, HeadVar__1_1, (MR_String) "long"))
            case_num_0 = (MR_Integer) 28;
          break;
        case (MR_Integer) 110:
          switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
            case (MR_Integer) 97:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "native"))
                case_num_0 = (MR_Integer) 29;
              break;
            case (MR_Integer) 101:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "new"))
                case_num_0 = (MR_Integer) 30;
              break;
            case (MR_Integer) 117:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "null"))
                case_num_0 = (MR_Integer) 31;
              break;
          }
          break;
        case (MR_Integer) 112:
          switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
            case (MR_Integer) 97:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "package"))
                case_num_0 = (MR_Integer) 32;
              break;
            case (MR_Integer) 114:
              switch (MR_nth_code_unit(HeadVar__1_1, 2)) {
                case (MR_Integer) 105:
                  if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "private"))
                    case_num_0 = (MR_Integer) 33;
                  break;
                case (MR_Integer) 111:
                  if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "protected"))
                    case_num_0 = (MR_Integer) 34;
                  break;
              }
              break;
            case (MR_Integer) 117:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "public"))
                case_num_0 = (MR_Integer) 35;
              break;
          }
          break;
        case (MR_Integer) 114:
          if (MR_offset_streq(1, HeadVar__1_1, (MR_String) "return"))
            case_num_0 = (MR_Integer) 36;
          break;
        case (MR_Integer) 115:
          switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
            case (MR_Integer) 104:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "short"))
                case_num_0 = (MR_Integer) 37;
              break;
            case (MR_Integer) 116:
              switch (MR_nth_code_unit(HeadVar__1_1, 2)) {
                case (MR_Integer) 97:
                  if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "static"))
                    case_num_0 = (MR_Integer) 38;
                  break;
                case (MR_Integer) 114:
                  if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "strictfp"))
                    case_num_0 = (MR_Integer) 39;
                  break;
              }
              break;
            case (MR_Integer) 117:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "super"))
                case_num_0 = (MR_Integer) 40;
              break;
            case (MR_Integer) 119:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "switch"))
                case_num_0 = (MR_Integer) 41;
              break;
            case (MR_Integer) 121:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "synchronized"))
                case_num_0 = (MR_Integer) 42;
              break;
          }
          break;
        case (MR_Integer) 116:
          switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
            case (MR_Integer) 104:
              switch (MR_nth_code_unit(HeadVar__1_1, 2)) {
                case (MR_Integer) 105:
                  if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "this"))
                    case_num_0 = (MR_Integer) 43;
                  break;
                case (MR_Integer) 114:
                  if (((((MR_nth_code_unit(HeadVar__1_1, 3)) == (MR_Integer) 111)) && (((MR_nth_code_unit(HeadVar__1_1, 4)) == (MR_Integer) 119))))
                    switch (MR_nth_code_unit(HeadVar__1_1, 5)) {
                      case (MR_Integer) 0:
                        case_num_0 = (MR_Integer) 44;
                        break;
                      case (MR_Integer) 115:
                        if (MR_offset_streq(6, HeadVar__1_1, (MR_String) "throws"))
                          case_num_0 = (MR_Integer) 45;
                        break;
                    }
                  break;
              }
              break;
            case (MR_Integer) 114:
              switch (MR_nth_code_unit(HeadVar__1_1, 2)) {
                case (MR_Integer) 97:
                  if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "transient"))
                    case_num_0 = (MR_Integer) 46;
                  break;
                case (MR_Integer) 117:
                  if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "true"))
                    case_num_0 = (MR_Integer) 47;
                  break;
                case (MR_Integer) 121:
                  if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "try"))
                    case_num_0 = (MR_Integer) 48;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 118:
          if (((MR_nth_code_unit(HeadVar__1_1, 1)) == (MR_Integer) 111))
            switch (MR_nth_code_unit(HeadVar__1_1, 2)) {
              case (MR_Integer) 105:
                if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "void"))
                  case_num_0 = (MR_Integer) 49;
                break;
              case (MR_Integer) 108:
                if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "volatile"))
                  case_num_0 = (MR_Integer) 50;
                break;
            }
          break;
        case (MR_Integer) 119:
          if (MR_offset_streq(1, HeadVar__1_1, (MR_String) "while"))
            case_num_0 = (MR_Integer) 51;
          break;
      }
      if ((case_num_0 < (MR_Integer) 0))
        succeeded = MR_FALSE;
      else
      {
        // we found a match; look up the results
        ;
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

void MR_CALL 
parse_tree__java_names__mangle_sym_name_for_java_4_p_0(
  MR_Word SymName0_5,
  MR_Word QualKind_6,
  MR_String QualifierOp_7,
  MR_String * JavaSafeName_8)
{
  {
    MR_bool succeeded;
    MR_Word SymName_10;
    MR_Word MangledSymName_11;
    MR_Word StrippedSymName_9;
    MR_String Var_13;

    succeeded = mdbcomp__sym_name__strip_outermost_qualifier_3_p_0(SymName0_5, &Var_13, &StrippedSymName_9);
    if (succeeded)
      succeeded = (strcmp((MR_String) "mercury", Var_13) == 0);
    if (succeeded)
      SymName_10 = StrippedSymName_9;
    else
      SymName_10 = SymName0_5;
    parse_tree__java_names__mangle_sym_name_for_java_2_3_p_0(SymName_10, QualKind_6, &MangledSymName_11);
    *JavaSafeName_8 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(MangledSymName_11, QualifierOp_7);
  }
}

static void MR_CALL 
parse_tree__java_names__mangle_sym_name_for_java_2_3_p_0(
  MR_Word SymName_4,
  MR_Word QualKind_5,
  MR_Word * MangledSymName_6)
{
  if (((MR_tag((MR_Word) SymName_4)) == (MR_Integer) 1))
  {
    MR_Word ModuleName0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SymName_4, (MR_Integer) 0))));
    MR_String PlainName_10 = ((MR_String) ((MR_hl_field(MR_mktag(1), SymName_4, (MR_Integer) 1))));
    MR_Word MangledModuleName_11;
    MR_String JavaSafePlainName_12;
    MR_String MangledName_17;
    MR_String MaybeFlippedName_18;

    parse_tree__java_names__mangle_sym_name_for_java_2_3_p_0(ModuleName0_9, (MR_Integer) 0, &MangledModuleName_11);
    MangledName_17 = parse_tree__prog_foreign__name_mangle_no_leading_digit_1_f_0(PlainName_10);
    switch (QualKind_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        MaybeFlippedName_18 = MangledName_17;
        break;
      case (MR_Integer) 1:
        MaybeFlippedName_18 = parse_tree__java_names__flip_initial_case_1_f_0(MangledName_17);
        break;
    }
    JavaSafePlainName_12 = parse_tree__java_names__make_valid_java_symbol_name_1_f_0(MaybeFlippedName_18);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *MangledSymName_6 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MangledModuleName_11));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (JavaSafePlainName_12));
    }
  }
  else
  {
    MR_String Name_7 = ((MR_String) ((MR_hl_field(MR_mktag(0), SymName_4, (MR_Integer) 0))));
    MR_String JavaSafeName_8;
    MR_String MangledName_22;
    MR_String MaybeFlippedName_23;

    MangledName_22 = parse_tree__prog_foreign__name_mangle_no_leading_digit_1_f_0(Name_7);
    switch (QualKind_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        MaybeFlippedName_23 = MangledName_22;
        break;
      case (MR_Integer) 1:
        MaybeFlippedName_23 = parse_tree__java_names__flip_initial_case_1_f_0(MangledName_22);
        break;
    }
    JavaSafeName_8 = parse_tree__java_names__make_valid_java_symbol_name_1_f_0(MaybeFlippedName_23);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MangledSymName_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (JavaSafeName_8));
    }
  }
}

MR_String MR_CALL 
parse_tree__java_names__flip_initial_case_1_f_0(
  MR_String S0_3)
{
  {
    MR_bool succeeded;
    MR_String S_4;
    MR_Char First0_5;
    MR_String Rest_6;

    succeeded = mercury__string__first_char_3_p_3(S0_3, &First0_5, &Rest_6);
    if (succeeded)
    {
      MR_Char First_7;

      succeeded = mercury__char__is_upper_1_p_0(First0_5);
      if (succeeded)
        First_7 = mercury__char__to_lower_1_f_0(First0_5);
      else
      {
        succeeded = mercury__char__is_lower_1_p_0(First0_5);
        if (succeeded)
          First_7 = mercury__char__to_upper_1_f_0(First0_5);
        else
          First_7 = First0_5;
      }
      mercury__string__first_char_3_p_4(&S_4, First_7, Rest_6);
    }
    else
      S_4 = S0_3;
    return S_4;
  }
}

MR_String MR_CALL 
parse_tree__java_names__make_valid_java_symbol_name_1_f_0(
  MR_String SymName_3)
{
  {
    MR_bool succeeded;
    MR_String ValidSymName_4;

    {
      MR_Integer case_num_0 = (MR_Integer) -1;

      switch (MR_nth_code_unit(SymName_3, 0)) {
        case (MR_Integer) 97:
          if (MR_offset_streq(1, SymName_3, (MR_String) "abstract"))
            case_num_0 = (MR_Integer) 0;
          break;
        case (MR_Integer) 98:
          switch (MR_nth_code_unit(SymName_3, 1)) {
            case (MR_Integer) 111:
              if (MR_offset_streq(2, SymName_3, (MR_String) "boolean"))
                case_num_0 = (MR_Integer) 1;
              break;
            case (MR_Integer) 114:
              if (MR_offset_streq(2, SymName_3, (MR_String) "break"))
                case_num_0 = (MR_Integer) 2;
              break;
            case (MR_Integer) 121:
              if (MR_offset_streq(2, SymName_3, (MR_String) "byte"))
                case_num_0 = (MR_Integer) 3;
              break;
          }
          break;
        case (MR_Integer) 99:
          switch (MR_nth_code_unit(SymName_3, 1)) {
            case (MR_Integer) 97:
              switch (MR_nth_code_unit(SymName_3, 2)) {
                case (MR_Integer) 115:
                  if (MR_offset_streq(3, SymName_3, (MR_String) "case"))
                    case_num_0 = (MR_Integer) 4;
                  break;
                case (MR_Integer) 116:
                  if (MR_offset_streq(3, SymName_3, (MR_String) "catch"))
                    case_num_0 = (MR_Integer) 5;
                  break;
              }
              break;
            case (MR_Integer) 104:
              if (MR_offset_streq(2, SymName_3, (MR_String) "char"))
                case_num_0 = (MR_Integer) 6;
              break;
            case (MR_Integer) 108:
              if (MR_offset_streq(2, SymName_3, (MR_String) "class"))
                case_num_0 = (MR_Integer) 7;
              break;
            case (MR_Integer) 111:
              if (((MR_nth_code_unit(SymName_3, 2)) == (MR_Integer) 110))
                switch (MR_nth_code_unit(SymName_3, 3)) {
                  case (MR_Integer) 115:
                    if (MR_offset_streq(4, SymName_3, (MR_String) "const"))
                      case_num_0 = (MR_Integer) 8;
                    break;
                  case (MR_Integer) 116:
                    if (MR_offset_streq(4, SymName_3, (MR_String) "continue"))
                      case_num_0 = (MR_Integer) 9;
                    break;
                }
              break;
          }
          break;
        case (MR_Integer) 100:
          switch (MR_nth_code_unit(SymName_3, 1)) {
            case (MR_Integer) 101:
              if (MR_offset_streq(2, SymName_3, (MR_String) "default"))
                case_num_0 = (MR_Integer) 10;
              break;
            case (MR_Integer) 111:
              switch (MR_nth_code_unit(SymName_3, 2)) {
                case (MR_Integer) 0:
                  case_num_0 = (MR_Integer) 11;
                  break;
                case (MR_Integer) 117:
                  if (MR_offset_streq(3, SymName_3, (MR_String) "double"))
                    case_num_0 = (MR_Integer) 12;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 101:
          switch (MR_nth_code_unit(SymName_3, 1)) {
            case (MR_Integer) 108:
              if (MR_offset_streq(2, SymName_3, (MR_String) "else"))
                case_num_0 = (MR_Integer) 13;
              break;
            case (MR_Integer) 110:
              if (MR_offset_streq(2, SymName_3, (MR_String) "enum"))
                case_num_0 = (MR_Integer) 14;
              break;
            case (MR_Integer) 120:
              if (MR_offset_streq(2, SymName_3, (MR_String) "extends"))
                case_num_0 = (MR_Integer) 15;
              break;
          }
          break;
        case (MR_Integer) 102:
          switch (MR_nth_code_unit(SymName_3, 1)) {
            case (MR_Integer) 97:
              if (MR_offset_streq(2, SymName_3, (MR_String) "false"))
                case_num_0 = (MR_Integer) 16;
              break;
            case (MR_Integer) 105:
              if (((((((MR_nth_code_unit(SymName_3, 2)) == (MR_Integer) 110)) && (((MR_nth_code_unit(SymName_3, 3)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(SymName_3, 4)) == (MR_Integer) 108))))
                switch (MR_nth_code_unit(SymName_3, 5)) {
                  case (MR_Integer) 0:
                    case_num_0 = (MR_Integer) 17;
                    break;
                  case (MR_Integer) 108:
                    if (MR_offset_streq(6, SymName_3, (MR_String) "finally"))
                      case_num_0 = (MR_Integer) 18;
                    break;
                }
              break;
            case (MR_Integer) 108:
              if (MR_offset_streq(2, SymName_3, (MR_String) "float"))
                case_num_0 = (MR_Integer) 19;
              break;
            case (MR_Integer) 111:
              if (MR_offset_streq(2, SymName_3, (MR_String) "for"))
                case_num_0 = (MR_Integer) 20;
              break;
          }
          break;
        case (MR_Integer) 103:
          if (MR_offset_streq(1, SymName_3, (MR_String) "goto"))
            case_num_0 = (MR_Integer) 21;
          break;
        case (MR_Integer) 105:
          switch (MR_nth_code_unit(SymName_3, 1)) {
            case (MR_Integer) 102:
              if (MR_offset_streq(2, SymName_3, (MR_String) "if"))
                case_num_0 = (MR_Integer) 22;
              break;
            case (MR_Integer) 109:
              if (((MR_nth_code_unit(SymName_3, 2)) == (MR_Integer) 112))
                switch (MR_nth_code_unit(SymName_3, 3)) {
                  case (MR_Integer) 108:
                    if (MR_offset_streq(4, SymName_3, (MR_String) "implements"))
                      case_num_0 = (MR_Integer) 23;
                    break;
                  case (MR_Integer) 111:
                    if (MR_offset_streq(4, SymName_3, (MR_String) "import"))
                      case_num_0 = (MR_Integer) 24;
                    break;
                }
              break;
            case (MR_Integer) 110:
              switch (MR_nth_code_unit(SymName_3, 2)) {
                case (MR_Integer) 115:
                  if (MR_offset_streq(3, SymName_3, (MR_String) "instanceof"))
                    case_num_0 = (MR_Integer) 25;
                  break;
                case (MR_Integer) 116:
                  switch (MR_nth_code_unit(SymName_3, 3)) {
                    case (MR_Integer) 0:
                      case_num_0 = (MR_Integer) 26;
                      break;
                    case (MR_Integer) 101:
                      if (MR_offset_streq(4, SymName_3, (MR_String) "interface"))
                        case_num_0 = (MR_Integer) 27;
                      break;
                  }
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 108:
          if (MR_offset_streq(1, SymName_3, (MR_String) "long"))
            case_num_0 = (MR_Integer) 28;
          break;
        case (MR_Integer) 110:
          switch (MR_nth_code_unit(SymName_3, 1)) {
            case (MR_Integer) 97:
              if (MR_offset_streq(2, SymName_3, (MR_String) "native"))
                case_num_0 = (MR_Integer) 29;
              break;
            case (MR_Integer) 101:
              if (MR_offset_streq(2, SymName_3, (MR_String) "new"))
                case_num_0 = (MR_Integer) 30;
              break;
            case (MR_Integer) 117:
              if (MR_offset_streq(2, SymName_3, (MR_String) "null"))
                case_num_0 = (MR_Integer) 31;
              break;
          }
          break;
        case (MR_Integer) 112:
          switch (MR_nth_code_unit(SymName_3, 1)) {
            case (MR_Integer) 97:
              if (MR_offset_streq(2, SymName_3, (MR_String) "package"))
                case_num_0 = (MR_Integer) 32;
              break;
            case (MR_Integer) 114:
              switch (MR_nth_code_unit(SymName_3, 2)) {
                case (MR_Integer) 105:
                  if (MR_offset_streq(3, SymName_3, (MR_String) "private"))
                    case_num_0 = (MR_Integer) 33;
                  break;
                case (MR_Integer) 111:
                  if (MR_offset_streq(3, SymName_3, (MR_String) "protected"))
                    case_num_0 = (MR_Integer) 34;
                  break;
              }
              break;
            case (MR_Integer) 117:
              if (MR_offset_streq(2, SymName_3, (MR_String) "public"))
                case_num_0 = (MR_Integer) 35;
              break;
          }
          break;
        case (MR_Integer) 114:
          if (MR_offset_streq(1, SymName_3, (MR_String) "return"))
            case_num_0 = (MR_Integer) 36;
          break;
        case (MR_Integer) 115:
          switch (MR_nth_code_unit(SymName_3, 1)) {
            case (MR_Integer) 104:
              if (MR_offset_streq(2, SymName_3, (MR_String) "short"))
                case_num_0 = (MR_Integer) 37;
              break;
            case (MR_Integer) 116:
              switch (MR_nth_code_unit(SymName_3, 2)) {
                case (MR_Integer) 97:
                  if (MR_offset_streq(3, SymName_3, (MR_String) "static"))
                    case_num_0 = (MR_Integer) 38;
                  break;
                case (MR_Integer) 114:
                  if (MR_offset_streq(3, SymName_3, (MR_String) "strictfp"))
                    case_num_0 = (MR_Integer) 39;
                  break;
              }
              break;
            case (MR_Integer) 117:
              if (MR_offset_streq(2, SymName_3, (MR_String) "super"))
                case_num_0 = (MR_Integer) 40;
              break;
            case (MR_Integer) 119:
              if (MR_offset_streq(2, SymName_3, (MR_String) "switch"))
                case_num_0 = (MR_Integer) 41;
              break;
            case (MR_Integer) 121:
              if (MR_offset_streq(2, SymName_3, (MR_String) "synchronized"))
                case_num_0 = (MR_Integer) 42;
              break;
          }
          break;
        case (MR_Integer) 116:
          switch (MR_nth_code_unit(SymName_3, 1)) {
            case (MR_Integer) 104:
              switch (MR_nth_code_unit(SymName_3, 2)) {
                case (MR_Integer) 105:
                  if (MR_offset_streq(3, SymName_3, (MR_String) "this"))
                    case_num_0 = (MR_Integer) 43;
                  break;
                case (MR_Integer) 114:
                  if (((((MR_nth_code_unit(SymName_3, 3)) == (MR_Integer) 111)) && (((MR_nth_code_unit(SymName_3, 4)) == (MR_Integer) 119))))
                    switch (MR_nth_code_unit(SymName_3, 5)) {
                      case (MR_Integer) 0:
                        case_num_0 = (MR_Integer) 44;
                        break;
                      case (MR_Integer) 115:
                        if (MR_offset_streq(6, SymName_3, (MR_String) "throws"))
                          case_num_0 = (MR_Integer) 45;
                        break;
                    }
                  break;
              }
              break;
            case (MR_Integer) 114:
              switch (MR_nth_code_unit(SymName_3, 2)) {
                case (MR_Integer) 97:
                  if (MR_offset_streq(3, SymName_3, (MR_String) "transient"))
                    case_num_0 = (MR_Integer) 46;
                  break;
                case (MR_Integer) 117:
                  if (MR_offset_streq(3, SymName_3, (MR_String) "true"))
                    case_num_0 = (MR_Integer) 47;
                  break;
                case (MR_Integer) 121:
                  if (MR_offset_streq(3, SymName_3, (MR_String) "try"))
                    case_num_0 = (MR_Integer) 48;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 118:
          if (((MR_nth_code_unit(SymName_3, 1)) == (MR_Integer) 111))
            switch (MR_nth_code_unit(SymName_3, 2)) {
              case (MR_Integer) 105:
                if (MR_offset_streq(3, SymName_3, (MR_String) "void"))
                  case_num_0 = (MR_Integer) 49;
                break;
              case (MR_Integer) 108:
                if (MR_offset_streq(3, SymName_3, (MR_String) "volatile"))
                  case_num_0 = (MR_Integer) 50;
                break;
            }
          break;
        case (MR_Integer) 119:
          if (MR_offset_streq(1, SymName_3, (MR_String) "while"))
            case_num_0 = (MR_Integer) 51;
          break;
      }
      if ((case_num_0 < (MR_Integer) 0))
        succeeded = MR_FALSE;
      else
      {
        // we found a match; look up the results
        ;
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
      ValidSymName_4 = mercury__string__f_43_43_2_f_0((MR_String) "mr_", SymName_3);
    else
    {
      MR_String Suffix_6;

      succeeded = mercury__string__append_3_p_1((MR_String) "mr_", &Suffix_6, SymName_3);
      if (succeeded)
      {
        MR_String Var_7;

        Var_7 = mercury__string__f_43_43_2_f_0((MR_String) "_", Suffix_6);
        ValidSymName_4 = mercury__string__f_43_43_2_f_0((MR_String) "mr_", Var_7);
      }
      else
        ValidSymName_4 = SymName_3;
    }
    return ValidSymName_4;
  }
}

static MR_bool MR_CALL 
parse_tree__java_names____Unify____csj_qual_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__java_names____Unify____csj_qual_kind_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__java_names____Compare____csj_qual_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__java_names____Compare____csj_qual_kind_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

// :- end_module parse_tree.java_names.
