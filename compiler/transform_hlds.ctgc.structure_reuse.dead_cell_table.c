/*
** Automatically generated from `structure_reuse.dead_cell_table.m'
** by the Mercury compiler,
** version rotd-2025-06-07
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


// :- module transform_hlds.ctgc.structure_reuse.dead_cell_table.
// :- implementation.

/*
INIT mercury__transform_hlds__ctgc__structure_reuse__dead_cell_table__init
ENDINIT
*/

#include "transform_hlds.ctgc.structure_reuse.dead_cell_table.mih"


#include "analysis.mih"
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
#include "enum.mih"
#include "hlds.mih"
#include "io.mih"
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
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "analysis.framework.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.instmap.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.ctgc.mih"
#include "transform_hlds.smm_common.mih"
#include "transform_hlds.ctgc.livedata.mih"
#include "transform_hlds.ctgc.structure_reuse.mih"
#include "transform_hlds.ctgc.structure_sharing.mih"
#include "transform_hlds.ctgc.structure_reuse.domain.mih"
#include "transform_hlds.ctgc.structure_sharing.domain.mih"




static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__dead_cell_table__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__dead_cell_table__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0;

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__dead_cell_table__dead_cell_entry_dump_5_p_0(
  MR_Word Stream_6,
  MR_Word PP_7,
  MR_Word Cond_8);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__dead_cell_table__dead_cell_table_add_unconditional_4_p_0(
  MR_Word PP_5,
  MR_Word C_6,
  MR_Word STATE_VARIABLE_Table_0_8,
  MR_Word * STATE_VARIABLE_Table_9);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__dead_cell_table__dead_cell_table_maybe_dump_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__dead_cell_table__dead_cell_table_remove_conditionals_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__dead_cell_table____Unify____dead_cell_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__dead_cell_table____Compare____dead_cell_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__dead_cell_table_scalar_common_1[2][3];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__dead_cell_table_scalar_common_2[1][7];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__dead_cell_table_scalar_common_3[1][8];




static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__dead_cell_table_scalar_common_1[2][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__dead_cell_table_scalar_common_2[0])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__dead_cell_table__dead_cell_table_remove_conditionals_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__dead_cell_table_scalar_common_2[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__dead_cell_table__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__dead_cell_table__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__dead_cell_table_scalar_common_3[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__dead_cell_table__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0),
    (MR_PseudoTypeInfo) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0)
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__dead_cell_table__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0),
    (MR_TypeInfo) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0)
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__ctgc__structure_reuse__dead_cell_table__transform_hlds__ctgc__structure_reuse__dead_cell_table__type_ctor_info_dead_cell_table_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__dead_cell_table____Unify____dead_cell_table_0_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__dead_cell_table____Compare____dead_cell_table_0_0_10001)),
  (MR_String) "transform_hlds.ctgc.structure_reuse.dead_cell_table",
  (MR_String) "dead_cell_table",
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__ctgc__structure_reuse__dead_cell_table__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

void MR_CALL 
transform_hlds__ctgc__structure_reuse__dead_cell_table____Compare____dead_cell_table_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__dead_cell_table_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__dead_cell_table____Unify____dead_cell_table_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__dead_cell_table_scalar_common_1[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__dead_cell_table__dead_cell_entry_dump_5_p_0(
  MR_Word Stream_6,
  MR_Word PP_7,
  MR_Word Cond_8)
{
  MR_bool succeeded;

  succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_condition_is_conditional_1_p_0(Cond_8);
  if (succeeded)
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "\t\t|  cond  |\t");
  else
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "\t\t| always |\t");
  transform_hlds__smm_common__dump_program_point_4_p_0(Stream_6, PP_7);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) "\n");
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__dead_cell_table__dead_cell_table_add_unconditional_4_p_0(
  MR_Word PP_5,
  MR_Word C_6,
  MR_Word STATE_VARIABLE_Table_0_8,
  MR_Word * STATE_VARIABLE_Table_9)
{
  MR_bool succeeded;

  succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_condition_is_conditional_1_p_0(C_6);
  if (succeeded)
    *STATE_VARIABLE_Table_9 = STATE_VARIABLE_Table_0_8;
  else
    mercury__map__set_4_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0), ((MR_Box) (PP_5)), ((MR_Box) (C_6)), STATE_VARIABLE_Table_0_8, STATE_VARIABLE_Table_9);
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__dead_cell_table__dead_cell_table_maybe_dump_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  transform_hlds__ctgc__structure_reuse__dead_cell_table__dead_cell_entry_dump_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

void MR_CALL 
transform_hlds__ctgc__structure_reuse__dead_cell_table__dead_cell_table_maybe_dump_5_p_0(
  MR_Word Stream_6,
  MR_Word MaybeDump_7,
  MR_Word Table_8)
{
  switch (MaybeDump_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_14;
        MR_Box conv0_STATE_VARIABLE_IO_2_15;

        mercury__io__write_string_4_p_0(Stream_6, (MR_String) "\t\t|--------|\n");
        {
          Var_14 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_14, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__dead_cell_table_scalar_common_3[0]));
          MR_hl_field(0, Var_14, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__dead_cell_table__dead_cell_table_maybe_dump_5_p_0_1));
          MR_hl_field(0, Var_14, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_14, 3) = ((MR_Box) (Stream_6));
        }
        mercury__map__foldl_4_p_2((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_14, Table_8, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_2_15);
        mercury__io__write_string_4_p_0(Stream_6, (MR_String) "\t\t|--------|\n");
      }
      break;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__dead_cell_table__dead_cell_table_remove_conditionals_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Table_9;

  transform_hlds__ctgc__structure_reuse__dead_cell_table__dead_cell_table_add_unconditional_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Table_9);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Table_9));
}

void MR_CALL 
transform_hlds__ctgc__structure_reuse__dead_cell_table__dead_cell_table_remove_conditionals_2_p_0(
  MR_Word STATE_VARIABLE_Table_0_4,
  MR_Word * STATE_VARIABLE_Table_5)
{
  MR_Word Var_7;
  MR_Box conv1_STATE_VARIABLE_Table_5;

  Var_7 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0));
  mercury__map__foldl_4_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__dead_cell_table_scalar_common_1[0]), (MR_Word) (&transform_hlds__ctgc__structure_reuse__dead_cell_table_scalar_common_1[1]), STATE_VARIABLE_Table_0_4, ((MR_Box) (Var_7)), &conv1_STATE_VARIABLE_Table_5);
  *STATE_VARIABLE_Table_5 = ((MR_Word) (conv1_STATE_VARIABLE_Table_5));
}

void MR_CALL 
transform_hlds__ctgc__structure_reuse__dead_cell_table__dead_cell_table_remove_3_p_0(
  MR_Word PP_4,
  MR_Word STATE_VARIABLE_Table_0_7,
  MR_Word * STATE_VARIABLE_Table_8)
{
  MR_Box conv0_Var_6;

  mercury__map__det_remove_4_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0), ((MR_Box) (PP_4)), &conv0_Var_6, STATE_VARIABLE_Table_0_7, STATE_VARIABLE_Table_8);
}

void MR_CALL 
transform_hlds__ctgc__structure_reuse__dead_cell_table__dead_cell_table_set_4_p_0(
  MR_Word PP_5,
  MR_Word RC_6,
  MR_Word STATE_VARIABLE_Table_0_8,
  MR_Word * STATE_VARIABLE_Table_9)
{
  mercury__map__set_4_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0), ((MR_Box) (PP_5)), ((MR_Box) (RC_6)), STATE_VARIABLE_Table_0_8, STATE_VARIABLE_Table_9);
}

MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__dead_cell_table__dead_cell_table_search_3_p_0(
  MR_Word PP_4,
  MR_Word Table_5,
  MR_Word * ReuseCond_6)
{
  MR_bool succeeded;
  MR_Box conv0_ReuseCond_6;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0), Table_5, ((MR_Box) (PP_4)), &conv0_ReuseCond_6);
  if (succeeded)
  {
    *ReuseCond_6 = ((MR_Word) (conv0_ReuseCond_6));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__dead_cell_table__dead_cell_table_is_empty_1_p_0(
  MR_Word Table_2)
{
  MR_bool succeeded;

  succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0), Table_2);
  return succeeded;
}

MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__dead_cell_table__dead_cell_table_init_0_f_0(void)
{
  MR_Word HeadVar__1_1;

  HeadVar__1_1 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0));
  return HeadVar__1_1;
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__dead_cell_table____Unify____dead_cell_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__ctgc__structure_reuse__dead_cell_table____Unify____dead_cell_table_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__dead_cell_table____Compare____dead_cell_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__ctgc__structure_reuse__dead_cell_table____Compare____dead_cell_table_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__transform_hlds__ctgc__structure_reuse__dead_cell_table__init(void)
{
}

void mercury__transform_hlds__ctgc__structure_reuse__dead_cell_table__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&transform_hlds__ctgc__structure_reuse__dead_cell_table__transform_hlds__ctgc__structure_reuse__dead_cell_table__type_ctor_info_dead_cell_table_0);
}

void mercury__transform_hlds__ctgc__structure_reuse__dead_cell_table__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__ctgc__structure_reuse__dead_cell_table__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.ctgc.structure_reuse.dead_cell_table.
