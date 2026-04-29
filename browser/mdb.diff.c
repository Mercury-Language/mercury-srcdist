/*
** Automatically generated from `diff.m'
** by the Mercury compiler,
** version rotd-2026-04-29
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


// :- module mdb.diff.
// :- implementation.

/*
INIT mercury__mdb__diff__init
ENDINIT
*/

#include "mdb.diff.mih"
#include "mdb.diff.mh"


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
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdb.mih"
#include "mdbcomp.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
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

static MR_Box MR_CALL 
mdb__diff__show_diff_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
mdb__diff__show_diff_6_p_0(
  MR_Word OutputStream_7,
  MR_Word Diff_8,
  MR_Integer STATE_VARIABLE_DiffNum_0_19,
  MR_Integer * STATE_VARIABLE_DiffNum_20);

static void MR_CALL 
mdb__diff__report_diffs_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
mdb__diff__compute_arg_diffs_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word RevPath0_3,
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

static /* final */ const MR_Box mdb__diff_scalar_common_3[1][9];

static /* final */ const MR_Box mdb__diff_scalar_common_4[1][5];

static /* final */ const MR_Box mdb__diff_scalar_common_5[1][3];




static /* final */ const MR_Box mdb__diff_scalar_common_1[1][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box mdb__diff_scalar_common_2[1][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
};

static /* final */ const MR_Box mdb__diff_scalar_common_3[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mdb__diff__mdb__diff__type_ctor_info_term_path_diff_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mdb__diff_scalar_common_4[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box mdb__diff_scalar_common_5[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mdb__diff_scalar_common_4[0])),
    ((MR_Box) (mdb__diff__show_diff_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "mdb.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"
#include "mdb.diff.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"

#line 40 "diff.m"
void 
ML_report_diffs(
  MR_Word OutputStream_8,
  MR_Integer Drop_9,
  MR_Integer Max_10,
  MR_Word Univ1_11,
  MR_Word Univ2_12)
#line 40 "diff.m"
{
#line 40 "diff.m"
	mdb__diff__report_diffs_7_p_0((MR_Word) OutputStream_8, (MR_Integer) Drop_9, (MR_Integer) Max_10, (MR_Word) Univ1_11, (MR_Word) Univ2_12);
}


static const MR_FA_TypeInfo_Struct1 mdb__diff__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) }
};

static const MR_PseudoTypeInfo mdb__diff__mdb__diff__field_types_term_path_diff_0_0[3] = {
  (MR_PseudoTypeInfo) (&mdb__diff__list__ti_list_1builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__univ__univ__type_ctor_info_univ_0),
  (MR_PseudoTypeInfo) (&mercury__univ__univ__type_ctor_info_univ_0)
};

static const MR_DuFunctorDesc mdb__diff__mdb__diff__du_functor_desc_term_path_diff_0_0 = {
  (MR_String) "term_path_diff",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mdb__diff__mdb__diff__field_types_term_path_diff_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdb__diff__mdb__diff__du_stag_ordered_term_path_diff_0_0[1] = { &mdb__diff__mdb__diff__du_functor_desc_term_path_diff_0_0 };

static const MR_DuPtagLayout mdb__diff__mdb__diff__du_ptag_ordered_term_path_diff_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__diff__mdb__diff__du_stag_ordered_term_path_diff_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mdb__diff__mdb__diff__du_name_ordered_term_path_diff_0[1] = { &mdb__diff__mdb__diff__du_functor_desc_term_path_diff_0_0 };

static const MR_Integer mdb__diff__mdb__diff__functor_number_map_term_path_diff_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct mdb__diff__mdb__diff__type_ctor_info_term_path_diff_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__diff____Unify____term_path_diff_0_0_10001)),
  ((MR_Box) (mdb__diff____Compare____term_path_diff_0_0_10001)),
  (MR_String) "mdb.diff",
  (MR_String) "term_path_diff",
  { mdb__diff__mdb__diff__du_name_ordered_term_path_diff_0 },
  { mdb__diff__mdb__diff__du_ptag_ordered_term_path_diff_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  mdb__diff__mdb__diff__functor_number_map_term_path_diff_0,

};

static void MR_CALL 
mdb__diff____Compare____term_path_diff_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_12 == CastY_13);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&mdb__diff_scalar_common_1[0]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__univ____Compare____univ_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        mercury__univ____Compare____univ_0_0(HeadVar__1_1, ArgX3_10, ArgY3_11);
    }
  }
}

static MR_bool MR_CALL 
mdb__diff____Unify____term_path_diff_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&mdb__diff_scalar_common_1[0]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      succeeded = mercury__univ____Unify____univ_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
        succeeded = mercury__univ____Unify____univ_0_0(ArgX3_7, ArgY3_8);
    }
  }
  return succeeded;
}

static MR_Box MR_CALL 
mdb__diff__show_diff_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = mercury__string__int_to_string_1_f_0(((MR_Integer) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
mdb__diff__show_diff_6_p_0(
  MR_Word OutputStream_7,
  MR_Word Diff_8,
  MR_Integer STATE_VARIABLE_DiffNum_0_19,
  MR_Integer * STATE_VARIABLE_DiffNum_20)
{
  MR_Word TypeInfo_44_44;
  MR_Word TypeInfo_45_45;
  MR_Word Path_11;
  MR_Word UnivA_12;
  MR_Word UnivB_13;
  MR_String PathStr_14;
  MR_String FunctorA_15;
  MR_Integer ArityA_16;
  MR_String FunctorB_17;
  MR_Integer ArityB_18;
  MR_Box Var_25;
  MR_Box Var_27;
  MR_String Var_47;
  MR_String Var_63;
  MR_String Var_76;

  *STATE_VARIABLE_DiffNum_20 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_DiffNum_0_19 + (MR_Unsigned) 1);
  Path_11 = ((MR_Word) ((MR_hl_field(0, Diff_8, 0))));
  UnivA_12 = ((MR_Word) ((MR_hl_field(0, Diff_8, 1))));
  UnivB_13 = ((MR_Word) ((MR_hl_field(0, Diff_8, 2))));
  if ((Path_11 == (MR_Word) ((MR_Unsigned) 0U)))
    PathStr_14 = (MR_String) "root";
  else
  {
    MR_Integer Posn_84 = ((MR_Integer) ((MR_hl_field(1, Path_11, 0))));
    MR_Word Posns_85 = ((MR_Word) ((MR_hl_field(1, Path_11, 1))));
    MR_String PosnStr_86;
    MR_Word PosnsStrs_87;
    MR_Word Var_90;

    PosnStr_86 = mercury__string__int_to_string_1_f_0(Posn_84);
    PosnsStrs_87 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mdb__diff_scalar_common_5[0]), Posns_85);
    {
      Var_90 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_90, 0) = ((MR_Box) (PosnStr_86));
      MR_hl_field(1, Var_90, 1) = ((MR_Box) (PosnsStrs_87));
    }
    PathStr_14 = mercury__string__join_list_2_f_0((MR_String) "/", Var_90);
  }
  Var_25 = mercury__univ__univ_value_1_f_0(&TypeInfo_44_44, UnivA_12);
  mercury__deconstruct__functor_4_p_2(TypeInfo_44_44, Var_25, (MR_Integer) 2, &FunctorA_15, &ArityA_16);
  Var_27 = mercury__univ__univ_value_1_f_0(&TypeInfo_45_45, UnivB_13);
  mercury__deconstruct__functor_4_p_2(TypeInfo_45_45, Var_27, (MR_Integer) 2, &FunctorB_17, &ArityB_18);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mdb__diff_scalar_common_2[0]), *STATE_VARIABLE_DiffNum_20, &Var_47);
  mercury__io__write_string_4_p_0(OutputStream_7, Var_47);
  mercury__io__write_string_4_p_0(OutputStream_7, (MR_String) ": mismatch at ");
  mercury__io__write_string_4_p_0(OutputStream_7, PathStr_14);
  mercury__io__write_string_4_p_0(OutputStream_7, (MR_String) ": ");
  mercury__io__write_string_4_p_0(OutputStream_7, FunctorA_15);
  mercury__io__write_string_4_p_0(OutputStream_7, (MR_String) "/");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mdb__diff_scalar_common_2[0]), ArityA_16, &Var_63);
  mercury__io__write_string_4_p_0(OutputStream_7, Var_63);
  mercury__io__write_string_4_p_0(OutputStream_7, (MR_String) " vs ");
  mercury__io__write_string_4_p_0(OutputStream_7, FunctorB_17);
  mercury__io__write_string_4_p_0(OutputStream_7, (MR_String) "/");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mdb__diff_scalar_common_2[0]), ArityB_18, &Var_76);
  mercury__io__write_string_4_p_0(OutputStream_7, Var_76);
  mercury__io__write_string_4_p_0(OutputStream_7, (MR_String) "\n");
}

static void MR_CALL 
mdb__diff__report_diffs_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Integer conv0_STATE_VARIABLE_DiffNum_20;

  mdb__diff__show_diff_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv0_STATE_VARIABLE_DiffNum_20);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_DiffNum_20));
}

void MR_CALL 
mdb__diff__report_diffs_7_p_0(
  MR_Word OutputStream_8,
  MR_Integer Drop_9,
  MR_Integer Max_10,
  MR_Word Univ1_11,
  MR_Word Univ2_12)
{
  MR_bool succeeded;
  MR_Word Type1_14;
  MR_Word Type2_15;

  Type1_14 = mercury__univ__univ_type_1_f_0(Univ1_11);
  Type2_15 = mercury__univ__univ_type_1_f_0(Univ2_12);
  succeeded = mercury__type_desc____Unify____type_desc_0_0(Type1_14, Type2_15);
  if (succeeded)
  {
    MR_Word TypeInfo_27_145;
    MR_Word TypeInfo_28_146;
    MR_Word RevDiffs_16;
    MR_Word AllDiffs_17;
    MR_Integer NumAllDiffs_18;
    MR_String Functor1_132;
    MR_Word Args1_134;
    MR_String Functor2_135;
    MR_Word Args2_137;
    MR_Box Var_139;
    MR_Box Var_141;
    MR_Integer Var_133;
    MR_Integer Var_136;
    MR_Word Diffs_19;

    Var_139 = mercury__univ__univ_value_1_f_0(&TypeInfo_27_145, Univ1_11);
    mercury__deconstruct__deconstruct_5_p_2(TypeInfo_27_145, Var_139, (MR_Integer) 2, &Functor1_132, &Var_133, &Args1_134);
    Var_141 = mercury__univ__univ_value_1_f_0(&TypeInfo_28_146, Univ2_12);
    mercury__deconstruct__deconstruct_5_p_2(TypeInfo_28_146, Var_141, (MR_Integer) 2, &Functor2_135, &Var_136, &Args2_137);
    succeeded = (strcmp(Functor1_132, Functor2_135) == 0);
    if (succeeded)
      mdb__diff__compute_arg_diffs_6_p_0(Args1_134, Args2_137, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 1, (MR_Word) ((MR_Unsigned) 0U), &RevDiffs_16);
    else
    {
      MR_Word Path_138;
      MR_Word Var_144;

      mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) ((MR_Unsigned) 0U), &Path_138);
      {
        Var_144 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_144, 0) = ((MR_Box) (Path_138));
        MR_hl_field(0, Var_144, 1) = ((MR_Box) (Univ1_11));
        MR_hl_field(0, Var_144, 2) = ((MR_Box) (Univ2_12));
      }
      {
        RevDiffs_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, RevDiffs_16, 0) = ((MR_Box) (Var_144));
        MR_hl_field(1, RevDiffs_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    mercury__list__reverse_2_p_0((MR_Word) (&mdb__diff__mdb__diff__type_ctor_info_term_path_diff_0), RevDiffs_16, &AllDiffs_17);
    mercury__list__length_2_p_0((MR_Word) (&mdb__diff__mdb__diff__type_ctor_info_term_path_diff_0), AllDiffs_17, &NumAllDiffs_18);
    succeeded = mercury__list__drop_3_p_0((MR_Word) (&mdb__diff__mdb__diff__type_ctor_info_term_path_diff_0), Drop_9, AllDiffs_17, &Diffs_19);
    if (succeeded)
      succeeded = (Diffs_19 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      MR_Integer FirstShown_22 = (MR_Integer) ((MR_Unsigned) Drop_9 + (MR_Unsigned) 1);
      MR_Integer LastShown_23;
      MR_Word ShowDiffs_24;
      MR_Integer Var_31 = (MR_Integer) ((MR_Unsigned) Drop_9 + (MR_Unsigned) Max_10);
      MR_Word Var_48;
      MR_Box conv2_Var_25;
      MR_Box conv1_STATE_VARIABLE_IO_27;

      LastShown_23 = mercury__int__min_2_f_0(Var_31, NumAllDiffs_18);
      succeeded = (FirstShown_22 == LastShown_23);
      if (succeeded)
      {
        MR_String Var_71;
        MR_String Var_81;

        mercury__io__write_string_4_p_0(OutputStream_8, (MR_String) "There are ");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mdb__diff_scalar_common_2[0]), NumAllDiffs_18, &Var_71);
        mercury__io__write_string_4_p_0(OutputStream_8, Var_71);
        mercury__io__write_string_4_p_0(OutputStream_8, (MR_String) " diffs, showing diff ");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mdb__diff_scalar_common_2[0]), FirstShown_22, &Var_81);
        mercury__io__write_string_4_p_0(OutputStream_8, Var_81);
        mercury__io__write_string_4_p_0(OutputStream_8, (MR_String) ":\n");
      }
      else
      {
        MR_String Var_92;
        MR_String Var_102;
        MR_String Var_112;

        mercury__io__write_string_4_p_0(OutputStream_8, (MR_String) "There are ");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mdb__diff_scalar_common_2[0]), NumAllDiffs_18, &Var_92);
        mercury__io__write_string_4_p_0(OutputStream_8, Var_92);
        mercury__io__write_string_4_p_0(OutputStream_8, (MR_String) " diffs, showing diffs ");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mdb__diff_scalar_common_2[0]), FirstShown_22, &Var_102);
        mercury__io__write_string_4_p_0(OutputStream_8, Var_102);
        mercury__io__write_string_4_p_0(OutputStream_8, (MR_String) "-");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mdb__diff_scalar_common_2[0]), LastShown_23, &Var_112);
        mercury__io__write_string_4_p_0(OutputStream_8, Var_112);
        mercury__io__write_string_4_p_0(OutputStream_8, (MR_String) ":\n");
      }
      mercury__list__take_upto_3_p_0((MR_Word) (&mdb__diff__mdb__diff__type_ctor_info_term_path_diff_0), Max_10, Diffs_19, &ShowDiffs_24);
      {
        Var_48 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_48, 0) = ((MR_Box) (&mdb__diff_scalar_common_3[0]));
        MR_hl_field(0, Var_48, 1) = ((MR_Box) (mdb__diff__report_diffs_7_p_0_1));
        MR_hl_field(0, Var_48, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_48, 3) = ((MR_Box) (OutputStream_8));
      }
      mercury__list__foldl2_6_p_11((MR_Word) (&mdb__diff__mdb__diff__type_ctor_info_term_path_diff_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_48, ShowDiffs_24, ((MR_Box) (Drop_9)), &conv2_Var_25, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_27);
    }
    else
    {
      succeeded = (NumAllDiffs_18 == (MR_Integer) 0);
      if (succeeded)
        mercury__io__write_string_4_p_0(OutputStream_8, (MR_String) "There are no diffs.\n");
      else
      {
        succeeded = (NumAllDiffs_18 == (MR_Integer) 1);
        if (succeeded)
          mercury__io__write_string_4_p_0(OutputStream_8, (MR_String) "There is only one diff.\n");
        else
        {
          MR_String Var_123;

          mercury__io__write_string_4_p_0(OutputStream_8, (MR_String) "There are only ");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mdb__diff_scalar_common_2[0]), NumAllDiffs_18, &Var_123);
          mercury__io__write_string_4_p_0(OutputStream_8, Var_123);
          mercury__io__write_string_4_p_0(OutputStream_8, (MR_String) " diffs.\n");
        }
      }
    }
  }
  else
    mercury__io__write_string_4_p_0(OutputStream_8, (MR_String) "The two values are of different types.\n");
}

static void MR_CALL 
mdb__diff__compute_arg_diffs_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word RevPath0_3,
  MR_Integer ArgNum_4,
  MR_Word STATE_VARIABLE_RevDiffs_0_5,
  MR_Word * STATE_VARIABLE_RevDiffs_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_RevDiffs_6 = STATE_VARIABLE_RevDiffs_0_5;
      else
        {
          mercury__require__error_1_p_0((MR_String) "compute_arg_diffs: argument list mismatch");
          return;
        }
    else
    {
      MR_Word Var_42 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word Var_43 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));

      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__error_1_p_0((MR_String) "compute_arg_diffs: argument list mismatch");
          return;
        }
      else
      {
        MR_Word TypeInfo_27_57;
        MR_Word TypeInfo_28_58;
        MR_Word Arg2_30 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
        MR_Word Args2_31 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
        MR_Word Var_37;
        MR_Word STATE_VARIABLE_RevDiffs_1_38;
        MR_Integer Var_39;
        MR_String Functor1_44;
        MR_Word Args1_46;
        MR_String Functor2_47;
        MR_Word Args2_49;
        MR_Box Var_51;
        MR_Box Var_53;
        MR_Integer Var_45;
        MR_Integer Var_48;
        MR_Word next_value_of_HeadVar__1_1;
        MR_Word next_value_of_HeadVar__2_2;
        MR_Integer next_value_of_ArgNum_4;
        MR_Word next_value_of_STATE_VARIABLE_RevDiffs_0_5;

        {
          Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_37, 0) = ((MR_Box) (ArgNum_4));
          MR_hl_field(1, Var_37, 1) = ((MR_Box) (RevPath0_3));
        }
        Var_51 = mercury__univ__univ_value_1_f_0(&TypeInfo_27_57, Var_43);
        mercury__deconstruct__deconstruct_5_p_2(TypeInfo_27_57, Var_51, (MR_Integer) 2, &Functor1_44, &Var_45, &Args1_46);
        Var_53 = mercury__univ__univ_value_1_f_0(&TypeInfo_28_58, Arg2_30);
        mercury__deconstruct__deconstruct_5_p_2(TypeInfo_28_58, Var_53, (MR_Integer) 2, &Functor2_47, &Var_48, &Args2_49);
        succeeded = (strcmp(Functor1_44, Functor2_47) == 0);
        if (succeeded)
          mdb__diff__compute_arg_diffs_6_p_0(Args1_46, Args2_49, Var_37, (MR_Integer) 1, STATE_VARIABLE_RevDiffs_0_5, &STATE_VARIABLE_RevDiffs_1_38);
        else
        {
          MR_Word Path_50;
          MR_Word Var_56;

          mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_37, &Path_50);
          {
            Var_56 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_56, 0) = ((MR_Box) (Path_50));
            MR_hl_field(0, Var_56, 1) = ((MR_Box) (Var_43));
            MR_hl_field(0, Var_56, 2) = ((MR_Box) (Arg2_30));
          }
          {
            STATE_VARIABLE_RevDiffs_1_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, STATE_VARIABLE_RevDiffs_1_38, 0) = ((MR_Box) (Var_56));
            MR_hl_field(1, STATE_VARIABLE_RevDiffs_1_38, 1) = ((MR_Box) (STATE_VARIABLE_RevDiffs_0_5));
          }
        }
        Var_39 = (MR_Integer) ((MR_Unsigned) ArgNum_4 + (MR_Unsigned) 1);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Var_42;
        next_value_of_HeadVar__2_2 = Args2_31;
        next_value_of_ArgNum_4 = Var_39;
        next_value_of_STATE_VARIABLE_RevDiffs_0_5 = STATE_VARIABLE_RevDiffs_1_38;
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
  MR_bool succeeded;

  succeeded = mdb__diff____Unify____term_path_diff_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdb__diff____Compare____term_path_diff_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__diff____Compare____term_path_diff_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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
