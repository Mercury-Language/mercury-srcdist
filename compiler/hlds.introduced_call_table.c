/*
** Automatically generated from `introduced_call_table.m'
** by the Mercury compiler,
** version rotd-2022-02-23
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


// :- module hlds.introduced_call_table.
// :- implementation.

/*
INIT mercury__hlds__introduced_call_table__init
ENDINIT
*/

#include "hlds.introduced_call_table.mih"


#include "assoc_list.mih"
#include "builtin.mih"
#include "char.mih"
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
#include "set.mih"
#include "set_ordlist.mih"
#include "term.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "varset.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"




static MR_bool MR_CALL 
hlds__introduced_call_table__mict_table_builtin_2_p_0(
  MR_String HeadVar__1_1,
  MR_Integer HeadVar__2_2);

static MR_bool MR_CALL 
hlds__introduced_call_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_105_99_116_95_116_97_98_108_101_95_98_117_105_108_116_105_110_95_95_91_50_93_95_48_2_p_0(
  MR_String HeadVar__1_1);

static MR_bool MR_CALL 
hlds__introduced_call_table__mict_private_builtin_2_p_0(
  MR_String HeadVar__1_1,
  MR_Integer HeadVar__2_2);



struct hlds__introduced_call_table__vector_common_type_1_0_s {
  const MR_String hlds__introduced_call_table__vector_common_type_1_0__vct_1_f_0;
};

static /* final */ const struct hlds__introduced_call_table__vector_common_type_1_0_s hlds__introduced_call_table_vector_common_1[5];

struct hlds__introduced_call_table__vector_common_type_2_0_s {
  const MR_String hlds__introduced_call_table__vector_common_type_2_0__vct_2_f_0;
  const MR_Integer hlds__introduced_call_table__vector_common_type_2_0__vct_2_f_1;
};

static /* final */ const struct hlds__introduced_call_table__vector_common_type_2_0_s hlds__introduced_call_table_vector_common_2[4];




static /* final */ const struct hlds__introduced_call_table__vector_common_type_1_0_s hlds__introduced_call_table_vector_common_1[5] = {
  /* row   0 */   { (MR_String) "*" },
  /* row   1 */   { (MR_String) "unchecked_left_shift" },
  /* row   2 */   { (MR_String) "unchecked_quotient" },
  /* row   3 */   { (MR_String) "unchecked_rem" },
  /* row   4 */   { (MR_String) "unchecked_right_shift" },
};

static /* final */ const struct hlds__introduced_call_table__vector_common_type_2_0_s hlds__introduced_call_table_vector_common_2[4] = {
  /* row   0 */
  {
    (MR_String) "++",
    (MR_Integer) 0
  },
  /* row   1 */
  {
    (MR_String) "char_to_string",
    (MR_Integer) 1
  },
  /* row   2 */
  {
    (MR_String) "float_to_string",
    (MR_Integer) 2
  },
  /* row   3 */
  {
    (MR_String) "int_to_string",
    (MR_Integer) 3
  },
};





static MR_bool MR_CALL 
hlds__introduced_call_table__mict_table_builtin_2_p_0(
  MR_String HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  MR_bool succeeded;

  succeeded = hlds__introduced_call_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_105_99_116_95_116_97_98_108_101_95_98_117_105_108_116_105_110_95_95_91_50_93_95_48_2_p_0(HeadVar__1_1);
  return succeeded;
}

static MR_bool MR_CALL 
hlds__introduced_call_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_105_99_116_95_116_97_98_108_101_95_98_117_105_108_116_105_110_95_95_91_50_93_95_48_2_p_0(
  MR_String HeadVar__1_1)
{
  MR_bool succeeded;

  {
    MR_Integer case_num_0 = (MR_Integer) -1;

    if (((((((((((((MR_nth_code_unit(HeadVar__1_1, 0)) == (MR_Integer) 116)) && (((MR_nth_code_unit(HeadVar__1_1, 1)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(HeadVar__1_1, 2)) == (MR_Integer) 98)))) && (((MR_nth_code_unit(HeadVar__1_1, 3)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(HeadVar__1_1, 4)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(HeadVar__1_1, 5)) == (MR_Integer) 95))))
      switch (MR_nth_code_unit(HeadVar__1_1, 6)) {
        case (MR_Integer) 101:
          if (MR_offset_streq(7, HeadVar__1_1, (MR_String) "table_error"))
            case_num_0 = (MR_Integer) 0;
          break;
        case (MR_Integer) 105:
          if (((((MR_nth_code_unit(HeadVar__1_1, 7)) == (MR_Integer) 111)) && (((MR_nth_code_unit(HeadVar__1_1, 8)) == (MR_Integer) 95))))
            switch (MR_nth_code_unit(HeadVar__1_1, 9)) {
              case (MR_Integer) 99:
                if (MR_offset_streq(10, HeadVar__1_1, (MR_String) "table_io_copy_io_state"))
                  case_num_0 = (MR_Integer) 1;
                break;
              case (MR_Integer) 104:
                if (MR_offset_streq(10, HeadVar__1_1, (MR_String) "table_io_has_occurred"))
                  case_num_0 = (MR_Integer) 2;
                break;
              case (MR_Integer) 105:
                if (MR_offset_streq(10, HeadVar__1_1, (MR_String) "table_io_in_range"))
                  case_num_0 = (MR_Integer) 3;
                break;
              case (MR_Integer) 108:
                if (MR_offset_streq(10, HeadVar__1_1, (MR_String) "table_io_left_bracket_unitized_goal"))
                  case_num_0 = (MR_Integer) 4;
                break;
              case (MR_Integer) 114:
                if (MR_offset_streq(10, HeadVar__1_1, (MR_String) "table_io_right_bracket_unitized_goal"))
                  case_num_0 = (MR_Integer) 5;
                break;
            }
          break;
        case (MR_Integer) 108:
          if (((((MR_nth_code_unit(HeadVar__1_1, 7)) == (MR_Integer) 111)) && (((MR_nth_code_unit(HeadVar__1_1, 8)) == (MR_Integer) 111))))
            switch (MR_nth_code_unit(HeadVar__1_1, 9)) {
              case (MR_Integer) 107:
                if (((((((MR_nth_code_unit(HeadVar__1_1, 10)) == (MR_Integer) 117)) && (((MR_nth_code_unit(HeadVar__1_1, 11)) == (MR_Integer) 112)))) && (((MR_nth_code_unit(HeadVar__1_1, 12)) == (MR_Integer) 95))))
                  switch (MR_nth_code_unit(HeadVar__1_1, 13)) {
                    case (MR_Integer) 105:
                      if (((((((((((((MR_nth_code_unit(HeadVar__1_1, 14)) == (MR_Integer) 110)) && (((MR_nth_code_unit(HeadVar__1_1, 15)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(HeadVar__1_1, 16)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(HeadVar__1_1, 17)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(HeadVar__1_1, 18)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(HeadVar__1_1, 19)) == (MR_Integer) 95))))
                        switch (MR_nth_code_unit(HeadVar__1_1, 20)) {
                          case (MR_Integer) 97:
                            if (MR_offset_streq(21, HeadVar__1_1, (MR_String) "table_lookup_insert_addr"))
                              case_num_0 = (MR_Integer) 6;
                            break;
                          case (MR_Integer) 99:
                            if (MR_offset_streq(21, HeadVar__1_1, (MR_String) "table_lookup_insert_char"))
                              case_num_0 = (MR_Integer) 7;
                            break;
                          case (MR_Integer) 101:
                            if (MR_offset_streq(21, HeadVar__1_1, (MR_String) "table_lookup_insert_enum"))
                              case_num_0 = (MR_Integer) 8;
                            break;
                          case (MR_Integer) 102:
                            switch (MR_nth_code_unit(HeadVar__1_1, 21)) {
                              case (MR_Integer) 108:
                                if (MR_offset_streq(22, HeadVar__1_1, (MR_String) "table_lookup_insert_float"))
                                  case_num_0 = (MR_Integer) 9;
                                break;
                              case (MR_Integer) 111:
                                if (MR_offset_streq(22, HeadVar__1_1, (MR_String) "table_lookup_insert_foreign_enum"))
                                  case_num_0 = (MR_Integer) 10;
                                break;
                            }
                            break;
                          case (MR_Integer) 103:
                            if (MR_offset_streq(21, HeadVar__1_1, (MR_String) "table_lookup_insert_gen"))
                              case_num_0 = (MR_Integer) 11;
                            break;
                          case (MR_Integer) 105:
                            if (MR_offset_streq(21, HeadVar__1_1, (MR_String) "table_lookup_insert_int"))
                              case_num_0 = (MR_Integer) 12;
                            break;
                          case (MR_Integer) 112:
                            if (((((((MR_nth_code_unit(HeadVar__1_1, 21)) == (MR_Integer) 111)) && (((MR_nth_code_unit(HeadVar__1_1, 22)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(HeadVar__1_1, 23)) == (MR_Integer) 121))))
                              switch (MR_nth_code_unit(HeadVar__1_1, 24)) {
                                case (MR_Integer) 0:
                                  case_num_0 = (MR_Integer) 13;
                                  break;
                                case (MR_Integer) 95:
                                  if (MR_offset_streq(25, HeadVar__1_1, (MR_String) "table_lookup_insert_poly_addr"))
                                    case_num_0 = (MR_Integer) 14;
                                  break;
                              }
                            break;
                          case (MR_Integer) 115:
                            if (((MR_nth_code_unit(HeadVar__1_1, 21)) == (MR_Integer) 116))
                              switch (MR_nth_code_unit(HeadVar__1_1, 22)) {
                                case (MR_Integer) 97:
                                  if (MR_offset_streq(23, HeadVar__1_1, (MR_String) "table_lookup_insert_start_int"))
                                    case_num_0 = (MR_Integer) 15;
                                  break;
                                case (MR_Integer) 114:
                                  if (MR_offset_streq(23, HeadVar__1_1, (MR_String) "table_lookup_insert_string"))
                                    case_num_0 = (MR_Integer) 16;
                                  break;
                              }
                            break;
                          case (MR_Integer) 116:
                            if (((((((MR_nth_code_unit(HeadVar__1_1, 21)) == (MR_Integer) 121)) && (((MR_nth_code_unit(HeadVar__1_1, 22)) == (MR_Integer) 112)))) && (((MR_nth_code_unit(HeadVar__1_1, 23)) == (MR_Integer) 101))))
                              switch (MR_nth_code_unit(HeadVar__1_1, 24)) {
                                case (MR_Integer) 99:
                                  if (MR_offset_streq(25, HeadVar__1_1, (MR_String) "table_lookup_insert_typeclassinfo"))
                                    case_num_0 = (MR_Integer) 17;
                                  break;
                                case (MR_Integer) 105:
                                  if (MR_offset_streq(25, HeadVar__1_1, (MR_String) "table_lookup_insert_typeinfo"))
                                    case_num_0 = (MR_Integer) 18;
                                  break;
                              }
                            break;
                        }
                      break;
                    case (MR_Integer) 114:
                      if (((((((((((((((MR_nth_code_unit(HeadVar__1_1, 14)) == (MR_Integer) 101)) && (((MR_nth_code_unit(HeadVar__1_1, 15)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(HeadVar__1_1, 16)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(HeadVar__1_1, 17)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(HeadVar__1_1, 18)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(HeadVar__1_1, 19)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(HeadVar__1_1, 20)) == (MR_Integer) 95))))
                        switch (MR_nth_code_unit(HeadVar__1_1, 21)) {
                          case (MR_Integer) 97:
                            if (MR_offset_streq(22, HeadVar__1_1, (MR_String) "table_lookup_restore_any_answer"))
                              case_num_0 = (MR_Integer) 19;
                            break;
                          case (MR_Integer) 99:
                            if (MR_offset_streq(22, HeadVar__1_1, (MR_String) "table_lookup_restore_char_answer"))
                              case_num_0 = (MR_Integer) 20;
                            break;
                          case (MR_Integer) 102:
                            if (MR_offset_streq(22, HeadVar__1_1, (MR_String) "table_lookup_restore_float_answer"))
                              case_num_0 = (MR_Integer) 21;
                            break;
                          case (MR_Integer) 105:
                            switch (MR_nth_code_unit(HeadVar__1_1, 22)) {
                              case (MR_Integer) 110:
                                if (MR_offset_streq(23, HeadVar__1_1, (MR_String) "table_lookup_restore_int_answer"))
                                  case_num_0 = (MR_Integer) 22;
                                break;
                              case (MR_Integer) 111:
                                if (MR_offset_streq(23, HeadVar__1_1, (MR_String) "table_lookup_restore_io_state_answer"))
                                  case_num_0 = (MR_Integer) 23;
                                break;
                            }
                            break;
                          case (MR_Integer) 115:
                            if (MR_offset_streq(22, HeadVar__1_1, (MR_String) "table_lookup_restore_string_answer"))
                              case_num_0 = (MR_Integer) 24;
                            break;
                        }
                      break;
                    case (MR_Integer) 115:
                      if (((((((((MR_nth_code_unit(HeadVar__1_1, 14)) == (MR_Integer) 97)) && (((MR_nth_code_unit(HeadVar__1_1, 15)) == (MR_Integer) 118)))) && (((MR_nth_code_unit(HeadVar__1_1, 16)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(HeadVar__1_1, 17)) == (MR_Integer) 95))))
                        switch (MR_nth_code_unit(HeadVar__1_1, 18)) {
                          case (MR_Integer) 97:
                            if (MR_offset_streq(19, HeadVar__1_1, (MR_String) "table_lookup_save_any_answer"))
                              case_num_0 = (MR_Integer) 25;
                            break;
                          case (MR_Integer) 99:
                            if (MR_offset_streq(19, HeadVar__1_1, (MR_String) "table_lookup_save_char_answer"))
                              case_num_0 = (MR_Integer) 26;
                            break;
                          case (MR_Integer) 102:
                            if (MR_offset_streq(19, HeadVar__1_1, (MR_String) "table_lookup_save_float_answer"))
                              case_num_0 = (MR_Integer) 27;
                            break;
                          case (MR_Integer) 105:
                            switch (MR_nth_code_unit(HeadVar__1_1, 19)) {
                              case (MR_Integer) 110:
                                if (MR_offset_streq(20, HeadVar__1_1, (MR_String) "table_lookup_save_int_answer"))
                                  case_num_0 = (MR_Integer) 28;
                                break;
                              case (MR_Integer) 111:
                                if (MR_offset_streq(20, HeadVar__1_1, (MR_String) "table_lookup_save_io_state_answer"))
                                  case_num_0 = (MR_Integer) 29;
                                break;
                            }
                            break;
                          case (MR_Integer) 115:
                            if (MR_offset_streq(19, HeadVar__1_1, (MR_String) "table_lookup_save_string_answer"))
                              case_num_0 = (MR_Integer) 30;
                            break;
                        }
                      break;
                  }
                break;
              case (MR_Integer) 112:
                if (((MR_nth_code_unit(HeadVar__1_1, 10)) == (MR_Integer) 95))
                  switch (MR_nth_code_unit(HeadVar__1_1, 11)) {
                    case (MR_Integer) 109:
                      if (((((((((((((((MR_nth_code_unit(HeadVar__1_1, 12)) == (MR_Integer) 97)) && (((MR_nth_code_unit(HeadVar__1_1, 13)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(HeadVar__1_1, 14)) == (MR_Integer) 107)))) && (((MR_nth_code_unit(HeadVar__1_1, 15)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(HeadVar__1_1, 16)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(HeadVar__1_1, 17)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(HeadVar__1_1, 18)) == (MR_Integer) 95))))
                        switch (MR_nth_code_unit(HeadVar__1_1, 19)) {
                          case (MR_Integer) 97:
                            if (MR_offset_streq(20, HeadVar__1_1, (MR_String) "table_loop_mark_as_active_and_fail"))
                              case_num_0 = (MR_Integer) 31;
                            break;
                          case (MR_Integer) 105:
                            if (((((((((((((((MR_nth_code_unit(HeadVar__1_1, 20)) == (MR_Integer) 110)) && (((MR_nth_code_unit(HeadVar__1_1, 21)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(HeadVar__1_1, 22)) == (MR_Integer) 99)))) && (((MR_nth_code_unit(HeadVar__1_1, 23)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(HeadVar__1_1, 24)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(HeadVar__1_1, 25)) == (MR_Integer) 118)))) && (((MR_nth_code_unit(HeadVar__1_1, 26)) == (MR_Integer) 101))))
                              switch (MR_nth_code_unit(HeadVar__1_1, 27)) {
                                case (MR_Integer) 0:
                                  case_num_0 = (MR_Integer) 32;
                                  break;
                                case (MR_Integer) 95:
                                  if (MR_offset_streq(28, HeadVar__1_1, (MR_String) "table_loop_mark_as_inactive_and_fail"))
                                    case_num_0 = (MR_Integer) 33;
                                  break;
                              }
                            break;
                        }
                      break;
                    case (MR_Integer) 115:
                      if (((((((((MR_nth_code_unit(HeadVar__1_1, 12)) == (MR_Integer) 101)) && (((MR_nth_code_unit(HeadVar__1_1, 13)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(HeadVar__1_1, 14)) == (MR_Integer) 117)))) && (((MR_nth_code_unit(HeadVar__1_1, 15)) == (MR_Integer) 112))))
                        switch (MR_nth_code_unit(HeadVar__1_1, 16)) {
                          case (MR_Integer) 0:
                            case_num_0 = (MR_Integer) 34;
                            break;
                          case (MR_Integer) 95:
                            if (MR_offset_streq(17, HeadVar__1_1, (MR_String) "table_loop_setup_shortcut"))
                              case_num_0 = (MR_Integer) 35;
                            break;
                        }
                      break;
                  }
                break;
            }
          break;
        case (MR_Integer) 109:
          switch (MR_nth_code_unit(HeadVar__1_1, 7)) {
            case (MR_Integer) 101:
              if (((((((MR_nth_code_unit(HeadVar__1_1, 8)) == (MR_Integer) 109)) && (((MR_nth_code_unit(HeadVar__1_1, 9)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(HeadVar__1_1, 10)) == (MR_Integer) 95))))
                switch (MR_nth_code_unit(HeadVar__1_1, 11)) {
                  case (MR_Integer) 99:
                    if (MR_offset_streq(12, HeadVar__1_1, (MR_String) "table_memo_create_answer_block"))
                      case_num_0 = (MR_Integer) 36;
                    break;
                  case (MR_Integer) 100:
                    if (((((((((((((((((MR_nth_code_unit(HeadVar__1_1, 12)) == (MR_Integer) 101)) && (((MR_nth_code_unit(HeadVar__1_1, 13)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(HeadVar__1_1, 14)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(HeadVar__1_1, 15)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(HeadVar__1_1, 16)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(HeadVar__1_1, 17)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(HeadVar__1_1, 18)) == (MR_Integer) 117)))) && (((MR_nth_code_unit(HeadVar__1_1, 19)) == (MR_Integer) 112))))
                      switch (MR_nth_code_unit(HeadVar__1_1, 20)) {
                        case (MR_Integer) 0:
                          case_num_0 = (MR_Integer) 37;
                          break;
                        case (MR_Integer) 95:
                          if (MR_offset_streq(21, HeadVar__1_1, (MR_String) "table_memo_det_setup_shortcut"))
                            case_num_0 = (MR_Integer) 38;
                          break;
                      }
                    break;
                  case (MR_Integer) 103:
                    if (MR_offset_streq(12, HeadVar__1_1, (MR_String) "table_memo_get_answer_block"))
                      case_num_0 = (MR_Integer) 39;
                    break;
                  case (MR_Integer) 109:
                    if (((((((((((((((MR_nth_code_unit(HeadVar__1_1, 12)) == (MR_Integer) 97)) && (((MR_nth_code_unit(HeadVar__1_1, 13)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(HeadVar__1_1, 14)) == (MR_Integer) 107)))) && (((MR_nth_code_unit(HeadVar__1_1, 15)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(HeadVar__1_1, 16)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(HeadVar__1_1, 17)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(HeadVar__1_1, 18)) == (MR_Integer) 95))))
                      switch (MR_nth_code_unit(HeadVar__1_1, 19)) {
                        case (MR_Integer) 97:
                          if (MR_offset_streq(20, HeadVar__1_1, (MR_String) "table_memo_mark_as_active_and_fail"))
                            case_num_0 = (MR_Integer) 40;
                          break;
                        case (MR_Integer) 99:
                          if (MR_offset_streq(20, HeadVar__1_1, (MR_String) "table_memo_mark_as_complete_and_fail"))
                            case_num_0 = (MR_Integer) 41;
                          break;
                        case (MR_Integer) 102:
                          if (MR_offset_streq(20, HeadVar__1_1, (MR_String) "table_memo_mark_as_failed"))
                            case_num_0 = (MR_Integer) 42;
                          break;
                        case (MR_Integer) 105:
                          if (MR_offset_streq(20, HeadVar__1_1, (MR_String) "table_memo_mark_as_incomplete"))
                            case_num_0 = (MR_Integer) 43;
                          break;
                        case (MR_Integer) 115:
                          if (MR_offset_streq(20, HeadVar__1_1, (MR_String) "table_memo_mark_as_succeeded"))
                            case_num_0 = (MR_Integer) 44;
                          break;
                      }
                    break;
                  case (MR_Integer) 110:
                    if (((((((MR_nth_code_unit(HeadVar__1_1, 12)) == (MR_Integer) 111)) && (((MR_nth_code_unit(HeadVar__1_1, 13)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(HeadVar__1_1, 14)) == (MR_Integer) 95))))
                      switch (MR_nth_code_unit(HeadVar__1_1, 15)) {
                        case (MR_Integer) 97:
                          if (((((((((((((((((((((((((((((((((((((((((((((MR_nth_code_unit(HeadVar__1_1, 16)) == (MR_Integer) 110)) && (((MR_nth_code_unit(HeadVar__1_1, 17)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(HeadVar__1_1, 18)) == (MR_Integer) 119)))) && (((MR_nth_code_unit(HeadVar__1_1, 19)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(HeadVar__1_1, 20)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(HeadVar__1_1, 21)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(HeadVar__1_1, 22)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(HeadVar__1_1, 23)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(HeadVar__1_1, 24)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(HeadVar__1_1, 25)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(HeadVar__1_1, 26)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(HeadVar__1_1, 27)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(HeadVar__1_1, 28)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(HeadVar__1_1, 29)) == (MR_Integer) 100)))) && (((MR_nth_code_unit(HeadVar__1_1, 30)) == (MR_Integer) 117)))) && (((MR_nth_code_unit(HeadVar__1_1, 31)) == (MR_Integer) 112)))) && (((MR_nth_code_unit(HeadVar__1_1, 32)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(HeadVar__1_1, 33)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(HeadVar__1_1, 34)) == (MR_Integer) 99)))) && (((MR_nth_code_unit(HeadVar__1_1, 35)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(HeadVar__1_1, 36)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(HeadVar__1_1, 37)) == (MR_Integer) 101))))
                            switch (MR_nth_code_unit(HeadVar__1_1, 38)) {
                              case (MR_Integer) 0:
                                case_num_0 = (MR_Integer) 45;
                                break;
                              case (MR_Integer) 95:
                                if (MR_offset_streq(39, HeadVar__1_1, (MR_String) "table_memo_non_answer_is_not_duplicate_shortcut"))
                                  case_num_0 = (MR_Integer) 46;
                                break;
                            }
                          break;
                        case (MR_Integer) 103:
                          if (MR_offset_streq(16, HeadVar__1_1, (MR_String) "table_memo_non_get_answer_table"))
                            case_num_0 = (MR_Integer) 47;
                          break;
                        case (MR_Integer) 114:
                          if (MR_offset_streq(16, HeadVar__1_1, (MR_String) "table_memo_non_return_all_shortcut"))
                            case_num_0 = (MR_Integer) 48;
                          break;
                        case (MR_Integer) 115:
                          if (MR_offset_streq(16, HeadVar__1_1, (MR_String) "table_memo_non_setup"))
                            case_num_0 = (MR_Integer) 49;
                          break;
                      }
                    break;
                  case (MR_Integer) 114:
                    if (((((((((((((((((((((((((((((((((((((MR_nth_code_unit(HeadVar__1_1, 12)) == (MR_Integer) 101)) && (((MR_nth_code_unit(HeadVar__1_1, 13)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(HeadVar__1_1, 14)) == (MR_Integer) 117)))) && (((MR_nth_code_unit(HeadVar__1_1, 15)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(HeadVar__1_1, 16)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(HeadVar__1_1, 17)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(HeadVar__1_1, 18)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(HeadVar__1_1, 19)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(HeadVar__1_1, 20)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(HeadVar__1_1, 21)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(HeadVar__1_1, 22)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(HeadVar__1_1, 23)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(HeadVar__1_1, 24)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(HeadVar__1_1, 25)) == (MR_Integer) 119)))) && (((MR_nth_code_unit(HeadVar__1_1, 26)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(HeadVar__1_1, 27)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(HeadVar__1_1, 28)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(HeadVar__1_1, 29)) == (MR_Integer) 95))))
                      switch (MR_nth_code_unit(HeadVar__1_1, 30)) {
                        case (MR_Integer) 109:
                          if (MR_offset_streq(31, HeadVar__1_1, (MR_String) "table_memo_return_all_answers_multi"))
                            case_num_0 = (MR_Integer) 50;
                          break;
                        case (MR_Integer) 110:
                          if (MR_offset_streq(31, HeadVar__1_1, (MR_String) "table_memo_return_all_answers_nondet"))
                            case_num_0 = (MR_Integer) 51;
                          break;
                      }
                    break;
                  case (MR_Integer) 115:
                    if (((((((((((((((((((MR_nth_code_unit(HeadVar__1_1, 12)) == (MR_Integer) 101)) && (((MR_nth_code_unit(HeadVar__1_1, 13)) == (MR_Integer) 109)))) && (((MR_nth_code_unit(HeadVar__1_1, 14)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(HeadVar__1_1, 15)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(HeadVar__1_1, 16)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(HeadVar__1_1, 17)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(HeadVar__1_1, 18)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(HeadVar__1_1, 19)) == (MR_Integer) 117)))) && (((MR_nth_code_unit(HeadVar__1_1, 20)) == (MR_Integer) 112))))
                      switch (MR_nth_code_unit(HeadVar__1_1, 21)) {
                        case (MR_Integer) 0:
                          case_num_0 = (MR_Integer) 52;
                          break;
                        case (MR_Integer) 95:
                          if (MR_offset_streq(22, HeadVar__1_1, (MR_String) "table_memo_semi_setup_shortcut"))
                            case_num_0 = (MR_Integer) 53;
                          break;
                      }
                    break;
                }
              break;
            case (MR_Integer) 109:
              switch (MR_nth_code_unit(HeadVar__1_1, 8)) {
                case (MR_Integer) 95:
                  switch (MR_nth_code_unit(HeadVar__1_1, 9)) {
                    case (MR_Integer) 97:
                      if (((((((((((((((((((((((((((((((((((((((((((((MR_nth_code_unit(HeadVar__1_1, 10)) == (MR_Integer) 110)) && (((MR_nth_code_unit(HeadVar__1_1, 11)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(HeadVar__1_1, 12)) == (MR_Integer) 119)))) && (((MR_nth_code_unit(HeadVar__1_1, 13)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(HeadVar__1_1, 14)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(HeadVar__1_1, 15)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(HeadVar__1_1, 16)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(HeadVar__1_1, 17)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(HeadVar__1_1, 18)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(HeadVar__1_1, 19)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(HeadVar__1_1, 20)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(HeadVar__1_1, 21)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(HeadVar__1_1, 22)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(HeadVar__1_1, 23)) == (MR_Integer) 100)))) && (((MR_nth_code_unit(HeadVar__1_1, 24)) == (MR_Integer) 117)))) && (((MR_nth_code_unit(HeadVar__1_1, 25)) == (MR_Integer) 112)))) && (((MR_nth_code_unit(HeadVar__1_1, 26)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(HeadVar__1_1, 27)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(HeadVar__1_1, 28)) == (MR_Integer) 99)))) && (((MR_nth_code_unit(HeadVar__1_1, 29)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(HeadVar__1_1, 30)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(HeadVar__1_1, 31)) == (MR_Integer) 101))))
                        switch (MR_nth_code_unit(HeadVar__1_1, 32)) {
                          case (MR_Integer) 0:
                            case_num_0 = (MR_Integer) 54;
                            break;
                          case (MR_Integer) 95:
                            if (MR_offset_streq(33, HeadVar__1_1, (MR_String) "table_mm_answer_is_not_duplicate_shortcut"))
                              case_num_0 = (MR_Integer) 55;
                            break;
                        }
                      break;
                    case (MR_Integer) 99:
                      switch (MR_nth_code_unit(HeadVar__1_1, 10)) {
                        case (MR_Integer) 111:
                          if (MR_offset_streq(11, HeadVar__1_1, (MR_String) "table_mm_completion"))
                            case_num_0 = (MR_Integer) 56;
                          break;
                        case (MR_Integer) 114:
                          if (MR_offset_streq(11, HeadVar__1_1, (MR_String) "table_mm_create_answer_block"))
                            case_num_0 = (MR_Integer) 57;
                          break;
                      }
                      break;
                    case (MR_Integer) 102:
                      if (MR_offset_streq(10, HeadVar__1_1, (MR_String) "table_mm_fill_answer_block_shortcut"))
                        case_num_0 = (MR_Integer) 58;
                      break;
                    case (MR_Integer) 103:
                      if (MR_offset_streq(10, HeadVar__1_1, (MR_String) "table_mm_get_answer_table"))
                        case_num_0 = (MR_Integer) 59;
                      break;
                    case (MR_Integer) 114:
                      if (((((((((((((((((((((MR_nth_code_unit(HeadVar__1_1, 10)) == (MR_Integer) 101)) && (((MR_nth_code_unit(HeadVar__1_1, 11)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(HeadVar__1_1, 12)) == (MR_Integer) 117)))) && (((MR_nth_code_unit(HeadVar__1_1, 13)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(HeadVar__1_1, 14)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(HeadVar__1_1, 15)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(HeadVar__1_1, 16)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(HeadVar__1_1, 17)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(HeadVar__1_1, 18)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(HeadVar__1_1, 19)) == (MR_Integer) 95))))
                        switch (MR_nth_code_unit(HeadVar__1_1, 20)) {
                          case (MR_Integer) 109:
                            if (MR_offset_streq(21, HeadVar__1_1, (MR_String) "table_mm_return_all_multi"))
                              case_num_0 = (MR_Integer) 60;
                            break;
                          case (MR_Integer) 110:
                            if (MR_offset_streq(21, HeadVar__1_1, (MR_String) "table_mm_return_all_nondet"))
                              case_num_0 = (MR_Integer) 61;
                            break;
                          case (MR_Integer) 115:
                            if (MR_offset_streq(21, HeadVar__1_1, (MR_String) "table_mm_return_all_shortcut"))
                              case_num_0 = (MR_Integer) 62;
                            break;
                        }
                      break;
                    case (MR_Integer) 115:
                      switch (MR_nth_code_unit(HeadVar__1_1, 10)) {
                        case (MR_Integer) 101:
                          if (MR_offset_streq(11, HeadVar__1_1, (MR_String) "table_mm_setup"))
                            case_num_0 = (MR_Integer) 63;
                          break;
                        case (MR_Integer) 117:
                          if (MR_offset_streq(11, HeadVar__1_1, (MR_String) "table_mm_suspend_consumer"))
                            case_num_0 = (MR_Integer) 64;
                          break;
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 111:
                  if (((((MR_nth_code_unit(HeadVar__1_1, 9)) == (MR_Integer) 115)) && (((MR_nth_code_unit(HeadVar__1_1, 10)) == (MR_Integer) 95))))
                    switch (MR_nth_code_unit(HeadVar__1_1, 11)) {
                      case (MR_Integer) 97:
                        if (((((((((((((((((((((((((((((((((((((((((((((MR_nth_code_unit(HeadVar__1_1, 12)) == (MR_Integer) 110)) && (((MR_nth_code_unit(HeadVar__1_1, 13)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(HeadVar__1_1, 14)) == (MR_Integer) 119)))) && (((MR_nth_code_unit(HeadVar__1_1, 15)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(HeadVar__1_1, 16)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(HeadVar__1_1, 17)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(HeadVar__1_1, 18)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(HeadVar__1_1, 19)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(HeadVar__1_1, 20)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(HeadVar__1_1, 21)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(HeadVar__1_1, 22)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(HeadVar__1_1, 23)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(HeadVar__1_1, 24)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(HeadVar__1_1, 25)) == (MR_Integer) 100)))) && (((MR_nth_code_unit(HeadVar__1_1, 26)) == (MR_Integer) 117)))) && (((MR_nth_code_unit(HeadVar__1_1, 27)) == (MR_Integer) 112)))) && (((MR_nth_code_unit(HeadVar__1_1, 28)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(HeadVar__1_1, 29)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(HeadVar__1_1, 30)) == (MR_Integer) 99)))) && (((MR_nth_code_unit(HeadVar__1_1, 31)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(HeadVar__1_1, 32)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(HeadVar__1_1, 33)) == (MR_Integer) 101))))
                          switch (MR_nth_code_unit(HeadVar__1_1, 34)) {
                            case (MR_Integer) 0:
                              case_num_0 = (MR_Integer) 65;
                              break;
                            case (MR_Integer) 95:
                              if (MR_offset_streq(35, HeadVar__1_1, (MR_String) "table_mmos_answer_is_not_duplicate_shortcut"))
                                case_num_0 = (MR_Integer) 66;
                              break;
                          }
                        break;
                      case (MR_Integer) 99:
                        switch (MR_nth_code_unit(HeadVar__1_1, 12)) {
                          case (MR_Integer) 111:
                            switch (MR_nth_code_unit(HeadVar__1_1, 13)) {
                              case (MR_Integer) 109:
                                if (MR_offset_streq(14, HeadVar__1_1, (MR_String) "table_mmos_completion"))
                                  case_num_0 = (MR_Integer) 67;
                                break;
                              case (MR_Integer) 110:
                                if (((((((((((((((((((((((((((((((((((MR_nth_code_unit(HeadVar__1_1, 14)) == (MR_Integer) 115)) && (((MR_nth_code_unit(HeadVar__1_1, 15)) == (MR_Integer) 117)))) && (((MR_nth_code_unit(HeadVar__1_1, 16)) == (MR_Integer) 109)))) && (((MR_nth_code_unit(HeadVar__1_1, 17)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(HeadVar__1_1, 18)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(HeadVar__1_1, 19)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(HeadVar__1_1, 20)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(HeadVar__1_1, 21)) == (MR_Integer) 120)))) && (((MR_nth_code_unit(HeadVar__1_1, 22)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(HeadVar__1_1, 23)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(HeadVar__1_1, 24)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(HeadVar__1_1, 25)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(HeadVar__1_1, 26)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(HeadVar__1_1, 27)) == (MR_Integer) 119)))) && (((MR_nth_code_unit(HeadVar__1_1, 28)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(HeadVar__1_1, 29)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(HeadVar__1_1, 30)) == (MR_Integer) 95))))
                                  switch (MR_nth_code_unit(HeadVar__1_1, 31)) {
                                    case (MR_Integer) 109:
                                      if (MR_offset_streq(32, HeadVar__1_1, (MR_String) "table_mmos_consume_next_answer_multi"))
                                        case_num_0 = (MR_Integer) 68;
                                      break;
                                    case (MR_Integer) 110:
                                      if (MR_offset_streq(32, HeadVar__1_1, (MR_String) "table_mmos_consume_next_answer_nondet"))
                                        case_num_0 = (MR_Integer) 69;
                                      break;
                                  }
                                break;
                            }
                            break;
                          case (MR_Integer) 114:
                            if (MR_offset_streq(13, HeadVar__1_1, (MR_String) "table_mmos_create_answer_block"))
                              case_num_0 = (MR_Integer) 70;
                            break;
                        }
                        break;
                      case (MR_Integer) 112:
                        if (MR_offset_streq(12, HeadVar__1_1, (MR_String) "table_mmos_pickup_inputs"))
                          case_num_0 = (MR_Integer) 71;
                        break;
                      case (MR_Integer) 114:
                        if (((MR_nth_code_unit(HeadVar__1_1, 12)) == (MR_Integer) 101))
                          switch (MR_nth_code_unit(HeadVar__1_1, 13)) {
                            case (MR_Integer) 115:
                              if (MR_offset_streq(14, HeadVar__1_1, (MR_String) "table_mmos_restore_answers"))
                                case_num_0 = (MR_Integer) 72;
                              break;
                            case (MR_Integer) 116:
                              if (MR_offset_streq(14, HeadVar__1_1, (MR_String) "table_mmos_return_answer"))
                                case_num_0 = (MR_Integer) 73;
                              break;
                          }
                        break;
                      case (MR_Integer) 115:
                        switch (MR_nth_code_unit(HeadVar__1_1, 12)) {
                          case (MR_Integer) 97:
                            if (MR_offset_streq(13, HeadVar__1_1, (MR_String) "table_mmos_save_inputs"))
                              case_num_0 = (MR_Integer) 74;
                            break;
                          case (MR_Integer) 101:
                            if (MR_offset_streq(13, HeadVar__1_1, (MR_String) "table_mmos_setup_consumer"))
                              case_num_0 = (MR_Integer) 75;
                            break;
                        }
                        break;
                    }
                  break;
              }
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
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
hlds__introduced_call_table__mict_private_builtin_2_p_0(
  MR_String HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  MR_bool succeeded;

  {
    MR_Integer case_num_0 = (MR_Integer) -1;

    switch (MR_nth_code_unit(HeadVar__1_1, 0)) {
      case (MR_Integer) 98:
        if (((((((((((((((MR_nth_code_unit(HeadVar__1_1, 1)) == (MR_Integer) 117)) && (((MR_nth_code_unit(HeadVar__1_1, 2)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(HeadVar__1_1, 3)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(HeadVar__1_1, 4)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(HeadVar__1_1, 5)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(HeadVar__1_1, 6)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(HeadVar__1_1, 7)) == (MR_Integer) 95))))
          switch (MR_nth_code_unit(HeadVar__1_1, 8)) {
            case (MR_Integer) 99:
              if (((((((((((((((((MR_nth_code_unit(HeadVar__1_1, 9)) == (MR_Integer) 111)) && (((MR_nth_code_unit(HeadVar__1_1, 10)) == (MR_Integer) 109)))) && (((MR_nth_code_unit(HeadVar__1_1, 11)) == (MR_Integer) 112)))) && (((MR_nth_code_unit(HeadVar__1_1, 12)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(HeadVar__1_1, 13)) == (MR_Integer) 117)))) && (((MR_nth_code_unit(HeadVar__1_1, 14)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(HeadVar__1_1, 15)) == (MR_Integer) 100)))) && (((MR_nth_code_unit(HeadVar__1_1, 16)) == (MR_Integer) 95))))
                switch (MR_nth_code_unit(HeadVar__1_1, 17)) {
                  case (MR_Integer) 101:
                    if (MR_offset_streq(18, HeadVar__1_1, (MR_String) "builtin_compound_eq"))
                      case_num_0 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 108:
                    if (MR_offset_streq(18, HeadVar__1_1, (MR_String) "builtin_compound_lt"))
                      case_num_0 = (MR_Integer) 1;
                    break;
                }
              break;
            case (MR_Integer) 105:
              if (((((MR_nth_code_unit(HeadVar__1_1, 9)) == (MR_Integer) 110)) && (((MR_nth_code_unit(HeadVar__1_1, 10)) == (MR_Integer) 116))))
                switch (MR_nth_code_unit(HeadVar__1_1, 11)) {
                  case (MR_Integer) 49:
                    if (((((MR_nth_code_unit(HeadVar__1_1, 12)) == (MR_Integer) 54)) && (((MR_nth_code_unit(HeadVar__1_1, 13)) == (MR_Integer) 95))))
                      switch (MR_nth_code_unit(HeadVar__1_1, 14)) {
                        case (MR_Integer) 103:
                          if (MR_offset_streq(15, HeadVar__1_1, (MR_String) "builtin_int16_gt"))
                            case_num_0 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 108:
                          if (MR_offset_streq(15, HeadVar__1_1, (MR_String) "builtin_int16_lt"))
                            case_num_0 = (MR_Integer) 3;
                          break;
                      }
                    break;
                  case (MR_Integer) 51:
                    if (((((MR_nth_code_unit(HeadVar__1_1, 12)) == (MR_Integer) 50)) && (((MR_nth_code_unit(HeadVar__1_1, 13)) == (MR_Integer) 95))))
                      switch (MR_nth_code_unit(HeadVar__1_1, 14)) {
                        case (MR_Integer) 103:
                          if (MR_offset_streq(15, HeadVar__1_1, (MR_String) "builtin_int32_gt"))
                            case_num_0 = (MR_Integer) 4;
                          break;
                        case (MR_Integer) 108:
                          if (MR_offset_streq(15, HeadVar__1_1, (MR_String) "builtin_int32_lt"))
                            case_num_0 = (MR_Integer) 5;
                          break;
                      }
                    break;
                  case (MR_Integer) 54:
                    if (((((MR_nth_code_unit(HeadVar__1_1, 12)) == (MR_Integer) 52)) && (((MR_nth_code_unit(HeadVar__1_1, 13)) == (MR_Integer) 95))))
                      switch (MR_nth_code_unit(HeadVar__1_1, 14)) {
                        case (MR_Integer) 103:
                          if (MR_offset_streq(15, HeadVar__1_1, (MR_String) "builtin_int64_gt"))
                            case_num_0 = (MR_Integer) 6;
                          break;
                        case (MR_Integer) 108:
                          if (MR_offset_streq(15, HeadVar__1_1, (MR_String) "builtin_int64_lt"))
                            case_num_0 = (MR_Integer) 7;
                          break;
                      }
                    break;
                  case (MR_Integer) 56:
                    if (((MR_nth_code_unit(HeadVar__1_1, 12)) == (MR_Integer) 95))
                      switch (MR_nth_code_unit(HeadVar__1_1, 13)) {
                        case (MR_Integer) 103:
                          if (MR_offset_streq(14, HeadVar__1_1, (MR_String) "builtin_int8_gt"))
                            case_num_0 = (MR_Integer) 8;
                          break;
                        case (MR_Integer) 108:
                          if (MR_offset_streq(14, HeadVar__1_1, (MR_String) "builtin_int8_lt"))
                            case_num_0 = (MR_Integer) 9;
                          break;
                      }
                    break;
                  case (MR_Integer) 95:
                    switch (MR_nth_code_unit(HeadVar__1_1, 12)) {
                      case (MR_Integer) 103:
                        if (MR_offset_streq(13, HeadVar__1_1, (MR_String) "builtin_int_gt"))
                          case_num_0 = (MR_Integer) 10;
                        break;
                      case (MR_Integer) 108:
                        if (MR_offset_streq(13, HeadVar__1_1, (MR_String) "builtin_int_lt"))
                          case_num_0 = (MR_Integer) 11;
                        break;
                    }
                    break;
                }
              break;
            case (MR_Integer) 117:
              if (((((((MR_nth_code_unit(HeadVar__1_1, 9)) == (MR_Integer) 105)) && (((MR_nth_code_unit(HeadVar__1_1, 10)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(HeadVar__1_1, 11)) == (MR_Integer) 116))))
                switch (MR_nth_code_unit(HeadVar__1_1, 12)) {
                  case (MR_Integer) 49:
                    if (((((MR_nth_code_unit(HeadVar__1_1, 13)) == (MR_Integer) 54)) && (((MR_nth_code_unit(HeadVar__1_1, 14)) == (MR_Integer) 95))))
                      switch (MR_nth_code_unit(HeadVar__1_1, 15)) {
                        case (MR_Integer) 103:
                          if (MR_offset_streq(16, HeadVar__1_1, (MR_String) "builtin_uint16_gt"))
                            case_num_0 = (MR_Integer) 12;
                          break;
                        case (MR_Integer) 108:
                          if (MR_offset_streq(16, HeadVar__1_1, (MR_String) "builtin_uint16_lt"))
                            case_num_0 = (MR_Integer) 13;
                          break;
                      }
                    break;
                  case (MR_Integer) 51:
                    if (((((MR_nth_code_unit(HeadVar__1_1, 13)) == (MR_Integer) 50)) && (((MR_nth_code_unit(HeadVar__1_1, 14)) == (MR_Integer) 95))))
                      switch (MR_nth_code_unit(HeadVar__1_1, 15)) {
                        case (MR_Integer) 103:
                          if (MR_offset_streq(16, HeadVar__1_1, (MR_String) "builtin_uint32_gt"))
                            case_num_0 = (MR_Integer) 14;
                          break;
                        case (MR_Integer) 108:
                          if (MR_offset_streq(16, HeadVar__1_1, (MR_String) "builtin_uint32_lt"))
                            case_num_0 = (MR_Integer) 15;
                          break;
                      }
                    break;
                  case (MR_Integer) 54:
                    if (((((MR_nth_code_unit(HeadVar__1_1, 13)) == (MR_Integer) 52)) && (((MR_nth_code_unit(HeadVar__1_1, 14)) == (MR_Integer) 95))))
                      switch (MR_nth_code_unit(HeadVar__1_1, 15)) {
                        case (MR_Integer) 103:
                          if (MR_offset_streq(16, HeadVar__1_1, (MR_String) "builtin_uint64_gt"))
                            case_num_0 = (MR_Integer) 16;
                          break;
                        case (MR_Integer) 108:
                          if (MR_offset_streq(16, HeadVar__1_1, (MR_String) "builtin_uint64_lt"))
                            case_num_0 = (MR_Integer) 17;
                          break;
                      }
                    break;
                  case (MR_Integer) 56:
                    if (((MR_nth_code_unit(HeadVar__1_1, 13)) == (MR_Integer) 95))
                      switch (MR_nth_code_unit(HeadVar__1_1, 14)) {
                        case (MR_Integer) 103:
                          if (MR_offset_streq(15, HeadVar__1_1, (MR_String) "builtin_uint8_gt"))
                            case_num_0 = (MR_Integer) 18;
                          break;
                        case (MR_Integer) 108:
                          if (MR_offset_streq(15, HeadVar__1_1, (MR_String) "builtin_uint8_lt"))
                            case_num_0 = (MR_Integer) 19;
                          break;
                      }
                    break;
                  case (MR_Integer) 95:
                    switch (MR_nth_code_unit(HeadVar__1_1, 13)) {
                      case (MR_Integer) 103:
                        if (MR_offset_streq(14, HeadVar__1_1, (MR_String) "builtin_uint_gt"))
                          case_num_0 = (MR_Integer) 20;
                        break;
                      case (MR_Integer) 108:
                        if (MR_offset_streq(14, HeadVar__1_1, (MR_String) "builtin_uint_lt"))
                          case_num_0 = (MR_Integer) 21;
                        break;
                    }
                    break;
                }
              break;
          }
        break;
      case (MR_Integer) 112:
        if (MR_offset_streq(1, HeadVar__1_1, (MR_String) "partial_inst_copy"))
          case_num_0 = (MR_Integer) 22;
        break;
    }
    switch (case_num_0) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        {
          // case "builtin_compound_eq"
          ;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 1:
        {
          // case "builtin_compound_lt"
          ;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 2:
        {
          // case "builtin_int16_gt"
          ;
          succeeded = (HeadVar__2_2 == (MR_Integer) 2);
        }
        break;
      case (MR_Integer) 3:
        {
          // case "builtin_int16_lt"
          ;
          succeeded = (HeadVar__2_2 == (MR_Integer) 2);
        }
        break;
      case (MR_Integer) 4:
        {
          // case "builtin_int32_gt"
          ;
          succeeded = (HeadVar__2_2 == (MR_Integer) 2);
        }
        break;
      case (MR_Integer) 5:
        {
          // case "builtin_int32_lt"
          ;
          succeeded = (HeadVar__2_2 == (MR_Integer) 2);
        }
        break;
      case (MR_Integer) 6:
        {
          // case "builtin_int64_gt"
          ;
          succeeded = (HeadVar__2_2 == (MR_Integer) 2);
        }
        break;
      case (MR_Integer) 7:
        {
          // case "builtin_int64_lt"
          ;
          succeeded = (HeadVar__2_2 == (MR_Integer) 2);
        }
        break;
      case (MR_Integer) 8:
        {
          // case "builtin_int8_gt"
          ;
          succeeded = (HeadVar__2_2 == (MR_Integer) 2);
        }
        break;
      case (MR_Integer) 9:
        {
          // case "builtin_int8_lt"
          ;
          succeeded = (HeadVar__2_2 == (MR_Integer) 2);
        }
        break;
      case (MR_Integer) 10:
        {
          // case "builtin_int_gt"
          ;
          succeeded = (HeadVar__2_2 == (MR_Integer) 2);
        }
        break;
      case (MR_Integer) 11:
        {
          // case "builtin_int_lt"
          ;
          succeeded = (HeadVar__2_2 == (MR_Integer) 2);
        }
        break;
      case (MR_Integer) 12:
        {
          // case "builtin_uint16_gt"
          ;
          succeeded = (HeadVar__2_2 == (MR_Integer) 2);
        }
        break;
      case (MR_Integer) 13:
        {
          // case "builtin_uint16_lt"
          ;
          succeeded = (HeadVar__2_2 == (MR_Integer) 2);
        }
        break;
      case (MR_Integer) 14:
        {
          // case "builtin_uint32_gt"
          ;
          succeeded = (HeadVar__2_2 == (MR_Integer) 2);
        }
        break;
      case (MR_Integer) 15:
        {
          // case "builtin_uint32_lt"
          ;
          succeeded = (HeadVar__2_2 == (MR_Integer) 2);
        }
        break;
      case (MR_Integer) 16:
        {
          // case "builtin_uint64_gt"
          ;
          succeeded = (HeadVar__2_2 == (MR_Integer) 2);
        }
        break;
      case (MR_Integer) 17:
        {
          // case "builtin_uint64_lt"
          ;
          succeeded = (HeadVar__2_2 == (MR_Integer) 2);
        }
        break;
      case (MR_Integer) 18:
        {
          // case "builtin_uint8_gt"
          ;
          succeeded = (HeadVar__2_2 == (MR_Integer) 2);
        }
        break;
      case (MR_Integer) 19:
        {
          // case "builtin_uint8_lt"
          ;
          succeeded = (HeadVar__2_2 == (MR_Integer) 2);
        }
        break;
      case (MR_Integer) 20:
        {
          // case "builtin_uint_gt"
          ;
          succeeded = (HeadVar__2_2 == (MR_Integer) 2);
        }
        break;
      case (MR_Integer) 21:
        {
          // case "builtin_uint_lt"
          ;
          succeeded = (HeadVar__2_2 == (MR_Integer) 2);
        }
        break;
      case (MR_Integer) 22:
        {
          // case "partial_inst_copy"
          ;
          succeeded = (HeadVar__2_2 == (MR_Integer) 2);
        }
        break;
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
hlds__introduced_call_table__may_introduce_calls_to_4_p_0(
  MR_Word _PredOrFunc_5,
  MR_String ModuleName_6,
  MR_String PredName_7,
  MR_Integer OrigArity_8)
{
  MR_bool succeeded;

  succeeded = hlds__introduced_call_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_116_111_95_95_91_49_93_95_48_4_p_0(ModuleName_6, PredName_7, OrigArity_8);
  return succeeded;
}

MR_bool MR_CALL 
hlds__introduced_call_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_116_111_95_95_91_49_93_95_48_4_p_0(
  MR_String ModuleName_6,
  MR_String PredName_7,
  MR_Integer OrigArity_8)
{
  MR_bool succeeded;

  {
    MR_Integer case_num_9 = (MR_Integer) -1;

    switch (MR_nth_code_unit(ModuleName_6, 0)) {
      case (MR_Integer) 98:
        if (MR_offset_streq(1, ModuleName_6, (MR_String) "builtin"))
          case_num_9 = (MR_Integer) 0;
        break;
      case (MR_Integer) 101:
        if (MR_offset_streq(1, ModuleName_6, (MR_String) "exception"))
          case_num_9 = (MR_Integer) 1;
        break;
      case (MR_Integer) 105:
        switch (MR_nth_code_unit(ModuleName_6, 1)) {
          case (MR_Integer) 110:
            if (((MR_nth_code_unit(ModuleName_6, 2)) == (MR_Integer) 116))
              switch (MR_nth_code_unit(ModuleName_6, 3)) {
                case (MR_Integer) 0:
                  case_num_9 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 49:
                  if (MR_offset_streq(4, ModuleName_6, (MR_String) "int16"))
                    case_num_9 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 51:
                  if (MR_offset_streq(4, ModuleName_6, (MR_String) "int32"))
                    case_num_9 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 54:
                  if (MR_offset_streq(4, ModuleName_6, (MR_String) "int64"))
                    case_num_9 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 56:
                  if (MR_offset_streq(4, ModuleName_6, (MR_String) "int8"))
                    case_num_9 = (MR_Integer) 2;
                  break;
              }
            break;
          case (MR_Integer) 111:
            if (MR_offset_streq(2, ModuleName_6, (MR_String) "io"))
              case_num_9 = (MR_Integer) 3;
            break;
        }
        break;
      case (MR_Integer) 112:
        if (((MR_nth_code_unit(ModuleName_6, 1)) == (MR_Integer) 114))
          switch (MR_nth_code_unit(ModuleName_6, 2)) {
            case (MR_Integer) 105:
              if (MR_offset_streq(3, ModuleName_6, (MR_String) "private_builtin"))
                case_num_9 = (MR_Integer) 4;
              break;
            case (MR_Integer) 111:
              if (MR_offset_streq(3, ModuleName_6, (MR_String) "profiling_builtin"))
                case_num_9 = (MR_Integer) 5;
              break;
          }
        break;
      case (MR_Integer) 114:
        if (MR_offset_streq(1, ModuleName_6, (MR_String) "region_builtin"))
          case_num_9 = (MR_Integer) 6;
        break;
      case (MR_Integer) 115:
        switch (MR_nth_code_unit(ModuleName_6, 1)) {
          case (MR_Integer) 115:
            if (MR_offset_streq(2, ModuleName_6, (MR_String) "ssdb"))
              case_num_9 = (MR_Integer) 7;
            break;
          case (MR_Integer) 116:
            switch (MR_nth_code_unit(ModuleName_6, 2)) {
              case (MR_Integer) 109:
                if (MR_offset_streq(3, ModuleName_6, (MR_String) "stm_builtin"))
                  case_num_9 = (MR_Integer) 8;
                break;
              case (MR_Integer) 114:
                switch (MR_nth_code_unit(ModuleName_6, 3)) {
                  case (MR_Integer) 101:
                    if (MR_offset_streq(4, ModuleName_6, (MR_String) "stream"))
                      case_num_9 = (MR_Integer) 9;
                    break;
                  case (MR_Integer) 105:
                    if (((((MR_nth_code_unit(ModuleName_6, 4)) == (MR_Integer) 110)) && (((MR_nth_code_unit(ModuleName_6, 5)) == (MR_Integer) 103))))
                      switch (MR_nth_code_unit(ModuleName_6, 6)) {
                        case (MR_Integer) 0:
                          case_num_9 = (MR_Integer) 10;
                          break;
                        case (MR_Integer) 46:
                          if (MR_offset_streq(7, ModuleName_6, (MR_String) "string.format"))
                            case_num_9 = (MR_Integer) 11;
                          break;
                      }
                    break;
                }
                break;
            }
            break;
        }
        break;
      case (MR_Integer) 116:
        switch (MR_nth_code_unit(ModuleName_6, 1)) {
          case (MR_Integer) 97:
            if (MR_offset_streq(2, ModuleName_6, (MR_String) "table_builtin"))
              case_num_9 = (MR_Integer) 12;
            break;
          case (MR_Integer) 101:
            if (MR_offset_streq(2, ModuleName_6, (MR_String) "term_size_builtin"))
              case_num_9 = (MR_Integer) 13;
            break;
        }
        break;
      case (MR_Integer) 117:
        if (((((((MR_nth_code_unit(ModuleName_6, 1)) == (MR_Integer) 105)) && (((MR_nth_code_unit(ModuleName_6, 2)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(ModuleName_6, 3)) == (MR_Integer) 116))))
          switch (MR_nth_code_unit(ModuleName_6, 4)) {
            case (MR_Integer) 0:
              case_num_9 = (MR_Integer) 2;
              break;
            case (MR_Integer) 49:
              if (MR_offset_streq(5, ModuleName_6, (MR_String) "uint16"))
                case_num_9 = (MR_Integer) 2;
              break;
            case (MR_Integer) 51:
              if (MR_offset_streq(5, ModuleName_6, (MR_String) "uint32"))
                case_num_9 = (MR_Integer) 2;
              break;
            case (MR_Integer) 54:
              if (MR_offset_streq(5, ModuleName_6, (MR_String) "uint64"))
                case_num_9 = (MR_Integer) 2;
              break;
            case (MR_Integer) 56:
              if (MR_offset_streq(5, ModuleName_6, (MR_String) "uint8"))
                case_num_9 = (MR_Integer) 2;
              break;
          }
        break;
    }
    switch (case_num_9) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        {
          // case "builtin"
          ;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 1:
        {
          // case "exception"
          ;
          if ((strcmp(PredName_7, (MR_String) "try") == 0))
            succeeded = (OrigArity_8 == (MR_Integer) 2);
          else
          if ((strcmp(PredName_7, (MR_String) "try_io") == 0))
            succeeded = (OrigArity_8 == (MR_Integer) 4);
          else
          if ((strcmp(PredName_7, (MR_String) "unreachable") == 0))
            succeeded = (OrigArity_8 == (MR_Integer) 0);
          else
            succeeded = MR_FALSE;
        }
        break;
      case (MR_Integer) 2:
        {
          // case "int", "int16", "int32", "int64", "int8", "uint", "uint16", "uint32", "uint64", "uint8"
          ;
          {
            MR_Integer lo_0 = (MR_Integer) 0;
            MR_Integer hi_1 = (MR_Integer) 4;
            MR_Integer mid_2;
            MR_Integer result_3;

            // binary string simple lookup switch
            ;
            do
            {
              mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
              result_3 = MR_strcmp(PredName_7, ((&hlds__introduced_call_table_vector_common_1[0 + mid_2]))->hlds__introduced_call_table__vector_common_type_1_0__vct_1_f_0);
              if ((result_3 == (MR_Integer) 0))
              {
                succeeded = MR_TRUE;
                // jump out of search loop
                ;
                goto label_0;
              }
              else
              if ((result_3 < (MR_Integer) 0))
                hi_1 = (MR_Integer) ((MR_Unsigned) mid_2 - (MR_Unsigned) 1);
              else
                lo_0 = (MR_Integer) ((MR_Unsigned) mid_2 + (MR_Unsigned) 1);
            }
            while ((lo_0 <= hi_1));
            succeeded = MR_FALSE;
          label_0:;
          }
        }
        break;
      case (MR_Integer) 3:
        {
          // case "io"
          ;
          succeeded = (strcmp(PredName_7, (MR_String) "write_string") == 0);
        }
        break;
      case (MR_Integer) 4:
        {
          // case "private_builtin"
          ;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 5:
        {
          // case "profiling_builtin"
          ;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 6:
        {
          // case "region_builtin"
          ;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 7:
        {
          // case "ssdb"
          ;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 8:
        {
          // case "stm_builtin"
          ;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 9:
        {
          // case "stream"
          ;
          succeeded = (strcmp(PredName_7, (MR_String) "put") == 0);
        }
        break;
      case (MR_Integer) 10:
        {
          // case "string"
          ;
          {
            MR_Integer lo_4 = (MR_Integer) 0;
            MR_Integer hi_5 = (MR_Integer) 3;
            MR_Integer mid_6;
            MR_Integer result_7;

            // binary string jump switch
            ;
            do
            {
              mid_6 = (((MR_Integer) ((MR_Unsigned) lo_4 + (MR_Unsigned) hi_5)) / (MR_Integer) 2);
              result_7 = MR_strcmp(PredName_7, ((&hlds__introduced_call_table_vector_common_2[0 + mid_6]))->hlds__introduced_call_table__vector_common_type_2_0__vct_2_f_0);
              if ((result_7 == (MR_Integer) 0))
              {
                switch (((&hlds__introduced_call_table_vector_common_2[0 + mid_6]))->hlds__introduced_call_table__vector_common_type_2_0__vct_2_f_1) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      // case "++"
                      ;
                      succeeded = (OrigArity_8 == (MR_Integer) 3);
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      // case "char_to_string"
                      ;
                      succeeded = (OrigArity_8 == (MR_Integer) 2);
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      // case "float_to_string"
                      ;
                      succeeded = (OrigArity_8 == (MR_Integer) 2);
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      // case "int_to_string"
                      ;
                      succeeded = (OrigArity_8 == (MR_Integer) 2);
                    }
                    break;
                }
                // jump out of search loop
                ;
                goto label_1;
              }
              else
              if ((result_7 < (MR_Integer) 0))
                hi_5 = (MR_Integer) ((MR_Unsigned) mid_6 - (MR_Unsigned) 1);
              else
                lo_4 = (MR_Integer) ((MR_Unsigned) mid_6 + (MR_Unsigned) 1);
            }
            while ((lo_4 <= hi_5));
            succeeded = MR_FALSE;
          label_1:;
          }
        }
        break;
      case (MR_Integer) 11:
        {
          // case "string.format"
          ;
          {
            MR_Integer case_num_8 = (MR_Integer) -1;

            if (((((((((((((((MR_nth_code_unit(PredName_7, 0)) == (MR_Integer) 102)) && (((MR_nth_code_unit(PredName_7, 1)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(PredName_7, 2)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(PredName_7, 3)) == (MR_Integer) 109)))) && (((MR_nth_code_unit(PredName_7, 4)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(PredName_7, 5)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(PredName_7, 6)) == (MR_Integer) 95))))
              switch (MR_nth_code_unit(PredName_7, 7)) {
                case (MR_Integer) 99:
                  switch (MR_nth_code_unit(PredName_7, 8)) {
                    case (MR_Integer) 97:
                      if (((((((MR_nth_code_unit(PredName_7, 9)) == (MR_Integer) 115)) && (((MR_nth_code_unit(PredName_7, 10)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(PredName_7, 11)) == (MR_Integer) 95))))
                        switch (MR_nth_code_unit(PredName_7, 12)) {
                          case (MR_Integer) 105:
                            if (((((MR_nth_code_unit(PredName_7, 13)) == (MR_Integer) 110)) && (((MR_nth_code_unit(PredName_7, 14)) == (MR_Integer) 116))))
                              switch (MR_nth_code_unit(PredName_7, 15)) {
                                case (MR_Integer) 49:
                                  if (MR_offset_streq(16, PredName_7, (MR_String) "format_cast_int16_to_int"))
                                    case_num_8 = (MR_Integer) 0;
                                  break;
                                case (MR_Integer) 51:
                                  if (MR_offset_streq(16, PredName_7, (MR_String) "format_cast_int32_to_int"))
                                    case_num_8 = (MR_Integer) 1;
                                  break;
                                case (MR_Integer) 56:
                                  if (MR_offset_streq(16, PredName_7, (MR_String) "format_cast_int8_to_int"))
                                    case_num_8 = (MR_Integer) 2;
                                  break;
                              }
                            break;
                          case (MR_Integer) 117:
                            if (((((((MR_nth_code_unit(PredName_7, 13)) == (MR_Integer) 105)) && (((MR_nth_code_unit(PredName_7, 14)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(PredName_7, 15)) == (MR_Integer) 116))))
                              switch (MR_nth_code_unit(PredName_7, 16)) {
                                case (MR_Integer) 49:
                                  if (MR_offset_streq(17, PredName_7, (MR_String) "format_cast_uint16_to_uint"))
                                    case_num_8 = (MR_Integer) 3;
                                  break;
                                case (MR_Integer) 51:
                                  if (MR_offset_streq(17, PredName_7, (MR_String) "format_cast_uint32_to_uint"))
                                    case_num_8 = (MR_Integer) 4;
                                  break;
                                case (MR_Integer) 56:
                                  if (MR_offset_streq(17, PredName_7, (MR_String) "format_cast_uint8_to_uint"))
                                    case_num_8 = (MR_Integer) 5;
                                  break;
                              }
                            break;
                        }
                      break;
                    case (MR_Integer) 104:
                      if (((((((((((((((((((((((((((MR_nth_code_unit(PredName_7, 9)) == (MR_Integer) 97)) && (((MR_nth_code_unit(PredName_7, 10)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(PredName_7, 11)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(PredName_7, 12)) == (MR_Integer) 99)))) && (((MR_nth_code_unit(PredName_7, 13)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(PredName_7, 14)) == (MR_Integer) 109)))) && (((MR_nth_code_unit(PredName_7, 15)) == (MR_Integer) 112)))) && (((MR_nth_code_unit(PredName_7, 16)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(PredName_7, 17)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(PredName_7, 18)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(PredName_7, 19)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(PredName_7, 20)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(PredName_7, 21)) == (MR_Integer) 95))))
                        switch (MR_nth_code_unit(PredName_7, 22)) {
                          case (MR_Integer) 110:
                            if (MR_offset_streq(23, PredName_7, (MR_String) "format_char_component_nowidth"))
                              case_num_8 = (MR_Integer) 6;
                            break;
                          case (MR_Integer) 119:
                            if (MR_offset_streq(23, PredName_7, (MR_String) "format_char_component_width"))
                              case_num_8 = (MR_Integer) 7;
                            break;
                        }
                      break;
                  }
                  break;
                case (MR_Integer) 102:
                  if (((((((((((((((((((((((((((((((MR_nth_code_unit(PredName_7, 8)) == (MR_Integer) 108)) && (((MR_nth_code_unit(PredName_7, 9)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(PredName_7, 10)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(PredName_7, 11)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(PredName_7, 12)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(PredName_7, 13)) == (MR_Integer) 99)))) && (((MR_nth_code_unit(PredName_7, 14)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(PredName_7, 15)) == (MR_Integer) 109)))) && (((MR_nth_code_unit(PredName_7, 16)) == (MR_Integer) 112)))) && (((MR_nth_code_unit(PredName_7, 17)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(PredName_7, 18)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(PredName_7, 19)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(PredName_7, 20)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(PredName_7, 21)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(PredName_7, 22)) == (MR_Integer) 95))))
                    switch (MR_nth_code_unit(PredName_7, 23)) {
                      case (MR_Integer) 110:
                        if (((((((((((((((MR_nth_code_unit(PredName_7, 24)) == (MR_Integer) 111)) && (((MR_nth_code_unit(PredName_7, 25)) == (MR_Integer) 119)))) && (((MR_nth_code_unit(PredName_7, 26)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(PredName_7, 27)) == (MR_Integer) 100)))) && (((MR_nth_code_unit(PredName_7, 28)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(PredName_7, 29)) == (MR_Integer) 104)))) && (((MR_nth_code_unit(PredName_7, 30)) == (MR_Integer) 95))))
                          switch (MR_nth_code_unit(PredName_7, 31)) {
                            case (MR_Integer) 110:
                              if (MR_offset_streq(32, PredName_7, (MR_String) "format_float_component_nowidth_noprec"))
                                case_num_8 = (MR_Integer) 8;
                              break;
                            case (MR_Integer) 112:
                              if (MR_offset_streq(32, PredName_7, (MR_String) "format_float_component_nowidth_prec"))
                                case_num_8 = (MR_Integer) 9;
                              break;
                          }
                        break;
                      case (MR_Integer) 119:
                        if (((((((((((MR_nth_code_unit(PredName_7, 24)) == (MR_Integer) 105)) && (((MR_nth_code_unit(PredName_7, 25)) == (MR_Integer) 100)))) && (((MR_nth_code_unit(PredName_7, 26)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(PredName_7, 27)) == (MR_Integer) 104)))) && (((MR_nth_code_unit(PredName_7, 28)) == (MR_Integer) 95))))
                          switch (MR_nth_code_unit(PredName_7, 29)) {
                            case (MR_Integer) 110:
                              if (MR_offset_streq(30, PredName_7, (MR_String) "format_float_component_width_noprec"))
                                case_num_8 = (MR_Integer) 10;
                              break;
                            case (MR_Integer) 112:
                              if (MR_offset_streq(30, PredName_7, (MR_String) "format_float_component_width_prec"))
                                case_num_8 = (MR_Integer) 11;
                              break;
                          }
                        break;
                    }
                  break;
                case (MR_Integer) 115:
                  switch (MR_nth_code_unit(PredName_7, 8)) {
                    case (MR_Integer) 105:
                      if (((((((((((((((((MR_nth_code_unit(PredName_7, 9)) == (MR_Integer) 103)) && (((MR_nth_code_unit(PredName_7, 10)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(PredName_7, 11)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(PredName_7, 12)) == (MR_Integer) 100)))) && (((MR_nth_code_unit(PredName_7, 13)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(PredName_7, 14)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(PredName_7, 15)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(PredName_7, 16)) == (MR_Integer) 116))))
                        switch (MR_nth_code_unit(PredName_7, 17)) {
                          case (MR_Integer) 54:
                            if (((((((((((((((((((((((((MR_nth_code_unit(PredName_7, 18)) == (MR_Integer) 52)) && (((MR_nth_code_unit(PredName_7, 19)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(PredName_7, 20)) == (MR_Integer) 99)))) && (((MR_nth_code_unit(PredName_7, 21)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(PredName_7, 22)) == (MR_Integer) 109)))) && (((MR_nth_code_unit(PredName_7, 23)) == (MR_Integer) 112)))) && (((MR_nth_code_unit(PredName_7, 24)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(PredName_7, 25)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(PredName_7, 26)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(PredName_7, 27)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(PredName_7, 28)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(PredName_7, 29)) == (MR_Integer) 95))))
                              switch (MR_nth_code_unit(PredName_7, 30)) {
                                case (MR_Integer) 110:
                                  if (((((((((((((((MR_nth_code_unit(PredName_7, 31)) == (MR_Integer) 111)) && (((MR_nth_code_unit(PredName_7, 32)) == (MR_Integer) 119)))) && (((MR_nth_code_unit(PredName_7, 33)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(PredName_7, 34)) == (MR_Integer) 100)))) && (((MR_nth_code_unit(PredName_7, 35)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(PredName_7, 36)) == (MR_Integer) 104)))) && (((MR_nth_code_unit(PredName_7, 37)) == (MR_Integer) 95))))
                                    switch (MR_nth_code_unit(PredName_7, 38)) {
                                      case (MR_Integer) 110:
                                        if (MR_offset_streq(39, PredName_7, (MR_String) "format_signed_int64_component_nowidth_noprec"))
                                          case_num_8 = (MR_Integer) 12;
                                        break;
                                      case (MR_Integer) 112:
                                        if (MR_offset_streq(39, PredName_7, (MR_String) "format_signed_int64_component_nowidth_prec"))
                                          case_num_8 = (MR_Integer) 13;
                                        break;
                                    }
                                  break;
                                case (MR_Integer) 119:
                                  if (((((((((((MR_nth_code_unit(PredName_7, 31)) == (MR_Integer) 105)) && (((MR_nth_code_unit(PredName_7, 32)) == (MR_Integer) 100)))) && (((MR_nth_code_unit(PredName_7, 33)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(PredName_7, 34)) == (MR_Integer) 104)))) && (((MR_nth_code_unit(PredName_7, 35)) == (MR_Integer) 95))))
                                    switch (MR_nth_code_unit(PredName_7, 36)) {
                                      case (MR_Integer) 110:
                                        if (MR_offset_streq(37, PredName_7, (MR_String) "format_signed_int64_component_width_noprec"))
                                          case_num_8 = (MR_Integer) 14;
                                        break;
                                      case (MR_Integer) 112:
                                        if (MR_offset_streq(37, PredName_7, (MR_String) "format_signed_int64_component_width_prec"))
                                          case_num_8 = (MR_Integer) 15;
                                        break;
                                    }
                                  break;
                              }
                            break;
                          case (MR_Integer) 95:
                            if (((((((((((((((((((((MR_nth_code_unit(PredName_7, 18)) == (MR_Integer) 99)) && (((MR_nth_code_unit(PredName_7, 19)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(PredName_7, 20)) == (MR_Integer) 109)))) && (((MR_nth_code_unit(PredName_7, 21)) == (MR_Integer) 112)))) && (((MR_nth_code_unit(PredName_7, 22)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(PredName_7, 23)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(PredName_7, 24)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(PredName_7, 25)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(PredName_7, 26)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(PredName_7, 27)) == (MR_Integer) 95))))
                              switch (MR_nth_code_unit(PredName_7, 28)) {
                                case (MR_Integer) 110:
                                  if (((((((((((((((MR_nth_code_unit(PredName_7, 29)) == (MR_Integer) 111)) && (((MR_nth_code_unit(PredName_7, 30)) == (MR_Integer) 119)))) && (((MR_nth_code_unit(PredName_7, 31)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(PredName_7, 32)) == (MR_Integer) 100)))) && (((MR_nth_code_unit(PredName_7, 33)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(PredName_7, 34)) == (MR_Integer) 104)))) && (((MR_nth_code_unit(PredName_7, 35)) == (MR_Integer) 95))))
                                    switch (MR_nth_code_unit(PredName_7, 36)) {
                                      case (MR_Integer) 110:
                                        if (MR_offset_streq(37, PredName_7, (MR_String) "format_signed_int_component_nowidth_noprec"))
                                          case_num_8 = (MR_Integer) 16;
                                        break;
                                      case (MR_Integer) 112:
                                        if (MR_offset_streq(37, PredName_7, (MR_String) "format_signed_int_component_nowidth_prec"))
                                          case_num_8 = (MR_Integer) 17;
                                        break;
                                    }
                                  break;
                                case (MR_Integer) 119:
                                  if (((((((((((MR_nth_code_unit(PredName_7, 29)) == (MR_Integer) 105)) && (((MR_nth_code_unit(PredName_7, 30)) == (MR_Integer) 100)))) && (((MR_nth_code_unit(PredName_7, 31)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(PredName_7, 32)) == (MR_Integer) 104)))) && (((MR_nth_code_unit(PredName_7, 33)) == (MR_Integer) 95))))
                                    switch (MR_nth_code_unit(PredName_7, 34)) {
                                      case (MR_Integer) 110:
                                        if (MR_offset_streq(35, PredName_7, (MR_String) "format_signed_int_component_width_noprec"))
                                          case_num_8 = (MR_Integer) 18;
                                        break;
                                      case (MR_Integer) 112:
                                        if (MR_offset_streq(35, PredName_7, (MR_String) "format_signed_int_component_width_prec"))
                                          case_num_8 = (MR_Integer) 19;
                                        break;
                                    }
                                  break;
                              }
                            break;
                        }
                      break;
                    case (MR_Integer) 116:
                      if (((((((((((((((((((((((((((((((MR_nth_code_unit(PredName_7, 9)) == (MR_Integer) 114)) && (((MR_nth_code_unit(PredName_7, 10)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(PredName_7, 11)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(PredName_7, 12)) == (MR_Integer) 103)))) && (((MR_nth_code_unit(PredName_7, 13)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(PredName_7, 14)) == (MR_Integer) 99)))) && (((MR_nth_code_unit(PredName_7, 15)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(PredName_7, 16)) == (MR_Integer) 109)))) && (((MR_nth_code_unit(PredName_7, 17)) == (MR_Integer) 112)))) && (((MR_nth_code_unit(PredName_7, 18)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(PredName_7, 19)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(PredName_7, 20)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(PredName_7, 21)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(PredName_7, 22)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(PredName_7, 23)) == (MR_Integer) 95))))
                        switch (MR_nth_code_unit(PredName_7, 24)) {
                          case (MR_Integer) 110:
                            if (((((((((((((((MR_nth_code_unit(PredName_7, 25)) == (MR_Integer) 111)) && (((MR_nth_code_unit(PredName_7, 26)) == (MR_Integer) 119)))) && (((MR_nth_code_unit(PredName_7, 27)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(PredName_7, 28)) == (MR_Integer) 100)))) && (((MR_nth_code_unit(PredName_7, 29)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(PredName_7, 30)) == (MR_Integer) 104)))) && (((MR_nth_code_unit(PredName_7, 31)) == (MR_Integer) 95))))
                              switch (MR_nth_code_unit(PredName_7, 32)) {
                                case (MR_Integer) 110:
                                  if (MR_offset_streq(33, PredName_7, (MR_String) "format_string_component_nowidth_noprec"))
                                    case_num_8 = (MR_Integer) 20;
                                  break;
                                case (MR_Integer) 112:
                                  if (MR_offset_streq(33, PredName_7, (MR_String) "format_string_component_nowidth_prec"))
                                    case_num_8 = (MR_Integer) 21;
                                  break;
                              }
                            break;
                          case (MR_Integer) 119:
                            if (((((((((((MR_nth_code_unit(PredName_7, 25)) == (MR_Integer) 105)) && (((MR_nth_code_unit(PredName_7, 26)) == (MR_Integer) 100)))) && (((MR_nth_code_unit(PredName_7, 27)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(PredName_7, 28)) == (MR_Integer) 104)))) && (((MR_nth_code_unit(PredName_7, 29)) == (MR_Integer) 95))))
                              switch (MR_nth_code_unit(PredName_7, 30)) {
                                case (MR_Integer) 110:
                                  if (MR_offset_streq(31, PredName_7, (MR_String) "format_string_component_width_noprec"))
                                    case_num_8 = (MR_Integer) 22;
                                  break;
                                case (MR_Integer) 112:
                                  if (MR_offset_streq(31, PredName_7, (MR_String) "format_string_component_width_prec"))
                                    case_num_8 = (MR_Integer) 23;
                                  break;
                              }
                            break;
                        }
                      break;
                  }
                  break;
                case (MR_Integer) 117:
                  switch (MR_nth_code_unit(PredName_7, 8)) {
                    case (MR_Integer) 105:
                      if (((((MR_nth_code_unit(PredName_7, 9)) == (MR_Integer) 110)) && (((MR_nth_code_unit(PredName_7, 10)) == (MR_Integer) 116))))
                        switch (MR_nth_code_unit(PredName_7, 11)) {
                          case (MR_Integer) 54:
                            if (((((((((((((((((((((((((MR_nth_code_unit(PredName_7, 12)) == (MR_Integer) 52)) && (((MR_nth_code_unit(PredName_7, 13)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(PredName_7, 14)) == (MR_Integer) 99)))) && (((MR_nth_code_unit(PredName_7, 15)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(PredName_7, 16)) == (MR_Integer) 109)))) && (((MR_nth_code_unit(PredName_7, 17)) == (MR_Integer) 112)))) && (((MR_nth_code_unit(PredName_7, 18)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(PredName_7, 19)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(PredName_7, 20)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(PredName_7, 21)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(PredName_7, 22)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(PredName_7, 23)) == (MR_Integer) 95))))
                              switch (MR_nth_code_unit(PredName_7, 24)) {
                                case (MR_Integer) 110:
                                  if (((((((((((((((MR_nth_code_unit(PredName_7, 25)) == (MR_Integer) 111)) && (((MR_nth_code_unit(PredName_7, 26)) == (MR_Integer) 119)))) && (((MR_nth_code_unit(PredName_7, 27)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(PredName_7, 28)) == (MR_Integer) 100)))) && (((MR_nth_code_unit(PredName_7, 29)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(PredName_7, 30)) == (MR_Integer) 104)))) && (((MR_nth_code_unit(PredName_7, 31)) == (MR_Integer) 95))))
                                    switch (MR_nth_code_unit(PredName_7, 32)) {
                                      case (MR_Integer) 110:
                                        if (MR_offset_streq(33, PredName_7, (MR_String) "format_uint64_component_nowidth_noprec"))
                                          case_num_8 = (MR_Integer) 24;
                                        break;
                                      case (MR_Integer) 112:
                                        if (MR_offset_streq(33, PredName_7, (MR_String) "format_uint64_component_nowidth_prec"))
                                          case_num_8 = (MR_Integer) 25;
                                        break;
                                    }
                                  break;
                                case (MR_Integer) 119:
                                  if (((((((((((MR_nth_code_unit(PredName_7, 25)) == (MR_Integer) 105)) && (((MR_nth_code_unit(PredName_7, 26)) == (MR_Integer) 100)))) && (((MR_nth_code_unit(PredName_7, 27)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(PredName_7, 28)) == (MR_Integer) 104)))) && (((MR_nth_code_unit(PredName_7, 29)) == (MR_Integer) 95))))
                                    switch (MR_nth_code_unit(PredName_7, 30)) {
                                      case (MR_Integer) 110:
                                        if (MR_offset_streq(31, PredName_7, (MR_String) "format_uint64_component_width_noprec"))
                                          case_num_8 = (MR_Integer) 26;
                                        break;
                                      case (MR_Integer) 112:
                                        if (MR_offset_streq(31, PredName_7, (MR_String) "format_uint64_component_width_prec"))
                                          case_num_8 = (MR_Integer) 27;
                                        break;
                                    }
                                  break;
                              }
                            break;
                          case (MR_Integer) 95:
                            if (((((((((((((((((((((MR_nth_code_unit(PredName_7, 12)) == (MR_Integer) 99)) && (((MR_nth_code_unit(PredName_7, 13)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(PredName_7, 14)) == (MR_Integer) 109)))) && (((MR_nth_code_unit(PredName_7, 15)) == (MR_Integer) 112)))) && (((MR_nth_code_unit(PredName_7, 16)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(PredName_7, 17)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(PredName_7, 18)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(PredName_7, 19)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(PredName_7, 20)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(PredName_7, 21)) == (MR_Integer) 95))))
                              switch (MR_nth_code_unit(PredName_7, 22)) {
                                case (MR_Integer) 110:
                                  if (((((((((((((((MR_nth_code_unit(PredName_7, 23)) == (MR_Integer) 111)) && (((MR_nth_code_unit(PredName_7, 24)) == (MR_Integer) 119)))) && (((MR_nth_code_unit(PredName_7, 25)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(PredName_7, 26)) == (MR_Integer) 100)))) && (((MR_nth_code_unit(PredName_7, 27)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(PredName_7, 28)) == (MR_Integer) 104)))) && (((MR_nth_code_unit(PredName_7, 29)) == (MR_Integer) 95))))
                                    switch (MR_nth_code_unit(PredName_7, 30)) {
                                      case (MR_Integer) 110:
                                        if (MR_offset_streq(31, PredName_7, (MR_String) "format_uint_component_nowidth_noprec"))
                                          case_num_8 = (MR_Integer) 28;
                                        break;
                                      case (MR_Integer) 112:
                                        if (MR_offset_streq(31, PredName_7, (MR_String) "format_uint_component_nowidth_prec"))
                                          case_num_8 = (MR_Integer) 29;
                                        break;
                                    }
                                  break;
                                case (MR_Integer) 119:
                                  if (((((((((((MR_nth_code_unit(PredName_7, 23)) == (MR_Integer) 105)) && (((MR_nth_code_unit(PredName_7, 24)) == (MR_Integer) 100)))) && (((MR_nth_code_unit(PredName_7, 25)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(PredName_7, 26)) == (MR_Integer) 104)))) && (((MR_nth_code_unit(PredName_7, 27)) == (MR_Integer) 95))))
                                    switch (MR_nth_code_unit(PredName_7, 28)) {
                                      case (MR_Integer) 110:
                                        if (MR_offset_streq(29, PredName_7, (MR_String) "format_uint_component_width_noprec"))
                                          case_num_8 = (MR_Integer) 30;
                                        break;
                                      case (MR_Integer) 112:
                                        if (MR_offset_streq(29, PredName_7, (MR_String) "format_uint_component_width_prec"))
                                          case_num_8 = (MR_Integer) 31;
                                        break;
                                    }
                                  break;
                              }
                            break;
                        }
                      break;
                    case (MR_Integer) 110:
                      if (((((((((((((((((((((MR_nth_code_unit(PredName_7, 9)) == (MR_Integer) 115)) && (((MR_nth_code_unit(PredName_7, 10)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(PredName_7, 11)) == (MR_Integer) 103)))) && (((MR_nth_code_unit(PredName_7, 12)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(PredName_7, 13)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(PredName_7, 14)) == (MR_Integer) 100)))) && (((MR_nth_code_unit(PredName_7, 15)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(PredName_7, 16)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(PredName_7, 17)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(PredName_7, 18)) == (MR_Integer) 116))))
                        switch (MR_nth_code_unit(PredName_7, 19)) {
                          case (MR_Integer) 54:
                            if (((((((((((((((((((((((((MR_nth_code_unit(PredName_7, 20)) == (MR_Integer) 52)) && (((MR_nth_code_unit(PredName_7, 21)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(PredName_7, 22)) == (MR_Integer) 99)))) && (((MR_nth_code_unit(PredName_7, 23)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(PredName_7, 24)) == (MR_Integer) 109)))) && (((MR_nth_code_unit(PredName_7, 25)) == (MR_Integer) 112)))) && (((MR_nth_code_unit(PredName_7, 26)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(PredName_7, 27)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(PredName_7, 28)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(PredName_7, 29)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(PredName_7, 30)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(PredName_7, 31)) == (MR_Integer) 95))))
                              switch (MR_nth_code_unit(PredName_7, 32)) {
                                case (MR_Integer) 110:
                                  if (((((((((((((((MR_nth_code_unit(PredName_7, 33)) == (MR_Integer) 111)) && (((MR_nth_code_unit(PredName_7, 34)) == (MR_Integer) 119)))) && (((MR_nth_code_unit(PredName_7, 35)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(PredName_7, 36)) == (MR_Integer) 100)))) && (((MR_nth_code_unit(PredName_7, 37)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(PredName_7, 38)) == (MR_Integer) 104)))) && (((MR_nth_code_unit(PredName_7, 39)) == (MR_Integer) 95))))
                                    switch (MR_nth_code_unit(PredName_7, 40)) {
                                      case (MR_Integer) 110:
                                        if (MR_offset_streq(41, PredName_7, (MR_String) "format_unsigned_int64_component_nowidth_noprec"))
                                          case_num_8 = (MR_Integer) 32;
                                        break;
                                      case (MR_Integer) 112:
                                        if (MR_offset_streq(41, PredName_7, (MR_String) "format_unsigned_int64_component_nowidth_prec"))
                                          case_num_8 = (MR_Integer) 33;
                                        break;
                                    }
                                  break;
                                case (MR_Integer) 119:
                                  if (((((((((((MR_nth_code_unit(PredName_7, 33)) == (MR_Integer) 105)) && (((MR_nth_code_unit(PredName_7, 34)) == (MR_Integer) 100)))) && (((MR_nth_code_unit(PredName_7, 35)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(PredName_7, 36)) == (MR_Integer) 104)))) && (((MR_nth_code_unit(PredName_7, 37)) == (MR_Integer) 95))))
                                    switch (MR_nth_code_unit(PredName_7, 38)) {
                                      case (MR_Integer) 110:
                                        if (MR_offset_streq(39, PredName_7, (MR_String) "format_unsigned_int64_component_width_noprec"))
                                          case_num_8 = (MR_Integer) 34;
                                        break;
                                      case (MR_Integer) 112:
                                        if (MR_offset_streq(39, PredName_7, (MR_String) "format_unsigned_int64_component_width_prec"))
                                          case_num_8 = (MR_Integer) 35;
                                        break;
                                    }
                                  break;
                              }
                            break;
                          case (MR_Integer) 95:
                            if (((((((((((((((((((((MR_nth_code_unit(PredName_7, 20)) == (MR_Integer) 99)) && (((MR_nth_code_unit(PredName_7, 21)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(PredName_7, 22)) == (MR_Integer) 109)))) && (((MR_nth_code_unit(PredName_7, 23)) == (MR_Integer) 112)))) && (((MR_nth_code_unit(PredName_7, 24)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(PredName_7, 25)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(PredName_7, 26)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(PredName_7, 27)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(PredName_7, 28)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(PredName_7, 29)) == (MR_Integer) 95))))
                              switch (MR_nth_code_unit(PredName_7, 30)) {
                                case (MR_Integer) 110:
                                  if (((((((((((((((MR_nth_code_unit(PredName_7, 31)) == (MR_Integer) 111)) && (((MR_nth_code_unit(PredName_7, 32)) == (MR_Integer) 119)))) && (((MR_nth_code_unit(PredName_7, 33)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(PredName_7, 34)) == (MR_Integer) 100)))) && (((MR_nth_code_unit(PredName_7, 35)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(PredName_7, 36)) == (MR_Integer) 104)))) && (((MR_nth_code_unit(PredName_7, 37)) == (MR_Integer) 95))))
                                    switch (MR_nth_code_unit(PredName_7, 38)) {
                                      case (MR_Integer) 110:
                                        if (MR_offset_streq(39, PredName_7, (MR_String) "format_unsigned_int_component_nowidth_noprec"))
                                          case_num_8 = (MR_Integer) 36;
                                        break;
                                      case (MR_Integer) 112:
                                        if (MR_offset_streq(39, PredName_7, (MR_String) "format_unsigned_int_component_nowidth_prec"))
                                          case_num_8 = (MR_Integer) 37;
                                        break;
                                    }
                                  break;
                                case (MR_Integer) 119:
                                  if (((((((((((MR_nth_code_unit(PredName_7, 31)) == (MR_Integer) 105)) && (((MR_nth_code_unit(PredName_7, 32)) == (MR_Integer) 100)))) && (((MR_nth_code_unit(PredName_7, 33)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(PredName_7, 34)) == (MR_Integer) 104)))) && (((MR_nth_code_unit(PredName_7, 35)) == (MR_Integer) 95))))
                                    switch (MR_nth_code_unit(PredName_7, 36)) {
                                      case (MR_Integer) 110:
                                        if (MR_offset_streq(37, PredName_7, (MR_String) "format_unsigned_int_component_width_noprec"))
                                          case_num_8 = (MR_Integer) 38;
                                        break;
                                      case (MR_Integer) 112:
                                        if (MR_offset_streq(37, PredName_7, (MR_String) "format_unsigned_int_component_width_prec"))
                                          case_num_8 = (MR_Integer) 39;
                                        break;
                                    }
                                  break;
                              }
                            break;
                        }
                      break;
                  }
                  break;
              }
            if ((case_num_8 < (MR_Integer) 0))
              succeeded = MR_FALSE;
            else
            {
              // we found a match; look up the results
              ;
              succeeded = MR_TRUE;
            }
          }
        }
        break;
      case (MR_Integer) 12:
        {
          // case "table_builtin"
          ;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 13:
        {
          // case "term_size_builtin"
          ;
          succeeded = MR_TRUE;
        }
        break;
    }
  }
  return succeeded;
}

void mercury__hlds__introduced_call_table__init(void)
{
}

void mercury__hlds__introduced_call_table__init_type_tables(void)
{
}

void mercury__hlds__introduced_call_table__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__introduced_call_table__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module hlds.introduced_call_table.
