/*
** Automatically generated from `var_value_names.m'
** by the Mercury compiler,
** version rotd-2021-12-25
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


// :- module var_value_names.
// :- implementation.

/*
INIT mercury__var_value_names__init
ENDINIT
*/

#include "var_value_names.mih"


#include "assoc_list.mih"
#include "builtin.mih"
#include "enum.mih"
#include "grade_lib.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "term.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "grade_lib.grade_spec.mih"






/* sealed */ struct var_value_names__vector_common_type_1_0_s {
  const MR_Word var_value_names__vector_common_type_1_0__vct_1_f_0;
};

static /* final */ const struct var_value_names__vector_common_type_1_0_s var_value_names_vector_common_1[30];

/* sealed */ struct var_value_names__vector_common_type_2_0_s {
  const MR_String var_value_names__vector_common_type_2_0__vct_2_f_0;
};

static /* final */ const struct var_value_names__vector_common_type_2_0_s var_value_names_vector_common_2[109];

/* sealed */ struct var_value_names__vector_common_type_3_0_s {
  const MR_Word var_value_names__vector_common_type_3_0__vct_3_f_0;
};

static /* final */ const struct var_value_names__vector_common_type_3_0_s var_value_names_vector_common_3[79];




static /* final */ const struct var_value_names__vector_common_type_1_0_s var_value_names_vector_common_1[30] = {
  /* row 0 */   {     (MR_Integer) 6 },
  /* row 1 */   {     (MR_Integer) 21 },
  /* row 2 */   {     (MR_Integer) 15 },
  /* row 3 */   {     (MR_Integer) 14 },
  /* row 4 */   {     (MR_Integer) 8 },
  /* row 5 */   {     (MR_Integer) 1 },
  /* row 6 */   {     (MR_Integer) 2 },
  /* row 7 */   {     (MR_Integer) 0 },
  /* row 8 */   {     (MR_Integer) 3 },
  /* row 9 */   {     (MR_Integer) 9 },
  /* row 10 */   {     (MR_Integer) 29 },
  /* row 11 */   {     (MR_Integer) 5 },
  /* row 12 */   {     (MR_Integer) 12 },
  /* row 13 */   {     (MR_Integer) 16 },
  /* row 14 */   {     (MR_Integer) 18 },
  /* row 15 */   {     (MR_Integer) 17 },
  /* row 16 */   {     (MR_Integer) 27 },
  /* row 17 */   {     (MR_Integer) 24 },
  /* row 18 */   {     (MR_Integer) 25 },
  /* row 19 */   {     (MR_Integer) 26 },
  /* row 20 */   {     (MR_Integer) 28 },
  /* row 21 */   {     (MR_Integer) 4 },
  /* row 22 */   {     (MR_Integer) 22 },
  /* row 23 */   {     (MR_Integer) 10 },
  /* row 24 */   {     (MR_Integer) 7 },
  /* row 25 */   {     (MR_Integer) 23 },
  /* row 26 */   {     (MR_Integer) 20 },
  /* row 27 */   {     (MR_Integer) 13 },
  /* row 28 */   {     (MR_Integer) 11 },
  /* row 29 */   {     (MR_Integer) 19 },
};

static /* final */ const struct var_value_names__vector_common_type_2_0_s var_value_names_vector_common_2[109] = {
  /* row 0 */   {     (MR_String) "gcc_regs_avail" },
  /* row 1 */   {     (MR_String) "gcc_gotos_avail" },
  /* row 2 */   {     (MR_String) "gcc_labels_avail" },
  /* row 3 */   {     (MR_String) "low_tag_bits_avail" },
  /* row 4 */   {     (MR_String) "size_of_double" },
  /* row 5 */   {     (MR_String) "mercuryfile" },
  /* row 6 */   {     (MR_String) "backend" },
  /* row 7 */   {     (MR_String) "target" },
  /* row 8 */   {     (MR_String) "gcc_conf" },
  /* row 9 */   {     (MR_String) "low_tag_bits_use" },
  /* row 10 */   {     (MR_String) "stack_len" },
  /* row 11 */   {     (MR_String) "trail" },
  /* row 12 */   {     (MR_String) "minmodel" },
  /* row 13 */   {     (MR_String) "thread_safe" },
  /* row 14 */   {     (MR_String) "gc" },
  /* row 15 */   {     (MR_String) "deep_prof" },
  /* row 16 */   {     (MR_String) "mprof_call" },
  /* row 17 */   {     (MR_String) "mprof_time" },
  /* row 18 */   {     (MR_String) "mprof_memory" },
  /* row 19 */   {     (MR_String) "tscope_prof" },
  /* row 20 */   {     (MR_String) "term_size_prof" },
  /* row 21 */   {     (MR_String) "debug" },
  /* row 22 */   {     (MR_String) "ssdebug" },
  /* row 23 */   {     (MR_String) "target_debug" },
  /* row 24 */   {     (MR_String) "rbmm" },
  /* row 25 */   {     (MR_String) "rbmm_debug" },
  /* row 26 */   {     (MR_String) "rbmm_prof" },
  /* row 27 */   {     (MR_String) "pregen" },
  /* row 28 */   {     (MR_String) "single_prec_float" },
  /* row 29 */   {     (MR_String) "merc_float" },
  /* row 30 */   {     (MR_String) "gcc_regs_not_avail" },
  /* row 31 */   {     (MR_String) "gcc_regs_avail" },
  /* row 32 */   {     (MR_String) "gcc_gotos_not_avail" },
  /* row 33 */   {     (MR_String) "gcc_gotos_avail" },
  /* row 34 */   {     (MR_String) "gcc_labels_not_avail" },
  /* row 35 */   {     (MR_String) "gcc_labels_avail" },
  /* row 36 */   {     (MR_String) "low_tag_bits_avail_0" },
  /* row 37 */   {     (MR_String) "low_tag_bits_avail_2" },
  /* row 38 */   {     (MR_String) "low_tag_bits_avail_3" },
  /* row 39 */   {     (MR_String) "size_of_double_eq_ptr" },
  /* row 40 */   {     (MR_String) "size_of_double_ne_ptr" },
  /* row 41 */   {     (MR_String) "no_mercuryfile" },
  /* row 42 */   {     (MR_String) "mercuryfile" },
  /* row 43 */   {     (MR_String) "mlds" },
  /* row 44 */   {     (MR_String) "llds" },
  /* row 45 */   {     (MR_String) "c" },
  /* row 46 */   {     (MR_String) "csharp" },
  /* row 47 */   {     (MR_String) "java" },
  /* row 48 */   {     (MR_String) "none" },
  /* row 49 */   {     (MR_String) "reg" },
  /* row 50 */   {     (MR_String) "jump" },
  /* row 51 */   {     (MR_String) "fast" },
  /* row 52 */   {     (MR_String) "asm_jump" },
  /* row 53 */   {     (MR_String) "asm_fast" },
  /* row 54 */   {     (MR_String) "low_tag_bits_use_0" },
  /* row 55 */   {     (MR_String) "low_tag_bits_use_2" },
  /* row 56 */   {     (MR_String) "low_tag_bits_use_3" },
  /* row 57 */   {     (MR_String) "stfix" },
  /* row 58 */   {     (MR_String) "stseg" },
  /* row 59 */   {     (MR_String) "exts" },
  /* row 60 */   {     (MR_String) "no_trail" },
  /* row 61 */   {     (MR_String) "trail" },
  /* row 62 */   {     (MR_String) "no_mm" },
  /* row 63 */   {     (MR_String) "mm_stack_copy" },
  /* row 64 */   {     (MR_String) "mm_stack_copy_debug" },
  /* row 65 */   {     (MR_String) "mm_own_stack" },
  /* row 66 */   {     (MR_String) "mm_own_stack_debug" },
  /* row 67 */   {     (MR_String) "not_thread_safe" },
  /* row 68 */   {     (MR_String) "thread_safe" },
  /* row 69 */   {     (MR_String) "native_thread_safe" },
  /* row 70 */   {     (MR_String) "no_gc" },
  /* row 71 */   {     (MR_String) "bdw" },
  /* row 72 */   {     (MR_String) "bdw_debug" },
  /* row 73 */   {     (MR_String) "target_native" },
  /* row 74 */   {     (MR_String) "accurate" },
  /* row 75 */   {     (MR_String) "history" },
  /* row 76 */   {     (MR_String) "no_deep_prof" },
  /* row 77 */   {     (MR_String) "deep_prof" },
  /* row 78 */   {     (MR_String) "no_mprof_call" },
  /* row 79 */   {     (MR_String) "mprof_call" },
  /* row 80 */   {     (MR_String) "no_mprof_time" },
  /* row 81 */   {     (MR_String) "mprof_time" },
  /* row 82 */   {     (MR_String) "no_mprof_memory" },
  /* row 83 */   {     (MR_String) "mprof_memory" },
  /* row 84 */   {     (MR_String) "no_tscope_prof" },
  /* row 85 */   {     (MR_String) "tscope_prof" },
  /* row 86 */   {     (MR_String) "no_term_size_prof" },
  /* row 87 */   {     (MR_String) "term_size_prof_cells" },
  /* row 88 */   {     (MR_String) "term_size_prof_words" },
  /* row 89 */   {     (MR_String) "nodebug" },
  /* row 90 */   {     (MR_String) "debug" },
  /* row 91 */   {     (MR_String) "decldebug" },
  /* row 92 */   {     (MR_String) "no_ssdebug" },
  /* row 93 */   {     (MR_String) "ssdebug" },
  /* row 94 */   {     (MR_String) "no_target_debug" },
  /* row 95 */   {     (MR_String) "target_debug" },
  /* row 96 */   {     (MR_String) "no_rbmm" },
  /* row 97 */   {     (MR_String) "rbmm" },
  /* row 98 */   {     (MR_String) "no_rbmm_debug" },
  /* row 99 */   {     (MR_String) "rbmm_debug" },
  /* row 100 */   {     (MR_String) "no_rbmm_prof" },
  /* row 101 */   {     (MR_String) "rbmm_prof" },
  /* row 102 */   {     (MR_String) "no_pregen" },
  /* row 103 */   {     (MR_String) "pregen" },
  /* row 104 */   {     (MR_String) "no_spf" },
  /* row 105 */   {     (MR_String) "spf" },
  /* row 106 */   {     (MR_String) "boxed_double" },
  /* row 107 */   {     (MR_String) "unboxed_double" },
  /* row 108 */   {     (MR_String) "unboxed_float" },
};

static /* final */ const struct var_value_names__vector_common_type_3_0_s var_value_names_vector_common_3[79] = {
  /* row 0 */   {     (MR_Integer) 44 },
  /* row 1 */   {     (MR_Integer) 23 },
  /* row 2 */   {     (MR_Integer) 22 },
  /* row 3 */   {     (MR_Integer) 41 },
  /* row 4 */   {     (MR_Integer) 42 },
  /* row 5 */   {     (MR_Integer) 76 },
  /* row 6 */   {     (MR_Integer) 15 },
  /* row 7 */   {     (MR_Integer) 16 },
  /* row 8 */   {     (MR_Integer) 60 },
  /* row 9 */   {     (MR_Integer) 61 },
  /* row 10 */   {     (MR_Integer) 47 },
  /* row 11 */   {     (MR_Integer) 29 },
  /* row 12 */   {     (MR_Integer) 21 },
  /* row 13 */   {     (MR_Integer) 3 },
  /* row 14 */   {     (MR_Integer) 2 },
  /* row 15 */   {     (MR_Integer) 5 },
  /* row 16 */   {     (MR_Integer) 4 },
  /* row 17 */   {     (MR_Integer) 1 },
  /* row 18 */   {     (MR_Integer) 0 },
  /* row 19 */   {     (MR_Integer) 45 },
  /* row 20 */   {     (MR_Integer) 17 },
  /* row 21 */   {     (MR_Integer) 20 },
  /* row 22 */   {     (MR_Integer) 14 },
  /* row 23 */   {     (MR_Integer) 6 },
  /* row 24 */   {     (MR_Integer) 7 },
  /* row 25 */   {     (MR_Integer) 8 },
  /* row 26 */   {     (MR_Integer) 24 },
  /* row 27 */   {     (MR_Integer) 25 },
  /* row 28 */   {     (MR_Integer) 26 },
  /* row 29 */   {     (MR_Integer) 12 },
  /* row 30 */   {     (MR_Integer) 13 },
  /* row 31 */   {     (MR_Integer) 35 },
  /* row 32 */   {     (MR_Integer) 36 },
  /* row 33 */   {     (MR_Integer) 33 },
  /* row 34 */   {     (MR_Integer) 34 },
  /* row 35 */   {     (MR_Integer) 49 },
  /* row 36 */   {     (MR_Integer) 53 },
  /* row 37 */   {     (MR_Integer) 51 },
  /* row 38 */   {     (MR_Integer) 39 },
  /* row 39 */   {     (MR_Integer) 46 },
  /* row 40 */   {     (MR_Integer) 40 },
  /* row 41 */   {     (MR_Integer) 11 },
  /* row 42 */   {     (MR_Integer) 32 },
  /* row 43 */   {     (MR_Integer) 48 },
  /* row 44 */   {     (MR_Integer) 52 },
  /* row 45 */   {     (MR_Integer) 50 },
  /* row 46 */   {     (MR_Integer) 72 },
  /* row 47 */   {     (MR_Integer) 66 },
  /* row 48 */   {     (MR_Integer) 68 },
  /* row 49 */   {     (MR_Integer) 70 },
  /* row 50 */   {     (MR_Integer) 74 },
  /* row 51 */   {     (MR_Integer) 62 },
  /* row 52 */   {     (MR_Integer) 64 },
  /* row 53 */   {     (MR_Integer) 56 },
  /* row 54 */   {     (MR_Integer) 30 },
  /* row 55 */   {     (MR_Integer) 54 },
  /* row 56 */   {     (MR_Integer) 59 },
  /* row 57 */   {     (MR_Integer) 18 },
  /* row 58 */   {     (MR_Integer) 37 },
  /* row 59 */   {     (MR_Integer) 73 },
  /* row 60 */   {     (MR_Integer) 67 },
  /* row 61 */   {     (MR_Integer) 69 },
  /* row 62 */   {     (MR_Integer) 71 },
  /* row 63 */   {     (MR_Integer) 19 },
  /* row 64 */   {     (MR_Integer) 9 },
  /* row 65 */   {     (MR_Integer) 10 },
  /* row 66 */   {     (MR_Integer) 75 },
  /* row 67 */   {     (MR_Integer) 63 },
  /* row 68 */   {     (MR_Integer) 27 },
  /* row 69 */   {     (MR_Integer) 28 },
  /* row 70 */   {     (MR_Integer) 65 },
  /* row 71 */   {     (MR_Integer) 43 },
  /* row 72 */   {     (MR_Integer) 57 },
  /* row 73 */   {     (MR_Integer) 58 },
  /* row 74 */   {     (MR_Integer) 38 },
  /* row 75 */   {     (MR_Integer) 31 },
  /* row 76 */   {     (MR_Integer) 55 },
  /* row 77 */   {     (MR_Integer) 77 },
  /* row 78 */   {     (MR_Integer) 78 },
};





void MR_CALL 
var_value_names__solver_var_value_name_2_p_1(
  MR_String * HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  *HeadVar__1_1 = ((&var_value_names_vector_common_2[30 + HeadVar__2_2]))->var_value_names__vector_common_type_2_0__vct_2_f_0;
}

MR_bool MR_CALL 
var_value_names__solver_var_value_name_2_p_0(
  MR_String HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  {
    MR_bool succeeded;

    {
      MR_Integer case_num_0 = (MR_Integer) -1;

      switch (MR_nth_code_unit(HeadVar__1_1, 0)) {
        case (MR_Integer) 97:
          switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
            case (MR_Integer) 99:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "accurate"))
                case_num_0 = (MR_Integer) 0;
              break;
            case (MR_Integer) 115:
              if (((((MR_nth_code_unit(HeadVar__1_1, 2)) == (MR_Integer) 109)) && (((MR_nth_code_unit(HeadVar__1_1, 3)) == (MR_Integer) 95))))
                switch (MR_nth_code_unit(HeadVar__1_1, 4)) {
                  case (MR_Integer) 102:
                    if (MR_offset_streq(5, HeadVar__1_1, (MR_String) "asm_fast"))
                      case_num_0 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 106:
                    if (MR_offset_streq(5, HeadVar__1_1, (MR_String) "asm_jump"))
                      case_num_0 = (MR_Integer) 2;
                    break;
                }
              break;
          }
          break;
        case (MR_Integer) 98:
          switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
            case (MR_Integer) 100:
              if (((MR_nth_code_unit(HeadVar__1_1, 2)) == (MR_Integer) 119))
                switch (MR_nth_code_unit(HeadVar__1_1, 3)) {
                  case (MR_Integer) 0:
                    case_num_0 = (MR_Integer) 3;
                    break;
                  case (MR_Integer) 95:
                    if (MR_offset_streq(4, HeadVar__1_1, (MR_String) "bdw_debug"))
                      case_num_0 = (MR_Integer) 4;
                    break;
                }
              break;
            case (MR_Integer) 111:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "boxed_double"))
                case_num_0 = (MR_Integer) 5;
              break;
          }
          break;
        case (MR_Integer) 99:
          switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
            case (MR_Integer) 0:
              case_num_0 = (MR_Integer) 6;
              break;
            case (MR_Integer) 115:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "csharp"))
                case_num_0 = (MR_Integer) 7;
              break;
          }
          break;
        case (MR_Integer) 100:
          if (((MR_nth_code_unit(HeadVar__1_1, 1)) == (MR_Integer) 101))
            switch (MR_nth_code_unit(HeadVar__1_1, 2)) {
              case (MR_Integer) 98:
                if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "debug"))
                  case_num_0 = (MR_Integer) 8;
                break;
              case (MR_Integer) 99:
                if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "decldebug"))
                  case_num_0 = (MR_Integer) 9;
                break;
              case (MR_Integer) 101:
                if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "deep_prof"))
                  case_num_0 = (MR_Integer) 10;
                break;
            }
          break;
        case (MR_Integer) 101:
          if (MR_offset_streq(1, HeadVar__1_1, (MR_String) "exts"))
            case_num_0 = (MR_Integer) 11;
          break;
        case (MR_Integer) 102:
          if (MR_offset_streq(1, HeadVar__1_1, (MR_String) "fast"))
            case_num_0 = (MR_Integer) 12;
          break;
        case (MR_Integer) 103:
          if (((((((MR_nth_code_unit(HeadVar__1_1, 1)) == (MR_Integer) 99)) && (((MR_nth_code_unit(HeadVar__1_1, 2)) == (MR_Integer) 99)))) && (((MR_nth_code_unit(HeadVar__1_1, 3)) == (MR_Integer) 95))))
            switch (MR_nth_code_unit(HeadVar__1_1, 4)) {
              case (MR_Integer) 103:
                if (((((((((((MR_nth_code_unit(HeadVar__1_1, 5)) == (MR_Integer) 111)) && (((MR_nth_code_unit(HeadVar__1_1, 6)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(HeadVar__1_1, 7)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(HeadVar__1_1, 8)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(HeadVar__1_1, 9)) == (MR_Integer) 95))))
                  switch (MR_nth_code_unit(HeadVar__1_1, 10)) {
                    case (MR_Integer) 97:
                      if (MR_offset_streq(11, HeadVar__1_1, (MR_String) "gcc_gotos_avail"))
                        case_num_0 = (MR_Integer) 13;
                      break;
                    case (MR_Integer) 110:
                      if (MR_offset_streq(11, HeadVar__1_1, (MR_String) "gcc_gotos_not_avail"))
                        case_num_0 = (MR_Integer) 14;
                      break;
                  }
                break;
              case (MR_Integer) 108:
                if (((((((((((((MR_nth_code_unit(HeadVar__1_1, 5)) == (MR_Integer) 97)) && (((MR_nth_code_unit(HeadVar__1_1, 6)) == (MR_Integer) 98)))) && (((MR_nth_code_unit(HeadVar__1_1, 7)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(HeadVar__1_1, 8)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(HeadVar__1_1, 9)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(HeadVar__1_1, 10)) == (MR_Integer) 95))))
                  switch (MR_nth_code_unit(HeadVar__1_1, 11)) {
                    case (MR_Integer) 97:
                      if (MR_offset_streq(12, HeadVar__1_1, (MR_String) "gcc_labels_avail"))
                        case_num_0 = (MR_Integer) 15;
                      break;
                    case (MR_Integer) 110:
                      if (MR_offset_streq(12, HeadVar__1_1, (MR_String) "gcc_labels_not_avail"))
                        case_num_0 = (MR_Integer) 16;
                      break;
                  }
                break;
              case (MR_Integer) 114:
                if (((((((((MR_nth_code_unit(HeadVar__1_1, 5)) == (MR_Integer) 101)) && (((MR_nth_code_unit(HeadVar__1_1, 6)) == (MR_Integer) 103)))) && (((MR_nth_code_unit(HeadVar__1_1, 7)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(HeadVar__1_1, 8)) == (MR_Integer) 95))))
                  switch (MR_nth_code_unit(HeadVar__1_1, 9)) {
                    case (MR_Integer) 97:
                      if (MR_offset_streq(10, HeadVar__1_1, (MR_String) "gcc_regs_avail"))
                        case_num_0 = (MR_Integer) 17;
                      break;
                    case (MR_Integer) 110:
                      if (MR_offset_streq(10, HeadVar__1_1, (MR_String) "gcc_regs_not_avail"))
                        case_num_0 = (MR_Integer) 18;
                      break;
                  }
                break;
            }
          break;
        case (MR_Integer) 104:
          if (MR_offset_streq(1, HeadVar__1_1, (MR_String) "history"))
            case_num_0 = (MR_Integer) 19;
          break;
        case (MR_Integer) 106:
          switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
            case (MR_Integer) 97:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "java"))
                case_num_0 = (MR_Integer) 20;
              break;
            case (MR_Integer) 117:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "jump"))
                case_num_0 = (MR_Integer) 21;
              break;
          }
          break;
        case (MR_Integer) 108:
          switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
            case (MR_Integer) 108:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "llds"))
                case_num_0 = (MR_Integer) 22;
              break;
            case (MR_Integer) 111:
              if (((((((((((((((((((((((MR_nth_code_unit(HeadVar__1_1, 2)) == (MR_Integer) 119)) && (((MR_nth_code_unit(HeadVar__1_1, 3)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(HeadVar__1_1, 4)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(HeadVar__1_1, 5)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(HeadVar__1_1, 6)) == (MR_Integer) 103)))) && (((MR_nth_code_unit(HeadVar__1_1, 7)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(HeadVar__1_1, 8)) == (MR_Integer) 98)))) && (((MR_nth_code_unit(HeadVar__1_1, 9)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(HeadVar__1_1, 10)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(HeadVar__1_1, 11)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(HeadVar__1_1, 12)) == (MR_Integer) 95))))
                switch (MR_nth_code_unit(HeadVar__1_1, 13)) {
                  case (MR_Integer) 97:
                    if (((((((((((MR_nth_code_unit(HeadVar__1_1, 14)) == (MR_Integer) 118)) && (((MR_nth_code_unit(HeadVar__1_1, 15)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(HeadVar__1_1, 16)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(HeadVar__1_1, 17)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(HeadVar__1_1, 18)) == (MR_Integer) 95))))
                      switch (MR_nth_code_unit(HeadVar__1_1, 19)) {
                        case (MR_Integer) 48:
                          if (MR_offset_streq(20, HeadVar__1_1, (MR_String) "low_tag_bits_avail_0"))
                            case_num_0 = (MR_Integer) 23;
                          break;
                        case (MR_Integer) 50:
                          if (MR_offset_streq(20, HeadVar__1_1, (MR_String) "low_tag_bits_avail_2"))
                            case_num_0 = (MR_Integer) 24;
                          break;
                        case (MR_Integer) 51:
                          if (MR_offset_streq(20, HeadVar__1_1, (MR_String) "low_tag_bits_avail_3"))
                            case_num_0 = (MR_Integer) 25;
                          break;
                      }
                    break;
                  case (MR_Integer) 117:
                    if (((((((MR_nth_code_unit(HeadVar__1_1, 14)) == (MR_Integer) 115)) && (((MR_nth_code_unit(HeadVar__1_1, 15)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(HeadVar__1_1, 16)) == (MR_Integer) 95))))
                      switch (MR_nth_code_unit(HeadVar__1_1, 17)) {
                        case (MR_Integer) 48:
                          if (MR_offset_streq(18, HeadVar__1_1, (MR_String) "low_tag_bits_use_0"))
                            case_num_0 = (MR_Integer) 26;
                          break;
                        case (MR_Integer) 50:
                          if (MR_offset_streq(18, HeadVar__1_1, (MR_String) "low_tag_bits_use_2"))
                            case_num_0 = (MR_Integer) 27;
                          break;
                        case (MR_Integer) 51:
                          if (MR_offset_streq(18, HeadVar__1_1, (MR_String) "low_tag_bits_use_3"))
                            case_num_0 = (MR_Integer) 28;
                          break;
                      }
                    break;
                }
              break;
          }
          break;
        case (MR_Integer) 109:
          switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
            case (MR_Integer) 101:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "mercuryfile"))
                case_num_0 = (MR_Integer) 29;
              break;
            case (MR_Integer) 108:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "mlds"))
                case_num_0 = (MR_Integer) 30;
              break;
            case (MR_Integer) 109:
              if (((MR_nth_code_unit(HeadVar__1_1, 2)) == (MR_Integer) 95))
                switch (MR_nth_code_unit(HeadVar__1_1, 3)) {
                  case (MR_Integer) 111:
                    if (((((((((((((((((MR_nth_code_unit(HeadVar__1_1, 4)) == (MR_Integer) 119)) && (((MR_nth_code_unit(HeadVar__1_1, 5)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(HeadVar__1_1, 6)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(HeadVar__1_1, 7)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(HeadVar__1_1, 8)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(HeadVar__1_1, 9)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(HeadVar__1_1, 10)) == (MR_Integer) 99)))) && (((MR_nth_code_unit(HeadVar__1_1, 11)) == (MR_Integer) 107))))
                      switch (MR_nth_code_unit(HeadVar__1_1, 12)) {
                        case (MR_Integer) 0:
                          case_num_0 = (MR_Integer) 31;
                          break;
                        case (MR_Integer) 95:
                          if (MR_offset_streq(13, HeadVar__1_1, (MR_String) "mm_own_stack_debug"))
                            case_num_0 = (MR_Integer) 32;
                          break;
                      }
                    break;
                  case (MR_Integer) 115:
                    if (((((((((((((((((((MR_nth_code_unit(HeadVar__1_1, 4)) == (MR_Integer) 116)) && (((MR_nth_code_unit(HeadVar__1_1, 5)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(HeadVar__1_1, 6)) == (MR_Integer) 99)))) && (((MR_nth_code_unit(HeadVar__1_1, 7)) == (MR_Integer) 107)))) && (((MR_nth_code_unit(HeadVar__1_1, 8)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(HeadVar__1_1, 9)) == (MR_Integer) 99)))) && (((MR_nth_code_unit(HeadVar__1_1, 10)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(HeadVar__1_1, 11)) == (MR_Integer) 112)))) && (((MR_nth_code_unit(HeadVar__1_1, 12)) == (MR_Integer) 121))))
                      switch (MR_nth_code_unit(HeadVar__1_1, 13)) {
                        case (MR_Integer) 0:
                          case_num_0 = (MR_Integer) 33;
                          break;
                        case (MR_Integer) 95:
                          if (MR_offset_streq(14, HeadVar__1_1, (MR_String) "mm_stack_copy_debug"))
                            case_num_0 = (MR_Integer) 34;
                          break;
                      }
                    break;
                }
              break;
            case (MR_Integer) 112:
              if (((((((((MR_nth_code_unit(HeadVar__1_1, 2)) == (MR_Integer) 114)) && (((MR_nth_code_unit(HeadVar__1_1, 3)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(HeadVar__1_1, 4)) == (MR_Integer) 102)))) && (((MR_nth_code_unit(HeadVar__1_1, 5)) == (MR_Integer) 95))))
                switch (MR_nth_code_unit(HeadVar__1_1, 6)) {
                  case (MR_Integer) 99:
                    if (MR_offset_streq(7, HeadVar__1_1, (MR_String) "mprof_call"))
                      case_num_0 = (MR_Integer) 35;
                    break;
                  case (MR_Integer) 109:
                    if (MR_offset_streq(7, HeadVar__1_1, (MR_String) "mprof_memory"))
                      case_num_0 = (MR_Integer) 36;
                    break;
                  case (MR_Integer) 116:
                    if (MR_offset_streq(7, HeadVar__1_1, (MR_String) "mprof_time"))
                      case_num_0 = (MR_Integer) 37;
                    break;
                }
              break;
          }
          break;
        case (MR_Integer) 110:
          switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
            case (MR_Integer) 97:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "native_thread_safe"))
                case_num_0 = (MR_Integer) 38;
              break;
            case (MR_Integer) 111:
              switch (MR_nth_code_unit(HeadVar__1_1, 2)) {
                case (MR_Integer) 95:
                  switch (MR_nth_code_unit(HeadVar__1_1, 3)) {
                    case (MR_Integer) 100:
                      if (MR_offset_streq(4, HeadVar__1_1, (MR_String) "no_deep_prof"))
                        case_num_0 = (MR_Integer) 39;
                      break;
                    case (MR_Integer) 103:
                      if (MR_offset_streq(4, HeadVar__1_1, (MR_String) "no_gc"))
                        case_num_0 = (MR_Integer) 40;
                      break;
                    case (MR_Integer) 109:
                      switch (MR_nth_code_unit(HeadVar__1_1, 4)) {
                        case (MR_Integer) 101:
                          if (MR_offset_streq(5, HeadVar__1_1, (MR_String) "no_mercuryfile"))
                            case_num_0 = (MR_Integer) 41;
                          break;
                        case (MR_Integer) 109:
                          if (MR_offset_streq(5, HeadVar__1_1, (MR_String) "no_mm"))
                            case_num_0 = (MR_Integer) 42;
                          break;
                        case (MR_Integer) 112:
                          if (((((((((MR_nth_code_unit(HeadVar__1_1, 5)) == (MR_Integer) 114)) && (((MR_nth_code_unit(HeadVar__1_1, 6)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(HeadVar__1_1, 7)) == (MR_Integer) 102)))) && (((MR_nth_code_unit(HeadVar__1_1, 8)) == (MR_Integer) 95))))
                            switch (MR_nth_code_unit(HeadVar__1_1, 9)) {
                              case (MR_Integer) 99:
                                if (MR_offset_streq(10, HeadVar__1_1, (MR_String) "no_mprof_call"))
                                  case_num_0 = (MR_Integer) 43;
                                break;
                              case (MR_Integer) 109:
                                if (MR_offset_streq(10, HeadVar__1_1, (MR_String) "no_mprof_memory"))
                                  case_num_0 = (MR_Integer) 44;
                                break;
                              case (MR_Integer) 116:
                                if (MR_offset_streq(10, HeadVar__1_1, (MR_String) "no_mprof_time"))
                                  case_num_0 = (MR_Integer) 45;
                                break;
                            }
                          break;
                      }
                      break;
                    case (MR_Integer) 112:
                      if (MR_offset_streq(4, HeadVar__1_1, (MR_String) "no_pregen"))
                        case_num_0 = (MR_Integer) 46;
                      break;
                    case (MR_Integer) 114:
                      if (((((((MR_nth_code_unit(HeadVar__1_1, 4)) == (MR_Integer) 98)) && (((MR_nth_code_unit(HeadVar__1_1, 5)) == (MR_Integer) 109)))) && (((MR_nth_code_unit(HeadVar__1_1, 6)) == (MR_Integer) 109))))
                        switch (MR_nth_code_unit(HeadVar__1_1, 7)) {
                          case (MR_Integer) 0:
                            case_num_0 = (MR_Integer) 47;
                            break;
                          case (MR_Integer) 95:
                            switch (MR_nth_code_unit(HeadVar__1_1, 8)) {
                              case (MR_Integer) 100:
                                if (MR_offset_streq(9, HeadVar__1_1, (MR_String) "no_rbmm_debug"))
                                  case_num_0 = (MR_Integer) 48;
                                break;
                              case (MR_Integer) 112:
                                if (MR_offset_streq(9, HeadVar__1_1, (MR_String) "no_rbmm_prof"))
                                  case_num_0 = (MR_Integer) 49;
                                break;
                            }
                            break;
                        }
                      break;
                    case (MR_Integer) 115:
                      switch (MR_nth_code_unit(HeadVar__1_1, 4)) {
                        case (MR_Integer) 112:
                          if (MR_offset_streq(5, HeadVar__1_1, (MR_String) "no_spf"))
                            case_num_0 = (MR_Integer) 50;
                          break;
                        case (MR_Integer) 115:
                          if (MR_offset_streq(5, HeadVar__1_1, (MR_String) "no_ssdebug"))
                            case_num_0 = (MR_Integer) 51;
                          break;
                      }
                      break;
                    case (MR_Integer) 116:
                      switch (MR_nth_code_unit(HeadVar__1_1, 4)) {
                        case (MR_Integer) 97:
                          if (MR_offset_streq(5, HeadVar__1_1, (MR_String) "no_target_debug"))
                            case_num_0 = (MR_Integer) 52;
                          break;
                        case (MR_Integer) 101:
                          if (MR_offset_streq(5, HeadVar__1_1, (MR_String) "no_term_size_prof"))
                            case_num_0 = (MR_Integer) 53;
                          break;
                        case (MR_Integer) 114:
                          if (MR_offset_streq(5, HeadVar__1_1, (MR_String) "no_trail"))
                            case_num_0 = (MR_Integer) 54;
                          break;
                        case (MR_Integer) 115:
                          if (MR_offset_streq(5, HeadVar__1_1, (MR_String) "no_tscope_prof"))
                            case_num_0 = (MR_Integer) 55;
                          break;
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 100:
                  if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "nodebug"))
                    case_num_0 = (MR_Integer) 56;
                  break;
                case (MR_Integer) 110:
                  if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "none"))
                    case_num_0 = (MR_Integer) 57;
                  break;
                case (MR_Integer) 116:
                  if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "not_thread_safe"))
                    case_num_0 = (MR_Integer) 58;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 112:
          if (MR_offset_streq(1, HeadVar__1_1, (MR_String) "pregen"))
            case_num_0 = (MR_Integer) 59;
          break;
        case (MR_Integer) 114:
          switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
            case (MR_Integer) 98:
              if (((((MR_nth_code_unit(HeadVar__1_1, 2)) == (MR_Integer) 109)) && (((MR_nth_code_unit(HeadVar__1_1, 3)) == (MR_Integer) 109))))
                switch (MR_nth_code_unit(HeadVar__1_1, 4)) {
                  case (MR_Integer) 0:
                    case_num_0 = (MR_Integer) 60;
                    break;
                  case (MR_Integer) 95:
                    switch (MR_nth_code_unit(HeadVar__1_1, 5)) {
                      case (MR_Integer) 100:
                        if (MR_offset_streq(6, HeadVar__1_1, (MR_String) "rbmm_debug"))
                          case_num_0 = (MR_Integer) 61;
                        break;
                      case (MR_Integer) 112:
                        if (MR_offset_streq(6, HeadVar__1_1, (MR_String) "rbmm_prof"))
                          case_num_0 = (MR_Integer) 62;
                        break;
                    }
                    break;
                }
              break;
            case (MR_Integer) 101:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "reg"))
                case_num_0 = (MR_Integer) 63;
              break;
          }
          break;
        case (MR_Integer) 115:
          switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
            case (MR_Integer) 105:
              if (((((((((((((((((((((((((((MR_nth_code_unit(HeadVar__1_1, 2)) == (MR_Integer) 122)) && (((MR_nth_code_unit(HeadVar__1_1, 3)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(HeadVar__1_1, 4)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(HeadVar__1_1, 5)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(HeadVar__1_1, 6)) == (MR_Integer) 102)))) && (((MR_nth_code_unit(HeadVar__1_1, 7)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(HeadVar__1_1, 8)) == (MR_Integer) 100)))) && (((MR_nth_code_unit(HeadVar__1_1, 9)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(HeadVar__1_1, 10)) == (MR_Integer) 117)))) && (((MR_nth_code_unit(HeadVar__1_1, 11)) == (MR_Integer) 98)))) && (((MR_nth_code_unit(HeadVar__1_1, 12)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(HeadVar__1_1, 13)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(HeadVar__1_1, 14)) == (MR_Integer) 95))))
                switch (MR_nth_code_unit(HeadVar__1_1, 15)) {
                  case (MR_Integer) 101:
                    if (MR_offset_streq(16, HeadVar__1_1, (MR_String) "size_of_double_eq_ptr"))
                      case_num_0 = (MR_Integer) 64;
                    break;
                  case (MR_Integer) 110:
                    if (MR_offset_streq(16, HeadVar__1_1, (MR_String) "size_of_double_ne_ptr"))
                      case_num_0 = (MR_Integer) 65;
                    break;
                }
              break;
            case (MR_Integer) 112:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "spf"))
                case_num_0 = (MR_Integer) 66;
              break;
            case (MR_Integer) 115:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "ssdebug"))
                case_num_0 = (MR_Integer) 67;
              break;
            case (MR_Integer) 116:
              switch (MR_nth_code_unit(HeadVar__1_1, 2)) {
                case (MR_Integer) 102:
                  if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "stfix"))
                    case_num_0 = (MR_Integer) 68;
                  break;
                case (MR_Integer) 115:
                  if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "stseg"))
                    case_num_0 = (MR_Integer) 69;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 116:
          switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
            case (MR_Integer) 97:
              if (((((((((((MR_nth_code_unit(HeadVar__1_1, 2)) == (MR_Integer) 114)) && (((MR_nth_code_unit(HeadVar__1_1, 3)) == (MR_Integer) 103)))) && (((MR_nth_code_unit(HeadVar__1_1, 4)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(HeadVar__1_1, 5)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(HeadVar__1_1, 6)) == (MR_Integer) 95))))
                switch (MR_nth_code_unit(HeadVar__1_1, 7)) {
                  case (MR_Integer) 100:
                    if (MR_offset_streq(8, HeadVar__1_1, (MR_String) "target_debug"))
                      case_num_0 = (MR_Integer) 70;
                    break;
                  case (MR_Integer) 110:
                    if (MR_offset_streq(8, HeadVar__1_1, (MR_String) "target_native"))
                      case_num_0 = (MR_Integer) 71;
                    break;
                }
              break;
            case (MR_Integer) 101:
              if (((((((((((((((((((((((((((MR_nth_code_unit(HeadVar__1_1, 2)) == (MR_Integer) 114)) && (((MR_nth_code_unit(HeadVar__1_1, 3)) == (MR_Integer) 109)))) && (((MR_nth_code_unit(HeadVar__1_1, 4)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(HeadVar__1_1, 5)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(HeadVar__1_1, 6)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(HeadVar__1_1, 7)) == (MR_Integer) 122)))) && (((MR_nth_code_unit(HeadVar__1_1, 8)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(HeadVar__1_1, 9)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(HeadVar__1_1, 10)) == (MR_Integer) 112)))) && (((MR_nth_code_unit(HeadVar__1_1, 11)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(HeadVar__1_1, 12)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(HeadVar__1_1, 13)) == (MR_Integer) 102)))) && (((MR_nth_code_unit(HeadVar__1_1, 14)) == (MR_Integer) 95))))
                switch (MR_nth_code_unit(HeadVar__1_1, 15)) {
                  case (MR_Integer) 99:
                    if (MR_offset_streq(16, HeadVar__1_1, (MR_String) "term_size_prof_cells"))
                      case_num_0 = (MR_Integer) 72;
                    break;
                  case (MR_Integer) 119:
                    if (MR_offset_streq(16, HeadVar__1_1, (MR_String) "term_size_prof_words"))
                      case_num_0 = (MR_Integer) 73;
                    break;
                }
              break;
            case (MR_Integer) 104:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "thread_safe"))
                case_num_0 = (MR_Integer) 74;
              break;
            case (MR_Integer) 114:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "trail"))
                case_num_0 = (MR_Integer) 75;
              break;
            case (MR_Integer) 115:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "tscope_prof"))
                case_num_0 = (MR_Integer) 76;
              break;
          }
          break;
        case (MR_Integer) 117:
          if (((((((((((((((MR_nth_code_unit(HeadVar__1_1, 1)) == (MR_Integer) 110)) && (((MR_nth_code_unit(HeadVar__1_1, 2)) == (MR_Integer) 98)))) && (((MR_nth_code_unit(HeadVar__1_1, 3)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(HeadVar__1_1, 4)) == (MR_Integer) 120)))) && (((MR_nth_code_unit(HeadVar__1_1, 5)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(HeadVar__1_1, 6)) == (MR_Integer) 100)))) && (((MR_nth_code_unit(HeadVar__1_1, 7)) == (MR_Integer) 95))))
            switch (MR_nth_code_unit(HeadVar__1_1, 8)) {
              case (MR_Integer) 100:
                if (MR_offset_streq(9, HeadVar__1_1, (MR_String) "unboxed_double"))
                  case_num_0 = (MR_Integer) 77;
                break;
              case (MR_Integer) 102:
                if (MR_offset_streq(9, HeadVar__1_1, (MR_String) "unboxed_float"))
                  case_num_0 = (MR_Integer) 78;
                break;
            }
          break;
      }
      if ((case_num_0 < (MR_Integer) 0))
        succeeded = MR_FALSE;
      else
      {
        // we found a match; look up the results
        ;
        *HeadVar__2_2 = ((&var_value_names_vector_common_3[0 + case_num_0]))->var_value_names__vector_common_type_3_0__vct_3_f_0;
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

void MR_CALL 
var_value_names__solver_var_name_2_p_1(
  MR_String * HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  *HeadVar__1_1 = ((&var_value_names_vector_common_2[0 + HeadVar__2_2]))->var_value_names__vector_common_type_2_0__vct_2_f_0;
}

MR_bool MR_CALL 
var_value_names__solver_var_name_2_p_0(
  MR_String HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  {
    MR_bool succeeded;

    {
      MR_Integer case_num_0 = (MR_Integer) -1;

      switch (MR_nth_code_unit(HeadVar__1_1, 0)) {
        case (MR_Integer) 98:
          if (MR_offset_streq(1, HeadVar__1_1, (MR_String) "backend"))
            case_num_0 = (MR_Integer) 0;
          break;
        case (MR_Integer) 100:
          if (((MR_nth_code_unit(HeadVar__1_1, 1)) == (MR_Integer) 101))
            switch (MR_nth_code_unit(HeadVar__1_1, 2)) {
              case (MR_Integer) 98:
                if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "debug"))
                  case_num_0 = (MR_Integer) 1;
                break;
              case (MR_Integer) 101:
                if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "deep_prof"))
                  case_num_0 = (MR_Integer) 2;
                break;
            }
          break;
        case (MR_Integer) 103:
          if (((MR_nth_code_unit(HeadVar__1_1, 1)) == (MR_Integer) 99))
            switch (MR_nth_code_unit(HeadVar__1_1, 2)) {
              case (MR_Integer) 0:
                case_num_0 = (MR_Integer) 3;
                break;
              case (MR_Integer) 99:
                if (((MR_nth_code_unit(HeadVar__1_1, 3)) == (MR_Integer) 95))
                  switch (MR_nth_code_unit(HeadVar__1_1, 4)) {
                    case (MR_Integer) 99:
                      if (MR_offset_streq(5, HeadVar__1_1, (MR_String) "gcc_conf"))
                        case_num_0 = (MR_Integer) 4;
                      break;
                    case (MR_Integer) 103:
                      if (MR_offset_streq(5, HeadVar__1_1, (MR_String) "gcc_gotos_avail"))
                        case_num_0 = (MR_Integer) 5;
                      break;
                    case (MR_Integer) 108:
                      if (MR_offset_streq(5, HeadVar__1_1, (MR_String) "gcc_labels_avail"))
                        case_num_0 = (MR_Integer) 6;
                      break;
                    case (MR_Integer) 114:
                      if (MR_offset_streq(5, HeadVar__1_1, (MR_String) "gcc_regs_avail"))
                        case_num_0 = (MR_Integer) 7;
                      break;
                  }
                break;
            }
          break;
        case (MR_Integer) 108:
          if (((((((((((((((((((((((((MR_nth_code_unit(HeadVar__1_1, 1)) == (MR_Integer) 111)) && (((MR_nth_code_unit(HeadVar__1_1, 2)) == (MR_Integer) 119)))) && (((MR_nth_code_unit(HeadVar__1_1, 3)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(HeadVar__1_1, 4)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(HeadVar__1_1, 5)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(HeadVar__1_1, 6)) == (MR_Integer) 103)))) && (((MR_nth_code_unit(HeadVar__1_1, 7)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(HeadVar__1_1, 8)) == (MR_Integer) 98)))) && (((MR_nth_code_unit(HeadVar__1_1, 9)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(HeadVar__1_1, 10)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(HeadVar__1_1, 11)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(HeadVar__1_1, 12)) == (MR_Integer) 95))))
            switch (MR_nth_code_unit(HeadVar__1_1, 13)) {
              case (MR_Integer) 97:
                if (MR_offset_streq(14, HeadVar__1_1, (MR_String) "low_tag_bits_avail"))
                  case_num_0 = (MR_Integer) 8;
                break;
              case (MR_Integer) 117:
                if (MR_offset_streq(14, HeadVar__1_1, (MR_String) "low_tag_bits_use"))
                  case_num_0 = (MR_Integer) 9;
                break;
            }
          break;
        case (MR_Integer) 109:
          switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
            case (MR_Integer) 101:
              if (((((MR_nth_code_unit(HeadVar__1_1, 2)) == (MR_Integer) 114)) && (((MR_nth_code_unit(HeadVar__1_1, 3)) == (MR_Integer) 99))))
                switch (MR_nth_code_unit(HeadVar__1_1, 4)) {
                  case (MR_Integer) 95:
                    if (MR_offset_streq(5, HeadVar__1_1, (MR_String) "merc_float"))
                      case_num_0 = (MR_Integer) 10;
                    break;
                  case (MR_Integer) 117:
                    if (MR_offset_streq(5, HeadVar__1_1, (MR_String) "mercuryfile"))
                      case_num_0 = (MR_Integer) 11;
                    break;
                }
              break;
            case (MR_Integer) 105:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "minmodel"))
                case_num_0 = (MR_Integer) 12;
              break;
            case (MR_Integer) 112:
              if (((((((((MR_nth_code_unit(HeadVar__1_1, 2)) == (MR_Integer) 114)) && (((MR_nth_code_unit(HeadVar__1_1, 3)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(HeadVar__1_1, 4)) == (MR_Integer) 102)))) && (((MR_nth_code_unit(HeadVar__1_1, 5)) == (MR_Integer) 95))))
                switch (MR_nth_code_unit(HeadVar__1_1, 6)) {
                  case (MR_Integer) 99:
                    if (MR_offset_streq(7, HeadVar__1_1, (MR_String) "mprof_call"))
                      case_num_0 = (MR_Integer) 13;
                    break;
                  case (MR_Integer) 109:
                    if (MR_offset_streq(7, HeadVar__1_1, (MR_String) "mprof_memory"))
                      case_num_0 = (MR_Integer) 14;
                    break;
                  case (MR_Integer) 116:
                    if (MR_offset_streq(7, HeadVar__1_1, (MR_String) "mprof_time"))
                      case_num_0 = (MR_Integer) 15;
                    break;
                }
              break;
          }
          break;
        case (MR_Integer) 112:
          if (MR_offset_streq(1, HeadVar__1_1, (MR_String) "pregen"))
            case_num_0 = (MR_Integer) 16;
          break;
        case (MR_Integer) 114:
          if (((((((MR_nth_code_unit(HeadVar__1_1, 1)) == (MR_Integer) 98)) && (((MR_nth_code_unit(HeadVar__1_1, 2)) == (MR_Integer) 109)))) && (((MR_nth_code_unit(HeadVar__1_1, 3)) == (MR_Integer) 109))))
            switch (MR_nth_code_unit(HeadVar__1_1, 4)) {
              case (MR_Integer) 0:
                case_num_0 = (MR_Integer) 17;
                break;
              case (MR_Integer) 95:
                switch (MR_nth_code_unit(HeadVar__1_1, 5)) {
                  case (MR_Integer) 100:
                    if (MR_offset_streq(6, HeadVar__1_1, (MR_String) "rbmm_debug"))
                      case_num_0 = (MR_Integer) 18;
                    break;
                  case (MR_Integer) 112:
                    if (MR_offset_streq(6, HeadVar__1_1, (MR_String) "rbmm_prof"))
                      case_num_0 = (MR_Integer) 19;
                    break;
                }
                break;
            }
          break;
        case (MR_Integer) 115:
          switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
            case (MR_Integer) 105:
              switch (MR_nth_code_unit(HeadVar__1_1, 2)) {
                case (MR_Integer) 110:
                  if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "single_prec_float"))
                    case_num_0 = (MR_Integer) 20;
                  break;
                case (MR_Integer) 122:
                  if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "size_of_double"))
                    case_num_0 = (MR_Integer) 21;
                  break;
              }
              break;
            case (MR_Integer) 115:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "ssdebug"))
                case_num_0 = (MR_Integer) 22;
              break;
            case (MR_Integer) 116:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "stack_len"))
                case_num_0 = (MR_Integer) 23;
              break;
          }
          break;
        case (MR_Integer) 116:
          switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
            case (MR_Integer) 97:
              if (((((((((MR_nth_code_unit(HeadVar__1_1, 2)) == (MR_Integer) 114)) && (((MR_nth_code_unit(HeadVar__1_1, 3)) == (MR_Integer) 103)))) && (((MR_nth_code_unit(HeadVar__1_1, 4)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(HeadVar__1_1, 5)) == (MR_Integer) 116))))
                switch (MR_nth_code_unit(HeadVar__1_1, 6)) {
                  case (MR_Integer) 0:
                    case_num_0 = (MR_Integer) 24;
                    break;
                  case (MR_Integer) 95:
                    if (MR_offset_streq(7, HeadVar__1_1, (MR_String) "target_debug"))
                      case_num_0 = (MR_Integer) 25;
                    break;
                }
              break;
            case (MR_Integer) 101:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "term_size_prof"))
                case_num_0 = (MR_Integer) 26;
              break;
            case (MR_Integer) 104:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "thread_safe"))
                case_num_0 = (MR_Integer) 27;
              break;
            case (MR_Integer) 114:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "trail"))
                case_num_0 = (MR_Integer) 28;
              break;
            case (MR_Integer) 115:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "tscope_prof"))
                case_num_0 = (MR_Integer) 29;
              break;
          }
          break;
      }
      if ((case_num_0 < (MR_Integer) 0))
        succeeded = MR_FALSE;
      else
      {
        // we found a match; look up the results
        ;
        *HeadVar__2_2 = ((&var_value_names_vector_common_1[0 + case_num_0]))->var_value_names__vector_common_type_1_0__vct_1_f_0;
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

void mercury__var_value_names__init(void)
{
}

void mercury__var_value_names__init_type_tables(void)
{
}

void mercury__var_value_names__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__var_value_names__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module var_value_names.
