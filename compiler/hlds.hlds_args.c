/*
** Automatically generated from `hlds_args.m'
** by the Mercury compiler,
** version rotd-2022-12-02
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


// :- module hlds.hlds_args.
// :- implementation.

/*
INIT mercury__hlds__hlds_args__init
ENDINIT
*/

#include "hlds.hlds_args.mih"


#include "assoc_list.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "cord.mih"
#include "enum.mih"
#include "hlds.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "term.mih"
#include "term_context.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "varset.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_args__hlds__hlds_args__pti_proc_arg_vector_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_args__list__pti_list_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_args__maybe__pti_maybe_1__pseudo_1;

static const MR_PseudoTypeInfo hlds__hlds_args__hlds__hlds_args__field_types_proc_arg_vector_1_0[8];

static const MR_ConstString hlds__hlds_args__hlds__hlds_args__field_names_proc_arg_vector_1_0[8];

static const MR_DuFunctorDesc hlds__hlds_args__hlds__hlds_args__du_functor_desc_proc_arg_vector_1_0;

static const MR_DuFunctorDescPtr hlds__hlds_args__hlds__hlds_args__du_stag_ordered_proc_arg_vector_1_0[1];

static const MR_DuPtagLayout hlds__hlds_args__hlds__hlds_args__du_ptag_ordered_proc_arg_vector_1[1];

static const MR_DuFunctorDescPtr hlds__hlds_args__hlds__hlds_args__du_name_ordered_proc_arg_vector_1[1];

static const MR_Integer hlds__hlds_args__hlds__hlds_args__functor_number_map_proc_arg_vector_1[1];

static MR_bool MR_CALL 
hlds__hlds_args____Unify____poly_arg_vector_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
hlds__hlds_args____Compare____poly_arg_vector_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
hlds__hlds_args____Unify____proc_arg_vector_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
hlds__hlds_args____Compare____proc_arg_vector_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);


static /* final */ const MR_Box hlds__hlds_args_scalar_common_1[1][8];




static /* final */ const MR_Box hlds__hlds_args_scalar_common_1[1][8] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};






static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_args__hlds__hlds_args__pti_proc_arg_vector_1__pseudo_1 = {
  &hlds__hlds_args__hlds__hlds_args__type_ctor_info_proc_arg_vector_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

const MR_TypeCtorInfo_Struct hlds__hlds_args__hlds__hlds_args__type_ctor_info_poly_arg_vector_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (hlds__hlds_args____Unify____poly_arg_vector_1_0_10001)),
  ((MR_Box) (hlds__hlds_args____Compare____poly_arg_vector_1_0_10001)),
  (MR_String) "hlds.hlds_args",
  (MR_String) "poly_arg_vector",
  { NULL },
  { (MR_PseudoTypeInfo) (&hlds__hlds_args__hlds__hlds_args__pti_proc_arg_vector_1__pseudo_1) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_args__list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_args__maybe__pti_maybe_1__pseudo_1 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_PseudoTypeInfo hlds__hlds_args__hlds__hlds_args__field_types_proc_arg_vector_1_0[8] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_args__list__pti_list_1__pseudo_1),
  (MR_PseudoTypeInfo) (&hlds__hlds_args__list__pti_list_1__pseudo_1),
  (MR_PseudoTypeInfo) (&hlds__hlds_args__list__pti_list_1__pseudo_1),
  (MR_PseudoTypeInfo) (&hlds__hlds_args__list__pti_list_1__pseudo_1),
  (MR_PseudoTypeInfo) (&hlds__hlds_args__list__pti_list_1__pseudo_1),
  (MR_PseudoTypeInfo) (&hlds__hlds_args__list__pti_list_1__pseudo_1),
  (MR_PseudoTypeInfo) (&hlds__hlds_args__list__pti_list_1__pseudo_1),
  (MR_PseudoTypeInfo) (&hlds__hlds_args__maybe__pti_maybe_1__pseudo_1)
};

static const MR_ConstString hlds__hlds_args__hlds__hlds_args__field_names_proc_arg_vector_1_0[8] = {
  (MR_String) "pav_instance_type_infos",
  (MR_String) "pav_instance_typeclass_infos",
  (MR_String) "pav_univ_type_infos",
  (MR_String) "pav_exist_type_infos",
  (MR_String) "pav_univ_typeclass_infos",
  (MR_String) "pav_exist_typeclass_infos",
  (MR_String) "pav_user_args",
  (MR_String) "pav_maybe_ret_value"
};

static const MR_DuFunctorDesc hlds__hlds_args__hlds__hlds_args__du_functor_desc_proc_arg_vector_1_0 = {
  (MR_String) "proc_arg_vector",
  INT16_C(8),
  UINT16_C(255),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__hlds_args__hlds__hlds_args__field_types_proc_arg_vector_1_0,
  hlds__hlds_args__hlds__hlds_args__field_names_proc_arg_vector_1_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__hlds_args__hlds__hlds_args__du_stag_ordered_proc_arg_vector_1_0[1] = {
  &hlds__hlds_args__hlds__hlds_args__du_functor_desc_proc_arg_vector_1_0
};

static const MR_DuPtagLayout hlds__hlds_args__hlds__hlds_args__du_ptag_ordered_proc_arg_vector_1[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__hlds_args__hlds__hlds_args__du_stag_ordered_proc_arg_vector_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__hlds_args__hlds__hlds_args__du_name_ordered_proc_arg_vector_1[1] = {
  &hlds__hlds_args__hlds__hlds_args__du_functor_desc_proc_arg_vector_1_0
};

static const MR_Integer hlds__hlds_args__hlds__hlds_args__functor_number_map_proc_arg_vector_1[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__hlds_args__hlds__hlds_args__type_ctor_info_proc_arg_vector_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_args____Unify____proc_arg_vector_1_0_10001)),
  ((MR_Box) (hlds__hlds_args____Compare____proc_arg_vector_1_0_10001)),
  (MR_String) "hlds.hlds_args",
  (MR_String) "proc_arg_vector",
  { hlds__hlds_args__hlds__hlds_args__du_name_ordered_proc_arg_vector_1 },
  { hlds__hlds_args__hlds__hlds_args__du_ptag_ordered_proc_arg_vector_1 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__hlds_args__hlds__hlds_args__functor_number_map_proc_arg_vector_1,

};

void MR_CALL 
hlds__hlds_args____Compare____poly_arg_vector_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  hlds__hlds_args____Compare____proc_arg_vector_1_0(TypeInfo_for_T_6, HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

void MR_CALL 
hlds__hlds_args____Compare____proc_arg_vector_1_0(
  MR_Word TypeInfo_for_T_29,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_27 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_28 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_27 == CastY_28);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 4))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 5))));
    MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))));
    MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 6))));
    MR_Word ArgX8_25 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))));
    MR_Word ArgY8_26 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 7))));
    MR_Word SubResult1_6;

    mercury__list____Compare____list_1_0(TypeInfo_for_T_29, &SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__list____Compare____list_1_0(TypeInfo_for_T_29, &SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__list____Compare____list_1_0(TypeInfo_for_T_29, &SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__list____Compare____list_1_0(TypeInfo_for_T_29, &SubResult4_15, ArgX4_13, ArgY4_14);
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            mercury__list____Compare____list_1_0(TypeInfo_for_T_29, &SubResult5_18, ArgX5_16, ArgY5_17);
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              mercury__list____Compare____list_1_0(TypeInfo_for_T_29, &SubResult6_21, ArgX6_19, ArgY6_20);
              succeeded = (SubResult6_21 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
              {
                MR_Word SubResult7_24;

                mercury__list____Compare____list_1_0(TypeInfo_for_T_29, &SubResult7_24, ArgX7_22, ArgY7_23);
                succeeded = (SubResult7_24 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult7_24;
                else
                  mercury__maybe____Compare____maybe_1_0(TypeInfo_for_T_29, HeadVar__1_1, ArgX8_25, ArgY8_26);
              }
            }
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
hlds__hlds_args____Unify____poly_arg_vector_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = hlds__hlds_args____Unify____proc_arg_vector_1_0(TypeInfo_for_T_5, Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

MR_bool MR_CALL 
hlds__hlds_args____Unify____proc_arg_vector_1_0(
  MR_Word TypeInfo_for_T_21,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_19 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_20 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_19 == CastY_20);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 6))));
    MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))));
    MR_Word ArgX8_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 7))));
    MR_Word ArgY8_18 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))));

    succeeded = mercury__list____Unify____list_1_0(TypeInfo_for_T_21, ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = mercury__list____Unify____list_1_0(TypeInfo_for_T_21, ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        succeeded = mercury__list____Unify____list_1_0(TypeInfo_for_T_21, ArgX3_7, ArgY3_8);
        if (succeeded)
        {
          succeeded = mercury__list____Unify____list_1_0(TypeInfo_for_T_21, ArgX4_9, ArgY4_10);
          if (succeeded)
          {
            succeeded = mercury__list____Unify____list_1_0(TypeInfo_for_T_21, ArgX5_11, ArgY5_12);
            if (succeeded)
            {
              succeeded = mercury__list____Unify____list_1_0(TypeInfo_for_T_21, ArgX6_13, ArgY6_14);
              if (succeeded)
              {
                succeeded = mercury__list____Unify____list_1_0(TypeInfo_for_T_21, ArgX7_15, ArgY7_16);
                if (succeeded)
                  succeeded = mercury__maybe____Unify____maybe_1_0(TypeInfo_for_T_21, ArgX8_17, ArgY8_18);
              }
            }
          }
        }
      }
    }
  }
  return succeeded;
}

MR_Word MR_CALL 
hlds__hlds_args__poly_arg_vector_to_list_1_f_0(
  MR_Word TypeInfo_for_T_4,
  MR_Word V_3)
{
  MR_Word HeadVar__2_2;

  HeadVar__2_2 = hlds__hlds_args__proc_arg_vector_to_list_1_f_0(TypeInfo_for_T_4, V_3);
  return HeadVar__2_2;
}

void MR_CALL 
hlds__hlds_args__poly_arg_vector_set_exist_typeclass_infos_3_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word ETCI_4,
  MR_Word STATE_VARIABLE_A_0_6,
  MR_Word * STATE_VARIABLE_A_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_A_0_6, (MR_Integer) 0))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_A_0_6, (MR_Integer) 1))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_A_0_6, (MR_Integer) 2))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_A_0_6, (MR_Integer) 3))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_A_0_6, (MR_Integer) 4))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_A_0_6, (MR_Integer) 6))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_A_0_6, (MR_Integer) 7))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_A_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 5) = ((MR_Box) (ETCI_4));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_16));
  }
}

void MR_CALL 
hlds__hlds_args__poly_arg_vector_set_univ_typeclass_infos_3_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word UTCI_4,
  MR_Word STATE_VARIABLE_A_0_6,
  MR_Word * STATE_VARIABLE_A_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_A_0_6, (MR_Integer) 0))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_A_0_6, (MR_Integer) 1))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_A_0_6, (MR_Integer) 2))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_A_0_6, (MR_Integer) 3))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_A_0_6, (MR_Integer) 5))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_A_0_6, (MR_Integer) 6))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_A_0_6, (MR_Integer) 7))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_A_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 4) = ((MR_Box) (UTCI_4));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_16));
  }
}

void MR_CALL 
hlds__hlds_args__poly_arg_vector_set_exist_type_infos_3_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word ETI_4,
  MR_Word STATE_VARIABLE_A_0_6,
  MR_Word * STATE_VARIABLE_A_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_A_0_6, (MR_Integer) 0))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_A_0_6, (MR_Integer) 1))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_A_0_6, (MR_Integer) 2))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_A_0_6, (MR_Integer) 4))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_A_0_6, (MR_Integer) 5))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_A_0_6, (MR_Integer) 6))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_A_0_6, (MR_Integer) 7))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_A_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 3) = ((MR_Box) (ETI_4));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_16));
  }
}

void MR_CALL 
hlds__hlds_args__poly_arg_vector_set_univ_type_infos_3_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word UTI_4,
  MR_Word STATE_VARIABLE_A_0_6,
  MR_Word * STATE_VARIABLE_A_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_A_0_6, (MR_Integer) 0))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_A_0_6, (MR_Integer) 1))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_A_0_6, (MR_Integer) 3))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_A_0_6, (MR_Integer) 4))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_A_0_6, (MR_Integer) 5))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_A_0_6, (MR_Integer) 6))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_A_0_6, (MR_Integer) 7))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_A_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 2) = ((MR_Box) (UTI_4));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_16));
  }
}

void MR_CALL 
hlds__hlds_args__poly_arg_vector_set_instance_typeclass_infos_3_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word ITCI_4,
  MR_Word STATE_VARIABLE_A_0_6,
  MR_Word * STATE_VARIABLE_A_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_A_0_6, (MR_Integer) 0))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_A_0_6, (MR_Integer) 2))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_A_0_6, (MR_Integer) 3))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_A_0_6, (MR_Integer) 4))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_A_0_6, (MR_Integer) 5))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_A_0_6, (MR_Integer) 6))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_A_0_6, (MR_Integer) 7))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_A_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 1) = ((MR_Box) (ITCI_4));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_16));
  }
}

void MR_CALL 
hlds__hlds_args__poly_arg_vector_set_instance_type_infos_3_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word ITI_4,
  MR_Word STATE_VARIABLE_A_0_6,
  MR_Word * STATE_VARIABLE_A_7)
{
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_A_0_6, (MR_Integer) 1))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_A_0_6, (MR_Integer) 2))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_A_0_6, (MR_Integer) 3))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_A_0_6, (MR_Integer) 4))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_A_0_6, (MR_Integer) 5))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_A_0_6, (MR_Integer) 6))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_A_0_6, (MR_Integer) 7))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_A_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ITI_4));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_16));
  }
}

MR_Word MR_CALL 
hlds__hlds_args__poly_arg_vector_init_0_f_0(
  MR_Word TypeInfo_for_T_4)
{
  return (MR_Word) (&hlds__hlds_args_scalar_common_1[0]);
}

void MR_CALL 
hlds__hlds_args__proc_arg_vector_foldl4_corresponding3_12_p_0(
  MR_Word TypeInfo_for_A_90,
  MR_Word TypeInfo_for_B_91,
  MR_Word TypeInfo_for_C_92,
  MR_Word TypeInfo_for_D_93,
  MR_Word TypeInfo_for_E_94,
  MR_Word TypeInfo_for_F_95,
  MR_Word TypeInfo_for_G_96,
  MR_Word P_13,
  MR_Word A_14,
  MR_Word B_15,
  MR_Word C_16,
  MR_Box STATE_VARIABLE_Acc1_0_48,
  MR_Box * STATE_VARIABLE_Acc1_49,
  MR_Box STATE_VARIABLE_Acc2_0_50,
  MR_Box * STATE_VARIABLE_Acc2_51,
  MR_Box STATE_VARIABLE_Acc3_0_52,
  MR_Box * STATE_VARIABLE_Acc3_53,
  MR_Box STATE_VARIABLE_Acc4_0_54,
  MR_Box * STATE_VARIABLE_Acc4_55)
{
  MR_bool succeeded;
  MR_Word ITIA_21 = ((MR_Word) ((MR_hl_field(0, A_14, (MR_Integer) 0))));
  MR_Word ITCIA_22 = ((MR_Word) ((MR_hl_field(0, A_14, (MR_Integer) 1))));
  MR_Word UTIA_23 = ((MR_Word) ((MR_hl_field(0, A_14, (MR_Integer) 2))));
  MR_Word ETIA_24 = ((MR_Word) ((MR_hl_field(0, A_14, (MR_Integer) 3))));
  MR_Word UTCIA_25 = ((MR_Word) ((MR_hl_field(0, A_14, (MR_Integer) 4))));
  MR_Word ETCIA_26 = ((MR_Word) ((MR_hl_field(0, A_14, (MR_Integer) 5))));
  MR_Word ArgsA_27 = ((MR_Word) ((MR_hl_field(0, A_14, (MR_Integer) 6))));
  MR_Word MaybeRetValA_28 = ((MR_Word) ((MR_hl_field(0, A_14, (MR_Integer) 7))));
  MR_Word ITIB_29 = ((MR_Word) ((MR_hl_field(0, B_15, (MR_Integer) 0))));
  MR_Word ITCIB_30 = ((MR_Word) ((MR_hl_field(0, B_15, (MR_Integer) 1))));
  MR_Word UTIB_31 = ((MR_Word) ((MR_hl_field(0, B_15, (MR_Integer) 2))));
  MR_Word ETIB_32 = ((MR_Word) ((MR_hl_field(0, B_15, (MR_Integer) 3))));
  MR_Word UTCIB_33 = ((MR_Word) ((MR_hl_field(0, B_15, (MR_Integer) 4))));
  MR_Word ETCIB_34 = ((MR_Word) ((MR_hl_field(0, B_15, (MR_Integer) 5))));
  MR_Word ArgsB_35 = ((MR_Word) ((MR_hl_field(0, B_15, (MR_Integer) 6))));
  MR_Word MaybeRetValB_36 = ((MR_Word) ((MR_hl_field(0, B_15, (MR_Integer) 7))));
  MR_Word ITIC_37 = ((MR_Word) ((MR_hl_field(0, C_16, (MR_Integer) 0))));
  MR_Word ITCIC_38 = ((MR_Word) ((MR_hl_field(0, C_16, (MR_Integer) 1))));
  MR_Word UTIC_39 = ((MR_Word) ((MR_hl_field(0, C_16, (MR_Integer) 2))));
  MR_Word ETIC_40 = ((MR_Word) ((MR_hl_field(0, C_16, (MR_Integer) 3))));
  MR_Word UTCIC_41 = ((MR_Word) ((MR_hl_field(0, C_16, (MR_Integer) 4))));
  MR_Word ETCIC_42 = ((MR_Word) ((MR_hl_field(0, C_16, (MR_Integer) 5))));
  MR_Word ArgsC_43 = ((MR_Word) ((MR_hl_field(0, C_16, (MR_Integer) 6))));
  MR_Word MaybeRetValC_44 = ((MR_Word) ((MR_hl_field(0, C_16, (MR_Integer) 7))));
  MR_Box STATE_VARIABLE_Acc1_56_56;
  MR_Box STATE_VARIABLE_Acc2_57_57;
  MR_Box STATE_VARIABLE_Acc3_58_58;
  MR_Box STATE_VARIABLE_Acc4_59_59;
  MR_Box STATE_VARIABLE_Acc1_60_60;
  MR_Box STATE_VARIABLE_Acc2_61_61;
  MR_Box STATE_VARIABLE_Acc3_62_62;
  MR_Box STATE_VARIABLE_Acc4_63_63;
  MR_Box STATE_VARIABLE_Acc1_64_64;
  MR_Box STATE_VARIABLE_Acc2_65_65;
  MR_Box STATE_VARIABLE_Acc3_66_66;
  MR_Box STATE_VARIABLE_Acc4_67_67;
  MR_Box STATE_VARIABLE_Acc1_68_68;
  MR_Box STATE_VARIABLE_Acc2_69_69;
  MR_Box STATE_VARIABLE_Acc3_70_70;
  MR_Box STATE_VARIABLE_Acc4_71_71;
  MR_Box STATE_VARIABLE_Acc1_72_72;
  MR_Box STATE_VARIABLE_Acc2_73_73;
  MR_Box STATE_VARIABLE_Acc3_74_74;
  MR_Box STATE_VARIABLE_Acc4_75_75;
  MR_Box STATE_VARIABLE_Acc1_76_76;
  MR_Box STATE_VARIABLE_Acc2_77_77;
  MR_Box STATE_VARIABLE_Acc3_78_78;
  MR_Box STATE_VARIABLE_Acc4_79_79;
  MR_Box STATE_VARIABLE_Acc1_80_80;
  MR_Box STATE_VARIABLE_Acc2_81_81;
  MR_Box STATE_VARIABLE_Acc3_82_82;
  MR_Box STATE_VARIABLE_Acc4_83_83;
  MR_Box RetValA_45;
  MR_Box RetValB_46;
  MR_Box RetValC_47;

  mercury__list__foldl4_corresponding3_12_p_0(TypeInfo_for_A_90, TypeInfo_for_B_91, TypeInfo_for_C_92, TypeInfo_for_D_93, TypeInfo_for_E_94, TypeInfo_for_F_95, TypeInfo_for_G_96, P_13, ITIA_21, ITIB_29, ITIC_37, STATE_VARIABLE_Acc1_0_48, &STATE_VARIABLE_Acc1_56_56, STATE_VARIABLE_Acc2_0_50, &STATE_VARIABLE_Acc2_57_57, STATE_VARIABLE_Acc3_0_52, &STATE_VARIABLE_Acc3_58_58, STATE_VARIABLE_Acc4_0_54, &STATE_VARIABLE_Acc4_59_59);
  mercury__list__foldl4_corresponding3_12_p_0(TypeInfo_for_A_90, TypeInfo_for_B_91, TypeInfo_for_C_92, TypeInfo_for_D_93, TypeInfo_for_E_94, TypeInfo_for_F_95, TypeInfo_for_G_96, P_13, ITCIA_22, ITCIB_30, ITCIC_38, STATE_VARIABLE_Acc1_56_56, &STATE_VARIABLE_Acc1_60_60, STATE_VARIABLE_Acc2_57_57, &STATE_VARIABLE_Acc2_61_61, STATE_VARIABLE_Acc3_58_58, &STATE_VARIABLE_Acc3_62_62, STATE_VARIABLE_Acc4_59_59, &STATE_VARIABLE_Acc4_63_63);
  mercury__list__foldl4_corresponding3_12_p_0(TypeInfo_for_A_90, TypeInfo_for_B_91, TypeInfo_for_C_92, TypeInfo_for_D_93, TypeInfo_for_E_94, TypeInfo_for_F_95, TypeInfo_for_G_96, P_13, UTIA_23, UTIB_31, UTIC_39, STATE_VARIABLE_Acc1_60_60, &STATE_VARIABLE_Acc1_64_64, STATE_VARIABLE_Acc2_61_61, &STATE_VARIABLE_Acc2_65_65, STATE_VARIABLE_Acc3_62_62, &STATE_VARIABLE_Acc3_66_66, STATE_VARIABLE_Acc4_63_63, &STATE_VARIABLE_Acc4_67_67);
  mercury__list__foldl4_corresponding3_12_p_0(TypeInfo_for_A_90, TypeInfo_for_B_91, TypeInfo_for_C_92, TypeInfo_for_D_93, TypeInfo_for_E_94, TypeInfo_for_F_95, TypeInfo_for_G_96, P_13, ETIA_24, ETIB_32, ETIC_40, STATE_VARIABLE_Acc1_64_64, &STATE_VARIABLE_Acc1_68_68, STATE_VARIABLE_Acc2_65_65, &STATE_VARIABLE_Acc2_69_69, STATE_VARIABLE_Acc3_66_66, &STATE_VARIABLE_Acc3_70_70, STATE_VARIABLE_Acc4_67_67, &STATE_VARIABLE_Acc4_71_71);
  mercury__list__foldl4_corresponding3_12_p_0(TypeInfo_for_A_90, TypeInfo_for_B_91, TypeInfo_for_C_92, TypeInfo_for_D_93, TypeInfo_for_E_94, TypeInfo_for_F_95, TypeInfo_for_G_96, P_13, UTCIA_25, UTCIB_33, UTCIC_41, STATE_VARIABLE_Acc1_68_68, &STATE_VARIABLE_Acc1_72_72, STATE_VARIABLE_Acc2_69_69, &STATE_VARIABLE_Acc2_73_73, STATE_VARIABLE_Acc3_70_70, &STATE_VARIABLE_Acc3_74_74, STATE_VARIABLE_Acc4_71_71, &STATE_VARIABLE_Acc4_75_75);
  mercury__list__foldl4_corresponding3_12_p_0(TypeInfo_for_A_90, TypeInfo_for_B_91, TypeInfo_for_C_92, TypeInfo_for_D_93, TypeInfo_for_E_94, TypeInfo_for_F_95, TypeInfo_for_G_96, P_13, ETCIA_26, ETCIB_34, ETCIC_42, STATE_VARIABLE_Acc1_72_72, &STATE_VARIABLE_Acc1_76_76, STATE_VARIABLE_Acc2_73_73, &STATE_VARIABLE_Acc2_77_77, STATE_VARIABLE_Acc3_74_74, &STATE_VARIABLE_Acc3_78_78, STATE_VARIABLE_Acc4_75_75, &STATE_VARIABLE_Acc4_79_79);
  mercury__list__foldl4_corresponding3_12_p_0(TypeInfo_for_A_90, TypeInfo_for_B_91, TypeInfo_for_C_92, TypeInfo_for_D_93, TypeInfo_for_E_94, TypeInfo_for_F_95, TypeInfo_for_G_96, P_13, ArgsA_27, ArgsB_35, ArgsC_43, STATE_VARIABLE_Acc1_76_76, &STATE_VARIABLE_Acc1_80_80, STATE_VARIABLE_Acc2_77_77, &STATE_VARIABLE_Acc2_81_81, STATE_VARIABLE_Acc3_78_78, &STATE_VARIABLE_Acc3_82_82, STATE_VARIABLE_Acc4_79_79, &STATE_VARIABLE_Acc4_83_83);
  succeeded = (MaybeRetValA_28 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    RetValA_45 = (MR_hl_field(1, MaybeRetValA_28, (MR_Integer) 0));
    succeeded = (MaybeRetValB_36 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      RetValB_46 = (MR_hl_field(1, MaybeRetValB_36, (MR_Integer) 0));
      succeeded = (MaybeRetValC_44 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        RetValC_47 = (MR_hl_field(1, MaybeRetValC_44, (MR_Integer) 0));
    }
  }
  if (succeeded)
  {
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, P_13, (MR_Integer) 1))));

    func_0(((MR_Box) (P_13)), RetValA_45, RetValB_46, RetValC_47, STATE_VARIABLE_Acc1_80_80, STATE_VARIABLE_Acc1_49, STATE_VARIABLE_Acc2_81_81, STATE_VARIABLE_Acc2_51, STATE_VARIABLE_Acc3_82_82, STATE_VARIABLE_Acc3_53, STATE_VARIABLE_Acc4_83_83, STATE_VARIABLE_Acc4_55);
  }
  else
  {
    succeeded = (MaybeRetValA_28 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = (MaybeRetValB_36 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        succeeded = (MaybeRetValC_44 == (MR_Word) ((MR_Unsigned) 0U));
    }
    if (!(succeeded))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.hlds_args.proc_arg_vector_foldl4_corresponding3\'/12", (MR_String) "mismatched proc_arg_vectors");
        return;
      }
    *STATE_VARIABLE_Acc4_55 = STATE_VARIABLE_Acc4_83_83;
    *STATE_VARIABLE_Acc3_53 = STATE_VARIABLE_Acc3_82_82;
    *STATE_VARIABLE_Acc2_51 = STATE_VARIABLE_Acc2_81_81;
    *STATE_VARIABLE_Acc1_49 = STATE_VARIABLE_Acc1_80_80;
  }
}

void MR_CALL 
hlds__hlds_args__proc_arg_vector_foldl3_corresponding3_10_p_0(
  MR_Word TypeInfo_for_A_77,
  MR_Word TypeInfo_for_B_78,
  MR_Word TypeInfo_for_C_79,
  MR_Word TypeInfo_for_D_80,
  MR_Word TypeInfo_for_E_81,
  MR_Word TypeInfo_for_F_82,
  MR_Word P_11,
  MR_Word A_12,
  MR_Word B_13,
  MR_Word C_14,
  MR_Box STATE_VARIABLE_Acc1_0_45,
  MR_Box * STATE_VARIABLE_Acc1_46,
  MR_Box STATE_VARIABLE_Acc2_0_47,
  MR_Box * STATE_VARIABLE_Acc2_48,
  MR_Box STATE_VARIABLE_Acc3_0_49,
  MR_Box * STATE_VARIABLE_Acc3_50)
{
  MR_bool succeeded;
  MR_Word ITIA_18 = ((MR_Word) ((MR_hl_field(0, A_12, (MR_Integer) 0))));
  MR_Word ITCIA_19 = ((MR_Word) ((MR_hl_field(0, A_12, (MR_Integer) 1))));
  MR_Word UTIA_20 = ((MR_Word) ((MR_hl_field(0, A_12, (MR_Integer) 2))));
  MR_Word ETIA_21 = ((MR_Word) ((MR_hl_field(0, A_12, (MR_Integer) 3))));
  MR_Word UTCIA_22 = ((MR_Word) ((MR_hl_field(0, A_12, (MR_Integer) 4))));
  MR_Word ETCIA_23 = ((MR_Word) ((MR_hl_field(0, A_12, (MR_Integer) 5))));
  MR_Word ArgsA_24 = ((MR_Word) ((MR_hl_field(0, A_12, (MR_Integer) 6))));
  MR_Word MaybeRetValA_25 = ((MR_Word) ((MR_hl_field(0, A_12, (MR_Integer) 7))));
  MR_Word ITIB_26 = ((MR_Word) ((MR_hl_field(0, B_13, (MR_Integer) 0))));
  MR_Word ITCIB_27 = ((MR_Word) ((MR_hl_field(0, B_13, (MR_Integer) 1))));
  MR_Word UTIB_28 = ((MR_Word) ((MR_hl_field(0, B_13, (MR_Integer) 2))));
  MR_Word ETIB_29 = ((MR_Word) ((MR_hl_field(0, B_13, (MR_Integer) 3))));
  MR_Word UTCIB_30 = ((MR_Word) ((MR_hl_field(0, B_13, (MR_Integer) 4))));
  MR_Word ETCIB_31 = ((MR_Word) ((MR_hl_field(0, B_13, (MR_Integer) 5))));
  MR_Word ArgsB_32 = ((MR_Word) ((MR_hl_field(0, B_13, (MR_Integer) 6))));
  MR_Word MaybeRetValB_33 = ((MR_Word) ((MR_hl_field(0, B_13, (MR_Integer) 7))));
  MR_Word ITIC_34 = ((MR_Word) ((MR_hl_field(0, C_14, (MR_Integer) 0))));
  MR_Word ITCIC_35 = ((MR_Word) ((MR_hl_field(0, C_14, (MR_Integer) 1))));
  MR_Word UTIC_36 = ((MR_Word) ((MR_hl_field(0, C_14, (MR_Integer) 2))));
  MR_Word ETIC_37 = ((MR_Word) ((MR_hl_field(0, C_14, (MR_Integer) 3))));
  MR_Word UTCIC_38 = ((MR_Word) ((MR_hl_field(0, C_14, (MR_Integer) 4))));
  MR_Word ETCIC_39 = ((MR_Word) ((MR_hl_field(0, C_14, (MR_Integer) 5))));
  MR_Word ArgsC_40 = ((MR_Word) ((MR_hl_field(0, C_14, (MR_Integer) 6))));
  MR_Word MaybeRetValC_41 = ((MR_Word) ((MR_hl_field(0, C_14, (MR_Integer) 7))));
  MR_Box STATE_VARIABLE_Acc1_51_51;
  MR_Box STATE_VARIABLE_Acc2_52_52;
  MR_Box STATE_VARIABLE_Acc3_53_53;
  MR_Box STATE_VARIABLE_Acc1_54_54;
  MR_Box STATE_VARIABLE_Acc2_55_55;
  MR_Box STATE_VARIABLE_Acc3_56_56;
  MR_Box STATE_VARIABLE_Acc1_57_57;
  MR_Box STATE_VARIABLE_Acc2_58_58;
  MR_Box STATE_VARIABLE_Acc3_59_59;
  MR_Box STATE_VARIABLE_Acc1_60_60;
  MR_Box STATE_VARIABLE_Acc2_61_61;
  MR_Box STATE_VARIABLE_Acc3_62_62;
  MR_Box STATE_VARIABLE_Acc1_63_63;
  MR_Box STATE_VARIABLE_Acc2_64_64;
  MR_Box STATE_VARIABLE_Acc3_65_65;
  MR_Box STATE_VARIABLE_Acc1_66_66;
  MR_Box STATE_VARIABLE_Acc2_67_67;
  MR_Box STATE_VARIABLE_Acc3_68_68;
  MR_Box STATE_VARIABLE_Acc1_69_69;
  MR_Box STATE_VARIABLE_Acc2_70_70;
  MR_Box STATE_VARIABLE_Acc3_71_71;
  MR_Box RetValA_42;
  MR_Box RetValB_43;
  MR_Box RetValC_44;

  mercury__list__foldl3_corresponding3_10_p_0(TypeInfo_for_A_77, TypeInfo_for_B_78, TypeInfo_for_C_79, TypeInfo_for_D_80, TypeInfo_for_E_81, TypeInfo_for_F_82, P_11, ITIA_18, ITIB_26, ITIC_34, STATE_VARIABLE_Acc1_0_45, &STATE_VARIABLE_Acc1_51_51, STATE_VARIABLE_Acc2_0_47, &STATE_VARIABLE_Acc2_52_52, STATE_VARIABLE_Acc3_0_49, &STATE_VARIABLE_Acc3_53_53);
  mercury__list__foldl3_corresponding3_10_p_0(TypeInfo_for_A_77, TypeInfo_for_B_78, TypeInfo_for_C_79, TypeInfo_for_D_80, TypeInfo_for_E_81, TypeInfo_for_F_82, P_11, ITCIA_19, ITCIB_27, ITCIC_35, STATE_VARIABLE_Acc1_51_51, &STATE_VARIABLE_Acc1_54_54, STATE_VARIABLE_Acc2_52_52, &STATE_VARIABLE_Acc2_55_55, STATE_VARIABLE_Acc3_53_53, &STATE_VARIABLE_Acc3_56_56);
  mercury__list__foldl3_corresponding3_10_p_0(TypeInfo_for_A_77, TypeInfo_for_B_78, TypeInfo_for_C_79, TypeInfo_for_D_80, TypeInfo_for_E_81, TypeInfo_for_F_82, P_11, UTIA_20, UTIB_28, UTIC_36, STATE_VARIABLE_Acc1_54_54, &STATE_VARIABLE_Acc1_57_57, STATE_VARIABLE_Acc2_55_55, &STATE_VARIABLE_Acc2_58_58, STATE_VARIABLE_Acc3_56_56, &STATE_VARIABLE_Acc3_59_59);
  mercury__list__foldl3_corresponding3_10_p_0(TypeInfo_for_A_77, TypeInfo_for_B_78, TypeInfo_for_C_79, TypeInfo_for_D_80, TypeInfo_for_E_81, TypeInfo_for_F_82, P_11, ETIA_21, ETIB_29, ETIC_37, STATE_VARIABLE_Acc1_57_57, &STATE_VARIABLE_Acc1_60_60, STATE_VARIABLE_Acc2_58_58, &STATE_VARIABLE_Acc2_61_61, STATE_VARIABLE_Acc3_59_59, &STATE_VARIABLE_Acc3_62_62);
  mercury__list__foldl3_corresponding3_10_p_0(TypeInfo_for_A_77, TypeInfo_for_B_78, TypeInfo_for_C_79, TypeInfo_for_D_80, TypeInfo_for_E_81, TypeInfo_for_F_82, P_11, UTCIA_22, UTCIB_30, UTCIC_38, STATE_VARIABLE_Acc1_60_60, &STATE_VARIABLE_Acc1_63_63, STATE_VARIABLE_Acc2_61_61, &STATE_VARIABLE_Acc2_64_64, STATE_VARIABLE_Acc3_62_62, &STATE_VARIABLE_Acc3_65_65);
  mercury__list__foldl3_corresponding3_10_p_0(TypeInfo_for_A_77, TypeInfo_for_B_78, TypeInfo_for_C_79, TypeInfo_for_D_80, TypeInfo_for_E_81, TypeInfo_for_F_82, P_11, ETCIA_23, ETCIB_31, ETCIC_39, STATE_VARIABLE_Acc1_63_63, &STATE_VARIABLE_Acc1_66_66, STATE_VARIABLE_Acc2_64_64, &STATE_VARIABLE_Acc2_67_67, STATE_VARIABLE_Acc3_65_65, &STATE_VARIABLE_Acc3_68_68);
  mercury__list__foldl3_corresponding3_10_p_0(TypeInfo_for_A_77, TypeInfo_for_B_78, TypeInfo_for_C_79, TypeInfo_for_D_80, TypeInfo_for_E_81, TypeInfo_for_F_82, P_11, ArgsA_24, ArgsB_32, ArgsC_40, STATE_VARIABLE_Acc1_66_66, &STATE_VARIABLE_Acc1_69_69, STATE_VARIABLE_Acc2_67_67, &STATE_VARIABLE_Acc2_70_70, STATE_VARIABLE_Acc3_68_68, &STATE_VARIABLE_Acc3_71_71);
  succeeded = (MaybeRetValA_25 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    RetValA_42 = (MR_hl_field(1, MaybeRetValA_25, (MR_Integer) 0));
    succeeded = (MaybeRetValB_33 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      RetValB_43 = (MR_hl_field(1, MaybeRetValB_33, (MR_Integer) 0));
      succeeded = (MaybeRetValC_41 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        RetValC_44 = (MR_hl_field(1, MaybeRetValC_41, (MR_Integer) 0));
    }
  }
  if (succeeded)
  {
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, P_11, (MR_Integer) 1))));

    func_0(((MR_Box) (P_11)), RetValA_42, RetValB_43, RetValC_44, STATE_VARIABLE_Acc1_69_69, STATE_VARIABLE_Acc1_46, STATE_VARIABLE_Acc2_70_70, STATE_VARIABLE_Acc2_48, STATE_VARIABLE_Acc3_71_71, STATE_VARIABLE_Acc3_50);
  }
  else
  {
    succeeded = (MaybeRetValA_25 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = (MaybeRetValB_33 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        succeeded = (MaybeRetValC_41 == (MR_Word) ((MR_Unsigned) 0U));
    }
    if (!(succeeded))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.hlds_args.proc_arg_vector_foldl3_corresponding3\'/10", (MR_String) "mismatched proc_arg_vectors");
        return;
      }
    *STATE_VARIABLE_Acc3_50 = STATE_VARIABLE_Acc3_71_71;
    *STATE_VARIABLE_Acc2_48 = STATE_VARIABLE_Acc2_70_70;
    *STATE_VARIABLE_Acc1_46 = STATE_VARIABLE_Acc1_69_69;
  }
}

void MR_CALL 
hlds__hlds_args__proc_arg_vector_foldl2_corresponding3_8_p_0(
  MR_Word TypeInfo_for_A_64,
  MR_Word TypeInfo_for_B_65,
  MR_Word TypeInfo_for_C_66,
  MR_Word TypeInfo_for_D_67,
  MR_Word TypeInfo_for_E_68,
  MR_Word P_9,
  MR_Word A_10,
  MR_Word B_11,
  MR_Word C_12,
  MR_Box STATE_VARIABLE_Acc1_0_42,
  MR_Box * STATE_VARIABLE_Acc1_43,
  MR_Box STATE_VARIABLE_Acc2_0_44,
  MR_Box * STATE_VARIABLE_Acc2_45)
{
  MR_bool succeeded;
  MR_Word ITIA_15 = ((MR_Word) ((MR_hl_field(0, A_10, (MR_Integer) 0))));
  MR_Word ITCIA_16 = ((MR_Word) ((MR_hl_field(0, A_10, (MR_Integer) 1))));
  MR_Word UTIA_17 = ((MR_Word) ((MR_hl_field(0, A_10, (MR_Integer) 2))));
  MR_Word ETIA_18 = ((MR_Word) ((MR_hl_field(0, A_10, (MR_Integer) 3))));
  MR_Word UTCIA_19 = ((MR_Word) ((MR_hl_field(0, A_10, (MR_Integer) 4))));
  MR_Word ETCIA_20 = ((MR_Word) ((MR_hl_field(0, A_10, (MR_Integer) 5))));
  MR_Word ArgsA_21 = ((MR_Word) ((MR_hl_field(0, A_10, (MR_Integer) 6))));
  MR_Word MaybeRetValA_22 = ((MR_Word) ((MR_hl_field(0, A_10, (MR_Integer) 7))));
  MR_Word ITIB_23 = ((MR_Word) ((MR_hl_field(0, B_11, (MR_Integer) 0))));
  MR_Word ITCIB_24 = ((MR_Word) ((MR_hl_field(0, B_11, (MR_Integer) 1))));
  MR_Word UTIB_25 = ((MR_Word) ((MR_hl_field(0, B_11, (MR_Integer) 2))));
  MR_Word ETIB_26 = ((MR_Word) ((MR_hl_field(0, B_11, (MR_Integer) 3))));
  MR_Word UTCIB_27 = ((MR_Word) ((MR_hl_field(0, B_11, (MR_Integer) 4))));
  MR_Word ETCIB_28 = ((MR_Word) ((MR_hl_field(0, B_11, (MR_Integer) 5))));
  MR_Word ArgsB_29 = ((MR_Word) ((MR_hl_field(0, B_11, (MR_Integer) 6))));
  MR_Word MaybeRetValB_30 = ((MR_Word) ((MR_hl_field(0, B_11, (MR_Integer) 7))));
  MR_Word ITIC_31 = ((MR_Word) ((MR_hl_field(0, C_12, (MR_Integer) 0))));
  MR_Word ITCIC_32 = ((MR_Word) ((MR_hl_field(0, C_12, (MR_Integer) 1))));
  MR_Word UTIC_33 = ((MR_Word) ((MR_hl_field(0, C_12, (MR_Integer) 2))));
  MR_Word ETIC_34 = ((MR_Word) ((MR_hl_field(0, C_12, (MR_Integer) 3))));
  MR_Word UTCIC_35 = ((MR_Word) ((MR_hl_field(0, C_12, (MR_Integer) 4))));
  MR_Word ETCIC_36 = ((MR_Word) ((MR_hl_field(0, C_12, (MR_Integer) 5))));
  MR_Word ArgsC_37 = ((MR_Word) ((MR_hl_field(0, C_12, (MR_Integer) 6))));
  MR_Word MaybeRetValC_38 = ((MR_Word) ((MR_hl_field(0, C_12, (MR_Integer) 7))));
  MR_Box STATE_VARIABLE_Acc1_46_46;
  MR_Box STATE_VARIABLE_Acc2_47_47;
  MR_Box STATE_VARIABLE_Acc1_48_48;
  MR_Box STATE_VARIABLE_Acc2_49_49;
  MR_Box STATE_VARIABLE_Acc1_50_50;
  MR_Box STATE_VARIABLE_Acc2_51_51;
  MR_Box STATE_VARIABLE_Acc1_52_52;
  MR_Box STATE_VARIABLE_Acc2_53_53;
  MR_Box STATE_VARIABLE_Acc1_54_54;
  MR_Box STATE_VARIABLE_Acc2_55_55;
  MR_Box STATE_VARIABLE_Acc1_56_56;
  MR_Box STATE_VARIABLE_Acc2_57_57;
  MR_Box STATE_VARIABLE_Acc1_58_58;
  MR_Box STATE_VARIABLE_Acc2_59_59;
  MR_Box RetValA_39;
  MR_Box RetValB_40;
  MR_Box RetValC_41;

  mercury__list__foldl2_corresponding3_8_p_0(TypeInfo_for_A_64, TypeInfo_for_B_65, TypeInfo_for_C_66, TypeInfo_for_D_67, TypeInfo_for_E_68, P_9, ITIA_15, ITIB_23, ITIC_31, STATE_VARIABLE_Acc1_0_42, &STATE_VARIABLE_Acc1_46_46, STATE_VARIABLE_Acc2_0_44, &STATE_VARIABLE_Acc2_47_47);
  mercury__list__foldl2_corresponding3_8_p_0(TypeInfo_for_A_64, TypeInfo_for_B_65, TypeInfo_for_C_66, TypeInfo_for_D_67, TypeInfo_for_E_68, P_9, ITCIA_16, ITCIB_24, ITCIC_32, STATE_VARIABLE_Acc1_46_46, &STATE_VARIABLE_Acc1_48_48, STATE_VARIABLE_Acc2_47_47, &STATE_VARIABLE_Acc2_49_49);
  mercury__list__foldl2_corresponding3_8_p_0(TypeInfo_for_A_64, TypeInfo_for_B_65, TypeInfo_for_C_66, TypeInfo_for_D_67, TypeInfo_for_E_68, P_9, UTIA_17, UTIB_25, UTIC_33, STATE_VARIABLE_Acc1_48_48, &STATE_VARIABLE_Acc1_50_50, STATE_VARIABLE_Acc2_49_49, &STATE_VARIABLE_Acc2_51_51);
  mercury__list__foldl2_corresponding3_8_p_0(TypeInfo_for_A_64, TypeInfo_for_B_65, TypeInfo_for_C_66, TypeInfo_for_D_67, TypeInfo_for_E_68, P_9, ETIA_18, ETIB_26, ETIC_34, STATE_VARIABLE_Acc1_50_50, &STATE_VARIABLE_Acc1_52_52, STATE_VARIABLE_Acc2_51_51, &STATE_VARIABLE_Acc2_53_53);
  mercury__list__foldl2_corresponding3_8_p_0(TypeInfo_for_A_64, TypeInfo_for_B_65, TypeInfo_for_C_66, TypeInfo_for_D_67, TypeInfo_for_E_68, P_9, UTCIA_19, UTCIB_27, UTCIC_35, STATE_VARIABLE_Acc1_52_52, &STATE_VARIABLE_Acc1_54_54, STATE_VARIABLE_Acc2_53_53, &STATE_VARIABLE_Acc2_55_55);
  mercury__list__foldl2_corresponding3_8_p_0(TypeInfo_for_A_64, TypeInfo_for_B_65, TypeInfo_for_C_66, TypeInfo_for_D_67, TypeInfo_for_E_68, P_9, ETCIA_20, ETCIB_28, ETCIC_36, STATE_VARIABLE_Acc1_54_54, &STATE_VARIABLE_Acc1_56_56, STATE_VARIABLE_Acc2_55_55, &STATE_VARIABLE_Acc2_57_57);
  mercury__list__foldl2_corresponding3_8_p_0(TypeInfo_for_A_64, TypeInfo_for_B_65, TypeInfo_for_C_66, TypeInfo_for_D_67, TypeInfo_for_E_68, P_9, ArgsA_21, ArgsB_29, ArgsC_37, STATE_VARIABLE_Acc1_56_56, &STATE_VARIABLE_Acc1_58_58, STATE_VARIABLE_Acc2_57_57, &STATE_VARIABLE_Acc2_59_59);
  succeeded = (MaybeRetValA_22 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    RetValA_39 = (MR_hl_field(1, MaybeRetValA_22, (MR_Integer) 0));
    succeeded = (MaybeRetValB_30 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      RetValB_40 = (MR_hl_field(1, MaybeRetValB_30, (MR_Integer) 0));
      succeeded = (MaybeRetValC_38 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        RetValC_41 = (MR_hl_field(1, MaybeRetValC_38, (MR_Integer) 0));
    }
  }
  if (succeeded)
  {
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, P_9, (MR_Integer) 1))));

    func_0(((MR_Box) (P_9)), RetValA_39, RetValB_40, RetValC_41, STATE_VARIABLE_Acc1_58_58, STATE_VARIABLE_Acc1_43, STATE_VARIABLE_Acc2_59_59, STATE_VARIABLE_Acc2_45);
  }
  else
  {
    succeeded = (MaybeRetValA_22 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = (MaybeRetValB_30 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        succeeded = (MaybeRetValC_38 == (MR_Word) ((MR_Unsigned) 0U));
    }
    if (!(succeeded))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.hlds_args.proc_arg_vector_foldl2_corresponding3\'/8", (MR_String) "mismatched proc_arg_vectors");
        return;
      }
    *STATE_VARIABLE_Acc2_45 = STATE_VARIABLE_Acc2_59_59;
    *STATE_VARIABLE_Acc1_43 = STATE_VARIABLE_Acc1_58_58;
  }
}

void MR_CALL 
hlds__hlds_args__proc_arg_vector_foldl3_corresponding_9_p_0(
  MR_Word TypeInfo_for_A_70,
  MR_Word TypeInfo_for_B_71,
  MR_Word TypeInfo_for_C_72,
  MR_Word TypeInfo_for_D_73,
  MR_Word TypeInfo_for_E_74,
  MR_Word P_10,
  MR_Word A_11,
  MR_Word B_12,
  MR_Box STATE_VARIABLE_Acc1_0_36,
  MR_Box * STATE_VARIABLE_Acc1_37,
  MR_Box STATE_VARIABLE_Acc2_0_38,
  MR_Box * STATE_VARIABLE_Acc2_39,
  MR_Box STATE_VARIABLE_Acc3_0_40,
  MR_Box * STATE_VARIABLE_Acc3_41)
{
  MR_Word ITIA_16 = ((MR_Word) ((MR_hl_field(0, A_11, (MR_Integer) 0))));
  MR_Word ITCIA_17 = ((MR_Word) ((MR_hl_field(0, A_11, (MR_Integer) 1))));
  MR_Word UTIA_18 = ((MR_Word) ((MR_hl_field(0, A_11, (MR_Integer) 2))));
  MR_Word ETIA_19 = ((MR_Word) ((MR_hl_field(0, A_11, (MR_Integer) 3))));
  MR_Word UTCIA_20 = ((MR_Word) ((MR_hl_field(0, A_11, (MR_Integer) 4))));
  MR_Word ETCIA_21 = ((MR_Word) ((MR_hl_field(0, A_11, (MR_Integer) 5))));
  MR_Word ArgsA_22 = ((MR_Word) ((MR_hl_field(0, A_11, (MR_Integer) 6))));
  MR_Word MaybeRetValA_23 = ((MR_Word) ((MR_hl_field(0, A_11, (MR_Integer) 7))));
  MR_Word ITIB_24 = ((MR_Word) ((MR_hl_field(0, B_12, (MR_Integer) 0))));
  MR_Word ITCIB_25 = ((MR_Word) ((MR_hl_field(0, B_12, (MR_Integer) 1))));
  MR_Word UTIB_26 = ((MR_Word) ((MR_hl_field(0, B_12, (MR_Integer) 2))));
  MR_Word ETIB_27 = ((MR_Word) ((MR_hl_field(0, B_12, (MR_Integer) 3))));
  MR_Word UTCIB_28 = ((MR_Word) ((MR_hl_field(0, B_12, (MR_Integer) 4))));
  MR_Word ETCIB_29 = ((MR_Word) ((MR_hl_field(0, B_12, (MR_Integer) 5))));
  MR_Word ArgsB_30 = ((MR_Word) ((MR_hl_field(0, B_12, (MR_Integer) 6))));
  MR_Word MaybeRetValB_31 = ((MR_Word) ((MR_hl_field(0, B_12, (MR_Integer) 7))));
  MR_Box STATE_VARIABLE_Acc1_42_42;
  MR_Box STATE_VARIABLE_Acc2_43_43;
  MR_Box STATE_VARIABLE_Acc3_44_44;
  MR_Box STATE_VARIABLE_Acc1_45_45;
  MR_Box STATE_VARIABLE_Acc2_46_46;
  MR_Box STATE_VARIABLE_Acc3_47_47;
  MR_Box STATE_VARIABLE_Acc1_48_48;
  MR_Box STATE_VARIABLE_Acc2_49_49;
  MR_Box STATE_VARIABLE_Acc3_50_50;
  MR_Box STATE_VARIABLE_Acc1_51_51;
  MR_Box STATE_VARIABLE_Acc2_52_52;
  MR_Box STATE_VARIABLE_Acc3_53_53;
  MR_Box STATE_VARIABLE_Acc1_54_54;
  MR_Box STATE_VARIABLE_Acc2_55_55;
  MR_Box STATE_VARIABLE_Acc3_56_56;
  MR_Box STATE_VARIABLE_Acc1_57_57;
  MR_Box STATE_VARIABLE_Acc2_58_58;
  MR_Box STATE_VARIABLE_Acc3_59_59;
  MR_Box STATE_VARIABLE_Acc1_60_60;
  MR_Box STATE_VARIABLE_Acc2_61_61;
  MR_Box STATE_VARIABLE_Acc3_62_62;

  mercury__list__foldl3_corresponding_9_p_0(TypeInfo_for_A_70, TypeInfo_for_B_71, TypeInfo_for_C_72, TypeInfo_for_D_73, TypeInfo_for_E_74, P_10, ITIA_16, ITIB_24, STATE_VARIABLE_Acc1_0_36, &STATE_VARIABLE_Acc1_42_42, STATE_VARIABLE_Acc2_0_38, &STATE_VARIABLE_Acc2_43_43, STATE_VARIABLE_Acc3_0_40, &STATE_VARIABLE_Acc3_44_44);
  mercury__list__foldl3_corresponding_9_p_0(TypeInfo_for_A_70, TypeInfo_for_B_71, TypeInfo_for_C_72, TypeInfo_for_D_73, TypeInfo_for_E_74, P_10, ITCIA_17, ITCIB_25, STATE_VARIABLE_Acc1_42_42, &STATE_VARIABLE_Acc1_45_45, STATE_VARIABLE_Acc2_43_43, &STATE_VARIABLE_Acc2_46_46, STATE_VARIABLE_Acc3_44_44, &STATE_VARIABLE_Acc3_47_47);
  mercury__list__foldl3_corresponding_9_p_0(TypeInfo_for_A_70, TypeInfo_for_B_71, TypeInfo_for_C_72, TypeInfo_for_D_73, TypeInfo_for_E_74, P_10, UTIA_18, UTIB_26, STATE_VARIABLE_Acc1_45_45, &STATE_VARIABLE_Acc1_48_48, STATE_VARIABLE_Acc2_46_46, &STATE_VARIABLE_Acc2_49_49, STATE_VARIABLE_Acc3_47_47, &STATE_VARIABLE_Acc3_50_50);
  mercury__list__foldl3_corresponding_9_p_0(TypeInfo_for_A_70, TypeInfo_for_B_71, TypeInfo_for_C_72, TypeInfo_for_D_73, TypeInfo_for_E_74, P_10, ETIA_19, ETIB_27, STATE_VARIABLE_Acc1_48_48, &STATE_VARIABLE_Acc1_51_51, STATE_VARIABLE_Acc2_49_49, &STATE_VARIABLE_Acc2_52_52, STATE_VARIABLE_Acc3_50_50, &STATE_VARIABLE_Acc3_53_53);
  mercury__list__foldl3_corresponding_9_p_0(TypeInfo_for_A_70, TypeInfo_for_B_71, TypeInfo_for_C_72, TypeInfo_for_D_73, TypeInfo_for_E_74, P_10, UTCIA_20, UTCIB_28, STATE_VARIABLE_Acc1_51_51, &STATE_VARIABLE_Acc1_54_54, STATE_VARIABLE_Acc2_52_52, &STATE_VARIABLE_Acc2_55_55, STATE_VARIABLE_Acc3_53_53, &STATE_VARIABLE_Acc3_56_56);
  mercury__list__foldl3_corresponding_9_p_0(TypeInfo_for_A_70, TypeInfo_for_B_71, TypeInfo_for_C_72, TypeInfo_for_D_73, TypeInfo_for_E_74, P_10, ETCIA_21, ETCIB_29, STATE_VARIABLE_Acc1_54_54, &STATE_VARIABLE_Acc1_57_57, STATE_VARIABLE_Acc2_55_55, &STATE_VARIABLE_Acc2_58_58, STATE_VARIABLE_Acc3_56_56, &STATE_VARIABLE_Acc3_59_59);
  mercury__list__foldl3_corresponding_9_p_0(TypeInfo_for_A_70, TypeInfo_for_B_71, TypeInfo_for_C_72, TypeInfo_for_D_73, TypeInfo_for_E_74, P_10, ArgsA_22, ArgsB_30, STATE_VARIABLE_Acc1_57_57, &STATE_VARIABLE_Acc1_60_60, STATE_VARIABLE_Acc2_58_58, &STATE_VARIABLE_Acc2_61_61, STATE_VARIABLE_Acc3_59_59, &STATE_VARIABLE_Acc3_62_62);
  if ((MaybeRetValA_23 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((MaybeRetValB_31 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Acc1_37 = STATE_VARIABLE_Acc1_60_60;
      *STATE_VARIABLE_Acc2_39 = STATE_VARIABLE_Acc2_61_61;
      *STATE_VARIABLE_Acc3_41 = STATE_VARIABLE_Acc3_62_62;
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.hlds_args.proc_arg_vector_foldl3_corresponding\'/9", (MR_String) "mismatched proc_arg_vectors");
        return;
      }
  else
  {
    MR_Box Var_75 = (MR_hl_field(1, MaybeRetValA_23, (MR_Integer) 0));

    if ((MaybeRetValB_31 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.hlds_args.proc_arg_vector_foldl3_corresponding\'/9", (MR_String) "mismatched proc_arg_vectors");
        return;
      }
    else
    {
      MR_Box RetValB_33 = (MR_hl_field(1, MaybeRetValB_31, (MR_Integer) 0));
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, P_10, (MR_Integer) 1))));

      func_0(((MR_Box) (P_10)), Var_75, RetValB_33, STATE_VARIABLE_Acc1_60_60, STATE_VARIABLE_Acc1_37, STATE_VARIABLE_Acc2_61_61, STATE_VARIABLE_Acc2_39, STATE_VARIABLE_Acc3_62_62, STATE_VARIABLE_Acc3_41);
    }
  }
}

void MR_CALL 
hlds__hlds_args__proc_arg_vector_map_corresponding_foldl2_8_p_0(
  MR_Word TypeInfo_for_A_68,
  MR_Word TypeInfo_for_B_69,
  MR_Word TypeInfo_for_C_70,
  MR_Word TypeInfo_for_D_71,
  MR_Word TypeInfo_for_E_72,
  MR_Word P_9,
  MR_Word A_10,
  MR_Word B_11,
  MR_Word * C_12,
  MR_Box STATE_VARIABLE_Acc1_0_44,
  MR_Box * STATE_VARIABLE_Acc1_45,
  MR_Box STATE_VARIABLE_Acc2_0_46,
  MR_Box * STATE_VARIABLE_Acc2_47)
{
  MR_Word ITIA_15 = ((MR_Word) ((MR_hl_field(0, A_10, (MR_Integer) 0))));
  MR_Word ITCIA_16 = ((MR_Word) ((MR_hl_field(0, A_10, (MR_Integer) 1))));
  MR_Word UTIA_17 = ((MR_Word) ((MR_hl_field(0, A_10, (MR_Integer) 2))));
  MR_Word ETIA_18 = ((MR_Word) ((MR_hl_field(0, A_10, (MR_Integer) 3))));
  MR_Word UTCIA_19 = ((MR_Word) ((MR_hl_field(0, A_10, (MR_Integer) 4))));
  MR_Word ETCIA_20 = ((MR_Word) ((MR_hl_field(0, A_10, (MR_Integer) 5))));
  MR_Word ArgsA_21 = ((MR_Word) ((MR_hl_field(0, A_10, (MR_Integer) 6))));
  MR_Word MaybeRetValA_22 = ((MR_Word) ((MR_hl_field(0, A_10, (MR_Integer) 7))));
  MR_Word ITIB_23 = ((MR_Word) ((MR_hl_field(0, B_11, (MR_Integer) 0))));
  MR_Word ITCIB_24 = ((MR_Word) ((MR_hl_field(0, B_11, (MR_Integer) 1))));
  MR_Word UTIB_25 = ((MR_Word) ((MR_hl_field(0, B_11, (MR_Integer) 2))));
  MR_Word ETIB_26 = ((MR_Word) ((MR_hl_field(0, B_11, (MR_Integer) 3))));
  MR_Word UTCIB_27 = ((MR_Word) ((MR_hl_field(0, B_11, (MR_Integer) 4))));
  MR_Word ETCIB_28 = ((MR_Word) ((MR_hl_field(0, B_11, (MR_Integer) 5))));
  MR_Word ArgsB_29 = ((MR_Word) ((MR_hl_field(0, B_11, (MR_Integer) 6))));
  MR_Word MaybeRetValB_30 = ((MR_Word) ((MR_hl_field(0, B_11, (MR_Integer) 7))));
  MR_Word ITIC_31;
  MR_Word ITCIC_32;
  MR_Word UTIC_33;
  MR_Word ETIC_34;
  MR_Word UTCIC_35;
  MR_Word ETCIC_36;
  MR_Word ArgsC_37;
  MR_Word MaybeRetValC_41;
  MR_Box STATE_VARIABLE_Acc1_48_48;
  MR_Box STATE_VARIABLE_Acc2_49_49;
  MR_Box STATE_VARIABLE_Acc1_50_50;
  MR_Box STATE_VARIABLE_Acc2_51_51;
  MR_Box STATE_VARIABLE_Acc1_52_52;
  MR_Box STATE_VARIABLE_Acc2_53_53;
  MR_Box STATE_VARIABLE_Acc1_54_54;
  MR_Box STATE_VARIABLE_Acc2_55_55;
  MR_Box STATE_VARIABLE_Acc1_56_56;
  MR_Box STATE_VARIABLE_Acc2_57_57;
  MR_Box STATE_VARIABLE_Acc1_58_58;
  MR_Box STATE_VARIABLE_Acc2_59_59;
  MR_Box STATE_VARIABLE_Acc1_60_60;
  MR_Box STATE_VARIABLE_Acc2_61_61;

  mercury__list__map_corresponding_foldl2_8_p_0(TypeInfo_for_A_68, TypeInfo_for_B_69, TypeInfo_for_C_70, TypeInfo_for_D_71, TypeInfo_for_E_72, P_9, ITIA_15, ITIB_23, &ITIC_31, STATE_VARIABLE_Acc1_0_44, &STATE_VARIABLE_Acc1_48_48, STATE_VARIABLE_Acc2_0_46, &STATE_VARIABLE_Acc2_49_49);
  mercury__list__map_corresponding_foldl2_8_p_0(TypeInfo_for_A_68, TypeInfo_for_B_69, TypeInfo_for_C_70, TypeInfo_for_D_71, TypeInfo_for_E_72, P_9, ITCIA_16, ITCIB_24, &ITCIC_32, STATE_VARIABLE_Acc1_48_48, &STATE_VARIABLE_Acc1_50_50, STATE_VARIABLE_Acc2_49_49, &STATE_VARIABLE_Acc2_51_51);
  mercury__list__map_corresponding_foldl2_8_p_0(TypeInfo_for_A_68, TypeInfo_for_B_69, TypeInfo_for_C_70, TypeInfo_for_D_71, TypeInfo_for_E_72, P_9, UTIA_17, UTIB_25, &UTIC_33, STATE_VARIABLE_Acc1_50_50, &STATE_VARIABLE_Acc1_52_52, STATE_VARIABLE_Acc2_51_51, &STATE_VARIABLE_Acc2_53_53);
  mercury__list__map_corresponding_foldl2_8_p_0(TypeInfo_for_A_68, TypeInfo_for_B_69, TypeInfo_for_C_70, TypeInfo_for_D_71, TypeInfo_for_E_72, P_9, ETIA_18, ETIB_26, &ETIC_34, STATE_VARIABLE_Acc1_52_52, &STATE_VARIABLE_Acc1_54_54, STATE_VARIABLE_Acc2_53_53, &STATE_VARIABLE_Acc2_55_55);
  mercury__list__map_corresponding_foldl2_8_p_0(TypeInfo_for_A_68, TypeInfo_for_B_69, TypeInfo_for_C_70, TypeInfo_for_D_71, TypeInfo_for_E_72, P_9, UTCIA_19, UTCIB_27, &UTCIC_35, STATE_VARIABLE_Acc1_54_54, &STATE_VARIABLE_Acc1_56_56, STATE_VARIABLE_Acc2_55_55, &STATE_VARIABLE_Acc2_57_57);
  mercury__list__map_corresponding_foldl2_8_p_0(TypeInfo_for_A_68, TypeInfo_for_B_69, TypeInfo_for_C_70, TypeInfo_for_D_71, TypeInfo_for_E_72, P_9, ETCIA_20, ETCIB_28, &ETCIC_36, STATE_VARIABLE_Acc1_56_56, &STATE_VARIABLE_Acc1_58_58, STATE_VARIABLE_Acc2_57_57, &STATE_VARIABLE_Acc2_59_59);
  mercury__list__map_corresponding_foldl2_8_p_0(TypeInfo_for_A_68, TypeInfo_for_B_69, TypeInfo_for_C_70, TypeInfo_for_D_71, TypeInfo_for_E_72, P_9, ArgsA_21, ArgsB_29, &ArgsC_37, STATE_VARIABLE_Acc1_58_58, &STATE_VARIABLE_Acc1_60_60, STATE_VARIABLE_Acc2_59_59, &STATE_VARIABLE_Acc2_61_61);
  if ((MaybeRetValA_22 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((MaybeRetValB_30 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MaybeRetValC_41 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Acc1_45 = STATE_VARIABLE_Acc1_60_60;
      *STATE_VARIABLE_Acc2_47 = STATE_VARIABLE_Acc2_61_61;
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.hlds_args.proc_arg_vector_map_corresponding_foldl2\'/8", (MR_String) "mismatched proc_arg_vectors");
        return;
      }
  else
  {
    MR_Box Var_73 = (MR_hl_field(1, MaybeRetValA_22, (MR_Integer) 0));

    if ((MaybeRetValB_30 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.hlds_args.proc_arg_vector_map_corresponding_foldl2\'/8", (MR_String) "mismatched proc_arg_vectors");
        return;
      }
    else
    {
      MR_Box RetValB_39 = (MR_hl_field(1, MaybeRetValB_30, (MR_Integer) 0));
      MR_Box RetValC_40;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, P_9, (MR_Integer) 1))));

      func_0(((MR_Box) (P_9)), Var_73, RetValB_39, &RetValC_40, STATE_VARIABLE_Acc1_60_60, STATE_VARIABLE_Acc1_45, STATE_VARIABLE_Acc2_61_61, STATE_VARIABLE_Acc2_47);
      {
        MaybeRetValC_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeRetValC_41, 0) = RetValC_40;
      }
    }
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *C_12 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ITIC_31));
    MR_hl_field(0, base, 1) = ((MR_Box) (ITCIC_32));
    MR_hl_field(0, base, 2) = ((MR_Box) (UTIC_33));
    MR_hl_field(0, base, 3) = ((MR_Box) (ETIC_34));
    MR_hl_field(0, base, 4) = ((MR_Box) (UTCIC_35));
    MR_hl_field(0, base, 5) = ((MR_Box) (ETCIC_36));
    MR_hl_field(0, base, 6) = ((MR_Box) (ArgsC_37));
    MR_hl_field(0, base, 7) = ((MR_Box) (MaybeRetValC_41));
  }
}

MR_bool MR_CALL 
hlds__hlds_args__proc_arg_vector_all_true_2_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word P_3,
  MR_Word V_4)
{
  MR_bool succeeded;
  MR_Word ITI_5 = ((MR_Word) ((MR_hl_field(0, V_4, (MR_Integer) 0))));
  MR_Word ITCI_6 = ((MR_Word) ((MR_hl_field(0, V_4, (MR_Integer) 1))));
  MR_Word UTI_7 = ((MR_Word) ((MR_hl_field(0, V_4, (MR_Integer) 2))));
  MR_Word ETI_8 = ((MR_Word) ((MR_hl_field(0, V_4, (MR_Integer) 3))));
  MR_Word UTCI_9 = ((MR_Word) ((MR_hl_field(0, V_4, (MR_Integer) 4))));
  MR_Word ETCI_10 = ((MR_Word) ((MR_hl_field(0, V_4, (MR_Integer) 5))));
  MR_Word Args_11 = ((MR_Word) ((MR_hl_field(0, V_4, (MR_Integer) 6))));
  MR_Word MaybeRetVal_12 = ((MR_Word) ((MR_hl_field(0, V_4, (MR_Integer) 7))));

  succeeded = mercury__list__all_true_2_p_0(TypeInfo_for_T_14, P_3, ITI_5);
  if (succeeded)
  {
    succeeded = mercury__list__all_true_2_p_0(TypeInfo_for_T_14, P_3, ITCI_6);
    if (succeeded)
    {
      succeeded = mercury__list__all_true_2_p_0(TypeInfo_for_T_14, P_3, UTI_7);
      if (succeeded)
      {
        succeeded = mercury__list__all_true_2_p_0(TypeInfo_for_T_14, P_3, ETI_8);
        if (succeeded)
        {
          succeeded = mercury__list__all_true_2_p_0(TypeInfo_for_T_14, P_3, UTCI_9);
          if (succeeded)
          {
            succeeded = mercury__list__all_true_2_p_0(TypeInfo_for_T_14, P_3, ETCI_10);
            if (succeeded)
            {
              succeeded = mercury__list__all_true_2_p_0(TypeInfo_for_T_14, P_3, Args_11);
              if (succeeded)
              {
                if ((MaybeRetVal_12 == (MR_Word) ((MR_Unsigned) 0U)))
                  succeeded = MR_TRUE;
                else
                {
                  MR_Box RetVal_13 = (MR_hl_field(1, MaybeRetVal_12, (MR_Integer) 0));
                  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, P_3, (MR_Integer) 1))));

                  succeeded = func_0(((MR_Box) (P_3)), RetVal_13);
                }
              }
            }
          }
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
hlds__hlds_args__proc_arg_vector_map_corresponding_4_p_0(
  MR_Word TypeInfo_for_T_42,
  MR_Word TypeInfo_for_U_43,
  MR_Word TypeInfo_for_V_44,
  MR_Word P_5,
  MR_Word A_6,
  MR_Word B_7,
  MR_Word * C_8)
{
  MR_Word ITIA_9 = ((MR_Word) ((MR_hl_field(0, A_6, (MR_Integer) 0))));
  MR_Word ITCIA_10 = ((MR_Word) ((MR_hl_field(0, A_6, (MR_Integer) 1))));
  MR_Word UTIA_11 = ((MR_Word) ((MR_hl_field(0, A_6, (MR_Integer) 2))));
  MR_Word ETIA_12 = ((MR_Word) ((MR_hl_field(0, A_6, (MR_Integer) 3))));
  MR_Word UTCIA_13 = ((MR_Word) ((MR_hl_field(0, A_6, (MR_Integer) 4))));
  MR_Word ETCIA_14 = ((MR_Word) ((MR_hl_field(0, A_6, (MR_Integer) 5))));
  MR_Word ArgsA_15 = ((MR_Word) ((MR_hl_field(0, A_6, (MR_Integer) 6))));
  MR_Word MaybeRetValA_16 = ((MR_Word) ((MR_hl_field(0, A_6, (MR_Integer) 7))));
  MR_Word ITIB_17 = ((MR_Word) ((MR_hl_field(0, B_7, (MR_Integer) 0))));
  MR_Word ITCIB_18 = ((MR_Word) ((MR_hl_field(0, B_7, (MR_Integer) 1))));
  MR_Word UTIB_19 = ((MR_Word) ((MR_hl_field(0, B_7, (MR_Integer) 2))));
  MR_Word ETIB_20 = ((MR_Word) ((MR_hl_field(0, B_7, (MR_Integer) 3))));
  MR_Word UTCIB_21 = ((MR_Word) ((MR_hl_field(0, B_7, (MR_Integer) 4))));
  MR_Word ETCIB_22 = ((MR_Word) ((MR_hl_field(0, B_7, (MR_Integer) 5))));
  MR_Word ArgsB_23 = ((MR_Word) ((MR_hl_field(0, B_7, (MR_Integer) 6))));
  MR_Word MaybeRetValB_24 = ((MR_Word) ((MR_hl_field(0, B_7, (MR_Integer) 7))));
  MR_Word ITIC_25;
  MR_Word ITCIC_26;
  MR_Word UTIC_27;
  MR_Word ETIC_28;
  MR_Word UTCIC_29;
  MR_Word ETCIC_30;
  MR_Word ArgsC_31;
  MR_Word MaybeRetValC_35;

  mercury__list__map_corresponding_4_p_0(TypeInfo_for_T_42, TypeInfo_for_U_43, TypeInfo_for_V_44, P_5, ITIA_9, ITIB_17, &ITIC_25);
  mercury__list__map_corresponding_4_p_0(TypeInfo_for_T_42, TypeInfo_for_U_43, TypeInfo_for_V_44, P_5, ITCIA_10, ITCIB_18, &ITCIC_26);
  mercury__list__map_corresponding_4_p_0(TypeInfo_for_T_42, TypeInfo_for_U_43, TypeInfo_for_V_44, P_5, UTIA_11, UTIB_19, &UTIC_27);
  mercury__list__map_corresponding_4_p_0(TypeInfo_for_T_42, TypeInfo_for_U_43, TypeInfo_for_V_44, P_5, ETIA_12, ETIB_20, &ETIC_28);
  mercury__list__map_corresponding_4_p_0(TypeInfo_for_T_42, TypeInfo_for_U_43, TypeInfo_for_V_44, P_5, UTCIA_13, UTCIB_21, &UTCIC_29);
  mercury__list__map_corresponding_4_p_0(TypeInfo_for_T_42, TypeInfo_for_U_43, TypeInfo_for_V_44, P_5, ETCIA_14, ETCIB_22, &ETCIC_30);
  mercury__list__map_corresponding_4_p_0(TypeInfo_for_T_42, TypeInfo_for_U_43, TypeInfo_for_V_44, P_5, ArgsA_15, ArgsB_23, &ArgsC_31);
  if ((MaybeRetValA_16 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((MaybeRetValB_24 == (MR_Word) ((MR_Unsigned) 0U)))
      MaybeRetValC_35 = (MR_Word) ((MR_Unsigned) 0U);
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.hlds_args.proc_arg_vector_map_corresponding\'/4", (MR_String) "mismatched proc_arg_vectors");
        return;
      }
  else
  {
    MR_Box Var_45 = (MR_hl_field(1, MaybeRetValA_16, (MR_Integer) 0));

    if ((MaybeRetValB_24 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.hlds_args.proc_arg_vector_map_corresponding\'/4", (MR_String) "mismatched proc_arg_vectors");
        return;
      }
    else
    {
      MR_Box RetValB_33 = (MR_hl_field(1, MaybeRetValB_24, (MR_Integer) 0));
      MR_Box RetValC_34;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, P_5, (MR_Integer) 1))));

      func_0(((MR_Box) (P_5)), Var_45, RetValB_33, &RetValC_34);
      {
        MaybeRetValC_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeRetValC_35, 0) = RetValC_34;
      }
    }
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *C_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ITIC_25));
    MR_hl_field(0, base, 1) = ((MR_Box) (ITCIC_26));
    MR_hl_field(0, base, 2) = ((MR_Box) (UTIC_27));
    MR_hl_field(0, base, 3) = ((MR_Box) (ETIC_28));
    MR_hl_field(0, base, 4) = ((MR_Box) (UTCIC_29));
    MR_hl_field(0, base, 5) = ((MR_Box) (ETCIC_30));
    MR_hl_field(0, base, 6) = ((MR_Box) (ArgsC_31));
    MR_hl_field(0, base, 7) = ((MR_Box) (MaybeRetValC_35));
  }
}

void MR_CALL 
hlds__hlds_args__proc_arg_vector_map_3_p_0(
  MR_Word TypeInfo_for_T_25,
  MR_Word TypeInfo_for_U_26,
  MR_Word Pred_4,
  MR_Word V0_5,
  MR_Word * V_6)
{
  MR_Word ITI0_7 = ((MR_Word) ((MR_hl_field(0, V0_5, (MR_Integer) 0))));
  MR_Word ITCI0_8 = ((MR_Word) ((MR_hl_field(0, V0_5, (MR_Integer) 1))));
  MR_Word UTI0_9 = ((MR_Word) ((MR_hl_field(0, V0_5, (MR_Integer) 2))));
  MR_Word ETI0_10 = ((MR_Word) ((MR_hl_field(0, V0_5, (MR_Integer) 3))));
  MR_Word UTCI0_11 = ((MR_Word) ((MR_hl_field(0, V0_5, (MR_Integer) 4))));
  MR_Word ETCI0_12 = ((MR_Word) ((MR_hl_field(0, V0_5, (MR_Integer) 5))));
  MR_Word Args0_13 = ((MR_Word) ((MR_hl_field(0, V0_5, (MR_Integer) 6))));
  MR_Word MaybeRetVal0_14 = ((MR_Word) ((MR_hl_field(0, V0_5, (MR_Integer) 7))));
  MR_Word ITI_15;
  MR_Word ITCI_16;
  MR_Word UTI_17;
  MR_Word ETI_18;
  MR_Word UTCI_19;
  MR_Word ETCI_20;
  MR_Word Args_21;
  MR_Word MaybeRetVal_24;

  mercury__list__map_3_p_0(TypeInfo_for_T_25, TypeInfo_for_U_26, Pred_4, ITI0_7, &ITI_15);
  mercury__list__map_3_p_0(TypeInfo_for_T_25, TypeInfo_for_U_26, Pred_4, ITCI0_8, &ITCI_16);
  mercury__list__map_3_p_0(TypeInfo_for_T_25, TypeInfo_for_U_26, Pred_4, UTI0_9, &UTI_17);
  mercury__list__map_3_p_0(TypeInfo_for_T_25, TypeInfo_for_U_26, Pred_4, ETI0_10, &ETI_18);
  mercury__list__map_3_p_0(TypeInfo_for_T_25, TypeInfo_for_U_26, Pred_4, UTCI0_11, &UTCI_19);
  mercury__list__map_3_p_0(TypeInfo_for_T_25, TypeInfo_for_U_26, Pred_4, ETCI0_12, &ETCI_20);
  mercury__list__map_3_p_0(TypeInfo_for_T_25, TypeInfo_for_U_26, Pred_4, Args0_13, &Args_21);
  if ((MaybeRetVal0_14 == (MR_Word) ((MR_Unsigned) 0U)))
    MaybeRetVal_24 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Box RetVal0_22 = (MR_hl_field(1, MaybeRetVal0_14, (MR_Integer) 0));
    MR_Box RetVal_23;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_4, (MR_Integer) 1))));

    func_0(((MR_Box) (Pred_4)), RetVal0_22, &RetVal_23);
    {
      MaybeRetVal_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeRetVal_24, 0) = RetVal_23;
    }
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *V_6 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ITI_15));
    MR_hl_field(0, base, 1) = ((MR_Box) (ITCI_16));
    MR_hl_field(0, base, 2) = ((MR_Box) (UTI_17));
    MR_hl_field(0, base, 3) = ((MR_Box) (ETI_18));
    MR_hl_field(0, base, 4) = ((MR_Box) (UTCI_19));
    MR_hl_field(0, base, 5) = ((MR_Box) (ETCI_20));
    MR_hl_field(0, base, 6) = ((MR_Box) (Args_21));
    MR_hl_field(0, base, 7) = ((MR_Box) (MaybeRetVal_24));
  }
}

MR_Word MR_CALL 
hlds__hlds_args__proc_arg_vector_map_2_f_0(
  MR_Word TypeInfo_for_T_25,
  MR_Word TypeInfo_for_U_26,
  MR_Word Func_4,
  MR_Word V0_5)
{
  MR_Word V_6;
  MR_Word ITI0_7 = ((MR_Word) ((MR_hl_field(0, V0_5, (MR_Integer) 0))));
  MR_Word ITCI0_8 = ((MR_Word) ((MR_hl_field(0, V0_5, (MR_Integer) 1))));
  MR_Word UTI0_9 = ((MR_Word) ((MR_hl_field(0, V0_5, (MR_Integer) 2))));
  MR_Word ETI0_10 = ((MR_Word) ((MR_hl_field(0, V0_5, (MR_Integer) 3))));
  MR_Word UTCI0_11 = ((MR_Word) ((MR_hl_field(0, V0_5, (MR_Integer) 4))));
  MR_Word ETCI0_12 = ((MR_Word) ((MR_hl_field(0, V0_5, (MR_Integer) 5))));
  MR_Word Args0_13 = ((MR_Word) ((MR_hl_field(0, V0_5, (MR_Integer) 6))));
  MR_Word MaybeRetVal0_14 = ((MR_Word) ((MR_hl_field(0, V0_5, (MR_Integer) 7))));
  MR_Word ITI_15;
  MR_Word ITCI_16;
  MR_Word UTI_17;
  MR_Word ETI_18;
  MR_Word UTCI_19;
  MR_Word ETCI_20;
  MR_Word Args_21;
  MR_Word MaybeRetVal_24;

  ITI_15 = mercury__list__map_2_f_0(TypeInfo_for_T_25, TypeInfo_for_U_26, Func_4, ITI0_7);
  ITCI_16 = mercury__list__map_2_f_0(TypeInfo_for_T_25, TypeInfo_for_U_26, Func_4, ITCI0_8);
  UTI_17 = mercury__list__map_2_f_0(TypeInfo_for_T_25, TypeInfo_for_U_26, Func_4, UTI0_9);
  ETI_18 = mercury__list__map_2_f_0(TypeInfo_for_T_25, TypeInfo_for_U_26, Func_4, ETI0_10);
  UTCI_19 = mercury__list__map_2_f_0(TypeInfo_for_T_25, TypeInfo_for_U_26, Func_4, UTCI0_11);
  ETCI_20 = mercury__list__map_2_f_0(TypeInfo_for_T_25, TypeInfo_for_U_26, Func_4, ETCI0_12);
  Args_21 = mercury__list__map_2_f_0(TypeInfo_for_T_25, TypeInfo_for_U_26, Func_4, Args0_13);
  if ((MaybeRetVal0_14 == (MR_Word) ((MR_Unsigned) 0U)))
    MaybeRetVal_24 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Box RetVal0_22 = (MR_hl_field(1, MaybeRetVal0_14, (MR_Integer) 0));
    MR_Box RetVal_23;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, Func_4, (MR_Integer) 1))));

    RetVal_23 = func_0(((MR_Box) (Func_4)), RetVal0_22);
    {
      MaybeRetVal_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeRetVal_24, 0) = RetVal_23;
    }
  }
  {
    V_6 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, V_6, 0) = ((MR_Box) (ITI_15));
    MR_hl_field(0, V_6, 1) = ((MR_Box) (ITCI_16));
    MR_hl_field(0, V_6, 2) = ((MR_Box) (UTI_17));
    MR_hl_field(0, V_6, 3) = ((MR_Box) (ETI_18));
    MR_hl_field(0, V_6, 4) = ((MR_Box) (UTCI_19));
    MR_hl_field(0, V_6, 5) = ((MR_Box) (ETCI_20));
    MR_hl_field(0, V_6, 6) = ((MR_Box) (Args_21));
    MR_hl_field(0, V_6, 7) = ((MR_Box) (MaybeRetVal_24));
  }
  return V_6;
}

void MR_CALL 
hlds__hlds_args__proc_arg_vector_to_func_args_3_p_0(
  MR_Word TypeInfo_for_T_25,
  MR_Word Vector_4,
  MR_Word * FuncArgs_5,
  MR_Box * FuncRetVal_6)
{
  MR_Word InstanceTypeInfos_7 = ((MR_Word) ((MR_hl_field(0, Vector_4, (MR_Integer) 0))));
  MR_Word InstanceTypeClassInfos_8 = ((MR_Word) ((MR_hl_field(0, Vector_4, (MR_Integer) 1))));
  MR_Word UnivTypeInfos_9 = ((MR_Word) ((MR_hl_field(0, Vector_4, (MR_Integer) 2))));
  MR_Word ExistTypeInfos_10 = ((MR_Word) ((MR_hl_field(0, Vector_4, (MR_Integer) 3))));
  MR_Word UnivTypeClassInfos_11 = ((MR_Word) ((MR_hl_field(0, Vector_4, (MR_Integer) 4))));
  MR_Word ExistTypeClassInfos_12 = ((MR_Word) ((MR_hl_field(0, Vector_4, (MR_Integer) 5))));
  MR_Word OrigArgs_13 = ((MR_Word) ((MR_hl_field(0, Vector_4, (MR_Integer) 6))));
  MR_Word MaybeRetValue_14 = ((MR_Word) ((MR_hl_field(0, Vector_4, (MR_Integer) 7))));
  MR_Word Var_15;
  MR_Word Var_16;
  MR_Word Var_17;
  MR_Word Var_18;
  MR_Word Var_19;
  MR_Word Var_20;
  MR_Word Var_21;

  {
    Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_21, 0) = ((MR_Box) (OrigArgs_13));
    MR_hl_field(1, Var_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_20, 0) = ((MR_Box) (ExistTypeClassInfos_12));
    MR_hl_field(1, Var_20, 1) = ((MR_Box) (Var_21));
  }
  {
    Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_19, 0) = ((MR_Box) (UnivTypeClassInfos_11));
    MR_hl_field(1, Var_19, 1) = ((MR_Box) (Var_20));
  }
  {
    Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_18, 0) = ((MR_Box) (ExistTypeInfos_10));
    MR_hl_field(1, Var_18, 1) = ((MR_Box) (Var_19));
  }
  {
    Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_17, 0) = ((MR_Box) (UnivTypeInfos_9));
    MR_hl_field(1, Var_17, 1) = ((MR_Box) (Var_18));
  }
  {
    Var_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_16, 0) = ((MR_Box) (InstanceTypeClassInfos_8));
    MR_hl_field(1, Var_16, 1) = ((MR_Box) (Var_17));
  }
  {
    Var_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_15, 0) = ((MR_Box) (InstanceTypeInfos_7));
    MR_hl_field(1, Var_15, 1) = ((MR_Box) (Var_16));
  }
  *FuncArgs_5 = mercury__list__condense_1_f_0(TypeInfo_for_T_25, Var_15);
  if ((MaybeRetValue_14 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.hlds_args.proc_arg_vector_to_func_args\'/3", (MR_String) "predicate");
      return;
    }
  else
    *FuncRetVal_6 = (MR_hl_field(1, MaybeRetValue_14, (MR_Integer) 0));
}

MR_bool MR_CALL 
hlds__hlds_args__proc_arg_vector_member_2_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word ArgVec_3,
  MR_Box Var_4)
{
  MR_bool succeeded;
  MR_Word InstanceTypeInfos_5 = ((MR_Word) ((MR_hl_field(0, ArgVec_3, (MR_Integer) 0))));
  MR_Word InstanceTypeClassInfos_6 = ((MR_Word) ((MR_hl_field(0, ArgVec_3, (MR_Integer) 1))));
  MR_Word UnivTypeInfos_7 = ((MR_Word) ((MR_hl_field(0, ArgVec_3, (MR_Integer) 2))));
  MR_Word ExistTypeInfos_8 = ((MR_Word) ((MR_hl_field(0, ArgVec_3, (MR_Integer) 3))));
  MR_Word UnivTypeClassInfos_9 = ((MR_Word) ((MR_hl_field(0, ArgVec_3, (MR_Integer) 4))));
  MR_Word ExistTypeClassInfos_10 = ((MR_Word) ((MR_hl_field(0, ArgVec_3, (MR_Integer) 5))));
  MR_Word OrigArgs_11 = ((MR_Word) ((MR_hl_field(0, ArgVec_3, (MR_Integer) 6))));
  MR_Word MaybeRetValue_12 = ((MR_Word) ((MR_hl_field(0, ArgVec_3, (MR_Integer) 7))));

  succeeded = mercury__list__member_2_p_0(TypeInfo_for_T_13, Var_4, OrigArgs_11);
  if (!(succeeded))
  {
    {
      MR_Box Var_14;

      succeeded = (MaybeRetValue_12 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_14 = (MR_hl_field(1, MaybeRetValue_12, (MR_Integer) 0));
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_13, Var_4, Var_14);
      }
    }
    if (!(succeeded))
    {
      succeeded = mercury__list__member_2_p_0(TypeInfo_for_T_13, Var_4, InstanceTypeInfos_5);
      if (!(succeeded))
      {
        succeeded = mercury__list__member_2_p_0(TypeInfo_for_T_13, Var_4, InstanceTypeClassInfos_6);
        if (!(succeeded))
        {
          succeeded = mercury__list__member_2_p_0(TypeInfo_for_T_13, Var_4, UnivTypeInfos_7);
          if (!(succeeded))
          {
            succeeded = mercury__list__member_2_p_0(TypeInfo_for_T_13, Var_4, ExistTypeInfos_8);
            if (!(succeeded))
            {
              succeeded = mercury__list__member_2_p_0(TypeInfo_for_T_13, Var_4, UnivTypeClassInfos_9);
              if (!(succeeded))
                succeeded = mercury__list__member_2_p_0(TypeInfo_for_T_13, Var_4, ExistTypeClassInfos_10);
            }
          }
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
hlds__hlds_args__proc_arg_vector_partition_poly_args_3_p_0(
  MR_Word TypeInfo_for_T_25,
  MR_Word ArgVec_4,
  MR_Word * PolyArgs_5,
  MR_Word * NonPolyArgs_6)
{
  MR_Word InstanceTypeInfos_7 = ((MR_Word) ((MR_hl_field(0, ArgVec_4, (MR_Integer) 0))));
  MR_Word InstanceTypeClassInfos_8 = ((MR_Word) ((MR_hl_field(0, ArgVec_4, (MR_Integer) 1))));
  MR_Word UnivTypeInfos_9 = ((MR_Word) ((MR_hl_field(0, ArgVec_4, (MR_Integer) 2))));
  MR_Word ExistTypeInfos_10 = ((MR_Word) ((MR_hl_field(0, ArgVec_4, (MR_Integer) 3))));
  MR_Word UnivTypeClassInfos_11 = ((MR_Word) ((MR_hl_field(0, ArgVec_4, (MR_Integer) 4))));
  MR_Word ExistTypeClassInfos_12 = ((MR_Word) ((MR_hl_field(0, ArgVec_4, (MR_Integer) 5))));
  MR_Word OrigArgs_13 = ((MR_Word) ((MR_hl_field(0, ArgVec_4, (MR_Integer) 6))));
  MR_Word MaybeRetValue_14 = ((MR_Word) ((MR_hl_field(0, ArgVec_4, (MR_Integer) 7))));
  MR_Word Var_16;
  MR_Word Var_17;
  MR_Word Var_18;
  MR_Word Var_19;
  MR_Word Var_20;
  MR_Word Var_21;

  {
    Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_21, 0) = ((MR_Box) (ExistTypeClassInfos_12));
    MR_hl_field(1, Var_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_20, 0) = ((MR_Box) (UnivTypeClassInfos_11));
    MR_hl_field(1, Var_20, 1) = ((MR_Box) (Var_21));
  }
  {
    Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_19, 0) = ((MR_Box) (ExistTypeInfos_10));
    MR_hl_field(1, Var_19, 1) = ((MR_Box) (Var_20));
  }
  {
    Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_18, 0) = ((MR_Box) (UnivTypeInfos_9));
    MR_hl_field(1, Var_18, 1) = ((MR_Box) (Var_19));
  }
  {
    Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_17, 0) = ((MR_Box) (InstanceTypeClassInfos_8));
    MR_hl_field(1, Var_17, 1) = ((MR_Box) (Var_18));
  }
  {
    Var_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_16, 0) = ((MR_Box) (InstanceTypeInfos_7));
    MR_hl_field(1, Var_16, 1) = ((MR_Box) (Var_17));
  }
  mercury__list__condense_2_p_0(TypeInfo_for_T_25, Var_16, PolyArgs_5);
  if ((MaybeRetValue_14 == (MR_Word) ((MR_Unsigned) 0U)))
    *NonPolyArgs_6 = OrigArgs_13;
  else
  {
    MR_Box RetValue_15 = (MR_hl_field(1, MaybeRetValue_14, (MR_Integer) 0));
    MR_Word Var_23;

    {
      Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_23, 0) = RetValue_15;
      MR_hl_field(1, Var_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    *NonPolyArgs_6 = mercury__list__f_43_43_2_f_0(TypeInfo_for_T_25, OrigArgs_13, Var_23);
  }
}

void MR_CALL 
hlds__hlds_args__apply_renaming_to_proc_arg_vector_3_p_0(
  MR_Word TypeInfo_for_T_25,
  MR_Word Renaming_4,
  MR_Word ArgVec0_5,
  MR_Word * ArgVec_6)
{
  MR_bool succeeded;
  MR_Word InstanceTypeInfos0_7 = ((MR_Word) ((MR_hl_field(0, ArgVec0_5, (MR_Integer) 0))));
  MR_Word InstanceTypeClassInfos0_8 = ((MR_Word) ((MR_hl_field(0, ArgVec0_5, (MR_Integer) 1))));
  MR_Word UnivTypeInfos0_9 = ((MR_Word) ((MR_hl_field(0, ArgVec0_5, (MR_Integer) 2))));
  MR_Word ExistTypeInfos0_10 = ((MR_Word) ((MR_hl_field(0, ArgVec0_5, (MR_Integer) 3))));
  MR_Word UnivTypeClassInfos0_11 = ((MR_Word) ((MR_hl_field(0, ArgVec0_5, (MR_Integer) 4))));
  MR_Word ExistTypeClassInfos0_12 = ((MR_Word) ((MR_hl_field(0, ArgVec0_5, (MR_Integer) 5))));
  MR_Word OrigArgs0_13 = ((MR_Word) ((MR_hl_field(0, ArgVec0_5, (MR_Integer) 6))));
  MR_Word MaybeRetValue0_14 = ((MR_Word) ((MR_hl_field(0, ArgVec0_5, (MR_Integer) 7))));
  MR_Word InstanceTypeInfos_15;
  MR_Word InstanceTypeClassInfos_16;
  MR_Word UnivTypeInfos_17;
  MR_Word ExistTypeInfos_18;
  MR_Word UnivTypeClassInfos_19;
  MR_Word ExistTypeClassInfos_20;
  MR_Word OrigArgs_21;
  MR_Word MaybeRetValue_24;

  parse_tree__prog_type__apply_partial_map_to_list_3_p_0(TypeInfo_for_T_25, Renaming_4, InstanceTypeInfos0_7, &InstanceTypeInfos_15);
  parse_tree__prog_type__apply_partial_map_to_list_3_p_0(TypeInfo_for_T_25, Renaming_4, InstanceTypeClassInfos0_8, &InstanceTypeClassInfos_16);
  parse_tree__prog_type__apply_partial_map_to_list_3_p_0(TypeInfo_for_T_25, Renaming_4, UnivTypeInfos0_9, &UnivTypeInfos_17);
  parse_tree__prog_type__apply_partial_map_to_list_3_p_0(TypeInfo_for_T_25, Renaming_4, ExistTypeInfos0_10, &ExistTypeInfos_18);
  parse_tree__prog_type__apply_partial_map_to_list_3_p_0(TypeInfo_for_T_25, Renaming_4, UnivTypeClassInfos0_11, &UnivTypeClassInfos_19);
  parse_tree__prog_type__apply_partial_map_to_list_3_p_0(TypeInfo_for_T_25, Renaming_4, ExistTypeClassInfos0_12, &ExistTypeClassInfos_20);
  parse_tree__prog_type__apply_partial_map_to_list_3_p_0(TypeInfo_for_T_25, Renaming_4, OrigArgs0_13, &OrigArgs_21);
  if ((MaybeRetValue0_14 == (MR_Word) ((MR_Unsigned) 0U)))
    MaybeRetValue_24 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Box Value0_22 = (MR_hl_field(1, MaybeRetValue0_14, (MR_Integer) 0));
    MR_Box Value_23;

    succeeded = mercury__map__search_3_p_0(TypeInfo_for_T_25, TypeInfo_for_T_25, Renaming_4, Value0_22, &Value_23);
    if (succeeded)
      {
        MaybeRetValue_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeRetValue_24, 0) = Value_23;
      }
    else
      MaybeRetValue_24 = MaybeRetValue0_14;
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *ArgVec_6 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (InstanceTypeInfos_15));
    MR_hl_field(0, base, 1) = ((MR_Box) (InstanceTypeClassInfos_16));
    MR_hl_field(0, base, 2) = ((MR_Box) (UnivTypeInfos_17));
    MR_hl_field(0, base, 3) = ((MR_Box) (ExistTypeInfos_18));
    MR_hl_field(0, base, 4) = ((MR_Box) (UnivTypeClassInfos_19));
    MR_hl_field(0, base, 5) = ((MR_Box) (ExistTypeClassInfos_20));
    MR_hl_field(0, base, 6) = ((MR_Box) (OrigArgs_21));
    MR_hl_field(0, base, 7) = ((MR_Box) (MaybeRetValue_24));
  }
}

MR_Word MR_CALL 
hlds__hlds_args__proc_arg_vector_to_set_1_f_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word ArgVec_3)
{
  MR_Word Set_4;
  MR_Word List_5;

  List_5 = hlds__hlds_args__proc_arg_vector_to_list_1_f_0(TypeInfo_for_T_6, ArgVec_3);
  Set_4 = mercury__set__list_to_set_1_f_0(TypeInfo_for_T_6, List_5);
  return Set_4;
}

MR_Word MR_CALL 
hlds__hlds_args__proc_arg_vector_to_list_1_f_0(
  MR_Word TypeInfo_for_T_25,
  MR_Word ArgVec_3)
{
  MR_Word List_4;
  MR_Word InstanceTypeInfos_5 = ((MR_Word) ((MR_hl_field(0, ArgVec_3, (MR_Integer) 0))));
  MR_Word InstanceTypeClassInfos_6 = ((MR_Word) ((MR_hl_field(0, ArgVec_3, (MR_Integer) 1))));
  MR_Word UnivTypeInfos_7 = ((MR_Word) ((MR_hl_field(0, ArgVec_3, (MR_Integer) 2))));
  MR_Word ExistTypeInfos_8 = ((MR_Word) ((MR_hl_field(0, ArgVec_3, (MR_Integer) 3))));
  MR_Word UnivTypeClassInfos_9 = ((MR_Word) ((MR_hl_field(0, ArgVec_3, (MR_Integer) 4))));
  MR_Word ExistTypeClassInfos_10 = ((MR_Word) ((MR_hl_field(0, ArgVec_3, (MR_Integer) 5))));
  MR_Word OrigArgs_11 = ((MR_Word) ((MR_hl_field(0, ArgVec_3, (MR_Integer) 6))));
  MR_Word MaybeRetValue_12 = ((MR_Word) ((MR_hl_field(0, ArgVec_3, (MR_Integer) 7))));
  MR_Word RetValue_14;
  MR_Word Var_16;
  MR_Word Var_17;
  MR_Word Var_18;
  MR_Word Var_19;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_23;

  if ((MaybeRetValue_12 == (MR_Word) ((MR_Unsigned) 0U)))
    RetValue_14 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Box Value_13 = (MR_hl_field(1, MaybeRetValue_12, (MR_Integer) 0));

    {
      RetValue_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, RetValue_14, 0) = Value_13;
      MR_hl_field(1, RetValue_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  {
    Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_23, 0) = ((MR_Box) (RetValue_14));
    MR_hl_field(1, Var_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_22, 0) = ((MR_Box) (OrigArgs_11));
    MR_hl_field(1, Var_22, 1) = ((MR_Box) (Var_23));
  }
  {
    Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_21, 0) = ((MR_Box) (ExistTypeClassInfos_10));
    MR_hl_field(1, Var_21, 1) = ((MR_Box) (Var_22));
  }
  {
    Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_20, 0) = ((MR_Box) (UnivTypeClassInfos_9));
    MR_hl_field(1, Var_20, 1) = ((MR_Box) (Var_21));
  }
  {
    Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_19, 0) = ((MR_Box) (ExistTypeInfos_8));
    MR_hl_field(1, Var_19, 1) = ((MR_Box) (Var_20));
  }
  {
    Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_18, 0) = ((MR_Box) (UnivTypeInfos_7));
    MR_hl_field(1, Var_18, 1) = ((MR_Box) (Var_19));
  }
  {
    Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_17, 0) = ((MR_Box) (InstanceTypeClassInfos_6));
    MR_hl_field(1, Var_17, 1) = ((MR_Box) (Var_18));
  }
  {
    Var_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_16, 0) = ((MR_Box) (InstanceTypeInfos_5));
    MR_hl_field(1, Var_16, 1) = ((MR_Box) (Var_17));
  }
  mercury__list__condense_2_p_0(TypeInfo_for_T_25, Var_16, &List_4);
  return List_4;
}

void MR_CALL 
hlds__hlds_args__proc_arg_vector_set_maybe_ret_value_3_p_0(
  MR_Word TypeInfo_for_T_16,
  MR_Word RV_4,
  MR_Word STATE_VARIABLE_V_0_6,
  MR_Word * STATE_VARIABLE_V_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_V_0_6, (MR_Integer) 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_V_0_6, (MR_Integer) 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_V_0_6, (MR_Integer) 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_V_0_6, (MR_Integer) 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_V_0_6, (MR_Integer) 4))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_V_0_6, (MR_Integer) 5))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_V_0_6, (MR_Integer) 6))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_V_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (RV_4));
  }
}

void MR_CALL 
hlds__hlds_args__proc_arg_vector_set_user_args_3_p_0(
  MR_Word TypeInfo_for_T_16,
  MR_Word UA_4,
  MR_Word STATE_VARIABLE_V_0_6,
  MR_Word * STATE_VARIABLE_V_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_V_0_6, (MR_Integer) 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_V_0_6, (MR_Integer) 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_V_0_6, (MR_Integer) 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_V_0_6, (MR_Integer) 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_V_0_6, (MR_Integer) 4))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_V_0_6, (MR_Integer) 5))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_V_0_6, (MR_Integer) 7))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_V_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (UA_4));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
  }
}

void MR_CALL 
hlds__hlds_args__proc_arg_vector_set_exist_typeclass_infos_3_p_0(
  MR_Word TypeInfo_for_T_16,
  MR_Word ETCI_4,
  MR_Word STATE_VARIABLE_V_0_6,
  MR_Word * STATE_VARIABLE_V_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_V_0_6, (MR_Integer) 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_V_0_6, (MR_Integer) 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_V_0_6, (MR_Integer) 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_V_0_6, (MR_Integer) 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_V_0_6, (MR_Integer) 4))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_V_0_6, (MR_Integer) 6))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_V_0_6, (MR_Integer) 7))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_V_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (ETCI_4));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
  }
}

void MR_CALL 
hlds__hlds_args__proc_arg_vector_set_univ_typeclass_infos_3_p_0(
  MR_Word TypeInfo_for_T_16,
  MR_Word UTCI_4,
  MR_Word STATE_VARIABLE_V_0_6,
  MR_Word * STATE_VARIABLE_V_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_V_0_6, (MR_Integer) 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_V_0_6, (MR_Integer) 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_V_0_6, (MR_Integer) 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_V_0_6, (MR_Integer) 3))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_V_0_6, (MR_Integer) 5))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_V_0_6, (MR_Integer) 6))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_V_0_6, (MR_Integer) 7))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_V_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (UTCI_4));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
  }
}

void MR_CALL 
hlds__hlds_args__proc_arg_vector_set_exist_type_infos_3_p_0(
  MR_Word TypeInfo_for_T_16,
  MR_Word ETI_4,
  MR_Word STATE_VARIABLE_V_0_6,
  MR_Word * STATE_VARIABLE_V_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_V_0_6, (MR_Integer) 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_V_0_6, (MR_Integer) 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_V_0_6, (MR_Integer) 2))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_V_0_6, (MR_Integer) 4))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_V_0_6, (MR_Integer) 5))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_V_0_6, (MR_Integer) 6))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_V_0_6, (MR_Integer) 7))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_V_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (ETI_4));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
  }
}

void MR_CALL 
hlds__hlds_args__proc_arg_vector_set_univ_type_infos_3_p_0(
  MR_Word TypeInfo_for_T_16,
  MR_Word UTI_4,
  MR_Word STATE_VARIABLE_V_0_6,
  MR_Word * STATE_VARIABLE_V_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_V_0_6, (MR_Integer) 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_V_0_6, (MR_Integer) 1))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_V_0_6, (MR_Integer) 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_V_0_6, (MR_Integer) 4))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_V_0_6, (MR_Integer) 5))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_V_0_6, (MR_Integer) 6))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_V_0_6, (MR_Integer) 7))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_V_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (UTI_4));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
  }
}

void MR_CALL 
hlds__hlds_args__proc_arg_vector_set_instance_typeclass_infos_3_p_0(
  MR_Word TypeInfo_for_T_16,
  MR_Word ITCI_4,
  MR_Word STATE_VARIABLE_V_0_6,
  MR_Word * STATE_VARIABLE_V_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_V_0_6, (MR_Integer) 0))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_V_0_6, (MR_Integer) 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_V_0_6, (MR_Integer) 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_V_0_6, (MR_Integer) 4))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_V_0_6, (MR_Integer) 5))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_V_0_6, (MR_Integer) 6))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_V_0_6, (MR_Integer) 7))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_V_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (ITCI_4));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
  }
}

void MR_CALL 
hlds__hlds_args__proc_arg_vector_set_instance_type_infos_3_p_0(
  MR_Word TypeInfo_for_T_16,
  MR_Word ITI_4,
  MR_Word STATE_VARIABLE_V_0_6,
  MR_Word * STATE_VARIABLE_V_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_V_0_6, (MR_Integer) 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_V_0_6, (MR_Integer) 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_V_0_6, (MR_Integer) 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_V_0_6, (MR_Integer) 4))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_V_0_6, (MR_Integer) 5))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_V_0_6, (MR_Integer) 6))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_V_0_6, (MR_Integer) 7))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_V_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ITI_4));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
  }
}

MR_Word MR_CALL 
hlds__hlds_args__proc_arg_vector_get_maybe_ret_value_1_f_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word V_3)
{
  MR_Word HeadVar__2_2 = ((MR_Word) ((MR_hl_field(0, V_3, (MR_Integer) 7))));

  return HeadVar__2_2;
}

MR_Word MR_CALL 
hlds__hlds_args__proc_arg_vector_get_user_args_1_f_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word V_3)
{
  MR_Word HeadVar__2_2 = ((MR_Word) ((MR_hl_field(0, V_3, (MR_Integer) 6))));

  return HeadVar__2_2;
}

MR_Word MR_CALL 
hlds__hlds_args__proc_arg_vector_get_exist_typeclass_infos_1_f_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word V_3)
{
  MR_Word HeadVar__2_2 = ((MR_Word) ((MR_hl_field(0, V_3, (MR_Integer) 5))));

  return HeadVar__2_2;
}

MR_Word MR_CALL 
hlds__hlds_args__proc_arg_vector_get_univ_typeclass_infos_1_f_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word V_3)
{
  MR_Word HeadVar__2_2 = ((MR_Word) ((MR_hl_field(0, V_3, (MR_Integer) 4))));

  return HeadVar__2_2;
}

MR_Word MR_CALL 
hlds__hlds_args__proc_arg_vector_get_exist_type_infos_1_f_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word V_3)
{
  MR_Word HeadVar__2_2 = ((MR_Word) ((MR_hl_field(0, V_3, (MR_Integer) 3))));

  return HeadVar__2_2;
}

MR_Word MR_CALL 
hlds__hlds_args__proc_arg_vector_get_univ_type_infos_1_f_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word V_3)
{
  MR_Word HeadVar__2_2 = ((MR_Word) ((MR_hl_field(0, V_3, (MR_Integer) 2))));

  return HeadVar__2_2;
}

MR_Word MR_CALL 
hlds__hlds_args__proc_arg_vector_get_instance_typeclass_infos_1_f_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word V_3)
{
  MR_Word HeadVar__2_2 = ((MR_Word) ((MR_hl_field(0, V_3, (MR_Integer) 1))));

  return HeadVar__2_2;
}

MR_Word MR_CALL 
hlds__hlds_args__proc_arg_vector_get_instance_type_infos_1_f_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word V_3)
{
  MR_Word HeadVar__2_2 = ((MR_Word) ((MR_hl_field(0, V_3, (MR_Integer) 0))));

  return HeadVar__2_2;
}

MR_Word MR_CALL 
hlds__hlds_args__proc_arg_vector_init_2_f_0(
  MR_Word TypeInfo_for_T_16,
  MR_Word PredOrFunc_4,
  MR_Word Args0_5)
{
  MR_Word ArgVec_6;
  MR_Word Args_7;
  MR_Word MaybeRetVal_8;

  switch (PredOrFunc_4) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Box RetVal_9;

        mercury__list__det_split_last_3_p_0(TypeInfo_for_T_16, Args0_5, &Args_7, &RetVal_9);
        {
          MaybeRetVal_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeRetVal_8, 0) = RetVal_9;
        }
      }
      break;
    case (MR_Integer) 0:
      {
        Args_7 = Args0_5;
        MaybeRetVal_8 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
  }
  {
    ArgVec_6 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ArgVec_6, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, ArgVec_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, ArgVec_6, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, ArgVec_6, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, ArgVec_6, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, ArgVec_6, 5) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, ArgVec_6, 6) = ((MR_Box) (Args_7));
    MR_hl_field(0, ArgVec_6, 7) = ((MR_Box) (MaybeRetVal_8));
  }
  return ArgVec_6;
}

static MR_bool MR_CALL 
hlds__hlds_args____Unify____poly_arg_vector_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_args____Unify____poly_arg_vector_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
hlds__hlds_args____Compare____poly_arg_vector_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__hlds_args____Compare____poly_arg_vector_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__hlds_args____Unify____proc_arg_vector_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_args____Unify____proc_arg_vector_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
hlds__hlds_args____Compare____proc_arg_vector_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__hlds_args____Compare____proc_arg_vector_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__hlds__hlds_args__init(void)
{
}

void mercury__hlds__hlds_args__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__hlds_args__hlds__hlds_args__type_ctor_info_poly_arg_vector_1);
	MR_register_type_ctor_info(&hlds__hlds_args__hlds__hlds_args__type_ctor_info_proc_arg_vector_1);
}

void mercury__hlds__hlds_args__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__hlds_args__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module hlds.hlds_args.
