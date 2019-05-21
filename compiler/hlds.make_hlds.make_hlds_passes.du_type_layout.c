/*
** Automatically generated from `du_type_layout.m'
** by the Mercury compiler,
** version rotd-2017-09-14
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


// :- module hlds.make_hlds.make_hlds_passes.du_type_layout.
// :- implementation.

/*
INIT mercury__hlds__make_hlds__make_hlds_passes__du_type_layout__init
ENDINIT
*/

#include "hlds.make_hlds.make_hlds_passes.du_type_layout.mih"


#include "analysis.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "check_hlds.clause_to_proc.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.make_hlds.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "random.mih"
#include "require.mih"
#include "robdd.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.equiv_type.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_item_stats.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.make_hlds.add_class.mih"
#include "hlds.make_hlds.add_clause.mih"
#include "hlds.make_hlds.add_foreign_proc.mih"
#include "hlds.make_hlds.add_mode.mih"
#include "hlds.make_hlds.add_mutable_aux_preds.mih"
#include "hlds.make_hlds.add_pragma.mih"
#include "hlds.make_hlds.add_pred.mih"
#include "hlds.make_hlds.add_solver.mih"
#include "hlds.make_hlds.add_special_pred.mih"
#include "hlds.make_hlds.add_type.mih"
#include "hlds.make_hlds.make_hlds_error.mih"
#include "hlds.make_hlds.make_hlds_passes.mih"
#include "hlds.make_hlds.make_hlds_warn.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "hlds.make_hlds.make_hlds_passes.make_hlds_separate_items.mih"




static void MR_CALL 
hlds__make_hlds__make_hlds_passes__du_type_layout__max_int_tag_3_p_0(
  MR_Word ConsTag_4,
  MR_Integer STATE_VARIABLE_Max_0_7,
  MR_Integer * STATE_VARIABLE_Max_8);

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__du_type_layout__layout_du_ctor_args_4_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__du_type_layout__layout_du_ctor_args_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word DuKind_6,
  MR_Word Ctor0_7,
  MR_Word * Ctor_8);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__du_type_layout__count_words_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer STATE_VARIABLE_Count_0_2,
  MR_Integer * STATE_VARIABLE_Count_3);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__du_type_layout__pack_du_ctor_args_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__du_type_layout__pack_du_ctor_args_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__du_type_layout__set_double_word_floats_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__du_type_layout__decide_du_type_layout_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);


static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes__du_type_layout_scalar_common_1[1][7];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes__du_type_layout_scalar_common_2[1][6];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes__du_type_layout_scalar_common_3[1][3];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes__du_type_layout_scalar_common_4[1][5];




static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes__du_type_layout_scalar_common_1[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_du_type_kind_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes__du_type_layout_scalar_common_2[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes__du_type_layout_scalar_common_3[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__du_type_layout_scalar_common_2[0])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__pack_du_ctor_args_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes__du_type_layout_scalar_common_4[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static void MR_CALL 
hlds__make_hlds__make_hlds_passes__du_type_layout__max_int_tag_3_p_0(
  MR_Word ConsTag_4,
  MR_Integer STATE_VARIABLE_Max_0_7,
  MR_Integer * STATE_VARIABLE_Max_8)
{
  {
    MR_bool succeeded = ((((MR_tag((MR_Word) ConsTag_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_4, (MR_Integer) 0)))) == (MR_Integer) 0)));
    MR_Integer Int_6;
    MR_Word Var_9;

    if (succeeded)
    {
      Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_4, (MR_Integer) 1)));
      succeeded = ((MR_tag((MR_Word) Var_9)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
        Int_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 0)));
    }
    if (succeeded)
      mercury__int__max_3_p_0(Int_6, STATE_VARIABLE_Max_0_7, STATE_VARIABLE_Max_8);
    else
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.make_hlds_passes.du_type_layout", (MR_String) "predicate \140hlds.make_hlds.make_hlds_passes.du_type_layout.max_int_tag\'/3", (MR_String) "non-integer value for enumeration");
        return;
      }
    }
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__du_type_layout__layout_du_ctor_args_4_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = mercury__int__f_less_or_equal_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__du_type_layout__layout_du_ctor_args_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word DuKind_6,
  MR_Word Ctor0_7,
  MR_Word * Ctor_8)
{
  {
    MR_bool succeeded;
    MR_Word ExistTVars_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor0_7, (MR_Integer) 0)));
    MR_Word Constraints_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor0_7, (MR_Integer) 1)));
    MR_Word Name_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor0_7, (MR_Integer) 2)));
    MR_Word Args0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor0_7, (MR_Integer) 3)));
    MR_Integer Arity_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Ctor0_7, (MR_Integer) 4)));
    MR_Word Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor0_7, (MR_Integer) 5)));
    MR_Word Globals_15;
    MR_Word Args1_20;
    MR_Integer ArgPackBits_22;
    MR_Word Args_26;

    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_5, &Globals_15);
    switch (MR_tag((MR_Word) DuKind_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(DuKind_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            Args1_20 = Args0_12;
            break;
          case (MR_Integer) 2:
            {
              MR_Word AllowDoubleWords_32;

              libs__globals__lookup_bool_option_3_p_0(Globals_15, (MR_Integer) 258, &AllowDoubleWords_32);
              switch (AllowDoubleWords_32) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  Args1_20 = Args0_12;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Integer TargetWordBits_33;
                    MR_Word SinglePrec_34;

                    libs__globals__lookup_int_option_3_p_0(Globals_15, (MR_Integer) 251, &TargetWordBits_33);
                    libs__globals__lookup_bool_option_3_p_0(Globals_15, (MR_Integer) 235, &SinglePrec_34);
                    succeeded = (TargetWordBits_33 == (MR_Integer) 32);
                    if (succeeded)
                      succeeded = (SinglePrec_34 == (MR_Integer) 0);
                    if (succeeded)
                      hlds__make_hlds__make_hlds_passes__du_type_layout__set_double_word_floats_3_p_0(ModuleInfo_5, Args0_12, &Args1_20);
                    else
                      Args1_20 = Args0_12;
                  }
                  break;
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        Args1_20 = Args0_12;
        break;
    }
    libs__globals__lookup_int_option_3_p_0(Globals_15, (MR_Integer) 257, &ArgPackBits_22);
    succeeded = (ArgPackBits_22 > (MR_Integer) 0);
    if (succeeded)
    {
      MR_Word Args2_23;
      MR_Integer UnpackedLength_41;
      MR_Integer PackedLength_42;
      MR_Word Var_45;
      MR_Word Var_24;
      MR_Integer Var_49;
      MR_Integer Var_50;

      hlds__make_hlds__make_hlds_passes__du_type_layout__pack_du_ctor_args_6_p_0(ModuleInfo_5, ArgPackBits_22, (MR_Integer) 0, Args1_20, &Args2_23, &Var_24);
      hlds__make_hlds__make_hlds_passes__du_type_layout__count_words_3_p_0(Args1_20, (MR_Integer) 0, &UnpackedLength_41);
      hlds__make_hlds__make_hlds_passes__du_type_layout__count_words_3_p_0(Args2_23, (MR_Integer) 0, &PackedLength_42);
      {
        Var_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_45, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_passes__du_type_layout_scalar_common_4[0]));
        MR_hl_field(MR_mktag(0), Var_45, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__layout_du_ctor_args_4_p_0_1));
        MR_hl_field(MR_mktag(0), Var_45, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_45, 3) = ((MR_Box) (PackedLength_42));
        MR_hl_field(MR_mktag(0), Var_45, 4) = ((MR_Box) (UnpackedLength_41));
      }
      mercury__require__expect_4_p_0(Var_45, (MR_String) "hlds.make_hlds.make_hlds_passes.du_type_layout", (MR_String) "function \140hlds.make_hlds.make_hlds_passes.du_type_layout.worth_arg_packing\'/2", (MR_String) "packed length exceeds unpacked length");
      succeeded = mercury__int__even_1_p_0(PackedLength_42);
      if (succeeded)
        Var_49 = PackedLength_42;
      else
      {
        Var_49 = (PackedLength_42 + (MR_Integer) 1);
      }
      succeeded = mercury__int__even_1_p_0(UnpackedLength_41);
      if (succeeded)
        Var_50 = UnpackedLength_41;
      else
      {
        Var_50 = (UnpackedLength_41 + (MR_Integer) 1);
      }
      succeeded = (Var_49 < Var_50);
      if (succeeded)
        Args_26 = Args2_23;
      else
        Args_26 = Args1_20;
    }
    else
      Args_26 = Args1_20;
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      *Ctor_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ExistTVars_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Constraints_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Name_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Args_26));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Arity_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Context_14));
    }
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__du_type_layout__count_words_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer STATE_VARIABLE_Count_0_2,
  MR_Integer * STATE_VARIABLE_Count_3)
{
  while (MR_TRUE)
  {
    // setup for tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_Count_3 = STATE_VARIABLE_Count_0_2;
    else
    {
      MR_Word Arg_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Args_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgWidth_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg_7, (MR_Integer) 2)));
      MR_Integer STATE_VARIABLE_Count_20_20;
      MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg_7, (MR_Integer) 0)));
      MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg_7, (MR_Integer) 1)));
      MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg_7, (MR_Integer) 3)));
      MR_Word next_value_of_HeadVar__1_1;
      MR_Integer next_value_of_STATE_VARIABLE_Count_0_2;

      switch (MR_tag((MR_Word) ArgWidth_10)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(ArgWidth_10)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                STATE_VARIABLE_Count_20_20 = (STATE_VARIABLE_Count_0_2 + (MR_Integer) 1);
              }
              break;
            case (MR_Integer) 1:
              {
                STATE_VARIABLE_Count_20_20 = (STATE_VARIABLE_Count_0_2 + (MR_Integer) 2);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            STATE_VARIABLE_Count_20_20 = (STATE_VARIABLE_Count_0_2 + (MR_Integer) 1);
          }
          break;
        case (MR_Integer) 2:
          STATE_VARIABLE_Count_20_20 = STATE_VARIABLE_Count_0_2;
          break;
      }
      // direct tailcall eliminated
      next_value_of_HeadVar__1_1 = Args_8;
      next_value_of_STATE_VARIABLE_Count_0_2 = STATE_VARIABLE_Count_20_20;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Count_0_2 = next_value_of_STATE_VARIABLE_Count_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__du_type_layout__pack_du_ctor_args_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv0_STATE_VARIABLE_Max_8;

    hlds__make_hlds__make_hlds_passes__du_type_layout__max_int_tag_3_p_0(((MR_Word) wrapper_arg_1), ((MR_Integer) wrapper_arg_2), &conv0_STATE_VARIABLE_Max_8);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Max_8));
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__du_type_layout__pack_du_ctor_args_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6)
{
  {
    MR_bool succeeded;

    if ((HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    }
    else
    {
      MR_Word Arg0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0)));
      MR_Word Args0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1)));
      MR_Word Arg_15;
      MR_Word Args_16;
      MR_Word Name_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg0_13, (MR_Integer) 0)));
      MR_Word Type_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg0_13, (MR_Integer) 1)));
      MR_Word ArgWidth0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg0_13, (MR_Integer) 2)));
      MR_Word Context_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg0_13, (MR_Integer) 3)));
      MR_Integer NumBits_22;
      MR_Word TypeBody_39;
      MR_Word TypeCategory_40;

      succeeded = check_hlds__type_util__type_to_type_defn_body_3_p_0(HeadVar__1_1, Type_19, &TypeBody_39);
      if (succeeded)
      {
        TypeCategory_40 = check_hlds__type_util__classify_type_defn_body_1_f_0(TypeBody_39);
        if (((MR_tag((MR_Word) TypeBody_39)) == (MR_mktag((MR_Integer) 1))))
        {
          MR_Word TypeCtorInfo_13_63;
          MR_Word TypeCtorInfo_14_64;
          MR_Word TypeCtorInfo_15_65;
          MR_Word Var_43;
          MR_Word Var_44;
          MR_Integer MaxFunctor_55;
          MR_Word Var_56;
          MR_Integer Var_57;
          MR_Integer Var_58;
          MR_Integer Var_59;
          MR_Word Var_45;
          MR_Word Var_46;
          MR_Word Var_47;
          MR_Word Var_48;
          MR_Word Var_49;
          MR_Word Var_50;
          MR_Word Var_51;
          MR_Word Var_52;
          MR_Box conv1_MaxFunctor_55;

          succeeded = ((MR_tag((MR_Word) TypeCategory_40)) == (MR_mktag((MR_Integer) 2)));
          if (succeeded)
          {
            Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), TypeCategory_40, (MR_Integer) 0)));
            succeeded = (Var_43 == (MR_Integer) 0);
            if (succeeded)
            {
              Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_39, (MR_Integer) 0)));
              Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_39, (MR_Integer) 1)));
              Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_39, (MR_Integer) 2)));
              Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_39, (MR_Integer) 3)));
              Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_39, (MR_Integer) 4)));
              Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_39, (MR_Integer) 5)));
              Var_50 = ((((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_39, (MR_Integer) 6)))) & (MR_Integer) 1);
              Var_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_39, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_39, (MR_Integer) 7)));
              Var_56 = (MR_Word) &hlds__make_hlds__make_hlds_passes__du_type_layout_scalar_common_3[0];
              Var_57 = (MR_Integer) 0;
              TypeCtorInfo_13_63 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0;
              TypeCtorInfo_14_64 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
              TypeCtorInfo_15_65 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
              mercury__map__foldl_values_4_p_0(TypeCtorInfo_13_63, TypeCtorInfo_14_64, TypeCtorInfo_15_65, Var_56, Var_44, ((MR_Box) (Var_57)), &conv1_MaxFunctor_55);
              MaxFunctor_55 = ((MR_Integer) conv1_MaxFunctor_55);
              Var_59 = (MR_Integer) 1;
              Var_58 = (MaxFunctor_55 + Var_59);
              mercury__int__log2_2_p_0(Var_58, &NumBits_22);
              succeeded = MR_TRUE;
            }
          }
        }
        else
        if (((((MR_tag((MR_Word) TypeBody_39)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), TypeBody_39, (MR_Integer) 0)))) == (MR_Integer) 1))))
        {
          MR_Word Var_41;
          MR_Word Var_42;

          succeeded = ((((MR_tag((MR_Word) TypeCategory_40)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), TypeCategory_40, (MR_Integer) 0)))) == (MR_Integer) 1)));
          if (succeeded)
          {
            Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), TypeCategory_40, (MR_Integer) 1)));
            succeeded = (Var_41 == (MR_Integer) 2);
            if (succeeded)
            {
              Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), TypeBody_39, (MR_Integer) 1)));
              succeeded = ((MR_tag((MR_Word) Var_42)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
                NumBits_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), Var_42, (MR_Integer) 0)));
            }
          }
        }
        else
          succeeded = MR_FALSE;
      }
      if (succeeded)
      {
        MR_Integer Mask_23;
        MR_Word ArgWidth1_24;
        MR_Integer NextShift_25;
        MR_Word NextArgWidth_26;
        MR_Integer Var_31;
        MR_Integer Var_34;
        MR_Integer Var_27;
        MR_Integer Var_28;
        MR_Integer Var_29;

        Var_31 = mercury__int__pow_2_f_0((MR_Integer) 2, NumBits_22);
        Mask_23 = (Var_31 - (MR_Integer) 1);
        Var_34 = (HeadVar__3_3 + NumBits_22);
        succeeded = (Var_34 > HeadVar__2_2);
        if (succeeded)
        {
          {
            ArgWidth1_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ArgWidth1_24, 0) = ((MR_Box) (Mask_23));
          }
          NextShift_25 = NumBits_22;
        }
        else
        {
          succeeded = (HeadVar__3_3 == (MR_Integer) 0);
          if (succeeded)
          {
            {
              ArgWidth1_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ArgWidth1_24, 0) = ((MR_Box) (Mask_23));
            }
            NextShift_25 = NumBits_22;
          }
          else
          {
            {
              ArgWidth1_24 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), ArgWidth1_24, 0) = ((MR_Box) (HeadVar__3_3));
              MR_hl_field(MR_mktag(2), ArgWidth1_24, 1) = ((MR_Box) (Mask_23));
            }
            NextShift_25 = (HeadVar__3_3 + NumBits_22);
          }
        }
        hlds__make_hlds__make_hlds_passes__du_type_layout__pack_du_ctor_args_6_p_0(HeadVar__1_1, HeadVar__2_2, NextShift_25, Args0_14, &Args_16, &NextArgWidth_26);
        succeeded = ((MR_tag((MR_Word) ArgWidth1_24)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          Var_27 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ArgWidth1_24, (MR_Integer) 0)));
          succeeded = ((MR_tag((MR_Word) NextArgWidth_26)) == (MR_mktag((MR_Integer) 2)));
          if (succeeded)
          {
            Var_28 = ((MR_Integer) (MR_hl_field(MR_mktag(2), NextArgWidth_26, (MR_Integer) 0)));
            Var_29 = ((MR_Integer) (MR_hl_field(MR_mktag(2), NextArgWidth_26, (MR_Integer) 1)));
          }
          succeeded = !(succeeded);
        }
        if (succeeded)
          *HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          *HeadVar__6_6 = ArgWidth1_24;
        {
          Arg_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Arg_15, 0) = ((MR_Box) (Name_18));
          MR_hl_field(MR_mktag(0), Arg_15, 1) = ((MR_Box) (Type_19));
          MR_hl_field(MR_mktag(0), Arg_15, 2) = ((MR_Box) (*HeadVar__6_6));
          MR_hl_field(MR_mktag(0), Arg_15, 3) = ((MR_Box) (Context_21));
        }
      }
      else
      {
        MR_Word Var_30;

        Arg_15 = Arg0_13;
        *HeadVar__6_6 = ArgWidth0_20;
        hlds__make_hlds__make_hlds_passes__du_type_layout__pack_du_ctor_args_6_p_0(HeadVar__1_1, HeadVar__2_2, (MR_Integer) 0, Args0_14, &Args_16, &Var_30);
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__5_5 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Arg_15));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Args_16));
      }
    }
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__du_type_layout__set_double_word_floats_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word Arg0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word Args0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word Arg_8;
      MR_Word Args_9;
      MR_Word Name_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg0_6, (MR_Integer) 0)));
      MR_Word Type_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg0_6, (MR_Integer) 1)));
      MR_Word Context_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg0_6, (MR_Integer) 3)));
      MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg0_6, (MR_Integer) 2)));

      succeeded = check_hlds__type_util__type_is_float_eqv_2_p_0(HeadVar__1_1, Type_11);
      if (succeeded)
      {
        {
          Arg_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Arg_8, 0) = ((MR_Box) (Name_10));
          MR_hl_field(MR_mktag(0), Arg_8, 1) = ((MR_Box) (Type_11));
          MR_hl_field(MR_mktag(0), Arg_8, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
          MR_hl_field(MR_mktag(0), Arg_8, 3) = ((MR_Box) (Context_13));
        }
      }
      else
        Arg_8 = Arg0_6;
      hlds__make_hlds__make_hlds_passes__du_type_layout__set_double_word_floats_3_p_0(HeadVar__1_1, Args0_7, &Args_9);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Arg_8));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Args_9));
      }
    }
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__du_type_layout__decide_du_type_layout_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Ctor_8;

    hlds__make_hlds__make_hlds_passes__du_type_layout__layout_du_ctor_args_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), &conv0_Ctor_8);
    *wrapper_arg_2 = ((MR_Box) (conv0_Ctor_8));
  }
}

void MR_CALL 
hlds__make_hlds__make_hlds_passes__du_type_layout__decide_du_type_layout_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word TypeCtor_7,
  MR_Word TypeDefn_8,
  MR_Word STATE_VARIABLE_TypeTable_0_27,
  MR_Word * STATE_VARIABLE_TypeTable_28)
{
  {
    MR_Word Body0_10;

    hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_8, &Body0_10);
    switch (MR_tag((MR_Word) Body0_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_TypeTable_28 = STATE_VARIABLE_TypeTable_0_27;
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeCtorInfo_33_33;
          MR_Word Ctors0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body0_10, (MR_Integer) 0)));
          MR_Word ConsTagValues_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body0_10, (MR_Integer) 1)));
          MR_Word MaybeCheaperTagTest_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body0_10, (MR_Integer) 2)));
          MR_Word DuKind_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body0_10, (MR_Integer) 3)));
          MR_Word MaybeUserEqComp_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body0_10, (MR_Integer) 4)));
          MR_Word DirectArgFunctors_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body0_10, (MR_Integer) 5)));
          MR_Word ReservedTag_17 = ((((MR_Word) (MR_hl_field(MR_mktag(1), Body0_10, (MR_Integer) 6)))) & (MR_Integer) 1);
          MR_Word ReservedAddr_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), Body0_10, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          MR_Word MaybeForeign_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body0_10, (MR_Integer) 7)));
          MR_Word Ctors_20;
          MR_Word Body_21;
          MR_Word PackedTypeDefn_22;
          MR_Word Var_29;

          {
            Var_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_passes__du_type_layout_scalar_common_1[0]));
            MR_hl_field(MR_mktag(0), Var_29, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__du_type_layout__decide_du_type_layout_5_p_0_1));
            MR_hl_field(MR_mktag(0), Var_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_29, 3) = ((MR_Box) (ModuleInfo_6));
            MR_hl_field(MR_mktag(0), Var_29, 4) = ((MR_Box) (DuKind_14));
          }
          TypeCtorInfo_33_33 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0;
          mercury__list__map_3_p_0(TypeCtorInfo_33_33, TypeCtorInfo_33_33, Var_29, Ctors0_11, &Ctors_20);
          {
            Body_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Body_21, 0) = ((MR_Box) (Ctors_20));
            MR_hl_field(MR_mktag(1), Body_21, 1) = ((MR_Box) (ConsTagValues_12));
            MR_hl_field(MR_mktag(1), Body_21, 2) = ((MR_Box) (MaybeCheaperTagTest_13));
            MR_hl_field(MR_mktag(1), Body_21, 3) = ((MR_Box) (DuKind_14));
            MR_hl_field(MR_mktag(1), Body_21, 4) = ((MR_Box) (MaybeUserEqComp_15));
            MR_hl_field(MR_mktag(1), Body_21, 5) = ((MR_Box) (DirectArgFunctors_16));
            MR_hl_field(MR_mktag(1), Body_21, 6) = ((MR_Box) ((ReservedTag_17 | ((ReservedAddr_18 << (MR_Integer) 1)))));
            MR_hl_field(MR_mktag(1), Body_21, 7) = ((MR_Box) (MaybeForeign_19));
          }
          hlds__hlds_data__set_type_defn_body_3_p_0(Body_21, TypeDefn_8, &PackedTypeDefn_22);
          hlds__hlds_data__replace_type_ctor_defn_4_p_0(TypeCtor_7, PackedTypeDefn_22, STATE_VARIABLE_TypeTable_0_27, STATE_VARIABLE_TypeTable_28);
        }
        break;
      case (MR_Integer) 2:
        *STATE_VARIABLE_TypeTable_28 = STATE_VARIABLE_TypeTable_0_27;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Body0_10, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *STATE_VARIABLE_TypeTable_28 = STATE_VARIABLE_TypeTable_0_27;
            break;
          case (MR_Integer) 1:
            *STATE_VARIABLE_TypeTable_28 = STATE_VARIABLE_TypeTable_0_27;
            break;
        }
        break;
    }
  }
}

void mercury__hlds__make_hlds__make_hlds_passes__du_type_layout__init(void)
{
}

void mercury__hlds__make_hlds__make_hlds_passes__du_type_layout__init_type_tables(void)
{
}

void mercury__hlds__make_hlds__make_hlds_passes__du_type_layout__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__make_hlds__make_hlds_passes__du_type_layout__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module hlds.make_hlds.make_hlds_passes.du_type_layout.
