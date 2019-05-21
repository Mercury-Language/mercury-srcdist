/*
** Automatically generated from `add_special_pred.m'
** by the Mercury compiler,
** version rotd-2017-09-13
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


// :- module hlds.make_hlds.add_special_pred.
// :- implementation.

/*
INIT mercury__hlds__make_hlds__add_special_pred__init
ENDINIT
*/

#include "hlds.make_hlds.add_special_pred.mih"


#include "analysis.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.unify_proc.mih"
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
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.make_hlds.add_class.mih"
#include "hlds.make_hlds.add_pred.mih"
#include "hlds.make_hlds.make_hlds_passes.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static void MR_CALL 
hlds__make_hlds__add_special_pred__add_special_pred_9_p_0(
  MR_Word SpecialPredId_10,
  MR_Word TVarSet_11,
  MR_Word Type_12,
  MR_Word TypeCtor_13,
  MR_Word TypeBody_14,
  MR_Word Context_15,
  MR_Word TypeStatus0_16,
  MR_Word STATE_VARIABLE_ModuleInfo_0_35,
  MR_Word * STATE_VARIABLE_ModuleInfo_36);

static void MR_CALL 
hlds__make_hlds__add_special_pred__add_special_pred_list_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word TVarSet_2,
  MR_Word Type_3,
  MR_Word TypeCtor_4,
  MR_Word TypeBody_5,
  MR_Word Context_6,
  MR_Word TypeStatus_7,
  MR_Word STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * STATE_VARIABLE_ModuleInfo_9);

static void MR_CALL 
hlds__make_hlds__add_special_pred__adjust_special_pred_status_3_p_0(
  MR_Word SpecialPredId_4,
  MR_Word TypeStatus_5,
  MR_Word * STATE_VARIABLE_PredStatus_9);


static /* final */ const MR_Box hlds__make_hlds__add_special_pred_scalar_common_1[6][2];

static /* final */ const MR_Box hlds__make_hlds__add_special_pred_scalar_common_2[1][1];




static /* final */ const MR_Box hlds__make_hlds__add_special_pred_scalar_common_1[6][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_special_pred_scalar_common_1[1])))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_special_pred_scalar_common_1[1])))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_special_pred_scalar_common_2[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



void MR_CALL 
hlds__make_hlds__add_special_pred__add_special_preds_8_p_0(
  MR_Word TVarSet_9,
  MR_Word Type_10,
  MR_Word TypeCtor_11,
  MR_Word TypeBody_12,
  MR_Word Context_13,
  MR_Word TypeStatus_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_16,
  MR_Word * STATE_VARIABLE_ModuleInfo_17)
{
  {
    MR_bool succeeded;

    succeeded = hlds__special_pred__special_pred_is_generated_lazily_4_p_0(STATE_VARIABLE_ModuleInfo_0_16, TypeCtor_11, TypeBody_12, TypeStatus_14);
    if (succeeded)
      *STATE_VARIABLE_ModuleInfo_17 = STATE_VARIABLE_ModuleInfo_0_16;
    else
      hlds__make_hlds__add_special_pred__eagerly_add_special_preds_8_p_0(TVarSet_9, Type_10, TypeCtor_11, TypeBody_12, Context_13, TypeStatus_14, STATE_VARIABLE_ModuleInfo_0_16, STATE_VARIABLE_ModuleInfo_17);
  }
}

void MR_CALL 
hlds__make_hlds__add_special_pred__eagerly_add_special_preds_8_p_0(
  MR_Word TVarSet_9,
  MR_Word Type_10,
  MR_Word TypeCtor_11,
  MR_Word TypeBody_12,
  MR_Word Context_13,
  MR_Word TypeStatus_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_24,
  MR_Word * STATE_VARIABLE_ModuleInfo_25)
{
  {
    MR_bool succeeded;

    succeeded = hlds__special_pred__can_generate_special_pred_clauses_for_type_3_p_0(STATE_VARIABLE_ModuleInfo_0_24, TypeCtor_11, TypeBody_12);
    if (succeeded)
    {
      MR_Word ThisModule_16;
      MR_Word STATE_VARIABLE_ModuleInfo_27_27;

      hlds__make_hlds__add_special_pred__add_special_pred_9_p_0((MR_Integer) 0, TVarSet_9, Type_10, TypeCtor_11, TypeBody_12, Context_13, TypeStatus_14, STATE_VARIABLE_ModuleInfo_0_24, &STATE_VARIABLE_ModuleInfo_27_27);
      ThisModule_16 = hlds__status__type_status_defined_in_this_module_1_f_0(TypeStatus_14);
      switch (ThisModule_16) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word SpecialPredMaps_22;
            MR_Word Var_23;

            hlds__hlds_module__module_info_get_special_pred_maps_2_p_0(STATE_VARIABLE_ModuleInfo_27_27, &SpecialPredMaps_22);
            succeeded = hlds__special_pred__search_special_pred_maps_4_p_0(SpecialPredMaps_22, (MR_Integer) 2, TypeCtor_11, &Var_23);
            if (succeeded)
              *STATE_VARIABLE_ModuleInfo_25 = STATE_VARIABLE_ModuleInfo_27_27;
            else
            {
              MR_Word Globals_81;
              MR_Word GenSpecialPreds_82;

              hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_27_27, &Globals_81);
              libs__globals__lookup_bool_option_3_p_0(Globals_81, (MR_Integer) 283, &GenSpecialPreds_82);
              switch (GenSpecialPreds_82) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *STATE_VARIABLE_ModuleInfo_25 = STATE_VARIABLE_ModuleInfo_27_27;
                  break;
                case (MR_Integer) 1:
                  hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_p_0((MR_Integer) 2, TVarSet_9, Type_10, TypeCtor_11, Context_13, TypeStatus_14, STATE_VARIABLE_ModuleInfo_27_27, STATE_VARIABLE_ModuleInfo_25);
                  break;
              }
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word SpecialPredIds_21;
            MR_Word TypeCtorInfo_71_71;
            MR_Word Ctors_17;
            MR_Word Globals_18;
            MR_Integer CompareSpec_19;
            MR_Integer CtorCount_20;
            MR_Word Var_33;
            MR_Word Var_49;
            MR_Word Var_50;
            MR_Word Var_47;
            MR_Word Var_48;
            MR_Word Var_51;
            MR_Word Var_52;
            MR_Word Var_53;
            MR_Word Var_54;

            succeeded = ((MR_tag((MR_Word) TypeBody_12)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              Ctors_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_12, (MR_Integer) 0)));
              Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_12, (MR_Integer) 1)));
              Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_12, (MR_Integer) 2)));
              Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_12, (MR_Integer) 3)));
              Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_12, (MR_Integer) 4)));
              Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_12, (MR_Integer) 5)));
              Var_52 = ((((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_12, (MR_Integer) 6)))) & (MR_Integer) 1);
              Var_53 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_12, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_12, (MR_Integer) 7)));
              succeeded = (Var_49 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
              if (succeeded)
              {
                succeeded = (Var_50 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (succeeded)
                {
                  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_27_27, &Globals_18);
                  Var_33 = (MR_Integer) 321;
                  libs__globals__lookup_int_option_3_p_0(Globals_18, Var_33, &CompareSpec_19);
                  TypeCtorInfo_71_71 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0;
                  mercury__list__length_2_p_0(TypeCtorInfo_71_71, Ctors_17, &CtorCount_20);
                  succeeded = (CtorCount_20 > CompareSpec_19);
                }
              }
            }
            if (succeeded)
              SpecialPredIds_21 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_special_pred_scalar_common_1[2]);
            else
            {
              SpecialPredIds_21 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_special_pred_scalar_common_1[1]);
            }
            hlds__make_hlds__add_special_pred__add_special_pred_list_9_p_0(SpecialPredIds_21, TVarSet_9, Type_10, TypeCtor_11, TypeBody_12, Context_13, TypeStatus_14, STATE_VARIABLE_ModuleInfo_27_27, STATE_VARIABLE_ModuleInfo_25);
          }
          break;
      }
    }
    else
    {
      MR_Word SpecialPredIds_46 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_special_pred_scalar_common_1[3]);
      MR_Word SpecialPredId_94 = ((MR_Word) (MR_hl_field(MR_mktag(1), SpecialPredIds_46, (MR_Integer) 0)));
      MR_Word SpecialPredIds_95 = ((MR_Word) (MR_hl_field(MR_mktag(1), SpecialPredIds_46, (MR_Integer) 1)));
      MR_Word STATE_VARIABLE_ModuleInfo_27_104;
      MR_Word Globals_115;
      MR_Word GenSpecialPreds_116;
      MR_Word SpecialPredId_128;
      MR_Word Globals_149;
      MR_Word GenSpecialPreds_150;
      MR_Word SpecialPredIds_129;

      hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_24, &Globals_115);
      libs__globals__lookup_bool_option_3_p_0(Globals_115, (MR_Integer) 283, &GenSpecialPreds_116);
      switch (GenSpecialPreds_116) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_p_0(SpecialPredId_94, TVarSet_9, Type_10, TypeCtor_11, Context_13, TypeStatus_14, STATE_VARIABLE_ModuleInfo_0_24, &STATE_VARIABLE_ModuleInfo_27_104);
          break;
        case (MR_Integer) 1:
          hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_p_0(SpecialPredId_94, TVarSet_9, Type_10, TypeCtor_11, Context_13, TypeStatus_14, STATE_VARIABLE_ModuleInfo_0_24, &STATE_VARIABLE_ModuleInfo_27_104);
          break;
      }
      SpecialPredId_128 = ((MR_Word) (MR_hl_field(MR_mktag(1), SpecialPredIds_95, (MR_Integer) 0)));
      SpecialPredIds_129 = ((MR_Word) (MR_hl_field(MR_mktag(1), SpecialPredIds_95, (MR_Integer) 1)));
      hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_27_104, &Globals_149);
      libs__globals__lookup_bool_option_3_p_0(Globals_149, (MR_Integer) 283, &GenSpecialPreds_150);
      switch (GenSpecialPreds_150) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *STATE_VARIABLE_ModuleInfo_25 = STATE_VARIABLE_ModuleInfo_27_104;
          break;
        case (MR_Integer) 1:
          hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_p_0(SpecialPredId_128, TVarSet_9, Type_10, TypeCtor_11, Context_13, TypeStatus_14, STATE_VARIABLE_ModuleInfo_27_104, STATE_VARIABLE_ModuleInfo_25);
          break;
      }
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_special_pred__add_special_pred_9_p_0(
  MR_Word SpecialPredId_10,
  MR_Word TVarSet_11,
  MR_Word Type_12,
  MR_Word TypeCtor_13,
  MR_Word TypeBody_14,
  MR_Word Context_15,
  MR_Word TypeStatus0_16,
  MR_Word STATE_VARIABLE_ModuleInfo_0_35,
  MR_Word * STATE_VARIABLE_ModuleInfo_36)
{
  {
    MR_Word Globals_18;
    MR_Word GenSpecialPreds_19;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_35, &Globals_18);
    libs__globals__lookup_bool_option_3_p_0(Globals_18, (MR_Integer) 283, &GenSpecialPreds_19);
    switch (GenSpecialPreds_19) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (SpecialPredId_10) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 2:
            switch (MR_tag((MR_Word) TypeBody_14)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *STATE_VARIABLE_ModuleInfo_36 = STATE_VARIABLE_ModuleInfo_0_35;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word MaybeUserEq_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_14, (MR_Integer) 4)));
                  MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_14, (MR_Integer) 0)));
                  MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_14, (MR_Integer) 1)));
                  MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_14, (MR_Integer) 2)));
                  MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_14, (MR_Integer) 3)));
                  MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_14, (MR_Integer) 5)));
                  MR_Word Var_27 = ((((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_14, (MR_Integer) 6)))) & (MR_Integer) 1);
                  MR_Word Var_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_14, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                  MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_14, (MR_Integer) 7)));

                  if ((MaybeUserEq_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    *STATE_VARIABLE_ModuleInfo_36 = STATE_VARIABLE_ModuleInfo_0_35;
                  else
                    hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_p_0(SpecialPredId_10, TVarSet_11, Type_12, TypeCtor_13, TypeBody_14, Context_15, TypeStatus0_16, STATE_VARIABLE_ModuleInfo_0_35, STATE_VARIABLE_ModuleInfo_36);
                }
                break;
              case (MR_Integer) 2:
                *STATE_VARIABLE_ModuleInfo_36 = STATE_VARIABLE_ModuleInfo_0_35;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), TypeBody_14, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *STATE_VARIABLE_ModuleInfo_36 = STATE_VARIABLE_ModuleInfo_0_35;
                    break;
                  case (MR_Integer) 1:
                    *STATE_VARIABLE_ModuleInfo_36 = STATE_VARIABLE_ModuleInfo_0_35;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            *STATE_VARIABLE_ModuleInfo_36 = STATE_VARIABLE_ModuleInfo_0_35;
            break;
          case (MR_Integer) 0:
            {
              MR_Word TypeStatus_20;

              switch (MR_tag((MR_Word) TypeBody_14)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    TypeStatus_20 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word MaybeUserEq_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_14, (MR_Integer) 4)));
                    MR_Word Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_14, (MR_Integer) 0)));
                    MR_Word Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_14, (MR_Integer) 1)));
                    MR_Word Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_14, (MR_Integer) 2)));
                    MR_Word Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_14, (MR_Integer) 3)));
                    MR_Word Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_14, (MR_Integer) 5)));
                    MR_Word Var_50 = ((((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_14, (MR_Integer) 6)))) & (MR_Integer) 1);
                    MR_Word Var_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_14, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                    MR_Word Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_14, (MR_Integer) 7)));

                    if ((MaybeUserEq_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                      TypeStatus_20 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
                    }
                    else
                      TypeStatus_20 = TypeStatus0_16;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    TypeStatus_20 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    TypeStatus_20 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
                  }
                  break;
              }
              hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_p_0(SpecialPredId_10, TVarSet_11, Type_12, TypeCtor_13, TypeBody_14, Context_15, TypeStatus_20, STATE_VARIABLE_ModuleInfo_0_35, STATE_VARIABLE_ModuleInfo_36);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_p_0(SpecialPredId_10, TVarSet_11, Type_12, TypeCtor_13, TypeBody_14, Context_15, TypeStatus0_16, STATE_VARIABLE_ModuleInfo_0_35, STATE_VARIABLE_ModuleInfo_36);
        break;
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_special_pred__add_special_pred_list_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word TVarSet_2,
  MR_Word Type_3,
  MR_Word TypeCtor_4,
  MR_Word TypeBody_5,
  MR_Word Context_6,
  MR_Word TypeStatus_7,
  MR_Word STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * STATE_VARIABLE_ModuleInfo_9)
{
  while (MR_TRUE)
  {
    // setup for tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_ModuleInfo_9 = STATE_VARIABLE_ModuleInfo_0_8;
    else
    {
      MR_Word SpecialPredId_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word SpecialPredIds_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word STATE_VARIABLE_ModuleInfo_30_30;
      MR_Word Globals_42;
      MR_Word GenSpecialPreds_43;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_8;

      hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_8, &Globals_42);
      libs__globals__lookup_bool_option_3_p_0(Globals_42, (MR_Integer) 283, &GenSpecialPreds_43);
      switch (GenSpecialPreds_43) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (SpecialPredId_19) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 2:
              switch (MR_tag((MR_Word) TypeBody_5)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  STATE_VARIABLE_ModuleInfo_30_30 = STATE_VARIABLE_ModuleInfo_0_8;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word MaybeUserEq_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_5, (MR_Integer) 4)));
                    MR_Word Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_5, (MR_Integer) 0)));
                    MR_Word Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_5, (MR_Integer) 1)));
                    MR_Word Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_5, (MR_Integer) 2)));
                    MR_Word Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_5, (MR_Integer) 3)));
                    MR_Word Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_5, (MR_Integer) 5)));
                    MR_Word Var_51 = ((((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_5, (MR_Integer) 6)))) & (MR_Integer) 1);
                    MR_Word Var_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_5, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                    MR_Word Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_5, (MR_Integer) 7)));

                    if ((MaybeUserEq_49 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      STATE_VARIABLE_ModuleInfo_30_30 = STATE_VARIABLE_ModuleInfo_0_8;
                    else
                      hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_p_0(SpecialPredId_19, TVarSet_2, Type_3, TypeCtor_4, TypeBody_5, Context_6, TypeStatus_7, STATE_VARIABLE_ModuleInfo_0_8, &STATE_VARIABLE_ModuleInfo_30_30);
                  }
                  break;
                case (MR_Integer) 2:
                  STATE_VARIABLE_ModuleInfo_30_30 = STATE_VARIABLE_ModuleInfo_0_8;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), TypeBody_5, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      STATE_VARIABLE_ModuleInfo_30_30 = STATE_VARIABLE_ModuleInfo_0_8;
                      break;
                    case (MR_Integer) 1:
                      STATE_VARIABLE_ModuleInfo_30_30 = STATE_VARIABLE_ModuleInfo_0_8;
                      break;
                  }
                  break;
              }
              break;
            case (MR_Integer) 1:
              STATE_VARIABLE_ModuleInfo_30_30 = STATE_VARIABLE_ModuleInfo_0_8;
              break;
            case (MR_Integer) 0:
              {
                MR_Word TypeStatus_44;

                switch (MR_tag((MR_Word) TypeBody_5)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      TypeStatus_44 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word MaybeUserEq_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_5, (MR_Integer) 4)));
                      MR_Word Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_5, (MR_Integer) 0)));
                      MR_Word Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_5, (MR_Integer) 1)));
                      MR_Word Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_5, (MR_Integer) 2)));
                      MR_Word Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_5, (MR_Integer) 3)));
                      MR_Word Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_5, (MR_Integer) 5)));
                      MR_Word Var_72 = ((((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_5, (MR_Integer) 6)))) & (MR_Integer) 1);
                      MR_Word Var_73 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_5, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                      MR_Word Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_5, (MR_Integer) 7)));

                      if ((MaybeUserEq_70 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      {
                        TypeStatus_44 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
                      }
                      else
                        TypeStatus_44 = TypeStatus_7;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      TypeStatus_44 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      TypeStatus_44 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
                    }
                    break;
                }
                hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_p_0(SpecialPredId_19, TVarSet_2, Type_3, TypeCtor_4, TypeBody_5, Context_6, TypeStatus_44, STATE_VARIABLE_ModuleInfo_0_8, &STATE_VARIABLE_ModuleInfo_30_30);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_p_0(SpecialPredId_19, TVarSet_2, Type_3, TypeCtor_4, TypeBody_5, Context_6, TypeStatus_7, STATE_VARIABLE_ModuleInfo_0_8, &STATE_VARIABLE_ModuleInfo_30_30);
          break;
      }
      // direct tailcall eliminated
      next_value_of_HeadVar__1_1 = SpecialPredIds_20;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_8 = STATE_VARIABLE_ModuleInfo_30_30;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ModuleInfo_0_8 = next_value_of_STATE_VARIABLE_ModuleInfo_0_8;
      continue;
    }
    break;
  }
}

void MR_CALL 
hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_p_0(
  MR_Word SpecialPredId_10,
  MR_Word TVarSet_11,
  MR_Word Type0_12,
  MR_Word TypeCtor_13,
  MR_Word TypeBody_14,
  MR_Word Context_15,
  MR_Word TypeStatus0_16,
  MR_Word STATE_VARIABLE_ModuleInfo_0_39,
  MR_Word * STATE_VARIABLE_ModuleInfo_40)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_58_58;
    MR_Word TypeCtorInfo_59_59;
    MR_Word Type_18;
    MR_Word PredStatus_19;
    MR_Word SpecialPredMaps0_20;
    MR_Word SpecialPredMaps1_24;
    MR_Word PredId_25;
    MR_Word Preds0_26;
    MR_Word PredInfo0_27;
    MR_Word PredInfo1_29;
    MR_Word ClausesInfo_32;
    MR_Word PredInfo2_33;
    MR_Word Markers2_34;
    MR_Word Markers_35;
    MR_Word PredInfo3_36;
    MR_Word PredInfo_37;
    MR_Word Preds_38;
    MR_Word STATE_VARIABLE_ModuleInfo_41_41;
    MR_Word Var_48;
    MR_Word STATE_VARIABLE_PredStatus_12_80;
    MR_String Name_64;
    MR_Word TypeInfo_13_71;
    MR_Word TypeCtor_63;
    MR_Word Var_70;
    MR_Word Var_93;
    MR_Word Var_21;
    MR_Box conv0_PredInfo0_27;
    MR_Word Var_60;

    succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(Type0_12, &TypeCtor_63, &Var_70);
    if (succeeded)
    {
      TypeInfo_13_71 = (MR_Word) &hlds__make_hlds__add_special_pred_scalar_common_1[4];
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_71, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (Var_70)));
      if (succeeded)
        succeeded = hlds__special_pred__is_builtin_type_special_preds_defined_in_mercury_2_p_0(TypeCtor_63, &Name_64);
    }
    if (succeeded)
    {
      MR_Word Var_66;
      MR_Word Var_68;

      {
        Var_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_68, 0) = ((MR_Box) (Name_64));
      }
      {
        Var_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_66, 0) = ((MR_Box) (Var_68));
        MR_hl_field(MR_mktag(0), Var_66, 1) = ((MR_Box) ((MR_Integer) 0));
      }
      parse_tree__prog_type__construct_type_3_p_0(Var_66, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &Type_18);
    }
    else
      Type_18 = Type0_12;
    Var_93 = (MR_Word) TypeStatus0_16;
    if ((Var_93 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
      succeeded = MR_TRUE;
    else
    if ((Var_93 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      succeeded = MR_TRUE;
    else
      succeeded = MR_FALSE;
    if (succeeded)
    {
      STATE_VARIABLE_PredStatus_12_80 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__make_hlds__add_special_pred_scalar_common_2[0])));
    }
    else
    {
      MR_Word Var_83 = (MR_Word) TypeStatus0_16;

      succeeded = (Var_83 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
      if (succeeded)
      {
        STATE_VARIABLE_PredStatus_12_80 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
      }
      else
      {
        MR_Word OldStatus_76 = (MR_Word) TypeStatus0_16;

        STATE_VARIABLE_PredStatus_12_80 = (MR_Word) OldStatus_76;
      }
    }
    succeeded = (SpecialPredId_10 == (MR_Integer) 0);
    if (succeeded)
    {
      MR_Word Var_87 = (MR_Word) STATE_VARIABLE_PredStatus_12_80;
      MR_Word Var_77;

      succeeded = ((MR_tag((MR_Word) Var_87)) == (MR_mktag((MR_Integer) 2)));
      if (succeeded)
      {
        Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(2), Var_87, (MR_Integer) 0)));
        PredStatus_19 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
      }
      else
      {
        MR_Word Var_90 = (MR_Word) STATE_VARIABLE_PredStatus_12_80;

        succeeded = (Var_90 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
        if (succeeded)
        {
          PredStatus_19 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
        }
        else
          PredStatus_19 = STATE_VARIABLE_PredStatus_12_80;
      }
    }
    else
      PredStatus_19 = STATE_VARIABLE_PredStatus_12_80;
    hlds__hlds_module__module_info_get_special_pred_maps_2_p_0(STATE_VARIABLE_ModuleInfo_0_39, &SpecialPredMaps0_20);
    succeeded = hlds__special_pred__search_special_pred_maps_4_p_0(SpecialPredMaps0_20, SpecialPredId_10, TypeCtor_13, &Var_21);
    if (succeeded)
      STATE_VARIABLE_ModuleInfo_41_41 = STATE_VARIABLE_ModuleInfo_0_39;
    else
    {
      MR_Word PredOldStatus_22 = (MR_Word) PredStatus_19;
      MR_Word TypeStatus_23 = (MR_Word) PredOldStatus_22;

      hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_p_0(SpecialPredId_10, TVarSet_11, Type_18, TypeCtor_13, Context_15, TypeStatus_23, STATE_VARIABLE_ModuleInfo_0_39, &STATE_VARIABLE_ModuleInfo_41_41);
    }
    hlds__hlds_module__module_info_get_special_pred_maps_2_p_0(STATE_VARIABLE_ModuleInfo_41_41, &SpecialPredMaps1_24);
    hlds__special_pred__lookup_special_pred_maps_4_p_0(SpecialPredMaps1_24, SpecialPredId_10, TypeCtor_13, &PredId_25);
    hlds__hlds_module__module_info_get_preds_2_p_0(STATE_VARIABLE_ModuleInfo_41_41, &Preds0_26);
    TypeCtorInfo_58_58 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
    TypeCtorInfo_59_59 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
    mercury__map__lookup_3_p_0(TypeCtorInfo_58_58, TypeCtorInfo_59_59, Preds0_26, ((MR_Box) (PredId_25)), &conv0_PredInfo0_27);
    PredInfo0_27 = ((MR_Word) conv0_PredInfo0_27);
    Var_60 = (MR_Word) PredStatus_19;
    if ((Var_60 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
      succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) Var_60)) == (MR_mktag((MR_Integer) 2))))
      succeeded = MR_TRUE;
    else
      succeeded = MR_FALSE;
    if (succeeded)
      hlds__hlds_pred__pred_info_set_status_3_p_0(PredStatus_19, PredInfo0_27, &PredInfo1_29);
    else
    {
      MR_Word OldPredStatus_31;
      MR_Word Var_44;
      MR_Word Var_45;
      MR_Word Var_46;
      MR_Word Var_50;
      MR_Word Var_51;
      MR_Word Var_52;
      MR_Word Var_53;
      MR_Word Var_54;
      MR_Word Var_55;
      MR_Word Var_56;
      MR_Word Var_57;
      MR_Word Var_30;

      succeeded = ((MR_tag((MR_Word) TypeBody_14)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_14, (MR_Integer) 0)));
        Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_14, (MR_Integer) 1)));
        Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_14, (MR_Integer) 2)));
        Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_14, (MR_Integer) 3)));
        Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_14, (MR_Integer) 4)));
        Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_14, (MR_Integer) 5)));
        Var_55 = ((((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_14, (MR_Integer) 6)))) & (MR_Integer) 1);
        Var_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_14, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_14, (MR_Integer) 7)));
        succeeded = ((MR_tag((MR_Word) Var_44)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_44, (MR_Integer) 0)));
          hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo0_27, &OldPredStatus_31);
          Var_45 = (MR_Word) OldPredStatus_31;
          succeeded = (Var_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
          if (succeeded)
          {
            Var_46 = hlds__status__pred_status_is_imported_1_f_0(PredStatus_19);
            succeeded = (Var_46 == (MR_Integer) 0);
          }
        }
      }
      if (succeeded)
        hlds__hlds_pred__pred_info_set_status_3_p_0(PredStatus_19, PredInfo0_27, &PredInfo1_29);
      else
        PredInfo1_29 = PredInfo0_27;
    }
    check_hlds__unify_proc__generate_clause_info_6_p_0(SpecialPredId_10, Type_18, TypeBody_14, Context_15, STATE_VARIABLE_ModuleInfo_41_41, &ClausesInfo_32);
    hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(ClausesInfo_32, PredInfo1_29, &PredInfo2_33);
    hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo2_33, &Markers2_34);
    hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 22, Markers2_34, &Markers_35);
    hlds__hlds_pred__pred_info_set_markers_3_p_0(Markers_35, PredInfo2_33, &PredInfo3_36);
    {
      Var_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_48, 0) = ((MR_Box) (SpecialPredId_10));
      MR_hl_field(MR_mktag(0), Var_48, 1) = ((MR_Box) (TypeCtor_13));
    }
    hlds__hlds_pred__pred_info_set_origin_3_p_0(Var_48, PredInfo3_36, &PredInfo_37);
    mercury__map__det_update_4_p_0(TypeCtorInfo_58_58, TypeCtorInfo_59_59, ((MR_Box) (PredId_25)), ((MR_Box) (PredInfo_37)), Preds0_26, &Preds_38);
    hlds__hlds_module__module_info_set_preds_3_p_0(Preds_38, STATE_VARIABLE_ModuleInfo_41_41, STATE_VARIABLE_ModuleInfo_40);
  }
}

void MR_CALL 
hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_p_0(
  MR_Word SpecialPredId_9,
  MR_Word TVarSet_10,
  MR_Word Type_11,
  MR_Word TypeCtor_12,
  MR_Word Context_13,
  MR_Word TypeStatus_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_51,
  MR_Word * STATE_VARIABLE_ModuleInfo_52)
{
  {
    MR_Word TypeCtorInfo_80_80;
    MR_Word ModuleName_16;
    MR_Word ArgTypes_17;
    MR_Word ArgModes_18;
    MR_Word Det_19;
    MR_String PredBaseName_20;
    MR_Word PredName_21;
    MR_Integer Arity_22;
    MR_Word ClausesInfo0_23;
    MR_Word Origin_24;
    MR_Word PredStatus_25;
    MR_Word Proofs_27;
    MR_Word ConstraintMap_28;
    MR_Word Markers_29;
    MR_Word VarNameRemap_32;
    MR_Word PredInfo0_33;
    MR_Word InstVarSet_35;
    MR_Word PredInfo_38;
    MR_Word PredicateTable0_40;
    MR_Word PredId_41;
    MR_Word PredicateTable_42;
    MR_Word SpecialPredMaps0_43;
    MR_Word SpecialPredMaps_46;
    MR_Word Var_54;
    MR_Word Var_59;
    MR_Word Var_61;
    MR_Word STATE_VARIABLE_ModuleInfo_63_63;
    MR_Word Var_92;
    MR_Word Var_93;
    MR_Word Var_94;
    MR_Integer _ProcId_39;

    hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_ModuleInfo_0_51, &ModuleName_16);
    hlds__special_pred__special_pred_interface_5_p_0(SpecialPredId_9, Type_11, &ArgTypes_17, &ArgModes_18, &Det_19);
    PredBaseName_20 = hlds__special_pred__special_pred_name_2_f_0(SpecialPredId_9, TypeCtor_12);
    {
      PredName_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), PredName_21, 0) = ((MR_Box) (PredBaseName_20));
    }
    Arity_22 = mdbcomp__prim_data__get_special_pred_id_arity_1_f_0(SpecialPredId_9);
    Var_54 = hlds__hlds_clauses__init_clause_item_numbers_comp_gen_0_f_0();
    hlds__hlds_clauses__clauses_info_init_4_p_0((MR_Integer) 0, Arity_22, Var_54, &ClausesInfo0_23);
    {
      Origin_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Origin_24, 0) = ((MR_Box) (SpecialPredId_9));
      MR_hl_field(MR_mktag(0), Origin_24, 1) = ((MR_Box) (TypeCtor_12));
    }
    hlds__make_hlds__add_special_pred__adjust_special_pred_status_3_p_0(SpecialPredId_9, TypeStatus_14, &PredStatus_25);
    TypeCtorInfo_80_80 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
    mercury__map__init_1_p_0(TypeCtorInfo_80_80, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0, &Proofs_27);
    mercury__map__init_1_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_id_0, TypeCtorInfo_80_80, &ConstraintMap_28);
    hlds__hlds_pred__init_markers_1_p_0(&Markers_29);
    mercury__map__init_1_p_0((MR_Word) &hlds__make_hlds__add_special_pred_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, &VarNameRemap_32);
    hlds__hlds_pred__pred_info_init_19_p_0(ModuleName_16, PredName_21, Arity_22, (MR_Integer) 0, Context_13, Origin_24, PredStatus_25, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), Markers_29, ArgTypes_17, TVarSet_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) &hlds__make_hlds__add_special_pred_scalar_common_1[5], Proofs_27, ConstraintMap_28, ClausesInfo0_23, VarNameRemap_32, &PredInfo0_33);
    mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, &InstVarSet_35);
    {
      Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (ArgModes_18));
    }
    {
      Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (Det_19));
    }
    hlds__make_hlds__add_pred__do_add_new_proc_14_p_0(Context_13, (MR_Integer) -1, Arity_22, InstVarSet_35, ArgModes_18, Var_59, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 1, Var_61, (MR_Integer) 1, (MR_Integer) 1, PredInfo0_33, &PredInfo_38, &_ProcId_39);
    hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_51, &PredicateTable0_40);
    hlds__pred_table__predicate_table_insert_4_p_0(PredInfo_38, &PredId_41, PredicateTable0_40, &PredicateTable_42);
    hlds__hlds_module__module_info_set_predicate_table_3_p_0(PredicateTable_42, STATE_VARIABLE_ModuleInfo_0_51, &STATE_VARIABLE_ModuleInfo_63_63);
    hlds__hlds_module__module_info_get_special_pred_maps_2_p_0(STATE_VARIABLE_ModuleInfo_63_63, &SpecialPredMaps0_43);
    Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), SpecialPredMaps0_43, (MR_Integer) 0)));
    Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), SpecialPredMaps0_43, (MR_Integer) 1)));
    Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), SpecialPredMaps0_43, (MR_Integer) 2)));
    switch (SpecialPredId_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        {
          MR_Word CompareMap_50;
          MR_Word Var_77;
          MR_Word Var_78;
          MR_Word Var_79;

          mercury__map__det_insert_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, ((MR_Box) (TypeCtor_12)), ((MR_Box) (PredId_41)), Var_92, &CompareMap_50);
          Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), SpecialPredMaps0_43, (MR_Integer) 0)));
          Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), SpecialPredMaps0_43, (MR_Integer) 1)));
          Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), SpecialPredMaps0_43, (MR_Integer) 2)));
          {
            SpecialPredMaps_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), SpecialPredMaps_46, 0) = ((MR_Box) (Var_77));
            MR_hl_field(MR_mktag(0), SpecialPredMaps_46, 1) = ((MR_Box) (Var_78));
            MR_hl_field(MR_mktag(0), SpecialPredMaps_46, 2) = ((MR_Box) (CompareMap_50));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word IndexMap_48;
          MR_Word Var_72;
          MR_Word Var_74;
          MR_Word Var_73;

          mercury__map__det_insert_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, ((MR_Box) (TypeCtor_12)), ((MR_Box) (PredId_41)), Var_93, &IndexMap_48);
          Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), SpecialPredMaps0_43, (MR_Integer) 0)));
          Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), SpecialPredMaps0_43, (MR_Integer) 1)));
          Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), SpecialPredMaps0_43, (MR_Integer) 2)));
          {
            SpecialPredMaps_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), SpecialPredMaps_46, 0) = ((MR_Box) (Var_72));
            MR_hl_field(MR_mktag(0), SpecialPredMaps_46, 1) = ((MR_Box) (IndexMap_48));
            MR_hl_field(MR_mktag(0), SpecialPredMaps_46, 2) = ((MR_Box) (Var_74));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word UnifyMap_45;
          MR_Word Var_68;
          MR_Word Var_69;
          MR_Word Var_67;

          mercury__map__det_insert_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, ((MR_Box) (TypeCtor_12)), ((MR_Box) (PredId_41)), Var_94, &UnifyMap_45);
          Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), SpecialPredMaps0_43, (MR_Integer) 0)));
          Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), SpecialPredMaps0_43, (MR_Integer) 1)));
          Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), SpecialPredMaps0_43, (MR_Integer) 2)));
          {
            SpecialPredMaps_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), SpecialPredMaps_46, 0) = ((MR_Box) (UnifyMap_45));
            MR_hl_field(MR_mktag(0), SpecialPredMaps_46, 1) = ((MR_Box) (Var_68));
            MR_hl_field(MR_mktag(0), SpecialPredMaps_46, 2) = ((MR_Box) (Var_69));
          }
        }
        break;
    }
    hlds__hlds_module__module_info_set_special_pred_maps_3_p_0(SpecialPredMaps_46, STATE_VARIABLE_ModuleInfo_63_63, STATE_VARIABLE_ModuleInfo_52);
  }
}

static void MR_CALL 
hlds__make_hlds__add_special_pred__adjust_special_pred_status_3_p_0(
  MR_Word SpecialPredId_4,
  MR_Word TypeStatus_5,
  MR_Word * STATE_VARIABLE_PredStatus_9)
{
  {
    MR_bool succeeded;
    MR_Word STATE_VARIABLE_PredStatus_12_12;
    MR_Word Var_25 = (MR_Word) TypeStatus_5;

    if ((Var_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
      succeeded = MR_TRUE;
    else
    if ((Var_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      succeeded = MR_TRUE;
    else
      succeeded = MR_FALSE;
    if (succeeded)
    {
      STATE_VARIABLE_PredStatus_12_12 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__make_hlds__add_special_pred_scalar_common_2[0])));
    }
    else
    {
      MR_Word Var_15 = (MR_Word) TypeStatus_5;

      succeeded = (Var_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
      if (succeeded)
      {
        STATE_VARIABLE_PredStatus_12_12 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
      }
      else
      {
        MR_Word OldStatus_7 = (MR_Word) TypeStatus_5;

        STATE_VARIABLE_PredStatus_12_12 = (MR_Word) OldStatus_7;
      }
    }
    succeeded = (SpecialPredId_4 == (MR_Integer) 0);
    if (succeeded)
    {
      MR_Word Var_19 = (MR_Word) STATE_VARIABLE_PredStatus_12_12;
      MR_Word Var_8;

      succeeded = ((MR_tag((MR_Word) Var_19)) == (MR_mktag((MR_Integer) 2)));
      if (succeeded)
      {
        Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), Var_19, (MR_Integer) 0)));
        *STATE_VARIABLE_PredStatus_9 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
      }
      else
      {
        MR_Word Var_22 = (MR_Word) STATE_VARIABLE_PredStatus_12_12;

        succeeded = (Var_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
        if (succeeded)
        {
          *STATE_VARIABLE_PredStatus_9 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
        }
        else
          *STATE_VARIABLE_PredStatus_9 = STATE_VARIABLE_PredStatus_12_12;
      }
    }
    else
      *STATE_VARIABLE_PredStatus_9 = STATE_VARIABLE_PredStatus_12_12;
  }
}

void mercury__hlds__make_hlds__add_special_pred__init(void)
{
}

void mercury__hlds__make_hlds__add_special_pred__init_type_tables(void)
{
}

void mercury__hlds__make_hlds__add_special_pred__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__make_hlds__add_special_pred__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module hlds.make_hlds.add_special_pred.
