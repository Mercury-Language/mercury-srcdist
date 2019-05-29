/*
** Automatically generated from `inst_test.m'
** by the Mercury compiler,
** version rotd-2019-05-29
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


// :- module check_hlds.inst_test.
// :- implementation.

/*
INIT mercury__check_hlds__inst_test__init
ENDINIT
*/

#include "check_hlds.inst_test.mih"


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
#include "check_hlds.mode_util.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
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
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_TypeInfo_Struct1 check_hlds__inst_test__set_ordlist__ti_set_ordlist_1parse_tree__prog_data__type_ctor_info_inst_name_0;

static void MR_CALL 
check_hlds__inst_test____Compare____inst_names_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__inst_test____Unify____inst_names_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__inst_test__record_inst_is_ground_2_p_0(
  MR_Word Inst_1,
  MR_Word IsGround_2);

static void MR_CALL 
check_hlds__inst_test__lookup_inst_is_ground_3_p_0(
  MR_Word Inst_1,
  MR_Word * Found_2,
  MR_Word * IsGround_3);

static void MR_CALL 
check_hlds__inst_test__inst_contains_inst_name_2_6_p_0(
  MR_Word Inst_7,
  MR_Word ModuleInfo_8,
  MR_Word InstName_9,
  MR_Word * Contains_10,
  MR_Word STATE_VARIABLE_Expansions_0_34,
  MR_Word * STATE_VARIABLE_Expansions_35);

static void MR_CALL 
check_hlds__inst_test__inst_list_contains_inst_name_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Expansions_0_5,
  MR_Word * STATE_VARIABLE_Expansions_6);

static void MR_CALL 
check_hlds__inst_test__bound_inst_list_contains_inst_name_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Expansions_0_5,
  MR_Word * STATE_VARIABLE_Expansions_6);

static MR_bool MR_CALL 
check_hlds__inst_test__bound_inst_list_is_ground_or_any_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ModuleInfo_2);

static MR_bool MR_CALL 
check_hlds__inst_test__bound_inst_list_is_ground_mt_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word MaybeType_2,
  MR_Word ModuleInfo_3);

static MR_bool MR_CALL 
check_hlds__inst_test__inst_list_is_ground_mt_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word ModuleInfo_3);

static MR_bool MR_CALL 
check_hlds__inst_test__inst_is_not_fully_unique_2_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Inst_6,
  MR_Word STATE_VARIABLE_Expansions_0_29,
  MR_Word * STATE_VARIABLE_Expansions_30);

static MR_bool MR_CALL 
check_hlds__inst_test__inst_list_is_not_fully_unique_2_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ModuleInfo_2,
  MR_Word STATE_VARIABLE_Expansions_0_3,
  MR_Word * STATE_VARIABLE_Expansions_4);

static MR_bool MR_CALL 
check_hlds__inst_test__bound_inst_list_is_not_fully_unique_2_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ModuleInfo_2,
  MR_Word STATE_VARIABLE_Expansions_0_3,
  MR_Word * STATE_VARIABLE_Expansions_4);

static MR_bool MR_CALL 
check_hlds__inst_test__inst_is_not_partly_unique_2_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Inst_6,
  MR_Word STATE_VARIABLE_Expansions_0_26,
  MR_Word * STATE_VARIABLE_Expansions_27);

static MR_bool MR_CALL 
check_hlds__inst_test__inst_list_is_not_partly_unique_2_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ModuleInfo_2,
  MR_Word STATE_VARIABLE_Expansions_0_3,
  MR_Word * STATE_VARIABLE_Expansions_4);

static MR_bool MR_CALL 
check_hlds__inst_test__bound_inst_list_is_not_partly_unique_2_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ModuleInfo_2,
  MR_Word STATE_VARIABLE_Expansions_0_3,
  MR_Word * STATE_VARIABLE_Expansions_4);

static MR_bool MR_CALL 
check_hlds__inst_test__inst_is_mostly_unique_2_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Inst_6,
  MR_Word STATE_VARIABLE_Expansions_0_28,
  MR_Word * STATE_VARIABLE_Expansions_29);

static MR_bool MR_CALL 
check_hlds__inst_test__inst_list_is_mostly_unique_2_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ModuleInfo_2,
  MR_Word STATE_VARIABLE_Expansions_0_3,
  MR_Word * STATE_VARIABLE_Expansions_4);

static MR_bool MR_CALL 
check_hlds__inst_test__bound_inst_list_is_mostly_unique_2_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ModuleInfo_2,
  MR_Word STATE_VARIABLE_Expansions_0_3,
  MR_Word * STATE_VARIABLE_Expansions_4);

static MR_bool MR_CALL 
check_hlds__inst_test__inst_is_unique_2_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Inst_6,
  MR_Word STATE_VARIABLE_Expansions_0_27,
  MR_Word * STATE_VARIABLE_Expansions_28);

static MR_bool MR_CALL 
check_hlds__inst_test__inst_list_is_unique_2_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ModuleInfo_2,
  MR_Word STATE_VARIABLE_Expansions_0_3,
  MR_Word * STATE_VARIABLE_Expansions_4);

static MR_bool MR_CALL 
check_hlds__inst_test__bound_inst_list_is_unique_2_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ModuleInfo_2,
  MR_Word STATE_VARIABLE_Expansions_0_3,
  MR_Word * STATE_VARIABLE_Expansions_4);

static MR_bool MR_CALL 
check_hlds__inst_test__inst_is_ground_or_any_2_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Inst_6,
  MR_Word STATE_VARIABLE_Expansions_0_23,
  MR_Word * STATE_VARIABLE_Expansions_24);

static MR_bool MR_CALL 
check_hlds__inst_test__inst_list_is_ground_or_any_2_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ModuleInfo_2,
  MR_Word STATE_VARIABLE_Expansions_0_3,
  MR_Word * STATE_VARIABLE_Expansions_4);

static MR_bool MR_CALL 
check_hlds__inst_test__bound_inst_list_is_ground_or_any_2_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ModuleInfo_2,
  MR_Word STATE_VARIABLE_Expansions_0_3,
  MR_Word * STATE_VARIABLE_Expansions_4);

static MR_bool MR_CALL 
check_hlds__inst_test__inst_is_ground_mt_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word MaybeType_5,
  MR_Word Inst_6);

static MR_bool MR_CALL 
check_hlds__inst_test__inst_is_ground_mt_1_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word MaybeType_7,
  MR_Word Inst_8,
  MR_Word STATE_VARIABLE_Expansions_0_12,
  MR_Word * STATE_VARIABLE_Expansions_13);

static MR_bool MR_CALL 
check_hlds__inst_test__inst_results_bound_inst_list_is_ground_mt_2_6_p_0(
  MR_Word InstResults_7,
  MR_Word BoundInsts_8,
  MR_Word MaybeType_9,
  MR_Word ModuleInfo_10,
  MR_Word STATE_VARIABLE_Expansions_0_18,
  MR_Word * STATE_VARIABLE_Expansions_19);

static MR_bool MR_CALL 
check_hlds__inst_test__inst_list_is_ground_mt_2_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word ModuleInfo_3,
  MR_Word STATE_VARIABLE_Expansions_0_4,
  MR_Word * STATE_VARIABLE_Expansions_5);

static MR_bool MR_CALL 
check_hlds__inst_test__bound_inst_list_is_ground_mt_2_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word MaybeType_2,
  MR_Word ModuleInfo_3,
  MR_Word STATE_VARIABLE_Expansions_0_4,
  MR_Word * STATE_VARIABLE_Expansions_5);

static MR_bool MR_CALL 
check_hlds__inst_test____Unify____inst_names_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__inst_test____Compare____inst_names_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__inst_test_scalar_common_1[2][2];




static /* final */ const MR_Box check_hlds__inst_test_scalar_common_1[2][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "check_hlds.inst_test.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct1 check_hlds__inst_test__set_ordlist__ti_set_ordlist_1parse_tree__prog_data__type_ctor_info_inst_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0)
  }
};

const MR_TypeCtorInfo_Struct check_hlds__inst_test__check_hlds__inst_test__type_ctor_info_inst_names_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__inst_test____Unify____inst_names_0_0_10001)),
  ((MR_Box) (check_hlds__inst_test____Compare____inst_names_0_0_10001)),
  (MR_String) "check_hlds.inst_test",
  (MR_String) "inst_names",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&check_hlds__inst_test__set_ordlist__ti_set_ordlist_1parse_tree__prog_data__type_ctor_info_inst_name_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static void MR_CALL 
check_hlds__inst_test____Compare____inst_names_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__inst_test_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
check_hlds__inst_test____Unify____inst_names_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__inst_test_scalar_common_1[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__inst_test__record_inst_is_ground_2_p_0(
  MR_Word Inst_1,
  MR_Word IsGround_2)
{
  {
{
#define MR_PROC_LABEL check_hlds__inst_test__record_inst_is_ground_2_p_0

	MR_Word Inst;
	MR_Word IsGround;

	Inst =  Inst_1 ;
	IsGround =  IsGround_2 ;
		{

    MR_Unsigned hash;

    hash = (MR_Unsigned) Inst;
    hash = hash >> MR_LOW_TAG_BITS;
    hash = hash % INST_IS_GROUND_CACHE_SIZE;
    /* We overwrite any existing entry in the slot. */
    inst_is_ground_cache[hash].iig_inst_addr = Inst;
    inst_is_ground_cache[hash].iig_is_ground = IsGround;


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
check_hlds__inst_test__lookup_inst_is_ground_3_p_0(
  MR_Word Inst_1,
  MR_Word * Found_2,
  MR_Word * IsGround_3)
{
  {
{
#define MR_PROC_LABEL check_hlds__inst_test__lookup_inst_is_ground_3_p_0

	MR_Word Inst;
	MR_Word Found;
	MR_Word IsGround;

	Inst =  Inst_1 ;
		{

    MR_Unsigned hash;

    hash = (MR_Unsigned) Inst;
    hash = hash >> MR_LOW_TAG_BITS;
    hash = hash % INST_IS_GROUND_CACHE_SIZE;

    if (inst_is_ground_cache[hash].iig_inst_addr == Inst) {
        Found = MR_BOOL_YES;
        IsGround = inst_is_ground_cache[hash].iig_is_ground;
    } else {
        Found = MR_BOOL_NO;
    }


		;}
#undef MR_PROC_LABEL
	 *Found_2  = Found;
	 *IsGround_3  = IsGround;
}
  }
}

MR_bool MR_CALL 
check_hlds__inst_test__inst_contains_inst_name_3_p_0(
  MR_Word Inst_4,
  MR_Word ModuleInfo_5,
  MR_Word InstName_6)
{
  {
    MR_bool succeeded;
    MR_Word Expansions0_7;
    MR_Word Var_11;
    MR_Word _Expansions_8;

    mercury__set__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0), &Expansions0_7);
    check_hlds__inst_test__inst_contains_inst_name_2_6_p_0(Inst_4, ModuleInfo_5, InstName_6, &Var_11, Expansions0_7, &_Expansions_8);
    succeeded = ((MR_Integer) 1 == Var_11);
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__inst_test__inst_contains_inst_name_2_6_p_0(
  MR_Word Inst_7,
  MR_Word ModuleInfo_8,
  MR_Word InstName_9,
  MR_Word * Contains_10,
  MR_Word STATE_VARIABLE_Expansions_0_34,
  MR_Word * STATE_VARIABLE_Expansions_35)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Inst_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *Contains_10 = (MR_Integer) 0;
          *STATE_VARIABLE_Expansions_35 = STATE_VARIABLE_Expansions_0_34;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          *Contains_10 = (MR_Integer) 0;
          *STATE_VARIABLE_Expansions_35 = STATE_VARIABLE_Expansions_0_34;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Inst_7, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word InstResults_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_7, (MR_Integer) 2))));
              MR_Word ArgInsts_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_7, (MR_Integer) 3))));

              switch (MR_tag((MR_Word) InstResults_25)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(InstResults_25)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      check_hlds__inst_test__bound_inst_list_contains_inst_name_6_p_0(ArgInsts_26, ModuleInfo_8, InstName_9, Contains_10, STATE_VARIABLE_Expansions_0_34, STATE_VARIABLE_Expansions_35);
                      break;
                    case (MR_Integer) 1:
                      {
                        *Contains_10 = (MR_Integer) 0;
                        *STATE_VARIABLE_Expansions_35 = STATE_VARIABLE_Expansions_0_34;
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word InstNamesResult_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstResults_25, (MR_Integer) 1))));

                    if ((InstNamesResult_29 == (MR_Word) ((MR_Unsigned) 0U)))
                      check_hlds__inst_test__bound_inst_list_contains_inst_name_6_p_0(ArgInsts_26, ModuleInfo_8, InstName_9, Contains_10, STATE_VARIABLE_Expansions_0_34, STATE_VARIABLE_Expansions_35);
                    else
                    {
                      MR_Word InstNameSet_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstNamesResult_29, (MR_Integer) 0))));

                      succeeded = mercury__set__contains_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0), InstNameSet_33, ((MR_Box) (InstName_9)));
                      if (succeeded)
                        check_hlds__inst_test__bound_inst_list_contains_inst_name_6_p_0(ArgInsts_26, ModuleInfo_8, InstName_9, Contains_10, STATE_VARIABLE_Expansions_0_34, STATE_VARIABLE_Expansions_35);
                      else
                      {
                        *Contains_10 = (MR_Integer) 0;
                        *STATE_VARIABLE_Expansions_35 = STATE_VARIABLE_Expansions_0_34;
                      }
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 5:
            {
              *Contains_10 = (MR_Integer) 0;
              *STATE_VARIABLE_Expansions_35 = STATE_VARIABLE_Expansions_0_34;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word SubInst_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_7, (MR_Integer) 2))));
              MR_Word next_value_of_Inst_7 = SubInst_21;

              // direct tailcall eliminated
              ;
              Inst_7 = next_value_of_Inst_7;
              continue;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ThisInstName_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_7, (MR_Integer) 1))));

              succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_9, ThisInstName_22);
              if (succeeded)
              {
                *Contains_10 = (MR_Integer) 1;
                *STATE_VARIABLE_Expansions_35 = STATE_VARIABLE_Expansions_0_34;
              }
              else
              {
                MR_Word STATE_VARIABLE_Expansions_39_39;

                succeeded = mercury__set__insert_new_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0), ((MR_Box) (ThisInstName_22)), STATE_VARIABLE_Expansions_0_34, &STATE_VARIABLE_Expansions_39_39);
                if (succeeded)
                {
                  MR_Word ThisInst_23;
                  MR_Word STATE_VARIABLE_Expansions_40_40;
                  MR_Word next_value_of_Inst_7;
                  MR_Word next_value_of_STATE_VARIABLE_Expansions_0_34;

                  check_hlds__mode_util__inst_lookup_3_p_0(ModuleInfo_8, ThisInstName_22, &ThisInst_23);
                  mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0), ((MR_Box) (ThisInstName_22)), STATE_VARIABLE_Expansions_39_39, &STATE_VARIABLE_Expansions_40_40);
                  // direct tailcall eliminated
                  ;
                  next_value_of_Inst_7 = ThisInst_23;
                  next_value_of_STATE_VARIABLE_Expansions_0_34 = STATE_VARIABLE_Expansions_40_40;
                  Inst_7 = next_value_of_Inst_7;
                  STATE_VARIABLE_Expansions_0_34 = next_value_of_STATE_VARIABLE_Expansions_0_34;
                  continue;
                }
                else
                {
                  *Contains_10 = (MR_Integer) 0;
                  *STATE_VARIABLE_Expansions_35 = STATE_VARIABLE_Expansions_0_34;
                }
              }
            }
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__inst_test__inst_list_contains_inst_name_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Expansions_0_5,
  MR_Word * STATE_VARIABLE_Expansions_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__4_4 = (MR_Integer) 0;
      *STATE_VARIABLE_Expansions_6 = STATE_VARIABLE_Expansions_0_5;
    }
    else
    {
      MR_Word Inst_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Insts_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Contains1_18;
      MR_Word STATE_VARIABLE_Expansions_21_21;

      check_hlds__inst_test__inst_contains_inst_name_2_6_p_0(Inst_12, HeadVar__2_2, HeadVar__3_3, &Contains1_18, STATE_VARIABLE_Expansions_0_5, &STATE_VARIABLE_Expansions_21_21);
      switch (Contains1_18) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word next_value_of_HeadVar__1_1 = Insts_13;
            MR_Word next_value_of_STATE_VARIABLE_Expansions_0_5 = STATE_VARIABLE_Expansions_21_21;

            // direct tailcall eliminated
            ;
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            STATE_VARIABLE_Expansions_0_5 = next_value_of_STATE_VARIABLE_Expansions_0_5;
            continue;
          }
          break;
        case (MR_Integer) 1:
          {
            *HeadVar__4_4 = (MR_Integer) 1;
            *STATE_VARIABLE_Expansions_6 = STATE_VARIABLE_Expansions_21_21;
          }
          break;
      }
    }
    break;
  }
}

static void MR_CALL 
check_hlds__inst_test__bound_inst_list_contains_inst_name_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Expansions_0_5,
  MR_Word * STATE_VARIABLE_Expansions_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__4_4 = (MR_Integer) 0;
      *STATE_VARIABLE_Expansions_6 = STATE_VARIABLE_Expansions_0_5;
    }
    else
    {
      MR_Word BoundInst_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word BoundInsts_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgInsts_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BoundInst_12, (MR_Integer) 1))));
      MR_Word Contains1_20;
      MR_Word STATE_VARIABLE_Expansions_23_23;

      check_hlds__inst_test__inst_list_contains_inst_name_6_p_0(ArgInsts_19, HeadVar__2_2, HeadVar__3_3, &Contains1_20, STATE_VARIABLE_Expansions_0_5, &STATE_VARIABLE_Expansions_23_23);
      switch (Contains1_20) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word next_value_of_HeadVar__1_1 = BoundInsts_13;
            MR_Word next_value_of_STATE_VARIABLE_Expansions_0_5 = STATE_VARIABLE_Expansions_23_23;

            // direct tailcall eliminated
            ;
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            STATE_VARIABLE_Expansions_0_5 = next_value_of_STATE_VARIABLE_Expansions_0_5;
            continue;
          }
          break;
        case (MR_Integer) 1:
          {
            *HeadVar__4_4 = (MR_Integer) 1;
            *STATE_VARIABLE_Expansions_6 = STATE_VARIABLE_Expansions_23_23;
          }
          break;
      }
    }
    break;
  }
}

MR_bool MR_CALL 
check_hlds__inst_test__inst_list_is_ground_or_any_or_dead_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word ModuleInfo_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = (HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U));
    else
    {
      MR_Word Inst_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Insts_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Live_7;
      MR_Word Lives_8;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Live_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        Lives_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        switch (Live_7) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 0:
            {
              MR_Word Expansions0_12;
              MR_Word _Expansions_13;

              mercury__set__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), &Expansions0_12);
              succeeded = check_hlds__inst_test__inst_is_ground_or_any_2_4_p_0(ModuleInfo_3, Inst_5, Expansions0_12, &_Expansions_13);
            }
            break;
        }
        if (succeeded)
        {
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__1_1 = Insts_6;
          next_value_of_HeadVar__2_2 = Lives_8;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
check_hlds__inst_test__inst_list_is_ground_or_dead_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word ModuleInfo_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = (HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U));
    else
    {
      MR_Word Inst_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Insts_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Live_7;
      MR_Word Lives_8;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Live_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        Lives_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        switch (Live_7) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 0:
            succeeded = check_hlds__inst_test__inst_is_ground_2_p_0(ModuleInfo_3, Inst_5);
            break;
        }
        if (succeeded)
        {
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__1_1 = Insts_6;
          next_value_of_HeadVar__2_2 = Lives_8;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
check_hlds__inst_test__inst_list_is_ground_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ModuleInfo_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    {
      MR_Word Inst_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Insts_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__1_1;

      succeeded = check_hlds__inst_test__inst_is_ground_2_p_0(ModuleInfo_2, Inst_4);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Insts_5;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
check_hlds__inst_test__bound_inst_list_is_free_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ModuleInfo_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    {
      MR_Word BoundInst_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word BoundInsts_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Args_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BoundInst_4, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__1_1;

      succeeded = check_hlds__inst_test__inst_list_is_free_2_p_0(Args_8, ModuleInfo_2);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = BoundInsts_5;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
check_hlds__inst_test__inst_list_is_free_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ModuleInfo_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    {
      MR_Word Inst_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Insts_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__1_1;

      succeeded = check_hlds__inst_test__inst_is_free_2_p_0(ModuleInfo_2, Inst_4);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Insts_5;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
check_hlds__inst_test__bound_inst_list_is_not_fully_unique_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ModuleInfo_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    {
      MR_Word BoundInst_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word BoundInsts_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Args_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BoundInst_4, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__1_1;

      succeeded = check_hlds__inst_test__inst_list_is_not_fully_unique_2_p_0(Args_8, ModuleInfo_2);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = BoundInsts_5;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
check_hlds__inst_test__inst_list_is_not_fully_unique_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ModuleInfo_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    {
      MR_Word Inst_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Insts_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Expansions0_9;
      MR_Word _Expansions_10;
      MR_Word next_value_of_HeadVar__1_1;

      mercury__set__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), &Expansions0_9);
      succeeded = check_hlds__inst_test__inst_is_not_fully_unique_2_4_p_0(ModuleInfo_2, Inst_4, Expansions0_9, &_Expansions_10);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Insts_5;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
check_hlds__inst_test__bound_inst_list_is_not_partly_unique_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ModuleInfo_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    {
      MR_Word BoundInst_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word BoundInsts_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Args_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BoundInst_4, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__1_1;

      succeeded = check_hlds__inst_test__inst_list_is_not_partly_unique_2_p_0(Args_8, ModuleInfo_2);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = BoundInsts_5;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
check_hlds__inst_test__inst_list_is_not_partly_unique_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ModuleInfo_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    {
      MR_Word Inst_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Insts_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Expansions0_9;
      MR_Word _Expansions_10;
      MR_Word next_value_of_HeadVar__1_1;

      mercury__set__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), &Expansions0_9);
      succeeded = check_hlds__inst_test__inst_is_not_partly_unique_2_4_p_0(ModuleInfo_2, Inst_4, Expansions0_9, &_Expansions_10);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Insts_5;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
check_hlds__inst_test__bound_inst_list_is_mostly_unique_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ModuleInfo_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    {
      MR_Word BoundInst_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word BoundInsts_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Args_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BoundInst_4, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__1_1;

      succeeded = check_hlds__inst_test__inst_list_is_mostly_unique_2_p_0(Args_8, ModuleInfo_2);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = BoundInsts_5;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
check_hlds__inst_test__inst_list_is_mostly_unique_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ModuleInfo_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    {
      MR_Word Inst_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Insts_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Expansions0_9;
      MR_Word _Expansions_10;
      MR_Word next_value_of_HeadVar__1_1;

      mercury__set__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), &Expansions0_9);
      succeeded = check_hlds__inst_test__inst_is_mostly_unique_2_4_p_0(ModuleInfo_2, Inst_4, Expansions0_9, &_Expansions_10);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Insts_5;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
check_hlds__inst_test__bound_inst_list_is_unique_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ModuleInfo_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    {
      MR_Word BoundInst_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word BoundInsts_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Args_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BoundInst_4, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__1_1;

      succeeded = check_hlds__inst_test__inst_list_is_unique_2_p_0(Args_8, ModuleInfo_2);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = BoundInsts_5;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
check_hlds__inst_test__inst_list_is_unique_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ModuleInfo_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    {
      MR_Word Inst_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Insts_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Expansions0_9;
      MR_Word _Expansions_10;
      MR_Word next_value_of_HeadVar__1_1;

      mercury__set__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), &Expansions0_9);
      succeeded = check_hlds__inst_test__inst_is_unique_2_4_p_0(ModuleInfo_2, Inst_4, Expansions0_9, &_Expansions_10);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Insts_5;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
check_hlds__inst_test__inst_results_bound_inst_list_is_ground_or_any_3_p_0(
  MR_Word InstResults_4,
  MR_Word BoundInsts_5,
  MR_Word ModuleInfo_6)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) InstResults_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(InstResults_4)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            succeeded = check_hlds__inst_test__bound_inst_list_is_ground_or_any_2_p_0(BoundInsts_5, ModuleInfo_6);
            break;
          case (MR_Integer) 1:
            succeeded = MR_TRUE;
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word GroundnessResult_7 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), InstResults_4, (MR_Integer) 0))) >> 2)) & (MR_Integer) 3);

          switch (GroundnessResult_7) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 2:
            case (MR_Integer) 0:
              succeeded = check_hlds__inst_test__bound_inst_list_is_ground_or_any_2_p_0(BoundInsts_5, ModuleInfo_6);
              break;
            case (MR_Integer) 1:
              succeeded = MR_TRUE;
              break;
          }
        }
        break;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_test__bound_inst_list_is_ground_or_any_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ModuleInfo_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    {
      MR_Word BoundInst_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word BoundInsts_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Args_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BoundInst_4, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__1_1;

      succeeded = check_hlds__inst_test__inst_list_is_ground_or_any_2_p_0(Args_8, ModuleInfo_2);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = BoundInsts_5;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
check_hlds__inst_test__inst_list_is_ground_or_any_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ModuleInfo_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    {
      MR_Word Inst_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Insts_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Expansions0_9;
      MR_Word _Expansions_10;
      MR_Word next_value_of_HeadVar__1_1;

      mercury__set__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), &Expansions0_9);
      succeeded = check_hlds__inst_test__inst_is_ground_or_any_2_4_p_0(ModuleInfo_2, Inst_4, Expansions0_9, &_Expansions_10);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Insts_5;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
check_hlds__inst_test__inst_results_bound_inst_list_is_ground_mt_4_p_0(
  MR_Word InstResults_5,
  MR_Word BoundInsts_6,
  MR_Word MaybeType_7,
  MR_Word ModuleInfo_8)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) InstResults_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(InstResults_5)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            succeeded = check_hlds__inst_test__bound_inst_list_is_ground_mt_3_p_0(BoundInsts_6, MaybeType_7, ModuleInfo_8);
            break;
          case (MR_Integer) 1:
            succeeded = MR_TRUE;
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word GroundnessResult_9 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), InstResults_5, (MR_Integer) 0))) >> 2)) & (MR_Integer) 3);

          switch (GroundnessResult_9) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 2:
              succeeded = check_hlds__inst_test__bound_inst_list_is_ground_mt_3_p_0(BoundInsts_6, MaybeType_7, ModuleInfo_8);
              break;
            case (MR_Integer) 1:
              succeeded = MR_TRUE;
              break;
          }
        }
        break;
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__inst_test__inst_results_bound_inst_list_is_ground_3_p_0(
  MR_Word InstResults_4,
  MR_Word BoundInsts_5,
  MR_Word ModuleInfo_6)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) InstResults_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(InstResults_4)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              succeeded = check_hlds__inst_test__bound_inst_list_is_ground_mt_3_p_0(BoundInsts_5, (MR_Word) ((MR_Unsigned) 0U), ModuleInfo_6);
            }
            break;
          case (MR_Integer) 1:
            succeeded = MR_TRUE;
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word GroundnessResult_7 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), InstResults_4, (MR_Integer) 0))) >> 2)) & (MR_Integer) 3);

          switch (GroundnessResult_7) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 2:
              {
                succeeded = check_hlds__inst_test__bound_inst_list_is_ground_mt_3_p_0(BoundInsts_5, (MR_Word) ((MR_Unsigned) 0U), ModuleInfo_6);
              }
              break;
            case (MR_Integer) 1:
              succeeded = MR_TRUE;
              break;
          }
        }
        break;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_test__bound_inst_list_is_ground_mt_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word MaybeType_2,
  MR_Word ModuleInfo_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    {
      MR_Word BoundInst_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word BoundInsts_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Name_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BoundInst_6, (MR_Integer) 0))));
      MR_Word Args_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BoundInst_6, (MR_Integer) 1))));
      MR_Word MaybeTypes_12;
      MR_Integer Var_13;
      MR_Word next_value_of_HeadVar__1_1;

      Var_13 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Args_11);
      check_hlds__type_util__maybe_get_cons_id_arg_types_5_p_0(ModuleInfo_3, MaybeType_2, Name_10, Var_13, &MaybeTypes_12);
      succeeded = check_hlds__inst_test__inst_list_is_ground_mt_3_p_0(Args_11, MaybeTypes_12, ModuleInfo_3);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = BoundInsts_7;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_test__inst_list_is_ground_mt_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word ModuleInfo_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = (HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U));
    else
    {
      MR_Word Inst_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Insts_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word MaybeType_7;
      MR_Word MaybeTypes_8;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        MaybeType_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        MaybeTypes_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        succeeded = check_hlds__inst_test__inst_is_ground_mt_3_p_0(ModuleInfo_3, MaybeType_7, Inst_5);
        if (succeeded)
        {
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__1_1 = Insts_6;
          next_value_of_HeadVar__2_2 = MaybeTypes_8;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
check_hlds__inst_test__inst_is_bound_to_functors_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word Inst_5,
  MR_Word * Functors_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Inst_5)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Inst_5, (MR_Integer) 0))))) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            {
              *Functors_6 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_5, (MR_Integer) 3))));
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 2:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_test.inst_is_bound_to_functors\'/3", (MR_String) "uninstantiated inst parameter");
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word SubInst_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_5, (MR_Integer) 2))));
              MR_Word next_value_of_Inst_5 = SubInst_11;

              // direct tailcall eliminated
              ;
              Inst_5 = next_value_of_Inst_5;
              continue;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word InstName_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_5, (MR_Integer) 1))));
              MR_Word NextInst_13;
              MR_Word next_value_of_Inst_5;

              check_hlds__mode_util__inst_lookup_3_p_0(ModuleInfo_4, InstName_12, &NextInst_13);
              // direct tailcall eliminated
              ;
              next_value_of_Inst_5 = NextInst_13;
              Inst_5 = next_value_of_Inst_5;
              continue;
            }
            break;
        }
        break;
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
check_hlds__inst_test__inst_is_bound_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word Inst_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Inst_4)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        switch (MR_unmkbody(Inst_4)) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 1:
            succeeded = MR_TRUE;
            break;
        }
        break;
      case (MR_Integer) 2:
        succeeded = MR_TRUE;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Inst_4, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 1:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 2:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_test.inst_is_bound\'/2", (MR_String) "uninstantiated inst parameter");
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word SubInst_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_4, (MR_Integer) 2))));
              MR_Word next_value_of_Inst_4 = SubInst_17;

              // direct tailcall eliminated
              ;
              Inst_4 = next_value_of_Inst_4;
              continue;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word InstName_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_4, (MR_Integer) 1))));
              MR_Word NextInst_19;
              MR_Word next_value_of_Inst_4;

              check_hlds__mode_util__inst_lookup_3_p_0(ModuleInfo_3, InstName_18, &NextInst_19);
              // direct tailcall eliminated
              ;
              next_value_of_Inst_4 = NextInst_19;
              Inst_4 = next_value_of_Inst_4;
              continue;
            }
            break;
          case (MR_Integer) 5:
            succeeded = MR_TRUE;
            break;
        }
        break;
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
check_hlds__inst_test__inst_is_any_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word Inst_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Inst_4)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 2:
        succeeded = MR_TRUE;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Inst_4, (MR_Integer) 0))))) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 2:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_test.inst_is_any\'/2", (MR_String) "uninstantiated inst parameter");
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word SubInst_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_4, (MR_Integer) 2))));
              MR_Word next_value_of_Inst_4 = SubInst_17;

              // direct tailcall eliminated
              ;
              Inst_4 = next_value_of_Inst_4;
              continue;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word InstName_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_4, (MR_Integer) 1))));
              MR_Word NextInst_19;
              MR_Word next_value_of_Inst_4;

              check_hlds__mode_util__inst_lookup_3_p_0(ModuleInfo_3, InstName_18, &NextInst_19);
              // direct tailcall eliminated
              ;
              next_value_of_Inst_4 = NextInst_19;
              Inst_4 = next_value_of_Inst_4;
              continue;
            }
            break;
        }
        break;
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
check_hlds__inst_test__inst_is_free_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word Inst_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Inst_4)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        switch (MR_unmkbody(Inst_4)) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            succeeded = MR_TRUE;
            break;
        }
        break;
      case (MR_Integer) 1:
        succeeded = MR_TRUE;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Inst_4, (MR_Integer) 0))))) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 2:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_test.inst_is_free\'/2", (MR_String) "uninstantiated inst parameter");
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word SubInst_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_4, (MR_Integer) 2))));
              MR_Word next_value_of_Inst_4 = SubInst_17;

              // direct tailcall eliminated
              ;
              Inst_4 = next_value_of_Inst_4;
              continue;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word InstName_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_4, (MR_Integer) 1))));
              MR_Word NextInst_19;
              MR_Word next_value_of_Inst_4;

              check_hlds__mode_util__inst_lookup_3_p_0(ModuleInfo_3, InstName_18, &NextInst_19);
              // direct tailcall eliminated
              ;
              next_value_of_Inst_4 = NextInst_19;
              Inst_4 = next_value_of_Inst_4;
              continue;
            }
            break;
        }
        break;
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
check_hlds__inst_test__inst_is_clobbered_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word Inst_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Inst_4)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_30 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Inst_4, (MR_Integer) 0))) & (MR_Integer) 7);

          switch (Var_30) {
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
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Inst_4, (MR_Integer) 0))))) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            {
              MR_Word Var_33 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst_4, (MR_Integer) 1))) & (MR_Integer) 7);

              switch (Var_33) {
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
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_35 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst_4, (MR_Integer) 1))) & (MR_Integer) 7);

              switch (Var_35) {
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
            }
            break;
          case (MR_Integer) 2:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_test.inst_is_clobbered\'/2", (MR_String) "uninstantiated inst parameter");
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word SubInst_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_4, (MR_Integer) 2))));
              MR_Word next_value_of_Inst_4 = SubInst_18;

              // direct tailcall eliminated
              ;
              Inst_4 = next_value_of_Inst_4;
              continue;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word InstName_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_4, (MR_Integer) 1))));
              MR_Word NextInst_20;
              MR_Word next_value_of_Inst_4;

              check_hlds__mode_util__inst_lookup_3_p_0(ModuleInfo_3, InstName_19, &NextInst_20);
              // direct tailcall eliminated
              ;
              next_value_of_Inst_4 = NextInst_20;
              Inst_4 = next_value_of_Inst_4;
              continue;
            }
            break;
        }
        break;
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
check_hlds__inst_test__inst_is_not_fully_unique_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word Inst_4)
{
  {
    MR_bool succeeded;
    MR_Word Expansions0_5;
    MR_Word _Expansions_6;

    mercury__set__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), &Expansions0_5);
    succeeded = check_hlds__inst_test__inst_is_not_fully_unique_2_4_p_0(ModuleInfo_3, Inst_4, Expansions0_5, &_Expansions_6);
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_test__inst_is_not_fully_unique_2_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Inst_6,
  MR_Word STATE_VARIABLE_Expansions_0_29,
  MR_Word * STATE_VARIABLE_Expansions_30)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Inst_6)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        switch (MR_unmkbody(Inst_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *STATE_VARIABLE_Expansions_30 = STATE_VARIABLE_Expansions_0_29;
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 1:
            {
              *STATE_VARIABLE_Expansions_30 = STATE_VARIABLE_Expansions_0_29;
              succeeded = MR_TRUE;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          *STATE_VARIABLE_Expansions_30 = STATE_VARIABLE_Expansions_0_29;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_43 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Inst_6, (MR_Integer) 0))) & (MR_Integer) 7);

          switch (Var_43) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 2:
              {
                *STATE_VARIABLE_Expansions_30 = STATE_VARIABLE_Expansions_0_29;
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 0:
              {
                *STATE_VARIABLE_Expansions_30 = STATE_VARIABLE_Expansions_0_29;
                succeeded = MR_TRUE;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Inst_6, (MR_Integer) 0))))) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            {
              MR_Word Uniq_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst_6, (MR_Integer) 1))) & (MR_Integer) 7);
              MR_Word InstResult_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_6, (MR_Integer) 2))));
              MR_Word BoundInsts_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_6, (MR_Integer) 3))));

              switch (Uniq_13) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 2:
                  succeeded = MR_TRUE;
                  break;
                case (MR_Integer) 0:
                  succeeded = MR_TRUE;
                  break;
              }
              if (succeeded)
                switch (MR_tag((MR_Word) InstResult_14)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(InstResult_14)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        succeeded = check_hlds__inst_test__bound_inst_list_is_not_fully_unique_2_4_p_0(BoundInsts_15, ModuleInfo_5, STATE_VARIABLE_Expansions_0_29, STATE_VARIABLE_Expansions_30);
                        break;
                      case (MR_Integer) 1:
                        {
                          *STATE_VARIABLE_Expansions_30 = STATE_VARIABLE_Expansions_0_29;
                          succeeded = MR_TRUE;
                        }
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    succeeded = check_hlds__inst_test__bound_inst_list_is_not_fully_unique_2_4_p_0(BoundInsts_15, ModuleInfo_5, STATE_VARIABLE_Expansions_0_29, STATE_VARIABLE_Expansions_30);
                    break;
                }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_45 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst_6, (MR_Integer) 1))) & (MR_Integer) 7);

              switch (Var_45) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 2:
                  {
                    *STATE_VARIABLE_Expansions_30 = STATE_VARIABLE_Expansions_0_29;
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    *STATE_VARIABLE_Expansions_30 = STATE_VARIABLE_Expansions_0_29;
                    succeeded = MR_TRUE;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_test.inst_is_not_fully_unique_2\'/4", (MR_String) "uninstantiated inst parameter");
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word SubInst_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_6, (MR_Integer) 2))));
              MR_Word next_value_of_Inst_6 = SubInst_24;

              // direct tailcall eliminated
              ;
              Inst_6 = next_value_of_Inst_6;
              continue;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word InstName_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_6, (MR_Integer) 1))));
              MR_Word STATE_VARIABLE_Expansions_31_31;

              succeeded = mercury__set__insert_new_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), ((MR_Box) (Inst_6)), STATE_VARIABLE_Expansions_0_29, &STATE_VARIABLE_Expansions_31_31);
              if (succeeded)
              {
                MR_Word NextInst_26;
                MR_Word next_value_of_Inst_6;
                MR_Word next_value_of_STATE_VARIABLE_Expansions_0_29;

                check_hlds__mode_util__inst_lookup_3_p_0(ModuleInfo_5, InstName_25, &NextInst_26);
                // direct tailcall eliminated
                ;
                next_value_of_Inst_6 = NextInst_26;
                next_value_of_STATE_VARIABLE_Expansions_0_29 = STATE_VARIABLE_Expansions_31_31;
                Inst_6 = next_value_of_Inst_6;
                STATE_VARIABLE_Expansions_0_29 = next_value_of_STATE_VARIABLE_Expansions_0_29;
                continue;
              }
              else
              {
                *STATE_VARIABLE_Expansions_30 = STATE_VARIABLE_Expansions_0_29;
                succeeded = MR_TRUE;
              }
            }
            break;
        }
        break;
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_test__inst_list_is_not_fully_unique_2_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ModuleInfo_2,
  MR_Word STATE_VARIABLE_Expansions_0_3,
  MR_Word * STATE_VARIABLE_Expansions_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Expansions_4 = STATE_VARIABLE_Expansions_0_3;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word Inst_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Insts_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Expansions_15_15;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Expansions_0_3;

      succeeded = check_hlds__inst_test__inst_is_not_fully_unique_2_4_p_0(ModuleInfo_2, Inst_9, STATE_VARIABLE_Expansions_0_3, &STATE_VARIABLE_Expansions_15_15);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Insts_10;
        next_value_of_STATE_VARIABLE_Expansions_0_3 = STATE_VARIABLE_Expansions_15_15;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        STATE_VARIABLE_Expansions_0_3 = next_value_of_STATE_VARIABLE_Expansions_0_3;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_test__bound_inst_list_is_not_fully_unique_2_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ModuleInfo_2,
  MR_Word STATE_VARIABLE_Expansions_0_3,
  MR_Word * STATE_VARIABLE_Expansions_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Expansions_4 = STATE_VARIABLE_Expansions_0_3;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word BoundInst_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word BoundInsts_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Args_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BoundInst_9, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Expansions_17_17;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Expansions_0_3;

      succeeded = check_hlds__inst_test__inst_list_is_not_fully_unique_2_4_p_0(Args_14, ModuleInfo_2, STATE_VARIABLE_Expansions_0_3, &STATE_VARIABLE_Expansions_17_17);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = BoundInsts_10;
        next_value_of_STATE_VARIABLE_Expansions_0_3 = STATE_VARIABLE_Expansions_17_17;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        STATE_VARIABLE_Expansions_0_3 = next_value_of_STATE_VARIABLE_Expansions_0_3;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
check_hlds__inst_test__inst_is_not_partly_unique_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word Inst_4)
{
  {
    MR_bool succeeded;
    MR_Word Expansions0_5;
    MR_Word _Expansions_6;

    mercury__set__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), &Expansions0_5);
    succeeded = check_hlds__inst_test__inst_is_not_partly_unique_2_4_p_0(ModuleInfo_3, Inst_4, Expansions0_5, &_Expansions_6);
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_test__inst_is_not_partly_unique_2_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Inst_6,
  MR_Word STATE_VARIABLE_Expansions_0_26,
  MR_Word * STATE_VARIABLE_Expansions_27)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Inst_6)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        switch (MR_unmkbody(Inst_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *STATE_VARIABLE_Expansions_27 = STATE_VARIABLE_Expansions_0_26;
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 1:
            {
              *STATE_VARIABLE_Expansions_27 = STATE_VARIABLE_Expansions_0_26;
              succeeded = MR_TRUE;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          *STATE_VARIABLE_Expansions_27 = STATE_VARIABLE_Expansions_0_26;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_36 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Inst_6, (MR_Integer) 0))) & (MR_Integer) 7);

          succeeded = (Var_36 == (MR_Integer) 0);
          if (succeeded)
          {
            *STATE_VARIABLE_Expansions_27 = STATE_VARIABLE_Expansions_0_26;
            succeeded = MR_TRUE;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Inst_6, (MR_Integer) 0))))) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            {
              MR_Word InstResult_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_6, (MR_Integer) 2))));
              MR_Word BoundInsts_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_6, (MR_Integer) 3))));
              MR_Word Var_33 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst_6, (MR_Integer) 1))) & (MR_Integer) 7);

              succeeded = (Var_33 == (MR_Integer) 0);
              if (succeeded)
                switch (MR_tag((MR_Word) InstResult_11)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(InstResult_11)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        succeeded = check_hlds__inst_test__bound_inst_list_is_not_partly_unique_2_4_p_0(BoundInsts_12, ModuleInfo_5, STATE_VARIABLE_Expansions_0_26, STATE_VARIABLE_Expansions_27);
                        break;
                      case (MR_Integer) 1:
                        {
                          *STATE_VARIABLE_Expansions_27 = STATE_VARIABLE_Expansions_0_26;
                          succeeded = MR_TRUE;
                        }
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    succeeded = check_hlds__inst_test__bound_inst_list_is_not_partly_unique_2_4_p_0(BoundInsts_12, ModuleInfo_5, STATE_VARIABLE_Expansions_0_26, STATE_VARIABLE_Expansions_27);
                    break;
                }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_35 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst_6, (MR_Integer) 1))) & (MR_Integer) 7);

              succeeded = (Var_35 == (MR_Integer) 0);
              if (succeeded)
              {
                *STATE_VARIABLE_Expansions_27 = STATE_VARIABLE_Expansions_0_26;
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_test.inst_is_not_partly_unique_2\'/4", (MR_String) "uninstantiated inst parameter");
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word SubInst_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_6, (MR_Integer) 2))));
              MR_Word next_value_of_Inst_6 = SubInst_21;

              // direct tailcall eliminated
              ;
              Inst_6 = next_value_of_Inst_6;
              continue;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word InstName_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_6, (MR_Integer) 1))));
              MR_Word STATE_VARIABLE_Expansions_28_28;

              succeeded = mercury__set__insert_new_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), ((MR_Box) (Inst_6)), STATE_VARIABLE_Expansions_0_26, &STATE_VARIABLE_Expansions_28_28);
              if (succeeded)
              {
                MR_Word NextInst_23;
                MR_Word next_value_of_Inst_6;
                MR_Word next_value_of_STATE_VARIABLE_Expansions_0_26;

                check_hlds__mode_util__inst_lookup_3_p_0(ModuleInfo_5, InstName_22, &NextInst_23);
                // direct tailcall eliminated
                ;
                next_value_of_Inst_6 = NextInst_23;
                next_value_of_STATE_VARIABLE_Expansions_0_26 = STATE_VARIABLE_Expansions_28_28;
                Inst_6 = next_value_of_Inst_6;
                STATE_VARIABLE_Expansions_0_26 = next_value_of_STATE_VARIABLE_Expansions_0_26;
                continue;
              }
              else
              {
                *STATE_VARIABLE_Expansions_27 = STATE_VARIABLE_Expansions_0_26;
                succeeded = MR_TRUE;
              }
            }
            break;
        }
        break;
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_test__inst_list_is_not_partly_unique_2_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ModuleInfo_2,
  MR_Word STATE_VARIABLE_Expansions_0_3,
  MR_Word * STATE_VARIABLE_Expansions_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Expansions_4 = STATE_VARIABLE_Expansions_0_3;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word Inst_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Insts_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Expansions_15_15;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Expansions_0_3;

      succeeded = check_hlds__inst_test__inst_is_not_partly_unique_2_4_p_0(ModuleInfo_2, Inst_9, STATE_VARIABLE_Expansions_0_3, &STATE_VARIABLE_Expansions_15_15);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Insts_10;
        next_value_of_STATE_VARIABLE_Expansions_0_3 = STATE_VARIABLE_Expansions_15_15;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        STATE_VARIABLE_Expansions_0_3 = next_value_of_STATE_VARIABLE_Expansions_0_3;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_test__bound_inst_list_is_not_partly_unique_2_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ModuleInfo_2,
  MR_Word STATE_VARIABLE_Expansions_0_3,
  MR_Word * STATE_VARIABLE_Expansions_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Expansions_4 = STATE_VARIABLE_Expansions_0_3;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word BoundInst_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word BoundInsts_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Args_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BoundInst_9, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Expansions_17_17;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Expansions_0_3;

      succeeded = check_hlds__inst_test__inst_list_is_not_partly_unique_2_4_p_0(Args_14, ModuleInfo_2, STATE_VARIABLE_Expansions_0_3, &STATE_VARIABLE_Expansions_17_17);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = BoundInsts_10;
        next_value_of_STATE_VARIABLE_Expansions_0_3 = STATE_VARIABLE_Expansions_17_17;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        STATE_VARIABLE_Expansions_0_3 = next_value_of_STATE_VARIABLE_Expansions_0_3;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
check_hlds__inst_test__inst_is_mostly_unique_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word Inst_4)
{
  {
    MR_bool succeeded;
    MR_Word Expansions0_5;
    MR_Word _Expansions_6;

    mercury__set__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), &Expansions0_5);
    succeeded = check_hlds__inst_test__inst_is_mostly_unique_2_4_p_0(ModuleInfo_3, Inst_4, Expansions0_5, &_Expansions_6);
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_test__inst_is_mostly_unique_2_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Inst_6,
  MR_Word STATE_VARIABLE_Expansions_0_28,
  MR_Word * STATE_VARIABLE_Expansions_29)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Inst_6)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        switch (MR_unmkbody(Inst_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *STATE_VARIABLE_Expansions_29 = STATE_VARIABLE_Expansions_0_28;
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 1:
            {
              *STATE_VARIABLE_Expansions_29 = STATE_VARIABLE_Expansions_0_28;
              succeeded = MR_TRUE;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          *STATE_VARIABLE_Expansions_29 = STATE_VARIABLE_Expansions_0_28;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_43 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Inst_6, (MR_Integer) 0))) & (MR_Integer) 7);

          switch (Var_43) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 2:
              {
                *STATE_VARIABLE_Expansions_29 = STATE_VARIABLE_Expansions_0_28;
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 1:
              {
                *STATE_VARIABLE_Expansions_29 = STATE_VARIABLE_Expansions_0_28;
                succeeded = MR_TRUE;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Inst_6, (MR_Integer) 0))))) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            {
              MR_Word InstResults_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_6, (MR_Integer) 2))));
              MR_Word BoundInsts_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_6, (MR_Integer) 3))));
              MR_Word Var_35 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst_6, (MR_Integer) 1))) & (MR_Integer) 7);

              succeeded = (Var_35 == (MR_Integer) 1);
              if (succeeded)
              {
                if ((((InstResults_13 == (MR_Word) ((MR_Unsigned) 0U))) || (((MR_tag((MR_Word) InstResults_13)) == (MR_Integer) 1))))
                  succeeded = check_hlds__inst_test__bound_inst_list_is_mostly_unique_2_4_p_0(BoundInsts_14, ModuleInfo_5, STATE_VARIABLE_Expansions_0_28, STATE_VARIABLE_Expansions_29);
                else
                  succeeded = MR_FALSE;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_45 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst_6, (MR_Integer) 1))) & (MR_Integer) 7);

              switch (Var_45) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 2:
                  {
                    *STATE_VARIABLE_Expansions_29 = STATE_VARIABLE_Expansions_0_28;
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    *STATE_VARIABLE_Expansions_29 = STATE_VARIABLE_Expansions_0_28;
                    succeeded = MR_TRUE;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_test.inst_is_mostly_unique_2\'/4", (MR_String) "uninstantiated inst parameter");
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word SubInst_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_6, (MR_Integer) 2))));
              MR_Word next_value_of_Inst_6 = SubInst_23;

              // direct tailcall eliminated
              ;
              Inst_6 = next_value_of_Inst_6;
              continue;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word InstName_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_6, (MR_Integer) 1))));
              MR_Word STATE_VARIABLE_Expansions_30_30;

              succeeded = mercury__set__insert_new_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), ((MR_Box) (Inst_6)), STATE_VARIABLE_Expansions_0_28, &STATE_VARIABLE_Expansions_30_30);
              if (succeeded)
              {
                MR_Word NextInst_25;
                MR_Word next_value_of_Inst_6;
                MR_Word next_value_of_STATE_VARIABLE_Expansions_0_28;

                check_hlds__mode_util__inst_lookup_3_p_0(ModuleInfo_5, InstName_24, &NextInst_25);
                // direct tailcall eliminated
                ;
                next_value_of_Inst_6 = NextInst_25;
                next_value_of_STATE_VARIABLE_Expansions_0_28 = STATE_VARIABLE_Expansions_30_30;
                Inst_6 = next_value_of_Inst_6;
                STATE_VARIABLE_Expansions_0_28 = next_value_of_STATE_VARIABLE_Expansions_0_28;
                continue;
              }
              else
              {
                *STATE_VARIABLE_Expansions_29 = STATE_VARIABLE_Expansions_0_28;
                succeeded = MR_TRUE;
              }
            }
            break;
        }
        break;
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_test__inst_list_is_mostly_unique_2_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ModuleInfo_2,
  MR_Word STATE_VARIABLE_Expansions_0_3,
  MR_Word * STATE_VARIABLE_Expansions_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Expansions_4 = STATE_VARIABLE_Expansions_0_3;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word Inst_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Insts_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Expansions_15_15;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Expansions_0_3;

      succeeded = check_hlds__inst_test__inst_is_mostly_unique_2_4_p_0(ModuleInfo_2, Inst_9, STATE_VARIABLE_Expansions_0_3, &STATE_VARIABLE_Expansions_15_15);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Insts_10;
        next_value_of_STATE_VARIABLE_Expansions_0_3 = STATE_VARIABLE_Expansions_15_15;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        STATE_VARIABLE_Expansions_0_3 = next_value_of_STATE_VARIABLE_Expansions_0_3;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_test__bound_inst_list_is_mostly_unique_2_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ModuleInfo_2,
  MR_Word STATE_VARIABLE_Expansions_0_3,
  MR_Word * STATE_VARIABLE_Expansions_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Expansions_4 = STATE_VARIABLE_Expansions_0_3;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word BoundInst_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word BoundInsts_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Args_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BoundInst_9, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Expansions_17_17;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Expansions_0_3;

      succeeded = check_hlds__inst_test__inst_list_is_mostly_unique_2_4_p_0(Args_14, ModuleInfo_2, STATE_VARIABLE_Expansions_0_3, &STATE_VARIABLE_Expansions_17_17);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = BoundInsts_10;
        next_value_of_STATE_VARIABLE_Expansions_0_3 = STATE_VARIABLE_Expansions_17_17;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        STATE_VARIABLE_Expansions_0_3 = next_value_of_STATE_VARIABLE_Expansions_0_3;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
check_hlds__inst_test__inst_is_unique_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word Inst_4)
{
  {
    MR_bool succeeded;
    MR_Word Expansions0_5;
    MR_Word _Expansions_6;

    mercury__set__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), &Expansions0_5);
    succeeded = check_hlds__inst_test__inst_is_unique_2_4_p_0(ModuleInfo_3, Inst_4, Expansions0_5, &_Expansions_6);
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_test__inst_is_unique_2_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Inst_6,
  MR_Word STATE_VARIABLE_Expansions_0_27,
  MR_Word * STATE_VARIABLE_Expansions_28)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Inst_6)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        switch (MR_unmkbody(Inst_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *STATE_VARIABLE_Expansions_28 = STATE_VARIABLE_Expansions_0_27;
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 1:
            {
              *STATE_VARIABLE_Expansions_28 = STATE_VARIABLE_Expansions_0_27;
              succeeded = MR_TRUE;
            }
            break;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_43 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Inst_6, (MR_Integer) 0))) & (MR_Integer) 7);

          succeeded = (Var_43 == (MR_Integer) 1);
          if (succeeded)
          {
            *STATE_VARIABLE_Expansions_28 = STATE_VARIABLE_Expansions_0_27;
            succeeded = MR_TRUE;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Inst_6, (MR_Integer) 0))))) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            {
              MR_Word InstResults_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_6, (MR_Integer) 2))));
              MR_Word BoundInsts_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_6, (MR_Integer) 3))));
              MR_Word Var_46 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst_6, (MR_Integer) 1))) & (MR_Integer) 7);

              succeeded = (Var_46 == (MR_Integer) 1);
              if (succeeded)
              {
                if ((((InstResults_14 == (MR_Word) ((MR_Unsigned) 0U))) || (((MR_tag((MR_Word) InstResults_14)) == (MR_Integer) 1))))
                  succeeded = check_hlds__inst_test__bound_inst_list_is_unique_2_4_p_0(BoundInsts_15, ModuleInfo_5, STATE_VARIABLE_Expansions_0_27, STATE_VARIABLE_Expansions_28);
                else
                  succeeded = MR_FALSE;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_48 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst_6, (MR_Integer) 1))) & (MR_Integer) 7);

              succeeded = (Var_48 == (MR_Integer) 1);
              if (succeeded)
              {
                *STATE_VARIABLE_Expansions_28 = STATE_VARIABLE_Expansions_0_27;
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_test.inst_is_unique_2\'/4", (MR_String) "uninstantiated inst parameter");
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word SubInst_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_6, (MR_Integer) 2))));
              MR_Word next_value_of_Inst_6 = SubInst_24;

              // direct tailcall eliminated
              ;
              Inst_6 = next_value_of_Inst_6;
              continue;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word InstName_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_6, (MR_Integer) 1))));
              MR_Word STATE_VARIABLE_Expansions_29_29;

              succeeded = mercury__set__insert_new_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), ((MR_Box) (Inst_6)), STATE_VARIABLE_Expansions_0_27, &STATE_VARIABLE_Expansions_29_29);
              if (succeeded)
              {
                MR_Word NextInst_26;
                MR_Word next_value_of_Inst_6;
                MR_Word next_value_of_STATE_VARIABLE_Expansions_0_27;

                check_hlds__mode_util__inst_lookup_3_p_0(ModuleInfo_5, InstName_25, &NextInst_26);
                // direct tailcall eliminated
                ;
                next_value_of_Inst_6 = NextInst_26;
                next_value_of_STATE_VARIABLE_Expansions_0_27 = STATE_VARIABLE_Expansions_29_29;
                Inst_6 = next_value_of_Inst_6;
                STATE_VARIABLE_Expansions_0_27 = next_value_of_STATE_VARIABLE_Expansions_0_27;
                continue;
              }
              else
              {
                *STATE_VARIABLE_Expansions_28 = STATE_VARIABLE_Expansions_0_27;
                succeeded = MR_TRUE;
              }
            }
            break;
        }
        break;
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_test__inst_list_is_unique_2_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ModuleInfo_2,
  MR_Word STATE_VARIABLE_Expansions_0_3,
  MR_Word * STATE_VARIABLE_Expansions_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Expansions_4 = STATE_VARIABLE_Expansions_0_3;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word Inst_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Insts_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Expansions_15_15;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Expansions_0_3;

      succeeded = check_hlds__inst_test__inst_is_unique_2_4_p_0(ModuleInfo_2, Inst_9, STATE_VARIABLE_Expansions_0_3, &STATE_VARIABLE_Expansions_15_15);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Insts_10;
        next_value_of_STATE_VARIABLE_Expansions_0_3 = STATE_VARIABLE_Expansions_15_15;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        STATE_VARIABLE_Expansions_0_3 = next_value_of_STATE_VARIABLE_Expansions_0_3;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_test__bound_inst_list_is_unique_2_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ModuleInfo_2,
  MR_Word STATE_VARIABLE_Expansions_0_3,
  MR_Word * STATE_VARIABLE_Expansions_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Expansions_4 = STATE_VARIABLE_Expansions_0_3;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word BoundInst_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word BoundInsts_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Args_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BoundInst_9, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Expansions_17_17;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Expansions_0_3;

      succeeded = check_hlds__inst_test__inst_list_is_unique_2_4_p_0(Args_14, ModuleInfo_2, STATE_VARIABLE_Expansions_0_3, &STATE_VARIABLE_Expansions_17_17);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = BoundInsts_10;
        next_value_of_STATE_VARIABLE_Expansions_0_3 = STATE_VARIABLE_Expansions_17_17;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        STATE_VARIABLE_Expansions_0_3 = next_value_of_STATE_VARIABLE_Expansions_0_3;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
check_hlds__inst_test__inst_is_ground_or_any_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word Inst_4)
{
  {
    MR_bool succeeded;
    MR_Word Expansions0_5;
    MR_Word _Expansions_6;

    mercury__set__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), &Expansions0_5);
    succeeded = check_hlds__inst_test__inst_is_ground_or_any_2_4_p_0(ModuleInfo_3, Inst_4, Expansions0_5, &_Expansions_6);
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_test__inst_is_ground_or_any_2_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Inst_6,
  MR_Word STATE_VARIABLE_Expansions_0_23,
  MR_Word * STATE_VARIABLE_Expansions_24)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Inst_6)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        switch (MR_unmkbody(Inst_6)) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 1:
            {
              *STATE_VARIABLE_Expansions_24 = STATE_VARIABLE_Expansions_0_23;
              succeeded = MR_TRUE;
            }
            break;
        }
        break;
      case (MR_Integer) 2:
        {
          *STATE_VARIABLE_Expansions_24 = STATE_VARIABLE_Expansions_0_23;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Inst_6, (MR_Integer) 0))))) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            {
              MR_Word InstResults_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_6, (MR_Integer) 2))));
              MR_Word BoundInsts_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_6, (MR_Integer) 3))));

              switch (MR_tag((MR_Word) InstResults_13)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(InstResults_13)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      succeeded = check_hlds__inst_test__bound_inst_list_is_ground_or_any_2_4_p_0(BoundInsts_14, ModuleInfo_5, STATE_VARIABLE_Expansions_0_23, STATE_VARIABLE_Expansions_24);
                      break;
                    case (MR_Integer) 1:
                      {
                        *STATE_VARIABLE_Expansions_24 = STATE_VARIABLE_Expansions_0_23;
                        succeeded = MR_TRUE;
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word GroundnessResult_38 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), InstResults_13, (MR_Integer) 0))) >> 2)) & (MR_Integer) 3);

                    switch (GroundnessResult_38) {
                      default:
                        succeeded = MR_FALSE;
                        break;
                      case (MR_Integer) 2:
                        succeeded = check_hlds__inst_test__bound_inst_list_is_ground_or_any_2_4_p_0(BoundInsts_14, ModuleInfo_5, STATE_VARIABLE_Expansions_0_23, STATE_VARIABLE_Expansions_24);
                        break;
                      case (MR_Integer) 1:
                        {
                          *STATE_VARIABLE_Expansions_24 = STATE_VARIABLE_Expansions_0_23;
                          succeeded = MR_TRUE;
                        }
                        break;
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              *STATE_VARIABLE_Expansions_24 = STATE_VARIABLE_Expansions_0_23;
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 2:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_test.inst_is_ground_or_any_2\'/4", (MR_String) "uninstantiated inst parameter");
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word SubInst_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_6, (MR_Integer) 2))));
              MR_Word next_value_of_Inst_6 = SubInst_20;

              // direct tailcall eliminated
              ;
              Inst_6 = next_value_of_Inst_6;
              continue;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word InstName_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_6, (MR_Integer) 1))));
              MR_Word STATE_VARIABLE_Expansions_25_25;

              succeeded = mercury__set__insert_new_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), ((MR_Box) (Inst_6)), STATE_VARIABLE_Expansions_0_23, &STATE_VARIABLE_Expansions_25_25);
              if (succeeded)
              {
                MR_Word NextInst_22;
                MR_Word next_value_of_Inst_6;
                MR_Word next_value_of_STATE_VARIABLE_Expansions_0_23;

                check_hlds__mode_util__inst_lookup_3_p_0(ModuleInfo_5, InstName_21, &NextInst_22);
                // direct tailcall eliminated
                ;
                next_value_of_Inst_6 = NextInst_22;
                next_value_of_STATE_VARIABLE_Expansions_0_23 = STATE_VARIABLE_Expansions_25_25;
                Inst_6 = next_value_of_Inst_6;
                STATE_VARIABLE_Expansions_0_23 = next_value_of_STATE_VARIABLE_Expansions_0_23;
                continue;
              }
              else
              {
                *STATE_VARIABLE_Expansions_24 = STATE_VARIABLE_Expansions_0_23;
                succeeded = MR_TRUE;
              }
            }
            break;
        }
        break;
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_test__inst_list_is_ground_or_any_2_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ModuleInfo_2,
  MR_Word STATE_VARIABLE_Expansions_0_3,
  MR_Word * STATE_VARIABLE_Expansions_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Expansions_4 = STATE_VARIABLE_Expansions_0_3;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word Inst_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Insts_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Expansions_15_15;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Expansions_0_3;

      succeeded = check_hlds__inst_test__inst_is_ground_or_any_2_4_p_0(ModuleInfo_2, Inst_9, STATE_VARIABLE_Expansions_0_3, &STATE_VARIABLE_Expansions_15_15);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Insts_10;
        next_value_of_STATE_VARIABLE_Expansions_0_3 = STATE_VARIABLE_Expansions_15_15;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        STATE_VARIABLE_Expansions_0_3 = next_value_of_STATE_VARIABLE_Expansions_0_3;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_test__bound_inst_list_is_ground_or_any_2_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ModuleInfo_2,
  MR_Word STATE_VARIABLE_Expansions_0_3,
  MR_Word * STATE_VARIABLE_Expansions_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Expansions_4 = STATE_VARIABLE_Expansions_0_3;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word BoundInst_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word BoundInsts_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Args_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BoundInst_9, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Expansions_17_17;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Expansions_0_3;

      succeeded = check_hlds__inst_test__inst_list_is_ground_or_any_2_4_p_0(Args_14, ModuleInfo_2, STATE_VARIABLE_Expansions_0_3, &STATE_VARIABLE_Expansions_17_17);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = BoundInsts_10;
        next_value_of_STATE_VARIABLE_Expansions_0_3 = STATE_VARIABLE_Expansions_17_17;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        STATE_VARIABLE_Expansions_0_3 = next_value_of_STATE_VARIABLE_Expansions_0_3;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
check_hlds__inst_test__inst_is_ground_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word Inst_4)
{
  {
    MR_bool succeeded;
    MR_Word Found_5;
    MR_Word OldIsGround_6;

{
#define MR_PROC_LABEL check_hlds__inst_test__inst_is_ground_2_p_0

	MR_Word Inst;
	MR_Word Found;
	MR_Word IsGround;

	Inst =  Inst_4 ;
		{

    MR_Unsigned hash;

    hash = (MR_Unsigned) Inst;
    hash = hash >> MR_LOW_TAG_BITS;
    hash = hash % INST_IS_GROUND_CACHE_SIZE;

    if (inst_is_ground_cache[hash].iig_inst_addr == Inst) {
        Found = MR_BOOL_YES;
        IsGround = inst_is_ground_cache[hash].iig_is_ground;
    } else {
        Found = MR_BOOL_NO;
    }


		;}
#undef MR_PROC_LABEL
	 Found_5  = Found;
	 OldIsGround_6  = IsGround;
}
    switch (Found_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          succeeded = check_hlds__inst_test__inst_is_ground_mt_3_p_0(ModuleInfo_3, (MR_Word) ((MR_Unsigned) 0U), Inst_4);
          if (succeeded)
          {
{
#define MR_PROC_LABEL check_hlds__inst_test__inst_is_ground_2_p_0

	MR_Word Inst;
	MR_Word IsGround;

	Inst =  Inst_4 ;
	IsGround =  (MR_Integer) 1 ;
		{

    MR_Unsigned hash;

    hash = (MR_Unsigned) Inst;
    hash = hash >> MR_LOW_TAG_BITS;
    hash = hash % INST_IS_GROUND_CACHE_SIZE;
    /* We overwrite any existing entry in the slot. */
    inst_is_ground_cache[hash].iig_inst_addr = Inst;
    inst_is_ground_cache[hash].iig_is_ground = IsGround;


		;}
#undef MR_PROC_LABEL
}
            succeeded = MR_TRUE;
          }
          else
          {
{
#define MR_PROC_LABEL check_hlds__inst_test__inst_is_ground_2_p_0

	MR_Word Inst;
	MR_Word IsGround;

	Inst =  Inst_4 ;
	IsGround =  (MR_Integer) 0 ;
		{

    MR_Unsigned hash;

    hash = (MR_Unsigned) Inst;
    hash = hash >> MR_LOW_TAG_BITS;
    hash = hash % INST_IS_GROUND_CACHE_SIZE;
    /* We overwrite any existing entry in the slot. */
    inst_is_ground_cache[hash].iig_inst_addr = Inst;
    inst_is_ground_cache[hash].iig_is_ground = IsGround;


		;}
#undef MR_PROC_LABEL
}
            succeeded = MR_FALSE;
          }
        }
        break;
      case (MR_Integer) 1:
        succeeded = (OldIsGround_6 == (MR_Integer) 1);
        break;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_test__inst_is_ground_mt_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word MaybeType_5,
  MR_Word Inst_6)
{
  {
    MR_bool succeeded;
    MR_Word Expansions0_7;

    Expansions0_7 = mercury__set_tree234__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0));
    succeeded = ((MR_tag((MR_Word) Inst_6)) == (MR_Integer) 2);
    if (succeeded)
    {
      succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Expansions0_7, ((MR_Box) (Inst_6)));
      if (succeeded)
        succeeded = MR_TRUE;
      else
      {
        MR_Word Uniq_39 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Inst_6, (MR_Integer) 0))) & (MR_Integer) 7);
        MR_Word HOInstInfo_40 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Inst_6, (MR_Integer) 1))));
        MR_Word NextInst_50;
        MR_Word _Expansions_79;

        succeeded = check_hlds__inst_test__maybe_any_to_bound_5_p_0(MaybeType_5, ModuleInfo_4, Uniq_39, HOInstInfo_40, &NextInst_50);
        if (succeeded)
          succeeded = check_hlds__inst_test__inst_is_ground_mt_1_5_p_0(ModuleInfo_4, MaybeType_5, NextInst_50, Expansions0_7, &_Expansions_79);
      }
    }
    else
    {
      MR_Word STATE_VARIABLE_Expansions_15_19;

      succeeded = mercury__set_tree234__insert_new_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), ((MR_Box) (Inst_6)), Expansions0_7, &STATE_VARIABLE_Expansions_15_19);
      if (succeeded)
        switch (MR_tag((MR_Word) Inst_6)) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            switch (MR_unmkbody(Inst_6)) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 1:
                succeeded = MR_TRUE;
                break;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Uniq_67 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Inst_6, (MR_Integer) 0))) & (MR_Integer) 7);
              MR_Word HOInstInfo_68 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Inst_6, (MR_Integer) 1))));
              MR_Word NextInst_78;
              MR_Word _Expansions_90;

              succeeded = check_hlds__inst_test__maybe_any_to_bound_5_p_0(MaybeType_5, ModuleInfo_4, Uniq_67, HOInstInfo_68, &NextInst_78);
              if (succeeded)
                succeeded = check_hlds__inst_test__inst_is_ground_mt_1_5_p_0(ModuleInfo_4, MaybeType_5, NextInst_78, STATE_VARIABLE_Expansions_15_19, &_Expansions_90);
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Inst_6, (MR_Integer) 0))))) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 0:
                {
                  MR_Word InstResults_61 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_6, (MR_Integer) 2))));
                  MR_Word BoundInsts_62 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_6, (MR_Integer) 3))));
                  MR_Word _Expansions_92;

                  succeeded = check_hlds__inst_test__inst_results_bound_inst_list_is_ground_mt_2_6_p_0(InstResults_61, BoundInsts_62, MaybeType_5, ModuleInfo_4, STATE_VARIABLE_Expansions_15_19, &_Expansions_92);
                }
                break;
              case (MR_Integer) 1:
                succeeded = MR_TRUE;
                break;
              case (MR_Integer) 2:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_test.inst_is_ground_mt_2\'/5", (MR_String) "uninstantiated inst parameter");
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word SubInst_64 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_6, (MR_Integer) 2))));
                  MR_Word _Expansions_94;

                  succeeded = check_hlds__inst_test__inst_is_ground_mt_1_5_p_0(ModuleInfo_4, MaybeType_5, SubInst_64, STATE_VARIABLE_Expansions_15_19, &_Expansions_94);
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word InstName_65 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_6, (MR_Integer) 1))));
                  MR_Word NextInst_66;
                  MR_Word _Expansions_96;

                  check_hlds__mode_util__inst_lookup_3_p_0(ModuleInfo_4, InstName_65, &NextInst_66);
                  succeeded = check_hlds__inst_test__inst_is_ground_mt_1_5_p_0(ModuleInfo_4, MaybeType_5, NextInst_66, STATE_VARIABLE_Expansions_15_19, &_Expansions_96);
                }
                break;
            }
            break;
        }
      else
        succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_test__inst_is_ground_mt_1_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word MaybeType_7,
  MR_Word Inst_8,
  MR_Word STATE_VARIABLE_Expansions_0_12,
  MR_Word * STATE_VARIABLE_Expansions_13)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Inst_8)) == (MR_Integer) 2);

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), STATE_VARIABLE_Expansions_0_12, ((MR_Box) (Inst_8)));
      if (succeeded)
      {
        *STATE_VARIABLE_Expansions_13 = STATE_VARIABLE_Expansions_0_12;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word Uniq_35 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Inst_8, (MR_Integer) 0))) & (MR_Integer) 7);
        MR_Word HOInstInfo_36 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Inst_8, (MR_Integer) 1))));
        MR_Word NextInst_46;
        MR_Word next_value_of_Inst_8;

        succeeded = check_hlds__inst_test__maybe_any_to_bound_5_p_0(MaybeType_7, ModuleInfo_6, Uniq_35, HOInstInfo_36, &NextInst_46);
        if (succeeded)
        {
          // direct tailcall eliminated
          ;
          next_value_of_Inst_8 = NextInst_46;
          Inst_8 = next_value_of_Inst_8;
          continue;
        }
      }
    }
    else
    {
      MR_Word STATE_VARIABLE_Expansions_15_15;

      succeeded = mercury__set_tree234__insert_new_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), ((MR_Box) (Inst_8)), STATE_VARIABLE_Expansions_0_12, &STATE_VARIABLE_Expansions_15_15);
      if (succeeded)
        switch (MR_tag((MR_Word) Inst_8)) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            switch (MR_unmkbody(Inst_8)) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 1:
                {
                  *STATE_VARIABLE_Expansions_13 = STATE_VARIABLE_Expansions_15_15;
                  succeeded = MR_TRUE;
                }
                break;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Uniq_63 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Inst_8, (MR_Integer) 0))) & (MR_Integer) 7);
              MR_Word HOInstInfo_64 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Inst_8, (MR_Integer) 1))));
              MR_Word NextInst_74;
              MR_Word next_value_of_Inst_8;
              MR_Word next_value_of_STATE_VARIABLE_Expansions_0_12;

              succeeded = check_hlds__inst_test__maybe_any_to_bound_5_p_0(MaybeType_7, ModuleInfo_6, Uniq_63, HOInstInfo_64, &NextInst_74);
              if (succeeded)
              {
                // direct tailcall eliminated
                ;
                next_value_of_Inst_8 = NextInst_74;
                next_value_of_STATE_VARIABLE_Expansions_0_12 = STATE_VARIABLE_Expansions_15_15;
                Inst_8 = next_value_of_Inst_8;
                STATE_VARIABLE_Expansions_0_12 = next_value_of_STATE_VARIABLE_Expansions_0_12;
                continue;
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Inst_8, (MR_Integer) 0))))) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 0:
                {
                  MR_Word InstResults_57 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_8, (MR_Integer) 2))));
                  MR_Word BoundInsts_58 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_8, (MR_Integer) 3))));

                  succeeded = check_hlds__inst_test__inst_results_bound_inst_list_is_ground_mt_2_6_p_0(InstResults_57, BoundInsts_58, MaybeType_7, ModuleInfo_6, STATE_VARIABLE_Expansions_15_15, STATE_VARIABLE_Expansions_13);
                }
                break;
              case (MR_Integer) 1:
                {
                  *STATE_VARIABLE_Expansions_13 = STATE_VARIABLE_Expansions_15_15;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 2:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_test.inst_is_ground_mt_2\'/5", (MR_String) "uninstantiated inst parameter");
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word SubInst_60 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_8, (MR_Integer) 2))));
                  MR_Word next_value_of_Inst_8 = SubInst_60;
                  MR_Word next_value_of_STATE_VARIABLE_Expansions_0_12 = STATE_VARIABLE_Expansions_15_15;

                  // direct tailcall eliminated
                  ;
                  Inst_8 = next_value_of_Inst_8;
                  STATE_VARIABLE_Expansions_0_12 = next_value_of_STATE_VARIABLE_Expansions_0_12;
                  continue;
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word InstName_61 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_8, (MR_Integer) 1))));
                  MR_Word NextInst_62;
                  MR_Word next_value_of_Inst_8;
                  MR_Word next_value_of_STATE_VARIABLE_Expansions_0_12;

                  check_hlds__mode_util__inst_lookup_3_p_0(ModuleInfo_6, InstName_61, &NextInst_62);
                  // direct tailcall eliminated
                  ;
                  next_value_of_Inst_8 = NextInst_62;
                  next_value_of_STATE_VARIABLE_Expansions_0_12 = STATE_VARIABLE_Expansions_15_15;
                  Inst_8 = next_value_of_Inst_8;
                  STATE_VARIABLE_Expansions_0_12 = next_value_of_STATE_VARIABLE_Expansions_0_12;
                  continue;
                }
                break;
            }
            break;
        }
      else
      {
        *STATE_VARIABLE_Expansions_13 = STATE_VARIABLE_Expansions_0_12;
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_test__inst_results_bound_inst_list_is_ground_mt_2_6_p_0(
  MR_Word InstResults_7,
  MR_Word BoundInsts_8,
  MR_Word MaybeType_9,
  MR_Word ModuleInfo_10,
  MR_Word STATE_VARIABLE_Expansions_0_18,
  MR_Word * STATE_VARIABLE_Expansions_19)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) InstResults_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(InstResults_7)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            succeeded = check_hlds__inst_test__bound_inst_list_is_ground_mt_2_5_p_0(BoundInsts_8, MaybeType_9, ModuleInfo_10, STATE_VARIABLE_Expansions_0_18, STATE_VARIABLE_Expansions_19);
            break;
          case (MR_Integer) 1:
            {
              *STATE_VARIABLE_Expansions_19 = STATE_VARIABLE_Expansions_0_18;
              succeeded = MR_TRUE;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word GroundnessResult_12 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), InstResults_7, (MR_Integer) 0))) >> 2)) & (MR_Integer) 3);

          switch (GroundnessResult_12) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 2:
              succeeded = check_hlds__inst_test__bound_inst_list_is_ground_mt_2_5_p_0(BoundInsts_8, MaybeType_9, ModuleInfo_10, STATE_VARIABLE_Expansions_0_18, STATE_VARIABLE_Expansions_19);
              break;
            case (MR_Integer) 1:
              {
                *STATE_VARIABLE_Expansions_19 = STATE_VARIABLE_Expansions_0_18;
                succeeded = MR_TRUE;
              }
              break;
          }
        }
        break;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_test__inst_list_is_ground_mt_2_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word ModuleInfo_3,
  MR_Word STATE_VARIABLE_Expansions_0_4,
  MR_Word * STATE_VARIABLE_Expansions_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_Expansions_5 = STATE_VARIABLE_Expansions_0_4;
      else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_test.inst_list_is_ground_mt_2\'/5", (MR_String) "length mismatch");
      }
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_test.inst_list_is_ground_mt_2\'/5", (MR_String) "length mismatch");
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word MaybeType_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        MR_Word MaybeTypes_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        MR_Word STATE_VARIABLE_Expansions_34_34;
        MR_Word next_value_of_HeadVar__1_1;
        MR_Word next_value_of_HeadVar__2_2;
        MR_Word next_value_of_STATE_VARIABLE_Expansions_0_4;

        succeeded = check_hlds__inst_test__inst_is_ground_mt_1_5_p_0(ModuleInfo_3, MaybeType_28, Var_37, STATE_VARIABLE_Expansions_0_4, &STATE_VARIABLE_Expansions_34_34);
        if (succeeded)
        {
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__1_1 = Var_36;
          next_value_of_HeadVar__2_2 = MaybeTypes_29;
          next_value_of_STATE_VARIABLE_Expansions_0_4 = STATE_VARIABLE_Expansions_34_34;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          STATE_VARIABLE_Expansions_0_4 = next_value_of_STATE_VARIABLE_Expansions_0_4;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_test__bound_inst_list_is_ground_mt_2_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word MaybeType_2,
  MR_Word ModuleInfo_3,
  MR_Word STATE_VARIABLE_Expansions_0_4,
  MR_Word * STATE_VARIABLE_Expansions_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Expansions_5 = STATE_VARIABLE_Expansions_0_4;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word BoundInst_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word BoundInsts_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Name_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BoundInst_11, (MR_Integer) 0))));
      MR_Word Args_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BoundInst_11, (MR_Integer) 1))));
      MR_Word MaybeTypes_18;
      MR_Integer Var_21;
      MR_Word STATE_VARIABLE_Expansions_22_22;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Expansions_0_4;

      Var_21 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Args_17);
      check_hlds__type_util__maybe_get_cons_id_arg_types_5_p_0(ModuleInfo_3, MaybeType_2, Name_16, Var_21, &MaybeTypes_18);
      succeeded = check_hlds__inst_test__inst_list_is_ground_mt_2_5_p_0(Args_17, MaybeTypes_18, ModuleInfo_3, STATE_VARIABLE_Expansions_0_4, &STATE_VARIABLE_Expansions_22_22);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = BoundInsts_12;
        next_value_of_STATE_VARIABLE_Expansions_0_4 = STATE_VARIABLE_Expansions_22_22;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        STATE_VARIABLE_Expansions_0_4 = next_value_of_STATE_VARIABLE_Expansions_0_4;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
check_hlds__inst_test__maybe_any_to_bound_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ModuleInfo_7,
  MR_Word Uniq_8,
  MR_Word HeadVar__4_4,
  MR_Word * Inst_9)
{
  {
    MR_bool succeeded = (HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Type_6;
    MR_Word Constructors_10;

    if (succeeded)
    {
      succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Type_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
        succeeded = check_hlds__type_util__type_is_solver_type_2_p_0(ModuleInfo_7, Type_6);
        succeeded = !(succeeded);
        if (succeeded)
        {
          succeeded = check_hlds__type_util__type_constructors_3_p_0(ModuleInfo_7, Type_6, &Constructors_10);
          if (succeeded)
          {
            MR_Word TypeCtor_11;
            MR_Word BoundInsts0_12;
            MR_Word BoundInsts_13;
            MR_Word InstResult_14;
            MR_Word Var_17;
            MR_Word Var_18;
            MR_Word Var_19;
            MR_Word Var_20;
            MR_Word Var_21;
            MR_Word Var_22;
            MR_Word Var_23;

            parse_tree__prog_type__type_to_ctor_det_2_p_0(Type_6, &TypeCtor_11);
            check_hlds__mode_util__constructors_to_bound_any_insts_5_p_0(ModuleInfo_7, Uniq_8, TypeCtor_11, Constructors_10, &BoundInsts0_12);
            mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0), BoundInsts0_12, &BoundInsts_13);
            Var_18 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0));
            {
              Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (Var_18));
            }
            Var_20 = mercury__set__init_0_f_0((MR_Word) (&check_hlds__inst_test_scalar_common_1[0]));
            {
              Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (Var_20));
            }
            Var_22 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
            {
              Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (Var_22));
            }
            Var_23 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (TypeCtor_11)));
            {
              InstResult_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), InstResult_14, 0) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 2) << 2)) | (MR_Unsigned) ((MR_Integer) 2)));
              MR_hl_field(MR_mktag(1), InstResult_14, 1) = ((MR_Box) (Var_17));
              MR_hl_field(MR_mktag(1), InstResult_14, 2) = ((MR_Box) (Var_19));
              MR_hl_field(MR_mktag(1), InstResult_14, 3) = ((MR_Box) (Var_21));
              MR_hl_field(MR_mktag(1), InstResult_14, 4) = ((MR_Box) (Var_23));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *Inst_9 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_8));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (InstResult_14));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (BoundInsts_13));
            }
            succeeded = MR_TRUE;
          }
          else
          {
            MR_Word TypeCtorCat_31;

            TypeCtorCat_31 = check_hlds__type_util__classify_type_2_f_0(ModuleInfo_7, Type_6);
            switch (MR_tag((MR_Word) TypeCtorCat_31)) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 0:
                switch (MR_unmkbody(TypeCtorCat_31)) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 1:
                    succeeded = MR_TRUE;
                    break;
                  case (MR_Integer) 3:
                    succeeded = MR_TRUE;
                    break;
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeCtorCat_31, (MR_Integer) 0))))) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word Var_43 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), TypeCtorCat_31, (MR_Integer) 1))) & (MR_Integer) 7);

                      switch (Var_43) {
                        default:
                          succeeded = MR_FALSE;
                          break;
                        case (MR_Integer) 3:
                          succeeded = MR_TRUE;
                          break;
                        case (MR_Integer) 4:
                          succeeded = MR_TRUE;
                          break;
                        case (MR_Integer) 2:
                          succeeded = MR_TRUE;
                          break;
                      }
                    }
                    break;
                }
                break;
            }
            if (succeeded)
              succeeded = MR_FALSE;
            else
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *Inst_9 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_8));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              succeeded = MR_TRUE;
            }
          }
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_test____Unify____inst_names_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__inst_test____Unify____inst_names_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__inst_test____Compare____inst_names_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__inst_test____Compare____inst_names_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__check_hlds__inst_test__init(void)
{
}

void mercury__check_hlds__inst_test__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__inst_test__check_hlds__inst_test__type_ctor_info_inst_names_0);
}

void mercury__check_hlds__inst_test__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__inst_test__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module check_hlds.inst_test.
