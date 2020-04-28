/*
** Automatically generated from `check_libgrades.m'
** by the Mercury compiler,
** version rotd-2020-04-28
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
#include "deconstruct.mih"
#include "dir.mih"
#include "enum.mih"
#include "getopt_io.mih"
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
#include "set.mih"
#include "set_ordlist.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "libs.compute_grade.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_util.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static MR_String MR_CALL 
libs__check_libgrades__IntroducedFrom__func__check_library_is_installed__144__2_2_f_0(
  MR_String GradeDirNameDir_66,
  MR_String LambdaHeadVar__1_54);

static MR_String MR_CALL 
libs__check_libgrades__IntroducedFrom__func__check_library_is_installed__144__1_2_f_0(
  MR_String GradeDirNameDir_17,
  MR_String LambdaHeadVar__1_32);

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
  MR_Word STATE_VARIABLE_Succeeded_0_24,
  MR_Word * STATE_VARIABLE_Succeeded_25);

static void MR_CALL 
libs__check_libgrades__maybe_check_libraries_are_installed_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);


static /* final */ const MR_Box libs__check_libgrades_scalar_common_1[1][10];

static /* final */ const MR_Box libs__check_libgrades_scalar_common_2[1][6];




static /* final */ const MR_Box libs__check_libgrades_scalar_common_1[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box libs__check_libgrades_scalar_common_2[1][6] = {
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



static MR_String MR_CALL 
libs__check_libgrades__IntroducedFrom__func__check_library_is_installed__144__2_2_f_0(
  MR_String GradeDirNameDir_66,
  MR_String LambdaHeadVar__1_54)
{
  {
    MR_String LambdaHeadVar__2_55;
    MR_String Var_56;

    Var_56 = mercury__dir__f_slash_2_f_0(LambdaHeadVar__1_54, (MR_String) "lib");
    LambdaHeadVar__2_55 = mercury__dir__f_slash_2_f_0(Var_56, GradeDirNameDir_66);
    return LambdaHeadVar__2_55;
  }
}

static MR_String MR_CALL 
libs__check_libgrades__IntroducedFrom__func__check_library_is_installed__144__1_2_f_0(
  MR_String GradeDirNameDir_17,
  MR_String LambdaHeadVar__1_32)
{
  {
    MR_String LambdaHeadVar__2_33;
    MR_String Var_34;

    Var_34 = mercury__dir__f_slash_2_f_0(LambdaHeadVar__1_32, (MR_String) "lib");
    LambdaHeadVar__2_33 = mercury__dir__f_slash_2_f_0(Var_34, GradeDirNameDir_17);
    return LambdaHeadVar__2_33;
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
    MR_String conv1_LambdaHeadVar__2_55;

    conv1_LambdaHeadVar__2_55 = libs__check_libgrades__IntroducedFrom__func__check_library_is_installed__144__2_2_f_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_55));
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
    MR_String conv0_LambdaHeadVar__2_33;

    conv0_LambdaHeadVar__2_33 = libs__check_libgrades__IntroducedFrom__func__check_library_is_installed__144__1_2_f_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_33));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
libs__check_libgrades__check_library_is_installed_7_p_0(
  MR_Word Globals_8,
  MR_String GradeDirName_9,
  MR_String LibName_10,
  MR_Word STATE_VARIABLE_Succeeded_0_24,
  MR_Word * STATE_VARIABLE_Succeeded_25)
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
      case (MR_Integer) 3:
        {
          CheckFileName_14 = mercury__string__f_43_43_2_f_0(LibName_10, (MR_String) ".init");
          libs__globals__lookup_accumulating_option_3_p_0(Globals_8, (MR_Integer) 582, &SearchDirs_15);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word MercuryLibDirs_16;
          MR_String GradeDirNameDir_17;
          MR_Word Var_31;

          CheckFileName_14 = mercury__string__f_43_43_2_f_0(LibName_10, (MR_String) ".dll");
          libs__globals__lookup_accumulating_option_3_p_0(Globals_8, (MR_Integer) 574, &MercuryLibDirs_16);
          libs__compute_grade__grade_directory_component_2_p_0(Globals_8, &GradeDirNameDir_17);
          {
            Var_31 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (&libs__check_libgrades_scalar_common_2[0]));
            MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) (libs__check_libgrades__check_library_is_installed_7_p_0_1));
            MR_hl_field(MR_mktag(0), Var_31, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_31, 3) = ((MR_Box) (GradeDirNameDir_17));
          }
          SearchDirs_15 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_31, MercuryLibDirs_16);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word MercuryLibDirs_65;
          MR_String GradeDirNameDir_66;
          MR_Word Var_68;

          CheckFileName_14 = mercury__string__f_43_43_2_f_0(LibName_10, (MR_String) ".jar");
          libs__globals__lookup_accumulating_option_3_p_0(Globals_8, (MR_Integer) 574, &MercuryLibDirs_65);
          libs__compute_grade__grade_directory_component_2_p_0(Globals_8, &GradeDirNameDir_66);
          {
            Var_68 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_68, 0) = ((MR_Box) (&libs__check_libgrades_scalar_common_2[0]));
            MR_hl_field(MR_mktag(0), Var_68, 1) = ((MR_Box) (libs__check_libgrades__check_library_is_installed_7_p_0_2));
            MR_hl_field(MR_mktag(0), Var_68, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_68, 3) = ((MR_Box) (GradeDirNameDir_66));
          }
          SearchDirs_15 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_68, MercuryLibDirs_65);
        }
        break;
    }
    libs__file_util__search_for_file_returning_dir_5_p_0(SearchDirs_15, CheckFileName_14, &MaybeDirName_19);
    if (((MR_tag((MR_Word) MaybeDirName_19)) == (MR_Integer) 1))
    {
      MR_Word Stderr_22;
      MR_String ProgName_23;

      mercury__io__stderr_stream_3_p_0(&Stderr_22);
      mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &ProgName_23);
      mercury__io__write_string_4_p_0(Stderr_22, ProgName_23);
      mercury__io__write_string_4_p_0(Stderr_22, (MR_String) ": error: the library \140");
      mercury__io__write_string_4_p_0(Stderr_22, LibName_10);
      mercury__io__write_string_4_p_0(Stderr_22, (MR_String) "\' cannot be found in grade \140");
      mercury__io__write_string_4_p_0(Stderr_22, GradeDirName_9);
      mercury__io__write_string_4_p_0(Stderr_22, (MR_String) "\'.\n");
      *STATE_VARIABLE_Succeeded_25 = (MR_Integer) 0;
    }
    else
      *STATE_VARIABLE_Succeeded_25 = STATE_VARIABLE_Succeeded_0_24;
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
    MR_Word conv0_STATE_VARIABLE_Succeeded_25;

    libs__check_libgrades__check_library_is_installed_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Succeeded_25);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Succeeded_25));
  }
}

void MR_CALL 
libs__check_libgrades__maybe_check_libraries_are_installed_4_p_0(
  MR_Word Globals_5,
  MR_Word * Succeeded_6)
{
  {
    MR_Word LibgradeCheck_8;

    libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 679, &LibgradeCheck_8);
    switch (LibgradeCheck_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *Succeeded_6 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        {
          MR_Word Libs_9;
          MR_String GradeDirName_10;
          MR_Word Succeeded0_11;
          MR_Word Var_17;
          MR_Word MaybeStdLibDir_33;
          MR_Box conv2_Succeeded_6;
          MR_Box conv1_STATE_VARIABLE_IO_13;

          libs__globals__lookup_accumulating_option_3_p_0(Globals_5, (MR_Integer) 578, &Libs_9);
          libs__compute_grade__grade_directory_component_2_p_0(Globals_5, &GradeDirName_10);
          libs__globals__lookup_maybe_string_option_3_p_0(Globals_5, (MR_Integer) 580, &MaybeStdLibDir_33);
          if ((MaybeStdLibDir_33 == (MR_Word) ((MR_Unsigned) 0U)))
            Succeeded0_11 = (MR_Integer) 1;
          else
          {
            MR_String StdLibDir_34 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeStdLibDir_33, (MR_Integer) 0))));
            MR_Word Target_35;
            MR_String StdLibCheckFile_36;
            MR_Word Result_37;

            libs__globals__get_target_2_p_0(Globals_5, &Target_35);
            switch (Target_35) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 3:
                {
                  MR_String Var_50;
                  MR_String Var_51;

                  Var_51 = mercury__dir__f_slash_2_f_0(StdLibDir_34, (MR_String) "modules");
                  Var_50 = mercury__dir__f_slash_2_f_0(Var_51, GradeDirName_10);
                  StdLibCheckFile_36 = mercury__dir__f_slash_2_f_0(Var_50, (MR_String) "mer_std.init");
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_String Var_42;
                  MR_String Var_43;

                  Var_43 = mercury__dir__f_slash_2_f_0(StdLibDir_34, (MR_String) "lib");
                  Var_42 = mercury__dir__f_slash_2_f_0(Var_43, GradeDirName_10);
                  StdLibCheckFile_36 = mercury__dir__f_slash_2_f_0(Var_42, (MR_String) "mer_std.dll");
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_String Var_46;
                  MR_String Var_47;

                  Var_47 = mercury__dir__f_slash_2_f_0(StdLibDir_34, (MR_String) "lib");
                  Var_46 = mercury__dir__f_slash_2_f_0(Var_47, GradeDirName_10);
                  StdLibCheckFile_36 = mercury__dir__f_slash_2_f_0(Var_46, (MR_String) "mer_std.jar");
                }
                break;
            }
            mercury__io__see_4_p_0(StdLibCheckFile_36, &Result_37);
            if ((Result_37 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              mercury__io__seen_2_p_0();
              Succeeded0_11 = (MR_Integer) 1;
            }
            else
            {
              MR_Word Stderr_39;
              MR_String ProgName_40;

              mercury__io__stderr_stream_3_p_0(&Stderr_39);
              mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &ProgName_40);
              mercury__io__write_string_4_p_0(Stderr_39, ProgName_40);
              mercury__io__write_string_4_p_0(Stderr_39, (MR_String) ": error: the Mercury standard library cannot be found in grade ");
              mercury__io__write_string_4_p_0(Stderr_39, GradeDirName_10);
              mercury__io__write_string_4_p_0(Stderr_39, (MR_String) ".\n");
              Succeeded0_11 = (MR_Integer) 0;
            }
          }
          {
            Var_17 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (&libs__check_libgrades_scalar_common_1[0]));
            MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (libs__check_libgrades__maybe_check_libraries_are_installed_4_p_0_1));
            MR_hl_field(MR_mktag(0), Var_17, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_17, 3) = ((MR_Box) (Globals_5));
            MR_hl_field(MR_mktag(0), Var_17, 4) = ((MR_Box) (GradeDirName_10));
          }
          mercury__list__foldl2_6_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_17, Libs_9, ((MR_Box) (Succeeded0_11)), &conv2_Succeeded_6, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_13);
          *Succeeded_6 = ((MR_Word) (conv2_Succeeded_6));
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
