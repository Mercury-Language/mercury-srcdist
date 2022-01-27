/*
** Automatically generated from `parse_util.m'
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


/* :- module parse_tree.parse_util. */
/* :- implementation. */

/*
INIT mercury__parse_tree__parse_util__init
ENDINIT
*/

#include "parse_tree.parse_util.mih"


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
#include "parse_tree.parse_sym_name.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_util__list__pti_list_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_util__maybe__pti_maybe_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__parse_util__pair__pti_pair_2__pseudo_list__pti_list_1__pseudo_1__pseudo_maybe__pti_maybe_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__parse_util__parse_tree__maybe_error__pti_maybe2_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_pair__pti_pair_2__pseudo_list__pti_list_1__pseudo_1__pseudo_maybe__pti_maybe_1__pseudo_1;

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_util__term__ti_term_1term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_util__parse_tree__maybe_error__pti_maybe1_1__pseudo_1;

static const MR_VA_PseudoTypeInfo_Struct2 parse_tree__parse_util____vpti_pred_2__plain_term__ti_term_1term__type_ctor_info_generic_0__pseudo_parse_tree__maybe_error__pti_maybe1_1__pseudo_1;

static MR_bool MR_CALL 
parse_tree__parse_util____Unify____maybe_pred_or_func_1_0_10001(
  MR_Box parse_tree__parse_util__wrapper_arg_1,
  MR_Box parse_tree__parse_util__wrapper_arg_2,
  MR_Box parse_tree__parse_util__wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_util____Compare____maybe_pred_or_func_1_0_10001(
  MR_Box parse_tree__parse_util__wrapper_arg_1,
  MR_Box * parse_tree__parse_util__wrapper_arg_2,
  MR_Box parse_tree__parse_util__wrapper_arg_3,
  MR_Box parse_tree__parse_util__wrapper_arg_4);

static MR_bool MR_CALL 
parse_tree__parse_util____Unify____parser_1_0_10001(
  MR_Box parse_tree__parse_util__wrapper_arg_1,
  MR_Box parse_tree__parse_util__wrapper_arg_2,
  MR_Box parse_tree__parse_util__wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_util____Compare____parser_1_0_10001(
  MR_Box parse_tree__parse_util__wrapper_arg_1,
  MR_Box * parse_tree__parse_util__wrapper_arg_2,
  MR_Box parse_tree__parse_util__wrapper_arg_3,
  MR_Box parse_tree__parse_util__wrapper_arg_4);

static void MR_CALL 
parse_tree__parse_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0(
  MR_String parse_tree__parse_util__Op_5,
  MR_Word parse_tree__parse_util__Term_6,
  MR_Word parse_tree__parse_util__List0_7,
  MR_Word * parse_tree__parse_util__OneOrMore_8);

static void MR_CALL 
parse_tree__parse_util__map_parser_one_or_more_4_p_0(
  MR_Word parse_tree__parse_util__TypeInfo_for_T_29,
  MR_Word parse_tree__parse_util__Parser_5,
  MR_Word parse_tree__parse_util__Head_6,
  MR_Word parse_tree__parse_util__Tail_7,
  MR_Word * parse_tree__parse_util__Result_8);


static /* final */ const MR_Box parse_tree__parse_util_scalar_common_1[3][1];




static /* final */ const MR_Box parse_tree__parse_util_scalar_common_1[3][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) ""))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) ","))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_util__list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_util__maybe__pti_maybe_1__pseudo_1 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__parse_util__pair__pti_pair_2__pseudo_list__pti_list_1__pseudo_1__pseudo_maybe__pti_maybe_1__pseudo_1 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__parse_util__list__pti_list_1__pseudo_1,
    (MR_PseudoTypeInfo) &parse_tree__parse_util__maybe__pti_maybe_1__pseudo_1
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__parse_util__parse_tree__maybe_error__pti_maybe2_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_pair__pti_pair_2__pseudo_list__pti_list_1__pseudo_1__pseudo_maybe__pti_maybe_1__pseudo_1 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe2_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &parse_tree__parse_util__pair__pti_pair_2__pseudo_list__pti_list_1__pseudo_1__pseudo_maybe__pti_maybe_1__pseudo_1
  }
};

const MR_TypeCtorInfo_Struct parse_tree__parse_util__parse_tree__parse_util__type_ctor_info_maybe_pred_or_func_1 = {
  (MR_Integer) 1,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (parse_tree__parse_util____Unify____maybe_pred_or_func_1_0_10001)),
  ((MR_Box) (parse_tree__parse_util____Compare____maybe_pred_or_func_1_0_10001)),
  (MR_String) "parse_tree.parse_util",
  (MR_String) "maybe_pred_or_func",
  {     NULL },
  {     (MR_PseudoTypeInfo) &parse_tree__parse_util__parse_tree__maybe_error__pti_maybe2_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_pair__pti_pair_2__pseudo_list__pti_list_1__pseudo_1__pseudo_maybe__pti_maybe_1__pseudo_1 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_util__term__ti_term_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_util__parse_tree__maybe_error__pti_maybe1_1__pseudo_1 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe1_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_VA_PseudoTypeInfo_Struct2 parse_tree__parse_util____vpti_pred_2__plain_term__ti_term_1term__type_ctor_info_generic_0__pseudo_parse_tree__maybe_error__pti_maybe1_1__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &parse_tree__parse_util__term__ti_term_1term__type_ctor_info_generic_0,
    (MR_PseudoTypeInfo) &parse_tree__parse_util__parse_tree__maybe_error__pti_maybe1_1__pseudo_1
  }
};

const MR_TypeCtorInfo_Struct parse_tree__parse_util__parse_tree__parse_util__type_ctor_info_parser_1 = {
  (MR_Integer) 1,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (parse_tree__parse_util____Unify____parser_1_0_10001)),
  ((MR_Box) (parse_tree__parse_util____Compare____parser_1_0_10001)),
  (MR_String) "parse_tree.parse_util",
  (MR_String) "parser",
  {     NULL },
  {     (MR_PseudoTypeInfo) &parse_tree__parse_util____vpti_pred_2__plain_term__ti_term_1term__type_ctor_info_generic_0__pseudo_parse_tree__maybe_error__pti_maybe1_1__pseudo_1 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static MR_bool MR_CALL 
parse_tree__parse_util____Unify____maybe_pred_or_func_1_0_10001(
  MR_Box parse_tree__parse_util__wrapper_arg_1,
  MR_Box parse_tree__parse_util__wrapper_arg_2,
  MR_Box parse_tree__parse_util__wrapper_arg_3)
{
  {
    MR_bool parse_tree__parse_util__succeeded;

    {
      parse_tree__parse_util__succeeded = parse_tree__parse_util____Unify____maybe_pred_or_func_1_0(((MR_Word) parse_tree__parse_util__wrapper_arg_1), ((MR_Word) parse_tree__parse_util__wrapper_arg_2), ((MR_Word) parse_tree__parse_util__wrapper_arg_3));
    }
    return parse_tree__parse_util__succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_util____Compare____maybe_pred_or_func_1_0_10001(
  MR_Box parse_tree__parse_util__wrapper_arg_1,
  MR_Box * parse_tree__parse_util__wrapper_arg_2,
  MR_Box parse_tree__parse_util__wrapper_arg_3,
  MR_Box parse_tree__parse_util__wrapper_arg_4)
{
  {
    MR_Word parse_tree__parse_util__conv0_HeadVar__1_1;

    {
      parse_tree__parse_util____Compare____maybe_pred_or_func_1_0(((MR_Word) parse_tree__parse_util__wrapper_arg_1), &parse_tree__parse_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__parse_util__wrapper_arg_3), ((MR_Word) parse_tree__parse_util__wrapper_arg_4));
    }
    *parse_tree__parse_util__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_util__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__parse_util____Unify____parser_1_0_10001(
  MR_Box parse_tree__parse_util__wrapper_arg_1,
  MR_Box parse_tree__parse_util__wrapper_arg_2,
  MR_Box parse_tree__parse_util__wrapper_arg_3)
{
  {
    MR_bool parse_tree__parse_util__succeeded;

    {
      parse_tree__parse_util__succeeded = parse_tree__parse_util____Unify____parser_1_0(((MR_Word) parse_tree__parse_util__wrapper_arg_1), ((MR_Word) parse_tree__parse_util__wrapper_arg_2), ((MR_Word) parse_tree__parse_util__wrapper_arg_3));
    }
    return parse_tree__parse_util__succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_util____Compare____parser_1_0_10001(
  MR_Box parse_tree__parse_util__wrapper_arg_1,
  MR_Box * parse_tree__parse_util__wrapper_arg_2,
  MR_Box parse_tree__parse_util__wrapper_arg_3,
  MR_Box parse_tree__parse_util__wrapper_arg_4)
{
  {
    MR_Word parse_tree__parse_util__conv0_HeadVar__1_1;

    {
      parse_tree__parse_util____Compare____parser_1_0(((MR_Word) parse_tree__parse_util__wrapper_arg_1), &parse_tree__parse_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__parse_util__wrapper_arg_3), ((MR_Word) parse_tree__parse_util__wrapper_arg_4));
    }
    *parse_tree__parse_util__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_util__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
parse_tree__parse_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0(
  MR_String parse_tree__parse_util__Op_5,
  MR_Word parse_tree__parse_util__Term_6,
  MR_Word parse_tree__parse_util__List0_7,
  MR_Word * parse_tree__parse_util__OneOrMore_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__parse_util__succeeded = ((MR_tag((MR_Word) parse_tree__parse_util__Term_6)) == (MR_mktag((MR_Integer) 0)));
        MR_Word parse_tree__parse_util__L_9;
        MR_Word parse_tree__parse_util__R_10;
        MR_Word parse_tree__parse_util__V_14_14;
        MR_Word parse_tree__parse_util__V_15_15;
        MR_Word parse_tree__parse_util__V_16_16;
        MR_Word parse_tree__parse_util__V_17_17;
        MR_String parse_tree__parse_util__V_21_21;
        MR_Word parse_tree__parse_util___Context_11;

        if (parse_tree__parse_util__succeeded)
          {
            parse_tree__parse_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_util__Term_6, (MR_Integer) 0)));
            parse_tree__parse_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_util__Term_6, (MR_Integer) 1)));
            parse_tree__parse_util___Context_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_util__Term_6, (MR_Integer) 2)));
            parse_tree__parse_util__succeeded = ((MR_tag((MR_Word) parse_tree__parse_util__V_14_14)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__parse_util__succeeded)
              {
                parse_tree__parse_util__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_util__V_14_14, (MR_Integer) 0)));
                parse_tree__parse_util__succeeded = (strcmp(parse_tree__parse_util__Op_5, parse_tree__parse_util__V_21_21) == 0);
                if (parse_tree__parse_util__succeeded)
                  {
                    parse_tree__parse_util__succeeded = ((MR_tag((MR_Word) parse_tree__parse_util__V_15_15)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__parse_util__succeeded)
                      {
                        parse_tree__parse_util__L_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_util__V_15_15, (MR_Integer) 0)));
                        parse_tree__parse_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_util__V_15_15, (MR_Integer) 1)));
                        parse_tree__parse_util__succeeded = ((MR_tag((MR_Word) parse_tree__parse_util__V_16_16)) == (MR_mktag((MR_Integer) 1)));
                        if (parse_tree__parse_util__succeeded)
                          {
                            parse_tree__parse_util__R_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_util__V_16_16, (MR_Integer) 0)));
                            parse_tree__parse_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_util__V_16_16, (MR_Integer) 1)));
                            parse_tree__parse_util__succeeded = (parse_tree__parse_util__V_17_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          }
                      }
                  }
              }
          }
        if (parse_tree__parse_util__succeeded)
          {
            MR_Word parse_tree__parse_util__RHead_12;
            MR_Word parse_tree__parse_util__RTail_13;
            MR_Word parse_tree__parse_util__V_18_18;
            MR_Word parse_tree__parse_util__V_19_19;

            {
              parse_tree__parse_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0(parse_tree__parse_util__Op_5, parse_tree__parse_util__R_10, parse_tree__parse_util__List0_7, &parse_tree__parse_util__V_18_18);
            }
            parse_tree__parse_util__RHead_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_util__V_18_18, (MR_Integer) 0)));
            parse_tree__parse_util__RTail_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_util__V_18_18, (MR_Integer) 1)));
            {
              parse_tree__parse_util__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_util__V_19_19, 0) = ((MR_Box) (parse_tree__parse_util__RHead_12));
              MR_hl_field(MR_mktag(1), parse_tree__parse_util__V_19_19, 1) = ((MR_Box) (parse_tree__parse_util__RTail_13));
            }
            /* direct tailcall eliminated */
            {
              MR_Word parse_tree__parse_util__Term__tmp_copy_6 = parse_tree__parse_util__L_9;
              MR_Word parse_tree__parse_util__List0__tmp_copy_7 = parse_tree__parse_util__V_19_19;

              parse_tree__parse_util__List0_7 = parse_tree__parse_util__List0__tmp_copy_7;
              parse_tree__parse_util__Term_6 = parse_tree__parse_util__Term__tmp_copy_6;
            }
            continue;
          }
        else
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            *parse_tree__parse_util__OneOrMore_8 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_util__Term_6));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__parse_util__List0_7));
          }
      }
      break;
    }
}

void MR_CALL 
parse_tree__parse_util____Compare____parser_1_0(
  MR_Word parse_tree__parse_util__TypeInfo_for_T_6,
  MR_Word * parse_tree__parse_util__HeadVar__1_1,
  MR_Word parse_tree__parse_util__HeadVar__2_2,
  MR_Word parse_tree__parse_util__HeadVar__3_3)
{
  {
    MR_bool parse_tree__parse_util__succeeded;
    MR_Word parse_tree__parse_util__Cast_HeadVar1_4 = parse_tree__parse_util__HeadVar__2_2;
    MR_Word parse_tree__parse_util__Cast_HeadVar2_5 = parse_tree__parse_util__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_pred_3_p_0(parse_tree__parse_util__HeadVar__1_1, (MR_Word) parse_tree__parse_util__Cast_HeadVar1_4, (MR_Word) parse_tree__parse_util__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
parse_tree__parse_util____Unify____parser_1_0(
  MR_Word parse_tree__parse_util__TypeInfo_for_T_5,
  MR_Word parse_tree__parse_util__HeadVar__1_1,
  MR_Word parse_tree__parse_util__HeadVar__2_2)
{
  {
    MR_bool parse_tree__parse_util__succeeded;
    MR_Word parse_tree__parse_util__Cast_HeadVar1_3 = parse_tree__parse_util__HeadVar__1_1;
    MR_Word parse_tree__parse_util__Cast_HeadVar2_4 = parse_tree__parse_util__HeadVar__2_2;

    {
      parse_tree__parse_util__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) parse_tree__parse_util__Cast_HeadVar1_3, (MR_Word) parse_tree__parse_util__Cast_HeadVar2_4);
    }
    return parse_tree__parse_util__succeeded;
  }
}

void MR_CALL 
parse_tree__parse_util____Compare____maybe_pred_or_func_1_0(
  MR_Word parse_tree__parse_util__TypeInfo_for_T_6,
  MR_Word * parse_tree__parse_util__HeadVar__1_1,
  MR_Word parse_tree__parse_util__HeadVar__2_2,
  MR_Word parse_tree__parse_util__HeadVar__3_3)
{
  {
    MR_bool parse_tree__parse_util__succeeded;
    MR_Word parse_tree__parse_util__TypeInfo_9_9;
    MR_Word parse_tree__parse_util__TypeInfo_11_11;
    MR_Word parse_tree__parse_util__TypeInfo_13_13;
    MR_Word parse_tree__parse_util__Cast_HeadVar1_4 = parse_tree__parse_util__HeadVar__2_2;
    MR_Word parse_tree__parse_util__Cast_HeadVar2_5 = parse_tree__parse_util__HeadVar__3_3;

    {
      parse_tree__parse_util__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__parse_util__TypeInfo_9_9, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(MR_mktag(0), parse_tree__parse_util__TypeInfo_9_9, 1) = ((MR_Box) (parse_tree__parse_util__TypeInfo_for_T_6));
    }
    {
      parse_tree__parse_util__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__parse_util__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1));
      MR_hl_field(MR_mktag(0), parse_tree__parse_util__TypeInfo_11_11, 1) = ((MR_Box) (parse_tree__parse_util__TypeInfo_for_T_6));
    }
    {
      parse_tree__parse_util__TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__parse_util__TypeInfo_13_13, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
      MR_hl_field(MR_mktag(0), parse_tree__parse_util__TypeInfo_13_13, 1) = ((MR_Box) (parse_tree__parse_util__TypeInfo_9_9));
      MR_hl_field(MR_mktag(0), parse_tree__parse_util__TypeInfo_13_13, 2) = ((MR_Box) (parse_tree__parse_util__TypeInfo_11_11));
    }
    {
      parse_tree__maybe_error____Compare____maybe2_2_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, parse_tree__parse_util__TypeInfo_13_13, parse_tree__parse_util__HeadVar__1_1, parse_tree__parse_util__Cast_HeadVar1_4, parse_tree__parse_util__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
parse_tree__parse_util____Unify____maybe_pred_or_func_1_0(
  MR_Word parse_tree__parse_util__TypeInfo_for_T_5,
  MR_Word parse_tree__parse_util__HeadVar__1_1,
  MR_Word parse_tree__parse_util__HeadVar__2_2)
{
  {
    MR_bool parse_tree__parse_util__succeeded;
    MR_Word parse_tree__parse_util__TypeInfo_8_8;
    MR_Word parse_tree__parse_util__TypeInfo_10_10;
    MR_Word parse_tree__parse_util__TypeInfo_12_12;
    MR_Word parse_tree__parse_util__Cast_HeadVar1_3 = parse_tree__parse_util__HeadVar__1_1;
    MR_Word parse_tree__parse_util__Cast_HeadVar2_4 = parse_tree__parse_util__HeadVar__2_2;

    {
      parse_tree__parse_util__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__parse_util__TypeInfo_8_8, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(MR_mktag(0), parse_tree__parse_util__TypeInfo_8_8, 1) = ((MR_Box) (parse_tree__parse_util__TypeInfo_for_T_5));
    }
    {
      parse_tree__parse_util__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__parse_util__TypeInfo_10_10, 0) = ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1));
      MR_hl_field(MR_mktag(0), parse_tree__parse_util__TypeInfo_10_10, 1) = ((MR_Box) (parse_tree__parse_util__TypeInfo_for_T_5));
    }
    {
      parse_tree__parse_util__TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__parse_util__TypeInfo_12_12, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
      MR_hl_field(MR_mktag(0), parse_tree__parse_util__TypeInfo_12_12, 1) = ((MR_Box) (parse_tree__parse_util__TypeInfo_8_8));
      MR_hl_field(MR_mktag(0), parse_tree__parse_util__TypeInfo_12_12, 2) = ((MR_Box) (parse_tree__parse_util__TypeInfo_10_10));
    }
    {
      parse_tree__parse_util__succeeded = parse_tree__maybe_error____Unify____maybe2_2_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, parse_tree__parse_util__TypeInfo_12_12, parse_tree__parse_util__Cast_HeadVar1_3, parse_tree__parse_util__Cast_HeadVar2_4);
    }
    return parse_tree__parse_util__succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_util__map_parser_one_or_more_4_p_0(
  MR_Word parse_tree__parse_util__TypeInfo_for_T_29,
  MR_Word parse_tree__parse_util__Parser_5,
  MR_Word parse_tree__parse_util__Head_6,
  MR_Word parse_tree__parse_util__Tail_7,
  MR_Word * parse_tree__parse_util__Result_8)
{
  {
    MR_bool parse_tree__parse_util__succeeded;
    MR_Word parse_tree__parse_util__HeadResult_9;
    void MR_CALL (* parse_tree__parse_util__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), parse_tree__parse_util__Parser_5, (MR_Integer) 1)));
    MR_Box parse_tree__parse_util__conv1_HeadResult_9;

    {
      parse_tree__parse_util__func_0(((MR_Box) parse_tree__parse_util__Parser_5), ((MR_Box) (parse_tree__parse_util__Head_6)), &parse_tree__parse_util__conv1_HeadResult_9);
    }
    parse_tree__parse_util__HeadResult_9 = ((MR_Word) parse_tree__parse_util__conv1_HeadResult_9);
    if ((parse_tree__parse_util__Tail_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if (((MR_tag((MR_Word) parse_tree__parse_util__HeadResult_9)) == (MR_mktag((MR_Integer) 0))))
        *parse_tree__parse_util__Result_8 = (MR_Word) parse_tree__parse_util__HeadResult_9;
      else
        {
          MR_Box parse_tree__parse_util__Item_11 = (MR_hl_field(MR_mktag(1), parse_tree__parse_util__HeadResult_9, (MR_Integer) 0));
          MR_Word parse_tree__parse_util__V_23_23;

          {
            parse_tree__parse_util__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), parse_tree__parse_util__V_23_23, 0) = parse_tree__parse_util__Item_11;
            MR_hl_field(MR_mktag(0), parse_tree__parse_util__V_23_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *parse_tree__parse_util__Result_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_util__V_23_23));
          }
        }
    else
      {
        MR_Word parse_tree__parse_util__HeadTail_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_util__Tail_7, (MR_Integer) 0)));
        MR_Word parse_tree__parse_util__TailTail_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_util__Tail_7, (MR_Integer) 1)));
        MR_Word parse_tree__parse_util__TailResult_14;

        {
          parse_tree__parse_util__map_parser_one_or_more_4_p_0(parse_tree__parse_util__TypeInfo_for_T_29, parse_tree__parse_util__Parser_5, parse_tree__parse_util__HeadTail_12, parse_tree__parse_util__TailTail_13, &parse_tree__parse_util__TailResult_14);
        }
        if (((MR_tag((MR_Word) parse_tree__parse_util__HeadResult_9)) == (MR_mktag((MR_Integer) 0))))
          {
            MR_Word parse_tree__parse_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_util__HeadResult_9, (MR_Integer) 0)));

            if (((MR_tag((MR_Word) parse_tree__parse_util__TailResult_14)) == (MR_mktag((MR_Integer) 0))))
              {
                MR_Word parse_tree__parse_util__TailSpecs_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_util__TailResult_14, (MR_Integer) 0)));
                MR_Word parse_tree__parse_util__V_22_22;

                {
                  parse_tree__parse_util__V_22_22 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__parse_util__V_31_31, parse_tree__parse_util__TailSpecs_16);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  *parse_tree__parse_util__Result_8 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_util__V_22_22));
                }
              }
            else
              *parse_tree__parse_util__Result_8 = (MR_Word) parse_tree__parse_util__HeadResult_9;
          }
        else
          {
            MR_Box parse_tree__parse_util__V_32_32 = (MR_hl_field(MR_mktag(1), parse_tree__parse_util__HeadResult_9, (MR_Integer) 0));

            if (((MR_tag((MR_Word) parse_tree__parse_util__TailResult_14)) == (MR_mktag((MR_Integer) 0))))
              *parse_tree__parse_util__Result_8 = parse_tree__parse_util__TailResult_14;
            else
              {
                MR_Word parse_tree__parse_util__TailItems_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_util__TailResult_14, (MR_Integer) 0)));
                MR_Word parse_tree__parse_util__V_21_21;

                {
                  parse_tree__parse_util__V_21_21 = mercury__list__one_or_more_cons_2_f_0(parse_tree__parse_util__TypeInfo_for_T_29, parse_tree__parse_util__V_32_32, parse_tree__parse_util__TailItems_20);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *parse_tree__parse_util__Result_8 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_util__V_21_21));
                }
              }
          }
      }
  }
}

void MR_CALL 
parse_tree__parse_util__map_parser_3_p_0(
  MR_Word parse_tree__parse_util__TypeInfo_for_T_22,
  MR_Word parse_tree__parse_util__Parser_1,
  MR_Word parse_tree__parse_util__HeadVar__2_2,
  MR_Word * parse_tree__parse_util__HeadVar__3_3)
{
  {
    MR_bool parse_tree__parse_util__succeeded;

    if ((parse_tree__parse_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *parse_tree__parse_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_util_scalar_common_1[2]);
      }
    else
      {
        MR_Word parse_tree__parse_util__Head_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_util__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word parse_tree__parse_util__Tail_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_util__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word parse_tree__parse_util__HeadResult_10;
        MR_Word parse_tree__parse_util__TailResult_11;
        void MR_CALL (* parse_tree__parse_util__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), parse_tree__parse_util__Parser_1, (MR_Integer) 1)));
        MR_Box parse_tree__parse_util__conv1_HeadResult_10;

        {
          parse_tree__parse_util__func_0(((MR_Box) parse_tree__parse_util__Parser_1), ((MR_Box) (parse_tree__parse_util__Head_7)), &parse_tree__parse_util__conv1_HeadResult_10);
        }
        parse_tree__parse_util__HeadResult_10 = ((MR_Word) parse_tree__parse_util__conv1_HeadResult_10);
        {
          parse_tree__parse_util__map_parser_3_p_0(parse_tree__parse_util__TypeInfo_for_T_22, parse_tree__parse_util__Parser_1, parse_tree__parse_util__Tail_8, &parse_tree__parse_util__TailResult_11);
        }
        if (((MR_tag((MR_Word) parse_tree__parse_util__HeadResult_10)) == (MR_mktag((MR_Integer) 0))))
          {
            MR_Word parse_tree__parse_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_util__HeadResult_10, (MR_Integer) 0)));

            if (((MR_tag((MR_Word) parse_tree__parse_util__TailResult_11)) == (MR_mktag((MR_Integer) 0))))
              {
                MR_Word parse_tree__parse_util__TailSpecs_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_util__TailResult_11, (MR_Integer) 0)));
                MR_Word parse_tree__parse_util__V_20_20;

                {
                  parse_tree__parse_util__V_20_20 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__parse_util__V_24_24, parse_tree__parse_util__TailSpecs_13);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  *parse_tree__parse_util__HeadVar__3_3 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_util__V_20_20));
                }
              }
            else
              *parse_tree__parse_util__HeadVar__3_3 = (MR_Word) parse_tree__parse_util__HeadResult_10;
          }
        else
          {
            MR_Box parse_tree__parse_util__V_25_25 = (MR_hl_field(MR_mktag(1), parse_tree__parse_util__HeadResult_10, (MR_Integer) 0));

            if (((MR_tag((MR_Word) parse_tree__parse_util__TailResult_11)) == (MR_mktag((MR_Integer) 0))))
              *parse_tree__parse_util__HeadVar__3_3 = parse_tree__parse_util__TailResult_11;
            else
              {
                MR_Word parse_tree__parse_util__TailItems_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_util__TailResult_11, (MR_Integer) 0)));
                MR_Word parse_tree__parse_util__V_19_19;

                {
                  parse_tree__parse_util__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_util__V_19_19, 0) = parse_tree__parse_util__V_25_25;
                  MR_hl_field(MR_mktag(1), parse_tree__parse_util__V_19_19, 1) = ((MR_Box) (parse_tree__parse_util__TailItems_18));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *parse_tree__parse_util__HeadVar__3_3 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_util__V_19_19));
                }
              }
          }
      }
  }
}

void MR_CALL 
parse_tree__parse_util__parse_list_3_p_0(
  MR_Word parse_tree__parse_util__TypeInfo_for_T_8,
  MR_Word parse_tree__parse_util__Parser_4,
  MR_Word parse_tree__parse_util__Term_5,
  MR_Word * parse_tree__parse_util__Result_6)
{
  {
    MR_bool parse_tree__parse_util__succeeded;
    MR_Word parse_tree__parse_util__List_7;
    MR_Word parse_tree__parse_util__Head_12;
    MR_Word parse_tree__parse_util__Tail_13;
    MR_Word parse_tree__parse_util__V_15_15;

    {
      parse_tree__parse_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0((MR_String) ",", parse_tree__parse_util__Term_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__parse_util__V_15_15);
    }
    parse_tree__parse_util__Head_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_util__V_15_15, (MR_Integer) 0)));
    parse_tree__parse_util__Tail_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_util__V_15_15, (MR_Integer) 1)));
    {
      parse_tree__parse_util__List_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_util__List_7, 0) = ((MR_Box) (parse_tree__parse_util__Head_12));
      MR_hl_field(MR_mktag(1), parse_tree__parse_util__List_7, 1) = ((MR_Box) (parse_tree__parse_util__Tail_13));
    }
    {
      parse_tree__parse_util__map_parser_3_p_0(parse_tree__parse_util__TypeInfo_for_T_8, parse_tree__parse_util__Parser_4, parse_tree__parse_util__List_7, parse_tree__parse_util__Result_6);
    }
  }
}

void MR_CALL 
parse_tree__parse_util__parse_one_or_more_3_p_0(
  MR_Word parse_tree__parse_util__TypeInfo_for_T_10,
  MR_Word parse_tree__parse_util__Parser_4,
  MR_Word parse_tree__parse_util__Term_5,
  MR_Word * parse_tree__parse_util__Result_6)
{
  {
    MR_bool parse_tree__parse_util__succeeded;
    MR_Word parse_tree__parse_util__Head_7;
    MR_Word parse_tree__parse_util__Tail_8;
    MR_Word parse_tree__parse_util__V_9_9;

    {
      parse_tree__parse_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0((MR_String) ",", parse_tree__parse_util__Term_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__parse_util__V_9_9);
    }
    parse_tree__parse_util__Head_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_util__V_9_9, (MR_Integer) 0)));
    parse_tree__parse_util__Tail_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_util__V_9_9, (MR_Integer) 1)));
    {
      parse_tree__parse_util__map_parser_one_or_more_4_p_0(parse_tree__parse_util__TypeInfo_for_T_10, parse_tree__parse_util__Parser_4, parse_tree__parse_util__Head_7, parse_tree__parse_util__Tail_8, parse_tree__parse_util__Result_6);
    }
  }
}

void MR_CALL 
parse_tree__parse_util__sum_to_list_2_p_0(
  MR_Word parse_tree__parse_util__TypeInfo_for_T_9,
  MR_Word parse_tree__parse_util__Term_3,
  MR_Word * parse_tree__parse_util__List_4)
{
  {
    MR_bool parse_tree__parse_util__succeeded;
    MR_Word parse_tree__parse_util__Head_5;
    MR_Word parse_tree__parse_util__Tail_6;
    MR_Word parse_tree__parse_util__V_8_8;

    {
      parse_tree__parse_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0((MR_String) "+", parse_tree__parse_util__Term_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__parse_util__V_8_8);
    }
    parse_tree__parse_util__Head_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_util__V_8_8, (MR_Integer) 0)));
    parse_tree__parse_util__Tail_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_util__V_8_8, (MR_Integer) 1)));
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *parse_tree__parse_util__List_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_util__Head_5));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__parse_util__Tail_6));
    }
  }
}

void MR_CALL 
parse_tree__parse_util__sum_to_one_or_more_2_p_0(
  MR_Word parse_tree__parse_util__TypeInfo_for_T_6,
  MR_Word parse_tree__parse_util__Term_3,
  MR_Word * parse_tree__parse_util__OneOrMore_4)
{
  {
    MR_bool parse_tree__parse_util__succeeded;

    {
      parse_tree__parse_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0((MR_String) "+", parse_tree__parse_util__Term_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__parse_util__OneOrMore_4);
    }
  }
}

void MR_CALL 
parse_tree__parse_util__one_or_more_to_conjunction_3_p_0(
  MR_Word parse_tree__parse_util__TypeInfo_for_T_20,
  MR_Word parse_tree__parse_util__Context_1,
  MR_Word parse_tree__parse_util__HeadVar__2_2,
  MR_Word * parse_tree__parse_util__Term_3)
{
  {
    MR_bool parse_tree__parse_util__succeeded;
    MR_Word parse_tree__parse_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_util__HeadVar__2_2, (MR_Integer) 1)));
    MR_Word parse_tree__parse_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_util__HeadVar__2_2, (MR_Integer) 0)));

    if ((parse_tree__parse_util__V_21_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *parse_tree__parse_util__Term_3 = parse_tree__parse_util__V_22_22;
    else
      {
        MR_Word parse_tree__parse_util__Second_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_util__V_21_21, (MR_Integer) 0)));
        MR_Word parse_tree__parse_util__Rest_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_util__V_21_21, (MR_Integer) 1)));
        MR_Word parse_tree__parse_util__Tail_12;
        MR_Word parse_tree__parse_util__V_14_14;
        MR_Word parse_tree__parse_util__V_17_17;
        MR_Word parse_tree__parse_util__V_18_18;

        {
          parse_tree__parse_util__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_util__V_14_14, 0) = ((MR_Box) (parse_tree__parse_util__Second_9));
          MR_hl_field(MR_mktag(0), parse_tree__parse_util__V_14_14, 1) = ((MR_Box) (parse_tree__parse_util__Rest_10));
        }
        {
          parse_tree__parse_util__one_or_more_to_conjunction_3_p_0(parse_tree__parse_util__TypeInfo_for_T_20, parse_tree__parse_util__Context_1, parse_tree__parse_util__V_14_14, &parse_tree__parse_util__Tail_12);
        }
        {
          parse_tree__parse_util__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_util__V_18_18, 0) = ((MR_Box) (parse_tree__parse_util__Tail_12));
          MR_hl_field(MR_mktag(1), parse_tree__parse_util__V_18_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_util__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_util__V_17_17, 0) = ((MR_Box) (parse_tree__parse_util__V_22_22));
          MR_hl_field(MR_mktag(1), parse_tree__parse_util__V_17_17, 1) = ((MR_Box) (parse_tree__parse_util__V_18_18));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__parse_util__Term_3 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__parse_util_scalar_common_1[1]));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__parse_util__V_17_17));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__parse_util__Context_1));
        }
      }
  }
}

void MR_CALL 
parse_tree__parse_util__conjunction_to_list_2_p_0(
  MR_Word parse_tree__parse_util__TypeInfo_for_T_9,
  MR_Word parse_tree__parse_util__Term_3,
  MR_Word * parse_tree__parse_util__List_4)
{
  {
    MR_bool parse_tree__parse_util__succeeded;
    MR_Word parse_tree__parse_util__Head_5;
    MR_Word parse_tree__parse_util__Tail_6;
    MR_Word parse_tree__parse_util__V_8_8;

    {
      parse_tree__parse_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0((MR_String) ",", parse_tree__parse_util__Term_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__parse_util__V_8_8);
    }
    parse_tree__parse_util__Head_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_util__V_8_8, (MR_Integer) 0)));
    parse_tree__parse_util__Tail_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_util__V_8_8, (MR_Integer) 1)));
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *parse_tree__parse_util__List_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_util__Head_5));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__parse_util__Tail_6));
    }
  }
}

void MR_CALL 
parse_tree__parse_util__conjunction_to_one_or_more_2_p_0(
  MR_Word parse_tree__parse_util__TypeInfo_for_T_6,
  MR_Word parse_tree__parse_util__Term_3,
  MR_Word * parse_tree__parse_util__OneOrMore_4)
{
  {
    MR_bool parse_tree__parse_util__succeeded;

    {
      parse_tree__parse_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0((MR_String) ",", parse_tree__parse_util__Term_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__parse_util__OneOrMore_4);
    }
  }
}

void MR_CALL 
parse_tree__parse_util__disjunction_to_list_2_p_0(
  MR_Word parse_tree__parse_util__TypeInfo_for_T_9,
  MR_Word parse_tree__parse_util__Term_3,
  MR_Word * parse_tree__parse_util__List_4)
{
  {
    MR_bool parse_tree__parse_util__succeeded;
    MR_Word parse_tree__parse_util__Head_5;
    MR_Word parse_tree__parse_util__Tail_6;
    MR_Word parse_tree__parse_util__V_8_8;

    {
      parse_tree__parse_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0((MR_String) ";", parse_tree__parse_util__Term_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__parse_util__V_8_8);
    }
    parse_tree__parse_util__Head_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_util__V_8_8, (MR_Integer) 0)));
    parse_tree__parse_util__Tail_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_util__V_8_8, (MR_Integer) 1)));
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *parse_tree__parse_util__List_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_util__Head_5));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__parse_util__Tail_6));
    }
  }
}

void MR_CALL 
parse_tree__parse_util__disjunction_to_one_or_more_2_p_0(
  MR_Word parse_tree__parse_util__TypeInfo_for_T_6,
  MR_Word parse_tree__parse_util__Term_3,
  MR_Word * parse_tree__parse_util__OneOrMore_4)
{
  {
    MR_bool parse_tree__parse_util__succeeded;

    {
      parse_tree__parse_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0((MR_String) ";", parse_tree__parse_util__Term_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__parse_util__OneOrMore_4);
    }
  }
}

MR_bool MR_CALL 
parse_tree__parse_util__list_term_to_term_list_2_p_0(
  MR_Word parse_tree__parse_util__Term_3,
  MR_Word * parse_tree__parse_util__Terms_4)
{
  {
    MR_bool parse_tree__parse_util__succeeded = ((MR_tag((MR_Word) parse_tree__parse_util__Term_3)) == (MR_mktag((MR_Integer) 0)));
    MR_Word parse_tree__parse_util__V_19_19;
    MR_Word parse_tree__parse_util__V_20_20;
    MR_String parse_tree__parse_util__V_21_21;
    MR_Word parse_tree__parse_util__V_18_18;

    if (parse_tree__parse_util__succeeded)
      {
        parse_tree__parse_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_util__Term_3, (MR_Integer) 0)));
        parse_tree__parse_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_util__Term_3, (MR_Integer) 1)));
        parse_tree__parse_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_util__Term_3, (MR_Integer) 2)));
        parse_tree__parse_util__succeeded = ((MR_tag((MR_Word) parse_tree__parse_util__V_20_20)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_util__succeeded)
          {
            parse_tree__parse_util__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_util__V_20_20, (MR_Integer) 0)));
            if ((parse_tree__parse_util__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                parse_tree__parse_util__succeeded = (strcmp(parse_tree__parse_util__V_21_21, (MR_String) "[]") == 0);
                if (parse_tree__parse_util__succeeded)
                  {
                    *parse_tree__parse_util__Terms_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    parse_tree__parse_util__succeeded = MR_TRUE;
                  }
              }
            else
              {
                MR_Word parse_tree__parse_util__HeadTerm_5;
                MR_Word parse_tree__parse_util__TailTerm_6;
                MR_Word parse_tree__parse_util__TailTerms_8;
                MR_Word parse_tree__parse_util__V_16_16;
                MR_Word parse_tree__parse_util__V_17_17;

                parse_tree__parse_util__succeeded = (strcmp(parse_tree__parse_util__V_21_21, (MR_String) "[|]") == 0);
                if (parse_tree__parse_util__succeeded)
                  {
                    parse_tree__parse_util__HeadTerm_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_util__V_19_19, (MR_Integer) 0)));
                    parse_tree__parse_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_util__V_19_19, (MR_Integer) 1)));
                    parse_tree__parse_util__succeeded = ((MR_tag((MR_Word) parse_tree__parse_util__V_16_16)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__parse_util__succeeded)
                      {
                        parse_tree__parse_util__TailTerm_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_util__V_16_16, (MR_Integer) 0)));
                        parse_tree__parse_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_util__V_16_16, (MR_Integer) 1)));
                        parse_tree__parse_util__succeeded = (parse_tree__parse_util__V_17_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (parse_tree__parse_util__succeeded)
                          {
                            {
                              parse_tree__parse_util__succeeded = parse_tree__parse_util__list_term_to_term_list_2_p_0(parse_tree__parse_util__TailTerm_6, &parse_tree__parse_util__TailTerms_8);
                            }
                            if (parse_tree__parse_util__succeeded)
                              {
                                {
                                  MR_Word base;
                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                  *parse_tree__parse_util__Terms_4 = base;
                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_util__HeadTerm_5));
                                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__parse_util__TailTerms_8));
                                }
                                parse_tree__parse_util__succeeded = MR_TRUE;
                              }
                          }
                      }
                  }
              }
          }
      }
    return parse_tree__parse_util__succeeded;
  }
}

void MR_CALL 
parse_tree__parse_util__parse_pred_or_func_and_args_general_5_p_0(
  MR_Word parse_tree__parse_util__TypeInfo_for_T_28,
  MR_Word parse_tree__parse_util__MaybeModuleName_6,
  MR_Word parse_tree__parse_util__PredAndArgsTerm_7,
  MR_Word parse_tree__parse_util__VarSet_8,
  MR_Word parse_tree__parse_util__ContextPieces_9,
  MR_Word * parse_tree__parse_util__PredAndArgsResult_10)
{
  {
    MR_bool parse_tree__parse_util__succeeded = ((MR_tag((MR_Word) parse_tree__parse_util__PredAndArgsTerm_7)) == (MR_mktag((MR_Integer) 0)));
    MR_Word parse_tree__parse_util__FunctorTerm_14;
    MR_Word parse_tree__parse_util__MaybeFuncResult_15;
    MR_Word parse_tree__parse_util__GenericVarSet_16;
    MR_Word parse_tree__parse_util__Result_18;
    MR_Word parse_tree__parse_util__FuncAndArgsTerm_11;
    MR_Word parse_tree__parse_util__FuncResultTerm_12;
    MR_Word parse_tree__parse_util__V_22_22;
    MR_String parse_tree__parse_util__V_23_23;
    MR_Word parse_tree__parse_util__V_24_24;
    MR_Word parse_tree__parse_util__V_25_25;
    MR_Word parse_tree__parse_util__V_26_26;
    MR_Word parse_tree__parse_util__V_13_13;

    if (parse_tree__parse_util__succeeded)
      {
        parse_tree__parse_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_util__PredAndArgsTerm_7, (MR_Integer) 0)));
        parse_tree__parse_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_util__PredAndArgsTerm_7, (MR_Integer) 1)));
        parse_tree__parse_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_util__PredAndArgsTerm_7, (MR_Integer) 2)));
        parse_tree__parse_util__succeeded = ((MR_tag((MR_Word) parse_tree__parse_util__V_22_22)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_util__succeeded)
          {
            parse_tree__parse_util__V_23_23 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_util__V_22_22, (MR_Integer) 0)));
            parse_tree__parse_util__succeeded = (strcmp(parse_tree__parse_util__V_23_23, (MR_String) "=") == 0);
            if (parse_tree__parse_util__succeeded)
              {
                parse_tree__parse_util__succeeded = ((MR_tag((MR_Word) parse_tree__parse_util__V_24_24)) == (MR_mktag((MR_Integer) 1)));
                if (parse_tree__parse_util__succeeded)
                  {
                    parse_tree__parse_util__FuncAndArgsTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_util__V_24_24, (MR_Integer) 0)));
                    parse_tree__parse_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_util__V_24_24, (MR_Integer) 1)));
                    parse_tree__parse_util__succeeded = ((MR_tag((MR_Word) parse_tree__parse_util__V_25_25)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__parse_util__succeeded)
                      {
                        parse_tree__parse_util__FuncResultTerm_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_util__V_25_25, (MR_Integer) 0)));
                        parse_tree__parse_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_util__V_25_25, (MR_Integer) 1)));
                        parse_tree__parse_util__succeeded = (parse_tree__parse_util__V_26_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                  }
              }
          }
      }
    if (parse_tree__parse_util__succeeded)
      {
        parse_tree__parse_util__FunctorTerm_14 = parse_tree__parse_util__FuncAndArgsTerm_11;
        {
          parse_tree__parse_util__MaybeFuncResult_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_util__MaybeFuncResult_15, 0) = ((MR_Box) (parse_tree__parse_util__FuncResultTerm_12));
        }
      }
    else
      {
        parse_tree__parse_util__FunctorTerm_14 = parse_tree__parse_util__PredAndArgsTerm_7;
        parse_tree__parse_util__MaybeFuncResult_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    {
      mercury__varset__coerce_2_p_0(parse_tree__parse_util__TypeInfo_for_T_28, (MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_util__VarSet_8, &parse_tree__parse_util__GenericVarSet_16);
    }
    if ((parse_tree__parse_util__MaybeModuleName_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        parse_tree__parse_sym_name__parse_sym_name_and_args_4_p_0(parse_tree__parse_util__TypeInfo_for_T_28, parse_tree__parse_util__GenericVarSet_16, parse_tree__parse_util__ContextPieces_9, parse_tree__parse_util__FunctorTerm_14, &parse_tree__parse_util__Result_18);
      }
    else
      {
        MR_Word parse_tree__parse_util__ModuleName_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_util__MaybeModuleName_6, (MR_Integer) 0)));

        {
          parse_tree__parse_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__parse_util__TypeInfo_for_T_28, parse_tree__parse_util__ModuleName_17, parse_tree__parse_util__FunctorTerm_14, parse_tree__parse_util__GenericVarSet_16, parse_tree__parse_util__ContextPieces_9, &parse_tree__parse_util__Result_18);
        }
      }
    if (((MR_tag((MR_Word) parse_tree__parse_util__Result_18)) == (MR_mktag((MR_Integer) 0))))
      *parse_tree__parse_util__PredAndArgsResult_10 = (MR_Word) parse_tree__parse_util__Result_18;
    else
      {
        MR_Word parse_tree__parse_util__SymName_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_util__Result_18, (MR_Integer) 0)));
        MR_Word parse_tree__parse_util__Args_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_util__Result_18, (MR_Integer) 1)));
        MR_Word parse_tree__parse_util__V_27_27;

        {
          parse_tree__parse_util__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_util__V_27_27, 0) = ((MR_Box) (parse_tree__parse_util__Args_20));
          MR_hl_field(MR_mktag(0), parse_tree__parse_util__V_27_27, 1) = ((MR_Box) (parse_tree__parse_util__MaybeFuncResult_15));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *parse_tree__parse_util__PredAndArgsResult_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_util__SymName_19));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__parse_util__V_27_27));
        }
      }
  }
}

MR_bool MR_CALL 
parse_tree__parse_util__parse_pred_or_func_and_args_4_p_0(
  MR_Word parse_tree__parse_util__TypeInfo_for_T_20,
  MR_Word parse_tree__parse_util__PredAndArgsTerm_5,
  MR_Word * parse_tree__parse_util__PredOrFunc_6,
  MR_Word * parse_tree__parse_util__SymName_7,
  MR_Word * parse_tree__parse_util__ArgTerms_8)
{
  {
    MR_bool parse_tree__parse_util__succeeded = ((MR_tag((MR_Word) parse_tree__parse_util__PredAndArgsTerm_5)) == (MR_mktag((MR_Integer) 0)));
    MR_Word parse_tree__parse_util__FuncAndArgsTerm_9;
    MR_Word parse_tree__parse_util__V_16_16;
    MR_Word parse_tree__parse_util__V_13_13;
    MR_String parse_tree__parse_util__V_14_14;
    MR_Word parse_tree__parse_util__V_15_15;
    MR_Word parse_tree__parse_util__V_17_17;
    MR_Word parse_tree__parse_util__V_11_11;
    MR_Word parse_tree__parse_util__FuncResultTerm_10;

    if (parse_tree__parse_util__succeeded)
      {
        parse_tree__parse_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_util__PredAndArgsTerm_5, (MR_Integer) 0)));
        parse_tree__parse_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_util__PredAndArgsTerm_5, (MR_Integer) 1)));
        parse_tree__parse_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_util__PredAndArgsTerm_5, (MR_Integer) 2)));
        parse_tree__parse_util__succeeded = ((MR_tag((MR_Word) parse_tree__parse_util__V_13_13)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_util__succeeded)
          {
            parse_tree__parse_util__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_util__V_13_13, (MR_Integer) 0)));
            parse_tree__parse_util__succeeded = (strcmp(parse_tree__parse_util__V_14_14, (MR_String) "=") == 0);
            if (parse_tree__parse_util__succeeded)
              {
                parse_tree__parse_util__succeeded = ((MR_tag((MR_Word) parse_tree__parse_util__V_15_15)) == (MR_mktag((MR_Integer) 1)));
                if (parse_tree__parse_util__succeeded)
                  {
                    parse_tree__parse_util__FuncAndArgsTerm_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_util__V_15_15, (MR_Integer) 0)));
                    parse_tree__parse_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_util__V_15_15, (MR_Integer) 1)));
                    parse_tree__parse_util__succeeded = ((MR_tag((MR_Word) parse_tree__parse_util__V_16_16)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__parse_util__succeeded)
                      {
                        parse_tree__parse_util__FuncResultTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_util__V_16_16, (MR_Integer) 0)));
                        parse_tree__parse_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_util__V_16_16, (MR_Integer) 1)));
                        parse_tree__parse_util__succeeded = (parse_tree__parse_util__V_17_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                  }
              }
          }
      }
    if (parse_tree__parse_util__succeeded)
      {
        MR_Word parse_tree__parse_util__TypeCtorInfo_21_21;
        MR_Word parse_tree__parse_util__TypeInfo_22_22;
        MR_Word parse_tree__parse_util__ArgTerms0_12;
        MR_Word parse_tree__parse_util__conv0_ArgTerms_8;

        {
          parse_tree__parse_util__succeeded = parse_tree__parse_sym_name__try_parse_sym_name_and_args_3_p_0(parse_tree__parse_util__TypeInfo_for_T_20, parse_tree__parse_util__FuncAndArgsTerm_9, parse_tree__parse_util__SymName_7, &parse_tree__parse_util__ArgTerms0_12);
        }
        if (parse_tree__parse_util__succeeded)
          {
            *parse_tree__parse_util__PredOrFunc_6 = (MR_Integer) 1;
            parse_tree__parse_util__TypeCtorInfo_21_21 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
            {
              parse_tree__parse_util__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_util__TypeInfo_22_22, 0) = ((MR_Box) (parse_tree__parse_util__TypeCtorInfo_21_21));
              MR_hl_field(MR_mktag(0), parse_tree__parse_util__TypeInfo_22_22, 1) = ((MR_Box) (parse_tree__parse_util__TypeInfo_for_T_20));
            }
            {
              parse_tree__parse_util__conv0_ArgTerms_8 = mercury__list__f_43_43_2_f_0(parse_tree__parse_util__TypeInfo_22_22, (MR_Word) parse_tree__parse_util__ArgTerms0_12, (MR_Word) parse_tree__parse_util__V_16_16);
            }
            *parse_tree__parse_util__ArgTerms_8 = (MR_Word) parse_tree__parse_util__conv0_ArgTerms_8;
            parse_tree__parse_util__succeeded = MR_TRUE;
          }
      }
    else
      {
        {
          parse_tree__parse_util__succeeded = parse_tree__parse_sym_name__try_parse_sym_name_and_args_3_p_0(parse_tree__parse_util__TypeInfo_for_T_20, parse_tree__parse_util__PredAndArgsTerm_5, parse_tree__parse_util__SymName_7, parse_tree__parse_util__ArgTerms_8);
        }
        if (parse_tree__parse_util__succeeded)
          {
            *parse_tree__parse_util__PredOrFunc_6 = (MR_Integer) 0;
            parse_tree__parse_util__succeeded = MR_TRUE;
          }
      }
    return parse_tree__parse_util__succeeded;
  }
}

MR_bool MR_CALL 
parse_tree__parse_util__parse_pred_or_func_name_and_arity_4_p_0(
  MR_Word parse_tree__parse_util__TypeInfo_for_T_17,
  MR_Word parse_tree__parse_util__PorFPredAndArityTerm_5,
  MR_Word * parse_tree__parse_util__PredOrFunc_6,
  MR_Word * parse_tree__parse_util__SymName_7,
  MR_Integer * parse_tree__parse_util__Arity_8)
{
  {
    MR_bool parse_tree__parse_util__succeeded = ((MR_tag((MR_Word) parse_tree__parse_util__PorFPredAndArityTerm_5)) == (MR_mktag((MR_Integer) 0)));
    MR_String parse_tree__parse_util__PredOrFuncStr_9;
    MR_Word parse_tree__parse_util__Args_10;
    MR_Word parse_tree__parse_util__Arg_12;
    MR_Word parse_tree__parse_util__ModuleName_13;
    MR_Word parse_tree__parse_util__V_14_14;
    MR_Word parse_tree__parse_util__V_15_15;
    MR_String parse_tree__parse_util__V_16_16;
    MR_Word parse_tree__parse_util__V_11_11;

    if (parse_tree__parse_util__succeeded)
      {
        parse_tree__parse_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_util__PorFPredAndArityTerm_5, (MR_Integer) 0)));
        parse_tree__parse_util__Args_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_util__PorFPredAndArityTerm_5, (MR_Integer) 1)));
        parse_tree__parse_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_util__PorFPredAndArityTerm_5, (MR_Integer) 2)));
        parse_tree__parse_util__succeeded = ((MR_tag((MR_Word) parse_tree__parse_util__V_14_14)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_util__succeeded)
          {
            parse_tree__parse_util__PredOrFuncStr_9 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_util__V_14_14, (MR_Integer) 0)));
            if ((strcmp(parse_tree__parse_util__PredOrFuncStr_9, (MR_String) "func") == 0))
              {
                *parse_tree__parse_util__PredOrFunc_6 = (MR_Integer) 1;
                parse_tree__parse_util__succeeded = MR_TRUE;
              }
            else
            if ((strcmp(parse_tree__parse_util__PredOrFuncStr_9, (MR_String) "pred") == 0))
              {
                *parse_tree__parse_util__PredOrFunc_6 = (MR_Integer) 0;
                parse_tree__parse_util__succeeded = MR_TRUE;
              }
            else
              parse_tree__parse_util__succeeded = MR_FALSE;
            if (parse_tree__parse_util__succeeded)
              {
                parse_tree__parse_util__succeeded = ((MR_tag((MR_Word) parse_tree__parse_util__Args_10)) == (MR_mktag((MR_Integer) 1)));
                if (parse_tree__parse_util__succeeded)
                  {
                    parse_tree__parse_util__Arg_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_util__Args_10, (MR_Integer) 0)));
                    parse_tree__parse_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_util__Args_10, (MR_Integer) 1)));
                    parse_tree__parse_util__succeeded = (parse_tree__parse_util__V_15_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (parse_tree__parse_util__succeeded)
                      {
                        parse_tree__parse_util__V_16_16 = (MR_String) "";
                        parse_tree__parse_util__ModuleName_13 = (MR_Word) &parse_tree__parse_util_scalar_common_1[0];
                        {
                          parse_tree__parse_util__succeeded = parse_tree__parse_util__parse_name_and_arity_4_p_0(parse_tree__parse_util__TypeInfo_for_T_17, parse_tree__parse_util__ModuleName_13, parse_tree__parse_util__Arg_12, parse_tree__parse_util__SymName_7, parse_tree__parse_util__Arity_8);
                        }
                      }
                  }
              }
          }
      }
    return parse_tree__parse_util__succeeded;
  }
}

MR_bool MR_CALL 
parse_tree__parse_util__parse_name_and_arity_unqualified_3_p_0(
  MR_Word parse_tree__parse_util__TypeInfo_for_T_9,
  MR_Word parse_tree__parse_util__PredAndArityTerm_4,
  MR_Word * parse_tree__parse_util__SymName_5,
  MR_Integer * parse_tree__parse_util__Arity_6)
{
  {
    MR_bool parse_tree__parse_util__succeeded;

    {
      parse_tree__parse_util__succeeded = parse_tree__parse_util__parse_name_and_arity_4_p_0(parse_tree__parse_util__TypeInfo_for_T_9, (MR_Word) &parse_tree__parse_util_scalar_common_1[0], parse_tree__parse_util__PredAndArityTerm_4, parse_tree__parse_util__SymName_5, parse_tree__parse_util__Arity_6);
    }
    return parse_tree__parse_util__succeeded;
  }
}

MR_bool MR_CALL 
parse_tree__parse_util__parse_name_and_arity_4_p_0(
  MR_Word parse_tree__parse_util__TypeInfo_for_T_20,
  MR_Word parse_tree__parse_util__ModuleName_5,
  MR_Word parse_tree__parse_util__PredAndArityTerm_6,
  MR_Word * parse_tree__parse_util__SymName_7,
  MR_Integer * parse_tree__parse_util__Arity_8)
{
  {
    MR_bool parse_tree__parse_util__succeeded = ((MR_tag((MR_Word) parse_tree__parse_util__PredAndArityTerm_6)) == (MR_mktag((MR_Integer) 0)));
    MR_Word parse_tree__parse_util__PredNameTerm_9;
    MR_Word parse_tree__parse_util__ArityTerm_10;
    MR_Word parse_tree__parse_util__V_13_13;
    MR_String parse_tree__parse_util__V_14_14;
    MR_Word parse_tree__parse_util__V_15_15;
    MR_Word parse_tree__parse_util__V_16_16;
    MR_Word parse_tree__parse_util__V_17_17;
    MR_Word parse_tree__parse_util__V_18_18;
    MR_Word parse_tree__parse_util__V_19_19;
    MR_Word parse_tree__parse_util__V_11_11;
    MR_Word parse_tree__parse_util__V_12_12;

    if (parse_tree__parse_util__succeeded)
      {
        parse_tree__parse_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_util__PredAndArityTerm_6, (MR_Integer) 0)));
        parse_tree__parse_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_util__PredAndArityTerm_6, (MR_Integer) 1)));
        parse_tree__parse_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_util__PredAndArityTerm_6, (MR_Integer) 2)));
        parse_tree__parse_util__succeeded = ((MR_tag((MR_Word) parse_tree__parse_util__V_13_13)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_util__succeeded)
          {
            parse_tree__parse_util__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_util__V_13_13, (MR_Integer) 0)));
            parse_tree__parse_util__succeeded = (strcmp(parse_tree__parse_util__V_14_14, (MR_String) "/") == 0);
            if (parse_tree__parse_util__succeeded)
              {
                parse_tree__parse_util__succeeded = ((MR_tag((MR_Word) parse_tree__parse_util__V_15_15)) == (MR_mktag((MR_Integer) 1)));
                if (parse_tree__parse_util__succeeded)
                  {
                    parse_tree__parse_util__PredNameTerm_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_util__V_15_15, (MR_Integer) 0)));
                    parse_tree__parse_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_util__V_15_15, (MR_Integer) 1)));
                    parse_tree__parse_util__succeeded = ((MR_tag((MR_Word) parse_tree__parse_util__V_16_16)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__parse_util__succeeded)
                      {
                        parse_tree__parse_util__ArityTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_util__V_16_16, (MR_Integer) 0)));
                        parse_tree__parse_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_util__V_16_16, (MR_Integer) 1)));
                        parse_tree__parse_util__succeeded = (parse_tree__parse_util__V_17_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (parse_tree__parse_util__succeeded)
                          {
                            {
                              parse_tree__parse_util__succeeded = parse_tree__parse_sym_name__try_parse_implicitly_qualified_sym_name_and_no_args_3_p_0(parse_tree__parse_util__TypeInfo_for_T_20, parse_tree__parse_util__ModuleName_5, parse_tree__parse_util__PredNameTerm_9, parse_tree__parse_util__SymName_7);
                            }
                            if (parse_tree__parse_util__succeeded)
                              {
                                parse_tree__parse_util__succeeded = ((MR_tag((MR_Word) parse_tree__parse_util__ArityTerm_10)) == (MR_mktag((MR_Integer) 0)));
                                if (parse_tree__parse_util__succeeded)
                                  {
                                    parse_tree__parse_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_util__ArityTerm_10, (MR_Integer) 0)));
                                    parse_tree__parse_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_util__ArityTerm_10, (MR_Integer) 1)));
                                    parse_tree__parse_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_util__ArityTerm_10, (MR_Integer) 2)));
                                    parse_tree__parse_util__succeeded = ((MR_tag((MR_Word) parse_tree__parse_util__V_18_18)) == (MR_mktag((MR_Integer) 1)));
                                    if (parse_tree__parse_util__succeeded)
                                      {
                                        *parse_tree__parse_util__Arity_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__parse_util__V_18_18, (MR_Integer) 0)));
                                        parse_tree__parse_util__succeeded = (parse_tree__parse_util__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                      }
                                  }
                              }
                          }
                      }
                  }
              }
          }
      }
    return parse_tree__parse_util__succeeded;
  }
}

void mercury__parse_tree__parse_util__init(void)
{
}

void mercury__parse_tree__parse_util__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__parse_util__parse_tree__parse_util__type_ctor_info_maybe_pred_or_func_1);
	MR_register_type_ctor_info(&parse_tree__parse_util__parse_tree__parse_util__type_ctor_info_parser_1);
}

void mercury__parse_tree__parse_util__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__parse_util__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module parse_tree.parse_util. */
