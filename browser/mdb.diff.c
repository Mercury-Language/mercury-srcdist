/*
** Automatically generated from `diff.m'
** by the Mercury compiler,
** version rotd-2018-01-18
** configured for x86_64-pc-linux-gnu.
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


// :- module mdb.diff.
// :- implementation.

/*
INIT mercury__mdb__diff__init
ENDINIT
*/

#include "mdb.diff.mih"
#include "mdb.diff.mh"


#include "mdb.mih"
#include "mdbcomp.mih"
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
#include "deconstruct.mih"
#include "enum.mih"
#include "int.mih"
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
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_TypeInfo_Struct1 mdb__diff__list__ti_list_1builtin__type_ctor_info_int_0;

static const MR_PseudoTypeInfo mdb__diff__mdb__diff__field_types_term_path_diff_0_0[3];

static const MR_DuFunctorDesc mdb__diff__mdb__diff__du_functor_desc_term_path_diff_0_0;

static const MR_DuFunctorDescPtr mdb__diff__mdb__diff__du_stag_ordered_term_path_diff_0_0[1];

static const MR_DuPtagLayout mdb__diff__mdb__diff__du_ptag_ordered_term_path_diff_0[1];

static const MR_DuFunctorDescPtr mdb__diff__mdb__diff__du_name_ordered_term_path_diff_0[1];

static const MR_Integer mdb__diff__mdb__diff__functor_number_map_term_path_diff_0[1];

static void MR_CALL 
mdb__diff____Compare____term_path_diff_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mdb__diff____Unify____term_path_diff_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mdb__diff__show_diff_5_p_0(
  MR_Word Diff_6,
  MR_Integer STATE_VARIABLE_DiffNum_0_18,
  MR_Integer * STATE_VARIABLE_DiffNum_19);

static void MR_CALL 
mdb__diff__show_path_rest_3_p_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
mdb__diff__report_diffs_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
mdb__diff__compute_diffs_5_p_0(
  MR_Word Univ1_6,
  MR_Word Univ2_7,
  MR_Word STATE_VARIABLE_RevPath_0_17,
  MR_Word STATE_VARIABLE_RevDiffs_0_18,
  MR_Word * STATE_VARIABLE_RevDiffs_19);

static void MR_CALL 
mdb__diff__compute_arg_diffs_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_RevPath_0_3,
  MR_Integer ArgNum_4,
  MR_Word STATE_VARIABLE_RevDiffs_0_5,
  MR_Word * STATE_VARIABLE_RevDiffs_6);

static MR_bool MR_CALL 
mdb__diff____Unify____term_path_diff_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__diff____Compare____term_path_diff_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box mdb__diff_scalar_common_1[1][2];

static /* final */ const MR_Box mdb__diff_scalar_common_2[1][1];

static /* final */ const MR_Box mdb__diff_scalar_common_3[1][8];

static /* final */ const MR_Box mdb__diff_scalar_common_4[1][3];




static /* final */ const MR_Box mdb__diff_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box mdb__diff_scalar_common_2[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
};

static /* final */ const MR_Box mdb__diff_scalar_common_3[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mdb__diff__mdb__diff__type_ctor_info_term_path_diff_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mdb__diff_scalar_common_4[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mdb__diff_scalar_common_3[0])),
    ((MR_Box) (mdb__diff__report_diffs_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};



#include "io.mh"
#include "mdb.mh"
#include "string.mh"
#include "time.mh"
#include "mdb.diff.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"

#line 40 "diff.m"
void 
ML_report_diffs(
  MR_Integer Drop_7,
  MR_Integer Max_8,
  MR_Word Univ1_9,
  MR_Word Univ2_10)
#line 40 "diff.m"
{
#line 40 "diff.m"
	mdb__diff__report_diffs_6_p_0((MR_Integer) Drop_7, (MR_Integer) Max_8, (MR_Word) Univ1_9, (MR_Word) Univ2_10);
}


static const MR_FA_TypeInfo_Struct1 mdb__diff__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_PseudoTypeInfo mdb__diff__mdb__diff__field_types_term_path_diff_0_0[3] = {
  (MR_PseudoTypeInfo) &mdb__diff__list__ti_list_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__univ__univ__type_ctor_info_univ_0,
  (MR_PseudoTypeInfo) &mercury__univ__univ__type_ctor_info_univ_0
};

static const MR_DuFunctorDesc mdb__diff__mdb__diff__du_functor_desc_term_path_diff_0_0 = {
  (MR_String) "term_path_diff",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__diff__mdb__diff__field_types_term_path_diff_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mdb__diff__mdb__diff__du_stag_ordered_term_path_diff_0_0[1] = {
  &mdb__diff__mdb__diff__du_functor_desc_term_path_diff_0_0
};

static const MR_DuPtagLayout mdb__diff__mdb__diff__du_ptag_ordered_term_path_diff_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mdb__diff__mdb__diff__du_stag_ordered_term_path_diff_0_0
  }
};

static const MR_DuFunctorDescPtr mdb__diff__mdb__diff__du_name_ordered_term_path_diff_0[1] = {
  &mdb__diff__mdb__diff__du_functor_desc_term_path_diff_0_0
};

static const MR_Integer mdb__diff__mdb__diff__functor_number_map_term_path_diff_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdb__diff__mdb__diff__type_ctor_info_term_path_diff_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__diff____Unify____term_path_diff_0_0_10001)),
  ((MR_Box) (mdb__diff____Compare____term_path_diff_0_0_10001)),
  (MR_String) "mdb.diff",
  (MR_String) "term_path_diff",
  {     mdb__diff__mdb__diff__du_name_ordered_term_path_diff_0 },
  {     mdb__diff__mdb__diff__du_ptag_ordered_term_path_diff_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__diff__mdb__diff__functor_number_map_term_path_diff_0
};

static void MR_CALL 
mdb__diff____Compare____term_path_diff_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_13 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
      MR_Word Var_10;

      mercury__builtin__compare_3_p_0((MR_Word) &mdb__diff_scalar_common_1[0], &Var_10, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (Var_10 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_10;
      else
      {
        MR_Word Var_11;

        mercury__univ____Compare____univ_0_0(&Var_11, ArgX2_6, ArgY2_7);
        succeeded = (Var_11 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_11;
        else
          mercury__univ____Compare____univ_0_0(HeadVar__1_1, ArgX3_8, ArgY3_9);
      }
    }
  }
}

static MR_bool MR_CALL 
mdb__diff____Unify____term_path_diff_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_10 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Word ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mdb__diff_scalar_common_1[0], ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        succeeded = mercury__univ____Unify____univ_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
          succeeded = mercury__univ____Unify____univ_0_0(ArgX3_7, ArgY3_8);
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
mdb__diff__show_diff_5_p_0(
  MR_Word Diff_6,
  MR_Integer STATE_VARIABLE_DiffNum_0_18,
  MR_Integer * STATE_VARIABLE_DiffNum_19)
{
  {
    MR_Word TypeInfo_50_50;
    MR_Word TypeInfo_51_51;
    MR_Word Path_9;
    MR_Word Univ1_10;
    MR_Word Univ2_11;
    MR_String Functor1_14;
    MR_Integer Arity1_15;
    MR_String Functor2_16;
    MR_Integer Arity2_17;
    MR_Box Var_35;
    MR_Box Var_37;
    MR_String Var_53;
    MR_Word Var_59;
    MR_String Var_65;
    MR_String Var_78;

    *STATE_VARIABLE_DiffNum_19 = (STATE_VARIABLE_DiffNum_0_18 + (MR_Integer) 1);
    Var_59 = (MR_Word) &mdb__diff_scalar_common_2[0];
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_59, *STATE_VARIABLE_DiffNum_19, &Var_53);
    mercury__io__write_string_3_p_0(Var_53);
    mercury__io__write_string_3_p_0((MR_String) ": ");
    Path_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Diff_6, (MR_Integer) 0)));
    Univ1_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Diff_6, (MR_Integer) 1)));
    Univ2_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Diff_6, (MR_Integer) 2)));
    if ((Path_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      mercury__io__write_string_3_p_0((MR_String) "mismatch at root");
    }
    else
    {
      MR_Integer Posn_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), Path_9, (MR_Integer) 0)));
      MR_Word Posns_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), Path_9, (MR_Integer) 1)));

      mercury__io__write_int_3_p_0(Posn_12);
      mdb__diff__show_path_rest_3_p_0(Posns_13);
    }
    mercury__io__write_string_3_p_0((MR_String) ": ");
    Var_35 = mercury__univ__univ_value_1_f_0(&TypeInfo_50_50, Univ1_10);
    mercury__deconstruct__functor_4_p_2(TypeInfo_50_50, Var_35, (MR_Integer) 2, &Functor1_14, &Arity1_15);
    Var_37 = mercury__univ__univ_value_1_f_0(&TypeInfo_51_51, Univ2_11);
    mercury__deconstruct__functor_4_p_2(TypeInfo_51_51, Var_37, (MR_Integer) 2, &Functor2_16, &Arity2_17);
    mercury__io__write_string_3_p_0(Functor1_14);
    mercury__io__write_string_3_p_0((MR_String) "/");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_59, Arity1_15, &Var_65);
    mercury__io__write_string_3_p_0(Var_65);
    mercury__io__write_string_3_p_0((MR_String) " vs ");
    mercury__io__write_string_3_p_0(Functor2_16);
    mercury__io__write_string_3_p_0((MR_String) "/");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_59, Arity2_17, &Var_78);
    mercury__io__write_string_3_p_0(Var_78);
    mercury__io__write_string_3_p_0((MR_String) "\n");
  }
}

static void MR_CALL 
mdb__diff__show_path_rest_3_p_0(
  MR_Word HeadVar__1_1)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if (!((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
    {
      MR_Integer Posn_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Posns_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word next_value_of_HeadVar__1_1;

      mercury__io__write_string_3_p_0((MR_String) "/");
      mercury__io__write_int_3_p_0(Posn_7);
      // direct tailcall eliminated
      next_value_of_HeadVar__1_1 = Posns_8;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      continue;
    }
    break;
  }
}

static void MR_CALL 
mdb__diff__report_diffs_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv0_STATE_VARIABLE_DiffNum_19;

    mdb__diff__show_diff_5_p_0(((MR_Word) wrapper_arg_1), ((MR_Integer) wrapper_arg_2), &conv0_STATE_VARIABLE_DiffNum_19);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_DiffNum_19));
  }
}

void MR_CALL 
mdb__diff__report_diffs_6_p_0(
  MR_Integer Drop_7,
  MR_Integer Max_8,
  MR_Word Univ1_9,
  MR_Word Univ2_10)
{
  {
    MR_bool succeeded;
    MR_Word Type1_12;
    MR_Word Type2_13;

    Type1_12 = mercury__univ__univ_type_1_f_0(Univ1_9);
    Type2_13 = mercury__univ__univ_type_1_f_0(Univ2_10);
    succeeded = mercury__type_desc____Unify____type_desc_0_0(Type1_12, Type2_13);
    if (succeeded)
    {
      MR_Word TypeCtorInfo_59_59;
      MR_Word RevDiffs_14;
      MR_Word AllDiffs_15;
      MR_Integer NumAllDiffs_16;
      MR_Word Diffs_17;
      MR_Word Var_18;
      MR_Word Var_19;

      mdb__diff__compute_diffs_5_p_0(Univ1_9, Univ2_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &RevDiffs_14);
      TypeCtorInfo_59_59 = (MR_Word) &mdb__diff__mdb__diff__type_ctor_info_term_path_diff_0;
      mercury__list__reverse_2_p_0(TypeCtorInfo_59_59, RevDiffs_14, &AllDiffs_15);
      mercury__list__length_2_p_0(TypeCtorInfo_59_59, AllDiffs_15, &NumAllDiffs_16);
      succeeded = mercury__list__drop_3_p_0(TypeCtorInfo_59_59, Drop_7, AllDiffs_15, &Diffs_17);
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Diffs_17)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), Diffs_17, (MR_Integer) 0)));
          Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), Diffs_17, (MR_Integer) 1)));
        }
      }
      if (succeeded)
      {
        MR_Integer FirstShown_20 = (Drop_7 + (MR_Integer) 1);
        MR_Integer LastShown_21;
        MR_Word ShowDiffs_22;
        MR_Integer Var_29 = (Drop_7 + Max_8);
        MR_Integer Var_23;
        MR_Box conv2_Var_23;
        MR_Box conv1_STATE_VARIABLE_IO_25;

        LastShown_21 = mercury__int__min_2_f_0(Var_29, NumAllDiffs_16);
        succeeded = (FirstShown_20 == LastShown_21);
        if (succeeded)
        {
          MR_String Var_70;
          MR_Word Var_76;
          MR_String Var_80;

          mercury__io__write_string_3_p_0((MR_String) "There are ");
          Var_76 = (MR_Word) &mdb__diff_scalar_common_2[0];
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_76, NumAllDiffs_16, &Var_70);
          mercury__io__write_string_3_p_0(Var_70);
          mercury__io__write_string_3_p_0((MR_String) " diffs, showing diff ");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_76, FirstShown_20, &Var_80);
          mercury__io__write_string_3_p_0(Var_80);
          mercury__io__write_string_3_p_0((MR_String) ":\n");
        }
        else
        {
          MR_String Var_91;
          MR_Word Var_97;
          MR_String Var_101;
          MR_String Var_111;

          mercury__io__write_string_3_p_0((MR_String) "There are ");
          Var_97 = (MR_Word) &mdb__diff_scalar_common_2[0];
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_97, NumAllDiffs_16, &Var_91);
          mercury__io__write_string_3_p_0(Var_91);
          mercury__io__write_string_3_p_0((MR_String) " diffs, showing diffs ");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_97, FirstShown_20, &Var_101);
          mercury__io__write_string_3_p_0(Var_101);
          mercury__io__write_string_3_p_0((MR_String) "-");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_97, LastShown_21, &Var_111);
          mercury__io__write_string_3_p_0(Var_111);
          mercury__io__write_string_3_p_0((MR_String) ":\n");
        }
        mercury__list__take_upto_3_p_0(TypeCtorInfo_59_59, Max_8, Diffs_17, &ShowDiffs_22);
        mercury__list__foldl2_6_p_11(TypeCtorInfo_59_59, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &mdb__diff_scalar_common_4[0], ShowDiffs_22, ((MR_Box) (Drop_7)), &conv2_Var_23, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_25);
        Var_23 = ((MR_Integer) conv2_Var_23);
      }
      else
      {
        succeeded = (NumAllDiffs_16 == (MR_Integer) 0);
        if (succeeded)
        {
          mercury__io__write_string_3_p_0((MR_String) "There are no diffs.\n");
        }
        else
        {
          succeeded = (NumAllDiffs_16 == (MR_Integer) 1);
          if (succeeded)
          {
            mercury__io__write_string_3_p_0((MR_String) "There is only one diff.\n");
          }
          else
          {
            MR_String Var_122;

            mercury__io__write_string_3_p_0((MR_String) "There are only ");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &mdb__diff_scalar_common_2[0], NumAllDiffs_16, &Var_122);
            mercury__io__write_string_3_p_0(Var_122);
            mercury__io__write_string_3_p_0((MR_String) " diffs.\n");
          }
        }
      }
    }
    else
    {
      mercury__io__write_string_3_p_0((MR_String) "The two values are of different types.\n");
    }
  }
}

static void MR_CALL 
mdb__diff__compute_diffs_5_p_0(
  MR_Word Univ1_6,
  MR_Word Univ2_7,
  MR_Word STATE_VARIABLE_RevPath_0_17,
  MR_Word STATE_VARIABLE_RevDiffs_0_18,
  MR_Word * STATE_VARIABLE_RevDiffs_19)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_28_28;
    MR_Word TypeInfo_29_29;
    MR_String Functor1_10;
    MR_Word Args1_12;
    MR_String Functor2_13;
    MR_Word Args2_15;
    MR_Box Var_20;
    MR_Box Var_22;
    MR_Integer Var_11;
    MR_Integer Var_14;

    Var_20 = mercury__univ__univ_value_1_f_0(&TypeInfo_28_28, Univ1_6);
    mercury__deconstruct__deconstruct_5_p_2(TypeInfo_28_28, Var_20, (MR_Integer) 2, &Functor1_10, &Var_11, &Args1_12);
    Var_22 = mercury__univ__univ_value_1_f_0(&TypeInfo_29_29, Univ2_7);
    mercury__deconstruct__deconstruct_5_p_2(TypeInfo_29_29, Var_22, (MR_Integer) 2, &Functor2_13, &Var_14, &Args2_15);
    succeeded = (strcmp(Functor1_10, Functor2_13) == 0);
    if (succeeded)
    {
      mdb__diff__compute_arg_diffs_6_p_0(Args1_12, Args2_15, STATE_VARIABLE_RevPath_0_17, (MR_Integer) 1, STATE_VARIABLE_RevDiffs_0_18, STATE_VARIABLE_RevDiffs_19);
    }
    else
    {
      MR_Word Path_16;
      MR_Word Var_27;

      mercury__list__reverse_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, STATE_VARIABLE_RevPath_0_17, &Path_16);
      {
        Var_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_27, 0) = ((MR_Box) (Path_16));
        MR_hl_field(MR_mktag(0), Var_27, 1) = ((MR_Box) (Univ1_6));
        MR_hl_field(MR_mktag(0), Var_27, 2) = ((MR_Box) (Univ2_7));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_RevDiffs_19 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_27));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_RevDiffs_0_18));
      }
    }
  }
}

static void MR_CALL 
mdb__diff__compute_arg_diffs_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_RevPath_0_3,
  MR_Integer ArgNum_4,
  MR_Word STATE_VARIABLE_RevDiffs_0_5,
  MR_Word * STATE_VARIABLE_RevDiffs_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *STATE_VARIABLE_RevDiffs_6 = STATE_VARIABLE_RevDiffs_0_5;
      else
      {
        {
          mercury__require__error_1_p_0((MR_String) "compute_arg_diffs: argument list mismatch");
          return;
        }
      }
    else
    {
      MR_Word Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));

      if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__error_1_p_0((MR_String) "compute_arg_diffs: argument list mismatch");
          return;
        }
      }
      else
      {
        MR_Word TypeInfo_28_67;
        MR_Word TypeInfo_29_68;
        MR_Word Arg2_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
        MR_Word Args2_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
        MR_Word Var_38;
        MR_Word STATE_VARIABLE_RevDiffs_39_39;
        MR_Integer Var_40;
        MR_String Functor1_52;
        MR_Word Args1_54;
        MR_String Functor2_55;
        MR_Word Args2_57;
        MR_Box Var_59;
        MR_Box Var_61;
        MR_Integer Var_53;
        MR_Integer Var_56;
        MR_Word next_value_of_HeadVar__1_1;
        MR_Word next_value_of_HeadVar__2_2;
        MR_Integer next_value_of_ArgNum_4;
        MR_Word next_value_of_STATE_VARIABLE_RevDiffs_0_5;

        {
          Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (ArgNum_4));
          MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (STATE_VARIABLE_RevPath_0_3));
        }
        Var_59 = mercury__univ__univ_value_1_f_0(&TypeInfo_28_67, Var_44);
        mercury__deconstruct__deconstruct_5_p_2(TypeInfo_28_67, Var_59, (MR_Integer) 2, &Functor1_52, &Var_53, &Args1_54);
        Var_61 = mercury__univ__univ_value_1_f_0(&TypeInfo_29_68, Arg2_30);
        mercury__deconstruct__deconstruct_5_p_2(TypeInfo_29_68, Var_61, (MR_Integer) 2, &Functor2_55, &Var_56, &Args2_57);
        succeeded = (strcmp(Functor1_52, Functor2_55) == 0);
        if (succeeded)
        {
          mdb__diff__compute_arg_diffs_6_p_0(Args1_54, Args2_57, Var_38, (MR_Integer) 1, STATE_VARIABLE_RevDiffs_0_5, &STATE_VARIABLE_RevDiffs_39_39);
        }
        else
        {
          MR_Word Path_58;
          MR_Word Var_66;

          mercury__list__reverse_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, Var_38, &Path_58);
          {
            Var_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_66, 0) = ((MR_Box) (Path_58));
            MR_hl_field(MR_mktag(0), Var_66, 1) = ((MR_Box) (Var_44));
            MR_hl_field(MR_mktag(0), Var_66, 2) = ((MR_Box) (Arg2_30));
          }
          {
            STATE_VARIABLE_RevDiffs_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevDiffs_39_39, 0) = ((MR_Box) (Var_66));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevDiffs_39_39, 1) = ((MR_Box) (STATE_VARIABLE_RevDiffs_0_5));
          }
        }
        Var_40 = (ArgNum_4 + (MR_Integer) 1);
        // direct tailcall eliminated
        next_value_of_HeadVar__1_1 = Var_43;
        next_value_of_HeadVar__2_2 = Args2_31;
        next_value_of_ArgNum_4 = Var_40;
        next_value_of_STATE_VARIABLE_RevDiffs_0_5 = STATE_VARIABLE_RevDiffs_39_39;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        ArgNum_4 = next_value_of_ArgNum_4;
        STATE_VARIABLE_RevDiffs_0_5 = next_value_of_STATE_VARIABLE_RevDiffs_0_5;
        continue;
      }
    }
    break;
  }
}

static MR_bool MR_CALL 
mdb__diff____Unify____term_path_diff_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdb__diff____Unify____term_path_diff_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mdb__diff____Compare____term_path_diff_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__diff____Compare____term_path_diff_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__mdb__diff__init(void)
{
}

void mercury__mdb__diff__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mdb__diff__mdb__diff__type_ctor_info_term_path_diff_0);
}

void mercury__mdb__diff__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__mdb__diff__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module mdb.diff.
