/*
** Automatically generated from `introduced_call_table.m'
** by the Mercury compiler,
** version rotd-2026-08-16
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
#include "cord.mih"
#include "enum.mih"
#include "hlds.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
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






struct hlds__introduced_call_table__vector_common_type_1_0_s {
  const MR_String hlds__introduced_call_table__vector_common_type_1_0__vct_1_f_0;
  const MR_Integer hlds__introduced_call_table__vector_common_type_1_0__vct_1_f_1;
};

static /* final */ const struct hlds__introduced_call_table__vector_common_type_1_0_s hlds__introduced_call_table_vector_common_1[30];

struct hlds__introduced_call_table__vector_common_type_2_0_s {
  const MR_String hlds__introduced_call_table__vector_common_type_2_0__vct_2_f_0;
};

static /* final */ const struct hlds__introduced_call_table__vector_common_type_2_0_s hlds__introduced_call_table_vector_common_2[202];




static /* final */ const struct hlds__introduced_call_table__vector_common_type_1_0_s hlds__introduced_call_table_vector_common_1[30] = {
  /* row   0 */
  {
    (MR_String) "compare",
    (MR_Integer) 0
  },
  /* row   1 */
  {
    (MR_String) "compare_representation",
    (MR_Integer) 1
  },
  /* row   2 */
  {
    (MR_String) "copy",
    (MR_Integer) 2
  },
  /* row   3 */
  {
    (MR_String) "unify",
    (MR_Integer) 3
  },
  /* row   4 */
  {
    (MR_String) "rethrow",
    (MR_Integer) 0
  },
  /* row   5 */
  {
    (MR_String) "throw",
    (MR_Integer) 1
  },
  /* row   6 */
  {
    (MR_String) "try",
    (MR_Integer) 2
  },
  /* row   7 */
  {
    (MR_String) "try_io",
    (MR_Integer) 3
  },
  /* row   8 */
  {
    (MR_String) "unreachable",
    (MR_Integer) 4
  },
  /* row   9 */
  {
    (MR_String) "unsafe_try_stm",
    (MR_Integer) 5
  },
  /* row  10 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row  11 */
  {
    (MR_String) "handle_event_fail_nondet",
    (MR_Integer) 2
  },
  /* row  12 */
  {
    (MR_String) "set_context",
    (MR_Integer) -1
  },
  /* row  13 */
  {
    (MR_String) "handle_event_redo_nondet",
    (MR_Integer) -1
  },
  /* row  14 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row  15 */
  {
    (MR_String) "handle_event_call",
    (MR_Integer) -1
  },
  /* row  16 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row  17 */
  {
    (MR_String) "handle_event_exit",
    (MR_Integer) 1
  },
  /* row  18 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row  19 */
  {
    (MR_String) "handle_event_exit_nondet",
    (MR_Integer) 3
  },
  /* row  20 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row  21 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row  22 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row  23 */
  {
    (MR_String) "handle_event_fail",
    (MR_Integer) -1
  },
  /* row  24 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row  25 */
  {
    (MR_String) "handle_event_call_nondet",
    (MR_Integer) -1
  },
  /* row  26 */
  {
    (MR_String) "++",
    (MR_Integer) 0
  },
  /* row  27 */
  {
    (MR_String) "char_to_string",
    (MR_Integer) 1
  },
  /* row  28 */
  {
    (MR_String) "float_to_string",
    (MR_Integer) 2
  },
  /* row  29 */
  {
    (MR_String) "int_to_string",
    (MR_Integer) 3
  },
};

static /* final */ const struct hlds__introduced_call_table__vector_common_type_2_0_s hlds__introduced_call_table_vector_common_2[202] = {
  /* row   0 */   { (MR_String) "*" },
  /* row   1 */   { (MR_String) "unchecked_left_shift" },
  /* row   2 */   { (MR_String) "unchecked_quotient" },
  /* row   3 */   { (MR_String) "unchecked_rem" },
  /* row   4 */   { (MR_String) "unchecked_right_shift" },
  /* row   5 */   { (MR_String) "*" },
  /* row   6 */   { (MR_String) "unchecked_left_shift" },
  /* row   7 */   { (MR_String) "unchecked_quotient" },
  /* row   8 */   { (MR_String) "unchecked_rem" },
  /* row   9 */   { (MR_String) "unchecked_right_shift" },
  /* row  10 */   { (MR_String) "get_future" },
  /* row  11 */   { NULL },
  /* row  12 */   { NULL },
  /* row  13 */   { NULL },
  /* row  14 */   { NULL },
  /* row  15 */   { (MR_String) "signal_future" },
  /* row  16 */   { NULL },
  /* row  17 */   { NULL },
  /* row  18 */   { NULL },
  /* row  19 */   { NULL },
  /* row  20 */   { NULL },
  /* row  21 */   { NULL },
  /* row  22 */   { NULL },
  /* row  23 */   { (MR_String) "lc_join_and_terminate" },
  /* row  24 */   { NULL },
  /* row  25 */   { NULL },
  /* row  26 */   { NULL },
  /* row  27 */   { NULL },
  /* row  28 */   { NULL },
  /* row  29 */   { NULL },
  /* row  30 */   { NULL },
  /* row  31 */   { NULL },
  /* row  32 */   { NULL },
  /* row  33 */   { NULL },
  /* row  34 */   { NULL },
  /* row  35 */   { NULL },
  /* row  36 */   { NULL },
  /* row  37 */   { NULL },
  /* row  38 */   { NULL },
  /* row  39 */   { NULL },
  /* row  40 */   { (MR_String) "new_future" },
  /* row  41 */   { NULL },
  /* row  42 */   { NULL },
  /* row  43 */   { NULL },
  /* row  44 */   { NULL },
  /* row  45 */   { NULL },
  /* row  46 */   { (MR_String) "lc_wait_free_slot" },
  /* row  47 */   { NULL },
  /* row  48 */   { (MR_String) "lc_finish" },
  /* row  49 */   { NULL },
  /* row  50 */   { NULL },
  /* row  51 */   { NULL },
  /* row  52 */   { NULL },
  /* row  53 */   { NULL },
  /* row  54 */   { (MR_String) "evaluate_parallelism_condition" },
  /* row  55 */   { NULL },
  /* row  56 */   { NULL },
  /* row  57 */   { NULL },
  /* row  58 */   { NULL },
  /* row  59 */   { NULL },
  /* row  60 */   { NULL },
  /* row  61 */   { NULL },
  /* row  62 */   { (MR_String) "wait_future" },
  /* row  63 */   { NULL },
  /* row  64 */   { NULL },
  /* row  65 */   { NULL },
  /* row  66 */   { NULL },
  /* row  67 */   { NULL },
  /* row  68 */   { NULL },
  /* row  69 */   { (MR_String) "lc_create" },
  /* row  70 */   { NULL },
  /* row  71 */   { NULL },
  /* row  72 */   { (MR_String) "lc_default_num_contexts" },
  /* row  73 */   { NULL },
  /* row  74 */   { NULL },
  /* row  75 */   { NULL },
  /* row  76 */   { NULL },
  /* row  77 */   { NULL },
  /* row  78 */   { NULL },
  /* row  79 */   { (MR_String) "stm_from_inner_to_outer" },
  /* row  80 */   { NULL },
  /* row  81 */   { NULL },
  /* row  82 */   { (MR_String) "stm_discard_transaction_log" },
  /* row  83 */   { NULL },
  /* row  84 */   { NULL },
  /* row  85 */   { NULL },
  /* row  86 */   { NULL },
  /* row  87 */   { NULL },
  /* row  88 */   { (MR_String) "stm_create_nested_transaction_log" },
  /* row  89 */   { NULL },
  /* row  90 */   { NULL },
  /* row  91 */   { NULL },
  /* row  92 */   { NULL },
  /* row  93 */   { NULL },
  /* row  94 */   { NULL },
  /* row  95 */   { (MR_String) "stm_unlock" },
  /* row  96 */   { NULL },
  /* row  97 */   { (MR_String) "stm_block" },
  /* row  98 */   { NULL },
  /* row  99 */   { NULL },
  /* row 100 */   { NULL },
  /* row 101 */   { NULL },
  /* row 102 */   { NULL },
  /* row 103 */   { NULL },
  /* row 104 */   { NULL },
  /* row 105 */   { NULL },
  /* row 106 */   { NULL },
  /* row 107 */   { NULL },
  /* row 108 */   { NULL },
  /* row 109 */   { NULL },
  /* row 110 */   { (MR_String) "stm_lock" },
  /* row 111 */   { NULL },
  /* row 112 */   { (MR_String) "stm_commit" },
  /* row 113 */   { (MR_String) "stm_create_transaction_log" },
  /* row 114 */   { NULL },
  /* row 115 */   { NULL },
  /* row 116 */   { NULL },
  /* row 117 */   { NULL },
  /* row 118 */   { (MR_String) "stm_merge_nested_logs" },
  /* row 119 */   { NULL },
  /* row 120 */   { NULL },
  /* row 121 */   { NULL },
  /* row 122 */   { NULL },
  /* row 123 */   { (MR_String) "stm_validate" },
  /* row 124 */   { NULL },
  /* row 125 */   { NULL },
  /* row 126 */   { NULL },
  /* row 127 */   { (MR_String) "stm_from_outer_to_inner" },
  /* row 128 */   { NULL },
  /* row 129 */   { NULL },
  /* row 130 */   { NULL },
  /* row 131 */   { NULL },
  /* row 132 */   { NULL },
  /* row 133 */   { NULL },
  /* row 134 */   { NULL },
  /* row 135 */   { NULL },
  /* row 136 */   { NULL },
  /* row 137 */   { NULL },
  /* row 138 */   { NULL },
  /* row 139 */   { NULL },
  /* row 140 */   { NULL },
  /* row 141 */   { NULL },
  /* row 142 */   { NULL },
  /* row 143 */   { NULL },
  /* row 144 */   { NULL },
  /* row 145 */   { NULL },
  /* row 146 */   { NULL },
  /* row 147 */   { NULL },
  /* row 148 */   { NULL },
  /* row 149 */   { NULL },
  /* row 150 */   { NULL },
  /* row 151 */   { NULL },
  /* row 152 */   { NULL },
  /* row 153 */   { NULL },
  /* row 154 */   { (MR_String) "measure_size" },
  /* row 155 */   { NULL },
  /* row 156 */   { (MR_String) "measure_size_acc" },
  /* row 157 */   { NULL },
  /* row 158 */   { NULL },
  /* row 159 */   { NULL },
  /* row 160 */   { NULL },
  /* row 161 */   { NULL },
  /* row 162 */   { (MR_String) "complexity_call_proc" },
  /* row 163 */   { NULL },
  /* row 164 */   { NULL },
  /* row 165 */   { NULL },
  /* row 166 */   { NULL },
  /* row 167 */   { NULL },
  /* row 168 */   { NULL },
  /* row 169 */   { NULL },
  /* row 170 */   { (MR_String) "complexity_is_active" },
  /* row 171 */   { (MR_String) "increment_size" },
  /* row 172 */   { NULL },
  /* row 173 */   { NULL },
  /* row 174 */   { NULL },
  /* row 175 */   { NULL },
  /* row 176 */   { NULL },
  /* row 177 */   { NULL },
  /* row 178 */   { NULL },
  /* row 179 */   { NULL },
  /* row 180 */   { NULL },
  /* row 181 */   { NULL },
  /* row 182 */   { NULL },
  /* row 183 */   { NULL },
  /* row 184 */   { (MR_String) "complexity_exit_proc" },
  /* row 185 */   { NULL },
  /* row 186 */   { NULL },
  /* row 187 */   { NULL },
  /* row 188 */   { NULL },
  /* row 189 */   { NULL },
  /* row 190 */   { NULL },
  /* row 191 */   { NULL },
  /* row 192 */   { NULL },
  /* row 193 */   { NULL },
  /* row 194 */   { (MR_String) "complexity_fail_proc" },
  /* row 195 */   { NULL },
  /* row 196 */   { NULL },
  /* row 197 */   { (MR_String) "term_size_plus" },
  /* row 198 */   { NULL },
  /* row 199 */   { NULL },
  /* row 200 */   { (MR_String) "complexity_redo_proc" },
  /* row 201 */   { NULL },
};




MR_bool MR_CALL 
hlds__introduced_call_table__may_introduce_calls_to_4_p_0(
  MR_Word PredOrFunc_5,
  MR_String ModuleName_6,
  MR_String PredName_7,
  MR_Word HeadVar__4_4)
{
  MR_bool succeeded;
  MR_Integer OrigArity_8 = (MR_Integer) (HeadVar__4_4);

  {
    MR_Integer case_num_32 = (MR_Integer) -1;

    switch (MR_nth_code_unit(ModuleName_6, 0)) {
      case (MR_Integer) 98:
        if (MR_offset_streq(1, ModuleName_6, (MR_String) "builtin"))
          case_num_32 = (MR_Integer) 0;
        break;
      case (MR_Integer) 101:
        if (MR_offset_streq(1, ModuleName_6, (MR_String) "exception"))
          case_num_32 = (MR_Integer) 1;
        break;
      case (MR_Integer) 105:
        switch (MR_nth_code_unit(ModuleName_6, 1)) {
          case (MR_Integer) 110:
            switch (MR_nth_code_unit(ModuleName_6, 2)) {
              case (MR_Integer) 116:
                switch (MR_nth_code_unit(ModuleName_6, 3)) {
                  case (MR_Integer) 0:
                    case_num_32 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 49:
                    if (MR_offset_streq(4, ModuleName_6, (MR_String) "int16"))
                      case_num_32 = (MR_Integer) 3;
                    break;
                  case (MR_Integer) 51:
                    if (MR_offset_streq(4, ModuleName_6, (MR_String) "int32"))
                      case_num_32 = (MR_Integer) 3;
                    break;
                  case (MR_Integer) 54:
                    if (MR_offset_streq(4, ModuleName_6, (MR_String) "int64"))
                      case_num_32 = (MR_Integer) 3;
                    break;
                  case (MR_Integer) 56:
                    if (MR_offset_streq(4, ModuleName_6, (MR_String) "int8"))
                      case_num_32 = (MR_Integer) 3;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 111:
            if (MR_offset_streq(2, ModuleName_6, (MR_String) "io"))
              case_num_32 = (MR_Integer) 4;
            break;
        }
        break;
      case (MR_Integer) 112:
        switch (MR_nth_code_unit(ModuleName_6, 1)) {
          case (MR_Integer) 97:
            if (MR_offset_streq(2, ModuleName_6, (MR_String) "par_builtin"))
              case_num_32 = (MR_Integer) 5;
            break;
          case (MR_Integer) 114:
            switch (MR_nth_code_unit(ModuleName_6, 2)) {
              case (MR_Integer) 105:
                if (MR_offset_streq(3, ModuleName_6, (MR_String) "private_builtin"))
                  case_num_32 = (MR_Integer) 6;
                break;
              case (MR_Integer) 111:
                if (MR_offset_streq(3, ModuleName_6, (MR_String) "profiling_builtin"))
                  case_num_32 = (MR_Integer) 7;
                break;
            }
            break;
        }
        break;
      case (MR_Integer) 114:
        if (MR_offset_streq(1, ModuleName_6, (MR_String) "region_builtin"))
          case_num_32 = (MR_Integer) 8;
        break;
      case (MR_Integer) 115:
        switch (MR_nth_code_unit(ModuleName_6, 1)) {
          case (MR_Integer) 115:
            if (MR_offset_streq(2, ModuleName_6, (MR_String) "ssdb"))
              case_num_32 = (MR_Integer) 9;
            break;
          case (MR_Integer) 116:
            switch (MR_nth_code_unit(ModuleName_6, 2)) {
              case (MR_Integer) 109:
                if (MR_offset_streq(3, ModuleName_6, (MR_String) "stm_builtin"))
                  case_num_32 = (MR_Integer) 10;
                break;
              case (MR_Integer) 114:
                switch (MR_nth_code_unit(ModuleName_6, 3)) {
                  case (MR_Integer) 101:
                    if (MR_offset_streq(4, ModuleName_6, (MR_String) "stream"))
                      case_num_32 = (MR_Integer) 11;
                    break;
                  case (MR_Integer) 105:
                    if (MR_offset_strn_eq(4, 2, ModuleName_6, (MR_String) "string"))
                      switch (MR_nth_code_unit(ModuleName_6, 6)) {
                        case (MR_Integer) 0:
                          case_num_32 = (MR_Integer) 12;
                          break;
                        case (MR_Integer) 46:
                          switch (MR_nth_code_unit(ModuleName_6, 7)) {
                            case (MR_Integer) 98:
                              if (MR_offset_streq(8, ModuleName_6, (MR_String) "string.builder"))
                                case_num_32 = (MR_Integer) 13;
                              break;
                            case (MR_Integer) 102:
                              if (MR_offset_streq(8, ModuleName_6, (MR_String) "string.format"))
                                case_num_32 = (MR_Integer) 14;
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
        break;
      case (MR_Integer) 116:
        switch (MR_nth_code_unit(ModuleName_6, 1)) {
          case (MR_Integer) 97:
            if (MR_offset_streq(2, ModuleName_6, (MR_String) "table_builtin"))
              case_num_32 = (MR_Integer) 15;
            break;
          case (MR_Integer) 101:
            if (MR_offset_streq(2, ModuleName_6, (MR_String) "term_size_prof_builtin"))
              case_num_32 = (MR_Integer) 16;
            break;
        }
        break;
      case (MR_Integer) 117:
        switch (MR_nth_code_unit(ModuleName_6, 1)) {
          case (MR_Integer) 105:
            if (MR_offset_strn_eq(2, 2, ModuleName_6, (MR_String) "uint"))
              switch (MR_nth_code_unit(ModuleName_6, 4)) {
                case (MR_Integer) 0:
                  case_num_32 = (MR_Integer) 3;
                  break;
                case (MR_Integer) 49:
                  if (MR_offset_streq(5, ModuleName_6, (MR_String) "uint16"))
                    case_num_32 = (MR_Integer) 3;
                  break;
                case (MR_Integer) 51:
                  if (MR_offset_streq(5, ModuleName_6, (MR_String) "uint32"))
                    case_num_32 = (MR_Integer) 3;
                  break;
                case (MR_Integer) 54:
                  if (MR_offset_streq(5, ModuleName_6, (MR_String) "uint64"))
                    case_num_32 = (MR_Integer) 3;
                  break;
                case (MR_Integer) 56:
                  if (MR_offset_streq(5, ModuleName_6, (MR_String) "uint8"))
                    case_num_32 = (MR_Integer) 3;
                  break;
              }
            break;
          case (MR_Integer) 110:
            if (MR_offset_streq(2, ModuleName_6, (MR_String) "univ"))
              case_num_32 = (MR_Integer) 17;
            break;
        }
        break;
    }
    switch (case_num_32) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        {
          // case "builtin"
          ;
          {
            MR_Integer lo_0 = (MR_Integer) 0;
            MR_Integer hi_1 = (MR_Integer) 3;
            MR_Integer mid_2;
            MR_Integer result_3;

            // binary string jump switch
            ;
            do
            {
              mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
              result_3 = MR_strcmp(PredName_7, ((&hlds__introduced_call_table_vector_common_1[0 + mid_2]))->hlds__introduced_call_table__vector_common_type_1_0__vct_1_f_0);
              if ((result_3 == (MR_Integer) 0))
              {
                switch (((&hlds__introduced_call_table_vector_common_1[0 + mid_2]))->hlds__introduced_call_table__vector_common_type_1_0__vct_1_f_1) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      // case "compare"
                      ;
                      succeeded = (OrigArity_8 == (MR_Integer) 3);
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      // case "compare_representation"
                      ;
                      succeeded = (OrigArity_8 == (MR_Integer) 3);
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      // case "copy"
                      ;
                      succeeded = (OrigArity_8 == (MR_Integer) 2);
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      // case "unify"
                      ;
                      succeeded = (OrigArity_8 == (MR_Integer) 2);
                    }
                    break;
                }
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
            if (succeeded)
              succeeded = (PredOrFunc_5 == (MR_Integer) 0);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          // case "exception"
          ;
          {
            MR_Integer lo_4 = (MR_Integer) 0;
            MR_Integer hi_5 = (MR_Integer) 5;
            MR_Integer mid_6;
            MR_Integer result_7;

            // binary string jump switch
            ;
            do
            {
              mid_6 = (((MR_Integer) ((MR_Unsigned) lo_4 + (MR_Unsigned) hi_5)) / (MR_Integer) 2);
              result_7 = MR_strcmp(PredName_7, ((&hlds__introduced_call_table_vector_common_1[4 + mid_6]))->hlds__introduced_call_table__vector_common_type_1_0__vct_1_f_0);
              if ((result_7 == (MR_Integer) 0))
              {
                switch (((&hlds__introduced_call_table_vector_common_1[4 + mid_6]))->hlds__introduced_call_table__vector_common_type_1_0__vct_1_f_1) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      // case "rethrow"
                      ;
                      succeeded = (OrigArity_8 == (MR_Integer) 1);
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      // case "throw"
                      ;
                      succeeded = (OrigArity_8 == (MR_Integer) 1);
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      // case "try"
                      ;
                      succeeded = (OrigArity_8 == (MR_Integer) 2);
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      // case "try_io"
                      ;
                      succeeded = (OrigArity_8 == (MR_Integer) 4);
                    }
                    break;
                  case (MR_Integer) 4:
                    {
                      // case "unreachable"
                      ;
                      succeeded = (OrigArity_8 == (MR_Integer) 0);
                    }
                    break;
                  case (MR_Integer) 5:
                    {
                      // case "unsafe_try_stm"
                      ;
                      succeeded = (OrigArity_8 == (MR_Integer) 4);
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
            if (succeeded)
              succeeded = (PredOrFunc_5 == (MR_Integer) 0);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          // case "int"
          ;
          succeeded = (strcmp(PredName_7, (MR_String) "minus") == 0);
          if (succeeded)
            succeeded = (OrigArity_8 == (MR_Integer) 3);
          if (!(succeeded))
          {
            MR_Integer lo_8;
            MR_Integer hi_9;
            MR_Integer mid_10;
            MR_Integer result_11;

            succeeded = (OrigArity_8 == (MR_Integer) 3);
            if (succeeded)
            {
              // binary string simple lookup switch
              ;
              lo_8 = (MR_Integer) 0;
              hi_9 = (MR_Integer) 4;
              do
              {
                mid_10 = (((MR_Integer) ((MR_Unsigned) lo_8 + (MR_Unsigned) hi_9)) / (MR_Integer) 2);
                result_11 = MR_strcmp(PredName_7, ((&hlds__introduced_call_table_vector_common_2[0 + mid_10]))->hlds__introduced_call_table__vector_common_type_2_0__vct_2_f_0);
                if ((result_11 == (MR_Integer) 0))
                {
                  succeeded = MR_TRUE;
                  // jump out of search loop
                  ;
                  goto label_2;
                }
                else
                if ((result_11 < (MR_Integer) 0))
                  hi_9 = (MR_Integer) ((MR_Unsigned) mid_10 - (MR_Unsigned) 1);
                else
                  lo_8 = (MR_Integer) ((MR_Unsigned) mid_10 + (MR_Unsigned) 1);
              }
              while ((lo_8 <= hi_9));
              succeeded = MR_FALSE;
            label_2:;
            }
          }
          if (succeeded)
            succeeded = (PredOrFunc_5 == (MR_Integer) 1);
        }
        break;
      case (MR_Integer) 3:
        {
          // case "int16", "int32", "int64", "int8", "uint", "uint16", "uint32", "uint64", "uint8"
          ;
          {
            MR_Integer lo_12;
            MR_Integer hi_13;
            MR_Integer mid_14;
            MR_Integer result_15;

            succeeded = (OrigArity_8 == (MR_Integer) 3);
            if (succeeded)
            {
              // binary string simple lookup switch
              ;
              lo_12 = (MR_Integer) 0;
              hi_13 = (MR_Integer) 4;
              do
              {
                mid_14 = (((MR_Integer) ((MR_Unsigned) lo_12 + (MR_Unsigned) hi_13)) / (MR_Integer) 2);
                result_15 = MR_strcmp(PredName_7, ((&hlds__introduced_call_table_vector_common_2[5 + mid_14]))->hlds__introduced_call_table__vector_common_type_2_0__vct_2_f_0);
                if ((result_15 == (MR_Integer) 0))
                {
                  succeeded = MR_TRUE;
                  // jump out of search loop
                  ;
                  goto label_3;
                }
                else
                if ((result_15 < (MR_Integer) 0))
                  hi_13 = (MR_Integer) ((MR_Unsigned) mid_14 - (MR_Unsigned) 1);
                else
                  lo_12 = (MR_Integer) ((MR_Unsigned) mid_14 + (MR_Unsigned) 1);
              }
              while ((lo_12 <= hi_13));
              succeeded = MR_FALSE;
            label_3:;
              if (succeeded)
                succeeded = (PredOrFunc_5 == (MR_Integer) 1);
            }
          }
        }
        break;
      case (MR_Integer) 4:
        {
          // case "io"
          ;
          succeeded = (strcmp(PredName_7, (MR_String) "write_string") == 0);
          if (succeeded)
          {
            switch (OrigArity_8) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 3:
                succeeded = MR_TRUE;
                break;
              case (MR_Integer) 4:
                succeeded = MR_TRUE;
                break;
            }
            if (succeeded)
              succeeded = (PredOrFunc_5 == (MR_Integer) 0);
          }
        }
        break;
      case (MR_Integer) 5:
        {
          // case "par_builtin"
          ;
          {
            MR_Integer slot_16 = ((MR_hash_string6(PredName_7)) & (MR_Integer) 63);
            MR_String str_17 = ((&hlds__introduced_call_table_vector_common_2[10 + slot_16]))->hlds__introduced_call_table__vector_common_type_2_0__vct_2_f_0;

            // hashed string jump switch
            ;
            // compute the hash value of the input string
            ;
            // no collisions; no hash chain loop
            ;
            // lookup the string for this hash slot
            ;
            // did we find a match?
            ;
            if ((((str_17 != NULL)) && ((strcmp(str_17, PredName_7) == 0))))
            {
              // we found a match; dispatch to the corresponding code
              ;
              switch (slot_16) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    // case "get_future"
                    ;
                    succeeded = (OrigArity_8 == (MR_Integer) 2);
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    // case "signal_future"
                    ;
                    succeeded = (OrigArity_8 == (MR_Integer) 2);
                  }
                  break;
                case (MR_Integer) 13:
                  {
                    // case "lc_join_and_terminate"
                    ;
                    succeeded = (OrigArity_8 == (MR_Integer) 2);
                  }
                  break;
                case (MR_Integer) 30:
                  {
                    // case "new_future"
                    ;
                    succeeded = (OrigArity_8 == (MR_Integer) 2);
                  }
                  break;
                case (MR_Integer) 36:
                  {
                    // case "lc_wait_free_slot"
                    ;
                    succeeded = (OrigArity_8 == (MR_Integer) 2);
                  }
                  break;
                case (MR_Integer) 38:
                  {
                    // case "lc_finish"
                    ;
                    succeeded = (OrigArity_8 == (MR_Integer) 1);
                  }
                  break;
                case (MR_Integer) 44:
                  {
                    // case "evaluate_parallelism_condition"
                    ;
                    succeeded = (OrigArity_8 == (MR_Integer) 0);
                  }
                  break;
                case (MR_Integer) 52:
                  {
                    // case "wait_future"
                    ;
                    succeeded = (OrigArity_8 == (MR_Integer) 2);
                  }
                  break;
                case (MR_Integer) 59:
                  {
                    // case "lc_create"
                    ;
                    succeeded = (OrigArity_8 == (MR_Integer) 2);
                  }
                  break;
                case (MR_Integer) 62:
                  {
                    // case "lc_default_num_contexts"
                    ;
                    succeeded = (OrigArity_8 == (MR_Integer) 1);
                  }
                  break;
              }
              // jump out of search loop
              ;
              goto label_4;
            }
            succeeded = MR_FALSE;
          label_4:;
            if (succeeded)
              succeeded = (PredOrFunc_5 == (MR_Integer) 0);
          }
        }
        break;
      case (MR_Integer) 6:
        {
          // case "private_builtin"
          ;
          {
            MR_Integer case_num_18 = (MR_Integer) -1;

            switch (MR_nth_code_unit(PredName_7, 0)) {
              case (MR_Integer) 98:
                if (MR_offset_strn_eq(1, 7, PredName_7, (MR_String) "builtin_"))
                  switch (MR_nth_code_unit(PredName_7, 8)) {
                    case (MR_Integer) 99:
                      if (MR_offset_strn_eq(9, 6, PredName_7, (MR_String) "builtin_compare"))
                        switch (MR_nth_code_unit(PredName_7, 15)) {
                          case (MR_Integer) 0:
                            case_num_18 = (MR_Integer) 0;
                            break;
                          case (MR_Integer) 95:
                            switch (MR_nth_code_unit(PredName_7, 16)) {
                              case (MR_Integer) 99:
                                if (MR_offset_streq(17, PredName_7, (MR_String) "builtin_compare_character"))
                                  case_num_18 = (MR_Integer) 1;
                                break;
                              case (MR_Integer) 102:
                                if (MR_offset_streq(17, PredName_7, (MR_String) "builtin_compare_float"))
                                  case_num_18 = (MR_Integer) 2;
                                break;
                              case (MR_Integer) 105:
                                if (MR_offset_strn_eq(17, 2, PredName_7, (MR_String) "builtin_compare_int"))
                                  switch (MR_nth_code_unit(PredName_7, 19)) {
                                    case (MR_Integer) 0:
                                      case_num_18 = (MR_Integer) 3;
                                      break;
                                    case (MR_Integer) 49:
                                      if (MR_offset_streq(20, PredName_7, (MR_String) "builtin_compare_int16"))
                                        case_num_18 = (MR_Integer) 4;
                                      break;
                                    case (MR_Integer) 51:
                                      if (MR_offset_streq(20, PredName_7, (MR_String) "builtin_compare_int32"))
                                        case_num_18 = (MR_Integer) 5;
                                      break;
                                    case (MR_Integer) 54:
                                      if (MR_offset_streq(20, PredName_7, (MR_String) "builtin_compare_int64"))
                                        case_num_18 = (MR_Integer) 6;
                                      break;
                                    case (MR_Integer) 56:
                                      if (MR_offset_streq(20, PredName_7, (MR_String) "builtin_compare_int8"))
                                        case_num_18 = (MR_Integer) 7;
                                      break;
                                  }
                                break;
                              case (MR_Integer) 110:
                                if (MR_offset_streq(17, PredName_7, (MR_String) "builtin_compare_non_canonical_type"))
                                  case_num_18 = (MR_Integer) 8;
                                break;
                              case (MR_Integer) 112:
                                if (MR_offset_streq(17, PredName_7, (MR_String) "builtin_compare_pred"))
                                  case_num_18 = (MR_Integer) 9;
                                break;
                              case (MR_Integer) 115:
                                switch (MR_nth_code_unit(PredName_7, 17)) {
                                  case (MR_Integer) 111:
                                    if (MR_offset_streq(18, PredName_7, (MR_String) "builtin_compare_solver_type"))
                                      case_num_18 = (MR_Integer) 10;
                                    break;
                                  case (MR_Integer) 116:
                                    if (MR_offset_streq(18, PredName_7, (MR_String) "builtin_compare_string"))
                                      case_num_18 = (MR_Integer) 11;
                                    break;
                                }
                                break;
                              case (MR_Integer) 117:
                                if (MR_offset_strn_eq(17, 3, PredName_7, (MR_String) "builtin_compare_uint"))
                                  switch (MR_nth_code_unit(PredName_7, 20)) {
                                    case (MR_Integer) 0:
                                      case_num_18 = (MR_Integer) 12;
                                      break;
                                    case (MR_Integer) 49:
                                      if (MR_offset_streq(21, PredName_7, (MR_String) "builtin_compare_uint16"))
                                        case_num_18 = (MR_Integer) 13;
                                      break;
                                    case (MR_Integer) 51:
                                      if (MR_offset_streq(21, PredName_7, (MR_String) "builtin_compare_uint32"))
                                        case_num_18 = (MR_Integer) 14;
                                      break;
                                    case (MR_Integer) 54:
                                      if (MR_offset_streq(21, PredName_7, (MR_String) "builtin_compare_uint64"))
                                        case_num_18 = (MR_Integer) 15;
                                      break;
                                    case (MR_Integer) 56:
                                      if (MR_offset_streq(21, PredName_7, (MR_String) "builtin_compare_uint8"))
                                        case_num_18 = (MR_Integer) 16;
                                      break;
                                  }
                                break;
                            }
                            break;
                        }
                      break;
                    case (MR_Integer) 105:
                      switch (MR_nth_code_unit(PredName_7, 9)) {
                        case (MR_Integer) 110:
                          switch (MR_nth_code_unit(PredName_7, 10)) {
                            case (MR_Integer) 100:
                              if (MR_offset_streq(11, PredName_7, (MR_String) "builtin_index"))
                                case_num_18 = (MR_Integer) 17;
                              break;
                            case (MR_Integer) 116:
                              switch (MR_nth_code_unit(PredName_7, 11)) {
                                case (MR_Integer) 49:
                                  if (MR_offset_strn_eq(12, 2, PredName_7, (MR_String) "builtin_int16_"))
                                    switch (MR_nth_code_unit(PredName_7, 14)) {
                                      case (MR_Integer) 103:
                                        if (MR_offset_streq(15, PredName_7, (MR_String) "builtin_int16_gt"))
                                          case_num_18 = (MR_Integer) 18;
                                        break;
                                      case (MR_Integer) 108:
                                        if (MR_offset_streq(15, PredName_7, (MR_String) "builtin_int16_lt"))
                                          case_num_18 = (MR_Integer) 19;
                                        break;
                                    }
                                  break;
                                case (MR_Integer) 51:
                                  if (MR_offset_strn_eq(12, 2, PredName_7, (MR_String) "builtin_int32_"))
                                    switch (MR_nth_code_unit(PredName_7, 14)) {
                                      case (MR_Integer) 103:
                                        if (MR_offset_streq(15, PredName_7, (MR_String) "builtin_int32_gt"))
                                          case_num_18 = (MR_Integer) 20;
                                        break;
                                      case (MR_Integer) 108:
                                        if (MR_offset_streq(15, PredName_7, (MR_String) "builtin_int32_lt"))
                                          case_num_18 = (MR_Integer) 21;
                                        break;
                                    }
                                  break;
                                case (MR_Integer) 54:
                                  if (MR_offset_strn_eq(12, 2, PredName_7, (MR_String) "builtin_int64_"))
                                    switch (MR_nth_code_unit(PredName_7, 14)) {
                                      case (MR_Integer) 103:
                                        if (MR_offset_streq(15, PredName_7, (MR_String) "builtin_int64_gt"))
                                          case_num_18 = (MR_Integer) 22;
                                        break;
                                      case (MR_Integer) 108:
                                        if (MR_offset_streq(15, PredName_7, (MR_String) "builtin_int64_lt"))
                                          case_num_18 = (MR_Integer) 23;
                                        break;
                                    }
                                  break;
                                case (MR_Integer) 56:
                                  switch (MR_nth_code_unit(PredName_7, 12)) {
                                    case (MR_Integer) 95:
                                      switch (MR_nth_code_unit(PredName_7, 13)) {
                                        case (MR_Integer) 103:
                                          if (MR_offset_streq(14, PredName_7, (MR_String) "builtin_int8_gt"))
                                            case_num_18 = (MR_Integer) 24;
                                          break;
                                        case (MR_Integer) 108:
                                          if (MR_offset_streq(14, PredName_7, (MR_String) "builtin_int8_lt"))
                                            case_num_18 = (MR_Integer) 25;
                                          break;
                                      }
                                      break;
                                  }
                                  break;
                                case (MR_Integer) 95:
                                  switch (MR_nth_code_unit(PredName_7, 12)) {
                                    case (MR_Integer) 103:
                                      if (MR_offset_streq(13, PredName_7, (MR_String) "builtin_int_gt"))
                                        case_num_18 = (MR_Integer) 26;
                                      break;
                                    case (MR_Integer) 108:
                                      if (MR_offset_streq(13, PredName_7, (MR_String) "builtin_int_lt"))
                                        case_num_18 = (MR_Integer) 27;
                                      break;
                                  }
                                  break;
                              }
                              break;
                          }
                          break;
                      }
                      break;
                    case (MR_Integer) 117:
                      switch (MR_nth_code_unit(PredName_7, 9)) {
                        case (MR_Integer) 105:
                          if (MR_offset_strn_eq(10, 2, PredName_7, (MR_String) "builtin_uint"))
                            switch (MR_nth_code_unit(PredName_7, 12)) {
                              case (MR_Integer) 49:
                                if (MR_offset_strn_eq(13, 2, PredName_7, (MR_String) "builtin_uint16_"))
                                  switch (MR_nth_code_unit(PredName_7, 15)) {
                                    case (MR_Integer) 103:
                                      if (MR_offset_streq(16, PredName_7, (MR_String) "builtin_uint16_gt"))
                                        case_num_18 = (MR_Integer) 28;
                                      break;
                                    case (MR_Integer) 108:
                                      if (MR_offset_streq(16, PredName_7, (MR_String) "builtin_uint16_lt"))
                                        case_num_18 = (MR_Integer) 29;
                                      break;
                                  }
                                break;
                              case (MR_Integer) 51:
                                if (MR_offset_strn_eq(13, 2, PredName_7, (MR_String) "builtin_uint32_"))
                                  switch (MR_nth_code_unit(PredName_7, 15)) {
                                    case (MR_Integer) 103:
                                      if (MR_offset_streq(16, PredName_7, (MR_String) "builtin_uint32_gt"))
                                        case_num_18 = (MR_Integer) 30;
                                      break;
                                    case (MR_Integer) 108:
                                      if (MR_offset_streq(16, PredName_7, (MR_String) "builtin_uint32_lt"))
                                        case_num_18 = (MR_Integer) 31;
                                      break;
                                  }
                                break;
                              case (MR_Integer) 54:
                                if (MR_offset_strn_eq(13, 2, PredName_7, (MR_String) "builtin_uint64_"))
                                  switch (MR_nth_code_unit(PredName_7, 15)) {
                                    case (MR_Integer) 103:
                                      if (MR_offset_streq(16, PredName_7, (MR_String) "builtin_uint64_gt"))
                                        case_num_18 = (MR_Integer) 32;
                                      break;
                                    case (MR_Integer) 108:
                                      if (MR_offset_streq(16, PredName_7, (MR_String) "builtin_uint64_lt"))
                                        case_num_18 = (MR_Integer) 33;
                                      break;
                                  }
                                break;
                              case (MR_Integer) 56:
                                switch (MR_nth_code_unit(PredName_7, 13)) {
                                  case (MR_Integer) 95:
                                    switch (MR_nth_code_unit(PredName_7, 14)) {
                                      case (MR_Integer) 103:
                                        if (MR_offset_streq(15, PredName_7, (MR_String) "builtin_uint8_gt"))
                                          case_num_18 = (MR_Integer) 34;
                                        break;
                                      case (MR_Integer) 108:
                                        if (MR_offset_streq(15, PredName_7, (MR_String) "builtin_uint8_lt"))
                                          case_num_18 = (MR_Integer) 35;
                                        break;
                                    }
                                    break;
                                }
                                break;
                              case (MR_Integer) 95:
                                switch (MR_nth_code_unit(PredName_7, 13)) {
                                  case (MR_Integer) 103:
                                    if (MR_offset_streq(14, PredName_7, (MR_String) "builtin_uint_gt"))
                                      case_num_18 = (MR_Integer) 36;
                                    break;
                                  case (MR_Integer) 108:
                                    if (MR_offset_streq(14, PredName_7, (MR_String) "builtin_uint_lt"))
                                      case_num_18 = (MR_Integer) 37;
                                    break;
                                }
                                break;
                            }
                          break;
                        case (MR_Integer) 110:
                          if (MR_offset_strn_eq(10, 3, PredName_7, (MR_String) "builtin_unify"))
                            switch (MR_nth_code_unit(PredName_7, 13)) {
                              case (MR_Integer) 0:
                                case_num_18 = (MR_Integer) 38;
                                break;
                              case (MR_Integer) 95:
                                switch (MR_nth_code_unit(PredName_7, 14)) {
                                  case (MR_Integer) 99:
                                    if (MR_offset_streq(15, PredName_7, (MR_String) "builtin_unify_character"))
                                      case_num_18 = (MR_Integer) 39;
                                    break;
                                  case (MR_Integer) 102:
                                    if (MR_offset_streq(15, PredName_7, (MR_String) "builtin_unify_float"))
                                      case_num_18 = (MR_Integer) 40;
                                    break;
                                  case (MR_Integer) 105:
                                    if (MR_offset_strn_eq(15, 2, PredName_7, (MR_String) "builtin_unify_int"))
                                      switch (MR_nth_code_unit(PredName_7, 17)) {
                                        case (MR_Integer) 0:
                                          case_num_18 = (MR_Integer) 41;
                                          break;
                                        case (MR_Integer) 49:
                                          if (MR_offset_streq(18, PredName_7, (MR_String) "builtin_unify_int16"))
                                            case_num_18 = (MR_Integer) 42;
                                          break;
                                        case (MR_Integer) 51:
                                          if (MR_offset_streq(18, PredName_7, (MR_String) "builtin_unify_int32"))
                                            case_num_18 = (MR_Integer) 43;
                                          break;
                                        case (MR_Integer) 54:
                                          if (MR_offset_streq(18, PredName_7, (MR_String) "builtin_unify_int64"))
                                            case_num_18 = (MR_Integer) 44;
                                          break;
                                        case (MR_Integer) 56:
                                          if (MR_offset_streq(18, PredName_7, (MR_String) "builtin_unify_int8"))
                                            case_num_18 = (MR_Integer) 45;
                                          break;
                                      }
                                    break;
                                  case (MR_Integer) 112:
                                    if (MR_offset_streq(15, PredName_7, (MR_String) "builtin_unify_pred"))
                                      case_num_18 = (MR_Integer) 46;
                                    break;
                                  case (MR_Integer) 115:
                                    switch (MR_nth_code_unit(PredName_7, 15)) {
                                      case (MR_Integer) 111:
                                        if (MR_offset_streq(16, PredName_7, (MR_String) "builtin_unify_solver_type"))
                                          case_num_18 = (MR_Integer) 47;
                                        break;
                                      case (MR_Integer) 116:
                                        if (MR_offset_streq(16, PredName_7, (MR_String) "builtin_unify_string"))
                                          case_num_18 = (MR_Integer) 48;
                                        break;
                                    }
                                    break;
                                  case (MR_Integer) 117:
                                    if (MR_offset_strn_eq(15, 3, PredName_7, (MR_String) "builtin_unify_uint"))
                                      switch (MR_nth_code_unit(PredName_7, 18)) {
                                        case (MR_Integer) 0:
                                          case_num_18 = (MR_Integer) 49;
                                          break;
                                        case (MR_Integer) 49:
                                          if (MR_offset_streq(19, PredName_7, (MR_String) "builtin_unify_uint16"))
                                            case_num_18 = (MR_Integer) 50;
                                          break;
                                        case (MR_Integer) 51:
                                          if (MR_offset_streq(19, PredName_7, (MR_String) "builtin_unify_uint32"))
                                            case_num_18 = (MR_Integer) 51;
                                          break;
                                        case (MR_Integer) 54:
                                          if (MR_offset_streq(19, PredName_7, (MR_String) "builtin_unify_uint64"))
                                            case_num_18 = (MR_Integer) 52;
                                          break;
                                        case (MR_Integer) 56:
                                          if (MR_offset_streq(19, PredName_7, (MR_String) "builtin_unify_uint8"))
                                            case_num_18 = (MR_Integer) 53;
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
                break;
              case (MR_Integer) 99:
                if (MR_offset_streq(1, PredName_7, (MR_String) "compare_error"))
                  case_num_18 = (MR_Integer) 54;
                break;
              case (MR_Integer) 100:
                if (MR_offset_streq(1, PredName_7, (MR_String) "discard_ticket"))
                  case_num_18 = (MR_Integer) 55;
                break;
              case (MR_Integer) 105:
                if (MR_offset_streq(1, PredName_7, (MR_String) "instance_constraint_from_typeclass_info"))
                  case_num_18 = (MR_Integer) 56;
                break;
              case (MR_Integer) 109:
                if (MR_offset_strn_eq(1, 4, PredName_7, (MR_String) "mark_"))
                  switch (MR_nth_code_unit(PredName_7, 5)) {
                    case (MR_Integer) 104:
                      if (MR_offset_streq(6, PredName_7, (MR_String) "mark_hp"))
                        case_num_18 = (MR_Integer) 57;
                      break;
                    case (MR_Integer) 116:
                      if (MR_offset_streq(6, PredName_7, (MR_String) "mark_ticket_stack"))
                        case_num_18 = (MR_Integer) 58;
                      break;
                  }
                break;
              case (MR_Integer) 110:
                if (MR_offset_streq(1, PredName_7, (MR_String) "no_clauses"))
                  case_num_18 = (MR_Integer) 59;
                break;
              case (MR_Integer) 112:
                switch (MR_nth_code_unit(PredName_7, 1)) {
                  case (MR_Integer) 97:
                    if (MR_offset_streq(2, PredName_7, (MR_String) "partial_inst_copy"))
                      case_num_18 = (MR_Integer) 60;
                    break;
                  case (MR_Integer) 114:
                    if (MR_offset_strn_eq(2, 10, PredName_7, (MR_String) "prune_ticket"))
                      switch (MR_nth_code_unit(PredName_7, 12)) {
                        case (MR_Integer) 0:
                          case_num_18 = (MR_Integer) 61;
                          break;
                        case (MR_Integer) 115:
                          if (MR_offset_streq(13, PredName_7, (MR_String) "prune_tickets_to"))
                            case_num_18 = (MR_Integer) 62;
                          break;
                      }
                    break;
                }
                break;
              case (MR_Integer) 114:
                if (MR_offset_strn_eq(1, 2, PredName_7, (MR_String) "res"))
                  switch (MR_nth_code_unit(PredName_7, 3)) {
                    case (MR_Integer) 101:
                      if (MR_offset_strn_eq(4, 9, PredName_7, (MR_String) "reset_ticket_"))
                        switch (MR_nth_code_unit(PredName_7, 13)) {
                          case (MR_Integer) 99:
                            if (MR_offset_streq(14, PredName_7, (MR_String) "reset_ticket_commit"))
                              case_num_18 = (MR_Integer) 63;
                            break;
                          case (MR_Integer) 115:
                            if (MR_offset_streq(14, PredName_7, (MR_String) "reset_ticket_solve"))
                              case_num_18 = (MR_Integer) 64;
                            break;
                          case (MR_Integer) 117:
                            if (MR_offset_streq(14, PredName_7, (MR_String) "reset_ticket_undo"))
                              case_num_18 = (MR_Integer) 65;
                            break;
                        }
                      break;
                    case (MR_Integer) 116:
                      if (MR_offset_streq(4, PredName_7, (MR_String) "restore_hp"))
                        case_num_18 = (MR_Integer) 66;
                      break;
                  }
                break;
              case (MR_Integer) 115:
                switch (MR_nth_code_unit(PredName_7, 1)) {
                  case (MR_Integer) 111:
                    if (MR_offset_streq(2, PredName_7, (MR_String) "sorry"))
                      case_num_18 = (MR_Integer) 67;
                    break;
                  case (MR_Integer) 116:
                    if (MR_offset_strn_eq(2, 4, PredName_7, (MR_String) "store_"))
                      switch (MR_nth_code_unit(PredName_7, 6)) {
                        case (MR_Integer) 97:
                          if (MR_offset_streq(7, PredName_7, (MR_String) "store_at_ref_impure"))
                            case_num_18 = (MR_Integer) 68;
                          break;
                        case (MR_Integer) 116:
                          if (MR_offset_streq(7, PredName_7, (MR_String) "store_ticket"))
                            case_num_18 = (MR_Integer) 69;
                          break;
                      }
                    break;
                  case (MR_Integer) 117:
                    if (MR_offset_streq(2, PredName_7, (MR_String) "superclass_from_typeclass_info"))
                      case_num_18 = (MR_Integer) 70;
                    break;
                }
                break;
              case (MR_Integer) 116:
                switch (MR_nth_code_unit(PredName_7, 1)) {
                  case (MR_Integer) 114:
                    if (MR_offset_streq(2, PredName_7, (MR_String) "trace_evaluate_runtime_condition"))
                      case_num_18 = (MR_Integer) 71;
                    break;
                  case (MR_Integer) 121:
                    if (MR_offset_strn_eq(2, 2, PredName_7, (MR_String) "type"))
                      switch (MR_nth_code_unit(PredName_7, 4)) {
                        case (MR_Integer) 95:
                          if (MR_offset_streq(5, PredName_7, (MR_String) "type_info_from_typeclass_info"))
                            case_num_18 = (MR_Integer) 72;
                          break;
                        case (MR_Integer) 100:
                          switch (MR_nth_code_unit(PredName_7, 5)) {
                            case (MR_Integer) 95:
                              switch (MR_nth_code_unit(PredName_7, 6)) {
                                case (MR_Integer) 99:
                                  if (MR_offset_streq(7, PredName_7, (MR_String) "typed_compare"))
                                    case_num_18 = (MR_Integer) 73;
                                  break;
                                case (MR_Integer) 117:
                                  if (MR_offset_streq(7, PredName_7, (MR_String) "typed_unify"))
                                    case_num_18 = (MR_Integer) 74;
                                  break;
                              }
                              break;
                          }
                          break;
                      }
                    break;
                }
                break;
              case (MR_Integer) 117:
                switch (MR_nth_code_unit(PredName_7, 1)) {
                  case (MR_Integer) 110:
                    switch (MR_nth_code_unit(PredName_7, 2)) {
                      case (MR_Integer) 99:
                        if (MR_offset_streq(3, PredName_7, (MR_String) "unconstrained_type_info_from_typeclass_info"))
                          case_num_18 = (MR_Integer) 75;
                        break;
                      case (MR_Integer) 105:
                        if (MR_offset_streq(3, PredName_7, (MR_String) "unify_remote_arg_words"))
                          case_num_18 = (MR_Integer) 76;
                        break;
                      case (MR_Integer) 117:
                        if (MR_offset_streq(3, PredName_7, (MR_String) "unused"))
                          case_num_18 = (MR_Integer) 77;
                        break;
                    }
                    break;
                }
                break;
            }
            switch (case_num_18) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 0:
                {
                  // case "builtin_compare"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 3);
                }
                break;
              case (MR_Integer) 1:
                {
                  // case "builtin_compare_character"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 3);
                }
                break;
              case (MR_Integer) 2:
                {
                  // case "builtin_compare_float"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 3);
                }
                break;
              case (MR_Integer) 3:
                {
                  // case "builtin_compare_int"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 3);
                }
                break;
              case (MR_Integer) 4:
                {
                  // case "builtin_compare_int16"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 3);
                }
                break;
              case (MR_Integer) 5:
                {
                  // case "builtin_compare_int32"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 3);
                }
                break;
              case (MR_Integer) 6:
                {
                  // case "builtin_compare_int64"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 3);
                }
                break;
              case (MR_Integer) 7:
                {
                  // case "builtin_compare_int8"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 3);
                }
                break;
              case (MR_Integer) 8:
                {
                  // case "builtin_compare_non_canonical_type"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 2);
                }
                break;
              case (MR_Integer) 9:
                {
                  // case "builtin_compare_pred"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 3);
                }
                break;
              case (MR_Integer) 10:
                {
                  // case "builtin_compare_solver_type"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 3);
                }
                break;
              case (MR_Integer) 11:
                {
                  // case "builtin_compare_string"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 3);
                }
                break;
              case (MR_Integer) 12:
                {
                  // case "builtin_compare_uint"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 3);
                }
                break;
              case (MR_Integer) 13:
                {
                  // case "builtin_compare_uint16"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 3);
                }
                break;
              case (MR_Integer) 14:
                {
                  // case "builtin_compare_uint32"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 3);
                }
                break;
              case (MR_Integer) 15:
                {
                  // case "builtin_compare_uint64"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 3);
                }
                break;
              case (MR_Integer) 16:
                {
                  // case "builtin_compare_uint8"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 3);
                }
                break;
              case (MR_Integer) 17:
                {
                  // case "builtin_index"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 2);
                }
                break;
              case (MR_Integer) 18:
                {
                  // case "builtin_int16_gt"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 2);
                }
                break;
              case (MR_Integer) 19:
                {
                  // case "builtin_int16_lt"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 2);
                }
                break;
              case (MR_Integer) 20:
                {
                  // case "builtin_int32_gt"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 2);
                }
                break;
              case (MR_Integer) 21:
                {
                  // case "builtin_int32_lt"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 2);
                }
                break;
              case (MR_Integer) 22:
                {
                  // case "builtin_int64_gt"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 2);
                }
                break;
              case (MR_Integer) 23:
                {
                  // case "builtin_int64_lt"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 2);
                }
                break;
              case (MR_Integer) 24:
                {
                  // case "builtin_int8_gt"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 2);
                }
                break;
              case (MR_Integer) 25:
                {
                  // case "builtin_int8_lt"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 2);
                }
                break;
              case (MR_Integer) 26:
                {
                  // case "builtin_int_gt"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 2);
                }
                break;
              case (MR_Integer) 27:
                {
                  // case "builtin_int_lt"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 2);
                }
                break;
              case (MR_Integer) 28:
                {
                  // case "builtin_uint16_gt"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 2);
                }
                break;
              case (MR_Integer) 29:
                {
                  // case "builtin_uint16_lt"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 2);
                }
                break;
              case (MR_Integer) 30:
                {
                  // case "builtin_uint32_gt"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 2);
                }
                break;
              case (MR_Integer) 31:
                {
                  // case "builtin_uint32_lt"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 2);
                }
                break;
              case (MR_Integer) 32:
                {
                  // case "builtin_uint64_gt"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 2);
                }
                break;
              case (MR_Integer) 33:
                {
                  // case "builtin_uint64_lt"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 2);
                }
                break;
              case (MR_Integer) 34:
                {
                  // case "builtin_uint8_gt"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 2);
                }
                break;
              case (MR_Integer) 35:
                {
                  // case "builtin_uint8_lt"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 2);
                }
                break;
              case (MR_Integer) 36:
                {
                  // case "builtin_uint_gt"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 2);
                }
                break;
              case (MR_Integer) 37:
                {
                  // case "builtin_uint_lt"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 2);
                }
                break;
              case (MR_Integer) 38:
                {
                  // case "builtin_unify"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 2);
                }
                break;
              case (MR_Integer) 39:
                {
                  // case "builtin_unify_character"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 2);
                }
                break;
              case (MR_Integer) 40:
                {
                  // case "builtin_unify_float"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 2);
                }
                break;
              case (MR_Integer) 41:
                {
                  // case "builtin_unify_int"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 2);
                }
                break;
              case (MR_Integer) 42:
                {
                  // case "builtin_unify_int16"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 2);
                }
                break;
              case (MR_Integer) 43:
                {
                  // case "builtin_unify_int32"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 2);
                }
                break;
              case (MR_Integer) 44:
                {
                  // case "builtin_unify_int64"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 2);
                }
                break;
              case (MR_Integer) 45:
                {
                  // case "builtin_unify_int8"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 2);
                }
                break;
              case (MR_Integer) 46:
                {
                  // case "builtin_unify_pred"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 2);
                }
                break;
              case (MR_Integer) 47:
                {
                  // case "builtin_unify_solver_type"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 2);
                }
                break;
              case (MR_Integer) 48:
                {
                  // case "builtin_unify_string"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 2);
                }
                break;
              case (MR_Integer) 49:
                {
                  // case "builtin_unify_uint"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 2);
                }
                break;
              case (MR_Integer) 50:
                {
                  // case "builtin_unify_uint16"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 2);
                }
                break;
              case (MR_Integer) 51:
                {
                  // case "builtin_unify_uint32"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 2);
                }
                break;
              case (MR_Integer) 52:
                {
                  // case "builtin_unify_uint64"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 2);
                }
                break;
              case (MR_Integer) 53:
                {
                  // case "builtin_unify_uint8"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 2);
                }
                break;
              case (MR_Integer) 54:
                {
                  // case "compare_error"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 0);
                }
                break;
              case (MR_Integer) 55:
                {
                  // case "discard_ticket"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 0);
                }
                break;
              case (MR_Integer) 56:
                {
                  // case "instance_constraint_from_typeclass_info"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 3);
                }
                break;
              case (MR_Integer) 57:
                {
                  // case "mark_hp"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 58:
                {
                  // case "mark_ticket_stack"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 59:
                {
                  // case "no_clauses"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 60:
                {
                  // case "partial_inst_copy"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 2);
                }
                break;
              case (MR_Integer) 61:
                {
                  // case "prune_ticket"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 0);
                }
                break;
              case (MR_Integer) 62:
                {
                  // case "prune_tickets_to"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 63:
                {
                  // case "reset_ticket_commit"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 64:
                {
                  // case "reset_ticket_solve"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 65:
                {
                  // case "reset_ticket_undo"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 66:
                {
                  // case "restore_hp"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 67:
                {
                  // case "sorry"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 68:
                {
                  // case "store_at_ref_impure"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 2);
                }
                break;
              case (MR_Integer) 69:
                {
                  // case "store_ticket"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 70:
                {
                  // case "superclass_from_typeclass_info"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 3);
                }
                break;
              case (MR_Integer) 71:
                {
                  // case "trace_evaluate_runtime_condition"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 0);
                }
                break;
              case (MR_Integer) 72:
                {
                  // case "type_info_from_typeclass_info"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 3);
                }
                break;
              case (MR_Integer) 73:
                {
                  // case "typed_compare"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 3);
                }
                break;
              case (MR_Integer) 74:
                {
                  // case "typed_unify"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 2);
                }
                break;
              case (MR_Integer) 75:
                {
                  // case "unconstrained_type_info_from_typeclass_info"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 3);
                }
                break;
              case (MR_Integer) 76:
                {
                  // case "unify_remote_arg_words"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 4);
                }
                break;
              case (MR_Integer) 77:
                {
                  // case "unused"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 0);
                }
                break;
            }
          }
          if (succeeded)
            succeeded = (PredOrFunc_5 == (MR_Integer) 0);
        }
        break;
      case (MR_Integer) 7:
        {
          // case "profiling_builtin"
          ;
          {
            MR_Integer case_num_19 = (MR_Integer) -1;

            switch (MR_nth_code_unit(PredName_7, 0)) {
              case (MR_Integer) 100:
                if (MR_offset_strn_eq(1, 3, PredName_7, (MR_String) "det_"))
                  switch (MR_nth_code_unit(PredName_7, 4)) {
                    case (MR_Integer) 99:
                      if (MR_offset_strn_eq(5, 14, PredName_7, (MR_String) "det_call_port_code_"))
                        switch (MR_nth_code_unit(PredName_7, 19)) {
                          case (MR_Integer) 97:
                            if (MR_offset_streq(20, PredName_7, (MR_String) "det_call_port_code_ac"))
                              case_num_19 = (MR_Integer) 0;
                            break;
                          case (MR_Integer) 115:
                            if (MR_offset_streq(20, PredName_7, (MR_String) "det_call_port_code_sr"))
                              case_num_19 = (MR_Integer) 1;
                            break;
                        }
                      break;
                    case (MR_Integer) 101:
                      if (MR_offset_strn_eq(5, 14, PredName_7, (MR_String) "det_exit_port_code_"))
                        switch (MR_nth_code_unit(PredName_7, 19)) {
                          case (MR_Integer) 97:
                            if (MR_offset_streq(20, PredName_7, (MR_String) "det_exit_port_code_ac"))
                              case_num_19 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 115:
                            if (MR_offset_streq(20, PredName_7, (MR_String) "det_exit_port_code_sr"))
                              case_num_19 = (MR_Integer) 3;
                            break;
                        }
                      break;
                  }
                break;
              case (MR_Integer) 105:
                if (MR_offset_strn_eq(1, 9, PredName_7, (MR_String) "increment_"))
                  switch (MR_nth_code_unit(PredName_7, 10)) {
                    case (MR_Integer) 100:
                      if (MR_offset_streq(11, PredName_7, (MR_String) "increment_dynamic_coverage_point_count"))
                        case_num_19 = (MR_Integer) 4;
                      break;
                    case (MR_Integer) 115:
                      if (MR_offset_streq(11, PredName_7, (MR_String) "increment_static_coverage_point_count"))
                        case_num_19 = (MR_Integer) 5;
                      break;
                  }
                break;
              case (MR_Integer) 110:
                if (MR_offset_strn_eq(1, 3, PredName_7, (MR_String) "non_"))
                  switch (MR_nth_code_unit(PredName_7, 4)) {
                    case (MR_Integer) 99:
                      if (MR_offset_strn_eq(5, 14, PredName_7, (MR_String) "non_call_port_code_"))
                        switch (MR_nth_code_unit(PredName_7, 19)) {
                          case (MR_Integer) 97:
                            if (MR_offset_streq(20, PredName_7, (MR_String) "non_call_port_code_ac"))
                              case_num_19 = (MR_Integer) 6;
                            break;
                          case (MR_Integer) 115:
                            if (MR_offset_streq(20, PredName_7, (MR_String) "non_call_port_code_sr"))
                              case_num_19 = (MR_Integer) 7;
                            break;
                        }
                      break;
                    case (MR_Integer) 101:
                      if (MR_offset_strn_eq(5, 14, PredName_7, (MR_String) "non_exit_port_code_"))
                        switch (MR_nth_code_unit(PredName_7, 19)) {
                          case (MR_Integer) 97:
                            if (MR_offset_streq(20, PredName_7, (MR_String) "non_exit_port_code_ac"))
                              case_num_19 = (MR_Integer) 8;
                            break;
                          case (MR_Integer) 115:
                            if (MR_offset_streq(20, PredName_7, (MR_String) "non_exit_port_code_sr"))
                              case_num_19 = (MR_Integer) 9;
                            break;
                        }
                      break;
                    case (MR_Integer) 102:
                      if (MR_offset_strn_eq(5, 14, PredName_7, (MR_String) "non_fail_port_code_"))
                        switch (MR_nth_code_unit(PredName_7, 19)) {
                          case (MR_Integer) 97:
                            if (MR_offset_streq(20, PredName_7, (MR_String) "non_fail_port_code_ac"))
                              case_num_19 = (MR_Integer) 10;
                            break;
                          case (MR_Integer) 115:
                            if (MR_offset_streq(20, PredName_7, (MR_String) "non_fail_port_code_sr"))
                              case_num_19 = (MR_Integer) 11;
                            break;
                        }
                      break;
                    case (MR_Integer) 114:
                      if (MR_offset_strn_eq(5, 14, PredName_7, (MR_String) "non_redo_port_code_"))
                        switch (MR_nth_code_unit(PredName_7, 19)) {
                          case (MR_Integer) 97:
                            if (MR_offset_streq(20, PredName_7, (MR_String) "non_redo_port_code_ac"))
                              case_num_19 = (MR_Integer) 12;
                            break;
                          case (MR_Integer) 115:
                            if (MR_offset_streq(20, PredName_7, (MR_String) "non_redo_port_code_sr"))
                              case_num_19 = (MR_Integer) 13;
                            break;
                        }
                      break;
                  }
                break;
              case (MR_Integer) 112:
                if (MR_offset_strn_eq(1, 11, PredName_7, (MR_String) "prepare_for_"))
                  switch (MR_nth_code_unit(PredName_7, 12)) {
                    case (MR_Integer) 99:
                      if (MR_offset_streq(13, PredName_7, (MR_String) "prepare_for_callback"))
                        case_num_19 = (MR_Integer) 14;
                      break;
                    case (MR_Integer) 104:
                      if (MR_offset_streq(13, PredName_7, (MR_String) "prepare_for_ho_call"))
                        case_num_19 = (MR_Integer) 15;
                      break;
                    case (MR_Integer) 109:
                      if (MR_offset_streq(13, PredName_7, (MR_String) "prepare_for_method_call"))
                        case_num_19 = (MR_Integer) 16;
                      break;
                    case (MR_Integer) 110:
                      if (MR_offset_streq(13, PredName_7, (MR_String) "prepare_for_normal_call"))
                        case_num_19 = (MR_Integer) 17;
                      break;
                    case (MR_Integer) 115:
                      if (MR_offset_streq(13, PredName_7, (MR_String) "prepare_for_special_call"))
                        case_num_19 = (MR_Integer) 18;
                      break;
                    case (MR_Integer) 116:
                      if (MR_offset_streq(13, PredName_7, (MR_String) "prepare_for_tail_call"))
                        case_num_19 = (MR_Integer) 19;
                      break;
                  }
                break;
              case (MR_Integer) 114:
                switch (MR_nth_code_unit(PredName_7, 1)) {
                  case (MR_Integer) 101:
                    switch (MR_nth_code_unit(PredName_7, 2)) {
                      case (MR_Integer) 115:
                        switch (MR_nth_code_unit(PredName_7, 3)) {
                          case (MR_Integer) 101:
                            if (MR_offset_strn_eq(4, 18, PredName_7, (MR_String) "reset_activation_info_"))
                              switch (MR_nth_code_unit(PredName_7, 22)) {
                                case (MR_Integer) 97:
                                  if (MR_offset_streq(23, PredName_7, (MR_String) "reset_activation_info_ac"))
                                    case_num_19 = (MR_Integer) 20;
                                  break;
                                case (MR_Integer) 115:
                                  if (MR_offset_streq(23, PredName_7, (MR_String) "reset_activation_info_sr"))
                                    case_num_19 = (MR_Integer) 21;
                                  break;
                              }
                            break;
                          case (MR_Integer) 116:
                            if (MR_offset_strn_eq(4, 20, PredName_7, (MR_String) "restore_recursion_depth_"))
                              switch (MR_nth_code_unit(PredName_7, 24)) {
                                case (MR_Integer) 101:
                                  if (MR_offset_strn_eq(25, 4, PredName_7, (MR_String) "restore_recursion_depth_exit_"))
                                    switch (MR_nth_code_unit(PredName_7, 29)) {
                                      case (MR_Integer) 49:
                                        if (MR_offset_streq(30, PredName_7, (MR_String) "restore_recursion_depth_exit_1"))
                                          case_num_19 = (MR_Integer) 22;
                                        break;
                                      case (MR_Integer) 50:
                                        if (MR_offset_streq(30, PredName_7, (MR_String) "restore_recursion_depth_exit_2"))
                                          case_num_19 = (MR_Integer) 23;
                                        break;
                                      case (MR_Integer) 51:
                                        if (MR_offset_streq(30, PredName_7, (MR_String) "restore_recursion_depth_exit_3"))
                                          case_num_19 = (MR_Integer) 24;
                                        break;
                                      case (MR_Integer) 52:
                                        if (MR_offset_streq(30, PredName_7, (MR_String) "restore_recursion_depth_exit_4"))
                                          case_num_19 = (MR_Integer) 25;
                                        break;
                                      case (MR_Integer) 53:
                                        if (MR_offset_streq(30, PredName_7, (MR_String) "restore_recursion_depth_exit_5"))
                                          case_num_19 = (MR_Integer) 26;
                                        break;
                                      case (MR_Integer) 54:
                                        if (MR_offset_streq(30, PredName_7, (MR_String) "restore_recursion_depth_exit_6"))
                                          case_num_19 = (MR_Integer) 27;
                                        break;
                                      case (MR_Integer) 55:
                                        if (MR_offset_streq(30, PredName_7, (MR_String) "restore_recursion_depth_exit_7"))
                                          case_num_19 = (MR_Integer) 28;
                                        break;
                                      case (MR_Integer) 56:
                                        if (MR_offset_streq(30, PredName_7, (MR_String) "restore_recursion_depth_exit_8"))
                                          case_num_19 = (MR_Integer) 29;
                                        break;
                                      case (MR_Integer) 57:
                                        if (MR_offset_streq(30, PredName_7, (MR_String) "restore_recursion_depth_exit_9"))
                                          case_num_19 = (MR_Integer) 30;
                                        break;
                                    }
                                  break;
                                case (MR_Integer) 102:
                                  if (MR_offset_strn_eq(25, 4, PredName_7, (MR_String) "restore_recursion_depth_fail_"))
                                    switch (MR_nth_code_unit(PredName_7, 29)) {
                                      case (MR_Integer) 49:
                                        if (MR_offset_streq(30, PredName_7, (MR_String) "restore_recursion_depth_fail_1"))
                                          case_num_19 = (MR_Integer) 31;
                                        break;
                                      case (MR_Integer) 50:
                                        if (MR_offset_streq(30, PredName_7, (MR_String) "restore_recursion_depth_fail_2"))
                                          case_num_19 = (MR_Integer) 32;
                                        break;
                                      case (MR_Integer) 51:
                                        if (MR_offset_streq(30, PredName_7, (MR_String) "restore_recursion_depth_fail_3"))
                                          case_num_19 = (MR_Integer) 33;
                                        break;
                                      case (MR_Integer) 52:
                                        if (MR_offset_streq(30, PredName_7, (MR_String) "restore_recursion_depth_fail_4"))
                                          case_num_19 = (MR_Integer) 34;
                                        break;
                                      case (MR_Integer) 53:
                                        if (MR_offset_streq(30, PredName_7, (MR_String) "restore_recursion_depth_fail_5"))
                                          case_num_19 = (MR_Integer) 35;
                                        break;
                                      case (MR_Integer) 54:
                                        if (MR_offset_streq(30, PredName_7, (MR_String) "restore_recursion_depth_fail_6"))
                                          case_num_19 = (MR_Integer) 36;
                                        break;
                                      case (MR_Integer) 55:
                                        if (MR_offset_streq(30, PredName_7, (MR_String) "restore_recursion_depth_fail_7"))
                                          case_num_19 = (MR_Integer) 37;
                                        break;
                                      case (MR_Integer) 56:
                                        if (MR_offset_streq(30, PredName_7, (MR_String) "restore_recursion_depth_fail_8"))
                                          case_num_19 = (MR_Integer) 38;
                                        break;
                                      case (MR_Integer) 57:
                                        if (MR_offset_streq(30, PredName_7, (MR_String) "restore_recursion_depth_fail_9"))
                                          case_num_19 = (MR_Integer) 39;
                                        break;
                                    }
                                  break;
                              }
                            break;
                        }
                        break;
                      case (MR_Integer) 122:
                        if (MR_offset_strn_eq(3, 20, PredName_7, (MR_String) "rezero_activation_info_"))
                          switch (MR_nth_code_unit(PredName_7, 23)) {
                            case (MR_Integer) 97:
                              if (MR_offset_streq(24, PredName_7, (MR_String) "rezero_activation_info_ac"))
                                case_num_19 = (MR_Integer) 40;
                              break;
                            case (MR_Integer) 115:
                              if (MR_offset_streq(24, PredName_7, (MR_String) "rezero_activation_info_sr"))
                                case_num_19 = (MR_Integer) 41;
                              break;
                          }
                        break;
                    }
                    break;
                }
                break;
              case (MR_Integer) 115:
                switch (MR_nth_code_unit(PredName_7, 1)) {
                  case (MR_Integer) 97:
                    if (MR_offset_strn_eq(2, 3, PredName_7, (MR_String) "save_"))
                      switch (MR_nth_code_unit(PredName_7, 5)) {
                        case (MR_Integer) 97:
                          if (MR_offset_strn_eq(6, 24, PredName_7, (MR_String) "save_and_zero_activation_info_"))
                            switch (MR_nth_code_unit(PredName_7, 30)) {
                              case (MR_Integer) 97:
                                if (MR_offset_streq(31, PredName_7, (MR_String) "save_and_zero_activation_info_ac"))
                                  case_num_19 = (MR_Integer) 42;
                                break;
                              case (MR_Integer) 115:
                                if (MR_offset_streq(31, PredName_7, (MR_String) "save_and_zero_activation_info_sr"))
                                  case_num_19 = (MR_Integer) 43;
                                break;
                            }
                          break;
                        case (MR_Integer) 114:
                          if (MR_offset_strn_eq(6, 15, PredName_7, (MR_String) "save_recursion_depth_"))
                            switch (MR_nth_code_unit(PredName_7, 21)) {
                              case (MR_Integer) 49:
                                if (MR_offset_streq(22, PredName_7, (MR_String) "save_recursion_depth_1"))
                                  case_num_19 = (MR_Integer) 44;
                                break;
                              case (MR_Integer) 50:
                                if (MR_offset_streq(22, PredName_7, (MR_String) "save_recursion_depth_2"))
                                  case_num_19 = (MR_Integer) 45;
                                break;
                              case (MR_Integer) 51:
                                if (MR_offset_streq(22, PredName_7, (MR_String) "save_recursion_depth_3"))
                                  case_num_19 = (MR_Integer) 46;
                                break;
                              case (MR_Integer) 52:
                                if (MR_offset_streq(22, PredName_7, (MR_String) "save_recursion_depth_4"))
                                  case_num_19 = (MR_Integer) 47;
                                break;
                              case (MR_Integer) 53:
                                if (MR_offset_streq(22, PredName_7, (MR_String) "save_recursion_depth_5"))
                                  case_num_19 = (MR_Integer) 48;
                                break;
                              case (MR_Integer) 54:
                                if (MR_offset_streq(22, PredName_7, (MR_String) "save_recursion_depth_6"))
                                  case_num_19 = (MR_Integer) 49;
                                break;
                              case (MR_Integer) 55:
                                if (MR_offset_streq(22, PredName_7, (MR_String) "save_recursion_depth_7"))
                                  case_num_19 = (MR_Integer) 50;
                                break;
                              case (MR_Integer) 56:
                                if (MR_offset_streq(22, PredName_7, (MR_String) "save_recursion_depth_8"))
                                  case_num_19 = (MR_Integer) 51;
                                break;
                              case (MR_Integer) 57:
                                if (MR_offset_streq(22, PredName_7, (MR_String) "save_recursion_depth_9"))
                                  case_num_19 = (MR_Integer) 52;
                                break;
                            }
                          break;
                      }
                    break;
                  case (MR_Integer) 101:
                    if (MR_offset_strn_eq(2, 3, PredName_7, (MR_String) "semi_"))
                      switch (MR_nth_code_unit(PredName_7, 5)) {
                        case (MR_Integer) 99:
                          if (MR_offset_strn_eq(6, 14, PredName_7, (MR_String) "semi_call_port_code_"))
                            switch (MR_nth_code_unit(PredName_7, 20)) {
                              case (MR_Integer) 97:
                                if (MR_offset_streq(21, PredName_7, (MR_String) "semi_call_port_code_ac"))
                                  case_num_19 = (MR_Integer) 53;
                                break;
                              case (MR_Integer) 115:
                                if (MR_offset_streq(21, PredName_7, (MR_String) "semi_call_port_code_sr"))
                                  case_num_19 = (MR_Integer) 54;
                                break;
                            }
                          break;
                        case (MR_Integer) 101:
                          if (MR_offset_strn_eq(6, 14, PredName_7, (MR_String) "semi_exit_port_code_"))
                            switch (MR_nth_code_unit(PredName_7, 20)) {
                              case (MR_Integer) 97:
                                if (MR_offset_streq(21, PredName_7, (MR_String) "semi_exit_port_code_ac"))
                                  case_num_19 = (MR_Integer) 55;
                                break;
                              case (MR_Integer) 115:
                                if (MR_offset_streq(21, PredName_7, (MR_String) "semi_exit_port_code_sr"))
                                  case_num_19 = (MR_Integer) 56;
                                break;
                            }
                          break;
                        case (MR_Integer) 102:
                          if (MR_offset_strn_eq(6, 14, PredName_7, (MR_String) "semi_fail_port_code_"))
                            switch (MR_nth_code_unit(PredName_7, 20)) {
                              case (MR_Integer) 97:
                                if (MR_offset_streq(21, PredName_7, (MR_String) "semi_fail_port_code_ac"))
                                  case_num_19 = (MR_Integer) 57;
                                break;
                              case (MR_Integer) 115:
                                if (MR_offset_streq(21, PredName_7, (MR_String) "semi_fail_port_code_sr"))
                                  case_num_19 = (MR_Integer) 58;
                                break;
                            }
                          break;
                      }
                    break;
                }
                break;
            }
            switch (case_num_19) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 0:
                {
                  // case "det_call_port_code_ac"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 3);
                }
                break;
              case (MR_Integer) 1:
                {
                  // case "det_call_port_code_sr"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 4);
                }
                break;
              case (MR_Integer) 2:
                {
                  // case "det_exit_port_code_ac"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 2);
                }
                break;
              case (MR_Integer) 3:
                {
                  // case "det_exit_port_code_sr"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 3);
                }
                break;
              case (MR_Integer) 4:
                {
                  // case "increment_dynamic_coverage_point_count"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 5:
                {
                  // case "increment_static_coverage_point_count"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 2);
                }
                break;
              case (MR_Integer) 6:
                {
                  // case "non_call_port_code_ac"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 4);
                }
                break;
              case (MR_Integer) 7:
                {
                  // case "non_call_port_code_sr"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 5);
                }
                break;
              case (MR_Integer) 8:
                {
                  // case "non_exit_port_code_ac"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 2);
                }
                break;
              case (MR_Integer) 9:
                {
                  // case "non_exit_port_code_sr"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 3);
                }
                break;
              case (MR_Integer) 10:
                {
                  // case "non_fail_port_code_ac"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 2);
                }
                break;
              case (MR_Integer) 11:
                {
                  // case "non_fail_port_code_sr"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 3);
                }
                break;
              case (MR_Integer) 12:
                {
                  // case "non_redo_port_code_ac"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 2);
                }
                break;
              case (MR_Integer) 13:
                {
                  // case "non_redo_port_code_sr"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 2);
                }
                break;
              case (MR_Integer) 14:
                {
                  // case "prepare_for_callback"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 15:
                {
                  // case "prepare_for_ho_call"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 2);
                }
                break;
              case (MR_Integer) 16:
                {
                  // case "prepare_for_method_call"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 3);
                }
                break;
              case (MR_Integer) 17:
                {
                  // case "prepare_for_normal_call"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 18:
                {
                  // case "prepare_for_special_call"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 2);
                }
                break;
              case (MR_Integer) 19:
                {
                  // case "prepare_for_tail_call"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 20:
                {
                  // case "reset_activation_info_ac"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 2);
                }
                break;
              case (MR_Integer) 21:
                {
                  // case "reset_activation_info_sr"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 22:
                {
                  // case "restore_recursion_depth_exit_1"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 3);
                }
                break;
              case (MR_Integer) 23:
                {
                  // case "restore_recursion_depth_exit_2"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 4);
                }
                break;
              case (MR_Integer) 24:
                {
                  // case "restore_recursion_depth_exit_3"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 5);
                }
                break;
              case (MR_Integer) 25:
                {
                  // case "restore_recursion_depth_exit_4"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 6);
                }
                break;
              case (MR_Integer) 26:
                {
                  // case "restore_recursion_depth_exit_5"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 7);
                }
                break;
              case (MR_Integer) 27:
                {
                  // case "restore_recursion_depth_exit_6"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 8);
                }
                break;
              case (MR_Integer) 28:
                {
                  // case "restore_recursion_depth_exit_7"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 9);
                }
                break;
              case (MR_Integer) 29:
                {
                  // case "restore_recursion_depth_exit_8"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 10);
                }
                break;
              case (MR_Integer) 30:
                {
                  // case "restore_recursion_depth_exit_9"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 11);
                }
                break;
              case (MR_Integer) 31:
                {
                  // case "restore_recursion_depth_fail_1"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 3);
                }
                break;
              case (MR_Integer) 32:
                {
                  // case "restore_recursion_depth_fail_2"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 4);
                }
                break;
              case (MR_Integer) 33:
                {
                  // case "restore_recursion_depth_fail_3"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 5);
                }
                break;
              case (MR_Integer) 34:
                {
                  // case "restore_recursion_depth_fail_4"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 6);
                }
                break;
              case (MR_Integer) 35:
                {
                  // case "restore_recursion_depth_fail_5"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 7);
                }
                break;
              case (MR_Integer) 36:
                {
                  // case "restore_recursion_depth_fail_6"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 8);
                }
                break;
              case (MR_Integer) 37:
                {
                  // case "restore_recursion_depth_fail_7"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 9);
                }
                break;
              case (MR_Integer) 38:
                {
                  // case "restore_recursion_depth_fail_8"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 10);
                }
                break;
              case (MR_Integer) 39:
                {
                  // case "restore_recursion_depth_fail_9"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 11);
                }
                break;
              case (MR_Integer) 40:
                {
                  // case "rezero_activation_info_ac"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 0);
                }
                break;
              case (MR_Integer) 41:
                {
                  // case "rezero_activation_info_sr"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 0);
                }
                break;
              case (MR_Integer) 42:
                {
                  // case "save_and_zero_activation_info_ac"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 2);
                }
                break;
              case (MR_Integer) 43:
                {
                  // case "save_and_zero_activation_info_sr"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 44:
                {
                  // case "save_recursion_depth_1"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 3);
                }
                break;
              case (MR_Integer) 45:
                {
                  // case "save_recursion_depth_2"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 4);
                }
                break;
              case (MR_Integer) 46:
                {
                  // case "save_recursion_depth_3"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 5);
                }
                break;
              case (MR_Integer) 47:
                {
                  // case "save_recursion_depth_4"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 6);
                }
                break;
              case (MR_Integer) 48:
                {
                  // case "save_recursion_depth_5"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 7);
                }
                break;
              case (MR_Integer) 49:
                {
                  // case "save_recursion_depth_6"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 8);
                }
                break;
              case (MR_Integer) 50:
                {
                  // case "save_recursion_depth_7"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 9);
                }
                break;
              case (MR_Integer) 51:
                {
                  // case "save_recursion_depth_8"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 10);
                }
                break;
              case (MR_Integer) 52:
                {
                  // case "save_recursion_depth_9"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 11);
                }
                break;
              case (MR_Integer) 53:
                {
                  // case "semi_call_port_code_ac"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 3);
                }
                break;
              case (MR_Integer) 54:
                {
                  // case "semi_call_port_code_sr"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 4);
                }
                break;
              case (MR_Integer) 55:
                {
                  // case "semi_exit_port_code_ac"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 2);
                }
                break;
              case (MR_Integer) 56:
                {
                  // case "semi_exit_port_code_sr"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 3);
                }
                break;
              case (MR_Integer) 57:
                {
                  // case "semi_fail_port_code_ac"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 2);
                }
                break;
              case (MR_Integer) 58:
                {
                  // case "semi_fail_port_code_sr"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 3);
                }
                break;
            }
          }
          if (succeeded)
            succeeded = (PredOrFunc_5 == (MR_Integer) 0);
        }
        break;
      case (MR_Integer) 8:
        {
          // case "region_builtin"
          ;
          succeeded = (OrigArity_8 == (MR_Integer) 1);
          if (succeeded)
          {
            if ((strcmp(PredName_7, (MR_String) "create_region") == 0))
              succeeded = MR_TRUE;
            else
            if ((strcmp(PredName_7, (MR_String) "remove_region") == 0))
              succeeded = MR_TRUE;
            else
              succeeded = MR_FALSE;
            if (succeeded)
              succeeded = (PredOrFunc_5 == (MR_Integer) 0);
          }
        }
        break;
      case (MR_Integer) 9:
        {
          // case "ssdb"
          ;
          {
            MR_Integer slot_20 = ((MR_hash_string5(PredName_7)) & (MR_Integer) 15);
            MR_String str_21;

            // hashed string jump switch
            ;
            // compute the hash value of the input string
            ;
            // hash chain loop
            ;
            do
            {
              // lookup the string for this hash slot
              ;
              str_21 = ((&hlds__introduced_call_table_vector_common_1[10 + slot_20]))->hlds__introduced_call_table__vector_common_type_1_0__vct_1_f_0;
              // did we find a match?
              ;
              if ((((str_21 != NULL)) && ((strcmp(str_21, PredName_7) == 0))))
              {
                // we found a match; dispatch to the corresponding code
                ;
                switch (slot_20) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      // case "handle_event_fail_nondet"
                      ;
                      succeeded = (OrigArity_8 == (MR_Integer) 3);
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      // case "set_context"
                      ;
                      succeeded = (OrigArity_8 == (MR_Integer) 2);
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      // case "handle_event_redo_nondet"
                      ;
                      succeeded = (OrigArity_8 == (MR_Integer) 2);
                    }
                    break;
                  case (MR_Integer) 5:
                    {
                      // case "handle_event_call"
                      ;
                      succeeded = (OrigArity_8 == (MR_Integer) 3);
                    }
                    break;
                  case (MR_Integer) 7:
                    {
                      // case "handle_event_exit"
                      ;
                      succeeded = (OrigArity_8 == (MR_Integer) 3);
                    }
                    break;
                  case (MR_Integer) 9:
                    {
                      // case "handle_event_exit_nondet"
                      ;
                      succeeded = (OrigArity_8 == (MR_Integer) 2);
                    }
                    break;
                  case (MR_Integer) 13:
                    {
                      // case "handle_event_fail"
                      ;
                      succeeded = (OrigArity_8 == (MR_Integer) 3);
                    }
                    break;
                  case (MR_Integer) 15:
                    {
                      // case "handle_event_call_nondet"
                      ;
                      succeeded = (OrigArity_8 == (MR_Integer) 3);
                    }
                    break;
                }
                // jump out of search loop
                ;
                goto label_5;
              }
              else
              {
                // no match yet, so get next slot in hash chain
                ;
                slot_20 = ((&hlds__introduced_call_table_vector_common_1[10 + slot_20]))->hlds__introduced_call_table__vector_common_type_1_0__vct_1_f_1;
              }
            }
            while ((slot_20 >= (MR_Integer) 0));
            succeeded = MR_FALSE;
          label_5:;
            if (succeeded)
              succeeded = (PredOrFunc_5 == (MR_Integer) 0);
          }
        }
        break;
      case (MR_Integer) 10:
        {
          // case "stm_builtin"
          ;
          {
            MR_Integer slot_22 = ((MR_hash_string6(PredName_7)) & (MR_Integer) 63);
            MR_String str_23 = ((&hlds__introduced_call_table_vector_common_2[74 + slot_22]))->hlds__introduced_call_table__vector_common_type_2_0__vct_2_f_0;

            // hashed string jump switch
            ;
            // compute the hash value of the input string
            ;
            // no collisions; no hash chain loop
            ;
            // lookup the string for this hash slot
            ;
            // did we find a match?
            ;
            if ((((str_23 != NULL)) && ((strcmp(str_23, PredName_7) == 0))))
            {
              // we found a match; dispatch to the corresponding code
              ;
              switch (slot_22) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 5:
                  {
                    // case "stm_from_inner_to_outer"
                    ;
                    succeeded = (OrigArity_8 == (MR_Integer) 2);
                  }
                  break;
                case (MR_Integer) 8:
                  {
                    // case "stm_discard_transaction_log"
                    ;
                    succeeded = (OrigArity_8 == (MR_Integer) 1);
                  }
                  break;
                case (MR_Integer) 14:
                  {
                    // case "stm_create_nested_transaction_log"
                    ;
                    succeeded = (OrigArity_8 == (MR_Integer) 2);
                  }
                  break;
                case (MR_Integer) 21:
                  {
                    // case "stm_unlock"
                    ;
                    succeeded = (OrigArity_8 == (MR_Integer) 0);
                  }
                  break;
                case (MR_Integer) 23:
                  {
                    // case "stm_block"
                    ;
                    succeeded = (OrigArity_8 == (MR_Integer) 1);
                  }
                  break;
                case (MR_Integer) 36:
                  {
                    // case "stm_lock"
                    ;
                    succeeded = (OrigArity_8 == (MR_Integer) 0);
                  }
                  break;
                case (MR_Integer) 38:
                  {
                    // case "stm_commit"
                    ;
                    succeeded = (OrigArity_8 == (MR_Integer) 1);
                  }
                  break;
                case (MR_Integer) 39:
                  {
                    // case "stm_create_transaction_log"
                    ;
                    succeeded = (OrigArity_8 == (MR_Integer) 1);
                  }
                  break;
                case (MR_Integer) 44:
                  {
                    // case "stm_merge_nested_logs"
                    ;
                    succeeded = (OrigArity_8 == (MR_Integer) 3);
                  }
                  break;
                case (MR_Integer) 49:
                  {
                    // case "stm_validate"
                    ;
                    succeeded = (OrigArity_8 == (MR_Integer) 2);
                  }
                  break;
                case (MR_Integer) 53:
                  {
                    // case "stm_from_outer_to_inner"
                    ;
                    succeeded = (OrigArity_8 == (MR_Integer) 2);
                  }
                  break;
              }
              // jump out of search loop
              ;
              goto label_6;
            }
            succeeded = MR_FALSE;
          label_6:;
            if (succeeded)
              succeeded = (PredOrFunc_5 == (MR_Integer) 0);
          }
        }
        break;
      case (MR_Integer) 11:
        {
          // case "stream"
          ;
          succeeded = (strcmp(PredName_7, (MR_String) "put") == 0);
          if (succeeded)
          {
            succeeded = (OrigArity_8 == (MR_Integer) 4);
            if (succeeded)
              succeeded = (PredOrFunc_5 == (MR_Integer) 0);
          }
        }
        break;
      case (MR_Integer) 12:
        {
          // case "string"
          ;
          {
            MR_Integer lo_24 = (MR_Integer) 0;
            MR_Integer hi_25 = (MR_Integer) 3;
            MR_Integer mid_26;
            MR_Integer result_27;

            // binary string jump switch
            ;
            do
            {
              mid_26 = (((MR_Integer) ((MR_Unsigned) lo_24 + (MR_Unsigned) hi_25)) / (MR_Integer) 2);
              result_27 = MR_strcmp(PredName_7, ((&hlds__introduced_call_table_vector_common_1[26 + mid_26]))->hlds__introduced_call_table__vector_common_type_1_0__vct_1_f_0);
              if ((result_27 == (MR_Integer) 0))
              {
                switch (((&hlds__introduced_call_table_vector_common_1[26 + mid_26]))->hlds__introduced_call_table__vector_common_type_1_0__vct_1_f_1) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      // case "++"
                      ;
                      succeeded = (OrigArity_8 == (MR_Integer) 3);
                      if (succeeded)
                        succeeded = (PredOrFunc_5 == (MR_Integer) 1);
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
                goto label_7;
              }
              else
              if ((result_27 < (MR_Integer) 0))
                hi_25 = (MR_Integer) ((MR_Unsigned) mid_26 - (MR_Unsigned) 1);
              else
                lo_24 = (MR_Integer) ((MR_Unsigned) mid_26 + (MR_Unsigned) 1);
            }
            while ((lo_24 <= hi_25));
            succeeded = MR_FALSE;
          label_7:;
          }
        }
        break;
      case (MR_Integer) 13:
        {
          // case "string.builder"
          ;
          succeeded = (strcmp(PredName_7, (MR_String) "append_string") == 0);
          if (succeeded)
          {
            succeeded = (OrigArity_8 == (MR_Integer) 3);
            if (succeeded)
              succeeded = (PredOrFunc_5 == (MR_Integer) 0);
          }
        }
        break;
      case (MR_Integer) 14:
        {
          // case "string.format"
          ;
          {
            MR_Integer case_num_28 = (MR_Integer) -1;

            if (MR_offset_strn_eq(0, 7, PredName_7, (MR_String) "format_"))
              switch (MR_nth_code_unit(PredName_7, 7)) {
                case (MR_Integer) 99:
                  switch (MR_nth_code_unit(PredName_7, 8)) {
                    case (MR_Integer) 97:
                      if (MR_offset_strn_eq(9, 3, PredName_7, (MR_String) "format_cast_"))
                        switch (MR_nth_code_unit(PredName_7, 12)) {
                          case (MR_Integer) 105:
                            if (MR_offset_strn_eq(13, 2, PredName_7, (MR_String) "format_cast_int"))
                              switch (MR_nth_code_unit(PredName_7, 15)) {
                                case (MR_Integer) 49:
                                  if (MR_offset_strn_eq(16, 5, PredName_7, (MR_String) "format_cast_int16_to_"))
                                    switch (MR_nth_code_unit(PredName_7, 21)) {
                                      case (MR_Integer) 105:
                                        if (MR_offset_streq(22, PredName_7, (MR_String) "format_cast_int16_to_int"))
                                          case_num_28 = (MR_Integer) 0;
                                        break;
                                      case (MR_Integer) 117:
                                        if (MR_offset_streq(22, PredName_7, (MR_String) "format_cast_int16_to_uint"))
                                          case_num_28 = (MR_Integer) 1;
                                        break;
                                    }
                                  break;
                                case (MR_Integer) 51:
                                  if (MR_offset_strn_eq(16, 5, PredName_7, (MR_String) "format_cast_int32_to_"))
                                    switch (MR_nth_code_unit(PredName_7, 21)) {
                                      case (MR_Integer) 105:
                                        if (MR_offset_streq(22, PredName_7, (MR_String) "format_cast_int32_to_int"))
                                          case_num_28 = (MR_Integer) 2;
                                        break;
                                      case (MR_Integer) 117:
                                        if (MR_offset_streq(22, PredName_7, (MR_String) "format_cast_int32_to_uint"))
                                          case_num_28 = (MR_Integer) 3;
                                        break;
                                    }
                                  break;
                                case (MR_Integer) 56:
                                  if (MR_offset_strn_eq(16, 4, PredName_7, (MR_String) "format_cast_int8_to_"))
                                    switch (MR_nth_code_unit(PredName_7, 20)) {
                                      case (MR_Integer) 105:
                                        if (MR_offset_streq(21, PredName_7, (MR_String) "format_cast_int8_to_int"))
                                          case_num_28 = (MR_Integer) 4;
                                        break;
                                      case (MR_Integer) 117:
                                        if (MR_offset_streq(21, PredName_7, (MR_String) "format_cast_int8_to_uint"))
                                          case_num_28 = (MR_Integer) 5;
                                        break;
                                    }
                                  break;
                                case (MR_Integer) 95:
                                  if (MR_offset_streq(16, PredName_7, (MR_String) "format_cast_int_to_uint"))
                                    case_num_28 = (MR_Integer) 6;
                                  break;
                              }
                            break;
                          case (MR_Integer) 117:
                            if (MR_offset_strn_eq(13, 3, PredName_7, (MR_String) "format_cast_uint"))
                              switch (MR_nth_code_unit(PredName_7, 16)) {
                                case (MR_Integer) 49:
                                  if (MR_offset_streq(17, PredName_7, (MR_String) "format_cast_uint16_to_uint"))
                                    case_num_28 = (MR_Integer) 7;
                                  break;
                                case (MR_Integer) 51:
                                  if (MR_offset_streq(17, PredName_7, (MR_String) "format_cast_uint32_to_uint"))
                                    case_num_28 = (MR_Integer) 8;
                                  break;
                                case (MR_Integer) 56:
                                  if (MR_offset_streq(17, PredName_7, (MR_String) "format_cast_uint8_to_uint"))
                                    case_num_28 = (MR_Integer) 9;
                                  break;
                              }
                            break;
                        }
                      break;
                    case (MR_Integer) 104:
                      if (MR_offset_strn_eq(9, 13, PredName_7, (MR_String) "format_char_component_"))
                        switch (MR_nth_code_unit(PredName_7, 22)) {
                          case (MR_Integer) 110:
                            if (MR_offset_streq(23, PredName_7, (MR_String) "format_char_component_nowidth"))
                              case_num_28 = (MR_Integer) 10;
                            break;
                          case (MR_Integer) 119:
                            if (MR_offset_streq(23, PredName_7, (MR_String) "format_char_component_width"))
                              case_num_28 = (MR_Integer) 11;
                            break;
                        }
                      break;
                  }
                  break;
                case (MR_Integer) 102:
                  if (MR_offset_strn_eq(8, 15, PredName_7, (MR_String) "format_float_component_"))
                    switch (MR_nth_code_unit(PredName_7, 23)) {
                      case (MR_Integer) 110:
                        if (MR_offset_strn_eq(24, 7, PredName_7, (MR_String) "format_float_component_nowidth_"))
                          switch (MR_nth_code_unit(PredName_7, 31)) {
                            case (MR_Integer) 110:
                              if (MR_offset_streq(32, PredName_7, (MR_String) "format_float_component_nowidth_noprec"))
                                case_num_28 = (MR_Integer) 12;
                              break;
                            case (MR_Integer) 112:
                              if (MR_offset_streq(32, PredName_7, (MR_String) "format_float_component_nowidth_prec"))
                                case_num_28 = (MR_Integer) 13;
                              break;
                          }
                        break;
                      case (MR_Integer) 119:
                        if (MR_offset_strn_eq(24, 5, PredName_7, (MR_String) "format_float_component_width_"))
                          switch (MR_nth_code_unit(PredName_7, 29)) {
                            case (MR_Integer) 110:
                              if (MR_offset_streq(30, PredName_7, (MR_String) "format_float_component_width_noprec"))
                                case_num_28 = (MR_Integer) 14;
                              break;
                            case (MR_Integer) 112:
                              if (MR_offset_streq(30, PredName_7, (MR_String) "format_float_component_width_prec"))
                                case_num_28 = (MR_Integer) 15;
                              break;
                          }
                        break;
                    }
                  break;
                case (MR_Integer) 115:
                  switch (MR_nth_code_unit(PredName_7, 8)) {
                    case (MR_Integer) 105:
                      if (MR_offset_strn_eq(9, 8, PredName_7, (MR_String) "format_signed_int"))
                        switch (MR_nth_code_unit(PredName_7, 17)) {
                          case (MR_Integer) 54:
                            if (MR_offset_strn_eq(18, 12, PredName_7, (MR_String) "format_signed_int64_component_"))
                              switch (MR_nth_code_unit(PredName_7, 30)) {
                                case (MR_Integer) 110:
                                  if (MR_offset_strn_eq(31, 7, PredName_7, (MR_String) "format_signed_int64_component_nowidth_"))
                                    switch (MR_nth_code_unit(PredName_7, 38)) {
                                      case (MR_Integer) 110:
                                        if (MR_offset_streq(39, PredName_7, (MR_String) "format_signed_int64_component_nowidth_noprec"))
                                          case_num_28 = (MR_Integer) 16;
                                        break;
                                      case (MR_Integer) 112:
                                        if (MR_offset_streq(39, PredName_7, (MR_String) "format_signed_int64_component_nowidth_prec"))
                                          case_num_28 = (MR_Integer) 17;
                                        break;
                                    }
                                  break;
                                case (MR_Integer) 119:
                                  if (MR_offset_strn_eq(31, 5, PredName_7, (MR_String) "format_signed_int64_component_width_"))
                                    switch (MR_nth_code_unit(PredName_7, 36)) {
                                      case (MR_Integer) 110:
                                        if (MR_offset_streq(37, PredName_7, (MR_String) "format_signed_int64_component_width_noprec"))
                                          case_num_28 = (MR_Integer) 18;
                                        break;
                                      case (MR_Integer) 112:
                                        if (MR_offset_streq(37, PredName_7, (MR_String) "format_signed_int64_component_width_prec"))
                                          case_num_28 = (MR_Integer) 19;
                                        break;
                                    }
                                  break;
                              }
                            break;
                          case (MR_Integer) 95:
                            if (MR_offset_strn_eq(18, 10, PredName_7, (MR_String) "format_signed_int_component_"))
                              switch (MR_nth_code_unit(PredName_7, 28)) {
                                case (MR_Integer) 110:
                                  if (MR_offset_strn_eq(29, 7, PredName_7, (MR_String) "format_signed_int_component_nowidth_"))
                                    switch (MR_nth_code_unit(PredName_7, 36)) {
                                      case (MR_Integer) 110:
                                        if (MR_offset_streq(37, PredName_7, (MR_String) "format_signed_int_component_nowidth_noprec"))
                                          case_num_28 = (MR_Integer) 20;
                                        break;
                                      case (MR_Integer) 112:
                                        if (MR_offset_streq(37, PredName_7, (MR_String) "format_signed_int_component_nowidth_prec"))
                                          case_num_28 = (MR_Integer) 21;
                                        break;
                                    }
                                  break;
                                case (MR_Integer) 119:
                                  if (MR_offset_strn_eq(29, 5, PredName_7, (MR_String) "format_signed_int_component_width_"))
                                    switch (MR_nth_code_unit(PredName_7, 34)) {
                                      case (MR_Integer) 110:
                                        if (MR_offset_streq(35, PredName_7, (MR_String) "format_signed_int_component_width_noprec"))
                                          case_num_28 = (MR_Integer) 22;
                                        break;
                                      case (MR_Integer) 112:
                                        if (MR_offset_streq(35, PredName_7, (MR_String) "format_signed_int_component_width_prec"))
                                          case_num_28 = (MR_Integer) 23;
                                        break;
                                    }
                                  break;
                              }
                            break;
                        }
                      break;
                    case (MR_Integer) 116:
                      if (MR_offset_strn_eq(9, 15, PredName_7, (MR_String) "format_string_component_"))
                        switch (MR_nth_code_unit(PredName_7, 24)) {
                          case (MR_Integer) 110:
                            if (MR_offset_strn_eq(25, 7, PredName_7, (MR_String) "format_string_component_nowidth_"))
                              switch (MR_nth_code_unit(PredName_7, 32)) {
                                case (MR_Integer) 110:
                                  if (MR_offset_streq(33, PredName_7, (MR_String) "format_string_component_nowidth_noprec"))
                                    case_num_28 = (MR_Integer) 24;
                                  break;
                                case (MR_Integer) 112:
                                  if (MR_offset_streq(33, PredName_7, (MR_String) "format_string_component_nowidth_prec"))
                                    case_num_28 = (MR_Integer) 25;
                                  break;
                              }
                            break;
                          case (MR_Integer) 119:
                            if (MR_offset_strn_eq(25, 5, PredName_7, (MR_String) "format_string_component_width_"))
                              switch (MR_nth_code_unit(PredName_7, 30)) {
                                case (MR_Integer) 110:
                                  if (MR_offset_streq(31, PredName_7, (MR_String) "format_string_component_width_noprec"))
                                    case_num_28 = (MR_Integer) 26;
                                  break;
                                case (MR_Integer) 112:
                                  if (MR_offset_streq(31, PredName_7, (MR_String) "format_string_component_width_prec"))
                                    case_num_28 = (MR_Integer) 27;
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
                      if (MR_offset_strn_eq(9, 2, PredName_7, (MR_String) "format_uint"))
                        switch (MR_nth_code_unit(PredName_7, 11)) {
                          case (MR_Integer) 54:
                            if (MR_offset_strn_eq(12, 12, PredName_7, (MR_String) "format_uint64_component_"))
                              switch (MR_nth_code_unit(PredName_7, 24)) {
                                case (MR_Integer) 110:
                                  if (MR_offset_strn_eq(25, 7, PredName_7, (MR_String) "format_uint64_component_nowidth_"))
                                    switch (MR_nth_code_unit(PredName_7, 32)) {
                                      case (MR_Integer) 110:
                                        if (MR_offset_streq(33, PredName_7, (MR_String) "format_uint64_component_nowidth_noprec"))
                                          case_num_28 = (MR_Integer) 28;
                                        break;
                                      case (MR_Integer) 112:
                                        if (MR_offset_streq(33, PredName_7, (MR_String) "format_uint64_component_nowidth_prec"))
                                          case_num_28 = (MR_Integer) 29;
                                        break;
                                    }
                                  break;
                                case (MR_Integer) 119:
                                  if (MR_offset_strn_eq(25, 5, PredName_7, (MR_String) "format_uint64_component_width_"))
                                    switch (MR_nth_code_unit(PredName_7, 30)) {
                                      case (MR_Integer) 110:
                                        if (MR_offset_streq(31, PredName_7, (MR_String) "format_uint64_component_width_noprec"))
                                          case_num_28 = (MR_Integer) 30;
                                        break;
                                      case (MR_Integer) 112:
                                        if (MR_offset_streq(31, PredName_7, (MR_String) "format_uint64_component_width_prec"))
                                          case_num_28 = (MR_Integer) 31;
                                        break;
                                    }
                                  break;
                              }
                            break;
                          case (MR_Integer) 95:
                            if (MR_offset_strn_eq(12, 10, PredName_7, (MR_String) "format_uint_component_"))
                              switch (MR_nth_code_unit(PredName_7, 22)) {
                                case (MR_Integer) 110:
                                  if (MR_offset_strn_eq(23, 7, PredName_7, (MR_String) "format_uint_component_nowidth_"))
                                    switch (MR_nth_code_unit(PredName_7, 30)) {
                                      case (MR_Integer) 110:
                                        if (MR_offset_streq(31, PredName_7, (MR_String) "format_uint_component_nowidth_noprec"))
                                          case_num_28 = (MR_Integer) 32;
                                        break;
                                      case (MR_Integer) 112:
                                        if (MR_offset_streq(31, PredName_7, (MR_String) "format_uint_component_nowidth_prec"))
                                          case_num_28 = (MR_Integer) 33;
                                        break;
                                    }
                                  break;
                                case (MR_Integer) 119:
                                  if (MR_offset_strn_eq(23, 5, PredName_7, (MR_String) "format_uint_component_width_"))
                                    switch (MR_nth_code_unit(PredName_7, 28)) {
                                      case (MR_Integer) 110:
                                        if (MR_offset_streq(29, PredName_7, (MR_String) "format_uint_component_width_noprec"))
                                          case_num_28 = (MR_Integer) 34;
                                        break;
                                      case (MR_Integer) 112:
                                        if (MR_offset_streq(29, PredName_7, (MR_String) "format_uint_component_width_prec"))
                                          case_num_28 = (MR_Integer) 35;
                                        break;
                                    }
                                  break;
                              }
                            break;
                        }
                      break;
                    case (MR_Integer) 110:
                      if (MR_offset_strn_eq(9, 23, PredName_7, (MR_String) "format_unsigned_int64_component_"))
                        switch (MR_nth_code_unit(PredName_7, 32)) {
                          case (MR_Integer) 110:
                            if (MR_offset_strn_eq(33, 7, PredName_7, (MR_String) "format_unsigned_int64_component_nowidth_"))
                              switch (MR_nth_code_unit(PredName_7, 40)) {
                                case (MR_Integer) 110:
                                  if (MR_offset_streq(41, PredName_7, (MR_String) "format_unsigned_int64_component_nowidth_noprec"))
                                    case_num_28 = (MR_Integer) 36;
                                  break;
                                case (MR_Integer) 112:
                                  if (MR_offset_streq(41, PredName_7, (MR_String) "format_unsigned_int64_component_nowidth_prec"))
                                    case_num_28 = (MR_Integer) 37;
                                  break;
                              }
                            break;
                          case (MR_Integer) 119:
                            if (MR_offset_strn_eq(33, 5, PredName_7, (MR_String) "format_unsigned_int64_component_width_"))
                              switch (MR_nth_code_unit(PredName_7, 38)) {
                                case (MR_Integer) 110:
                                  if (MR_offset_streq(39, PredName_7, (MR_String) "format_unsigned_int64_component_width_noprec"))
                                    case_num_28 = (MR_Integer) 38;
                                  break;
                                case (MR_Integer) 112:
                                  if (MR_offset_streq(39, PredName_7, (MR_String) "format_unsigned_int64_component_width_prec"))
                                    case_num_28 = (MR_Integer) 39;
                                  break;
                              }
                            break;
                        }
                      break;
                  }
                  break;
              }
            switch (case_num_28) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 0:
                {
                  // case "format_cast_int16_to_int"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 2);
                }
                break;
              case (MR_Integer) 1:
                {
                  // case "format_cast_int16_to_uint"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 2);
                }
                break;
              case (MR_Integer) 2:
                {
                  // case "format_cast_int32_to_int"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 2);
                }
                break;
              case (MR_Integer) 3:
                {
                  // case "format_cast_int32_to_uint"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 2);
                }
                break;
              case (MR_Integer) 4:
                {
                  // case "format_cast_int8_to_int"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 2);
                }
                break;
              case (MR_Integer) 5:
                {
                  // case "format_cast_int8_to_uint"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 2);
                }
                break;
              case (MR_Integer) 6:
                {
                  // case "format_cast_int_to_uint"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 2);
                }
                break;
              case (MR_Integer) 7:
                {
                  // case "format_cast_uint16_to_uint"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 2);
                }
                break;
              case (MR_Integer) 8:
                {
                  // case "format_cast_uint32_to_uint"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 2);
                }
                break;
              case (MR_Integer) 9:
                {
                  // case "format_cast_uint8_to_uint"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 2);
                }
                break;
              case (MR_Integer) 10:
                {
                  // case "format_char_component_nowidth"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 3);
                }
                break;
              case (MR_Integer) 11:
                {
                  // case "format_char_component_width"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 4);
                }
                break;
              case (MR_Integer) 12:
                {
                  // case "format_float_component_nowidth_noprec"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 4);
                }
                break;
              case (MR_Integer) 13:
                {
                  // case "format_float_component_nowidth_prec"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 5);
                }
                break;
              case (MR_Integer) 14:
                {
                  // case "format_float_component_width_noprec"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 5);
                }
                break;
              case (MR_Integer) 15:
                {
                  // case "format_float_component_width_prec"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 6);
                }
                break;
              case (MR_Integer) 16:
                {
                  // case "format_signed_int64_component_nowidth_noprec"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 3);
                }
                break;
              case (MR_Integer) 17:
                {
                  // case "format_signed_int64_component_nowidth_prec"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 4);
                }
                break;
              case (MR_Integer) 18:
                {
                  // case "format_signed_int64_component_width_noprec"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 4);
                }
                break;
              case (MR_Integer) 19:
                {
                  // case "format_signed_int64_component_width_prec"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 5);
                }
                break;
              case (MR_Integer) 20:
                {
                  // case "format_signed_int_component_nowidth_noprec"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 3);
                }
                break;
              case (MR_Integer) 21:
                {
                  // case "format_signed_int_component_nowidth_prec"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 4);
                }
                break;
              case (MR_Integer) 22:
                {
                  // case "format_signed_int_component_width_noprec"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 4);
                }
                break;
              case (MR_Integer) 23:
                {
                  // case "format_signed_int_component_width_prec"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 5);
                }
                break;
              case (MR_Integer) 24:
                {
                  // case "format_string_component_nowidth_noprec"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 3);
                }
                break;
              case (MR_Integer) 25:
                {
                  // case "format_string_component_nowidth_prec"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 4);
                }
                break;
              case (MR_Integer) 26:
                {
                  // case "format_string_component_width_noprec"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 4);
                }
                break;
              case (MR_Integer) 27:
                {
                  // case "format_string_component_width_prec"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 5);
                }
                break;
              case (MR_Integer) 28:
                {
                  // case "format_uint64_component_nowidth_noprec"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 4);
                }
                break;
              case (MR_Integer) 29:
                {
                  // case "format_uint64_component_nowidth_prec"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 5);
                }
                break;
              case (MR_Integer) 30:
                {
                  // case "format_uint64_component_width_noprec"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 5);
                }
                break;
              case (MR_Integer) 31:
                {
                  // case "format_uint64_component_width_prec"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 6);
                }
                break;
              case (MR_Integer) 32:
                {
                  // case "format_uint_component_nowidth_noprec"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 4);
                }
                break;
              case (MR_Integer) 33:
                {
                  // case "format_uint_component_nowidth_prec"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 5);
                }
                break;
              case (MR_Integer) 34:
                {
                  // case "format_uint_component_width_noprec"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 5);
                }
                break;
              case (MR_Integer) 35:
                {
                  // case "format_uint_component_width_prec"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 6);
                }
                break;
              case (MR_Integer) 36:
                {
                  // case "format_unsigned_int64_component_nowidth_noprec"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 4);
                }
                break;
              case (MR_Integer) 37:
                {
                  // case "format_unsigned_int64_component_nowidth_prec"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 5);
                }
                break;
              case (MR_Integer) 38:
                {
                  // case "format_unsigned_int64_component_width_noprec"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 5);
                }
                break;
              case (MR_Integer) 39:
                {
                  // case "format_unsigned_int64_component_width_prec"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 6);
                }
                break;
            }
          }
          if (succeeded)
            succeeded = (PredOrFunc_5 == (MR_Integer) 0);
        }
        break;
      case (MR_Integer) 15:
        {
          // case "table_builtin"
          ;
          {
            MR_Integer case_num_29 = (MR_Integer) -1;

            switch (MR_nth_code_unit(PredName_7, 0)) {
              case (MR_Integer) 103:
                if (MR_offset_streq(1, PredName_7, (MR_String) "generate_simple_call_table_lookup_goal"))
                  case_num_29 = (MR_Integer) 0;
                break;
              case (MR_Integer) 116:
                if (MR_offset_strn_eq(1, 5, PredName_7, (MR_String) "table_"))
                  switch (MR_nth_code_unit(PredName_7, 6)) {
                    case (MR_Integer) 101:
                      if (MR_offset_streq(7, PredName_7, (MR_String) "table_error"))
                        case_num_29 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 105:
                      if (MR_offset_strn_eq(7, 2, PredName_7, (MR_String) "table_io_"))
                        switch (MR_nth_code_unit(PredName_7, 9)) {
                          case (MR_Integer) 99:
                            if (MR_offset_streq(10, PredName_7, (MR_String) "table_io_copy_io_state"))
                              case_num_29 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 104:
                            if (MR_offset_streq(10, PredName_7, (MR_String) "table_io_has_occurred"))
                              case_num_29 = (MR_Integer) 3;
                            break;
                          case (MR_Integer) 105:
                            if (MR_offset_streq(10, PredName_7, (MR_String) "table_io_in_range"))
                              case_num_29 = (MR_Integer) 4;
                            break;
                          case (MR_Integer) 108:
                            if (MR_offset_streq(10, PredName_7, (MR_String) "table_io_left_bracket_unitized_goal"))
                              case_num_29 = (MR_Integer) 5;
                            break;
                          case (MR_Integer) 114:
                            if (MR_offset_streq(10, PredName_7, (MR_String) "table_io_right_bracket_unitized_goal"))
                              case_num_29 = (MR_Integer) 6;
                            break;
                        }
                      break;
                    case (MR_Integer) 108:
                      if (MR_offset_strn_eq(7, 2, PredName_7, (MR_String) "table_loo"))
                        switch (MR_nth_code_unit(PredName_7, 9)) {
                          case (MR_Integer) 107:
                            if (MR_offset_strn_eq(10, 3, PredName_7, (MR_String) "table_lookup_"))
                              switch (MR_nth_code_unit(PredName_7, 13)) {
                                case (MR_Integer) 105:
                                  if (MR_offset_strn_eq(14, 6, PredName_7, (MR_String) "table_lookup_insert_"))
                                    switch (MR_nth_code_unit(PredName_7, 20)) {
                                      case (MR_Integer) 97:
                                        if (MR_offset_streq(21, PredName_7, (MR_String) "table_lookup_insert_addr"))
                                          case_num_29 = (MR_Integer) 7;
                                        break;
                                      case (MR_Integer) 99:
                                        if (MR_offset_streq(21, PredName_7, (MR_String) "table_lookup_insert_char"))
                                          case_num_29 = (MR_Integer) 8;
                                        break;
                                      case (MR_Integer) 101:
                                        if (MR_offset_streq(21, PredName_7, (MR_String) "table_lookup_insert_enum"))
                                          case_num_29 = (MR_Integer) 9;
                                        break;
                                      case (MR_Integer) 102:
                                        switch (MR_nth_code_unit(PredName_7, 21)) {
                                          case (MR_Integer) 108:
                                            if (MR_offset_streq(22, PredName_7, (MR_String) "table_lookup_insert_float"))
                                              case_num_29 = (MR_Integer) 10;
                                            break;
                                          case (MR_Integer) 111:
                                            if (MR_offset_streq(22, PredName_7, (MR_String) "table_lookup_insert_foreign_enum"))
                                              case_num_29 = (MR_Integer) 11;
                                            break;
                                        }
                                        break;
                                      case (MR_Integer) 103:
                                        if (MR_offset_streq(21, PredName_7, (MR_String) "table_lookup_insert_gen"))
                                          case_num_29 = (MR_Integer) 12;
                                        break;
                                      case (MR_Integer) 105:
                                        if (MR_offset_streq(21, PredName_7, (MR_String) "table_lookup_insert_int"))
                                          case_num_29 = (MR_Integer) 13;
                                        break;
                                      case (MR_Integer) 112:
                                        if (MR_offset_strn_eq(21, 3, PredName_7, (MR_String) "table_lookup_insert_poly"))
                                          switch (MR_nth_code_unit(PredName_7, 24)) {
                                            case (MR_Integer) 0:
                                              case_num_29 = (MR_Integer) 14;
                                              break;
                                            case (MR_Integer) 95:
                                              if (MR_offset_streq(25, PredName_7, (MR_String) "table_lookup_insert_poly_addr"))
                                                case_num_29 = (MR_Integer) 15;
                                              break;
                                          }
                                        break;
                                      case (MR_Integer) 115:
                                        switch (MR_nth_code_unit(PredName_7, 21)) {
                                          case (MR_Integer) 116:
                                            switch (MR_nth_code_unit(PredName_7, 22)) {
                                              case (MR_Integer) 97:
                                                if (MR_offset_streq(23, PredName_7, (MR_String) "table_lookup_insert_start_int"))
                                                  case_num_29 = (MR_Integer) 16;
                                                break;
                                              case (MR_Integer) 114:
                                                if (MR_offset_streq(23, PredName_7, (MR_String) "table_lookup_insert_string"))
                                                  case_num_29 = (MR_Integer) 17;
                                                break;
                                            }
                                            break;
                                        }
                                        break;
                                      case (MR_Integer) 116:
                                        if (MR_offset_strn_eq(21, 3, PredName_7, (MR_String) "table_lookup_insert_type"))
                                          switch (MR_nth_code_unit(PredName_7, 24)) {
                                            case (MR_Integer) 99:
                                              if (MR_offset_streq(25, PredName_7, (MR_String) "table_lookup_insert_typeclassinfo"))
                                                case_num_29 = (MR_Integer) 18;
                                              break;
                                            case (MR_Integer) 105:
                                              if (MR_offset_streq(25, PredName_7, (MR_String) "table_lookup_insert_typeinfo"))
                                                case_num_29 = (MR_Integer) 19;
                                              break;
                                          }
                                        break;
                                    }
                                  break;
                                case (MR_Integer) 114:
                                  if (MR_offset_strn_eq(14, 7, PredName_7, (MR_String) "table_lookup_restore_"))
                                    switch (MR_nth_code_unit(PredName_7, 21)) {
                                      case (MR_Integer) 97:
                                        if (MR_offset_streq(22, PredName_7, (MR_String) "table_lookup_restore_any_answer"))
                                          case_num_29 = (MR_Integer) 20;
                                        break;
                                      case (MR_Integer) 99:
                                        if (MR_offset_streq(22, PredName_7, (MR_String) "table_lookup_restore_char_answer"))
                                          case_num_29 = (MR_Integer) 21;
                                        break;
                                      case (MR_Integer) 102:
                                        if (MR_offset_streq(22, PredName_7, (MR_String) "table_lookup_restore_float_answer"))
                                          case_num_29 = (MR_Integer) 22;
                                        break;
                                      case (MR_Integer) 105:
                                        switch (MR_nth_code_unit(PredName_7, 22)) {
                                          case (MR_Integer) 110:
                                            if (MR_offset_streq(23, PredName_7, (MR_String) "table_lookup_restore_int_answer"))
                                              case_num_29 = (MR_Integer) 23;
                                            break;
                                          case (MR_Integer) 111:
                                            if (MR_offset_streq(23, PredName_7, (MR_String) "table_lookup_restore_io_state_answer"))
                                              case_num_29 = (MR_Integer) 24;
                                            break;
                                        }
                                        break;
                                      case (MR_Integer) 115:
                                        if (MR_offset_streq(22, PredName_7, (MR_String) "table_lookup_restore_string_answer"))
                                          case_num_29 = (MR_Integer) 25;
                                        break;
                                    }
                                  break;
                                case (MR_Integer) 115:
                                  if (MR_offset_strn_eq(14, 4, PredName_7, (MR_String) "table_lookup_save_"))
                                    switch (MR_nth_code_unit(PredName_7, 18)) {
                                      case (MR_Integer) 97:
                                        if (MR_offset_streq(19, PredName_7, (MR_String) "table_lookup_save_any_answer"))
                                          case_num_29 = (MR_Integer) 26;
                                        break;
                                      case (MR_Integer) 99:
                                        if (MR_offset_streq(19, PredName_7, (MR_String) "table_lookup_save_char_answer"))
                                          case_num_29 = (MR_Integer) 27;
                                        break;
                                      case (MR_Integer) 102:
                                        if (MR_offset_streq(19, PredName_7, (MR_String) "table_lookup_save_float_answer"))
                                          case_num_29 = (MR_Integer) 28;
                                        break;
                                      case (MR_Integer) 105:
                                        switch (MR_nth_code_unit(PredName_7, 19)) {
                                          case (MR_Integer) 110:
                                            if (MR_offset_streq(20, PredName_7, (MR_String) "table_lookup_save_int_answer"))
                                              case_num_29 = (MR_Integer) 29;
                                            break;
                                          case (MR_Integer) 111:
                                            if (MR_offset_streq(20, PredName_7, (MR_String) "table_lookup_save_io_state_answer"))
                                              case_num_29 = (MR_Integer) 30;
                                            break;
                                        }
                                        break;
                                      case (MR_Integer) 115:
                                        if (MR_offset_streq(19, PredName_7, (MR_String) "table_lookup_save_string_answer"))
                                          case_num_29 = (MR_Integer) 31;
                                        break;
                                    }
                                  break;
                              }
                            break;
                          case (MR_Integer) 112:
                            switch (MR_nth_code_unit(PredName_7, 10)) {
                              case (MR_Integer) 95:
                                switch (MR_nth_code_unit(PredName_7, 11)) {
                                  case (MR_Integer) 109:
                                    if (MR_offset_strn_eq(12, 7, PredName_7, (MR_String) "table_loop_mark_as_"))
                                      switch (MR_nth_code_unit(PredName_7, 19)) {
                                        case (MR_Integer) 97:
                                          if (MR_offset_streq(20, PredName_7, (MR_String) "table_loop_mark_as_active_and_fail"))
                                            case_num_29 = (MR_Integer) 32;
                                          break;
                                        case (MR_Integer) 105:
                                          if (MR_offset_strn_eq(20, 7, PredName_7, (MR_String) "table_loop_mark_as_inactive"))
                                            switch (MR_nth_code_unit(PredName_7, 27)) {
                                              case (MR_Integer) 0:
                                                case_num_29 = (MR_Integer) 33;
                                                break;
                                              case (MR_Integer) 95:
                                                if (MR_offset_streq(28, PredName_7, (MR_String) "table_loop_mark_as_inactive_and_fail"))
                                                  case_num_29 = (MR_Integer) 34;
                                                break;
                                            }
                                          break;
                                      }
                                    break;
                                  case (MR_Integer) 115:
                                    if (MR_offset_strn_eq(12, 4, PredName_7, (MR_String) "table_loop_setup"))
                                      switch (MR_nth_code_unit(PredName_7, 16)) {
                                        case (MR_Integer) 0:
                                          case_num_29 = (MR_Integer) 35;
                                          break;
                                        case (MR_Integer) 95:
                                          if (MR_offset_streq(17, PredName_7, (MR_String) "table_loop_setup_shortcut"))
                                            case_num_29 = (MR_Integer) 36;
                                          break;
                                      }
                                    break;
                                }
                                break;
                            }
                            break;
                        }
                      break;
                    case (MR_Integer) 109:
                      switch (MR_nth_code_unit(PredName_7, 7)) {
                        case (MR_Integer) 101:
                          if (MR_offset_strn_eq(8, 3, PredName_7, (MR_String) "table_memo_"))
                            switch (MR_nth_code_unit(PredName_7, 11)) {
                              case (MR_Integer) 99:
                                if (MR_offset_streq(12, PredName_7, (MR_String) "table_memo_create_answer_block"))
                                  case_num_29 = (MR_Integer) 37;
                                break;
                              case (MR_Integer) 100:
                                if (MR_offset_strn_eq(12, 8, PredName_7, (MR_String) "table_memo_det_setup"))
                                  switch (MR_nth_code_unit(PredName_7, 20)) {
                                    case (MR_Integer) 0:
                                      case_num_29 = (MR_Integer) 38;
                                      break;
                                    case (MR_Integer) 95:
                                      if (MR_offset_streq(21, PredName_7, (MR_String) "table_memo_det_setup_shortcut"))
                                        case_num_29 = (MR_Integer) 39;
                                      break;
                                  }
                                break;
                              case (MR_Integer) 102:
                                if (MR_offset_streq(12, PredName_7, (MR_String) "table_memo_fill_answer_block_shortcut"))
                                  case_num_29 = (MR_Integer) 40;
                                break;
                              case (MR_Integer) 103:
                                if (MR_offset_strn_eq(12, 15, PredName_7, (MR_String) "table_memo_get_answer_block"))
                                  switch (MR_nth_code_unit(PredName_7, 27)) {
                                    case (MR_Integer) 0:
                                      case_num_29 = (MR_Integer) 41;
                                      break;
                                    case (MR_Integer) 95:
                                      if (MR_offset_streq(28, PredName_7, (MR_String) "table_memo_get_answer_block_shortcut"))
                                        case_num_29 = (MR_Integer) 42;
                                      break;
                                  }
                                break;
                              case (MR_Integer) 109:
                                if (MR_offset_strn_eq(12, 7, PredName_7, (MR_String) "table_memo_mark_as_"))
                                  switch (MR_nth_code_unit(PredName_7, 19)) {
                                    case (MR_Integer) 97:
                                      if (MR_offset_streq(20, PredName_7, (MR_String) "table_memo_mark_as_active_and_fail"))
                                        case_num_29 = (MR_Integer) 43;
                                      break;
                                    case (MR_Integer) 99:
                                      if (MR_offset_streq(20, PredName_7, (MR_String) "table_memo_mark_as_complete_and_fail"))
                                        case_num_29 = (MR_Integer) 44;
                                      break;
                                    case (MR_Integer) 102:
                                      if (MR_offset_streq(20, PredName_7, (MR_String) "table_memo_mark_as_failed"))
                                        case_num_29 = (MR_Integer) 45;
                                      break;
                                    case (MR_Integer) 105:
                                      if (MR_offset_streq(20, PredName_7, (MR_String) "table_memo_mark_as_incomplete"))
                                        case_num_29 = (MR_Integer) 46;
                                      break;
                                    case (MR_Integer) 115:
                                      if (MR_offset_streq(20, PredName_7, (MR_String) "table_memo_mark_as_succeeded"))
                                        case_num_29 = (MR_Integer) 47;
                                      break;
                                  }
                                break;
                              case (MR_Integer) 110:
                                if (MR_offset_strn_eq(12, 3, PredName_7, (MR_String) "table_memo_non_"))
                                  switch (MR_nth_code_unit(PredName_7, 15)) {
                                    case (MR_Integer) 97:
                                      if (MR_offset_strn_eq(16, 22, PredName_7, (MR_String) "table_memo_non_answer_is_not_duplicate"))
                                        switch (MR_nth_code_unit(PredName_7, 38)) {
                                          case (MR_Integer) 0:
                                            case_num_29 = (MR_Integer) 48;
                                            break;
                                          case (MR_Integer) 95:
                                            if (MR_offset_streq(39, PredName_7, (MR_String) "table_memo_non_answer_is_not_duplicate_shortcut"))
                                              case_num_29 = (MR_Integer) 49;
                                            break;
                                        }
                                      break;
                                    case (MR_Integer) 103:
                                      if (MR_offset_streq(16, PredName_7, (MR_String) "table_memo_non_get_answer_table"))
                                        case_num_29 = (MR_Integer) 50;
                                      break;
                                    case (MR_Integer) 114:
                                      if (MR_offset_streq(16, PredName_7, (MR_String) "table_memo_non_return_all_shortcut"))
                                        case_num_29 = (MR_Integer) 51;
                                      break;
                                    case (MR_Integer) 115:
                                      if (MR_offset_streq(16, PredName_7, (MR_String) "table_memo_non_setup"))
                                        case_num_29 = (MR_Integer) 52;
                                      break;
                                  }
                                break;
                              case (MR_Integer) 114:
                                if (MR_offset_strn_eq(12, 18, PredName_7, (MR_String) "table_memo_return_all_answers_"))
                                  switch (MR_nth_code_unit(PredName_7, 30)) {
                                    case (MR_Integer) 109:
                                      if (MR_offset_streq(31, PredName_7, (MR_String) "table_memo_return_all_answers_multi"))
                                        case_num_29 = (MR_Integer) 53;
                                      break;
                                    case (MR_Integer) 110:
                                      if (MR_offset_streq(31, PredName_7, (MR_String) "table_memo_return_all_answers_nondet"))
                                        case_num_29 = (MR_Integer) 54;
                                      break;
                                  }
                                break;
                              case (MR_Integer) 115:
                                if (MR_offset_strn_eq(12, 9, PredName_7, (MR_String) "table_memo_semi_setup"))
                                  switch (MR_nth_code_unit(PredName_7, 21)) {
                                    case (MR_Integer) 0:
                                      case_num_29 = (MR_Integer) 55;
                                      break;
                                    case (MR_Integer) 95:
                                      if (MR_offset_streq(22, PredName_7, (MR_String) "table_memo_semi_setup_shortcut"))
                                        case_num_29 = (MR_Integer) 56;
                                      break;
                                  }
                                break;
                            }
                          break;
                        case (MR_Integer) 109:
                          switch (MR_nth_code_unit(PredName_7, 8)) {
                            case (MR_Integer) 95:
                              switch (MR_nth_code_unit(PredName_7, 9)) {
                                case (MR_Integer) 97:
                                  if (MR_offset_strn_eq(10, 22, PredName_7, (MR_String) "table_mm_answer_is_not_duplicate"))
                                    switch (MR_nth_code_unit(PredName_7, 32)) {
                                      case (MR_Integer) 0:
                                        case_num_29 = (MR_Integer) 57;
                                        break;
                                      case (MR_Integer) 95:
                                        if (MR_offset_streq(33, PredName_7, (MR_String) "table_mm_answer_is_not_duplicate_shortcut"))
                                          case_num_29 = (MR_Integer) 58;
                                        break;
                                    }
                                  break;
                                case (MR_Integer) 99:
                                  switch (MR_nth_code_unit(PredName_7, 10)) {
                                    case (MR_Integer) 111:
                                      if (MR_offset_streq(11, PredName_7, (MR_String) "table_mm_completion"))
                                        case_num_29 = (MR_Integer) 59;
                                      break;
                                    case (MR_Integer) 114:
                                      if (MR_offset_streq(11, PredName_7, (MR_String) "table_mm_create_answer_block"))
                                        case_num_29 = (MR_Integer) 60;
                                      break;
                                  }
                                  break;
                                case (MR_Integer) 102:
                                  if (MR_offset_streq(10, PredName_7, (MR_String) "table_mm_fill_answer_block_shortcut"))
                                    case_num_29 = (MR_Integer) 61;
                                  break;
                                case (MR_Integer) 103:
                                  if (MR_offset_streq(10, PredName_7, (MR_String) "table_mm_get_answer_table"))
                                    case_num_29 = (MR_Integer) 62;
                                  break;
                                case (MR_Integer) 114:
                                  if (MR_offset_strn_eq(10, 10, PredName_7, (MR_String) "table_mm_return_all_"))
                                    switch (MR_nth_code_unit(PredName_7, 20)) {
                                      case (MR_Integer) 109:
                                        if (MR_offset_streq(21, PredName_7, (MR_String) "table_mm_return_all_multi"))
                                          case_num_29 = (MR_Integer) 63;
                                        break;
                                      case (MR_Integer) 110:
                                        if (MR_offset_streq(21, PredName_7, (MR_String) "table_mm_return_all_nondet"))
                                          case_num_29 = (MR_Integer) 64;
                                        break;
                                      case (MR_Integer) 115:
                                        if (MR_offset_streq(21, PredName_7, (MR_String) "table_mm_return_all_shortcut"))
                                          case_num_29 = (MR_Integer) 65;
                                        break;
                                    }
                                  break;
                                case (MR_Integer) 115:
                                  switch (MR_nth_code_unit(PredName_7, 10)) {
                                    case (MR_Integer) 101:
                                      if (MR_offset_streq(11, PredName_7, (MR_String) "table_mm_setup"))
                                        case_num_29 = (MR_Integer) 66;
                                      break;
                                    case (MR_Integer) 117:
                                      if (MR_offset_streq(11, PredName_7, (MR_String) "table_mm_suspend_consumer"))
                                        case_num_29 = (MR_Integer) 67;
                                      break;
                                  }
                                  break;
                              }
                              break;
                            case (MR_Integer) 111:
                              if (MR_offset_strn_eq(9, 2, PredName_7, (MR_String) "table_mmos_"))
                                switch (MR_nth_code_unit(PredName_7, 11)) {
                                  case (MR_Integer) 97:
                                    if (MR_offset_strn_eq(12, 22, PredName_7, (MR_String) "table_mmos_answer_is_not_duplicate"))
                                      switch (MR_nth_code_unit(PredName_7, 34)) {
                                        case (MR_Integer) 0:
                                          case_num_29 = (MR_Integer) 68;
                                          break;
                                        case (MR_Integer) 95:
                                          if (MR_offset_streq(35, PredName_7, (MR_String) "table_mmos_answer_is_not_duplicate_shortcut"))
                                            case_num_29 = (MR_Integer) 69;
                                          break;
                                      }
                                    break;
                                  case (MR_Integer) 99:
                                    switch (MR_nth_code_unit(PredName_7, 12)) {
                                      case (MR_Integer) 111:
                                        switch (MR_nth_code_unit(PredName_7, 13)) {
                                          case (MR_Integer) 109:
                                            if (MR_offset_streq(14, PredName_7, (MR_String) "table_mmos_completion"))
                                              case_num_29 = (MR_Integer) 70;
                                            break;
                                          case (MR_Integer) 110:
                                            if (MR_offset_strn_eq(14, 17, PredName_7, (MR_String) "table_mmos_consume_next_answer_"))
                                              switch (MR_nth_code_unit(PredName_7, 31)) {
                                                case (MR_Integer) 109:
                                                  if (MR_offset_streq(32, PredName_7, (MR_String) "table_mmos_consume_next_answer_multi"))
                                                    case_num_29 = (MR_Integer) 71;
                                                  break;
                                                case (MR_Integer) 110:
                                                  if (MR_offset_streq(32, PredName_7, (MR_String) "table_mmos_consume_next_answer_nondet"))
                                                    case_num_29 = (MR_Integer) 72;
                                                  break;
                                              }
                                            break;
                                        }
                                        break;
                                      case (MR_Integer) 114:
                                        if (MR_offset_streq(13, PredName_7, (MR_String) "table_mmos_create_answer_block"))
                                          case_num_29 = (MR_Integer) 73;
                                        break;
                                    }
                                    break;
                                  case (MR_Integer) 112:
                                    if (MR_offset_streq(12, PredName_7, (MR_String) "table_mmos_pickup_inputs"))
                                      case_num_29 = (MR_Integer) 74;
                                    break;
                                  case (MR_Integer) 114:
                                    switch (MR_nth_code_unit(PredName_7, 12)) {
                                      case (MR_Integer) 101:
                                        switch (MR_nth_code_unit(PredName_7, 13)) {
                                          case (MR_Integer) 115:
                                            if (MR_offset_streq(14, PredName_7, (MR_String) "table_mmos_restore_answers"))
                                              case_num_29 = (MR_Integer) 75;
                                            break;
                                          case (MR_Integer) 116:
                                            if (MR_offset_streq(14, PredName_7, (MR_String) "table_mmos_return_answer"))
                                              case_num_29 = (MR_Integer) 76;
                                            break;
                                        }
                                        break;
                                    }
                                    break;
                                  case (MR_Integer) 115:
                                    switch (MR_nth_code_unit(PredName_7, 12)) {
                                      case (MR_Integer) 97:
                                        if (MR_offset_streq(13, PredName_7, (MR_String) "table_mmos_save_inputs"))
                                          case_num_29 = (MR_Integer) 77;
                                        break;
                                      case (MR_Integer) 101:
                                        if (MR_offset_streq(13, PredName_7, (MR_String) "table_mmos_setup_consumer"))
                                          case_num_29 = (MR_Integer) 78;
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
                break;
            }
            switch (case_num_29) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 0:
                {
                  // case "generate_simple_call_table_lookup_goal"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 3);
                }
                break;
              case (MR_Integer) 1:
                {
                  // case "table_error"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 2:
                {
                  // case "table_io_copy_io_state"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 2);
                }
                break;
              case (MR_Integer) 3:
                {
                  // case "table_io_has_occurred"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 4:
                {
                  // case "table_io_in_range"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 3);
                }
                break;
              case (MR_Integer) 5:
                {
                  // case "table_io_left_bracket_unitized_goal"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 6:
                {
                  // case "table_io_right_bracket_unitized_goal"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 7:
                {
                  // case "table_lookup_insert_addr"
                  ;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 8:
                {
                  // case "table_lookup_insert_char"
                  ;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 9:
                {
                  // case "table_lookup_insert_enum"
                  ;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 10:
                {
                  // case "table_lookup_insert_float"
                  ;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 11:
                {
                  // case "table_lookup_insert_foreign_enum"
                  ;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 12:
                {
                  // case "table_lookup_insert_gen"
                  ;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 13:
                {
                  // case "table_lookup_insert_int"
                  ;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 14:
                {
                  // case "table_lookup_insert_poly"
                  ;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 15:
                {
                  // case "table_lookup_insert_poly_addr"
                  ;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 16:
                {
                  // case "table_lookup_insert_start_int"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 4);
                }
                break;
              case (MR_Integer) 17:
                {
                  // case "table_lookup_insert_string"
                  ;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 18:
                {
                  // case "table_lookup_insert_typeclassinfo"
                  ;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 19:
                {
                  // case "table_lookup_insert_typeinfo"
                  ;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 20:
                {
                  // case "table_lookup_restore_any_answer"
                  ;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 21:
                {
                  // case "table_lookup_restore_char_answer"
                  ;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 22:
                {
                  // case "table_lookup_restore_float_answer"
                  ;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 23:
                {
                  // case "table_lookup_restore_int_answer"
                  ;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 24:
                {
                  // case "table_lookup_restore_io_state_answer"
                  ;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 25:
                {
                  // case "table_lookup_restore_string_answer"
                  ;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 26:
                {
                  // case "table_lookup_save_any_answer"
                  ;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 27:
                {
                  // case "table_lookup_save_char_answer"
                  ;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 28:
                {
                  // case "table_lookup_save_float_answer"
                  ;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 29:
                {
                  // case "table_lookup_save_int_answer"
                  ;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 30:
                {
                  // case "table_lookup_save_io_state_answer"
                  ;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 31:
                {
                  // case "table_lookup_save_string_answer"
                  ;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 32:
                {
                  // case "table_loop_mark_as_active_and_fail"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 33:
                {
                  // case "table_loop_mark_as_inactive"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 34:
                {
                  // case "table_loop_mark_as_inactive_and_fail"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 35:
                {
                  // case "table_loop_setup"
                  ;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 36:
                {
                  // case "table_loop_setup_shortcut"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 3);
                }
                break;
              case (MR_Integer) 37:
                {
                  // case "table_memo_create_answer_block"
                  ;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 38:
                {
                  // case "table_memo_det_setup"
                  ;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 39:
                {
                  // case "table_memo_det_setup_shortcut"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 3);
                }
                break;
              case (MR_Integer) 40:
                {
                  // case "table_memo_fill_answer_block_shortcut"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 41:
                {
                  // case "table_memo_get_answer_block"
                  ;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 42:
                {
                  // case "table_memo_get_answer_block_shortcut"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 43:
                {
                  // case "table_memo_mark_as_active_and_fail"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 44:
                {
                  // case "table_memo_mark_as_complete_and_fail"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 45:
                {
                  // case "table_memo_mark_as_failed"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 46:
                {
                  // case "table_memo_mark_as_incomplete"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 47:
                {
                  // case "table_memo_mark_as_succeeded"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 48:
                {
                  // case "table_memo_non_answer_is_not_duplicate"
                  ;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 49:
                {
                  // case "table_memo_non_answer_is_not_duplicate_shortcut"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 50:
                {
                  // case "table_memo_non_get_answer_table"
                  ;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 51:
                {
                  // case "table_memo_non_return_all_shortcut"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 52:
                {
                  // case "table_memo_non_setup"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 3);
                }
                break;
              case (MR_Integer) 53:
                {
                  // case "table_memo_return_all_answers_multi"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 2);
                }
                break;
              case (MR_Integer) 54:
                {
                  // case "table_memo_return_all_answers_nondet"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 2);
                }
                break;
              case (MR_Integer) 55:
                {
                  // case "table_memo_semi_setup"
                  ;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 56:
                {
                  // case "table_memo_semi_setup_shortcut"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 3);
                }
                break;
              case (MR_Integer) 57:
                {
                  // case "table_mm_answer_is_not_duplicate"
                  ;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 58:
                {
                  // case "table_mm_answer_is_not_duplicate_shortcut"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 59:
                {
                  // case "table_mm_completion"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 60:
                {
                  // case "table_mm_create_answer_block"
                  ;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 61:
                {
                  // case "table_mm_fill_answer_block_shortcut"
                  ;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 62:
                {
                  // case "table_mm_get_answer_table"
                  ;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 63:
                {
                  // case "table_mm_return_all_multi"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 2);
                }
                break;
              case (MR_Integer) 64:
                {
                  // case "table_mm_return_all_nondet"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 2);
                }
                break;
              case (MR_Integer) 65:
                {
                  // case "table_mm_return_all_shortcut"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 66:
                {
                  // case "table_mm_setup"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 3);
                }
                break;
              case (MR_Integer) 67:
                {
                  // case "table_mm_suspend_consumer"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 2);
                }
                break;
              case (MR_Integer) 68:
                {
                  // case "table_mmos_answer_is_not_duplicate"
                  ;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 69:
                {
                  // case "table_mmos_answer_is_not_duplicate_shortcut"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 70:
                {
                  // case "table_mmos_completion"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 71:
                {
                  // case "table_mmos_consume_next_answer_multi"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 2);
                }
                break;
              case (MR_Integer) 72:
                {
                  // case "table_mmos_consume_next_answer_nondet"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 2);
                }
                break;
              case (MR_Integer) 73:
                {
                  // case "table_mmos_create_answer_block"
                  ;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 74:
                {
                  // case "table_mmos_pickup_inputs"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 75:
                {
                  // case "table_mmos_restore_answers"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 76:
                {
                  // case "table_mmos_return_answer"
                  ;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 77:
                {
                  // case "table_mmos_save_inputs"
                  ;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 78:
                {
                  // case "table_mmos_setup_consumer"
                  ;
                  succeeded = (OrigArity_8 == (MR_Integer) 3);
                }
                break;
            }
          }
          if (succeeded)
            succeeded = (PredOrFunc_5 == (MR_Integer) 0);
        }
        break;
      case (MR_Integer) 16:
        {
          // case "term_size_prof_builtin"
          ;
          {
            MR_Integer slot_30 = ((MR_hash_string6(PredName_7)) & (MR_Integer) 63);
            MR_String str_31 = ((&hlds__introduced_call_table_vector_common_2[138 + slot_30]))->hlds__introduced_call_table__vector_common_type_2_0__vct_2_f_0;

            // hashed string jump switch
            ;
            // compute the hash value of the input string
            ;
            // no collisions; no hash chain loop
            ;
            // lookup the string for this hash slot
            ;
            // did we find a match?
            ;
            if ((((str_31 != NULL)) && ((strcmp(str_31, PredName_7) == 0))))
            {
              // we found a match; dispatch to the corresponding code
              ;
              switch (slot_30) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 16:
                  {
                    // case "measure_size"
                    ;
                    succeeded = (OrigArity_8 == (MR_Integer) 2);
                  }
                  break;
                case (MR_Integer) 18:
                  {
                    // case "measure_size_acc"
                    ;
                    succeeded = (OrigArity_8 == (MR_Integer) 3);
                  }
                  break;
                case (MR_Integer) 24:
                  {
                    // case "complexity_call_proc"
                    ;
                    succeeded = (OrigArity_8 == (MR_Integer) 1);
                  }
                  break;
                case (MR_Integer) 32:
                  {
                    // case "complexity_is_active"
                    ;
                    succeeded = (OrigArity_8 == (MR_Integer) 1);
                  }
                  break;
                case (MR_Integer) 33:
                  {
                    // case "increment_size"
                    ;
                    succeeded = (OrigArity_8 == (MR_Integer) 2);
                  }
                  break;
                case (MR_Integer) 46:
                  {
                    // case "complexity_exit_proc"
                    ;
                    succeeded = (OrigArity_8 == (MR_Integer) 1);
                  }
                  break;
                case (MR_Integer) 56:
                  {
                    // case "complexity_fail_proc"
                    ;
                    succeeded = (OrigArity_8 == (MR_Integer) 1);
                  }
                  break;
                case (MR_Integer) 59:
                  {
                    // case "term_size_plus"
                    ;
                    succeeded = (OrigArity_8 == (MR_Integer) 3);
                  }
                  break;
                case (MR_Integer) 62:
                  {
                    // case "complexity_redo_proc"
                    ;
                    succeeded = (OrigArity_8 == (MR_Integer) 1);
                  }
                  break;
              }
              // jump out of search loop
              ;
              goto label_8;
            }
            succeeded = MR_FALSE;
          label_8:;
            if (succeeded)
              succeeded = (PredOrFunc_5 == (MR_Integer) 0);
          }
        }
        break;
      case (MR_Integer) 17:
        {
          // case "univ"
          ;
          succeeded = (strcmp(PredName_7, (MR_String) "type_to_univ") == 0);
          if (succeeded)
          {
            succeeded = (OrigArity_8 == (MR_Integer) 2);
            if (succeeded)
              succeeded = (PredOrFunc_5 == (MR_Integer) 0);
          }
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
