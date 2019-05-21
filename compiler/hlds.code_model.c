/*
** Automatically generated from `code_model.m'
** by the Mercury compiler,
** version rotd-2017-11-30
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


// :- module hlds.code_model.
// :- implementation.

/*
INIT mercury__hlds__code_model__init
ENDINIT
*/

#include "hlds.code_model.mih"


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
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_EnumFunctorDesc hlds__code_model__hlds__code_model__enum_functor_desc_code_model_0_0;

static const MR_EnumFunctorDesc hlds__code_model__hlds__code_model__enum_functor_desc_code_model_0_1;

static const MR_EnumFunctorDesc hlds__code_model__hlds__code_model__enum_functor_desc_code_model_0_2;

static const MR_EnumFunctorDescPtr hlds__code_model__hlds__code_model__enum_value_ordered_code_model_0[3];

static const MR_EnumFunctorDescPtr hlds__code_model__hlds__code_model__enum_name_ordered_code_model_0[3];

static const MR_Integer hlds__code_model__hlds__code_model__functor_number_map_code_model_0[3];

static MR_bool MR_CALL 
hlds__code_model____Unify____code_model_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__code_model____Compare____code_model_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);



/* sealed */ struct hlds__code_model__vector_common_type_1_0_s {
  const MR_Word hlds__code_model__vector_common_type_1_0__vct_1_f_0;
};

static /* final */ const struct hlds__code_model__vector_common_type_1_0_s hlds__code_model_vector_common_1[8];

/* sealed */ struct hlds__code_model__vector_common_type_2_0_s {
  const MR_Word hlds__code_model__vector_common_type_2_0__vct_2_f_0;
};

static /* final */ const struct hlds__code_model__vector_common_type_2_0_s hlds__code_model_vector_common_2[8];




static /* final */ const struct hlds__code_model__vector_common_type_1_0_s hlds__code_model_vector_common_1[8] = {
  /* row 0 */   {     (MR_Integer) 0 },
  /* row 1 */   {     (MR_Integer) 1 },
  /* row 2 */   {     (MR_Integer) 2 },
  /* row 3 */   {     (MR_Integer) 2 },
  /* row 4 */   {     (MR_Integer) 0 },
  /* row 5 */   {     (MR_Integer) 1 },
  /* row 6 */   {     (MR_Integer) 0 },
  /* row 7 */   {     (MR_Integer) 1 },
};

static /* final */ const struct hlds__code_model__vector_common_type_2_0_s hlds__code_model_vector_common_2[8] = {
  /* row 0 */   {     (MR_Integer) 0 },
  /* row 1 */   {     (MR_Integer) 4 },
  /* row 2 */   {     (MR_Integer) 6 },
  /* row 3 */   {     (MR_Integer) 3 },
  /* row 4 */   {     (MR_Integer) 2 },
  /* row 5 */   {     (MR_Integer) 1 },
  /* row 6 */   {     (MR_Integer) 5 },
  /* row 7 */   {     (MR_Integer) 7 },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_EnumFunctorDesc hlds__code_model__hlds__code_model__enum_functor_desc_code_model_0_0 = {
  (MR_String) "model_det",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc hlds__code_model__hlds__code_model__enum_functor_desc_code_model_0_1 = {
  (MR_String) "model_semi",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc hlds__code_model__hlds__code_model__enum_functor_desc_code_model_0_2 = {
  (MR_String) "model_non",
  (MR_Integer) 2
};

static const MR_EnumFunctorDescPtr hlds__code_model__hlds__code_model__enum_value_ordered_code_model_0[3] = {
  &hlds__code_model__hlds__code_model__enum_functor_desc_code_model_0_0,
  &hlds__code_model__hlds__code_model__enum_functor_desc_code_model_0_1,
  &hlds__code_model__hlds__code_model__enum_functor_desc_code_model_0_2
};

static const MR_EnumFunctorDescPtr hlds__code_model__hlds__code_model__enum_name_ordered_code_model_0[3] = {
  &hlds__code_model__hlds__code_model__enum_functor_desc_code_model_0_0,
  &hlds__code_model__hlds__code_model__enum_functor_desc_code_model_0_2,
  &hlds__code_model__hlds__code_model__enum_functor_desc_code_model_0_1
};

static const MR_Integer hlds__code_model__hlds__code_model__functor_number_map_code_model_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__code_model__hlds__code_model__type_ctor_info_code_model_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__code_model____Unify____code_model_0_0_10001)),
  ((MR_Box) (hlds__code_model____Compare____code_model_0_0_10001)),
  (MR_String) "hlds.code_model",
  (MR_String) "code_model",
  {     hlds__code_model__hlds__code_model__enum_name_ordered_code_model_0 },
  {     hlds__code_model__hlds__code_model__enum_value_ordered_code_model_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  hlds__code_model__hlds__code_model__functor_number_map_code_model_0
};

void MR_CALL 
hlds__code_model____Compare____code_model_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
hlds__code_model____Unify____code_model_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

MR_Integer MR_CALL 
hlds__code_model__represent_determinism_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Integer HeadVar__2_2;

    switch (HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 4:
        {
          HeadVar__2_2 = mdbcomp__program_representation__detism_rep_1_f_0((MR_Integer) 5);
        }
        break;
      case (MR_Integer) 5:
        {
          HeadVar__2_2 = mdbcomp__program_representation__detism_rep_1_f_0((MR_Integer) 4);
        }
        break;
      case (MR_Integer) 0:
        {
          HeadVar__2_2 = mdbcomp__program_representation__detism_rep_1_f_0((MR_Integer) 0);
        }
        break;
      case (MR_Integer) 6:
        {
          HeadVar__2_2 = mdbcomp__program_representation__detism_rep_1_f_0((MR_Integer) 6);
        }
        break;
      case (MR_Integer) 7:
        {
          HeadVar__2_2 = mdbcomp__program_representation__detism_rep_1_f_0((MR_Integer) 7);
        }
        break;
      case (MR_Integer) 2:
        {
          HeadVar__2_2 = mdbcomp__program_representation__detism_rep_1_f_0((MR_Integer) 3);
        }
        break;
      case (MR_Integer) 3:
        {
          HeadVar__2_2 = mdbcomp__program_representation__detism_rep_1_f_0((MR_Integer) 2);
        }
        break;
      case (MR_Integer) 1:
        {
          HeadVar__2_2 = mdbcomp__program_representation__detism_rep_1_f_0((MR_Integer) 1);
        }
        break;
    }
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
hlds__code_model__goal_info_get_code_model_1_f_0(
  MR_Word GoalInfo_3)
{
  {
    MR_Word CodeModel_4;
    MR_Word Determinism_5;

    Determinism_5 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_3);
    hlds__code_model__determinism_to_code_model_2_p_0(Determinism_5, &CodeModel_4);
    return CodeModel_4;
  }
}

MR_Word MR_CALL 
hlds__code_model__proc_info_interface_code_model_1_f_0(
  MR_Word ProcInfo_3)
{
  {
    MR_Word CodeModel_4;
    MR_Word Determinism_5;

    hlds__hlds_pred__proc_info_interface_determinism_2_p_0(ProcInfo_3, &Determinism_5);
    hlds__code_model__determinism_to_code_model_2_p_0(Determinism_5, &CodeModel_4);
    return CodeModel_4;
  }
}

void MR_CALL 
hlds__code_model__determinism_to_code_model_2_p_1(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Cont cont,
  void * cont_env_ptr)
{
  switch (HeadVar__2_2) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Integer slot_0 = (MR_Integer) 0;

        do
        {
          *HeadVar__1_1 = ((&hlds__code_model_vector_common_2[0 + slot_0]))->hlds__code_model__vector_common_type_2_0__vct_2_f_0;
          cont(cont_env_ptr);
          slot_0 = (slot_0 + (MR_Integer) 1);
        }
        while ((slot_0 < (MR_Integer) 3));
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Integer slot_1 = (MR_Integer) 0;

        do
        {
          *HeadVar__1_1 = ((&hlds__code_model_vector_common_2[3 + slot_1]))->hlds__code_model__vector_common_type_2_0__vct_2_f_0;
          cont(cont_env_ptr);
          slot_1 = (slot_1 + (MR_Integer) 1);
        }
        while ((slot_1 < (MR_Integer) 2));
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Integer slot_2 = (MR_Integer) 0;

        do
        {
          *HeadVar__1_1 = ((&hlds__code_model_vector_common_2[5 + slot_2]))->hlds__code_model__vector_common_type_2_0__vct_2_f_0;
          cont(cont_env_ptr);
          slot_2 = (slot_2 + (MR_Integer) 1);
        }
        while ((slot_2 < (MR_Integer) 3));
      }
      break;
  }
}

void MR_CALL 
hlds__code_model__determinism_to_code_model_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  {
    *HeadVar__2_2 = ((&hlds__code_model_vector_common_1[0 + HeadVar__1_1]))->hlds__code_model__vector_common_type_1_0__vct_1_f_0;
  }
}

static MR_bool MR_CALL 
hlds__code_model____Unify____code_model_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__code_model____Unify____code_model_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
hlds__code_model____Compare____code_model_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__code_model____Compare____code_model_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__hlds__code_model__init(void)
{
}

void mercury__hlds__code_model__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__code_model__hlds__code_model__type_ctor_info_code_model_0);
}

void mercury__hlds__code_model__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__code_model__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module hlds.code_model.
