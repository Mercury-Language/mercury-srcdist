/*
** Automatically generated from `mlds_to_c_util.m'
** by the Mercury compiler,
** version rotd-2018-08-08
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


// :- module ml_backend.mlds_to_c_util.
// :- implementation.

/*
INIT mercury__ml_backend__mlds_to_c_util__init
ENDINIT
*/

#include "ml_backend.mlds_to_c_util.mih"


#include "analysis.mih"
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "ml_backend.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.c_util.mih"
#include "backend_libs.foreign.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
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
#include "counter.mih"
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
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.ml_util.mih"
#include "ml_backend.mlds.mih"
#include "ml_backend.mlds_to_target_util.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.java_names.mih"
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




static const MR_EnumFunctorDesc ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__enum_functor_desc_decl_or_defn_0_0;

static const MR_EnumFunctorDesc ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__enum_functor_desc_decl_or_defn_0_1;

static const MR_EnumFunctorDescPtr ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__enum_value_ordered_decl_or_defn_0[2];

static const MR_EnumFunctorDescPtr ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__enum_name_ordered_decl_or_defn_0[2];

static const MR_Integer ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__functor_number_map_decl_or_defn_0[2];

static const MR_PseudoTypeInfo ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__field_types_mlds_to_c_opts_0_0[15];

static const MR_ConstString ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__field_names_mlds_to_c_opts_0_0[15];

static const MR_DuArgLocn ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__field_locns_mlds_to_c_opts_0_0[15];

static const MR_DuFunctorDesc ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__du_functor_desc_mlds_to_c_opts_0_0;

static const MR_DuFunctorDescPtr ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__du_stag_ordered_mlds_to_c_opts_0_0[1];

static const MR_DuPtagLayout ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__du_ptag_ordered_mlds_to_c_opts_0[1];

static const MR_DuFunctorDescPtr ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__du_name_ordered_mlds_to_c_opts_0[1];

static const MR_Integer ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__functor_number_map_mlds_to_c_opts_0[1];

static MR_bool MR_CALL 
ml_backend__mlds_to_c_util____Unify____decl_or_defn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__mlds_to_c_util____Compare____decl_or_defn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_util____Unify____mlds_to_c_opts_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__mlds_to_c_util____Compare____mlds_to_c_opts_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);







#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_EnumFunctorDesc ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__enum_functor_desc_decl_or_defn_0_0 = {
  (MR_String) "forward_decl",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__enum_functor_desc_decl_or_defn_0_1 = {
  (MR_String) "definition",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__enum_value_ordered_decl_or_defn_0[2] = {
  &ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__enum_functor_desc_decl_or_defn_0_0,
  &ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__enum_functor_desc_decl_or_defn_0_1
};

static const MR_EnumFunctorDescPtr ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__enum_name_ordered_decl_or_defn_0[2] = {
  &ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__enum_functor_desc_decl_or_defn_0_1,
  &ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__enum_functor_desc_decl_or_defn_0_0
};

static const MR_Integer ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__functor_number_map_decl_or_defn_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_decl_or_defn_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ml_backend__mlds_to_c_util____Unify____decl_or_defn_0_0_10001)),
  ((MR_Box) (ml_backend__mlds_to_c_util____Compare____decl_or_defn_0_0_10001)),
  (MR_String) "ml_backend.mlds_to_c_util",
  (MR_String) "decl_or_defn",
  {     ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__enum_name_ordered_decl_or_defn_0 },
  {     ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__enum_value_ordered_decl_or_defn_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__functor_number_map_decl_or_defn_0
};

static const MR_PseudoTypeInfo ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__field_types_mlds_to_c_opts_0_0[15] = {
  (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_globals_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_compilation_target_0),
  (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_gc_method_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_break_context_0)
};

static const MR_ConstString ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__field_names_mlds_to_c_opts_0_0[15] = {
  (MR_String) "m2co_all_globals",
  (MR_String) "m2co_source_filename",
  (MR_String) "m2co_line_numbers",
  (MR_String) "m2co_foreign_line_numbers",
  (MR_String) "m2co_auto_comments",
  (MR_String) "m2co_highlevel_data",
  (MR_String) "m2co_single_prec_float",
  (MR_String) "m2co_profile_calls",
  (MR_String) "m2co_profile_memory",
  (MR_String) "m2co_profile_time",
  (MR_String) "m2co_need_to_init",
  (MR_String) "m2co_target",
  (MR_String) "m2co_gc_method",
  (MR_String) "m2co_std_func_decl",
  (MR_String) "m2co_break_context"
};

static const MR_DuArgLocn ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__field_locns_mlds_to_c_opts_0_0[15] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 16,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 15,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 14,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 13,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 12,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 11,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 10,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 9,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 8,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 6,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 3,
    (MR_Integer) 3
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 2,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 2
  }
};

static const MR_DuFunctorDesc ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__du_functor_desc_mlds_to_c_opts_0_0 = {
  (MR_String) "mlds_to_c_opts",
  (MR_Integer) 15,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__field_types_mlds_to_c_opts_0_0,
  ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__field_names_mlds_to_c_opts_0_0,
  ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__field_locns_mlds_to_c_opts_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__du_stag_ordered_mlds_to_c_opts_0_0[1] = {
  &ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__du_functor_desc_mlds_to_c_opts_0_0
};

static const MR_DuPtagLayout ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__du_ptag_ordered_mlds_to_c_opts_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__du_stag_ordered_mlds_to_c_opts_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__du_name_ordered_mlds_to_c_opts_0[1] = {
  &ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__du_functor_desc_mlds_to_c_opts_0_0
};

static const MR_Integer ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__functor_number_map_mlds_to_c_opts_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__mlds_to_c_util____Unify____mlds_to_c_opts_0_0_10001)),
  ((MR_Box) (ml_backend__mlds_to_c_util____Compare____mlds_to_c_opts_0_0_10001)),
  (MR_String) "ml_backend.mlds_to_c_util",
  (MR_String) "mlds_to_c_opts",
  {     ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__du_name_ordered_mlds_to_c_opts_0 },
  {     ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__du_ptag_ordered_mlds_to_c_opts_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__functor_number_map_mlds_to_c_opts_0
};

void MR_CALL 
ml_backend__mlds_to_c_util____Compare____mlds_to_c_opts_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_48 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_49 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_48 == CastY_49);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_String ArgX2_6 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_String ArgY2_7 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_8 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) >> (MR_Integer) 16)) & (MR_Integer) 1);
      MR_Word ArgY3_9 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))) >> (MR_Integer) 16)) & (MR_Integer) 1);
      MR_Word ArgX4_10 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) >> (MR_Integer) 15)) & (MR_Integer) 1);
      MR_Word ArgY4_11 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))) >> (MR_Integer) 15)) & (MR_Integer) 1);
      MR_Word ArgX5_12 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) >> (MR_Integer) 14)) & (MR_Integer) 1);
      MR_Word ArgY5_13 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))) >> (MR_Integer) 14)) & (MR_Integer) 1);
      MR_Word ArgX6_14 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) >> (MR_Integer) 13)) & (MR_Integer) 1);
      MR_Word ArgY6_15 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))) >> (MR_Integer) 13)) & (MR_Integer) 1);
      MR_Word ArgX7_16 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) >> (MR_Integer) 12)) & (MR_Integer) 1);
      MR_Word ArgY7_17 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))) >> (MR_Integer) 12)) & (MR_Integer) 1);
      MR_Word ArgX8_18 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) >> (MR_Integer) 11)) & (MR_Integer) 1);
      MR_Word ArgY8_19 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))) >> (MR_Integer) 11)) & (MR_Integer) 1);
      MR_Word ArgX9_20 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) >> (MR_Integer) 10)) & (MR_Integer) 1);
      MR_Word ArgY9_21 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))) >> (MR_Integer) 10)) & (MR_Integer) 1);
      MR_Word ArgX10_22 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) >> (MR_Integer) 9)) & (MR_Integer) 1);
      MR_Word ArgY10_23 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))) >> (MR_Integer) 9)) & (MR_Integer) 1);
      MR_Word ArgX11_24 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) >> (MR_Integer) 8)) & (MR_Integer) 1);
      MR_Word ArgY11_25 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))) >> (MR_Integer) 8)) & (MR_Integer) 1);
      MR_Word ArgX12_26 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) >> (MR_Integer) 6)) & (MR_Integer) 3);
      MR_Word ArgY12_27 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))) >> (MR_Integer) 6)) & (MR_Integer) 3);
      MR_Word ArgX13_28 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) >> (MR_Integer) 3)) & (MR_Integer) 7);
      MR_Word ArgY13_29 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))) >> (MR_Integer) 3)) & (MR_Integer) 7);
      MR_Word ArgX14_30 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word ArgY14_31 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word ArgX15_32 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 3);
      MR_Word ArgY15_33 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))) & (MR_Integer) 3);
      MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Unsigned packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
      MR_Word Var_34;

      libs__globals____Compare____globals_0_0(&Var_34, ArgX1_4, ArgY1_5);
      succeeded = (Var_34 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_34;
      else
      {
        MR_Word Var_35;

        mercury__private_builtin__builtin_compare_string_3_p_0(&Var_35, ArgX2_6, ArgY2_7);
        succeeded = (Var_35 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_35;
        else
        {
          MR_Word Var_36;
          MR_Integer Var_65 = (MR_Integer) (ArgX3_8);
          MR_Integer Var_66 = (MR_Integer) (ArgY3_9);

          mercury__private_builtin__builtin_compare_int_3_p_0(&Var_36, Var_65, Var_66);
          succeeded = (Var_36 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_36;
          else
          {
            MR_Word Var_37;
            MR_Integer Var_67 = (MR_Integer) (ArgX4_10);
            MR_Integer Var_68 = (MR_Integer) (ArgY4_11);

            mercury__private_builtin__builtin_compare_int_3_p_0(&Var_37, Var_67, Var_68);
            succeeded = (Var_37 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
              *HeadVar__1_1 = Var_37;
            else
            {
              MR_Word Var_38;
              MR_Integer Var_69 = (MR_Integer) (ArgX5_12);
              MR_Integer Var_70 = (MR_Integer) (ArgY5_13);

              mercury__private_builtin__builtin_compare_int_3_p_0(&Var_38, Var_69, Var_70);
              succeeded = (Var_38 == (MR_Integer) 0);
              succeeded = !(succeeded);
              if (succeeded)
                *HeadVar__1_1 = Var_38;
              else
              {
                MR_Word Var_39;
                MR_Integer Var_71 = (MR_Integer) (ArgX6_14);
                MR_Integer Var_72 = (MR_Integer) (ArgY6_15);

                mercury__private_builtin__builtin_compare_int_3_p_0(&Var_39, Var_71, Var_72);
                succeeded = (Var_39 == (MR_Integer) 0);
                succeeded = !(succeeded);
                if (succeeded)
                  *HeadVar__1_1 = Var_39;
                else
                {
                  MR_Word Var_40;
                  MR_Integer Var_73 = (MR_Integer) (ArgX7_16);
                  MR_Integer Var_74 = (MR_Integer) (ArgY7_17);

                  mercury__private_builtin__builtin_compare_int_3_p_0(&Var_40, Var_73, Var_74);
                  succeeded = (Var_40 == (MR_Integer) 0);
                  succeeded = !(succeeded);
                  if (succeeded)
                    *HeadVar__1_1 = Var_40;
                  else
                  {
                    MR_Word Var_41;
                    MR_Integer Var_75 = (MR_Integer) (ArgX8_18);
                    MR_Integer Var_76 = (MR_Integer) (ArgY8_19);

                    mercury__private_builtin__builtin_compare_int_3_p_0(&Var_41, Var_75, Var_76);
                    succeeded = (Var_41 == (MR_Integer) 0);
                    succeeded = !(succeeded);
                    if (succeeded)
                      *HeadVar__1_1 = Var_41;
                    else
                    {
                      MR_Word Var_42;
                      MR_Integer Var_77 = (MR_Integer) (ArgX9_20);
                      MR_Integer Var_78 = (MR_Integer) (ArgY9_21);

                      mercury__private_builtin__builtin_compare_int_3_p_0(&Var_42, Var_77, Var_78);
                      succeeded = (Var_42 == (MR_Integer) 0);
                      succeeded = !(succeeded);
                      if (succeeded)
                        *HeadVar__1_1 = Var_42;
                      else
                      {
                        MR_Word Var_43;
                        MR_Integer Var_79 = (MR_Integer) (ArgX10_22);
                        MR_Integer Var_80 = (MR_Integer) (ArgY10_23);

                        mercury__private_builtin__builtin_compare_int_3_p_0(&Var_43, Var_79, Var_80);
                        succeeded = (Var_43 == (MR_Integer) 0);
                        succeeded = !(succeeded);
                        if (succeeded)
                          *HeadVar__1_1 = Var_43;
                        else
                        {
                          MR_Word Var_44;
                          MR_Integer Var_81 = (MR_Integer) (ArgX11_24);
                          MR_Integer Var_82 = (MR_Integer) (ArgY11_25);

                          mercury__private_builtin__builtin_compare_int_3_p_0(&Var_44, Var_81, Var_82);
                          succeeded = (Var_44 == (MR_Integer) 0);
                          succeeded = !(succeeded);
                          if (succeeded)
                            *HeadVar__1_1 = Var_44;
                          else
                          {
                            MR_Word Var_45;
                            MR_Integer Var_83 = (MR_Integer) (ArgX12_26);
                            MR_Integer Var_84 = (MR_Integer) (ArgY12_27);

                            mercury__private_builtin__builtin_compare_int_3_p_0(&Var_45, Var_83, Var_84);
                            succeeded = (Var_45 == (MR_Integer) 0);
                            succeeded = !(succeeded);
                            if (succeeded)
                              *HeadVar__1_1 = Var_45;
                            else
                            {
                              MR_Word Var_46;
                              MR_Integer Var_85 = (MR_Integer) (ArgX13_28);
                              MR_Integer Var_86 = (MR_Integer) (ArgY13_29);

                              mercury__private_builtin__builtin_compare_int_3_p_0(&Var_46, Var_85, Var_86);
                              succeeded = (Var_46 == (MR_Integer) 0);
                              succeeded = !(succeeded);
                              if (succeeded)
                                *HeadVar__1_1 = Var_46;
                              else
                              {
                                MR_Word Var_47;
                                MR_Integer Var_87 = (MR_Integer) (ArgX14_30);
                                MR_Integer Var_88 = (MR_Integer) (ArgY14_31);

                                mercury__private_builtin__builtin_compare_int_3_p_0(&Var_47, Var_87, Var_88);
                                succeeded = (Var_47 == (MR_Integer) 0);
                                succeeded = !(succeeded);
                                if (succeeded)
                                  *HeadVar__1_1 = Var_47;
                                else
                                {
                                  MR_Integer Var_89 = (MR_Integer) (ArgX15_32);
                                  MR_Integer Var_90 = (MR_Integer) (ArgY15_33);

                                  mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Var_89, Var_90);
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
ml_backend__mlds_to_c_util____Unify____mlds_to_c_opts_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_33 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_34 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_33 == CastY_34);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_String ArgX2_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_String ArgY2_6 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))) >> (MR_Integer) 16)) & (MR_Integer) 1);
      MR_Word ArgY3_8 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) >> (MR_Integer) 16)) & (MR_Integer) 1);
      MR_Word ArgX4_9 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))) >> (MR_Integer) 15)) & (MR_Integer) 1);
      MR_Word ArgY4_10 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) >> (MR_Integer) 15)) & (MR_Integer) 1);
      MR_Word ArgX5_11 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))) >> (MR_Integer) 14)) & (MR_Integer) 1);
      MR_Word ArgY5_12 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) >> (MR_Integer) 14)) & (MR_Integer) 1);
      MR_Word ArgX6_13 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))) >> (MR_Integer) 13)) & (MR_Integer) 1);
      MR_Word ArgY6_14 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) >> (MR_Integer) 13)) & (MR_Integer) 1);
      MR_Word ArgX7_15 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))) >> (MR_Integer) 12)) & (MR_Integer) 1);
      MR_Word ArgY7_16 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) >> (MR_Integer) 12)) & (MR_Integer) 1);
      MR_Word ArgX8_17 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))) >> (MR_Integer) 11)) & (MR_Integer) 1);
      MR_Word ArgY8_18 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) >> (MR_Integer) 11)) & (MR_Integer) 1);
      MR_Word ArgX9_19 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))) >> (MR_Integer) 10)) & (MR_Integer) 1);
      MR_Word ArgY9_20 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) >> (MR_Integer) 10)) & (MR_Integer) 1);
      MR_Word ArgX10_21 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))) >> (MR_Integer) 9)) & (MR_Integer) 1);
      MR_Word ArgY10_22 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) >> (MR_Integer) 9)) & (MR_Integer) 1);
      MR_Word ArgX11_23 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))) >> (MR_Integer) 8)) & (MR_Integer) 1);
      MR_Word ArgY11_24 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) >> (MR_Integer) 8)) & (MR_Integer) 1);
      MR_Word ArgX12_25 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))) >> (MR_Integer) 6)) & (MR_Integer) 3);
      MR_Word ArgY12_26 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) >> (MR_Integer) 6)) & (MR_Integer) 3);
      MR_Word ArgX13_27 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))) >> (MR_Integer) 3)) & (MR_Integer) 7);
      MR_Word ArgY13_28 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) >> (MR_Integer) 3)) & (MR_Integer) 7);
      MR_Word ArgX14_29 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word ArgY14_30 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word ArgX15_31 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))) & (MR_Integer) 3);
      MR_Word ArgY15_32 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 3);
      MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Unsigned packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));

      succeeded = libs__globals____Unify____globals_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        succeeded = (strcmp(ArgX2_5, ArgY2_6) == 0);
        if (succeeded)
        {
          succeeded = (ArgX3_7 == ArgY3_8);
          if (succeeded)
          {
            succeeded = (ArgX4_9 == ArgY4_10);
            if (succeeded)
            {
              succeeded = (ArgX5_11 == ArgY5_12);
              if (succeeded)
              {
                succeeded = (ArgX6_13 == ArgY6_14);
                if (succeeded)
                {
                  succeeded = (ArgX7_15 == ArgY7_16);
                  if (succeeded)
                  {
                    succeeded = (ArgX8_17 == ArgY8_18);
                    if (succeeded)
                    {
                      succeeded = (ArgX9_19 == ArgY9_20);
                      if (succeeded)
                      {
                        succeeded = (ArgX10_21 == ArgY10_22);
                        if (succeeded)
                        {
                          succeeded = (ArgX11_23 == ArgY11_24);
                          if (succeeded)
                          {
                            succeeded = (ArgX12_25 == ArgY12_26);
                            if (succeeded)
                            {
                              succeeded = (ArgX13_27 == ArgY13_28);
                              if (succeeded)
                              {
                                succeeded = (ArgX14_29 == ArgY14_30);
                                if (succeeded)
                                  succeeded = (ArgX15_31 == ArgY15_32);
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
ml_backend__mlds_to_c_util____Compare____decl_or_defn_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
ml_backend__mlds_to_c_util____Unify____decl_or_defn_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
ml_backend__mlds_to_c_util__c_reset_context_3_p_0(
  MR_Word OutputLineNumbers_4)
{
  switch (OutputLineNumbers_4) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        backend_libs__c_util__always_reset_line_num_cur_stream_3_p_0((MR_Word) ((MR_Unsigned) 0U));
      }
      break;
  }
}

void MR_CALL 
ml_backend__mlds_to_c_util__c_output_file_line_5_p_0(
  MR_Word OutputLineNumbers_6,
  MR_String FileName_7,
  MR_Integer LineNumber_8)
{
  switch (OutputLineNumbers_6) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      backend_libs__c_util__always_set_line_num_cur_stream_4_p_0(FileName_7, LineNumber_8);
      break;
  }
}

void MR_CALL 
ml_backend__mlds_to_c_util__c_output_context_4_p_0(
  MR_Word OutputLineNumbers_5,
  MR_Word Context_6)
{
  switch (OutputLineNumbers_5) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String FileName_8;
        MR_Integer LineNumber_9;

        mercury__term__context_file_2_p_0(Context_6, &FileName_8);
        mercury__term__context_line_2_p_0(Context_6, &LineNumber_9);
        backend_libs__c_util__always_set_line_num_cur_stream_4_p_0(FileName_8, LineNumber_9);
      }
      break;
  }
}

void MR_CALL 
ml_backend__mlds_to_c_util__c_output_stmt_context_4_p_0(
  MR_Word OutputLineNumbers_5,
  MR_Word Stmt_6)
{
  switch (OutputLineNumbers_5) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Context_8;
        MR_String FileName_9;
        MR_Integer LineNumber_10;

        Context_8 = ml_backend__ml_util__get_mlds_stmt_context_1_f_0(Stmt_6);
        mercury__term__context_file_2_p_0(Context_8, &FileName_9);
        mercury__term__context_line_2_p_0(Context_8, &LineNumber_10);
        backend_libs__c_util__always_set_line_num_cur_stream_4_p_0(FileName_9, LineNumber_10);
      }
      break;
  }
}

MR_Word MR_CALL 
ml_backend__mlds_to_c_util__init_mlds_to_c_opts_2_f_0(
  MR_Word Globals_4,
  MR_String SourceFileName_5)
{
  {
    MR_bool succeeded;
    MR_Word Opts_6;
    MR_Word LineNumbers_7;
    MR_Word ForeignLineNumbers_8;
    MR_Word Comments_9;
    MR_Word HighLevelData_10;
    MR_Word SinglePrecFloat_11;
    MR_Word ProfileCalls_12;
    MR_Word ProfileMemory_13;
    MR_Word ProfileTime_14;
    MR_Word NeedToInit_15;
    MR_Word Target_16;
    MR_Word GCMethod_17;

    libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 151, &LineNumbers_7);
    libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 152, &ForeignLineNumbers_8);
    libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 154, &Comments_9);
    libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 274, &HighLevelData_10);
    libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 241, &SinglePrecFloat_11);
    libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 209, &ProfileCalls_12);
    libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 211, &ProfileMemory_13);
    libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 210, &ProfileTime_14);
    succeeded = (ProfileCalls_12 == (MR_Integer) 1);
    if (!(succeeded))
    {
      succeeded = (ProfileMemory_13 == (MR_Integer) 1);
      if (!(succeeded))
        succeeded = (ProfileTime_14 == (MR_Integer) 1);
    }
    if (succeeded)
      NeedToInit_15 = (MR_Integer) 1;
    else
      NeedToInit_15 = (MR_Integer) 0;
    libs__globals__get_target_2_p_0(Globals_4, &Target_16);
    libs__globals__get_gc_method_2_p_0(Globals_4, &GCMethod_17);
    {
      Opts_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Opts_6, 0) = ((MR_Box) (Globals_4));
      MR_hl_field(MR_mktag(0), Opts_6, 1) = ((MR_Box) (SourceFileName_5));
      MR_hl_field(MR_mktag(0), Opts_6, 2) = (MR_Box) (((((MR_Unsigned) (LineNumbers_7) << (MR_Integer) 16)) | (((((MR_Unsigned) (ForeignLineNumbers_8) << (MR_Integer) 15)) | (((((MR_Unsigned) (Comments_9) << (MR_Integer) 14)) | (((((MR_Unsigned) (HighLevelData_10) << (MR_Integer) 13)) | (((((MR_Unsigned) (SinglePrecFloat_11) << (MR_Integer) 12)) | (((((MR_Unsigned) (ProfileCalls_12) << (MR_Integer) 11)) | (((((MR_Unsigned) (ProfileMemory_13) << (MR_Integer) 10)) | (((((MR_Unsigned) (ProfileTime_14) << (MR_Integer) 9)) | (((((MR_Unsigned) (NeedToInit_15) << (MR_Integer) 8)) | (((((MR_Unsigned) (Target_16) << (MR_Integer) 6)) | (((((MR_Unsigned) (GCMethod_17) << (MR_Integer) 3)) | (((((MR_Unsigned) ((MR_Integer) 0) << (MR_Integer) 2)) | (MR_Unsigned) ((MR_Integer) 0)))))))))))))))))))))))));
    }
    return Opts_6;
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_util____Unify____decl_or_defn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__mlds_to_c_util____Unify____decl_or_defn_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_util____Compare____decl_or_defn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__mlds_to_c_util____Compare____decl_or_defn_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_util____Unify____mlds_to_c_opts_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__mlds_to_c_util____Unify____mlds_to_c_opts_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_util____Compare____mlds_to_c_opts_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__mlds_to_c_util____Compare____mlds_to_c_opts_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__ml_backend__mlds_to_c_util__init(void)
{
}

void mercury__ml_backend__mlds_to_c_util__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_decl_or_defn_0);
	MR_register_type_ctor_info(&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0);
}

void mercury__ml_backend__mlds_to_c_util__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ml_backend__mlds_to_c_util__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ml_backend.mlds_to_c_util.
