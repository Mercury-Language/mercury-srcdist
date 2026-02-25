/*
** Automatically generated from `unused_args_warn_pragma.m'
** by the Mercury compiler,
** version rotd-2026-02-25
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


// :- module transform_hlds.unused_args_warn_pragma.
// :- implementation.

/*
INIT mercury__transform_hlds__unused_args_warn_pragma__init
ENDINIT
*/

#include "transform_hlds.unused_args_warn_pragma.mih"


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
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
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
#include "robdd.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
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
#include "analysis.operations.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
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
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.option_categories.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.maybe_error.mih"
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
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.item_types.mih"
#include "recompilation.record_uses.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_EnumFunctorDesc transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__enum_functor_desc_maybe_gather_pragma_unused_args_0_0;

static const MR_EnumFunctorDesc transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__enum_functor_desc_maybe_gather_pragma_unused_args_0_1;

static const MR_EnumFunctorDescPtr transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__enum_ordinal_ordered_maybe_gather_pragma_unused_args_0[2];

static const MR_EnumFunctorDescPtr transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__enum_name_ordered_maybe_gather_pragma_unused_args_0[2];

static const MR_Integer transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__functor_number_map_maybe_gather_pragma_unused_args_0[2];

static const MR_EnumFunctorDesc transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__enum_functor_desc_maybe_record_analysis_unused_args_0_0;

static const MR_EnumFunctorDesc transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__enum_functor_desc_maybe_record_analysis_unused_args_0_1;

static const MR_EnumFunctorDescPtr transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__enum_ordinal_ordered_maybe_record_analysis_unused_args_0[2];

static const MR_EnumFunctorDescPtr transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__enum_name_ordered_maybe_record_analysis_unused_args_0[2];

static const MR_Integer transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__functor_number_map_maybe_record_analysis_unused_args_0[2];

static const MR_EnumFunctorDesc transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__enum_functor_desc_maybe_warn_unused_args_0_0;

static const MR_EnumFunctorDesc transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__enum_functor_desc_maybe_warn_unused_args_0_1;

static const MR_EnumFunctorDescPtr transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__enum_ordinal_ordered_maybe_warn_unused_args_0[2];

static const MR_EnumFunctorDescPtr transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__enum_name_ordered_maybe_warn_unused_args_0[2];

static const MR_Integer transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__functor_number_map_maybe_warn_unused_args_0[2];

static MR_Word MR_CALL 
transform_hlds__unused_args_warn_pragma__IntroducedFrom__func__report_unused_args__334__1_1_f_0(
  MR_Integer LambdaHeadVar__1_41);

static MR_Box MR_CALL 
transform_hlds__unused_args_warn_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_103_97_116_104_101_114_95_119_97_114_110_105_110_103_95_95_91_49_93_95_48_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__unused_args_warn_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_103_97_116_104_101_114_95_119_97_114_110_105_110_103_95_95_91_49_93_95_48_9_p_0(
  MR_Word PredInfo_11,
  MR_Word PredId_12,
  MR_Integer ProcId_13,
  MR_Word UnusedArgs0_14,
  MR_Word STATE_VARIABLE_WarnedPredIds_0_26,
  MR_Word * STATE_VARIABLE_WarnedPredIds_27,
  MR_Word STATE_VARIABLE_Specs_0_28,
  MR_Word * STATE_VARIABLE_Specs_29);

static void MR_CALL 
transform_hlds__unused_args_warn_pragma__drop_poly_inserted_args_3_p_0(
  MR_Integer NumInserted_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__unused_args_warn_pragma__may_gather_warning_pragma_for_pred_1_p_0(
  MR_Word PredInfo_2);

static MR_bool MR_CALL 
transform_hlds__unused_args_warn_pragma____Unify____maybe_gather_pragma_unused_args_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__unused_args_warn_pragma____Compare____maybe_gather_pragma_unused_args_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__unused_args_warn_pragma____Unify____maybe_record_analysis_unused_args_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__unused_args_warn_pragma____Compare____maybe_record_analysis_unused_args_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__unused_args_warn_pragma____Unify____maybe_warn_unused_args_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__unused_args_warn_pragma____Compare____maybe_warn_unused_args_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__unused_args_warn_pragma_scalar_common_1[19][2];

static /* final */ const MR_Box transform_hlds__unused_args_warn_pragma_scalar_common_2[1][1];

static /* final */ const MR_Box transform_hlds__unused_args_warn_pragma_scalar_common_3[1][5];

static /* final */ const MR_Box transform_hlds__unused_args_warn_pragma_scalar_common_4[1][3];




static /* final */ const MR_Box transform_hlds__unused_args_warn_pragma_scalar_common_1[19][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   2 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "warning:"))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__unused_args_warn_pragma_scalar_common_1[3]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   5 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &transform_hlds__unused_args_warn_pragma_scalar_common_1[4])))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__unused_args_warn_pragma_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(1, &transform_hlds__unused_args_warn_pragma_scalar_common_1[5])))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "argument"))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__unused_args_warn_pragma_scalar_common_1[8]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is"))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__unused_args_warn_pragma_scalar_common_1[10]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "unused."))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__unused_args_warn_pragma_scalar_common_1[12]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  14 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "arguments"))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__unused_args_warn_pragma_scalar_common_1[15]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "are"))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__unused_args_warn_pragma_scalar_common_1[17]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box transform_hlds__unused_args_warn_pragma_scalar_common_2[1][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 230U) },
};

static /* final */ const MR_Box transform_hlds__unused_args_warn_pragma_scalar_common_3[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
};

static /* final */ const MR_Box transform_hlds__unused_args_warn_pragma_scalar_common_4[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&transform_hlds__unused_args_warn_pragma_scalar_common_3[0])),
    ((MR_Box) (transform_hlds__unused_args_warn_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_103_97_116_104_101_114_95_119_97_114_110_105_110_103_95_95_91_49_93_95_48_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_EnumFunctorDesc transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__enum_functor_desc_maybe_gather_pragma_unused_args_0_0 = {
  (MR_String) "do_not_gather_pragma_unused_args",
  INT32_C(0)
};

static const MR_EnumFunctorDesc transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__enum_functor_desc_maybe_gather_pragma_unused_args_0_1 = {
  (MR_String) "do_gather_pragma_unused_args",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__enum_ordinal_ordered_maybe_gather_pragma_unused_args_0[2] = {
  &transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__enum_functor_desc_maybe_gather_pragma_unused_args_0_0,
  &transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__enum_functor_desc_maybe_gather_pragma_unused_args_0_1
};

static const MR_EnumFunctorDescPtr transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__enum_name_ordered_maybe_gather_pragma_unused_args_0[2] = {
  &transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__enum_functor_desc_maybe_gather_pragma_unused_args_0_1,
  &transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__enum_functor_desc_maybe_gather_pragma_unused_args_0_0
};

static const MR_Integer transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__functor_number_map_maybe_gather_pragma_unused_args_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__type_ctor_info_maybe_gather_pragma_unused_args_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__unused_args_warn_pragma____Unify____maybe_gather_pragma_unused_args_0_0_10001)),
  ((MR_Box) (transform_hlds__unused_args_warn_pragma____Compare____maybe_gather_pragma_unused_args_0_0_10001)),
  (MR_String) "transform_hlds.unused_args_warn_pragma",
  (MR_String) "maybe_gather_pragma_unused_args",
  { transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__enum_name_ordered_maybe_gather_pragma_unused_args_0 },
  { transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__enum_ordinal_ordered_maybe_gather_pragma_unused_args_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__functor_number_map_maybe_gather_pragma_unused_args_0,

};

static const MR_EnumFunctorDesc transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__enum_functor_desc_maybe_record_analysis_unused_args_0_0 = {
  (MR_String) "do_not_record_analysis_unused_args",
  INT32_C(0)
};

static const MR_EnumFunctorDesc transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__enum_functor_desc_maybe_record_analysis_unused_args_0_1 = {
  (MR_String) "do_record_analysis_unused_args",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__enum_ordinal_ordered_maybe_record_analysis_unused_args_0[2] = {
  &transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__enum_functor_desc_maybe_record_analysis_unused_args_0_0,
  &transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__enum_functor_desc_maybe_record_analysis_unused_args_0_1
};

static const MR_EnumFunctorDescPtr transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__enum_name_ordered_maybe_record_analysis_unused_args_0[2] = {
  &transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__enum_functor_desc_maybe_record_analysis_unused_args_0_0,
  &transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__enum_functor_desc_maybe_record_analysis_unused_args_0_1
};

static const MR_Integer transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__functor_number_map_maybe_record_analysis_unused_args_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__type_ctor_info_maybe_record_analysis_unused_args_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__unused_args_warn_pragma____Unify____maybe_record_analysis_unused_args_0_0_10001)),
  ((MR_Box) (transform_hlds__unused_args_warn_pragma____Compare____maybe_record_analysis_unused_args_0_0_10001)),
  (MR_String) "transform_hlds.unused_args_warn_pragma",
  (MR_String) "maybe_record_analysis_unused_args",
  { transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__enum_name_ordered_maybe_record_analysis_unused_args_0 },
  { transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__enum_ordinal_ordered_maybe_record_analysis_unused_args_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__functor_number_map_maybe_record_analysis_unused_args_0,

};

static const MR_EnumFunctorDesc transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__enum_functor_desc_maybe_warn_unused_args_0_0 = {
  (MR_String) "do_not_warn_unused_args",
  INT32_C(0)
};

static const MR_EnumFunctorDesc transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__enum_functor_desc_maybe_warn_unused_args_0_1 = {
  (MR_String) "do_warn_unused_args",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__enum_ordinal_ordered_maybe_warn_unused_args_0[2] = {
  &transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__enum_functor_desc_maybe_warn_unused_args_0_0,
  &transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__enum_functor_desc_maybe_warn_unused_args_0_1
};

static const MR_EnumFunctorDescPtr transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__enum_name_ordered_maybe_warn_unused_args_0[2] = {
  &transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__enum_functor_desc_maybe_warn_unused_args_0_0,
  &transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__enum_functor_desc_maybe_warn_unused_args_0_1
};

static const MR_Integer transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__functor_number_map_maybe_warn_unused_args_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__type_ctor_info_maybe_warn_unused_args_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__unused_args_warn_pragma____Unify____maybe_warn_unused_args_0_0_10001)),
  ((MR_Box) (transform_hlds__unused_args_warn_pragma____Compare____maybe_warn_unused_args_0_0_10001)),
  (MR_String) "transform_hlds.unused_args_warn_pragma",
  (MR_String) "maybe_warn_unused_args",
  { transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__enum_name_ordered_maybe_warn_unused_args_0 },
  { transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__enum_ordinal_ordered_maybe_warn_unused_args_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__functor_number_map_maybe_warn_unused_args_0,

};

static MR_Word MR_CALL 
transform_hlds__unused_args_warn_pragma__IntroducedFrom__func__report_unused_args__334__1_1_f_0(
  MR_Integer LambdaHeadVar__1_41)
{
  MR_Word LambdaHeadVar__2_42;

  {
    LambdaHeadVar__2_42 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, LambdaHeadVar__2_42, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, LambdaHeadVar__2_42, 1) = ((MR_Box) (LambdaHeadVar__1_41));
  }
  return LambdaHeadVar__2_42;
}

void MR_CALL 
transform_hlds__unused_args_warn_pragma____Compare____maybe_warn_unused_args_0_0(
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
transform_hlds__unused_args_warn_pragma____Unify____maybe_warn_unused_args_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
transform_hlds__unused_args_warn_pragma____Compare____maybe_record_analysis_unused_args_0_0(
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
transform_hlds__unused_args_warn_pragma____Unify____maybe_record_analysis_unused_args_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
transform_hlds__unused_args_warn_pragma____Compare____maybe_gather_pragma_unused_args_0_0(
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
transform_hlds__unused_args_warn_pragma____Unify____maybe_gather_pragma_unused_args_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
transform_hlds__unused_args_warn_pragma__gather_warnings_and_pragmas_10_p_0(
  MR_Word ModuleInfo_1,
  MR_Word ProcToUnusedArgsMap_2,
  MR_Word DoWarn_3,
  MR_Word DoPragma_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_WarnedPredIds_0_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8,
  MR_Word STATE_VARIABLE_PragmaUnusedArgInfos_0_9,
  MR_Word * STATE_VARIABLE_PragmaUnusedArgInfos_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_PragmaUnusedArgInfos_10 = STATE_VARIABLE_PragmaUnusedArgInfos_0_9;
      *STATE_VARIABLE_Specs_8 = STATE_VARIABLE_Specs_0_7;
    }
    else
    {
      MR_Word PredProcId_26 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 0))));
      MR_Word PredProcIds_27 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 1))));
      MR_Word STATE_VARIABLE_WarnedPredIds_1_40;
      MR_Word STATE_VARIABLE_Specs_1_41;
      MR_Word STATE_VARIABLE_PragmaUnusedArgInfos_1_42;
      MR_Word UnusedArgs_31;
      MR_Box conv0_UnusedArgs_31;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_STATE_VARIABLE_WarnedPredIds_0_6;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_7;
      MR_Word next_value_of_STATE_VARIABLE_PragmaUnusedArgInfos_0_9;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__unused_args_warn_pragma_scalar_common_1[0]), ProcToUnusedArgsMap_2, ((MR_Box) (PredProcId_26)), &conv0_UnusedArgs_31);
      if (succeeded)
      {
        UnusedArgs_31 = ((MR_Word) (conv0_UnusedArgs_31));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word PredId_32 = ((MR_Word) ((MR_hl_field(0, PredProcId_26, 0))));
        MR_Integer ProcId_33 = ((MR_Integer) ((MR_hl_field(0, PredProcId_26, 1))));
        MR_Word PredInfo_34;

        hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_1, PredId_32, &PredInfo_34);
        succeeded = transform_hlds__unused_args_warn_pragma__may_gather_warning_pragma_for_pred_1_p_0(PredInfo_34);
        if (succeeded)
        {
          switch (DoWarn_3) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                STATE_VARIABLE_WarnedPredIds_1_40 = STATE_VARIABLE_WarnedPredIds_0_6;
                STATE_VARIABLE_Specs_1_41 = STATE_VARIABLE_Specs_0_7;
              }
              break;
            case (MR_Integer) 1:
              transform_hlds__unused_args_warn_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_103_97_116_104_101_114_95_119_97_114_110_105_110_103_95_95_91_49_93_95_48_9_p_0(PredInfo_34, PredId_32, ProcId_33, UnusedArgs_31, STATE_VARIABLE_WarnedPredIds_0_6, &STATE_VARIABLE_WarnedPredIds_1_40, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_1_41);
              break;
          }
          switch (DoPragma_4) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                succeeded = hlds__hlds_pred__pred_info_is_exported_1_p_0(PredInfo_34);
                if (!(succeeded))
                {
                  succeeded = hlds__hlds_pred__pred_info_is_opt_exported_1_p_0(PredInfo_34);
                  if (!(succeeded))
                    succeeded = hlds__hlds_pred__pred_info_is_exported_to_submodules_1_p_0(PredInfo_34);
                }
                if (succeeded)
                  succeeded = (UnusedArgs_31 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  MR_Word ModuleName_47;
                  MR_Word PredOrFunc_48;
                  MR_String PredName_49;
                  MR_Word PredSymName_50;
                  MR_Word PredFormArity_51;
                  MR_Word UserArity_52;
                  MR_Integer ModeNum_53;
                  MR_Word PredNameArityPFMn_54;
                  MR_Word UnusedArgInfo_55;
                  MR_Word Var_56;

                  ModuleName_47 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_34);
                  PredOrFunc_48 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_34);
                  PredName_49 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_34);
                  {
                    PredSymName_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, PredSymName_50, 0) = ((MR_Box) (ModuleName_47));
                    MR_hl_field(1, PredSymName_50, 1) = ((MR_Box) (PredName_49));
                  }
                  hlds__hlds_pred__pred_info_get_orig_arity_2_p_0(PredInfo_34, &PredFormArity_51);
                  parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_48, &UserArity_52, PredFormArity_51);
                  hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_33, &ModeNum_53);
                  {
                    PredNameArityPFMn_54 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, PredNameArityPFMn_54, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_48));
                    MR_hl_field(0, PredNameArityPFMn_54, 1) = ((MR_Box) (PredSymName_50));
                    MR_hl_field(0, PredNameArityPFMn_54, 2) = ((MR_Box) (UserArity_52));
                    MR_hl_field(0, PredNameArityPFMn_54, 3) = ((MR_Box) (ModeNum_53));
                  }
                  Var_56 = mercury__term_context__dummy_context_0_f_0();
                  {
                    UnusedArgInfo_55 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, UnusedArgInfo_55, 0) = ((MR_Box) (PredNameArityPFMn_54));
                    MR_hl_field(0, UnusedArgInfo_55, 1) = ((MR_Box) (UnusedArgs_31));
                    MR_hl_field(0, UnusedArgInfo_55, 2) = ((MR_Box) (Var_56));
                    MR_hl_field(0, UnusedArgInfo_55, 3) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_gen_pragma_unused_args_info_0), ((MR_Box) (UnusedArgInfo_55)), STATE_VARIABLE_PragmaUnusedArgInfos_0_9, &STATE_VARIABLE_PragmaUnusedArgInfos_1_42);
                }
                else
                  STATE_VARIABLE_PragmaUnusedArgInfos_1_42 = STATE_VARIABLE_PragmaUnusedArgInfos_0_9;
              }
              break;
            case (MR_Integer) 0:
              STATE_VARIABLE_PragmaUnusedArgInfos_1_42 = STATE_VARIABLE_PragmaUnusedArgInfos_0_9;
              break;
          }
        }
        else
        {
          STATE_VARIABLE_PragmaUnusedArgInfos_1_42 = STATE_VARIABLE_PragmaUnusedArgInfos_0_9;
          STATE_VARIABLE_Specs_1_41 = STATE_VARIABLE_Specs_0_7;
          STATE_VARIABLE_WarnedPredIds_1_40 = STATE_VARIABLE_WarnedPredIds_0_6;
        }
      }
      else
      {
        STATE_VARIABLE_PragmaUnusedArgInfos_1_42 = STATE_VARIABLE_PragmaUnusedArgInfos_0_9;
        STATE_VARIABLE_Specs_1_41 = STATE_VARIABLE_Specs_0_7;
        STATE_VARIABLE_WarnedPredIds_1_40 = STATE_VARIABLE_WarnedPredIds_0_6;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__5_5 = PredProcIds_27;
      next_value_of_STATE_VARIABLE_WarnedPredIds_0_6 = STATE_VARIABLE_WarnedPredIds_1_40;
      next_value_of_STATE_VARIABLE_Specs_0_7 = STATE_VARIABLE_Specs_1_41;
      next_value_of_STATE_VARIABLE_PragmaUnusedArgInfos_0_9 = STATE_VARIABLE_PragmaUnusedArgInfos_1_42;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      STATE_VARIABLE_WarnedPredIds_0_6 = next_value_of_STATE_VARIABLE_WarnedPredIds_0_6;
      STATE_VARIABLE_Specs_0_7 = next_value_of_STATE_VARIABLE_Specs_0_7;
      STATE_VARIABLE_PragmaUnusedArgInfos_0_9 = next_value_of_STATE_VARIABLE_PragmaUnusedArgInfos_0_9;
      continue;
    }
    break;
  }
}

static MR_Box MR_CALL 
transform_hlds__unused_args_warn_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_103_97_116_104_101_114_95_119_97_114_110_105_110_103_95_95_91_49_93_95_48_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_LambdaHeadVar__2_42;

  conv1_LambdaHeadVar__2_42 = transform_hlds__unused_args_warn_pragma__IntroducedFrom__func__report_unused_args__334__1_1_f_0(((MR_Integer) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_42));
  return wrapper_arg_2;
}

static void MR_CALL 
transform_hlds__unused_args_warn_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_103_97_116_104_101_114_95_119_97_114_110_105_110_103_95_95_91_49_93_95_48_9_p_0(
  MR_Word PredInfo_11,
  MR_Word PredId_12,
  MR_Integer ProcId_13,
  MR_Word UnusedArgs0_14,
  MR_Word STATE_VARIABLE_WarnedPredIds_0_26,
  MR_Word * STATE_VARIABLE_WarnedPredIds_27,
  MR_Word STATE_VARIABLE_Specs_0_28,
  MR_Word * STATE_VARIABLE_Specs_29)
{
  MR_bool succeeded;

  succeeded = mercury__set__member_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (PredId_12)), STATE_VARIABLE_WarnedPredIds_0_26);
  if (succeeded)
  {
    *STATE_VARIABLE_Specs_29 = STATE_VARIABLE_Specs_0_28;
    *STATE_VARIABLE_WarnedPredIds_27 = STATE_VARIABLE_WarnedPredIds_0_26;
  }
  else
  {
    MR_Word ProcTable_17;
    MR_Word Proc_18;
    MR_Word PredFormArity_19;
    MR_Word HeadVars_20;
    MR_Integer NumExtraArgs_21;
    MR_Word UnusedArgs_22;
    MR_Box conv0_Proc_18;

    mercury__set__insert_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (PredId_12)), STATE_VARIABLE_WarnedPredIds_0_26, STATE_VARIABLE_WarnedPredIds_27);
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_11, &ProcTable_17);
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable_17, ((MR_Box) (ProcId_13)), &conv0_Proc_18);
    Proc_18 = ((MR_Word) (conv0_Proc_18));
    hlds__hlds_pred__pred_info_get_orig_arity_2_p_0(PredInfo_11, &PredFormArity_19);
    hlds__hlds_pred__proc_info_get_headvars_2_p_0(Proc_18, &HeadVars_20);
    NumExtraArgs_21 = parse_tree__prog_data__num_extra_args_2_f_0((MR_Word) (&transform_hlds__unused_args_warn_pragma_scalar_common_1[1]), PredFormArity_19, HeadVars_20);
    transform_hlds__unused_args_warn_pragma__drop_poly_inserted_args_3_p_0(NumExtraArgs_21, UnusedArgs0_14, &UnusedArgs_22);
    if ((UnusedArgs_22 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Specs_29 = STATE_VARIABLE_Specs_0_28;
    else
    {
      MR_Word Spec_25;
      MR_Integer NumArgs_35;
      MR_Word Context_36;
      MR_Word PredOrFunc_37;
      MR_Word ModuleName_38;
      MR_String PredName_39;
      MR_Word PredFormArity_40;
      MR_Integer UserArityInt_41;
      MR_Word SNA_42;
      MR_Word Pieces1_43;
      MR_Word UnusedArgNs_44;
      MR_Word UnusedArgPieces_45;
      MR_Word Pieces2_46;
      MR_Word Var_47;
      MR_Word Var_48;
      MR_Word Var_50;
      MR_Word Var_51;
      MR_String Var_52;
      MR_Word Var_53;
      MR_Word Var_54;
      MR_Word Var_79;

      mercury__list__length_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), UnusedArgs_22, &NumArgs_35);
      hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo_11, &Context_36);
      PredOrFunc_37 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_11);
      ModuleName_38 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_11);
      PredName_39 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_11);
      hlds__hlds_pred__pred_info_get_orig_arity_2_p_0(PredInfo_11, &PredFormArity_40);
      parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_37, &Var_47, PredFormArity_40);
      UserArityInt_41 = (MR_Integer) (Var_47);
      {
        Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_48, 0) = ((MR_Box) (ModuleName_38));
        MR_hl_field(1, Var_48, 1) = ((MR_Box) (PredName_39));
      }
      {
        SNA_42 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, SNA_42, 0) = ((MR_Box) (Var_48));
        MR_hl_field(0, SNA_42, 1) = ((MR_Box) (UserArityInt_41));
      }
      Var_52 = mdbcomp__prim_data__pred_or_func_to_full_str_1_f_0(PredOrFunc_37);
      {
        Var_51 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Var_51, 0) = ((MR_Box) (Var_52));
      }
      {
        Var_54 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_54, 0) = ((MR_Box) ((MR_Unsigned) 14U));
        MR_hl_field(3, Var_54, 1) = ((MR_Box) (SNA_42));
      }
      {
        Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_53, 0) = ((MR_Box) (Var_54));
        MR_hl_field(1, Var_53, 1) = ((MR_Box) (MR_mkword(1, &transform_hlds__unused_args_warn_pragma_scalar_common_1[7])));
      }
      {
        Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_50, 0) = ((MR_Box) (Var_51));
        MR_hl_field(1, Var_50, 1) = ((MR_Box) (Var_53));
      }
      {
        Pieces1_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Pieces1_43, 0) = ((MR_Box) (MR_mkword(3, &transform_hlds__unused_args_warn_pragma_scalar_common_1[2])));
        MR_hl_field(1, Pieces1_43, 1) = ((MR_Box) (Var_50));
      }
      UnusedArgNs_44 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (&transform_hlds__unused_args_warn_pragma_scalar_common_4[0]), UnusedArgs_22);
      UnusedArgPieces_45 = parse_tree__error_spec__piece_list_to_color_pieces_4_f_0((MR_Integer) 0, (MR_String) "and", (MR_Word) ((MR_Unsigned) 0U), UnusedArgNs_44);
      succeeded = (NumArgs_35 == (MR_Integer) 1);
      if (succeeded)
      {
        MR_Word Var_61;
        MR_Word Var_62;
        MR_Word Var_64;
        MR_Word Var_65;

        Var_65 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &transform_hlds__unused_args_warn_pragma_scalar_common_1[13])));
        Var_64 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_65, (MR_Word) (MR_mkword(1, &transform_hlds__unused_args_warn_pragma_scalar_common_1[14])));
        Var_62 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &transform_hlds__unused_args_warn_pragma_scalar_common_1[11])), Var_64);
        Var_61 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), UnusedArgPieces_45, Var_62);
        Pieces2_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &transform_hlds__unused_args_warn_pragma_scalar_common_1[9])), Var_61);
      }
      else
      {
        MR_Word Var_69;
        MR_Word Var_70;
        MR_Word Var_72;
        MR_Word Var_73;

        Var_73 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &transform_hlds__unused_args_warn_pragma_scalar_common_1[13])));
        Var_72 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_73, (MR_Word) (MR_mkword(1, &transform_hlds__unused_args_warn_pragma_scalar_common_1[14])));
        Var_70 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &transform_hlds__unused_args_warn_pragma_scalar_common_1[18])), Var_72);
        Var_69 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), UnusedArgPieces_45, Var_70);
        Pieces2_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &transform_hlds__unused_args_warn_pragma_scalar_common_1[16])), Var_69);
      }
      Var_79 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Pieces1_43, Pieces2_46);
      {
        Spec_25 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_25, 0) = ((MR_Box) ((MR_String) "function \140transform_hlds.unused_args_warn_pragma.report_unused_args\'/3"));
        MR_hl_field(0, Spec_25, 1) = ((MR_Box) (MR_mkword(2, &transform_hlds__unused_args_warn_pragma_scalar_common_2[0])));
        MR_hl_field(0, Spec_25, 2) = ((MR_Box) ((MR_Unsigned) 108U));
        MR_hl_field(0, Spec_25, 3) = ((MR_Box) (Context_36));
        MR_hl_field(0, Spec_25, 4) = ((MR_Box) (Var_79));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_29 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Spec_25));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_28));
      }
    }
  }
}

static void MR_CALL 
transform_hlds__unused_args_warn_pragma__drop_poly_inserted_args_3_p_0(
  MR_Integer NumInserted_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Integer HeadArgWith_6 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word TailArgsWith_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word TailArgsWithout_9;
    MR_Integer HeadArgWithout_10;

    transform_hlds__unused_args_warn_pragma__drop_poly_inserted_args_3_p_0(NumInserted_1, TailArgsWith_7, &TailArgsWithout_9);
    HeadArgWithout_10 = (MR_Integer) ((MR_Unsigned) HeadArgWith_6 - (MR_Unsigned) NumInserted_1);
    succeeded = (HeadArgWithout_10 < (MR_Integer) 1);
    if (succeeded)
      *HeadVar__3_3 = TailArgsWithout_9;
    else
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (HeadArgWithout_10));
        MR_hl_field(1, base, 1) = ((MR_Box) (TailArgsWithout_9));
      }
  }
}

static MR_bool MR_CALL 
transform_hlds__unused_args_warn_pragma__may_gather_warning_pragma_for_pred_1_p_0(
  MR_Word PredInfo_2)
{
  MR_bool succeeded;
  MR_Word PredStatus_3;
  MR_Word Origin_4;
  MR_Word Var_61;

  hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo_2, &PredStatus_3);
  Var_61 = hlds__status__pred_status_defined_in_this_module_1_f_0(PredStatus_3);
  succeeded = (Var_61 == (MR_Integer) 1);
  if (succeeded)
  {
    hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo_2, &Origin_4);
    switch (MR_tag((MR_Word) Origin_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word UserMade_5 = ((MR_Word) ((MR_hl_field(0, Origin_4, 0))));
          MR_Word Markers_16;
          MR_Word Var_66;

          hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_2, &Markers_16);
          switch (MR_tag((MR_Word) UserMade_5)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                succeeded = hlds__hlds_pred__pred_info_is_builtin_1_p_0(PredInfo_2);
                succeeded = !(succeeded);
              }
              break;
            case (MR_Integer) 1:
              succeeded = MR_TRUE;
              break;
            case (MR_Integer) 2:
              succeeded = MR_TRUE;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, UserMade_5, 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    succeeded = hlds__hlds_markers__marker_is_present_2_p_0(Markers_16, (MR_Integer) 13);
                    if (!(succeeded))
                      succeeded = hlds__hlds_markers__marker_is_present_2_p_0(Markers_16, (MR_Integer) 14);
                    if (succeeded)
                      succeeded = MR_FALSE;
                    else
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.unused_args_warn_pragma.may_gather_warning_pragma_for_pred\'/1", (MR_String) "user_made_instance_method with marker");
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  succeeded = MR_TRUE;
                  break;
              }
              break;
          }
          if (succeeded)
          {
            Var_66 = (MR_Integer) 0;
            succeeded = hlds__hlds_markers__marker_is_present_2_p_0(Markers_16, Var_66);
            succeeded = !(succeeded);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word CompilerMade_20 = ((MR_Word) ((MR_hl_field(1, Origin_4, 0))));

          switch (MR_tag((MR_Word) CompilerMade_20)) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 1:
              succeeded = MR_TRUE;
              break;
            case (MR_Integer) 2:
              succeeded = MR_TRUE;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, CompilerMade_20, 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  succeeded = MR_TRUE;
                  break;
                case (MR_Integer) 1:
                  succeeded = MR_TRUE;
                  break;
                case (MR_Integer) 2:
                  succeeded = MR_TRUE;
                  break;
                case (MR_Integer) 3:
                  succeeded = MR_TRUE;
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word PredTransform_36 = ((MR_Word) ((MR_hl_field(2, Origin_4, 0))));

          switch (MR_tag((MR_Word) PredTransform_36)) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 0:
              switch (MR_unmkbody(PredTransform_36)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  succeeded = MR_TRUE;
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
              succeeded = MR_TRUE;
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word ProcTransform_42 = ((MR_Word) ((MR_hl_field(3, Origin_4, 0))));

          switch (MR_tag((MR_Word) ProcTransform_42)) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 0:
              switch (MR_unmkbody(ProcTransform_42)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  succeeded = MR_TRUE;
                  break;
                case (MR_Integer) 1:
                  succeeded = MR_TRUE;
                  break;
                case (MR_Integer) 2:
                  succeeded = MR_TRUE;
                  break;
                case (MR_Integer) 3:
                  succeeded = MR_TRUE;
                  break;
              }
              break;
            case (MR_Integer) 1:
              succeeded = MR_TRUE;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, ProcTransform_42, 0))))) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 0:
                  succeeded = MR_TRUE;
                  break;
                case (MR_Integer) 1:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.unused_args_warn_pragma.may_gather_warning_pragma_for_pred\'/1", (MR_String) "proc_transform_unused_args");
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 3:
                  succeeded = MR_TRUE;
                  break;
                case (MR_Integer) 4:
                  succeeded = MR_TRUE;
                  break;
                case (MR_Integer) 5:
                  succeeded = MR_TRUE;
                  break;
                case (MR_Integer) 6:
                  succeeded = MR_TRUE;
                  break;
              }
              break;
          }
        }
        break;
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__unused_args_warn_pragma____Unify____maybe_gather_pragma_unused_args_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__unused_args_warn_pragma____Unify____maybe_gather_pragma_unused_args_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__unused_args_warn_pragma____Compare____maybe_gather_pragma_unused_args_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__unused_args_warn_pragma____Compare____maybe_gather_pragma_unused_args_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__unused_args_warn_pragma____Unify____maybe_record_analysis_unused_args_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__unused_args_warn_pragma____Unify____maybe_record_analysis_unused_args_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__unused_args_warn_pragma____Compare____maybe_record_analysis_unused_args_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__unused_args_warn_pragma____Compare____maybe_record_analysis_unused_args_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__unused_args_warn_pragma____Unify____maybe_warn_unused_args_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__unused_args_warn_pragma____Unify____maybe_warn_unused_args_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__unused_args_warn_pragma____Compare____maybe_warn_unused_args_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__unused_args_warn_pragma____Compare____maybe_warn_unused_args_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__transform_hlds__unused_args_warn_pragma__init(void)
{
}

void mercury__transform_hlds__unused_args_warn_pragma__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__type_ctor_info_maybe_gather_pragma_unused_args_0);
  MR_register_type_ctor_info(&transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__type_ctor_info_maybe_record_analysis_unused_args_0);
  MR_register_type_ctor_info(&transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__type_ctor_info_maybe_warn_unused_args_0);
}

void mercury__transform_hlds__unused_args_warn_pragma__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__unused_args_warn_pragma__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.unused_args_warn_pragma.
