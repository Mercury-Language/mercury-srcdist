/*
** Automatically generated from `parse_tree_out_sym_name.m'
** by the Mercury compiler,
** version rotd-2026-05-19
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


// :- module parse_tree.parse_tree_out_sym_name.
// :- implementation.

/*
INIT mercury__parse_tree__parse_tree_out_sym_name__init
ENDINIT
*/

#include "parse_tree.parse_tree_out_sym_name.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
#include "ops.mih"
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
#include "term_io.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_tree_output.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_EnumFunctorDesc parse_tree__parse_tree_out_sym_name__parse_tree__parse_tree_out_sym_name__enum_functor_desc_needs_brackets_0_0;

static const MR_EnumFunctorDesc parse_tree__parse_tree_out_sym_name__parse_tree__parse_tree_out_sym_name__enum_functor_desc_needs_brackets_0_1;

static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_sym_name__parse_tree__parse_tree_out_sym_name__enum_ordinal_ordered_needs_brackets_0[2];

static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_sym_name__parse_tree__parse_tree_out_sym_name__enum_name_ordered_needs_brackets_0[2];

static const MR_Integer parse_tree__parse_tree_out_sym_name__parse_tree__parse_tree_out_sym_name__functor_number_map_needs_brackets_0[2];

static MR_bool MR_CALL 
parse_tree__parse_tree_out_sym_name____Unify____needs_brackets_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_tree_out_sym_name____Compare____needs_brackets_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__parse_tree_out_sym_name_scalar_common_1[2][3];

static /* final */ const MR_Box parse_tree__parse_tree_out_sym_name_scalar_common_2[4][4];

static /* final */ const MR_Box parse_tree__parse_tree_out_sym_name_scalar_common_3[2][5];

static /* final */ const MR_Box parse_tree__parse_tree_out_sym_name_scalar_common_4[1][1];




static /* final */ const MR_Box parse_tree__parse_tree_out_sym_name_scalar_common_1[2][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__string__builder__handle__arity0__string__builder__state__arity0__)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_sym_name_scalar_common_2[4][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__string__builder__handle__arity0__string__builder__state__arity0__)),
    ((MR_Box) (&parse_tree__parse_tree_out_sym_name_scalar_common_1[0])),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_parse_tree__parse_tree_output__pt_output__arity2__string__builder__handle__arity0__string__builder__state__arity0__)),
    ((MR_Box) (&parse_tree__parse_tree_out_sym_name_scalar_common_3[0])),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&parse_tree__parse_tree_out_sym_name_scalar_common_1[1])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   3 */
  {
    ((MR_Box) (base_typeclass_info_parse_tree__parse_tree_output__pt_output__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&parse_tree__parse_tree_out_sym_name_scalar_common_3[1])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_sym_name_scalar_common_3[2][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__string__builder__handle__arity0__string__arity0__string__builder__state__arity0__)),
    ((MR_Box) (&parse_tree__parse_tree_out_sym_name_scalar_common_2[0])),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&parse_tree__parse_tree_out_sym_name_scalar_common_2[2])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_sym_name_scalar_common_4[1][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_EnumFunctorDesc parse_tree__parse_tree_out_sym_name__parse_tree__parse_tree_out_sym_name__enum_functor_desc_needs_brackets_0_0 = {
  (MR_String) "needs_brackets",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__parse_tree_out_sym_name__parse_tree__parse_tree_out_sym_name__enum_functor_desc_needs_brackets_0_1 = {
  (MR_String) "does_not_need_brackets",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_sym_name__parse_tree__parse_tree_out_sym_name__enum_ordinal_ordered_needs_brackets_0[2] = {
  &parse_tree__parse_tree_out_sym_name__parse_tree__parse_tree_out_sym_name__enum_functor_desc_needs_brackets_0_0,
  &parse_tree__parse_tree_out_sym_name__parse_tree__parse_tree_out_sym_name__enum_functor_desc_needs_brackets_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__parse_tree_out_sym_name__parse_tree__parse_tree_out_sym_name__enum_name_ordered_needs_brackets_0[2] = {
  &parse_tree__parse_tree_out_sym_name__parse_tree__parse_tree_out_sym_name__enum_functor_desc_needs_brackets_0_1,
  &parse_tree__parse_tree_out_sym_name__parse_tree__parse_tree_out_sym_name__enum_functor_desc_needs_brackets_0_0
};

static const MR_Integer parse_tree__parse_tree_out_sym_name__parse_tree__parse_tree_out_sym_name__functor_number_map_needs_brackets_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__parse_tree_out_sym_name__parse_tree__parse_tree_out_sym_name__type_ctor_info_needs_brackets_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__parse_tree_out_sym_name____Unify____needs_brackets_0_0_10001)),
  ((MR_Box) (parse_tree__parse_tree_out_sym_name____Compare____needs_brackets_0_0_10001)),
  (MR_String) "parse_tree.parse_tree_out_sym_name",
  (MR_String) "needs_brackets",
  { parse_tree__parse_tree_out_sym_name__parse_tree__parse_tree_out_sym_name__enum_name_ordered_needs_brackets_0 },
  { parse_tree__parse_tree_out_sym_name__parse_tree__parse_tree_out_sym_name__enum_ordinal_ordered_needs_brackets_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__parse_tree_out_sym_name__parse_tree__parse_tree_out_sym_name__functor_number_map_needs_brackets_0,

};

void MR_CALL 
parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_99_108_97_115_115_95_105_100_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_12,
  MR_Word S_5,
  MR_Word HeadVar__2_2)
{
  MR_Word SymName_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
  MR_Integer Arity_14 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv1_STATE_VARIABLE_U_2_17;
  void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv3_STATE_VARIABLE_U_10;

  parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_101_115_99_97_112_101_100_95_115_121_109_95_110_97_109_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_12, S_5, SymName_13);
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_12, 0)), 6))));
  func_0(((MR_Box) (TypeClassInfo_for_pt_output_12)), ((MR_Box) ((MR_String) "/")), ((MR_Box) (S_5)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_2_17);
  func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_12, 0)), 10))));
  func_2(((MR_Box) (TypeClassInfo_for_pt_output_12)), ((MR_Box) (Arity_14)), ((MR_Box) (S_5)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_U_10);
}

void MR_CALL 
parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_99_108_97_115_115_95_105_100_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_12,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_U_0_9,
  MR_Word * STATE_VARIABLE_U_10)
{
  MR_Word SymName_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
  MR_Integer Arity_14 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
  MR_Word STATE_VARIABLE_U_1_15;
  MR_Word STATE_VARIABLE_U_2_17;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv1_STATE_VARIABLE_U_2_17;
  void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv3_STATE_VARIABLE_U_10;

  parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_101_115_99_97_112_101_100_95_115_121_109_95_110_97_109_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_12, SymName_13, STATE_VARIABLE_U_0_9, &STATE_VARIABLE_U_1_15);
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_12, 0)), 6))));
  func_0(((MR_Box) (TypeClassInfo_for_pt_output_12)), ((MR_Box) ((MR_String) "/")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_1_15)), &conv1_STATE_VARIABLE_U_2_17);
  STATE_VARIABLE_U_2_17 = ((MR_Word) (conv1_STATE_VARIABLE_U_2_17));
  func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_12, 0)), 10))));
  func_2(((MR_Box) (TypeClassInfo_for_pt_output_12)), ((MR_Box) (Arity_14)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_2_17)), &conv3_STATE_VARIABLE_U_10);
  *STATE_VARIABLE_U_10 = ((MR_Word) (conv3_STATE_VARIABLE_U_10));
}

void MR_CALL 
parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_101_115_99_97_112_101_100_95_115_121_109_95_110_97_109_101_95_97_114_105_116_121_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_14,
  MR_Word S_5,
  MR_Word HeadVar__2_2)
{
  MR_Word SymName_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
  MR_Integer Arity_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv1_STATE_VARIABLE_U_2_13;
  void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv3_STATE_VARIABLE_U_10;

  parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_101_115_99_97_112_101_100_95_115_121_109_95_110_97_109_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_14, S_5, SymName_6);
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_14, 0)), 6))));
  func_0(((MR_Box) (TypeClassInfo_for_pt_output_14)), ((MR_Box) ((MR_String) "/")), ((MR_Box) (S_5)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_2_13);
  func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_14, 0)), 10))));
  func_2(((MR_Box) (TypeClassInfo_for_pt_output_14)), ((MR_Box) (Arity_7)), ((MR_Box) (S_5)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_U_10);
}

void MR_CALL 
parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_101_115_99_97_112_101_100_95_115_121_109_95_110_97_109_101_95_97_114_105_116_121_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_14,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_U_0_9,
  MR_Word * STATE_VARIABLE_U_10)
{
  MR_Word SymName_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
  MR_Integer Arity_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
  MR_Word STATE_VARIABLE_U_1_11;
  MR_Word STATE_VARIABLE_U_2_13;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv1_STATE_VARIABLE_U_2_13;
  void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv3_STATE_VARIABLE_U_10;

  parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_101_115_99_97_112_101_100_95_115_121_109_95_110_97_109_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_14, SymName_6, STATE_VARIABLE_U_0_9, &STATE_VARIABLE_U_1_11);
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_14, 0)), 6))));
  func_0(((MR_Box) (TypeClassInfo_for_pt_output_14)), ((MR_Box) ((MR_String) "/")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_1_11)), &conv1_STATE_VARIABLE_U_2_13);
  STATE_VARIABLE_U_2_13 = ((MR_Word) (conv1_STATE_VARIABLE_U_2_13));
  func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_14, 0)), 10))));
  func_2(((MR_Box) (TypeClassInfo_for_pt_output_14)), ((MR_Box) (Arity_7)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_2_13)), &conv3_STATE_VARIABLE_U_10);
  *STATE_VARIABLE_U_10 = ((MR_Word) (conv3_STATE_VARIABLE_U_10));
}

void MR_CALL 
parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_116_121_112_101_95_99_116_111_114_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_12,
  MR_Word S_5,
  MR_Word HeadVar__2_2)
{
  MR_Word SymName_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
  MR_Integer Arity_14 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv1_STATE_VARIABLE_U_2_17;
  void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv3_STATE_VARIABLE_U_10;

  parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_101_115_99_97_112_101_100_95_115_121_109_95_110_97_109_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_12, S_5, SymName_13);
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_12, 0)), 6))));
  func_0(((MR_Box) (TypeClassInfo_for_pt_output_12)), ((MR_Box) ((MR_String) "/")), ((MR_Box) (S_5)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_2_17);
  func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_12, 0)), 10))));
  func_2(((MR_Box) (TypeClassInfo_for_pt_output_12)), ((MR_Box) (Arity_14)), ((MR_Box) (S_5)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_U_10);
}

void MR_CALL 
parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_116_121_112_101_95_99_116_111_114_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_12,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_U_0_9,
  MR_Word * STATE_VARIABLE_U_10)
{
  MR_Word SymName_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
  MR_Integer Arity_14 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
  MR_Word STATE_VARIABLE_U_1_15;
  MR_Word STATE_VARIABLE_U_2_17;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv1_STATE_VARIABLE_U_2_17;
  void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv3_STATE_VARIABLE_U_10;

  parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_101_115_99_97_112_101_100_95_115_121_109_95_110_97_109_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_12, SymName_13, STATE_VARIABLE_U_0_9, &STATE_VARIABLE_U_1_15);
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_12, 0)), 6))));
  func_0(((MR_Box) (TypeClassInfo_for_pt_output_12)), ((MR_Box) ((MR_String) "/")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_1_15)), &conv1_STATE_VARIABLE_U_2_17);
  STATE_VARIABLE_U_2_17 = ((MR_Word) (conv1_STATE_VARIABLE_U_2_17));
  func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_12, 0)), 10))));
  func_2(((MR_Box) (TypeClassInfo_for_pt_output_12)), ((MR_Box) (Arity_14)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_2_17)), &conv3_STATE_VARIABLE_U_10);
  *STATE_VARIABLE_U_10 = ((MR_Word) (conv3_STATE_VARIABLE_U_10));
}

void MR_CALL 
parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_116_121_112_101_95_110_97_109_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_11,
  MR_Word S_5,
  MR_Word HeadVar__2_2)
{
  MR_Word SymName_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));

  parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_101_115_99_97_112_101_100_95_115_121_109_95_110_97_109_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_11, S_5, SymName_6);
}

void MR_CALL 
parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_116_121_112_101_95_110_97_109_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_11,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_U_0_9,
  MR_Word * STATE_VARIABLE_U_10)
{
  MR_Word SymName_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));

  parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_101_115_99_97_112_101_100_95_115_121_109_95_110_97_109_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_11, SymName_6, STATE_VARIABLE_U_0_9, STATE_VARIABLE_U_10);
}

void MR_CALL 
parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_117_110_101_115_99_97_112_101_100_95_115_121_109_95_110_97_109_101_95_97_114_105_116_121_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_14,
  MR_Word S_5,
  MR_Word HeadVar__2_2)
{
  MR_Word SymName_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
  MR_Integer Arity_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv1_STATE_VARIABLE_U_2_13;
  void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv3_STATE_VARIABLE_U_10;

  parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_117_110_101_115_99_97_112_101_100_95_115_121_109_95_110_97_109_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_14, S_5, SymName_6);
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_14, 0)), 6))));
  func_0(((MR_Box) (TypeClassInfo_for_pt_output_14)), ((MR_Box) ((MR_String) "/")), ((MR_Box) (S_5)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_2_13);
  func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_14, 0)), 10))));
  func_2(((MR_Box) (TypeClassInfo_for_pt_output_14)), ((MR_Box) (Arity_7)), ((MR_Box) (S_5)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_U_10);
}

void MR_CALL 
parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_117_110_101_115_99_97_112_101_100_95_115_121_109_95_110_97_109_101_95_97_114_105_116_121_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_14,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_U_0_9,
  MR_Word * STATE_VARIABLE_U_10)
{
  MR_Word SymName_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
  MR_Integer Arity_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
  MR_Word STATE_VARIABLE_U_1_11;
  MR_Word STATE_VARIABLE_U_2_13;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv1_STATE_VARIABLE_U_2_13;
  void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv3_STATE_VARIABLE_U_10;

  parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_117_110_101_115_99_97_112_101_100_95_115_121_109_95_110_97_109_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_14, SymName_6, STATE_VARIABLE_U_0_9, &STATE_VARIABLE_U_1_11);
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_14, 0)), 6))));
  func_0(((MR_Box) (TypeClassInfo_for_pt_output_14)), ((MR_Box) ((MR_String) "/")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_1_11)), &conv1_STATE_VARIABLE_U_2_13);
  STATE_VARIABLE_U_2_13 = ((MR_Word) (conv1_STATE_VARIABLE_U_2_13));
  func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_14, 0)), 10))));
  func_2(((MR_Box) (TypeClassInfo_for_pt_output_14)), ((MR_Box) (Arity_7)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_2_13)), &conv3_STATE_VARIABLE_U_10);
  *STATE_VARIABLE_U_10 = ((MR_Word) (conv3_STATE_VARIABLE_U_10));
}

void MR_CALL 
parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_98_114_97_99_107_101_116_101_100_95_115_121_109_95_110_97_109_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_11,
  MR_Word SymName_5,
  MR_Word S_6)
{
  parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_98_114_97_99_107_101_116_101_100_95_115_121_109_95_110_97_109_101_95_110_103_116_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_pt_output_11, (MR_Integer) 1, SymName_5, S_6);
}

void MR_CALL 
parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_98_114_97_99_107_101_116_101_100_95_115_121_109_95_110_97_109_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_11,
  MR_Word SymName_5,
  MR_Word STATE_VARIABLE_U_0_8,
  MR_Word * STATE_VARIABLE_U_9)
{
  parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_98_114_97_99_107_101_116_101_100_95_115_121_109_95_110_97_109_101_95_110_103_116_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_pt_output_11, (MR_Integer) 1, SymName_5, STATE_VARIABLE_U_0_8, STATE_VARIABLE_U_9);
}

void MR_CALL 
parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_98_114_97_99_107_101_116_101_100_95_115_121_109_95_110_97_109_101_95_97_114_105_116_121_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_14,
  MR_Word HeadVar__1_1,
  MR_Word S_7)
{
  MR_Word SymName_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
  MR_Integer Arity_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 1))));
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv1_STATE_VARIABLE_U_2_13;
  void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv3_STATE_VARIABLE_U_10;

  parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_98_114_97_99_107_101_116_101_100_95_115_121_109_95_110_97_109_101_95_110_103_116_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_pt_output_14, (MR_Integer) 1, SymName_5, S_7);
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_14, 0)), 5))));
  func_0(((MR_Box) (TypeClassInfo_for_pt_output_14)), ((MR_Box) (MR_Word) ((MR_Char) 47)), ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_2_13);
  func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_14, 0)), 10))));
  func_2(((MR_Box) (TypeClassInfo_for_pt_output_14)), ((MR_Box) (Arity_6)), ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_U_10);
}

void MR_CALL 
parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_98_114_97_99_107_101_116_101_100_95_115_121_109_95_110_97_109_101_95_97_114_105_116_121_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_14,
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_U_0_9,
  MR_Word * STATE_VARIABLE_U_10)
{
  MR_Word SymName_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
  MR_Integer Arity_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 1))));
  MR_Word STATE_VARIABLE_U_1_11;
  MR_Word STATE_VARIABLE_U_2_13;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv1_STATE_VARIABLE_U_2_13;
  void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv3_STATE_VARIABLE_U_10;

  parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_98_114_97_99_107_101_116_101_100_95_115_121_109_95_110_97_109_101_95_110_103_116_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_pt_output_14, (MR_Integer) 1, SymName_5, STATE_VARIABLE_U_0_9, &STATE_VARIABLE_U_1_11);
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_14, 0)), 5))));
  func_0(((MR_Box) (TypeClassInfo_for_pt_output_14)), ((MR_Box) (MR_Word) ((MR_Char) 47)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_1_11)), &conv1_STATE_VARIABLE_U_2_13);
  STATE_VARIABLE_U_2_13 = ((MR_Word) (conv1_STATE_VARIABLE_U_2_13));
  func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_14, 0)), 10))));
  func_2(((MR_Box) (TypeClassInfo_for_pt_output_14)), ((MR_Box) (Arity_6)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_2_13)), &conv3_STATE_VARIABLE_U_10);
  *STATE_VARIABLE_U_10 = ((MR_Word) (conv3_STATE_VARIABLE_U_10));
}

void MR_CALL 
parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_115_121_109_95_110_97_109_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_11,
  MR_Word SymName_5,
  MR_Word S_6)
{
  parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_115_121_109_95_110_97_109_101_95_110_103_116_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_pt_output_11, (MR_Integer) 1, SymName_5, S_6);
}

void MR_CALL 
parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_115_121_109_95_110_97_109_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_11,
  MR_Word SymName_5,
  MR_Word STATE_VARIABLE_U_0_8,
  MR_Word * STATE_VARIABLE_U_9)
{
  parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_115_121_109_95_110_97_109_101_95_110_103_116_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_pt_output_11, (MR_Integer) 1, SymName_5, STATE_VARIABLE_U_0_8, STATE_VARIABLE_U_9);
}

void MR_CALL 
parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_115_121_109_95_110_97_109_101_95_97_114_105_116_121_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_14,
  MR_Word HeadVar__1_1,
  MR_Word S_7)
{
  MR_Word SymName_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
  MR_Integer Arity_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 1))));
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv1_STATE_VARIABLE_U_2_13;
  void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv3_STATE_VARIABLE_U_10;

  parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_115_121_109_95_110_97_109_101_95_110_103_116_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_pt_output_14, (MR_Integer) 1, SymName_5, S_7);
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_14, 0)), 5))));
  func_0(((MR_Box) (TypeClassInfo_for_pt_output_14)), ((MR_Box) (MR_Word) ((MR_Char) 47)), ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_2_13);
  func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_14, 0)), 10))));
  func_2(((MR_Box) (TypeClassInfo_for_pt_output_14)), ((MR_Box) (Arity_6)), ((MR_Box) (S_7)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_U_10);
}

void MR_CALL 
parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_115_121_109_95_110_97_109_101_95_97_114_105_116_121_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_14,
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_U_0_9,
  MR_Word * STATE_VARIABLE_U_10)
{
  MR_Word SymName_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
  MR_Integer Arity_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 1))));
  MR_Word STATE_VARIABLE_U_1_11;
  MR_Word STATE_VARIABLE_U_2_13;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv1_STATE_VARIABLE_U_2_13;
  void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv3_STATE_VARIABLE_U_10;

  parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_115_121_109_95_110_97_109_101_95_110_103_116_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_pt_output_14, (MR_Integer) 1, SymName_5, STATE_VARIABLE_U_0_9, &STATE_VARIABLE_U_1_11);
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_14, 0)), 5))));
  func_0(((MR_Box) (TypeClassInfo_for_pt_output_14)), ((MR_Box) (MR_Word) ((MR_Char) 47)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_1_11)), &conv1_STATE_VARIABLE_U_2_13);
  STATE_VARIABLE_U_2_13 = ((MR_Word) (conv1_STATE_VARIABLE_U_2_13));
  func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_14, 0)), 10))));
  func_2(((MR_Box) (TypeClassInfo_for_pt_output_14)), ((MR_Box) (Arity_6)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_2_13)), &conv3_STATE_VARIABLE_U_10);
  *STATE_VARIABLE_U_10 = ((MR_Word) (conv3_STATE_VARIABLE_U_10));
}

void MR_CALL 
parse_tree__parse_tree_out_sym_name____Compare____needs_brackets_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

MR_bool MR_CALL 
parse_tree__parse_tree_out_sym_name____Unify____needs_brackets_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
parse_tree__parse_tree_out_sym_name__format_class_id_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_12,
  MR_Box S_5,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_U_0_9,
  MR_Box * STATE_VARIABLE_U_10)
{
  MR_Word SymName_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
  MR_Integer Arity_14 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
  MR_Box STATE_VARIABLE_U_1_15;
  MR_Box STATE_VARIABLE_U_2_17;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

  parse_tree__parse_tree_out_sym_name__format_escaped_sym_name_4_p_0(TypeClassInfo_for_pt_output_12, S_5, SymName_13, STATE_VARIABLE_U_0_9, &STATE_VARIABLE_U_1_15);
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_12, 0)), 6))));
  func_0(((MR_Box) (TypeClassInfo_for_pt_output_12)), ((MR_Box) ((MR_String) "/")), S_5, STATE_VARIABLE_U_1_15, &STATE_VARIABLE_U_2_17);
  func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_12, 0)), 10))));
  func_1(((MR_Box) (TypeClassInfo_for_pt_output_12)), ((MR_Box) (Arity_14)), S_5, STATE_VARIABLE_U_2_17, STATE_VARIABLE_U_10);
}

void MR_CALL 
parse_tree__parse_tree_out_sym_name__write_class_id_4_p_0(
  MR_Word Stream_5,
  MR_Word ClassId_6)
{
  MR_Word SymName_14 = ((MR_Word) ((MR_hl_field(0, ClassId_6, 0))));
  MR_Integer Arity_15 = ((MR_Integer) ((MR_hl_field(0, ClassId_6, 1))));
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv1_STATE_VARIABLE_U_2_18;
  void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv3_STATE_VARIABLE_IO_9;

  parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_101_115_99_97_112_101_100_95_115_121_109_95_110_97_109_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0((MR_Word) (&parse_tree__parse_tree_out_sym_name_scalar_common_2[3]), Stream_5, SymName_14);
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_sym_name_scalar_common_2[3]), 0)), 6))));
  func_0(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_sym_name_scalar_common_2[3]))), ((MR_Box) ((MR_String) "/")), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_2_18);
  func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_sym_name_scalar_common_2[3]), 0)), 10))));
  func_2(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_sym_name_scalar_common_2[3]))), ((MR_Box) (Arity_15)), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_9);
}

MR_String MR_CALL 
parse_tree__parse_tree_out_sym_name__class_id_to_string_1_f_0(
  MR_Word ClassId_3)
{
  MR_String Str_4;
  MR_Word State0_5;
  MR_Word State_6;
  MR_Word SymName_12;
  MR_Integer Arity_13;
  MR_Word STATE_VARIABLE_U_1_14;
  MR_Word STATE_VARIABLE_U_2_16;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv1_STATE_VARIABLE_U_2_16;
  void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv3_State_6;

  State0_5 = mercury__string__builder__init_0_f_0();
  SymName_12 = ((MR_Word) ((MR_hl_field(0, ClassId_3, 0))));
  Arity_13 = ((MR_Integer) ((MR_hl_field(0, ClassId_3, 1))));
  parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_101_115_99_97_112_101_100_95_115_121_109_95_110_97_109_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0((MR_Word) (&parse_tree__parse_tree_out_sym_name_scalar_common_2[1]), SymName_12, State0_5, &STATE_VARIABLE_U_1_14);
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_sym_name_scalar_common_2[1]), 0)), 6))));
  func_0(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_sym_name_scalar_common_2[1]))), ((MR_Box) ((MR_String) "/")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_1_14)), &conv1_STATE_VARIABLE_U_2_16);
  STATE_VARIABLE_U_2_16 = ((MR_Word) (conv1_STATE_VARIABLE_U_2_16));
  func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_sym_name_scalar_common_2[1]), 0)), 10))));
  func_2(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_sym_name_scalar_common_2[1]))), ((MR_Box) (Arity_13)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_2_16)), &conv3_State_6);
  State_6 = ((MR_Word) (conv3_State_6));
  Str_4 = mercury__string__builder__to_string_1_f_0(State_6);
  return Str_4;
}

void MR_CALL 
parse_tree__parse_tree_out_sym_name__format_type_name_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_11,
  MR_Box S_5,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_U_0_9,
  MR_Box * STATE_VARIABLE_U_10)
{
  MR_Word SymName_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));

  parse_tree__parse_tree_out_sym_name__format_escaped_sym_name_4_p_0(TypeClassInfo_for_pt_output_11, S_5, SymName_6, STATE_VARIABLE_U_0_9, STATE_VARIABLE_U_10);
}

void MR_CALL 
parse_tree__parse_tree_out_sym_name__write_type_name_4_p_0(
  MR_Word Stream_5,
  MR_Word TypeCtor_6)
{
  MR_Word SymName_11 = ((MR_Word) ((MR_hl_field(0, TypeCtor_6, 0))));

  parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_101_115_99_97_112_101_100_95_115_121_109_95_110_97_109_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0((MR_Word) (&parse_tree__parse_tree_out_sym_name_scalar_common_2[3]), Stream_5, SymName_11);
}

MR_String MR_CALL 
parse_tree__parse_tree_out_sym_name__type_name_to_string_1_f_0(
  MR_Word TypeCtor_3)
{
  MR_String Str_4;
  MR_Word State0_5;
  MR_Word State_6;
  MR_Word SymName_9;

  State0_5 = mercury__string__builder__init_0_f_0();
  SymName_9 = ((MR_Word) ((MR_hl_field(0, TypeCtor_3, 0))));
  parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_101_115_99_97_112_101_100_95_115_121_109_95_110_97_109_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0((MR_Word) (&parse_tree__parse_tree_out_sym_name_scalar_common_2[1]), SymName_9, State0_5, &State_6);
  Str_4 = mercury__string__builder__to_string_1_f_0(State_6);
  return Str_4;
}

void MR_CALL 
parse_tree__parse_tree_out_sym_name__format_type_ctor_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_12,
  MR_Box S_5,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_U_0_9,
  MR_Box * STATE_VARIABLE_U_10)
{
  MR_Word SymName_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
  MR_Integer Arity_14 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
  MR_Box STATE_VARIABLE_U_1_15;
  MR_Box STATE_VARIABLE_U_2_17;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

  parse_tree__parse_tree_out_sym_name__format_escaped_sym_name_4_p_0(TypeClassInfo_for_pt_output_12, S_5, SymName_13, STATE_VARIABLE_U_0_9, &STATE_VARIABLE_U_1_15);
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_12, 0)), 6))));
  func_0(((MR_Box) (TypeClassInfo_for_pt_output_12)), ((MR_Box) ((MR_String) "/")), S_5, STATE_VARIABLE_U_1_15, &STATE_VARIABLE_U_2_17);
  func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_12, 0)), 10))));
  func_1(((MR_Box) (TypeClassInfo_for_pt_output_12)), ((MR_Box) (Arity_14)), S_5, STATE_VARIABLE_U_2_17, STATE_VARIABLE_U_10);
}

void MR_CALL 
parse_tree__parse_tree_out_sym_name__write_type_ctor_4_p_0(
  MR_Word Stream_5,
  MR_Word TypeCtor_6)
{
  MR_Word SymName_14 = ((MR_Word) ((MR_hl_field(0, TypeCtor_6, 0))));
  MR_Integer Arity_15 = ((MR_Integer) ((MR_hl_field(0, TypeCtor_6, 1))));
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv1_STATE_VARIABLE_U_2_18;
  void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv3_STATE_VARIABLE_IO_9;

  parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_101_115_99_97_112_101_100_95_115_121_109_95_110_97_109_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0((MR_Word) (&parse_tree__parse_tree_out_sym_name_scalar_common_2[3]), Stream_5, SymName_14);
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_sym_name_scalar_common_2[3]), 0)), 6))));
  func_0(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_sym_name_scalar_common_2[3]))), ((MR_Box) ((MR_String) "/")), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_2_18);
  func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_sym_name_scalar_common_2[3]), 0)), 10))));
  func_2(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_sym_name_scalar_common_2[3]))), ((MR_Box) (Arity_15)), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_9);
}

MR_String MR_CALL 
parse_tree__parse_tree_out_sym_name__type_ctor_to_string_1_f_0(
  MR_Word TypeCtor_3)
{
  MR_String Str_4;
  MR_Word State0_5;
  MR_Word State_6;
  MR_Word SymName_12;
  MR_Integer Arity_13;
  MR_Word STATE_VARIABLE_U_1_14;
  MR_Word STATE_VARIABLE_U_2_16;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv1_STATE_VARIABLE_U_2_16;
  void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv3_State_6;

  State0_5 = mercury__string__builder__init_0_f_0();
  SymName_12 = ((MR_Word) ((MR_hl_field(0, TypeCtor_3, 0))));
  Arity_13 = ((MR_Integer) ((MR_hl_field(0, TypeCtor_3, 1))));
  parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_101_115_99_97_112_101_100_95_115_121_109_95_110_97_109_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0((MR_Word) (&parse_tree__parse_tree_out_sym_name_scalar_common_2[1]), SymName_12, State0_5, &STATE_VARIABLE_U_1_14);
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_sym_name_scalar_common_2[1]), 0)), 6))));
  func_0(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_sym_name_scalar_common_2[1]))), ((MR_Box) ((MR_String) "/")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_1_14)), &conv1_STATE_VARIABLE_U_2_16);
  STATE_VARIABLE_U_2_16 = ((MR_Word) (conv1_STATE_VARIABLE_U_2_16));
  func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_sym_name_scalar_common_2[1]), 0)), 10))));
  func_2(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_sym_name_scalar_common_2[1]))), ((MR_Box) (Arity_13)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_2_16)), &conv3_State_6);
  State_6 = ((MR_Word) (conv3_State_6));
  Str_4 = mercury__string__builder__to_string_1_f_0(State_6);
  return Str_4;
}

MR_String MR_CALL 
parse_tree__parse_tree_out_sym_name__pf_sym_name_user_arity_to_unquoted_string_2_f_0(
  MR_Word PredOrFunc_4,
  MR_Word SNA_5)
{
  MR_String Str_6;
  MR_Word SymName_7 = ((MR_Word) ((MR_hl_field(0, SNA_5, 0))));
  MR_Integer Arity_8 = ((MR_Integer) ((MR_hl_field(0, SNA_5, 1))));

  Str_6 = parse_tree__parse_tree_out_sym_name__pf_sym_name_user_arity_to_unquoted_string_3_f_0(PredOrFunc_4, SymName_7, Arity_8);
  return Str_6;
}

MR_String MR_CALL 
parse_tree__parse_tree_out_sym_name__pf_sym_name_user_arity_to_unquoted_string_1_f_0(
  MR_Word PFSymNameArity_3)
{
  MR_String Str_4;
  MR_Word PredOrFunc_5 = ((MR_Unsigned) ((MR_hl_field(0, PFSymNameArity_3, 0))) & (MR_Integer) 1);
  MR_Word SymName_6 = ((MR_Word) ((MR_hl_field(0, PFSymNameArity_3, 1))));
  MR_Integer Arity_7;
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, PFSymNameArity_3, 2))));

  Arity_7 = (MR_Integer) (Var_8);
  Str_4 = parse_tree__parse_tree_out_sym_name__pf_sym_name_user_arity_to_unquoted_string_3_f_0(PredOrFunc_5, SymName_6, Arity_7);
  return Str_4;
}

MR_String MR_CALL 
parse_tree__parse_tree_out_sym_name__pf_sym_name_user_arity_to_unquoted_string_3_f_0(
  MR_Word PredOrFunc_5,
  MR_Word SymName_6,
  MR_Integer Arity_7)
{
  MR_String Str_8;
  MR_String PredOrFuncStr_9;
  MR_String SymNameStr_10;
  MR_String Var_19;
  MR_String Var_27;
  MR_String Var_28;
  MR_String Var_30;

  PredOrFuncStr_9 = mdbcomp__prim_data__pred_or_func_to_full_str_1_f_0(PredOrFunc_5);
  SymNameStr_10 = mdbcomp__sym_name__sym_name_to_string_1_f_0(SymName_6);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_tree_out_sym_name_scalar_common_4[0]), Arity_7, &Var_19);
  Var_27 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_19);
  Var_28 = mercury__string__f_43_43_2_f_0(SymNameStr_10, Var_27);
  Var_30 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_28);
  Str_8 = mercury__string__f_43_43_2_f_0(PredOrFuncStr_9, Var_30);
  return Str_8;
}

MR_String MR_CALL 
parse_tree__parse_tree_out_sym_name__pf_sym_name_user_arity_to_string_2_f_0(
  MR_Word PredOrFunc_4,
  MR_Word SNA_5)
{
  MR_String Str_6;
  MR_Word SymName_7 = ((MR_Word) ((MR_hl_field(0, SNA_5, 0))));
  MR_Integer Arity_8 = ((MR_Integer) ((MR_hl_field(0, SNA_5, 1))));

  Str_6 = parse_tree__parse_tree_out_sym_name__pf_sym_name_user_arity_to_string_3_f_0(PredOrFunc_4, SymName_7, Arity_8);
  return Str_6;
}

MR_String MR_CALL 
parse_tree__parse_tree_out_sym_name__pf_sym_name_user_arity_to_string_1_f_0(
  MR_Word PFSymNameArity_3)
{
  MR_String Str_4;
  MR_Word PredOrFunc_5 = ((MR_Unsigned) ((MR_hl_field(0, PFSymNameArity_3, 0))) & (MR_Integer) 1);
  MR_Word SymName_6 = ((MR_Word) ((MR_hl_field(0, PFSymNameArity_3, 1))));
  MR_Integer Arity_7;
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, PFSymNameArity_3, 2))));

  Arity_7 = (MR_Integer) (Var_8);
  Str_4 = parse_tree__parse_tree_out_sym_name__pf_sym_name_user_arity_to_string_3_f_0(PredOrFunc_5, SymName_6, Arity_7);
  return Str_4;
}

MR_String MR_CALL 
parse_tree__parse_tree_out_sym_name__pf_sym_name_user_arity_to_string_3_f_0(
  MR_Word PredOrFunc_5,
  MR_Word SymName_6,
  MR_Integer Arity_7)
{
  MR_String Str_8;
  MR_String PredOrFuncStr_9;
  MR_String SymNameStr_10;
  MR_String Var_19;
  MR_String Var_27;
  MR_String Var_28;
  MR_String Var_30;

  PredOrFuncStr_9 = mdbcomp__prim_data__pred_or_func_to_full_str_1_f_0(PredOrFunc_5);
  SymNameStr_10 = mdbcomp__sym_name__sym_name_to_string_1_f_0(SymName_6);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_tree_out_sym_name_scalar_common_4[0]), Arity_7, &Var_19);
  Var_27 = mercury__string__f_43_43_2_f_0((MR_String) "\'/", Var_19);
  Var_28 = mercury__string__f_43_43_2_f_0(SymNameStr_10, Var_27);
  Var_30 = mercury__string__f_43_43_2_f_0((MR_String) " \140", Var_28);
  Str_8 = mercury__string__f_43_43_2_f_0(PredOrFuncStr_9, Var_30);
  return Str_8;
}

MR_String MR_CALL 
parse_tree__parse_tree_out_sym_name__pf_sym_name_pred_form_arity_to_string_2_f_0(
  MR_Word PredOrFunc_4,
  MR_Word SNA_5)
{
  MR_String Str_6;
  MR_Word SymName_7 = ((MR_Word) ((MR_hl_field(0, SNA_5, 0))));
  MR_Integer Arity_8 = ((MR_Integer) ((MR_hl_field(0, SNA_5, 1))));
  MR_Word PredFormArity_9 = (MR_Word) (Arity_8);

  Str_6 = parse_tree__parse_tree_out_sym_name__pf_sym_name_pred_form_arity_to_string_3_f_0(PredOrFunc_4, SymName_7, PredFormArity_9);
  return Str_6;
}

MR_String MR_CALL 
parse_tree__parse_tree_out_sym_name__pf_sym_name_pred_form_arity_to_string_1_f_0(
  MR_Word PFSymNameArity_3)
{
  MR_String Str_4;
  MR_Word PredOrFunc_5 = ((MR_Unsigned) ((MR_hl_field(0, PFSymNameArity_3, 0))) & (MR_Integer) 1);
  MR_Word SymName_6 = ((MR_Word) ((MR_hl_field(0, PFSymNameArity_3, 1))));
  MR_Word PredFormArity_7 = ((MR_Word) ((MR_hl_field(0, PFSymNameArity_3, 2))));

  Str_4 = parse_tree__parse_tree_out_sym_name__pf_sym_name_pred_form_arity_to_string_3_f_0(PredOrFunc_5, SymName_6, PredFormArity_7);
  return Str_4;
}

MR_String MR_CALL 
parse_tree__parse_tree_out_sym_name__pf_sym_name_pred_form_arity_to_string_3_f_0(
  MR_Word PredOrFunc_5,
  MR_Word SymName_6,
  MR_Word PredFormArity_7)
{
  MR_String Str_8;
  MR_Integer UserArityInt_9;
  MR_String PredOrFuncStr_10;
  MR_String SymNameStr_11;
  MR_Word Var_12;
  MR_String Var_21;
  MR_String Var_29;
  MR_String Var_30;
  MR_String Var_32;

  parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_5, &Var_12, PredFormArity_7);
  UserArityInt_9 = (MR_Integer) (Var_12);
  PredOrFuncStr_10 = mdbcomp__prim_data__pred_or_func_to_full_str_1_f_0(PredOrFunc_5);
  SymNameStr_11 = mdbcomp__sym_name__sym_name_to_string_1_f_0(SymName_6);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__parse_tree_out_sym_name_scalar_common_4[0]), UserArityInt_9, &Var_21);
  Var_29 = mercury__string__f_43_43_2_f_0((MR_String) "\'/", Var_21);
  Var_30 = mercury__string__f_43_43_2_f_0(SymNameStr_11, Var_29);
  Var_32 = mercury__string__f_43_43_2_f_0((MR_String) " \140", Var_30);
  Str_8 = mercury__string__f_43_43_2_f_0(PredOrFuncStr_10, Var_32);
  return Str_8;
}

void MR_CALL 
parse_tree__parse_tree_out_sym_name__format_escaped_sym_name_arity_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_14,
  MR_Box S_5,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_U_0_9,
  MR_Box * STATE_VARIABLE_U_10)
{
  MR_Word SymName_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
  MR_Integer Arity_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
  MR_Box STATE_VARIABLE_U_1_11;
  MR_Box STATE_VARIABLE_U_2_13;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

  parse_tree__parse_tree_out_sym_name__format_escaped_sym_name_4_p_0(TypeClassInfo_for_pt_output_14, S_5, SymName_6, STATE_VARIABLE_U_0_9, &STATE_VARIABLE_U_1_11);
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_14, 0)), 6))));
  func_0(((MR_Box) (TypeClassInfo_for_pt_output_14)), ((MR_Box) ((MR_String) "/")), S_5, STATE_VARIABLE_U_1_11, &STATE_VARIABLE_U_2_13);
  func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_14, 0)), 10))));
  func_1(((MR_Box) (TypeClassInfo_for_pt_output_14)), ((MR_Box) (Arity_7)), S_5, STATE_VARIABLE_U_2_13, STATE_VARIABLE_U_10);
}

void MR_CALL 
parse_tree__parse_tree_out_sym_name__write_escaped_sym_name_arity_4_p_0(
  MR_Word Stream_5,
  MR_Word SymNameArity_6)
{
  MR_Word SymName_11 = ((MR_Word) ((MR_hl_field(0, SymNameArity_6, 0))));
  MR_Integer Arity_12 = ((MR_Integer) ((MR_hl_field(0, SymNameArity_6, 1))));
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv1_STATE_VARIABLE_U_2_15;
  void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv3_STATE_VARIABLE_IO_9;

  parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_101_115_99_97_112_101_100_95_115_121_109_95_110_97_109_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0((MR_Word) (&parse_tree__parse_tree_out_sym_name_scalar_common_2[3]), Stream_5, SymName_11);
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_sym_name_scalar_common_2[3]), 0)), 6))));
  func_0(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_sym_name_scalar_common_2[3]))), ((MR_Box) ((MR_String) "/")), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_2_15);
  func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_sym_name_scalar_common_2[3]), 0)), 10))));
  func_2(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_sym_name_scalar_common_2[3]))), ((MR_Box) (Arity_12)), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_9);
}

MR_String MR_CALL 
parse_tree__parse_tree_out_sym_name__escaped_sym_name_arity_to_string_1_f_0(
  MR_Word SymNameArity_3)
{
  MR_String Str_4;
  MR_Word State0_5;
  MR_Word State_6;
  MR_Word SymName_9;
  MR_Integer Arity_10;
  MR_Word STATE_VARIABLE_U_1_11;
  MR_Word STATE_VARIABLE_U_2_13;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv1_STATE_VARIABLE_U_2_13;
  void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv3_State_6;

  State0_5 = mercury__string__builder__init_0_f_0();
  SymName_9 = ((MR_Word) ((MR_hl_field(0, SymNameArity_3, 0))));
  Arity_10 = ((MR_Integer) ((MR_hl_field(0, SymNameArity_3, 1))));
  parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_101_115_99_97_112_101_100_95_115_121_109_95_110_97_109_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0((MR_Word) (&parse_tree__parse_tree_out_sym_name_scalar_common_2[1]), SymName_9, State0_5, &STATE_VARIABLE_U_1_11);
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_sym_name_scalar_common_2[1]), 0)), 6))));
  func_0(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_sym_name_scalar_common_2[1]))), ((MR_Box) ((MR_String) "/")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_1_11)), &conv1_STATE_VARIABLE_U_2_13);
  STATE_VARIABLE_U_2_13 = ((MR_Word) (conv1_STATE_VARIABLE_U_2_13));
  func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_sym_name_scalar_common_2[1]), 0)), 10))));
  func_2(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_sym_name_scalar_common_2[1]))), ((MR_Box) (Arity_10)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_2_13)), &conv3_State_6);
  State_6 = ((MR_Word) (conv3_State_6));
  Str_4 = mercury__string__builder__to_string_1_f_0(State_6);
  return Str_4;
}

void MR_CALL 
parse_tree__parse_tree_out_sym_name__format_unescaped_sym_name_arity_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_14,
  MR_Box S_5,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_U_0_9,
  MR_Box * STATE_VARIABLE_U_10)
{
  MR_Word SymName_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
  MR_Integer Arity_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
  MR_Box STATE_VARIABLE_U_1_11;
  MR_Box STATE_VARIABLE_U_2_13;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

  parse_tree__parse_tree_out_sym_name__format_unescaped_sym_name_4_p_0(TypeClassInfo_for_pt_output_14, S_5, SymName_6, STATE_VARIABLE_U_0_9, &STATE_VARIABLE_U_1_11);
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_14, 0)), 6))));
  func_0(((MR_Box) (TypeClassInfo_for_pt_output_14)), ((MR_Box) ((MR_String) "/")), S_5, STATE_VARIABLE_U_1_11, &STATE_VARIABLE_U_2_13);
  func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_14, 0)), 10))));
  func_1(((MR_Box) (TypeClassInfo_for_pt_output_14)), ((MR_Box) (Arity_7)), S_5, STATE_VARIABLE_U_2_13, STATE_VARIABLE_U_10);
}

void MR_CALL 
parse_tree__parse_tree_out_sym_name__write_unescaped_sym_name_arity_4_p_0(
  MR_Word Stream_5,
  MR_Word SymNameArity_6)
{
  MR_Word SymName_11 = ((MR_Word) ((MR_hl_field(0, SymNameArity_6, 0))));
  MR_Integer Arity_12 = ((MR_Integer) ((MR_hl_field(0, SymNameArity_6, 1))));
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv1_STATE_VARIABLE_U_2_15;
  void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv3_STATE_VARIABLE_IO_9;

  parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_101_115_99_97_112_101_100_95_115_121_109_95_110_97_109_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0((MR_Word) (&parse_tree__parse_tree_out_sym_name_scalar_common_2[3]), Stream_5, SymName_11);
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_sym_name_scalar_common_2[3]), 0)), 6))));
  func_0(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_sym_name_scalar_common_2[3]))), ((MR_Box) ((MR_String) "/")), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_2_15);
  func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_sym_name_scalar_common_2[3]), 0)), 10))));
  func_2(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_sym_name_scalar_common_2[3]))), ((MR_Box) (Arity_12)), ((MR_Box) (Stream_5)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_9);
}

MR_String MR_CALL 
parse_tree__parse_tree_out_sym_name__unescaped_sym_name_arity_to_string_1_f_0(
  MR_Word SymNameArity_3)
{
  MR_String Str_4;
  MR_Word State0_5;
  MR_Word State_6;
  MR_Word SymName_9;
  MR_Integer Arity_10;
  MR_Word STATE_VARIABLE_U_1_11;
  MR_Word STATE_VARIABLE_U_2_13;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv1_STATE_VARIABLE_U_2_13;
  void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv3_State_6;

  State0_5 = mercury__string__builder__init_0_f_0();
  SymName_9 = ((MR_Word) ((MR_hl_field(0, SymNameArity_3, 0))));
  Arity_10 = ((MR_Integer) ((MR_hl_field(0, SymNameArity_3, 1))));
  parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_117_110_101_115_99_97_112_101_100_95_115_121_109_95_110_97_109_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0((MR_Word) (&parse_tree__parse_tree_out_sym_name_scalar_common_2[1]), SymName_9, State0_5, &STATE_VARIABLE_U_1_11);
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_sym_name_scalar_common_2[1]), 0)), 6))));
  func_0(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_sym_name_scalar_common_2[1]))), ((MR_Box) ((MR_String) "/")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_1_11)), &conv1_STATE_VARIABLE_U_2_13);
  STATE_VARIABLE_U_2_13 = ((MR_Word) (conv1_STATE_VARIABLE_U_2_13));
  func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_sym_name_scalar_common_2[1]), 0)), 10))));
  func_2(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_sym_name_scalar_common_2[1]))), ((MR_Box) (Arity_10)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_2_13)), &conv3_State_6);
  State_6 = ((MR_Word) (conv3_State_6));
  Str_4 = mercury__string__builder__to_string_1_f_0(State_6);
  return Str_4;
}

void MR_CALL 
parse_tree__parse_tree_out_sym_name__format_escaped_sym_name_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_18,
  MR_Box S_5,
  MR_Word SymName_6,
  MR_Box STATE_VARIABLE_U_0_10,
  MR_Box * STATE_VARIABLE_U_11)
{
  if (((MR_tag((MR_Word) SymName_6)) == (MR_Integer) 1))
  {
    MR_Word TypeClassInfo_for_writer_19;
    MR_Word ModuleName_8 = ((MR_Word) ((MR_hl_field(1, SymName_6, 0))));
    MR_String Name_9 = ((MR_String) ((MR_hl_field(1, SymName_6, 1))));
    MR_Box STATE_VARIABLE_U_1_12;
    MR_Box STATE_VARIABLE_U_2_14;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    parse_tree__parse_tree_out_sym_name__format_escaped_sym_name_4_p_0(TypeClassInfo_for_pt_output_18, S_5, ModuleName_8, STATE_VARIABLE_U_0_10, &STATE_VARIABLE_U_1_12);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_18, 0)), 6))));
    func_0(((MR_Box) (TypeClassInfo_for_pt_output_18)), ((MR_Box) ((MR_String) ".")), S_5, STATE_VARIABLE_U_1_12, &STATE_VARIABLE_U_2_14);
    mercury__private_builtin__superclass_from_typeclass_info_3_p_0(TypeClassInfo_for_pt_output_18, (MR_Integer) 1, &TypeClassInfo_for_writer_19);
    mercury__term_io__format_escaped_string_4_p_0(TypeClassInfo_for_writer_19, S_5, Name_9, STATE_VARIABLE_U_2_14, STATE_VARIABLE_U_11);
  }
  else
  {
    MR_Word TypeClassInfo_for_writer_21;
    MR_String Name_17 = ((MR_String) ((MR_hl_field(0, SymName_6, 0))));

    mercury__private_builtin__superclass_from_typeclass_info_3_p_0(TypeClassInfo_for_pt_output_18, (MR_Integer) 1, &TypeClassInfo_for_writer_21);
    mercury__term_io__format_escaped_string_4_p_0(TypeClassInfo_for_writer_21, S_5, Name_17, STATE_VARIABLE_U_0_10, STATE_VARIABLE_U_11);
  }
}

void MR_CALL 
parse_tree__parse_tree_out_sym_name__write_escaped_sym_name_4_p_0(
  MR_Word Stream_5,
  MR_Word SymName_6)
{
  parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_101_115_99_97_112_101_100_95_115_121_109_95_110_97_109_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0((MR_Word) (&parse_tree__parse_tree_out_sym_name_scalar_common_2[3]), Stream_5, SymName_6);
}

void MR_CALL 
parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_101_115_99_97_112_101_100_95_115_121_109_95_110_97_109_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_18,
  MR_Word S_5,
  MR_Word SymName_6)
{
  if (((MR_tag((MR_Word) SymName_6)) == (MR_Integer) 1))
  {
    MR_Word TypeClassInfo_for_writer_19;
    MR_Word ModuleName_8 = ((MR_Word) ((MR_hl_field(1, SymName_6, 0))));
    MR_String Name_9 = ((MR_String) ((MR_hl_field(1, SymName_6, 1))));
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv1_STATE_VARIABLE_U_2_14;

    parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_101_115_99_97_112_101_100_95_115_121_109_95_110_97_109_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_18, S_5, ModuleName_8);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_18, 0)), 6))));
    func_0(((MR_Box) (TypeClassInfo_for_pt_output_18)), ((MR_Box) ((MR_String) ".")), ((MR_Box) (S_5)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_2_14);
    mercury__private_builtin__superclass_from_typeclass_info_3_p_0(TypeClassInfo_for_pt_output_18, (MR_Integer) 1, &TypeClassInfo_for_writer_19);
    mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_writer_19, S_5, Name_9);
  }
  else
  {
    MR_Word TypeClassInfo_for_writer_21;
    MR_String Name_17 = ((MR_String) ((MR_hl_field(0, SymName_6, 0))));

    mercury__private_builtin__superclass_from_typeclass_info_3_p_0(TypeClassInfo_for_pt_output_18, (MR_Integer) 1, &TypeClassInfo_for_writer_21);
    mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_writer_21, S_5, Name_17);
  }
}

MR_String MR_CALL 
parse_tree__parse_tree_out_sym_name__escaped_sym_name_to_string_1_f_0(
  MR_Word SymName_3)
{
  MR_String Str_4;
  MR_Word State0_5;
  MR_Word State_6;

  State0_5 = mercury__string__builder__init_0_f_0();
  parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_101_115_99_97_112_101_100_95_115_121_109_95_110_97_109_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0((MR_Word) (&parse_tree__parse_tree_out_sym_name_scalar_common_2[1]), SymName_3, State0_5, &State_6);
  Str_4 = mercury__string__builder__to_string_1_f_0(State_6);
  return Str_4;
}

void MR_CALL 
parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_101_115_99_97_112_101_100_95_115_121_109_95_110_97_109_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_18,
  MR_Word SymName_6,
  MR_Word STATE_VARIABLE_U_0_10,
  MR_Word * STATE_VARIABLE_U_11)
{
  if (((MR_tag((MR_Word) SymName_6)) == (MR_Integer) 1))
  {
    MR_Word TypeClassInfo_for_writer_19;
    MR_Word ModuleName_8 = ((MR_Word) ((MR_hl_field(1, SymName_6, 0))));
    MR_String Name_9 = ((MR_String) ((MR_hl_field(1, SymName_6, 1))));
    MR_Word STATE_VARIABLE_U_1_12;
    MR_Word STATE_VARIABLE_U_2_14;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv1_STATE_VARIABLE_U_2_14;

    parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_101_115_99_97_112_101_100_95_115_121_109_95_110_97_109_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_18, ModuleName_8, STATE_VARIABLE_U_0_10, &STATE_VARIABLE_U_1_12);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_18, 0)), 6))));
    func_0(((MR_Box) (TypeClassInfo_for_pt_output_18)), ((MR_Box) ((MR_String) ".")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_1_12)), &conv1_STATE_VARIABLE_U_2_14);
    STATE_VARIABLE_U_2_14 = ((MR_Word) (conv1_STATE_VARIABLE_U_2_14));
    mercury__private_builtin__superclass_from_typeclass_info_3_p_0(TypeClassInfo_for_pt_output_18, (MR_Integer) 1, &TypeClassInfo_for_writer_19);
    mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_writer_19, Name_9, STATE_VARIABLE_U_2_14, STATE_VARIABLE_U_11);
  }
  else
  {
    MR_Word TypeClassInfo_for_writer_21;
    MR_String Name_17 = ((MR_String) ((MR_hl_field(0, SymName_6, 0))));

    mercury__private_builtin__superclass_from_typeclass_info_3_p_0(TypeClassInfo_for_pt_output_18, (MR_Integer) 1, &TypeClassInfo_for_writer_21);
    mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_writer_21, Name_17, STATE_VARIABLE_U_0_10, STATE_VARIABLE_U_11);
  }
}

void MR_CALL 
parse_tree__parse_tree_out_sym_name__format_unescaped_sym_name_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_18,
  MR_Box S_5,
  MR_Word SymName_6,
  MR_Box STATE_VARIABLE_U_0_10,
  MR_Box * STATE_VARIABLE_U_11)
{
  if (((MR_tag((MR_Word) SymName_6)) == (MR_Integer) 1))
  {
    MR_Word ModuleName_8 = ((MR_Word) ((MR_hl_field(1, SymName_6, 0))));
    MR_String Name_9 = ((MR_String) ((MR_hl_field(1, SymName_6, 1))));
    MR_Box STATE_VARIABLE_U_1_12;
    MR_Box STATE_VARIABLE_U_2_14;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    parse_tree__parse_tree_out_sym_name__format_unescaped_sym_name_4_p_0(TypeClassInfo_for_pt_output_18, S_5, ModuleName_8, STATE_VARIABLE_U_0_10, &STATE_VARIABLE_U_1_12);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_18, 0)), 6))));
    func_0(((MR_Box) (TypeClassInfo_for_pt_output_18)), ((MR_Box) ((MR_String) ".")), S_5, STATE_VARIABLE_U_1_12, &STATE_VARIABLE_U_2_14);
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_18, 0)), 6))));
    func_1(((MR_Box) (TypeClassInfo_for_pt_output_18)), ((MR_Box) (Name_9)), S_5, STATE_VARIABLE_U_2_14, STATE_VARIABLE_U_11);
  }
  else
  {
    MR_String Name_17 = ((MR_String) ((MR_hl_field(0, SymName_6, 0))));
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_18, 0)), 6))));

    func_2(((MR_Box) (TypeClassInfo_for_pt_output_18)), ((MR_Box) (Name_17)), S_5, STATE_VARIABLE_U_0_10, STATE_VARIABLE_U_11);
  }
}

void MR_CALL 
parse_tree__parse_tree_out_sym_name__write_unescaped_sym_name_4_p_0(
  MR_Word Stream_5,
  MR_Word SymName_6)
{
  parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_117_110_101_115_99_97_112_101_100_95_115_121_109_95_110_97_109_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0((MR_Word) (&parse_tree__parse_tree_out_sym_name_scalar_common_2[3]), Stream_5, SymName_6);
}

void MR_CALL 
parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_117_110_101_115_99_97_112_101_100_95_115_121_109_95_110_97_109_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_18,
  MR_Word S_5,
  MR_Word SymName_6)
{
  if (((MR_tag((MR_Word) SymName_6)) == (MR_Integer) 1))
  {
    MR_Word ModuleName_8 = ((MR_Word) ((MR_hl_field(1, SymName_6, 0))));
    MR_String Name_9 = ((MR_String) ((MR_hl_field(1, SymName_6, 1))));
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv1_STATE_VARIABLE_U_2_14;
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv3_STATE_VARIABLE_U_11;

    parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_117_110_101_115_99_97_112_101_100_95_115_121_109_95_110_97_109_101_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_18, S_5, ModuleName_8);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_18, 0)), 6))));
    func_0(((MR_Box) (TypeClassInfo_for_pt_output_18)), ((MR_Box) ((MR_String) ".")), ((MR_Box) (S_5)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_2_14);
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_18, 0)), 6))));
    func_2(((MR_Box) (TypeClassInfo_for_pt_output_18)), ((MR_Box) (Name_9)), ((MR_Box) (S_5)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_U_11);
  }
  else
  {
    MR_String Name_17 = ((MR_String) ((MR_hl_field(0, SymName_6, 0))));
    void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_18, 0)), 6))));
    MR_Box conv5_STATE_VARIABLE_U_11;

    func_4(((MR_Box) (TypeClassInfo_for_pt_output_18)), ((MR_Box) (Name_17)), ((MR_Box) (S_5)), ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_U_11);
  }
}

MR_String MR_CALL 
parse_tree__parse_tree_out_sym_name__unescaped_sym_name_to_string_1_f_0(
  MR_Word SymName_3)
{
  MR_String Str_4;
  MR_Word State0_5;
  MR_Word State_6;

  State0_5 = mercury__string__builder__init_0_f_0();
  parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_117_110_101_115_99_97_112_101_100_95_115_121_109_95_110_97_109_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0((MR_Word) (&parse_tree__parse_tree_out_sym_name_scalar_common_2[1]), SymName_3, State0_5, &State_6);
  Str_4 = mercury__string__builder__to_string_1_f_0(State_6);
  return Str_4;
}

void MR_CALL 
parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_117_110_101_115_99_97_112_101_100_95_115_121_109_95_110_97_109_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_18,
  MR_Word SymName_6,
  MR_Word STATE_VARIABLE_U_0_10,
  MR_Word * STATE_VARIABLE_U_11)
{
  if (((MR_tag((MR_Word) SymName_6)) == (MR_Integer) 1))
  {
    MR_Word ModuleName_8 = ((MR_Word) ((MR_hl_field(1, SymName_6, 0))));
    MR_String Name_9 = ((MR_String) ((MR_hl_field(1, SymName_6, 1))));
    MR_Word STATE_VARIABLE_U_1_12;
    MR_Word STATE_VARIABLE_U_2_14;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv1_STATE_VARIABLE_U_2_14;
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv3_STATE_VARIABLE_U_11;

    parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_117_110_101_115_99_97_112_101_100_95_115_121_109_95_110_97_109_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0(TypeClassInfo_for_pt_output_18, ModuleName_8, STATE_VARIABLE_U_0_10, &STATE_VARIABLE_U_1_12);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_18, 0)), 6))));
    func_0(((MR_Box) (TypeClassInfo_for_pt_output_18)), ((MR_Box) ((MR_String) ".")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_1_12)), &conv1_STATE_VARIABLE_U_2_14);
    STATE_VARIABLE_U_2_14 = ((MR_Word) (conv1_STATE_VARIABLE_U_2_14));
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_18, 0)), 6))));
    func_2(((MR_Box) (TypeClassInfo_for_pt_output_18)), ((MR_Box) (Name_9)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_2_14)), &conv3_STATE_VARIABLE_U_11);
    *STATE_VARIABLE_U_11 = ((MR_Word) (conv3_STATE_VARIABLE_U_11));
  }
  else
  {
    MR_String Name_17 = ((MR_String) ((MR_hl_field(0, SymName_6, 0))));
    void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_18, 0)), 6))));
    MR_Box conv5_STATE_VARIABLE_U_11;

    func_4(((MR_Box) (TypeClassInfo_for_pt_output_18)), ((MR_Box) (Name_17)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_10)), &conv5_STATE_VARIABLE_U_11);
    *STATE_VARIABLE_U_11 = ((MR_Word) (conv5_STATE_VARIABLE_U_11));
  }
}

void MR_CALL 
parse_tree__parse_tree_out_sym_name__mercury_output_bracketed_sym_name_ngt_5_p_0(
  MR_Word NextToGraphicToken_6,
  MR_Word SymName_7,
  MR_Word Stream_8)
{
  parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_98_114_97_99_107_101_116_101_100_95_115_121_109_95_110_97_109_101_95_110_103_116_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0((MR_Word) (&parse_tree__parse_tree_out_sym_name_scalar_common_2[3]), NextToGraphicToken_6, SymName_7, Stream_8);
}

MR_String MR_CALL 
parse_tree__parse_tree_out_sym_name__mercury_bracketed_sym_name_to_string_ngt_2_f_0(
  MR_Word NextToGraphicToken_4,
  MR_Word SymName_5)
{
  MR_String Str_6;
  MR_Word State0_7;
  MR_Word State_8;

  State0_7 = mercury__string__builder__init_0_f_0();
  parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_98_114_97_99_107_101_116_101_100_95_115_121_109_95_110_97_109_101_95_110_103_116_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0((MR_Word) (&parse_tree__parse_tree_out_sym_name_scalar_common_2[1]), NextToGraphicToken_4, SymName_5, State0_7, &State_8);
  Str_6 = mercury__string__builder__to_string_1_f_0(State_8);
  return Str_6;
}

void MR_CALL 
parse_tree__parse_tree_out_sym_name__mercury_format_bracketed_sym_name_arity_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_14,
  MR_Word HeadVar__1_1,
  MR_Box S_7,
  MR_Box STATE_VARIABLE_U_0_9,
  MR_Box * STATE_VARIABLE_U_10)
{
  MR_Word SymName_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
  MR_Integer Arity_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 1))));
  MR_Box STATE_VARIABLE_U_1_11;
  MR_Box STATE_VARIABLE_U_2_13;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

  parse_tree__parse_tree_out_sym_name__mercury_format_bracketed_sym_name_ngt_5_p_0(TypeClassInfo_for_pt_output_14, (MR_Integer) 1, SymName_5, S_7, STATE_VARIABLE_U_0_9, &STATE_VARIABLE_U_1_11);
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_14, 0)), 5))));
  func_0(((MR_Box) (TypeClassInfo_for_pt_output_14)), ((MR_Box) (MR_Word) ((MR_Char) 47)), S_7, STATE_VARIABLE_U_1_11, &STATE_VARIABLE_U_2_13);
  func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_14, 0)), 10))));
  func_1(((MR_Box) (TypeClassInfo_for_pt_output_14)), ((MR_Box) (Arity_6)), S_7, STATE_VARIABLE_U_2_13, STATE_VARIABLE_U_10);
}

MR_String MR_CALL 
parse_tree__parse_tree_out_sym_name__mercury_bracketed_sym_name_arity_to_string_1_f_0(
  MR_Word SNA_3)
{
  MR_String Str_4;
  MR_Word State0_5;
  MR_Word State_6;
  MR_Word SymName_9;
  MR_Integer Arity_10;
  MR_Word STATE_VARIABLE_U_1_11;
  MR_Word STATE_VARIABLE_U_2_13;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv1_STATE_VARIABLE_U_2_13;
  void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv3_State_6;

  State0_5 = mercury__string__builder__init_0_f_0();
  SymName_9 = ((MR_Word) ((MR_hl_field(0, SNA_3, 0))));
  Arity_10 = ((MR_Integer) ((MR_hl_field(0, SNA_3, 1))));
  parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_98_114_97_99_107_101_116_101_100_95_115_121_109_95_110_97_109_101_95_110_103_116_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0((MR_Word) (&parse_tree__parse_tree_out_sym_name_scalar_common_2[1]), (MR_Integer) 1, SymName_9, State0_5, &STATE_VARIABLE_U_1_11);
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_sym_name_scalar_common_2[1]), 0)), 5))));
  func_0(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_sym_name_scalar_common_2[1]))), ((MR_Box) (MR_Word) ((MR_Char) 47)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_1_11)), &conv1_STATE_VARIABLE_U_2_13);
  STATE_VARIABLE_U_2_13 = ((MR_Word) (conv1_STATE_VARIABLE_U_2_13));
  func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_sym_name_scalar_common_2[1]), 0)), 10))));
  func_2(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_sym_name_scalar_common_2[1]))), ((MR_Box) (Arity_10)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_2_13)), &conv3_State_6);
  State_6 = ((MR_Word) (conv3_State_6));
  Str_4 = mercury__string__builder__to_string_1_f_0(State_6);
  return Str_4;
}

void MR_CALL 
parse_tree__parse_tree_out_sym_name__mercury_format_bracketed_sym_name_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_11,
  MR_Word SymName_5,
  MR_Box S_6,
  MR_Box STATE_VARIABLE_U_0_8,
  MR_Box * STATE_VARIABLE_U_9)
{
  parse_tree__parse_tree_out_sym_name__mercury_format_bracketed_sym_name_ngt_5_p_0(TypeClassInfo_for_pt_output_11, (MR_Integer) 1, SymName_5, S_6, STATE_VARIABLE_U_0_8, STATE_VARIABLE_U_9);
}

void MR_CALL 
parse_tree__parse_tree_out_sym_name__mercury_output_bracketed_sym_name_4_p_0(
  MR_Word SymName_5,
  MR_Word Stream_6)
{
  parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_98_114_97_99_107_101_116_101_100_95_115_121_109_95_110_97_109_101_95_110_103_116_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0((MR_Word) (&parse_tree__parse_tree_out_sym_name_scalar_common_2[3]), (MR_Integer) 1, SymName_5, Stream_6);
}

MR_String MR_CALL 
parse_tree__parse_tree_out_sym_name__mercury_bracketed_sym_name_to_string_1_f_0(
  MR_Word SymName_3)
{
  MR_String HeadVar__2_2;
  MR_Word State0_5;
  MR_Word State_6;

  State0_5 = mercury__string__builder__init_0_f_0();
  parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_98_114_97_99_107_101_116_101_100_95_115_121_109_95_110_97_109_101_95_110_103_116_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0((MR_Word) (&parse_tree__parse_tree_out_sym_name_scalar_common_2[1]), (MR_Integer) 1, SymName_3, State0_5, &State_6);
  HeadVar__2_2 = mercury__string__builder__to_string_1_f_0(State_6);
  return HeadVar__2_2;
}

void MR_CALL 
parse_tree__parse_tree_out_sym_name__mercury_format_sym_name_arity_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_14,
  MR_Word HeadVar__1_1,
  MR_Box S_7,
  MR_Box STATE_VARIABLE_U_0_9,
  MR_Box * STATE_VARIABLE_U_10)
{
  MR_Word SymName_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
  MR_Integer Arity_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 1))));
  MR_Box STATE_VARIABLE_U_1_11;
  MR_Box STATE_VARIABLE_U_2_13;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

  parse_tree__parse_tree_out_sym_name__mercury_format_sym_name_ngt_5_p_0(TypeClassInfo_for_pt_output_14, (MR_Integer) 1, SymName_5, S_7, STATE_VARIABLE_U_0_9, &STATE_VARIABLE_U_1_11);
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_14, 0)), 5))));
  func_0(((MR_Box) (TypeClassInfo_for_pt_output_14)), ((MR_Box) (MR_Word) ((MR_Char) 47)), S_7, STATE_VARIABLE_U_1_11, &STATE_VARIABLE_U_2_13);
  func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_14, 0)), 10))));
  func_1(((MR_Box) (TypeClassInfo_for_pt_output_14)), ((MR_Box) (Arity_6)), S_7, STATE_VARIABLE_U_2_13, STATE_VARIABLE_U_10);
}

MR_String MR_CALL 
parse_tree__parse_tree_out_sym_name__mercury_sym_name_arity_to_string_1_f_0(
  MR_Word SNA_3)
{
  MR_String Str_4;
  MR_Word State0_5;
  MR_Word State_6;
  MR_Word SymName_9;
  MR_Integer Arity_10;
  MR_Word STATE_VARIABLE_U_1_11;
  MR_Word STATE_VARIABLE_U_2_13;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv1_STATE_VARIABLE_U_2_13;
  void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv3_State_6;

  State0_5 = mercury__string__builder__init_0_f_0();
  SymName_9 = ((MR_Word) ((MR_hl_field(0, SNA_3, 0))));
  Arity_10 = ((MR_Integer) ((MR_hl_field(0, SNA_3, 1))));
  parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_115_121_109_95_110_97_109_101_95_110_103_116_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0((MR_Word) (&parse_tree__parse_tree_out_sym_name_scalar_common_2[1]), (MR_Integer) 1, SymName_9, State0_5, &STATE_VARIABLE_U_1_11);
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_sym_name_scalar_common_2[1]), 0)), 5))));
  func_0(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_sym_name_scalar_common_2[1]))), ((MR_Box) (MR_Word) ((MR_Char) 47)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_1_11)), &conv1_STATE_VARIABLE_U_2_13);
  STATE_VARIABLE_U_2_13 = ((MR_Word) (conv1_STATE_VARIABLE_U_2_13));
  func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&parse_tree__parse_tree_out_sym_name_scalar_common_2[1]), 0)), 10))));
  func_2(((MR_Box) ((MR_Word) (&parse_tree__parse_tree_out_sym_name_scalar_common_2[1]))), ((MR_Box) (Arity_10)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_2_13)), &conv3_State_6);
  State_6 = ((MR_Word) (conv3_State_6));
  Str_4 = mercury__string__builder__to_string_1_f_0(State_6);
  return Str_4;
}

void MR_CALL 
parse_tree__parse_tree_out_sym_name__mercury_format_sym_name_4_p_0(
  MR_Word TypeClassInfo_for_pt_output_11,
  MR_Word SymName_5,
  MR_Box S_6,
  MR_Box STATE_VARIABLE_U_0_8,
  MR_Box * STATE_VARIABLE_U_9)
{
  parse_tree__parse_tree_out_sym_name__mercury_format_sym_name_ngt_5_p_0(TypeClassInfo_for_pt_output_11, (MR_Integer) 1, SymName_5, S_6, STATE_VARIABLE_U_0_8, STATE_VARIABLE_U_9);
}

void MR_CALL 
parse_tree__parse_tree_out_sym_name__mercury_format_sym_name_ngt_5_p_0(
  MR_Word TypeClassInfo_for_pt_output_22,
  MR_Word NextToGraphicToken_6,
  MR_Word SymName_7,
  MR_Box S_8,
  MR_Box STATE_VARIABLE_U_0_12,
  MR_Box * STATE_VARIABLE_U_13)
{
  if (((MR_tag((MR_Word) SymName_7)) == (MR_Integer) 1))
  {
    MR_Word ModuleName_10 = ((MR_Word) ((MR_hl_field(1, SymName_7, 0))));
    MR_String PredName_11 = ((MR_String) ((MR_hl_field(1, SymName_7, 1))));
    MR_Box STATE_VARIABLE_U_1_15;
    MR_Box STATE_VARIABLE_U_2_17;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    parse_tree__parse_tree_out_sym_name__mercury_format_bracketed_sym_name_ngt_5_p_0(TypeClassInfo_for_pt_output_22, (MR_Integer) 0, ModuleName_10, S_8, STATE_VARIABLE_U_0_12, &STATE_VARIABLE_U_1_15);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_22, 0)), 6))));
    func_0(((MR_Box) (TypeClassInfo_for_pt_output_22)), ((MR_Box) ((MR_String) ".")), S_8, STATE_VARIABLE_U_1_15, &STATE_VARIABLE_U_2_17);
    parse_tree__parse_tree_out_term__mercury_format_quoted_atom_5_p_0(TypeClassInfo_for_pt_output_22, (MR_Integer) 0, PredName_11, S_8, STATE_VARIABLE_U_2_17, STATE_VARIABLE_U_13);
  }
  else
  {
    MR_String PredName_21 = ((MR_String) ((MR_hl_field(0, SymName_7, 0))));

    parse_tree__parse_tree_out_term__mercury_format_quoted_atom_5_p_0(TypeClassInfo_for_pt_output_22, NextToGraphicToken_6, PredName_21, S_8, STATE_VARIABLE_U_0_12, STATE_VARIABLE_U_13);
  }
}

void MR_CALL 
parse_tree__parse_tree_out_sym_name__mercury_format_bracketed_sym_name_ngt_5_p_0(
  MR_Word TypeClassInfo_for_pt_output_26,
  MR_Word NextToGraphicToken_6,
  MR_Word SymName_7,
  MR_Box S_8,
  MR_Box STATE_VARIABLE_U_0_12,
  MR_Box * STATE_VARIABLE_U_13)
{
  if (((MR_tag((MR_Word) SymName_7)) == (MR_Integer) 1))
  {
    MR_Word ModuleName_10 = ((MR_Word) ((MR_hl_field(1, SymName_7, 0))));
    MR_String Name_11 = ((MR_String) ((MR_hl_field(1, SymName_7, 1))));

    switch (NextToGraphicToken_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box STATE_VARIABLE_U_1_15;
          MR_Box STATE_VARIABLE_U_2_17;
          MR_Box STATE_VARIABLE_U_3_19;
          MR_Box STATE_VARIABLE_U_4_21;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_26, 0)), 6))));
          void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

          func_0(((MR_Box) (TypeClassInfo_for_pt_output_26)), ((MR_Box) ((MR_String) "(")), S_8, STATE_VARIABLE_U_0_12, &STATE_VARIABLE_U_1_15);
          parse_tree__parse_tree_out_sym_name__mercury_format_bracketed_sym_name_ngt_5_p_0(TypeClassInfo_for_pt_output_26, (MR_Integer) 0, ModuleName_10, S_8, STATE_VARIABLE_U_1_15, &STATE_VARIABLE_U_2_17);
          func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_26, 0)), 6))));
          func_1(((MR_Box) (TypeClassInfo_for_pt_output_26)), ((MR_Box) ((MR_String) ".")), S_8, STATE_VARIABLE_U_2_17, &STATE_VARIABLE_U_3_19);
          parse_tree__parse_tree_out_term__mercury_format_bracketed_atom_5_p_0(TypeClassInfo_for_pt_output_26, (MR_Integer) 0, Name_11, S_8, STATE_VARIABLE_U_3_19, &STATE_VARIABLE_U_4_21);
          func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_26, 0)), 6))));
          func_2(((MR_Box) (TypeClassInfo_for_pt_output_26)), ((MR_Box) ((MR_String) ")")), S_8, STATE_VARIABLE_U_4_21, STATE_VARIABLE_U_13);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box STATE_VARIABLE_U_2_28;
          MR_Box STATE_VARIABLE_U_3_29;
          void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

          parse_tree__parse_tree_out_sym_name__mercury_format_bracketed_sym_name_ngt_5_p_0(TypeClassInfo_for_pt_output_26, (MR_Integer) 0, ModuleName_10, S_8, STATE_VARIABLE_U_0_12, &STATE_VARIABLE_U_2_28);
          func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_26, 0)), 6))));
          func_3(((MR_Box) (TypeClassInfo_for_pt_output_26)), ((MR_Box) ((MR_String) ".")), S_8, STATE_VARIABLE_U_2_28, &STATE_VARIABLE_U_3_29);
          parse_tree__parse_tree_out_term__mercury_format_bracketed_atom_5_p_0(TypeClassInfo_for_pt_output_26, (MR_Integer) 0, Name_11, S_8, STATE_VARIABLE_U_3_29, STATE_VARIABLE_U_13);
        }
        break;
    }
  }
  else
  {
    MR_String Name_25 = ((MR_String) ((MR_hl_field(0, SymName_7, 0))));

    parse_tree__parse_tree_out_term__mercury_format_bracketed_atom_5_p_0(TypeClassInfo_for_pt_output_26, NextToGraphicToken_6, Name_25, S_8, STATE_VARIABLE_U_0_12, STATE_VARIABLE_U_13);
  }
}

void MR_CALL 
parse_tree__parse_tree_out_sym_name__mercury_output_sym_name_4_p_0(
  MR_Word SymName_5,
  MR_Word Stream_6)
{
  parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_115_121_109_95_110_97_109_101_95_110_103_116_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0((MR_Word) (&parse_tree__parse_tree_out_sym_name_scalar_common_2[3]), (MR_Integer) 1, SymName_5, Stream_6);
}

void MR_CALL 
parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_115_121_109_95_110_97_109_101_95_110_103_116_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(
  MR_Word TypeClassInfo_for_pt_output_22,
  MR_Word NextToGraphicToken_6,
  MR_Word SymName_7,
  MR_Word S_8)
{
  if (((MR_tag((MR_Word) SymName_7)) == (MR_Integer) 1))
  {
    MR_Word ModuleName_10 = ((MR_Word) ((MR_hl_field(1, SymName_7, 0))));
    MR_String PredName_11 = ((MR_String) ((MR_hl_field(1, SymName_7, 1))));
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv1_STATE_VARIABLE_U_2_17;

    parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_98_114_97_99_107_101_116_101_100_95_115_121_109_95_110_97_109_101_95_110_103_116_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_pt_output_22, (MR_Integer) 0, ModuleName_10, S_8);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_22, 0)), 6))));
    func_0(((MR_Box) (TypeClassInfo_for_pt_output_22)), ((MR_Box) ((MR_String) ".")), ((MR_Box) (S_8)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_2_17);
    parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_113_117_111_116_101_100_95_97_116_111_109_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_pt_output_22, (MR_Integer) 0, PredName_11, S_8);
  }
  else
  {
    MR_String PredName_21 = ((MR_String) ((MR_hl_field(0, SymName_7, 0))));

    parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_113_117_111_116_101_100_95_97_116_111_109_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_pt_output_22, NextToGraphicToken_6, PredName_21, S_8);
  }
}

void MR_CALL 
parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_98_114_97_99_107_101_116_101_100_95_115_121_109_95_110_97_109_101_95_110_103_116_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(
  MR_Word TypeClassInfo_for_pt_output_26,
  MR_Word NextToGraphicToken_6,
  MR_Word SymName_7,
  MR_Word S_8)
{
  if (((MR_tag((MR_Word) SymName_7)) == (MR_Integer) 1))
  {
    MR_Word ModuleName_10 = ((MR_Word) ((MR_hl_field(1, SymName_7, 0))));
    MR_String Name_11 = ((MR_String) ((MR_hl_field(1, SymName_7, 1))));

    switch (NextToGraphicToken_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_26, 0)), 6))));
          MR_Box conv1_STATE_VARIABLE_U_1_15;
          void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv3_STATE_VARIABLE_U_3_19;
          void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv5_STATE_VARIABLE_U_13;

          func_0(((MR_Box) (TypeClassInfo_for_pt_output_26)), ((MR_Box) ((MR_String) "(")), ((MR_Box) (S_8)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_U_1_15);
          parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_98_114_97_99_107_101_116_101_100_95_115_121_109_95_110_97_109_101_95_110_103_116_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_pt_output_26, (MR_Integer) 0, ModuleName_10, S_8);
          func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_26, 0)), 6))));
          func_2(((MR_Box) (TypeClassInfo_for_pt_output_26)), ((MR_Box) ((MR_String) ".")), ((MR_Box) (S_8)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_U_3_19);
          parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_98_114_97_99_107_101_116_101_100_95_97_116_111_109_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_pt_output_26, (MR_Integer) 0, Name_11, S_8);
          func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_26, 0)), 6))));
          func_4(((MR_Box) (TypeClassInfo_for_pt_output_26)), ((MR_Box) ((MR_String) ")")), ((MR_Box) (S_8)), ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_U_13);
        }
        break;
      case (MR_Integer) 1:
        {
          void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv7_STATE_VARIABLE_U_3_29;

          parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_98_114_97_99_107_101_116_101_100_95_115_121_109_95_110_97_109_101_95_110_103_116_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_pt_output_26, (MR_Integer) 0, ModuleName_10, S_8);
          func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_26, 0)), 6))));
          func_6(((MR_Box) (TypeClassInfo_for_pt_output_26)), ((MR_Box) ((MR_String) ".")), ((MR_Box) (S_8)), ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_U_3_29);
          parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_98_114_97_99_107_101_116_101_100_95_97_116_111_109_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_pt_output_26, (MR_Integer) 0, Name_11, S_8);
        }
        break;
    }
  }
  else
  {
    MR_String Name_25 = ((MR_String) ((MR_hl_field(0, SymName_7, 0))));

    parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_98_114_97_99_107_101_116_101_100_95_97_116_111_109_95_95_91_83_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_85_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_pt_output_26, NextToGraphicToken_6, Name_25, S_8);
  }
}

MR_String MR_CALL 
parse_tree__parse_tree_out_sym_name__mercury_sym_name_to_string_1_f_0(
  MR_Word SymName_3)
{
  MR_String Str_4;
  MR_Word State0_5;
  MR_Word State_6;

  State0_5 = mercury__string__builder__init_0_f_0();
  parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_115_121_109_95_110_97_109_101_95_110_103_116_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0((MR_Word) (&parse_tree__parse_tree_out_sym_name_scalar_common_2[1]), (MR_Integer) 1, SymName_3, State0_5, &State_6);
  Str_4 = mercury__string__builder__to_string_1_f_0(State_6);
  return Str_4;
}

void MR_CALL 
parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_115_121_109_95_110_97_109_101_95_110_103_116_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0(
  MR_Word TypeClassInfo_for_pt_output_22,
  MR_Word NextToGraphicToken_6,
  MR_Word SymName_7,
  MR_Word STATE_VARIABLE_U_0_12,
  MR_Word * STATE_VARIABLE_U_13)
{
  if (((MR_tag((MR_Word) SymName_7)) == (MR_Integer) 1))
  {
    MR_Word ModuleName_10 = ((MR_Word) ((MR_hl_field(1, SymName_7, 0))));
    MR_String PredName_11 = ((MR_String) ((MR_hl_field(1, SymName_7, 1))));
    MR_Word STATE_VARIABLE_U_1_15;
    MR_Word STATE_VARIABLE_U_2_17;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv1_STATE_VARIABLE_U_2_17;

    parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_98_114_97_99_107_101_116_101_100_95_115_121_109_95_110_97_109_101_95_110_103_116_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_pt_output_22, (MR_Integer) 0, ModuleName_10, STATE_VARIABLE_U_0_12, &STATE_VARIABLE_U_1_15);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_22, 0)), 6))));
    func_0(((MR_Box) (TypeClassInfo_for_pt_output_22)), ((MR_Box) ((MR_String) ".")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_1_15)), &conv1_STATE_VARIABLE_U_2_17);
    STATE_VARIABLE_U_2_17 = ((MR_Word) (conv1_STATE_VARIABLE_U_2_17));
    parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_113_117_111_116_101_100_95_97_116_111_109_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_pt_output_22, (MR_Integer) 0, PredName_11, STATE_VARIABLE_U_2_17, STATE_VARIABLE_U_13);
  }
  else
  {
    MR_String PredName_21 = ((MR_String) ((MR_hl_field(0, SymName_7, 0))));

    parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_113_117_111_116_101_100_95_97_116_111_109_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_pt_output_22, NextToGraphicToken_6, PredName_21, STATE_VARIABLE_U_0_12, STATE_VARIABLE_U_13);
  }
}

void MR_CALL 
parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_98_114_97_99_107_101_116_101_100_95_115_121_109_95_110_97_109_101_95_110_103_116_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0(
  MR_Word TypeClassInfo_for_pt_output_26,
  MR_Word NextToGraphicToken_6,
  MR_Word SymName_7,
  MR_Word STATE_VARIABLE_U_0_12,
  MR_Word * STATE_VARIABLE_U_13)
{
  if (((MR_tag((MR_Word) SymName_7)) == (MR_Integer) 1))
  {
    MR_Word ModuleName_10 = ((MR_Word) ((MR_hl_field(1, SymName_7, 0))));
    MR_String Name_11 = ((MR_String) ((MR_hl_field(1, SymName_7, 1))));

    switch (NextToGraphicToken_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word STATE_VARIABLE_U_1_15;
          MR_Word STATE_VARIABLE_U_2_17;
          MR_Word STATE_VARIABLE_U_3_19;
          MR_Word STATE_VARIABLE_U_4_21;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_26, 0)), 6))));
          MR_Box conv1_STATE_VARIABLE_U_1_15;
          void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv3_STATE_VARIABLE_U_3_19;
          void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv5_STATE_VARIABLE_U_13;

          func_0(((MR_Box) (TypeClassInfo_for_pt_output_26)), ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_0_12)), &conv1_STATE_VARIABLE_U_1_15);
          STATE_VARIABLE_U_1_15 = ((MR_Word) (conv1_STATE_VARIABLE_U_1_15));
          parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_98_114_97_99_107_101_116_101_100_95_115_121_109_95_110_97_109_101_95_110_103_116_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_pt_output_26, (MR_Integer) 0, ModuleName_10, STATE_VARIABLE_U_1_15, &STATE_VARIABLE_U_2_17);
          func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_26, 0)), 6))));
          func_2(((MR_Box) (TypeClassInfo_for_pt_output_26)), ((MR_Box) ((MR_String) ".")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_2_17)), &conv3_STATE_VARIABLE_U_3_19);
          STATE_VARIABLE_U_3_19 = ((MR_Word) (conv3_STATE_VARIABLE_U_3_19));
          parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_98_114_97_99_107_101_116_101_100_95_97_116_111_109_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_pt_output_26, (MR_Integer) 0, Name_11, STATE_VARIABLE_U_3_19, &STATE_VARIABLE_U_4_21);
          func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_26, 0)), 6))));
          func_4(((MR_Box) (TypeClassInfo_for_pt_output_26)), ((MR_Box) ((MR_String) ")")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_4_21)), &conv5_STATE_VARIABLE_U_13);
          *STATE_VARIABLE_U_13 = ((MR_Word) (conv5_STATE_VARIABLE_U_13));
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word STATE_VARIABLE_U_2_28;
          MR_Word STATE_VARIABLE_U_3_29;
          void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box conv7_STATE_VARIABLE_U_3_29;

          parse_tree__parse_tree_out_sym_name__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_98_114_97_99_107_101_116_101_100_95_115_121_109_95_110_97_109_101_95_110_103_116_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_pt_output_26, (MR_Integer) 0, ModuleName_10, STATE_VARIABLE_U_0_12, &STATE_VARIABLE_U_2_28);
          func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_pt_output_26, 0)), 6))));
          func_6(((MR_Box) (TypeClassInfo_for_pt_output_26)), ((MR_Box) ((MR_String) ".")), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_U_2_28)), &conv7_STATE_VARIABLE_U_3_29);
          STATE_VARIABLE_U_3_29 = ((MR_Word) (conv7_STATE_VARIABLE_U_3_29));
          parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_98_114_97_99_107_101_116_101_100_95_97_116_111_109_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_pt_output_26, (MR_Integer) 0, Name_11, STATE_VARIABLE_U_3_29, STATE_VARIABLE_U_13);
        }
        break;
    }
  }
  else
  {
    MR_String Name_25 = ((MR_String) ((MR_hl_field(0, SymName_7, 0))));

    parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_98_114_97_99_107_101_116_101_100_95_97_116_111_109_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0(TypeClassInfo_for_pt_output_26, NextToGraphicToken_6, Name_25, STATE_VARIABLE_U_0_12, STATE_VARIABLE_U_13);
  }
}

static MR_bool MR_CALL 
parse_tree__parse_tree_out_sym_name____Unify____needs_brackets_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__parse_tree_out_sym_name____Unify____needs_brackets_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_tree_out_sym_name____Compare____needs_brackets_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__parse_tree_out_sym_name____Compare____needs_brackets_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__parse_tree__parse_tree_out_sym_name__init(void)
{
}

void mercury__parse_tree__parse_tree_out_sym_name__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&parse_tree__parse_tree_out_sym_name__parse_tree__parse_tree_out_sym_name__type_ctor_info_needs_brackets_0);
}

void mercury__parse_tree__parse_tree_out_sym_name__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__parse_tree_out_sym_name__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module parse_tree.parse_tree_out_sym_name.
