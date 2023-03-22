/*
** Automatically generated from `check_libgrades.m'
** by the Mercury compiler,
** version 22.01.6-beta-2023-03-22
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


// :- module libs.check_libgrades.
// :- implementation.

/*
INIT mercury__libs__check_libgrades__init
ENDINIT
*/

#include "libs.check_libgrades.mih"


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
#include "dir.mih"
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
#include "io.mih"
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
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "libs.compute_grade.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_succeeded.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"




static const MR_FA_PseudoTypeInfo_Struct1 libs__check_libgrades__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static MR_String MR_CALL 
libs__check_libgrades__IntroducedFrom__func__check_library_is_installed__143__2_2_f_0(
  MR_String GradeDirNameDir_86,
  MR_String LambdaHeadVar__1_74);

static MR_String MR_CALL 
libs__check_libgrades__IntroducedFrom__func__check_library_is_installed__143__1_2_f_0(
  MR_String GradeDirNameDir_17,
  MR_String LambdaHeadVar__1_33);

static MR_Box MR_CALL 
libs__check_libgrades__check_library_is_installed_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
libs__check_libgrades__check_library_is_installed_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
libs__check_libgrades__check_library_is_installed_7_p_0(
  MR_Word Globals_8,
  MR_String GradeDirName_9,
  MR_String LibName_10,
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26);

static void MR_CALL 
libs__check_libgrades__maybe_check_libraries_are_installed_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);


static /* final */ const MR_Box libs__check_libgrades_scalar_common_1[10][2];

static /* final */ const MR_Box libs__check_libgrades_scalar_common_2[1][10];

static /* final */ const MR_Box libs__check_libgrades_scalar_common_3[1][6];




static /* final */ const MR_Box libs__check_libgrades_scalar_common_1[10][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error:"))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the Mercury standard library cannot be found"))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in grade"))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__check_libgrades_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__check_libgrades_scalar_common_1[5])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the library"))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "cannot be found"))
  },
};

static /* final */ const MR_Box libs__check_libgrades_scalar_common_2[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__check_libgrades__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&libs__check_libgrades__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box libs__check_libgrades_scalar_common_3[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct1 libs__check_libgrades__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)
  }
};

static MR_String MR_CALL 
libs__check_libgrades__IntroducedFrom__func__check_library_is_installed__143__2_2_f_0(
  MR_String GradeDirNameDir_86,
  MR_String LambdaHeadVar__1_74)
{
  {
    MR_String LambdaHeadVar__2_75;
    MR_String Var_76;

    Var_76 = mercury__dir__f_slash_2_f_0(LambdaHeadVar__1_74, (MR_String) "lib");
    LambdaHeadVar__2_75 = mercury__dir__f_slash_2_f_0(Var_76, GradeDirNameDir_86);
    return LambdaHeadVar__2_75;
  }
}

static MR_String MR_CALL 
libs__check_libgrades__IntroducedFrom__func__check_library_is_installed__143__1_2_f_0(
  MR_String GradeDirNameDir_17,
  MR_String LambdaHeadVar__1_33)
{
  {
    MR_String LambdaHeadVar__2_34;
    MR_String Var_35;

    Var_35 = mercury__dir__f_slash_2_f_0(LambdaHeadVar__1_33, (MR_String) "lib");
    LambdaHeadVar__2_34 = mercury__dir__f_slash_2_f_0(Var_35, GradeDirNameDir_17);
    return LambdaHeadVar__2_34;
  }
}

static MR_Box MR_CALL 
libs__check_libgrades__check_library_is_installed_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv1_LambdaHeadVar__2_75;

    conv1_LambdaHeadVar__2_75 = libs__check_libgrades__IntroducedFrom__func__check_library_is_installed__143__2_2_f_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_75));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
libs__check_libgrades__check_library_is_installed_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv0_LambdaHeadVar__2_34;

    conv0_LambdaHeadVar__2_34 = libs__check_libgrades__IntroducedFrom__func__check_library_is_installed__143__1_2_f_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_34));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
libs__check_libgrades__check_library_is_installed_7_p_0(
  MR_Word Globals_8,
  MR_String GradeDirName_9,
  MR_String LibName_10,
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26)
{
  {
    MR_Word Target_13;
    MR_String CheckFileName_14;
    MR_Word SearchDirs_15;
    MR_Word MaybeDirName_19;

    libs__globals__get_target_2_p_0(Globals_8, &Target_13);
    switch (Target_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          CheckFileName_14 = mercury__string__f_43_43_2_f_0(LibName_10, (MR_String) ".init");
          libs__globals__lookup_accumulating_option_3_p_0(Globals_8, (MR_Integer) 584, &SearchDirs_15);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word MercuryLibDirs_16;
          MR_String GradeDirNameDir_17;
          MR_Word Var_32;

          CheckFileName_14 = mercury__string__f_43_43_2_f_0(LibName_10, (MR_String) ".dll");
          libs__globals__lookup_accumulating_option_3_p_0(Globals_8, (MR_Integer) 576, &MercuryLibDirs_16);
          libs__compute_grade__grade_directory_component_2_p_0(Globals_8, &GradeDirNameDir_17);
          {
            Var_32 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (&libs__check_libgrades_scalar_common_3[0]));
            MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) (libs__check_libgrades__check_library_is_installed_7_p_0_1));
            MR_hl_field(MR_mktag(0), Var_32, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_32, 3) = ((MR_Box) (GradeDirNameDir_17));
          }
          SearchDirs_15 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_32, MercuryLibDirs_16);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word MercuryLibDirs_85;
          MR_String GradeDirNameDir_86;
          MR_Word Var_88;

          CheckFileName_14 = mercury__string__f_43_43_2_f_0(LibName_10, (MR_String) ".jar");
          libs__globals__lookup_accumulating_option_3_p_0(Globals_8, (MR_Integer) 576, &MercuryLibDirs_85);
          libs__compute_grade__grade_directory_component_2_p_0(Globals_8, &GradeDirNameDir_86);
          {
            Var_88 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_88, 0) = ((MR_Box) (&libs__check_libgrades_scalar_common_3[0]));
            MR_hl_field(MR_mktag(0), Var_88, 1) = ((MR_Box) (libs__check_libgrades__check_library_is_installed_7_p_0_2));
            MR_hl_field(MR_mktag(0), Var_88, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_88, 3) = ((MR_Box) (GradeDirNameDir_86));
          }
          SearchDirs_15 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_88, MercuryLibDirs_85);
        }
        break;
    }
    libs__file_util__search_for_file_returning_dir_5_p_0(SearchDirs_15, CheckFileName_14, &MaybeDirName_19);
    if (((MR_tag((MR_Word) MaybeDirName_19)) == (MR_Integer) 1))
    {
      MR_String ProgName_22;
      MR_Word Pieces_23;
      MR_Word Spec_24;
      MR_Word Var_42;
      MR_Word Var_43;
      MR_Word Var_46;
      MR_Word Var_49;
      MR_Word Var_52;
      MR_Word Var_53;
      MR_Word Var_54;
      MR_Word Var_57;
      MR_Word Var_60;
      MR_Word Var_61;

      mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &ProgName_22);
      {
        Var_42 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_42, 0) = ((MR_Box) (ProgName_22));
      }
      {
        Var_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_53, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_53, 1) = ((MR_Box) (LibName_10));
      }
      {
        Var_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_61, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_61, 1) = ((MR_Box) (GradeDirName_9));
      }
      {
        Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (Var_61));
        MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__check_libgrades_scalar_common_1[7])));
      }
      {
        Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__check_libgrades_scalar_common_1[4])));
        MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (Var_60));
      }
      {
        Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__check_libgrades_scalar_common_1[9])));
        MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (Var_57));
      }
      {
        Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (Var_53));
        MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (Var_54));
      }
      {
        Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__check_libgrades_scalar_common_1[8])));
        MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (Var_52));
      }
      {
        Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__check_libgrades_scalar_common_1[2])));
        MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (Var_49));
      }
      {
        Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__check_libgrades_scalar_common_1[1])));
        MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (Var_46));
      }
      {
        Pieces_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_23, 0) = ((MR_Box) (Var_42));
        MR_hl_field(MR_mktag(1), Pieces_23, 1) = ((MR_Box) (Var_43));
      }
      {
        Spec_24 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Spec_24, 0) = ((MR_Box) ((MR_String) "predicate \140libs.check_libgrades.check_library_is_installed\'/7"));
        MR_hl_field(MR_mktag(2), Spec_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(2), Spec_24, 2) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(MR_mktag(2), Spec_24, 3) = ((MR_Box) (Pieces_23));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_26 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_24));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_25));
      }
    }
    else
      *STATE_VARIABLE_Specs_26 = STATE_VARIABLE_Specs_0_25;
  }
}

static void MR_CALL 
libs__check_libgrades__maybe_check_libraries_are_installed_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Specs_26;

    libs__check_libgrades__check_library_is_installed_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Specs_26);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_26));
  }
}

void MR_CALL 
libs__check_libgrades__maybe_check_libraries_are_installed_4_p_0(
  MR_Word Globals_5,
  MR_Word * STATE_VARIABLE_Specs_11)
{
  {
    MR_Word LibgradeCheck_8;

    libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 681, &LibgradeCheck_8);
    switch (LibgradeCheck_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_Specs_11 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 1:
        {
          MR_Word Libs_9;
          MR_String GradeDirName_10;
          MR_Word STATE_VARIABLE_Specs_18_18;
          MR_Word Var_20;
          MR_Word MaybeStdLibDir_39;
          MR_Box conv2_STATE_VARIABLE_Specs_11;
          MR_Box conv1_STATE_VARIABLE_IO_13;

          libs__globals__lookup_accumulating_option_3_p_0(Globals_5, (MR_Integer) 580, &Libs_9);
          libs__compute_grade__grade_directory_component_2_p_0(Globals_5, &GradeDirName_10);
          libs__globals__lookup_maybe_string_option_3_p_0(Globals_5, (MR_Integer) 582, &MaybeStdLibDir_39);
          if ((MaybeStdLibDir_39 == (MR_Word) ((MR_Unsigned) 0U)))
            STATE_VARIABLE_Specs_18_18 = (MR_Word) ((MR_Unsigned) 0U);
          else
          {
            MR_String StdLibDir_40 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeStdLibDir_39, (MR_Integer) 0))));
            MR_Word Target_41;
            MR_String StdLibCheckFile_42;
            MR_Word StdLibCheckFileResult_43;

            libs__globals__get_target_2_p_0(Globals_5, &Target_41);
            switch (Target_41) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_String Var_58;
                  MR_String Var_59;

                  Var_59 = mercury__dir__f_slash_2_f_0(StdLibDir_40, (MR_String) "modules");
                  Var_58 = mercury__dir__f_slash_2_f_0(Var_59, GradeDirName_10);
                  StdLibCheckFile_42 = mercury__dir__f_slash_2_f_0(Var_58, (MR_String) "mer_std.init");
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_String Var_50;
                  MR_String Var_51;

                  Var_51 = mercury__dir__f_slash_2_f_0(StdLibDir_40, (MR_String) "lib");
                  Var_50 = mercury__dir__f_slash_2_f_0(Var_51, GradeDirName_10);
                  StdLibCheckFile_42 = mercury__dir__f_slash_2_f_0(Var_50, (MR_String) "mer_std.dll");
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_String Var_54;
                  MR_String Var_55;

                  Var_55 = mercury__dir__f_slash_2_f_0(StdLibDir_40, (MR_String) "lib");
                  Var_54 = mercury__dir__f_slash_2_f_0(Var_55, GradeDirName_10);
                  StdLibCheckFile_42 = mercury__dir__f_slash_2_f_0(Var_54, (MR_String) "mer_std.jar");
                }
                break;
            }
            mercury__io__open_input_4_p_0(StdLibCheckFile_42, &StdLibCheckFileResult_43);
            if (((MR_tag((MR_Word) StdLibCheckFileResult_43)) == (MR_Integer) 1))
            {
              MR_String ProgName_46;
              MR_Word Pieces_47;
              MR_Word Spec_48;
              MR_Word Var_65;
              MR_Word Var_66;
              MR_Word Var_69;
              MR_Word Var_72;
              MR_Word Var_75;
              MR_Word Var_78;
              MR_Word Var_79;

              mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &ProgName_46);
              {
                Var_65 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_65, 0) = ((MR_Box) (ProgName_46));
              }
              {
                Var_79 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_79, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Var_79, 1) = ((MR_Box) (GradeDirName_10));
              }
              {
                Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (Var_79));
                MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__check_libgrades_scalar_common_1[7])));
              }
              {
                Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__check_libgrades_scalar_common_1[4])));
                MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) (Var_78));
              }
              {
                Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__check_libgrades_scalar_common_1[3])));
                MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) (Var_75));
              }
              {
                Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__check_libgrades_scalar_common_1[2])));
                MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) (Var_72));
              }
              {
                Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__check_libgrades_scalar_common_1[1])));
                MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) (Var_69));
              }
              {
                Pieces_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Pieces_47, 0) = ((MR_Box) (Var_65));
                MR_hl_field(MR_mktag(1), Pieces_47, 1) = ((MR_Box) (Var_66));
              }
              {
                Spec_48 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Spec_48, 0) = ((MR_Box) ((MR_String) "predicate \140libs.check_libgrades.check_stdlib_is_installed\'/6"));
                MR_hl_field(MR_mktag(2), Spec_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(2), Spec_48, 2) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(2), Spec_48, 3) = ((MR_Box) (Pieces_47));
              }
              {
                STATE_VARIABLE_Specs_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_18_18, 0) = ((MR_Box) (Spec_48));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_18_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
            }
            else
            {
              MR_Word StdLibCheckFileStream_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StdLibCheckFileResult_43, (MR_Integer) 0))));

              mercury__io__close_input_3_p_0(StdLibCheckFileStream_44);
              STATE_VARIABLE_Specs_18_18 = (MR_Word) ((MR_Unsigned) 0U);
            }
          }
          {
            Var_20 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (&libs__check_libgrades_scalar_common_2[0]));
            MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (libs__check_libgrades__maybe_check_libraries_are_installed_4_p_0_1));
            MR_hl_field(MR_mktag(0), Var_20, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_20, 3) = ((MR_Box) (Globals_5));
            MR_hl_field(MR_mktag(0), Var_20, 4) = ((MR_Box) (GradeDirName_10));
          }
          mercury__list__foldl2_6_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__check_libgrades_scalar_common_1[0]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_20, Libs_9, ((MR_Box) (STATE_VARIABLE_Specs_18_18)), &conv2_STATE_VARIABLE_Specs_11, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_13);
          *STATE_VARIABLE_Specs_11 = ((MR_Word) (conv2_STATE_VARIABLE_Specs_11));
        }
        break;
    }
  }
}

void mercury__libs__check_libgrades__init(void)
{
}

void mercury__libs__check_libgrades__init_type_tables(void)
{
}

void mercury__libs__check_libgrades__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__libs__check_libgrades__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module libs.check_libgrades.
