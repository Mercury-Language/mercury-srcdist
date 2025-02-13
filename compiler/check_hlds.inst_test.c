/*
** Automatically generated from `inst_test.m'
** by the Mercury compiler,
** version rotd-2025-02-13
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
#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "hlds.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "multi_map.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "recompilation.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "check_hlds.inst_lookup.mih"
#include "check_hlds.inst_util.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.instmap.mih"
#include "hlds.passes_aux.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.record_uses.mih"
#include "parse_tree.module_qual.mq_info.mih"




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
check_hlds__inst_test__record_inst_is_ground_3_p_0(
  MR_Word Type_1,
  MR_Word Inst_2,
  MR_Word IsGround_3);

static void MR_CALL 
check_hlds__inst_test__lookup_inst_is_ground_4_p_0(
  MR_Word Type_1,
  MR_Word Inst_2,
  MR_Word * Found_3,
  MR_Word * IsGround_4);

static MR_Word MR_CALL 
check_hlds__inst_test__inst_contains_higher_order_2_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word Inst_6,
  MR_Word STATE_VARIABLE_Expansions_0_19);

static MR_Word MR_CALL 
check_hlds__inst_test__bound_functor_list_contains_higher_order_3_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_Word MR_CALL 
check_hlds__inst_test__inst_list_contains_higher_order_3_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_Word MR_CALL 
check_hlds__inst_test__inst_contains_any_2_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word Inst_6,
  MR_Word STATE_VARIABLE_Expansions_0_26);

static MR_Word MR_CALL 
check_hlds__inst_test__bound_functor_list_contains_any_3_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_Word MR_CALL 
check_hlds__inst_test__inst_list_contains_any_3_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
check_hlds__inst_test__inst_contains_inst_name_2_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word InstName_8,
  MR_Word Inst_9,
  MR_Word * Contains_10,
  MR_Word STATE_VARIABLE_Expansions_0_31,
  MR_Word * STATE_VARIABLE_Expansions_32);

static void MR_CALL 
check_hlds__inst_test__inst_list_contains_inst_name_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Expansions_0_5,
  MR_Word * STATE_VARIABLE_Expansions_6);

static void MR_CALL 
check_hlds__inst_test__bound_functor_list_contains_inst_name_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Expansions_0_5,
  MR_Word * STATE_VARIABLE_Expansions_6);

static MR_bool MR_CALL 
check_hlds__inst_test__bound_functor_list_is_ground_or_any_2_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
check_hlds__inst_test__bound_functor_list_is_ground_mt_3_p_0(
  MR_Word ModuleInfo_1,
  MR_Word Type_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__inst_test__inst_list_is_ground_mt_3_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__inst_test__inst_is_not_fully_unique_2_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Inst_6,
  MR_Word STATE_VARIABLE_Expansions_0_26,
  MR_Word * STATE_VARIABLE_Expansions_27);

static MR_bool MR_CALL 
check_hlds__inst_test__inst_list_is_not_fully_unique_2_4_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Expansions_0_3,
  MR_Word * STATE_VARIABLE_Expansions_4);

static MR_bool MR_CALL 
check_hlds__inst_test__bound_functor_list_is_not_fully_unique_2_4_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Expansions_0_3,
  MR_Word * STATE_VARIABLE_Expansions_4);

static MR_bool MR_CALL 
check_hlds__inst_test__inst_is_not_partly_unique_2_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Inst_6,
  MR_Word STATE_VARIABLE_Expansions_0_23,
  MR_Word * STATE_VARIABLE_Expansions_24);

static MR_bool MR_CALL 
check_hlds__inst_test__inst_list_is_not_partly_unique_2_4_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Expansions_0_3,
  MR_Word * STATE_VARIABLE_Expansions_4);

static MR_bool MR_CALL 
check_hlds__inst_test__bound_functor_list_is_not_partly_unique_2_4_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Expansions_0_3,
  MR_Word * STATE_VARIABLE_Expansions_4);

static MR_bool MR_CALL 
check_hlds__inst_test__inst_is_mostly_unique_2_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Inst_6,
  MR_Word STATE_VARIABLE_Expansions_0_25,
  MR_Word * STATE_VARIABLE_Expansions_26);

static MR_bool MR_CALL 
check_hlds__inst_test__inst_list_is_mostly_unique_2_4_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Expansions_0_3,
  MR_Word * STATE_VARIABLE_Expansions_4);

static MR_bool MR_CALL 
check_hlds__inst_test__bound_functor_list_is_mostly_unique_2_4_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
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
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Expansions_0_3,
  MR_Word * STATE_VARIABLE_Expansions_4);

static MR_bool MR_CALL 
check_hlds__inst_test__bound_functor_list_is_unique_2_4_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Expansions_0_3,
  MR_Word * STATE_VARIABLE_Expansions_4);

static MR_bool MR_CALL 
check_hlds__inst_test__inst_is_ground_or_any_2_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Inst_6,
  MR_Word STATE_VARIABLE_Expansions_0_20,
  MR_Word * STATE_VARIABLE_Expansions_21);

static MR_bool MR_CALL 
check_hlds__inst_test__inst_list_is_ground_or_any_2_4_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Expansions_0_3,
  MR_Word * STATE_VARIABLE_Expansions_4);

static MR_bool MR_CALL 
check_hlds__inst_test__bound_functor_list_is_ground_or_any_2_4_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Expansions_0_3,
  MR_Word * STATE_VARIABLE_Expansions_4);

static MR_bool MR_CALL 
check_hlds__inst_test__inst_is_ground_mt_1_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Type_7,
  MR_Word Inst_8,
  MR_Word STATE_VARIABLE_Expansions_0_12,
  MR_Word * STATE_VARIABLE_Expansions_13);

static MR_bool MR_CALL 
check_hlds__inst_test__inst_results_bound_functor_list_is_ground_mt_2_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word Type_8,
  MR_Word InstResults_9,
  MR_Word BoundFunctors_10,
  MR_Word STATE_VARIABLE_Expansions_0_18,
  MR_Word * STATE_VARIABLE_Expansions_19);

static MR_bool MR_CALL 
check_hlds__inst_test__inst_list_is_ground_mt_2_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Expansions_0_4,
  MR_Word * STATE_VARIABLE_Expansions_5);

static MR_bool MR_CALL 
check_hlds__inst_test__bound_functor_list_is_ground_mt_2_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word Type_2,
  MR_Word HeadVar__3_3,
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
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "check_hlds.inst_test.mh"
#include "io.stream_ops.mh"


static const MR_FA_TypeInfo_Struct1 check_hlds__inst_test__set_ordlist__ti_set_ordlist_1parse_tree__prog_data__type_ctor_info_inst_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0) }
};

const MR_TypeCtorInfo_Struct check_hlds__inst_test__check_hlds__inst_test__type_ctor_info_inst_names_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__inst_test____Unify____inst_names_0_0_10001)),
  ((MR_Box) (check_hlds__inst_test____Compare____inst_names_0_0_10001)),
  (MR_String) "check_hlds.inst_test",
  (MR_String) "inst_names",
  { NULL },
  { (MR_PseudoTypeInfo) (&check_hlds__inst_test__set_ordlist__ti_set_ordlist_1parse_tree__prog_data__type_ctor_info_inst_name_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static void MR_CALL 
check_hlds__inst_test____Compare____inst_names_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__inst_test_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
check_hlds__inst_test____Unify____inst_names_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__inst_test_scalar_common_1[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
check_hlds__inst_test__record_inst_is_ground_3_p_0(
  MR_Word Type_1,
  MR_Word Inst_2,
  MR_Word IsGround_3)
{
{
#define MR_PROC_LABEL check_hlds__inst_test__record_inst_is_ground_3_p_0

	MR_Word Type;
	MR_Word Inst;
	MR_Word IsGround;

	Type = Type_1 ;
	Inst = Inst_2 ;
	IsGround = IsGround_3 ;
		{

    MR_Unsigned hash;

    hash = (MR_Unsigned) Type << 5u | (MR_Unsigned) Inst;
    hash = hash >> MR_LOW_TAG_BITS;
    hash = hash % INST_IS_GROUND_CACHE_SIZE;
    // We overwrite any existing entry in the slot.
    inst_is_ground_cache[hash].iig_type_addr = Type;
    inst_is_ground_cache[hash].iig_inst_addr = Inst;
    inst_is_ground_cache[hash].iig_is_ground = IsGround;


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
check_hlds__inst_test__lookup_inst_is_ground_4_p_0(
  MR_Word Type_1,
  MR_Word Inst_2,
  MR_Word * Found_3,
  MR_Word * IsGround_4)
{
{
#define MR_PROC_LABEL check_hlds__inst_test__lookup_inst_is_ground_4_p_0

	MR_Word Type;
	MR_Word Inst;
	MR_Word Found;
	MR_Word IsGround;

	Type = Type_1 ;
	Inst = Inst_2 ;
		{

    MR_Unsigned hash;

    hash = (MR_Unsigned) Type << 5u | (MR_Unsigned) Inst;
    hash = hash >> MR_LOW_TAG_BITS;
    hash = hash % INST_IS_GROUND_CACHE_SIZE;

    if (
        inst_is_ground_cache[hash].iig_type_addr == Type &&
        inst_is_ground_cache[hash].iig_inst_addr == Inst)
    {
        Found = MR_BOOL_YES;
        IsGround = inst_is_ground_cache[hash].iig_is_ground;
    } else {
        Found = MR_BOOL_NO;
        IsGround = MR_NO;
    }


		;}
#undef MR_PROC_LABEL
	*Found_3  = Found;
	*IsGround_4  = IsGround;
}
}

MR_bool MR_CALL 
check_hlds__inst_test__inst_contains_higher_order_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word Inst_4)
{
  MR_bool succeeded;
  MR_Word Expansions_5;
  MR_Word Var_6;

  mercury__set__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0), &Expansions_5);
  Var_6 = check_hlds__inst_test__inst_contains_higher_order_2_3_f_0(ModuleInfo_3, Inst_4, Expansions_5);
  succeeded = (Var_6 == (MR_Integer) 1);
  return succeeded;
}

static MR_Word MR_CALL 
check_hlds__inst_test__inst_contains_higher_order_2_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word Inst_6,
  MR_Word STATE_VARIABLE_Expansions_0_19)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word ContainsHO_8;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Inst_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ContainsHO_8 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        {
          MR_Word HOInstInfo_26 = ((MR_Word) ((MR_hl_field(1, Inst_6, (MR_Integer) 1))));

          if ((HOInstInfo_26 == (MR_Word) ((MR_Unsigned) 0U)))
            ContainsHO_8 = (MR_Integer) 0;
          else
            ContainsHO_8 = (MR_Integer) 1;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word BoundFunctors_14 = ((MR_Word) ((MR_hl_field(2, Inst_6, (MR_Integer) 2))));

          ContainsHO_8 = check_hlds__inst_test__bound_functor_list_contains_higher_order_3_f_0(ModuleInfo_5, BoundFunctors_14, STATE_VARIABLE_Expansions_0_19);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Inst_6, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word InstName_16 = ((MR_Word) ((MR_hl_field(3, Inst_6, (MR_Integer) 1))));

              succeeded = mercury__set__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0), ((MR_Box) (InstName_16)), STATE_VARIABLE_Expansions_0_19);
              if (succeeded)
                ContainsHO_8 = (MR_Integer) 0;
              else
              {
                MR_Word SubInst_17;
                MR_Word STATE_VARIABLE_Expansions_22_22;
                MR_Word next_value_of_Inst_6;
                MR_Word next_value_of_STATE_VARIABLE_Expansions_0_19;

                mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0), ((MR_Box) (InstName_16)), STATE_VARIABLE_Expansions_0_19, &STATE_VARIABLE_Expansions_22_22);
                check_hlds__inst_lookup__inst_lookup_3_p_0(ModuleInfo_5, InstName_16, &SubInst_17);
                // direct tailcall eliminated
                ;
                next_value_of_Inst_6 = SubInst_17;
                next_value_of_STATE_VARIABLE_Expansions_0_19 = STATE_VARIABLE_Expansions_22_22;
                Inst_6 = next_value_of_Inst_6;
                STATE_VARIABLE_Expansions_0_19 = next_value_of_STATE_VARIABLE_Expansions_0_19;
                continue;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word SubInst_23 = ((MR_Word) ((MR_hl_field(3, Inst_6, (MR_Integer) 2))));
              MR_Word next_value_of_Inst_6 = SubInst_23;

              // direct tailcall eliminated
              ;
              Inst_6 = next_value_of_Inst_6;
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word HOInstInfo_10 = ((MR_Word) ((MR_hl_field(3, Inst_6, (MR_Integer) 2))));

              if ((HOInstInfo_10 == (MR_Word) ((MR_Unsigned) 0U)))
                ContainsHO_8 = (MR_Integer) 0;
              else
                ContainsHO_8 = (MR_Integer) 1;
            }
            break;
          case (MR_Integer) 3:
            mercury__require__unexpected_2_p_0((MR_String) "function \140check_hlds.inst_test.inst_contains_higher_order_2\'/3", (MR_String) "uninstantiated inst parameter");
            break;
        }
        break;
    }
    return ContainsHO_8;
    break;
  }
}

static MR_Word MR_CALL 
check_hlds__inst_test__bound_functor_list_contains_higher_order_3_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_Word HeadVar__4_4;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__4_4 = (MR_Integer) 0;
    else
    {
      MR_Word BoundFunctor_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word BoundFunctors_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgInsts_13 = ((MR_Word) ((MR_hl_field(0, BoundFunctor_8, (MR_Integer) 1))));
      MR_Word HeadContainsHO_14;

      HeadContainsHO_14 = check_hlds__inst_test__inst_list_contains_higher_order_3_f_0(HeadVar__1_1, ArgInsts_13, HeadVar__3_3);
      switch (HeadContainsHO_14) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word next_value_of_HeadVar__2_2 = BoundFunctors_9;

            // direct tailcall eliminated
            ;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            continue;
          }
          break;
        case (MR_Integer) 1:
          HeadVar__4_4 = (MR_Integer) 1;
          break;
      }
    }
    return HeadVar__4_4;
    break;
  }
}

static MR_Word MR_CALL 
check_hlds__inst_test__inst_list_contains_higher_order_3_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_Word HeadVar__4_4;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__4_4 = (MR_Integer) 0;
    else
    {
      MR_Word Inst_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Insts_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word HeadContainsHO_12;

      HeadContainsHO_12 = check_hlds__inst_test__inst_contains_higher_order_2_3_f_0(HeadVar__1_1, Inst_8, HeadVar__3_3);
      switch (HeadContainsHO_12) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word next_value_of_HeadVar__2_2 = Insts_9;

            // direct tailcall eliminated
            ;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            continue;
          }
          break;
        case (MR_Integer) 1:
          HeadVar__4_4 = (MR_Integer) 1;
          break;
      }
    }
    return HeadVar__4_4;
    break;
  }
}

MR_Word MR_CALL 
check_hlds__inst_test__inst_may_restrict_cons_ids_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word Inst_5)
{
  while (MR_TRUE)
  {
    MR_Word MayRestrict_6;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Inst_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        MayRestrict_6 = (MR_Integer) 0;
        break;
      case (MR_Integer) 2:
        MayRestrict_6 = (MR_Integer) 1;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Inst_5, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word InstName_17 = ((MR_Word) ((MR_hl_field(3, Inst_5, (MR_Integer) 1))));
              MR_Word NewInst_18;
              MR_Word next_value_of_Inst_5;

              check_hlds__inst_lookup__inst_lookup_3_p_0(ModuleInfo_4, InstName_17, &NewInst_18);
              // direct tailcall eliminated
              ;
              next_value_of_Inst_5 = NewInst_18;
              Inst_5 = next_value_of_Inst_5;
              continue;
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            MayRestrict_6 = (MR_Integer) 1;
            break;
        }
        break;
    }
    return MayRestrict_6;
    break;
  }
}

MR_bool MR_CALL 
check_hlds__inst_test__var_inst_contains_any_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word Instmap_5,
  MR_Word Var_6)
{
  MR_bool succeeded;
  MR_Word Inst_7;
  MR_Word Expansions_8;
  MR_Word Var_9;

  hlds__instmap__instmap_lookup_var_3_p_0(Instmap_5, Var_6, &Inst_7);
  mercury__set__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0), &Expansions_8);
  Var_9 = check_hlds__inst_test__inst_contains_any_2_3_f_0(ModuleInfo_4, Inst_7, Expansions_8);
  succeeded = (Var_9 == (MR_Integer) 1);
  return succeeded;
}

MR_bool MR_CALL 
check_hlds__inst_test__inst_contains_any_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word Inst_4)
{
  MR_bool succeeded;
  MR_Word Expansions_5;
  MR_Word Var_6;

  mercury__set__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0), &Expansions_5);
  Var_6 = check_hlds__inst_test__inst_contains_any_2_3_f_0(ModuleInfo_3, Inst_4, Expansions_5);
  succeeded = (Var_6 == (MR_Integer) 1);
  return succeeded;
}

static MR_Word MR_CALL 
check_hlds__inst_test__inst_contains_any_2_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word Inst_6,
  MR_Word STATE_VARIABLE_Expansions_0_26)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word ContainsAny_8;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Inst_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        ContainsAny_8 = (MR_Integer) 0;
        break;
      case (MR_Integer) 2:
        {
          MR_Word InstResults_12 = ((MR_Word) ((MR_hl_field(2, Inst_6, (MR_Integer) 1))));
          MR_Word BoundFunctors_13 = ((MR_Word) ((MR_hl_field(2, Inst_6, (MR_Integer) 2))));

          switch (MR_tag((MR_Word) InstResults_12)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(InstResults_12)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  ContainsAny_8 = check_hlds__inst_test__bound_functor_list_contains_any_3_f_0(ModuleInfo_5, BoundFunctors_13, STATE_VARIABLE_Expansions_0_26);
                  break;
                case (MR_Integer) 1:
                  ContainsAny_8 = (MR_Integer) 0;
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word AnyResults_15 = ((MR_Unsigned) ((MR_hl_field(1, InstResults_12, (MR_Integer) 0))) & (MR_Integer) 3);

                switch (AnyResults_15) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 2:
                    ContainsAny_8 = check_hlds__inst_test__bound_functor_list_contains_any_3_f_0(ModuleInfo_5, BoundFunctors_13, STATE_VARIABLE_Expansions_0_26);
                    break;
                  case (MR_Integer) 1:
                    ContainsAny_8 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 0:
                    ContainsAny_8 = (MR_Integer) 0;
                    break;
                }
              }
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Inst_6, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word InstName_21 = ((MR_Word) ((MR_hl_field(3, Inst_6, (MR_Integer) 1))));

              succeeded = mercury__set__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0), ((MR_Box) (InstName_21)), STATE_VARIABLE_Expansions_0_26);
              if (succeeded)
                ContainsAny_8 = (MR_Integer) 0;
              else
              {
                MR_Word SubInst_22;
                MR_Word STATE_VARIABLE_Expansions_29_29;
                MR_Word next_value_of_Inst_6;
                MR_Word next_value_of_STATE_VARIABLE_Expansions_0_26;

                mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0), ((MR_Box) (InstName_21)), STATE_VARIABLE_Expansions_0_26, &STATE_VARIABLE_Expansions_29_29);
                check_hlds__inst_lookup__inst_lookup_3_p_0(ModuleInfo_5, InstName_21, &SubInst_22);
                // direct tailcall eliminated
                ;
                next_value_of_Inst_6 = SubInst_22;
                next_value_of_STATE_VARIABLE_Expansions_0_26 = STATE_VARIABLE_Expansions_29_29;
                Inst_6 = next_value_of_Inst_6;
                STATE_VARIABLE_Expansions_0_26 = next_value_of_STATE_VARIABLE_Expansions_0_26;
                continue;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word SubInst_30 = ((MR_Word) ((MR_hl_field(3, Inst_6, (MR_Integer) 2))));
              MR_Word next_value_of_Inst_6 = SubInst_30;

              // direct tailcall eliminated
              ;
              Inst_6 = next_value_of_Inst_6;
              continue;
            }
            break;
          case (MR_Integer) 2:
            ContainsAny_8 = (MR_Integer) 1;
            break;
          case (MR_Integer) 3:
            mercury__require__unexpected_2_p_0((MR_String) "function \140check_hlds.inst_test.inst_contains_any_2\'/3", (MR_String) "uninstantiated inst parameter");
            break;
        }
        break;
    }
    return ContainsAny_8;
    break;
  }
}

static MR_Word MR_CALL 
check_hlds__inst_test__bound_functor_list_contains_any_3_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_Word HeadVar__4_4;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__4_4 = (MR_Integer) 0;
    else
    {
      MR_Word BoundFunctor_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word BoundFunctors_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgInsts_13 = ((MR_Word) ((MR_hl_field(0, BoundFunctor_8, (MR_Integer) 1))));
      MR_Word HeadContainsAny_14;

      HeadContainsAny_14 = check_hlds__inst_test__inst_list_contains_any_3_f_0(HeadVar__1_1, ArgInsts_13, HeadVar__3_3);
      switch (HeadContainsAny_14) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word next_value_of_HeadVar__2_2 = BoundFunctors_9;

            // direct tailcall eliminated
            ;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            continue;
          }
          break;
        case (MR_Integer) 1:
          HeadVar__4_4 = (MR_Integer) 1;
          break;
      }
    }
    return HeadVar__4_4;
    break;
  }
}

static MR_Word MR_CALL 
check_hlds__inst_test__inst_list_contains_any_3_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_Word HeadVar__4_4;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__4_4 = (MR_Integer) 0;
    else
    {
      MR_Word Inst_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Insts_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word HeadContainsAny_12;

      HeadContainsAny_12 = check_hlds__inst_test__inst_contains_any_2_3_f_0(HeadVar__1_1, Inst_8, HeadVar__3_3);
      switch (HeadContainsAny_12) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word next_value_of_HeadVar__2_2 = Insts_9;

            // direct tailcall eliminated
            ;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            continue;
          }
          break;
        case (MR_Integer) 1:
          HeadVar__4_4 = (MR_Integer) 1;
          break;
      }
    }
    return HeadVar__4_4;
    break;
  }
}

MR_bool MR_CALL 
check_hlds__inst_test__maybe_any_to_bound_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Type_7,
  MR_Word Uniq_8,
  MR_Word HeadVar__4_4,
  MR_Word * Inst_9)
{
  MR_bool succeeded = (HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U));
  MR_Word Constructors_10;

  if (succeeded)
  {
    succeeded = check_hlds__type_util__type_is_solver_type_2_p_0(ModuleInfo_6, Type_7);
    succeeded = !(succeeded);
    if (succeeded)
    {
      succeeded = check_hlds__type_util__type_constructors_3_p_0(ModuleInfo_6, Type_7, &Constructors_10);
      if (succeeded)
      {
        MR_Word TypeCtor_11;
        MR_Word BoundFunctors0_12;
        MR_Word BoundFunctors_13;
        MR_Word InstResult_14;
        MR_Word Var_17;
        MR_Word Var_18;
        MR_Word Var_19;
        MR_Word Var_20;
        MR_Word Var_21;
        MR_Word Var_22;
        MR_Word Var_23;

        parse_tree__prog_type__type_to_ctor_det_2_p_0(Type_7, &TypeCtor_11);
        check_hlds__mode_util__constructors_to_bound_any_insts_5_p_0(ModuleInfo_6, Uniq_8, TypeCtor_11, Constructors_10, &BoundFunctors0_12);
        mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_functor_0), BoundFunctors0_12, &BoundFunctors_13);
        Var_18 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0));
        {
          Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_17, 0) = ((MR_Box) (Var_18));
        }
        Var_20 = mercury__set__init_0_f_0((MR_Word) (&check_hlds__inst_test_scalar_common_1[0]));
        {
          Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_19, 0) = ((MR_Box) (Var_20));
        }
        Var_22 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
        {
          Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_21, 0) = ((MR_Box) (Var_22));
        }
        Var_23 = (MR_Word) (MR_mkword(1, (MR_Word) (TypeCtor_11)));
        {
          InstResult_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, InstResult_14, 0) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 2) << 2)) | (MR_Unsigned) ((MR_Integer) 2)));
          MR_hl_field(1, InstResult_14, 1) = ((MR_Box) (Var_17));
          MR_hl_field(1, InstResult_14, 2) = ((MR_Box) (Var_19));
          MR_hl_field(1, InstResult_14, 3) = ((MR_Box) (Var_21));
          MR_hl_field(1, InstResult_14, 4) = ((MR_Box) (Var_23));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *Inst_9 = base;
          MR_hl_field(2, base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_8));
          MR_hl_field(2, base, 1) = ((MR_Box) (InstResult_14));
          MR_hl_field(2, base, 2) = ((MR_Box) (BoundFunctors_13));
        }
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word TypeCtorCat_29;

        TypeCtorCat_29 = check_hlds__type_util__classify_type_2_f_0(ModuleInfo_6, Type_7);
        switch (MR_tag((MR_Word) TypeCtorCat_29)) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            switch (MR_unmkbody(TypeCtorCat_29)) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 2:
                succeeded = MR_TRUE;
                break;
              case (MR_Integer) 4:
                succeeded = MR_TRUE;
                break;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, TypeCtorCat_29, (MR_Integer) 0))))) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Var_39 = ((MR_Unsigned) ((MR_hl_field(3, TypeCtorCat_29, (MR_Integer) 1))) & (MR_Integer) 7);

                  switch (Var_39) {
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
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Inst_9 = base;
            MR_hl_field(1, base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_8));
            MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          succeeded = MR_TRUE;
        }
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
check_hlds__inst_test__inst_contains_inst_name_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word InstName_5,
  MR_Word Inst_6)
{
  MR_bool succeeded;
  MR_Word Expansions0_7;
  MR_Word Var_11;
  MR_Word _Expansions_8;

  mercury__set__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0), &Expansions0_7);
  check_hlds__inst_test__inst_contains_inst_name_2_6_p_0(ModuleInfo_4, InstName_5, Inst_6, &Var_11, Expansions0_7, &_Expansions_8);
  succeeded = ((MR_Integer) 1 == Var_11);
  return succeeded;
}

static void MR_CALL 
check_hlds__inst_test__inst_contains_inst_name_2_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word InstName_8,
  MR_Word Inst_9,
  MR_Word * Contains_10,
  MR_Word STATE_VARIABLE_Expansions_0_31,
  MR_Word * STATE_VARIABLE_Expansions_32)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Inst_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        {
          *Contains_10 = (MR_Integer) 0;
          *STATE_VARIABLE_Expansions_32 = STATE_VARIABLE_Expansions_0_31;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word InstResults_22 = ((MR_Word) ((MR_hl_field(2, Inst_9, (MR_Integer) 1))));
          MR_Word ArgInsts_23 = ((MR_Word) ((MR_hl_field(2, Inst_9, (MR_Integer) 2))));

          switch (MR_tag((MR_Word) InstResults_22)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(InstResults_22)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  check_hlds__inst_test__bound_functor_list_contains_inst_name_6_p_0(ModuleInfo_7, InstName_8, ArgInsts_23, Contains_10, STATE_VARIABLE_Expansions_0_31, STATE_VARIABLE_Expansions_32);
                  break;
                case (MR_Integer) 1:
                  {
                    *Contains_10 = (MR_Integer) 0;
                    *STATE_VARIABLE_Expansions_32 = STATE_VARIABLE_Expansions_0_31;
                  }
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word InstNamesResult_26 = ((MR_Word) ((MR_hl_field(1, InstResults_22, (MR_Integer) 1))));

                if ((InstNamesResult_26 == (MR_Word) ((MR_Unsigned) 0U)))
                  check_hlds__inst_test__bound_functor_list_contains_inst_name_6_p_0(ModuleInfo_7, InstName_8, ArgInsts_23, Contains_10, STATE_VARIABLE_Expansions_0_31, STATE_VARIABLE_Expansions_32);
                else
                {
                  MR_Word InstNameSet_30 = ((MR_Word) ((MR_hl_field(1, InstNamesResult_26, (MR_Integer) 0))));

                  succeeded = mercury__set__contains_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0), InstNameSet_30, ((MR_Box) (InstName_8)));
                  if (succeeded)
                    check_hlds__inst_test__bound_functor_list_contains_inst_name_6_p_0(ModuleInfo_7, InstName_8, ArgInsts_23, Contains_10, STATE_VARIABLE_Expansions_0_31, STATE_VARIABLE_Expansions_32);
                  else
                  {
                    *Contains_10 = (MR_Integer) 0;
                    *STATE_VARIABLE_Expansions_32 = STATE_VARIABLE_Expansions_0_31;
                  }
                }
              }
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Inst_9, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ThisInstName_19 = ((MR_Word) ((MR_hl_field(3, Inst_9, (MR_Integer) 1))));

              succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstName_8, ThisInstName_19);
              if (succeeded)
              {
                *Contains_10 = (MR_Integer) 1;
                *STATE_VARIABLE_Expansions_32 = STATE_VARIABLE_Expansions_0_31;
              }
              else
              {
                MR_Word STATE_VARIABLE_Expansions_34_34;

                succeeded = mercury__set__insert_new_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0), ((MR_Box) (ThisInstName_19)), STATE_VARIABLE_Expansions_0_31, &STATE_VARIABLE_Expansions_34_34);
                if (succeeded)
                {
                  MR_Word ThisInst_20;
                  MR_Word STATE_VARIABLE_Expansions_35_35;
                  MR_Word next_value_of_Inst_9;
                  MR_Word next_value_of_STATE_VARIABLE_Expansions_0_31;

                  check_hlds__inst_lookup__inst_lookup_3_p_0(ModuleInfo_7, ThisInstName_19, &ThisInst_20);
                  mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0), ((MR_Box) (ThisInstName_19)), STATE_VARIABLE_Expansions_34_34, &STATE_VARIABLE_Expansions_35_35);
                  // direct tailcall eliminated
                  ;
                  next_value_of_Inst_9 = ThisInst_20;
                  next_value_of_STATE_VARIABLE_Expansions_0_31 = STATE_VARIABLE_Expansions_35_35;
                  Inst_9 = next_value_of_Inst_9;
                  STATE_VARIABLE_Expansions_0_31 = next_value_of_STATE_VARIABLE_Expansions_0_31;
                  continue;
                }
                else
                {
                  *Contains_10 = (MR_Integer) 0;
                  *STATE_VARIABLE_Expansions_32 = STATE_VARIABLE_Expansions_0_31;
                }
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word SubInst_18 = ((MR_Word) ((MR_hl_field(3, Inst_9, (MR_Integer) 2))));
              MR_Word next_value_of_Inst_9 = SubInst_18;

              // direct tailcall eliminated
              ;
              Inst_9 = next_value_of_Inst_9;
              continue;
            }
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            {
              *Contains_10 = (MR_Integer) 0;
              *STATE_VARIABLE_Expansions_32 = STATE_VARIABLE_Expansions_0_31;
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
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__4_4 = (MR_Integer) 0;
      *STATE_VARIABLE_Expansions_6 = STATE_VARIABLE_Expansions_0_5;
    }
    else
    {
      MR_Word Inst_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Insts_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word Contains1_18;
      MR_Word STATE_VARIABLE_Expansions_21_21;

      check_hlds__inst_test__inst_contains_inst_name_2_6_p_0(HeadVar__1_1, HeadVar__2_2, Inst_14, &Contains1_18, STATE_VARIABLE_Expansions_0_5, &STATE_VARIABLE_Expansions_21_21);
      switch (Contains1_18) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word next_value_of_HeadVar__3_3 = Insts_15;
            MR_Word next_value_of_STATE_VARIABLE_Expansions_0_5 = STATE_VARIABLE_Expansions_21_21;

            // direct tailcall eliminated
            ;
            HeadVar__3_3 = next_value_of_HeadVar__3_3;
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
check_hlds__inst_test__bound_functor_list_contains_inst_name_6_p_0(
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
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__4_4 = (MR_Integer) 0;
      *STATE_VARIABLE_Expansions_6 = STATE_VARIABLE_Expansions_0_5;
    }
    else
    {
      MR_Word BoundFunctor_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word BoundFunctors_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgInsts_19 = ((MR_Word) ((MR_hl_field(0, BoundFunctor_14, (MR_Integer) 1))));
      MR_Word Contains1_20;
      MR_Word STATE_VARIABLE_Expansions_23_23;

      check_hlds__inst_test__inst_list_contains_inst_name_6_p_0(HeadVar__1_1, HeadVar__2_2, ArgInsts_19, &Contains1_20, STATE_VARIABLE_Expansions_0_5, &STATE_VARIABLE_Expansions_23_23);
      switch (Contains1_20) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word next_value_of_HeadVar__3_3 = BoundFunctors_15;
            MR_Word next_value_of_STATE_VARIABLE_Expansions_0_5 = STATE_VARIABLE_Expansions_23_23;

            // direct tailcall eliminated
            ;
            HeadVar__3_3 = next_value_of_HeadVar__3_3;
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
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      if (!((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U))))
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_test.inst_list_is_ground_or_any_or_dead\'/3", (MR_String) "length mismatch");
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word Var_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_test.inst_list_is_ground_or_any_or_dead\'/3", (MR_String) "length mismatch");
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word Inst_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
        MR_Word Insts_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
        MR_Word next_value_of_HeadVar__2_2;
        MR_Word next_value_of_HeadVar__3_3;

        switch (Var_21) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 0:
            {
              MR_Word Expansions0_22;
              MR_Word _Expansions_23;

              mercury__set__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), &Expansions0_22);
              succeeded = check_hlds__inst_test__inst_is_ground_or_any_2_4_p_0(ModuleInfo_1, Inst_18, Expansions0_22, &_Expansions_23);
            }
            break;
        }
        if (succeeded)
        {
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Var_20;
          next_value_of_HeadVar__3_3 = Insts_19;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
check_hlds__inst_test__inst_list_is_ground_or_dead_4_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U));

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      succeeded = (HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        succeeded = (HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U));
    }
    if (!(succeeded))
    {
      MR_Word HeadLive_10;
      MR_Word TailLives_11;
      MR_Word HeadType_12;
      MR_Word TailTypes_13;
      MR_Word HeadInst_14;
      MR_Word TailInsts_15;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        HeadLive_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
        TailLives_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
        succeeded = (HeadVar__3_3 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          HeadType_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
          TailTypes_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
          succeeded = (HeadVar__4_4 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            HeadInst_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
            TailInsts_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
          }
        }
      }
      if (succeeded)
      {
        MR_Word next_value_of_HeadVar__2_2;
        MR_Word next_value_of_HeadVar__3_3;
        MR_Word next_value_of_HeadVar__4_4;

        switch (HeadLive_10) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 0:
            succeeded = check_hlds__inst_test__inst_is_ground_3_p_0(ModuleInfo_1, HeadType_12, HeadInst_14);
            break;
        }
        if (succeeded)
        {
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = TailLives_11;
          next_value_of_HeadVar__3_3 = TailTypes_13;
          next_value_of_HeadVar__4_4 = TailInsts_15;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          HeadVar__4_4 = next_value_of_HeadVar__4_4;
          continue;
        }
      }
      else
      {
        succeeded = (HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = (HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
            succeeded = (HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U));
        }
        if (!(succeeded))
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_test.inst_list_is_ground_or_dead\'/4", (MR_String) "length mismatch");
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
check_hlds__inst_test__inst_list_is_ground_3_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      if (!((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U))))
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_test.inst_list_is_ground\'/3", (MR_String) "length mismatch");
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word Var_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_test.inst_list_is_ground\'/3", (MR_String) "length mismatch");
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word Inst_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
        MR_Word Insts_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
        MR_Word next_value_of_HeadVar__2_2;
        MR_Word next_value_of_HeadVar__3_3;

        succeeded = check_hlds__inst_test__inst_is_ground_3_p_0(ModuleInfo_1, Var_21, Inst_18);
        if (succeeded)
        {
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Var_20;
          next_value_of_HeadVar__3_3 = Insts_19;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
check_hlds__inst_test__bound_functor_list_is_free_2_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    {
      MR_Word BoundFunctor_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word BoundFunctors_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgInsts_8 = ((MR_Word) ((MR_hl_field(0, BoundFunctor_5, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;

      succeeded = check_hlds__inst_test__inst_list_is_free_2_p_0(ModuleInfo_1, ArgInsts_8);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = BoundFunctors_6;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
check_hlds__inst_test__inst_list_is_free_2_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    {
      MR_Word Inst_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Insts_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;

      succeeded = check_hlds__inst_test__inst_is_free_2_p_0(ModuleInfo_1, Inst_5);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = Insts_6;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
check_hlds__inst_test__bound_functor_list_is_not_fully_unique_2_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    {
      MR_Word BoundFunctor_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word BoundFunctors_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgInsts_8 = ((MR_Word) ((MR_hl_field(0, BoundFunctor_5, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;

      succeeded = check_hlds__inst_test__inst_list_is_not_fully_unique_2_p_0(ModuleInfo_1, ArgInsts_8);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = BoundFunctors_6;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
check_hlds__inst_test__inst_list_is_not_fully_unique_2_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    {
      MR_Word Inst_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Insts_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Expansions0_7;
      MR_Word _Expansions_8;
      MR_Word next_value_of_HeadVar__2_2;

      mercury__set__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), &Expansions0_7);
      succeeded = check_hlds__inst_test__inst_is_not_fully_unique_2_4_p_0(ModuleInfo_1, Inst_5, Expansions0_7, &_Expansions_8);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = Insts_6;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
check_hlds__inst_test__bound_functor_list_is_not_partly_unique_2_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    {
      MR_Word BoundFunctor_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word BoundFunctors_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgInsts_8 = ((MR_Word) ((MR_hl_field(0, BoundFunctor_5, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;

      succeeded = check_hlds__inst_test__inst_list_is_not_partly_unique_2_p_0(ModuleInfo_1, ArgInsts_8);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = BoundFunctors_6;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
check_hlds__inst_test__inst_list_is_not_partly_unique_2_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    {
      MR_Word Inst_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Insts_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Expansions0_7;
      MR_Word _Expansions_8;
      MR_Word next_value_of_HeadVar__2_2;

      mercury__set__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), &Expansions0_7);
      succeeded = check_hlds__inst_test__inst_is_not_partly_unique_2_4_p_0(ModuleInfo_1, Inst_5, Expansions0_7, &_Expansions_8);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = Insts_6;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
check_hlds__inst_test__bound_functor_list_is_mostly_unique_2_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    {
      MR_Word BoundFunctor_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word BoundFunctors_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgInsts_8 = ((MR_Word) ((MR_hl_field(0, BoundFunctor_5, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;

      succeeded = check_hlds__inst_test__inst_list_is_mostly_unique_2_p_0(ModuleInfo_1, ArgInsts_8);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = BoundFunctors_6;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
check_hlds__inst_test__inst_list_is_mostly_unique_2_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    {
      MR_Word Inst_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Insts_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Expansions0_7;
      MR_Word _Expansions_8;
      MR_Word next_value_of_HeadVar__2_2;

      mercury__set__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), &Expansions0_7);
      succeeded = check_hlds__inst_test__inst_is_mostly_unique_2_4_p_0(ModuleInfo_1, Inst_5, Expansions0_7, &_Expansions_8);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = Insts_6;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
check_hlds__inst_test__bound_functor_list_is_unique_2_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    {
      MR_Word BoundFunctor_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word BoundFunctors_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgInsts_8 = ((MR_Word) ((MR_hl_field(0, BoundFunctor_5, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;

      succeeded = check_hlds__inst_test__inst_list_is_unique_2_p_0(ModuleInfo_1, ArgInsts_8);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = BoundFunctors_6;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
check_hlds__inst_test__inst_list_is_unique_2_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    {
      MR_Word Inst_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Insts_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Expansions0_7;
      MR_Word _Expansions_8;
      MR_Word next_value_of_HeadVar__2_2;

      mercury__set__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), &Expansions0_7);
      succeeded = check_hlds__inst_test__inst_is_unique_2_4_p_0(ModuleInfo_1, Inst_5, Expansions0_7, &_Expansions_8);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = Insts_6;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
check_hlds__inst_test__inst_results_bound_functor_list_is_ground_or_any_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word InstResults_5,
  MR_Word BoundFunctors_6)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) InstResults_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(InstResults_5)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          succeeded = check_hlds__inst_test__bound_functor_list_is_ground_or_any_2_p_0(ModuleInfo_4, BoundFunctors_6);
          break;
        case (MR_Integer) 1:
          succeeded = MR_TRUE;
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word GroundnessResult_7 = ((((MR_Unsigned) ((MR_hl_field(1, InstResults_5, (MR_Integer) 0))) >> 2)) & (MR_Integer) 3);

        switch (GroundnessResult_7) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 2:
          case (MR_Integer) 0:
            succeeded = check_hlds__inst_test__bound_functor_list_is_ground_or_any_2_p_0(ModuleInfo_4, BoundFunctors_6);
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

static MR_bool MR_CALL 
check_hlds__inst_test__bound_functor_list_is_ground_or_any_2_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    {
      MR_Word BoundFunctor_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word BoundFunctors_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgInsts_8 = ((MR_Word) ((MR_hl_field(0, BoundFunctor_5, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;

      succeeded = check_hlds__inst_test__inst_list_is_ground_or_any_2_p_0(ModuleInfo_1, ArgInsts_8);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = BoundFunctors_6;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
check_hlds__inst_test__inst_list_is_ground_or_any_2_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    {
      MR_Word Inst_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Insts_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Expansions0_7;
      MR_Word _Expansions_8;
      MR_Word next_value_of_HeadVar__2_2;

      mercury__set__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), &Expansions0_7);
      succeeded = check_hlds__inst_test__inst_is_ground_or_any_2_4_p_0(ModuleInfo_1, Inst_5, Expansions0_7, &_Expansions_8);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = Insts_6;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
check_hlds__inst_test__inst_results_bound_functor_list_is_ground_mt_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Type_6,
  MR_Word InstResults_7,
  MR_Word BoundFunctors_8)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) InstResults_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(InstResults_7)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          succeeded = check_hlds__inst_test__bound_functor_list_is_ground_mt_3_p_0(ModuleInfo_5, Type_6, BoundFunctors_8);
          break;
        case (MR_Integer) 1:
          succeeded = MR_TRUE;
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word GroundnessResult_9 = ((((MR_Unsigned) ((MR_hl_field(1, InstResults_7, (MR_Integer) 0))) >> 2)) & (MR_Integer) 3);

        switch (GroundnessResult_9) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 2:
            succeeded = check_hlds__inst_test__bound_functor_list_is_ground_mt_3_p_0(ModuleInfo_5, Type_6, BoundFunctors_8);
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

MR_bool MR_CALL 
check_hlds__inst_test__inst_results_bound_functor_list_is_ground_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Type_6,
  MR_Word InstResults_7,
  MR_Word BoundFunctors_8)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) InstResults_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(InstResults_7)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          succeeded = check_hlds__inst_test__bound_functor_list_is_ground_mt_3_p_0(ModuleInfo_5, Type_6, BoundFunctors_8);
          break;
        case (MR_Integer) 1:
          succeeded = MR_TRUE;
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word GroundnessResult_9 = ((((MR_Unsigned) ((MR_hl_field(1, InstResults_7, (MR_Integer) 0))) >> 2)) & (MR_Integer) 3);

        switch (GroundnessResult_9) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 2:
            succeeded = check_hlds__inst_test__bound_functor_list_is_ground_mt_3_p_0(ModuleInfo_5, Type_6, BoundFunctors_8);
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

static MR_bool MR_CALL 
check_hlds__inst_test__bound_functor_list_is_ground_mt_3_p_0(
  MR_Word ModuleInfo_1,
  MR_Word Type_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    {
      MR_Word BoundFunctor_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word BoundFunctors_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgTypes_10;
      MR_Word ArgInsts_12;
      MR_Word next_value_of_HeadVar__3_3;

      check_hlds__inst_util__get_cons_id_arg_types_for_bound_functor_4_p_0(ModuleInfo_1, Type_2, BoundFunctor_8, &ArgTypes_10);
      ArgInsts_12 = ((MR_Word) ((MR_hl_field(0, BoundFunctor_8, (MR_Integer) 1))));
      succeeded = check_hlds__inst_test__inst_list_is_ground_mt_3_p_0(ModuleInfo_1, ArgTypes_10, ArgInsts_12);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__3_3 = BoundFunctors_9;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_test__inst_list_is_ground_mt_3_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      if (!((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U))))
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_test.inst_list_is_ground_mt\'/3", (MR_String) "length mismatch");
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word Var_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_test.inst_list_is_ground_mt\'/3", (MR_String) "length mismatch");
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word Inst_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
        MR_Word Insts_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
        MR_Word Expansions0_22;
        MR_Word next_value_of_HeadVar__2_2;
        MR_Word next_value_of_HeadVar__3_3;

        Expansions0_22 = mercury__set_tree234__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0));
        succeeded = ((((MR_tag((MR_Word) Inst_18)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Inst_18, (MR_Integer) 0)))) == (MR_Integer) 2)));
        if (succeeded)
          succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Expansions0_22, ((MR_Box) (Inst_18)));
        else
        {
          MR_Word STATE_VARIABLE_Expansions_15_27;

          succeeded = mercury__set_tree234__insert_new_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), ((MR_Box) (Inst_18)), Expansions0_22, &STATE_VARIABLE_Expansions_15_27);
          if (succeeded)
            switch (MR_tag((MR_Word) Inst_18)) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 0:
                switch (MR_unmkbody(Inst_18)) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 1:
                    succeeded = MR_TRUE;
                    break;
                }
                break;
              case (MR_Integer) 1:
                succeeded = MR_TRUE;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word InstResults_49 = ((MR_Word) ((MR_hl_field(2, Inst_18, (MR_Integer) 1))));
                  MR_Word BoundFunctors_50 = ((MR_Word) ((MR_hl_field(2, Inst_18, (MR_Integer) 2))));
                  MR_Word _Expansions_67;

                  succeeded = check_hlds__inst_test__inst_results_bound_functor_list_is_ground_mt_2_6_p_0(ModuleInfo_1, Var_21, InstResults_49, BoundFunctors_50, STATE_VARIABLE_Expansions_15_27, &_Expansions_67);
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, Inst_18, (MR_Integer) 0))))) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 0:
                    {
                      MR_Word InstName_53 = ((MR_Word) ((MR_hl_field(3, Inst_18, (MR_Integer) 1))));
                      MR_Word NextInst_54;
                      MR_Word _Expansions_71;

                      check_hlds__inst_lookup__inst_lookup_3_p_0(ModuleInfo_1, InstName_53, &NextInst_54);
                      succeeded = check_hlds__inst_test__inst_is_ground_mt_1_5_p_0(ModuleInfo_1, Var_21, NextInst_54, STATE_VARIABLE_Expansions_15_27, &_Expansions_71);
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word SubInst_52 = ((MR_Word) ((MR_hl_field(3, Inst_18, (MR_Integer) 2))));
                      MR_Word _Expansions_69;

                      succeeded = check_hlds__inst_test__inst_is_ground_mt_1_5_p_0(ModuleInfo_1, Var_21, SubInst_52, STATE_VARIABLE_Expansions_15_27, &_Expansions_69);
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_test.inst_is_ground_mt_2\'/5", (MR_String) "uninstantiated inst parameter");
                      succeeded = MR_TRUE;
                    }
                    break;
                }
                break;
            }
          else
            succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Var_20;
          next_value_of_HeadVar__3_3 = Insts_19;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
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
      case (MR_Integer) 2:
        {
          *Functors_6 = ((MR_Word) ((MR_hl_field(2, Inst_5, (MR_Integer) 2))));
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Inst_5, (MR_Integer) 0))))) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            {
              MR_Word InstName_12 = ((MR_Word) ((MR_hl_field(3, Inst_5, (MR_Integer) 1))));
              MR_Word NextInst_13;
              MR_Word next_value_of_Inst_5;

              check_hlds__inst_lookup__inst_lookup_3_p_0(ModuleInfo_4, InstName_12, &NextInst_13);
              // direct tailcall eliminated
              ;
              next_value_of_Inst_5 = NextInst_13;
              Inst_5 = next_value_of_Inst_5;
              continue;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word SubInst_11 = ((MR_Word) ((MR_hl_field(3, Inst_5, (MR_Integer) 2))));
              MR_Word next_value_of_Inst_5 = SubInst_11;

              // direct tailcall eliminated
              ;
              Inst_5 = next_value_of_Inst_5;
              continue;
            }
            break;
          case (MR_Integer) 3:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_test.inst_is_bound_to_functors\'/3", (MR_String) "uninstantiated inst parameter");
              succeeded = MR_TRUE;
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
      case (MR_Integer) 1:
        succeeded = MR_TRUE;
        break;
      case (MR_Integer) 2:
        succeeded = MR_TRUE;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Inst_4, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word InstName_15 = ((MR_Word) ((MR_hl_field(3, Inst_4, (MR_Integer) 1))));
              MR_Word NextInst_16;
              MR_Word next_value_of_Inst_4;

              check_hlds__inst_lookup__inst_lookup_3_p_0(ModuleInfo_3, InstName_15, &NextInst_16);
              // direct tailcall eliminated
              ;
              next_value_of_Inst_4 = NextInst_16;
              Inst_4 = next_value_of_Inst_4;
              continue;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word SubInst_14 = ((MR_Word) ((MR_hl_field(3, Inst_4, (MR_Integer) 2))));
              MR_Word next_value_of_Inst_4 = SubInst_14;

              // direct tailcall eliminated
              ;
              Inst_4 = next_value_of_Inst_4;
              continue;
            }
            break;
          case (MR_Integer) 2:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 3:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_test.inst_is_bound\'/2", (MR_String) "uninstantiated inst parameter");
              succeeded = MR_TRUE;
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
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Inst_4, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word InstName_15 = ((MR_Word) ((MR_hl_field(3, Inst_4, (MR_Integer) 1))));
              MR_Word NextInst_16;
              MR_Word next_value_of_Inst_4;

              check_hlds__inst_lookup__inst_lookup_3_p_0(ModuleInfo_3, InstName_15, &NextInst_16);
              // direct tailcall eliminated
              ;
              next_value_of_Inst_4 = NextInst_16;
              Inst_4 = next_value_of_Inst_4;
              continue;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word SubInst_14 = ((MR_Word) ((MR_hl_field(3, Inst_4, (MR_Integer) 2))));
              MR_Word next_value_of_Inst_4 = SubInst_14;

              // direct tailcall eliminated
              ;
              Inst_4 = next_value_of_Inst_4;
              continue;
            }
            break;
          case (MR_Integer) 2:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 3:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_test.inst_is_any\'/2", (MR_String) "uninstantiated inst parameter");
              succeeded = MR_TRUE;
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
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Inst_4, (MR_Integer) 0))))) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            {
              MR_Word InstName_15 = ((MR_Word) ((MR_hl_field(3, Inst_4, (MR_Integer) 1))));
              MR_Word NextInst_16;
              MR_Word next_value_of_Inst_4;

              check_hlds__inst_lookup__inst_lookup_3_p_0(ModuleInfo_3, InstName_15, &NextInst_16);
              // direct tailcall eliminated
              ;
              next_value_of_Inst_4 = NextInst_16;
              Inst_4 = next_value_of_Inst_4;
              continue;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word SubInst_14 = ((MR_Word) ((MR_hl_field(3, Inst_4, (MR_Integer) 2))));
              MR_Word next_value_of_Inst_4 = SubInst_14;

              // direct tailcall eliminated
              ;
              Inst_4 = next_value_of_Inst_4;
              continue;
            }
            break;
          case (MR_Integer) 3:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_test.inst_is_free\'/2", (MR_String) "uninstantiated inst parameter");
              succeeded = MR_TRUE;
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
      case (MR_Integer) 1:
        {
          MR_Word Var_32 = ((MR_Unsigned) ((MR_hl_field(1, Inst_4, (MR_Integer) 0))) & (MR_Integer) 7);

          switch (Var_32) {
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
          MR_Word Var_30 = ((MR_Unsigned) ((MR_hl_field(2, Inst_4, (MR_Integer) 0))) & (MR_Integer) 7);

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
        switch (((MR_Integer) ((MR_hl_field(3, Inst_4, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word InstName_16 = ((MR_Word) ((MR_hl_field(3, Inst_4, (MR_Integer) 1))));
              MR_Word NextInst_17;
              MR_Word next_value_of_Inst_4;

              check_hlds__inst_lookup__inst_lookup_3_p_0(ModuleInfo_3, InstName_16, &NextInst_17);
              // direct tailcall eliminated
              ;
              next_value_of_Inst_4 = NextInst_17;
              Inst_4 = next_value_of_Inst_4;
              continue;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word SubInst_15 = ((MR_Word) ((MR_hl_field(3, Inst_4, (MR_Integer) 2))));
              MR_Word next_value_of_Inst_4 = SubInst_15;

              // direct tailcall eliminated
              ;
              Inst_4 = next_value_of_Inst_4;
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_27 = ((MR_Unsigned) ((MR_hl_field(3, Inst_4, (MR_Integer) 1))) & (MR_Integer) 7);

              switch (Var_27) {
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
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_test.inst_is_clobbered\'/2", (MR_String) "uninstantiated inst parameter");
              succeeded = MR_TRUE;
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
  MR_bool succeeded;
  MR_Word Expansions0_5;
  MR_Word _Expansions_6;

  mercury__set__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), &Expansions0_5);
  succeeded = check_hlds__inst_test__inst_is_not_fully_unique_2_4_p_0(ModuleInfo_3, Inst_4, Expansions0_5, &_Expansions_6);
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__inst_test__inst_is_not_fully_unique_2_4_p_0(
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
      default: /*NOTREACHED*/ MR_assert(0);
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
          MR_Word Var_41 = ((MR_Unsigned) ((MR_hl_field(1, Inst_6, (MR_Integer) 0))) & (MR_Integer) 7);

          switch (Var_41) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 2:
              {
                *STATE_VARIABLE_Expansions_27 = STATE_VARIABLE_Expansions_0_26;
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 0:
              {
                *STATE_VARIABLE_Expansions_27 = STATE_VARIABLE_Expansions_0_26;
                succeeded = MR_TRUE;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Uniq_12 = ((MR_Unsigned) ((MR_hl_field(2, Inst_6, (MR_Integer) 0))) & (MR_Integer) 7);
          MR_Word InstResult_13 = ((MR_Word) ((MR_hl_field(2, Inst_6, (MR_Integer) 1))));
          MR_Word BoundFunctors_14 = ((MR_Word) ((MR_hl_field(2, Inst_6, (MR_Integer) 2))));

          switch (Uniq_12) {
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
            switch (MR_tag((MR_Word) InstResult_13)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(InstResult_13)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    succeeded = check_hlds__inst_test__bound_functor_list_is_not_fully_unique_2_4_p_0(ModuleInfo_5, BoundFunctors_14, STATE_VARIABLE_Expansions_0_26, STATE_VARIABLE_Expansions_27);
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
                succeeded = check_hlds__inst_test__bound_functor_list_is_not_fully_unique_2_4_p_0(ModuleInfo_5, BoundFunctors_14, STATE_VARIABLE_Expansions_0_26, STATE_VARIABLE_Expansions_27);
                break;
            }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Inst_6, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word InstName_24 = ((MR_Word) ((MR_hl_field(3, Inst_6, (MR_Integer) 1))));
              MR_Word STATE_VARIABLE_Expansions_36_36;

              succeeded = mercury__set__insert_new_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), ((MR_Box) (Inst_6)), STATE_VARIABLE_Expansions_0_26, &STATE_VARIABLE_Expansions_36_36);
              if (succeeded)
              {
                MR_Word NextInst_25;
                MR_Word next_value_of_Inst_6;
                MR_Word next_value_of_STATE_VARIABLE_Expansions_0_26;

                check_hlds__inst_lookup__inst_lookup_3_p_0(ModuleInfo_5, InstName_24, &NextInst_25);
                // direct tailcall eliminated
                ;
                next_value_of_Inst_6 = NextInst_25;
                next_value_of_STATE_VARIABLE_Expansions_0_26 = STATE_VARIABLE_Expansions_36_36;
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
          case (MR_Integer) 1:
            {
              MR_Word SubInst_23 = ((MR_Word) ((MR_hl_field(3, Inst_6, (MR_Integer) 2))));
              MR_Word next_value_of_Inst_6 = SubInst_23;

              // direct tailcall eliminated
              ;
              Inst_6 = next_value_of_Inst_6;
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_39 = ((MR_Unsigned) ((MR_hl_field(3, Inst_6, (MR_Integer) 1))) & (MR_Integer) 7);

              switch (Var_39) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 2:
                  {
                    *STATE_VARIABLE_Expansions_27 = STATE_VARIABLE_Expansions_0_26;
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    *STATE_VARIABLE_Expansions_27 = STATE_VARIABLE_Expansions_0_26;
                    succeeded = MR_TRUE;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_test.inst_is_not_fully_unique_2\'/4", (MR_String) "uninstantiated inst parameter");
              succeeded = MR_TRUE;
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
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Expansions_0_3,
  MR_Word * STATE_VARIABLE_Expansions_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Expansions_4 = STATE_VARIABLE_Expansions_0_3;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word Inst_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Insts_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Expansions_15_15;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_Expansions_0_3;

      succeeded = check_hlds__inst_test__inst_is_not_fully_unique_2_4_p_0(ModuleInfo_1, Inst_10, STATE_VARIABLE_Expansions_0_3, &STATE_VARIABLE_Expansions_15_15);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = Insts_11;
        next_value_of_STATE_VARIABLE_Expansions_0_3 = STATE_VARIABLE_Expansions_15_15;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        STATE_VARIABLE_Expansions_0_3 = next_value_of_STATE_VARIABLE_Expansions_0_3;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_test__bound_functor_list_is_not_fully_unique_2_4_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Expansions_0_3,
  MR_Word * STATE_VARIABLE_Expansions_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Expansions_4 = STATE_VARIABLE_Expansions_0_3;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word BoundFunctor_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word BoundFunctors_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgInsts_14 = ((MR_Word) ((MR_hl_field(0, BoundFunctor_10, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Expansions_17_17;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_Expansions_0_3;

      succeeded = check_hlds__inst_test__inst_list_is_not_fully_unique_2_4_p_0(ModuleInfo_1, ArgInsts_14, STATE_VARIABLE_Expansions_0_3, &STATE_VARIABLE_Expansions_17_17);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = BoundFunctors_11;
        next_value_of_STATE_VARIABLE_Expansions_0_3 = STATE_VARIABLE_Expansions_17_17;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
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
  MR_bool succeeded;
  MR_Word Expansions0_5;
  MR_Word _Expansions_6;

  mercury__set__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), &Expansions0_5);
  succeeded = check_hlds__inst_test__inst_is_not_partly_unique_2_4_p_0(ModuleInfo_3, Inst_4, Expansions0_5, &_Expansions_6);
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__inst_test__inst_is_not_partly_unique_2_4_p_0(
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
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Inst_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *STATE_VARIABLE_Expansions_24 = STATE_VARIABLE_Expansions_0_23;
              succeeded = MR_TRUE;
            }
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
          MR_Word Var_26 = ((MR_Unsigned) ((MR_hl_field(1, Inst_6, (MR_Integer) 0))) & (MR_Integer) 7);

          succeeded = (Var_26 == (MR_Integer) 0);
          if (succeeded)
          {
            *STATE_VARIABLE_Expansions_24 = STATE_VARIABLE_Expansions_0_23;
            succeeded = MR_TRUE;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word InstResult_10 = ((MR_Word) ((MR_hl_field(2, Inst_6, (MR_Integer) 1))));
          MR_Word BoundFunctors_11 = ((MR_Word) ((MR_hl_field(2, Inst_6, (MR_Integer) 2))));
          MR_Word Var_27 = ((MR_Unsigned) ((MR_hl_field(2, Inst_6, (MR_Integer) 0))) & (MR_Integer) 7);

          succeeded = (Var_27 == (MR_Integer) 0);
          if (succeeded)
            switch (MR_tag((MR_Word) InstResult_10)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(InstResult_10)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    succeeded = check_hlds__inst_test__bound_functor_list_is_not_partly_unique_2_4_p_0(ModuleInfo_5, BoundFunctors_11, STATE_VARIABLE_Expansions_0_23, STATE_VARIABLE_Expansions_24);
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
                succeeded = check_hlds__inst_test__bound_functor_list_is_not_partly_unique_2_4_p_0(ModuleInfo_5, BoundFunctors_11, STATE_VARIABLE_Expansions_0_23, STATE_VARIABLE_Expansions_24);
                break;
            }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Inst_6, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word InstName_21 = ((MR_Word) ((MR_hl_field(3, Inst_6, (MR_Integer) 1))));
              MR_Word STATE_VARIABLE_Expansions_32_32;

              succeeded = mercury__set__insert_new_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), ((MR_Box) (Inst_6)), STATE_VARIABLE_Expansions_0_23, &STATE_VARIABLE_Expansions_32_32);
              if (succeeded)
              {
                MR_Word NextInst_22;
                MR_Word next_value_of_Inst_6;
                MR_Word next_value_of_STATE_VARIABLE_Expansions_0_23;

                check_hlds__inst_lookup__inst_lookup_3_p_0(ModuleInfo_5, InstName_21, &NextInst_22);
                // direct tailcall eliminated
                ;
                next_value_of_Inst_6 = NextInst_22;
                next_value_of_STATE_VARIABLE_Expansions_0_23 = STATE_VARIABLE_Expansions_32_32;
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
          case (MR_Integer) 1:
            {
              MR_Word SubInst_20 = ((MR_Word) ((MR_hl_field(3, Inst_6, (MR_Integer) 2))));
              MR_Word next_value_of_Inst_6 = SubInst_20;

              // direct tailcall eliminated
              ;
              Inst_6 = next_value_of_Inst_6;
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_25 = ((MR_Unsigned) ((MR_hl_field(3, Inst_6, (MR_Integer) 1))) & (MR_Integer) 7);

              succeeded = (Var_25 == (MR_Integer) 0);
              if (succeeded)
              {
                *STATE_VARIABLE_Expansions_24 = STATE_VARIABLE_Expansions_0_23;
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_test.inst_is_not_partly_unique_2\'/4", (MR_String) "uninstantiated inst parameter");
              succeeded = MR_TRUE;
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
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Expansions_0_3,
  MR_Word * STATE_VARIABLE_Expansions_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Expansions_4 = STATE_VARIABLE_Expansions_0_3;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word Inst_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Insts_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Expansions_15_15;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_Expansions_0_3;

      succeeded = check_hlds__inst_test__inst_is_not_partly_unique_2_4_p_0(ModuleInfo_1, Inst_10, STATE_VARIABLE_Expansions_0_3, &STATE_VARIABLE_Expansions_15_15);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = Insts_11;
        next_value_of_STATE_VARIABLE_Expansions_0_3 = STATE_VARIABLE_Expansions_15_15;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        STATE_VARIABLE_Expansions_0_3 = next_value_of_STATE_VARIABLE_Expansions_0_3;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_test__bound_functor_list_is_not_partly_unique_2_4_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Expansions_0_3,
  MR_Word * STATE_VARIABLE_Expansions_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Expansions_4 = STATE_VARIABLE_Expansions_0_3;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word BoundFunctor_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word BoundFunctors_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgInsts_14 = ((MR_Word) ((MR_hl_field(0, BoundFunctor_10, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Expansions_17_17;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_Expansions_0_3;

      succeeded = check_hlds__inst_test__inst_list_is_not_partly_unique_2_4_p_0(ModuleInfo_1, ArgInsts_14, STATE_VARIABLE_Expansions_0_3, &STATE_VARIABLE_Expansions_17_17);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = BoundFunctors_11;
        next_value_of_STATE_VARIABLE_Expansions_0_3 = STATE_VARIABLE_Expansions_17_17;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
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
  MR_bool succeeded;
  MR_Word Expansions0_5;
  MR_Word _Expansions_6;

  mercury__set__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), &Expansions0_5);
  succeeded = check_hlds__inst_test__inst_is_mostly_unique_2_4_p_0(ModuleInfo_3, Inst_4, Expansions0_5, &_Expansions_6);
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__inst_test__inst_is_mostly_unique_2_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Inst_6,
  MR_Word STATE_VARIABLE_Expansions_0_25,
  MR_Word * STATE_VARIABLE_Expansions_26)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Inst_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Inst_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *STATE_VARIABLE_Expansions_26 = STATE_VARIABLE_Expansions_0_25;
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 1:
            {
              *STATE_VARIABLE_Expansions_26 = STATE_VARIABLE_Expansions_0_25;
              succeeded = MR_TRUE;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_41 = ((MR_Unsigned) ((MR_hl_field(1, Inst_6, (MR_Integer) 0))) & (MR_Integer) 7);

          switch (Var_41) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 2:
              {
                *STATE_VARIABLE_Expansions_26 = STATE_VARIABLE_Expansions_0_25;
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 1:
              {
                *STATE_VARIABLE_Expansions_26 = STATE_VARIABLE_Expansions_0_25;
                succeeded = MR_TRUE;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word InstResults_12 = ((MR_Word) ((MR_hl_field(2, Inst_6, (MR_Integer) 1))));
          MR_Word BoundFunctors_13 = ((MR_Word) ((MR_hl_field(2, Inst_6, (MR_Integer) 2))));
          MR_Word Var_31 = ((MR_Unsigned) ((MR_hl_field(2, Inst_6, (MR_Integer) 0))) & (MR_Integer) 7);

          succeeded = (Var_31 == (MR_Integer) 1);
          if (succeeded)
          {
            if ((((InstResults_12 == (MR_Word) ((MR_Unsigned) 0U))) || (((MR_tag((MR_Word) InstResults_12)) == (MR_Integer) 1))))
              succeeded = check_hlds__inst_test__bound_functor_list_is_mostly_unique_2_4_p_0(ModuleInfo_5, BoundFunctors_13, STATE_VARIABLE_Expansions_0_25, STATE_VARIABLE_Expansions_26);
            else
              succeeded = MR_FALSE;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Inst_6, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word InstName_23 = ((MR_Word) ((MR_hl_field(3, Inst_6, (MR_Integer) 1))));
              MR_Word STATE_VARIABLE_Expansions_36_36;

              succeeded = mercury__set__insert_new_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), ((MR_Box) (Inst_6)), STATE_VARIABLE_Expansions_0_25, &STATE_VARIABLE_Expansions_36_36);
              if (succeeded)
              {
                MR_Word NextInst_24;
                MR_Word next_value_of_Inst_6;
                MR_Word next_value_of_STATE_VARIABLE_Expansions_0_25;

                check_hlds__inst_lookup__inst_lookup_3_p_0(ModuleInfo_5, InstName_23, &NextInst_24);
                // direct tailcall eliminated
                ;
                next_value_of_Inst_6 = NextInst_24;
                next_value_of_STATE_VARIABLE_Expansions_0_25 = STATE_VARIABLE_Expansions_36_36;
                Inst_6 = next_value_of_Inst_6;
                STATE_VARIABLE_Expansions_0_25 = next_value_of_STATE_VARIABLE_Expansions_0_25;
                continue;
              }
              else
              {
                *STATE_VARIABLE_Expansions_26 = STATE_VARIABLE_Expansions_0_25;
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word SubInst_22 = ((MR_Word) ((MR_hl_field(3, Inst_6, (MR_Integer) 2))));
              MR_Word next_value_of_Inst_6 = SubInst_22;

              // direct tailcall eliminated
              ;
              Inst_6 = next_value_of_Inst_6;
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_39 = ((MR_Unsigned) ((MR_hl_field(3, Inst_6, (MR_Integer) 1))) & (MR_Integer) 7);

              switch (Var_39) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 2:
                  {
                    *STATE_VARIABLE_Expansions_26 = STATE_VARIABLE_Expansions_0_25;
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    *STATE_VARIABLE_Expansions_26 = STATE_VARIABLE_Expansions_0_25;
                    succeeded = MR_TRUE;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_test.inst_is_mostly_unique_2\'/4", (MR_String) "uninstantiated inst parameter");
              succeeded = MR_TRUE;
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
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Expansions_0_3,
  MR_Word * STATE_VARIABLE_Expansions_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Expansions_4 = STATE_VARIABLE_Expansions_0_3;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word Inst_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Insts_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Expansions_15_15;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_Expansions_0_3;

      succeeded = check_hlds__inst_test__inst_is_mostly_unique_2_4_p_0(ModuleInfo_1, Inst_10, STATE_VARIABLE_Expansions_0_3, &STATE_VARIABLE_Expansions_15_15);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = Insts_11;
        next_value_of_STATE_VARIABLE_Expansions_0_3 = STATE_VARIABLE_Expansions_15_15;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        STATE_VARIABLE_Expansions_0_3 = next_value_of_STATE_VARIABLE_Expansions_0_3;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_test__bound_functor_list_is_mostly_unique_2_4_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Expansions_0_3,
  MR_Word * STATE_VARIABLE_Expansions_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Expansions_4 = STATE_VARIABLE_Expansions_0_3;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word BoundFunctor_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word BoundFunctors_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgInsts_14 = ((MR_Word) ((MR_hl_field(0, BoundFunctor_10, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Expansions_17_17;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_Expansions_0_3;

      succeeded = check_hlds__inst_test__inst_list_is_mostly_unique_2_4_p_0(ModuleInfo_1, ArgInsts_14, STATE_VARIABLE_Expansions_0_3, &STATE_VARIABLE_Expansions_17_17);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = BoundFunctors_11;
        next_value_of_STATE_VARIABLE_Expansions_0_3 = STATE_VARIABLE_Expansions_17_17;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
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
  MR_bool succeeded;
  MR_Word Expansions0_5;
  MR_Word _Expansions_6;

  mercury__set__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), &Expansions0_5);
  succeeded = check_hlds__inst_test__inst_is_unique_2_4_p_0(ModuleInfo_3, Inst_4, Expansions0_5, &_Expansions_6);
  return succeeded;
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
      default: /*NOTREACHED*/ MR_assert(0);
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
      case (MR_Integer) 1:
        {
          MR_Word Var_47 = ((MR_Unsigned) ((MR_hl_field(1, Inst_6, (MR_Integer) 0))) & (MR_Integer) 7);

          succeeded = (Var_47 == (MR_Integer) 1);
          if (succeeded)
          {
            *STATE_VARIABLE_Expansions_28 = STATE_VARIABLE_Expansions_0_27;
            succeeded = MR_TRUE;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word InstResults_14 = ((MR_Word) ((MR_hl_field(2, Inst_6, (MR_Integer) 1))));
          MR_Word BoundFunctors_15 = ((MR_Word) ((MR_hl_field(2, Inst_6, (MR_Integer) 2))));
          MR_Word Var_45 = ((MR_Unsigned) ((MR_hl_field(2, Inst_6, (MR_Integer) 0))) & (MR_Integer) 7);

          succeeded = (Var_45 == (MR_Integer) 1);
          if (succeeded)
          {
            if ((((InstResults_14 == (MR_Word) ((MR_Unsigned) 0U))) || (((MR_tag((MR_Word) InstResults_14)) == (MR_Integer) 1))))
              succeeded = check_hlds__inst_test__bound_functor_list_is_unique_2_4_p_0(ModuleInfo_5, BoundFunctors_15, STATE_VARIABLE_Expansions_0_27, STATE_VARIABLE_Expansions_28);
            else
              succeeded = MR_FALSE;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Inst_6, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word InstName_25 = ((MR_Word) ((MR_hl_field(3, Inst_6, (MR_Integer) 1))));
              MR_Word STATE_VARIABLE_Expansions_39_39;

              succeeded = mercury__set__insert_new_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), ((MR_Box) (Inst_6)), STATE_VARIABLE_Expansions_0_27, &STATE_VARIABLE_Expansions_39_39);
              if (succeeded)
              {
                MR_Word NextInst_26;
                MR_Word next_value_of_Inst_6;
                MR_Word next_value_of_STATE_VARIABLE_Expansions_0_27;

                check_hlds__inst_lookup__inst_lookup_3_p_0(ModuleInfo_5, InstName_25, &NextInst_26);
                // direct tailcall eliminated
                ;
                next_value_of_Inst_6 = NextInst_26;
                next_value_of_STATE_VARIABLE_Expansions_0_27 = STATE_VARIABLE_Expansions_39_39;
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
          case (MR_Integer) 1:
            {
              MR_Word SubInst_24 = ((MR_Word) ((MR_hl_field(3, Inst_6, (MR_Integer) 2))));
              MR_Word next_value_of_Inst_6 = SubInst_24;

              // direct tailcall eliminated
              ;
              Inst_6 = next_value_of_Inst_6;
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_42 = ((MR_Unsigned) ((MR_hl_field(3, Inst_6, (MR_Integer) 1))) & (MR_Integer) 7);

              succeeded = (Var_42 == (MR_Integer) 1);
              if (succeeded)
              {
                *STATE_VARIABLE_Expansions_28 = STATE_VARIABLE_Expansions_0_27;
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_test.inst_is_unique_2\'/4", (MR_String) "uninstantiated inst parameter");
              succeeded = MR_TRUE;
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
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Expansions_0_3,
  MR_Word * STATE_VARIABLE_Expansions_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Expansions_4 = STATE_VARIABLE_Expansions_0_3;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word Inst_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Insts_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Expansions_15_15;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_Expansions_0_3;

      succeeded = check_hlds__inst_test__inst_is_unique_2_4_p_0(ModuleInfo_1, Inst_10, STATE_VARIABLE_Expansions_0_3, &STATE_VARIABLE_Expansions_15_15);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = Insts_11;
        next_value_of_STATE_VARIABLE_Expansions_0_3 = STATE_VARIABLE_Expansions_15_15;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        STATE_VARIABLE_Expansions_0_3 = next_value_of_STATE_VARIABLE_Expansions_0_3;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_test__bound_functor_list_is_unique_2_4_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Expansions_0_3,
  MR_Word * STATE_VARIABLE_Expansions_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Expansions_4 = STATE_VARIABLE_Expansions_0_3;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word BoundFunctor_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word BoundFunctors_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgInsts_14 = ((MR_Word) ((MR_hl_field(0, BoundFunctor_10, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Expansions_17_17;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_Expansions_0_3;

      succeeded = check_hlds__inst_test__inst_list_is_unique_2_4_p_0(ModuleInfo_1, ArgInsts_14, STATE_VARIABLE_Expansions_0_3, &STATE_VARIABLE_Expansions_17_17);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = BoundFunctors_11;
        next_value_of_STATE_VARIABLE_Expansions_0_3 = STATE_VARIABLE_Expansions_17_17;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
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
  MR_bool succeeded;
  MR_Word Expansions0_5;
  MR_Word _Expansions_6;

  mercury__set__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), &Expansions0_5);
  succeeded = check_hlds__inst_test__inst_is_ground_or_any_2_4_p_0(ModuleInfo_3, Inst_4, Expansions0_5, &_Expansions_6);
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__inst_test__inst_is_ground_or_any_2_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Inst_6,
  MR_Word STATE_VARIABLE_Expansions_0_20,
  MR_Word * STATE_VARIABLE_Expansions_21)
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
              *STATE_VARIABLE_Expansions_21 = STATE_VARIABLE_Expansions_0_20;
              succeeded = MR_TRUE;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          *STATE_VARIABLE_Expansions_21 = STATE_VARIABLE_Expansions_0_20;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word InstResults_13 = ((MR_Word) ((MR_hl_field(2, Inst_6, (MR_Integer) 1))));
          MR_Word BoundFunctors_14 = ((MR_Word) ((MR_hl_field(2, Inst_6, (MR_Integer) 2))));

          switch (MR_tag((MR_Word) InstResults_13)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(InstResults_13)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  succeeded = check_hlds__inst_test__bound_functor_list_is_ground_or_any_2_4_p_0(ModuleInfo_5, BoundFunctors_14, STATE_VARIABLE_Expansions_0_20, STATE_VARIABLE_Expansions_21);
                  break;
                case (MR_Integer) 1:
                  {
                    *STATE_VARIABLE_Expansions_21 = STATE_VARIABLE_Expansions_0_20;
                    succeeded = MR_TRUE;
                  }
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word GroundnessResult_28 = ((((MR_Unsigned) ((MR_hl_field(1, InstResults_13, (MR_Integer) 0))) >> 2)) & (MR_Integer) 3);

                switch (GroundnessResult_28) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 2:
                    succeeded = check_hlds__inst_test__bound_functor_list_is_ground_or_any_2_4_p_0(ModuleInfo_5, BoundFunctors_14, STATE_VARIABLE_Expansions_0_20, STATE_VARIABLE_Expansions_21);
                    break;
                  case (MR_Integer) 1:
                    {
                      *STATE_VARIABLE_Expansions_21 = STATE_VARIABLE_Expansions_0_20;
                      succeeded = MR_TRUE;
                    }
                    break;
                }
              }
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Inst_6, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word InstName_18 = ((MR_Word) ((MR_hl_field(3, Inst_6, (MR_Integer) 1))));
              MR_Word STATE_VARIABLE_Expansions_26_26;

              succeeded = mercury__set__insert_new_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), ((MR_Box) (Inst_6)), STATE_VARIABLE_Expansions_0_20, &STATE_VARIABLE_Expansions_26_26);
              if (succeeded)
              {
                MR_Word NextInst_19;
                MR_Word next_value_of_Inst_6;
                MR_Word next_value_of_STATE_VARIABLE_Expansions_0_20;

                check_hlds__inst_lookup__inst_lookup_3_p_0(ModuleInfo_5, InstName_18, &NextInst_19);
                // direct tailcall eliminated
                ;
                next_value_of_Inst_6 = NextInst_19;
                next_value_of_STATE_VARIABLE_Expansions_0_20 = STATE_VARIABLE_Expansions_26_26;
                Inst_6 = next_value_of_Inst_6;
                STATE_VARIABLE_Expansions_0_20 = next_value_of_STATE_VARIABLE_Expansions_0_20;
                continue;
              }
              else
              {
                *STATE_VARIABLE_Expansions_21 = STATE_VARIABLE_Expansions_0_20;
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word SubInst_17 = ((MR_Word) ((MR_hl_field(3, Inst_6, (MR_Integer) 2))));
              MR_Word next_value_of_Inst_6 = SubInst_17;

              // direct tailcall eliminated
              ;
              Inst_6 = next_value_of_Inst_6;
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              *STATE_VARIABLE_Expansions_21 = STATE_VARIABLE_Expansions_0_20;
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 3:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_test.inst_is_ground_or_any_2\'/4", (MR_String) "uninstantiated inst parameter");
              succeeded = MR_TRUE;
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
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Expansions_0_3,
  MR_Word * STATE_VARIABLE_Expansions_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Expansions_4 = STATE_VARIABLE_Expansions_0_3;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word Inst_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Insts_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Expansions_15_15;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_Expansions_0_3;

      succeeded = check_hlds__inst_test__inst_is_ground_or_any_2_4_p_0(ModuleInfo_1, Inst_10, STATE_VARIABLE_Expansions_0_3, &STATE_VARIABLE_Expansions_15_15);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = Insts_11;
        next_value_of_STATE_VARIABLE_Expansions_0_3 = STATE_VARIABLE_Expansions_15_15;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        STATE_VARIABLE_Expansions_0_3 = next_value_of_STATE_VARIABLE_Expansions_0_3;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_test__bound_functor_list_is_ground_or_any_2_4_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Expansions_0_3,
  MR_Word * STATE_VARIABLE_Expansions_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Expansions_4 = STATE_VARIABLE_Expansions_0_3;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word BoundFunctor_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word BoundFunctors_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgInsts_14 = ((MR_Word) ((MR_hl_field(0, BoundFunctor_10, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Expansions_17_17;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_Expansions_0_3;

      succeeded = check_hlds__inst_test__inst_list_is_ground_or_any_2_4_p_0(ModuleInfo_1, ArgInsts_14, STATE_VARIABLE_Expansions_0_3, &STATE_VARIABLE_Expansions_17_17);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = BoundFunctors_11;
        next_value_of_STATE_VARIABLE_Expansions_0_3 = STATE_VARIABLE_Expansions_17_17;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        STATE_VARIABLE_Expansions_0_3 = next_value_of_STATE_VARIABLE_Expansions_0_3;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
check_hlds__inst_test__inst_is_ground_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word Type_5,
  MR_Word Inst_6)
{
  MR_bool succeeded;
  MR_Word Found_7;
  MR_Word OldIsGround_8;

{
#define MR_PROC_LABEL check_hlds__inst_test__inst_is_ground_3_p_0

	MR_Word Type;
	MR_Word Inst;
	MR_Word Found;
	MR_Word IsGround;

	Type = Type_5 ;
	Inst = Inst_6 ;
		{

    MR_Unsigned hash;

    hash = (MR_Unsigned) Type << 5u | (MR_Unsigned) Inst;
    hash = hash >> MR_LOW_TAG_BITS;
    hash = hash % INST_IS_GROUND_CACHE_SIZE;

    if (
        inst_is_ground_cache[hash].iig_type_addr == Type &&
        inst_is_ground_cache[hash].iig_inst_addr == Inst)
    {
        Found = MR_BOOL_YES;
        IsGround = inst_is_ground_cache[hash].iig_is_ground;
    } else {
        Found = MR_BOOL_NO;
        IsGround = MR_NO;
    }


		;}
#undef MR_PROC_LABEL
	Found_7  = Found;
	OldIsGround_8  = IsGround;
}
  switch (Found_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Expansions0_23;

        Expansions0_23 = mercury__set_tree234__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0));
        succeeded = ((((MR_tag((MR_Word) Inst_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Inst_6, (MR_Integer) 0)))) == (MR_Integer) 2)));
        if (succeeded)
          succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Expansions0_23, ((MR_Box) (Inst_6)));
        else
        {
          MR_Word STATE_VARIABLE_Expansions_15_28;

          succeeded = mercury__set_tree234__insert_new_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), ((MR_Box) (Inst_6)), Expansions0_23, &STATE_VARIABLE_Expansions_15_28);
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
              case (MR_Integer) 1:
                succeeded = MR_TRUE;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word InstResults_50 = ((MR_Word) ((MR_hl_field(2, Inst_6, (MR_Integer) 1))));
                  MR_Word BoundFunctors_51 = ((MR_Word) ((MR_hl_field(2, Inst_6, (MR_Integer) 2))));
                  MR_Word _Expansions_68;

                  succeeded = check_hlds__inst_test__inst_results_bound_functor_list_is_ground_mt_2_6_p_0(ModuleInfo_4, Type_5, InstResults_50, BoundFunctors_51, STATE_VARIABLE_Expansions_15_28, &_Expansions_68);
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, Inst_6, (MR_Integer) 0))))) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 0:
                    {
                      MR_Word InstName_54 = ((MR_Word) ((MR_hl_field(3, Inst_6, (MR_Integer) 1))));
                      MR_Word NextInst_55;
                      MR_Word _Expansions_72;

                      check_hlds__inst_lookup__inst_lookup_3_p_0(ModuleInfo_4, InstName_54, &NextInst_55);
                      succeeded = check_hlds__inst_test__inst_is_ground_mt_1_5_p_0(ModuleInfo_4, Type_5, NextInst_55, STATE_VARIABLE_Expansions_15_28, &_Expansions_72);
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word SubInst_53 = ((MR_Word) ((MR_hl_field(3, Inst_6, (MR_Integer) 2))));
                      MR_Word _Expansions_70;

                      succeeded = check_hlds__inst_test__inst_is_ground_mt_1_5_p_0(ModuleInfo_4, Type_5, SubInst_53, STATE_VARIABLE_Expansions_15_28, &_Expansions_70);
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_test.inst_is_ground_mt_2\'/5", (MR_String) "uninstantiated inst parameter");
                      succeeded = MR_TRUE;
                    }
                    break;
                }
                break;
            }
          else
            succeeded = MR_TRUE;
        }
        if (succeeded)
        {
{
#define MR_PROC_LABEL check_hlds__inst_test__inst_is_ground_3_p_0

	MR_Word Type;
	MR_Word Inst;
	MR_Word IsGround;

	Type = Type_5 ;
	Inst = Inst_6 ;
	IsGround = (MR_Integer) 1 ;
		{

    MR_Unsigned hash;

    hash = (MR_Unsigned) Type << 5u | (MR_Unsigned) Inst;
    hash = hash >> MR_LOW_TAG_BITS;
    hash = hash % INST_IS_GROUND_CACHE_SIZE;
    // We overwrite any existing entry in the slot.
    inst_is_ground_cache[hash].iig_type_addr = Type;
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
#define MR_PROC_LABEL check_hlds__inst_test__inst_is_ground_3_p_0

	MR_Word Type;
	MR_Word Inst;
	MR_Word IsGround;

	Type = Type_5 ;
	Inst = Inst_6 ;
	IsGround = (MR_Integer) 0 ;
		{

    MR_Unsigned hash;

    hash = (MR_Unsigned) Type << 5u | (MR_Unsigned) Inst;
    hash = hash >> MR_LOW_TAG_BITS;
    hash = hash % INST_IS_GROUND_CACHE_SIZE;
    // We overwrite any existing entry in the slot.
    inst_is_ground_cache[hash].iig_type_addr = Type;
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
      succeeded = (OldIsGround_8 == (MR_Integer) 1);
      break;
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__inst_test__inst_is_ground_mt_1_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Type_7,
  MR_Word Inst_8,
  MR_Word STATE_VARIABLE_Expansions_0_12,
  MR_Word * STATE_VARIABLE_Expansions_13)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = ((((MR_tag((MR_Word) Inst_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Inst_8, (MR_Integer) 0)))) == (MR_Integer) 2)));

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
          case (MR_Integer) 1:
            {
              *STATE_VARIABLE_Expansions_13 = STATE_VARIABLE_Expansions_15_15;
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word InstResults_37 = ((MR_Word) ((MR_hl_field(2, Inst_8, (MR_Integer) 1))));
              MR_Word BoundFunctors_38 = ((MR_Word) ((MR_hl_field(2, Inst_8, (MR_Integer) 2))));

              succeeded = check_hlds__inst_test__inst_results_bound_functor_list_is_ground_mt_2_6_p_0(ModuleInfo_6, Type_7, InstResults_37, BoundFunctors_38, STATE_VARIABLE_Expansions_15_15, STATE_VARIABLE_Expansions_13);
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, Inst_8, (MR_Integer) 0))))) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 0:
                {
                  MR_Word InstName_41 = ((MR_Word) ((MR_hl_field(3, Inst_8, (MR_Integer) 1))));
                  MR_Word NextInst_42;
                  MR_Word next_value_of_Inst_8;
                  MR_Word next_value_of_STATE_VARIABLE_Expansions_0_12;

                  check_hlds__inst_lookup__inst_lookup_3_p_0(ModuleInfo_6, InstName_41, &NextInst_42);
                  // direct tailcall eliminated
                  ;
                  next_value_of_Inst_8 = NextInst_42;
                  next_value_of_STATE_VARIABLE_Expansions_0_12 = STATE_VARIABLE_Expansions_15_15;
                  Inst_8 = next_value_of_Inst_8;
                  STATE_VARIABLE_Expansions_0_12 = next_value_of_STATE_VARIABLE_Expansions_0_12;
                  continue;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word SubInst_40 = ((MR_Word) ((MR_hl_field(3, Inst_8, (MR_Integer) 2))));
                  MR_Word next_value_of_Inst_8 = SubInst_40;
                  MR_Word next_value_of_STATE_VARIABLE_Expansions_0_12 = STATE_VARIABLE_Expansions_15_15;

                  // direct tailcall eliminated
                  ;
                  Inst_8 = next_value_of_Inst_8;
                  STATE_VARIABLE_Expansions_0_12 = next_value_of_STATE_VARIABLE_Expansions_0_12;
                  continue;
                }
                break;
              case (MR_Integer) 3:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_test.inst_is_ground_mt_2\'/5", (MR_String) "uninstantiated inst parameter");
                  succeeded = MR_TRUE;
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
check_hlds__inst_test__inst_results_bound_functor_list_is_ground_mt_2_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word Type_8,
  MR_Word InstResults_9,
  MR_Word BoundFunctors_10,
  MR_Word STATE_VARIABLE_Expansions_0_18,
  MR_Word * STATE_VARIABLE_Expansions_19)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) InstResults_9)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(InstResults_9)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          succeeded = check_hlds__inst_test__bound_functor_list_is_ground_mt_2_5_p_0(ModuleInfo_7, Type_8, BoundFunctors_10, STATE_VARIABLE_Expansions_0_18, STATE_VARIABLE_Expansions_19);
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
        MR_Word GroundnessResult_12 = ((((MR_Unsigned) ((MR_hl_field(1, InstResults_9, (MR_Integer) 0))) >> 2)) & (MR_Integer) 3);

        switch (GroundnessResult_12) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 2:
            succeeded = check_hlds__inst_test__bound_functor_list_is_ground_mt_2_5_p_0(ModuleInfo_7, Type_8, BoundFunctors_10, STATE_VARIABLE_Expansions_0_18, STATE_VARIABLE_Expansions_19);
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

static MR_bool MR_CALL 
check_hlds__inst_test__inst_list_is_ground_mt_2_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Expansions_0_4,
  MR_Word * STATE_VARIABLE_Expansions_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_Expansions_5 = STATE_VARIABLE_Expansions_0_4;
      else
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_test.inst_list_is_ground_mt_2\'/5", (MR_String) "length mismatch");
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word Var_35 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_36 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_test.inst_list_is_ground_mt_2\'/5", (MR_String) "length mismatch");
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word Inst_29 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
        MR_Word Insts_30 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
        MR_Word STATE_VARIABLE_Expansions_34_34;
        MR_Word next_value_of_HeadVar__2_2;
        MR_Word next_value_of_HeadVar__3_3;
        MR_Word next_value_of_STATE_VARIABLE_Expansions_0_4;

        succeeded = ((((MR_tag((MR_Word) Inst_29)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Inst_29, (MR_Integer) 0)))) == (MR_Integer) 2)));
        if (succeeded)
        {
          succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), STATE_VARIABLE_Expansions_0_4, ((MR_Box) (Inst_29)));
          if (succeeded)
          {
            STATE_VARIABLE_Expansions_34_34 = STATE_VARIABLE_Expansions_0_4;
            succeeded = MR_TRUE;
          }
        }
        else
        {
          MR_Word STATE_VARIABLE_Expansions_15_39;

          succeeded = mercury__set_tree234__insert_new_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), ((MR_Box) (Inst_29)), STATE_VARIABLE_Expansions_0_4, &STATE_VARIABLE_Expansions_15_39);
          if (succeeded)
            switch (MR_tag((MR_Word) Inst_29)) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 0:
                switch (MR_unmkbody(Inst_29)) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 1:
                    {
                      STATE_VARIABLE_Expansions_34_34 = STATE_VARIABLE_Expansions_15_39;
                      succeeded = MR_TRUE;
                    }
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  STATE_VARIABLE_Expansions_34_34 = STATE_VARIABLE_Expansions_15_39;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word InstResults_61 = ((MR_Word) ((MR_hl_field(2, Inst_29, (MR_Integer) 1))));
                  MR_Word BoundFunctors_62 = ((MR_Word) ((MR_hl_field(2, Inst_29, (MR_Integer) 2))));

                  succeeded = check_hlds__inst_test__inst_results_bound_functor_list_is_ground_mt_2_6_p_0(ModuleInfo_1, Var_36, InstResults_61, BoundFunctors_62, STATE_VARIABLE_Expansions_15_39, &STATE_VARIABLE_Expansions_34_34);
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, Inst_29, (MR_Integer) 0))))) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 0:
                    {
                      MR_Word InstName_65 = ((MR_Word) ((MR_hl_field(3, Inst_29, (MR_Integer) 1))));
                      MR_Word NextInst_66;

                      check_hlds__inst_lookup__inst_lookup_3_p_0(ModuleInfo_1, InstName_65, &NextInst_66);
                      succeeded = check_hlds__inst_test__inst_is_ground_mt_1_5_p_0(ModuleInfo_1, Var_36, NextInst_66, STATE_VARIABLE_Expansions_15_39, &STATE_VARIABLE_Expansions_34_34);
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word SubInst_64 = ((MR_Word) ((MR_hl_field(3, Inst_29, (MR_Integer) 2))));

                      succeeded = check_hlds__inst_test__inst_is_ground_mt_1_5_p_0(ModuleInfo_1, Var_36, SubInst_64, STATE_VARIABLE_Expansions_15_39, &STATE_VARIABLE_Expansions_34_34);
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_test.inst_is_ground_mt_2\'/5", (MR_String) "uninstantiated inst parameter");
                      succeeded = MR_TRUE;
                    }
                    break;
                }
                break;
            }
          else
          {
            STATE_VARIABLE_Expansions_34_34 = STATE_VARIABLE_Expansions_0_4;
            succeeded = MR_TRUE;
          }
        }
        if (succeeded)
        {
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Var_35;
          next_value_of_HeadVar__3_3 = Insts_30;
          next_value_of_STATE_VARIABLE_Expansions_0_4 = STATE_VARIABLE_Expansions_34_34;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
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
check_hlds__inst_test__bound_functor_list_is_ground_mt_2_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word Type_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Expansions_0_4,
  MR_Word * STATE_VARIABLE_Expansions_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Expansions_5 = STATE_VARIABLE_Expansions_0_4;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word BoundFunctor_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word BoundFunctors_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgTypes_16;
      MR_Word ArgInsts_18;
      MR_Word STATE_VARIABLE_Expansions_21_21;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_Expansions_0_4;

      check_hlds__inst_util__get_cons_id_arg_types_for_bound_functor_4_p_0(ModuleInfo_1, Type_2, BoundFunctor_13, &ArgTypes_16);
      ArgInsts_18 = ((MR_Word) ((MR_hl_field(0, BoundFunctor_13, (MR_Integer) 1))));
      succeeded = check_hlds__inst_test__inst_list_is_ground_mt_2_5_p_0(ModuleInfo_1, ArgTypes_16, ArgInsts_18, STATE_VARIABLE_Expansions_0_4, &STATE_VARIABLE_Expansions_21_21);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__3_3 = BoundFunctors_14;
        next_value_of_STATE_VARIABLE_Expansions_0_4 = STATE_VARIABLE_Expansions_21_21;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        STATE_VARIABLE_Expansions_0_4 = next_value_of_STATE_VARIABLE_Expansions_0_4;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_test____Unify____inst_names_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__inst_test____Unify____inst_names_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__inst_test____Compare____inst_names_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__inst_test____Compare____inst_names_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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
