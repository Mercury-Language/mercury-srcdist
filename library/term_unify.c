/*
** Automatically generated from `term_unify.m'
** by the Mercury compiler,
** version rotd-2022-11-02
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


// :- module term_unify.
// :- implementation.

/*
INIT mercury__term_unify__init
ENDINIT
*/

#include "term_unify.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "benchmarking.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "calendar.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "dir.mih"
#include "enum.mih"
#include "exception.mih"
#include "float.mih"
#include "int.mih"
#include "int16.mih"
#include "int32.mih"
#include "int64.mih"
#include "int8.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mercury_term_lexer.mih"
#include "mercury_term_parser.mih"
#include "mutvar.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "solutions.mih"
#include "std_util.mih"
#include "stm_builtin.mih"
#include "store.mih"
#include "stream.mih"
#include "string.mih"
#include "table_builtin.mih"
#include "term.mih"
#include "term_context.mih"
#include "term_conversion.mih"
#include "term_int.mih"
#include "term_io.mih"
#include "term_subst.mih"
#include "term_vars.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "uint.mih"
#include "uint16.mih"
#include "uint32.mih"
#include "uint64.mih"
#include "uint8.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "io.call_system.mih"
#include "io.environment.mih"
#include "io.file.mih"
#include "io.primitives_read.mih"
#include "io.primitives_write.mih"
#include "io.stream_db.mih"
#include "io.stream_ops.mih"
#include "io.text_read.mih"
#include "stream.string_writer.mih"
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"




static MR_bool MR_CALL 
mercury__term_unify__unify_terms_bound_var_5_p_0(
  MR_Word TypeInfo_for_T_19,
  MR_Word X_6,
  MR_Word BoundY_7,
  MR_Word DontBindVars_8,
  MR_Word STATE_VARIABLE_Subst_0_13,
  MR_Word * STATE_VARIABLE_Subst_14);

static MR_bool MR_CALL 
mercury__term_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_95_95_91_50_93_95_48_2_p_in__list_0(
  MR_Word Var_13,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);


static /* final */ const MR_Box mercury__term_unify_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__term_unify_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__term_unify_scalar_common_3[2][5];

static /* final */ const MR_Box mercury__term_unify_scalar_common_4[1][2];




static /* final */ const MR_Box mercury__term_unify_scalar_common_1[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__term_unify_scalar_common_2[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__term_unify_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__term_unify_scalar_common_3[2][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__term_unify_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__term_unify_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__term_unify_scalar_common_4[1][2] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) ((MR_Integer) 0))
  },
};



#include "array.mh"
#include "benchmarking.mh"
#include "bitmap.mh"
#include "builtin.mh"
#include "char.mh"
#include "construct.mh"
#include "dir.mh"
#include "exception.mh"
#include "float.mh"
#include "int.mh"
#include "int16.mh"
#include "int32.mh"
#include "int64.mh"
#include "int8.mh"
#include "io.mh"
#include "pretty_printer.mh"
#include "private_builtin.mh"
#include "rtti_implementation.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "string.mh"
#include "table_builtin.mh"
#include "time.mh"
#include "type_desc.mh"
#include "uint.mh"
#include "uint16.mh"
#include "uint32.mh"
#include "uint64.mh"
#include "uint8.mh"
#include "version_array.mh"
#include "io.environment.mh"
#include "io.file.mh"
#include "io.primitives_read.mh"
#include "io.primitives_write.mh"
#include "io.stream_db.mh"
#include "io.stream_ops.mh"
#include "io.text_read.mh"



MR_bool MR_CALL 
mercury__term_unify__first_term_list_subsumes_second_3_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word Terms1_4,
  MR_Word Terms2_5,
  MR_Word * Subst_6)
{
  MR_bool succeeded;
  MR_Word Terms2Vars_7;

  mercury__term_vars__vars_in_terms_acc_3_p_0(TypeInfo_for_T_9, Terms2_5, (MR_Word) ((MR_Unsigned) 0U), &Terms2Vars_7);
  succeeded = mercury__term_unify__unify_term_lists_dont_bind_5_p_0(TypeInfo_for_T_9, Terms1_4, Terms2_5, Terms2Vars_7, (MR_Word) ((MR_Unsigned) 0U), Subst_6);
  return succeeded;
}

MR_bool MR_CALL 
mercury__term_unify__unify_terms_dont_bind_5_p_0(
  MR_Word TypeInfo_for_T_56,
  MR_Word TermX_6,
  MR_Word TermY_7,
  MR_Word DontBindVars_8,
  MR_Word STATE_VARIABLE_Subst_0_34,
  MR_Word * STATE_VARIABLE_Subst_35)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) TermX_6)) == (MR_Integer) 0))
    {
      MR_Word Var_110 = ((MR_Word) ((MR_hl_field(0, TermX_6, (MR_Integer) 1))));
      MR_Word Var_111 = ((MR_Word) ((MR_hl_field(0, TermX_6, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) TermY_7)) == (MR_Integer) 0))
      {
        MR_Word TypeCtorInfo_105_105;
        MR_Word TypeInfo_106_106;
        MR_Word NameY_30 = ((MR_Word) ((MR_hl_field(0, TermY_7, (MR_Integer) 0))));
        MR_Integer ArityX_32;
        MR_Integer ArityY_33;
        MR_Word ArgTermsY_54 = ((MR_Word) ((MR_hl_field(0, TermY_7, (MR_Integer) 1))));

        succeeded = mercury__term____Unify____const_0_0(Var_111, NameY_30);
        if (succeeded)
        {
          TypeCtorInfo_105_105 = (MR_Word) (&mercury__term__term__type_ctor_info_term_1);
          {
            TypeInfo_106_106 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, TypeInfo_106_106, 0) = ((MR_Box) (TypeCtorInfo_105_105));
            MR_hl_field(0, TypeInfo_106_106, 1) = ((MR_Box) (TypeInfo_for_T_56));
          }
          mercury__list__length_2_p_0(TypeInfo_106_106, (MR_Word) (Var_110), &ArityX_32);
          mercury__list__length_2_p_0(TypeInfo_106_106, (MR_Word) (ArgTermsY_54), &ArityY_33);
          succeeded = (ArityX_32 == ArityY_33);
          if (succeeded)
            succeeded = mercury__term_unify__unify_term_lists_dont_bind_5_p_0(TypeInfo_for_T_56, Var_110, ArgTermsY_54, DontBindVars_8, STATE_VARIABLE_Subst_0_34, STATE_VARIABLE_Subst_35);
        }
      }
      else
      {
        MR_Word Y_52 = ((MR_Word) ((MR_hl_field(1, TermY_7, (MR_Integer) 0))));
        MR_Word TermBoundToY_51;
        MR_Word TypeInfo_96_96;
        MR_Word TypeInfo_98_98;
        MR_Box conv0_TermBoundToY_51;

        {
          TypeInfo_96_96 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeInfo_96_96, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
          MR_hl_field(0, TypeInfo_96_96, 1) = ((MR_Box) (TypeInfo_for_T_56));
        }
        {
          TypeInfo_98_98 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeInfo_98_98, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_term_1));
          MR_hl_field(0, TypeInfo_98_98, 1) = ((MR_Box) (TypeInfo_for_T_56));
        }
        succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_p_0(TypeInfo_for_T_56, TypeInfo_96_96, TypeInfo_98_98, (MR_Word) (STATE_VARIABLE_Subst_0_34), Y_52, &conv0_TermBoundToY_51);
        if (succeeded)
        {
          TermBoundToY_51 = ((MR_Word) (conv0_TermBoundToY_51));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word next_value_of_TermY_7 = TermBoundToY_51;

          // direct tailcall eliminated
          ;
          TermY_7 = next_value_of_TermY_7;
          continue;
        }
        else
        {
          MR_Word TypeCtorInfo_101_101;
          MR_Word TypeInfo_102_102;
          MR_Word TypeCtorInfo_103_103;
          MR_Word TypeInfo_104_104;
          MR_Word conv1_STATE_VARIABLE_Subst_35;

          succeeded = mercury__term_subst__var_occurs_in_subst_terms_3_p_0(TypeInfo_for_T_56, Y_52, STATE_VARIABLE_Subst_0_34, Var_110);
          succeeded = !(succeeded);
          if (succeeded)
          {
            succeeded = mercury__term_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_95_95_91_50_93_95_48_2_p_in__list_0(TypeInfo_for_T_56, Y_52, DontBindVars_8);
            succeeded = !(succeeded);
            if (succeeded)
            {
              TypeCtorInfo_101_101 = (MR_Word) (&mercury__term__term__type_ctor_info_var_1);
              TypeCtorInfo_103_103 = (MR_Word) (&mercury__term__term__type_ctor_info_term_1);
              {
                TypeInfo_102_102 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, TypeInfo_102_102, 0) = ((MR_Box) (TypeCtorInfo_101_101));
                MR_hl_field(0, TypeInfo_102_102, 1) = ((MR_Box) (TypeInfo_for_T_56));
              }
              {
                TypeInfo_104_104 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, TypeInfo_104_104, 0) = ((MR_Box) (TypeCtorInfo_103_103));
                MR_hl_field(0, TypeInfo_104_104, 1) = ((MR_Box) (TypeInfo_for_T_56));
              }
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_4_p_0(TypeInfo_for_T_56, TypeInfo_102_102, TypeInfo_104_104, Y_52, ((MR_Box) (TermX_6)), (MR_Word) (STATE_VARIABLE_Subst_0_34), &conv1_STATE_VARIABLE_Subst_35);
              *STATE_VARIABLE_Subst_35 = (MR_Word) (conv1_STATE_VARIABLE_Subst_35);
              succeeded = MR_TRUE;
            }
          }
        }
      }
    }
    else
    {
      MR_Word Var_113 = ((MR_Word) ((MR_hl_field(1, TermX_6, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) TermY_7)) == (MR_Integer) 0))
      {
        MR_Word ArgTermsY_22 = ((MR_Word) ((MR_hl_field(0, TermY_7, (MR_Integer) 1))));
        MR_Word TermBoundToX_48;
        MR_Word TypeInfo_86_86;
        MR_Word TypeInfo_88_88;
        MR_Box conv2_TermBoundToX_48;

        {
          TypeInfo_86_86 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeInfo_86_86, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
          MR_hl_field(0, TypeInfo_86_86, 1) = ((MR_Box) (TypeInfo_for_T_56));
        }
        {
          TypeInfo_88_88 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeInfo_88_88, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_term_1));
          MR_hl_field(0, TypeInfo_88_88, 1) = ((MR_Box) (TypeInfo_for_T_56));
        }
        succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_p_0(TypeInfo_for_T_56, TypeInfo_86_86, TypeInfo_88_88, (MR_Word) (STATE_VARIABLE_Subst_0_34), Var_113, &conv2_TermBoundToX_48);
        if (succeeded)
        {
          TermBoundToX_48 = ((MR_Word) (conv2_TermBoundToX_48));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word next_value_of_TermX_6 = TermBoundToX_48;

          // direct tailcall eliminated
          ;
          TermX_6 = next_value_of_TermX_6;
          continue;
        }
        else
        {
          MR_Word TypeCtorInfo_91_91;
          MR_Word TypeInfo_92_92;
          MR_Word TypeCtorInfo_93_93;
          MR_Word TypeInfo_94_94;
          MR_Word conv3_STATE_VARIABLE_Subst_35;

          succeeded = mercury__term_subst__var_occurs_in_subst_terms_3_p_0(TypeInfo_for_T_56, Var_113, STATE_VARIABLE_Subst_0_34, ArgTermsY_22);
          succeeded = !(succeeded);
          if (succeeded)
          {
            succeeded = mercury__term_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_95_95_91_50_93_95_48_2_p_in__list_0(TypeInfo_for_T_56, Var_113, DontBindVars_8);
            succeeded = !(succeeded);
            if (succeeded)
            {
              TypeCtorInfo_91_91 = (MR_Word) (&mercury__term__term__type_ctor_info_var_1);
              TypeCtorInfo_93_93 = (MR_Word) (&mercury__term__term__type_ctor_info_term_1);
              {
                TypeInfo_92_92 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, TypeInfo_92_92, 0) = ((MR_Box) (TypeCtorInfo_91_91));
                MR_hl_field(0, TypeInfo_92_92, 1) = ((MR_Box) (TypeInfo_for_T_56));
              }
              {
                TypeInfo_94_94 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, TypeInfo_94_94, 0) = ((MR_Box) (TypeCtorInfo_93_93));
                MR_hl_field(0, TypeInfo_94_94, 1) = ((MR_Box) (TypeInfo_for_T_56));
              }
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_4_p_0(TypeInfo_for_T_56, TypeInfo_92_92, TypeInfo_94_94, Var_113, ((MR_Box) (TermY_7)), (MR_Word) (STATE_VARIABLE_Subst_0_34), &conv3_STATE_VARIABLE_Subst_35);
              *STATE_VARIABLE_Subst_35 = (MR_Word) (conv3_STATE_VARIABLE_Subst_35);
              succeeded = MR_TRUE;
            }
          }
        }
      }
      else
      {
        MR_Word Y_12 = ((MR_Word) ((MR_hl_field(1, TermY_7, (MR_Integer) 0))));

        succeeded = mercury__term_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_95_95_91_50_93_95_48_2_p_in__list_0(TypeInfo_for_T_56, Y_12, DontBindVars_8);
        if (succeeded)
          succeeded = mercury__term_unify__unify_terms_bound_var_5_p_0(TypeInfo_for_T_56, Var_113, Y_12, DontBindVars_8, STATE_VARIABLE_Subst_0_34, STATE_VARIABLE_Subst_35);
        else
        {
          succeeded = mercury__term_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_95_95_91_50_93_95_48_2_p_in__list_0(TypeInfo_for_T_56, Var_113, DontBindVars_8);
          if (succeeded)
            succeeded = mercury__term_unify__unify_terms_bound_var_5_p_0(TypeInfo_for_T_56, Y_12, Var_113, DontBindVars_8, STATE_VARIABLE_Subst_0_34, STATE_VARIABLE_Subst_35);
          else
          {
            MR_Word TypeInfo_62_62;
            MR_Word TypeInfo_64_64;
            MR_Word TermBoundToX_14;
            MR_Box conv4_TermBoundToX_14;

            {
              TypeInfo_62_62 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, TypeInfo_62_62, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
              MR_hl_field(0, TypeInfo_62_62, 1) = ((MR_Box) (TypeInfo_for_T_56));
            }
            {
              TypeInfo_64_64 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, TypeInfo_64_64, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_term_1));
              MR_hl_field(0, TypeInfo_64_64, 1) = ((MR_Box) (TypeInfo_for_T_56));
            }
            succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_p_0(TypeInfo_for_T_56, TypeInfo_62_62, TypeInfo_64_64, (MR_Word) (STATE_VARIABLE_Subst_0_34), Var_113, &conv4_TermBoundToX_14);
            if (succeeded)
            {
              TermBoundToX_14 = ((MR_Word) (conv4_TermBoundToX_14));
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              MR_Word TermBoundToY_15;
              MR_Box conv5_TermBoundToY_15;

              succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_p_0(TypeInfo_for_T_56, TypeInfo_62_62, TypeInfo_64_64, (MR_Word) (STATE_VARIABLE_Subst_0_34), Y_12, &conv5_TermBoundToY_15);
              if (succeeded)
              {
                TermBoundToY_15 = ((MR_Word) (conv5_TermBoundToY_15));
                succeeded = MR_TRUE;
              }
              if (succeeded)
              {
                MR_Word next_value_of_TermX_6 = TermBoundToX_14;
                MR_Word next_value_of_TermY_7 = TermBoundToY_15;

                // direct tailcall eliminated
                ;
                TermX_6 = next_value_of_TermX_6;
                TermY_7 = next_value_of_TermY_7;
                continue;
              }
              else
              {
                MR_Word SubstTermBoundToX_16;
                MR_Word Var_107;
                MR_Integer Var_121;
                MR_Integer Var_122;

                mercury__term_subst__apply_rec_substitution_in_term_3_p_0(TypeInfo_for_T_56, STATE_VARIABLE_Subst_0_34, TermBoundToX_14, &SubstTermBoundToX_16);
                succeeded = ((MR_tag((MR_Word) SubstTermBoundToX_16)) == (MR_Integer) 1);
                if (succeeded)
                {
                  Var_107 = ((MR_Word) ((MR_hl_field(1, SubstTermBoundToX_16, (MR_Integer) 0))));
                  Var_121 = (MR_Integer) (Y_12);
                  Var_122 = (MR_Integer) (Var_107);
                  succeeded = (Var_121 == Var_122);
                }
                if (succeeded)
                {
                  *STATE_VARIABLE_Subst_35 = STATE_VARIABLE_Subst_0_34;
                  succeeded = MR_TRUE;
                }
                else
                {
                  MR_Word conv6_STATE_VARIABLE_Subst_35;

                  succeeded = mercury__term_subst__var_occurs_in_subst_term_3_p_0(TypeInfo_for_T_56, Y_12, STATE_VARIABLE_Subst_0_34, SubstTermBoundToX_16);
                  succeeded = !(succeeded);
                  if (succeeded)
                  {
                    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_4_p_0(TypeInfo_for_T_56, TypeInfo_62_62, TypeInfo_64_64, Y_12, ((MR_Box) (SubstTermBoundToX_16)), (MR_Word) (STATE_VARIABLE_Subst_0_34), &conv6_STATE_VARIABLE_Subst_35);
                    *STATE_VARIABLE_Subst_35 = (MR_Word) (conv6_STATE_VARIABLE_Subst_35);
                    succeeded = MR_TRUE;
                  }
                }
              }
            }
            else
            {
              MR_Word TypeInfo_74_74;
              MR_Word TypeInfo_76_76;
              MR_Word TermBoundToY_47;
              MR_Box conv7_TermBoundToY_47;

              {
                TypeInfo_74_74 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, TypeInfo_74_74, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
                MR_hl_field(0, TypeInfo_74_74, 1) = ((MR_Box) (TypeInfo_for_T_56));
              }
              {
                TypeInfo_76_76 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, TypeInfo_76_76, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_term_1));
                MR_hl_field(0, TypeInfo_76_76, 1) = ((MR_Box) (TypeInfo_for_T_56));
              }
              succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_p_0(TypeInfo_for_T_56, TypeInfo_74_74, TypeInfo_76_76, (MR_Word) (STATE_VARIABLE_Subst_0_34), Y_12, &conv7_TermBoundToY_47);
              if (succeeded)
              {
                TermBoundToY_47 = ((MR_Word) (conv7_TermBoundToY_47));
                succeeded = MR_TRUE;
              }
              if (succeeded)
              {
                MR_Word SubstTermBoundToY_18;
                MR_Word Var_108;
                MR_Integer Var_123;
                MR_Integer Var_124;

                mercury__term_subst__apply_rec_substitution_in_term_3_p_0(TypeInfo_for_T_56, STATE_VARIABLE_Subst_0_34, TermBoundToY_47, &SubstTermBoundToY_18);
                succeeded = ((MR_tag((MR_Word) SubstTermBoundToY_18)) == (MR_Integer) 1);
                if (succeeded)
                {
                  Var_108 = ((MR_Word) ((MR_hl_field(1, SubstTermBoundToY_18, (MR_Integer) 0))));
                  Var_123 = (MR_Integer) (Var_113);
                  Var_124 = (MR_Integer) (Var_108);
                  succeeded = (Var_123 == Var_124);
                }
                if (succeeded)
                {
                  *STATE_VARIABLE_Subst_35 = STATE_VARIABLE_Subst_0_34;
                  succeeded = MR_TRUE;
                }
                else
                {
                  MR_Word conv8_STATE_VARIABLE_Subst_35;

                  succeeded = mercury__term_subst__var_occurs_in_subst_term_3_p_0(TypeInfo_for_T_56, Var_113, STATE_VARIABLE_Subst_0_34, SubstTermBoundToY_18);
                  succeeded = !(succeeded);
                  if (succeeded)
                  {
                    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_4_p_0(TypeInfo_for_T_56, TypeInfo_74_74, TypeInfo_76_76, Var_113, ((MR_Box) (SubstTermBoundToY_18)), (MR_Word) (STATE_VARIABLE_Subst_0_34), &conv8_STATE_VARIABLE_Subst_35);
                    *STATE_VARIABLE_Subst_35 = (MR_Word) (conv8_STATE_VARIABLE_Subst_35);
                    succeeded = MR_TRUE;
                  }
                }
              }
              else
              {
                MR_Integer Var_125 = (MR_Integer) (Var_113);
                MR_Integer Var_126 = (MR_Integer) (Y_12);

                succeeded = (Var_125 == Var_126);
                if (succeeded)
                  *STATE_VARIABLE_Subst_35 = STATE_VARIABLE_Subst_0_34;
                else
                {
                  MR_Word TypeInfo_82_82;
                  MR_Word TypeInfo_84_84;
                  MR_Word conv9_STATE_VARIABLE_Subst_35;

                  {
                    TypeInfo_82_82 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, TypeInfo_82_82, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
                    MR_hl_field(0, TypeInfo_82_82, 1) = ((MR_Box) (TypeInfo_for_T_56));
                  }
                  {
                    TypeInfo_84_84 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, TypeInfo_84_84, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_term_1));
                    MR_hl_field(0, TypeInfo_84_84, 1) = ((MR_Box) (TypeInfo_for_T_56));
                  }
                  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_4_p_0(TypeInfo_for_T_56, TypeInfo_82_82, TypeInfo_84_84, Var_113, ((MR_Box) (TermY_7)), (MR_Word) (STATE_VARIABLE_Subst_0_34), &conv9_STATE_VARIABLE_Subst_35);
                  *STATE_VARIABLE_Subst_35 = (MR_Word) (conv9_STATE_VARIABLE_Subst_35);
                }
                succeeded = MR_TRUE;
              }
            }
          }
        }
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__term_unify__unify_term_lists_dont_bind_5_p_0(
  MR_Word TypeInfo_for_T_19,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word DontBindVars_3,
  MR_Word STATE_VARIABLE_Subst_0_4,
  MR_Word * STATE_VARIABLE_Subst_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      succeeded = (HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        *STATE_VARIABLE_Subst_5 = STATE_VARIABLE_Subst_0_4;
        succeeded = MR_TRUE;
      }
    }
    else
    {
      MR_Word TermX_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word TermXs_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word TermY_12;
      MR_Word TermYs_13;
      MR_Word STATE_VARIABLE_Subst_18_18;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_Subst_0_4;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        TermY_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
        TermYs_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
        succeeded = mercury__term_unify__unify_terms_dont_bind_5_p_0(TypeInfo_for_T_19, TermX_10, TermY_12, DontBindVars_3, STATE_VARIABLE_Subst_0_4, &STATE_VARIABLE_Subst_18_18);
        if (succeeded)
        {
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__1_1 = TermXs_11;
          next_value_of_HeadVar__2_2 = TermYs_13;
          next_value_of_STATE_VARIABLE_Subst_0_4 = STATE_VARIABLE_Subst_18_18;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          STATE_VARIABLE_Subst_0_4 = next_value_of_STATE_VARIABLE_Subst_0_4;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
mercury__term_unify__unify_terms_bound_var_5_p_0(
  MR_Word TypeInfo_for_T_19,
  MR_Word X_6,
  MR_Word BoundY_7,
  MR_Word DontBindVars_8,
  MR_Word STATE_VARIABLE_Subst_0_13,
  MR_Word * STATE_VARIABLE_Subst_14)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word TermBoundToX_10;
    MR_Word TypeInfo_21_21;
    MR_Word TypeInfo_23_23;
    MR_Box conv0_TermBoundToX_10;

    // setup for model_semi tailcalls optimized into a loop
    ;
    {
      TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_21_21, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(0, TypeInfo_21_21, 1) = ((MR_Box) (TypeInfo_for_T_19));
    }
    {
      TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_23_23, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_term_1));
      MR_hl_field(0, TypeInfo_23_23, 1) = ((MR_Box) (TypeInfo_for_T_19));
    }
    succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_p_0(TypeInfo_for_T_19, TypeInfo_21_21, TypeInfo_23_23, (MR_Word) (STATE_VARIABLE_Subst_0_13), X_6, &conv0_TermBoundToX_10);
    if (succeeded)
    {
      TermBoundToX_10 = ((MR_Word) (conv0_TermBoundToX_10));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word NewX_11;
      MR_Word next_value_of_X_6;

      succeeded = ((MR_tag((MR_Word) TermBoundToX_10)) == (MR_Integer) 1);
      if (succeeded)
      {
        NewX_11 = ((MR_Word) ((MR_hl_field(1, TermBoundToX_10, (MR_Integer) 0))));
        // direct tailcall eliminated
        ;
        next_value_of_X_6 = NewX_11;
        X_6 = next_value_of_X_6;
        continue;
      }
    }
    else
    {
      MR_Integer Var_32 = (MR_Integer) (X_6);
      MR_Integer Var_33 = (MR_Integer) (BoundY_7);

      succeeded = (Var_32 == Var_33);
      if (succeeded)
      {
        *STATE_VARIABLE_Subst_14 = STATE_VARIABLE_Subst_0_13;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word TypeCtorInfo_26_26;
        MR_Word TypeInfo_27_27;
        MR_Word TypeCtorInfo_28_28;
        MR_Word TypeInfo_29_29;
        MR_Word Var_16;
        MR_Word Var_18;
        MR_Word conv1_STATE_VARIABLE_Subst_14;

        succeeded = mercury__term_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_95_95_91_50_93_95_48_2_p_in__list_0(TypeInfo_for_T_19, X_6, DontBindVars_8);
        succeeded = !(succeeded);
        if (succeeded)
        {
          Var_18 = (MR_Word) (&mercury__term_unify_scalar_common_4[0]);
          TypeCtorInfo_26_26 = (MR_Word) (&mercury__term__term__type_ctor_info_var_1);
          TypeCtorInfo_28_28 = (MR_Word) (&mercury__term__term__type_ctor_info_term_1);
          {
            Var_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_16, 0) = ((MR_Box) (BoundY_7));
            MR_hl_field(1, Var_16, 1) = ((MR_Box) (Var_18));
          }
          {
            TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, TypeInfo_27_27, 0) = ((MR_Box) (TypeCtorInfo_26_26));
            MR_hl_field(0, TypeInfo_27_27, 1) = ((MR_Box) (TypeInfo_for_T_19));
          }
          {
            TypeInfo_29_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, TypeInfo_29_29, 0) = ((MR_Box) (TypeCtorInfo_28_28));
            MR_hl_field(0, TypeInfo_29_29, 1) = ((MR_Box) (TypeInfo_for_T_19));
          }
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_4_p_0(TypeInfo_for_T_19, TypeInfo_27_27, TypeInfo_29_29, X_6, ((MR_Box) (Var_16)), (MR_Word) (STATE_VARIABLE_Subst_0_13), &conv1_STATE_VARIABLE_Subst_14);
          *STATE_VARIABLE_Subst_14 = (MR_Word) (conv1_STATE_VARIABLE_Subst_14);
          succeeded = MR_TRUE;
        }
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
mercury__term_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_95_95_91_50_93_95_48_2_p_in__list_0(
  MR_Word Var_13,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Var_10;
    MR_Word Var_11;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Var_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      Var_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      {
        MR_Integer Var_14 = (MR_Integer) (HeadVar__1_1);
        MR_Integer Var_15 = (MR_Integer) (Var_11);

        succeeded = (Var_14 == Var_15);
      }
      if (!(succeeded))
      {
        MR_Word next_value_of_HeadVar__2_2 = Var_10;

        // direct tailcall eliminated
        ;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__term_unify__unify_terms_4_p_0(
  MR_Word TypeInfo_for_T_50,
  MR_Word TermX_5,
  MR_Word TermY_6,
  MR_Word STATE_VARIABLE_Subst_0_30,
  MR_Word * STATE_VARIABLE_Subst_31)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) TermX_5)) == (MR_Integer) 0))
    {
      MR_Word Var_94 = ((MR_Word) ((MR_hl_field(0, TermX_5, (MR_Integer) 1))));
      MR_Word Var_95 = ((MR_Word) ((MR_hl_field(0, TermX_5, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) TermY_6)) == (MR_Integer) 0))
      {
        MR_Word NameY_28 = ((MR_Word) ((MR_hl_field(0, TermY_6, (MR_Integer) 0))));
        MR_Word ArgTermsY_48 = ((MR_Word) ((MR_hl_field(0, TermY_6, (MR_Integer) 1))));

        succeeded = mercury__term____Unify____const_0_0(Var_95, NameY_28);
        if (succeeded)
          succeeded = mercury__term_unify__unify_term_lists_4_p_0(TypeInfo_for_T_50, Var_94, ArgTermsY_48, STATE_VARIABLE_Subst_0_30, STATE_VARIABLE_Subst_31);
      }
      else
      {
        MR_Word Y_46 = ((MR_Word) ((MR_hl_field(1, TermY_6, (MR_Integer) 0))));
        MR_Word TermBoundToY_45;
        MR_Word TypeInfo_84_84;
        MR_Word TypeInfo_86_86;
        MR_Box conv0_TermBoundToY_45;

        {
          TypeInfo_84_84 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeInfo_84_84, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
          MR_hl_field(0, TypeInfo_84_84, 1) = ((MR_Box) (TypeInfo_for_T_50));
        }
        {
          TypeInfo_86_86 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeInfo_86_86, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_term_1));
          MR_hl_field(0, TypeInfo_86_86, 1) = ((MR_Box) (TypeInfo_for_T_50));
        }
        succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_p_0(TypeInfo_for_T_50, TypeInfo_84_84, TypeInfo_86_86, (MR_Word) (STATE_VARIABLE_Subst_0_30), Y_46, &conv0_TermBoundToY_45);
        if (succeeded)
        {
          TermBoundToY_45 = ((MR_Word) (conv0_TermBoundToY_45));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word next_value_of_TermY_6 = TermBoundToY_45;

          // direct tailcall eliminated
          ;
          TermY_6 = next_value_of_TermY_6;
          continue;
        }
        else
        {
          MR_Word TypeCtorInfo_87_87;
          MR_Word TypeInfo_88_88;
          MR_Word TypeCtorInfo_89_89;
          MR_Word TypeInfo_90_90;
          MR_Word conv1_STATE_VARIABLE_Subst_31;

          succeeded = mercury__term_subst__var_occurs_in_subst_terms_3_p_0(TypeInfo_for_T_50, Y_46, STATE_VARIABLE_Subst_0_30, Var_94);
          succeeded = !(succeeded);
          if (succeeded)
          {
            TypeCtorInfo_87_87 = (MR_Word) (&mercury__term__term__type_ctor_info_var_1);
            TypeCtorInfo_89_89 = (MR_Word) (&mercury__term__term__type_ctor_info_term_1);
            {
              TypeInfo_88_88 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, TypeInfo_88_88, 0) = ((MR_Box) (TypeCtorInfo_87_87));
              MR_hl_field(0, TypeInfo_88_88, 1) = ((MR_Box) (TypeInfo_for_T_50));
            }
            {
              TypeInfo_90_90 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, TypeInfo_90_90, 0) = ((MR_Box) (TypeCtorInfo_89_89));
              MR_hl_field(0, TypeInfo_90_90, 1) = ((MR_Box) (TypeInfo_for_T_50));
            }
            mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_4_p_0(TypeInfo_for_T_50, TypeInfo_88_88, TypeInfo_90_90, Y_46, ((MR_Box) (TermX_5)), (MR_Word) (STATE_VARIABLE_Subst_0_30), &conv1_STATE_VARIABLE_Subst_31);
            *STATE_VARIABLE_Subst_31 = (MR_Word) (conv1_STATE_VARIABLE_Subst_31);
            succeeded = MR_TRUE;
          }
        }
      }
    }
    else
    {
      MR_Word Var_97 = ((MR_Word) ((MR_hl_field(1, TermX_5, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) TermY_6)) == (MR_Integer) 0))
      {
        MR_Word ArgTermsY_20 = ((MR_Word) ((MR_hl_field(0, TermY_6, (MR_Integer) 1))));
        MR_Word TermBoundToX_42;
        MR_Word TypeInfo_76_76;
        MR_Word TypeInfo_78_78;
        MR_Box conv2_TermBoundToX_42;

        {
          TypeInfo_76_76 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeInfo_76_76, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
          MR_hl_field(0, TypeInfo_76_76, 1) = ((MR_Box) (TypeInfo_for_T_50));
        }
        {
          TypeInfo_78_78 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeInfo_78_78, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_term_1));
          MR_hl_field(0, TypeInfo_78_78, 1) = ((MR_Box) (TypeInfo_for_T_50));
        }
        succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_p_0(TypeInfo_for_T_50, TypeInfo_76_76, TypeInfo_78_78, (MR_Word) (STATE_VARIABLE_Subst_0_30), Var_97, &conv2_TermBoundToX_42);
        if (succeeded)
        {
          TermBoundToX_42 = ((MR_Word) (conv2_TermBoundToX_42));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word next_value_of_TermX_5 = TermBoundToX_42;

          // direct tailcall eliminated
          ;
          TermX_5 = next_value_of_TermX_5;
          continue;
        }
        else
        {
          MR_Word TypeCtorInfo_79_79;
          MR_Word TypeInfo_80_80;
          MR_Word TypeCtorInfo_81_81;
          MR_Word TypeInfo_82_82;
          MR_Word conv3_STATE_VARIABLE_Subst_31;

          succeeded = mercury__term_subst__var_occurs_in_subst_terms_3_p_0(TypeInfo_for_T_50, Var_97, STATE_VARIABLE_Subst_0_30, ArgTermsY_20);
          succeeded = !(succeeded);
          if (succeeded)
          {
            TypeCtorInfo_79_79 = (MR_Word) (&mercury__term__term__type_ctor_info_var_1);
            TypeCtorInfo_81_81 = (MR_Word) (&mercury__term__term__type_ctor_info_term_1);
            {
              TypeInfo_80_80 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, TypeInfo_80_80, 0) = ((MR_Box) (TypeCtorInfo_79_79));
              MR_hl_field(0, TypeInfo_80_80, 1) = ((MR_Box) (TypeInfo_for_T_50));
            }
            {
              TypeInfo_82_82 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, TypeInfo_82_82, 0) = ((MR_Box) (TypeCtorInfo_81_81));
              MR_hl_field(0, TypeInfo_82_82, 1) = ((MR_Box) (TypeInfo_for_T_50));
            }
            mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_4_p_0(TypeInfo_for_T_50, TypeInfo_80_80, TypeInfo_82_82, Var_97, ((MR_Box) (TermY_6)), (MR_Word) (STATE_VARIABLE_Subst_0_30), &conv3_STATE_VARIABLE_Subst_31);
            *STATE_VARIABLE_Subst_31 = (MR_Word) (conv3_STATE_VARIABLE_Subst_31);
            succeeded = MR_TRUE;
          }
        }
      }
      else
      {
        MR_Word Y_10 = ((MR_Word) ((MR_hl_field(1, TermY_6, (MR_Integer) 0))));
        MR_Word TypeInfo_52_52;
        MR_Word TypeInfo_54_54;
        MR_Word TermBoundToX_12;
        MR_Box conv4_TermBoundToX_12;

        {
          TypeInfo_52_52 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeInfo_52_52, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
          MR_hl_field(0, TypeInfo_52_52, 1) = ((MR_Box) (TypeInfo_for_T_50));
        }
        {
          TypeInfo_54_54 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeInfo_54_54, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_term_1));
          MR_hl_field(0, TypeInfo_54_54, 1) = ((MR_Box) (TypeInfo_for_T_50));
        }
        succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_p_0(TypeInfo_for_T_50, TypeInfo_52_52, TypeInfo_54_54, (MR_Word) (STATE_VARIABLE_Subst_0_30), Var_97, &conv4_TermBoundToX_12);
        if (succeeded)
        {
          TermBoundToX_12 = ((MR_Word) (conv4_TermBoundToX_12));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word TermBoundToY_13;
          MR_Box conv5_TermBoundToY_13;

          succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_p_0(TypeInfo_for_T_50, TypeInfo_52_52, TypeInfo_54_54, (MR_Word) (STATE_VARIABLE_Subst_0_30), Y_10, &conv5_TermBoundToY_13);
          if (succeeded)
          {
            TermBoundToY_13 = ((MR_Word) (conv5_TermBoundToY_13));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            MR_Word next_value_of_TermX_5 = TermBoundToX_12;
            MR_Word next_value_of_TermY_6 = TermBoundToY_13;

            // direct tailcall eliminated
            ;
            TermX_5 = next_value_of_TermX_5;
            TermY_6 = next_value_of_TermY_6;
            continue;
          }
          else
          {
            MR_Word SubstTermBoundToX_14;
            MR_Word Var_91;
            MR_Integer Var_105;
            MR_Integer Var_106;

            mercury__term_subst__apply_rec_substitution_in_term_3_p_0(TypeInfo_for_T_50, STATE_VARIABLE_Subst_0_30, TermBoundToX_12, &SubstTermBoundToX_14);
            succeeded = ((MR_tag((MR_Word) SubstTermBoundToX_14)) == (MR_Integer) 1);
            if (succeeded)
            {
              Var_91 = ((MR_Word) ((MR_hl_field(1, SubstTermBoundToX_14, (MR_Integer) 0))));
              Var_105 = (MR_Integer) (Y_10);
              Var_106 = (MR_Integer) (Var_91);
              succeeded = (Var_105 == Var_106);
            }
            if (succeeded)
            {
              *STATE_VARIABLE_Subst_31 = STATE_VARIABLE_Subst_0_30;
              succeeded = MR_TRUE;
            }
            else
            {
              MR_Word conv6_STATE_VARIABLE_Subst_31;

              succeeded = mercury__term_subst__var_occurs_in_subst_term_3_p_0(TypeInfo_for_T_50, Y_10, STATE_VARIABLE_Subst_0_30, SubstTermBoundToX_14);
              succeeded = !(succeeded);
              if (succeeded)
              {
                mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_4_p_0(TypeInfo_for_T_50, TypeInfo_52_52, TypeInfo_54_54, Y_10, ((MR_Box) (SubstTermBoundToX_14)), (MR_Word) (STATE_VARIABLE_Subst_0_30), &conv6_STATE_VARIABLE_Subst_31);
                *STATE_VARIABLE_Subst_31 = (MR_Word) (conv6_STATE_VARIABLE_Subst_31);
                succeeded = MR_TRUE;
              }
            }
          }
        }
        else
        {
          MR_Word TypeInfo_64_64;
          MR_Word TypeInfo_66_66;
          MR_Word TermBoundToY_41;
          MR_Box conv7_TermBoundToY_41;

          {
            TypeInfo_64_64 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, TypeInfo_64_64, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
            MR_hl_field(0, TypeInfo_64_64, 1) = ((MR_Box) (TypeInfo_for_T_50));
          }
          {
            TypeInfo_66_66 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, TypeInfo_66_66, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_term_1));
            MR_hl_field(0, TypeInfo_66_66, 1) = ((MR_Box) (TypeInfo_for_T_50));
          }
          succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_p_0(TypeInfo_for_T_50, TypeInfo_64_64, TypeInfo_66_66, (MR_Word) (STATE_VARIABLE_Subst_0_30), Y_10, &conv7_TermBoundToY_41);
          if (succeeded)
          {
            TermBoundToY_41 = ((MR_Word) (conv7_TermBoundToY_41));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            MR_Word SubstTermBoundToY_16;
            MR_Word Var_92;
            MR_Integer Var_107;
            MR_Integer Var_108;

            mercury__term_subst__apply_rec_substitution_in_term_3_p_0(TypeInfo_for_T_50, STATE_VARIABLE_Subst_0_30, TermBoundToY_41, &SubstTermBoundToY_16);
            succeeded = ((MR_tag((MR_Word) SubstTermBoundToY_16)) == (MR_Integer) 1);
            if (succeeded)
            {
              Var_92 = ((MR_Word) ((MR_hl_field(1, SubstTermBoundToY_16, (MR_Integer) 0))));
              Var_107 = (MR_Integer) (Var_97);
              Var_108 = (MR_Integer) (Var_92);
              succeeded = (Var_107 == Var_108);
            }
            if (succeeded)
            {
              *STATE_VARIABLE_Subst_31 = STATE_VARIABLE_Subst_0_30;
              succeeded = MR_TRUE;
            }
            else
            {
              MR_Word conv8_STATE_VARIABLE_Subst_31;

              succeeded = mercury__term_subst__var_occurs_in_subst_term_3_p_0(TypeInfo_for_T_50, Var_97, STATE_VARIABLE_Subst_0_30, SubstTermBoundToY_16);
              succeeded = !(succeeded);
              if (succeeded)
              {
                mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_4_p_0(TypeInfo_for_T_50, TypeInfo_64_64, TypeInfo_66_66, Var_97, ((MR_Box) (SubstTermBoundToY_16)), (MR_Word) (STATE_VARIABLE_Subst_0_30), &conv8_STATE_VARIABLE_Subst_31);
                *STATE_VARIABLE_Subst_31 = (MR_Word) (conv8_STATE_VARIABLE_Subst_31);
                succeeded = MR_TRUE;
              }
            }
          }
          else
          {
            MR_Integer Var_109 = (MR_Integer) (Var_97);
            MR_Integer Var_110 = (MR_Integer) (Y_10);

            succeeded = (Var_109 == Var_110);
            if (succeeded)
              *STATE_VARIABLE_Subst_31 = STATE_VARIABLE_Subst_0_30;
            else
            {
              MR_Word TypeInfo_72_72;
              MR_Word TypeInfo_74_74;
              MR_Word conv9_STATE_VARIABLE_Subst_31;

              {
                TypeInfo_72_72 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, TypeInfo_72_72, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
                MR_hl_field(0, TypeInfo_72_72, 1) = ((MR_Box) (TypeInfo_for_T_50));
              }
              {
                TypeInfo_74_74 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, TypeInfo_74_74, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_term_1));
                MR_hl_field(0, TypeInfo_74_74, 1) = ((MR_Box) (TypeInfo_for_T_50));
              }
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_4_p_0(TypeInfo_for_T_50, TypeInfo_72_72, TypeInfo_74_74, Var_97, ((MR_Box) (TermY_6)), (MR_Word) (STATE_VARIABLE_Subst_0_30), &conv9_STATE_VARIABLE_Subst_31);
              *STATE_VARIABLE_Subst_31 = (MR_Word) (conv9_STATE_VARIABLE_Subst_31);
            }
            succeeded = MR_TRUE;
          }
        }
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__term_unify__unify_term_lists_4_p_0(
  MR_Word TypeInfo_for_T_16,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Subst_0_3,
  MR_Word * STATE_VARIABLE_Subst_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      succeeded = (HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        *STATE_VARIABLE_Subst_4 = STATE_VARIABLE_Subst_0_3;
        succeeded = MR_TRUE;
      }
    }
    else
    {
      MR_Word TermX_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word TermXs_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word TermY_10;
      MR_Word TermYs_11;
      MR_Word STATE_VARIABLE_Subst_15_15;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_Subst_0_3;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        TermY_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
        TermYs_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
        succeeded = mercury__term_unify__unify_terms_4_p_0(TypeInfo_for_T_16, TermX_8, TermY_10, STATE_VARIABLE_Subst_0_3, &STATE_VARIABLE_Subst_15_15);
        if (succeeded)
        {
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__1_1 = TermXs_9;
          next_value_of_HeadVar__2_2 = TermYs_11;
          next_value_of_STATE_VARIABLE_Subst_0_3 = STATE_VARIABLE_Subst_15_15;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          STATE_VARIABLE_Subst_0_3 = next_value_of_STATE_VARIABLE_Subst_0_3;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

void mercury__term_unify__init(void)
{
}

void mercury__term_unify__init_type_tables(void)
{
}

void mercury__term_unify__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__term_unify__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module term_unify.
