/*
** Automatically generated from `mlds_to_cs.m'
** by the Mercury compiler,
** version rotd-2016-02-18
** configured for x86_64-apple-darwin13.4.0.
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


/* :- module ml_backend.mlds_to_cs. */
/* :- implementation. */

/*
INIT mercury__ml_backend__mlds_to_cs__init
ENDINIT
*/

#include "ml_backend.mlds_to_cs.mih"


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
#include "check_hlds.unify_proc.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
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
#include "libs.file_util.mih"
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
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "library.mih"
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
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.ml_type_gen.mih"
#include "ml_backend.ml_util.mih"
#include "ml_backend.mlds.mih"
#include "ml_backend.rtti_to_mlds.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.java_names.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
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
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_cs__cord__pti_cord_1__plain_ml_backend__mlds__type_ctor_info_mlds_initializer_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_cs__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_cs__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_cs__digraph__pti_digraph_1__plain_ml_backend__mlds__type_ctor_info_mlds_scalar_common_0;

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__mlds_to_cs__tree234__pti_tree234_2__plain_ml_backend__mlds__type_ctor_info_mlds_scalar_common_0__plain_ml_backend__mlds__type_ctor_info_mlds_initializer_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_cs__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_defn_0;

static const MR_FA_TypeInfo_Struct2 ml_backend__mlds_to_cs__tree234__ti_tree234_2ml_backend__mlds__type_ctor_info_mlds_code_addr_0builtin__type_ctor_info_string_0;

static const MR_PseudoTypeInfo ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__field_types_code_addr_map_0_0[2];

static const MR_ConstString ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__field_names_code_addr_map_0_0[2];

static const MR_DuFunctorDesc ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__du_functor_desc_code_addr_map_0_0;

static const MR_DuFunctorDescPtr ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__du_stag_ordered_code_addr_map_0_0[1];

static const MR_DuPtagLayout ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__du_ptag_ordered_code_addr_map_0[1];

static const MR_DuFunctorDescPtr ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__du_name_ordered_code_addr_map_0[1];

static const MR_Integer ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__functor_number_map_code_addr_map_0[1];

static const MR_FA_TypeInfo_Struct1 ml_backend__mlds_to_cs__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__mlds_to_cs__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_PseudoTypeInfo ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__field_types_csharp_out_info_0_0[9];

static const MR_ConstString ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__field_names_csharp_out_info_0_0[9];

static const MR_DuArgLocn ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__field_locns_csharp_out_info_0_0[9];

static const MR_DuFunctorDesc ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__du_functor_desc_csharp_out_info_0_0;

static const MR_DuFunctorDescPtr ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__du_stag_ordered_csharp_out_info_0_0[1];

static const MR_DuPtagLayout ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__du_ptag_ordered_csharp_out_info_0[1];

static const MR_DuFunctorDescPtr ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__du_name_ordered_csharp_out_info_0[1];

static const MR_Integer ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__functor_number_map_csharp_out_info_0[1];

static const MR_EnumFunctorDesc ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__enum_functor_desc_exit_method_0_0;

static const MR_EnumFunctorDesc ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__enum_functor_desc_exit_method_0_1;

static const MR_EnumFunctorDesc ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__enum_functor_desc_exit_method_0_2;

static const MR_EnumFunctorDesc ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__enum_functor_desc_exit_method_0_3;

static const MR_EnumFunctorDesc ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__enum_functor_desc_exit_method_0_4;

static const MR_EnumFunctorDescPtr ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__enum_value_ordered_exit_method_0[5];

static const MR_EnumFunctorDescPtr ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__enum_name_ordered_exit_method_0[5];

static const MR_Integer ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__functor_number_map_exit_method_0[5];

static const MR_FA_TypeInfo_Struct1 ml_backend__mlds_to_cs__set_ordlist__ti_set_ordlist_1ml_backend__mlds_to_cs__type_ctor_info_exit_method_0;

static const MR_Integer ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__functor_number_map_func_info_0[1];

static const MR_NotagFunctorDesc ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__notag_functor_desc_func_info_0;

static const MR_DuFunctorDesc ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__du_functor_desc_output_aux_0_0;

static const MR_PseudoTypeInfo ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__field_types_output_aux_0_1[1];

static const MR_DuFunctorDesc ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__du_functor_desc_output_aux_0_1;

static const MR_DuFunctorDesc ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__du_functor_desc_output_aux_0_2;

static const MR_DuFunctorDesc ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__du_functor_desc_output_aux_0_3;

static const MR_DuFunctorDescPtr ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__du_stag_ordered_output_aux_0_0[3];

static const MR_DuFunctorDescPtr ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__du_stag_ordered_output_aux_0_1[1];

static const MR_DuPtagLayout ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__du_ptag_ordered_output_aux_0[2];

static const MR_DuFunctorDescPtr ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__du_name_ordered_output_aux_0[4];

static const MR_Integer ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__functor_number_map_output_aux_0[4];

static const MR_EnumFunctorDesc ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__enum_functor_desc_output_generics_0_0;

static const MR_EnumFunctorDesc ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__enum_functor_desc_output_generics_0_1;

static const MR_EnumFunctorDescPtr ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__enum_value_ordered_output_generics_0[2];

static const MR_EnumFunctorDescPtr ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__enum_name_ordered_output_generics_0[2];

static const MR_Integer ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__functor_number_map_output_generics_0[2];

static MR_bool MR_CALL 
ml_backend__mlds_to_cs____Unify____code_addr_map_0_0_10001(
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2);

static void MR_CALL 
ml_backend__mlds_to_cs____Compare____code_addr_map_0_0_10001(
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__mlds_to_cs____Unify____csharp_out_info_0_0_10001(
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2);

static void MR_CALL 
ml_backend__mlds_to_cs____Compare____csharp_out_info_0_0_10001(
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__mlds_to_cs____Unify____exit_method_0_0_10001(
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2);

static void MR_CALL 
ml_backend__mlds_to_cs____Compare____exit_method_0_0_10001(
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__mlds_to_cs____Unify____exit_methods_0_0_10001(
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2);

static void MR_CALL 
ml_backend__mlds_to_cs____Compare____exit_methods_0_0_10001(
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__mlds_to_cs____Unify____func_info_0_0_10001(
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2);

static void MR_CALL 
ml_backend__mlds_to_cs____Compare____func_info_0_0_10001(
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__mlds_to_cs____Unify____indent_0_0_10001(
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2);

static void MR_CALL 
ml_backend__mlds_to_cs____Compare____indent_0_0_10001(
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__mlds_to_cs____Unify____output_aux_0_0_10001(
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2);

static void MR_CALL 
ml_backend__mlds_to_cs____Compare____output_aux_0_0_10001(
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__mlds_to_cs____Unify____output_generics_0_0_10001(
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2);

static void MR_CALL 
ml_backend__mlds_to_cs____Compare____output_generics_0_0_10001(
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_98_111_120_101_100_95_114_118_97_108_95_95_91_50_93_95_48_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_6,
  MR_Word ml_backend__mlds_to_cs__Expr_8);

static void MR_CALL 
ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_119_105_116_99_104_95_100_101_102_97_117_108_116_95_95_91_51_93_95_48_8_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_9,
  MR_Integer ml_backend__mlds_to_cs__Indent_10,
  MR_Word ml_backend__mlds_to_cs__Context_12,
  MR_Word ml_backend__mlds_to_cs__Default_13,
  MR_Word * ml_backend__mlds_to_cs__ExitMethods_14);

static void MR_CALL 
ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_119_105_116_99_104_95_99_97_115_101_95_95_91_51_93_95_48_8_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_119_105_116_99_104_95_99_97_115_101_95_95_91_51_93_95_48_8_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_9,
  MR_Integer ml_backend__mlds_to_cs__Indent_10,
  MR_Word ml_backend__mlds_to_cs__Context_12,
  MR_Word ml_backend__mlds_to_cs__Case_13,
  MR_Word * ml_backend__mlds_to_cs__ExitMethods_14);

static void MR_CALL 
ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_119_105_116_99_104_95_99_97_115_101_115_95_95_91_51_93_95_48_9_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_1,
  MR_Integer ml_backend__mlds_to_cs__Indent_2,
  MR_Word ml_backend__mlds_to_cs__Context_4,
  MR_Word ml_backend__mlds_to_cs__HeadVar__5_5,
  MR_Word ml_backend__mlds_to_cs__Default_6,
  MR_Word * ml_backend__mlds_to_cs__ExitMethods_7);

static void MR_CALL 
ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_95_91_51_93_95_48_8_p_0_3(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_4,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_5);

static void MR_CALL 
ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_95_91_51_93_95_48_8_p_0_2(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3);

static MR_Box MR_CALL 
ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_95_91_51_93_95_48_8_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1);

static void MR_CALL 
ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_95_91_51_93_95_48_8_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_9,
  MR_Integer ml_backend__mlds_to_cs__Indent_10,
  MR_Word ml_backend__mlds_to_cs__Statement_12,
  MR_Word ml_backend__mlds_to_cs__Context_13,
  MR_Word * ml_backend__mlds_to_cs__ExitMethods_14);

static void MR_CALL 
ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_97_116_101_109_101_110_116_95_95_91_51_93_95_48_7_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_8,
  MR_Integer ml_backend__mlds_to_cs__Indent_9,
  MR_Word ml_backend__mlds_to_cs__HeadVar__4_4,
  MR_Word * ml_backend__mlds_to_cs__ExitMethods_13);

static void MR_CALL 
ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_97_116_101_109_101_110_116_115_95_95_91_51_93_95_48_7_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_1,
  MR_Integer ml_backend__mlds_to_cs__Indent_2,
  MR_Word ml_backend__mlds_to_cs__HeadVar__4_4,
  MR_Word * ml_backend__mlds_to_cs__ExitMethods_5);

static void MR_CALL 
ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_101_110_117_109_95_99_111_110_115_116_97_110_116_95_95_91_51_93_95_48_6_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_7,
  MR_Integer ml_backend__mlds_to_cs__Indent_8,
  MR_Word ml_backend__mlds_to_cs__Defn_10);

static void MR_CALL 
ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_114_99_95_115_116_97_114_116_95_95_91_52_93_95_48_8_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_114_99_95_115_116_97_114_116_95_95_91_52_93_95_48_8_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_9,
  MR_Integer ml_backend__mlds_to_cs__Indent_10,
  MR_Word ml_backend__mlds_to_cs__MercuryModuleName_11,
  MR_Word ml_backend__mlds_to_cs__ForeignDecls_13,
  MR_Word ml_backend__mlds_to_cs__Defns_14);

static MR_bool MR_CALL 
ml_backend__mlds_to_cs__IntroducedFrom__pred__output_rval_const__3777__1_2_p_0(
  MR_Word ml_backend__mlds_to_cs__Lang_10,
  MR_Word ml_backend__mlds_to_cs__HeadVar__2_44);

static MR_Word MR_CALL 
ml_backend__mlds_to_cs__IntroducedFrom__func__output_stmt__2863__1_1_f_0(
  MR_Word ml_backend__mlds_to_cs__LambdaHeadVar__1_149);

static void MR_CALL 
ml_backend__mlds_to_cs__IntroducedFrom__pred__generic_args_types_to_string__2447__1_3_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_4,
  MR_Word ml_backend__mlds_to_cs__LambdaHeadVar__1_16,
  MR_String * ml_backend__mlds_to_cs__LambdaHeadVar__2_17);

static MR_Word MR_CALL 
ml_backend__mlds_to_cs__IntroducedFrom__func__type_to_string__2312__1_1_f_0(
  MR_Word ml_backend__mlds_to_cs__LambdaHeadVar__1_44);

static void MR_CALL 
ml_backend__mlds_to_cs__IntroducedFrom__pred__output_initializer_body_list__1710__1_4_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_5,
  MR_Word ml_backend__mlds_to_cs__LambdaHeadVar__1_16);

static void MR_CALL 
ml_backend__mlds_to_cs__IntroducedFrom__pred__output_static_constructor__824__1_4_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs__IntroducedFrom__pred__output_static_constructor__824__1_4_p_0(
  MR_Integer ml_backend__mlds_to_cs__Indent_8,
  MR_String ml_backend__mlds_to_cs__LambdaHeadVar__1_41);

static void MR_CALL 
ml_backend__mlds_to_cs__IntroducedFrom__pred__output_static_constructor__818__1_4_p_0(
  MR_Integer ml_backend__mlds_to_cs__Indent_8,
  MR_String ml_backend__mlds_to_cs__LambdaHeadVar__1_29);

static MR_bool MR_CALL 
ml_backend__mlds_to_cs__IntroducedFrom__pred__output_export__321__1_2_p_0(
  MR_Word ml_backend__mlds_to_cs__Lang_10,
  MR_Word ml_backend__mlds_to_cs__HeadVar__2_37);

static MR_Word MR_CALL 
ml_backend__mlds_to_cs__IntroducedFrom__func__output_csharp_src_file__154__1_1_f_0(
  MR_Word ml_backend__mlds_to_cs__LambdaHeadVar__1_48);

static void MR_CALL 
ml_backend__mlds_to_cs____Compare____output_generics_0_0(
  MR_Word * ml_backend__mlds_to_cs__HeadVar__1_1,
  MR_Word ml_backend__mlds_to_cs__HeadVar__2_2,
  MR_Word ml_backend__mlds_to_cs__HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__mlds_to_cs____Unify____output_generics_0_0(
  MR_Word ml_backend__mlds_to_cs__HeadVar__2_1,
  MR_Word ml_backend__mlds_to_cs__HeadVar__2_2);

static void MR_CALL 
ml_backend__mlds_to_cs____Compare____output_aux_0_0(
  MR_Word * ml_backend__mlds_to_cs__HeadVar__1_1,
  MR_Word ml_backend__mlds_to_cs__HeadVar__2_2,
  MR_Word ml_backend__mlds_to_cs__HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__mlds_to_cs____Unify____output_aux_0_0(
  MR_Word ml_backend__mlds_to_cs__HeadVar__1_1,
  MR_Word ml_backend__mlds_to_cs__HeadVar__2_2);

static void MR_CALL 
ml_backend__mlds_to_cs____Compare____indent_0_0(
  MR_Word * ml_backend__mlds_to_cs__HeadVar__1_1,
  MR_Integer ml_backend__mlds_to_cs__HeadVar__2_2,
  MR_Integer ml_backend__mlds_to_cs__HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__mlds_to_cs____Unify____indent_0_0(
  MR_Integer ml_backend__mlds_to_cs__HeadVar__1_1,
  MR_Integer ml_backend__mlds_to_cs__HeadVar__2_2);

static void MR_CALL 
ml_backend__mlds_to_cs____Compare____func_info_0_0(
  MR_Word * ml_backend__mlds_to_cs__HeadVar__1_1,
  MR_Word ml_backend__mlds_to_cs__HeadVar__2_2,
  MR_Word ml_backend__mlds_to_cs__HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__mlds_to_cs____Unify____func_info_0_0(
  MR_Word ml_backend__mlds_to_cs__HeadVar__1_1,
  MR_Word ml_backend__mlds_to_cs__HeadVar__2_2);

static void MR_CALL 
ml_backend__mlds_to_cs____Compare____exit_methods_0_0(
  MR_Word * ml_backend__mlds_to_cs__HeadVar__1_1,
  MR_Word ml_backend__mlds_to_cs__HeadVar__2_2,
  MR_Word ml_backend__mlds_to_cs__HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__mlds_to_cs____Unify____exit_methods_0_0(
  MR_Word ml_backend__mlds_to_cs__HeadVar__1_1,
  MR_Word ml_backend__mlds_to_cs__HeadVar__2_2);

static void MR_CALL 
ml_backend__mlds_to_cs____Compare____exit_method_0_0(
  MR_Word * ml_backend__mlds_to_cs__HeadVar__1_1,
  MR_Word ml_backend__mlds_to_cs__HeadVar__2_2,
  MR_Word ml_backend__mlds_to_cs__HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__mlds_to_cs____Unify____exit_method_0_0(
  MR_Word ml_backend__mlds_to_cs__HeadVar__2_1,
  MR_Word ml_backend__mlds_to_cs__HeadVar__2_2);

static void MR_CALL 
ml_backend__mlds_to_cs____Compare____csharp_out_info_0_0(
  MR_Word * ml_backend__mlds_to_cs__HeadVar__1_1,
  MR_Word ml_backend__mlds_to_cs__HeadVar__2_2,
  MR_Word ml_backend__mlds_to_cs__HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__mlds_to_cs____Unify____csharp_out_info_0_0(
  MR_Word ml_backend__mlds_to_cs__HeadVar__1_1,
  MR_Word ml_backend__mlds_to_cs__HeadVar__2_2);

static void MR_CALL 
ml_backend__mlds_to_cs____Compare____code_addr_map_0_0(
  MR_Word * ml_backend__mlds_to_cs__HeadVar__1_1,
  MR_Word ml_backend__mlds_to_cs__HeadVar__2_2,
  MR_Word ml_backend__mlds_to_cs__HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__mlds_to_cs____Unify____code_addr_map_0_0(
  MR_Word ml_backend__mlds_to_cs__HeadVar__1_1,
  MR_Word ml_backend__mlds_to_cs__HeadVar__2_2);

static MR_Word MR_CALL 
ml_backend__mlds_to_cs__init_csharp_out_info_3_f_0(
  MR_Word ml_backend__mlds_to_cs__ModuleInfo_5,
  MR_String ml_backend__mlds_to_cs__SourceFileName_6,
  MR_Word ml_backend__mlds_to_cs__CodeAddrs_7);

static void MR_CALL 
ml_backend__mlds_to_cs__output_pragma_warning_restore_2_p_0(void);

static void MR_CALL 
ml_backend__mlds_to_cs__output_pragma_warning_disable_2_p_0(void);

static void MR_CALL 
ml_backend__mlds_to_cs__indent_line_3_p_0(
  MR_Integer ml_backend__mlds_to_cs__N_4);

static void MR_CALL 
ml_backend__mlds_to_cs__indent_line_5_p_0(
  MR_Word ml_backend__mlds_to_cs__OutputLineNumbers_6,
  MR_Word ml_backend__mlds_to_cs__Context_7,
  MR_Integer ml_backend__mlds_to_cs__N_8);

static void MR_CALL 
ml_backend__mlds_to_cs__indent_line_prog_context_5_p_0(
  MR_Word ml_backend__mlds_to_cs__OutputLineNumbers_6,
  MR_Word ml_backend__mlds_to_cs__Context_7,
  MR_Integer ml_backend__mlds_to_cs__N_8);

static void MR_CALL 
ml_backend__mlds_to_cs__cs_output_context_4_p_0(
  MR_Word ml_backend__mlds_to_cs__OutputLineNumbers_5,
  MR_Word ml_backend__mlds_to_cs__Context_6);

static void MR_CALL 
ml_backend__mlds_to_cs__mlds_output_proc_label_4_p_0(
  MR_String ml_backend__mlds_to_cs__Suffix_5,
  MR_Word ml_backend__mlds_to_cs__HeadVar__2_2);

static void MR_CALL 
ml_backend__mlds_to_cs__method_ptr_type_to_string_3_f_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_2);

static MR_String MR_CALL 
ml_backend__mlds_to_cs__method_ptr_type_to_string_3_f_0(
  MR_Word ml_backend__mlds_to_cs__Info_5,
  MR_Word ml_backend__mlds_to_cs__ArgTypes_6,
  MR_Word ml_backend__mlds_to_cs__RetTypes_7);

static void MR_CALL 
ml_backend__mlds_to_cs__mlds_output_code_addr_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_6,
  MR_Word ml_backend__mlds_to_cs__CodeAddr_7,
  MR_Word ml_backend__mlds_to_cs__IsCall_8);

static void MR_CALL 
ml_backend__mlds_to_cs__output_vector_common_row_rval_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_6,
  MR_Word ml_backend__mlds_to_cs__VectorCommon_7,
  MR_Word ml_backend__mlds_to_cs__RowRval_8);

static void MR_CALL 
ml_backend__mlds_to_cs__output_int_const_3_p_0(
  MR_Integer ml_backend__mlds_to_cs__N_4);

static MR_bool MR_CALL 
ml_backend__mlds_to_cs__output_rval_const_4_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg);

static void MR_CALL 
ml_backend__mlds_to_cs__output_rval_const_4_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_5,
  MR_Word ml_backend__mlds_to_cs__Const_6);

static void MR_CALL 
ml_backend__mlds_to_cs__output_binary_op_3_p_0(
  MR_Word ml_backend__mlds_to_cs__Op_4);

static void MR_CALL 
ml_backend__mlds_to_cs__output_binop_6_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_7,
  MR_Word ml_backend__mlds_to_cs__Op_8,
  MR_Word ml_backend__mlds_to_cs__X_9,
  MR_Word ml_backend__mlds_to_cs__Y_10);

static void MR_CALL 
ml_backend__mlds_to_cs__output_std_unop_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_6,
  MR_Word ml_backend__mlds_to_cs__UnaryOp_7,
  MR_Word ml_backend__mlds_to_cs__Expr_8);

static MR_bool MR_CALL 
ml_backend__mlds_to_cs__csharp_builtin_type_2_p_0(
  MR_Word ml_backend__mlds_to_cs__Type_1,
  MR_String * ml_backend__mlds_to_cs__HeadVar__2_2);

static void MR_CALL 
ml_backend__mlds_to_cs__output_unboxed_rval_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_6,
  MR_Word ml_backend__mlds_to_cs__Type_7,
  MR_Word ml_backend__mlds_to_cs__Expr_8);

static void MR_CALL 
ml_backend__mlds_to_cs__output_cast_rval_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_6,
  MR_Word ml_backend__mlds_to_cs__Type_7,
  MR_Word ml_backend__mlds_to_cs__Expr_8);

static void MR_CALL 
ml_backend__mlds_to_cs__output_unop_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_6,
  MR_Word ml_backend__mlds_to_cs__Unop_7,
  MR_Word ml_backend__mlds_to_cs__Expr_8);

static void MR_CALL 
ml_backend__mlds_to_cs__output_rval_4_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_5,
  MR_Word ml_backend__mlds_to_cs__Rval_6);

static void MR_CALL 
ml_backend__mlds_to_cs__output_bracketed_rval_4_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_5,
  MR_Word ml_backend__mlds_to_cs__Rval_6);

static void MR_CALL 
ml_backend__mlds_to_cs__output_call_rval_4_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_5,
  MR_Word ml_backend__mlds_to_cs__Rval_6);

static void MR_CALL 
ml_backend__mlds_to_cs__output_valid_mangled_name_3_p_0(
  MR_String ml_backend__mlds_to_cs__Name_4);

static void MR_CALL 
ml_backend__mlds_to_cs__output_lval_4_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_5,
  MR_Word ml_backend__mlds_to_cs__Lval_6);

static void MR_CALL 
ml_backend__mlds_to_cs__output_init_args_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_1,
  MR_Word ml_backend__mlds_to_cs__HeadVar__2_2,
  MR_Word ml_backend__mlds_to_cs__HeadVar__3_3);

static void MR_CALL 
ml_backend__mlds_to_cs__output_target_code_component_4_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_5,
  MR_Word ml_backend__mlds_to_cs__TargetCode_6);

static void MR_CALL 
ml_backend__mlds_to_cs__output_atomic_stmt_6_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs__output_atomic_stmt_6_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_7,
  MR_Integer ml_backend__mlds_to_cs__Indent_8,
  MR_Word ml_backend__mlds_to_cs__AtomicStmt_9,
  MR_Word ml_backend__mlds_to_cs__Context_10);

static void MR_CALL 
ml_backend__mlds_to_cs__output_case_cond_6_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_7,
  MR_Integer ml_backend__mlds_to_cs__Indent_8,
  MR_Word ml_backend__mlds_to_cs__Context_9,
  MR_Word ml_backend__mlds_to_cs__Match_10);

static void MR_CALL 
ml_backend__mlds_to_cs__output_assign_out_params_7_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_8,
  MR_Integer ml_backend__mlds_to_cs__Indent_9,
  MR_Word ml_backend__mlds_to_cs__Rval_10,
  MR_Integer ml_backend__mlds_to_cs__Num_11,
  MR_Integer * ml_backend__mlds_to_cs__HeadVar__5_5);

static MR_Word MR_CALL 
ml_backend__mlds_to_cs__while_exit_methods_2_f_0(
  MR_Word ml_backend__mlds_to_cs__Cond_4,
  MR_Word ml_backend__mlds_to_cs__BlockExitMethods_5);

static void MR_CALL 
ml_backend__mlds_to_cs__output_decl_flags_4_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_5,
  MR_Word ml_backend__mlds_to_cs__Flags_6);

static void MR_CALL 
ml_backend__mlds_to_cs__array_dimension_to_string_2_p_0(
  MR_Integer ml_backend__mlds_to_cs__N_3,
  MR_String * ml_backend__mlds_to_cs__String_4);

static void MR_CALL 
ml_backend__mlds_to_cs__boxed_type_to_string_3_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_2);

static void MR_CALL 
ml_backend__mlds_to_cs__boxed_type_to_string_3_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_4,
  MR_Word ml_backend__mlds_to_cs__Type_5,
  MR_String * ml_backend__mlds_to_cs__String_6);

static MR_bool MR_CALL 
ml_backend__mlds_to_cs__hand_defined_type_4_p_0(
  MR_Word ml_backend__mlds_to_cs__Type_5,
  MR_Word ml_backend__mlds_to_cs__CtorCat_6,
  MR_String * ml_backend__mlds_to_cs__SubstituteName_7,
  MR_Word * ml_backend__mlds_to_cs__ArrayDims_8);

static MR_Word MR_CALL 
ml_backend__mlds_to_cs__type_is_array_1_f_0(
  MR_Word ml_backend__mlds_to_cs__Type_3);

static void MR_CALL 
ml_backend__mlds_to_cs__generic_args_types_to_string_3_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_2);

static void MR_CALL 
ml_backend__mlds_to_cs__generic_args_types_to_string_3_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_4,
  MR_Word ml_backend__mlds_to_cs__ArgsTypes_5,
  MR_String * ml_backend__mlds_to_cs__String_6);

static void MR_CALL 
ml_backend__mlds_to_cs__mercury_user_type_to_string_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_6,
  MR_Word ml_backend__mlds_to_cs__Type_7,
  MR_Word ml_backend__mlds_to_cs__CtorCat_8,
  MR_String * ml_backend__mlds_to_cs__String_9,
  MR_Word * ml_backend__mlds_to_cs__ArrayDims_10);

static void MR_CALL 
ml_backend__mlds_to_cs__mercury_type_to_string_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_6,
  MR_Word ml_backend__mlds_to_cs__Type_7,
  MR_Word ml_backend__mlds_to_cs__CtorCat_8,
  MR_String * ml_backend__mlds_to_cs__String_9,
  MR_Word * ml_backend__mlds_to_cs__ArrayDims_10);

static MR_Box MR_CALL 
ml_backend__mlds_to_cs__type_to_string_4_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1);

static void MR_CALL 
ml_backend__mlds_to_cs__type_to_string_4_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_5,
  MR_Word ml_backend__mlds_to_cs__MLDS_Type_6,
  MR_String * ml_backend__mlds_to_cs__String_7,
  MR_Word * ml_backend__mlds_to_cs__ArrayDims_8);

static void MR_CALL 
ml_backend__mlds_to_cs__output_array_dimensions_3_p_0_2(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs__output_array_dimensions_3_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_2);

static void MR_CALL 
ml_backend__mlds_to_cs__output_array_dimensions_3_p_0(
  MR_Word ml_backend__mlds_to_cs__ArrayDims_4);

static void MR_CALL 
ml_backend__mlds_to_cs__output_type_4_p_0_2(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs__output_type_4_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_2);

static void MR_CALL 
ml_backend__mlds_to_cs__output_type_4_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_5,
  MR_Word ml_backend__mlds_to_cs__MLDS_Type_6);

static void MR_CALL 
ml_backend__mlds_to_cs__data_name_to_string_2_p_0(
  MR_Word ml_backend__mlds_to_cs__DataName_3,
  MR_String * ml_backend__mlds_to_cs__String_4);

static void MR_CALL 
ml_backend__mlds_to_cs__pred_label_to_string_2_p_0(
  MR_Word ml_backend__mlds_to_cs__HeadVar__1_1,
  MR_String * ml_backend__mlds_to_cs__String_2);

static void MR_CALL 
ml_backend__mlds_to_cs__write_identifier_string_3_p_0(
  MR_String ml_backend__mlds_to_cs__String_4);

static void MR_CALL 
ml_backend__mlds_to_cs__output_name_3_p_0(
  MR_Word ml_backend__mlds_to_cs__EntityName_4);

static void MR_CALL 
ml_backend__mlds_to_cs__qual_class_name_to_string_3_p_0(
  MR_Word ml_backend__mlds_to_cs__QualName_4,
  MR_Integer ml_backend__mlds_to_cs__Arity_5,
  MR_String * ml_backend__mlds_to_cs__String_6);

static void MR_CALL 
ml_backend__mlds_to_cs__output_unqual_class_name_4_p_0(
  MR_String ml_backend__mlds_to_cs__Name_5,
  MR_Integer ml_backend__mlds_to_cs__Arity_6);

static void MR_CALL 
ml_backend__mlds_to_cs__remove_sym_name_prefixes_3_p_0(
  MR_Word ml_backend__mlds_to_cs__SymName0_4,
  MR_Word ml_backend__mlds_to_cs__Prefix_5,
  MR_Word * ml_backend__mlds_to_cs__SymName_6);

static void MR_CALL 
ml_backend__mlds_to_cs__output_maybe_qualified_name_4_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_5,
  MR_Word ml_backend__mlds_to_cs__QualifiedName_6);

static void MR_CALL 
ml_backend__mlds_to_cs__output_param_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_6,
  MR_Integer ml_backend__mlds_to_cs__Indent_7,
  MR_Word ml_backend__mlds_to_cs__Arg_8);

static void MR_CALL 
ml_backend__mlds_to_cs__output_params_5_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs__output_params_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_6,
  MR_Integer ml_backend__mlds_to_cs__Indent_7,
  MR_Word ml_backend__mlds_to_cs__Parameters_8);

static void MR_CALL 
ml_backend__mlds_to_cs__make_out_param_4_p_0(
  MR_Word ml_backend__mlds_to_cs__Type_5,
  MR_Word * ml_backend__mlds_to_cs__Argument_6,
  MR_Integer ml_backend__mlds_to_cs__Num_7,
  MR_Integer * ml_backend__mlds_to_cs__HeadVar__4_4);

static void MR_CALL 
ml_backend__mlds_to_cs__output_func_decl_7_p_0_2(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs__output_func_decl_7_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_3,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_4);

static void MR_CALL 
ml_backend__mlds_to_cs__output_func_decl_7_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_8,
  MR_Integer ml_backend__mlds_to_cs__Indent_9,
  MR_Word ml_backend__mlds_to_cs__Name_10,
  MR_Word ml_backend__mlds_to_cs__OutputAux_11,
  MR_Word ml_backend__mlds_to_cs__Signature_12);

static void MR_CALL 
ml_backend__mlds_to_cs__output_func_9_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_10,
  MR_Integer ml_backend__mlds_to_cs__Indent_11,
  MR_Word ml_backend__mlds_to_cs__Name_12,
  MR_Word ml_backend__mlds_to_cs__OutputAux_13,
  MR_Word ml_backend__mlds_to_cs__Context_14,
  MR_Word ml_backend__mlds_to_cs__Signature_15,
  MR_Word ml_backend__mlds_to_cs__MaybeBody_16);

static void MR_CALL 
ml_backend__mlds_to_cs__output_pred_proc_id_4_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_5,
  MR_Word ml_backend__mlds_to_cs__HeadVar__2_2);

static void MR_CALL 
ml_backend__mlds_to_cs__output_rtti_array_assignments_8_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_9,
  MR_Integer ml_backend__mlds_to_cs__Indent_10,
  MR_Word ml_backend__mlds_to_cs__Name_11,
  MR_Word ml_backend__mlds_to_cs__ElementInit_12,
  MR_Integer ml_backend__mlds_to_cs__Index_13,
  MR_Integer * ml_backend__mlds_to_cs__HeadVar__6_6);

static void MR_CALL 
ml_backend__mlds_to_cs__output_rtti_defn_assignments_2_6_p_0_2(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs__output_rtti_defn_assignments_2_6_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_4,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_5);

static void MR_CALL 
ml_backend__mlds_to_cs__output_rtti_defn_assignments_2_6_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_7,
  MR_Integer ml_backend__mlds_to_cs__Indent_8,
  MR_Word ml_backend__mlds_to_cs__Name_9,
  MR_Word ml_backend__mlds_to_cs__Initializer_10);

static void MR_CALL 
ml_backend__mlds_to_cs__output_rtti_defn_assignments_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_6,
  MR_Integer ml_backend__mlds_to_cs__Indent_7,
  MR_Word ml_backend__mlds_to_cs__Defn_8);

static void MR_CALL 
ml_backend__mlds_to_cs__output_rtti_defns_assignments_5_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs__output_rtti_defns_assignments_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_6,
  MR_Integer ml_backend__mlds_to_cs__Indent_7,
  MR_Word ml_backend__mlds_to_cs__Defns_8);

static void MR_CALL 
ml_backend__mlds_to_cs__output_rtti_assignments_5_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs__output_rtti_assignments_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_6,
  MR_Integer ml_backend__mlds_to_cs__Indent_7,
  MR_Word ml_backend__mlds_to_cs__Defns_8);

static void MR_CALL 
ml_backend__mlds_to_cs__output_initializer_body_list_4_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs__output_initializer_body_list_4_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_5,
  MR_Word ml_backend__mlds_to_cs__Inits_6);

static void MR_CALL 
ml_backend__mlds_to_cs__output_initializer_body_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_6,
  MR_Word ml_backend__mlds_to_cs__Initializer_7,
  MR_Word ml_backend__mlds_to_cs__MaybeType_8);

static void MR_CALL 
ml_backend__mlds_to_cs__output_initializer_alloc_only_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_6,
  MR_Word ml_backend__mlds_to_cs__Initializer_7,
  MR_Word ml_backend__mlds_to_cs__MaybeType_8);

static void MR_CALL 
ml_backend__mlds_to_cs__output_initializer_6_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_7,
  MR_Word ml_backend__mlds_to_cs__OutputAux_8,
  MR_Word ml_backend__mlds_to_cs__Type_9,
  MR_Word ml_backend__mlds_to_cs__Initializer_10);

static MR_String MR_CALL 
ml_backend__mlds_to_cs__get_type_initializer_2_f_0(
  MR_Word ml_backend__mlds_to_cs__Info_4,
  MR_Word ml_backend__mlds_to_cs__Type_5);

static void MR_CALL 
ml_backend__mlds_to_cs__output_vector_cell_init_6_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs__output_vector_cell_init_6_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_7,
  MR_Integer ml_backend__mlds_to_cs__Indent_8,
  MR_Word ml_backend__mlds_to_cs__TypeNum_9,
  MR_Word ml_backend__mlds_to_cs__CellGroup_10);

static void MR_CALL 
ml_backend__mlds_to_cs__output_vector_cell_decl_6_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_7,
  MR_Integer ml_backend__mlds_to_cs__Indent_8,
  MR_Word ml_backend__mlds_to_cs__TypeNum_9,
  MR_Word ml_backend__mlds_to_cs__CellGroup_10);

static void MR_CALL 
ml_backend__mlds_to_cs__output_vector_common_data_5_p_0_2(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_3,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_4);

static void MR_CALL 
ml_backend__mlds_to_cs__output_vector_common_data_5_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_3,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_4);

static void MR_CALL 
ml_backend__mlds_to_cs__output_vector_common_data_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_6,
  MR_Integer ml_backend__mlds_to_cs__Indent_7,
  MR_Word ml_backend__mlds_to_cs__VectorCellGroupMap_8);

static void MR_CALL 
ml_backend__mlds_to_cs__output_scalar_init_6_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_7,
  MR_Integer ml_backend__mlds_to_cs__Indent_8,
  MR_Word ml_backend__mlds_to_cs__Map_9,
  MR_Word ml_backend__mlds_to_cs__Scalar_10);

static void MR_CALL 
ml_backend__mlds_to_cs__add_scalar_deps_rval_4_p_0(
  MR_Word ml_backend__mlds_to_cs__FromScalar_5,
  MR_Word ml_backend__mlds_to_cs__Rval_6,
  MR_Word ml_backend__mlds_to_cs__STATE_VARIABLE_Graph_0_18,
  MR_Word * ml_backend__mlds_to_cs__STATE_VARIABLE_Graph_19);

static void MR_CALL 
ml_backend__mlds_to_cs__add_scalar_deps_4_p_0_2(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs__add_scalar_deps_4_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs__add_scalar_deps_4_p_0(
  MR_Word ml_backend__mlds_to_cs__FromScalar_5,
  MR_Word ml_backend__mlds_to_cs__Initializer_6,
  MR_Word ml_backend__mlds_to_cs__STATE_VARIABLE_Graph_0_11,
  MR_Word * ml_backend__mlds_to_cs__STATE_VARIABLE_Graph_12);

static void MR_CALL 
ml_backend__mlds_to_cs__add_scalar_inits_10_p_0(
  MR_Word ml_backend__mlds_to_cs__MLDS_ModuleName_11,
  MR_Word ml_backend__mlds_to_cs__Type_12,
  MR_Word ml_backend__mlds_to_cs__TypeNum_13,
  MR_Word ml_backend__mlds_to_cs__Initializer_14,
  MR_Integer ml_backend__mlds_to_cs__RowNum_15,
  MR_Integer * ml_backend__mlds_to_cs__HeadVar__6_6,
  MR_Word ml_backend__mlds_to_cs__STATE_VARIABLE_Graph_0_20,
  MR_Word * ml_backend__mlds_to_cs__STATE_VARIABLE_Graph_21,
  MR_Word ml_backend__mlds_to_cs__STATE_VARIABLE_Map_0_22,
  MR_Word * ml_backend__mlds_to_cs__STATE_VARIABLE_Map_23);

static void MR_CALL 
ml_backend__mlds_to_cs__output_scalar_defns_10_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_4,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_5,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_6,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_7);

static void MR_CALL 
ml_backend__mlds_to_cs__output_scalar_defns_10_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_11,
  MR_Integer ml_backend__mlds_to_cs__Indent_12,
  MR_Word ml_backend__mlds_to_cs__TypeNum_13,
  MR_Word ml_backend__mlds_to_cs__CellGroup_14,
  MR_Word ml_backend__mlds_to_cs__STATE_VARIABLE_Graph_0_28,
  MR_Word * ml_backend__mlds_to_cs__STATE_VARIABLE_Graph_29,
  MR_Word ml_backend__mlds_to_cs__STATE_VARIABLE_Map_0_30,
  MR_Word * ml_backend__mlds_to_cs__STATE_VARIABLE_Map_31);

static void MR_CALL 
ml_backend__mlds_to_cs__output_scalar_common_data_5_p_0_2(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs__output_scalar_common_data_5_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_3,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_4,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_5,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_6,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_7,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_8);

static void MR_CALL 
ml_backend__mlds_to_cs__output_scalar_common_data_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_6,
  MR_Integer ml_backend__mlds_to_cs__Indent_7,
  MR_Word ml_backend__mlds_to_cs__ScalarCellGroupMap_8);

static void MR_CALL 
ml_backend__mlds_to_cs__output_init_data_statements_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_1,
  MR_Integer ml_backend__mlds_to_cs__Indent_2,
  MR_Word ml_backend__mlds_to_cs__HeadVar__3_3);

static void MR_CALL 
ml_backend__mlds_to_cs__output_init_data_method_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_6,
  MR_Integer ml_backend__mlds_to_cs__Indent_7,
  MR_Word ml_backend__mlds_to_cs__Defns_8);

static void MR_CALL 
ml_backend__mlds_to_cs__output_data_decls_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_1,
  MR_Integer ml_backend__mlds_to_cs__Indent_2,
  MR_Word ml_backend__mlds_to_cs__HeadVar__3_3);

static void MR_CALL 
ml_backend__mlds_to_cs__output_enum_constant_6_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_7,
  MR_Integer ml_backend__mlds_to_cs__Indent_8,
  MR_Word ml_backend__mlds_to_cs___EnumName_9,
  MR_Word ml_backend__mlds_to_cs__Defn_10);

static MR_bool MR_CALL 
ml_backend__mlds_to_cs__defn_is_const_1_p_0(
  MR_Word ml_backend__mlds_to_cs__Defn_2);

static void MR_CALL 
ml_backend__mlds_to_cs__output_class_body_7_p_0_3(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__mlds_to_cs__output_class_body_7_p_0_2(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1);

static void MR_CALL 
ml_backend__mlds_to_cs__output_class_body_7_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs__output_class_body_7_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_8,
  MR_Integer ml_backend__mlds_to_cs__Indent_9,
  MR_Word ml_backend__mlds_to_cs__Kind_10,
  MR_Word ml_backend__mlds_to_cs__UnqualName_11,
  MR_Word ml_backend__mlds_to_cs__AllMembers_12);

static void MR_CALL 
ml_backend__mlds_to_cs__interface_to_string_2_p_0(
  MR_Word ml_backend__mlds_to_cs__Interface_3,
  MR_String * ml_backend__mlds_to_cs__String_4);

static void MR_CALL 
ml_backend__mlds_to_cs__output_supers_list_6_p_0_2(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs__output_supers_list_6_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_2);

static void MR_CALL 
ml_backend__mlds_to_cs__output_supers_list_6_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_7,
  MR_Integer ml_backend__mlds_to_cs__Indent_8,
  MR_Word ml_backend__mlds_to_cs__BaseClasses_9,
  MR_Word ml_backend__mlds_to_cs__Interfaces_10);

static void MR_CALL 
ml_backend__mlds_to_cs__output_generic_tvar_3_p_0(
  MR_Word ml_backend__mlds_to_cs__Var_4);

static void MR_CALL 
ml_backend__mlds_to_cs__output_generic_tvars_3_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs__output_generic_tvars_3_p_0(
  MR_Word ml_backend__mlds_to_cs__Vars_4);

static void MR_CALL 
ml_backend__mlds_to_cs__output_class_6_p_0(
  MR_Word ml_backend__mlds_to_cs__STATE_VARIABLE_Info_0_30,
  MR_Integer ml_backend__mlds_to_cs__Indent_8,
  MR_Word ml_backend__mlds_to_cs__UnqualName_9,
  MR_Word ml_backend__mlds_to_cs__ClassDefn_10);

static void MR_CALL 
ml_backend__mlds_to_cs__output_defn_body_8_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_9,
  MR_Integer ml_backend__mlds_to_cs__Indent_10,
  MR_Word ml_backend__mlds_to_cs__UnqualName_11,
  MR_Word ml_backend__mlds_to_cs__OutputAux_12,
  MR_Word ml_backend__mlds_to_cs__Context_13,
  MR_Word ml_backend__mlds_to_cs__Entity_14);

static void MR_CALL 
ml_backend__mlds_to_cs__output_defn_6_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_7,
  MR_Integer ml_backend__mlds_to_cs__Indent_8,
  MR_Word ml_backend__mlds_to_cs__OutputAux_9,
  MR_Word ml_backend__mlds_to_cs__Defn_10);

static void MR_CALL 
ml_backend__mlds_to_cs__output_defns_6_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs__output_defns_6_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_7,
  MR_Integer ml_backend__mlds_to_cs__Indent_8,
  MR_Word ml_backend__mlds_to_cs__OutputAux_9,
  MR_Word ml_backend__mlds_to_cs__Defns_10);

static void MR_CALL 
ml_backend__mlds_to_cs__output_src_end_4_p_0(
  MR_Integer ml_backend__mlds_to_cs__Indent_5,
  MR_Word ml_backend__mlds_to_cs__ModuleName_6);

static void MR_CALL 
ml_backend__mlds_to_cs__write_indented_line_4_p_0(
  MR_Integer ml_backend__mlds_to_cs__Indent_5,
  MR_String ml_backend__mlds_to_cs__Line_6);

static void MR_CALL 
ml_backend__mlds_to_cs__write_main_driver_4_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs__write_main_driver_4_p_0(
  MR_Integer ml_backend__mlds_to_cs__Indent_5,
  MR_String ml_backend__mlds_to_cs__ClassName_6);

static void MR_CALL 
ml_backend__mlds_to_cs__output_static_constructor_6_p_0_2(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs__output_static_constructor_6_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs__output_static_constructor_6_p_0(
  MR_Word ml_backend__mlds_to_cs__MercuryModuleName_7,
  MR_Integer ml_backend__mlds_to_cs__Indent_8,
  MR_Word ml_backend__mlds_to_cs__StaticConstructors_9,
  MR_Word ml_backend__mlds_to_cs__FinalPreds_10);

static void MR_CALL 
ml_backend__mlds_to_cs__output_env_var_definition_4_p_0(
  MR_Integer ml_backend__mlds_to_cs__Indent_5,
  MR_String ml_backend__mlds_to_cs__EnvVarName_6);

static void MR_CALL 
ml_backend__mlds_to_cs__collect_env_var_names_3_p_0(
  MR_Word ml_backend__mlds_to_cs__Defn_4,
  MR_Word ml_backend__mlds_to_cs__STATE_VARIABLE_EnvVarNames_0_19,
  MR_Word * ml_backend__mlds_to_cs__STATE_VARIABLE_EnvVarNames_20);

static void MR_CALL 
ml_backend__mlds_to_cs__output_env_vars_4_p_0_2(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs__output_env_vars_4_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs__output_env_vars_4_p_0(
  MR_Integer ml_backend__mlds_to_cs__Indent_5,
  MR_Word ml_backend__mlds_to_cs__NonRttiDefns_6);

static void MR_CALL 
ml_backend__mlds_to_cs__output_method_ptr_constant_6_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_7,
  MR_Integer ml_backend__mlds_to_cs__Indent_8,
  MR_Word ml_backend__mlds_to_cs__CodeAddr_9,
  MR_String ml_backend__mlds_to_cs__Name_10);

static void MR_CALL 
ml_backend__mlds_to_cs__output_method_ptr_constants_5_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_3,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_4);

static void MR_CALL 
ml_backend__mlds_to_cs__output_method_ptr_constants_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_6,
  MR_Integer ml_backend__mlds_to_cs__Indent_7,
  MR_Word ml_backend__mlds_to_cs__CodeAddrs_8);

static void MR_CALL 
ml_backend__mlds_to_cs__method_ptrs_in_lval_3_p_0(
  MR_Word ml_backend__mlds_to_cs__HeadVar__1_1,
  MR_Word ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0_2,
  MR_Word * ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_3);

static void MR_CALL 
ml_backend__mlds_to_cs__method_ptrs_in_rval_3_p_0(
  MR_Word ml_backend__mlds_to_cs__Rval_4,
  MR_Word ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0_37,
  MR_Word * ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_38);

static void MR_CALL 
ml_backend__mlds_to_cs__method_ptrs_in_rvals_3_p_0(
  MR_Word ml_backend__mlds_to_cs__HeadVar__1_1,
  MR_Word ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0_2,
  MR_Word * ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_3);

static void MR_CALL 
ml_backend__mlds_to_cs__method_ptrs_in_initializers_3_p_0(
  MR_Word ml_backend__mlds_to_cs__HeadVar__1_1,
  MR_Word ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0_2,
  MR_Word * ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_3);

static void MR_CALL 
ml_backend__mlds_to_cs__method_ptrs_in_initializer_3_p_0(
  MR_Word ml_backend__mlds_to_cs__HeadVar__1_1,
  MR_Word ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0_2,
  MR_Word * ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_3);

static void MR_CALL 
ml_backend__mlds_to_cs__method_ptrs_in_defn_3_p_0(
  MR_Word ml_backend__mlds_to_cs__HeadVar__1_1,
  MR_Word ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0_9,
  MR_Word * ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_10);

static void MR_CALL 
ml_backend__mlds_to_cs__method_ptrs_in_defns_3_p_0(
  MR_Word ml_backend__mlds_to_cs__HeadVar__1_1,
  MR_Word ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0_2,
  MR_Word * ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_3);

static void MR_CALL 
ml_backend__mlds_to_cs__method_ptrs_in_switch_cases_3_p_0(
  MR_Word ml_backend__mlds_to_cs__HeadVar__1_1,
  MR_Word ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0_2,
  MR_Word * ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_3);

static void MR_CALL 
ml_backend__mlds_to_cs__method_ptrs_in_switch_default_3_p_0(
  MR_Word ml_backend__mlds_to_cs__HeadVar__1_1,
  MR_Word ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0_2,
  MR_Word * ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_3);

static void MR_CALL 
ml_backend__mlds_to_cs__method_ptrs_in_stmt_3_p_0(
  MR_Word ml_backend__mlds_to_cs__HeadVar__1_1,
  MR_Word ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0_2,
  MR_Word * ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_3);

static void MR_CALL 
ml_backend__mlds_to_cs__method_ptrs_in_statement_3_p_0(
  MR_Word ml_backend__mlds_to_cs__HeadVar__1_1,
  MR_Word ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0_7,
  MR_Word * ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_8);

static void MR_CALL 
ml_backend__mlds_to_cs__method_ptrs_in_statements_3_p_0(
  MR_Word ml_backend__mlds_to_cs__HeadVar__1_1,
  MR_Word ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0_2,
  MR_Word * ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_3);

static void MR_CALL 
ml_backend__mlds_to_cs__find_pointer_addressed_methods_in_scalars_3_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs__find_pointer_addressed_methods_in_scalars_3_p_0(
  MR_Word ml_backend__mlds_to_cs__Cord_4,
  MR_Word ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0_6,
  MR_Word * ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_7);

static void MR_CALL 
ml_backend__mlds_to_cs__find_pointer_addressed_methods_3_p_0(
  MR_Word ml_backend__mlds_to_cs__HeadVar__1_1,
  MR_Word ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0_2,
  MR_Word * ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_3);

static void MR_CALL 
ml_backend__mlds_to_cs__output_exported_enum_constant_6_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_7,
  MR_Integer ml_backend__mlds_to_cs__Indent_8,
  MR_Word ml_backend__mlds_to_cs__MLDS_Type_9,
  MR_Word ml_backend__mlds_to_cs__ExportedConstant_10);

static void MR_CALL 
ml_backend__mlds_to_cs__output_exported_enum_5_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs__output_exported_enum_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_6,
  MR_Integer ml_backend__mlds_to_cs__Indent_7,
  MR_Word ml_backend__mlds_to_cs__ExportedEnum_8);

static void MR_CALL 
ml_backend__mlds_to_cs__output_exported_enums_5_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs__output_exported_enums_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_6,
  MR_Integer ml_backend__mlds_to_cs__Indent_7,
  MR_Word ml_backend__mlds_to_cs__ExportedEnums_8);

static void MR_CALL 
ml_backend__mlds_to_cs__write_argument_name_3_p_0(
  MR_Word ml_backend__mlds_to_cs__Arg_4);

static void MR_CALL 
ml_backend__mlds_to_cs__write_export_call_4_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs__write_export_call_4_p_0(
  MR_Word ml_backend__mlds_to_cs__MLDS_Name_5,
  MR_Word ml_backend__mlds_to_cs__Parameters_6);

static MR_bool MR_CALL 
ml_backend__mlds_to_cs__is_out_argument_1_p_0(
  MR_Word ml_backend__mlds_to_cs__HeadVar__1_1);

static MR_bool MR_CALL 
ml_backend__mlds_to_cs__output_export_5_p_0_2(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1);

static MR_bool MR_CALL 
ml_backend__mlds_to_cs__output_export_5_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg);

static void MR_CALL 
ml_backend__mlds_to_cs__output_export_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_6,
  MR_Integer ml_backend__mlds_to_cs__Indent_7,
  MR_Word ml_backend__mlds_to_cs__Export_8);

static void MR_CALL 
ml_backend__mlds_to_cs__output_exports_5_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs__output_exports_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_6,
  MR_Integer ml_backend__mlds_to_cs__Indent_7,
  MR_Word ml_backend__mlds_to_cs__Exports_8);

static MR_Word MR_CALL 
ml_backend__mlds_to_cs__mlds_get_csharp_foreign_code_1_f_0(
  MR_Word ml_backend__mlds_to_cs__AllForeignCode_3);

static void MR_CALL 
ml_backend__mlds_to_cs__output_csharp_body_code_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_6,
  MR_Integer ml_backend__mlds_to_cs__Indent_7,
  MR_Word ml_backend__mlds_to_cs__ForeignBodyCode_8);

static void MR_CALL 
ml_backend__mlds_to_cs__output_csharp_decl_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_6,
  MR_Integer ml_backend__mlds_to_cs__Indent_7,
  MR_Word ml_backend__mlds_to_cs__DeclCode_8);

static MR_bool MR_CALL 
ml_backend__mlds_to_cs__output_csharp_src_file_5_p_0_5(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1);

static MR_bool MR_CALL 
ml_backend__mlds_to_cs__output_csharp_src_file_5_p_0_4(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1);

static void MR_CALL 
ml_backend__mlds_to_cs__output_csharp_src_file_5_p_0_3(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs__output_csharp_src_file_5_p_0_2(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3);

static MR_Box MR_CALL 
ml_backend__mlds_to_cs__output_csharp_src_file_5_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1);

static void MR_CALL 
ml_backend__mlds_to_cs__output_csharp_src_file_5_p_0(
  MR_Word ml_backend__mlds_to_cs__ModuleInfo_6,
  MR_Integer ml_backend__mlds_to_cs__Indent_7,
  MR_Word ml_backend__mlds_to_cs__MLDS_8);

static MR_bool MR_CALL 
ml_backend__mlds_to_cs__defn_is_data_1_p_0(
  MR_Word ml_backend__mlds_to_cs__Defn_2);

static MR_bool MR_CALL 
ml_backend__mlds_to_cs__defn_is_rtti_data_1_p_0(
  MR_Word ml_backend__mlds_to_cs__Defn_2);

static void MR_CALL 
ml_backend__mlds_to_cs__output_csharp_mlds_5_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_2);


static /* final */ const MR_Box ml_backend__mlds_to_cs_scalar_common_1[21][2];

static /* final */ const MR_Box ml_backend__mlds_to_cs_scalar_common_2[23][3];

static /* final */ const MR_Box ml_backend__mlds_to_cs_scalar_common_3[3][4];

static /* final */ const MR_Box ml_backend__mlds_to_cs_scalar_common_4[8][8];

static /* final */ const MR_Box ml_backend__mlds_to_cs_scalar_common_5[6][5];

static /* final */ const MR_Box ml_backend__mlds_to_cs_scalar_common_6[8][6];

static /* final */ const MR_Box ml_backend__mlds_to_cs_scalar_common_7[7][9];

static /* final */ const MR_Box ml_backend__mlds_to_cs_scalar_common_8[6][7];

static /* final */ const MR_Box ml_backend__mlds_to_cs_scalar_common_9[2][1];

static /* final */ const MR_Box ml_backend__mlds_to_cs_scalar_common_10[2][13];

static /* final */ const MR_Box ml_backend__mlds_to_cs_scalar_common_13[1][11];

static /* final */ const MR_Box ml_backend__mlds_to_cs_scalar_common_15[1][10];


/* sealed */ struct ml_backend__mlds_to_cs__vector_common_type_11_0_s {
  const MR_String ml_backend__mlds_to_cs__vector_common_type_11_0__vct_11_f_0;
};

static /* final */ const struct ml_backend__mlds_to_cs__vector_common_type_11_0_s ml_backend__mlds_to_cs_vector_common_11[8];

/* sealed */ struct ml_backend__mlds_to_cs__vector_common_type_12_0_s {
  const MR_Word ml_backend__mlds_to_cs__vector_common_type_12_0__vct_12_f_0;
};

static /* final */ const struct ml_backend__mlds_to_cs__vector_common_type_12_0_s ml_backend__mlds_to_cs_vector_common_12[12];

/* sealed */ struct ml_backend__mlds_to_cs__vector_common_type_14_0_s {
  const MR_String ml_backend__mlds_to_cs__vector_common_type_14_0__vct_14_f_0;
  const MR_Word ml_backend__mlds_to_cs__vector_common_type_14_0__vct_14_f_1;
};

static /* final */ const struct ml_backend__mlds_to_cs__vector_common_type_14_0_s ml_backend__mlds_to_cs_vector_common_14[8];



static /* final */ const MR_Box ml_backend__mlds_to_cs_scalar_common_1[21][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_1[2]))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__type_ctor_info_exit_method_0))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) "}")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) "   }")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_cs_scalar_common_1[7])))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) "       System.Environment.ExitCode = 1;")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_cs_scalar_common_1[8])))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_String) "   if (System.Environment.ExitCode == 0) {")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_cs_scalar_common_1[9])))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_String) "   }")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_cs_scalar_common_1[10])))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_String) "       System.Console.Error.WriteLine(e.StackTrace);")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_cs_scalar_common_1[11])))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_String) "           \"MERCURY_SUPPRESS_STACK_TRACE\") == null) {")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_cs_scalar_common_1[12])))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_String) "   if (System.Environment.GetEnvironmentVariable(")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_cs_scalar_common_1[13])))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_String) "       (univ.Univ_0) e.exception);")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_cs_scalar_common_1[14])))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_String) "   exception.ML_report_uncaught_exception(")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_cs_scalar_common_1[15])))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_String) "} catch (runtime.Exception e) {")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_cs_scalar_common_1[16])))
  },
  /* row 18 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 20 */
  {
    ((MR_Box) ((MR_String) "();\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_scalar_common_2[23][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_code_addr_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_5[0])),
    ((MR_Box) (ml_backend__mlds_to_cs__output_csharp_src_file_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_6[0])),
    ((MR_Box) (ml_backend__mlds_to_cs__output_csharp_src_file_5_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_3[1])),
    ((MR_Box) (ml_backend__mlds_to_cs__output_csharp_src_file_5_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_3[1])),
    ((MR_Box) (ml_backend__mlds_to_cs__output_csharp_src_file_5_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_3[2])),
    ((MR_Box) (ml_backend__mlds_to_cs__output_export_5_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_6[1])),
    ((MR_Box) (ml_backend__mlds_to_cs__write_export_call_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_6[2])),
    ((MR_Box) (ml_backend__mlds_to_cs__find_pointer_addressed_methods_in_scalars_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_6[3])),
    ((MR_Box) (ml_backend__mlds_to_cs__output_env_vars_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_6[4])),
    ((MR_Box) (ml_backend__mlds_to_cs__output_generic_tvars_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_5[2])),
    ((MR_Box) (ml_backend__mlds_to_cs__output_supers_list_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_6[5])),
    ((MR_Box) (ml_backend__mlds_to_cs__output_supers_list_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_3[1])),
    ((MR_Box) (ml_backend__mlds_to_cs__output_class_body_7_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_8[3])),
    ((MR_Box) (ml_backend__mlds_to_cs__output_func_decl_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_5[3])),
    ((MR_Box) (ml_backend__mlds_to_cs__output_type_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_6[5])),
    ((MR_Box) (ml_backend__mlds_to_cs__output_type_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_5[3])),
    ((MR_Box) (ml_backend__mlds_to_cs__output_array_dimensions_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 18 */
  {
    ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_6[5])),
    ((MR_Box) (ml_backend__mlds_to_cs__output_array_dimensions_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_5[4])),
    ((MR_Box) (ml_backend__mlds_to_cs__type_to_string_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 20 */
  {
    ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_5[3])),
    ((MR_Box) (ml_backend__mlds_to_cs__boxed_type_to_string_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 21 */
  {
    ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_6[5])),
    ((MR_Box) (ml_backend__mlds_to_cs__IntroducedFrom__pred__output_static_constructor__824__1_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 22 */
  {
    ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_5[5])),
    ((MR_Box) (ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_95_91_51_93_95_48_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_scalar_common_3[3][4] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_scalar_common_4[8][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_pragma_export_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_exported_enum_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds_to_cs__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_scalar_common_5[6][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_group_0)),
    ((MR_Box) (&ml_backend__mlds_to_cs__cord__pti_cord_1__plain_ml_backend__mlds__type_ctor_info_mlds_initializer_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_scalar_common_6[8][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__mlds_to_cs__cord__pti_cord_1__plain_ml_backend__mlds__type_ctor_info_mlds_initializer_0)),
    ((MR_Box) (&ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__type_ctor_info_code_addr_map_0)),
    ((MR_Box) (&ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__type_ctor_info_code_addr_map_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0)),
    ((MR_Box) (&ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__type_ctor_info_code_addr_map_0)),
    ((MR_Box) (&ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__type_ctor_info_code_addr_map_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0)),
    ((MR_Box) (&ml_backend__mlds_to_cs__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&ml_backend__mlds_to_cs__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__mlds_to_cs__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_scalar_common_7[7][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_exported_enum_constant_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_code_addr_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__type_ctor_info_output_aux_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_entity_name_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds_to_cs__tree234__pti_tree234_2__plain_ml_backend__mlds__type_ctor_info_mlds_scalar_common_0__plain_ml_backend__mlds__type_ctor_info_mlds_initializer_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_vector_cell_group_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_context_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_scalar_common_8[6][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0)),
    ((MR_Box) (&ml_backend__mlds_to_cs__digraph__pti_digraph_1__plain_ml_backend__mlds__type_ctor_info_mlds_scalar_common_0)),
    ((MR_Box) (&ml_backend__mlds_to_cs__digraph__pti_digraph_1__plain_ml_backend__mlds__type_ctor_info_mlds_scalar_common_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_scalar_common_9[2][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
  /* row 1 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 1 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_scalar_common_10[2][13] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 10)),
    ((MR_Box) (&ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_group_0)),
    ((MR_Box) (&ml_backend__mlds_to_cs__digraph__pti_digraph_1__plain_ml_backend__mlds__type_ctor_info_mlds_scalar_common_0)),
    ((MR_Box) (&ml_backend__mlds_to_cs__digraph__pti_digraph_1__plain_ml_backend__mlds__type_ctor_info_mlds_scalar_common_0)),
    ((MR_Box) (&ml_backend__mlds_to_cs__tree234__pti_tree234_2__plain_ml_backend__mlds__type_ctor_info_mlds_scalar_common_0__plain_ml_backend__mlds__type_ctor_info_mlds_initializer_0)),
    ((MR_Box) (&ml_backend__mlds_to_cs__tree234__pti_tree234_2__plain_ml_backend__mlds__type_ctor_info_mlds_scalar_common_0__plain_ml_backend__mlds__type_ctor_info_mlds_initializer_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 10)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_module_name_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds_to_cs__digraph__pti_digraph_1__plain_ml_backend__mlds__type_ctor_info_mlds_scalar_common_0)),
    ((MR_Box) (&ml_backend__mlds_to_cs__digraph__pti_digraph_1__plain_ml_backend__mlds__type_ctor_info_mlds_scalar_common_0)),
    ((MR_Box) (&ml_backend__mlds_to_cs__tree234__pti_tree234_2__plain_ml_backend__mlds__type_ctor_info_mlds_scalar_common_0__plain_ml_backend__mlds__type_ctor_info_mlds_initializer_0)),
    ((MR_Box) (&ml_backend__mlds_to_cs__tree234__pti_tree234_2__plain_ml_backend__mlds__type_ctor_info_mlds_scalar_common_0__plain_ml_backend__mlds__type_ctor_info_mlds_initializer_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_scalar_common_13[1][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_entity_name_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_scalar_common_15[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};


static /* final */ const struct ml_backend__mlds_to_cs__vector_common_type_11_0_s ml_backend__mlds_to_cs_vector_common_11[8] = {
  /* row 0 */   {     (MR_String) "0" },
  /* row 1 */   {     (MR_String) "0" },
  /* row 2 */   {     (MR_String) "\'\\u0000\'" },
  /* row 3 */   {     (MR_String) "null" },
  /* row 4 */   {     (MR_String) "0" },
  /* row 5 */   {     (MR_String) "0" },
  /* row 6 */   {     (MR_String) "\'\\u0000\'" },
  /* row 7 */   {     (MR_String) "null" },
};

static /* final */ const struct ml_backend__mlds_to_cs__vector_common_type_12_0_s ml_backend__mlds_to_cs_vector_common_12[12] = {
  /* row 0 */   {     (MR_Integer) 1 },
  /* row 1 */   {     (MR_Integer) 1 },
  /* row 2 */   {     (MR_Integer) 0 },
  /* row 3 */   {     (MR_Integer) 0 },
  /* row 4 */   {     (MR_Integer) 1 },
  /* row 5 */   {     (MR_Integer) 1 },
  /* row 6 */   {     (MR_Integer) 0 },
  /* row 7 */   {     (MR_Integer) 0 },
  /* row 8 */   {     (MR_Integer) 1 },
  /* row 9 */   {     (MR_Integer) 1 },
  /* row 10 */   {     (MR_Integer) 0 },
  /* row 11 */   {     (MR_Integer) 0 },
};

static /* final */ const struct ml_backend__mlds_to_cs__vector_common_type_14_0_s ml_backend__mlds_to_cs_vector_common_14[8] = {
  /* row 0 */
  {
    (MR_String) "int",
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 1 */
  {
    (MR_String) "double",
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 2 */
  {
    (MR_String) "int",
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 3 */
  {
    (MR_String) "string",
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 4 */
  {
    (MR_String) "runtime.TypeInfo_Struct",
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 5 */
  {
    (MR_String) "runtime.TypeCtorInfo_Struct",
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 6 */
  {
    (MR_String) "/* typeclass_info */ object",
    (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__mlds_to_cs_scalar_common_1[18])
  },
  /* row 7 */
  {
    (MR_String) "/* base_typeclass_info */ object",
    (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__mlds_to_cs_scalar_common_1[18])
  },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_cs__cord__pti_cord_1__plain_ml_backend__mlds__type_ctor_info_mlds_initializer_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_cs__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_cs__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_cs__digraph__pti_digraph_1__plain_ml_backend__mlds__type_ctor_info_mlds_scalar_common_0 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__mlds_to_cs__tree234__pti_tree234_2__plain_ml_backend__mlds__type_ctor_info_mlds_scalar_common_0__plain_ml_backend__mlds__type_ctor_info_mlds_initializer_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0,
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_cs__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0
  }
};

static const MR_FA_TypeInfo_Struct2 ml_backend__mlds_to_cs__tree234__ti_tree234_2ml_backend__mlds__type_ctor_info_mlds_code_addr_0builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_code_addr_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_PseudoTypeInfo ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__field_types_code_addr_map_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds_to_cs__tree234__ti_tree234_2ml_backend__mlds__type_ctor_info_mlds_code_addr_0builtin__type_ctor_info_string_0
};

static const MR_ConstString ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__field_names_code_addr_map_0_0[2] = {
  (MR_String) "ca_counter",
  (MR_String) "ca_map"
};

static const MR_DuFunctorDesc ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__du_functor_desc_code_addr_map_0_0 = {
  (MR_String) "code_addr_map",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__field_types_code_addr_map_0_0,
  ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__field_names_code_addr_map_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__du_stag_ordered_code_addr_map_0_0[1] = {
  &ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__du_functor_desc_code_addr_map_0_0
};

static const MR_DuPtagLayout ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__du_ptag_ordered_code_addr_map_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__du_stag_ordered_code_addr_map_0_0
  }
};

static const MR_DuFunctorDescPtr ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__du_name_ordered_code_addr_map_0[1] = {
  &ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__du_functor_desc_code_addr_map_0_0
};

static const MR_Integer ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__functor_number_map_code_addr_map_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__type_ctor_info_code_addr_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__mlds_to_cs____Unify____code_addr_map_0_0_10001)),
  ((MR_Box) (ml_backend__mlds_to_cs____Compare____code_addr_map_0_0_10001)),
  (MR_String) "ml_backend.mlds_to_cs",
  (MR_String) "code_addr_map",
  {     ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__du_name_ordered_code_addr_map_0 },
  {     ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__du_ptag_ordered_code_addr_map_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__functor_number_map_code_addr_map_0
};

static const MR_FA_TypeInfo_Struct1 ml_backend__mlds_to_cs__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__mlds_to_cs__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ml_backend__mlds_to_cs__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_PseudoTypeInfo ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__field_types_csharp_out_info_0_0[9] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_module_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds_to_cs__tree234__ti_tree234_2ml_backend__mlds__type_ctor_info_mlds_code_addr_0builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__type_ctor_info_output_generics_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds_to_cs__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
};

static const MR_ConstString ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__field_names_csharp_out_info_0_0[9] = {
  (MR_String) "oi_module_info",
  (MR_String) "oi_auto_comments",
  (MR_String) "oi_line_numbers",
  (MR_String) "oi_foreign_line_numbers",
  (MR_String) "oi_module_name",
  (MR_String) "oi_source_filename",
  (MR_String) "oi_code_addrs",
  (MR_String) "oi_output_generics",
  (MR_String) "oi_univ_tvars"
};

static const MR_DuArgLocn ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__field_locns_csharp_out_info_0_0[9] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 2,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 5,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 6,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__du_functor_desc_csharp_out_info_0_0 = {
  (MR_String) "csharp_out_info",
  (MR_Integer) 9,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__field_types_csharp_out_info_0_0,
  ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__field_names_csharp_out_info_0_0,
  ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__field_locns_csharp_out_info_0_0,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__du_stag_ordered_csharp_out_info_0_0[1] = {
  &ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__du_functor_desc_csharp_out_info_0_0
};

static const MR_DuPtagLayout ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__du_ptag_ordered_csharp_out_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__du_stag_ordered_csharp_out_info_0_0
  }
};

static const MR_DuFunctorDescPtr ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__du_name_ordered_csharp_out_info_0[1] = {
  &ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__du_functor_desc_csharp_out_info_0_0
};

static const MR_Integer ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__functor_number_map_csharp_out_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__type_ctor_info_csharp_out_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__mlds_to_cs____Unify____csharp_out_info_0_0_10001)),
  ((MR_Box) (ml_backend__mlds_to_cs____Compare____csharp_out_info_0_0_10001)),
  (MR_String) "ml_backend.mlds_to_cs",
  (MR_String) "csharp_out_info",
  {     ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__du_name_ordered_csharp_out_info_0 },
  {     ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__du_ptag_ordered_csharp_out_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__functor_number_map_csharp_out_info_0
};

static const MR_EnumFunctorDesc ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__enum_functor_desc_exit_method_0_0 = {
  (MR_String) "can_break",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__enum_functor_desc_exit_method_0_1 = {
  (MR_String) "can_continue",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__enum_functor_desc_exit_method_0_2 = {
  (MR_String) "can_return",
  (MR_Integer) 2
};

static const MR_EnumFunctorDesc ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__enum_functor_desc_exit_method_0_3 = {
  (MR_String) "can_throw",
  (MR_Integer) 3
};

static const MR_EnumFunctorDesc ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__enum_functor_desc_exit_method_0_4 = {
  (MR_String) "can_fall_through",
  (MR_Integer) 4
};

static const MR_EnumFunctorDescPtr ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__enum_value_ordered_exit_method_0[5] = {
  &ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__enum_functor_desc_exit_method_0_0,
  &ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__enum_functor_desc_exit_method_0_1,
  &ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__enum_functor_desc_exit_method_0_2,
  &ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__enum_functor_desc_exit_method_0_3,
  &ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__enum_functor_desc_exit_method_0_4
};

static const MR_EnumFunctorDescPtr ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__enum_name_ordered_exit_method_0[5] = {
  &ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__enum_functor_desc_exit_method_0_0,
  &ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__enum_functor_desc_exit_method_0_1,
  &ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__enum_functor_desc_exit_method_0_4,
  &ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__enum_functor_desc_exit_method_0_2,
  &ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__enum_functor_desc_exit_method_0_3
};

static const MR_Integer ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__functor_number_map_exit_method_0[5] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__type_ctor_info_exit_method_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ml_backend__mlds_to_cs____Unify____exit_method_0_0_10001)),
  ((MR_Box) (ml_backend__mlds_to_cs____Compare____exit_method_0_0_10001)),
  (MR_String) "ml_backend.mlds_to_cs",
  (MR_String) "exit_method",
  {     ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__enum_name_ordered_exit_method_0 },
  {     ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__enum_value_ordered_exit_method_0 },
  (MR_Integer) 5,
  (MR_Integer) 4,
  ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__functor_number_map_exit_method_0
};

static const MR_FA_TypeInfo_Struct1 ml_backend__mlds_to_cs__set_ordlist__ti_set_ordlist_1ml_backend__mlds_to_cs__type_ctor_info_exit_method_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__type_ctor_info_exit_method_0
  }
};

const MR_TypeCtorInfo_Struct ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__type_ctor_info_exit_methods_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ml_backend__mlds_to_cs____Unify____exit_methods_0_0_10001)),
  ((MR_Box) (ml_backend__mlds_to_cs____Compare____exit_methods_0_0_10001)),
  (MR_String) "ml_backend.mlds_to_cs",
  (MR_String) "exit_methods",
  {     NULL },
  {     (MR_PseudoTypeInfo) &ml_backend__mlds_to_cs__set_ordlist__ti_set_ordlist_1ml_backend__mlds_to_cs__type_ctor_info_exit_method_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_Integer ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__functor_number_map_func_info_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__notag_functor_desc_func_info_0 = {
  (MR_String) "func_info",
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_func_params_0,
  (MR_String) "func_info_params",
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__type_ctor_info_func_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (ml_backend__mlds_to_cs____Unify____func_info_0_0_10001)),
  ((MR_Box) (ml_backend__mlds_to_cs____Compare____func_info_0_0_10001)),
  (MR_String) "ml_backend.mlds_to_cs",
  (MR_String) "func_info",
  {     &ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__notag_functor_desc_func_info_0 },
  {     &ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__notag_functor_desc_func_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__functor_number_map_func_info_0
};

const MR_TypeCtorInfo_Struct ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__type_ctor_info_indent_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ml_backend__mlds_to_cs____Unify____indent_0_0_10001)),
  ((MR_Box) (ml_backend__mlds_to_cs____Compare____indent_0_0_10001)),
  (MR_String) "ml_backend.mlds_to_cs",
  (MR_String) "indent",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_DuFunctorDesc ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__du_functor_desc_output_aux_0_0 = {
  (MR_String) "none",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__field_types_output_aux_0_1[1] = {
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_entity_name_0
};

static const MR_DuFunctorDesc ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__du_functor_desc_output_aux_0_1 = {
  (MR_String) "cname",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__field_types_output_aux_0_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__du_functor_desc_output_aux_0_2 = {
  (MR_String) "alloc_only",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__du_functor_desc_output_aux_0_3 = {
  (MR_String) "force_init",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 3,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__du_stag_ordered_output_aux_0_0[3] = {
  &ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__du_functor_desc_output_aux_0_0,
  &ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__du_functor_desc_output_aux_0_2,
  &ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__du_functor_desc_output_aux_0_3
};

static const MR_DuFunctorDescPtr ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__du_stag_ordered_output_aux_0_1[1] = {
  &ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__du_functor_desc_output_aux_0_1
};

static const MR_DuPtagLayout ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__du_ptag_ordered_output_aux_0[2] = {
  {
    (MR_Integer) 3,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__du_stag_ordered_output_aux_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__du_stag_ordered_output_aux_0_1
  }
};

static const MR_DuFunctorDescPtr ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__du_name_ordered_output_aux_0[4] = {
  &ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__du_functor_desc_output_aux_0_2,
  &ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__du_functor_desc_output_aux_0_1,
  &ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__du_functor_desc_output_aux_0_3,
  &ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__du_functor_desc_output_aux_0_0
};

static const MR_Integer ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__functor_number_map_output_aux_0[4] = {
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__type_ctor_info_output_aux_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__mlds_to_cs____Unify____output_aux_0_0_10001)),
  ((MR_Box) (ml_backend__mlds_to_cs____Compare____output_aux_0_0_10001)),
  (MR_String) "ml_backend.mlds_to_cs",
  (MR_String) "output_aux",
  {     ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__du_name_ordered_output_aux_0 },
  {     ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__du_ptag_ordered_output_aux_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__functor_number_map_output_aux_0
};

static const MR_EnumFunctorDesc ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__enum_functor_desc_output_generics_0_0 = {
  (MR_String) "do_output_generics",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__enum_functor_desc_output_generics_0_1 = {
  (MR_String) "do_not_output_generics",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__enum_value_ordered_output_generics_0[2] = {
  &ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__enum_functor_desc_output_generics_0_0,
  &ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__enum_functor_desc_output_generics_0_1
};

static const MR_EnumFunctorDescPtr ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__enum_name_ordered_output_generics_0[2] = {
  &ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__enum_functor_desc_output_generics_0_1,
  &ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__enum_functor_desc_output_generics_0_0
};

static const MR_Integer ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__functor_number_map_output_generics_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__type_ctor_info_output_generics_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ml_backend__mlds_to_cs____Unify____output_generics_0_0_10001)),
  ((MR_Box) (ml_backend__mlds_to_cs____Compare____output_generics_0_0_10001)),
  (MR_String) "ml_backend.mlds_to_cs",
  (MR_String) "output_generics",
  {     ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__enum_name_ordered_output_generics_0 },
  {     ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__enum_value_ordered_output_generics_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__functor_number_map_output_generics_0
};

static MR_bool MR_CALL 
ml_backend__mlds_to_cs____Unify____code_addr_map_0_0_10001(
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;

    {
      ml_backend__mlds_to_cs__succeeded = ml_backend__mlds_to_cs____Unify____code_addr_map_0_0(((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_1), ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_2));
    }
    return ml_backend__mlds_to_cs__succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs____Compare____code_addr_map_0_0_10001(
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_3)
{
  {
    MR_Word ml_backend__mlds_to_cs__conv0_HeadVar__1_1;

    {
      ml_backend__mlds_to_cs____Compare____code_addr_map_0_0(&ml_backend__mlds_to_cs__conv0_HeadVar__1_1, ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_2), ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_3));
    }
    *ml_backend__mlds_to_cs__wrapper_arg_1 = ((MR_Box) (ml_backend__mlds_to_cs__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_cs____Unify____csharp_out_info_0_0_10001(
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;

    {
      ml_backend__mlds_to_cs__succeeded = ml_backend__mlds_to_cs____Unify____csharp_out_info_0_0(((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_1), ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_2));
    }
    return ml_backend__mlds_to_cs__succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs____Compare____csharp_out_info_0_0_10001(
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_3)
{
  {
    MR_Word ml_backend__mlds_to_cs__conv0_HeadVar__1_1;

    {
      ml_backend__mlds_to_cs____Compare____csharp_out_info_0_0(&ml_backend__mlds_to_cs__conv0_HeadVar__1_1, ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_2), ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_3));
    }
    *ml_backend__mlds_to_cs__wrapper_arg_1 = ((MR_Box) (ml_backend__mlds_to_cs__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_cs____Unify____exit_method_0_0_10001(
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;

    {
      ml_backend__mlds_to_cs__succeeded = ml_backend__mlds_to_cs____Unify____exit_method_0_0(((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_1), ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_2));
    }
    return ml_backend__mlds_to_cs__succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs____Compare____exit_method_0_0_10001(
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_3)
{
  {
    MR_Word ml_backend__mlds_to_cs__conv0_HeadVar__1_1;

    {
      ml_backend__mlds_to_cs____Compare____exit_method_0_0(&ml_backend__mlds_to_cs__conv0_HeadVar__1_1, ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_2), ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_3));
    }
    *ml_backend__mlds_to_cs__wrapper_arg_1 = ((MR_Box) (ml_backend__mlds_to_cs__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_cs____Unify____exit_methods_0_0_10001(
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;

    {
      ml_backend__mlds_to_cs__succeeded = ml_backend__mlds_to_cs____Unify____exit_methods_0_0(((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_1), ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_2));
    }
    return ml_backend__mlds_to_cs__succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs____Compare____exit_methods_0_0_10001(
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_3)
{
  {
    MR_Word ml_backend__mlds_to_cs__conv0_HeadVar__1_1;

    {
      ml_backend__mlds_to_cs____Compare____exit_methods_0_0(&ml_backend__mlds_to_cs__conv0_HeadVar__1_1, ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_2), ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_3));
    }
    *ml_backend__mlds_to_cs__wrapper_arg_1 = ((MR_Box) (ml_backend__mlds_to_cs__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_cs____Unify____func_info_0_0_10001(
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;

    {
      ml_backend__mlds_to_cs__succeeded = ml_backend__mlds_to_cs____Unify____func_info_0_0(((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_1), ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_2));
    }
    return ml_backend__mlds_to_cs__succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs____Compare____func_info_0_0_10001(
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_3)
{
  {
    MR_Word ml_backend__mlds_to_cs__conv0_HeadVar__1_1;

    {
      ml_backend__mlds_to_cs____Compare____func_info_0_0(&ml_backend__mlds_to_cs__conv0_HeadVar__1_1, ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_2), ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_3));
    }
    *ml_backend__mlds_to_cs__wrapper_arg_1 = ((MR_Box) (ml_backend__mlds_to_cs__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_cs____Unify____indent_0_0_10001(
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;

    {
      ml_backend__mlds_to_cs__succeeded = ml_backend__mlds_to_cs____Unify____indent_0_0(((MR_Integer) ml_backend__mlds_to_cs__wrapper_arg_1), ((MR_Integer) ml_backend__mlds_to_cs__wrapper_arg_2));
    }
    return ml_backend__mlds_to_cs__succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs____Compare____indent_0_0_10001(
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_3)
{
  {
    MR_Word ml_backend__mlds_to_cs__conv0_HeadVar__1_1;

    {
      ml_backend__mlds_to_cs____Compare____indent_0_0(&ml_backend__mlds_to_cs__conv0_HeadVar__1_1, ((MR_Integer) ml_backend__mlds_to_cs__wrapper_arg_2), ((MR_Integer) ml_backend__mlds_to_cs__wrapper_arg_3));
    }
    *ml_backend__mlds_to_cs__wrapper_arg_1 = ((MR_Box) (ml_backend__mlds_to_cs__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_cs____Unify____output_aux_0_0_10001(
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;

    {
      ml_backend__mlds_to_cs__succeeded = ml_backend__mlds_to_cs____Unify____output_aux_0_0(((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_1), ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_2));
    }
    return ml_backend__mlds_to_cs__succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs____Compare____output_aux_0_0_10001(
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_3)
{
  {
    MR_Word ml_backend__mlds_to_cs__conv0_HeadVar__1_1;

    {
      ml_backend__mlds_to_cs____Compare____output_aux_0_0(&ml_backend__mlds_to_cs__conv0_HeadVar__1_1, ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_2), ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_3));
    }
    *ml_backend__mlds_to_cs__wrapper_arg_1 = ((MR_Box) (ml_backend__mlds_to_cs__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_cs____Unify____output_generics_0_0_10001(
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;

    {
      ml_backend__mlds_to_cs__succeeded = ml_backend__mlds_to_cs____Unify____output_generics_0_0(((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_1), ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_2));
    }
    return ml_backend__mlds_to_cs__succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs____Compare____output_generics_0_0_10001(
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_3)
{
  {
    MR_Word ml_backend__mlds_to_cs__conv0_HeadVar__1_1;

    {
      ml_backend__mlds_to_cs____Compare____output_generics_0_0(&ml_backend__mlds_to_cs__conv0_HeadVar__1_1, ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_2), ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_3));
    }
    *ml_backend__mlds_to_cs__wrapper_arg_1 = ((MR_Box) (ml_backend__mlds_to_cs__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_98_111_120_101_100_95_114_118_97_108_95_95_91_50_93_95_48_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_6,
  MR_Word ml_backend__mlds_to_cs__Expr_8)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;

    {
      ml_backend__mlds_to_cs__output_rval_4_p_0(ml_backend__mlds_to_cs__Info_6, ml_backend__mlds_to_cs__Expr_8);
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_119_105_116_99_104_95_100_101_102_97_117_108_116_95_95_91_51_93_95_48_8_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_9,
  MR_Integer ml_backend__mlds_to_cs__Indent_10,
  MR_Word ml_backend__mlds_to_cs__Context_12,
  MR_Word ml_backend__mlds_to_cs__Default_13,
  MR_Word * ml_backend__mlds_to_cs__ExitMethods_14)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;

    switch (MR_tag((MR_Word) ml_backend__mlds_to_cs__Default_13)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ml_backend__mlds_to_cs__Default_13)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ml_backend__mlds_to_cs__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              MR_Word ml_backend__mlds_to_cs__V_23_23;
              MR_Integer ml_backend__mlds_to_cs__V_24_24;
              MR_Word ml_backend__mlds_to_cs__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 0)));
              MR_Word ml_backend__mlds_to_cs__V_59_59 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) & (MR_Integer) 1);
              MR_Word ml_backend__mlds_to_cs__V_60_60 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
              MR_Word ml_backend__mlds_to_cs__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 2)));
              MR_String ml_backend__mlds_to_cs__V_62_62 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 3)));
              MR_Word ml_backend__mlds_to_cs__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 4)));
              MR_Word ml_backend__mlds_to_cs__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 5)));
              MR_Word ml_backend__mlds_to_cs__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 6)));
              MR_Word ml_backend__mlds_to_cs__V_66_66;
              MR_Word ml_backend__mlds_to_cs__V_67_67;
              MR_Word ml_backend__mlds_to_cs__V_68_68;
              MR_Word ml_backend__mlds_to_cs__V_69_69;
              MR_String ml_backend__mlds_to_cs__V_70_70;
              MR_Word ml_backend__mlds_to_cs__V_71_71;
              MR_Word ml_backend__mlds_to_cs__V_72_72;
              MR_Word ml_backend__mlds_to_cs__V_73_73;

              {
                ml_backend__mlds_to_cs__indent_line_5_p_0(ml_backend__mlds_to_cs__V_19_19, ml_backend__mlds_to_cs__Context_12, ml_backend__mlds_to_cs__Indent_10);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "default: /*NOTREACHED*/\n");
              }
              ml_backend__mlds_to_cs__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 0)));
              ml_backend__mlds_to_cs__V_67_67 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) & (MR_Integer) 1);
              ml_backend__mlds_to_cs__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              ml_backend__mlds_to_cs__V_68_68 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
              ml_backend__mlds_to_cs__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 2)));
              ml_backend__mlds_to_cs__V_70_70 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 3)));
              ml_backend__mlds_to_cs__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 4)));
              ml_backend__mlds_to_cs__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 5)));
              ml_backend__mlds_to_cs__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 6)));
              ml_backend__mlds_to_cs__V_24_24 = (ml_backend__mlds_to_cs__Indent_10 + (MR_Integer) 1);
              {
                ml_backend__mlds_to_cs__indent_line_5_p_0(ml_backend__mlds_to_cs__V_23_23, ml_backend__mlds_to_cs__Context_12, ml_backend__mlds_to_cs__V_24_24);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "throw new runtime.UnreachableDefault();\n");
              }
              {
                *ml_backend__mlds_to_cs__ExitMethods_14 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__type_ctor_info_exit_method_0, ((MR_Box) ((MR_Integer) 3)));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              {
                *ml_backend__mlds_to_cs__ExitMethods_14 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__type_ctor_info_exit_method_0, ((MR_Box) ((MR_Integer) 4)));
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__mlds_to_cs__Statement_16 = (MR_Word) MR_body(((MR_Word) ml_backend__mlds_to_cs__Default_13), (MR_Integer) 1);
          MR_Word ml_backend__mlds_to_cs__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          MR_Integer ml_backend__mlds_to_cs__V_34_34;
          MR_Word ml_backend__mlds_to_cs__V_37_37;
          MR_Word ml_backend__mlds_to_cs__Statement_82;
          MR_Word ml_backend__mlds_to_cs__Context_83;
          MR_Word ml_backend__mlds_to_cs__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 0)));
          MR_Word ml_backend__mlds_to_cs__V_43_43 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) & (MR_Integer) 1);
          MR_Word ml_backend__mlds_to_cs__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
          MR_Word ml_backend__mlds_to_cs__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 2)));
          MR_String ml_backend__mlds_to_cs__V_46_46 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 3)));
          MR_Word ml_backend__mlds_to_cs__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 4)));
          MR_Word ml_backend__mlds_to_cs__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 5)));
          MR_Word ml_backend__mlds_to_cs__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 6)));
          MR_Word ml_backend__mlds_to_cs__V_50_50;
          MR_Word ml_backend__mlds_to_cs__V_51_51;
          MR_Word ml_backend__mlds_to_cs__V_52_52;
          MR_Word ml_backend__mlds_to_cs__V_53_53;
          MR_String ml_backend__mlds_to_cs__V_54_54;
          MR_Word ml_backend__mlds_to_cs__V_55_55;
          MR_Word ml_backend__mlds_to_cs__V_56_56;
          MR_Word ml_backend__mlds_to_cs__V_57_57;

          {
            ml_backend__mlds_to_cs__indent_line_5_p_0(ml_backend__mlds_to_cs__V_30_30, ml_backend__mlds_to_cs__Context_12, ml_backend__mlds_to_cs__Indent_10);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "default:\n");
          }
          ml_backend__mlds_to_cs__V_34_34 = (ml_backend__mlds_to_cs__Indent_10 + (MR_Integer) 1);
          ml_backend__mlds_to_cs__Statement_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Statement_16, (MR_Integer) 0)));
          ml_backend__mlds_to_cs__Context_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Statement_16, (MR_Integer) 1)));
          {
            ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_95_91_51_93_95_48_8_p_0(ml_backend__mlds_to_cs__Info_9, ml_backend__mlds_to_cs__V_34_34, ml_backend__mlds_to_cs__Statement_82, ml_backend__mlds_to_cs__Context_83, ml_backend__mlds_to_cs__ExitMethods_14);
          }
          ml_backend__mlds_to_cs__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 0)));
          ml_backend__mlds_to_cs__V_51_51 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) & (MR_Integer) 1);
          ml_backend__mlds_to_cs__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          ml_backend__mlds_to_cs__V_52_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
          ml_backend__mlds_to_cs__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 2)));
          ml_backend__mlds_to_cs__V_54_54 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 3)));
          ml_backend__mlds_to_cs__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 4)));
          ml_backend__mlds_to_cs__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 5)));
          ml_backend__mlds_to_cs__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 6)));
          {
            ml_backend__mlds_to_cs__indent_line_5_p_0(ml_backend__mlds_to_cs__V_37_37, ml_backend__mlds_to_cs__Context_12, ml_backend__mlds_to_cs__Indent_10);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "break;\n");
          }
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_119_105_116_99_104_95_99_97_115_101_95_95_91_51_93_95_48_8_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3)
{
  {
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;

    {
      ml_backend__mlds_to_cs__output_case_cond_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 5))), ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_119_105_116_99_104_95_99_97_115_101_95_95_91_51_93_95_48_8_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_9,
  MR_Integer ml_backend__mlds_to_cs__Indent_10,
  MR_Word ml_backend__mlds_to_cs__Context_12,
  MR_Word ml_backend__mlds_to_cs__Case_13,
  MR_Word * ml_backend__mlds_to_cs__ExitMethods_14)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Word ml_backend__mlds_to_cs__FirstCond_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Case_13, (MR_Integer) 0)));
    MR_Word ml_backend__mlds_to_cs__LaterConds_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Case_13, (MR_Integer) 1)));
    MR_Word ml_backend__mlds_to_cs__Statement_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Case_13, (MR_Integer) 2)));
    MR_Word ml_backend__mlds_to_cs__StmtExitMethods_19;
    MR_Word ml_backend__mlds_to_cs__V_23_23;
    MR_Integer ml_backend__mlds_to_cs__V_25_25;
    MR_Word ml_backend__mlds_to_cs__Statement_59;
    MR_Word ml_backend__mlds_to_cs__Context_60;
    MR_Box ml_backend__mlds_to_cs__conv0_STATE_VARIABLE_IO_24_24;

    {
      ml_backend__mlds_to_cs__output_case_cond_6_p_0(ml_backend__mlds_to_cs__Info_9, ml_backend__mlds_to_cs__Indent_10, ml_backend__mlds_to_cs__Context_12, ml_backend__mlds_to_cs__FirstCond_16);
    }
    {
      ml_backend__mlds_to_cs__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_23_23, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_7[6]));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_23_23, 1) = ((MR_Box) (ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_119_105_116_99_104_95_99_97_115_101_95_95_91_51_93_95_48_8_p_0_1));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_23_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_23_23, 3) = ((MR_Box) (ml_backend__mlds_to_cs__Info_9));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_23_23, 4) = ((MR_Box) (ml_backend__mlds_to_cs__Indent_10));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_23_23, 5) = ((MR_Box) (ml_backend__mlds_to_cs__Context_12));
    }
    {
      mercury__list__foldl_4_p_2((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, ml_backend__mlds_to_cs__V_23_23, ml_backend__mlds_to_cs__LaterConds_17, ((MR_Box) ((MR_Integer) 0)), &ml_backend__mlds_to_cs__conv0_STATE_VARIABLE_IO_24_24);
    }
    ml_backend__mlds_to_cs__V_25_25 = (ml_backend__mlds_to_cs__Indent_10 + (MR_Integer) 1);
    ml_backend__mlds_to_cs__Statement_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Statement_18, (MR_Integer) 0)));
    ml_backend__mlds_to_cs__Context_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Statement_18, (MR_Integer) 1)));
    {
      ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_95_91_51_93_95_48_8_p_0(ml_backend__mlds_to_cs__Info_9, ml_backend__mlds_to_cs__V_25_25, ml_backend__mlds_to_cs__Statement_59, ml_backend__mlds_to_cs__Context_60, &ml_backend__mlds_to_cs__StmtExitMethods_19);
    }
    {
      ml_backend__mlds_to_cs__succeeded = mercury__set__member_2_p_0((MR_Word) &ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__type_ctor_info_exit_method_0, ((MR_Box) ((MR_Integer) 4)), ml_backend__mlds_to_cs__StmtExitMethods_19);
    }
    if (ml_backend__mlds_to_cs__succeeded)
      {
        MR_Word ml_backend__mlds_to_cs__TypeCtorInfo_52_52;
        MR_Word ml_backend__mlds_to_cs__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Integer ml_backend__mlds_to_cs__V_30_30 = (ml_backend__mlds_to_cs__Indent_10 + (MR_Integer) 1);
        MR_Word ml_backend__mlds_to_cs__V_35_35;
        MR_Word ml_backend__mlds_to_cs__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 0)));
        MR_Word ml_backend__mlds_to_cs__V_39_39 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) & (MR_Integer) 1);
        MR_Word ml_backend__mlds_to_cs__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word ml_backend__mlds_to_cs__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 2)));
        MR_String ml_backend__mlds_to_cs__V_42_42 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 3)));
        MR_Word ml_backend__mlds_to_cs__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 4)));
        MR_Word ml_backend__mlds_to_cs__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 5)));
        MR_Word ml_backend__mlds_to_cs__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 6)));

        {
          ml_backend__mlds_to_cs__indent_line_5_p_0(ml_backend__mlds_to_cs__V_29_29, ml_backend__mlds_to_cs__Context_12, ml_backend__mlds_to_cs__V_30_30);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "break;\n");
        }
        ml_backend__mlds_to_cs__TypeCtorInfo_52_52 = (MR_Word) &ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__type_ctor_info_exit_method_0;
        {
          ml_backend__mlds_to_cs__V_35_35 = mercury__set__insert_2_f_0(ml_backend__mlds_to_cs__TypeCtorInfo_52_52, ml_backend__mlds_to_cs__StmtExitMethods_19, ((MR_Box) ((MR_Integer) 0)));
        }
        {
          *ml_backend__mlds_to_cs__ExitMethods_14 = mercury__set__delete_2_f_0(ml_backend__mlds_to_cs__TypeCtorInfo_52_52, ml_backend__mlds_to_cs__V_35_35, ((MR_Box) ((MR_Integer) 4)));
        }
      }
    else
      *ml_backend__mlds_to_cs__ExitMethods_14 = ml_backend__mlds_to_cs__StmtExitMethods_19;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_119_105_116_99_104_95_99_97_115_101_115_95_95_91_51_93_95_48_9_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_1,
  MR_Integer ml_backend__mlds_to_cs__Indent_2,
  MR_Word ml_backend__mlds_to_cs__Context_4,
  MR_Word ml_backend__mlds_to_cs__HeadVar__5_5,
  MR_Word ml_backend__mlds_to_cs__Default_6,
  MR_Word * ml_backend__mlds_to_cs__ExitMethods_7)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;

    if ((ml_backend__mlds_to_cs__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_119_105_116_99_104_95_100_101_102_97_117_108_116_95_95_91_51_93_95_48_8_p_0(ml_backend__mlds_to_cs__Info_1, ml_backend__mlds_to_cs__Indent_2, ml_backend__mlds_to_cs__Context_4, ml_backend__mlds_to_cs__Default_6, ml_backend__mlds_to_cs__ExitMethods_7);
      }
    else
      {
        MR_Word ml_backend__mlds_to_cs__Case_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__HeadVar__5_5, (MR_Integer) 0)));
        MR_Word ml_backend__mlds_to_cs__Cases_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__HeadVar__5_5, (MR_Integer) 1)));
        MR_Word ml_backend__mlds_to_cs__CaseExitMethods0_29;
        MR_Word ml_backend__mlds_to_cs__CasesExitMethods_30;
        MR_Word ml_backend__mlds_to_cs__CaseExitMethods_31;

        {
          ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_119_105_116_99_104_95_99_97_115_101_95_95_91_51_93_95_48_8_p_0(ml_backend__mlds_to_cs__Info_1, ml_backend__mlds_to_cs__Indent_2, ml_backend__mlds_to_cs__Context_4, ml_backend__mlds_to_cs__Case_24, &ml_backend__mlds_to_cs__CaseExitMethods0_29);
        }
        {
          ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_119_105_116_99_104_95_99_97_115_101_115_95_95_91_51_93_95_48_9_p_0(ml_backend__mlds_to_cs__Info_1, ml_backend__mlds_to_cs__Indent_2, ml_backend__mlds_to_cs__Context_4, ml_backend__mlds_to_cs__Cases_25, ml_backend__mlds_to_cs__Default_6, &ml_backend__mlds_to_cs__CasesExitMethods_30);
        }
        {
          ml_backend__mlds_to_cs__succeeded = mercury__set__member_2_p_0((MR_Word) &ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__type_ctor_info_exit_method_0, ((MR_Box) ((MR_Integer) 0)), ml_backend__mlds_to_cs__CaseExitMethods0_29);
        }
        if (ml_backend__mlds_to_cs__succeeded)
          {
            MR_Word ml_backend__mlds_to_cs__TypeCtorInfo_41_41 = (MR_Word) &ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__type_ctor_info_exit_method_0;
            MR_Word ml_backend__mlds_to_cs__V_37_37;

            {
              ml_backend__mlds_to_cs__V_37_37 = mercury__set__delete_2_f_0(ml_backend__mlds_to_cs__TypeCtorInfo_41_41, ml_backend__mlds_to_cs__CaseExitMethods0_29, ((MR_Box) ((MR_Integer) 0)));
            }
            {
              ml_backend__mlds_to_cs__CaseExitMethods_31 = mercury__set__insert_2_f_0(ml_backend__mlds_to_cs__TypeCtorInfo_41_41, ml_backend__mlds_to_cs__V_37_37, ((MR_Box) ((MR_Integer) 4)));
            }
          }
        else
          ml_backend__mlds_to_cs__CaseExitMethods_31 = ml_backend__mlds_to_cs__CaseExitMethods0_29;
        {
          *ml_backend__mlds_to_cs__ExitMethods_7 = mercury__set__union_2_f_0((MR_Word) &ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__type_ctor_info_exit_method_0, ml_backend__mlds_to_cs__CaseExitMethods_31, ml_backend__mlds_to_cs__CasesExitMethods_30);
        }
      }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_95_91_51_93_95_48_8_p_0_3(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_4,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_5)
{
  {
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;
    MR_Integer ml_backend__mlds_to_cs__conv1_HeadVar__5_5;

    {
      ml_backend__mlds_to_cs__output_assign_out_params_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_1), ((MR_Integer) ml_backend__mlds_to_cs__wrapper_arg_2), &ml_backend__mlds_to_cs__conv1_HeadVar__5_5);
    }
    *ml_backend__mlds_to_cs__wrapper_arg_3 = ((MR_Box) (ml_backend__mlds_to_cs__conv1_HeadVar__5_5));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_95_91_51_93_95_48_8_p_0_2(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3)
{
  {
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;

    {
      ml_backend__mlds_to_cs__output_rval_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_1));
    }
  }
}

static MR_Box MR_CALL 
ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_95_91_51_93_95_48_8_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1)
{
  {
    MR_Box ml_backend__mlds_to_cs__wrapper_arg_2;
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;
    MR_Word ml_backend__mlds_to_cs__conv0_LambdaHeadVar__2_150;

    {
      ml_backend__mlds_to_cs__conv0_LambdaHeadVar__2_150 = ml_backend__mlds_to_cs__IntroducedFrom__func__output_stmt__2863__1_1_f_0(((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_1));
    }
    ml_backend__mlds_to_cs__wrapper_arg_2 = ((MR_Box) (ml_backend__mlds_to_cs__conv0_LambdaHeadVar__2_150));
    return ml_backend__mlds_to_cs__wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_95_91_51_93_95_48_8_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_9,
  MR_Integer ml_backend__mlds_to_cs__Indent_10,
  MR_Word ml_backend__mlds_to_cs__Statement_12,
  MR_Word ml_backend__mlds_to_cs__Context_13,
  MR_Word * ml_backend__mlds_to_cs__ExitMethods_14)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;

    switch (MR_tag((MR_Word) ml_backend__mlds_to_cs__Statement_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ml_backend__mlds_to_cs__Defns_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Statement_12, (MR_Integer) 0)));
          MR_Word ml_backend__mlds_to_cs__Statements_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Statement_12, (MR_Integer) 1)));
          MR_Word ml_backend__mlds_to_cs__V_272_272 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          MR_Integer ml_backend__mlds_to_cs__V_282_282;
          MR_Word ml_backend__mlds_to_cs__V_285_285;
          MR_Word ml_backend__mlds_to_cs__V_296_296 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 0)));
          MR_Word ml_backend__mlds_to_cs__V_297_297 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) & (MR_Integer) 1);
          MR_Word ml_backend__mlds_to_cs__V_298_298 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
          MR_Word ml_backend__mlds_to_cs__V_299_299 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 2)));
          MR_String ml_backend__mlds_to_cs__V_300_300 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 3)));
          MR_Word ml_backend__mlds_to_cs__V_301_301 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 4)));
          MR_Word ml_backend__mlds_to_cs__V_302_302 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 5)));
          MR_Word ml_backend__mlds_to_cs__V_303_303 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 6)));
          MR_Word ml_backend__mlds_to_cs__V_304_304;
          MR_Word ml_backend__mlds_to_cs__V_305_305;
          MR_Word ml_backend__mlds_to_cs__V_306_306;
          MR_Word ml_backend__mlds_to_cs__V_307_307;
          MR_String ml_backend__mlds_to_cs__V_308_308;
          MR_Word ml_backend__mlds_to_cs__V_309_309;
          MR_Word ml_backend__mlds_to_cs__V_310_310;
          MR_Word ml_backend__mlds_to_cs__V_311_311;

          {
            ml_backend__mlds_to_cs__indent_line_5_p_0(ml_backend__mlds_to_cs__V_272_272, ml_backend__mlds_to_cs__Context_13, ml_backend__mlds_to_cs__Indent_10);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "{\n");
          }
          if ((ml_backend__mlds_to_cs__Defns_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
            }
          else
            {
              MR_Integer ml_backend__mlds_to_cs__V_276_276 = (ml_backend__mlds_to_cs__Indent_10 + (MR_Integer) 1);

              {
                ml_backend__mlds_to_cs__output_defns_6_p_0(ml_backend__mlds_to_cs__Info_9, ml_backend__mlds_to_cs__V_276_276, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)), ml_backend__mlds_to_cs__Defns_16);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "\n");
              }
            }
          ml_backend__mlds_to_cs__V_282_282 = (ml_backend__mlds_to_cs__Indent_10 + (MR_Integer) 1);
          {
            ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_97_116_101_109_101_110_116_115_95_95_91_51_93_95_48_7_p_0(ml_backend__mlds_to_cs__Info_9, ml_backend__mlds_to_cs__V_282_282, ml_backend__mlds_to_cs__Statements_17, ml_backend__mlds_to_cs__ExitMethods_14);
          }
          ml_backend__mlds_to_cs__V_304_304 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 0)));
          ml_backend__mlds_to_cs__V_305_305 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) & (MR_Integer) 1);
          ml_backend__mlds_to_cs__V_285_285 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          ml_backend__mlds_to_cs__V_306_306 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
          ml_backend__mlds_to_cs__V_307_307 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 2)));
          ml_backend__mlds_to_cs__V_308_308 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 3)));
          ml_backend__mlds_to_cs__V_309_309 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 4)));
          ml_backend__mlds_to_cs__V_310_310 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 5)));
          ml_backend__mlds_to_cs__V_311_311 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 6)));
          {
            ml_backend__mlds_to_cs__indent_line_5_p_0(ml_backend__mlds_to_cs__V_285_285, ml_backend__mlds_to_cs__Context_13, ml_backend__mlds_to_cs__Indent_10);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "}\n");
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__mlds_to_cs__V_543_543 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          MR_Word ml_backend__mlds_to_cs__V_546_546 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__Statement_12, (MR_Integer) 2)));
          MR_Word ml_backend__mlds_to_cs__V_547_547 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__Statement_12, (MR_Integer) 1)));
          MR_Word ml_backend__mlds_to_cs__V_548_548 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__Statement_12, (MR_Integer) 0)));
          MR_Word ml_backend__mlds_to_cs__V_537_537 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 6)));
          MR_Word ml_backend__mlds_to_cs__V_538_538 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 5)));
          MR_Word ml_backend__mlds_to_cs__V_539_539 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 4)));
          MR_String ml_backend__mlds_to_cs__V_540_540 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 3)));
          MR_Word ml_backend__mlds_to_cs__V_541_541 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 2)));
          MR_Word ml_backend__mlds_to_cs__V_542_542 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
          MR_Word ml_backend__mlds_to_cs__V_544_544 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) & (MR_Integer) 1);
          MR_Word ml_backend__mlds_to_cs__V_545_545 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 0)));

          switch (ml_backend__mlds_to_cs__V_548_548) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Integer ml_backend__mlds_to_cs__V_246_246;
                MR_Word ml_backend__mlds_to_cs__V_249_249;
                MR_Word ml_backend__mlds_to_cs__StmtExitMethods_292;
                MR_Word ml_backend__mlds_to_cs__V_336_336;
                MR_Word ml_backend__mlds_to_cs__V_337_337;
                MR_Word ml_backend__mlds_to_cs__V_338_338;
                MR_Word ml_backend__mlds_to_cs__V_339_339;
                MR_String ml_backend__mlds_to_cs__V_340_340;
                MR_Word ml_backend__mlds_to_cs__V_341_341;
                MR_Word ml_backend__mlds_to_cs__V_342_342;
                MR_Word ml_backend__mlds_to_cs__V_343_343;

                {
                  ml_backend__mlds_to_cs__indent_line_5_p_0(ml_backend__mlds_to_cs__V_543_543, ml_backend__mlds_to_cs__Context_13, ml_backend__mlds_to_cs__Indent_10);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) "do\n");
                }
                ml_backend__mlds_to_cs__V_246_246 = (ml_backend__mlds_to_cs__Indent_10 + (MR_Integer) 1);
                {
                  ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_97_116_101_109_101_110_116_95_95_91_51_93_95_48_7_p_0(ml_backend__mlds_to_cs__Info_9, ml_backend__mlds_to_cs__V_246_246, ml_backend__mlds_to_cs__V_546_546, &ml_backend__mlds_to_cs__StmtExitMethods_292);
                }
                ml_backend__mlds_to_cs__V_336_336 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 0)));
                ml_backend__mlds_to_cs__V_337_337 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) & (MR_Integer) 1);
                ml_backend__mlds_to_cs__V_249_249 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                ml_backend__mlds_to_cs__V_338_338 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                ml_backend__mlds_to_cs__V_339_339 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 2)));
                ml_backend__mlds_to_cs__V_340_340 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 3)));
                ml_backend__mlds_to_cs__V_341_341 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 4)));
                ml_backend__mlds_to_cs__V_342_342 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 5)));
                ml_backend__mlds_to_cs__V_343_343 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 6)));
                {
                  ml_backend__mlds_to_cs__indent_line_5_p_0(ml_backend__mlds_to_cs__V_249_249, ml_backend__mlds_to_cs__Context_13, ml_backend__mlds_to_cs__Indent_10);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) "while (");
                }
                {
                  ml_backend__mlds_to_cs__output_rval_4_p_0(ml_backend__mlds_to_cs__Info_9, ml_backend__mlds_to_cs__V_547_547);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) ");\n");
                }
                {
                  *ml_backend__mlds_to_cs__ExitMethods_14 = ml_backend__mlds_to_cs__while_exit_methods_2_f_0(ml_backend__mlds_to_cs__V_547_547, ml_backend__mlds_to_cs__StmtExitMethods_292);
                }
              }
              break;
            case (MR_Integer) 0:
              {
                MR_Word ml_backend__mlds_to_cs__V_263_263;

                {
                  ml_backend__mlds_to_cs__indent_line_5_p_0(ml_backend__mlds_to_cs__V_543_543, ml_backend__mlds_to_cs__Context_13, ml_backend__mlds_to_cs__Indent_10);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) "while (");
                }
                {
                  ml_backend__mlds_to_cs__output_rval_4_p_0(ml_backend__mlds_to_cs__Info_9, ml_backend__mlds_to_cs__V_547_547);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) ")\n");
                }
                ml_backend__mlds_to_cs__succeeded = ((((MR_tag((MR_Word) ml_backend__mlds_to_cs__V_547_547)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__V_547_547, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (ml_backend__mlds_to_cs__succeeded)
                  {
                    ml_backend__mlds_to_cs__V_263_263 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__V_547_547, (MR_Integer) 1)));
                    ml_backend__mlds_to_cs__succeeded = (ml_backend__mlds_to_cs__V_263_263 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                  }
                if (ml_backend__mlds_to_cs__succeeded)
                  {
                    MR_Word ml_backend__mlds_to_cs__V_264_264 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                    MR_Word ml_backend__mlds_to_cs__V_320_320 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 0)));
                    MR_Word ml_backend__mlds_to_cs__V_321_321 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) & (MR_Integer) 1);
                    MR_Word ml_backend__mlds_to_cs__V_322_322 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                    MR_Word ml_backend__mlds_to_cs__V_323_323 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 2)));
                    MR_String ml_backend__mlds_to_cs__V_324_324 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 3)));
                    MR_Word ml_backend__mlds_to_cs__V_325_325 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 4)));
                    MR_Word ml_backend__mlds_to_cs__V_326_326 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 5)));
                    MR_Word ml_backend__mlds_to_cs__V_327_327 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 6)));

                    {
                      ml_backend__mlds_to_cs__indent_line_5_p_0(ml_backend__mlds_to_cs__V_264_264, ml_backend__mlds_to_cs__Context_13, ml_backend__mlds_to_cs__Indent_10);
                    }
                    {
                      mercury__io__write_string_3_p_0((MR_String) "{  /* Unreachable code */  }\n");
                    }
                    {
                      *ml_backend__mlds_to_cs__ExitMethods_14 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__type_ctor_info_exit_method_0, ((MR_Box) ((MR_Integer) 4)));
                    }
                  }
                else
                  {
                    MR_Word ml_backend__mlds_to_cs__StmtExitMethods_23;
                    MR_Integer ml_backend__mlds_to_cs__V_269_269 = (ml_backend__mlds_to_cs__Indent_10 + (MR_Integer) 1);

                    {
                      ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_97_116_101_109_101_110_116_95_95_91_51_93_95_48_7_p_0(ml_backend__mlds_to_cs__Info_9, ml_backend__mlds_to_cs__V_269_269, ml_backend__mlds_to_cs__V_546_546, &ml_backend__mlds_to_cs__StmtExitMethods_23);
                    }
                    {
                      *ml_backend__mlds_to_cs__ExitMethods_14 = ml_backend__mlds_to_cs__while_exit_methods_2_f_0(ml_backend__mlds_to_cs__V_547_547, ml_backend__mlds_to_cs__StmtExitMethods_23);
                    }
                  }
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ml_backend__mlds_to_cs__Then0_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__Statement_12, (MR_Integer) 1)));
          MR_Word ml_backend__mlds_to_cs__MaybeElse_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__Statement_12, (MR_Integer) 2)));
          MR_Word ml_backend__mlds_to_cs__V_223_223 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          MR_Integer ml_backend__mlds_to_cs__V_230_230;
          MR_Word ml_backend__mlds_to_cs__Cond_293 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__Statement_12, (MR_Integer) 0)));
          MR_Word ml_backend__mlds_to_cs__V_344_344 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 0)));
          MR_Word ml_backend__mlds_to_cs__V_345_345 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) & (MR_Integer) 1);
          MR_Word ml_backend__mlds_to_cs__V_346_346 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
          MR_Word ml_backend__mlds_to_cs__V_347_347 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 2)));
          MR_String ml_backend__mlds_to_cs__V_348_348 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 3)));
          MR_Word ml_backend__mlds_to_cs__V_349_349 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 4)));
          MR_Word ml_backend__mlds_to_cs__V_350_350 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 5)));
          MR_Word ml_backend__mlds_to_cs__V_351_351 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 6)));
          MR_Word ml_backend__mlds_to_cs__V_26_26;
          MR_Word ml_backend__mlds_to_cs__ThenContext_29;
          MR_Word ml_backend__mlds_to_cs__V_217_217;
          MR_Word ml_backend__mlds_to_cs__V_218_218;
          MR_Word ml_backend__mlds_to_cs__V_27_27;
          MR_Word ml_backend__mlds_to_cs__V_28_28;

          {
            ml_backend__mlds_to_cs__indent_line_5_p_0(ml_backend__mlds_to_cs__V_223_223, ml_backend__mlds_to_cs__Context_13, ml_backend__mlds_to_cs__Indent_10);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "if (");
          }
          {
            ml_backend__mlds_to_cs__output_rval_4_p_0(ml_backend__mlds_to_cs__Info_9, ml_backend__mlds_to_cs__Cond_293);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) ")\n");
          }
          ml_backend__mlds_to_cs__V_230_230 = (ml_backend__mlds_to_cs__Indent_10 + (MR_Integer) 1);
          ml_backend__mlds_to_cs__succeeded = ((MR_tag((MR_Word) ml_backend__mlds_to_cs__MaybeElse_25)) == (MR_mktag((MR_Integer) 1)));
          if (ml_backend__mlds_to_cs__succeeded)
            {
              ml_backend__mlds_to_cs__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__MaybeElse_25, (MR_Integer) 0)));
              ml_backend__mlds_to_cs__V_217_217 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Then0_24, (MR_Integer) 0)));
              ml_backend__mlds_to_cs__ThenContext_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Then0_24, (MR_Integer) 1)));
              ml_backend__mlds_to_cs__succeeded = ((MR_tag((MR_Word) ml_backend__mlds_to_cs__V_217_217)) == (MR_mktag((MR_Integer) 2)));
              if (ml_backend__mlds_to_cs__succeeded)
                {
                  ml_backend__mlds_to_cs__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__V_217_217, (MR_Integer) 0)));
                  ml_backend__mlds_to_cs__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__V_217_217, (MR_Integer) 1)));
                  ml_backend__mlds_to_cs__V_218_218 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__V_217_217, (MR_Integer) 2)));
                  ml_backend__mlds_to_cs__succeeded = (ml_backend__mlds_to_cs__V_218_218 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
            }
          if (ml_backend__mlds_to_cs__succeeded)
            {
              MR_Word ml_backend__mlds_to_cs__Then_30;
              MR_Word ml_backend__mlds_to_cs__ThenExitMethods_31;
              MR_Word ml_backend__mlds_to_cs__ElseExitMethods_33;
              MR_Word ml_backend__mlds_to_cs__V_219_219;
              MR_Word ml_backend__mlds_to_cs__V_221_221;
              MR_Word ml_backend__mlds_to_cs__V_235_235;
              MR_Integer ml_backend__mlds_to_cs__V_239_239;
              MR_Word ml_backend__mlds_to_cs__V_352_352;
              MR_Word ml_backend__mlds_to_cs__V_353_353;
              MR_Word ml_backend__mlds_to_cs__V_354_354;
              MR_Word ml_backend__mlds_to_cs__V_355_355;
              MR_String ml_backend__mlds_to_cs__V_356_356;
              MR_Word ml_backend__mlds_to_cs__V_357_357;
              MR_Word ml_backend__mlds_to_cs__V_358_358;
              MR_Word ml_backend__mlds_to_cs__V_359_359;

              {
                ml_backend__mlds_to_cs__V_221_221 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__V_221_221, 0) = ((MR_Box) (ml_backend__mlds_to_cs__Then0_24));
                MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__V_221_221, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                ml_backend__mlds_to_cs__V_219_219 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_219_219, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_219_219, 1) = ((MR_Box) (ml_backend__mlds_to_cs__V_221_221));
              }
              {
                ml_backend__mlds_to_cs__Then_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Then_30, 0) = ((MR_Box) (ml_backend__mlds_to_cs__V_219_219));
                MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Then_30, 1) = ((MR_Box) (ml_backend__mlds_to_cs__ThenContext_29));
              }
              {
                ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_97_116_101_109_101_110_116_95_95_91_51_93_95_48_7_p_0(ml_backend__mlds_to_cs__Info_9, ml_backend__mlds_to_cs__V_230_230, ml_backend__mlds_to_cs__Then_30, &ml_backend__mlds_to_cs__ThenExitMethods_31);
              }
              ml_backend__mlds_to_cs__V_352_352 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 0)));
              ml_backend__mlds_to_cs__V_353_353 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) & (MR_Integer) 1);
              ml_backend__mlds_to_cs__V_235_235 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              ml_backend__mlds_to_cs__V_354_354 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
              ml_backend__mlds_to_cs__V_355_355 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 2)));
              ml_backend__mlds_to_cs__V_356_356 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 3)));
              ml_backend__mlds_to_cs__V_357_357 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 4)));
              ml_backend__mlds_to_cs__V_358_358 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 5)));
              ml_backend__mlds_to_cs__V_359_359 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 6)));
              {
                ml_backend__mlds_to_cs__indent_line_5_p_0(ml_backend__mlds_to_cs__V_235_235, ml_backend__mlds_to_cs__Context_13, ml_backend__mlds_to_cs__Indent_10);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "else\n");
              }
              ml_backend__mlds_to_cs__V_239_239 = (ml_backend__mlds_to_cs__Indent_10 + (MR_Integer) 1);
              {
                ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_97_116_101_109_101_110_116_95_95_91_51_93_95_48_7_p_0(ml_backend__mlds_to_cs__Info_9, ml_backend__mlds_to_cs__V_239_239, ml_backend__mlds_to_cs__V_26_26, &ml_backend__mlds_to_cs__ElseExitMethods_33);
              }
              {
                *ml_backend__mlds_to_cs__ExitMethods_14 = mercury__set__union_2_f_0((MR_Word) &ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__type_ctor_info_exit_method_0, ml_backend__mlds_to_cs__ThenExitMethods_31, ml_backend__mlds_to_cs__ElseExitMethods_33);
              }
            }
          else
            {
              MR_Word ml_backend__mlds_to_cs__ThenExitMethods_596;

              {
                ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_97_116_101_109_101_110_116_95_95_91_51_93_95_48_7_p_0(ml_backend__mlds_to_cs__Info_9, ml_backend__mlds_to_cs__V_230_230, ml_backend__mlds_to_cs__Then0_24, &ml_backend__mlds_to_cs__ThenExitMethods_596);
              }
              if ((ml_backend__mlds_to_cs__MaybeElse_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  MR_Word ml_backend__mlds_to_cs__TypeCtorInfo_514_514 = (MR_Word) &ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__type_ctor_info_exit_method_0;
                  MR_Word ml_backend__mlds_to_cs__V_233_233;

                  {
                    ml_backend__mlds_to_cs__V_233_233 = mercury__set__make_singleton_set_1_f_0(ml_backend__mlds_to_cs__TypeCtorInfo_514_514, ((MR_Box) ((MR_Integer) 4)));
                  }
                  {
                    *ml_backend__mlds_to_cs__ExitMethods_14 = mercury__set__union_2_f_0(ml_backend__mlds_to_cs__TypeCtorInfo_514_514, ml_backend__mlds_to_cs__ThenExitMethods_596, ml_backend__mlds_to_cs__V_233_233);
                  }
                }
              else
                {
                  MR_Word ml_backend__mlds_to_cs__Else_561 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__MaybeElse_25, (MR_Integer) 0)));
                  MR_Word ml_backend__mlds_to_cs__ElseExitMethods_562;
                  MR_Word ml_backend__mlds_to_cs__V_563_563 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                  MR_Integer ml_backend__mlds_to_cs__V_567_567;
                  MR_Word ml_backend__mlds_to_cs__V_553_553 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 0)));
                  MR_Word ml_backend__mlds_to_cs__V_554_554 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) & (MR_Integer) 1);
                  MR_Word ml_backend__mlds_to_cs__V_555_555 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                  MR_Word ml_backend__mlds_to_cs__V_556_556 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 2)));
                  MR_String ml_backend__mlds_to_cs__V_557_557 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 3)));
                  MR_Word ml_backend__mlds_to_cs__V_558_558 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 4)));
                  MR_Word ml_backend__mlds_to_cs__V_559_559 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 5)));
                  MR_Word ml_backend__mlds_to_cs__V_560_560 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 6)));

                  {
                    ml_backend__mlds_to_cs__indent_line_5_p_0(ml_backend__mlds_to_cs__V_563_563, ml_backend__mlds_to_cs__Context_13, ml_backend__mlds_to_cs__Indent_10);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) "else\n");
                  }
                  ml_backend__mlds_to_cs__V_567_567 = (ml_backend__mlds_to_cs__Indent_10 + (MR_Integer) 1);
                  {
                    ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_97_116_101_109_101_110_116_95_95_91_51_93_95_48_7_p_0(ml_backend__mlds_to_cs__Info_9, ml_backend__mlds_to_cs__V_567_567, ml_backend__mlds_to_cs__Else_561, &ml_backend__mlds_to_cs__ElseExitMethods_562);
                  }
                  {
                    *ml_backend__mlds_to_cs__ExitMethods_14 = mercury__set__union_2_f_0((MR_Word) &ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__type_ctor_info_exit_method_0, ml_backend__mlds_to_cs__ThenExitMethods_596, ml_backend__mlds_to_cs__ElseExitMethods_562);
                  }
                }
            }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Statement_12, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ml_backend__mlds_to_cs__Val_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Statement_12, (MR_Integer) 2)));
              MR_Word ml_backend__mlds_to_cs__Cases_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Statement_12, (MR_Integer) 4)));
              MR_Word ml_backend__mlds_to_cs__Default_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Statement_12, (MR_Integer) 5)));
              MR_Word ml_backend__mlds_to_cs__V_203_203 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              MR_Integer ml_backend__mlds_to_cs__V_210_210;
              MR_Word ml_backend__mlds_to_cs__V_213_213;
              MR_Word ml_backend__mlds_to_cs___Type_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Statement_12, (MR_Integer) 1)));
              MR_Word ml_backend__mlds_to_cs___Range_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Statement_12, (MR_Integer) 3)));
              MR_Word ml_backend__mlds_to_cs__V_360_360 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 0)));
              MR_Word ml_backend__mlds_to_cs__V_361_361 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) & (MR_Integer) 1);
              MR_Word ml_backend__mlds_to_cs__V_362_362 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
              MR_Word ml_backend__mlds_to_cs__V_363_363 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 2)));
              MR_String ml_backend__mlds_to_cs__V_364_364 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 3)));
              MR_Word ml_backend__mlds_to_cs__V_365_365 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 4)));
              MR_Word ml_backend__mlds_to_cs__V_366_366 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 5)));
              MR_Word ml_backend__mlds_to_cs__V_367_367 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 6)));
              MR_Word ml_backend__mlds_to_cs__V_368_368;
              MR_Word ml_backend__mlds_to_cs__V_369_369;
              MR_Word ml_backend__mlds_to_cs__V_370_370;
              MR_Word ml_backend__mlds_to_cs__V_371_371;
              MR_String ml_backend__mlds_to_cs__V_372_372;
              MR_Word ml_backend__mlds_to_cs__V_373_373;
              MR_Word ml_backend__mlds_to_cs__V_374_374;
              MR_Word ml_backend__mlds_to_cs__V_375_375;

              {
                ml_backend__mlds_to_cs__indent_line_5_p_0(ml_backend__mlds_to_cs__V_203_203, ml_backend__mlds_to_cs__Context_13, ml_backend__mlds_to_cs__Indent_10);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "switch (");
              }
              {
                ml_backend__mlds_to_cs__output_rval_4_p_0(ml_backend__mlds_to_cs__Info_9, ml_backend__mlds_to_cs__Val_35);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ") {\n");
              }
              ml_backend__mlds_to_cs__V_210_210 = (ml_backend__mlds_to_cs__Indent_10 + (MR_Integer) 1);
              {
                ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_119_105_116_99_104_95_99_97_115_101_115_95_95_91_51_93_95_48_9_p_0(ml_backend__mlds_to_cs__Info_9, ml_backend__mlds_to_cs__V_210_210, ml_backend__mlds_to_cs__Context_13, ml_backend__mlds_to_cs__Cases_37, ml_backend__mlds_to_cs__Default_38, ml_backend__mlds_to_cs__ExitMethods_14);
              }
              ml_backend__mlds_to_cs__V_368_368 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 0)));
              ml_backend__mlds_to_cs__V_369_369 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) & (MR_Integer) 1);
              ml_backend__mlds_to_cs__V_213_213 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              ml_backend__mlds_to_cs__V_370_370 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
              ml_backend__mlds_to_cs__V_371_371 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 2)));
              ml_backend__mlds_to_cs__V_372_372 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 3)));
              ml_backend__mlds_to_cs__V_373_373 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 4)));
              ml_backend__mlds_to_cs__V_374_374 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 5)));
              ml_backend__mlds_to_cs__V_375_375 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 6)));
              {
                ml_backend__mlds_to_cs__indent_line_5_p_0(ml_backend__mlds_to_cs__V_213_213, ml_backend__mlds_to_cs__Context_13, ml_backend__mlds_to_cs__Indent_10);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "}\n");
              }
            }
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ml_backend.mlds_to_cs", (MR_String) "predicate \140ml_backend.mlds_to_cs.output_stmt\'/8", (MR_String) "labels not supported in Java.");
                return;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ml_backend__mlds_to_cs__V_536_536 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Statement_12, (MR_Integer) 1)));

              switch (MR_tag((MR_Word) ml_backend__mlds_to_cs__V_536_536)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(ml_backend__mlds_to_cs__V_536_536)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word ml_backend__mlds_to_cs__V_191_191 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                        MR_Word ml_backend__mlds_to_cs__V_376_376 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 0)));
                        MR_Word ml_backend__mlds_to_cs__V_377_377 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) & (MR_Integer) 1);
                        MR_Word ml_backend__mlds_to_cs__V_378_378 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                        MR_Word ml_backend__mlds_to_cs__V_379_379 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 2)));
                        MR_String ml_backend__mlds_to_cs__V_380_380 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 3)));
                        MR_Word ml_backend__mlds_to_cs__V_381_381 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 4)));
                        MR_Word ml_backend__mlds_to_cs__V_382_382 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 5)));
                        MR_Word ml_backend__mlds_to_cs__V_383_383 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 6)));

                        {
                          ml_backend__mlds_to_cs__indent_line_5_p_0(ml_backend__mlds_to_cs__V_191_191, ml_backend__mlds_to_cs__Context_13, ml_backend__mlds_to_cs__Indent_10);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) "break;\n");
                        }
                        {
                          *ml_backend__mlds_to_cs__ExitMethods_14 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__type_ctor_info_exit_method_0, ((MR_Box) ((MR_Integer) 0)));
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word ml_backend__mlds_to_cs__V_185_185 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                        MR_Word ml_backend__mlds_to_cs__V_384_384 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 0)));
                        MR_Word ml_backend__mlds_to_cs__V_385_385 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) & (MR_Integer) 1);
                        MR_Word ml_backend__mlds_to_cs__V_386_386 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                        MR_Word ml_backend__mlds_to_cs__V_387_387 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 2)));
                        MR_String ml_backend__mlds_to_cs__V_388_388 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 3)));
                        MR_Word ml_backend__mlds_to_cs__V_389_389 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 4)));
                        MR_Word ml_backend__mlds_to_cs__V_390_390 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 5)));
                        MR_Word ml_backend__mlds_to_cs__V_391_391 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 6)));

                        {
                          ml_backend__mlds_to_cs__indent_line_5_p_0(ml_backend__mlds_to_cs__V_185_185, ml_backend__mlds_to_cs__Context_13, ml_backend__mlds_to_cs__Indent_10);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) "continue;\n");
                        }
                        {
                          *ml_backend__mlds_to_cs__ExitMethods_14 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__type_ctor_info_exit_method_0, ((MR_Box) ((MR_Integer) 1)));
                        }
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "ml_backend.mlds_to_cs", (MR_String) "predicate \140ml_backend.mlds_to_cs.output_stmt\'/8", (MR_String) "gotos not supported in Java.");
                      return;
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ml_backend.mlds_to_cs", (MR_String) "predicate \140ml_backend.mlds_to_cs.output_stmt\'/8", (MR_String) "computed gotos not supported in Java.");
                return;
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ml_backend__mlds_to_cs__TypeCtorInfo_519_519;
              MR_Word ml_backend__mlds_to_cs__Signature_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Statement_12, (MR_Integer) 1)));
              MR_Word ml_backend__mlds_to_cs__FuncRval_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Statement_12, (MR_Integer) 2)));
              MR_Word ml_backend__mlds_to_cs__MaybeObject_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Statement_12, (MR_Integer) 3)));
              MR_Word ml_backend__mlds_to_cs__CallArgs_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Statement_12, (MR_Integer) 4)));
              MR_Word ml_backend__mlds_to_cs__Results_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Statement_12, (MR_Integer) 5)));
              MR_Word ml_backend__mlds_to_cs__IsTailCall_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Statement_12, (MR_Integer) 6)));
              MR_Word ml_backend__mlds_to_cs__ArgTypes_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Signature_43, (MR_Integer) 0)));
              MR_Word ml_backend__mlds_to_cs__RetTypes_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Signature_43, (MR_Integer) 1)));
              MR_Word ml_backend__mlds_to_cs__OutArgs_51;
              MR_String ml_backend__mlds_to_cs__CloseBracket_56;
              MR_Word ml_backend__mlds_to_cs__V_137_137 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              MR_Word ml_backend__mlds_to_cs__V_141_141;
              MR_Integer ml_backend__mlds_to_cs__V_142_142;
              MR_Word ml_backend__mlds_to_cs__V_164_164;
              MR_Word ml_backend__mlds_to_cs__V_166_166;
              MR_Word ml_backend__mlds_to_cs__V_176_176;
              MR_Word ml_backend__mlds_to_cs__V_392_392 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 0)));
              MR_Word ml_backend__mlds_to_cs__V_393_393 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) & (MR_Integer) 1);
              MR_Word ml_backend__mlds_to_cs__V_394_394 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
              MR_Word ml_backend__mlds_to_cs__V_395_395 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 2)));
              MR_String ml_backend__mlds_to_cs__V_396_396 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 3)));
              MR_Word ml_backend__mlds_to_cs__V_397_397 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 4)));
              MR_Word ml_backend__mlds_to_cs__V_398_398 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 5)));
              MR_Word ml_backend__mlds_to_cs__V_399_399 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 6)));
              MR_Word ml_backend__mlds_to_cs__V_400_400;
              MR_Word ml_backend__mlds_to_cs__V_401_401;
              MR_Word ml_backend__mlds_to_cs__V_402_402;
              MR_Word ml_backend__mlds_to_cs__V_403_403;
              MR_String ml_backend__mlds_to_cs__V_404_404;
              MR_Word ml_backend__mlds_to_cs__V_405_405;
              MR_Word ml_backend__mlds_to_cs__V_406_406;
              MR_Word ml_backend__mlds_to_cs__V_407_407;
              MR_Word ml_backend__mlds_to_cs__V_151_151;
              MR_Word ml_backend__mlds_to_cs__V_55_55;
              MR_Word ml_backend__mlds_to_cs__V_416_416;
              MR_Word ml_backend__mlds_to_cs__V_417_417;
              MR_Word ml_backend__mlds_to_cs__V_418_418;
              MR_Word ml_backend__mlds_to_cs__V_419_419;
              MR_String ml_backend__mlds_to_cs__V_420_420;
              MR_Word ml_backend__mlds_to_cs__V_421_421;
              MR_Word ml_backend__mlds_to_cs__V_422_422;
              MR_Word ml_backend__mlds_to_cs__V_423_423;

              {
                ml_backend__mlds_to_cs__indent_line_5_p_0(ml_backend__mlds_to_cs__V_137_137, ml_backend__mlds_to_cs__Context_13, ml_backend__mlds_to_cs__Indent_10);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "{\n");
              }
              ml_backend__mlds_to_cs__V_400_400 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 0)));
              ml_backend__mlds_to_cs__V_401_401 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) & (MR_Integer) 1);
              ml_backend__mlds_to_cs__V_141_141 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              ml_backend__mlds_to_cs__V_402_402 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
              ml_backend__mlds_to_cs__V_403_403 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 2)));
              ml_backend__mlds_to_cs__V_404_404 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 3)));
              ml_backend__mlds_to_cs__V_405_405 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 4)));
              ml_backend__mlds_to_cs__V_406_406 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 5)));
              ml_backend__mlds_to_cs__V_407_407 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 6)));
              ml_backend__mlds_to_cs__V_142_142 = (ml_backend__mlds_to_cs__Indent_10 + (MR_Integer) 1);
              {
                ml_backend__mlds_to_cs__indent_line_5_p_0(ml_backend__mlds_to_cs__V_141_141, ml_backend__mlds_to_cs__Context_13, ml_backend__mlds_to_cs__V_142_142);
              }
              if ((ml_backend__mlds_to_cs__Results_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                ml_backend__mlds_to_cs__OutArgs_51 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              else
                {
                  MR_Word ml_backend__mlds_to_cs__Lval_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__Results_47, (MR_Integer) 0)));
                  MR_Word ml_backend__mlds_to_cs__Lvals_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__Results_47, (MR_Integer) 1)));

                  {
                    ml_backend__mlds_to_cs__output_lval_4_p_0(ml_backend__mlds_to_cs__Info_9, ml_backend__mlds_to_cs__Lval_52);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " = ");
                  }
                  {
                    ml_backend__mlds_to_cs__OutArgs_51 = mercury__list__map_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0, (MR_Word) &ml_backend__mlds_to_cs_scalar_common_2[22], ml_backend__mlds_to_cs__Lvals_53);
                  }
                }
              ml_backend__mlds_to_cs__succeeded = ((((MR_tag((MR_Word) ml_backend__mlds_to_cs__FuncRval_44)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__FuncRval_44, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (ml_backend__mlds_to_cs__succeeded)
                {
                  ml_backend__mlds_to_cs__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__FuncRval_44, (MR_Integer) 1)));
                  ml_backend__mlds_to_cs__succeeded = ((((MR_tag((MR_Word) ml_backend__mlds_to_cs__V_151_151)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__V_151_151, (MR_Integer) 0)))) == (MR_Integer) 7)));
                  if (ml_backend__mlds_to_cs__succeeded)
                    ml_backend__mlds_to_cs__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__V_151_151, (MR_Integer) 1)));
                }
              if (ml_backend__mlds_to_cs__succeeded)
                ml_backend__mlds_to_cs__CloseBracket_56 = (MR_String) "";
              else
                {
                  MR_String ml_backend__mlds_to_cs__TypeString_57;

                  {
                    ml_backend__mlds_to_cs__TypeString_57 = ml_backend__mlds_to_cs__method_ptr_type_to_string_3_f_0(ml_backend__mlds_to_cs__Info_9, ml_backend__mlds_to_cs__ArgTypes_49, ml_backend__mlds_to_cs__RetTypes_50);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) "((");
                  }
                  {
                    mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__TypeString_57);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ") ");
                  }
                  ml_backend__mlds_to_cs__CloseBracket_56 = (MR_String) ")";
                }
              if ((ml_backend__mlds_to_cs__MaybeObject_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                }
              else
                {
                  MR_Word ml_backend__mlds_to_cs__Object_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__MaybeObject_45, (MR_Integer) 0)));

                  {
                    ml_backend__mlds_to_cs__output_bracketed_rval_4_p_0(ml_backend__mlds_to_cs__Info_9, ml_backend__mlds_to_cs__Object_58);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ".");
                  }
                }
              {
                ml_backend__mlds_to_cs__output_call_rval_4_p_0(ml_backend__mlds_to_cs__Info_9, ml_backend__mlds_to_cs__FuncRval_44);
              }
              {
                mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__CloseBracket_56);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
              }
              ml_backend__mlds_to_cs__TypeCtorInfo_519_519 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0;
              {
                ml_backend__mlds_to_cs__V_164_164 = mercury__list__f_43_43_2_f_0(ml_backend__mlds_to_cs__TypeCtorInfo_519_519, ml_backend__mlds_to_cs__CallArgs_46, ml_backend__mlds_to_cs__OutArgs_51);
              }
              {
                ml_backend__mlds_to_cs__V_166_166 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_166_166, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_8[5]));
                MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_166_166, 1) = ((MR_Box) (ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_95_91_51_93_95_48_8_p_0_2));
                MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_166_166, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_166_166, 3) = ((MR_Box) (ml_backend__mlds_to_cs__Info_9));
              }
              {
                mercury__io__write_list_5_p_0(ml_backend__mlds_to_cs__TypeCtorInfo_519_519, ml_backend__mlds_to_cs__V_164_164, (MR_String) ", ", ml_backend__mlds_to_cs__V_166_166);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ");\n");
              }
              switch (ml_backend__mlds_to_cs__IsTailCall_48) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word ml_backend__mlds_to_cs__V_170_170 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                    MR_Integer ml_backend__mlds_to_cs__V_171_171 = (ml_backend__mlds_to_cs__Indent_10 + (MR_Integer) 1);
                    MR_Word ml_backend__mlds_to_cs__V_408_408 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 0)));
                    MR_Word ml_backend__mlds_to_cs__V_409_409 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) & (MR_Integer) 1);
                    MR_Word ml_backend__mlds_to_cs__V_410_410 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                    MR_Word ml_backend__mlds_to_cs__V_411_411 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 2)));
                    MR_String ml_backend__mlds_to_cs__V_412_412 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 3)));
                    MR_Word ml_backend__mlds_to_cs__V_413_413 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 4)));
                    MR_Word ml_backend__mlds_to_cs__V_414_414 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 5)));
                    MR_Word ml_backend__mlds_to_cs__V_415_415 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 6)));

                    {
                      ml_backend__mlds_to_cs__indent_line_5_p_0(ml_backend__mlds_to_cs__V_170_170, ml_backend__mlds_to_cs__Context_13, ml_backend__mlds_to_cs__V_171_171);
                    }
                    {
                      mercury__io__write_string_3_p_0((MR_String) "throw new runtime.UnreachableDefault();\n");
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                  }
                  break;
                case (MR_Integer) 1:
                  {
                  }
                  break;
              }
              ml_backend__mlds_to_cs__V_416_416 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 0)));
              ml_backend__mlds_to_cs__V_417_417 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) & (MR_Integer) 1);
              ml_backend__mlds_to_cs__V_176_176 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              ml_backend__mlds_to_cs__V_418_418 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
              ml_backend__mlds_to_cs__V_419_419 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 2)));
              ml_backend__mlds_to_cs__V_420_420 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 3)));
              ml_backend__mlds_to_cs__V_421_421 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 4)));
              ml_backend__mlds_to_cs__V_422_422 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 5)));
              ml_backend__mlds_to_cs__V_423_423 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 6)));
              {
                ml_backend__mlds_to_cs__indent_line_5_p_0(ml_backend__mlds_to_cs__V_176_176, ml_backend__mlds_to_cs__Context_13, ml_backend__mlds_to_cs__Indent_10);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "}\n");
              }
              {
                *ml_backend__mlds_to_cs__ExitMethods_14 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__type_ctor_info_exit_method_0, ((MR_Box) ((MR_Integer) 4)));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word ml_backend__mlds_to_cs__Results_295 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Statement_12, (MR_Integer) 1)));

              if ((ml_backend__mlds_to_cs__Results_295 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  MR_Word ml_backend__mlds_to_cs__V_132_132 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                  MR_Word ml_backend__mlds_to_cs__V_424_424 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 0)));
                  MR_Word ml_backend__mlds_to_cs__V_425_425 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) & (MR_Integer) 1);
                  MR_Word ml_backend__mlds_to_cs__V_426_426 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                  MR_Word ml_backend__mlds_to_cs__V_427_427 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 2)));
                  MR_String ml_backend__mlds_to_cs__V_428_428 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 3)));
                  MR_Word ml_backend__mlds_to_cs__V_429_429 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 4)));
                  MR_Word ml_backend__mlds_to_cs__V_430_430 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 5)));
                  MR_Word ml_backend__mlds_to_cs__V_431_431 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 6)));

                  {
                    ml_backend__mlds_to_cs__indent_line_5_p_0(ml_backend__mlds_to_cs__V_132_132, ml_backend__mlds_to_cs__Context_13, ml_backend__mlds_to_cs__Indent_10);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) "return;\n");
                  }
                }
              else
                {
                  MR_Word ml_backend__mlds_to_cs__Rval_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__Results_295, (MR_Integer) 0)));
                  MR_Word ml_backend__mlds_to_cs__Rvals_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__Results_295, (MR_Integer) 1)));
                  MR_Word ml_backend__mlds_to_cs__V_122_122;
                  MR_Word ml_backend__mlds_to_cs__V_125_125;
                  MR_Integer ml_backend__mlds_to_cs__V_61_61;
                  MR_Box ml_backend__mlds_to_cs__conv3_V_61_61;
                  MR_Box ml_backend__mlds_to_cs__conv2_STATE_VARIABLE_IO_124_124;
                  MR_Word ml_backend__mlds_to_cs__V_432_432;
                  MR_Word ml_backend__mlds_to_cs__V_433_433;
                  MR_Word ml_backend__mlds_to_cs__V_434_434;
                  MR_Word ml_backend__mlds_to_cs__V_435_435;
                  MR_String ml_backend__mlds_to_cs__V_436_436;
                  MR_Word ml_backend__mlds_to_cs__V_437_437;
                  MR_Word ml_backend__mlds_to_cs__V_438_438;
                  MR_Word ml_backend__mlds_to_cs__V_439_439;

                  {
                    ml_backend__mlds_to_cs__V_122_122 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_122_122, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_15[0]));
                    MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_122_122, 1) = ((MR_Box) (ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_95_91_51_93_95_48_8_p_0_3));
                    MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_122_122, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_122_122, 3) = ((MR_Box) (ml_backend__mlds_to_cs__Info_9));
                    MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_122_122, 4) = ((MR_Box) (ml_backend__mlds_to_cs__Indent_10));
                  }
                  {
                    mercury__list__foldl2_6_p_2((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, ml_backend__mlds_to_cs__V_122_122, ml_backend__mlds_to_cs__Rvals_60, ((MR_Box) ((MR_Integer) 2)), &ml_backend__mlds_to_cs__conv3_V_61_61, ((MR_Box) ((MR_Integer) 0)), &ml_backend__mlds_to_cs__conv2_STATE_VARIABLE_IO_124_124);
                  }
                  ml_backend__mlds_to_cs__V_61_61 = ((MR_Integer) ml_backend__mlds_to_cs__conv3_V_61_61);
                  ml_backend__mlds_to_cs__V_432_432 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 0)));
                  ml_backend__mlds_to_cs__V_433_433 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) & (MR_Integer) 1);
                  ml_backend__mlds_to_cs__V_125_125 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                  ml_backend__mlds_to_cs__V_434_434 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                  ml_backend__mlds_to_cs__V_435_435 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 2)));
                  ml_backend__mlds_to_cs__V_436_436 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 3)));
                  ml_backend__mlds_to_cs__V_437_437 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 4)));
                  ml_backend__mlds_to_cs__V_438_438 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 5)));
                  ml_backend__mlds_to_cs__V_439_439 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 6)));
                  {
                    ml_backend__mlds_to_cs__indent_line_5_p_0(ml_backend__mlds_to_cs__V_125_125, ml_backend__mlds_to_cs__Context_13, ml_backend__mlds_to_cs__Indent_10);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) "return ");
                  }
                  {
                    ml_backend__mlds_to_cs__output_rval_4_p_0(ml_backend__mlds_to_cs__Info_9, ml_backend__mlds_to_cs__Rval_59);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ";\n");
                  }
                }
              {
                *ml_backend__mlds_to_cs__ExitMethods_14 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__type_ctor_info_exit_method_0, ((MR_Box) ((MR_Integer) 2)));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word ml_backend__mlds_to_cs__TypeCtorInfo_534_534;
              MR_Word ml_backend__mlds_to_cs__Stmt_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Statement_12, (MR_Integer) 2)));
              MR_Word ml_backend__mlds_to_cs__Handler_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Statement_12, (MR_Integer) 3)));
              MR_Word ml_backend__mlds_to_cs__TryExitMethods0_66;
              MR_Word ml_backend__mlds_to_cs__CatchExitMethods_67;
              MR_Word ml_backend__mlds_to_cs__V_73_73 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              MR_Word ml_backend__mlds_to_cs__V_77_77;
              MR_Integer ml_backend__mlds_to_cs__V_81_81;
              MR_Word ml_backend__mlds_to_cs__V_84_84;
              MR_Word ml_backend__mlds_to_cs__V_88_88;
              MR_Word ml_backend__mlds_to_cs__V_92_92;
              MR_Word ml_backend__mlds_to_cs__V_96_96;
              MR_Integer ml_backend__mlds_to_cs__V_97_97;
              MR_Integer ml_backend__mlds_to_cs__V_100_100;
              MR_Word ml_backend__mlds_to_cs__V_103_103;
              MR_Word ml_backend__mlds_to_cs__V_107_107;
              MR_Word ml_backend__mlds_to_cs___Ref_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Statement_12, (MR_Integer) 1)));
              MR_Word ml_backend__mlds_to_cs__V_456_456 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 0)));
              MR_Word ml_backend__mlds_to_cs__V_457_457 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) & (MR_Integer) 1);
              MR_Word ml_backend__mlds_to_cs__V_458_458 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
              MR_Word ml_backend__mlds_to_cs__V_459_459 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 2)));
              MR_String ml_backend__mlds_to_cs__V_460_460 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 3)));
              MR_Word ml_backend__mlds_to_cs__V_461_461 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 4)));
              MR_Word ml_backend__mlds_to_cs__V_462_462 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 5)));
              MR_Word ml_backend__mlds_to_cs__V_463_463 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 6)));
              MR_Word ml_backend__mlds_to_cs__V_464_464;
              MR_Word ml_backend__mlds_to_cs__V_465_465;
              MR_Word ml_backend__mlds_to_cs__V_466_466;
              MR_Word ml_backend__mlds_to_cs__V_467_467;
              MR_String ml_backend__mlds_to_cs__V_468_468;
              MR_Word ml_backend__mlds_to_cs__V_469_469;
              MR_Word ml_backend__mlds_to_cs__V_470_470;
              MR_Word ml_backend__mlds_to_cs__V_471_471;
              MR_Word ml_backend__mlds_to_cs__V_472_472;
              MR_Word ml_backend__mlds_to_cs__V_473_473;
              MR_Word ml_backend__mlds_to_cs__V_474_474;
              MR_Word ml_backend__mlds_to_cs__V_475_475;
              MR_String ml_backend__mlds_to_cs__V_476_476;
              MR_Word ml_backend__mlds_to_cs__V_477_477;
              MR_Word ml_backend__mlds_to_cs__V_478_478;
              MR_Word ml_backend__mlds_to_cs__V_479_479;
              MR_Word ml_backend__mlds_to_cs__V_480_480;
              MR_Word ml_backend__mlds_to_cs__V_481_481;
              MR_Word ml_backend__mlds_to_cs__V_482_482;
              MR_Word ml_backend__mlds_to_cs__V_483_483;
              MR_String ml_backend__mlds_to_cs__V_484_484;
              MR_Word ml_backend__mlds_to_cs__V_485_485;
              MR_Word ml_backend__mlds_to_cs__V_486_486;
              MR_Word ml_backend__mlds_to_cs__V_487_487;
              MR_Word ml_backend__mlds_to_cs__V_488_488;
              MR_Word ml_backend__mlds_to_cs__V_489_489;
              MR_Word ml_backend__mlds_to_cs__V_490_490;
              MR_Word ml_backend__mlds_to_cs__V_491_491;
              MR_String ml_backend__mlds_to_cs__V_492_492;
              MR_Word ml_backend__mlds_to_cs__V_493_493;
              MR_Word ml_backend__mlds_to_cs__V_494_494;
              MR_Word ml_backend__mlds_to_cs__V_495_495;
              MR_Word ml_backend__mlds_to_cs__V_496_496;
              MR_Word ml_backend__mlds_to_cs__V_497_497;
              MR_Word ml_backend__mlds_to_cs__V_498_498;
              MR_Word ml_backend__mlds_to_cs__V_499_499;
              MR_String ml_backend__mlds_to_cs__V_500_500;
              MR_Word ml_backend__mlds_to_cs__V_501_501;
              MR_Word ml_backend__mlds_to_cs__V_502_502;
              MR_Word ml_backend__mlds_to_cs__V_503_503;
              MR_Word ml_backend__mlds_to_cs__V_504_504;
              MR_Word ml_backend__mlds_to_cs__V_505_505;
              MR_Word ml_backend__mlds_to_cs__V_506_506;
              MR_Word ml_backend__mlds_to_cs__V_507_507;
              MR_String ml_backend__mlds_to_cs__V_508_508;
              MR_Word ml_backend__mlds_to_cs__V_509_509;
              MR_Word ml_backend__mlds_to_cs__V_510_510;
              MR_Word ml_backend__mlds_to_cs__V_511_511;

              {
                ml_backend__mlds_to_cs__indent_line_5_p_0(ml_backend__mlds_to_cs__V_73_73, ml_backend__mlds_to_cs__Context_13, ml_backend__mlds_to_cs__Indent_10);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "try\n");
              }
              ml_backend__mlds_to_cs__V_464_464 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 0)));
              ml_backend__mlds_to_cs__V_465_465 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) & (MR_Integer) 1);
              ml_backend__mlds_to_cs__V_77_77 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              ml_backend__mlds_to_cs__V_466_466 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
              ml_backend__mlds_to_cs__V_467_467 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 2)));
              ml_backend__mlds_to_cs__V_468_468 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 3)));
              ml_backend__mlds_to_cs__V_469_469 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 4)));
              ml_backend__mlds_to_cs__V_470_470 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 5)));
              ml_backend__mlds_to_cs__V_471_471 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 6)));
              {
                ml_backend__mlds_to_cs__indent_line_5_p_0(ml_backend__mlds_to_cs__V_77_77, ml_backend__mlds_to_cs__Context_13, ml_backend__mlds_to_cs__Indent_10);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "{\n");
              }
              ml_backend__mlds_to_cs__V_81_81 = (ml_backend__mlds_to_cs__Indent_10 + (MR_Integer) 1);
              {
                ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_97_116_101_109_101_110_116_95_95_91_51_93_95_48_7_p_0(ml_backend__mlds_to_cs__Info_9, ml_backend__mlds_to_cs__V_81_81, ml_backend__mlds_to_cs__Stmt_64, &ml_backend__mlds_to_cs__TryExitMethods0_66);
              }
              ml_backend__mlds_to_cs__V_472_472 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 0)));
              ml_backend__mlds_to_cs__V_473_473 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) & (MR_Integer) 1);
              ml_backend__mlds_to_cs__V_84_84 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              ml_backend__mlds_to_cs__V_474_474 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
              ml_backend__mlds_to_cs__V_475_475 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 2)));
              ml_backend__mlds_to_cs__V_476_476 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 3)));
              ml_backend__mlds_to_cs__V_477_477 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 4)));
              ml_backend__mlds_to_cs__V_478_478 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 5)));
              ml_backend__mlds_to_cs__V_479_479 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 6)));
              {
                ml_backend__mlds_to_cs__indent_line_5_p_0(ml_backend__mlds_to_cs__V_84_84, ml_backend__mlds_to_cs__Context_13, ml_backend__mlds_to_cs__Indent_10);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "}\n");
              }
              ml_backend__mlds_to_cs__V_480_480 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 0)));
              ml_backend__mlds_to_cs__V_481_481 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) & (MR_Integer) 1);
              ml_backend__mlds_to_cs__V_88_88 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              ml_backend__mlds_to_cs__V_482_482 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
              ml_backend__mlds_to_cs__V_483_483 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 2)));
              ml_backend__mlds_to_cs__V_484_484 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 3)));
              ml_backend__mlds_to_cs__V_485_485 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 4)));
              ml_backend__mlds_to_cs__V_486_486 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 5)));
              ml_backend__mlds_to_cs__V_487_487 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 6)));
              {
                ml_backend__mlds_to_cs__indent_line_5_p_0(ml_backend__mlds_to_cs__V_88_88, ml_backend__mlds_to_cs__Context_13, ml_backend__mlds_to_cs__Indent_10);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "catch (runtime.Commit commit_variable)\n");
              }
              ml_backend__mlds_to_cs__V_488_488 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 0)));
              ml_backend__mlds_to_cs__V_489_489 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) & (MR_Integer) 1);
              ml_backend__mlds_to_cs__V_92_92 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              ml_backend__mlds_to_cs__V_490_490 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
              ml_backend__mlds_to_cs__V_491_491 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 2)));
              ml_backend__mlds_to_cs__V_492_492 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 3)));
              ml_backend__mlds_to_cs__V_493_493 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 4)));
              ml_backend__mlds_to_cs__V_494_494 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 5)));
              ml_backend__mlds_to_cs__V_495_495 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 6)));
              {
                ml_backend__mlds_to_cs__indent_line_5_p_0(ml_backend__mlds_to_cs__V_92_92, ml_backend__mlds_to_cs__Context_13, ml_backend__mlds_to_cs__Indent_10);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "{\n");
              }
              ml_backend__mlds_to_cs__V_496_496 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 0)));
              ml_backend__mlds_to_cs__V_497_497 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) & (MR_Integer) 1);
              ml_backend__mlds_to_cs__V_96_96 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              ml_backend__mlds_to_cs__V_498_498 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
              ml_backend__mlds_to_cs__V_499_499 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 2)));
              ml_backend__mlds_to_cs__V_500_500 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 3)));
              ml_backend__mlds_to_cs__V_501_501 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 4)));
              ml_backend__mlds_to_cs__V_502_502 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 5)));
              ml_backend__mlds_to_cs__V_503_503 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 6)));
              ml_backend__mlds_to_cs__V_97_97 = (ml_backend__mlds_to_cs__Indent_10 + (MR_Integer) 1);
              {
                ml_backend__mlds_to_cs__indent_line_5_p_0(ml_backend__mlds_to_cs__V_96_96, ml_backend__mlds_to_cs__Context_13, ml_backend__mlds_to_cs__V_97_97);
              }
              ml_backend__mlds_to_cs__V_100_100 = (ml_backend__mlds_to_cs__Indent_10 + (MR_Integer) 1);
              {
                ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_97_116_101_109_101_110_116_95_95_91_51_93_95_48_7_p_0(ml_backend__mlds_to_cs__Info_9, ml_backend__mlds_to_cs__V_100_100, ml_backend__mlds_to_cs__Handler_65, &ml_backend__mlds_to_cs__CatchExitMethods_67);
              }
              ml_backend__mlds_to_cs__V_504_504 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 0)));
              ml_backend__mlds_to_cs__V_505_505 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) & (MR_Integer) 1);
              ml_backend__mlds_to_cs__V_103_103 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              ml_backend__mlds_to_cs__V_506_506 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
              ml_backend__mlds_to_cs__V_507_507 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 2)));
              ml_backend__mlds_to_cs__V_508_508 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 3)));
              ml_backend__mlds_to_cs__V_509_509 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 4)));
              ml_backend__mlds_to_cs__V_510_510 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 5)));
              ml_backend__mlds_to_cs__V_511_511 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 6)));
              {
                ml_backend__mlds_to_cs__indent_line_5_p_0(ml_backend__mlds_to_cs__V_103_103, ml_backend__mlds_to_cs__Context_13, ml_backend__mlds_to_cs__Indent_10);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "}\n");
              }
              ml_backend__mlds_to_cs__TypeCtorInfo_534_534 = (MR_Word) &ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__type_ctor_info_exit_method_0;
              {
                ml_backend__mlds_to_cs__V_107_107 = mercury__set__delete_2_f_0(ml_backend__mlds_to_cs__TypeCtorInfo_534_534, ml_backend__mlds_to_cs__TryExitMethods0_66, ((MR_Box) ((MR_Integer) 3)));
              }
              {
                *ml_backend__mlds_to_cs__ExitMethods_14 = mercury__set__union_2_f_0(ml_backend__mlds_to_cs__TypeCtorInfo_534_534, ml_backend__mlds_to_cs__V_107_107, ml_backend__mlds_to_cs__CatchExitMethods_67);
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ml_backend__mlds_to_cs__Ref_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Statement_12, (MR_Integer) 1)));
              MR_Word ml_backend__mlds_to_cs__V_109_109 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              MR_Word ml_backend__mlds_to_cs__V_114_114;
              MR_Word ml_backend__mlds_to_cs__V_440_440 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 0)));
              MR_Word ml_backend__mlds_to_cs__V_441_441 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) & (MR_Integer) 1);
              MR_Word ml_backend__mlds_to_cs__V_442_442 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
              MR_Word ml_backend__mlds_to_cs__V_443_443 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 2)));
              MR_String ml_backend__mlds_to_cs__V_444_444 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 3)));
              MR_Word ml_backend__mlds_to_cs__V_445_445 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 4)));
              MR_Word ml_backend__mlds_to_cs__V_446_446 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 5)));
              MR_Word ml_backend__mlds_to_cs__V_447_447 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 6)));
              MR_Word ml_backend__mlds_to_cs__V_448_448;
              MR_Word ml_backend__mlds_to_cs__V_449_449;
              MR_Word ml_backend__mlds_to_cs__V_450_450;
              MR_Word ml_backend__mlds_to_cs__V_451_451;
              MR_String ml_backend__mlds_to_cs__V_452_452;
              MR_Word ml_backend__mlds_to_cs__V_453_453;
              MR_Word ml_backend__mlds_to_cs__V_454_454;
              MR_Word ml_backend__mlds_to_cs__V_455_455;

              {
                ml_backend__mlds_to_cs__indent_line_5_p_0(ml_backend__mlds_to_cs__V_109_109, ml_backend__mlds_to_cs__Context_13, ml_backend__mlds_to_cs__Indent_10);
              }
              {
                ml_backend__mlds_to_cs__output_rval_4_p_0(ml_backend__mlds_to_cs__Info_9, ml_backend__mlds_to_cs__Ref_62);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) " = new runtime.Commit();\n");
              }
              ml_backend__mlds_to_cs__V_448_448 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 0)));
              ml_backend__mlds_to_cs__V_449_449 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) & (MR_Integer) 1);
              ml_backend__mlds_to_cs__V_114_114 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              ml_backend__mlds_to_cs__V_450_450 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
              ml_backend__mlds_to_cs__V_451_451 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 2)));
              ml_backend__mlds_to_cs__V_452_452 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 3)));
              ml_backend__mlds_to_cs__V_453_453 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 4)));
              ml_backend__mlds_to_cs__V_454_454 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 5)));
              ml_backend__mlds_to_cs__V_455_455 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 6)));
              {
                ml_backend__mlds_to_cs__indent_line_5_p_0(ml_backend__mlds_to_cs__V_114_114, ml_backend__mlds_to_cs__Context_13, ml_backend__mlds_to_cs__Indent_10);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "throw ");
              }
              {
                ml_backend__mlds_to_cs__output_rval_4_p_0(ml_backend__mlds_to_cs__Info_9, ml_backend__mlds_to_cs__Ref_62);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ";\n");
              }
              {
                *ml_backend__mlds_to_cs__ExitMethods_14 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__type_ctor_info_exit_method_0, ((MR_Box) ((MR_Integer) 3)));
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word ml_backend__mlds_to_cs__AtomicStatement_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Statement_12, (MR_Integer) 1)));

              {
                ml_backend__mlds_to_cs__output_atomic_stmt_6_p_0(ml_backend__mlds_to_cs__Info_9, ml_backend__mlds_to_cs__Indent_10, ml_backend__mlds_to_cs__AtomicStatement_68, ml_backend__mlds_to_cs__Context_13);
              }
              {
                *ml_backend__mlds_to_cs__ExitMethods_14 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__type_ctor_info_exit_method_0, ((MR_Box) ((MR_Integer) 4)));
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_97_116_101_109_101_110_116_95_95_91_51_93_95_48_7_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_8,
  MR_Integer ml_backend__mlds_to_cs__Indent_9,
  MR_Word ml_backend__mlds_to_cs__HeadVar__4_4,
  MR_Word * ml_backend__mlds_to_cs__ExitMethods_13)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Word ml_backend__mlds_to_cs__Statement_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__4_4, (MR_Integer) 0)));
    MR_Word ml_backend__mlds_to_cs__Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__4_4, (MR_Integer) 1)));

    {
      ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_95_91_51_93_95_48_8_p_0(ml_backend__mlds_to_cs__Info_8, ml_backend__mlds_to_cs__Indent_9, ml_backend__mlds_to_cs__Statement_11, ml_backend__mlds_to_cs__Context_12, ml_backend__mlds_to_cs__ExitMethods_13);
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_97_116_101_109_101_110_116_115_95_95_91_51_93_95_48_7_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_1,
  MR_Integer ml_backend__mlds_to_cs__Indent_2,
  MR_Word ml_backend__mlds_to_cs__HeadVar__4_4,
  MR_Word * ml_backend__mlds_to_cs__ExitMethods_5)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;

    if ((ml_backend__mlds_to_cs__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          *ml_backend__mlds_to_cs__ExitMethods_5 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__type_ctor_info_exit_method_0, ((MR_Box) ((MR_Integer) 4)));
        }
      }
    else
      {
        MR_Word ml_backend__mlds_to_cs__Statement_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__HeadVar__4_4, (MR_Integer) 0)));
        MR_Word ml_backend__mlds_to_cs__Statements_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__HeadVar__4_4, (MR_Integer) 1)));
        MR_Word ml_backend__mlds_to_cs__StmtExitMethods_23;

        {
          ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_97_116_101_109_101_110_116_95_95_91_51_93_95_48_7_p_0(ml_backend__mlds_to_cs__Info_1, ml_backend__mlds_to_cs__Indent_2, ml_backend__mlds_to_cs__Statement_19, &ml_backend__mlds_to_cs__StmtExitMethods_23);
        }
        {
          ml_backend__mlds_to_cs__succeeded = mercury__set__member_2_p_0((MR_Word) &ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__type_ctor_info_exit_method_0, ((MR_Box) ((MR_Integer) 4)), ml_backend__mlds_to_cs__StmtExitMethods_23);
        }
        if (ml_backend__mlds_to_cs__succeeded)
          {
            MR_Word ml_backend__mlds_to_cs__TypeCtorInfo_35_35;
            MR_Word ml_backend__mlds_to_cs__StmtsExitMethods_24;
            MR_Word ml_backend__mlds_to_cs__ExitMethods0_25;

            {
              ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_97_116_101_109_101_110_116_115_95_95_91_51_93_95_48_7_p_0(ml_backend__mlds_to_cs__Info_1, ml_backend__mlds_to_cs__Indent_2, ml_backend__mlds_to_cs__Statements_20, &ml_backend__mlds_to_cs__StmtsExitMethods_24);
            }
            ml_backend__mlds_to_cs__TypeCtorInfo_35_35 = (MR_Word) &ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__type_ctor_info_exit_method_0;
            {
              ml_backend__mlds_to_cs__ExitMethods0_25 = mercury__set__union_2_f_0(ml_backend__mlds_to_cs__TypeCtorInfo_35_35, ml_backend__mlds_to_cs__StmtExitMethods_23, ml_backend__mlds_to_cs__StmtsExitMethods_24);
            }
            {
              ml_backend__mlds_to_cs__succeeded = mercury__set__member_2_p_0(ml_backend__mlds_to_cs__TypeCtorInfo_35_35, ((MR_Box) ((MR_Integer) 4)), ml_backend__mlds_to_cs__StmtsExitMethods_24);
            }
            if (ml_backend__mlds_to_cs__succeeded)
              *ml_backend__mlds_to_cs__ExitMethods_5 = ml_backend__mlds_to_cs__ExitMethods0_25;
            else
              {
                {
                  *ml_backend__mlds_to_cs__ExitMethods_5 = mercury__set__delete_2_f_0(ml_backend__mlds_to_cs__TypeCtorInfo_35_35, ml_backend__mlds_to_cs__ExitMethods0_25, ((MR_Box) ((MR_Integer) 4)));
                }
              }
          }
        else
          *ml_backend__mlds_to_cs__ExitMethods_5 = ml_backend__mlds_to_cs__StmtExitMethods_23;
      }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_101_110_117_109_95_99_111_110_115_116_97_110_116_95_95_91_51_93_95_48_6_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_7,
  MR_Integer ml_backend__mlds_to_cs__Indent_8,
  MR_Word ml_backend__mlds_to_cs__Defn_10)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Word ml_backend__mlds_to_cs__Name_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Defn_10, (MR_Integer) 0)));
    MR_Word ml_backend__mlds_to_cs__DefnBody_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Defn_10, (MR_Integer) 3)));
    MR_Word ml_backend__mlds_to_cs___Context_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Defn_10, (MR_Integer) 1)));
    MR_Word ml_backend__mlds_to_cs___Flags_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Defn_10, (MR_Integer) 2)));
    MR_Word ml_backend__mlds_to_cs__Initializer_17;
    MR_Word ml_backend__mlds_to_cs___Type_16;
    MR_Word ml_backend__mlds_to_cs___GCStatement_18;

    ml_backend__mlds_to_cs__succeeded = ((MR_tag((MR_Word) ml_backend__mlds_to_cs__DefnBody_15)) == (MR_mktag((MR_Integer) 1)));
    if (ml_backend__mlds_to_cs__succeeded)
      {
        ml_backend__mlds_to_cs___Type_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__DefnBody_15, (MR_Integer) 0)));
        ml_backend__mlds_to_cs__Initializer_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__DefnBody_15, (MR_Integer) 1)));
        ml_backend__mlds_to_cs___GCStatement_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__DefnBody_15, (MR_Integer) 2)));
        switch (MR_tag((MR_Word) ml_backend__mlds_to_cs__Initializer_17)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String ml_backend__mlds_to_cs__V_31_31;

              {
                ml_backend__mlds_to_cs__V_31_31 = mercury__string__string_1_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, ((MR_Box) (ml_backend__mlds_to_cs__Initializer_17)));
              }
              {
                mercury__require__unexpected_3_p_0((MR_String) "ml_backend.mlds_to_cs", (MR_String) "predicate \140ml_backend.mlds_to_cs.output_enum_constant\'/6", ml_backend__mlds_to_cs__V_31_31);
                return;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ml_backend__mlds_to_cs__Rval_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__Initializer_17, (MR_Integer) 0)));
              MR_Integer ml_backend__mlds_to_cs__N_20;
              MR_Word ml_backend__mlds_to_cs__V_36_36;
              MR_Word ml_backend__mlds_to_cs__V_21_21;

              {
                ml_backend__mlds_to_cs__indent_line_3_p_0(ml_backend__mlds_to_cs__Indent_8);
              }
              {
                ml_backend__mlds_to_cs__output_name_3_p_0(ml_backend__mlds_to_cs__Name_12);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) " = ");
              }
              ml_backend__mlds_to_cs__succeeded = ((((MR_tag((MR_Word) ml_backend__mlds_to_cs__Rval_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Rval_19, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (ml_backend__mlds_to_cs__succeeded)
                {
                  ml_backend__mlds_to_cs__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Rval_19, (MR_Integer) 1)));
                  ml_backend__mlds_to_cs__succeeded = ((((MR_tag((MR_Word) ml_backend__mlds_to_cs__V_36_36)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__V_36_36, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (ml_backend__mlds_to_cs__succeeded)
                    {
                      ml_backend__mlds_to_cs__N_20 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__V_36_36, (MR_Integer) 1)));
                      ml_backend__mlds_to_cs__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__V_36_36, (MR_Integer) 2)));
                    }
                }
              if (ml_backend__mlds_to_cs__succeeded)
                {
                  mercury__io__write_int_3_p_0(ml_backend__mlds_to_cs__N_20);
                }
              else
                {
                  MR_String ml_backend__mlds_to_cs__String_22;
                  MR_Word ml_backend__mlds_to_cs__Type_23;
                  MR_Word ml_backend__mlds_to_cs__V_38_38;
                  MR_Word ml_backend__mlds_to_cs__V_39_39;

                  ml_backend__mlds_to_cs__succeeded = ((((MR_tag((MR_Word) ml_backend__mlds_to_cs__Rval_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Rval_19, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (ml_backend__mlds_to_cs__succeeded)
                    {
                      ml_backend__mlds_to_cs__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Rval_19, (MR_Integer) 1)));
                      ml_backend__mlds_to_cs__succeeded = ((((MR_tag((MR_Word) ml_backend__mlds_to_cs__V_38_38)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__V_38_38, (MR_Integer) 0)))) == (MR_Integer) 5)));
                      if (ml_backend__mlds_to_cs__succeeded)
                        {
                          ml_backend__mlds_to_cs__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__V_38_38, (MR_Integer) 1)));
                          ml_backend__mlds_to_cs__String_22 = ((MR_String) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__V_38_38, (MR_Integer) 2)));
                          ml_backend__mlds_to_cs__Type_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__V_38_38, (MR_Integer) 3)));
                          ml_backend__mlds_to_cs__succeeded = (ml_backend__mlds_to_cs__V_39_39 == (MR_Integer) 1);
                        }
                    }
                  if (ml_backend__mlds_to_cs__succeeded)
                    {
                      {
                        mercury__io__write_string_3_p_0((MR_String) "(");
                      }
                      {
                        ml_backend__mlds_to_cs__output_type_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Type_23);
                      }
                      {
                        mercury__io__write_string_3_p_0((MR_String) ") ");
                      }
                      {
                        mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__String_22);
                      }
                    }
                  else
                    {
                      MR_String ml_backend__mlds_to_cs__V_48_48;

                      {
                        ml_backend__mlds_to_cs__V_48_48 = mercury__string__string_1_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0, ((MR_Box) (ml_backend__mlds_to_cs__Rval_19)));
                      }
                      {
                        mercury__require__unexpected_3_p_0((MR_String) "ml_backend.mlds_to_cs", (MR_String) "predicate \140ml_backend.mlds_to_cs.output_enum_constant\'/6", ml_backend__mlds_to_cs__V_48_48);
                        return;
                      }
                    }
                }
              {
                mercury__io__write_string_3_p_0((MR_String) ",");
              }
            }
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            {
              MR_String ml_backend__mlds_to_cs__V_31_31;

              {
                ml_backend__mlds_to_cs__V_31_31 = mercury__string__string_1_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, ((MR_Box) (ml_backend__mlds_to_cs__Initializer_17)));
              }
              {
                mercury__require__unexpected_3_p_0((MR_String) "ml_backend.mlds_to_cs", (MR_String) "predicate \140ml_backend.mlds_to_cs.output_enum_constant\'/6", ml_backend__mlds_to_cs__V_31_31);
                return;
              }
            }
            break;
        }
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "ml_backend.mlds_to_cs", (MR_String) "predicate \140ml_backend.mlds_to_cs.output_enum_constant\'/6", (MR_String) "definition body was not data");
          return;
        }
      }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_114_99_95_115_116_97_114_116_95_95_91_52_93_95_48_8_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3)
{
  {
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;

    {
      ml_backend__mlds_to_cs__output_csharp_decl_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_114_99_95_115_116_97_114_116_95_95_91_52_93_95_48_8_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_9,
  MR_Integer ml_backend__mlds_to_cs__Indent_10,
  MR_Word ml_backend__mlds_to_cs__MercuryModuleName_11,
  MR_Word ml_backend__mlds_to_cs__ForeignDecls_13,
  MR_Word ml_backend__mlds_to_cs__Defns_14)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_String ml_backend__mlds_to_cs__ClassName_16;
    MR_Word ml_backend__mlds_to_cs__V_30_30;
    MR_String ml_backend__mlds_to_cs__Version_50;
    MR_String ml_backend__mlds_to_cs__Fullarch_51;
    MR_String ml_backend__mlds_to_cs__SourceFileName_52;
    MR_Word ml_backend__mlds_to_cs__V_71_71;
    MR_Word ml_backend__mlds_to_cs__V_72_72;
    MR_Word ml_backend__mlds_to_cs__V_73_73;
    MR_Word ml_backend__mlds_to_cs__V_74_74;
    MR_Word ml_backend__mlds_to_cs__V_75_75;
    MR_Word ml_backend__mlds_to_cs__V_76_76;
    MR_Word ml_backend__mlds_to_cs__V_77_77;
    MR_Word ml_backend__mlds_to_cs__V_78_78;

    {
      mercury__library__version_2_p_0(&ml_backend__mlds_to_cs__Version_50, &ml_backend__mlds_to_cs__Fullarch_51);
    }
    ml_backend__mlds_to_cs__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 0)));
    ml_backend__mlds_to_cs__V_72_72 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) & (MR_Integer) 1);
    ml_backend__mlds_to_cs__V_73_73 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    ml_backend__mlds_to_cs__V_74_74 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    ml_backend__mlds_to_cs__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 2)));
    ml_backend__mlds_to_cs__SourceFileName_52 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 3)));
    ml_backend__mlds_to_cs__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 4)));
    ml_backend__mlds_to_cs__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 5)));
    ml_backend__mlds_to_cs__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_9, (MR_Integer) 6)));
    {
      mercury__io__write_string_3_p_0((MR_String) "//\n//\n// Automatically generated from ");
    }
    {
      mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__SourceFileName_52);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " by the Mercury Compiler,\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "// version ");
    }
    {
      mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__Version_50);
    }
    {
      mercury__io__nl_2_p_0();
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "// configured for ");
    }
    {
      mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__Fullarch_51);
    }
    {
      mercury__io__nl_2_p_0();
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "//\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "//\n");
    }
    {
      mercury__io__nl_2_p_0();
    }
    {
      ml_backend__mlds_to_cs__indent_line_3_p_0(ml_backend__mlds_to_cs__Indent_10);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "/* :- module ");
    }
    {
      parse_tree__prog_out__write_sym_name_3_p_0(ml_backend__mlds_to_cs__MercuryModuleName_11);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ". */\n");
    }
    {
      ml_backend__mlds_to_cs__indent_line_3_p_0(ml_backend__mlds_to_cs__Indent_10);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "namespace mercury {\n\n");
    }
    {
      ml_backend__mlds_to_cs__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_30_30, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_4[7]));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_30_30, 1) = ((MR_Box) (ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_114_99_95_115_116_97_114_116_95_95_91_52_93_95_48_8_p_0_1));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_30_30, 3) = ((MR_Box) (ml_backend__mlds_to_cs__Info_9));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_30_30, 4) = ((MR_Box) (ml_backend__mlds_to_cs__Indent_10));
    }
    {
      mercury__io__write_list_5_p_0((MR_Word) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0, ml_backend__mlds_to_cs__ForeignDecls_13, (MR_String) "\n", ml_backend__mlds_to_cs__V_30_30);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "public static class ");
    }
    {
      parse_tree__java_names__mangle_sym_name_for_csharp_4_p_0(ml_backend__mlds_to_cs__MercuryModuleName_11, (MR_Integer) 0, (MR_String) "__", &ml_backend__mlds_to_cs__ClassName_16);
    }
    {
      mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__ClassName_16);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " {\n");
    }
    {
      ml_backend__mlds_to_cs__succeeded = ml_backend__ml_util__defns_contain_main_1_p_0(ml_backend__mlds_to_cs__Defns_14);
    }
    if (ml_backend__mlds_to_cs__succeeded)
      {
        MR_Integer ml_backend__mlds_to_cs__V_39_39 = (ml_backend__mlds_to_cs__Indent_10 + (MR_Integer) 1);

        {
          ml_backend__mlds_to_cs__write_main_driver_4_p_0(ml_backend__mlds_to_cs__V_39_39, ml_backend__mlds_to_cs__ClassName_16);
        }
      }
    else
      {
      }
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_cs__IntroducedFrom__pred__output_rval_const__3777__1_2_p_0(
  MR_Word ml_backend__mlds_to_cs__Lang_10,
  MR_Word ml_backend__mlds_to_cs__HeadVar__2_44)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded = (ml_backend__mlds_to_cs__Lang_10 == ml_backend__mlds_to_cs__HeadVar__2_44);

    return ml_backend__mlds_to_cs__succeeded;
  }
}

static MR_Word MR_CALL 
ml_backend__mlds_to_cs__IntroducedFrom__func__output_stmt__2863__1_1_f_0(
  MR_Word ml_backend__mlds_to_cs__LambdaHeadVar__1_149)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Word ml_backend__mlds_to_cs__LambdaHeadVar__2_150;

    {
      ml_backend__mlds_to_cs__LambdaHeadVar__2_150 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__LambdaHeadVar__2_150, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__LambdaHeadVar__2_150, 1) = ((MR_Box) (ml_backend__mlds_to_cs__LambdaHeadVar__1_149));
    }
    return ml_backend__mlds_to_cs__LambdaHeadVar__2_150;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__IntroducedFrom__pred__generic_args_types_to_string__2447__1_3_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_4,
  MR_Word ml_backend__mlds_to_cs__LambdaHeadVar__1_16,
  MR_String * ml_backend__mlds_to_cs__LambdaHeadVar__2_17)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Word ml_backend__mlds_to_cs__ModuleInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_4, (MR_Integer) 0)));
    MR_Word ml_backend__mlds_to_cs__MLDS_ArgType_13;
    MR_Word ml_backend__mlds_to_cs__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_4, (MR_Integer) 1)))) & (MR_Integer) 1);
    MR_Word ml_backend__mlds_to_cs__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_4, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word ml_backend__mlds_to_cs__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_4, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word ml_backend__mlds_to_cs__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_4, (MR_Integer) 2)));
    MR_String ml_backend__mlds_to_cs__V_28_28 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_4, (MR_Integer) 3)));
    MR_Word ml_backend__mlds_to_cs__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_4, (MR_Integer) 4)));
    MR_Word ml_backend__mlds_to_cs__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_4, (MR_Integer) 5)));
    MR_Word ml_backend__mlds_to_cs__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_4, (MR_Integer) 6)));

    {
      ml_backend__mlds_to_cs__MLDS_ArgType_13 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__mlds_to_cs__ModuleInfo_12, ml_backend__mlds_to_cs__LambdaHeadVar__1_16);
    }
    {
      ml_backend__mlds_to_cs__boxed_type_to_string_3_p_0(ml_backend__mlds_to_cs__Info_4, ml_backend__mlds_to_cs__MLDS_ArgType_13, ml_backend__mlds_to_cs__LambdaHeadVar__2_17);
    }
  }
}

static MR_Word MR_CALL 
ml_backend__mlds_to_cs__IntroducedFrom__func__type_to_string__2312__1_1_f_0(
  MR_Word ml_backend__mlds_to_cs__LambdaHeadVar__1_44)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Word ml_backend__mlds_to_cs__LambdaHeadVar__2_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__LambdaHeadVar__1_44, (MR_Integer) 1)));
    MR_Word ml_backend__mlds_to_cs__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__LambdaHeadVar__1_44, (MR_Integer) 0)));
    MR_Word ml_backend__mlds_to_cs__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__LambdaHeadVar__1_44, (MR_Integer) 2)));

    return ml_backend__mlds_to_cs__LambdaHeadVar__2_45;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__IntroducedFrom__pred__output_initializer_body_list__1710__1_4_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_5,
  MR_Word ml_backend__mlds_to_cs__LambdaHeadVar__1_16)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;

    {
      ml_backend__mlds_to_cs__output_initializer_body_5_p_0(ml_backend__mlds_to_cs__Info_5, ml_backend__mlds_to_cs__LambdaHeadVar__1_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__IntroducedFrom__pred__output_static_constructor__824__1_4_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3)
{
  {
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;

    {
      mercury__io__write_string_3_p_0(((MR_String) ml_backend__mlds_to_cs__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__IntroducedFrom__pred__output_static_constructor__824__1_4_p_0(
  MR_Integer ml_backend__mlds_to_cs__Indent_8,
  MR_String ml_backend__mlds_to_cs__LambdaHeadVar__1_41)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Integer ml_backend__mlds_to_cs__V_44_44 = (ml_backend__mlds_to_cs__Indent_8 + (MR_Integer) 1);
    MR_Word ml_backend__mlds_to_cs__V_48_48;
    MR_Word ml_backend__mlds_to_cs__V_51_51;
    MR_Word ml_backend__mlds_to_cs__V_53_53;
    MR_Box ml_backend__mlds_to_cs__conv0_LambdaHeadVar__3_43;

    {
      ml_backend__mlds_to_cs__indent_line_3_p_0(ml_backend__mlds_to_cs__V_44_44);
    }
    {
      ml_backend__mlds_to_cs__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__V_53_53, 0) = ((MR_Box) (ml_backend__mlds_to_cs__LambdaHeadVar__1_41));
      MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_cs_scalar_common_1[20])));
    }
    {
      ml_backend__mlds_to_cs__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__V_51_51, 0) = ((MR_Box) ((MR_String) "(sender, ev) => "));
      MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__V_51_51, 1) = ((MR_Box) (ml_backend__mlds_to_cs__V_53_53));
    }
    {
      ml_backend__mlds_to_cs__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__V_48_48, 0) = ((MR_Box) ((MR_String) "System.AppDomain.CurrentDomain.ProcessExit += "));
      MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__V_48_48, 1) = ((MR_Box) (ml_backend__mlds_to_cs__V_51_51));
    }
    {
      mercury__list__foldl_4_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &ml_backend__mlds_to_cs_scalar_common_2[21], ml_backend__mlds_to_cs__V_48_48, ((MR_Box) ((MR_Integer) 0)), &ml_backend__mlds_to_cs__conv0_LambdaHeadVar__3_43);
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__IntroducedFrom__pred__output_static_constructor__818__1_4_p_0(
  MR_Integer ml_backend__mlds_to_cs__Indent_8,
  MR_String ml_backend__mlds_to_cs__LambdaHeadVar__1_29)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Integer ml_backend__mlds_to_cs__V_32_32 = (ml_backend__mlds_to_cs__Indent_8 + (MR_Integer) 1);

    {
      ml_backend__mlds_to_cs__indent_line_3_p_0(ml_backend__mlds_to_cs__V_32_32);
    }
    {
      mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__LambdaHeadVar__1_29);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "();\n");
    }
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_cs__IntroducedFrom__pred__output_export__321__1_2_p_0(
  MR_Word ml_backend__mlds_to_cs__Lang_10,
  MR_Word ml_backend__mlds_to_cs__HeadVar__2_37)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded = (ml_backend__mlds_to_cs__Lang_10 == ml_backend__mlds_to_cs__HeadVar__2_37);

    return ml_backend__mlds_to_cs__succeeded;
  }
}

static MR_Word MR_CALL 
ml_backend__mlds_to_cs__IntroducedFrom__func__output_csharp_src_file__154__1_1_f_0(
  MR_Word ml_backend__mlds_to_cs__LambdaHeadVar__1_48)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Word ml_backend__mlds_to_cs__LambdaHeadVar__2_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__LambdaHeadVar__1_48, (MR_Integer) 4)));
    MR_Word ml_backend__mlds_to_cs__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__LambdaHeadVar__1_48, (MR_Integer) 0)));
    MR_Word ml_backend__mlds_to_cs__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__LambdaHeadVar__1_48, (MR_Integer) 1)));
    MR_Word ml_backend__mlds_to_cs__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__LambdaHeadVar__1_48, (MR_Integer) 2)));
    MR_Word ml_backend__mlds_to_cs__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__LambdaHeadVar__1_48, (MR_Integer) 3)));

    return ml_backend__mlds_to_cs__LambdaHeadVar__2_49;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs____Compare____output_generics_0_0(
  MR_Word * ml_backend__mlds_to_cs__HeadVar__1_1,
  MR_Word ml_backend__mlds_to_cs__HeadVar__2_2,
  MR_Word ml_backend__mlds_to_cs__HeadVar__3_3)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Integer ml_backend__mlds_to_cs__Cast_HeadVar1_4 = (MR_Integer) ml_backend__mlds_to_cs__HeadVar__2_2;
    MR_Integer ml_backend__mlds_to_cs__Cast_HeadVar2_5 = (MR_Integer) ml_backend__mlds_to_cs__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(ml_backend__mlds_to_cs__HeadVar__1_1, ml_backend__mlds_to_cs__Cast_HeadVar1_4, ml_backend__mlds_to_cs__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_cs____Unify____output_generics_0_0(
  MR_Word ml_backend__mlds_to_cs__HeadVar__2_1,
  MR_Word ml_backend__mlds_to_cs__HeadVar__2_2)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded = (ml_backend__mlds_to_cs__HeadVar__2_1 == ml_backend__mlds_to_cs__HeadVar__2_2);

    return ml_backend__mlds_to_cs__succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs____Compare____output_aux_0_0(
  MR_Word * ml_backend__mlds_to_cs__HeadVar__1_1,
  MR_Word ml_backend__mlds_to_cs__HeadVar__2_2,
  MR_Word ml_backend__mlds_to_cs__HeadVar__3_3)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Integer ml_backend__mlds_to_cs__CastX_12 = (MR_Integer) ml_backend__mlds_to_cs__HeadVar__2_2;
    MR_Integer ml_backend__mlds_to_cs__CastY_13 = (MR_Integer) ml_backend__mlds_to_cs__HeadVar__3_3;

    ml_backend__mlds_to_cs__succeeded = (ml_backend__mlds_to_cs__CastX_12 == ml_backend__mlds_to_cs__CastY_13);
    if (ml_backend__mlds_to_cs__succeeded)
      *ml_backend__mlds_to_cs__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) ml_backend__mlds_to_cs__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(ml_backend__mlds_to_cs__HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_tag((MR_Word) ml_backend__mlds_to_cs__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(ml_backend__mlds_to_cs__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *ml_backend__mlds_to_cs__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      *ml_backend__mlds_to_cs__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 2:
                      *ml_backend__mlds_to_cs__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *ml_backend__mlds_to_cs__HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              switch (MR_tag((MR_Word) ml_backend__mlds_to_cs__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(ml_backend__mlds_to_cs__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *ml_backend__mlds_to_cs__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *ml_backend__mlds_to_cs__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 2:
                      *ml_backend__mlds_to_cs__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *ml_backend__mlds_to_cs__HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
            case (MR_Integer) 2:
              switch (MR_tag((MR_Word) ml_backend__mlds_to_cs__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(ml_backend__mlds_to_cs__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *ml_backend__mlds_to_cs__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *ml_backend__mlds_to_cs__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *ml_backend__mlds_to_cs__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *ml_backend__mlds_to_cs__HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ml_backend__mlds_to_cs__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) ml_backend__mlds_to_cs__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(ml_backend__mlds_to_cs__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *ml_backend__mlds_to_cs__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *ml_backend__mlds_to_cs__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *ml_backend__mlds_to_cs__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ml_backend__mlds_to_cs__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    ml_backend__mlds____Compare____mlds_entity_name_0_0(ml_backend__mlds_to_cs__HeadVar__1_1, ml_backend__mlds_to_cs__V_15_15, ml_backend__mlds_to_cs__V_7_7);
                  }
                }
                break;
            }
          }
          break;
      }
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_cs____Unify____output_aux_0_0(
  MR_Word ml_backend__mlds_to_cs__HeadVar__1_1,
  MR_Word ml_backend__mlds_to_cs__HeadVar__2_2)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Integer ml_backend__mlds_to_cs__CastX_11 = (MR_Integer) ml_backend__mlds_to_cs__HeadVar__1_1;
    MR_Integer ml_backend__mlds_to_cs__CastY_12 = (MR_Integer) ml_backend__mlds_to_cs__HeadVar__2_2;

    ml_backend__mlds_to_cs__succeeded = (ml_backend__mlds_to_cs__CastX_11 == ml_backend__mlds_to_cs__CastY_12);
    if (ml_backend__mlds_to_cs__succeeded)
      ml_backend__mlds_to_cs__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) ml_backend__mlds_to_cs__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(ml_backend__mlds_to_cs__HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer ml_backend__mlds_to_cs__CastX_3 = (MR_Integer) ml_backend__mlds_to_cs__HeadVar__1_1;
                MR_Integer ml_backend__mlds_to_cs__CastY_4 = (MR_Integer) ml_backend__mlds_to_cs__HeadVar__2_2;

                ml_backend__mlds_to_cs__succeeded = (ml_backend__mlds_to_cs__CastY_4 == ml_backend__mlds_to_cs__CastX_3);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer ml_backend__mlds_to_cs__CastX_7 = (MR_Integer) ml_backend__mlds_to_cs__HeadVar__1_1;
                MR_Integer ml_backend__mlds_to_cs__CastY_8 = (MR_Integer) ml_backend__mlds_to_cs__HeadVar__2_2;

                ml_backend__mlds_to_cs__succeeded = (ml_backend__mlds_to_cs__CastY_8 == ml_backend__mlds_to_cs__CastX_7);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Integer ml_backend__mlds_to_cs__CastX_9 = (MR_Integer) ml_backend__mlds_to_cs__HeadVar__1_1;
                MR_Integer ml_backend__mlds_to_cs__CastY_10 = (MR_Integer) ml_backend__mlds_to_cs__HeadVar__2_2;

                ml_backend__mlds_to_cs__succeeded = (ml_backend__mlds_to_cs__CastY_10 == ml_backend__mlds_to_cs__CastX_9);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ml_backend__mlds_to_cs__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ml_backend__mlds_to_cs__V_6_6;

            ml_backend__mlds_to_cs__succeeded = ((MR_tag((MR_Word) ml_backend__mlds_to_cs__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (ml_backend__mlds_to_cs__succeeded)
              {
                ml_backend__mlds_to_cs__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__HeadVar__2_2, (MR_Integer) 0)));
                {
                  ml_backend__mlds_to_cs__succeeded = ml_backend__mlds____Unify____mlds_entity_name_0_0(ml_backend__mlds_to_cs__V_5_5, ml_backend__mlds_to_cs__V_6_6);
                }
              }
          }
          break;
      }
    return ml_backend__mlds_to_cs__succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs____Compare____indent_0_0(
  MR_Word * ml_backend__mlds_to_cs__HeadVar__1_1,
  MR_Integer ml_backend__mlds_to_cs__HeadVar__2_2,
  MR_Integer ml_backend__mlds_to_cs__HeadVar__3_3)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Integer ml_backend__mlds_to_cs__Cast_HeadVar1_4 = ml_backend__mlds_to_cs__HeadVar__2_2;
    MR_Integer ml_backend__mlds_to_cs__Cast_HeadVar2_5 = ml_backend__mlds_to_cs__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(ml_backend__mlds_to_cs__HeadVar__1_1, ml_backend__mlds_to_cs__Cast_HeadVar1_4, ml_backend__mlds_to_cs__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_cs____Unify____indent_0_0(
  MR_Integer ml_backend__mlds_to_cs__HeadVar__1_1,
  MR_Integer ml_backend__mlds_to_cs__HeadVar__2_2)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Integer ml_backend__mlds_to_cs__Cast_HeadVar1_3 = ml_backend__mlds_to_cs__HeadVar__1_1;
    MR_Integer ml_backend__mlds_to_cs__Cast_HeadVar2_4 = ml_backend__mlds_to_cs__HeadVar__2_2;

    ml_backend__mlds_to_cs__succeeded = (ml_backend__mlds_to_cs__Cast_HeadVar1_3 == ml_backend__mlds_to_cs__Cast_HeadVar2_4);
    return ml_backend__mlds_to_cs__succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs____Compare____func_info_0_0(
  MR_Word * ml_backend__mlds_to_cs__HeadVar__1_1,
  MR_Word ml_backend__mlds_to_cs__HeadVar__2_2,
  MR_Word ml_backend__mlds_to_cs__HeadVar__3_3)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Integer ml_backend__mlds_to_cs__CastX_6 = (MR_Integer) ml_backend__mlds_to_cs__HeadVar__2_2;
    MR_Integer ml_backend__mlds_to_cs__CastY_7 = (MR_Integer) ml_backend__mlds_to_cs__HeadVar__3_3;

    ml_backend__mlds_to_cs__succeeded = (ml_backend__mlds_to_cs__CastX_6 == ml_backend__mlds_to_cs__CastY_7);
    if (ml_backend__mlds_to_cs__succeeded)
      *ml_backend__mlds_to_cs__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word ml_backend__mlds_to_cs__V_4_4 = (MR_Word) ml_backend__mlds_to_cs__HeadVar__2_2;
        MR_Word ml_backend__mlds_to_cs__V_5_5 = (MR_Word) ml_backend__mlds_to_cs__HeadVar__3_3;

        {
          ml_backend__mlds____Compare____mlds_func_params_0_0(ml_backend__mlds_to_cs__HeadVar__1_1, ml_backend__mlds_to_cs__V_4_4, ml_backend__mlds_to_cs__V_5_5);
        }
      }
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_cs____Unify____func_info_0_0(
  MR_Word ml_backend__mlds_to_cs__HeadVar__1_1,
  MR_Word ml_backend__mlds_to_cs__HeadVar__2_2)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Integer ml_backend__mlds_to_cs__CastX_5 = (MR_Integer) ml_backend__mlds_to_cs__HeadVar__1_1;
    MR_Integer ml_backend__mlds_to_cs__CastY_6 = (MR_Integer) ml_backend__mlds_to_cs__HeadVar__2_2;

    ml_backend__mlds_to_cs__succeeded = (ml_backend__mlds_to_cs__CastX_5 == ml_backend__mlds_to_cs__CastY_6);
    if (ml_backend__mlds_to_cs__succeeded)
      ml_backend__mlds_to_cs__succeeded = MR_TRUE;
    else
      {
        MR_Word ml_backend__mlds_to_cs__V_3_3 = (MR_Word) ml_backend__mlds_to_cs__HeadVar__1_1;
        MR_Word ml_backend__mlds_to_cs__V_4_4 = (MR_Word) ml_backend__mlds_to_cs__HeadVar__2_2;

        {
          ml_backend__mlds_to_cs__succeeded = ml_backend__mlds____Unify____mlds_func_params_0_0(ml_backend__mlds_to_cs__V_3_3, ml_backend__mlds_to_cs__V_4_4);
        }
      }
    return ml_backend__mlds_to_cs__succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs____Compare____exit_methods_0_0(
  MR_Word * ml_backend__mlds_to_cs__HeadVar__1_1,
  MR_Word ml_backend__mlds_to_cs__HeadVar__2_2,
  MR_Word ml_backend__mlds_to_cs__HeadVar__3_3)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Word ml_backend__mlds_to_cs__Cast_HeadVar1_4 = ml_backend__mlds_to_cs__HeadVar__2_2;
    MR_Word ml_backend__mlds_to_cs__Cast_HeadVar2_5 = ml_backend__mlds_to_cs__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__mlds_to_cs_scalar_common_1[6], ml_backend__mlds_to_cs__HeadVar__1_1, ((MR_Box) (ml_backend__mlds_to_cs__Cast_HeadVar1_4)), ((MR_Box) (ml_backend__mlds_to_cs__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_cs____Unify____exit_methods_0_0(
  MR_Word ml_backend__mlds_to_cs__HeadVar__1_1,
  MR_Word ml_backend__mlds_to_cs__HeadVar__2_2)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Word ml_backend__mlds_to_cs__Cast_HeadVar1_3 = ml_backend__mlds_to_cs__HeadVar__1_1;
    MR_Word ml_backend__mlds_to_cs__Cast_HeadVar2_4 = ml_backend__mlds_to_cs__HeadVar__2_2;

    {
      ml_backend__mlds_to_cs__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__mlds_to_cs_scalar_common_1[6], ((MR_Box) (ml_backend__mlds_to_cs__Cast_HeadVar1_3)), ((MR_Box) (ml_backend__mlds_to_cs__Cast_HeadVar2_4)));
    }
    return ml_backend__mlds_to_cs__succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs____Compare____exit_method_0_0(
  MR_Word * ml_backend__mlds_to_cs__HeadVar__1_1,
  MR_Word ml_backend__mlds_to_cs__HeadVar__2_2,
  MR_Word ml_backend__mlds_to_cs__HeadVar__3_3)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Integer ml_backend__mlds_to_cs__Cast_HeadVar1_4 = (MR_Integer) ml_backend__mlds_to_cs__HeadVar__2_2;
    MR_Integer ml_backend__mlds_to_cs__Cast_HeadVar2_5 = (MR_Integer) ml_backend__mlds_to_cs__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(ml_backend__mlds_to_cs__HeadVar__1_1, ml_backend__mlds_to_cs__Cast_HeadVar1_4, ml_backend__mlds_to_cs__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_cs____Unify____exit_method_0_0(
  MR_Word ml_backend__mlds_to_cs__HeadVar__2_1,
  MR_Word ml_backend__mlds_to_cs__HeadVar__2_2)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded = (ml_backend__mlds_to_cs__HeadVar__2_1 == ml_backend__mlds_to_cs__HeadVar__2_2);

    return ml_backend__mlds_to_cs__succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs____Compare____csharp_out_info_0_0(
  MR_Word * ml_backend__mlds_to_cs__HeadVar__1_1,
  MR_Word ml_backend__mlds_to_cs__HeadVar__2_2,
  MR_Word ml_backend__mlds_to_cs__HeadVar__3_3)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Integer ml_backend__mlds_to_cs__CastX_30 = (MR_Integer) ml_backend__mlds_to_cs__HeadVar__2_2;
    MR_Integer ml_backend__mlds_to_cs__CastY_31 = (MR_Integer) ml_backend__mlds_to_cs__HeadVar__3_3;

    ml_backend__mlds_to_cs__succeeded = (ml_backend__mlds_to_cs__CastX_30 == ml_backend__mlds_to_cs__CastY_31);
    if (ml_backend__mlds_to_cs__succeeded)
      *ml_backend__mlds_to_cs__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word ml_backend__mlds_to_cs__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ml_backend__mlds_to_cs__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__2_2, (MR_Integer) 1)))) & (MR_Integer) 1);
        MR_Word ml_backend__mlds_to_cs__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word ml_backend__mlds_to_cs__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word ml_backend__mlds_to_cs__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__2_2, (MR_Integer) 2)));
        MR_String ml_backend__mlds_to_cs__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word ml_backend__mlds_to_cs__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word ml_backend__mlds_to_cs__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word ml_backend__mlds_to_cs__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__2_2, (MR_Integer) 6)));
        MR_Word ml_backend__mlds_to_cs__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word ml_backend__mlds_to_cs__V_14_14 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__3_3, (MR_Integer) 1)))) & (MR_Integer) 1);
        MR_Word ml_backend__mlds_to_cs__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__3_3, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word ml_backend__mlds_to_cs__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__3_3, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word ml_backend__mlds_to_cs__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__3_3, (MR_Integer) 2)));
        MR_String ml_backend__mlds_to_cs__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word ml_backend__mlds_to_cs__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__3_3, (MR_Integer) 4)));
        MR_Word ml_backend__mlds_to_cs__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__3_3, (MR_Integer) 5)));
        MR_Word ml_backend__mlds_to_cs__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__3_3, (MR_Integer) 6)));
        MR_Word ml_backend__mlds_to_cs__V_22_22;

        {
          hlds__hlds_module____Compare____module_info_0_0(&ml_backend__mlds_to_cs__V_22_22, ml_backend__mlds_to_cs__V_4_4, ml_backend__mlds_to_cs__V_13_13);
        }
        ml_backend__mlds_to_cs__succeeded = (ml_backend__mlds_to_cs__V_22_22 == (MR_Integer) 0);
        ml_backend__mlds_to_cs__succeeded = !(ml_backend__mlds_to_cs__succeeded);
        if (ml_backend__mlds_to_cs__succeeded)
          *ml_backend__mlds_to_cs__HeadVar__1_1 = ml_backend__mlds_to_cs__V_22_22;
        else
          {
            MR_Word ml_backend__mlds_to_cs__V_23_23;
            MR_Integer ml_backend__mlds_to_cs__V_41_41 = (MR_Integer) ml_backend__mlds_to_cs__V_5_5;
            MR_Integer ml_backend__mlds_to_cs__V_42_42 = (MR_Integer) ml_backend__mlds_to_cs__V_14_14;

            {
              mercury__private_builtin__builtin_compare_int_3_p_0(&ml_backend__mlds_to_cs__V_23_23, ml_backend__mlds_to_cs__V_41_41, ml_backend__mlds_to_cs__V_42_42);
            }
            ml_backend__mlds_to_cs__succeeded = (ml_backend__mlds_to_cs__V_23_23 == (MR_Integer) 0);
            ml_backend__mlds_to_cs__succeeded = !(ml_backend__mlds_to_cs__succeeded);
            if (ml_backend__mlds_to_cs__succeeded)
              *ml_backend__mlds_to_cs__HeadVar__1_1 = ml_backend__mlds_to_cs__V_23_23;
            else
              {
                MR_Word ml_backend__mlds_to_cs__V_24_24;
                MR_Integer ml_backend__mlds_to_cs__V_43_43 = (MR_Integer) ml_backend__mlds_to_cs__V_6_6;
                MR_Integer ml_backend__mlds_to_cs__V_44_44 = (MR_Integer) ml_backend__mlds_to_cs__V_15_15;

                {
                  mercury__private_builtin__builtin_compare_int_3_p_0(&ml_backend__mlds_to_cs__V_24_24, ml_backend__mlds_to_cs__V_43_43, ml_backend__mlds_to_cs__V_44_44);
                }
                ml_backend__mlds_to_cs__succeeded = (ml_backend__mlds_to_cs__V_24_24 == (MR_Integer) 0);
                ml_backend__mlds_to_cs__succeeded = !(ml_backend__mlds_to_cs__succeeded);
                if (ml_backend__mlds_to_cs__succeeded)
                  *ml_backend__mlds_to_cs__HeadVar__1_1 = ml_backend__mlds_to_cs__V_24_24;
                else
                  {
                    MR_Word ml_backend__mlds_to_cs__V_25_25;
                    MR_Integer ml_backend__mlds_to_cs__V_45_45 = (MR_Integer) ml_backend__mlds_to_cs__V_7_7;
                    MR_Integer ml_backend__mlds_to_cs__V_46_46 = (MR_Integer) ml_backend__mlds_to_cs__V_16_16;

                    {
                      mercury__private_builtin__builtin_compare_int_3_p_0(&ml_backend__mlds_to_cs__V_25_25, ml_backend__mlds_to_cs__V_45_45, ml_backend__mlds_to_cs__V_46_46);
                    }
                    ml_backend__mlds_to_cs__succeeded = (ml_backend__mlds_to_cs__V_25_25 == (MR_Integer) 0);
                    ml_backend__mlds_to_cs__succeeded = !(ml_backend__mlds_to_cs__succeeded);
                    if (ml_backend__mlds_to_cs__succeeded)
                      *ml_backend__mlds_to_cs__HeadVar__1_1 = ml_backend__mlds_to_cs__V_25_25;
                    else
                      {
                        MR_Word ml_backend__mlds_to_cs__V_26_26;

                        {
                          ml_backend__mlds____Compare____mlds_module_name_0_0(&ml_backend__mlds_to_cs__V_26_26, ml_backend__mlds_to_cs__V_8_8, ml_backend__mlds_to_cs__V_17_17);
                        }
                        ml_backend__mlds_to_cs__succeeded = (ml_backend__mlds_to_cs__V_26_26 == (MR_Integer) 0);
                        ml_backend__mlds_to_cs__succeeded = !(ml_backend__mlds_to_cs__succeeded);
                        if (ml_backend__mlds_to_cs__succeeded)
                          *ml_backend__mlds_to_cs__HeadVar__1_1 = ml_backend__mlds_to_cs__V_26_26;
                        else
                          {
                            MR_Word ml_backend__mlds_to_cs__V_27_27;

                            {
                              mercury__private_builtin__builtin_compare_string_3_p_0(&ml_backend__mlds_to_cs__V_27_27, ml_backend__mlds_to_cs__V_9_9, ml_backend__mlds_to_cs__V_18_18);
                            }
                            ml_backend__mlds_to_cs__succeeded = (ml_backend__mlds_to_cs__V_27_27 == (MR_Integer) 0);
                            ml_backend__mlds_to_cs__succeeded = !(ml_backend__mlds_to_cs__succeeded);
                            if (ml_backend__mlds_to_cs__succeeded)
                              *ml_backend__mlds_to_cs__HeadVar__1_1 = ml_backend__mlds_to_cs__V_27_27;
                            else
                              {
                                MR_Word ml_backend__mlds_to_cs__V_28_28;

                                {
                                  mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__mlds_to_cs_scalar_common_2[1], &ml_backend__mlds_to_cs__V_28_28, ((MR_Box) (ml_backend__mlds_to_cs__V_10_10)), ((MR_Box) (ml_backend__mlds_to_cs__V_19_19)));
                                }
                                ml_backend__mlds_to_cs__succeeded = (ml_backend__mlds_to_cs__V_28_28 == (MR_Integer) 0);
                                ml_backend__mlds_to_cs__succeeded = !(ml_backend__mlds_to_cs__succeeded);
                                if (ml_backend__mlds_to_cs__succeeded)
                                  *ml_backend__mlds_to_cs__HeadVar__1_1 = ml_backend__mlds_to_cs__V_28_28;
                                else
                                  {
                                    MR_Word ml_backend__mlds_to_cs__V_29_29;
                                    MR_Integer ml_backend__mlds_to_cs__V_47_47 = (MR_Integer) ml_backend__mlds_to_cs__V_11_11;
                                    MR_Integer ml_backend__mlds_to_cs__V_48_48 = (MR_Integer) ml_backend__mlds_to_cs__V_20_20;

                                    {
                                      mercury__private_builtin__builtin_compare_int_3_p_0(&ml_backend__mlds_to_cs__V_29_29, ml_backend__mlds_to_cs__V_47_47, ml_backend__mlds_to_cs__V_48_48);
                                    }
                                    ml_backend__mlds_to_cs__succeeded = (ml_backend__mlds_to_cs__V_29_29 == (MR_Integer) 0);
                                    ml_backend__mlds_to_cs__succeeded = !(ml_backend__mlds_to_cs__succeeded);
                                    if (ml_backend__mlds_to_cs__succeeded)
                                      *ml_backend__mlds_to_cs__HeadVar__1_1 = ml_backend__mlds_to_cs__V_29_29;
                                    else
                                      {
                                        {
                                          mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__mlds_to_cs_scalar_common_1[5], ml_backend__mlds_to_cs__HeadVar__1_1, ((MR_Box) (ml_backend__mlds_to_cs__V_12_12)), ((MR_Box) (ml_backend__mlds_to_cs__V_21_21)));
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

static MR_bool MR_CALL 
ml_backend__mlds_to_cs____Unify____csharp_out_info_0_0(
  MR_Word ml_backend__mlds_to_cs__HeadVar__1_1,
  MR_Word ml_backend__mlds_to_cs__HeadVar__2_2)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Integer ml_backend__mlds_to_cs__CastX_21 = (MR_Integer) ml_backend__mlds_to_cs__HeadVar__1_1;
    MR_Integer ml_backend__mlds_to_cs__CastY_22 = (MR_Integer) ml_backend__mlds_to_cs__HeadVar__2_2;

    ml_backend__mlds_to_cs__succeeded = (ml_backend__mlds_to_cs__CastX_21 == ml_backend__mlds_to_cs__CastY_22);
    if (ml_backend__mlds_to_cs__succeeded)
      ml_backend__mlds_to_cs__succeeded = MR_TRUE;
    else
      {
        MR_Word ml_backend__mlds_to_cs__TypeInfo_25_25;
        MR_Word ml_backend__mlds_to_cs__TypeInfo_26_26;
        MR_Word ml_backend__mlds_to_cs__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ml_backend__mlds_to_cs__V_4_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__1_1, (MR_Integer) 1)))) & (MR_Integer) 1);
        MR_Word ml_backend__mlds_to_cs__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__1_1, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word ml_backend__mlds_to_cs__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__1_1, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word ml_backend__mlds_to_cs__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__1_1, (MR_Integer) 2)));
        MR_String ml_backend__mlds_to_cs__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word ml_backend__mlds_to_cs__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__1_1, (MR_Integer) 4)));
        MR_Word ml_backend__mlds_to_cs__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__1_1, (MR_Integer) 5)));
        MR_Word ml_backend__mlds_to_cs__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__1_1, (MR_Integer) 6)));
        MR_Word ml_backend__mlds_to_cs__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ml_backend__mlds_to_cs__V_13_13 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__2_2, (MR_Integer) 1)))) & (MR_Integer) 1);
        MR_Word ml_backend__mlds_to_cs__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word ml_backend__mlds_to_cs__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word ml_backend__mlds_to_cs__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__2_2, (MR_Integer) 2)));
        MR_String ml_backend__mlds_to_cs__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word ml_backend__mlds_to_cs__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word ml_backend__mlds_to_cs__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word ml_backend__mlds_to_cs__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__2_2, (MR_Integer) 6)));

        {
          ml_backend__mlds_to_cs__succeeded = hlds__hlds_module____Unify____module_info_0_0(ml_backend__mlds_to_cs__V_3_3, ml_backend__mlds_to_cs__V_12_12);
        }
        if (ml_backend__mlds_to_cs__succeeded)
          {
            ml_backend__mlds_to_cs__succeeded = (ml_backend__mlds_to_cs__V_4_4 == ml_backend__mlds_to_cs__V_13_13);
            if (ml_backend__mlds_to_cs__succeeded)
              {
                ml_backend__mlds_to_cs__succeeded = (ml_backend__mlds_to_cs__V_5_5 == ml_backend__mlds_to_cs__V_14_14);
                if (ml_backend__mlds_to_cs__succeeded)
                  {
                    ml_backend__mlds_to_cs__succeeded = (ml_backend__mlds_to_cs__V_6_6 == ml_backend__mlds_to_cs__V_15_15);
                    if (ml_backend__mlds_to_cs__succeeded)
                      {
                        {
                          ml_backend__mlds_to_cs__succeeded = ml_backend__mlds____Unify____mlds_module_name_0_0(ml_backend__mlds_to_cs__V_7_7, ml_backend__mlds_to_cs__V_16_16);
                        }
                        if (ml_backend__mlds_to_cs__succeeded)
                          {
                            ml_backend__mlds_to_cs__succeeded = (strcmp(ml_backend__mlds_to_cs__V_8_8, ml_backend__mlds_to_cs__V_17_17) == 0);
                            if (ml_backend__mlds_to_cs__succeeded)
                              {
                                ml_backend__mlds_to_cs__TypeInfo_25_25 = (MR_Word) &ml_backend__mlds_to_cs_scalar_common_2[1];
                                {
                                  ml_backend__mlds_to_cs__succeeded = mercury__builtin__unify_2_p_0(ml_backend__mlds_to_cs__TypeInfo_25_25, ((MR_Box) (ml_backend__mlds_to_cs__V_9_9)), ((MR_Box) (ml_backend__mlds_to_cs__V_18_18)));
                                }
                                if (ml_backend__mlds_to_cs__succeeded)
                                  {
                                    ml_backend__mlds_to_cs__succeeded = (ml_backend__mlds_to_cs__V_10_10 == ml_backend__mlds_to_cs__V_19_19);
                                    if (ml_backend__mlds_to_cs__succeeded)
                                      {
                                        ml_backend__mlds_to_cs__TypeInfo_26_26 = (MR_Word) &ml_backend__mlds_to_cs_scalar_common_1[5];
                                        {
                                          ml_backend__mlds_to_cs__succeeded = mercury__builtin__unify_2_p_0(ml_backend__mlds_to_cs__TypeInfo_26_26, ((MR_Box) (ml_backend__mlds_to_cs__V_11_11)), ((MR_Box) (ml_backend__mlds_to_cs__V_20_20)));
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
    return ml_backend__mlds_to_cs__succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs____Compare____code_addr_map_0_0(
  MR_Word * ml_backend__mlds_to_cs__HeadVar__1_1,
  MR_Word ml_backend__mlds_to_cs__HeadVar__2_2,
  MR_Word ml_backend__mlds_to_cs__HeadVar__3_3)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Integer ml_backend__mlds_to_cs__CastX_9 = (MR_Integer) ml_backend__mlds_to_cs__HeadVar__2_2;
    MR_Integer ml_backend__mlds_to_cs__CastY_10 = (MR_Integer) ml_backend__mlds_to_cs__HeadVar__3_3;

    ml_backend__mlds_to_cs__succeeded = (ml_backend__mlds_to_cs__CastX_9 == ml_backend__mlds_to_cs__CastY_10);
    if (ml_backend__mlds_to_cs__succeeded)
      *ml_backend__mlds_to_cs__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Integer ml_backend__mlds_to_cs__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ml_backend__mlds_to_cs__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer ml_backend__mlds_to_cs__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word ml_backend__mlds_to_cs__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word ml_backend__mlds_to_cs__V_8_8;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(&ml_backend__mlds_to_cs__V_8_8, ml_backend__mlds_to_cs__V_4_4, ml_backend__mlds_to_cs__V_6_6);
        }
        ml_backend__mlds_to_cs__succeeded = (ml_backend__mlds_to_cs__V_8_8 == (MR_Integer) 0);
        ml_backend__mlds_to_cs__succeeded = !(ml_backend__mlds_to_cs__succeeded);
        if (ml_backend__mlds_to_cs__succeeded)
          *ml_backend__mlds_to_cs__HeadVar__1_1 = ml_backend__mlds_to_cs__V_8_8;
        else
          {
            {
              mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__mlds_to_cs_scalar_common_2[1], ml_backend__mlds_to_cs__HeadVar__1_1, ((MR_Box) (ml_backend__mlds_to_cs__V_5_5)), ((MR_Box) (ml_backend__mlds_to_cs__V_7_7)));
            }
          }
      }
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_cs____Unify____code_addr_map_0_0(
  MR_Word ml_backend__mlds_to_cs__HeadVar__1_1,
  MR_Word ml_backend__mlds_to_cs__HeadVar__2_2)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Integer ml_backend__mlds_to_cs__CastX_7 = (MR_Integer) ml_backend__mlds_to_cs__HeadVar__1_1;
    MR_Integer ml_backend__mlds_to_cs__CastY_8 = (MR_Integer) ml_backend__mlds_to_cs__HeadVar__2_2;

    ml_backend__mlds_to_cs__succeeded = (ml_backend__mlds_to_cs__CastX_7 == ml_backend__mlds_to_cs__CastY_8);
    if (ml_backend__mlds_to_cs__succeeded)
      ml_backend__mlds_to_cs__succeeded = MR_TRUE;
    else
      {
        MR_Word ml_backend__mlds_to_cs__TypeInfo_9_9;
        MR_Integer ml_backend__mlds_to_cs__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ml_backend__mlds_to_cs__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__1_1, (MR_Integer) 1)));
        MR_Integer ml_backend__mlds_to_cs__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ml_backend__mlds_to_cs__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__2_2, (MR_Integer) 1)));

        ml_backend__mlds_to_cs__succeeded = (ml_backend__mlds_to_cs__V_3_3 == ml_backend__mlds_to_cs__V_5_5);
        if (ml_backend__mlds_to_cs__succeeded)
          {
            ml_backend__mlds_to_cs__TypeInfo_9_9 = (MR_Word) &ml_backend__mlds_to_cs_scalar_common_2[1];
            {
              ml_backend__mlds_to_cs__succeeded = mercury__builtin__unify_2_p_0(ml_backend__mlds_to_cs__TypeInfo_9_9, ((MR_Box) (ml_backend__mlds_to_cs__V_4_4)), ((MR_Box) (ml_backend__mlds_to_cs__V_6_6)));
            }
          }
      }
    return ml_backend__mlds_to_cs__succeeded;
  }
}

static MR_Word MR_CALL 
ml_backend__mlds_to_cs__init_csharp_out_info_3_f_0(
  MR_Word ml_backend__mlds_to_cs__ModuleInfo_5,
  MR_String ml_backend__mlds_to_cs__SourceFileName_6,
  MR_Word ml_backend__mlds_to_cs__CodeAddrs_7)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Word ml_backend__mlds_to_cs__Info_8;
    MR_Word ml_backend__mlds_to_cs__Globals_9;
    MR_Word ml_backend__mlds_to_cs__AutoComments_10;
    MR_Word ml_backend__mlds_to_cs__LineNumbers_11;
    MR_Word ml_backend__mlds_to_cs__ForeignLineNumbers_12;
    MR_Word ml_backend__mlds_to_cs__ModuleName_13;
    MR_Word ml_backend__mlds_to_cs__MLDS_ModuleName_14;

    {
      hlds__hlds_module__module_info_get_globals_2_p_0(ml_backend__mlds_to_cs__ModuleInfo_5, &ml_backend__mlds_to_cs__Globals_9);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(ml_backend__mlds_to_cs__Globals_9, (MR_Integer) 142, &ml_backend__mlds_to_cs__AutoComments_10);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(ml_backend__mlds_to_cs__Globals_9, (MR_Integer) 139, &ml_backend__mlds_to_cs__LineNumbers_11);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(ml_backend__mlds_to_cs__Globals_9, (MR_Integer) 140, &ml_backend__mlds_to_cs__ForeignLineNumbers_12);
    }
    {
      hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__mlds_to_cs__ModuleInfo_5, &ml_backend__mlds_to_cs__ModuleName_13);
    }
    {
      ml_backend__mlds_to_cs__MLDS_ModuleName_14 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__mlds_to_cs__ModuleName_13);
    }
    {
      ml_backend__mlds_to_cs__Info_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, 0) = ((MR_Box) (ml_backend__mlds_to_cs__ModuleInfo_5));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, 1) = ((MR_Box) ((ml_backend__mlds_to_cs__AutoComments_10 | ((((ml_backend__mlds_to_cs__LineNumbers_11 << (MR_Integer) 1)) | ((ml_backend__mlds_to_cs__ForeignLineNumbers_12 << (MR_Integer) 2)))))));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, 2) = ((MR_Box) (ml_backend__mlds_to_cs__MLDS_ModuleName_14));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, 3) = ((MR_Box) (ml_backend__mlds_to_cs__SourceFileName_6));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, 4) = ((MR_Box) (ml_backend__mlds_to_cs__CodeAddrs_7));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, 5) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_8, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    return ml_backend__mlds_to_cs__Info_8;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_pragma_warning_restore_2_p_0(void)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;

    {
      mercury__io__write_string_3_p_0((MR_String) "#pragma warning restore\n");
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_pragma_warning_disable_2_p_0(void)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;

    {
      mercury__io__write_string_3_p_0((MR_String) "#pragma warning disable 162, 168, 169, 219, 1717\n");
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__indent_line_3_p_0(
  MR_Integer ml_backend__mlds_to_cs__N_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ml_backend__mlds_to_cs__succeeded = (ml_backend__mlds_to_cs__N_4 <= (MR_Integer) 0);

        if (ml_backend__mlds_to_cs__succeeded)
          {
          }
        else
          {
            MR_Integer ml_backend__mlds_to_cs__V_11_11;

            {
              mercury__io__write_string_3_p_0((MR_String) "  ");
            }
            ml_backend__mlds_to_cs__V_11_11 = (ml_backend__mlds_to_cs__N_4 - (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer ml_backend__mlds_to_cs__N__tmp_copy_4 = ml_backend__mlds_to_cs__V_11_11;

              ml_backend__mlds_to_cs__N_4 = ml_backend__mlds_to_cs__N__tmp_copy_4;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
ml_backend__mlds_to_cs__indent_line_5_p_0(
  MR_Word ml_backend__mlds_to_cs__OutputLineNumbers_6,
  MR_Word ml_backend__mlds_to_cs__Context_7,
  MR_Integer ml_backend__mlds_to_cs__N_8)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Word ml_backend__mlds_to_cs__ProgContext_10;

    {
      ml_backend__mlds_to_cs__ProgContext_10 = ml_backend__mlds__mlds_get_prog_context_1_f_0(ml_backend__mlds_to_cs__Context_7);
    }
    switch (ml_backend__mlds_to_cs__OutputLineNumbers_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String ml_backend__mlds_to_cs__File_27 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__ProgContext_10, (MR_Integer) 0)));
          MR_Integer ml_backend__mlds_to_cs__Line_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__ProgContext_10, (MR_Integer) 1)));

          ml_backend__mlds_to_cs__succeeded = (ml_backend__mlds_to_cs__Line_28 > (MR_Integer) 0);
          if (ml_backend__mlds_to_cs__succeeded)
            {
              ml_backend__mlds_to_cs__succeeded = (strcmp(ml_backend__mlds_to_cs__File_27, (MR_String) "") == 0);
              ml_backend__mlds_to_cs__succeeded = !(ml_backend__mlds_to_cs__succeeded);
            }
          if (ml_backend__mlds_to_cs__succeeded)
            {
              MR_String ml_backend__mlds_to_cs__V_40_40;

              {
                mercury__io__write_string_3_p_0((MR_String) "#line ");
              }
              {
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ml_backend__mlds_to_cs_scalar_common_9[0], ml_backend__mlds_to_cs__Line_28, &ml_backend__mlds_to_cs__V_40_40);
              }
              {
                mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__V_40_40);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) " \"");
              }
              {
                mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__File_27);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "\"\n");
              }
            }
          else
            {
            }
        }
        break;
    }
    {
      ml_backend__mlds_to_cs__indent_line_3_p_0(ml_backend__mlds_to_cs__N_8);
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__indent_line_prog_context_5_p_0(
  MR_Word ml_backend__mlds_to_cs__OutputLineNumbers_6,
  MR_Word ml_backend__mlds_to_cs__Context_7,
  MR_Integer ml_backend__mlds_to_cs__N_8)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;

    switch (ml_backend__mlds_to_cs__OutputLineNumbers_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String ml_backend__mlds_to_cs__File_19 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Context_7, (MR_Integer) 0)));
          MR_Integer ml_backend__mlds_to_cs__Line_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Context_7, (MR_Integer) 1)));

          ml_backend__mlds_to_cs__succeeded = (ml_backend__mlds_to_cs__Line_20 > (MR_Integer) 0);
          if (ml_backend__mlds_to_cs__succeeded)
            {
              ml_backend__mlds_to_cs__succeeded = (strcmp(ml_backend__mlds_to_cs__File_19, (MR_String) "") == 0);
              ml_backend__mlds_to_cs__succeeded = !(ml_backend__mlds_to_cs__succeeded);
            }
          if (ml_backend__mlds_to_cs__succeeded)
            {
              MR_String ml_backend__mlds_to_cs__V_32_32;

              {
                mercury__io__write_string_3_p_0((MR_String) "#line ");
              }
              {
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ml_backend__mlds_to_cs_scalar_common_9[0], ml_backend__mlds_to_cs__Line_20, &ml_backend__mlds_to_cs__V_32_32);
              }
              {
                mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__V_32_32);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) " \"");
              }
              {
                mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__File_19);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "\"\n");
              }
            }
          else
            {
            }
        }
        break;
    }
    {
      ml_backend__mlds_to_cs__indent_line_3_p_0(ml_backend__mlds_to_cs__N_8);
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__cs_output_context_4_p_0(
  MR_Word ml_backend__mlds_to_cs__OutputLineNumbers_5,
  MR_Word ml_backend__mlds_to_cs__Context_6)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;

    switch (ml_backend__mlds_to_cs__OutputLineNumbers_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String ml_backend__mlds_to_cs__File_8 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Context_6, (MR_Integer) 0)));
          MR_Integer ml_backend__mlds_to_cs__Line_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Context_6, (MR_Integer) 1)));

          ml_backend__mlds_to_cs__succeeded = (ml_backend__mlds_to_cs__Line_9 > (MR_Integer) 0);
          if (ml_backend__mlds_to_cs__succeeded)
            {
              ml_backend__mlds_to_cs__succeeded = (strcmp(ml_backend__mlds_to_cs__File_8, (MR_String) "") == 0);
              ml_backend__mlds_to_cs__succeeded = !(ml_backend__mlds_to_cs__succeeded);
            }
          if (ml_backend__mlds_to_cs__succeeded)
            {
              MR_String ml_backend__mlds_to_cs__V_23_23;

              {
                mercury__io__write_string_3_p_0((MR_String) "#line ");
              }
              {
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ml_backend__mlds_to_cs_scalar_common_9[0], ml_backend__mlds_to_cs__Line_9, &ml_backend__mlds_to_cs__V_23_23);
              }
              {
                mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__V_23_23);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) " \"");
              }
              {
                mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__File_8);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "\"\n");
              }
            }
          else
            {
            }
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__mlds_output_proc_label_4_p_0(
  MR_String ml_backend__mlds_to_cs__Suffix_5,
  MR_Word ml_backend__mlds_to_cs__HeadVar__2_2)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Word ml_backend__mlds_to_cs__PredLabel_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__2_2, (MR_Integer) 0)));
    MR_Integer ml_backend__mlds_to_cs__ProcId_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__2_2, (MR_Integer) 1)));
    MR_String ml_backend__mlds_to_cs__PredLabelStr_9;
    MR_Integer ml_backend__mlds_to_cs__ModeNum_10;
    MR_String ml_backend__mlds_to_cs__String_11;
    MR_String ml_backend__mlds_to_cs__V_23_23;
    MR_String ml_backend__mlds_to_cs__V_30_30;
    MR_String ml_backend__mlds_to_cs__V_32_32;

    {
      ml_backend__mlds_to_cs__pred_label_to_string_2_p_0(ml_backend__mlds_to_cs__PredLabel_6, &ml_backend__mlds_to_cs__PredLabelStr_9);
    }
    {
      hlds__hlds_pred__proc_id_to_int_2_p_0(ml_backend__mlds_to_cs__ProcId_7, &ml_backend__mlds_to_cs__ModeNum_10);
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ml_backend__mlds_to_cs_scalar_common_9[0], ml_backend__mlds_to_cs__ModeNum_10, &ml_backend__mlds_to_cs__V_23_23);
    }
    {
      ml_backend__mlds_to_cs__V_30_30 = mercury__string__f_43_43_2_f_0(ml_backend__mlds_to_cs__V_23_23, ml_backend__mlds_to_cs__Suffix_5);
    }
    {
      ml_backend__mlds_to_cs__V_32_32 = mercury__string__f_43_43_2_f_0((MR_String) "_", ml_backend__mlds_to_cs__V_30_30);
    }
    {
      ml_backend__mlds_to_cs__String_11 = mercury__string__f_43_43_2_f_0(ml_backend__mlds_to_cs__PredLabelStr_9, ml_backend__mlds_to_cs__V_32_32);
    }
    {
      ml_backend__mlds_to_cs__write_identifier_string_3_p_0(ml_backend__mlds_to_cs__String_11);
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__method_ptr_type_to_string_3_f_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_2)
{
  {
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;
    MR_String ml_backend__mlds_to_cs__conv0_String_6;

    {
      ml_backend__mlds_to_cs__boxed_type_to_string_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_1), &ml_backend__mlds_to_cs__conv0_String_6);
    }
    *ml_backend__mlds_to_cs__wrapper_arg_2 = ((MR_Box) (ml_backend__mlds_to_cs__conv0_String_6));
  }
}

static MR_String MR_CALL 
ml_backend__mlds_to_cs__method_ptr_type_to_string_3_f_0(
  MR_Word ml_backend__mlds_to_cs__Info_5,
  MR_Word ml_backend__mlds_to_cs__ArgTypes_6,
  MR_Word ml_backend__mlds_to_cs__RetTypes_7)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_String ml_backend__mlds_to_cs__String_8;
    MR_Word ml_backend__mlds_to_cs__TypeCtorInfo_26_26 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0;
    MR_Word ml_backend__mlds_to_cs__TypeCtorInfo_29_29;
    MR_Integer ml_backend__mlds_to_cs__Arity_9;
    MR_Integer ml_backend__mlds_to_cs__NumRets_10;
    MR_Word ml_backend__mlds_to_cs__ArgTypesStrings_11;
    MR_Word ml_backend__mlds_to_cs__RetTypesStrings_12;
    MR_String ml_backend__mlds_to_cs__TypesString_13;
    MR_Word ml_backend__mlds_to_cs__V_14_14;
    MR_Word ml_backend__mlds_to_cs__V_17_17;
    MR_String ml_backend__mlds_to_cs__V_33_33;
    MR_String ml_backend__mlds_to_cs__V_35_35;
    MR_String ml_backend__mlds_to_cs__V_36_36;
    MR_Word ml_backend__mlds_to_cs__V_42_42;
    MR_String ml_backend__mlds_to_cs__V_43_43;
    MR_String ml_backend__mlds_to_cs__V_45_45;
    MR_String ml_backend__mlds_to_cs__V_46_46;
    MR_String ml_backend__mlds_to_cs__V_53_53;

    {
      ml_backend__mlds_to_cs__Arity_9 = mercury__list__length_1_f_0(ml_backend__mlds_to_cs__TypeCtorInfo_26_26, ml_backend__mlds_to_cs__ArgTypes_6);
    }
    {
      ml_backend__mlds_to_cs__NumRets_10 = mercury__list__length_1_f_0(ml_backend__mlds_to_cs__TypeCtorInfo_26_26, ml_backend__mlds_to_cs__RetTypes_7);
    }
    {
      ml_backend__mlds_to_cs__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_14_14, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_6[7]));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_14_14, 1) = ((MR_Box) (ml_backend__mlds_to_cs__method_ptr_type_to_string_3_f_0_1));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_14_14, 3) = ((MR_Box) (ml_backend__mlds_to_cs__Info_5));
    }
    ml_backend__mlds_to_cs__TypeCtorInfo_29_29 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    {
      mercury__list__map_3_p_0(ml_backend__mlds_to_cs__TypeCtorInfo_26_26, ml_backend__mlds_to_cs__TypeCtorInfo_29_29, ml_backend__mlds_to_cs__V_14_14, ml_backend__mlds_to_cs__ArgTypes_6, &ml_backend__mlds_to_cs__ArgTypesStrings_11);
    }
    {
      mercury__list__map_3_p_0(ml_backend__mlds_to_cs__TypeCtorInfo_26_26, ml_backend__mlds_to_cs__TypeCtorInfo_29_29, ml_backend__mlds_to_cs__V_14_14, ml_backend__mlds_to_cs__RetTypes_7, &ml_backend__mlds_to_cs__RetTypesStrings_12);
    }
    {
      ml_backend__mlds_to_cs__V_17_17 = mercury__list__f_43_43_2_f_0(ml_backend__mlds_to_cs__TypeCtorInfo_29_29, ml_backend__mlds_to_cs__ArgTypesStrings_11, ml_backend__mlds_to_cs__RetTypesStrings_12);
    }
    {
      ml_backend__mlds_to_cs__TypesString_13 = mercury__string__join_list_2_f_0((MR_String) ", ", ml_backend__mlds_to_cs__V_17_17);
    }
    {
      ml_backend__mlds_to_cs__V_33_33 = mercury__string__f_43_43_2_f_0(ml_backend__mlds_to_cs__TypesString_13, (MR_String) ">");
    }
    {
      ml_backend__mlds_to_cs__V_35_35 = mercury__string__f_43_43_2_f_0((MR_String) "<", ml_backend__mlds_to_cs__V_33_33);
    }
    ml_backend__mlds_to_cs__V_42_42 = (MR_Word) &ml_backend__mlds_to_cs_scalar_common_9[0];
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ml_backend__mlds_to_cs__V_42_42, ml_backend__mlds_to_cs__NumRets_10, &ml_backend__mlds_to_cs__V_36_36);
    }
    {
      ml_backend__mlds_to_cs__V_43_43 = mercury__string__f_43_43_2_f_0(ml_backend__mlds_to_cs__V_36_36, ml_backend__mlds_to_cs__V_35_35);
    }
    {
      ml_backend__mlds_to_cs__V_45_45 = mercury__string__f_43_43_2_f_0((MR_String) "_r", ml_backend__mlds_to_cs__V_43_43);
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ml_backend__mlds_to_cs__V_42_42, ml_backend__mlds_to_cs__Arity_9, &ml_backend__mlds_to_cs__V_46_46);
    }
    {
      ml_backend__mlds_to_cs__V_53_53 = mercury__string__f_43_43_2_f_0(ml_backend__mlds_to_cs__V_46_46, ml_backend__mlds_to_cs__V_45_45);
    }
    {
      ml_backend__mlds_to_cs__String_8 = mercury__string__f_43_43_2_f_0((MR_String) "runtime.MethodPtr", ml_backend__mlds_to_cs__V_53_53);
    }
    return ml_backend__mlds_to_cs__String_8;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__mlds_output_code_addr_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_6,
  MR_Word ml_backend__mlds_to_cs__CodeAddr_7,
  MR_Word ml_backend__mlds_to_cs__IsCall_8)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Word ml_backend__mlds_to_cs__Sig_11;
    MR_Word ml_backend__mlds_to_cs__ArgTypes_14;
    MR_Word ml_backend__mlds_to_cs__RetTypes_15;
    MR_Word ml_backend__mlds_to_cs__Label_17;
    MR_String ml_backend__mlds_to_cs__Suffix_19;
    MR_Word ml_backend__mlds_to_cs__MLDS_ModuleName_57;
    MR_Word ml_backend__mlds_to_cs__QualKind_58;
    MR_Word ml_backend__mlds_to_cs__UnqualName_59;
    MR_String ml_backend__mlds_to_cs__QualifierString_60;
    MR_Word ml_backend__mlds_to_cs__OuterName_69;
    MR_Word ml_backend__mlds_to_cs__InnerName_70;
    MR_String ml_backend__mlds_to_cs__MangledOuterName_72;
    MR_String ml_backend__mlds_to_cs__MangledSuffix_73;
    MR_Word ml_backend__mlds_to_cs__StrippedOuterName_71;
    MR_String ml_backend__mlds_to_cs__V_84_84;

    if (((MR_tag((MR_Word) ml_backend__mlds_to_cs__CodeAddr_7)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Integer ml_backend__mlds_to_cs__SeqNum_20;
        MR_String ml_backend__mlds_to_cs__V_44_44;

        ml_backend__mlds_to_cs__Label_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__CodeAddr_7, (MR_Integer) 0)));
        ml_backend__mlds_to_cs__SeqNum_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__CodeAddr_7, (MR_Integer) 1)));
        ml_backend__mlds_to_cs__Sig_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__CodeAddr_7, (MR_Integer) 2)));
        {
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ml_backend__mlds_to_cs_scalar_common_9[0], ml_backend__mlds_to_cs__SeqNum_20, &ml_backend__mlds_to_cs__V_44_44);
        }
        {
          ml_backend__mlds_to_cs__Suffix_19 = mercury__string__f_43_43_2_f_0((MR_String) "_", ml_backend__mlds_to_cs__V_44_44);
        }
      }
    else
      {
        ml_backend__mlds_to_cs__Label_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__CodeAddr_7, (MR_Integer) 0)));
        ml_backend__mlds_to_cs__Sig_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__CodeAddr_7, (MR_Integer) 1)));
        ml_backend__mlds_to_cs__Suffix_19 = (MR_String) "";
      }
    ml_backend__mlds_to_cs__ArgTypes_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Sig_11, (MR_Integer) 0)));
    ml_backend__mlds_to_cs__RetTypes_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Sig_11, (MR_Integer) 1)));
    switch (ml_backend__mlds_to_cs__IsCall_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String ml_backend__mlds_to_cs__TypeString_16;

          {
            ml_backend__mlds_to_cs__TypeString_16 = ml_backend__mlds_to_cs__method_ptr_type_to_string_3_f_0(ml_backend__mlds_to_cs__Info_6, ml_backend__mlds_to_cs__ArgTypes_14, ml_backend__mlds_to_cs__RetTypes_15);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "(");
          }
          {
            mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__TypeString_16);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) ") ");
          }
        }
        break;
      case (MR_Integer) 1:
        {
        }
        break;
    }
    ml_backend__mlds_to_cs__MLDS_ModuleName_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Label_17, (MR_Integer) 0)));
    ml_backend__mlds_to_cs__QualKind_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Label_17, (MR_Integer) 1)));
    ml_backend__mlds_to_cs__UnqualName_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Label_17, (MR_Integer) 2)));
    {
      ml_backend__mlds_to_cs__OuterName_69 = ml_backend__mlds__mlds_module_name_to_package_name_1_f_0(ml_backend__mlds_to_cs__MLDS_ModuleName_57);
    }
    {
      ml_backend__mlds_to_cs__InnerName_70 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ml_backend__mlds_to_cs__MLDS_ModuleName_57);
    }
    {
      ml_backend__mlds_to_cs__succeeded = mdbcomp__sym_name__strip_outermost_qualifier_3_p_0(ml_backend__mlds_to_cs__OuterName_69, &ml_backend__mlds_to_cs__V_84_84, &ml_backend__mlds_to_cs__StrippedOuterName_71);
    }
    if (ml_backend__mlds_to_cs__succeeded)
      ml_backend__mlds_to_cs__succeeded = (strcmp((MR_String) "mercury", ml_backend__mlds_to_cs__V_84_84) == 0);
    if (ml_backend__mlds_to_cs__succeeded)
      {
        {
          parse_tree__java_names__mangle_sym_name_for_csharp_4_p_0(ml_backend__mlds_to_cs__StrippedOuterName_71, (MR_Integer) 0, (MR_String) "__", &ml_backend__mlds_to_cs__MangledOuterName_72);
        }
      }
    else
      {
        {
          parse_tree__java_names__mangle_sym_name_for_csharp_4_p_0(ml_backend__mlds_to_cs__OuterName_69, (MR_Integer) 0, (MR_String) "__", &ml_backend__mlds_to_cs__MangledOuterName_72);
        }
      }
    {
      ml_backend__mlds_to_cs__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ml_backend__mlds_to_cs__OuterName_69, ml_backend__mlds_to_cs__InnerName_70);
    }
    if (ml_backend__mlds_to_cs__succeeded)
      ml_backend__mlds_to_cs__MangledSuffix_73 = (MR_String) "";
    else
      {
        MR_Word ml_backend__mlds_to_cs__Suffix_74;
        MR_String ml_backend__mlds_to_cs__MangledSuffix0_75;
        MR_Word ml_backend__mlds_to_cs__V_81_81;

        {
          ml_backend__mlds_to_cs__remove_sym_name_prefixes_3_p_0(ml_backend__mlds_to_cs__InnerName_70, ml_backend__mlds_to_cs__OuterName_69, &ml_backend__mlds_to_cs__Suffix_74);
        }
        switch (ml_backend__mlds_to_cs__QualKind_58) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            ml_backend__mlds_to_cs__V_81_81 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            ml_backend__mlds_to_cs__V_81_81 = (MR_Integer) 1;
            break;
        }
        {
          parse_tree__java_names__mangle_sym_name_for_csharp_4_p_0(ml_backend__mlds_to_cs__Suffix_74, ml_backend__mlds_to_cs__V_81_81, (MR_String) ".", &ml_backend__mlds_to_cs__MangledSuffix0_75);
        }
        {
          ml_backend__mlds_to_cs__MangledSuffix_73 = mercury__string__f_43_43_2_f_0((MR_String) ".", ml_backend__mlds_to_cs__MangledSuffix0_75);
        }
      }
    {
      ml_backend__mlds_to_cs__QualifierString_60 = mercury__string__f_43_43_2_f_0(ml_backend__mlds_to_cs__MangledOuterName_72, ml_backend__mlds_to_cs__MangledSuffix_73);
    }
    {
      mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__QualifierString_60);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ".");
    }
    {
      ml_backend__mlds_to_cs__mlds_output_proc_label_4_p_0(ml_backend__mlds_to_cs__Suffix_19, ml_backend__mlds_to_cs__UnqualName_59);
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_vector_common_row_rval_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_6,
  MR_Word ml_backend__mlds_to_cs__VectorCommon_7,
  MR_Word ml_backend__mlds_to_cs__RowRval_8)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Integer ml_backend__mlds_to_cs__TypeNum_12;
    MR_Integer ml_backend__mlds_to_cs__StartRowNum_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__VectorCommon_7, (MR_Integer) 3)));
    MR_Word ml_backend__mlds_to_cs__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__VectorCommon_7, (MR_Integer) 2)));
    MR_String ml_backend__mlds_to_cs__V_31_31;
    MR_Word ml_backend__mlds_to_cs__V_37_37;
    MR_String ml_backend__mlds_to_cs__V_41_41;
    MR_Word ml_backend__mlds_to_cs___ModuleName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__VectorCommon_7, (MR_Integer) 0)));
    MR_Word ml_backend__mlds_to_cs___Type_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__VectorCommon_7, (MR_Integer) 1)));
    MR_Integer ml_backend__mlds_to_cs___NumRows_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__VectorCommon_7, (MR_Integer) 4)));

    ml_backend__mlds_to_cs__TypeNum_12 = (MR_Integer) ml_backend__mlds_to_cs__V_17_17;
    {
      mercury__io__write_string_3_p_0((MR_String) "MR_vector_common_");
    }
    ml_backend__mlds_to_cs__V_37_37 = (MR_Word) &ml_backend__mlds_to_cs_scalar_common_9[0];
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ml_backend__mlds_to_cs__V_37_37, ml_backend__mlds_to_cs__TypeNum_12, &ml_backend__mlds_to_cs__V_31_31);
    }
    {
      mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__V_31_31);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "[");
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ml_backend__mlds_to_cs__V_37_37, ml_backend__mlds_to_cs__StartRowNum_13, &ml_backend__mlds_to_cs__V_41_41);
    }
    {
      mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__V_41_41);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " + ");
    }
    {
      ml_backend__mlds_to_cs__output_rval_4_p_0(ml_backend__mlds_to_cs__Info_6, ml_backend__mlds_to_cs__RowRval_8);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "]");
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_int_const_3_p_0(
  MR_Integer ml_backend__mlds_to_cs__N_4)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded = (ml_backend__mlds_to_cs__N_4 < (MR_Integer) 0);

    if (ml_backend__mlds_to_cs__succeeded)
      {
        mercury__io__write_int_3_p_0(ml_backend__mlds_to_cs__N_4);
      }
    else
      {
        MR_Integer ml_backend__mlds_to_cs__V_10_10;
        MR_Integer ml_backend__mlds_to_cs__V_12_12;
        MR_Integer ml_backend__mlds_to_cs__V_13_13;

        {
          ml_backend__mlds_to_cs__V_10_10 = mercury__int__f_62_62_2_f_0(ml_backend__mlds_to_cs__N_4, (MR_Integer) 32);
        }
        ml_backend__mlds_to_cs__succeeded = (ml_backend__mlds_to_cs__V_10_10 == (MR_Integer) 0);
        if (ml_backend__mlds_to_cs__succeeded)
          {
            ml_backend__mlds_to_cs__V_13_13 = (MR_Integer) 2147483648;
            ml_backend__mlds_to_cs__V_12_12 = (ml_backend__mlds_to_cs__N_4 & ml_backend__mlds_to_cs__V_13_13);
            ml_backend__mlds_to_cs__succeeded = (ml_backend__mlds_to_cs__V_12_12 == (MR_Integer) 2147483648);
          }
        if (ml_backend__mlds_to_cs__succeeded)
          {
            MR_Integer ml_backend__mlds_to_cs__V_18_18 = (ml_backend__mlds_to_cs__N_4 & (MR_Integer) 4294967295);
            MR_String ml_backend__mlds_to_cs__V_25_25;

            {
              mercury__io__write_string_3_p_0((MR_String) "unchecked((int) 0x");
            }
            {
              mercury__string__format__format_unsigned_int_component_nowidth_noprec_4_p_0((MR_Word) &ml_backend__mlds_to_cs_scalar_common_9[0], (MR_Integer) 2, ml_backend__mlds_to_cs__V_18_18, &ml_backend__mlds_to_cs__V_25_25);
            }
            {
              mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__V_25_25);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
          }
        else
          {
            mercury__io__write_int_3_p_0(ml_backend__mlds_to_cs__N_4);
          }
      }
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_cs__output_rval_const_4_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;

    {
      ml_backend__mlds_to_cs__succeeded = ml_backend__mlds_to_cs__IntroducedFrom__pred__output_rval_const__3777__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 4))));
    }
    return ml_backend__mlds_to_cs__succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_rval_const_4_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_5,
  MR_Word ml_backend__mlds_to_cs__Const_6)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;

    switch (MR_tag((MR_Word) ml_backend__mlds_to_cs__Const_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ml_backend__mlds_to_cs__Const_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "true");
              }
            }
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "false");
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__mlds_to_cs__DataAddr_18 = (MR_Word) MR_body(((MR_Word) ml_backend__mlds_to_cs__Const_6), (MR_Integer) 1);
          MR_Word ml_backend__mlds_to_cs__ModuleQualifier_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__DataAddr_18, (MR_Integer) 0)));
          MR_Word ml_backend__mlds_to_cs__DataName_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__DataAddr_18, (MR_Integer) 1)));
          MR_Word ml_backend__mlds_to_cs__SymName_84;
          MR_String ml_backend__mlds_to_cs__ModuleName_86;
          MR_String ml_backend__mlds_to_cs__DataNameStr_87;
          MR_Word ml_backend__mlds_to_cs__StrippedSymName_85;
          MR_String ml_backend__mlds_to_cs__V_97_97;

          {
            ml_backend__mlds_to_cs__SymName_84 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ml_backend__mlds_to_cs__ModuleQualifier_81);
          }
          {
            ml_backend__mlds_to_cs__succeeded = mdbcomp__sym_name__strip_outermost_qualifier_3_p_0(ml_backend__mlds_to_cs__SymName_84, &ml_backend__mlds_to_cs__V_97_97, &ml_backend__mlds_to_cs__StrippedSymName_85);
          }
          if (ml_backend__mlds_to_cs__succeeded)
            ml_backend__mlds_to_cs__succeeded = (strcmp((MR_String) "mercury", ml_backend__mlds_to_cs__V_97_97) == 0);
          if (ml_backend__mlds_to_cs__succeeded)
            {
              {
                parse_tree__java_names__mangle_sym_name_for_csharp_4_p_0(ml_backend__mlds_to_cs__StrippedSymName_85, (MR_Integer) 0, (MR_String) "__", &ml_backend__mlds_to_cs__ModuleName_86);
              }
            }
          else
            {
              {
                parse_tree__java_names__mangle_sym_name_for_csharp_4_p_0(ml_backend__mlds_to_cs__SymName_84, (MR_Integer) 0, (MR_String) "__", &ml_backend__mlds_to_cs__ModuleName_86);
              }
            }
          {
            mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__ModuleName_86);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) ".");
          }
          {
            ml_backend__mlds_to_cs__data_name_to_string_2_p_0(ml_backend__mlds_to_cs__DataName_82, &ml_backend__mlds_to_cs__DataNameStr_87);
          }
          {
            ml_backend__mlds_to_cs__write_identifier_string_3_p_0(ml_backend__mlds_to_cs__DataNameStr_87);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer ml_backend__mlds_to_cs__N_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__Const_6, (MR_Integer) 0)));

          {
            ml_backend__mlds_to_cs__output_int_const_3_p_0(ml_backend__mlds_to_cs__N_8);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Const_6, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ml_backend__mlds_to_cs__EnumType_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Const_6, (MR_Integer) 2)));
              MR_Word ml_backend__mlds_to_cs__V_51_51;
              MR_Word ml_backend__mlds_to_cs__V_53_53;
              MR_Integer ml_backend__mlds_to_cs__N_65 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Const_6, (MR_Integer) 1)));

              {
                ml_backend__mlds_to_cs__V_53_53 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__V_53_53, 0) = ((MR_Box) (ml_backend__mlds_to_cs__N_65));
              }
              {
                ml_backend__mlds_to_cs__V_51_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__V_51_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__V_51_51, 1) = ((MR_Box) (ml_backend__mlds_to_cs__V_53_53));
              }
              {
                ml_backend__mlds_to_cs__output_cast_rval_5_p_0(ml_backend__mlds_to_cs__Info_5, ml_backend__mlds_to_cs__EnumType_9, ml_backend__mlds_to_cs__V_51_51);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer ml_backend__mlds_to_cs__N_64 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Const_6, (MR_Integer) 1)));

              {
                mercury__io__write_string_3_p_0((MR_String) "( ");
              }
              {
                ml_backend__mlds_to_cs__output_int_const_3_p_0(ml_backend__mlds_to_cs__N_64);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Float ml_backend__mlds_to_cs__FloatVal_13 = MR_unbox_float((MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Const_6, (MR_Integer) 1)));

              {
                backend_libs__c_util__output_float_literal_3_p_0(ml_backend__mlds_to_cs__FloatVal_13);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_String ml_backend__mlds_to_cs__String_14 = ((MR_String) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Const_6, (MR_Integer) 1)));

              {
                mercury__io__write_string_3_p_0((MR_String) "\"");
              }
              {
                backend_libs__c_util__output_quoted_string_lang_4_p_2((MR_Integer) 2, ml_backend__mlds_to_cs__String_14);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "\"");
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ml_backend__mlds_to_cs__String_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Const_6, (MR_Integer) 1)));

              {
                mercury__io__write_string_3_p_0((MR_String) "\"");
              }
              {
                backend_libs__c_util__output_quoted_multi_string_lang_4_p_0((MR_Integer) 2, ml_backend__mlds_to_cs__String_66);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "\"");
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word ml_backend__mlds_to_cs__Lang_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Const_6, (MR_Integer) 1)));
              MR_String ml_backend__mlds_to_cs__Value_11 = ((MR_String) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Const_6, (MR_Integer) 2)));
              MR_Word ml_backend__mlds_to_cs__Type_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Const_6, (MR_Integer) 3)));
              MR_Word ml_backend__mlds_to_cs__V_40_40;

              {
                ml_backend__mlds_to_cs__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_40_40, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_5[1]));
                MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_40_40, 1) = ((MR_Box) (ml_backend__mlds_to_cs__output_rval_const_4_p_0_1));
                MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_40_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_40_40, 3) = ((MR_Box) (ml_backend__mlds_to_cs__Lang_10));
                MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_40_40, 4) = ((MR_Box) ((MR_Integer) 1));
              }
              {
                mercury__require__expect_4_p_0(ml_backend__mlds_to_cs__V_40_40, (MR_String) "ml_backend.mlds_to_cs", (MR_String) "predicate \140ml_backend.mlds_to_cs.output_rval_const\'/4", (MR_String) "language other than C#.");
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
              }
              {
                ml_backend__mlds_to_cs__output_type_4_p_0(ml_backend__mlds_to_cs__Info_5, ml_backend__mlds_to_cs__Type_12);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ") ");
              }
              {
                mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__Value_11);
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_String ml_backend__mlds_to_cs__NamedConst_15 = ((MR_String) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Const_6, (MR_Integer) 1)));

              {
                mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__NamedConst_15);
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ml_backend__mlds_to_cs__CodeAddr_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Const_6, (MR_Integer) 1)));
              MR_String ml_backend__mlds_to_cs__Name_17;
              MR_Word ml_backend__mlds_to_cs__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 4)));
              MR_Word ml_backend__mlds_to_cs__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 0)));
              MR_Word ml_backend__mlds_to_cs__V_69_69 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 1)))) & (MR_Integer) 1);
              MR_Word ml_backend__mlds_to_cs__V_70_70 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              MR_Word ml_backend__mlds_to_cs__V_71_71 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
              MR_Word ml_backend__mlds_to_cs__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 2)));
              MR_String ml_backend__mlds_to_cs__V_73_73 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 3)));
              MR_Word ml_backend__mlds_to_cs__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 5)));
              MR_Word ml_backend__mlds_to_cs__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 6)));
              MR_Box ml_backend__mlds_to_cs__conv0_Name_17;

              {
                mercury__map__lookup_3_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_code_addr_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ml_backend__mlds_to_cs__V_24_24, ((MR_Box) (ml_backend__mlds_to_cs__CodeAddr_16)), &ml_backend__mlds_to_cs__conv0_Name_17);
              }
              ml_backend__mlds_to_cs__Name_17 = ((MR_String) ml_backend__mlds_to_cs__conv0_Name_17);
              {
                mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__Name_17);
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_String ml_backend__mlds_to_cs__Initializer_19;
              MR_Word ml_backend__mlds_to_cs__Type_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Const_6, (MR_Integer) 1)));

              {
                ml_backend__mlds_to_cs__Initializer_19 = ml_backend__mlds_to_cs__get_type_initializer_2_f_0(ml_backend__mlds_to_cs__Info_5, ml_backend__mlds_to_cs__Type_67);
              }
              {
                mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__Initializer_19);
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_binary_op_3_p_0(
  MR_Word ml_backend__mlds_to_cs__Op_4)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;

    switch (MR_tag((MR_Word) ml_backend__mlds_to_cs__Op_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ml_backend__mlds_to_cs__Op_4)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "+");
              }
            }
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "-");
              }
            }
            break;
          case (MR_Integer) 2:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "*");
              }
            }
            break;
          case (MR_Integer) 3:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "/");
              }
            }
            break;
          case (MR_Integer) 4:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "%");
              }
            }
            break;
          case (MR_Integer) 5:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "<<");
              }
            }
            break;
          case (MR_Integer) 6:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) ">>");
              }
            }
            break;
          case (MR_Integer) 7:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "&");
              }
            }
            break;
          case (MR_Integer) 8:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "|");
              }
            }
            break;
          case (MR_Integer) 9:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "^");
              }
            }
            break;
          case (MR_Integer) 10:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "&&");
              }
            }
            break;
          case (MR_Integer) 11:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "||");
              }
            }
            break;
          case (MR_Integer) 12:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "==");
              }
            }
            break;
          case (MR_Integer) 13:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "!=");
              }
            }
            break;
          case (MR_Integer) 14:
          case (MR_Integer) 15:
          case (MR_Integer) 16:
          case (MR_Integer) 17:
          case (MR_Integer) 18:
          case (MR_Integer) 19:
          case (MR_Integer) 20:
          case (MR_Integer) 21:
          case (MR_Integer) 22:
          case (MR_Integer) 27:
          case (MR_Integer) 38:
          case (MR_Integer) 39:
          case (MR_Integer) 40:
          case (MR_Integer) 41:
          case (MR_Integer) 42:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ml_backend.mlds_to_cs", (MR_String) "predicate \140ml_backend.mlds_to_cs.output_binary_op\'/3", (MR_String) "invalid binary operator");
                return;
              }
            }
            break;
          case (MR_Integer) 23:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "<");
              }
            }
            break;
          case (MR_Integer) 24:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) ">");
              }
            }
            break;
          case (MR_Integer) 25:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "<=");
              }
            }
            break;
          case (MR_Integer) 26:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) ">=");
              }
            }
            break;
          case (MR_Integer) 28:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "+");
              }
            }
            break;
          case (MR_Integer) 29:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "-");
              }
            }
            break;
          case (MR_Integer) 30:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "*");
              }
            }
            break;
          case (MR_Integer) 31:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "/");
              }
            }
            break;
          case (MR_Integer) 32:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "==");
              }
            }
            break;
          case (MR_Integer) 33:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "!=");
              }
            }
            break;
          case (MR_Integer) 34:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "<");
              }
            }
            break;
          case (MR_Integer) 35:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) ">");
              }
            }
            break;
          case (MR_Integer) 36:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "<=");
              }
            }
            break;
          case (MR_Integer) 37:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) ">=");
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "ml_backend.mlds_to_cs", (MR_String) "predicate \140ml_backend.mlds_to_cs.output_binary_op\'/3", (MR_String) "invalid binary operator");
            return;
          }
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_binop_6_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_7,
  MR_Word ml_backend__mlds_to_cs__Op_8,
  MR_Word ml_backend__mlds_to_cs__X_9,
  MR_Word ml_backend__mlds_to_cs__Y_10)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;

    switch (MR_tag((MR_Word) ml_backend__mlds_to_cs__Op_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ml_backend__mlds_to_cs__Op_8)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
          case (MR_Integer) 6:
          case (MR_Integer) 7:
          case (MR_Integer) 8:
          case (MR_Integer) 9:
          case (MR_Integer) 10:
          case (MR_Integer) 11:
          case (MR_Integer) 12:
          case (MR_Integer) 13:
          case (MR_Integer) 14:
          case (MR_Integer) 15:
          case (MR_Integer) 23:
          case (MR_Integer) 24:
          case (MR_Integer) 25:
          case (MR_Integer) 26:
          case (MR_Integer) 27:
          case (MR_Integer) 28:
          case (MR_Integer) 29:
          case (MR_Integer) 30:
          case (MR_Integer) 31:
          case (MR_Integer) 32:
          case (MR_Integer) 33:
          case (MR_Integer) 34:
          case (MR_Integer) 35:
          case (MR_Integer) 36:
          case (MR_Integer) 37:
          case (MR_Integer) 38:
          case (MR_Integer) 39:
          case (MR_Integer) 41:
          case (MR_Integer) 42:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
              }
              {
                ml_backend__mlds_to_cs__output_rval_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) " ");
              }
              {
                ml_backend__mlds_to_cs__output_binary_op_3_p_0(ml_backend__mlds_to_cs__Op_8);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) " ");
              }
              {
                ml_backend__mlds_to_cs__output_rval_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 16:
            {
              {
                ml_backend__mlds_to_cs__output_rval_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ".Equals(");
              }
              {
                ml_backend__mlds_to_cs__output_rval_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 17:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
              }
              {
                ml_backend__mlds_to_cs__output_rval_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ".CompareOrdinal(");
              }
              {
                ml_backend__mlds_to_cs__output_rval_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ") ");
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "!=");
              }
              {
                mercury__io__write_string_3_p_0((MR_String) " 0)");
              }
            }
            break;
          case (MR_Integer) 18:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
              }
              {
                ml_backend__mlds_to_cs__output_rval_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ".CompareOrdinal(");
              }
              {
                ml_backend__mlds_to_cs__output_rval_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ") ");
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "<");
              }
              {
                mercury__io__write_string_3_p_0((MR_String) " 0)");
              }
            }
            break;
          case (MR_Integer) 19:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
              }
              {
                ml_backend__mlds_to_cs__output_rval_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ".CompareOrdinal(");
              }
              {
                ml_backend__mlds_to_cs__output_rval_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ") ");
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ">");
              }
              {
                mercury__io__write_string_3_p_0((MR_String) " 0)");
              }
            }
            break;
          case (MR_Integer) 20:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
              }
              {
                ml_backend__mlds_to_cs__output_rval_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ".CompareOrdinal(");
              }
              {
                ml_backend__mlds_to_cs__output_rval_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ") ");
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "<=");
              }
              {
                mercury__io__write_string_3_p_0((MR_String) " 0)");
              }
            }
            break;
          case (MR_Integer) 21:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
              }
              {
                ml_backend__mlds_to_cs__output_rval_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ".CompareOrdinal(");
              }
              {
                ml_backend__mlds_to_cs__output_rval_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ") ");
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ">=");
              }
              {
                mercury__io__write_string_3_p_0((MR_String) " 0)");
              }
            }
            break;
          case (MR_Integer) 22:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
              }
              {
                ml_backend__mlds_to_cs__output_rval_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ".CompareOrdinal(");
              }
              {
                ml_backend__mlds_to_cs__output_rval_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "))");
              }
            }
            break;
          case (MR_Integer) 40:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "System.Object.ReferenceEquals(");
              }
              {
                ml_backend__mlds_to_cs__output_rval_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ", ");
              }
              {
                ml_backend__mlds_to_cs__output_rval_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          {
            ml_backend__mlds_to_cs__output_bracketed_rval_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "[");
          }
          {
            ml_backend__mlds_to_cs__output_rval_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "]");
          }
        }
        break;
      case (MR_Integer) 2:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "(");
          }
          {
            ml_backend__mlds_to_cs__output_rval_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__X_9);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) " ");
          }
          {
            ml_backend__mlds_to_cs__output_binary_op_3_p_0(ml_backend__mlds_to_cs__Op_8);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) " ");
          }
          {
            ml_backend__mlds_to_cs__output_rval_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Y_10);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_std_unop_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_6,
  MR_Word ml_backend__mlds_to_cs__UnaryOp_7,
  MR_Word ml_backend__mlds_to_cs__Expr_8)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;

    switch (ml_backend__mlds_to_cs__UnaryOp_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 6:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "~");
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "(");
          }
          {
            ml_backend__mlds_to_cs__output_rval_4_p_0(ml_backend__mlds_to_cs__Info_6, ml_backend__mlds_to_cs__Expr_8);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
        }
        break;
      case (MR_Integer) 8:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "mercury.String.hash_1_f_0");
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "(");
          }
          {
            ml_backend__mlds_to_cs__output_rval_4_p_0(ml_backend__mlds_to_cs__Info_6, ml_backend__mlds_to_cs__Expr_8);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
        }
        break;
      case (MR_Integer) 9:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "mercury.String.hash2_1_f_0");
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "(");
          }
          {
            ml_backend__mlds_to_cs__output_rval_4_p_0(ml_backend__mlds_to_cs__Info_6, ml_backend__mlds_to_cs__Expr_8);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
        }
        break;
      case (MR_Integer) 10:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "mercury.String.hash3_1_f_0");
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "(");
          }
          {
            ml_backend__mlds_to_cs__output_rval_4_p_0(ml_backend__mlds_to_cs__Info_6, ml_backend__mlds_to_cs__Expr_8);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
        }
        break;
      case (MR_Integer) 11:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "mercury.String.hash4_1_f_0");
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "(");
          }
          {
            ml_backend__mlds_to_cs__output_rval_4_p_0(ml_backend__mlds_to_cs__Info_6, ml_backend__mlds_to_cs__Expr_8);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
        }
        break;
      case (MR_Integer) 12:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "mercury.String.hash5_1_f_0");
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "(");
          }
          {
            ml_backend__mlds_to_cs__output_rval_4_p_0(ml_backend__mlds_to_cs__Info_6, ml_backend__mlds_to_cs__Expr_8);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
        }
        break;
      case (MR_Integer) 13:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "mercury.String.hash6_1_f_0");
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "(");
          }
          {
            ml_backend__mlds_to_cs__output_rval_4_p_0(ml_backend__mlds_to_cs__Info_6, ml_backend__mlds_to_cs__Expr_8);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
        }
        break;
      case (MR_Integer) 7:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "!");
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "(");
          }
          {
            ml_backend__mlds_to_cs__output_rval_4_p_0(ml_backend__mlds_to_cs__Info_6, ml_backend__mlds_to_cs__Expr_8);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
        }
        break;
      case (MR_Integer) 4:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "/* mkbody */ ");
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "(");
          }
          {
            ml_backend__mlds_to_cs__output_rval_4_p_0(ml_backend__mlds_to_cs__Info_6, ml_backend__mlds_to_cs__Expr_8);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
        }
        break;
      case (MR_Integer) 0:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "/* mktag */ ");
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "(");
          }
          {
            ml_backend__mlds_to_cs__output_rval_4_p_0(ml_backend__mlds_to_cs__Info_6, ml_backend__mlds_to_cs__Expr_8);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
        }
        break;
      case (MR_Integer) 3:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "/* strip_tag */ ");
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "(");
          }
          {
            ml_backend__mlds_to_cs__output_rval_4_p_0(ml_backend__mlds_to_cs__Info_6, ml_backend__mlds_to_cs__Expr_8);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
        }
        break;
      case (MR_Integer) 1:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "/* tag */  0");
          }
        }
        break;
      case (MR_Integer) 5:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "/* unmkbody */ ");
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "(");
          }
          {
            ml_backend__mlds_to_cs__output_rval_4_p_0(ml_backend__mlds_to_cs__Info_6, ml_backend__mlds_to_cs__Expr_8);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
        }
        break;
      case (MR_Integer) 2:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "/* unmktag */ ");
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "(");
          }
          {
            ml_backend__mlds_to_cs__output_rval_4_p_0(ml_backend__mlds_to_cs__Info_6, ml_backend__mlds_to_cs__Expr_8);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_cs__csharp_builtin_type_2_p_0(
  MR_Word ml_backend__mlds_to_cs__Type_1,
  MR_String * ml_backend__mlds_to_cs__HeadVar__2_2)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;

    switch (MR_tag((MR_Word) ml_backend__mlds_to_cs__Type_1)) {
      default:
        ml_backend__mlds_to_cs__succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        switch (MR_unmkbody(ml_backend__mlds_to_cs__Type_1)) {
          default:
            ml_backend__mlds_to_cs__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 1:
            {
              *ml_backend__mlds_to_cs__HeadVar__2_2 = (MR_String) "bool";
              ml_backend__mlds_to_cs__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 2:
            {
              *ml_backend__mlds_to_cs__HeadVar__2_2 = (MR_String) "int";
              ml_backend__mlds_to_cs__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 3:
            {
              *ml_backend__mlds_to_cs__HeadVar__2_2 = (MR_String) "double";
              ml_backend__mlds_to_cs__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 4:
            {
              *ml_backend__mlds_to_cs__HeadVar__2_2 = (MR_String) "int";
              ml_backend__mlds_to_cs__succeeded = MR_TRUE;
            }
            break;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ml_backend__mlds_to_cs__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__Type_1, (MR_Integer) 1)));
          MR_Word ml_backend__mlds_to_cs__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__Type_1, (MR_Integer) 0)));
          MR_Word ml_backend__mlds_to_cs__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__Type_1, (MR_Integer) 2)));

          if (((MR_tag((MR_Word) ml_backend__mlds_to_cs__V_31_31)) == (MR_mktag((MR_Integer) 2))))
            {
              MR_Word ml_backend__mlds_to_cs__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__V_31_31, (MR_Integer) 0)));

              switch (ml_backend__mlds_to_cs__V_32_32) {
                default:
                  ml_backend__mlds_to_cs__succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 3:
                  {
                    *ml_backend__mlds_to_cs__HeadVar__2_2 = (MR_String) "int";
                    ml_backend__mlds_to_cs__succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    *ml_backend__mlds_to_cs__HeadVar__2_2 = (MR_String) "double";
                    ml_backend__mlds_to_cs__succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    *ml_backend__mlds_to_cs__HeadVar__2_2 = (MR_String) "int";
                    ml_backend__mlds_to_cs__succeeded = MR_TRUE;
                  }
                  break;
              }
            }
          else
          if (((MR_tag((MR_Word) ml_backend__mlds_to_cs__V_31_31)) == (MR_mktag((MR_Integer) 1))))
            {
              ml_backend__mlds_to_cs__succeeded = (ml_backend__mlds_to_cs__V_30_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
              if (ml_backend__mlds_to_cs__succeeded)
                {
                  *ml_backend__mlds_to_cs__HeadVar__2_2 = (MR_String) "int";
                  ml_backend__mlds_to_cs__succeeded = MR_TRUE;
                }
            }
          else
            ml_backend__mlds_to_cs__succeeded = MR_FALSE;
        }
        break;
    }
    return ml_backend__mlds_to_cs__succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_unboxed_rval_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_6,
  MR_Word ml_backend__mlds_to_cs__Type_7,
  MR_Word ml_backend__mlds_to_cs__Expr_8)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;

    {
      mercury__io__write_string_3_p_0((MR_String) "((");
    }
    {
      ml_backend__mlds_to_cs__output_type_4_p_0(ml_backend__mlds_to_cs__Info_6, ml_backend__mlds_to_cs__Type_7);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ") ");
    }
    {
      ml_backend__mlds_to_cs__output_rval_4_p_0(ml_backend__mlds_to_cs__Info_6, ml_backend__mlds_to_cs__Expr_8);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ")");
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_cast_rval_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_6,
  MR_Word ml_backend__mlds_to_cs__Type_7,
  MR_Word ml_backend__mlds_to_cs__Expr_8)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded = (ml_backend__mlds_to_cs__Type_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8))));
    MR_Integer ml_backend__mlds_to_cs__N_10;
    MR_Word ml_backend__mlds_to_cs__V_15_15;

    if (ml_backend__mlds_to_cs__succeeded)
      {
        ml_backend__mlds_to_cs__succeeded = ((((MR_tag((MR_Word) ml_backend__mlds_to_cs__Expr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Expr_8, (MR_Integer) 0)))) == (MR_Integer) 0)));
        if (ml_backend__mlds_to_cs__succeeded)
          {
            ml_backend__mlds_to_cs__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Expr_8, (MR_Integer) 1)));
            ml_backend__mlds_to_cs__succeeded = ((MR_tag((MR_Word) ml_backend__mlds_to_cs__V_15_15)) == (MR_mktag((MR_Integer) 2)));
            if (ml_backend__mlds_to_cs__succeeded)
              ml_backend__mlds_to_cs__N_10 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__V_15_15, (MR_Integer) 0)));
          }
      }
    if (ml_backend__mlds_to_cs__succeeded)
      {
        MR_Word ml_backend__mlds_to_cs__AutoComments_51 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 1)))) & (MR_Integer) 1);
        MR_Word ml_backend__mlds_to_cs__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 0)));
        MR_Word ml_backend__mlds_to_cs__V_58_58 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word ml_backend__mlds_to_cs__V_59_59 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word ml_backend__mlds_to_cs__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 2)));
        MR_String ml_backend__mlds_to_cs__V_61_61 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 3)));
        MR_Word ml_backend__mlds_to_cs__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 4)));
        MR_Word ml_backend__mlds_to_cs__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 5)));
        MR_Word ml_backend__mlds_to_cs__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 6)));
        MR_Integer ml_backend__mlds_to_cs__V_67_67;

        switch (ml_backend__mlds_to_cs__AutoComments_51) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "/* ");
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "cast");
              }
              {
                mercury__io__write_string_3_p_0((MR_String) " */");
              }
            }
            break;
        }
        ml_backend__mlds_to_cs__succeeded = (ml_backend__mlds_to_cs__N_10 >= (MR_Integer) 1);
        if (ml_backend__mlds_to_cs__succeeded)
          {
            ml_backend__mlds_to_cs__V_67_67 = (MR_Integer) 5;
            ml_backend__mlds_to_cs__succeeded = (ml_backend__mlds_to_cs__N_10 <= ml_backend__mlds_to_cs__V_67_67);
          }
        if (ml_backend__mlds_to_cs__succeeded)
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "runtime.PseudoTypeInfo.K");
            }
            {
              mercury__io__write_int_3_p_0(ml_backend__mlds_to_cs__N_10);
            }
          }
        else
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "new runtime.PseudoTypeInfo(");
            }
            {
              ml_backend__mlds_to_cs__output_rval_4_p_0(ml_backend__mlds_to_cs__Info_6, ml_backend__mlds_to_cs__Expr_8);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
          }
      }
    else
      {
        if ((ml_backend__mlds_to_cs__Type_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
          ml_backend__mlds_to_cs__succeeded = MR_TRUE;
        else
        if (((MR_tag((MR_Word) ml_backend__mlds_to_cs__Type_7)) == (MR_mktag((MR_Integer) 2))))
          {
            MR_Word ml_backend__mlds_to_cs__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__Type_7, (MR_Integer) 1)));
            MR_Word ml_backend__mlds_to_cs__V_27_27;
            MR_Word ml_backend__mlds_to_cs__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__Type_7, (MR_Integer) 0)));
            MR_Word ml_backend__mlds_to_cs__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__Type_7, (MR_Integer) 2)));

            ml_backend__mlds_to_cs__succeeded = ((((MR_tag((MR_Word) ml_backend__mlds_to_cs__V_26_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__V_26_26, (MR_Integer) 0)))) == (MR_Integer) 0)));
            if (ml_backend__mlds_to_cs__succeeded)
              {
                ml_backend__mlds_to_cs__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__V_26_26, (MR_Integer) 1)));
                ml_backend__mlds_to_cs__succeeded = (ml_backend__mlds_to_cs__V_27_27 == (MR_Integer) 0);
              }
          }
        else
          ml_backend__mlds_to_cs__succeeded = MR_FALSE;
        if (ml_backend__mlds_to_cs__succeeded)
          {
            MR_Word ml_backend__mlds_to_cs__AutoComments_73 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 1)))) & (MR_Integer) 1);
            MR_Word ml_backend__mlds_to_cs__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 0)));
            MR_Word ml_backend__mlds_to_cs__V_80_80 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
            MR_Word ml_backend__mlds_to_cs__V_81_81 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
            MR_Word ml_backend__mlds_to_cs__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 2)));
            MR_String ml_backend__mlds_to_cs__V_83_83 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 3)));
            MR_Word ml_backend__mlds_to_cs__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 4)));
            MR_Word ml_backend__mlds_to_cs__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 5)));
            MR_Word ml_backend__mlds_to_cs__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 6)));

            switch (ml_backend__mlds_to_cs__AutoComments_73) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                }
                break;
              case (MR_Integer) 1:
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) "/* ");
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) "cast");
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " */");
                  }
                }
                break;
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "runtime.TypeInfo_Struct.maybe_new(");
            }
            {
              ml_backend__mlds_to_cs__output_rval_4_p_0(ml_backend__mlds_to_cs__Info_6, ml_backend__mlds_to_cs__Expr_8);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
          }
        else
          {
            MR_String ml_backend__mlds_to_cs__V_45_45;

            {
              ml_backend__mlds_to_cs__succeeded = ml_backend__mlds_to_cs__csharp_builtin_type_2_p_0(ml_backend__mlds_to_cs__Type_7, &ml_backend__mlds_to_cs__V_45_45);
            }
            if (ml_backend__mlds_to_cs__succeeded)
              ml_backend__mlds_to_cs__succeeded = (strcmp((MR_String) "int", ml_backend__mlds_to_cs__V_45_45) == 0);
            if (ml_backend__mlds_to_cs__succeeded)
              {
                {
                  mercury__io__write_string_3_p_0((MR_String) "(int) ");
                }
                {
                  ml_backend__mlds_to_cs__output_rval_4_p_0(ml_backend__mlds_to_cs__Info_6, ml_backend__mlds_to_cs__Expr_8);
                }
              }
            else
              {
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                }
                {
                  ml_backend__mlds_to_cs__output_type_4_p_0(ml_backend__mlds_to_cs__Info_6, ml_backend__mlds_to_cs__Type_7);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) ") ");
                }
                {
                  ml_backend__mlds_to_cs__output_rval_4_p_0(ml_backend__mlds_to_cs__Info_6, ml_backend__mlds_to_cs__Expr_8);
                }
              }
          }
      }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_unop_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_6,
  MR_Word ml_backend__mlds_to_cs__Unop_7,
  MR_Word ml_backend__mlds_to_cs__Expr_8)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;

    switch (MR_tag((MR_Word) ml_backend__mlds_to_cs__Unop_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ml_backend__mlds_to_cs__Type_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Unop_7, (MR_Integer) 0)));
          MR_Word ml_backend__mlds_to_cs__V_18_18;
          MR_Word ml_backend__mlds_to_cs__V_28_28;
          MR_Word ml_backend__mlds_to_cs__V_11_11;
          MR_Word ml_backend__mlds_to_cs__V_12_12;

          ml_backend__mlds_to_cs__succeeded = ((MR_tag((MR_Word) ml_backend__mlds_to_cs__Type_26)) == (MR_mktag((MR_Integer) 2)));
          if (ml_backend__mlds_to_cs__succeeded)
            {
              ml_backend__mlds_to_cs__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__Type_26, (MR_Integer) 0)));
              ml_backend__mlds_to_cs__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__Type_26, (MR_Integer) 1)));
              ml_backend__mlds_to_cs__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__Type_26, (MR_Integer) 2)));
              {
                ml_backend__mlds_to_cs__V_28_28 = parse_tree__builtin_lib_types__comparison_result_type_0_f_0();
              }
              {
                ml_backend__mlds_to_cs__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ml_backend__mlds_to_cs__V_18_18, ml_backend__mlds_to_cs__V_28_28);
              }
            }
          if (ml_backend__mlds_to_cs__succeeded)
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "builtin.comparison_result_object[(int) ");
              }
              {
                ml_backend__mlds_to_cs__output_rval_4_p_0(ml_backend__mlds_to_cs__Info_6, ml_backend__mlds_to_cs__Expr_8);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "]");
              }
            }
          else
            {
              ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_98_111_120_101_100_95_114_118_97_108_95_95_91_50_93_95_48_5_p_0(ml_backend__mlds_to_cs__Info_6, ml_backend__mlds_to_cs__Expr_8);
            }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__mlds_to_cs__Type_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__Unop_7, (MR_Integer) 0)));

          {
            ml_backend__mlds_to_cs__output_unboxed_rval_5_p_0(ml_backend__mlds_to_cs__Info_6, ml_backend__mlds_to_cs__Type_27, ml_backend__mlds_to_cs__Expr_8);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ml_backend__mlds_to_cs__Type_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__Unop_7, (MR_Integer) 0)));

          {
            ml_backend__mlds_to_cs__output_cast_rval_5_p_0(ml_backend__mlds_to_cs__Info_6, ml_backend__mlds_to_cs__Type_10, ml_backend__mlds_to_cs__Expr_8);
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word ml_backend__mlds_to_cs__StdUnop_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Unop_7, (MR_Integer) 0)));

          {
            ml_backend__mlds_to_cs__output_std_unop_5_p_0(ml_backend__mlds_to_cs__Info_6, ml_backend__mlds_to_cs__StdUnop_13, ml_backend__mlds_to_cs__Expr_8);
          }
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_rval_4_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_5,
  MR_Word ml_backend__mlds_to_cs__Rval_6)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;

    switch (MR_tag((MR_Word) ml_backend__mlds_to_cs__Rval_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "ml_backend.mlds_to_cs", (MR_String) "predicate \140ml_backend.mlds_to_cs.output_rval\'/4", (MR_String) "ml_scalar_common");
            return;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__mlds_to_cs__Lval_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__Rval_6, (MR_Integer) 0)));

          {
            ml_backend__mlds_to_cs__output_lval_4_p_0(ml_backend__mlds_to_cs__Info_5, ml_backend__mlds_to_cs__Lval_8);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "ml_backend.mlds_to_cs", (MR_String) "predicate \140ml_backend.mlds_to_cs.output_rval\'/4", (MR_String) "tags not supported in C#");
            return;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Rval_6, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ml_backend__mlds_to_cs__Const_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Rval_6, (MR_Integer) 1)));

              {
                ml_backend__mlds_to_cs__output_rval_const_4_p_0(ml_backend__mlds_to_cs__Info_5, ml_backend__mlds_to_cs__Const_11);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ml_backend__mlds_to_cs__Op_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Rval_6, (MR_Integer) 1)));
              MR_Word ml_backend__mlds_to_cs__RvalA_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Rval_6, (MR_Integer) 2)));

              {
                ml_backend__mlds_to_cs__output_unop_5_p_0(ml_backend__mlds_to_cs__Info_5, ml_backend__mlds_to_cs__Op_12, ml_backend__mlds_to_cs__RvalA_13);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ml_backend__mlds_to_cs__RvalB_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Rval_6, (MR_Integer) 3)));
              MR_Word ml_backend__mlds_to_cs__Op_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Rval_6, (MR_Integer) 1)));
              MR_Word ml_backend__mlds_to_cs__RvalA_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Rval_6, (MR_Integer) 2)));

              {
                ml_backend__mlds_to_cs__output_binop_6_p_0(ml_backend__mlds_to_cs__Info_5, ml_backend__mlds_to_cs__Op_37, ml_backend__mlds_to_cs__RvalA_38, ml_backend__mlds_to_cs__RvalB_14);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ml_backend__mlds_to_cs__Lval_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Rval_6, (MR_Integer) 1)));

              {
                mercury__io__write_string_3_p_0((MR_String) "out ");
              }
              {
                ml_backend__mlds_to_cs__output_lval_4_p_0(ml_backend__mlds_to_cs__Info_5, ml_backend__mlds_to_cs__Lval_39);
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ml_backend__mlds_to_cs__VectorCommon_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Rval_6, (MR_Integer) 1)));
              MR_Word ml_backend__mlds_to_cs__RowRval_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Rval_6, (MR_Integer) 2)));

              {
                ml_backend__mlds_to_cs__output_vector_common_row_rval_5_p_0(ml_backend__mlds_to_cs__Info_5, ml_backend__mlds_to_cs__VectorCommon_16, ml_backend__mlds_to_cs__RowRval_17);
              }
            }
            break;
          case (MR_Integer) 5:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "this");
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_bracketed_rval_4_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_5,
  MR_Word ml_backend__mlds_to_cs__Rval_6)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;

    if (((MR_tag((MR_Word) ml_backend__mlds_to_cs__Rval_6)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word ml_backend__mlds_to_cs__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__Rval_6, (MR_Integer) 0)));
        MR_Word ml_backend__mlds_to_cs__V_8_8;
        MR_Word ml_backend__mlds_to_cs__V_9_9;

        ml_backend__mlds_to_cs__succeeded = ((MR_tag((MR_Word) ml_backend__mlds_to_cs__V_14_14)) == (MR_mktag((MR_Integer) 3)));
        if (ml_backend__mlds_to_cs__succeeded)
          {
            ml_backend__mlds_to_cs__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__V_14_14, (MR_Integer) 0)));
            ml_backend__mlds_to_cs__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__V_14_14, (MR_Integer) 1)));
          }
      }
    else
    if (((((MR_tag((MR_Word) ml_backend__mlds_to_cs__Rval_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Rval_6, (MR_Integer) 0)))) == (MR_Integer) 0))))
      {
        MR_Word ml_backend__mlds_to_cs__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Rval_6, (MR_Integer) 1)));
        MR_Word ml_backend__mlds_to_cs__V_10_10;

        ml_backend__mlds_to_cs__succeeded = ((((MR_tag((MR_Word) ml_backend__mlds_to_cs__V_13_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__V_13_13, (MR_Integer) 0)))) == (MR_Integer) 7)));
        if (ml_backend__mlds_to_cs__succeeded)
          ml_backend__mlds_to_cs__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__V_13_13, (MR_Integer) 1)));
      }
    else
      ml_backend__mlds_to_cs__succeeded = MR_FALSE;
    if (ml_backend__mlds_to_cs__succeeded)
      {
        ml_backend__mlds_to_cs__output_rval_4_p_0(ml_backend__mlds_to_cs__Info_5, ml_backend__mlds_to_cs__Rval_6);
      }
    else
      {
        {
          mercury__io__write_char_3_p_0((MR_Char) 40);
        }
        {
          ml_backend__mlds_to_cs__output_rval_4_p_0(ml_backend__mlds_to_cs__Info_5, ml_backend__mlds_to_cs__Rval_6);
        }
        {
          mercury__io__write_char_3_p_0((MR_Char) 41);
        }
      }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_call_rval_4_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_5,
  MR_Word ml_backend__mlds_to_cs__Rval_6)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded = ((((MR_tag((MR_Word) ml_backend__mlds_to_cs__Rval_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Rval_6, (MR_Integer) 0)))) == (MR_Integer) 0)));
    MR_Word ml_backend__mlds_to_cs__CodeAddr_9;
    MR_Word ml_backend__mlds_to_cs__Const_8;

    if (ml_backend__mlds_to_cs__succeeded)
      {
        ml_backend__mlds_to_cs__Const_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Rval_6, (MR_Integer) 1)));
        ml_backend__mlds_to_cs__succeeded = ((((MR_tag((MR_Word) ml_backend__mlds_to_cs__Const_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Const_8, (MR_Integer) 0)))) == (MR_Integer) 7)));
        if (ml_backend__mlds_to_cs__succeeded)
          ml_backend__mlds_to_cs__CodeAddr_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Const_8, (MR_Integer) 1)));
      }
    if (ml_backend__mlds_to_cs__succeeded)
      {
        {
          ml_backend__mlds_to_cs__mlds_output_code_addr_5_p_0(ml_backend__mlds_to_cs__Info_5, ml_backend__mlds_to_cs__CodeAddr_9, (MR_Integer) 1);
        }
      }
    else
      {
        if (((MR_tag((MR_Word) ml_backend__mlds_to_cs__Rval_6)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Word ml_backend__mlds_to_cs__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__Rval_6, (MR_Integer) 0)));
            MR_Word ml_backend__mlds_to_cs__V_20_20;
            MR_Word ml_backend__mlds_to_cs__V_21_21;

            ml_backend__mlds_to_cs__succeeded = ((MR_tag((MR_Word) ml_backend__mlds_to_cs__V_24_24)) == (MR_mktag((MR_Integer) 3)));
            if (ml_backend__mlds_to_cs__succeeded)
              {
                ml_backend__mlds_to_cs__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__V_24_24, (MR_Integer) 0)));
                ml_backend__mlds_to_cs__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__V_24_24, (MR_Integer) 1)));
              }
          }
        else
        if (((((MR_tag((MR_Word) ml_backend__mlds_to_cs__Rval_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Rval_6, (MR_Integer) 0)))) == (MR_Integer) 0))))
          {
            MR_Word ml_backend__mlds_to_cs__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Rval_6, (MR_Integer) 1)));
            MR_Word ml_backend__mlds_to_cs__V_22_22;

            ml_backend__mlds_to_cs__succeeded = ((((MR_tag((MR_Word) ml_backend__mlds_to_cs__V_23_23)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__V_23_23, (MR_Integer) 0)))) == (MR_Integer) 7)));
            if (ml_backend__mlds_to_cs__succeeded)
              ml_backend__mlds_to_cs__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__V_23_23, (MR_Integer) 1)));
          }
        else
          ml_backend__mlds_to_cs__succeeded = MR_FALSE;
        if (ml_backend__mlds_to_cs__succeeded)
          {
            ml_backend__mlds_to_cs__output_rval_4_p_0(ml_backend__mlds_to_cs__Info_5, ml_backend__mlds_to_cs__Rval_6);
          }
        else
          {
            {
              mercury__io__write_char_3_p_0((MR_Char) 40);
            }
            {
              ml_backend__mlds_to_cs__output_rval_4_p_0(ml_backend__mlds_to_cs__Info_5, ml_backend__mlds_to_cs__Rval_6);
            }
            {
              mercury__io__write_char_3_p_0((MR_Char) 41);
            }
          }
      }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_valid_mangled_name_3_p_0(
  MR_String ml_backend__mlds_to_cs__Name_4)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_String ml_backend__mlds_to_cs__MangledName_6;
    MR_String ml_backend__mlds_to_cs__JavaSafeName_7;

    {
      ml_backend__mlds_to_cs__MangledName_6 = parse_tree__prog_foreign__name_mangle_1_f_0(ml_backend__mlds_to_cs__Name_4);
    }
    {
      ml_backend__mlds_to_cs__JavaSafeName_7 = parse_tree__java_names__valid_csharp_symbol_name_1_f_0(ml_backend__mlds_to_cs__MangledName_6);
    }
    {
      ml_backend__mlds_to_cs__write_identifier_string_3_p_0(ml_backend__mlds_to_cs__JavaSafeName_7);
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_lval_4_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_5,
  MR_Word ml_backend__mlds_to_cs__Lval_6)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;

    switch (MR_tag((MR_Word) ml_backend__mlds_to_cs__Lval_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ml_backend__mlds_to_cs__PtrRval_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Lval_6, (MR_Integer) 1)));
          MR_Word ml_backend__mlds_to_cs__FieldId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Lval_6, (MR_Integer) 2)));
          MR_Word ml_backend__mlds_to_cs__FieldType_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Lval_6, (MR_Integer) 3)));
          MR_Word ml_backend__mlds_to_cs___MaybeTag_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Lval_6, (MR_Integer) 0)));
          MR_Word ml_backend__mlds_to_cs__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Lval_6, (MR_Integer) 4)));

          if (((MR_tag((MR_Word) ml_backend__mlds_to_cs__FieldId_10)) == (MR_mktag((MR_Integer) 1))))
            {
              MR_Word ml_backend__mlds_to_cs__FieldName_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__FieldId_10, (MR_Integer) 0)));
              MR_Word ml_backend__mlds_to_cs__CtorType_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__FieldId_10, (MR_Integer) 1)));
              MR_String ml_backend__mlds_to_cs__UnqualFieldName_22 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__FieldName_18, (MR_Integer) 2)));
              MR_Word ml_backend__mlds_to_cs__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__FieldName_18, (MR_Integer) 0)));
              MR_Word ml_backend__mlds_to_cs__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__FieldName_18, (MR_Integer) 1)));
              MR_String ml_backend__mlds_to_cs__V_97_97;
              MR_Word ml_backend__mlds_to_cs__V_20_20;
              MR_Word ml_backend__mlds_to_cs__V_21_21;

              ml_backend__mlds_to_cs__succeeded = (strcmp(ml_backend__mlds_to_cs__UnqualFieldName_22, (MR_String) "data_tag") == 0);
              if (ml_backend__mlds_to_cs__succeeded)
                {
                  ml_backend__mlds_to_cs__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__FieldName_18, (MR_Integer) 0)));
                  ml_backend__mlds_to_cs__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__FieldName_18, (MR_Integer) 1)));
                  ml_backend__mlds_to_cs__V_97_97 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__FieldName_18, (MR_Integer) 2)));
                  ml_backend__mlds_to_cs__succeeded = (strcmp(ml_backend__mlds_to_cs__UnqualFieldName_22, ml_backend__mlds_to_cs__V_97_97) == 0);
                }
              if (ml_backend__mlds_to_cs__succeeded)
                {
                  {
                    ml_backend__mlds_to_cs__output_bracketed_rval_4_p_0(ml_backend__mlds_to_cs__Info_5, ml_backend__mlds_to_cs__PtrRval_9);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ".");
                  }
                }
              else
                {
                  MR_Word ml_backend__mlds_to_cs__V_23_23;

                  ml_backend__mlds_to_cs__succeeded = ((((MR_tag((MR_Word) ml_backend__mlds_to_cs__PtrRval_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__PtrRval_9, (MR_Integer) 0)))) == (MR_Integer) 5)));
                  if (ml_backend__mlds_to_cs__succeeded)
                    {
                      ml_backend__mlds_to_cs__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__PtrRval_9, (MR_Integer) 1)));
                      {
                        ml_backend__mlds_to_cs__output_rval_4_p_0(ml_backend__mlds_to_cs__Info_5, ml_backend__mlds_to_cs__PtrRval_9);
                      }
                      {
                        mercury__io__write_string_3_p_0((MR_String) ".");
                      }
                    }
                  else
                    {
                      {
                        mercury__io__write_string_3_p_0((MR_String) "((");
                      }
                      {
                        ml_backend__mlds_to_cs__output_type_4_p_0(ml_backend__mlds_to_cs__Info_5, ml_backend__mlds_to_cs__CtorType_19);
                      }
                      {
                        mercury__io__write_string_3_p_0((MR_String) ") ");
                      }
                      {
                        ml_backend__mlds_to_cs__output_bracketed_rval_4_p_0(ml_backend__mlds_to_cs__Info_5, ml_backend__mlds_to_cs__PtrRval_9);
                      }
                      {
                        mercury__io__write_string_3_p_0((MR_String) ").");
                      }
                    }
                }
              {
                ml_backend__mlds_to_cs__output_valid_mangled_name_3_p_0(ml_backend__mlds_to_cs__UnqualFieldName_22);
              }
            }
          else
            {
              MR_Word ml_backend__mlds_to_cs__OffsetRval_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__FieldId_10, (MR_Integer) 0)));

              if ((ml_backend__mlds_to_cs__FieldType_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
                ml_backend__mlds_to_cs__succeeded = MR_TRUE;
              else
              if (((MR_tag((MR_Word) ml_backend__mlds_to_cs__FieldType_11)) == (MR_mktag((MR_Integer) 2))))
                {
                  MR_Word ml_backend__mlds_to_cs__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__FieldType_11, (MR_Integer) 0)));
                  MR_Word ml_backend__mlds_to_cs__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__FieldType_11, (MR_Integer) 1)));
                  MR_Word ml_backend__mlds_to_cs__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__FieldType_11, (MR_Integer) 2)));
                  MR_Word ml_backend__mlds_to_cs__V_14_14;
                  MR_Word ml_backend__mlds_to_cs__V_15_15;

                  ml_backend__mlds_to_cs__succeeded = ((MR_tag((MR_Word) ml_backend__mlds_to_cs__V_84_84)) == (MR_mktag((MR_Integer) 0)));
                  if (ml_backend__mlds_to_cs__succeeded)
                    {
                      ml_backend__mlds_to_cs__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_84_84, (MR_Integer) 0)));
                      ml_backend__mlds_to_cs__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_84_84, (MR_Integer) 1)));
                    }
                }
              else
                ml_backend__mlds_to_cs__succeeded = MR_FALSE;
              if (ml_backend__mlds_to_cs__succeeded)
                {
                }
              else
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "ml_backend.mlds_to_cs", (MR_String) "predicate \140ml_backend.mlds_to_cs.output_lval\'/4", (MR_String) "unexpected field type");
                    return;
                  }
                }
              {
                mercury__io__write_string_3_p_0((MR_String) "((object[]) ");
              }
              {
                ml_backend__mlds_to_cs__output_rval_4_p_0(ml_backend__mlds_to_cs__Info_5, ml_backend__mlds_to_cs__PtrRval_9);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ")[");
              }
              {
                ml_backend__mlds_to_cs__output_rval_4_p_0(ml_backend__mlds_to_cs__Info_5, ml_backend__mlds_to_cs__OffsetRval_13);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "]");
              }
            }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__mlds_to_cs__Rval_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__Lval_6, (MR_Integer) 0)));
          MR_Word ml_backend__mlds_to_cs___Type_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__Lval_6, (MR_Integer) 1)));

          {
            ml_backend__mlds_to_cs__output_bracketed_rval_4_p_0(ml_backend__mlds_to_cs__Info_5, ml_backend__mlds_to_cs__Rval_26);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ml_backend__mlds_to_cs__GlobalVarRef_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__Lval_6, (MR_Integer) 0)));
          MR_String ml_backend__mlds_to_cs__EnvVarName_29 = (MR_String) ml_backend__mlds_to_cs__GlobalVarRef_28;

          {
            mercury__io__write_string_3_p_0((MR_String) "mercury_envvar_");
          }
          {
            mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__EnvVarName_29);
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word ml_backend__mlds_to_cs__ModName_30;
          MR_Word ml_backend__mlds_to_cs__QualKind_31;
          MR_Word ml_backend__mlds_to_cs__Name_32;
          MR_String ml_backend__mlds_to_cs__NameStr_34;
          MR_Word ml_backend__mlds_to_cs__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Lval_6, (MR_Integer) 0)));
          MR_Word ml_backend__mlds_to_cs__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Lval_6, (MR_Integer) 1)));
          MR_Word ml_backend__mlds_to_cs__V_35_35;
          MR_Word ml_backend__mlds_to_cs__SymName_36;
          MR_Word ml_backend__mlds_to_cs__V_42_42;
          MR_String ml_backend__mlds_to_cs__V_98_98;
          MR_Word ml_backend__mlds_to_cs__V_99_99;

          ml_backend__mlds_to_cs__ModName_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_40_40, (MR_Integer) 0)));
          ml_backend__mlds_to_cs__QualKind_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_40_40, (MR_Integer) 1)));
          ml_backend__mlds_to_cs__Name_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_40_40, (MR_Integer) 2)));
          ml_backend__mlds_to_cs__NameStr_34 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Name_32, (MR_Integer) 0)));
          ml_backend__mlds_to_cs__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Name_32, (MR_Integer) 1)));
          {
            ml_backend__mlds_to_cs__SymName_36 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ml_backend__mlds_to_cs__ModName_30);
          }
          {
            ml_backend__mlds_to_cs__V_42_42 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
          }
          {
            ml_backend__mlds_to_cs__succeeded = mdbcomp__sym_name__strip_outermost_qualifier_3_p_0(ml_backend__mlds_to_cs__SymName_36, &ml_backend__mlds_to_cs__V_98_98, &ml_backend__mlds_to_cs__V_99_99);
          }
          if (ml_backend__mlds_to_cs__succeeded)
            {
              ml_backend__mlds_to_cs__succeeded = (strcmp((MR_String) "mercury", ml_backend__mlds_to_cs__V_98_98) == 0);
              if (ml_backend__mlds_to_cs__succeeded)
                {
                  ml_backend__mlds_to_cs__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ml_backend__mlds_to_cs__V_42_42, ml_backend__mlds_to_cs__V_99_99);
                }
            }
          if (ml_backend__mlds_to_cs__succeeded)
            {
              {
                ml_backend__mlds_to_cs__succeeded = mercury__string__prefix_2_p_0(ml_backend__mlds_to_cs__NameStr_34, (MR_String) "MR_TYPECTOR_REP_");
              }
              if (ml_backend__mlds_to_cs__succeeded)
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) "runtime.TypeCtorRep.");
                  }
                  {
                    mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__NameStr_34);
                  }
                }
              else
                {
                  {
                    ml_backend__mlds_to_cs__succeeded = mercury__string__prefix_2_p_0(ml_backend__mlds_to_cs__NameStr_34, (MR_String) "MR_SECTAG_");
                  }
                  if (ml_backend__mlds_to_cs__succeeded)
                    {
                      {
                        mercury__io__write_string_3_p_0((MR_String) "runtime.Sectag_Locn.");
                      }
                      {
                        mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__NameStr_34);
                      }
                    }
                  else
                    {
                      {
                        ml_backend__mlds_to_cs__succeeded = mercury__string__prefix_2_p_0(ml_backend__mlds_to_cs__NameStr_34, (MR_String) "MR_FUNCTOR_SUBTYPE_");
                      }
                      if (ml_backend__mlds_to_cs__succeeded)
                        {
                          {
                            mercury__io__write_string_3_p_0((MR_String) "runtime.FunctorSubtypeInfo.");
                          }
                          {
                            mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__NameStr_34);
                          }
                        }
                      else
                        {
                          ml_backend__mlds_to_cs__succeeded = (strcmp(ml_backend__mlds_to_cs__NameStr_34, (MR_String) "MR_PREDICATE") == 0);
                          if (ml_backend__mlds_to_cs__succeeded)
                            {
                              {
                                mercury__io__write_string_3_p_0((MR_String) "runtime.Constants.MR_PREDICATE");
                              }
                            }
                          else
                            {
                              ml_backend__mlds_to_cs__succeeded = (strcmp(ml_backend__mlds_to_cs__NameStr_34, (MR_String) "MR_FUNCTION") == 0);
                              if (ml_backend__mlds_to_cs__succeeded)
                                {
                                  {
                                    mercury__io__write_string_3_p_0((MR_String) "runtime.Constants.MR_FUNCTION");
                                  }
                                }
                              else
                                {
                                  MR_Word ml_backend__mlds_to_cs__QualName_37;
                                  MR_Word ml_backend__mlds_to_cs__V_59_59;
                                  MR_Word ml_backend__mlds_to_cs__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__mlds_to_cs__Name_32);

                                  {
                                    ml_backend__mlds_to_cs__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                    MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__V_59_59, 0) = ((MR_Box) (ml_backend__mlds_to_cs__V_60_60));
                                  }
                                  {
                                    ml_backend__mlds_to_cs__QualName_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                                    MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__QualName_37, 0) = ((MR_Box) (ml_backend__mlds_to_cs__ModName_30));
                                    MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__QualName_37, 1) = ((MR_Box) (ml_backend__mlds_to_cs__QualKind_31));
                                    MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__QualName_37, 2) = ((MR_Box) (ml_backend__mlds_to_cs__V_59_59));
                                  }
                                  {
                                    ml_backend__mlds_to_cs__output_maybe_qualified_name_4_p_0(ml_backend__mlds_to_cs__Info_5, ml_backend__mlds_to_cs__QualName_37);
                                  }
                                }
                            }
                        }
                    }
                }
            }
          else
            {
              MR_Word ml_backend__mlds_to_cs__V_62_62;
              MR_Word ml_backend__mlds_to_cs__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__mlds_to_cs__Name_32);
              MR_Word ml_backend__mlds_to_cs__QualName_96;

              {
                ml_backend__mlds_to_cs__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__V_62_62, 0) = ((MR_Box) (ml_backend__mlds_to_cs__V_63_63));
              }
              {
                ml_backend__mlds_to_cs__QualName_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__QualName_96, 0) = ((MR_Box) (ml_backend__mlds_to_cs__ModName_30));
                MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__QualName_96, 1) = ((MR_Box) (ml_backend__mlds_to_cs__QualKind_31));
                MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__QualName_96, 2) = ((MR_Box) (ml_backend__mlds_to_cs__V_62_62));
              }
              {
                ml_backend__mlds_to_cs__output_maybe_qualified_name_4_p_0(ml_backend__mlds_to_cs__Info_5, ml_backend__mlds_to_cs__QualName_96);
              }
            }
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_init_args_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_1,
  MR_Word ml_backend__mlds_to_cs__HeadVar__2_2,
  MR_Word ml_backend__mlds_to_cs__HeadVar__3_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ml_backend__mlds_to_cs__succeeded;

        if ((ml_backend__mlds_to_cs__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          if ((ml_backend__mlds_to_cs__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
            }
          else
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ml_backend.mlds_to_cs", (MR_String) "predicate \140ml_backend.mlds_to_cs.output_init_args\'/5", (MR_String) "length mismatch.");
                return;
              }
            }
        else
          {
            MR_Word ml_backend__mlds_to_cs__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word ml_backend__mlds_to_cs__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__HeadVar__2_2, (MR_Integer) 0)));

            if ((ml_backend__mlds_to_cs__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "ml_backend.mlds_to_cs", (MR_String) "predicate \140ml_backend.mlds_to_cs.output_init_args\'/5", (MR_String) "length mismatch.");
                  return;
                }
              }
            else
              {
                MR_Word ml_backend__mlds_to_cs__ArgTypes_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__HeadVar__3_3, (MR_Integer) 1)));
                MR_Word ml_backend__mlds_to_cs___ArgType_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__HeadVar__3_3, (MR_Integer) 0)));

                {
                  ml_backend__mlds_to_cs__output_rval_4_p_0(ml_backend__mlds_to_cs__Info_1, ml_backend__mlds_to_cs__V_41_41);
                }
                if ((ml_backend__mlds_to_cs__V_40_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                  }
                else
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) ", ");
                    }
                  }
                /* direct tailcall eliminated */
                {
                  MR_Word ml_backend__mlds_to_cs__HeadVar__2__tmp_copy_2 = ml_backend__mlds_to_cs__V_40_40;
                  MR_Word ml_backend__mlds_to_cs__HeadVar__3__tmp_copy_3 = ml_backend__mlds_to_cs__ArgTypes_30;

                  ml_backend__mlds_to_cs__HeadVar__3_3 = ml_backend__mlds_to_cs__HeadVar__3__tmp_copy_3;
                  ml_backend__mlds_to_cs__HeadVar__2_2 = ml_backend__mlds_to_cs__HeadVar__2__tmp_copy_2;
                }
                continue;
              }
          }
      }
      break;
    }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_target_code_component_4_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_5,
  MR_Word ml_backend__mlds_to_cs__TargetCode_6)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;

    switch (MR_tag((MR_Word) ml_backend__mlds_to_cs__TargetCode_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String ml_backend__mlds_to_cs__CodeString_8 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__TargetCode_6, (MR_Integer) 0)));
          MR_Word ml_backend__mlds_to_cs__MaybeUserContext_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__TargetCode_6, (MR_Integer) 1)));
          MR_Word ml_backend__mlds_to_cs__V_33_33;
          MR_Word ml_backend__mlds_to_cs__V_44_44;
          MR_Word ml_backend__mlds_to_cs__V_45_45;
          MR_Word ml_backend__mlds_to_cs__V_46_46;
          MR_Word ml_backend__mlds_to_cs__V_47_47;
          MR_String ml_backend__mlds_to_cs__V_48_48;
          MR_Word ml_backend__mlds_to_cs__V_49_49;
          MR_Word ml_backend__mlds_to_cs__V_50_50;
          MR_Word ml_backend__mlds_to_cs__V_51_51;

          {
            mercury__io__write_string_3_p_0((MR_String) "{\n");
          }
          if ((ml_backend__mlds_to_cs__MaybeUserContext_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
            }
          else
            {
              MR_Word ml_backend__mlds_to_cs__ProgContext_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__MaybeUserContext_9, (MR_Integer) 0)));
              MR_Word ml_backend__mlds_to_cs__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
              MR_Word ml_backend__mlds_to_cs__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 0)));
              MR_Word ml_backend__mlds_to_cs__V_37_37 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 1)))) & (MR_Integer) 1);
              MR_Word ml_backend__mlds_to_cs__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              MR_Word ml_backend__mlds_to_cs__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 2)));
              MR_String ml_backend__mlds_to_cs__V_40_40 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 3)));
              MR_Word ml_backend__mlds_to_cs__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 4)));
              MR_Word ml_backend__mlds_to_cs__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 5)));
              MR_Word ml_backend__mlds_to_cs__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 6)));

              switch (ml_backend__mlds_to_cs__V_28_28) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_String ml_backend__mlds_to_cs__File_57 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__ProgContext_10, (MR_Integer) 0)));
                    MR_Integer ml_backend__mlds_to_cs__Line_58 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__ProgContext_10, (MR_Integer) 1)));

                    ml_backend__mlds_to_cs__succeeded = (ml_backend__mlds_to_cs__Line_58 > (MR_Integer) 0);
                    if (ml_backend__mlds_to_cs__succeeded)
                      {
                        ml_backend__mlds_to_cs__succeeded = (strcmp(ml_backend__mlds_to_cs__File_57, (MR_String) "") == 0);
                        ml_backend__mlds_to_cs__succeeded = !(ml_backend__mlds_to_cs__succeeded);
                      }
                    if (ml_backend__mlds_to_cs__succeeded)
                      {
                        MR_String ml_backend__mlds_to_cs__V_70_70;

                        {
                          mercury__io__write_string_3_p_0((MR_String) "#line ");
                        }
                        {
                          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ml_backend__mlds_to_cs_scalar_common_9[0], ml_backend__mlds_to_cs__Line_58, &ml_backend__mlds_to_cs__V_70_70);
                        }
                        {
                          mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__V_70_70);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) " \"");
                        }
                        {
                          mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__File_57);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) "\"\n");
                        }
                      }
                    else
                      {
                      }
                  }
                  break;
              }
            }
          {
            mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__CodeString_8);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "}\n");
          }
          ml_backend__mlds_to_cs__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 0)));
          ml_backend__mlds_to_cs__V_45_45 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 1)))) & (MR_Integer) 1);
          ml_backend__mlds_to_cs__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          ml_backend__mlds_to_cs__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
          ml_backend__mlds_to_cs__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 2)));
          ml_backend__mlds_to_cs__V_48_48 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 3)));
          ml_backend__mlds_to_cs__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 4)));
          ml_backend__mlds_to_cs__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 5)));
          ml_backend__mlds_to_cs__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 6)));
          switch (ml_backend__mlds_to_cs__V_33_33) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
              }
              break;
            case (MR_Integer) 1:
              {
                {
                  mercury__io__write_string_3_p_0((MR_String) "#line default\n");
                }
              }
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String ml_backend__mlds_to_cs__CodeString_35 = ((MR_String) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__TargetCode_6, (MR_Integer) 0)));

          {
            mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__CodeString_35);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ml_backend__mlds_to_cs__Rval_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__TargetCode_6, (MR_Integer) 0)));

          {
            ml_backend__mlds_to_cs__output_rval_4_p_0(ml_backend__mlds_to_cs__Info_5, ml_backend__mlds_to_cs__Rval_11);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__TargetCode_6, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ml_backend__mlds_to_cs__Lval_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__TargetCode_6, (MR_Integer) 1)));

              {
                ml_backend__mlds_to_cs__output_lval_4_p_0(ml_backend__mlds_to_cs__Info_5, ml_backend__mlds_to_cs__Lval_12);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ml_backend__mlds_to_cs__Type_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__TargetCode_6, (MR_Integer) 1)));

              {
                ml_backend__mlds_to_cs__output_type_4_p_0(ml_backend__mlds_to_cs__Info_5, ml_backend__mlds_to_cs__Type_13);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ml_backend__mlds_to_cs__Name_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__TargetCode_6, (MR_Integer) 1)));

              {
                ml_backend__mlds_to_cs__output_maybe_qualified_name_4_p_0(ml_backend__mlds_to_cs__Info_5, ml_backend__mlds_to_cs__Name_14);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ml_backend.mlds_to_cs", (MR_String) "predicate \140ml_backend.mlds_to_cs.output_target_code_component\'/4", (MR_String) "target_code_alloc_id not implemented");
                return;
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_atomic_stmt_6_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3)
{
  {
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;

    {
      ml_backend__mlds_to_cs__output_target_code_component_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_atomic_stmt_6_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_7,
  MR_Integer ml_backend__mlds_to_cs__Indent_8,
  MR_Word ml_backend__mlds_to_cs__AtomicStmt_9,
  MR_Word ml_backend__mlds_to_cs__Context_10)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;

    switch (MR_tag((MR_Word) ml_backend__mlds_to_cs__AtomicStmt_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "ml_backend.mlds_to_cs", (MR_String) "predicate \140ml_backend.mlds_to_cs.output_atomic_stmt\'/6", (MR_String) "gc_check not implemented.");
            return;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String ml_backend__mlds_to_cs__Comment_12 = ((MR_String) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__AtomicStmt_9, (MR_Integer) 0)));

          {
            ml_backend__mlds_to_cs__indent_line_3_p_0(ml_backend__mlds_to_cs__Indent_8);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "/* ");
          }
          {
            mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__Comment_12);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) " */\n");
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ml_backend__mlds_to_cs__Lval_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__AtomicStmt_9, (MR_Integer) 0)));
          MR_Word ml_backend__mlds_to_cs__Rval_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__AtomicStmt_9, (MR_Integer) 1)));
          MR_Word ml_backend__mlds_to_cs__V_111_111 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_7, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          MR_Word ml_backend__mlds_to_cs__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_7, (MR_Integer) 0)));
          MR_Word ml_backend__mlds_to_cs__V_128_128 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_7, (MR_Integer) 1)))) & (MR_Integer) 1);
          MR_Word ml_backend__mlds_to_cs__V_129_129 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_7, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
          MR_Word ml_backend__mlds_to_cs__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_7, (MR_Integer) 2)));
          MR_String ml_backend__mlds_to_cs__V_131_131 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_7, (MR_Integer) 3)));
          MR_Word ml_backend__mlds_to_cs__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_7, (MR_Integer) 4)));
          MR_Word ml_backend__mlds_to_cs__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_7, (MR_Integer) 5)));
          MR_Word ml_backend__mlds_to_cs__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_7, (MR_Integer) 6)));

          {
            ml_backend__mlds_to_cs__indent_line_5_p_0(ml_backend__mlds_to_cs__V_111_111, ml_backend__mlds_to_cs__Context_10, ml_backend__mlds_to_cs__Indent_8);
          }
          {
            ml_backend__mlds_to_cs__output_lval_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Lval_13);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) " = ");
          }
          {
            ml_backend__mlds_to_cs__output_rval_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Rval_14);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) ";\n");
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__AtomicStmt_9, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                mercury__require__sorry_3_p_0((MR_String) "ml_backend.mlds_to_cs", (MR_String) "predicate \140ml_backend.mlds_to_cs.output_atomic_stmt\'/6", (MR_String) "assign_if_in_heap");
                return;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ml_backend.mlds_to_cs", (MR_String) "predicate \140ml_backend.mlds_to_cs.output_atomic_stmt\'/6", (MR_String) "delete_object not supported in C#.");
                return;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ml_backend__mlds_to_cs__Target_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__AtomicStmt_9, (MR_Integer) 1)));
              MR_Word ml_backend__mlds_to_cs__ExplicitSecTag_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__AtomicStmt_9, (MR_Integer) 3)));
              MR_Word ml_backend__mlds_to_cs__Type_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__AtomicStmt_9, (MR_Integer) 4)));
              MR_Word ml_backend__mlds_to_cs__MaybeCtorName_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__AtomicStmt_9, (MR_Integer) 6)));
              MR_Word ml_backend__mlds_to_cs__Args_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__AtomicStmt_9, (MR_Integer) 7)));
              MR_Word ml_backend__mlds_to_cs__ArgTypes_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__AtomicStmt_9, (MR_Integer) 8)));
              MR_Word ml_backend__mlds_to_cs__IsArray_39;
              MR_Word ml_backend__mlds_to_cs__V_75_75;
              MR_Word ml_backend__mlds_to_cs__V_79_79;
              MR_Integer ml_backend__mlds_to_cs__V_80_80;
              MR_Word ml_backend__mlds_to_cs__V_101_101;
              MR_Word ml_backend__mlds_to_cs___MaybeTag_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__AtomicStmt_9, (MR_Integer) 2)));
              MR_Word ml_backend__mlds_to_cs___MaybeSize_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__AtomicStmt_9, (MR_Integer) 5)));
              MR_Word ml_backend__mlds_to_cs___MayUseAtomic_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__AtomicStmt_9, (MR_Integer) 9)));
              MR_Word ml_backend__mlds_to_cs___AllocId_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__AtomicStmt_9, (MR_Integer) 10)));
              MR_Word ml_backend__mlds_to_cs__V_135_135;
              MR_Word ml_backend__mlds_to_cs__V_136_136;
              MR_Word ml_backend__mlds_to_cs__V_137_137;
              MR_Word ml_backend__mlds_to_cs__V_138_138;
              MR_String ml_backend__mlds_to_cs__V_139_139;
              MR_Word ml_backend__mlds_to_cs__V_140_140;
              MR_Word ml_backend__mlds_to_cs__V_141_141;
              MR_Word ml_backend__mlds_to_cs__V_142_142;
              MR_Word ml_backend__mlds_to_cs__V_143_143;
              MR_Word ml_backend__mlds_to_cs__V_144_144;
              MR_Word ml_backend__mlds_to_cs__V_145_145;
              MR_Word ml_backend__mlds_to_cs__V_146_146;
              MR_String ml_backend__mlds_to_cs__V_147_147;
              MR_Word ml_backend__mlds_to_cs__V_148_148;
              MR_Word ml_backend__mlds_to_cs__V_149_149;
              MR_Word ml_backend__mlds_to_cs__V_150_150;
              MR_Word ml_backend__mlds_to_cs__QualifiedCtorId_28;
              MR_Word ml_backend__mlds_to_cs__MerType_29;
              MR_Word ml_backend__mlds_to_cs__CtorCat_30;
              MR_Word ml_backend__mlds_to_cs__V_31_31;
              MR_String ml_backend__mlds_to_cs__V_32_32;
              MR_Word ml_backend__mlds_to_cs__V_33_33;
              MR_Word ml_backend__mlds_to_cs__V_151_151;
              MR_Word ml_backend__mlds_to_cs__V_152_152;
              MR_Word ml_backend__mlds_to_cs__V_153_153;
              MR_Word ml_backend__mlds_to_cs__V_154_154;
              MR_String ml_backend__mlds_to_cs__V_155_155;
              MR_Word ml_backend__mlds_to_cs__V_156_156;
              MR_Word ml_backend__mlds_to_cs__V_157_157;
              MR_Word ml_backend__mlds_to_cs__V_158_158;

              switch (ml_backend__mlds_to_cs__ExplicitSecTag_20) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "ml_backend.mlds_to_cs", (MR_String) "predicate \140ml_backend.mlds_to_cs.output_atomic_stmt\'/6", (MR_String) "explicit secondary tag");
                      return;
                    }
                  }
                  break;
              }
              ml_backend__mlds_to_cs__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_7, (MR_Integer) 0)));
              ml_backend__mlds_to_cs__V_136_136 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_7, (MR_Integer) 1)))) & (MR_Integer) 1);
              ml_backend__mlds_to_cs__V_75_75 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_7, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              ml_backend__mlds_to_cs__V_137_137 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_7, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
              ml_backend__mlds_to_cs__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_7, (MR_Integer) 2)));
              ml_backend__mlds_to_cs__V_139_139 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_7, (MR_Integer) 3)));
              ml_backend__mlds_to_cs__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_7, (MR_Integer) 4)));
              ml_backend__mlds_to_cs__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_7, (MR_Integer) 5)));
              ml_backend__mlds_to_cs__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_7, (MR_Integer) 6)));
              {
                ml_backend__mlds_to_cs__indent_line_5_p_0(ml_backend__mlds_to_cs__V_75_75, ml_backend__mlds_to_cs__Context_10, ml_backend__mlds_to_cs__Indent_8);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "{\n");
              }
              ml_backend__mlds_to_cs__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_7, (MR_Integer) 0)));
              ml_backend__mlds_to_cs__V_144_144 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_7, (MR_Integer) 1)))) & (MR_Integer) 1);
              ml_backend__mlds_to_cs__V_79_79 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_7, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              ml_backend__mlds_to_cs__V_145_145 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_7, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
              ml_backend__mlds_to_cs__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_7, (MR_Integer) 2)));
              ml_backend__mlds_to_cs__V_147_147 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_7, (MR_Integer) 3)));
              ml_backend__mlds_to_cs__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_7, (MR_Integer) 4)));
              ml_backend__mlds_to_cs__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_7, (MR_Integer) 5)));
              ml_backend__mlds_to_cs__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_7, (MR_Integer) 6)));
              ml_backend__mlds_to_cs__V_80_80 = (ml_backend__mlds_to_cs__Indent_8 + (MR_Integer) 1);
              {
                ml_backend__mlds_to_cs__indent_line_5_p_0(ml_backend__mlds_to_cs__V_79_79, ml_backend__mlds_to_cs__Context_10, ml_backend__mlds_to_cs__V_80_80);
              }
              {
                ml_backend__mlds_to_cs__output_lval_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Target_18);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) " = new ");
              }
              ml_backend__mlds_to_cs__succeeded = ((MR_tag((MR_Word) ml_backend__mlds_to_cs__MaybeCtorName_23)) == (MR_mktag((MR_Integer) 1)));
              if (ml_backend__mlds_to_cs__succeeded)
                {
                  ml_backend__mlds_to_cs__QualifiedCtorId_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__MaybeCtorName_23, (MR_Integer) 0)));
                  ml_backend__mlds_to_cs__succeeded = ((MR_tag((MR_Word) ml_backend__mlds_to_cs__Type_21)) == (MR_mktag((MR_Integer) 2)));
                  if (ml_backend__mlds_to_cs__succeeded)
                    {
                      ml_backend__mlds_to_cs__MerType_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__Type_21, (MR_Integer) 0)));
                      ml_backend__mlds_to_cs__CtorCat_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__Type_21, (MR_Integer) 1)));
                      ml_backend__mlds_to_cs__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__Type_21, (MR_Integer) 2)));
                      {
                        ml_backend__mlds_to_cs__succeeded = ml_backend__mlds_to_cs__hand_defined_type_4_p_0(ml_backend__mlds_to_cs__MerType_29, ml_backend__mlds_to_cs__CtorCat_30, &ml_backend__mlds_to_cs__V_32_32, &ml_backend__mlds_to_cs__V_33_33);
                      }
                    }
                  ml_backend__mlds_to_cs__succeeded = !(ml_backend__mlds_to_cs__succeeded);
                }
              if (ml_backend__mlds_to_cs__succeeded)
                {
                  MR_Word ml_backend__mlds_to_cs__CtorDefn_36;
                  MR_String ml_backend__mlds_to_cs__CtorName_37;
                  MR_Integer ml_backend__mlds_to_cs__CtorArity_38;
                  MR_Word ml_backend__mlds_to_cs___ModuleName_34;
                  MR_Word ml_backend__mlds_to_cs___QualKind_35;

                  {
                    ml_backend__mlds_to_cs__output_type_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Type_21);
                  }
                  {
                    mercury__io__write_char_3_p_0((MR_Char) 46);
                  }
                  ml_backend__mlds_to_cs___ModuleName_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__QualifiedCtorId_28, (MR_Integer) 0)));
                  ml_backend__mlds_to_cs___QualKind_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__QualifiedCtorId_28, (MR_Integer) 1)));
                  ml_backend__mlds_to_cs__CtorDefn_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__QualifiedCtorId_28, (MR_Integer) 2)));
                  ml_backend__mlds_to_cs__CtorName_37 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__CtorDefn_36, (MR_Integer) 0)));
                  ml_backend__mlds_to_cs__CtorArity_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__CtorDefn_36, (MR_Integer) 1)));
                  {
                    ml_backend__mlds_to_cs__output_unqual_class_name_4_p_0(ml_backend__mlds_to_cs__CtorName_37, ml_backend__mlds_to_cs__CtorArity_38);
                  }
                }
              else
                {
                  ml_backend__mlds_to_cs__output_type_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Type_21);
                }
              {
                ml_backend__mlds_to_cs__IsArray_39 = ml_backend__mlds_to_cs__type_is_array_1_f_0(ml_backend__mlds_to_cs__Type_21);
              }
              switch (ml_backend__mlds_to_cs__IsArray_39) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) " {");
                    }
                    {
                      ml_backend__mlds_to_cs__output_init_args_5_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Args_24, ml_backend__mlds_to_cs__ArgTypes_25);
                    }
                    {
                      mercury__io__write_string_3_p_0((MR_String) "};\n");
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                    }
                    {
                      ml_backend__mlds_to_cs__output_init_args_5_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Args_24, ml_backend__mlds_to_cs__ArgTypes_25);
                    }
                    {
                      mercury__io__write_string_3_p_0((MR_String) ");\n");
                    }
                  }
                  break;
              }
              ml_backend__mlds_to_cs__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_7, (MR_Integer) 0)));
              ml_backend__mlds_to_cs__V_152_152 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_7, (MR_Integer) 1)))) & (MR_Integer) 1);
              ml_backend__mlds_to_cs__V_101_101 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_7, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              ml_backend__mlds_to_cs__V_153_153 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_7, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
              ml_backend__mlds_to_cs__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_7, (MR_Integer) 2)));
              ml_backend__mlds_to_cs__V_155_155 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_7, (MR_Integer) 3)));
              ml_backend__mlds_to_cs__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_7, (MR_Integer) 4)));
              ml_backend__mlds_to_cs__V_157_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_7, (MR_Integer) 5)));
              ml_backend__mlds_to_cs__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_7, (MR_Integer) 6)));
              {
                ml_backend__mlds_to_cs__indent_line_5_p_0(ml_backend__mlds_to_cs__V_101_101, ml_backend__mlds_to_cs__Context_10, ml_backend__mlds_to_cs__Indent_8);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "}\n");
              }
            }
            break;
          case (MR_Integer) 3:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ml_backend.mlds_to_cs", (MR_String) "predicate \140ml_backend.mlds_to_cs.output_atomic_stmt\'/6", (MR_String) "mark_hp not implemented.");
                return;
              }
            }
            break;
          case (MR_Integer) 4:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ml_backend.mlds_to_cs", (MR_String) "predicate \140ml_backend.mlds_to_cs.output_atomic_stmt\'/6", (MR_String) "restore_hp not implemented.");
                return;
              }
            }
            break;
          case (MR_Integer) 5:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ml_backend.mlds_to_cs", (MR_String) "predicate \140ml_backend.mlds_to_cs.output_atomic_stmt\'/6", (MR_String) "trail_ops not implemented.");
                return;
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word ml_backend__mlds_to_cs__TargetLang_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__AtomicStmt_9, (MR_Integer) 1)));
              MR_Word ml_backend__mlds_to_cs__Components_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__AtomicStmt_9, (MR_Integer) 2)));

              switch (ml_backend__mlds_to_cs__TargetLang_42) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 1:
                case (MR_Integer) 3:
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "ml_backend.mlds_to_cs", (MR_String) "predicate \140ml_backend.mlds_to_cs.output_atomic_stmt\'/6", (MR_String) "inline_target_code only works for lang_java");
                      return;
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word ml_backend__mlds_to_cs__V_57_57;
                    MR_Box ml_backend__mlds_to_cs__conv0_STATE_VARIABLE_IO_58_58;

                    {
                      ml_backend__mlds_to_cs__output_pragma_warning_restore_2_p_0();
                    }
                    {
                      ml_backend__mlds_to_cs__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_57_57, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_8[4]));
                      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_57_57, 1) = ((MR_Box) (ml_backend__mlds_to_cs__output_atomic_stmt_6_p_0_1));
                      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_57_57, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_57_57, 3) = ((MR_Box) (ml_backend__mlds_to_cs__Info_7));
                    }
                    {
                      mercury__list__foldl_4_p_2((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, ml_backend__mlds_to_cs__V_57_57, ml_backend__mlds_to_cs__Components_43, ((MR_Box) ((MR_Integer) 0)), &ml_backend__mlds_to_cs__conv0_STATE_VARIABLE_IO_58_58);
                    }
                    {
                      ml_backend__mlds_to_cs__output_pragma_warning_disable_2_p_0();
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 7:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ml_backend.mlds_to_cs", (MR_String) "predicate \140ml_backend.mlds_to_cs.output_atomic_stmt\'/6", (MR_String) "foreign language interfacing not implemented");
                return;
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_case_cond_6_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_7,
  MR_Integer ml_backend__mlds_to_cs__Indent_8,
  MR_Word ml_backend__mlds_to_cs__Context_9,
  MR_Word ml_backend__mlds_to_cs__Match_10)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;

    if (((MR_tag((MR_Word) ml_backend__mlds_to_cs__Match_10)) == (MR_mktag((MR_Integer) 1))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "ml_backend.mlds_to_cs", (MR_String) "predicate \140ml_backend.mlds_to_cs.output_case_cond\'/6", (MR_String) "cannot match ranges in C# cases");
          return;
        }
      }
    else
      {
        MR_Word ml_backend__mlds_to_cs__Val_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Match_10, (MR_Integer) 0)));
        MR_Word ml_backend__mlds_to_cs__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_7, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word ml_backend__mlds_to_cs__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_7, (MR_Integer) 0)));
        MR_Word ml_backend__mlds_to_cs__V_28_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_7, (MR_Integer) 1)))) & (MR_Integer) 1);
        MR_Word ml_backend__mlds_to_cs__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_7, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word ml_backend__mlds_to_cs__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_7, (MR_Integer) 2)));
        MR_String ml_backend__mlds_to_cs__V_31_31 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_7, (MR_Integer) 3)));
        MR_Word ml_backend__mlds_to_cs__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_7, (MR_Integer) 4)));
        MR_Word ml_backend__mlds_to_cs__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_7, (MR_Integer) 5)));
        MR_Word ml_backend__mlds_to_cs__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_7, (MR_Integer) 6)));

        {
          ml_backend__mlds_to_cs__indent_line_5_p_0(ml_backend__mlds_to_cs__V_20_20, ml_backend__mlds_to_cs__Context_9, ml_backend__mlds_to_cs__Indent_8);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "case ");
        }
        {
          ml_backend__mlds_to_cs__output_rval_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Val_12);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ":\n");
        }
      }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_assign_out_params_7_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_8,
  MR_Integer ml_backend__mlds_to_cs__Indent_9,
  MR_Word ml_backend__mlds_to_cs__Rval_10,
  MR_Integer ml_backend__mlds_to_cs__Num_11,
  MR_Integer * ml_backend__mlds_to_cs__HeadVar__5_5)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_String ml_backend__mlds_to_cs__V_28_28;

    *ml_backend__mlds_to_cs__HeadVar__5_5 = (ml_backend__mlds_to_cs__Num_11 + (MR_Integer) 1);
    {
      ml_backend__mlds_to_cs__indent_line_3_p_0(ml_backend__mlds_to_cs__Indent_9);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "out_param_");
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ml_backend__mlds_to_cs_scalar_common_9[0], ml_backend__mlds_to_cs__Num_11, &ml_backend__mlds_to_cs__V_28_28);
    }
    {
      mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__V_28_28);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " = ");
    }
    {
      ml_backend__mlds_to_cs__output_rval_4_p_0(ml_backend__mlds_to_cs__Info_8, ml_backend__mlds_to_cs__Rval_10);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ";\n");
    }
  }
}

static MR_Word MR_CALL 
ml_backend__mlds_to_cs__while_exit_methods_2_f_0(
  MR_Word ml_backend__mlds_to_cs__Cond_4,
  MR_Word ml_backend__mlds_to_cs__BlockExitMethods_5)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded = ((((MR_tag((MR_Word) ml_backend__mlds_to_cs__Cond_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Cond_4, (MR_Integer) 0)))) == (MR_Integer) 0)));
    MR_Word ml_backend__mlds_to_cs__ExitMethods_6;
    MR_Word ml_backend__mlds_to_cs__TypeCtorInfo_18_18;
    MR_Word ml_backend__mlds_to_cs__ExitMethods0_7;
    MR_Word ml_backend__mlds_to_cs__V_12_12;
    MR_Word ml_backend__mlds_to_cs__V_8_8;
    MR_Word ml_backend__mlds_to_cs__TypeCtorInfo_15_15;
    MR_Word ml_backend__mlds_to_cs__V_9_9;

    if (ml_backend__mlds_to_cs__succeeded)
      {
        ml_backend__mlds_to_cs__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Cond_4, (MR_Integer) 1)));
        ml_backend__mlds_to_cs__succeeded = (ml_backend__mlds_to_cs__V_8_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (ml_backend__mlds_to_cs__succeeded)
          {
            ml_backend__mlds_to_cs__V_9_9 = (MR_Integer) 0;
            ml_backend__mlds_to_cs__TypeCtorInfo_15_15 = (MR_Word) &ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__type_ctor_info_exit_method_0;
            {
              ml_backend__mlds_to_cs__succeeded = mercury__set__member_2_p_0(ml_backend__mlds_to_cs__TypeCtorInfo_15_15, ((MR_Box) (ml_backend__mlds_to_cs__V_9_9)), ml_backend__mlds_to_cs__BlockExitMethods_5);
            }
            ml_backend__mlds_to_cs__succeeded = !(ml_backend__mlds_to_cs__succeeded);
          }
      }
    if (ml_backend__mlds_to_cs__succeeded)
      {
        {
          ml_backend__mlds_to_cs__ExitMethods0_7 = mercury__set__delete_2_f_0((MR_Word) &ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__type_ctor_info_exit_method_0, ml_backend__mlds_to_cs__BlockExitMethods_5, ((MR_Box) ((MR_Integer) 4)));
        }
      }
    else
      {
        {
          ml_backend__mlds_to_cs__ExitMethods0_7 = mercury__set__insert_2_f_0((MR_Word) &ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__type_ctor_info_exit_method_0, ml_backend__mlds_to_cs__BlockExitMethods_5, ((MR_Box) ((MR_Integer) 4)));
        }
      }
    ml_backend__mlds_to_cs__TypeCtorInfo_18_18 = (MR_Word) &ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__type_ctor_info_exit_method_0;
    {
      ml_backend__mlds_to_cs__V_12_12 = mercury__set__delete_2_f_0(ml_backend__mlds_to_cs__TypeCtorInfo_18_18, ml_backend__mlds_to_cs__ExitMethods0_7, ((MR_Box) ((MR_Integer) 1)));
    }
    {
      ml_backend__mlds_to_cs__ExitMethods_6 = mercury__set__delete_2_f_0(ml_backend__mlds_to_cs__TypeCtorInfo_18_18, ml_backend__mlds_to_cs__V_12_12, ((MR_Box) ((MR_Integer) 0)));
    }
    return ml_backend__mlds_to_cs__ExitMethods_6;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_decl_flags_4_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_5,
  MR_Word ml_backend__mlds_to_cs__Flags_6)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Word ml_backend__mlds_to_cs__V_10_10;
    MR_Word ml_backend__mlds_to_cs__V_12_12;
    MR_Word ml_backend__mlds_to_cs__V_14_14;
    MR_Word ml_backend__mlds_to_cs__V_16_16;
    MR_Word ml_backend__mlds_to_cs__V_18_18;
    MR_Word ml_backend__mlds_to_cs__V_20_20;

    {
      ml_backend__mlds_to_cs__V_10_10 = ml_backend__mlds__access_1_f_0(ml_backend__mlds_to_cs__Flags_6);
    }
    switch (ml_backend__mlds_to_cs__V_10_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
        {
          MR_Word ml_backend__mlds_to_cs__AutoComments_40 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 1)))) & (MR_Integer) 1);
          MR_Word ml_backend__mlds_to_cs__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 0)));
          MR_Word ml_backend__mlds_to_cs__V_47_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          MR_Word ml_backend__mlds_to_cs__V_48_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
          MR_Word ml_backend__mlds_to_cs__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 2)));
          MR_String ml_backend__mlds_to_cs__V_50_50 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 3)));
          MR_Word ml_backend__mlds_to_cs__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 4)));
          MR_Word ml_backend__mlds_to_cs__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 5)));
          MR_Word ml_backend__mlds_to_cs__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 6)));

          switch (ml_backend__mlds_to_cs__AutoComments_40) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
              }
              break;
            case (MR_Integer) 1:
              {
                {
                  mercury__io__write_string_3_p_0((MR_String) "/* ");
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) "default");
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) " */");
                }
              }
              break;
          }
        }
        break;
      case (MR_Integer) 4:
        {
        }
        break;
      case (MR_Integer) 2:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "private ");
          }
        }
        break;
      case (MR_Integer) 1:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "protected ");
          }
        }
        break;
      case (MR_Integer) 0:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "public ");
          }
        }
        break;
    }
    {
      ml_backend__mlds_to_cs__V_12_12 = ml_backend__mlds__per_instance_1_f_0(ml_backend__mlds_to_cs__Flags_6);
    }
    switch (ml_backend__mlds_to_cs__V_12_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "static ");
          }
        }
        break;
      case (MR_Integer) 1:
        {
        }
        break;
    }
    {
      ml_backend__mlds_to_cs__V_14_14 = ml_backend__mlds__virtuality_1_f_0(ml_backend__mlds_to_cs__Flags_6);
    }
    switch (ml_backend__mlds_to_cs__V_14_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "virtual ");
          }
        }
        break;
    }
    {
      ml_backend__mlds_to_cs__V_16_16 = ml_backend__mlds__overridability_1_f_0(ml_backend__mlds_to_cs__Flags_6);
    }
    switch (ml_backend__mlds_to_cs__V_16_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "sealed ");
          }
        }
        break;
    }
    {
      ml_backend__mlds_to_cs__V_18_18 = ml_backend__mlds__constness_1_f_0(ml_backend__mlds_to_cs__Flags_6);
    }
    switch (ml_backend__mlds_to_cs__V_18_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "readonly ");
          }
        }
        break;
      case (MR_Integer) 0:
        {
        }
        break;
    }
    {
      ml_backend__mlds_to_cs__V_20_20 = ml_backend__mlds__abstractness_1_f_0(ml_backend__mlds_to_cs__Flags_6);
    }
    switch (ml_backend__mlds_to_cs__V_20_20) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "abstract ");
          }
        }
        break;
      case (MR_Integer) 0:
        {
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__array_dimension_to_string_2_p_0(
  MR_Integer ml_backend__mlds_to_cs__N_3,
  MR_String * ml_backend__mlds_to_cs__String_4)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded = (ml_backend__mlds_to_cs__N_3 == (MR_Integer) 0);

    if (ml_backend__mlds_to_cs__succeeded)
      *ml_backend__mlds_to_cs__String_4 = (MR_String) "[]";
    else
      {
        MR_String ml_backend__mlds_to_cs__V_10_10;
        MR_String ml_backend__mlds_to_cs__V_17_17;

        {
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ml_backend__mlds_to_cs_scalar_common_9[0], ml_backend__mlds_to_cs__N_3, &ml_backend__mlds_to_cs__V_10_10);
        }
        {
          ml_backend__mlds_to_cs__V_17_17 = mercury__string__f_43_43_2_f_0(ml_backend__mlds_to_cs__V_10_10, (MR_String) "]");
        }
        {
          *ml_backend__mlds_to_cs__String_4 = mercury__string__f_43_43_2_f_0((MR_String) "[", ml_backend__mlds_to_cs__V_17_17);
        }
      }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__boxed_type_to_string_3_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_2)
{
  {
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;
    MR_String ml_backend__mlds_to_cs__conv0_String_4;

    {
      ml_backend__mlds_to_cs__array_dimension_to_string_2_p_0(((MR_Integer) ml_backend__mlds_to_cs__wrapper_arg_1), &ml_backend__mlds_to_cs__conv0_String_4);
    }
    *ml_backend__mlds_to_cs__wrapper_arg_2 = ((MR_Box) (ml_backend__mlds_to_cs__conv0_String_4));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__boxed_type_to_string_3_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_4,
  MR_Word ml_backend__mlds_to_cs__Type_5,
  MR_String * ml_backend__mlds_to_cs__String_6)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Word ml_backend__mlds_to_cs__TypeCtorInfo_16_16;
    MR_String ml_backend__mlds_to_cs__String0_7;
    MR_Word ml_backend__mlds_to_cs__ArrayDims_8;
    MR_Word ml_backend__mlds_to_cs__RevBrackets_9;
    MR_Word ml_backend__mlds_to_cs__Brackets_10;
    MR_Word ml_backend__mlds_to_cs__V_12_12;

    {
      ml_backend__mlds_to_cs__type_to_string_4_p_0(ml_backend__mlds_to_cs__Info_4, ml_backend__mlds_to_cs__Type_5, &ml_backend__mlds_to_cs__String0_7, &ml_backend__mlds_to_cs__ArrayDims_8);
    }
    ml_backend__mlds_to_cs__TypeCtorInfo_16_16 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    {
      mercury__list__map_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ml_backend__mlds_to_cs__TypeCtorInfo_16_16, (MR_Word) &ml_backend__mlds_to_cs_scalar_common_2[20], ml_backend__mlds_to_cs__ArrayDims_8, &ml_backend__mlds_to_cs__RevBrackets_9);
    }
    {
      mercury__list__reverse_2_p_0(ml_backend__mlds_to_cs__TypeCtorInfo_16_16, ml_backend__mlds_to_cs__RevBrackets_9, &ml_backend__mlds_to_cs__Brackets_10);
    }
    {
      ml_backend__mlds_to_cs__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__V_12_12, 0) = ((MR_Box) (ml_backend__mlds_to_cs__String0_7));
      MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__V_12_12, 1) = ((MR_Box) (ml_backend__mlds_to_cs__Brackets_10));
    }
    {
      mercury__string__append_list_2_p_0(ml_backend__mlds_to_cs__V_12_12, ml_backend__mlds_to_cs__String_6);
    }
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_cs__hand_defined_type_4_p_0(
  MR_Word ml_backend__mlds_to_cs__Type_5,
  MR_Word ml_backend__mlds_to_cs__CtorCat_6,
  MR_String * ml_backend__mlds_to_cs__SubstituteName_7,
  MR_Word * ml_backend__mlds_to_cs__ArrayDims_8)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;

    if (((((MR_tag((MR_Word) ml_backend__mlds_to_cs__CtorCat_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__CtorCat_6, (MR_Integer) 0)))) == (MR_Integer) 0))))
      {
        MR_Word ml_backend__mlds_to_cs__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__CtorCat_6, (MR_Integer) 1)));

        *ml_backend__mlds_to_cs__SubstituteName_7 = ((&ml_backend__mlds_to_cs_vector_common_14[4 + ml_backend__mlds_to_cs__V_21_21]))->ml_backend__mlds_to_cs__vector_common_type_14_0__vct_14_f_0;
        *ml_backend__mlds_to_cs__ArrayDims_8 = ((&ml_backend__mlds_to_cs_vector_common_14[4 + ml_backend__mlds_to_cs__V_21_21]))->ml_backend__mlds_to_cs__vector_common_type_14_0__vct_14_f_1;
        ml_backend__mlds_to_cs__succeeded = MR_TRUE;
      }
    else
    if (((((MR_tag((MR_Word) ml_backend__mlds_to_cs__CtorCat_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__CtorCat_6, (MR_Integer) 0)))) == (MR_Integer) 1))))
      {
        MR_Word ml_backend__mlds_to_cs__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__CtorCat_6, (MR_Integer) 1)));
        MR_Word ml_backend__mlds_to_cs__V_18_18;

        ml_backend__mlds_to_cs__succeeded = (ml_backend__mlds_to_cs__V_9_9 == (MR_Integer) 2);
        if (ml_backend__mlds_to_cs__succeeded)
          {
            {
              ml_backend__mlds_to_cs__V_18_18 = parse_tree__builtin_lib_types__type_desc_type_0_f_0();
            }
            {
              ml_backend__mlds_to_cs__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ml_backend__mlds_to_cs__Type_5, ml_backend__mlds_to_cs__V_18_18);
            }
            if (ml_backend__mlds_to_cs__succeeded)
              {
                *ml_backend__mlds_to_cs__SubstituteName_7 = (MR_String) "runtime.TypeInfo_Struct";
                ml_backend__mlds_to_cs__succeeded = MR_TRUE;
              }
            else
              {
                MR_Word ml_backend__mlds_to_cs__V_19_19;

                {
                  ml_backend__mlds_to_cs__V_19_19 = parse_tree__builtin_lib_types__pseudo_type_desc_type_0_f_0();
                }
                {
                  ml_backend__mlds_to_cs__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ml_backend__mlds_to_cs__Type_5, ml_backend__mlds_to_cs__V_19_19);
                }
                if (ml_backend__mlds_to_cs__succeeded)
                  {
                    *ml_backend__mlds_to_cs__SubstituteName_7 = (MR_String) "runtime.PseudoTypeInfo";
                    ml_backend__mlds_to_cs__succeeded = MR_TRUE;
                  }
                else
                  {
                    MR_Word ml_backend__mlds_to_cs__V_20_20;

                    {
                      ml_backend__mlds_to_cs__V_20_20 = parse_tree__builtin_lib_types__type_ctor_desc_type_0_f_0();
                    }
                    {
                      ml_backend__mlds_to_cs__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ml_backend__mlds_to_cs__Type_5, ml_backend__mlds_to_cs__V_20_20);
                    }
                    if (ml_backend__mlds_to_cs__succeeded)
                      {
                        *ml_backend__mlds_to_cs__SubstituteName_7 = (MR_String) "runtime.TypeCtorInfo_Struct";
                        ml_backend__mlds_to_cs__succeeded = MR_TRUE;
                      }
                  }
              }
            if (ml_backend__mlds_to_cs__succeeded)
              {
                *ml_backend__mlds_to_cs__ArrayDims_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                ml_backend__mlds_to_cs__succeeded = MR_TRUE;
              }
          }
      }
    else
      ml_backend__mlds_to_cs__succeeded = MR_FALSE;
    return ml_backend__mlds_to_cs__succeeded;
  }
}

static MR_Word MR_CALL 
ml_backend__mlds_to_cs__type_is_array_1_f_0(
  MR_Word ml_backend__mlds_to_cs__Type_3)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded = ((((MR_tag((MR_Word) ml_backend__mlds_to_cs__Type_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Type_3, (MR_Integer) 0)))) == (MR_Integer) 4)));
    MR_Word ml_backend__mlds_to_cs__IsArray_4;
    MR_Word ml_backend__mlds_to_cs__V_5_5;

    if (ml_backend__mlds_to_cs__succeeded)
      {
        ml_backend__mlds_to_cs__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Type_3, (MR_Integer) 1)));
        ml_backend__mlds_to_cs__IsArray_4 = (MR_Integer) 0;
      }
    else
      {
        MR_Word ml_backend__mlds_to_cs__V_6_6;

        ml_backend__mlds_to_cs__succeeded = ((((MR_tag((MR_Word) ml_backend__mlds_to_cs__Type_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Type_3, (MR_Integer) 0)))) == (MR_Integer) 5)));
        if (ml_backend__mlds_to_cs__succeeded)
          {
            ml_backend__mlds_to_cs__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Type_3, (MR_Integer) 1)));
            ml_backend__mlds_to_cs__IsArray_4 = (MR_Integer) 0;
          }
        else
          {
            MR_Word ml_backend__mlds_to_cs__V_7_7;

            ml_backend__mlds_to_cs__succeeded = ((((MR_tag((MR_Word) ml_backend__mlds_to_cs__Type_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Type_3, (MR_Integer) 0)))) == (MR_Integer) 0)));
            if (ml_backend__mlds_to_cs__succeeded)
              {
                ml_backend__mlds_to_cs__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Type_3, (MR_Integer) 1)));
                ml_backend__mlds_to_cs__IsArray_4 = (MR_Integer) 0;
              }
            else
              {
                MR_Word ml_backend__mlds_to_cs__CtorCat_9;
                MR_Word ml_backend__mlds_to_cs__V_8_8;
                MR_Word ml_backend__mlds_to_cs__V_10_10;

                ml_backend__mlds_to_cs__succeeded = ((MR_tag((MR_Word) ml_backend__mlds_to_cs__Type_3)) == (MR_mktag((MR_Integer) 2)));
                if (ml_backend__mlds_to_cs__succeeded)
                  {
                    ml_backend__mlds_to_cs__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__Type_3, (MR_Integer) 0)));
                    ml_backend__mlds_to_cs__CtorCat_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__Type_3, (MR_Integer) 1)));
                    ml_backend__mlds_to_cs__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__Type_3, (MR_Integer) 2)));
                    switch (MR_tag((MR_Word) ml_backend__mlds_to_cs__CtorCat_9)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        switch (MR_unmkbody(ml_backend__mlds_to_cs__CtorCat_9)) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            ml_backend__mlds_to_cs__IsArray_4 = (MR_Integer) 0;
                            break;
                          case (MR_Integer) 1:
                            ml_backend__mlds_to_cs__IsArray_4 = (MR_Integer) 0;
                            break;
                          case (MR_Integer) 2:
                            ml_backend__mlds_to_cs__IsArray_4 = (MR_Integer) 1;
                            break;
                          case (MR_Integer) 3:
                            ml_backend__mlds_to_cs__IsArray_4 = (MR_Integer) 1;
                            break;
                          case (MR_Integer) 4:
                            ml_backend__mlds_to_cs__IsArray_4 = (MR_Integer) 1;
                            break;
                        }
                        break;
                      case (MR_Integer) 1:
                        ml_backend__mlds_to_cs__IsArray_4 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 2:
                        ml_backend__mlds_to_cs__IsArray_4 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 3:
                        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__CtorCat_9, (MR_Integer) 0)))) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            {
                              MR_Word ml_backend__mlds_to_cs__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__CtorCat_9, (MR_Integer) 1)));

                              ml_backend__mlds_to_cs__IsArray_4 = ((&ml_backend__mlds_to_cs_vector_common_12[8 + ml_backend__mlds_to_cs__V_22_22]))->ml_backend__mlds_to_cs__vector_common_type_12_0__vct_12_f_0;
                            }
                            break;
                          case (MR_Integer) 1:
                            ml_backend__mlds_to_cs__IsArray_4 = (MR_Integer) 1;
                            break;
                        }
                        break;
                    }
                  }
                else
                  {
                    MR_Word ml_backend__mlds_to_cs__RttiIdMaybeElement_11;

                    ml_backend__mlds_to_cs__succeeded = ((((MR_tag((MR_Word) ml_backend__mlds_to_cs__Type_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Type_3, (MR_Integer) 0)))) == (MR_Integer) 7)));
                    if (ml_backend__mlds_to_cs__succeeded)
                      {
                        ml_backend__mlds_to_cs__RttiIdMaybeElement_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Type_3, (MR_Integer) 1)));
                        {
                          MR_String ml_backend__mlds_to_cs___TypeName_12;

                          {
                            backend_libs__rtti__rtti_id_maybe_element_csharp_type_3_p_0(ml_backend__mlds_to_cs__RttiIdMaybeElement_11, &ml_backend__mlds_to_cs___TypeName_12, &ml_backend__mlds_to_cs__IsArray_4);
                          }
                        }
                      }
                    else
                      ml_backend__mlds_to_cs__IsArray_4 = (MR_Integer) 1;
                  }
              }
          }
      }
    return ml_backend__mlds_to_cs__IsArray_4;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__generic_args_types_to_string_3_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_2)
{
  {
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;
    MR_String ml_backend__mlds_to_cs__conv0_LambdaHeadVar__2_17;

    {
      ml_backend__mlds_to_cs__IntroducedFrom__pred__generic_args_types_to_string__2447__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_1), &ml_backend__mlds_to_cs__conv0_LambdaHeadVar__2_17);
    }
    *ml_backend__mlds_to_cs__wrapper_arg_2 = ((MR_Box) (ml_backend__mlds_to_cs__conv0_LambdaHeadVar__2_17));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__generic_args_types_to_string_3_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_4,
  MR_Word ml_backend__mlds_to_cs__ArgsTypes_5,
  MR_String * ml_backend__mlds_to_cs__String_6)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;

    if ((ml_backend__mlds_to_cs__ArgsTypes_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *ml_backend__mlds_to_cs__String_6 = (MR_String) "";
    else
      {
        MR_Word ml_backend__mlds_to_cs__ToString_9;
        MR_Word ml_backend__mlds_to_cs__ArgsTypesStrings_14;
        MR_String ml_backend__mlds_to_cs__ArgsTypesString_15;
        MR_String ml_backend__mlds_to_cs__V_20_20;

        {
          ml_backend__mlds_to_cs__ToString_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__ToString_9, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_6[6]));
          MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__ToString_9, 1) = ((MR_Box) (ml_backend__mlds_to_cs__generic_args_types_to_string_3_p_0_1));
          MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__ToString_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__ToString_9, 3) = ((MR_Box) (ml_backend__mlds_to_cs__Info_4));
        }
        {
          mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ml_backend__mlds_to_cs__ToString_9, ml_backend__mlds_to_cs__ArgsTypes_5, &ml_backend__mlds_to_cs__ArgsTypesStrings_14);
        }
        {
          ml_backend__mlds_to_cs__ArgsTypesString_15 = mercury__string__join_list_2_f_0((MR_String) ", ", ml_backend__mlds_to_cs__ArgsTypesStrings_14);
        }
        {
          ml_backend__mlds_to_cs__V_20_20 = mercury__string__f_43_43_2_f_0(ml_backend__mlds_to_cs__ArgsTypesString_15, (MR_String) ">");
        }
        {
          *ml_backend__mlds_to_cs__String_6 = mercury__string__f_43_43_2_f_0((MR_String) "<", ml_backend__mlds_to_cs__V_20_20);
        }
      }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__mercury_user_type_to_string_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_6,
  MR_Word ml_backend__mlds_to_cs__Type_7,
  MR_Word ml_backend__mlds_to_cs__CtorCat_8,
  MR_String * ml_backend__mlds_to_cs__String_9,
  MR_Word * ml_backend__mlds_to_cs__ArrayDims_10)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Word ml_backend__mlds_to_cs__TypeCtor_11;
    MR_Word ml_backend__mlds_to_cs__ArgsTypes_12;
    MR_Word ml_backend__mlds_to_cs__ClassName_13;
    MR_Integer ml_backend__mlds_to_cs__ClassArity_14;
    MR_Word ml_backend__mlds_to_cs__MLDS_Type_16;
    MR_String ml_backend__mlds_to_cs__TypeString_17;
    MR_Word ml_backend__mlds_to_cs__OutputGenerics_18;
    MR_Word ml_backend__mlds_to_cs__V_15_15;
    MR_Word ml_backend__mlds_to_cs__V_22_22;
    MR_Word ml_backend__mlds_to_cs__V_23_23;
    MR_Word ml_backend__mlds_to_cs__V_24_24;
    MR_Word ml_backend__mlds_to_cs__V_25_25;
    MR_Word ml_backend__mlds_to_cs__V_26_26;
    MR_String ml_backend__mlds_to_cs__V_27_27;
    MR_Word ml_backend__mlds_to_cs__V_28_28;
    MR_Word ml_backend__mlds_to_cs__V_29_29;

    {
      parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(ml_backend__mlds_to_cs__Type_7, &ml_backend__mlds_to_cs__TypeCtor_11, &ml_backend__mlds_to_cs__ArgsTypes_12);
    }
    {
      ml_backend__ml_type_gen__ml_gen_type_name_3_p_0(ml_backend__mlds_to_cs__TypeCtor_11, &ml_backend__mlds_to_cs__ClassName_13, &ml_backend__mlds_to_cs__ClassArity_14);
    }
    ml_backend__mlds_to_cs__succeeded = ((MR_tag((MR_Word) ml_backend__mlds_to_cs__CtorCat_8)) == (MR_mktag((MR_Integer) 2)));
    if (ml_backend__mlds_to_cs__succeeded)
      {
        ml_backend__mlds_to_cs__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__CtorCat_8, (MR_Integer) 0)));
        {
          ml_backend__mlds_to_cs__MLDS_Type_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__MLDS_Type_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__MLDS_Type_16, 1) = ((MR_Box) (ml_backend__mlds_to_cs__ClassName_13));
          MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__MLDS_Type_16, 2) = ((MR_Box) (ml_backend__mlds_to_cs__ClassArity_14));
          MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__MLDS_Type_16, 3) = ((MR_Box) ((MR_Integer) 4));
        }
      }
    else
      {
        {
          ml_backend__mlds_to_cs__MLDS_Type_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__MLDS_Type_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__MLDS_Type_16, 1) = ((MR_Box) (ml_backend__mlds_to_cs__ClassName_13));
          MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__MLDS_Type_16, 2) = ((MR_Box) (ml_backend__mlds_to_cs__ClassArity_14));
          MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__MLDS_Type_16, 3) = ((MR_Box) ((MR_Integer) 0));
        }
      }
    {
      ml_backend__mlds_to_cs__type_to_string_4_p_0(ml_backend__mlds_to_cs__Info_6, ml_backend__mlds_to_cs__MLDS_Type_16, &ml_backend__mlds_to_cs__TypeString_17, ml_backend__mlds_to_cs__ArrayDims_10);
    }
    ml_backend__mlds_to_cs__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 0)));
    ml_backend__mlds_to_cs__V_23_23 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 1)))) & (MR_Integer) 1);
    ml_backend__mlds_to_cs__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    ml_backend__mlds_to_cs__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    ml_backend__mlds_to_cs__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 2)));
    ml_backend__mlds_to_cs__V_27_27 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 3)));
    ml_backend__mlds_to_cs__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 4)));
    ml_backend__mlds_to_cs__OutputGenerics_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 5)));
    ml_backend__mlds_to_cs__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 6)));
    switch (ml_backend__mlds_to_cs__OutputGenerics_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        *ml_backend__mlds_to_cs__String_9 = ml_backend__mlds_to_cs__TypeString_17;
        break;
      case (MR_Integer) 0:
        {
          MR_String ml_backend__mlds_to_cs__GenericsString_19;

          {
            ml_backend__mlds_to_cs__generic_args_types_to_string_3_p_0(ml_backend__mlds_to_cs__Info_6, ml_backend__mlds_to_cs__ArgsTypes_12, &ml_backend__mlds_to_cs__GenericsString_19);
          }
          {
            *ml_backend__mlds_to_cs__String_9 = mercury__string__f_43_43_2_f_0(ml_backend__mlds_to_cs__TypeString_17, ml_backend__mlds_to_cs__GenericsString_19);
          }
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__mercury_type_to_string_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_6,
  MR_Word ml_backend__mlds_to_cs__Type_7,
  MR_Word ml_backend__mlds_to_cs__CtorCat_8,
  MR_String * ml_backend__mlds_to_cs__String_9,
  MR_Word * ml_backend__mlds_to_cs__ArrayDims_10)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ml_backend__mlds_to_cs__succeeded;

        switch (MR_tag((MR_Word) ml_backend__mlds_to_cs__CtorCat_8)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(ml_backend__mlds_to_cs__CtorCat_8)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  *ml_backend__mlds_to_cs__String_9 = (MR_String) "/* closure */ object";
                  *ml_backend__mlds_to_cs__ArrayDims_10 = (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__mlds_to_cs_scalar_common_1[18]);
                }
                break;
              case (MR_Integer) 1:
                {
                  *ml_backend__mlds_to_cs__String_9 = (MR_String) "/* tuple */ object";
                  *ml_backend__mlds_to_cs__ArrayDims_10 = (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__mlds_to_cs_scalar_common_1[18]);
                }
                break;
              case (MR_Integer) 2:
                {
                  ml_backend__mlds_to_cs__mercury_user_type_to_string_5_p_0(ml_backend__mlds_to_cs__Info_6, ml_backend__mlds_to_cs__Type_7, ml_backend__mlds_to_cs__CtorCat_8, ml_backend__mlds_to_cs__String_9, ml_backend__mlds_to_cs__ArrayDims_10);
                }
                break;
              case (MR_Integer) 3:
                {
                  *ml_backend__mlds_to_cs__String_9 = (MR_String) "object";
                  *ml_backend__mlds_to_cs__ArrayDims_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                }
                break;
              case (MR_Integer) 4:
                {
                  *ml_backend__mlds_to_cs__String_9 = (MR_String) "builtin.Void_0";
                  *ml_backend__mlds_to_cs__ArrayDims_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ml_backend__mlds_to_cs__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__CtorCat_8, (MR_Integer) 0)));

              *ml_backend__mlds_to_cs__String_9 = ((&ml_backend__mlds_to_cs_vector_common_14[0 + ml_backend__mlds_to_cs__V_24_24]))->ml_backend__mlds_to_cs__vector_common_type_14_0__vct_14_f_0;
              *ml_backend__mlds_to_cs__ArrayDims_10 = ((&ml_backend__mlds_to_cs_vector_common_14[0 + ml_backend__mlds_to_cs__V_24_24]))->ml_backend__mlds_to_cs__vector_common_type_14_0__vct_14_f_1;
            }
            break;
          case (MR_Integer) 2:
            {
              ml_backend__mlds_to_cs__mercury_user_type_to_string_5_p_0(ml_backend__mlds_to_cs__Info_6, ml_backend__mlds_to_cs__Type_7, ml_backend__mlds_to_cs__CtorCat_8, ml_backend__mlds_to_cs__String_9, ml_backend__mlds_to_cs__ArrayDims_10);
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__CtorCat_8, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  /* direct tailcall eliminated */
                  {
                    ml_backend__mlds_to_cs__CtorCat_8 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__mlds_to_cs_scalar_common_1[19]);
                  }
                  continue;
                }
                break;
              case (MR_Integer) 1:
                {
                  ml_backend__mlds_to_cs__mercury_user_type_to_string_5_p_0(ml_backend__mlds_to_cs__Info_6, ml_backend__mlds_to_cs__Type_7, ml_backend__mlds_to_cs__CtorCat_8, ml_backend__mlds_to_cs__String_9, ml_backend__mlds_to_cs__ArrayDims_10);
                }
                break;
            }
            break;
        }
      }
      break;
    }
}

static MR_Box MR_CALL 
ml_backend__mlds_to_cs__type_to_string_4_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1)
{
  {
    MR_Box ml_backend__mlds_to_cs__wrapper_arg_2;
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;
    MR_Word ml_backend__mlds_to_cs__conv0_LambdaHeadVar__2_45;

    {
      ml_backend__mlds_to_cs__conv0_LambdaHeadVar__2_45 = ml_backend__mlds_to_cs__IntroducedFrom__func__type_to_string__2312__1_1_f_0(((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_1));
    }
    ml_backend__mlds_to_cs__wrapper_arg_2 = ((MR_Box) (ml_backend__mlds_to_cs__conv0_LambdaHeadVar__2_45));
    return ml_backend__mlds_to_cs__wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__type_to_string_4_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_5,
  MR_Word ml_backend__mlds_to_cs__MLDS_Type_6,
  MR_String * ml_backend__mlds_to_cs__String_7,
  MR_Word * ml_backend__mlds_to_cs__ArrayDims_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ml_backend__mlds_to_cs__succeeded;

        switch (MR_tag((MR_Word) ml_backend__mlds_to_cs__MLDS_Type_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(ml_backend__mlds_to_cs__MLDS_Type_6)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  *ml_backend__mlds_to_cs__String_7 = (MR_String) "runtime.Commit";
                  *ml_backend__mlds_to_cs__ArrayDims_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                }
                break;
              case (MR_Integer) 1:
                {
                  *ml_backend__mlds_to_cs__String_7 = (MR_String) "bool";
                  *ml_backend__mlds_to_cs__ArrayDims_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                }
                break;
              case (MR_Integer) 2:
                {
                  *ml_backend__mlds_to_cs__String_7 = (MR_String) "int";
                  *ml_backend__mlds_to_cs__ArrayDims_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                }
                break;
              case (MR_Integer) 3:
                {
                  *ml_backend__mlds_to_cs__String_7 = (MR_String) "double";
                  *ml_backend__mlds_to_cs__ArrayDims_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                }
                break;
              case (MR_Integer) 4:
                {
                  *ml_backend__mlds_to_cs__String_7 = (MR_String) "int";
                  *ml_backend__mlds_to_cs__ArrayDims_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                }
                break;
              case (MR_Integer) 5:
                {
                  *ml_backend__mlds_to_cs__String_7 = (MR_String) "/* generic_type */ object";
                  *ml_backend__mlds_to_cs__ArrayDims_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                }
                break;
              case (MR_Integer) 6:
                {
                  *ml_backend__mlds_to_cs__String_7 = (MR_String) "/* env_ptr */ object";
                  *ml_backend__mlds_to_cs__ArrayDims_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                }
                break;
              case (MR_Integer) 7:
                {
                  *ml_backend__mlds_to_cs__String_7 = (MR_String) "runtime.TypeInfo";
                  *ml_backend__mlds_to_cs__ArrayDims_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                }
                break;
              case (MR_Integer) 8:
                {
                  *ml_backend__mlds_to_cs__String_7 = (MR_String) "runtime.PseudoTypeInfo";
                  *ml_backend__mlds_to_cs__ArrayDims_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                }
                break;
              case (MR_Integer) 9:
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "ml_backend.mlds_to_cs", (MR_String) "predicate \140ml_backend.mlds_to_cs.type_to_string\'/4", (MR_String) "unknown type");
                    return;
                  }
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ml_backend__mlds_to_cs__Args_26;
              MR_Word ml_backend__mlds_to_cs__RetTypes_27;
              MR_Word ml_backend__mlds_to_cs__ArgTypes_28;
              MR_Word ml_backend__mlds_to_cs__V_42_42 = (MR_Word) MR_body(((MR_Word) ml_backend__mlds_to_cs__MLDS_Type_6), (MR_Integer) 1);

              ml_backend__mlds_to_cs__Args_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_42_42, (MR_Integer) 0)));
              ml_backend__mlds_to_cs__RetTypes_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_42_42, (MR_Integer) 1)));
              {
                ml_backend__mlds_to_cs__ArgTypes_28 = mercury__list__map_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0, (MR_Word) &ml_backend__mlds_to_cs_scalar_common_2[19], ml_backend__mlds_to_cs__Args_26);
              }
              {
                *ml_backend__mlds_to_cs__String_7 = ml_backend__mlds_to_cs__method_ptr_type_to_string_3_f_0(ml_backend__mlds_to_cs__Info_5, ml_backend__mlds_to_cs__ArgTypes_28, ml_backend__mlds_to_cs__RetTypes_27);
              }
              *ml_backend__mlds_to_cs__ArrayDims_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ml_backend__mlds_to_cs__Type_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__MLDS_Type_6, (MR_Integer) 0)));
              MR_Word ml_backend__mlds_to_cs__CtorCat_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__MLDS_Type_6, (MR_Integer) 1)));
              MR_Word ml_backend__mlds_to_cs__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__MLDS_Type_6, (MR_Integer) 2)));
              MR_String ml_backend__mlds_to_cs__SubstituteName_12;
              MR_Word ml_backend__mlds_to_cs__ArrayDims0_13;

              {
                ml_backend__mlds_to_cs__succeeded = ml_backend__mlds_to_cs__hand_defined_type_4_p_0(ml_backend__mlds_to_cs__Type_9, ml_backend__mlds_to_cs__CtorCat_10, &ml_backend__mlds_to_cs__SubstituteName_12, &ml_backend__mlds_to_cs__ArrayDims0_13);
              }
              if (ml_backend__mlds_to_cs__succeeded)
                {
                  *ml_backend__mlds_to_cs__String_7 = ml_backend__mlds_to_cs__SubstituteName_12;
                  *ml_backend__mlds_to_cs__ArrayDims_8 = ml_backend__mlds_to_cs__ArrayDims0_13;
                }
              else
                {
                  ml_backend__mlds_to_cs__succeeded = (ml_backend__mlds_to_cs__CtorCat_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
                  if (ml_backend__mlds_to_cs__succeeded)
                    {
                      *ml_backend__mlds_to_cs__String_7 = (MR_String) "/* builtin_dummy */ object";
                      *ml_backend__mlds_to_cs__ArrayDims_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    }
                  else
                    {
                      MR_Word ml_backend__mlds_to_cs__V_79_79;

                      {
                        ml_backend__mlds_to_cs__V_79_79 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
                      }
                      {
                        ml_backend__mlds_to_cs__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ml_backend__mlds_to_cs__Type_9, ml_backend__mlds_to_cs__V_79_79);
                      }
                      if (ml_backend__mlds_to_cs__succeeded)
                        {
                          *ml_backend__mlds_to_cs__String_7 = (MR_String) "/* c_pointer */ object";
                          *ml_backend__mlds_to_cs__ArrayDims_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                        }
                      else
                        {
                          ml_backend__mlds_to_cs__mercury_type_to_string_5_p_0(ml_backend__mlds_to_cs__Info_5, ml_backend__mlds_to_cs__Type_9, ml_backend__mlds_to_cs__CtorCat_10, ml_backend__mlds_to_cs__String_7, ml_backend__mlds_to_cs__ArrayDims_8);
                        }
                    }
                }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__MLDS_Type_6, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ml_backend__mlds_to_cs__ElementType_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__MLDS_Type_6, (MR_Integer) 1)));
                  MR_Word ml_backend__mlds_to_cs__V_58_58;
                  MR_Word ml_backend__mlds_to_cs__V_15_15;
                  MR_Word ml_backend__mlds_to_cs__V_16_16;

                  ml_backend__mlds_to_cs__succeeded = ((MR_tag((MR_Word) ml_backend__mlds_to_cs__ElementType_14)) == (MR_mktag((MR_Integer) 2)));
                  if (ml_backend__mlds_to_cs__succeeded)
                    {
                      ml_backend__mlds_to_cs__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__ElementType_14, (MR_Integer) 0)));
                      ml_backend__mlds_to_cs__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__ElementType_14, (MR_Integer) 1)));
                      ml_backend__mlds_to_cs__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__ElementType_14, (MR_Integer) 2)));
                      ml_backend__mlds_to_cs__succeeded = (ml_backend__mlds_to_cs__V_58_58 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                    }
                  if (ml_backend__mlds_to_cs__succeeded)
                    {
                      *ml_backend__mlds_to_cs__String_7 = (MR_String) "System.Array";
                      *ml_backend__mlds_to_cs__ArrayDims_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    }
                  else
                    {
                      MR_String ml_backend__mlds_to_cs__V_17_17;

                      {
                        ml_backend__mlds_to_cs__succeeded = ml_backend__mlds_to_cs__csharp_builtin_type_2_p_0(ml_backend__mlds_to_cs__ElementType_14, &ml_backend__mlds_to_cs__V_17_17);
                      }
                      if (ml_backend__mlds_to_cs__succeeded)
                        {
                          MR_Word ml_backend__mlds_to_cs__ArrayDims0_62;

                          {
                            ml_backend__mlds_to_cs__type_to_string_4_p_0(ml_backend__mlds_to_cs__Info_5, ml_backend__mlds_to_cs__ElementType_14, ml_backend__mlds_to_cs__String_7, &ml_backend__mlds_to_cs__ArrayDims0_62);
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            *ml_backend__mlds_to_cs__ArrayDims_8 = base;
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_Integer) 0));
                            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__mlds_to_cs__ArrayDims0_62));
                          }
                        }
                      else
                        {
                          *ml_backend__mlds_to_cs__String_7 = (MR_String) "object";
                          *ml_backend__mlds_to_cs__ArrayDims_8 = (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__mlds_to_cs_scalar_common_1[18]);
                        }
                    }
                }
                break;
              case (MR_Integer) 1:
                {
                  *ml_backend__mlds_to_cs__String_7 = (MR_String) "/* cont_type */ object";
                  *ml_backend__mlds_to_cs__ArrayDims_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ml_backend__mlds_to_cs__ForeignType_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__MLDS_Type_6, (MR_Integer) 1)));

                  switch (MR_tag((MR_Word) ml_backend__mlds_to_cs__ForeignType_18)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        {
                          mercury__require__unexpected_3_p_0((MR_String) "ml_backend.mlds_to_cs", (MR_String) "predicate \140ml_backend.mlds_to_cs.type_to_string\'/4", (MR_String) "c foreign_type");
                          return;
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        {
                          mercury__require__unexpected_3_p_0((MR_String) "ml_backend.mlds_to_cs", (MR_String) "predicate \140ml_backend.mlds_to_cs.type_to_string\'/4", (MR_String) "java foreign_type");
                          return;
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word ml_backend__mlds_to_cs__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__ForeignType_18, (MR_Integer) 0)));

                        *ml_backend__mlds_to_cs__String_7 = (MR_String) ml_backend__mlds_to_cs__V_57_57;
                        *ml_backend__mlds_to_cs__ArrayDims_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        {
                          mercury__require__unexpected_3_p_0((MR_String) "ml_backend.mlds_to_cs", (MR_String) "predicate \140ml_backend.mlds_to_cs.type_to_string\'/4", (MR_String) "erlang foreign_type");
                          return;
                        }
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word ml_backend__mlds_to_cs__Name_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__MLDS_Type_6, (MR_Integer) 1)));
                  MR_Integer ml_backend__mlds_to_cs__Arity_23 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__MLDS_Type_6, (MR_Integer) 2)));
                  MR_Word ml_backend__mlds_to_cs___ClassKind_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__MLDS_Type_6, (MR_Integer) 3)));

                  {
                    ml_backend__mlds_to_cs__qual_class_name_to_string_3_p_0(ml_backend__mlds_to_cs__Name_22, ml_backend__mlds_to_cs__Arity_23, ml_backend__mlds_to_cs__String_7);
                  }
                  *ml_backend__mlds_to_cs__ArrayDims_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word ml_backend__mlds_to_cs__Type_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__MLDS_Type_6, (MR_Integer) 1)));
                  MR_Word ml_backend__mlds_to_cs__ArrayDims0_68;

                  {
                    ml_backend__mlds_to_cs__type_to_string_4_p_0(ml_backend__mlds_to_cs__Info_5, ml_backend__mlds_to_cs__Type_67, ml_backend__mlds_to_cs__String_7, &ml_backend__mlds_to_cs__ArrayDims0_68);
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *ml_backend__mlds_to_cs__ArrayDims_8 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__mlds_to_cs__ArrayDims0_68));
                  }
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word ml_backend__mlds_to_cs__ArrayDims0_70;

                  {
                    ml_backend__mlds_to_cs__type_to_string_4_p_0(ml_backend__mlds_to_cs__Info_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)), ml_backend__mlds_to_cs__String_7, &ml_backend__mlds_to_cs__ArrayDims0_70);
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *ml_backend__mlds_to_cs__ArrayDims_8 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__mlds_to_cs__ArrayDims0_70));
                  }
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Word ml_backend__mlds_to_cs__Type_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__MLDS_Type_6, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word ml_backend__mlds_to_cs__MLDS_Type__tmp_copy_6 = ml_backend__mlds_to_cs__Type_66;

                    ml_backend__mlds_to_cs__MLDS_Type_6 = ml_backend__mlds_to_cs__MLDS_Type__tmp_copy_6;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 7:
                {
                  MR_Word ml_backend__mlds_to_cs__RttiIdMaybeElement_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__MLDS_Type_6, (MR_Integer) 1)));
                  MR_Word ml_backend__mlds_to_cs__IsArray_33;

                  {
                    backend_libs__rtti__rtti_id_maybe_element_csharp_type_3_p_0(ml_backend__mlds_to_cs__RttiIdMaybeElement_32, ml_backend__mlds_to_cs__String_7, &ml_backend__mlds_to_cs__IsArray_33);
                  }
                  switch (ml_backend__mlds_to_cs__IsArray_33) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        *ml_backend__mlds_to_cs__ArrayDims_8 = (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__mlds_to_cs_scalar_common_1[18]);
                      }
                      break;
                    case (MR_Integer) 1:
                      *ml_backend__mlds_to_cs__ArrayDims_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                      break;
                  }
                }
                break;
              case (MR_Integer) 8:
                {
                  MR_Word ml_backend__mlds_to_cs__TablingId_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__MLDS_Type_6, (MR_Integer) 1)));
                  MR_Word ml_backend__mlds_to_cs__IsArray_76;

                  {
                    backend_libs__rtti__tabling_id_java_type_3_p_0(ml_backend__mlds_to_cs__TablingId_34, ml_backend__mlds_to_cs__String_7, &ml_backend__mlds_to_cs__IsArray_76);
                  }
                  switch (ml_backend__mlds_to_cs__IsArray_76) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        *ml_backend__mlds_to_cs__ArrayDims_8 = (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__mlds_to_cs_scalar_common_1[18]);
                      }
                      break;
                    case (MR_Integer) 1:
                      *ml_backend__mlds_to_cs__ArrayDims_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                      break;
                  }
                }
                break;
            }
            break;
        }
      }
      break;
    }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_array_dimensions_3_p_0_2(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3)
{
  {
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;

    {
      mercury__io__write_string_3_p_0(((MR_String) ml_backend__mlds_to_cs__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_array_dimensions_3_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_2)
{
  {
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;
    MR_String ml_backend__mlds_to_cs__conv0_String_4;

    {
      ml_backend__mlds_to_cs__array_dimension_to_string_2_p_0(((MR_Integer) ml_backend__mlds_to_cs__wrapper_arg_1), &ml_backend__mlds_to_cs__conv0_String_4);
    }
    *ml_backend__mlds_to_cs__wrapper_arg_2 = ((MR_Box) (ml_backend__mlds_to_cs__conv0_String_4));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_array_dimensions_3_p_0(
  MR_Word ml_backend__mlds_to_cs__ArrayDims_4)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Word ml_backend__mlds_to_cs__TypeCtorInfo_15_15 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    MR_Word ml_backend__mlds_to_cs__Strings_6;
    MR_Box ml_backend__mlds_to_cs__conv1_STATE_VARIABLE_IO_8;

    {
      mercury__list__map_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ml_backend__mlds_to_cs__TypeCtorInfo_15_15, (MR_Word) &ml_backend__mlds_to_cs_scalar_common_2[17], ml_backend__mlds_to_cs__ArrayDims_4, &ml_backend__mlds_to_cs__Strings_6);
    }
    {
      mercury__list__foldr_4_p_2(ml_backend__mlds_to_cs__TypeCtorInfo_15_15, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &ml_backend__mlds_to_cs_scalar_common_2[18], ml_backend__mlds_to_cs__Strings_6, ((MR_Box) ((MR_Integer) 0)), &ml_backend__mlds_to_cs__conv1_STATE_VARIABLE_IO_8);
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_type_4_p_0_2(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3)
{
  {
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;

    {
      mercury__io__write_string_3_p_0(((MR_String) ml_backend__mlds_to_cs__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_type_4_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_2)
{
  {
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;
    MR_String ml_backend__mlds_to_cs__conv0_String_4;

    {
      ml_backend__mlds_to_cs__array_dimension_to_string_2_p_0(((MR_Integer) ml_backend__mlds_to_cs__wrapper_arg_1), &ml_backend__mlds_to_cs__conv0_String_4);
    }
    *ml_backend__mlds_to_cs__wrapper_arg_2 = ((MR_Box) (ml_backend__mlds_to_cs__conv0_String_4));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_type_4_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_5,
  MR_Word ml_backend__mlds_to_cs__MLDS_Type_6)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Word ml_backend__mlds_to_cs__TypeCtorInfo_15_35;
    MR_String ml_backend__mlds_to_cs__String_18;
    MR_Word ml_backend__mlds_to_cs__ArrayDims_19;
    MR_Word ml_backend__mlds_to_cs__V_21_21;
    MR_Word ml_backend__mlds_to_cs__Strings_28;
    MR_Box ml_backend__mlds_to_cs__conv1_STATE_VARIABLE_IO_9;

    {
      ml_backend__mlds_to_cs__type_to_string_4_p_0(ml_backend__mlds_to_cs__Info_5, ml_backend__mlds_to_cs__MLDS_Type_6, &ml_backend__mlds_to_cs__String_18, &ml_backend__mlds_to_cs__ArrayDims_19);
    }
    {
      mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__String_18);
    }
    {
      ml_backend__mlds_to_cs__V_21_21 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ml_backend__mlds_to_cs__ArrayDims_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    }
    ml_backend__mlds_to_cs__TypeCtorInfo_15_35 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    {
      mercury__list__map_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ml_backend__mlds_to_cs__TypeCtorInfo_15_35, (MR_Word) &ml_backend__mlds_to_cs_scalar_common_2[15], ml_backend__mlds_to_cs__V_21_21, &ml_backend__mlds_to_cs__Strings_28);
    }
    {
      mercury__list__foldr_4_p_2(ml_backend__mlds_to_cs__TypeCtorInfo_15_35, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &ml_backend__mlds_to_cs_scalar_common_2[16], ml_backend__mlds_to_cs__Strings_28, ((MR_Box) ((MR_Integer) 0)), &ml_backend__mlds_to_cs__conv1_STATE_VARIABLE_IO_9);
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__data_name_to_string_2_p_0(
  MR_Word ml_backend__mlds_to_cs__DataName_3,
  MR_String * ml_backend__mlds_to_cs__String_4)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;

    switch (MR_tag((MR_Word) ml_backend__mlds_to_cs__DataName_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "ml_backend.mlds_to_cs", (MR_String) "predicate \140ml_backend.mlds_to_cs.data_name_to_string\'/2", (MR_String) "NYI: mlds_module_layout");
            return;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__mlds_to_cs__VarName_5 = (MR_Word) MR_body(((MR_Word) ml_backend__mlds_to_cs__DataName_3), (MR_Integer) 1);
          MR_Word ml_backend__mlds_to_cs__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__VarName_5, (MR_Integer) 1)));
          MR_String ml_backend__mlds_to_cs__V_75_75 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__VarName_5, (MR_Integer) 0)));

          if ((ml_backend__mlds_to_cs__V_74_74 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              MR_String ml_backend__mlds_to_cs__MangledName_62;

              {
                ml_backend__mlds_to_cs__MangledName_62 = parse_tree__prog_foreign__name_mangle_1_f_0(ml_backend__mlds_to_cs__V_75_75);
              }
              {
                *ml_backend__mlds_to_cs__String_4 = parse_tree__java_names__valid_csharp_symbol_name_1_f_0(ml_backend__mlds_to_cs__MangledName_62);
              }
            }
          else
            {
              MR_Integer ml_backend__mlds_to_cs__Num_63 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__V_74_74, (MR_Integer) 0)));
              MR_String ml_backend__mlds_to_cs__UnmangledName_64;
              MR_String ml_backend__mlds_to_cs__V_76_76;
              MR_String ml_backend__mlds_to_cs__V_84_84;

              {
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ml_backend__mlds_to_cs_scalar_common_9[0], ml_backend__mlds_to_cs__Num_63, &ml_backend__mlds_to_cs__V_76_76);
              }
              {
                ml_backend__mlds_to_cs__V_84_84 = mercury__string__f_43_43_2_f_0((MR_String) "_", ml_backend__mlds_to_cs__V_76_76);
              }
              {
                ml_backend__mlds_to_cs__UnmangledName_64 = mercury__string__f_43_43_2_f_0(ml_backend__mlds_to_cs__V_75_75, ml_backend__mlds_to_cs__V_84_84);
              }
              {
                *ml_backend__mlds_to_cs__String_4 = parse_tree__prog_foreign__name_mangle_1_f_0(ml_backend__mlds_to_cs__UnmangledName_64);
              }
            }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ml_backend__mlds_to_cs__Common_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__DataName_3, (MR_Integer) 0)));
          MR_Integer ml_backend__mlds_to_cs__TypeNum_9;
          MR_Integer ml_backend__mlds_to_cs__RowNum_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Common_6, (MR_Integer) 3)));
          MR_Word ml_backend__mlds_to_cs__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Common_6, (MR_Integer) 2)));
          MR_String ml_backend__mlds_to_cs__V_40_40;
          MR_Word ml_backend__mlds_to_cs__V_46_46;
          MR_String ml_backend__mlds_to_cs__V_47_47;
          MR_String ml_backend__mlds_to_cs__V_49_49;
          MR_String ml_backend__mlds_to_cs__V_50_50;
          MR_String ml_backend__mlds_to_cs__V_57_57;
          MR_Word ml_backend__mlds_to_cs___ModuleName_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Common_6, (MR_Integer) 0)));
          MR_Word ml_backend__mlds_to_cs___Type_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Common_6, (MR_Integer) 1)));

          ml_backend__mlds_to_cs__TypeNum_9 = (MR_Integer) ml_backend__mlds_to_cs__V_28_28;
          ml_backend__mlds_to_cs__V_46_46 = (MR_Word) &ml_backend__mlds_to_cs_scalar_common_9[0];
          {
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ml_backend__mlds_to_cs__V_46_46, ml_backend__mlds_to_cs__RowNum_10, &ml_backend__mlds_to_cs__V_40_40);
          }
          {
            ml_backend__mlds_to_cs__V_47_47 = mercury__string__f_43_43_2_f_0(ml_backend__mlds_to_cs__V_40_40, (MR_String) "]");
          }
          {
            ml_backend__mlds_to_cs__V_49_49 = mercury__string__f_43_43_2_f_0((MR_String) "[", ml_backend__mlds_to_cs__V_47_47);
          }
          {
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ml_backend__mlds_to_cs__V_46_46, ml_backend__mlds_to_cs__TypeNum_9, &ml_backend__mlds_to_cs__V_50_50);
          }
          {
            ml_backend__mlds_to_cs__V_57_57 = mercury__string__f_43_43_2_f_0(ml_backend__mlds_to_cs__V_50_50, ml_backend__mlds_to_cs__V_49_49);
          }
          {
            *ml_backend__mlds_to_cs__String_4 = mercury__string__f_43_43_2_f_0((MR_String) "MR_scalar_common_", ml_backend__mlds_to_cs__V_57_57);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__DataName_3, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ml_backend.mlds_to_cs", (MR_String) "predicate \140ml_backend.mlds_to_cs.data_name_to_string\'/2", (MR_String) "NYI: mlds_proc_layout");
                return;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ml_backend__mlds_to_cs__RttiId_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__DataName_3, (MR_Integer) 1)));

              {
                backend_libs__rtti__id_to_c_identifier_2_p_0(ml_backend__mlds_to_cs__RttiId_11, ml_backend__mlds_to_cs__String_4);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ml_backend.mlds_to_cs", (MR_String) "predicate \140ml_backend.mlds_to_cs.data_name_to_string\'/2", (MR_String) "NYI: mlds_internal_layout");
                return;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ml_backend.mlds_to_cs", (MR_String) "predicate \140ml_backend.mlds_to_cs.data_name_to_string\'/2", (MR_String) "NYI: mlds_tabling_ref");
                return;
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__pred_label_to_string_2_p_0(
  MR_Word ml_backend__mlds_to_cs__HeadVar__1_1,
  MR_String * ml_backend__mlds_to_cs__String_2)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;

    if (((MR_tag((MR_Word) ml_backend__mlds_to_cs__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_String ml_backend__mlds_to_cs__PredName_34 = ((MR_String) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ml_backend__mlds_to_cs__MaybeTypeModule_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__HeadVar__1_1, (MR_Integer) 1)));
        MR_String ml_backend__mlds_to_cs__TypeName_36 = ((MR_String) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__HeadVar__1_1, (MR_Integer) 2)));
        MR_Integer ml_backend__mlds_to_cs__TypeArity_37 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__HeadVar__1_1, (MR_Integer) 3)));
        MR_String ml_backend__mlds_to_cs__MangledPredName_39;
        MR_String ml_backend__mlds_to_cs__MangledTypeName_40;

        {
          ml_backend__mlds_to_cs__MangledPredName_39 = parse_tree__prog_foreign__name_mangle_no_leading_digit_1_f_0(ml_backend__mlds_to_cs__PredName_34);
        }
        {
          ml_backend__mlds_to_cs__MangledTypeName_40 = parse_tree__prog_foreign__name_mangle_1_f_0(ml_backend__mlds_to_cs__TypeName_36);
        }
        if ((ml_backend__mlds_to_cs__MaybeTypeModule_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_String ml_backend__mlds_to_cs__V_103_103;
            MR_String ml_backend__mlds_to_cs__V_111_111;
            MR_String ml_backend__mlds_to_cs__V_112_112;
            MR_String ml_backend__mlds_to_cs__V_114_114;

            {
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ml_backend__mlds_to_cs_scalar_common_9[0], ml_backend__mlds_to_cs__TypeArity_37, &ml_backend__mlds_to_cs__V_103_103);
            }
            {
              ml_backend__mlds_to_cs__V_111_111 = mercury__string__f_43_43_2_f_0((MR_String) "_", ml_backend__mlds_to_cs__V_103_103);
            }
            {
              ml_backend__mlds_to_cs__V_112_112 = mercury__string__f_43_43_2_f_0(ml_backend__mlds_to_cs__MangledTypeName_40, ml_backend__mlds_to_cs__V_111_111);
            }
            {
              ml_backend__mlds_to_cs__V_114_114 = mercury__string__f_43_43_2_f_0((MR_String) "__", ml_backend__mlds_to_cs__V_112_112);
            }
            {
              *ml_backend__mlds_to_cs__String_2 = mercury__string__f_43_43_2_f_0(ml_backend__mlds_to_cs__MangledPredName_39, ml_backend__mlds_to_cs__V_114_114);
            }
          }
        else
          {
            MR_Word ml_backend__mlds_to_cs__TypeModule_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__MaybeTypeModule_35, (MR_Integer) 0)));
            MR_String ml_backend__mlds_to_cs__TypeModuleStr_42;
            MR_String ml_backend__mlds_to_cs__V_88_88;
            MR_String ml_backend__mlds_to_cs__V_96_96;
            MR_String ml_backend__mlds_to_cs__V_97_97;
            MR_String ml_backend__mlds_to_cs__V_99_99;
            MR_String ml_backend__mlds_to_cs__V_100_100;
            MR_String ml_backend__mlds_to_cs__V_102_102;

            {
              ml_backend__mlds_to_cs__TypeModuleStr_42 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ml_backend__mlds_to_cs__TypeModule_41);
            }
            {
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ml_backend__mlds_to_cs_scalar_common_9[0], ml_backend__mlds_to_cs__TypeArity_37, &ml_backend__mlds_to_cs__V_88_88);
            }
            {
              ml_backend__mlds_to_cs__V_96_96 = mercury__string__f_43_43_2_f_0((MR_String) "_", ml_backend__mlds_to_cs__V_88_88);
            }
            {
              ml_backend__mlds_to_cs__V_97_97 = mercury__string__f_43_43_2_f_0(ml_backend__mlds_to_cs__MangledTypeName_40, ml_backend__mlds_to_cs__V_96_96);
            }
            {
              ml_backend__mlds_to_cs__V_99_99 = mercury__string__f_43_43_2_f_0((MR_String) "__", ml_backend__mlds_to_cs__V_97_97);
            }
            {
              ml_backend__mlds_to_cs__V_100_100 = mercury__string__f_43_43_2_f_0(ml_backend__mlds_to_cs__MangledPredName_39, ml_backend__mlds_to_cs__V_99_99);
            }
            {
              ml_backend__mlds_to_cs__V_102_102 = mercury__string__f_43_43_2_f_0((MR_String) "__", ml_backend__mlds_to_cs__V_100_100);
            }
            {
              *ml_backend__mlds_to_cs__String_2 = mercury__string__f_43_43_2_f_0(ml_backend__mlds_to_cs__TypeModuleStr_42, ml_backend__mlds_to_cs__V_102_102);
            }
          }
      }
    else
      {
        MR_Word ml_backend__mlds_to_cs__PredOrFunc_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ml_backend__mlds_to_cs__MaybeDefiningModule_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__1_1, (MR_Integer) 1)));
        MR_String ml_backend__mlds_to_cs__Name_5 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__1_1, (MR_Integer) 2)));
        MR_Integer ml_backend__mlds_to_cs__PredArity_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__1_1, (MR_Integer) 3)));
        MR_String ml_backend__mlds_to_cs__Suffix_10;
        MR_Integer ml_backend__mlds_to_cs__OrigArity_11;
        MR_String ml_backend__mlds_to_cs__MangledName_12;
        MR_Word ml_backend__mlds_to_cs__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__1_1, (MR_Integer) 4)));
        MR_Word ml_backend__mlds_to_cs__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__1_1, (MR_Integer) 5)));

        switch (ml_backend__mlds_to_cs__PredOrFunc_3) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              ml_backend__mlds_to_cs__Suffix_10 = (MR_String) "f";
              ml_backend__mlds_to_cs__OrigArity_11 = (ml_backend__mlds_to_cs__PredArity_6 - (MR_Integer) 1);
            }
            break;
          case (MR_Integer) 0:
            {
              ml_backend__mlds_to_cs__Suffix_10 = (MR_String) "p";
              ml_backend__mlds_to_cs__OrigArity_11 = ml_backend__mlds_to_cs__PredArity_6;
            }
            break;
        }
        {
          ml_backend__mlds_to_cs__MangledName_12 = parse_tree__prog_foreign__name_mangle_no_leading_digit_1_f_0(ml_backend__mlds_to_cs__Name_5);
        }
        if ((ml_backend__mlds_to_cs__MaybeDefiningModule_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_String ml_backend__mlds_to_cs__V_77_77;
            MR_String ml_backend__mlds_to_cs__V_78_78;
            MR_String ml_backend__mlds_to_cs__V_85_85;
            MR_String ml_backend__mlds_to_cs__V_87_87;

            {
              ml_backend__mlds_to_cs__V_77_77 = mercury__string__f_43_43_2_f_0((MR_String) "_", ml_backend__mlds_to_cs__Suffix_10);
            }
            {
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ml_backend__mlds_to_cs_scalar_common_9[0], ml_backend__mlds_to_cs__OrigArity_11, &ml_backend__mlds_to_cs__V_78_78);
            }
            {
              ml_backend__mlds_to_cs__V_85_85 = mercury__string__f_43_43_2_f_0(ml_backend__mlds_to_cs__V_78_78, ml_backend__mlds_to_cs__V_77_77);
            }
            {
              ml_backend__mlds_to_cs__V_87_87 = mercury__string__f_43_43_2_f_0((MR_String) "_", ml_backend__mlds_to_cs__V_85_85);
            }
            {
              *ml_backend__mlds_to_cs__String_2 = mercury__string__f_43_43_2_f_0(ml_backend__mlds_to_cs__MangledName_12, ml_backend__mlds_to_cs__V_87_87);
            }
          }
        else
          {
            MR_Word ml_backend__mlds_to_cs__DefiningModule_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__MaybeDefiningModule_4, (MR_Integer) 0)));
            MR_String ml_backend__mlds_to_cs__DefiningModuleStr_14;
            MR_String ml_backend__mlds_to_cs__V_62_62;
            MR_String ml_backend__mlds_to_cs__V_63_63;
            MR_String ml_backend__mlds_to_cs__V_65_65;
            MR_String ml_backend__mlds_to_cs__V_66_66;
            MR_String ml_backend__mlds_to_cs__V_73_73;
            MR_String ml_backend__mlds_to_cs__V_75_75;

            {
              ml_backend__mlds_to_cs__DefiningModuleStr_14 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ml_backend__mlds_to_cs__DefiningModule_13);
            }
            {
              ml_backend__mlds_to_cs__V_62_62 = mercury__string__f_43_43_2_f_0((MR_String) "_in__", ml_backend__mlds_to_cs__DefiningModuleStr_14);
            }
            {
              ml_backend__mlds_to_cs__V_63_63 = mercury__string__f_43_43_2_f_0(ml_backend__mlds_to_cs__Suffix_10, ml_backend__mlds_to_cs__V_62_62);
            }
            {
              ml_backend__mlds_to_cs__V_65_65 = mercury__string__f_43_43_2_f_0((MR_String) "_", ml_backend__mlds_to_cs__V_63_63);
            }
            {
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ml_backend__mlds_to_cs_scalar_common_9[0], ml_backend__mlds_to_cs__OrigArity_11, &ml_backend__mlds_to_cs__V_66_66);
            }
            {
              ml_backend__mlds_to_cs__V_73_73 = mercury__string__f_43_43_2_f_0(ml_backend__mlds_to_cs__V_66_66, ml_backend__mlds_to_cs__V_65_65);
            }
            {
              ml_backend__mlds_to_cs__V_75_75 = mercury__string__f_43_43_2_f_0((MR_String) "_", ml_backend__mlds_to_cs__V_73_73);
            }
            {
              *ml_backend__mlds_to_cs__String_2 = mercury__string__f_43_43_2_f_0(ml_backend__mlds_to_cs__MangledName_12, ml_backend__mlds_to_cs__V_75_75);
            }
          }
      }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__write_identifier_string_3_p_0(
  MR_String ml_backend__mlds_to_cs__String_4)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Integer ml_backend__mlds_to_cs__Length_6;

    {
      ml_backend__mlds_to_cs__Length_6 = mercury__string__length_1_f_0(ml_backend__mlds_to_cs__String_4);
    }
    ml_backend__mlds_to_cs__succeeded = (ml_backend__mlds_to_cs__Length_6 > (MR_Integer) 511);
    if (ml_backend__mlds_to_cs__succeeded)
      {
        MR_String ml_backend__mlds_to_cs__Left_7;
        MR_String ml_backend__mlds_to_cs__Right_8;
        MR_Integer ml_backend__mlds_to_cs__Hash_9;
        MR_Integer ml_backend__mlds_to_cs__V_15_15;
        MR_String ml_backend__mlds_to_cs__V_31_31;

        {
          ml_backend__mlds_to_cs__Left_7 = mercury__string__left_2_f_0(ml_backend__mlds_to_cs__String_4, (MR_Integer) 251);
        }
        {
          ml_backend__mlds_to_cs__Right_8 = mercury__string__right_2_f_0(ml_backend__mlds_to_cs__String_4, (MR_Integer) 250);
        }
        {
          ml_backend__mlds_to_cs__V_15_15 = mercury__string__hash_1_f_0(ml_backend__mlds_to_cs__String_4);
        }
        ml_backend__mlds_to_cs__Hash_9 = (ml_backend__mlds_to_cs__V_15_15 & (MR_Integer) 4294967295);
        {
          mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__Left_7);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "_");
        }
        {
          mercury__string__format__format_unsigned_int_component_width_noprec_5_p_0((MR_Word) &ml_backend__mlds_to_cs_scalar_common_9[1], (MR_Integer) 8, (MR_Integer) 2, ml_backend__mlds_to_cs__Hash_9, &ml_backend__mlds_to_cs__V_31_31);
        }
        {
          mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__V_31_31);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "_");
        }
        {
          mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__Right_8);
        }
      }
    else
      {
        mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__String_4);
      }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_name_3_p_0(
  MR_Word ml_backend__mlds_to_cs__EntityName_4)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_String ml_backend__mlds_to_cs__EntityNameStr_6;

    switch (MR_tag((MR_Word) ml_backend__mlds_to_cs__EntityName_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String ml_backend__mlds_to_cs__Name_12 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__EntityName_4, (MR_Integer) 0)));
          MR_Integer ml_backend__mlds_to_cs__Arity_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__EntityName_4, (MR_Integer) 1)));
          MR_String ml_backend__mlds_to_cs__MangledName_68;
          MR_String ml_backend__mlds_to_cs__UppercaseMangledName_69;
          MR_String ml_backend__mlds_to_cs__V_70_70;
          MR_String ml_backend__mlds_to_cs__V_72_72;

          {
            ml_backend__mlds_to_cs__MangledName_68 = parse_tree__prog_foreign__name_mangle_no_leading_digit_1_f_0(ml_backend__mlds_to_cs__Name_12);
          }
          {
            ml_backend__mlds_to_cs__UppercaseMangledName_69 = parse_tree__java_names__flip_initial_case_1_f_0(ml_backend__mlds_to_cs__MangledName_68);
          }
          {
            ml_backend__mlds_to_cs__V_72_72 = mercury__string__from_int_1_f_0(ml_backend__mlds_to_cs__Arity_13);
          }
          {
            ml_backend__mlds_to_cs__V_70_70 = mercury__string__f_43_43_2_f_0((MR_String) "_", ml_backend__mlds_to_cs__V_72_72);
          }
          {
            ml_backend__mlds_to_cs__EntityNameStr_6 = mercury__string__f_43_43_2_f_0(ml_backend__mlds_to_cs__UppercaseMangledName_69, ml_backend__mlds_to_cs__V_70_70);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__mlds_to_cs__DataName_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__EntityName_4, (MR_Integer) 0)));

          {
            ml_backend__mlds_to_cs__data_name_to_string_2_p_0(ml_backend__mlds_to_cs__DataName_14, &ml_backend__mlds_to_cs__EntityNameStr_6);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ml_backend__mlds_to_cs__PredLabel_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__EntityName_4, (MR_Integer) 0)));
          MR_Integer ml_backend__mlds_to_cs__ProcId_16 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__EntityName_4, (MR_Integer) 1)));
          MR_Word ml_backend__mlds_to_cs__MaybeSeqNum_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__EntityName_4, (MR_Integer) 2)));
          MR_String ml_backend__mlds_to_cs__PredLabelStr_19;
          MR_Integer ml_backend__mlds_to_cs__ModeNum_20;
          MR_Word ml_backend__mlds_to_cs___PredId_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__EntityName_4, (MR_Integer) 3)));

          {
            ml_backend__mlds_to_cs__pred_label_to_string_2_p_0(ml_backend__mlds_to_cs__PredLabel_15, &ml_backend__mlds_to_cs__PredLabelStr_19);
          }
          {
            hlds__hlds_pred__proc_id_to_int_2_p_0(ml_backend__mlds_to_cs__ProcId_16, &ml_backend__mlds_to_cs__ModeNum_20);
          }
          if ((ml_backend__mlds_to_cs__MaybeSeqNum_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              MR_String ml_backend__mlds_to_cs__V_56_56;
              MR_String ml_backend__mlds_to_cs__V_64_64;

              {
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ml_backend__mlds_to_cs_scalar_common_9[0], ml_backend__mlds_to_cs__ModeNum_20, &ml_backend__mlds_to_cs__V_56_56);
              }
              {
                ml_backend__mlds_to_cs__V_64_64 = mercury__string__f_43_43_2_f_0((MR_String) "_", ml_backend__mlds_to_cs__V_56_56);
              }
              {
                ml_backend__mlds_to_cs__EntityNameStr_6 = mercury__string__f_43_43_2_f_0(ml_backend__mlds_to_cs__PredLabelStr_19, ml_backend__mlds_to_cs__V_64_64);
              }
            }
          else
            {
              MR_Integer ml_backend__mlds_to_cs__SeqNum_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__MaybeSeqNum_17, (MR_Integer) 0)));
              MR_String ml_backend__mlds_to_cs__V_37_37;
              MR_Word ml_backend__mlds_to_cs__V_43_43 = (MR_Word) &ml_backend__mlds_to_cs_scalar_common_9[0];
              MR_String ml_backend__mlds_to_cs__V_45_45;
              MR_String ml_backend__mlds_to_cs__V_46_46;
              MR_String ml_backend__mlds_to_cs__V_53_53;
              MR_String ml_backend__mlds_to_cs__V_55_55;

              {
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ml_backend__mlds_to_cs__V_43_43, ml_backend__mlds_to_cs__SeqNum_21, &ml_backend__mlds_to_cs__V_37_37);
              }
              {
                ml_backend__mlds_to_cs__V_45_45 = mercury__string__f_43_43_2_f_0((MR_String) "_", ml_backend__mlds_to_cs__V_37_37);
              }
              {
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ml_backend__mlds_to_cs__V_43_43, ml_backend__mlds_to_cs__ModeNum_20, &ml_backend__mlds_to_cs__V_46_46);
              }
              {
                ml_backend__mlds_to_cs__V_53_53 = mercury__string__f_43_43_2_f_0(ml_backend__mlds_to_cs__V_46_46, ml_backend__mlds_to_cs__V_45_45);
              }
              {
                ml_backend__mlds_to_cs__V_55_55 = mercury__string__f_43_43_2_f_0((MR_String) "_", ml_backend__mlds_to_cs__V_53_53);
              }
              {
                ml_backend__mlds_to_cs__EntityNameStr_6 = mercury__string__f_43_43_2_f_0(ml_backend__mlds_to_cs__PredLabelStr_19, ml_backend__mlds_to_cs__V_55_55);
              }
            }
        }
        break;
      case (MR_Integer) 3:
        ml_backend__mlds_to_cs__EntityNameStr_6 = ((MR_String) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__EntityName_4, (MR_Integer) 0)));
        break;
    }
    {
      ml_backend__mlds_to_cs__write_identifier_string_3_p_0(ml_backend__mlds_to_cs__EntityNameStr_6);
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__qual_class_name_to_string_3_p_0(
  MR_Word ml_backend__mlds_to_cs__QualName_4,
  MR_Integer ml_backend__mlds_to_cs__Arity_5,
  MR_String * ml_backend__mlds_to_cs__String_6)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Word ml_backend__mlds_to_cs__MLDS_ModuleName_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__QualName_4, (MR_Integer) 0)));
    MR_Word ml_backend__mlds_to_cs__QualKind_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__QualName_4, (MR_Integer) 1)));
    MR_String ml_backend__mlds_to_cs__ClassName_9 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__QualName_4, (MR_Integer) 2)));
    MR_Word ml_backend__mlds_to_cs__SymName_10;
    MR_Word ml_backend__mlds_to_cs__V_16_16;

    {
      ml_backend__mlds_to_cs__SymName_10 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ml_backend__mlds_to_cs__MLDS_ModuleName_7);
    }
    {
      ml_backend__mlds_to_cs__V_16_16 = parse_tree__java_names__csharp_mercury_runtime_package_name_0_f_0();
    }
    {
      ml_backend__mlds_to_cs__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ml_backend__mlds_to_cs__SymName_10, ml_backend__mlds_to_cs__V_16_16);
    }
    if (ml_backend__mlds_to_cs__succeeded)
      {
        {
          *ml_backend__mlds_to_cs__String_6 = mercury__string__f_43_43_2_f_0((MR_String) "runtime.", ml_backend__mlds_to_cs__ClassName_9);
        }
      }
    else
      {
        MR_String ml_backend__mlds_to_cs__QualString_11;
        MR_String ml_backend__mlds_to_cs__UnqualString_12;
        MR_String ml_backend__mlds_to_cs__V_14_14;
        MR_Word ml_backend__mlds_to_cs__OuterName_21;
        MR_Word ml_backend__mlds_to_cs__InnerName_22;
        MR_String ml_backend__mlds_to_cs__MangledOuterName_24;
        MR_String ml_backend__mlds_to_cs__MangledSuffix_25;
        MR_String ml_backend__mlds_to_cs__MangledName_41;
        MR_String ml_backend__mlds_to_cs__UppercaseMangledName_42;
        MR_String ml_backend__mlds_to_cs__V_43_43;
        MR_String ml_backend__mlds_to_cs__V_45_45;
        MR_Word ml_backend__mlds_to_cs__StrippedOuterName_23;
        MR_String ml_backend__mlds_to_cs__V_36_36;

        {
          ml_backend__mlds_to_cs__OuterName_21 = ml_backend__mlds__mlds_module_name_to_package_name_1_f_0(ml_backend__mlds_to_cs__MLDS_ModuleName_7);
        }
        {
          ml_backend__mlds_to_cs__InnerName_22 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ml_backend__mlds_to_cs__MLDS_ModuleName_7);
        }
        {
          ml_backend__mlds_to_cs__succeeded = mdbcomp__sym_name__strip_outermost_qualifier_3_p_0(ml_backend__mlds_to_cs__OuterName_21, &ml_backend__mlds_to_cs__V_36_36, &ml_backend__mlds_to_cs__StrippedOuterName_23);
        }
        if (ml_backend__mlds_to_cs__succeeded)
          ml_backend__mlds_to_cs__succeeded = (strcmp((MR_String) "mercury", ml_backend__mlds_to_cs__V_36_36) == 0);
        if (ml_backend__mlds_to_cs__succeeded)
          {
            {
              parse_tree__java_names__mangle_sym_name_for_csharp_4_p_0(ml_backend__mlds_to_cs__StrippedOuterName_23, (MR_Integer) 0, (MR_String) "__", &ml_backend__mlds_to_cs__MangledOuterName_24);
            }
          }
        else
          {
            {
              parse_tree__java_names__mangle_sym_name_for_csharp_4_p_0(ml_backend__mlds_to_cs__OuterName_21, (MR_Integer) 0, (MR_String) "__", &ml_backend__mlds_to_cs__MangledOuterName_24);
            }
          }
        {
          ml_backend__mlds_to_cs__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ml_backend__mlds_to_cs__OuterName_21, ml_backend__mlds_to_cs__InnerName_22);
        }
        if (ml_backend__mlds_to_cs__succeeded)
          ml_backend__mlds_to_cs__MangledSuffix_25 = (MR_String) "";
        else
          {
            MR_Word ml_backend__mlds_to_cs__Suffix_26;
            MR_String ml_backend__mlds_to_cs__MangledSuffix0_27;
            MR_Word ml_backend__mlds_to_cs__V_33_33;

            {
              ml_backend__mlds_to_cs__remove_sym_name_prefixes_3_p_0(ml_backend__mlds_to_cs__InnerName_22, ml_backend__mlds_to_cs__OuterName_21, &ml_backend__mlds_to_cs__Suffix_26);
            }
            switch (ml_backend__mlds_to_cs__QualKind_8) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                ml_backend__mlds_to_cs__V_33_33 = (MR_Integer) 0;
                break;
              case (MR_Integer) 1:
                ml_backend__mlds_to_cs__V_33_33 = (MR_Integer) 1;
                break;
            }
            {
              parse_tree__java_names__mangle_sym_name_for_csharp_4_p_0(ml_backend__mlds_to_cs__Suffix_26, ml_backend__mlds_to_cs__V_33_33, (MR_String) ".", &ml_backend__mlds_to_cs__MangledSuffix0_27);
            }
            {
              ml_backend__mlds_to_cs__MangledSuffix_25 = mercury__string__f_43_43_2_f_0((MR_String) ".", ml_backend__mlds_to_cs__MangledSuffix0_27);
            }
          }
        {
          ml_backend__mlds_to_cs__QualString_11 = mercury__string__f_43_43_2_f_0(ml_backend__mlds_to_cs__MangledOuterName_24, ml_backend__mlds_to_cs__MangledSuffix_25);
        }
        {
          ml_backend__mlds_to_cs__MangledName_41 = parse_tree__prog_foreign__name_mangle_no_leading_digit_1_f_0(ml_backend__mlds_to_cs__ClassName_9);
        }
        {
          ml_backend__mlds_to_cs__UppercaseMangledName_42 = parse_tree__java_names__flip_initial_case_1_f_0(ml_backend__mlds_to_cs__MangledName_41);
        }
        {
          ml_backend__mlds_to_cs__V_45_45 = mercury__string__from_int_1_f_0(ml_backend__mlds_to_cs__Arity_5);
        }
        {
          ml_backend__mlds_to_cs__V_43_43 = mercury__string__f_43_43_2_f_0((MR_String) "_", ml_backend__mlds_to_cs__V_45_45);
        }
        {
          ml_backend__mlds_to_cs__UnqualString_12 = mercury__string__f_43_43_2_f_0(ml_backend__mlds_to_cs__UppercaseMangledName_42, ml_backend__mlds_to_cs__V_43_43);
        }
        {
          ml_backend__mlds_to_cs__V_14_14 = mercury__string__f_43_43_2_f_0((MR_String) ".", ml_backend__mlds_to_cs__UnqualString_12);
        }
        {
          *ml_backend__mlds_to_cs__String_6 = mercury__string__f_43_43_2_f_0(ml_backend__mlds_to_cs__QualString_11, ml_backend__mlds_to_cs__V_14_14);
        }
      }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_unqual_class_name_4_p_0(
  MR_String ml_backend__mlds_to_cs__Name_5,
  MR_Integer ml_backend__mlds_to_cs__Arity_6)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_String ml_backend__mlds_to_cs__String_8;
    MR_String ml_backend__mlds_to_cs__MangledName_15;
    MR_String ml_backend__mlds_to_cs__UppercaseMangledName_16;
    MR_String ml_backend__mlds_to_cs__V_17_17;
    MR_String ml_backend__mlds_to_cs__V_19_19;

    {
      ml_backend__mlds_to_cs__MangledName_15 = parse_tree__prog_foreign__name_mangle_no_leading_digit_1_f_0(ml_backend__mlds_to_cs__Name_5);
    }
    {
      ml_backend__mlds_to_cs__UppercaseMangledName_16 = parse_tree__java_names__flip_initial_case_1_f_0(ml_backend__mlds_to_cs__MangledName_15);
    }
    {
      ml_backend__mlds_to_cs__V_19_19 = mercury__string__from_int_1_f_0(ml_backend__mlds_to_cs__Arity_6);
    }
    {
      ml_backend__mlds_to_cs__V_17_17 = mercury__string__f_43_43_2_f_0((MR_String) "_", ml_backend__mlds_to_cs__V_19_19);
    }
    {
      ml_backend__mlds_to_cs__String_8 = mercury__string__f_43_43_2_f_0(ml_backend__mlds_to_cs__UppercaseMangledName_16, ml_backend__mlds_to_cs__V_17_17);
    }
    {
      ml_backend__mlds_to_cs__write_identifier_string_3_p_0(ml_backend__mlds_to_cs__String_8);
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__remove_sym_name_prefixes_3_p_0(
  MR_Word ml_backend__mlds_to_cs__SymName0_4,
  MR_Word ml_backend__mlds_to_cs__Prefix_5,
  MR_Word * ml_backend__mlds_to_cs__SymName_6)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;

    if (((MR_tag((MR_Word) ml_backend__mlds_to_cs__SymName0_4)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word ml_backend__mlds_to_cs__Qual_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__SymName0_4, (MR_Integer) 0)));
        MR_String ml_backend__mlds_to_cs__Name_8 = ((MR_String) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__SymName0_4, (MR_Integer) 1)));

        {
          ml_backend__mlds_to_cs__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ml_backend__mlds_to_cs__Qual_7, ml_backend__mlds_to_cs__Prefix_5);
        }
        if (ml_backend__mlds_to_cs__succeeded)
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            *ml_backend__mlds_to_cs__SymName_6 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__mlds_to_cs__Name_8));
          }
        else
          {
            MR_Word ml_backend__mlds_to_cs__SymName1_9;

            {
              ml_backend__mlds_to_cs__remove_sym_name_prefixes_3_p_0(ml_backend__mlds_to_cs__Qual_7, ml_backend__mlds_to_cs__Prefix_5, &ml_backend__mlds_to_cs__SymName1_9);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *ml_backend__mlds_to_cs__SymName_6 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__mlds_to_cs__SymName1_9));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__mlds_to_cs__Name_8));
            }
          }
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "ml_backend.mlds_to_cs", (MR_String) "predicate \140ml_backend.mlds_to_cs.remove_sym_name_prefixes\'/3", (MR_String) "prefix not found");
          return;
        }
      }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_maybe_qualified_name_4_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_5,
  MR_Word ml_backend__mlds_to_cs__QualifiedName_6)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Word ml_backend__mlds_to_cs__ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__QualifiedName_6, (MR_Integer) 0)));
    MR_Word ml_backend__mlds_to_cs__Name_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__QualifiedName_6, (MR_Integer) 2)));
    MR_Word ml_backend__mlds_to_cs__CurrentModuleName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 2)));
    MR_Word ml_backend__mlds_to_cs___QualKind_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__QualifiedName_6, (MR_Integer) 1)));
    MR_Word ml_backend__mlds_to_cs__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 0)));
    MR_Word ml_backend__mlds_to_cs__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 1)))) & (MR_Integer) 1);
    MR_Word ml_backend__mlds_to_cs__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word ml_backend__mlds_to_cs__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_String ml_backend__mlds_to_cs__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 3)));
    MR_Word ml_backend__mlds_to_cs__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 4)));
    MR_Word ml_backend__mlds_to_cs__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 5)));
    MR_Word ml_backend__mlds_to_cs__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 6)));

    {
      ml_backend__mlds_to_cs__succeeded = ml_backend__mlds____Unify____mlds_module_name_0_0(ml_backend__mlds_to_cs__ModuleName_8, ml_backend__mlds_to_cs__CurrentModuleName_11);
    }
    if (ml_backend__mlds_to_cs__succeeded)
      {
        ml_backend__mlds_to_cs__output_name_3_p_0(ml_backend__mlds_to_cs__Name_10);
      }
    else
      {
        MR_Word ml_backend__mlds_to_cs__MLDS_ModuleName_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__QualifiedName_6, (MR_Integer) 0)));
        MR_Word ml_backend__mlds_to_cs__QualKind_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__QualifiedName_6, (MR_Integer) 1)));
        MR_Word ml_backend__mlds_to_cs__UnqualName_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__QualifiedName_6, (MR_Integer) 2)));
        MR_String ml_backend__mlds_to_cs__QualifierString_39;
        MR_Word ml_backend__mlds_to_cs__OuterName_48;
        MR_Word ml_backend__mlds_to_cs__InnerName_49;
        MR_String ml_backend__mlds_to_cs__MangledOuterName_51;
        MR_String ml_backend__mlds_to_cs__MangledSuffix_52;
        MR_Word ml_backend__mlds_to_cs__StrippedOuterName_50;
        MR_String ml_backend__mlds_to_cs__V_63_63;

        {
          ml_backend__mlds_to_cs__OuterName_48 = ml_backend__mlds__mlds_module_name_to_package_name_1_f_0(ml_backend__mlds_to_cs__MLDS_ModuleName_36);
        }
        {
          ml_backend__mlds_to_cs__InnerName_49 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ml_backend__mlds_to_cs__MLDS_ModuleName_36);
        }
        {
          ml_backend__mlds_to_cs__succeeded = mdbcomp__sym_name__strip_outermost_qualifier_3_p_0(ml_backend__mlds_to_cs__OuterName_48, &ml_backend__mlds_to_cs__V_63_63, &ml_backend__mlds_to_cs__StrippedOuterName_50);
        }
        if (ml_backend__mlds_to_cs__succeeded)
          ml_backend__mlds_to_cs__succeeded = (strcmp((MR_String) "mercury", ml_backend__mlds_to_cs__V_63_63) == 0);
        if (ml_backend__mlds_to_cs__succeeded)
          {
            {
              parse_tree__java_names__mangle_sym_name_for_csharp_4_p_0(ml_backend__mlds_to_cs__StrippedOuterName_50, (MR_Integer) 0, (MR_String) "__", &ml_backend__mlds_to_cs__MangledOuterName_51);
            }
          }
        else
          {
            {
              parse_tree__java_names__mangle_sym_name_for_csharp_4_p_0(ml_backend__mlds_to_cs__OuterName_48, (MR_Integer) 0, (MR_String) "__", &ml_backend__mlds_to_cs__MangledOuterName_51);
            }
          }
        {
          ml_backend__mlds_to_cs__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ml_backend__mlds_to_cs__OuterName_48, ml_backend__mlds_to_cs__InnerName_49);
        }
        if (ml_backend__mlds_to_cs__succeeded)
          ml_backend__mlds_to_cs__MangledSuffix_52 = (MR_String) "";
        else
          {
            MR_Word ml_backend__mlds_to_cs__Suffix_53;
            MR_String ml_backend__mlds_to_cs__MangledSuffix0_54;
            MR_Word ml_backend__mlds_to_cs__V_60_60;

            {
              ml_backend__mlds_to_cs__remove_sym_name_prefixes_3_p_0(ml_backend__mlds_to_cs__InnerName_49, ml_backend__mlds_to_cs__OuterName_48, &ml_backend__mlds_to_cs__Suffix_53);
            }
            switch (ml_backend__mlds_to_cs__QualKind_37) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                ml_backend__mlds_to_cs__V_60_60 = (MR_Integer) 0;
                break;
              case (MR_Integer) 1:
                ml_backend__mlds_to_cs__V_60_60 = (MR_Integer) 1;
                break;
            }
            {
              parse_tree__java_names__mangle_sym_name_for_csharp_4_p_0(ml_backend__mlds_to_cs__Suffix_53, ml_backend__mlds_to_cs__V_60_60, (MR_String) ".", &ml_backend__mlds_to_cs__MangledSuffix0_54);
            }
            {
              ml_backend__mlds_to_cs__MangledSuffix_52 = mercury__string__f_43_43_2_f_0((MR_String) ".", ml_backend__mlds_to_cs__MangledSuffix0_54);
            }
          }
        {
          ml_backend__mlds_to_cs__QualifierString_39 = mercury__string__f_43_43_2_f_0(ml_backend__mlds_to_cs__MangledOuterName_51, ml_backend__mlds_to_cs__MangledSuffix_52);
        }
        {
          mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__QualifierString_39);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ".");
        }
        {
          ml_backend__mlds_to_cs__output_name_3_p_0(ml_backend__mlds_to_cs__UnqualName_38);
        }
      }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_param_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_6,
  MR_Integer ml_backend__mlds_to_cs__Indent_7,
  MR_Word ml_backend__mlds_to_cs__Arg_8)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Word ml_backend__mlds_to_cs__Name_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Arg_8, (MR_Integer) 0)));
    MR_Word ml_backend__mlds_to_cs__Type_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Arg_8, (MR_Integer) 1)));
    MR_Word ml_backend__mlds_to_cs___GCStatement_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Arg_8, (MR_Integer) 2)));
    MR_Word ml_backend__mlds_to_cs__V_13_13;

    {
      ml_backend__mlds_to_cs__indent_line_3_p_0(ml_backend__mlds_to_cs__Indent_7);
    }
    ml_backend__mlds_to_cs__succeeded = ((((MR_tag((MR_Word) ml_backend__mlds_to_cs__Type_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Type_11, (MR_Integer) 0)))) == (MR_Integer) 6)));
    if (ml_backend__mlds_to_cs__succeeded)
      {
        ml_backend__mlds_to_cs__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Type_11, (MR_Integer) 1)));
        {
          mercury__io__write_string_3_p_0((MR_String) "out ");
        }
      }
    else
      {
      }
    {
      ml_backend__mlds_to_cs__output_type_4_p_0(ml_backend__mlds_to_cs__Info_6, ml_backend__mlds_to_cs__Type_11);
    }
    {
      mercury__io__write_char_3_p_0((MR_Char) 32);
    }
    {
      ml_backend__mlds_to_cs__output_name_3_p_0(ml_backend__mlds_to_cs__Name_10);
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_params_5_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3)
{
  {
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;

    {
      ml_backend__mlds_to_cs__output_param_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_params_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_6,
  MR_Integer ml_backend__mlds_to_cs__Indent_7,
  MR_Word ml_backend__mlds_to_cs__Parameters_8)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;

    {
      mercury__io__write_char_3_p_0((MR_Char) 40);
    }
    if ((ml_backend__mlds_to_cs__Parameters_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        MR_Word ml_backend__mlds_to_cs__V_18_18;
        MR_Integer ml_backend__mlds_to_cs__V_20_20;

        {
          mercury__io__nl_2_p_0();
        }
        ml_backend__mlds_to_cs__V_20_20 = (ml_backend__mlds_to_cs__Indent_7 + (MR_Integer) 1);
        {
          ml_backend__mlds_to_cs__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_18_18, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_4[6]));
          MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_18_18, 1) = ((MR_Box) (ml_backend__mlds_to_cs__output_params_5_p_0_1));
          MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_18_18, 3) = ((MR_Box) (ml_backend__mlds_to_cs__Info_6));
          MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_18_18, 4) = ((MR_Box) (ml_backend__mlds_to_cs__V_20_20));
        }
        {
          mercury__io__write_list_5_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0, ml_backend__mlds_to_cs__Parameters_8, (MR_String) ",\n", ml_backend__mlds_to_cs__V_18_18);
        }
      }
    {
      mercury__io__write_char_3_p_0((MR_Char) 41);
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__make_out_param_4_p_0(
  MR_Word ml_backend__mlds_to_cs__Type_5,
  MR_Word * ml_backend__mlds_to_cs__Argument_6,
  MR_Integer ml_backend__mlds_to_cs__Num_7,
  MR_Integer * ml_backend__mlds_to_cs__HeadVar__4_4)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Word ml_backend__mlds_to_cs__Name_8;
    MR_Word ml_backend__mlds_to_cs__V_10_10;
    MR_Word ml_backend__mlds_to_cs__V_12_12;
    MR_Word ml_backend__mlds_to_cs__V_13_13;
    MR_Word ml_backend__mlds_to_cs__V_15_15;

    *ml_backend__mlds_to_cs__HeadVar__4_4 = (ml_backend__mlds_to_cs__Num_7 + (MR_Integer) 1);
    {
      ml_backend__mlds_to_cs__V_10_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__V_10_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__V_10_10, 1) = ((MR_Box) (ml_backend__mlds_to_cs__Type_5));
    }
    {
      ml_backend__mlds_to_cs__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__V_15_15, 0) = ((MR_Box) (ml_backend__mlds_to_cs__Num_7));
    }
    {
      ml_backend__mlds_to_cs__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_13_13, 0) = ((MR_Box) ((MR_String) "out_param"));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_13_13, 1) = ((MR_Box) (ml_backend__mlds_to_cs__V_15_15));
    }
    ml_backend__mlds_to_cs__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__mlds_to_cs__V_13_13);
    {
      ml_backend__mlds_to_cs__Name_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__Name_8, 0) = ((MR_Box) (ml_backend__mlds_to_cs__V_12_12));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__mlds_to_cs__Argument_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__mlds_to_cs__Name_8));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__mlds_to_cs__V_10_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_func_decl_7_p_0_2(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3)
{
  {
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;

    {
      ml_backend__mlds_to_cs__output_param_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_func_decl_7_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_3,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_4)
{
  {
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;
    MR_Word ml_backend__mlds_to_cs__conv1_Argument_6;
    MR_Integer ml_backend__mlds_to_cs__conv0_HeadVar__4_4;

    {
      ml_backend__mlds_to_cs__make_out_param_4_p_0(((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_1), &ml_backend__mlds_to_cs__conv1_Argument_6, ((MR_Integer) ml_backend__mlds_to_cs__wrapper_arg_3), &ml_backend__mlds_to_cs__conv0_HeadVar__4_4);
    }
    *ml_backend__mlds_to_cs__wrapper_arg_2 = ((MR_Box) (ml_backend__mlds_to_cs__conv1_Argument_6));
    *ml_backend__mlds_to_cs__wrapper_arg_4 = ((MR_Box) (ml_backend__mlds_to_cs__conv0_HeadVar__4_4));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_func_decl_7_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_8,
  MR_Integer ml_backend__mlds_to_cs__Indent_9,
  MR_Word ml_backend__mlds_to_cs__Name_10,
  MR_Word ml_backend__mlds_to_cs__OutputAux_11,
  MR_Word ml_backend__mlds_to_cs__Signature_12)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded = ((MR_tag((MR_Word) ml_backend__mlds_to_cs__OutputAux_11)) == (MR_mktag((MR_Integer) 1)));
    MR_Word ml_backend__mlds_to_cs__Parameters_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Signature_12, (MR_Integer) 0)));
    MR_Word ml_backend__mlds_to_cs__RetTypes_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Signature_12, (MR_Integer) 1)));
    MR_Word ml_backend__mlds_to_cs__OutParams_17;
    MR_Word ml_backend__mlds_to_cs__V_30_30;
    MR_Word ml_backend__mlds_to_cs__CtorName_16;
    MR_String ml_backend__mlds_to_cs__V_22_22;

    if (ml_backend__mlds_to_cs__succeeded)
      {
        ml_backend__mlds_to_cs__CtorName_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__OutputAux_11, (MR_Integer) 0)));
        ml_backend__mlds_to_cs__succeeded = ((MR_tag((MR_Word) ml_backend__mlds_to_cs__Name_10)) == (MR_mktag((MR_Integer) 3)));
        if (ml_backend__mlds_to_cs__succeeded)
          {
            ml_backend__mlds_to_cs__V_22_22 = ((MR_String) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Name_10, (MR_Integer) 0)));
            ml_backend__mlds_to_cs__succeeded = (strcmp(ml_backend__mlds_to_cs__V_22_22, (MR_String) "<constructor>") == 0);
          }
      }
    if (ml_backend__mlds_to_cs__succeeded)
      {
        {
          ml_backend__mlds_to_cs__output_name_3_p_0(ml_backend__mlds_to_cs__CtorName_16);
        }
        ml_backend__mlds_to_cs__OutParams_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    else
      {
        MR_Word ml_backend__mlds_to_cs__RestRetTypes_18;
        MR_Integer ml_backend__mlds_to_cs__V_19_19;
        MR_Box ml_backend__mlds_to_cs__conv2_V_19_19;

        if ((ml_backend__mlds_to_cs__RetTypes_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "void");
            }
            ml_backend__mlds_to_cs__RestRetTypes_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          }
        else
          {
            MR_Word ml_backend__mlds_to_cs__RetType_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__RetTypes_15, (MR_Integer) 0)));

            ml_backend__mlds_to_cs__RestRetTypes_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__RetTypes_15, (MR_Integer) 1)));
            {
              ml_backend__mlds_to_cs__output_type_4_p_0(ml_backend__mlds_to_cs__Info_8, ml_backend__mlds_to_cs__RetType_46);
            }
          }
        {
          mercury__io__write_char_3_p_0((MR_Char) 32);
        }
        {
          ml_backend__mlds_to_cs__output_name_3_p_0(ml_backend__mlds_to_cs__Name_10);
        }
        {
          mercury__list__map_foldl_5_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ml_backend__mlds_to_cs_scalar_common_2[14], ml_backend__mlds_to_cs__RestRetTypes_18, &ml_backend__mlds_to_cs__OutParams_17, ((MR_Box) ((MR_Integer) 2)), &ml_backend__mlds_to_cs__conv2_V_19_19);
        }
        ml_backend__mlds_to_cs__V_19_19 = ((MR_Integer) ml_backend__mlds_to_cs__conv2_V_19_19);
      }
    {
      ml_backend__mlds_to_cs__V_30_30 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0, ml_backend__mlds_to_cs__Parameters_14, ml_backend__mlds_to_cs__OutParams_17);
    }
    {
      mercury__io__write_char_3_p_0((MR_Char) 40);
    }
    if ((ml_backend__mlds_to_cs__V_30_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        MR_Word ml_backend__mlds_to_cs__V_62_62;
        MR_Integer ml_backend__mlds_to_cs__V_64_64;

        {
          mercury__io__nl_2_p_0();
        }
        ml_backend__mlds_to_cs__V_64_64 = (ml_backend__mlds_to_cs__Indent_9 + (MR_Integer) 1);
        {
          ml_backend__mlds_to_cs__V_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_62_62, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_4[6]));
          MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_62_62, 1) = ((MR_Box) (ml_backend__mlds_to_cs__output_func_decl_7_p_0_2));
          MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_62_62, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_62_62, 3) = ((MR_Box) (ml_backend__mlds_to_cs__Info_8));
          MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_62_62, 4) = ((MR_Box) (ml_backend__mlds_to_cs__V_64_64));
        }
        {
          mercury__io__write_list_5_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0, ml_backend__mlds_to_cs__V_30_30, (MR_String) ",\n", ml_backend__mlds_to_cs__V_62_62);
        }
      }
    {
      mercury__io__write_char_3_p_0((MR_Char) 41);
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_func_9_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_10,
  MR_Integer ml_backend__mlds_to_cs__Indent_11,
  MR_Word ml_backend__mlds_to_cs__Name_12,
  MR_Word ml_backend__mlds_to_cs__OutputAux_13,
  MR_Word ml_backend__mlds_to_cs__Context_14,
  MR_Word ml_backend__mlds_to_cs__Signature_15,
  MR_Word ml_backend__mlds_to_cs__MaybeBody_16)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;

    if ((ml_backend__mlds_to_cs__MaybeBody_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        MR_Word ml_backend__mlds_to_cs__Body_18 = (MR_Word) MR_body(((MR_Word) ml_backend__mlds_to_cs__MaybeBody_16), (MR_Integer) 1);
        MR_Word ml_backend__mlds_to_cs__V_26_26;
        MR_Integer ml_backend__mlds_to_cs__V_30_30;
        MR_Word ml_backend__mlds_to_cs__V_33_33;
        MR_Word ml_backend__mlds_to_cs__V_37_37;
        MR_Word ml_backend__mlds_to_cs__V_39_39;
        MR_Word ml_backend__mlds_to_cs__V_40_40;
        MR_Word ml_backend__mlds_to_cs__V_41_41;
        MR_Word ml_backend__mlds_to_cs__V_42_42;
        MR_String ml_backend__mlds_to_cs__V_43_43;
        MR_Word ml_backend__mlds_to_cs__V_44_44;
        MR_Word ml_backend__mlds_to_cs__V_45_45;
        MR_Word ml_backend__mlds_to_cs__V_46_46;
        MR_Word ml_backend__mlds_to_cs___ExitMethods_20;
        MR_Word ml_backend__mlds_to_cs__V_47_47;
        MR_Word ml_backend__mlds_to_cs__V_48_48;
        MR_Word ml_backend__mlds_to_cs__V_49_49;
        MR_Word ml_backend__mlds_to_cs__V_50_50;
        MR_String ml_backend__mlds_to_cs__V_51_51;
        MR_Word ml_backend__mlds_to_cs__V_52_52;
        MR_Word ml_backend__mlds_to_cs__V_53_53;
        MR_Word ml_backend__mlds_to_cs__V_54_54;
        MR_Word ml_backend__mlds_to_cs__V_55_55;
        MR_Word ml_backend__mlds_to_cs__V_56_56;
        MR_Word ml_backend__mlds_to_cs__V_57_57;
        MR_Word ml_backend__mlds_to_cs__V_58_58;
        MR_String ml_backend__mlds_to_cs__V_59_59;
        MR_Word ml_backend__mlds_to_cs__V_60_60;
        MR_Word ml_backend__mlds_to_cs__V_61_61;
        MR_Word ml_backend__mlds_to_cs__V_62_62;

        {
          ml_backend__mlds_to_cs__output_func_decl_7_p_0(ml_backend__mlds_to_cs__Info_10, ml_backend__mlds_to_cs__Indent_11, ml_backend__mlds_to_cs__Name_12, ml_backend__mlds_to_cs__OutputAux_13, ml_backend__mlds_to_cs__Signature_15);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
        ml_backend__mlds_to_cs__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_10, (MR_Integer) 0)));
        ml_backend__mlds_to_cs__V_40_40 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_10, (MR_Integer) 1)))) & (MR_Integer) 1);
        ml_backend__mlds_to_cs__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_10, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        ml_backend__mlds_to_cs__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_10, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        ml_backend__mlds_to_cs__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_10, (MR_Integer) 2)));
        ml_backend__mlds_to_cs__V_43_43 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_10, (MR_Integer) 3)));
        ml_backend__mlds_to_cs__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_10, (MR_Integer) 4)));
        ml_backend__mlds_to_cs__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_10, (MR_Integer) 5)));
        ml_backend__mlds_to_cs__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_10, (MR_Integer) 6)));
        {
          ml_backend__mlds_to_cs__indent_line_5_p_0(ml_backend__mlds_to_cs__V_26_26, ml_backend__mlds_to_cs__Context_14, ml_backend__mlds_to_cs__Indent_11);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "{\n");
        }
        ml_backend__mlds_to_cs__V_30_30 = (ml_backend__mlds_to_cs__Indent_11 + (MR_Integer) 1);
        {
          ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_97_116_101_109_101_110_116_95_95_91_51_93_95_48_7_p_0(ml_backend__mlds_to_cs__Info_10, ml_backend__mlds_to_cs__V_30_30, ml_backend__mlds_to_cs__Body_18, &ml_backend__mlds_to_cs___ExitMethods_20);
        }
        ml_backend__mlds_to_cs__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_10, (MR_Integer) 0)));
        ml_backend__mlds_to_cs__V_48_48 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_10, (MR_Integer) 1)))) & (MR_Integer) 1);
        ml_backend__mlds_to_cs__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_10, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        ml_backend__mlds_to_cs__V_49_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_10, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        ml_backend__mlds_to_cs__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_10, (MR_Integer) 2)));
        ml_backend__mlds_to_cs__V_51_51 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_10, (MR_Integer) 3)));
        ml_backend__mlds_to_cs__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_10, (MR_Integer) 4)));
        ml_backend__mlds_to_cs__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_10, (MR_Integer) 5)));
        ml_backend__mlds_to_cs__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_10, (MR_Integer) 6)));
        {
          ml_backend__mlds_to_cs__indent_line_5_p_0(ml_backend__mlds_to_cs__V_33_33, ml_backend__mlds_to_cs__Context_14, ml_backend__mlds_to_cs__Indent_11);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "}\n");
        }
        ml_backend__mlds_to_cs__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_10, (MR_Integer) 0)));
        ml_backend__mlds_to_cs__V_56_56 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_10, (MR_Integer) 1)))) & (MR_Integer) 1);
        ml_backend__mlds_to_cs__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_10, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        ml_backend__mlds_to_cs__V_57_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_10, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        ml_backend__mlds_to_cs__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_10, (MR_Integer) 2)));
        ml_backend__mlds_to_cs__V_59_59 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_10, (MR_Integer) 3)));
        ml_backend__mlds_to_cs__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_10, (MR_Integer) 4)));
        ml_backend__mlds_to_cs__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_10, (MR_Integer) 5)));
        ml_backend__mlds_to_cs__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_10, (MR_Integer) 6)));
        switch (ml_backend__mlds_to_cs__V_37_37) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "#line default\n");
              }
            }
            break;
        }
      }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_pred_proc_id_4_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_5,
  MR_Word ml_backend__mlds_to_cs__HeadVar__2_2)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Word ml_backend__mlds_to_cs__PredId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__2_2, (MR_Integer) 0)));
    MR_Integer ml_backend__mlds_to_cs__ProcId_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__2_2, (MR_Integer) 1)));
    MR_Word ml_backend__mlds_to_cs__AutoComments_9 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 1)))) & (MR_Integer) 1);
    MR_Word ml_backend__mlds_to_cs__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 0)));
    MR_Word ml_backend__mlds_to_cs__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word ml_backend__mlds_to_cs__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word ml_backend__mlds_to_cs__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 2)));
    MR_String ml_backend__mlds_to_cs__V_25_25 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 3)));
    MR_Word ml_backend__mlds_to_cs__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 4)));
    MR_Word ml_backend__mlds_to_cs__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 5)));
    MR_Word ml_backend__mlds_to_cs__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_5, (MR_Integer) 6)));

    switch (ml_backend__mlds_to_cs__AutoComments_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer ml_backend__mlds_to_cs__PredIdNum_10;
          MR_Integer ml_backend__mlds_to_cs__ProcIdNum_11;

          {
            mercury__io__write_string_3_p_0((MR_String) "// pred_id: ");
          }
          {
            hlds__hlds_pred__pred_id_to_int_2_p_0(ml_backend__mlds_to_cs__PredId_6, &ml_backend__mlds_to_cs__PredIdNum_10);
          }
          {
            mercury__io__write_int_3_p_0(ml_backend__mlds_to_cs__PredIdNum_10);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) ", proc_id: ");
          }
          {
            hlds__hlds_pred__proc_id_to_int_2_p_0(ml_backend__mlds_to_cs__ProcId_7, &ml_backend__mlds_to_cs__ProcIdNum_11);
          }
          {
            mercury__io__write_int_3_p_0(ml_backend__mlds_to_cs__ProcIdNum_11);
          }
          {
            mercury__io__nl_2_p_0();
          }
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_rtti_array_assignments_8_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_9,
  MR_Integer ml_backend__mlds_to_cs__Indent_10,
  MR_Word ml_backend__mlds_to_cs__Name_11,
  MR_Word ml_backend__mlds_to_cs__ElementInit_12,
  MR_Integer ml_backend__mlds_to_cs__Index_13,
  MR_Integer * ml_backend__mlds_to_cs__HeadVar__6_6)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;

    *ml_backend__mlds_to_cs__HeadVar__6_6 = (ml_backend__mlds_to_cs__Index_13 + (MR_Integer) 1);
    {
      ml_backend__mlds_to_cs__indent_line_3_p_0(ml_backend__mlds_to_cs__Indent_10);
    }
    {
      ml_backend__mlds_to_cs__output_name_3_p_0(ml_backend__mlds_to_cs__Name_11);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "[");
    }
    {
      mercury__io__write_int_3_p_0(ml_backend__mlds_to_cs__Index_13);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "] = ");
    }
    {
      ml_backend__mlds_to_cs__output_initializer_body_5_p_0(ml_backend__mlds_to_cs__Info_9, ml_backend__mlds_to_cs__ElementInit_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ";\n");
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_rtti_defn_assignments_2_6_p_0_2(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3)
{
  {
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;

    {
      ml_backend__mlds_to_cs__IntroducedFrom__pred__output_initializer_body_list__1710__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_rtti_defn_assignments_2_6_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_4,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_5)
{
  {
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;
    MR_Integer ml_backend__mlds_to_cs__conv0_HeadVar__6_6;

    {
      ml_backend__mlds_to_cs__output_rtti_array_assignments_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 5))), ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_1), ((MR_Integer) ml_backend__mlds_to_cs__wrapper_arg_2), &ml_backend__mlds_to_cs__conv0_HeadVar__6_6);
    }
    *ml_backend__mlds_to_cs__wrapper_arg_3 = ((MR_Box) (ml_backend__mlds_to_cs__conv0_HeadVar__6_6));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_rtti_defn_assignments_2_6_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_7,
  MR_Integer ml_backend__mlds_to_cs__Indent_8,
  MR_Word ml_backend__mlds_to_cs__Name_9,
  MR_Word ml_backend__mlds_to_cs__Initializer_10)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;

    switch (MR_tag((MR_Word) ml_backend__mlds_to_cs__Initializer_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "ml_backend.mlds_to_cs", (MR_String) "predicate \140ml_backend.mlds_to_cs.output_rtti_defn_assignments_2\'/6", (MR_String) "init_obj");
            return;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ml_backend__mlds_to_cs__StructType_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__Initializer_10, (MR_Integer) 0)));
          MR_Word ml_backend__mlds_to_cs__FieldInits_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__Initializer_10, (MR_Integer) 1)));
          MR_Word ml_backend__mlds_to_cs__V_46_46;

          ml_backend__mlds_to_cs__succeeded = ((((MR_tag((MR_Word) ml_backend__mlds_to_cs__StructType_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__StructType_13, (MR_Integer) 0)))) == (MR_Integer) 4)));
          if (ml_backend__mlds_to_cs__succeeded)
            {
              ml_backend__mlds_to_cs__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__StructType_13, (MR_Integer) 1)));
              {
                mercury__require__unexpected_3_p_0((MR_String) "ml_backend.mlds_to_cs", (MR_String) "predicate \140ml_backend.mlds_to_cs.output_rtti_defn_assignments_2\'/6", (MR_String) "is_array");
                return;
              }
            }
          else
            {
              MR_Word ml_backend__mlds_to_cs__V_47_47;

              ml_backend__mlds_to_cs__succeeded = ((((MR_tag((MR_Word) ml_backend__mlds_to_cs__StructType_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__StructType_13, (MR_Integer) 0)))) == (MR_Integer) 5)));
              if (ml_backend__mlds_to_cs__succeeded)
                {
                  ml_backend__mlds_to_cs__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__StructType_13, (MR_Integer) 1)));
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "ml_backend.mlds_to_cs", (MR_String) "predicate \140ml_backend.mlds_to_cs.output_rtti_defn_assignments_2\'/6", (MR_String) "is_array");
                    return;
                  }
                }
              else
                {
                  MR_Word ml_backend__mlds_to_cs__IsArray_103;
                  MR_Word ml_backend__mlds_to_cs__V_48_48;

                  ml_backend__mlds_to_cs__succeeded = ((((MR_tag((MR_Word) ml_backend__mlds_to_cs__StructType_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__StructType_13, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (ml_backend__mlds_to_cs__succeeded)
                    {
                      ml_backend__mlds_to_cs__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__StructType_13, (MR_Integer) 1)));
                      ml_backend__mlds_to_cs__IsArray_103 = (MR_Integer) 0;
                    }
                  else
                    {
                      MR_Word ml_backend__mlds_to_cs__CtorCat_50;
                      MR_Word ml_backend__mlds_to_cs__V_49_49;
                      MR_Word ml_backend__mlds_to_cs__V_51_51;

                      ml_backend__mlds_to_cs__succeeded = ((MR_tag((MR_Word) ml_backend__mlds_to_cs__StructType_13)) == (MR_mktag((MR_Integer) 2)));
                      if (ml_backend__mlds_to_cs__succeeded)
                        {
                          ml_backend__mlds_to_cs__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__StructType_13, (MR_Integer) 0)));
                          ml_backend__mlds_to_cs__CtorCat_50 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__StructType_13, (MR_Integer) 1)));
                          ml_backend__mlds_to_cs__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__StructType_13, (MR_Integer) 2)));
                          switch (MR_tag((MR_Word) ml_backend__mlds_to_cs__CtorCat_50)) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 0:
                              switch (MR_unmkbody(ml_backend__mlds_to_cs__CtorCat_50)) {
                                default: /*NOTREACHED*/ MR_assert(0);
                                case (MR_Integer) 0:
                                  ml_backend__mlds_to_cs__IsArray_103 = (MR_Integer) 0;
                                  break;
                                case (MR_Integer) 1:
                                  ml_backend__mlds_to_cs__IsArray_103 = (MR_Integer) 0;
                                  break;
                                case (MR_Integer) 2:
                                  ml_backend__mlds_to_cs__IsArray_103 = (MR_Integer) 1;
                                  break;
                                case (MR_Integer) 3:
                                  ml_backend__mlds_to_cs__IsArray_103 = (MR_Integer) 1;
                                  break;
                                case (MR_Integer) 4:
                                  ml_backend__mlds_to_cs__IsArray_103 = (MR_Integer) 1;
                                  break;
                              }
                              break;
                            case (MR_Integer) 1:
                              ml_backend__mlds_to_cs__IsArray_103 = (MR_Integer) 1;
                              break;
                            case (MR_Integer) 2:
                              ml_backend__mlds_to_cs__IsArray_103 = (MR_Integer) 1;
                              break;
                            case (MR_Integer) 3:
                              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__CtorCat_50, (MR_Integer) 0)))) {
                                default: /*NOTREACHED*/ MR_assert(0);
                                case (MR_Integer) 0:
                                  {
                                    MR_Word ml_backend__mlds_to_cs__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__CtorCat_50, (MR_Integer) 1)));

                                    ml_backend__mlds_to_cs__IsArray_103 = ((&ml_backend__mlds_to_cs_vector_common_12[4 + ml_backend__mlds_to_cs__V_63_63]))->ml_backend__mlds_to_cs__vector_common_type_12_0__vct_12_f_0;
                                  }
                                  break;
                                case (MR_Integer) 1:
                                  ml_backend__mlds_to_cs__IsArray_103 = (MR_Integer) 1;
                                  break;
                              }
                              break;
                          }
                        }
                      else
                        {
                          MR_Word ml_backend__mlds_to_cs__RttiIdMaybeElement_52;

                          ml_backend__mlds_to_cs__succeeded = ((((MR_tag((MR_Word) ml_backend__mlds_to_cs__StructType_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__StructType_13, (MR_Integer) 0)))) == (MR_Integer) 7)));
                          if (ml_backend__mlds_to_cs__succeeded)
                            {
                              ml_backend__mlds_to_cs__RttiIdMaybeElement_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__StructType_13, (MR_Integer) 1)));
                              {
                                MR_String ml_backend__mlds_to_cs___TypeName_53;

                                {
                                  backend_libs__rtti__rtti_id_maybe_element_csharp_type_3_p_0(ml_backend__mlds_to_cs__RttiIdMaybeElement_52, &ml_backend__mlds_to_cs___TypeName_53, &ml_backend__mlds_to_cs__IsArray_103);
                                }
                              }
                            }
                          else
                            ml_backend__mlds_to_cs__IsArray_103 = (MR_Integer) 1;
                        }
                    }
                  switch (ml_backend__mlds_to_cs__IsArray_103) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        {
                          mercury__require__unexpected_3_p_0((MR_String) "ml_backend.mlds_to_cs", (MR_String) "predicate \140ml_backend.mlds_to_cs.output_rtti_defn_assignments_2\'/6", (MR_String) "is_array");
                          return;
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word ml_backend__mlds_to_cs__V_71_71;

                        {
                          ml_backend__mlds_to_cs__indent_line_3_p_0(ml_backend__mlds_to_cs__Indent_8);
                        }
                        {
                          ml_backend__mlds_to_cs__output_name_3_p_0(ml_backend__mlds_to_cs__Name_9);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) ".init(");
                        }
                        {
                          ml_backend__mlds_to_cs__V_71_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_71_71, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_8[2]));
                          MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_71_71, 1) = ((MR_Box) (ml_backend__mlds_to_cs__output_rtti_defn_assignments_2_6_p_0_2));
                          MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_71_71, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                          MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_71_71, 3) = ((MR_Box) (ml_backend__mlds_to_cs__Info_7));
                        }
                        {
                          mercury__io__write_list_5_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, ml_backend__mlds_to_cs__FieldInits_14, (MR_String) ",\n\t\t", ml_backend__mlds_to_cs__V_71_71);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) ");\n");
                        }
                      }
                      break;
                  }
                }
            }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word ml_backend__mlds_to_cs__ElementInits_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Initializer_10, (MR_Integer) 0)));
          MR_Word ml_backend__mlds_to_cs__V_20_20;
          MR_Integer ml_backend__mlds_to_cs___Index_17;
          MR_Box ml_backend__mlds_to_cs__conv2__Index_17;
          MR_Box ml_backend__mlds_to_cs__conv1_STATE_VARIABLE_IO_19;

          {
            ml_backend__mlds_to_cs__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_20_20, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_13[0]));
            MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_20_20, 1) = ((MR_Box) (ml_backend__mlds_to_cs__output_rtti_defn_assignments_2_6_p_0_1));
            MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_20_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_20_20, 3) = ((MR_Box) (ml_backend__mlds_to_cs__Info_7));
            MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_20_20, 4) = ((MR_Box) (ml_backend__mlds_to_cs__Indent_8));
            MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_20_20, 5) = ((MR_Box) (ml_backend__mlds_to_cs__Name_9));
          }
          {
            mercury__list__foldl2_6_p_2((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, ml_backend__mlds_to_cs__V_20_20, ml_backend__mlds_to_cs__ElementInits_16, ((MR_Box) ((MR_Integer) 0)), &ml_backend__mlds_to_cs__conv2__Index_17, ((MR_Box) ((MR_Integer) 0)), &ml_backend__mlds_to_cs__conv1_STATE_VARIABLE_IO_19);
          }
          ml_backend__mlds_to_cs___Index_17 = ((MR_Integer) ml_backend__mlds_to_cs__conv2__Index_17);
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_rtti_defn_assignments_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_6,
  MR_Integer ml_backend__mlds_to_cs__Indent_7,
  MR_Word ml_backend__mlds_to_cs__Defn_8)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Word ml_backend__mlds_to_cs__Name_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Defn_8, (MR_Integer) 0)));
    MR_Word ml_backend__mlds_to_cs__DefnBody_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Defn_8, (MR_Integer) 3)));
    MR_Word ml_backend__mlds_to_cs___Context_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Defn_8, (MR_Integer) 1)));
    MR_Word ml_backend__mlds_to_cs___Flags_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Defn_8, (MR_Integer) 2)));

    switch (MR_tag((MR_Word) ml_backend__mlds_to_cs__DefnBody_13)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "ml_backend.mlds_to_cs", (MR_String) "predicate \140ml_backend.mlds_to_cs.output_rtti_defn_assignments\'/5", (MR_String) "expected mlds_data");
            return;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__mlds_to_cs__Initializer_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__DefnBody_13, (MR_Integer) 1)));
          MR_Word ml_backend__mlds_to_cs___Type_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__DefnBody_13, (MR_Integer) 0)));
          MR_Word ml_backend__mlds_to_cs__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__DefnBody_13, (MR_Integer) 2)));

          {
            ml_backend__mlds_to_cs__output_rtti_defn_assignments_2_6_p_0(ml_backend__mlds_to_cs__Info_6, ml_backend__mlds_to_cs__Indent_7, ml_backend__mlds_to_cs__Name_10, ml_backend__mlds_to_cs__Initializer_15);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "ml_backend.mlds_to_cs", (MR_String) "predicate \140ml_backend.mlds_to_cs.output_rtti_defn_assignments\'/5", (MR_String) "expected mlds_data");
            return;
          }
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_rtti_defns_assignments_5_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3)
{
  {
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;

    {
      ml_backend__mlds_to_cs__output_rtti_defn_assignments_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_rtti_defns_assignments_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_6,
  MR_Integer ml_backend__mlds_to_cs__Indent_7,
  MR_Word ml_backend__mlds_to_cs__Defns_8)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Word ml_backend__mlds_to_cs__V_15_15;
    MR_Box ml_backend__mlds_to_cs__conv0_STATE_VARIABLE_IO_11;

    {
      ml_backend__mlds_to_cs__indent_line_3_p_0(ml_backend__mlds_to_cs__Indent_7);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "//\n");
    }
    {
      ml_backend__mlds_to_cs__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_15_15, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_4[5]));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_15_15, 1) = ((MR_Box) (ml_backend__mlds_to_cs__output_rtti_defns_assignments_5_p_0_1));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_15_15, 3) = ((MR_Box) (ml_backend__mlds_to_cs__Info_6));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_15_15, 4) = ((MR_Box) (ml_backend__mlds_to_cs__Indent_7));
    }
    {
      mercury__list__foldl_4_p_2((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, ml_backend__mlds_to_cs__V_15_15, ml_backend__mlds_to_cs__Defns_8, ((MR_Box) ((MR_Integer) 0)), &ml_backend__mlds_to_cs__conv0_STATE_VARIABLE_IO_11);
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_rtti_assignments_5_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3)
{
  {
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;

    {
      ml_backend__mlds_to_cs__output_rtti_defns_assignments_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_rtti_assignments_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_6,
  MR_Integer ml_backend__mlds_to_cs__Indent_7,
  MR_Word ml_backend__mlds_to_cs__Defns_8)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Word ml_backend__mlds_to_cs__OrderedDefns_10;
    MR_Word ml_backend__mlds_to_cs__V_16_16;
    MR_Integer ml_backend__mlds_to_cs__V_18_18;
    MR_Box ml_backend__mlds_to_cs__conv0_STATE_VARIABLE_IO_17_17;

    {
      ml_backend__mlds_to_cs__indent_line_3_p_0(ml_backend__mlds_to_cs__Indent_7);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "static void MR_init_rtti() {\n");
    }
    {
      ml_backend__mlds_to_cs__OrderedDefns_10 = ml_backend__rtti_to_mlds__order_mlds_rtti_defns_1_f_0(ml_backend__mlds_to_cs__Defns_8);
    }
    ml_backend__mlds_to_cs__V_18_18 = (ml_backend__mlds_to_cs__Indent_7 + (MR_Integer) 1);
    {
      ml_backend__mlds_to_cs__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_16_16, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_4[4]));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_16_16, 1) = ((MR_Box) (ml_backend__mlds_to_cs__output_rtti_assignments_5_p_0_1));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_16_16, 3) = ((MR_Box) (ml_backend__mlds_to_cs__Info_6));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_16_16, 4) = ((MR_Box) (ml_backend__mlds_to_cs__V_18_18));
    }
    {
      mercury__list__foldl_4_p_2((MR_Word) &ml_backend__mlds_to_cs_scalar_common_1[4], (MR_Word) &mercury__io__io__type_ctor_info_state_0, ml_backend__mlds_to_cs__V_16_16, ml_backend__mlds_to_cs__OrderedDefns_10, ((MR_Box) ((MR_Integer) 0)), &ml_backend__mlds_to_cs__conv0_STATE_VARIABLE_IO_17_17);
    }
    {
      ml_backend__mlds_to_cs__indent_line_3_p_0(ml_backend__mlds_to_cs__Indent_7);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "}\n");
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_initializer_body_list_4_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3)
{
  {
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;

    {
      ml_backend__mlds_to_cs__IntroducedFrom__pred__output_initializer_body_list__1710__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_initializer_body_list_4_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_5,
  MR_Word ml_backend__mlds_to_cs__Inits_6)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Word ml_backend__mlds_to_cs__V_12_12;

    {
      ml_backend__mlds_to_cs__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_12_12, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_8[2]));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_12_12, 1) = ((MR_Box) (ml_backend__mlds_to_cs__output_initializer_body_list_4_p_0_1));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_12_12, 3) = ((MR_Box) (ml_backend__mlds_to_cs__Info_5));
    }
    {
      mercury__io__write_list_5_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, ml_backend__mlds_to_cs__Inits_6, (MR_String) ",\n\t\t", ml_backend__mlds_to_cs__V_12_12);
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_initializer_body_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_6,
  MR_Word ml_backend__mlds_to_cs__Initializer_7,
  MR_Word ml_backend__mlds_to_cs__MaybeType_8)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;

    switch (MR_tag((MR_Word) ml_backend__mlds_to_cs__Initializer_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "ml_backend.mlds_to_cs", (MR_String) "predicate \140ml_backend.mlds_to_cs.output_initializer_body\'/5", (MR_String) "no_initializer");
            return;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__mlds_to_cs__Rval_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__Initializer_7, (MR_Integer) 0)));

          {
            ml_backend__mlds_to_cs__output_rval_4_p_0(ml_backend__mlds_to_cs__Info_6, ml_backend__mlds_to_cs__Rval_10);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ml_backend__mlds_to_cs__StructType_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__Initializer_7, (MR_Integer) 0)));
          MR_Word ml_backend__mlds_to_cs__FieldInits_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__Initializer_7, (MR_Integer) 1)));
          MR_Word ml_backend__mlds_to_cs__IsArray_13;
          MR_String ml_backend__mlds_to_cs__V_31_31;
          MR_Char ml_backend__mlds_to_cs__V_34_34;
          MR_Word ml_backend__mlds_to_cs__V_42_42;

          {
            mercury__io__write_string_3_p_0((MR_String) "new ");
          }
          {
            ml_backend__mlds_to_cs__output_type_4_p_0(ml_backend__mlds_to_cs__Info_6, ml_backend__mlds_to_cs__StructType_11);
          }
          ml_backend__mlds_to_cs__succeeded = ((((MR_tag((MR_Word) ml_backend__mlds_to_cs__StructType_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__StructType_11, (MR_Integer) 0)))) == (MR_Integer) 4)));
          if (ml_backend__mlds_to_cs__succeeded)
            {
              ml_backend__mlds_to_cs__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__StructType_11, (MR_Integer) 1)));
              ml_backend__mlds_to_cs__IsArray_13 = (MR_Integer) 0;
            }
          else
            {
              MR_Word ml_backend__mlds_to_cs__V_43_43;

              ml_backend__mlds_to_cs__succeeded = ((((MR_tag((MR_Word) ml_backend__mlds_to_cs__StructType_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__StructType_11, (MR_Integer) 0)))) == (MR_Integer) 5)));
              if (ml_backend__mlds_to_cs__succeeded)
                {
                  ml_backend__mlds_to_cs__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__StructType_11, (MR_Integer) 1)));
                  ml_backend__mlds_to_cs__IsArray_13 = (MR_Integer) 0;
                }
              else
                {
                  MR_Word ml_backend__mlds_to_cs__V_44_44;

                  ml_backend__mlds_to_cs__succeeded = ((((MR_tag((MR_Word) ml_backend__mlds_to_cs__StructType_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__StructType_11, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (ml_backend__mlds_to_cs__succeeded)
                    {
                      ml_backend__mlds_to_cs__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__StructType_11, (MR_Integer) 1)));
                      ml_backend__mlds_to_cs__IsArray_13 = (MR_Integer) 0;
                    }
                  else
                    {
                      MR_Word ml_backend__mlds_to_cs__CtorCat_46;
                      MR_Word ml_backend__mlds_to_cs__V_45_45;
                      MR_Word ml_backend__mlds_to_cs__V_47_47;

                      ml_backend__mlds_to_cs__succeeded = ((MR_tag((MR_Word) ml_backend__mlds_to_cs__StructType_11)) == (MR_mktag((MR_Integer) 2)));
                      if (ml_backend__mlds_to_cs__succeeded)
                        {
                          ml_backend__mlds_to_cs__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__StructType_11, (MR_Integer) 0)));
                          ml_backend__mlds_to_cs__CtorCat_46 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__StructType_11, (MR_Integer) 1)));
                          ml_backend__mlds_to_cs__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__StructType_11, (MR_Integer) 2)));
                          switch (MR_tag((MR_Word) ml_backend__mlds_to_cs__CtorCat_46)) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 0:
                              switch (MR_unmkbody(ml_backend__mlds_to_cs__CtorCat_46)) {
                                default: /*NOTREACHED*/ MR_assert(0);
                                case (MR_Integer) 0:
                                  ml_backend__mlds_to_cs__IsArray_13 = (MR_Integer) 0;
                                  break;
                                case (MR_Integer) 1:
                                  ml_backend__mlds_to_cs__IsArray_13 = (MR_Integer) 0;
                                  break;
                                case (MR_Integer) 2:
                                  ml_backend__mlds_to_cs__IsArray_13 = (MR_Integer) 1;
                                  break;
                                case (MR_Integer) 3:
                                  ml_backend__mlds_to_cs__IsArray_13 = (MR_Integer) 1;
                                  break;
                                case (MR_Integer) 4:
                                  ml_backend__mlds_to_cs__IsArray_13 = (MR_Integer) 1;
                                  break;
                              }
                              break;
                            case (MR_Integer) 1:
                              ml_backend__mlds_to_cs__IsArray_13 = (MR_Integer) 1;
                              break;
                            case (MR_Integer) 2:
                              ml_backend__mlds_to_cs__IsArray_13 = (MR_Integer) 1;
                              break;
                            case (MR_Integer) 3:
                              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__CtorCat_46, (MR_Integer) 0)))) {
                                default: /*NOTREACHED*/ MR_assert(0);
                                case (MR_Integer) 0:
                                  {
                                    MR_Word ml_backend__mlds_to_cs__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__CtorCat_46, (MR_Integer) 1)));

                                    ml_backend__mlds_to_cs__IsArray_13 = ((&ml_backend__mlds_to_cs_vector_common_12[0 + ml_backend__mlds_to_cs__V_59_59]))->ml_backend__mlds_to_cs__vector_common_type_12_0__vct_12_f_0;
                                  }
                                  break;
                                case (MR_Integer) 1:
                                  ml_backend__mlds_to_cs__IsArray_13 = (MR_Integer) 1;
                                  break;
                              }
                              break;
                          }
                        }
                      else
                        {
                          MR_Word ml_backend__mlds_to_cs__RttiIdMaybeElement_48;

                          ml_backend__mlds_to_cs__succeeded = ((((MR_tag((MR_Word) ml_backend__mlds_to_cs__StructType_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__StructType_11, (MR_Integer) 0)))) == (MR_Integer) 7)));
                          if (ml_backend__mlds_to_cs__succeeded)
                            {
                              ml_backend__mlds_to_cs__RttiIdMaybeElement_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__StructType_11, (MR_Integer) 1)));
                              {
                                MR_String ml_backend__mlds_to_cs___TypeName_49;

                                {
                                  backend_libs__rtti__rtti_id_maybe_element_csharp_type_3_p_0(ml_backend__mlds_to_cs__RttiIdMaybeElement_48, &ml_backend__mlds_to_cs___TypeName_49, &ml_backend__mlds_to_cs__IsArray_13);
                                }
                              }
                            }
                          else
                            ml_backend__mlds_to_cs__IsArray_13 = (MR_Integer) 1;
                        }
                    }
                }
            }
          ml_backend__mlds_to_cs__succeeded = (ml_backend__mlds_to_cs__IsArray_13 == (MR_Integer) 0);
          if (ml_backend__mlds_to_cs__succeeded)
            ml_backend__mlds_to_cs__V_31_31 = (MR_String) " {";
          else
            ml_backend__mlds_to_cs__V_31_31 = (MR_String) "(";
          {
            mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__V_31_31);
          }
          {
            ml_backend__mlds_to_cs__output_initializer_body_list_4_p_0(ml_backend__mlds_to_cs__Info_6, ml_backend__mlds_to_cs__FieldInits_12);
          }
          ml_backend__mlds_to_cs__succeeded = (ml_backend__mlds_to_cs__IsArray_13 == (MR_Integer) 0);
          if (ml_backend__mlds_to_cs__succeeded)
            ml_backend__mlds_to_cs__V_34_34 = (MR_Char) 125;
          else
            ml_backend__mlds_to_cs__V_34_34 = (MR_Char) 41;
          {
            mercury__io__write_char_3_p_0(ml_backend__mlds_to_cs__V_34_34);
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word ml_backend__mlds_to_cs__ElementInits_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Initializer_7, (MR_Integer) 0)));

          {
            mercury__io__write_string_3_p_0((MR_String) "new ");
          }
          if ((ml_backend__mlds_to_cs__MaybeType_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "/* XXX init_array */ object[]");
              }
            }
          else
            {
              MR_Word ml_backend__mlds_to_cs__Type_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__MaybeType_8, (MR_Integer) 0)));

              {
                ml_backend__mlds_to_cs__output_type_4_p_0(ml_backend__mlds_to_cs__Info_6, ml_backend__mlds_to_cs__Type_15);
              }
            }
          {
            mercury__io__write_string_3_p_0((MR_String) " {\n\t\t");
          }
          {
            ml_backend__mlds_to_cs__output_initializer_body_list_4_p_0(ml_backend__mlds_to_cs__Info_6, ml_backend__mlds_to_cs__ElementInits_14);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "}");
          }
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_initializer_alloc_only_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_6,
  MR_Word ml_backend__mlds_to_cs__Initializer_7,
  MR_Word ml_backend__mlds_to_cs__MaybeType_8)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;

    switch (MR_tag((MR_Word) ml_backend__mlds_to_cs__Initializer_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "ml_backend.mlds_to_cs", (MR_String) "predicate \140ml_backend.mlds_to_cs.output_initializer_alloc_only\'/5", (MR_String) "no_initializer");
            return;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "ml_backend.mlds_to_cs", (MR_String) "predicate \140ml_backend.mlds_to_cs.output_initializer_alloc_only\'/5", (MR_String) "init_obj");
            return;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ml_backend__mlds_to_cs__StructType_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__Initializer_7, (MR_Integer) 0)));
          MR_Word ml_backend__mlds_to_cs__FieldInits_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__Initializer_7, (MR_Integer) 1)));
          MR_Word ml_backend__mlds_to_cs__CtorCat_14;
          MR_Word ml_backend__mlds_to_cs___Type_13;
          MR_Word ml_backend__mlds_to_cs__V_15_15;

          {
            mercury__io__write_string_3_p_0((MR_String) "new ");
          }
          ml_backend__mlds_to_cs__succeeded = ((MR_tag((MR_Word) ml_backend__mlds_to_cs__StructType_11)) == (MR_mktag((MR_Integer) 2)));
          if (ml_backend__mlds_to_cs__succeeded)
            {
              ml_backend__mlds_to_cs___Type_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__StructType_11, (MR_Integer) 0)));
              ml_backend__mlds_to_cs__CtorCat_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__StructType_11, (MR_Integer) 1)));
              ml_backend__mlds_to_cs__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__StructType_11, (MR_Integer) 2)));
              switch (MR_tag((MR_Word) ml_backend__mlds_to_cs__CtorCat_14)) {
                default:
                  ml_backend__mlds_to_cs__succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 0:
                  switch (MR_unmkbody(ml_backend__mlds_to_cs__CtorCat_14)) {
                    default:
                      ml_backend__mlds_to_cs__succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 0:
                      ml_backend__mlds_to_cs__succeeded = MR_TRUE;
                      break;
                    case (MR_Integer) 1:
                      ml_backend__mlds_to_cs__succeeded = MR_TRUE;
                      break;
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__CtorCat_14, (MR_Integer) 0)))) {
                    default:
                      ml_backend__mlds_to_cs__succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 0:
                      {
                        MR_Word ml_backend__mlds_to_cs__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__CtorCat_14, (MR_Integer) 1)));

                        switch (ml_backend__mlds_to_cs__V_94_94) {
                          default:
                            ml_backend__mlds_to_cs__succeeded = MR_FALSE;
                            break;
                          case (MR_Integer) 3:
                            ml_backend__mlds_to_cs__succeeded = MR_TRUE;
                            break;
                          case (MR_Integer) 2:
                            ml_backend__mlds_to_cs__succeeded = MR_TRUE;
                            break;
                        }
                      }
                      break;
                  }
                  break;
              }
            }
          if (ml_backend__mlds_to_cs__succeeded)
            {
              MR_Integer ml_backend__mlds_to_cs__Size_16;
              MR_String ml_backend__mlds_to_cs__V_66_66;

              {
                ml_backend__mlds_to_cs__Size_16 = mercury__list__length_1_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, ml_backend__mlds_to_cs__FieldInits_12);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "object[");
              }
              {
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ml_backend__mlds_to_cs_scalar_common_9[0], ml_backend__mlds_to_cs__Size_16, &ml_backend__mlds_to_cs__V_66_66);
              }
              {
                mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__V_66_66);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "]");
              }
            }
          else
            {
              {
                ml_backend__mlds_to_cs__output_type_4_p_0(ml_backend__mlds_to_cs__Info_6, ml_backend__mlds_to_cs__StructType_11);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "()");
              }
            }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word ml_backend__mlds_to_cs__ElementInits_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Initializer_7, (MR_Integer) 0)));
          MR_Integer ml_backend__mlds_to_cs__Size_57;

          {
            ml_backend__mlds_to_cs__Size_57 = mercury__list__length_1_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, ml_backend__mlds_to_cs__ElementInits_17);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "new ");
          }
          if ((ml_backend__mlds_to_cs__MaybeType_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              MR_String ml_backend__mlds_to_cs__V_77_77;

              {
                mercury__io__write_string_3_p_0((MR_String) "/* XXX init_array */ object[");
              }
              {
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ml_backend__mlds_to_cs_scalar_common_9[0], ml_backend__mlds_to_cs__Size_57, &ml_backend__mlds_to_cs__V_77_77);
              }
              {
                mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__V_77_77);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "]");
              }
            }
          else
            {
              MR_Word ml_backend__mlds_to_cs__Type_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__MaybeType_8, (MR_Integer) 0)));
              MR_String ml_backend__mlds_to_cs__String_19;
              MR_Word ml_backend__mlds_to_cs__ArrayDims_20;
              MR_Word ml_backend__mlds_to_cs__Heads_21;
              MR_Integer ml_backend__mlds_to_cs__V_62_62;
              MR_Box ml_backend__mlds_to_cs__conv0_V_62_62;

              {
                ml_backend__mlds_to_cs__type_to_string_4_p_0(ml_backend__mlds_to_cs__Info_6, ml_backend__mlds_to_cs__Type_18, &ml_backend__mlds_to_cs__String_19, &ml_backend__mlds_to_cs__ArrayDims_20);
              }
              {
                mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__String_19);
              }
              {
                ml_backend__mlds_to_cs__succeeded = mercury__list__split_last_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ml_backend__mlds_to_cs__ArrayDims_20, &ml_backend__mlds_to_cs__Heads_21, &ml_backend__mlds_to_cs__conv0_V_62_62);
              }
              if (ml_backend__mlds_to_cs__succeeded)
                {
                  ml_backend__mlds_to_cs__V_62_62 = ((MR_Integer) ml_backend__mlds_to_cs__conv0_V_62_62);
                  ml_backend__mlds_to_cs__succeeded = MR_TRUE;
                }
              if (ml_backend__mlds_to_cs__succeeded)
                ml_backend__mlds_to_cs__succeeded = ((MR_Integer) 0 == ml_backend__mlds_to_cs__V_62_62);
              if (ml_backend__mlds_to_cs__succeeded)
                {
                  MR_Word ml_backend__mlds_to_cs__V_33_33;
                  MR_Word ml_backend__mlds_to_cs__V_35_35;

                  {
                    ml_backend__mlds_to_cs__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__V_35_35, 0) = ((MR_Box) (ml_backend__mlds_to_cs__Size_57));
                    MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    ml_backend__mlds_to_cs__V_33_33 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ml_backend__mlds_to_cs__Heads_21, ml_backend__mlds_to_cs__V_35_35);
                  }
                  {
                    ml_backend__mlds_to_cs__output_array_dimensions_3_p_0(ml_backend__mlds_to_cs__V_33_33);
                  }
                }
              else
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "ml_backend.mlds_to_cs", (MR_String) "predicate \140ml_backend.mlds_to_cs.output_initializer_alloc_only\'/5", (MR_String) "missing array dimension");
                    return;
                  }
                }
            }
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_initializer_6_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_7,
  MR_Word ml_backend__mlds_to_cs__OutputAux_8,
  MR_Word ml_backend__mlds_to_cs__Type_9,
  MR_Word ml_backend__mlds_to_cs__Initializer_10)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;

    switch (MR_tag((MR_Word) ml_backend__mlds_to_cs__Initializer_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_tag((MR_Word) ml_backend__mlds_to_cs__OutputAux_8)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(ml_backend__mlds_to_cs__OutputAux_8)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                }
                break;
              case (MR_Integer) 1:
                {
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_String ml_backend__mlds_to_cs__V_19_19;

                  {
                    mercury__io__write_string_3_p_0((MR_String) " = ");
                  }
                  switch (MR_tag((MR_Word) ml_backend__mlds_to_cs__Type_9)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      switch (MR_unmkbody(ml_backend__mlds_to_cs__Type_9)) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                        case (MR_Integer) 5:
                        case (MR_Integer) 6:
                        case (MR_Integer) 7:
                        case (MR_Integer) 8:
                          ml_backend__mlds_to_cs__V_19_19 = (MR_String) "null";
                          break;
                        case (MR_Integer) 1:
                          ml_backend__mlds_to_cs__V_19_19 = (MR_String) "false";
                          break;
                        case (MR_Integer) 2:
                        case (MR_Integer) 3:
                          ml_backend__mlds_to_cs__V_19_19 = (MR_String) "0";
                          break;
                        case (MR_Integer) 4:
                          ml_backend__mlds_to_cs__V_19_19 = (MR_String) "\'\\u0000\'";
                          break;
                        case (MR_Integer) 9:
                          {
                            {
                              mercury__require__unexpected_3_p_0((MR_String) "ml_backend.mlds_to_cs", (MR_String) "function \140ml_backend.mlds_to_cs.get_type_initializer\'/2", (MR_String) "variable has unknown_type");
                              return;
                            }
                          }
                          break;
                      }
                      break;
                    case (MR_Integer) 1:
                      ml_backend__mlds_to_cs__V_19_19 = (MR_String) "null";
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word ml_backend__mlds_to_cs__CtorCat_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__Type_9, (MR_Integer) 1)));
                        MR_Word ml_backend__mlds_to_cs__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__Type_9, (MR_Integer) 0)));
                        MR_Word ml_backend__mlds_to_cs__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__Type_9, (MR_Integer) 2)));

                        switch (MR_tag((MR_Word) ml_backend__mlds_to_cs__CtorCat_35)) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            switch (MR_unmkbody(ml_backend__mlds_to_cs__CtorCat_35)) {
                              default: /*NOTREACHED*/ MR_assert(0);
                              case (MR_Integer) 0:
                                ml_backend__mlds_to_cs__V_19_19 = (MR_String) "null";
                                break;
                              case (MR_Integer) 1:
                                ml_backend__mlds_to_cs__V_19_19 = (MR_String) "null";
                                break;
                              case (MR_Integer) 2:
                                {
                                  MR_String ml_backend__mlds_to_cs__TypeString_40;
                                  MR_String ml_backend__mlds_to_cs__V_69_69;
                                  MR_Word ml_backend__mlds_to_cs__V_41_41;

                                  {
                                    ml_backend__mlds_to_cs__type_to_string_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Type_9, &ml_backend__mlds_to_cs__TypeString_40, &ml_backend__mlds_to_cs__V_41_41);
                                  }
                                  {
                                    ml_backend__mlds_to_cs__V_69_69 = mercury__string__f_43_43_2_f_0(ml_backend__mlds_to_cs__TypeString_40, (MR_String) ")");
                                  }
                                  {
                                    ml_backend__mlds_to_cs__V_19_19 = mercury__string__f_43_43_2_f_0((MR_String) "default(", ml_backend__mlds_to_cs__V_69_69);
                                  }
                                }
                                break;
                              case (MR_Integer) 3:
                                ml_backend__mlds_to_cs__V_19_19 = (MR_String) "null";
                                break;
                              case (MR_Integer) 4:
                                ml_backend__mlds_to_cs__V_19_19 = (MR_String) "null";
                                break;
                            }
                            break;
                          case (MR_Integer) 1:
                            {
                              MR_Word ml_backend__mlds_to_cs__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__CtorCat_35, (MR_Integer) 0)));

                              ml_backend__mlds_to_cs__V_19_19 = ((&ml_backend__mlds_to_cs_vector_common_11[4 + ml_backend__mlds_to_cs__V_75_75]))->ml_backend__mlds_to_cs__vector_common_type_11_0__vct_11_f_0;
                            }
                            break;
                          case (MR_Integer) 2:
                            {
                              MR_String ml_backend__mlds_to_cs__TypeString_40;
                              MR_String ml_backend__mlds_to_cs__V_69_69;
                              MR_Word ml_backend__mlds_to_cs__V_41_41;

                              {
                                ml_backend__mlds_to_cs__type_to_string_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Type_9, &ml_backend__mlds_to_cs__TypeString_40, &ml_backend__mlds_to_cs__V_41_41);
                              }
                              {
                                ml_backend__mlds_to_cs__V_69_69 = mercury__string__f_43_43_2_f_0(ml_backend__mlds_to_cs__TypeString_40, (MR_String) ")");
                              }
                              {
                                ml_backend__mlds_to_cs__V_19_19 = mercury__string__f_43_43_2_f_0((MR_String) "default(", ml_backend__mlds_to_cs__V_69_69);
                              }
                            }
                            break;
                          case (MR_Integer) 3:
                            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__CtorCat_35, (MR_Integer) 0)))) {
                              default: /*NOTREACHED*/ MR_assert(0);
                              case (MR_Integer) 0:
                                ml_backend__mlds_to_cs__V_19_19 = (MR_String) "null";
                                break;
                              case (MR_Integer) 1:
                                {
                                  MR_String ml_backend__mlds_to_cs__TypeString_40;
                                  MR_String ml_backend__mlds_to_cs__V_69_69;
                                  MR_Word ml_backend__mlds_to_cs__V_41_41;

                                  {
                                    ml_backend__mlds_to_cs__type_to_string_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Type_9, &ml_backend__mlds_to_cs__TypeString_40, &ml_backend__mlds_to_cs__V_41_41);
                                  }
                                  {
                                    ml_backend__mlds_to_cs__V_69_69 = mercury__string__f_43_43_2_f_0(ml_backend__mlds_to_cs__TypeString_40, (MR_String) ")");
                                  }
                                  {
                                    ml_backend__mlds_to_cs__V_19_19 = mercury__string__f_43_43_2_f_0((MR_String) "default(", ml_backend__mlds_to_cs__V_69_69);
                                  }
                                }
                                break;
                            }
                            break;
                        }
                      }
                      break;
                    case (MR_Integer) 3:
                      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Type_9, (MR_Integer) 0)))) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                        case (MR_Integer) 1:
                        case (MR_Integer) 3:
                        case (MR_Integer) 4:
                        case (MR_Integer) 5:
                        case (MR_Integer) 6:
                        case (MR_Integer) 7:
                        case (MR_Integer) 8:
                          ml_backend__mlds_to_cs__V_19_19 = (MR_String) "null";
                          break;
                        case (MR_Integer) 2:
                          {
                            MR_Word ml_backend__mlds_to_cs__ForeignType_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Type_9, (MR_Integer) 1)));

                            switch (MR_tag((MR_Word) ml_backend__mlds_to_cs__ForeignType_53)) {
                              default: /*NOTREACHED*/ MR_assert(0);
                              case (MR_Integer) 0:
                              case (MR_Integer) 1:
                              case (MR_Integer) 3:
                                {
                                  {
                                    mercury__require__unexpected_3_p_0((MR_String) "ml_backend.mlds_to_cs", (MR_String) "function \140ml_backend.mlds_to_cs.get_type_initializer\'/2", (MR_String) "wrong foreign language type");
                                    return;
                                  }
                                }
                                break;
                              case (MR_Integer) 2:
                                {
                                  MR_String ml_backend__mlds_to_cs__CsharpType_54;
                                  MR_Word ml_backend__mlds_to_cs__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__ForeignType_53, (MR_Integer) 0)));
                                  MR_String ml_backend__mlds_to_cs__V_66_66;

                                  ml_backend__mlds_to_cs__CsharpType_54 = (MR_String) ml_backend__mlds_to_cs__V_64_64;
                                  {
                                    ml_backend__mlds_to_cs__V_66_66 = mercury__string__f_43_43_2_f_0(ml_backend__mlds_to_cs__CsharpType_54, (MR_String) ")");
                                  }
                                  {
                                    ml_backend__mlds_to_cs__V_19_19 = mercury__string__f_43_43_2_f_0((MR_String) "default(", ml_backend__mlds_to_cs__V_66_66);
                                  }
                                }
                                break;
                            }
                          }
                          break;
                      }
                      break;
                  }
                  {
                    mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__V_19_19);
                  }
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) " = ");
          }
          switch (MR_tag((MR_Word) ml_backend__mlds_to_cs__OutputAux_8)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(ml_backend__mlds_to_cs__OutputAux_8)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 2:
                  {
                    MR_Word ml_backend__mlds_to_cs__V_78_78;

                    {
                      ml_backend__mlds_to_cs__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__V_78_78, 0) = ((MR_Box) (ml_backend__mlds_to_cs__Type_9));
                    }
                    {
                      ml_backend__mlds_to_cs__output_initializer_body_5_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Initializer_10, ml_backend__mlds_to_cs__V_78_78);
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word ml_backend__mlds_to_cs__V_77_77;

                    {
                      ml_backend__mlds_to_cs__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__V_77_77, 0) = ((MR_Box) (ml_backend__mlds_to_cs__Type_9));
                    }
                    {
                      ml_backend__mlds_to_cs__output_initializer_alloc_only_5_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Initializer_10, ml_backend__mlds_to_cs__V_77_77);
                    }
                  }
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ml_backend__mlds_to_cs__V_78_78;

                {
                  ml_backend__mlds_to_cs__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__V_78_78, 0) = ((MR_Box) (ml_backend__mlds_to_cs__Type_9));
                }
                {
                  ml_backend__mlds_to_cs__output_initializer_body_5_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Initializer_10, ml_backend__mlds_to_cs__V_78_78);
                }
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) " = ");
          }
          switch (MR_tag((MR_Word) ml_backend__mlds_to_cs__OutputAux_8)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(ml_backend__mlds_to_cs__OutputAux_8)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 2:
                  {
                    MR_Word ml_backend__mlds_to_cs__V_88_88;

                    {
                      ml_backend__mlds_to_cs__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__V_88_88, 0) = ((MR_Box) (ml_backend__mlds_to_cs__Type_9));
                    }
                    {
                      ml_backend__mlds_to_cs__output_initializer_body_5_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Initializer_10, ml_backend__mlds_to_cs__V_88_88);
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word ml_backend__mlds_to_cs__V_87_87;

                    {
                      ml_backend__mlds_to_cs__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__V_87_87, 0) = ((MR_Box) (ml_backend__mlds_to_cs__Type_9));
                    }
                    {
                      ml_backend__mlds_to_cs__output_initializer_alloc_only_5_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Initializer_10, ml_backend__mlds_to_cs__V_87_87);
                    }
                  }
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ml_backend__mlds_to_cs__V_88_88;

                {
                  ml_backend__mlds_to_cs__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__V_88_88, 0) = ((MR_Box) (ml_backend__mlds_to_cs__Type_9));
                }
                {
                  ml_backend__mlds_to_cs__output_initializer_body_5_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Initializer_10, ml_backend__mlds_to_cs__V_88_88);
                }
              }
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) " = ");
          }
          switch (MR_tag((MR_Word) ml_backend__mlds_to_cs__OutputAux_8)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(ml_backend__mlds_to_cs__OutputAux_8)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 2:
                  {
                    MR_Word ml_backend__mlds_to_cs__V_25_25;

                    {
                      ml_backend__mlds_to_cs__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__V_25_25, 0) = ((MR_Box) (ml_backend__mlds_to_cs__Type_9));
                    }
                    {
                      ml_backend__mlds_to_cs__output_initializer_body_5_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Initializer_10, ml_backend__mlds_to_cs__V_25_25);
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word ml_backend__mlds_to_cs__V_23_23;

                    {
                      ml_backend__mlds_to_cs__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__V_23_23, 0) = ((MR_Box) (ml_backend__mlds_to_cs__Type_9));
                    }
                    {
                      ml_backend__mlds_to_cs__output_initializer_alloc_only_5_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Initializer_10, ml_backend__mlds_to_cs__V_23_23);
                    }
                  }
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ml_backend__mlds_to_cs__V_25_25;

                {
                  ml_backend__mlds_to_cs__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__V_25_25, 0) = ((MR_Box) (ml_backend__mlds_to_cs__Type_9));
                }
                {
                  ml_backend__mlds_to_cs__output_initializer_body_5_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Initializer_10, ml_backend__mlds_to_cs__V_25_25);
                }
              }
              break;
          }
        }
        break;
    }
  }
}

static MR_String MR_CALL 
ml_backend__mlds_to_cs__get_type_initializer_2_f_0(
  MR_Word ml_backend__mlds_to_cs__Info_4,
  MR_Word ml_backend__mlds_to_cs__Type_5)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_String ml_backend__mlds_to_cs__Initializer_6;

    switch (MR_tag((MR_Word) ml_backend__mlds_to_cs__Type_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ml_backend__mlds_to_cs__Type_5)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 5:
          case (MR_Integer) 6:
          case (MR_Integer) 7:
          case (MR_Integer) 8:
            ml_backend__mlds_to_cs__Initializer_6 = (MR_String) "null";
            break;
          case (MR_Integer) 1:
            ml_backend__mlds_to_cs__Initializer_6 = (MR_String) "false";
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            ml_backend__mlds_to_cs__Initializer_6 = (MR_String) "0";
            break;
          case (MR_Integer) 4:
            ml_backend__mlds_to_cs__Initializer_6 = (MR_String) "\'\\u0000\'";
            break;
          case (MR_Integer) 9:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ml_backend.mlds_to_cs", (MR_String) "function \140ml_backend.mlds_to_cs.get_type_initializer\'/2", (MR_String) "variable has unknown_type");
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        ml_backend__mlds_to_cs__Initializer_6 = (MR_String) "null";
        break;
      case (MR_Integer) 2:
        {
          MR_Word ml_backend__mlds_to_cs__CtorCat_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__Type_5, (MR_Integer) 1)));
          MR_Word ml_backend__mlds_to_cs__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__Type_5, (MR_Integer) 0)));
          MR_Word ml_backend__mlds_to_cs__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__Type_5, (MR_Integer) 2)));

          switch (MR_tag((MR_Word) ml_backend__mlds_to_cs__CtorCat_8)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(ml_backend__mlds_to_cs__CtorCat_8)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  ml_backend__mlds_to_cs__Initializer_6 = (MR_String) "null";
                  break;
                case (MR_Integer) 1:
                  ml_backend__mlds_to_cs__Initializer_6 = (MR_String) "null";
                  break;
                case (MR_Integer) 2:
                  {
                    MR_String ml_backend__mlds_to_cs__TypeString_13;
                    MR_String ml_backend__mlds_to_cs__V_42_42;
                    MR_Word ml_backend__mlds_to_cs__V_14_14;

                    {
                      ml_backend__mlds_to_cs__type_to_string_4_p_0(ml_backend__mlds_to_cs__Info_4, ml_backend__mlds_to_cs__Type_5, &ml_backend__mlds_to_cs__TypeString_13, &ml_backend__mlds_to_cs__V_14_14);
                    }
                    {
                      ml_backend__mlds_to_cs__V_42_42 = mercury__string__f_43_43_2_f_0(ml_backend__mlds_to_cs__TypeString_13, (MR_String) ")");
                    }
                    {
                      ml_backend__mlds_to_cs__Initializer_6 = mercury__string__f_43_43_2_f_0((MR_String) "default(", ml_backend__mlds_to_cs__V_42_42);
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  ml_backend__mlds_to_cs__Initializer_6 = (MR_String) "null";
                  break;
                case (MR_Integer) 4:
                  ml_backend__mlds_to_cs__Initializer_6 = (MR_String) "null";
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ml_backend__mlds_to_cs__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__CtorCat_8, (MR_Integer) 0)));

                ml_backend__mlds_to_cs__Initializer_6 = ((&ml_backend__mlds_to_cs_vector_common_11[0 + ml_backend__mlds_to_cs__V_48_48]))->ml_backend__mlds_to_cs__vector_common_type_11_0__vct_11_f_0;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_String ml_backend__mlds_to_cs__TypeString_13;
                MR_String ml_backend__mlds_to_cs__V_42_42;
                MR_Word ml_backend__mlds_to_cs__V_14_14;

                {
                  ml_backend__mlds_to_cs__type_to_string_4_p_0(ml_backend__mlds_to_cs__Info_4, ml_backend__mlds_to_cs__Type_5, &ml_backend__mlds_to_cs__TypeString_13, &ml_backend__mlds_to_cs__V_14_14);
                }
                {
                  ml_backend__mlds_to_cs__V_42_42 = mercury__string__f_43_43_2_f_0(ml_backend__mlds_to_cs__TypeString_13, (MR_String) ")");
                }
                {
                  ml_backend__mlds_to_cs__Initializer_6 = mercury__string__f_43_43_2_f_0((MR_String) "default(", ml_backend__mlds_to_cs__V_42_42);
                }
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__CtorCat_8, (MR_Integer) 0)))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  ml_backend__mlds_to_cs__Initializer_6 = (MR_String) "null";
                  break;
                case (MR_Integer) 1:
                  {
                    MR_String ml_backend__mlds_to_cs__TypeString_13;
                    MR_String ml_backend__mlds_to_cs__V_42_42;
                    MR_Word ml_backend__mlds_to_cs__V_14_14;

                    {
                      ml_backend__mlds_to_cs__type_to_string_4_p_0(ml_backend__mlds_to_cs__Info_4, ml_backend__mlds_to_cs__Type_5, &ml_backend__mlds_to_cs__TypeString_13, &ml_backend__mlds_to_cs__V_14_14);
                    }
                    {
                      ml_backend__mlds_to_cs__V_42_42 = mercury__string__f_43_43_2_f_0(ml_backend__mlds_to_cs__TypeString_13, (MR_String) ")");
                    }
                    {
                      ml_backend__mlds_to_cs__Initializer_6 = mercury__string__f_43_43_2_f_0((MR_String) "default(", ml_backend__mlds_to_cs__V_42_42);
                    }
                  }
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Type_5, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
          case (MR_Integer) 6:
          case (MR_Integer) 7:
          case (MR_Integer) 8:
            ml_backend__mlds_to_cs__Initializer_6 = (MR_String) "null";
            break;
          case (MR_Integer) 2:
            {
              MR_Word ml_backend__mlds_to_cs__ForeignType_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Type_5, (MR_Integer) 1)));

              switch (MR_tag((MR_Word) ml_backend__mlds_to_cs__ForeignType_26)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 1:
                case (MR_Integer) 3:
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "ml_backend.mlds_to_cs", (MR_String) "function \140ml_backend.mlds_to_cs.get_type_initializer\'/2", (MR_String) "wrong foreign language type");
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_String ml_backend__mlds_to_cs__CsharpType_27;
                    MR_Word ml_backend__mlds_to_cs__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__ForeignType_26, (MR_Integer) 0)));
                    MR_String ml_backend__mlds_to_cs__V_39_39;

                    ml_backend__mlds_to_cs__CsharpType_27 = (MR_String) ml_backend__mlds_to_cs__V_37_37;
                    {
                      ml_backend__mlds_to_cs__V_39_39 = mercury__string__f_43_43_2_f_0(ml_backend__mlds_to_cs__CsharpType_27, (MR_String) ")");
                    }
                    {
                      ml_backend__mlds_to_cs__Initializer_6 = mercury__string__f_43_43_2_f_0((MR_String) "default(", ml_backend__mlds_to_cs__V_39_39);
                    }
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
    return ml_backend__mlds_to_cs__Initializer_6;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_vector_cell_init_6_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3)
{
  {
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;

    {
      ml_backend__mlds_to_cs__IntroducedFrom__pred__output_initializer_body_list__1710__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_vector_cell_init_6_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_7,
  MR_Integer ml_backend__mlds_to_cs__Indent_8,
  MR_Word ml_backend__mlds_to_cs__TypeNum_9,
  MR_Word ml_backend__mlds_to_cs__CellGroup_10)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Integer ml_backend__mlds_to_cs__TypeRawNum_12 = (MR_Integer) ml_backend__mlds_to_cs__TypeNum_9;
    MR_Word ml_backend__mlds_to_cs__Type_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__CellGroup_10, (MR_Integer) 0)));
    MR_Word ml_backend__mlds_to_cs__RowInits_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__CellGroup_10, (MR_Integer) 4)));
    MR_Integer ml_backend__mlds_to_cs__V_29_29;
    MR_Word ml_backend__mlds_to_cs__V_32_32;
    MR_String ml_backend__mlds_to_cs__V_42_42;
    MR_Word ml_backend__mlds_to_cs__V_57_57;
    MR_Word ml_backend__mlds_to_cs___ClassDefn_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__CellGroup_10, (MR_Integer) 1)));
    MR_Word ml_backend__mlds_to_cs___FieldIds_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__CellGroup_10, (MR_Integer) 2)));
    MR_Integer ml_backend__mlds_to_cs___NextRow_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__CellGroup_10, (MR_Integer) 3)));

    {
      ml_backend__mlds_to_cs__indent_line_3_p_0(ml_backend__mlds_to_cs__Indent_8);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "MR_vector_common_");
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ml_backend__mlds_to_cs_scalar_common_9[0], ml_backend__mlds_to_cs__TypeRawNum_12, &ml_backend__mlds_to_cs__V_42_42);
    }
    {
      mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__V_42_42);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " = new ");
    }
    {
      ml_backend__mlds_to_cs__output_type_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Type_13);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "[] {\n");
    }
    ml_backend__mlds_to_cs__V_29_29 = (ml_backend__mlds_to_cs__Indent_8 + (MR_Integer) 1);
    {
      ml_backend__mlds_to_cs__indent_line_3_p_0(ml_backend__mlds_to_cs__V_29_29);
    }
    {
      ml_backend__mlds_to_cs__V_32_32 = mercury__cord__list_1_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, ml_backend__mlds_to_cs__RowInits_17);
    }
    {
      ml_backend__mlds_to_cs__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_57_57, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_8[2]));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_57_57, 1) = ((MR_Box) (ml_backend__mlds_to_cs__output_vector_cell_init_6_p_0_1));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_57_57, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_57_57, 3) = ((MR_Box) (ml_backend__mlds_to_cs__Info_7));
    }
    {
      mercury__io__write_list_5_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, ml_backend__mlds_to_cs__V_32_32, (MR_String) ",\n\t\t", ml_backend__mlds_to_cs__V_57_57);
    }
    {
      mercury__io__nl_2_p_0();
    }
    {
      ml_backend__mlds_to_cs__indent_line_3_p_0(ml_backend__mlds_to_cs__Indent_8);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "};\n");
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_vector_cell_decl_6_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_7,
  MR_Integer ml_backend__mlds_to_cs__Indent_8,
  MR_Word ml_backend__mlds_to_cs__TypeNum_9,
  MR_Word ml_backend__mlds_to_cs__CellGroup_10)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Integer ml_backend__mlds_to_cs__TypeRawNum_12 = (MR_Integer) ml_backend__mlds_to_cs__TypeNum_9;
    MR_Word ml_backend__mlds_to_cs__Type_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__CellGroup_10, (MR_Integer) 0)));
    MR_Word ml_backend__mlds_to_cs__ClassDefn_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__CellGroup_10, (MR_Integer) 1)));
    MR_String ml_backend__mlds_to_cs__V_34_34;
    MR_Word ml_backend__mlds_to_cs___FieldIds_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__CellGroup_10, (MR_Integer) 2)));
    MR_Integer ml_backend__mlds_to_cs___NextRow_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__CellGroup_10, (MR_Integer) 3)));
    MR_Word ml_backend__mlds_to_cs___RowInits_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__CellGroup_10, (MR_Integer) 4)));

    {
      ml_backend__mlds_to_cs__output_defn_6_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Indent_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__mlds_to_cs__ClassDefn_14);
    }
    {
      ml_backend__mlds_to_cs__indent_line_3_p_0(ml_backend__mlds_to_cs__Indent_8);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "private static /* readonly */ ");
    }
    {
      ml_backend__mlds_to_cs__output_type_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Type_13);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "[] MR_vector_common_");
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ml_backend__mlds_to_cs_scalar_common_9[0], ml_backend__mlds_to_cs__TypeRawNum_12, &ml_backend__mlds_to_cs__V_34_34);
    }
    {
      mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__V_34_34);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ";\n");
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_vector_common_data_5_p_0_2(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_3,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_4)
{
  {
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;

    {
      ml_backend__mlds_to_cs__output_vector_cell_init_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_1), ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_2));
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_vector_common_data_5_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_3,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_4)
{
  {
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;

    {
      ml_backend__mlds_to_cs__output_vector_cell_decl_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_1), ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_2));
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_vector_common_data_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_6,
  MR_Integer ml_backend__mlds_to_cs__Indent_7,
  MR_Word ml_backend__mlds_to_cs__VectorCellGroupMap_8)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Word ml_backend__mlds_to_cs__TypeCtorInfo_28_28;
    MR_Word ml_backend__mlds_to_cs__TypeCtorInfo_29_29;
    MR_Word ml_backend__mlds_to_cs__TypeCtorInfo_30_30;
    MR_Word ml_backend__mlds_to_cs__V_12_12;
    MR_Word ml_backend__mlds_to_cs__V_17_17;
    MR_Integer ml_backend__mlds_to_cs__V_19_19;
    MR_Box ml_backend__mlds_to_cs__conv0_STATE_VARIABLE_IO_13_13;
    MR_Box ml_backend__mlds_to_cs__conv1_STATE_VARIABLE_IO_18_18;

    {
      ml_backend__mlds_to_cs__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_12_12, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_7[5]));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_12_12, 1) = ((MR_Box) (ml_backend__mlds_to_cs__output_vector_common_data_5_p_0_1));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_12_12, 3) = ((MR_Box) (ml_backend__mlds_to_cs__Info_6));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_12_12, 4) = ((MR_Box) (ml_backend__mlds_to_cs__Indent_7));
    }
    ml_backend__mlds_to_cs__TypeCtorInfo_28_28 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0;
    ml_backend__mlds_to_cs__TypeCtorInfo_29_29 = (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_vector_cell_group_0;
    ml_backend__mlds_to_cs__TypeCtorInfo_30_30 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
    {
      mercury__map__foldl_4_p_2(ml_backend__mlds_to_cs__TypeCtorInfo_28_28, ml_backend__mlds_to_cs__TypeCtorInfo_29_29, ml_backend__mlds_to_cs__TypeCtorInfo_30_30, ml_backend__mlds_to_cs__V_12_12, ml_backend__mlds_to_cs__VectorCellGroupMap_8, ((MR_Box) ((MR_Integer) 0)), &ml_backend__mlds_to_cs__conv0_STATE_VARIABLE_IO_13_13);
    }
    {
      ml_backend__mlds_to_cs__indent_line_3_p_0(ml_backend__mlds_to_cs__Indent_7);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "private static void MR_init_vector_common_data() {\n");
    }
    ml_backend__mlds_to_cs__V_19_19 = (ml_backend__mlds_to_cs__Indent_7 + (MR_Integer) 1);
    {
      ml_backend__mlds_to_cs__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_17_17, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_7[5]));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_17_17, 1) = ((MR_Box) (ml_backend__mlds_to_cs__output_vector_common_data_5_p_0_2));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_17_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_17_17, 3) = ((MR_Box) (ml_backend__mlds_to_cs__Info_6));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_17_17, 4) = ((MR_Box) (ml_backend__mlds_to_cs__V_19_19));
    }
    {
      mercury__map__foldl_4_p_2(ml_backend__mlds_to_cs__TypeCtorInfo_28_28, ml_backend__mlds_to_cs__TypeCtorInfo_29_29, ml_backend__mlds_to_cs__TypeCtorInfo_30_30, ml_backend__mlds_to_cs__V_17_17, ml_backend__mlds_to_cs__VectorCellGroupMap_8, ((MR_Box) ((MR_Integer) 0)), &ml_backend__mlds_to_cs__conv1_STATE_VARIABLE_IO_18_18);
    }
    {
      ml_backend__mlds_to_cs__indent_line_3_p_0(ml_backend__mlds_to_cs__Indent_7);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "}\n");
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_scalar_init_6_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_7,
  MR_Integer ml_backend__mlds_to_cs__Indent_8,
  MR_Word ml_backend__mlds_to_cs__Map_9,
  MR_Word ml_backend__mlds_to_cs__Scalar_10)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Word ml_backend__mlds_to_cs__Initializer_12;
    MR_Word ml_backend__mlds_to_cs__Type_14;
    MR_Word ml_backend__mlds_to_cs__TypeNum_15;
    MR_Integer ml_backend__mlds_to_cs__RowNum_16;
    MR_Integer ml_backend__mlds_to_cs__TypeRawNum_17;
    MR_Word ml_backend__mlds_to_cs__V_28_28;
    MR_String ml_backend__mlds_to_cs__V_37_37;
    MR_Word ml_backend__mlds_to_cs__V_43_43;
    MR_String ml_backend__mlds_to_cs__V_47_47;
    MR_Box ml_backend__mlds_to_cs__conv0_Initializer_12;
    MR_Word ml_backend__mlds_to_cs__V_13_13;

    {
      mercury__map__lookup_3_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, ml_backend__mlds_to_cs__Map_9, ((MR_Box) (ml_backend__mlds_to_cs__Scalar_10)), &ml_backend__mlds_to_cs__conv0_Initializer_12);
    }
    ml_backend__mlds_to_cs__Initializer_12 = ((MR_Word) ml_backend__mlds_to_cs__conv0_Initializer_12);
    ml_backend__mlds_to_cs__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Scalar_10, (MR_Integer) 0)));
    ml_backend__mlds_to_cs__Type_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Scalar_10, (MR_Integer) 1)));
    ml_backend__mlds_to_cs__TypeNum_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Scalar_10, (MR_Integer) 2)));
    ml_backend__mlds_to_cs__RowNum_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Scalar_10, (MR_Integer) 3)));
    ml_backend__mlds_to_cs__TypeRawNum_17 = (MR_Integer) ml_backend__mlds_to_cs__TypeNum_15;
    {
      ml_backend__mlds_to_cs__indent_line_3_p_0(ml_backend__mlds_to_cs__Indent_8);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "MR_scalar_common_");
    }
    ml_backend__mlds_to_cs__V_43_43 = (MR_Word) &ml_backend__mlds_to_cs_scalar_common_9[0];
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ml_backend__mlds_to_cs__V_43_43, ml_backend__mlds_to_cs__TypeRawNum_17, &ml_backend__mlds_to_cs__V_37_37);
    }
    {
      mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__V_37_37);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "[");
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ml_backend__mlds_to_cs__V_43_43, ml_backend__mlds_to_cs__RowNum_16, &ml_backend__mlds_to_cs__V_47_47);
    }
    {
      mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__V_47_47);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "] = ");
    }
    {
      ml_backend__mlds_to_cs__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__V_28_28, 0) = ((MR_Box) (ml_backend__mlds_to_cs__Type_14));
    }
    {
      ml_backend__mlds_to_cs__output_initializer_body_5_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Initializer_12, ml_backend__mlds_to_cs__V_28_28);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ";\n");
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__add_scalar_deps_rval_4_p_0(
  MR_Word ml_backend__mlds_to_cs__FromScalar_5,
  MR_Word ml_backend__mlds_to_cs__Rval_6,
  MR_Word ml_backend__mlds_to_cs__STATE_VARIABLE_Graph_0_18,
  MR_Word * ml_backend__mlds_to_cs__STATE_VARIABLE_Graph_19)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ml_backend__mlds_to_cs__succeeded;

        switch (MR_tag((MR_Word) ml_backend__mlds_to_cs__Rval_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ml_backend__mlds_to_cs__ToScalar_15 = (MR_Word) MR_body(((MR_Word) ml_backend__mlds_to_cs__Rval_6), (MR_Integer) 0);

              {
                mercury__digraph__add_vertices_and_edge_4_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0, ((MR_Box) (ml_backend__mlds_to_cs__FromScalar_5)), ((MR_Box) (ml_backend__mlds_to_cs__ToScalar_15)), ml_backend__mlds_to_cs__STATE_VARIABLE_Graph_0_18, ml_backend__mlds_to_cs__STATE_VARIABLE_Graph_19);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ml_backend.mlds_to_cs", (MR_String) "predicate \140ml_backend.mlds_to_cs.add_scalar_deps_rval\'/4", (MR_String) "lval");
                return;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ml_backend__mlds_to_cs__SubRvalA_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__Rval_6, (MR_Integer) 1)));
              MR_Integer ml_backend__mlds_to_cs__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__Rval_6, (MR_Integer) 0)));

              /* direct tailcall eliminated */
              {
                MR_Word ml_backend__mlds_to_cs__Rval__tmp_copy_6 = ml_backend__mlds_to_cs__SubRvalA_9;

                ml_backend__mlds_to_cs__Rval_6 = ml_backend__mlds_to_cs__Rval__tmp_copy_6;
              }
              continue;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Rval_6, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ml_backend__mlds_to_cs__RvalConst_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Rval_6, (MR_Integer) 1)));

                  switch (MR_tag((MR_Word) ml_backend__mlds_to_cs__RvalConst_14)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      switch (MR_unmkbody(ml_backend__mlds_to_cs__RvalConst_14)) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          *ml_backend__mlds_to_cs__STATE_VARIABLE_Graph_19 = ml_backend__mlds_to_cs__STATE_VARIABLE_Graph_0_18;
                          break;
                        case (MR_Integer) 1:
                          *ml_backend__mlds_to_cs__STATE_VARIABLE_Graph_19 = ml_backend__mlds_to_cs__STATE_VARIABLE_Graph_0_18;
                          break;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word ml_backend__mlds_to_cs__DataName_39;
                        MR_Word ml_backend__mlds_to_cs__V_61_61 = (MR_Word) MR_body(((MR_Word) ml_backend__mlds_to_cs__RvalConst_14), (MR_Integer) 1);
                        MR_Word ml_backend__mlds_to_cs__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_61_61, (MR_Integer) 0)));

                        ml_backend__mlds_to_cs__DataName_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_61_61, (MR_Integer) 1)));
                        switch (MR_tag((MR_Word) ml_backend__mlds_to_cs__DataName_39)) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            *ml_backend__mlds_to_cs__STATE_VARIABLE_Graph_19 = ml_backend__mlds_to_cs__STATE_VARIABLE_Graph_0_18;
                            break;
                          case (MR_Integer) 1:
                            *ml_backend__mlds_to_cs__STATE_VARIABLE_Graph_19 = ml_backend__mlds_to_cs__STATE_VARIABLE_Graph_0_18;
                            break;
                          case (MR_Integer) 2:
                            {
                              MR_Word ml_backend__mlds_to_cs__ToScalar_40 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__DataName_39, (MR_Integer) 0)));

                              {
                                mercury__digraph__add_vertices_and_edge_4_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0, ((MR_Box) (ml_backend__mlds_to_cs__FromScalar_5)), ((MR_Box) (ml_backend__mlds_to_cs__ToScalar_40)), ml_backend__mlds_to_cs__STATE_VARIABLE_Graph_0_18, ml_backend__mlds_to_cs__STATE_VARIABLE_Graph_19);
                              }
                            }
                            break;
                          case (MR_Integer) 3:
                            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__DataName_39, (MR_Integer) 0)))) {
                              default: /*NOTREACHED*/ MR_assert(0);
                              case (MR_Integer) 0:
                                *ml_backend__mlds_to_cs__STATE_VARIABLE_Graph_19 = ml_backend__mlds_to_cs__STATE_VARIABLE_Graph_0_18;
                                break;
                              case (MR_Integer) 1:
                                *ml_backend__mlds_to_cs__STATE_VARIABLE_Graph_19 = ml_backend__mlds_to_cs__STATE_VARIABLE_Graph_0_18;
                                break;
                              case (MR_Integer) 2:
                                *ml_backend__mlds_to_cs__STATE_VARIABLE_Graph_19 = ml_backend__mlds_to_cs__STATE_VARIABLE_Graph_0_18;
                                break;
                              case (MR_Integer) 3:
                                *ml_backend__mlds_to_cs__STATE_VARIABLE_Graph_19 = ml_backend__mlds_to_cs__STATE_VARIABLE_Graph_0_18;
                                break;
                            }
                            break;
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      *ml_backend__mlds_to_cs__STATE_VARIABLE_Graph_19 = ml_backend__mlds_to_cs__STATE_VARIABLE_Graph_0_18;
                      break;
                    case (MR_Integer) 3:
                      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__RvalConst_14, (MR_Integer) 0)))) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          *ml_backend__mlds_to_cs__STATE_VARIABLE_Graph_19 = ml_backend__mlds_to_cs__STATE_VARIABLE_Graph_0_18;
                          break;
                        case (MR_Integer) 1:
                          *ml_backend__mlds_to_cs__STATE_VARIABLE_Graph_19 = ml_backend__mlds_to_cs__STATE_VARIABLE_Graph_0_18;
                          break;
                        case (MR_Integer) 2:
                          *ml_backend__mlds_to_cs__STATE_VARIABLE_Graph_19 = ml_backend__mlds_to_cs__STATE_VARIABLE_Graph_0_18;
                          break;
                        case (MR_Integer) 3:
                          *ml_backend__mlds_to_cs__STATE_VARIABLE_Graph_19 = ml_backend__mlds_to_cs__STATE_VARIABLE_Graph_0_18;
                          break;
                        case (MR_Integer) 4:
                          *ml_backend__mlds_to_cs__STATE_VARIABLE_Graph_19 = ml_backend__mlds_to_cs__STATE_VARIABLE_Graph_0_18;
                          break;
                        case (MR_Integer) 5:
                          *ml_backend__mlds_to_cs__STATE_VARIABLE_Graph_19 = ml_backend__mlds_to_cs__STATE_VARIABLE_Graph_0_18;
                          break;
                        case (MR_Integer) 6:
                          *ml_backend__mlds_to_cs__STATE_VARIABLE_Graph_19 = ml_backend__mlds_to_cs__STATE_VARIABLE_Graph_0_18;
                          break;
                        case (MR_Integer) 7:
                          *ml_backend__mlds_to_cs__STATE_VARIABLE_Graph_19 = ml_backend__mlds_to_cs__STATE_VARIABLE_Graph_0_18;
                          break;
                        case (MR_Integer) 8:
                          *ml_backend__mlds_to_cs__STATE_VARIABLE_Graph_19 = ml_backend__mlds_to_cs__STATE_VARIABLE_Graph_0_18;
                          break;
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ml_backend__mlds_to_cs__SubRvalA_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Rval_6, (MR_Integer) 2)));
                  MR_Word ml_backend__mlds_to_cs__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Rval_6, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word ml_backend__mlds_to_cs__Rval__tmp_copy_6 = ml_backend__mlds_to_cs__SubRvalA_31;

                    ml_backend__mlds_to_cs__Rval_6 = ml_backend__mlds_to_cs__Rval__tmp_copy_6;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ml_backend__mlds_to_cs__SubRvalB_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Rval_6, (MR_Integer) 3)));
                  MR_Word ml_backend__mlds_to_cs__STATE_VARIABLE_Graph_25_25;
                  MR_Word ml_backend__mlds_to_cs__SubRvalA_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Rval_6, (MR_Integer) 2)));
                  MR_Word ml_backend__mlds_to_cs__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Rval_6, (MR_Integer) 1)));

                  {
                    ml_backend__mlds_to_cs__add_scalar_deps_rval_4_p_0(ml_backend__mlds_to_cs__FromScalar_5, ml_backend__mlds_to_cs__SubRvalA_28, ml_backend__mlds_to_cs__STATE_VARIABLE_Graph_0_18, &ml_backend__mlds_to_cs__STATE_VARIABLE_Graph_25_25);
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word ml_backend__mlds_to_cs__Rval__tmp_copy_6 = ml_backend__mlds_to_cs__SubRvalB_13;
                    MR_Word ml_backend__mlds_to_cs__STATE_VARIABLE_Graph_0__tmp_copy_18 = ml_backend__mlds_to_cs__STATE_VARIABLE_Graph_25_25;

                    ml_backend__mlds_to_cs__STATE_VARIABLE_Graph_0_18 = ml_backend__mlds_to_cs__STATE_VARIABLE_Graph_0__tmp_copy_18;
                    ml_backend__mlds_to_cs__Rval_6 = ml_backend__mlds_to_cs__Rval__tmp_copy_6;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 3:
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "ml_backend.mlds_to_cs", (MR_String) "predicate \140ml_backend.mlds_to_cs.add_scalar_deps_rval\'/4", (MR_String) "lval");
                    return;
                  }
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word ml_backend__mlds_to_cs__SubRvalA_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Rval_6, (MR_Integer) 2)));
                  MR_Word ml_backend__mlds_to_cs__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Rval_6, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word ml_backend__mlds_to_cs__Rval__tmp_copy_6 = ml_backend__mlds_to_cs__SubRvalA_32;

                    ml_backend__mlds_to_cs__Rval_6 = ml_backend__mlds_to_cs__Rval__tmp_copy_6;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 5:
                *ml_backend__mlds_to_cs__STATE_VARIABLE_Graph_19 = ml_backend__mlds_to_cs__STATE_VARIABLE_Graph_0_18;
                break;
            }
            break;
        }
      }
      break;
    }
}

static void MR_CALL 
ml_backend__mlds_to_cs__add_scalar_deps_4_p_0_2(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3)
{
  {
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;
    MR_Word ml_backend__mlds_to_cs__conv2_STATE_VARIABLE_Graph_12;

    {
      ml_backend__mlds_to_cs__add_scalar_deps_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_1), ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_2), &ml_backend__mlds_to_cs__conv2_STATE_VARIABLE_Graph_12);
    }
    *ml_backend__mlds_to_cs__wrapper_arg_3 = ((MR_Box) (ml_backend__mlds_to_cs__conv2_STATE_VARIABLE_Graph_12));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__add_scalar_deps_4_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3)
{
  {
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;
    MR_Word ml_backend__mlds_to_cs__conv0_STATE_VARIABLE_Graph_12;

    {
      ml_backend__mlds_to_cs__add_scalar_deps_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_1), ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_2), &ml_backend__mlds_to_cs__conv0_STATE_VARIABLE_Graph_12);
    }
    *ml_backend__mlds_to_cs__wrapper_arg_3 = ((MR_Box) (ml_backend__mlds_to_cs__conv0_STATE_VARIABLE_Graph_12));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__add_scalar_deps_4_p_0(
  MR_Word ml_backend__mlds_to_cs__FromScalar_5,
  MR_Word ml_backend__mlds_to_cs__Initializer_6,
  MR_Word ml_backend__mlds_to_cs__STATE_VARIABLE_Graph_0_11,
  MR_Word * ml_backend__mlds_to_cs__STATE_VARIABLE_Graph_12)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;

    switch (MR_tag((MR_Word) ml_backend__mlds_to_cs__Initializer_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *ml_backend__mlds_to_cs__STATE_VARIABLE_Graph_12 = ml_backend__mlds_to_cs__STATE_VARIABLE_Graph_0_11;
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__mlds_to_cs__Rval_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__Initializer_6, (MR_Integer) 0)));

          {
            ml_backend__mlds_to_cs__add_scalar_deps_rval_4_p_0(ml_backend__mlds_to_cs__FromScalar_5, ml_backend__mlds_to_cs__Rval_8, ml_backend__mlds_to_cs__STATE_VARIABLE_Graph_0_11, ml_backend__mlds_to_cs__STATE_VARIABLE_Graph_12);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ml_backend__mlds_to_cs__Initializers_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__Initializer_6, (MR_Integer) 1)));
          MR_Word ml_backend__mlds_to_cs__V_15_15;
          MR_Word ml_backend__mlds_to_cs___Type_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__Initializer_6, (MR_Integer) 0)));
          MR_Box ml_backend__mlds_to_cs__conv3_STATE_VARIABLE_Graph_12;

          {
            ml_backend__mlds_to_cs__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_15_15, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_8[1]));
            MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_15_15, 1) = ((MR_Box) (ml_backend__mlds_to_cs__add_scalar_deps_4_p_0_2));
            MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_15_15, 3) = ((MR_Box) (ml_backend__mlds_to_cs__FromScalar_5));
          }
          {
            mercury__list__foldl_4_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, (MR_Word) &ml_backend__mlds_to_cs_scalar_common_1[3], ml_backend__mlds_to_cs__V_15_15, ml_backend__mlds_to_cs__Initializers_10, ((MR_Box) (ml_backend__mlds_to_cs__STATE_VARIABLE_Graph_0_11)), &ml_backend__mlds_to_cs__conv3_STATE_VARIABLE_Graph_12);
          }
          *ml_backend__mlds_to_cs__STATE_VARIABLE_Graph_12 = ((MR_Word) ml_backend__mlds_to_cs__conv3_STATE_VARIABLE_Graph_12);
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word ml_backend__mlds_to_cs__V_13_13;
          MR_Word ml_backend__mlds_to_cs__Initializers_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Initializer_6, (MR_Integer) 0)));
          MR_Box ml_backend__mlds_to_cs__conv1_STATE_VARIABLE_Graph_12;

          {
            ml_backend__mlds_to_cs__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_13_13, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_8[1]));
            MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_13_13, 1) = ((MR_Box) (ml_backend__mlds_to_cs__add_scalar_deps_4_p_0_1));
            MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_13_13, 3) = ((MR_Box) (ml_backend__mlds_to_cs__FromScalar_5));
          }
          {
            mercury__list__foldl_4_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, (MR_Word) &ml_backend__mlds_to_cs_scalar_common_1[3], ml_backend__mlds_to_cs__V_13_13, ml_backend__mlds_to_cs__Initializers_18, ((MR_Box) (ml_backend__mlds_to_cs__STATE_VARIABLE_Graph_0_11)), &ml_backend__mlds_to_cs__conv1_STATE_VARIABLE_Graph_12);
          }
          *ml_backend__mlds_to_cs__STATE_VARIABLE_Graph_12 = ((MR_Word) ml_backend__mlds_to_cs__conv1_STATE_VARIABLE_Graph_12);
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__add_scalar_inits_10_p_0(
  MR_Word ml_backend__mlds_to_cs__MLDS_ModuleName_11,
  MR_Word ml_backend__mlds_to_cs__Type_12,
  MR_Word ml_backend__mlds_to_cs__TypeNum_13,
  MR_Word ml_backend__mlds_to_cs__Initializer_14,
  MR_Integer ml_backend__mlds_to_cs__RowNum_15,
  MR_Integer * ml_backend__mlds_to_cs__HeadVar__6_6,
  MR_Word ml_backend__mlds_to_cs__STATE_VARIABLE_Graph_0_20,
  MR_Word * ml_backend__mlds_to_cs__STATE_VARIABLE_Graph_21,
  MR_Word ml_backend__mlds_to_cs__STATE_VARIABLE_Map_0_22,
  MR_Word * ml_backend__mlds_to_cs__STATE_VARIABLE_Map_23)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Word ml_backend__mlds_to_cs__TypeCtorInfo_28_28;
    MR_Word ml_backend__mlds_to_cs__Scalar_18;
    MR_Word ml_backend__mlds_to_cs__STATE_VARIABLE_Graph_26_26;
    MR_Word ml_backend__mlds_to_cs___Key_19;

    *ml_backend__mlds_to_cs__HeadVar__6_6 = (ml_backend__mlds_to_cs__RowNum_15 + (MR_Integer) 1);
    {
      ml_backend__mlds_to_cs__Scalar_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Scalar_18, 0) = ((MR_Box) (ml_backend__mlds_to_cs__MLDS_ModuleName_11));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Scalar_18, 1) = ((MR_Box) (ml_backend__mlds_to_cs__Type_12));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Scalar_18, 2) = ((MR_Box) (ml_backend__mlds_to_cs__TypeNum_13));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Scalar_18, 3) = ((MR_Box) (ml_backend__mlds_to_cs__RowNum_15));
    }
    ml_backend__mlds_to_cs__TypeCtorInfo_28_28 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0;
    {
      mercury__map__det_insert_4_p_0(ml_backend__mlds_to_cs__TypeCtorInfo_28_28, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, ((MR_Box) (ml_backend__mlds_to_cs__Scalar_18)), ((MR_Box) (ml_backend__mlds_to_cs__Initializer_14)), ml_backend__mlds_to_cs__STATE_VARIABLE_Map_0_22, ml_backend__mlds_to_cs__STATE_VARIABLE_Map_23);
    }
    {
      mercury__digraph__add_vertex_4_p_0(ml_backend__mlds_to_cs__TypeCtorInfo_28_28, ((MR_Box) (ml_backend__mlds_to_cs__Scalar_18)), &ml_backend__mlds_to_cs___Key_19, ml_backend__mlds_to_cs__STATE_VARIABLE_Graph_0_20, &ml_backend__mlds_to_cs__STATE_VARIABLE_Graph_26_26);
    }
    {
      ml_backend__mlds_to_cs__add_scalar_deps_4_p_0(ml_backend__mlds_to_cs__Scalar_18, ml_backend__mlds_to_cs__Initializer_14, ml_backend__mlds_to_cs__STATE_VARIABLE_Graph_26_26, ml_backend__mlds_to_cs__STATE_VARIABLE_Graph_21);
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_scalar_defns_10_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_4,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_5,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_6,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_7)
{
  {
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;
    MR_Integer ml_backend__mlds_to_cs__conv2_HeadVar__6_6;
    MR_Word ml_backend__mlds_to_cs__conv1_STATE_VARIABLE_Graph_21;
    MR_Word ml_backend__mlds_to_cs__conv0_STATE_VARIABLE_Map_23;

    {
      ml_backend__mlds_to_cs__add_scalar_inits_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 5))), ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_1), ((MR_Integer) ml_backend__mlds_to_cs__wrapper_arg_2), &ml_backend__mlds_to_cs__conv2_HeadVar__6_6, ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_4), &ml_backend__mlds_to_cs__conv1_STATE_VARIABLE_Graph_21, ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_6), &ml_backend__mlds_to_cs__conv0_STATE_VARIABLE_Map_23);
    }
    *ml_backend__mlds_to_cs__wrapper_arg_3 = ((MR_Box) (ml_backend__mlds_to_cs__conv2_HeadVar__6_6));
    *ml_backend__mlds_to_cs__wrapper_arg_5 = ((MR_Box) (ml_backend__mlds_to_cs__conv1_STATE_VARIABLE_Graph_21));
    *ml_backend__mlds_to_cs__wrapper_arg_7 = ((MR_Box) (ml_backend__mlds_to_cs__conv0_STATE_VARIABLE_Map_23));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_scalar_defns_10_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_11,
  MR_Integer ml_backend__mlds_to_cs__Indent_12,
  MR_Word ml_backend__mlds_to_cs__TypeNum_13,
  MR_Word ml_backend__mlds_to_cs__CellGroup_14,
  MR_Word ml_backend__mlds_to_cs__STATE_VARIABLE_Graph_0_28,
  MR_Word * ml_backend__mlds_to_cs__STATE_VARIABLE_Graph_29,
  MR_Word ml_backend__mlds_to_cs__STATE_VARIABLE_Map_0_30,
  MR_Word * ml_backend__mlds_to_cs__STATE_VARIABLE_Map_31)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Word ml_backend__mlds_to_cs__TypeCtorInfo_60_60;
    MR_Integer ml_backend__mlds_to_cs__TypeRawNum_18 = (MR_Integer) ml_backend__mlds_to_cs__TypeNum_13;
    MR_Word ml_backend__mlds_to_cs__Type_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__CellGroup_14, (MR_Integer) 0)));
    MR_Word ml_backend__mlds_to_cs__RowInitsCord_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__CellGroup_14, (MR_Integer) 4)));
    MR_Word ml_backend__mlds_to_cs__ArrayType_24;
    MR_Word ml_backend__mlds_to_cs__RowInits_25;
    MR_Word ml_backend__mlds_to_cs__MLDS_ModuleName_26;
    MR_Word ml_backend__mlds_to_cs__V_43_43;
    MR_Word ml_backend__mlds_to_cs__V_44_44;
    MR_Word ml_backend__mlds_to_cs__V_48_48;
    MR_String ml_backend__mlds_to_cs__V_74_74;
    MR_Word ml_backend__mlds_to_cs___InitArraySize_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__CellGroup_14, (MR_Integer) 1)));
    MR_Word ml_backend__mlds_to_cs___Counter_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__CellGroup_14, (MR_Integer) 2)));
    MR_Word ml_backend__mlds_to_cs___Members_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__CellGroup_14, (MR_Integer) 3)));
    MR_Word ml_backend__mlds_to_cs__V_52_52;
    MR_Word ml_backend__mlds_to_cs__V_53_53;
    MR_Word ml_backend__mlds_to_cs__V_54_54;
    MR_Word ml_backend__mlds_to_cs__V_55_55;
    MR_String ml_backend__mlds_to_cs__V_56_56;
    MR_Word ml_backend__mlds_to_cs__V_57_57;
    MR_Word ml_backend__mlds_to_cs__V_58_58;
    MR_Word ml_backend__mlds_to_cs__V_59_59;
    MR_Integer ml_backend__mlds_to_cs__V_27_27;
    MR_Box ml_backend__mlds_to_cs__conv5_V_27_27;
    MR_Box ml_backend__mlds_to_cs__conv4_STATE_VARIABLE_Graph_29;
    MR_Box ml_backend__mlds_to_cs__conv3_STATE_VARIABLE_Map_31;

    {
      ml_backend__mlds_to_cs__ArrayType_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__ArrayType_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__ArrayType_24, 1) = ((MR_Box) (ml_backend__mlds_to_cs__Type_19));
    }
    ml_backend__mlds_to_cs__TypeCtorInfo_60_60 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0;
    {
      ml_backend__mlds_to_cs__RowInits_25 = mercury__cord__list_1_f_0(ml_backend__mlds_to_cs__TypeCtorInfo_60_60, ml_backend__mlds_to_cs__RowInitsCord_23);
    }
    {
      ml_backend__mlds_to_cs__indent_line_3_p_0(ml_backend__mlds_to_cs__Indent_12);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "private static readonly ");
    }
    {
      ml_backend__mlds_to_cs__output_type_4_p_0(ml_backend__mlds_to_cs__Info_11, ml_backend__mlds_to_cs__Type_19);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "[] MR_scalar_common_");
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ml_backend__mlds_to_cs_scalar_common_9[0], ml_backend__mlds_to_cs__TypeRawNum_18, &ml_backend__mlds_to_cs__V_74_74);
    }
    {
      mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__V_74_74);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " = ");
    }
    {
      ml_backend__mlds_to_cs__V_43_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__V_43_43, 0) = ((MR_Box) (ml_backend__mlds_to_cs__RowInits_25));
    }
    {
      ml_backend__mlds_to_cs__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__V_44_44, 0) = ((MR_Box) (ml_backend__mlds_to_cs__ArrayType_24));
    }
    {
      ml_backend__mlds_to_cs__output_initializer_alloc_only_5_p_0(ml_backend__mlds_to_cs__Info_11, ml_backend__mlds_to_cs__V_43_43, ml_backend__mlds_to_cs__V_44_44);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ";\n");
    }
    ml_backend__mlds_to_cs__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_11, (MR_Integer) 0)));
    ml_backend__mlds_to_cs__V_53_53 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_11, (MR_Integer) 1)))) & (MR_Integer) 1);
    ml_backend__mlds_to_cs__V_54_54 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_11, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    ml_backend__mlds_to_cs__V_55_55 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_11, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    ml_backend__mlds_to_cs__MLDS_ModuleName_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_11, (MR_Integer) 2)));
    ml_backend__mlds_to_cs__V_56_56 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_11, (MR_Integer) 3)));
    ml_backend__mlds_to_cs__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_11, (MR_Integer) 4)));
    ml_backend__mlds_to_cs__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_11, (MR_Integer) 5)));
    ml_backend__mlds_to_cs__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_11, (MR_Integer) 6)));
    {
      ml_backend__mlds_to_cs__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_48_48, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_10[1]));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_48_48, 1) = ((MR_Box) (ml_backend__mlds_to_cs__output_scalar_defns_10_p_0_1));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_48_48, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_48_48, 3) = ((MR_Box) (ml_backend__mlds_to_cs__MLDS_ModuleName_26));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_48_48, 4) = ((MR_Box) (ml_backend__mlds_to_cs__Type_19));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_48_48, 5) = ((MR_Box) (ml_backend__mlds_to_cs__TypeNum_13));
    }
    {
      mercury__list__foldl3_8_p_0(ml_backend__mlds_to_cs__TypeCtorInfo_60_60, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ml_backend__mlds_to_cs_scalar_common_1[3], (MR_Word) &ml_backend__mlds_to_cs_scalar_common_2[0], ml_backend__mlds_to_cs__V_48_48, ml_backend__mlds_to_cs__RowInits_25, ((MR_Box) ((MR_Integer) 0)), &ml_backend__mlds_to_cs__conv5_V_27_27, ((MR_Box) (ml_backend__mlds_to_cs__STATE_VARIABLE_Graph_0_28)), &ml_backend__mlds_to_cs__conv4_STATE_VARIABLE_Graph_29, ((MR_Box) (ml_backend__mlds_to_cs__STATE_VARIABLE_Map_0_30)), &ml_backend__mlds_to_cs__conv3_STATE_VARIABLE_Map_31);
    }
    ml_backend__mlds_to_cs__V_27_27 = ((MR_Integer) ml_backend__mlds_to_cs__conv5_V_27_27);
    *ml_backend__mlds_to_cs__STATE_VARIABLE_Graph_29 = ((MR_Word) ml_backend__mlds_to_cs__conv4_STATE_VARIABLE_Graph_29);
    *ml_backend__mlds_to_cs__STATE_VARIABLE_Map_31 = ((MR_Word) ml_backend__mlds_to_cs__conv3_STATE_VARIABLE_Map_31);
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_scalar_common_data_5_p_0_2(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3)
{
  {
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;

    {
      ml_backend__mlds_to_cs__output_scalar_init_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 5))), ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_scalar_common_data_5_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_3,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_4,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_5,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_6,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_7,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_8)
{
  {
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;
    MR_Word ml_backend__mlds_to_cs__conv1_STATE_VARIABLE_Graph_29;
    MR_Word ml_backend__mlds_to_cs__conv0_STATE_VARIABLE_Map_31;

    {
      ml_backend__mlds_to_cs__output_scalar_defns_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_1), ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_2), ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_3), &ml_backend__mlds_to_cs__conv1_STATE_VARIABLE_Graph_29, ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_5), &ml_backend__mlds_to_cs__conv0_STATE_VARIABLE_Map_31);
    }
    *ml_backend__mlds_to_cs__wrapper_arg_4 = ((MR_Box) (ml_backend__mlds_to_cs__conv1_STATE_VARIABLE_Graph_29));
    *ml_backend__mlds_to_cs__wrapper_arg_6 = ((MR_Box) (ml_backend__mlds_to_cs__conv0_STATE_VARIABLE_Map_31));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_scalar_common_data_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_6,
  MR_Integer ml_backend__mlds_to_cs__Indent_7,
  MR_Word ml_backend__mlds_to_cs__ScalarCellGroupMap_8)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Word ml_backend__mlds_to_cs__TypeCtorInfo_41_41;
    MR_Word ml_backend__mlds_to_cs__TypeCtorInfo_47_47;
    MR_Word ml_backend__mlds_to_cs__Graph_10;
    MR_Word ml_backend__mlds_to_cs__Map_11;
    MR_Word ml_backend__mlds_to_cs__V_16_16;
    MR_Word ml_backend__mlds_to_cs__V_17_17;
    MR_Word ml_backend__mlds_to_cs__V_18_18;
    MR_Box ml_backend__mlds_to_cs__conv4_Graph_10;
    MR_Box ml_backend__mlds_to_cs__conv3_Map_11;
    MR_Box ml_backend__mlds_to_cs__conv2_STATE_VARIABLE_IO_19_19;
    MR_Word ml_backend__mlds_to_cs__SortedScalars0_12;

    {
      ml_backend__mlds_to_cs__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_16_16, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_10[0]));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_16_16, 1) = ((MR_Box) (ml_backend__mlds_to_cs__output_scalar_common_data_5_p_0_1));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_16_16, 3) = ((MR_Box) (ml_backend__mlds_to_cs__Info_6));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_16_16, 4) = ((MR_Box) (ml_backend__mlds_to_cs__Indent_7));
    }
    ml_backend__mlds_to_cs__TypeCtorInfo_41_41 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0;
    {
      ml_backend__mlds_to_cs__V_17_17 = mercury__digraph__init_0_f_0(ml_backend__mlds_to_cs__TypeCtorInfo_41_41);
    }
    {
      ml_backend__mlds_to_cs__V_18_18 = mercury__map__init_0_f_0(ml_backend__mlds_to_cs__TypeCtorInfo_41_41, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0);
    }
    ml_backend__mlds_to_cs__TypeCtorInfo_47_47 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
    {
      mercury__map__foldl3_8_p_2((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_group_0, (MR_Word) &ml_backend__mlds_to_cs_scalar_common_1[3], (MR_Word) &ml_backend__mlds_to_cs_scalar_common_2[0], ml_backend__mlds_to_cs__TypeCtorInfo_47_47, ml_backend__mlds_to_cs__V_16_16, ml_backend__mlds_to_cs__ScalarCellGroupMap_8, ((MR_Box) (ml_backend__mlds_to_cs__V_17_17)), &ml_backend__mlds_to_cs__conv4_Graph_10, ((MR_Box) (ml_backend__mlds_to_cs__V_18_18)), &ml_backend__mlds_to_cs__conv3_Map_11, ((MR_Box) ((MR_Integer) 0)), &ml_backend__mlds_to_cs__conv2_STATE_VARIABLE_IO_19_19);
    }
    ml_backend__mlds_to_cs__Graph_10 = ((MR_Word) ml_backend__mlds_to_cs__conv4_Graph_10);
    ml_backend__mlds_to_cs__Map_11 = ((MR_Word) ml_backend__mlds_to_cs__conv3_Map_11);
    {
      ml_backend__mlds_to_cs__succeeded = mercury__digraph__tsort_2_p_0(ml_backend__mlds_to_cs__TypeCtorInfo_41_41, ml_backend__mlds_to_cs__Graph_10, &ml_backend__mlds_to_cs__SortedScalars0_12);
    }
    if (ml_backend__mlds_to_cs__succeeded)
      {
        MR_Word ml_backend__mlds_to_cs__SortedScalars_13;
        MR_Word ml_backend__mlds_to_cs__V_23_23;
        MR_Integer ml_backend__mlds_to_cs__V_25_25;
        MR_Box ml_backend__mlds_to_cs__conv5_STATE_VARIABLE_IO_24_24;

        {
          ml_backend__mlds_to_cs__indent_line_3_p_0(ml_backend__mlds_to_cs__Indent_7);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "private static void MR_init_scalar_common_data() {\n");
        }
        {
          mercury__list__reverse_2_p_0(ml_backend__mlds_to_cs__TypeCtorInfo_41_41, ml_backend__mlds_to_cs__SortedScalars0_12, &ml_backend__mlds_to_cs__SortedScalars_13);
        }
        ml_backend__mlds_to_cs__V_25_25 = (ml_backend__mlds_to_cs__Indent_7 + (MR_Integer) 1);
        {
          ml_backend__mlds_to_cs__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_23_23, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_7[4]));
          MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_23_23, 1) = ((MR_Box) (ml_backend__mlds_to_cs__output_scalar_common_data_5_p_0_2));
          MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_23_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_23_23, 3) = ((MR_Box) (ml_backend__mlds_to_cs__Info_6));
          MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_23_23, 4) = ((MR_Box) (ml_backend__mlds_to_cs__V_25_25));
          MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_23_23, 5) = ((MR_Box) (ml_backend__mlds_to_cs__Map_11));
        }
        {
          mercury__list__foldl_4_p_2(ml_backend__mlds_to_cs__TypeCtorInfo_41_41, ml_backend__mlds_to_cs__TypeCtorInfo_47_47, ml_backend__mlds_to_cs__V_23_23, ml_backend__mlds_to_cs__SortedScalars_13, ((MR_Box) ((MR_Integer) 0)), &ml_backend__mlds_to_cs__conv5_STATE_VARIABLE_IO_24_24);
        }
        {
          ml_backend__mlds_to_cs__indent_line_3_p_0(ml_backend__mlds_to_cs__Indent_7);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "}\n");
        }
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "ml_backend.mlds_to_cs", (MR_String) "predicate \140ml_backend.mlds_to_cs.output_scalar_common_data\'/5", (MR_String) "digraph.tsort failed");
          return;
        }
      }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_init_data_statements_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_1,
  MR_Integer ml_backend__mlds_to_cs__Indent_2,
  MR_Word ml_backend__mlds_to_cs__HeadVar__3_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ml_backend__mlds_to_cs__succeeded;

        if ((ml_backend__mlds_to_cs__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word ml_backend__mlds_to_cs__Defn_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word ml_backend__mlds_to_cs__Defns_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word ml_backend__mlds_to_cs__Name_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Defn_13, (MR_Integer) 0)));
            MR_Word ml_backend__mlds_to_cs__DefnBody_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Defn_13, (MR_Integer) 3)));
            MR_Word ml_backend__mlds_to_cs___Context_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Defn_13, (MR_Integer) 1)));
            MR_Word ml_backend__mlds_to_cs___Flags_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Defn_13, (MR_Integer) 2)));
            MR_Word ml_backend__mlds_to_cs__Type_20;
            MR_Word ml_backend__mlds_to_cs__Initializer_21;
            MR_Word ml_backend__mlds_to_cs___GCStatement_22;

            ml_backend__mlds_to_cs__succeeded = ((MR_tag((MR_Word) ml_backend__mlds_to_cs__DefnBody_19)) == (MR_mktag((MR_Integer) 1)));
            if (ml_backend__mlds_to_cs__succeeded)
              {
                ml_backend__mlds_to_cs__Type_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__DefnBody_19, (MR_Integer) 0)));
                ml_backend__mlds_to_cs__Initializer_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__DefnBody_19, (MR_Integer) 1)));
                ml_backend__mlds_to_cs___GCStatement_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__DefnBody_19, (MR_Integer) 2)));
                {
                  ml_backend__mlds_to_cs__indent_line_3_p_0(ml_backend__mlds_to_cs__Indent_2);
                }
                {
                  ml_backend__mlds_to_cs__output_name_3_p_0(ml_backend__mlds_to_cs__Name_16);
                }
                {
                  ml_backend__mlds_to_cs__output_initializer_6_p_0(ml_backend__mlds_to_cs__Info_1, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__mlds_to_cs__Type_20, ml_backend__mlds_to_cs__Initializer_21);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) ";\n");
                }
              }
            else
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "ml_backend.mlds_to_cs", (MR_String) "predicate \140ml_backend.mlds_to_cs.output_init_data_statements\'/5", (MR_String) "not mlds_data");
                  return;
                }
              }
            /* direct tailcall eliminated */
            {
              MR_Word ml_backend__mlds_to_cs__HeadVar__3__tmp_copy_3 = ml_backend__mlds_to_cs__Defns_14;

              ml_backend__mlds_to_cs__HeadVar__3_3 = ml_backend__mlds_to_cs__HeadVar__3__tmp_copy_3;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_init_data_method_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_6,
  MR_Integer ml_backend__mlds_to_cs__Indent_7,
  MR_Word ml_backend__mlds_to_cs__Defns_8)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Integer ml_backend__mlds_to_cs__V_15_15;

    {
      ml_backend__mlds_to_cs__indent_line_3_p_0(ml_backend__mlds_to_cs__Indent_7);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "private static void MR_init_data() {\n");
    }
    ml_backend__mlds_to_cs__V_15_15 = (ml_backend__mlds_to_cs__Indent_7 + (MR_Integer) 1);
    {
      ml_backend__mlds_to_cs__output_init_data_statements_5_p_0(ml_backend__mlds_to_cs__Info_6, ml_backend__mlds_to_cs__V_15_15, ml_backend__mlds_to_cs__Defns_8);
    }
    {
      ml_backend__mlds_to_cs__indent_line_3_p_0(ml_backend__mlds_to_cs__Indent_7);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "}\n");
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_data_decls_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_1,
  MR_Integer ml_backend__mlds_to_cs__Indent_2,
  MR_Word ml_backend__mlds_to_cs__HeadVar__3_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ml_backend__mlds_to_cs__succeeded;

        if ((ml_backend__mlds_to_cs__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word ml_backend__mlds_to_cs__Defn_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word ml_backend__mlds_to_cs__Defns_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word ml_backend__mlds_to_cs__Name_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Defn_13, (MR_Integer) 0)));
            MR_Word ml_backend__mlds_to_cs__Flags_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Defn_13, (MR_Integer) 2)));
            MR_Word ml_backend__mlds_to_cs__DefnBody_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Defn_13, (MR_Integer) 3)));
            MR_Word ml_backend__mlds_to_cs___Context_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Defn_13, (MR_Integer) 1)));
            MR_Word ml_backend__mlds_to_cs__Type_20;
            MR_Word ml_backend__mlds_to_cs___Initializer_21;
            MR_Word ml_backend__mlds_to_cs___GCStatement_22;

            ml_backend__mlds_to_cs__succeeded = ((MR_tag((MR_Word) ml_backend__mlds_to_cs__DefnBody_19)) == (MR_mktag((MR_Integer) 1)));
            if (ml_backend__mlds_to_cs__succeeded)
              {
                ml_backend__mlds_to_cs__Type_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__DefnBody_19, (MR_Integer) 0)));
                ml_backend__mlds_to_cs___Initializer_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__DefnBody_19, (MR_Integer) 1)));
                ml_backend__mlds_to_cs___GCStatement_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__DefnBody_19, (MR_Integer) 2)));
                {
                  MR_Word ml_backend__mlds_to_cs__NonReadonlyFlags_23;

                  {
                    ml_backend__mlds_to_cs__indent_line_3_p_0(ml_backend__mlds_to_cs__Indent_2);
                  }
                  {
                    ml_backend__mlds_to_cs__NonReadonlyFlags_23 = ml_backend__mlds__set_constness_2_f_0(ml_backend__mlds_to_cs__Flags_18, (MR_Integer) 0);
                  }
                  {
                    ml_backend__mlds_to_cs__output_decl_flags_4_p_0(ml_backend__mlds_to_cs__Info_1, ml_backend__mlds_to_cs__NonReadonlyFlags_23);
                  }
                  {
                    ml_backend__mlds_to_cs__output_type_4_p_0(ml_backend__mlds_to_cs__Info_1, ml_backend__mlds_to_cs__Type_20);
                  }
                  {
                    mercury__io__write_char_3_p_0((MR_Char) 32);
                  }
                  {
                    ml_backend__mlds_to_cs__output_name_3_p_0(ml_backend__mlds_to_cs__Name_16);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ";\n");
                  }
                }
              }
            else
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "ml_backend.mlds_to_cs", (MR_String) "predicate \140ml_backend.mlds_to_cs.output_data_decls\'/5", (MR_String) "not data");
                  return;
                }
              }
            /* direct tailcall eliminated */
            {
              MR_Word ml_backend__mlds_to_cs__HeadVar__3__tmp_copy_3 = ml_backend__mlds_to_cs__Defns_14;

              ml_backend__mlds_to_cs__HeadVar__3_3 = ml_backend__mlds_to_cs__HeadVar__3__tmp_copy_3;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_enum_constant_6_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_7,
  MR_Integer ml_backend__mlds_to_cs__Indent_8,
  MR_Word ml_backend__mlds_to_cs___EnumName_9,
  MR_Word ml_backend__mlds_to_cs__Defn_10)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;

    {
      ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_101_110_117_109_95_99_111_110_115_116_97_110_116_95_95_91_51_93_95_48_6_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Indent_8, ml_backend__mlds_to_cs__Defn_10);
    }
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_cs__defn_is_const_1_p_0(
  MR_Word ml_backend__mlds_to_cs__Defn_2)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Word ml_backend__mlds_to_cs__Flags_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Defn_2, (MR_Integer) 2)));
    MR_Word ml_backend__mlds_to_cs__V_7_7;
    MR_Word ml_backend__mlds_to_cs___Name_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Defn_2, (MR_Integer) 0)));
    MR_Word ml_backend__mlds_to_cs___Context_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Defn_2, (MR_Integer) 1)));
    MR_Word ml_backend__mlds_to_cs___DefnBody_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Defn_2, (MR_Integer) 3)));

    {
      ml_backend__mlds_to_cs__V_7_7 = ml_backend__mlds__constness_1_f_0(ml_backend__mlds_to_cs__Flags_5);
    }
    ml_backend__mlds_to_cs__succeeded = (ml_backend__mlds_to_cs__V_7_7 == (MR_Integer) 1);
    return ml_backend__mlds_to_cs__succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_class_body_7_p_0_3(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3)
{
  {
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;

    {
      ml_backend__mlds_to_cs__output_enum_constant_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 5))), ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_1));
    }
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_cs__output_class_body_7_p_0_2(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;

    {
      ml_backend__mlds_to_cs__succeeded = ml_backend__mlds_to_cs__defn_is_const_1_p_0(((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_1));
    }
    return ml_backend__mlds_to_cs__succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_class_body_7_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3)
{
  {
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;

    {
      ml_backend__mlds_to_cs__output_defn_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 5))), ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_class_body_7_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_8,
  MR_Integer ml_backend__mlds_to_cs__Indent_9,
  MR_Word ml_backend__mlds_to_cs__Kind_10,
  MR_Word ml_backend__mlds_to_cs__UnqualName_11,
  MR_Word ml_backend__mlds_to_cs__AllMembers_12)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;

    switch (ml_backend__mlds_to_cs__Kind_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 2:
      case (MR_Integer) 3:
        {
          MR_Word ml_backend__mlds_to_cs__V_35_35;
          MR_Box ml_backend__mlds_to_cs__conv0_STATE_VARIABLE_IO_16;

          {
            ml_backend__mlds_to_cs__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_35_35, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_7[2]));
            MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_35_35, 1) = ((MR_Box) (ml_backend__mlds_to_cs__output_class_body_7_p_0_1));
            MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_35_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_35_35, 3) = ((MR_Box) (ml_backend__mlds_to_cs__Info_8));
            MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_35_35, 4) = ((MR_Box) (ml_backend__mlds_to_cs__Indent_9));
            MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_35_35, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            mercury__list__foldl_4_p_2((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, ml_backend__mlds_to_cs__V_35_35, ml_backend__mlds_to_cs__AllMembers_12, ((MR_Box) ((MR_Integer) 0)), &ml_backend__mlds_to_cs__conv0_STATE_VARIABLE_IO_16);
          }
        }
        break;
      case (MR_Integer) 4:
        {
          MR_Word ml_backend__mlds_to_cs__EnumConsts_14;
          MR_Integer ml_backend__mlds_to_cs__V_18_18;
          MR_Word ml_backend__mlds_to_cs__V_50_50;

          {
            mercury__list__filter_3_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0, (MR_Word) &ml_backend__mlds_to_cs_scalar_common_2[13], ml_backend__mlds_to_cs__AllMembers_12, &ml_backend__mlds_to_cs__EnumConsts_14);
          }
          ml_backend__mlds_to_cs__V_18_18 = (ml_backend__mlds_to_cs__Indent_9 + (MR_Integer) 1);
          {
            ml_backend__mlds_to_cs__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_50_50, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_7[3]));
            MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_50_50, 1) = ((MR_Box) (ml_backend__mlds_to_cs__output_class_body_7_p_0_3));
            MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_50_50, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_50_50, 3) = ((MR_Box) (ml_backend__mlds_to_cs__Info_8));
            MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_50_50, 4) = ((MR_Box) (ml_backend__mlds_to_cs__V_18_18));
            MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_50_50, 5) = ((MR_Box) (ml_backend__mlds_to_cs__UnqualName_11));
          }
          {
            mercury__io__write_list_5_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0, ml_backend__mlds_to_cs__EnumConsts_14, (MR_String) "\n", ml_backend__mlds_to_cs__V_50_50);
          }
          {
            mercury__io__nl_2_p_0();
          }
        }
        break;
      case (MR_Integer) 1:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "ml_backend.mlds_to_cs", (MR_String) "predicate \140ml_backend.mlds_to_cs.output_class_body\'/7", (MR_String) "cannot use package as a type");
            return;
          }
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__interface_to_string_2_p_0(
  MR_Word ml_backend__mlds_to_cs__Interface_3,
  MR_String * ml_backend__mlds_to_cs__String_4)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded = ((((MR_tag((MR_Word) ml_backend__mlds_to_cs__Interface_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Interface_3, (MR_Integer) 0)))) == (MR_Integer) 3)));
    MR_Word ml_backend__mlds_to_cs__ModuleQualifier_5;
    MR_String ml_backend__mlds_to_cs__Name_7;
    MR_Integer ml_backend__mlds_to_cs__Arity_8;
    MR_Word ml_backend__mlds_to_cs__V_12_12;
    MR_Word ml_backend__mlds_to_cs__V_9_9;
    MR_Word ml_backend__mlds_to_cs___QualKind_6;

    if (ml_backend__mlds_to_cs__succeeded)
      {
        ml_backend__mlds_to_cs__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Interface_3, (MR_Integer) 1)));
        ml_backend__mlds_to_cs__Arity_8 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Interface_3, (MR_Integer) 2)));
        ml_backend__mlds_to_cs__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Interface_3, (MR_Integer) 3)));
        ml_backend__mlds_to_cs__ModuleQualifier_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_12_12, (MR_Integer) 0)));
        ml_backend__mlds_to_cs___QualKind_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_12_12, (MR_Integer) 1)));
        ml_backend__mlds_to_cs__Name_7 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_12_12, (MR_Integer) 2)));
        ml_backend__mlds_to_cs__succeeded = MR_TRUE;
      }
    if (ml_backend__mlds_to_cs__succeeded)
      {
        MR_Word ml_backend__mlds_to_cs__SymName_10;
        MR_String ml_backend__mlds_to_cs__ModuleName_11;

        {
          ml_backend__mlds_to_cs__SymName_10 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ml_backend__mlds_to_cs__ModuleQualifier_5);
        }
        {
          parse_tree__java_names__mangle_sym_name_for_csharp_4_p_0(ml_backend__mlds_to_cs__SymName_10, (MR_Integer) 0, (MR_String) ".", &ml_backend__mlds_to_cs__ModuleName_11);
        }
        ml_backend__mlds_to_cs__succeeded = (strcmp(ml_backend__mlds_to_cs__Name_7, (MR_String) "MercuryType") == 0);
        if (ml_backend__mlds_to_cs__succeeded)
          {
            {
              *ml_backend__mlds_to_cs__String_4 = mercury__string__f_43_43_2_f_0(ml_backend__mlds_to_cs__ModuleName_11, (MR_String) ".MercuryType");
            }
          }
        else
          {
            MR_String ml_backend__mlds_to_cs__V_34_34;
            MR_String ml_backend__mlds_to_cs__V_41_41;
            MR_String ml_backend__mlds_to_cs__V_43_43;

            {
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ml_backend__mlds_to_cs_scalar_common_9[0], ml_backend__mlds_to_cs__Arity_8, &ml_backend__mlds_to_cs__V_34_34);
            }
            {
              ml_backend__mlds_to_cs__V_41_41 = mercury__string__f_43_43_2_f_0(ml_backend__mlds_to_cs__Name_7, ml_backend__mlds_to_cs__V_34_34);
            }
            {
              ml_backend__mlds_to_cs__V_43_43 = mercury__string__f_43_43_2_f_0((MR_String) ".", ml_backend__mlds_to_cs__V_41_41);
            }
            {
              *ml_backend__mlds_to_cs__String_4 = mercury__string__f_43_43_2_f_0(ml_backend__mlds_to_cs__ModuleName_11, ml_backend__mlds_to_cs__V_43_43);
            }
          }
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "ml_backend.mlds_to_cs", (MR_String) "predicate \140ml_backend.mlds_to_cs.interface_to_string\'/2", (MR_String) "interface was not a class");
          return;
        }
      }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_supers_list_6_p_0_2(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3)
{
  {
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;

    {
      mercury__io__write_string_3_p_0(((MR_String) ml_backend__mlds_to_cs__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_supers_list_6_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_2)
{
  {
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;
    MR_String ml_backend__mlds_to_cs__conv0_String_4;

    {
      ml_backend__mlds_to_cs__interface_to_string_2_p_0(((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_1), &ml_backend__mlds_to_cs__conv0_String_4);
    }
    *ml_backend__mlds_to_cs__wrapper_arg_2 = ((MR_Box) (ml_backend__mlds_to_cs__conv0_String_4));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_supers_list_6_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_7,
  MR_Integer ml_backend__mlds_to_cs__Indent_8,
  MR_Word ml_backend__mlds_to_cs__BaseClasses_9,
  MR_Word ml_backend__mlds_to_cs__Interfaces_10)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Word ml_backend__mlds_to_cs__TypeCtorInfo_40_40 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    MR_Word ml_backend__mlds_to_cs__Strings0_12;
    MR_Word ml_backend__mlds_to_cs__Strings_13;

    {
      mercury__list__map_3_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0, ml_backend__mlds_to_cs__TypeCtorInfo_40_40, (MR_Word) &ml_backend__mlds_to_cs_scalar_common_2[11], ml_backend__mlds_to_cs__Interfaces_10, &ml_backend__mlds_to_cs__Strings0_12);
    }
    if ((ml_backend__mlds_to_cs__BaseClasses_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      ml_backend__mlds_to_cs__Strings_13 = ml_backend__mlds_to_cs__Strings0_12;
    else
      {
        MR_Word ml_backend__mlds_to_cs__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__BaseClasses_9, (MR_Integer) 1)));
        MR_Word ml_backend__mlds_to_cs__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__BaseClasses_9, (MR_Integer) 0)));

        if ((ml_backend__mlds_to_cs__V_44_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_String ml_backend__mlds_to_cs__BaseClassString_15;
            MR_Word ml_backend__mlds_to_cs___ArrayDims_16;

            {
              ml_backend__mlds_to_cs__type_to_string_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__V_45_45, &ml_backend__mlds_to_cs__BaseClassString_15, &ml_backend__mlds_to_cs___ArrayDims_16);
            }
            {
              ml_backend__mlds_to_cs__Strings_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__Strings_13, 0) = ((MR_Box) (ml_backend__mlds_to_cs__BaseClassString_15));
              MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__Strings_13, 1) = ((MR_Box) (ml_backend__mlds_to_cs__Strings0_12));
            }
          }
        else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "ml_backend.mlds_to_cs", (MR_String) "predicate \140ml_backend.mlds_to_cs.output_supers_list\'/6", (MR_String) "multiple inheritance not supported");
              return;
            }
          }
      }
    if ((ml_backend__mlds_to_cs__Strings_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        {
          ml_backend__mlds_to_cs__indent_line_3_p_0(ml_backend__mlds_to_cs__Indent_8);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ": ");
        }
        {
          mercury__io__write_list_5_p_0(ml_backend__mlds_to_cs__TypeCtorInfo_40_40, ml_backend__mlds_to_cs__Strings_13, (MR_String) ", ", (MR_Word) &ml_backend__mlds_to_cs_scalar_common_2[12]);
        }
        {
          mercury__io__nl_2_p_0();
        }
      }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_generic_tvar_3_p_0(
  MR_Word ml_backend__mlds_to_cs__Var_4)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Word ml_backend__mlds_to_cs__TypeCtorInfo_7_14 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
    MR_String ml_backend__mlds_to_cs__VarName_6;
    MR_Word ml_backend__mlds_to_cs__V_12_12;

    {
      ml_backend__mlds_to_cs__V_12_12 = mercury__varset__init_0_f_0(ml_backend__mlds_to_cs__TypeCtorInfo_7_14);
    }
    {
      mercury__varset__lookup_name_4_p_0(ml_backend__mlds_to_cs__TypeCtorInfo_7_14, ml_backend__mlds_to_cs__V_12_12, ml_backend__mlds_to_cs__Var_4, (MR_String) "MR_tvar_", &ml_backend__mlds_to_cs__VarName_6);
    }
    {
      mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__VarName_6);
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_generic_tvars_3_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3)
{
  {
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;

    {
      ml_backend__mlds_to_cs__output_generic_tvar_3_p_0(((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_generic_tvars_3_p_0(
  MR_Word ml_backend__mlds_to_cs__Vars_4)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;

    if ((ml_backend__mlds_to_cs__Vars_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        {
          mercury__io__write_string_3_p_0((MR_String) "<");
        }
        {
          mercury__io__write_list_5_p_0((MR_Word) &ml_backend__mlds_to_cs_scalar_common_1[2], ml_backend__mlds_to_cs__Vars_4, (MR_String) ", ", (MR_Word) &ml_backend__mlds_to_cs_scalar_common_2[10]);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ">");
        }
      }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_class_6_p_0(
  MR_Word ml_backend__mlds_to_cs__STATE_VARIABLE_Info_0_30,
  MR_Integer ml_backend__mlds_to_cs__Indent_8,
  MR_Word ml_backend__mlds_to_cs__UnqualName_9,
  MR_Word ml_backend__mlds_to_cs__ClassDefn_10)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_String ml_backend__mlds_to_cs__ClassName_14;
    MR_Integer ml_backend__mlds_to_cs__Arity_15;
    MR_Word ml_backend__mlds_to_cs__Kind_22;
    MR_Word ml_backend__mlds_to_cs__BaseClasses_24;
    MR_Word ml_backend__mlds_to_cs__Implements_25;
    MR_Word ml_backend__mlds_to_cs__TypeParams_26;
    MR_Word ml_backend__mlds_to_cs__Ctors_27;
    MR_Word ml_backend__mlds_to_cs__AllMembers_28;
    MR_Word ml_backend__mlds_to_cs__OutputGenerics_29;
    MR_Word ml_backend__mlds_to_cs__STATE_VARIABLE_Info_36_36;
    MR_Integer ml_backend__mlds_to_cs__V_41_41;
    MR_Integer ml_backend__mlds_to_cs__V_47_47;
    MR_Integer ml_backend__mlds_to_cs__V_51_51;
    MR_Word ml_backend__mlds_to_cs__V_52_52;
    MR_Word ml_backend__mlds_to_cs___Imports_23;
    MR_Word ml_backend__mlds_to_cs__V_58_58;
    MR_Word ml_backend__mlds_to_cs__V_59_59;
    MR_Word ml_backend__mlds_to_cs__V_60_60;
    MR_Word ml_backend__mlds_to_cs__V_61_61;
    MR_Word ml_backend__mlds_to_cs__V_62_62;
    MR_String ml_backend__mlds_to_cs__V_63_63;
    MR_Word ml_backend__mlds_to_cs__V_64_64;
    MR_Word ml_backend__mlds_to_cs__V_65_65;
    MR_Word ml_backend__mlds_to_cs__V_66_66;
    MR_Word ml_backend__mlds_to_cs__V_67_67;
    MR_Word ml_backend__mlds_to_cs__V_68_68;
    MR_Word ml_backend__mlds_to_cs__V_69_69;
    MR_Word ml_backend__mlds_to_cs__V_70_70;
    MR_Word ml_backend__mlds_to_cs__V_71_71;
    MR_String ml_backend__mlds_to_cs__V_72_72;
    MR_Word ml_backend__mlds_to_cs__V_73_73;
    MR_Word ml_backend__mlds_to_cs__V_74_74;

    switch (MR_tag((MR_Word) ml_backend__mlds_to_cs__UnqualName_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          ml_backend__mlds_to_cs__ClassName_14 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__UnqualName_9, (MR_Integer) 0)));
          ml_backend__mlds_to_cs__Arity_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__UnqualName_9, (MR_Integer) 1)));
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
      case (MR_Integer) 3:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "ml_backend.mlds_to_cs", (MR_String) "predicate \140ml_backend.mlds_to_cs.output_class\'/6", (MR_String) "name is not entity_type.");
            return;
          }
        }
        break;
    }
    ml_backend__mlds_to_cs__Kind_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__ClassDefn_10, (MR_Integer) 0)));
    ml_backend__mlds_to_cs___Imports_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__ClassDefn_10, (MR_Integer) 1)));
    ml_backend__mlds_to_cs__BaseClasses_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__ClassDefn_10, (MR_Integer) 2)));
    ml_backend__mlds_to_cs__Implements_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__ClassDefn_10, (MR_Integer) 3)));
    ml_backend__mlds_to_cs__TypeParams_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__ClassDefn_10, (MR_Integer) 4)));
    ml_backend__mlds_to_cs__Ctors_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__ClassDefn_10, (MR_Integer) 5)));
    ml_backend__mlds_to_cs__AllMembers_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__ClassDefn_10, (MR_Integer) 6)));
    ml_backend__mlds_to_cs__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__STATE_VARIABLE_Info_0_30, (MR_Integer) 0)));
    ml_backend__mlds_to_cs__V_59_59 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__STATE_VARIABLE_Info_0_30, (MR_Integer) 1)))) & (MR_Integer) 1);
    ml_backend__mlds_to_cs__V_60_60 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__STATE_VARIABLE_Info_0_30, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    ml_backend__mlds_to_cs__V_61_61 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__STATE_VARIABLE_Info_0_30, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    ml_backend__mlds_to_cs__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__STATE_VARIABLE_Info_0_30, (MR_Integer) 2)));
    ml_backend__mlds_to_cs__V_63_63 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__STATE_VARIABLE_Info_0_30, (MR_Integer) 3)));
    ml_backend__mlds_to_cs__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__STATE_VARIABLE_Info_0_30, (MR_Integer) 4)));
    ml_backend__mlds_to_cs__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__STATE_VARIABLE_Info_0_30, (MR_Integer) 5)));
    ml_backend__mlds_to_cs__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__STATE_VARIABLE_Info_0_30, (MR_Integer) 6)));
    {
      ml_backend__mlds_to_cs__STATE_VARIABLE_Info_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__STATE_VARIABLE_Info_36_36, 0) = ((MR_Box) (ml_backend__mlds_to_cs__V_58_58));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__STATE_VARIABLE_Info_36_36, 1) = ((MR_Box) ((ml_backend__mlds_to_cs__V_59_59 | ((((ml_backend__mlds_to_cs__V_60_60 << (MR_Integer) 1)) | ((ml_backend__mlds_to_cs__V_61_61 << (MR_Integer) 2)))))));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__STATE_VARIABLE_Info_36_36, 2) = ((MR_Box) (ml_backend__mlds_to_cs__V_62_62));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__STATE_VARIABLE_Info_36_36, 3) = ((MR_Box) (ml_backend__mlds_to_cs__V_63_63));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__STATE_VARIABLE_Info_36_36, 4) = ((MR_Box) (ml_backend__mlds_to_cs__V_64_64));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__STATE_VARIABLE_Info_36_36, 5) = ((MR_Box) (ml_backend__mlds_to_cs__V_65_65));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__STATE_VARIABLE_Info_36_36, 6) = ((MR_Box) (ml_backend__mlds_to_cs__TypeParams_26));
    }
    switch (ml_backend__mlds_to_cs__Kind_22) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "class ");
          }
        }
        break;
      case (MR_Integer) 4:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "enum ");
          }
        }
        break;
      case (MR_Integer) 2:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "interface ");
          }
        }
        break;
      case (MR_Integer) 3:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "struct ");
          }
        }
        break;
    }
    {
      ml_backend__mlds_to_cs__output_unqual_class_name_4_p_0(ml_backend__mlds_to_cs__ClassName_14, ml_backend__mlds_to_cs__Arity_15);
    }
    ml_backend__mlds_to_cs__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__STATE_VARIABLE_Info_36_36, (MR_Integer) 0)));
    ml_backend__mlds_to_cs__V_68_68 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__STATE_VARIABLE_Info_36_36, (MR_Integer) 1)))) & (MR_Integer) 1);
    ml_backend__mlds_to_cs__V_69_69 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__STATE_VARIABLE_Info_36_36, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    ml_backend__mlds_to_cs__V_70_70 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__STATE_VARIABLE_Info_36_36, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    ml_backend__mlds_to_cs__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__STATE_VARIABLE_Info_36_36, (MR_Integer) 2)));
    ml_backend__mlds_to_cs__V_72_72 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__STATE_VARIABLE_Info_36_36, (MR_Integer) 3)));
    ml_backend__mlds_to_cs__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__STATE_VARIABLE_Info_36_36, (MR_Integer) 4)));
    ml_backend__mlds_to_cs__OutputGenerics_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__STATE_VARIABLE_Info_36_36, (MR_Integer) 5)));
    ml_backend__mlds_to_cs__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__STATE_VARIABLE_Info_36_36, (MR_Integer) 6)));
    switch (ml_backend__mlds_to_cs__OutputGenerics_29) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
        }
        break;
      case (MR_Integer) 0:
        {
          ml_backend__mlds_to_cs__output_generic_tvars_3_p_0(ml_backend__mlds_to_cs__TypeParams_26);
        }
        break;
    }
    {
      mercury__io__nl_2_p_0();
    }
    ml_backend__mlds_to_cs__V_41_41 = (ml_backend__mlds_to_cs__Indent_8 + (MR_Integer) 1);
    {
      ml_backend__mlds_to_cs__output_supers_list_6_p_0(ml_backend__mlds_to_cs__STATE_VARIABLE_Info_36_36, ml_backend__mlds_to_cs__V_41_41, ml_backend__mlds_to_cs__BaseClasses_24, ml_backend__mlds_to_cs__Implements_25);
    }
    {
      ml_backend__mlds_to_cs__indent_line_3_p_0(ml_backend__mlds_to_cs__Indent_8);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "{\n");
    }
    ml_backend__mlds_to_cs__V_47_47 = (ml_backend__mlds_to_cs__Indent_8 + (MR_Integer) 1);
    {
      ml_backend__mlds_to_cs__output_class_body_7_p_0(ml_backend__mlds_to_cs__STATE_VARIABLE_Info_36_36, ml_backend__mlds_to_cs__V_47_47, ml_backend__mlds_to_cs__Kind_22, ml_backend__mlds_to_cs__UnqualName_9, ml_backend__mlds_to_cs__AllMembers_28);
    }
    {
      mercury__io__nl_2_p_0();
    }
    ml_backend__mlds_to_cs__V_51_51 = (ml_backend__mlds_to_cs__Indent_8 + (MR_Integer) 1);
    {
      ml_backend__mlds_to_cs__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__V_52_52, 0) = ((MR_Box) (ml_backend__mlds_to_cs__UnqualName_9));
    }
    {
      ml_backend__mlds_to_cs__output_defns_6_p_0(ml_backend__mlds_to_cs__STATE_VARIABLE_Info_36_36, ml_backend__mlds_to_cs__V_51_51, ml_backend__mlds_to_cs__V_52_52, ml_backend__mlds_to_cs__Ctors_27);
    }
    {
      ml_backend__mlds_to_cs__indent_line_3_p_0(ml_backend__mlds_to_cs__Indent_8);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "}\n\n");
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_defn_body_8_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_9,
  MR_Integer ml_backend__mlds_to_cs__Indent_10,
  MR_Word ml_backend__mlds_to_cs__UnqualName_11,
  MR_Word ml_backend__mlds_to_cs__OutputAux_12,
  MR_Word ml_backend__mlds_to_cs__Context_13,
  MR_Word ml_backend__mlds_to_cs__Entity_14)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;

    switch (MR_tag((MR_Word) ml_backend__mlds_to_cs__Entity_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ml_backend__mlds_to_cs__ClassDefn_25 = (MR_Word) MR_body(((MR_Word) ml_backend__mlds_to_cs__Entity_14), (MR_Integer) 0);

          {
            ml_backend__mlds_to_cs__output_class_6_p_0(ml_backend__mlds_to_cs__Info_9, ml_backend__mlds_to_cs__Indent_10, ml_backend__mlds_to_cs__UnqualName_11, ml_backend__mlds_to_cs__ClassDefn_25);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__mlds_to_cs__Type_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__Entity_14, (MR_Integer) 0)));
          MR_Word ml_backend__mlds_to_cs__Initializer_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__Entity_14, (MR_Integer) 1)));
          MR_Word ml_backend__mlds_to_cs__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__Entity_14, (MR_Integer) 2)));

          {
            ml_backend__mlds_to_cs__output_type_4_p_0(ml_backend__mlds_to_cs__Info_9, ml_backend__mlds_to_cs__Type_16);
          }
          {
            mercury__io__write_char_3_p_0((MR_Char) 32);
          }
          {
            ml_backend__mlds_to_cs__output_name_3_p_0(ml_backend__mlds_to_cs__UnqualName_11);
          }
          {
            ml_backend__mlds_to_cs__output_initializer_6_p_0(ml_backend__mlds_to_cs__Info_9, ml_backend__mlds_to_cs__OutputAux_12, ml_backend__mlds_to_cs__Type_16, ml_backend__mlds_to_cs__Initializer_17);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) ";\n");
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ml_backend__mlds_to_cs__MaybePredProcId_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__Entity_14, (MR_Integer) 0)));
          MR_Word ml_backend__mlds_to_cs__Signature_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__Entity_14, (MR_Integer) 1)));
          MR_Word ml_backend__mlds_to_cs__MaybeBody_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__Entity_14, (MR_Integer) 2)));
          MR_Word ml_backend__mlds_to_cs___Attributes_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__Entity_14, (MR_Integer) 3)));
          MR_Word ml_backend__mlds_to_cs___EnvVarNames_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__Entity_14, (MR_Integer) 4)));
          MR_Word ml_backend__mlds_to_cs___MaybeRequireTailrecInfo_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__Entity_14, (MR_Integer) 5)));

          if ((ml_backend__mlds_to_cs__MaybePredProcId_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
            }
          else
            {
              MR_Word ml_backend__mlds_to_cs__Value_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__MaybePredProcId_19, (MR_Integer) 0)));

              {
                ml_backend__mlds_to_cs__output_pred_proc_id_4_p_0(ml_backend__mlds_to_cs__Info_9, ml_backend__mlds_to_cs__Value_64);
              }
            }
          {
            ml_backend__mlds_to_cs__output_func_9_p_0(ml_backend__mlds_to_cs__Info_9, ml_backend__mlds_to_cs__Indent_10, ml_backend__mlds_to_cs__UnqualName_11, ml_backend__mlds_to_cs__OutputAux_12, ml_backend__mlds_to_cs__Context_13, ml_backend__mlds_to_cs__Signature_20, ml_backend__mlds_to_cs__MaybeBody_21);
          }
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_defn_6_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_7,
  MR_Integer ml_backend__mlds_to_cs__Indent_8,
  MR_Word ml_backend__mlds_to_cs__OutputAux_9,
  MR_Word ml_backend__mlds_to_cs__Defn_10)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Word ml_backend__mlds_to_cs__Name_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Defn_10, (MR_Integer) 0)));
    MR_Word ml_backend__mlds_to_cs__Context_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Defn_10, (MR_Integer) 1)));
    MR_Word ml_backend__mlds_to_cs__Flags_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Defn_10, (MR_Integer) 2)));
    MR_Word ml_backend__mlds_to_cs__DefnBody_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Defn_10, (MR_Integer) 3)));
    MR_Word ml_backend__mlds_to_cs__V_28_28;
    MR_Word ml_backend__mlds_to_cs__V_16_16;
    MR_Word ml_backend__mlds_to_cs__V_17_17;
    MR_Word ml_backend__mlds_to_cs__V_18_18;
    MR_Word ml_backend__mlds_to_cs__V_19_19;
    MR_Word ml_backend__mlds_to_cs__V_20_20;

    {
      ml_backend__mlds_to_cs__indent_line_3_p_0(ml_backend__mlds_to_cs__Indent_8);
    }
    ml_backend__mlds_to_cs__succeeded = ((MR_tag((MR_Word) ml_backend__mlds_to_cs__DefnBody_15)) == (MR_mktag((MR_Integer) 2)));
    if (ml_backend__mlds_to_cs__succeeded)
      {
        ml_backend__mlds_to_cs__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__DefnBody_15, (MR_Integer) 0)));
        ml_backend__mlds_to_cs__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__DefnBody_15, (MR_Integer) 1)));
        ml_backend__mlds_to_cs__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__DefnBody_15, (MR_Integer) 2)));
        ml_backend__mlds_to_cs__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__DefnBody_15, (MR_Integer) 3)));
        ml_backend__mlds_to_cs__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__DefnBody_15, (MR_Integer) 4)));
        ml_backend__mlds_to_cs__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__DefnBody_15, (MR_Integer) 5)));
        ml_backend__mlds_to_cs__succeeded = (ml_backend__mlds_to_cs__V_28_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    if (ml_backend__mlds_to_cs__succeeded)
      {
        {
          mercury__io__write_string_3_p_0((MR_String) "/* external:\n");
        }
        {
          ml_backend__mlds_to_cs__output_decl_flags_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Flags_14);
        }
        {
          ml_backend__mlds_to_cs__output_defn_body_8_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Indent_8, ml_backend__mlds_to_cs__Name_12, ml_backend__mlds_to_cs__OutputAux_9, ml_backend__mlds_to_cs__Context_13, ml_backend__mlds_to_cs__DefnBody_15);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "*/\n");
        }
      }
    else
      {
        MR_Word ml_backend__mlds_to_cs__OverrideFlags_23;
        MR_Word ml_backend__mlds_to_cs__ClassDefn_21;
        MR_Word ml_backend__mlds_to_cs__Kind_22;
        MR_Word ml_backend__mlds_to_cs__V_49_49;
        MR_Word ml_backend__mlds_to_cs__V_50_50;
        MR_Word ml_backend__mlds_to_cs__V_51_51;
        MR_Word ml_backend__mlds_to_cs__V_52_52;
        MR_Word ml_backend__mlds_to_cs__V_53_53;
        MR_Word ml_backend__mlds_to_cs__V_54_54;

        ml_backend__mlds_to_cs__succeeded = ((MR_tag((MR_Word) ml_backend__mlds_to_cs__DefnBody_15)) == (MR_mktag((MR_Integer) 0)));
        if (ml_backend__mlds_to_cs__succeeded)
          {
            ml_backend__mlds_to_cs__ClassDefn_21 = (MR_Word) MR_body(((MR_Word) ml_backend__mlds_to_cs__DefnBody_15), (MR_Integer) 0);
            ml_backend__mlds_to_cs__Kind_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__ClassDefn_21, (MR_Integer) 0)));
            ml_backend__mlds_to_cs__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__ClassDefn_21, (MR_Integer) 1)));
            ml_backend__mlds_to_cs__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__ClassDefn_21, (MR_Integer) 2)));
            ml_backend__mlds_to_cs__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__ClassDefn_21, (MR_Integer) 3)));
            ml_backend__mlds_to_cs__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__ClassDefn_21, (MR_Integer) 4)));
            ml_backend__mlds_to_cs__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__ClassDefn_21, (MR_Integer) 5)));
            ml_backend__mlds_to_cs__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__ClassDefn_21, (MR_Integer) 6)));
            switch (ml_backend__mlds_to_cs__Kind_22) {
              default:
                ml_backend__mlds_to_cs__succeeded = MR_FALSE;
                break;
              case (MR_Integer) 0:
                ml_backend__mlds_to_cs__succeeded = MR_TRUE;
                break;
              case (MR_Integer) 4:
                ml_backend__mlds_to_cs__succeeded = MR_TRUE;
                break;
            }
          }
        if (ml_backend__mlds_to_cs__succeeded)
          {
            {
              ml_backend__mlds_to_cs__OverrideFlags_23 = ml_backend__mlds__set_per_instance_2_f_0(ml_backend__mlds_to_cs__Flags_14, (MR_Integer) 1);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "[System.Serializable]\n");
            }
            {
              ml_backend__mlds_to_cs__indent_line_3_p_0(ml_backend__mlds_to_cs__Indent_8);
            }
          }
        else
          {
            MR_Word ml_backend__mlds_to_cs__ClassDefn_43;
            MR_Word ml_backend__mlds_to_cs__Kind_44;
            MR_Word ml_backend__mlds_to_cs__V_55_55;
            MR_Word ml_backend__mlds_to_cs__V_56_56;
            MR_Word ml_backend__mlds_to_cs__V_57_57;
            MR_Word ml_backend__mlds_to_cs__V_58_58;
            MR_Word ml_backend__mlds_to_cs__V_59_59;
            MR_Word ml_backend__mlds_to_cs__V_60_60;

            ml_backend__mlds_to_cs__succeeded = ((MR_tag((MR_Word) ml_backend__mlds_to_cs__DefnBody_15)) == (MR_mktag((MR_Integer) 0)));
            if (ml_backend__mlds_to_cs__succeeded)
              {
                ml_backend__mlds_to_cs__ClassDefn_43 = (MR_Word) MR_body(((MR_Word) ml_backend__mlds_to_cs__DefnBody_15), (MR_Integer) 0);
                ml_backend__mlds_to_cs__Kind_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__ClassDefn_43, (MR_Integer) 0)));
                ml_backend__mlds_to_cs__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__ClassDefn_43, (MR_Integer) 1)));
                ml_backend__mlds_to_cs__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__ClassDefn_43, (MR_Integer) 2)));
                ml_backend__mlds_to_cs__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__ClassDefn_43, (MR_Integer) 3)));
                ml_backend__mlds_to_cs__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__ClassDefn_43, (MR_Integer) 4)));
                ml_backend__mlds_to_cs__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__ClassDefn_43, (MR_Integer) 5)));
                ml_backend__mlds_to_cs__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__ClassDefn_43, (MR_Integer) 6)));
                ml_backend__mlds_to_cs__succeeded = (ml_backend__mlds_to_cs__Kind_44 == (MR_Integer) 3);
              }
            if (ml_backend__mlds_to_cs__succeeded)
              {
                MR_Word ml_backend__mlds_to_cs__OverrideFlags0_24;

                {
                  ml_backend__mlds_to_cs__OverrideFlags0_24 = ml_backend__mlds__set_per_instance_2_f_0(ml_backend__mlds_to_cs__Flags_14, (MR_Integer) 1);
                }
                {
                  ml_backend__mlds_to_cs__OverrideFlags_23 = ml_backend__mlds__set_overridability_2_f_0(ml_backend__mlds_to_cs__OverrideFlags0_24, (MR_Integer) 0);
                }
              }
            else
              ml_backend__mlds_to_cs__OverrideFlags_23 = ml_backend__mlds_to_cs__Flags_14;
          }
        {
          ml_backend__mlds_to_cs__output_decl_flags_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__OverrideFlags_23);
        }
        {
          ml_backend__mlds_to_cs__output_defn_body_8_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Indent_8, ml_backend__mlds_to_cs__Name_12, ml_backend__mlds_to_cs__OutputAux_9, ml_backend__mlds_to_cs__Context_13, ml_backend__mlds_to_cs__DefnBody_15);
        }
      }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_defns_6_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3)
{
  {
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;

    {
      ml_backend__mlds_to_cs__output_defn_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 5))), ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_defns_6_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_7,
  MR_Integer ml_backend__mlds_to_cs__Indent_8,
  MR_Word ml_backend__mlds_to_cs__OutputAux_9,
  MR_Word ml_backend__mlds_to_cs__Defns_10)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Word ml_backend__mlds_to_cs__V_14_14;
    MR_Box ml_backend__mlds_to_cs__conv0_STATE_VARIABLE_IO_13;

    {
      ml_backend__mlds_to_cs__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_14_14, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_7[2]));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_14_14, 1) = ((MR_Box) (ml_backend__mlds_to_cs__output_defns_6_p_0_1));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_14_14, 3) = ((MR_Box) (ml_backend__mlds_to_cs__Info_7));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_14_14, 4) = ((MR_Box) (ml_backend__mlds_to_cs__Indent_8));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_14_14, 5) = ((MR_Box) (ml_backend__mlds_to_cs__OutputAux_9));
    }
    {
      mercury__list__foldl_4_p_2((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, ml_backend__mlds_to_cs__V_14_14, ml_backend__mlds_to_cs__Defns_10, ((MR_Box) ((MR_Integer) 0)), &ml_backend__mlds_to_cs__conv0_STATE_VARIABLE_IO_13);
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_src_end_4_p_0(
  MR_Integer ml_backend__mlds_to_cs__Indent_5,
  MR_Word ml_backend__mlds_to_cs__ModuleName_6)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;

    {
      mercury__io__write_string_3_p_0((MR_String) "}\n\n");
    }
    {
      ml_backend__mlds_to_cs__indent_line_3_p_0(ml_backend__mlds_to_cs__Indent_5);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "}\n");
    }
    {
      ml_backend__mlds_to_cs__indent_line_3_p_0(ml_backend__mlds_to_cs__Indent_5);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "// :- end_module ");
    }
    {
      parse_tree__prog_out__write_sym_name_3_p_0(ml_backend__mlds_to_cs__ModuleName_6);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ".\n");
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__write_indented_line_4_p_0(
  MR_Integer ml_backend__mlds_to_cs__Indent_5,
  MR_String ml_backend__mlds_to_cs__Line_6)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;

    {
      ml_backend__mlds_to_cs__indent_line_3_p_0(ml_backend__mlds_to_cs__Indent_5);
    }
    {
      mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__Line_6);
    }
    {
      mercury__io__nl_2_p_0();
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__write_main_driver_4_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3)
{
  {
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;

    {
      ml_backend__mlds_to_cs__write_indented_line_4_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 3))), ((MR_String) ml_backend__mlds_to_cs__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__write_main_driver_4_p_0(
  MR_Integer ml_backend__mlds_to_cs__Indent_5,
  MR_String ml_backend__mlds_to_cs__ClassName_6)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Word ml_backend__mlds_to_cs__Body_8;
    MR_Word ml_backend__mlds_to_cs__V_20_20;
    MR_String ml_backend__mlds_to_cs__V_21_21;
    MR_String ml_backend__mlds_to_cs__V_23_23;
    MR_Word ml_backend__mlds_to_cs__V_48_48;
    MR_Integer ml_backend__mlds_to_cs__V_50_50;
    MR_Box ml_backend__mlds_to_cs__conv0_STATE_VARIABLE_IO_49_49;

    {
      ml_backend__mlds_to_cs__indent_line_3_p_0(ml_backend__mlds_to_cs__Indent_5);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "public static void Main");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "(string[] args)\n");
    }
    {
      ml_backend__mlds_to_cs__indent_line_3_p_0(ml_backend__mlds_to_cs__Indent_5);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "{\n");
    }
    {
      ml_backend__mlds_to_cs__V_23_23 = mercury__string__f_43_43_2_f_0(ml_backend__mlds_to_cs__ClassName_6, (MR_String) ".main_2_p_0();");
    }
    {
      ml_backend__mlds_to_cs__V_21_21 = mercury__string__f_43_43_2_f_0((MR_String) "   ", ml_backend__mlds_to_cs__V_23_23);
    }
    {
      ml_backend__mlds_to_cs__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__V_20_20, 0) = ((MR_Box) (ml_backend__mlds_to_cs__V_21_21));
      MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__V_20_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_cs_scalar_common_1[17])));
    }
    {
      ml_backend__mlds_to_cs__Body_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__Body_8, 0) = ((MR_Box) ((MR_String) "try {"));
      MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__Body_8, 1) = ((MR_Box) (ml_backend__mlds_to_cs__V_20_20));
    }
    ml_backend__mlds_to_cs__V_50_50 = (ml_backend__mlds_to_cs__Indent_5 + (MR_Integer) 1);
    {
      ml_backend__mlds_to_cs__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_48_48, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_48_48, 1) = ((MR_Box) (ml_backend__mlds_to_cs__write_main_driver_4_p_0_1));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_48_48, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_48_48, 3) = ((MR_Box) (ml_backend__mlds_to_cs__V_50_50));
    }
    {
      mercury__list__foldl_4_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, ml_backend__mlds_to_cs__V_48_48, ml_backend__mlds_to_cs__Body_8, ((MR_Box) ((MR_Integer) 0)), &ml_backend__mlds_to_cs__conv0_STATE_VARIABLE_IO_49_49);
    }
    {
      ml_backend__mlds_to_cs__indent_line_3_p_0(ml_backend__mlds_to_cs__Indent_5);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "}\n");
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_static_constructor_6_p_0_2(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3)
{
  {
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;

    {
      ml_backend__mlds_to_cs__IntroducedFrom__pred__output_static_constructor__824__1_4_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 3))), ((MR_String) ml_backend__mlds_to_cs__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_static_constructor_6_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3)
{
  {
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;

    {
      ml_backend__mlds_to_cs__IntroducedFrom__pred__output_static_constructor__818__1_4_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 3))), ((MR_String) ml_backend__mlds_to_cs__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_static_constructor_6_p_0(
  MR_Word ml_backend__mlds_to_cs__MercuryModuleName_7,
  MR_Integer ml_backend__mlds_to_cs__Indent_8,
  MR_Word ml_backend__mlds_to_cs__StaticConstructors_9,
  MR_Word ml_backend__mlds_to_cs__FinalPreds_10)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Word ml_backend__mlds_to_cs__TypeCtorInfo_67_67;
    MR_Word ml_backend__mlds_to_cs__TypeCtorInfo_68_68;
    MR_String ml_backend__mlds_to_cs__ClassName_12;
    MR_Word ml_backend__mlds_to_cs__WriteCall_13;
    MR_Word ml_backend__mlds_to_cs__WriteFinal_15;
    MR_Box ml_backend__mlds_to_cs__conv0_STATE_VARIABLE_IO_38_38;
    MR_Box ml_backend__mlds_to_cs__conv1_STATE_VARIABLE_IO_57_57;

    {
      ml_backend__mlds_to_cs__indent_line_3_p_0(ml_backend__mlds_to_cs__Indent_8);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "static ");
    }
    {
      parse_tree__java_names__mangle_sym_name_for_csharp_4_p_0(ml_backend__mlds_to_cs__MercuryModuleName_7, (MR_Integer) 0, (MR_String) "__", &ml_backend__mlds_to_cs__ClassName_12);
    }
    {
      mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__ClassName_12);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "() {\n");
    }
    {
      ml_backend__mlds_to_cs__WriteCall_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__WriteCall_13, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__WriteCall_13, 1) = ((MR_Box) (ml_backend__mlds_to_cs__output_static_constructor_6_p_0_1));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__WriteCall_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__WriteCall_13, 3) = ((MR_Box) (ml_backend__mlds_to_cs__Indent_8));
    }
    ml_backend__mlds_to_cs__TypeCtorInfo_67_67 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    ml_backend__mlds_to_cs__TypeCtorInfo_68_68 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
    {
      mercury__list__foldl_4_p_2(ml_backend__mlds_to_cs__TypeCtorInfo_67_67, ml_backend__mlds_to_cs__TypeCtorInfo_68_68, ml_backend__mlds_to_cs__WriteCall_13, ml_backend__mlds_to_cs__StaticConstructors_9, ((MR_Box) ((MR_Integer) 0)), &ml_backend__mlds_to_cs__conv0_STATE_VARIABLE_IO_38_38);
    }
    {
      ml_backend__mlds_to_cs__WriteFinal_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__WriteFinal_15, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__WriteFinal_15, 1) = ((MR_Box) (ml_backend__mlds_to_cs__output_static_constructor_6_p_0_2));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__WriteFinal_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__WriteFinal_15, 3) = ((MR_Box) (ml_backend__mlds_to_cs__Indent_8));
    }
    {
      mercury__list__foldl_4_p_2(ml_backend__mlds_to_cs__TypeCtorInfo_67_67, ml_backend__mlds_to_cs__TypeCtorInfo_68_68, ml_backend__mlds_to_cs__WriteFinal_15, ml_backend__mlds_to_cs__FinalPreds_10, ((MR_Box) ((MR_Integer) 0)), &ml_backend__mlds_to_cs__conv1_STATE_VARIABLE_IO_57_57);
    }
    {
      ml_backend__mlds_to_cs__indent_line_3_p_0(ml_backend__mlds_to_cs__Indent_8);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "}\n");
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_env_var_definition_4_p_0(
  MR_Integer ml_backend__mlds_to_cs__Indent_5,
  MR_String ml_backend__mlds_to_cs__EnvVarName_6)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Integer ml_backend__mlds_to_cs__V_16_16;

    {
      ml_backend__mlds_to_cs__indent_line_3_p_0(ml_backend__mlds_to_cs__Indent_5);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "private static int mercury_envvar_");
    }
    {
      mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__EnvVarName_6);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " =\n");
    }
    ml_backend__mlds_to_cs__V_16_16 = (ml_backend__mlds_to_cs__Indent_5 + (MR_Integer) 1);
    {
      ml_backend__mlds_to_cs__indent_line_3_p_0(ml_backend__mlds_to_cs__V_16_16);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "System.Environment.GetEnvironmentVariable(\"");
    }
    {
      mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__EnvVarName_6);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\") == null \? 0 : 1;\n");
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__collect_env_var_names_3_p_0(
  MR_Word ml_backend__mlds_to_cs__Defn_4,
  MR_Word ml_backend__mlds_to_cs__STATE_VARIABLE_EnvVarNames_0_19,
  MR_Word * ml_backend__mlds_to_cs__STATE_VARIABLE_EnvVarNames_20)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Word ml_backend__mlds_to_cs__EntityDefn_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Defn_4, (MR_Integer) 3)));
    MR_Word ml_backend__mlds_to_cs__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Defn_4, (MR_Integer) 0)));
    MR_Word ml_backend__mlds_to_cs__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Defn_4, (MR_Integer) 1)));
    MR_Word ml_backend__mlds_to_cs__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Defn_4, (MR_Integer) 2)));

    switch (MR_tag((MR_Word) ml_backend__mlds_to_cs__EntityDefn_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *ml_backend__mlds_to_cs__STATE_VARIABLE_EnvVarNames_20 = ml_backend__mlds_to_cs__STATE_VARIABLE_EnvVarNames_0_19;
        break;
      case (MR_Integer) 1:
        *ml_backend__mlds_to_cs__STATE_VARIABLE_EnvVarNames_20 = ml_backend__mlds_to_cs__STATE_VARIABLE_EnvVarNames_0_19;
        break;
      case (MR_Integer) 2:
        {
          MR_Word ml_backend__mlds_to_cs__EnvVarNames_5 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__EntityDefn_9, (MR_Integer) 4)));
          MR_Word ml_backend__mlds_to_cs__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__EntityDefn_9, (MR_Integer) 0)));
          MR_Word ml_backend__mlds_to_cs__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__EntityDefn_9, (MR_Integer) 1)));
          MR_Word ml_backend__mlds_to_cs__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__EntityDefn_9, (MR_Integer) 2)));
          MR_Word ml_backend__mlds_to_cs__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__EntityDefn_9, (MR_Integer) 3)));
          MR_Word ml_backend__mlds_to_cs__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__EntityDefn_9, (MR_Integer) 5)));

          {
            mercury__set__union_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ml_backend__mlds_to_cs__EnvVarNames_5, ml_backend__mlds_to_cs__STATE_VARIABLE_EnvVarNames_0_19, ml_backend__mlds_to_cs__STATE_VARIABLE_EnvVarNames_20);
          }
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_env_vars_4_p_0_2(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3)
{
  {
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;

    {
      ml_backend__mlds_to_cs__output_env_var_definition_4_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 3))), ((MR_String) ml_backend__mlds_to_cs__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_env_vars_4_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3)
{
  {
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;
    MR_Word ml_backend__mlds_to_cs__conv0_STATE_VARIABLE_EnvVarNames_20;

    {
      ml_backend__mlds_to_cs__collect_env_var_names_3_p_0(((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_1), ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_2), &ml_backend__mlds_to_cs__conv0_STATE_VARIABLE_EnvVarNames_20);
    }
    *ml_backend__mlds_to_cs__wrapper_arg_3 = ((MR_Box) (ml_backend__mlds_to_cs__conv0_STATE_VARIABLE_EnvVarNames_20));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_env_vars_4_p_0(
  MR_Integer ml_backend__mlds_to_cs__Indent_5,
  MR_Word ml_backend__mlds_to_cs__NonRttiDefns_6)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Word ml_backend__mlds_to_cs__TypeCtorInfo_21_21 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    MR_Word ml_backend__mlds_to_cs__EnvVarNamesSet_8;
    MR_Word ml_backend__mlds_to_cs__EnvVarNames_9;
    MR_Word ml_backend__mlds_to_cs__V_15_15;
    MR_Box ml_backend__mlds_to_cs__conv1_EnvVarNamesSet_8;

    {
      ml_backend__mlds_to_cs__V_15_15 = mercury__set__init_0_f_0(ml_backend__mlds_to_cs__TypeCtorInfo_21_21);
    }
    {
      mercury__list__foldl_4_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0, (MR_Word) &ml_backend__mlds_to_cs_scalar_common_1[1], (MR_Word) &ml_backend__mlds_to_cs_scalar_common_2[9], ml_backend__mlds_to_cs__NonRttiDefns_6, ((MR_Box) (ml_backend__mlds_to_cs__V_15_15)), &ml_backend__mlds_to_cs__conv1_EnvVarNamesSet_8);
    }
    ml_backend__mlds_to_cs__EnvVarNamesSet_8 = ((MR_Word) ml_backend__mlds_to_cs__conv1_EnvVarNamesSet_8);
    {
      ml_backend__mlds_to_cs__EnvVarNames_9 = mercury__set__to_sorted_list_1_f_0(ml_backend__mlds_to_cs__TypeCtorInfo_21_21, ml_backend__mlds_to_cs__EnvVarNamesSet_8);
    }
    if ((ml_backend__mlds_to_cs__EnvVarNames_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        MR_Word ml_backend__mlds_to_cs__V_16_16;
        MR_Box ml_backend__mlds_to_cs__conv2_STATE_VARIABLE_IO_13;

        {
          ml_backend__mlds_to_cs__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_16_16, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_8[0]));
          MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_16_16, 1) = ((MR_Box) (ml_backend__mlds_to_cs__output_env_vars_4_p_0_2));
          MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_16_16, 3) = ((MR_Box) (ml_backend__mlds_to_cs__Indent_5));
        }
        {
          mercury__list__foldl_4_p_2(ml_backend__mlds_to_cs__TypeCtorInfo_21_21, (MR_Word) &mercury__io__io__type_ctor_info_state_0, ml_backend__mlds_to_cs__V_16_16, ml_backend__mlds_to_cs__EnvVarNames_9, ((MR_Box) ((MR_Integer) 0)), &ml_backend__mlds_to_cs__conv2_STATE_VARIABLE_IO_13);
        }
      }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_method_ptr_constant_6_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_7,
  MR_Integer ml_backend__mlds_to_cs__Indent_8,
  MR_Word ml_backend__mlds_to_cs__CodeAddr_9,
  MR_String ml_backend__mlds_to_cs__Name_10)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Word ml_backend__mlds_to_cs__Sig_13;
    MR_Word ml_backend__mlds_to_cs__ArgTypes_16;
    MR_Word ml_backend__mlds_to_cs__RetTypes_17;
    MR_String ml_backend__mlds_to_cs__TypeString_18;

    if (((MR_tag((MR_Word) ml_backend__mlds_to_cs__CodeAddr_9)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word ml_backend__mlds_to_cs__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__CodeAddr_9, (MR_Integer) 0)));
        MR_Integer ml_backend__mlds_to_cs__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__CodeAddr_9, (MR_Integer) 1)));

        ml_backend__mlds_to_cs__Sig_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__CodeAddr_9, (MR_Integer) 2)));
      }
    else
      {
        MR_Word ml_backend__mlds_to_cs__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__CodeAddr_9, (MR_Integer) 0)));

        ml_backend__mlds_to_cs__Sig_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__CodeAddr_9, (MR_Integer) 1)));
      }
    ml_backend__mlds_to_cs__ArgTypes_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Sig_13, (MR_Integer) 0)));
    ml_backend__mlds_to_cs__RetTypes_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Sig_13, (MR_Integer) 1)));
    {
      ml_backend__mlds_to_cs__TypeString_18 = ml_backend__mlds_to_cs__method_ptr_type_to_string_3_f_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__ArgTypes_16, ml_backend__mlds_to_cs__RetTypes_17);
    }
    {
      ml_backend__mlds_to_cs__indent_line_3_p_0(ml_backend__mlds_to_cs__Indent_8);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "private static readonly ");
    }
    {
      mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__TypeString_18);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " ");
    }
    {
      mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__Name_10);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " = ");
    }
    {
      ml_backend__mlds_to_cs__mlds_output_code_addr_5_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__CodeAddr_9, (MR_Integer) 0);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ";\n");
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_method_ptr_constants_5_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_3,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_4)
{
  {
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;

    {
      ml_backend__mlds_to_cs__output_method_ptr_constant_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_1), ((MR_String) ml_backend__mlds_to_cs__wrapper_arg_2));
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_method_ptr_constants_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_6,
  MR_Integer ml_backend__mlds_to_cs__Indent_7,
  MR_Word ml_backend__mlds_to_cs__CodeAddrs_8)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Word ml_backend__mlds_to_cs__V_12_12;
    MR_Box ml_backend__mlds_to_cs__conv0_STATE_VARIABLE_IO_11;

    {
      ml_backend__mlds_to_cs__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_12_12, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_7[1]));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_12_12, 1) = ((MR_Box) (ml_backend__mlds_to_cs__output_method_ptr_constants_5_p_0_1));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_12_12, 3) = ((MR_Box) (ml_backend__mlds_to_cs__Info_6));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_12_12, 4) = ((MR_Box) (ml_backend__mlds_to_cs__Indent_7));
    }
    {
      mercury__map__foldl_4_p_2((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_code_addr_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, ml_backend__mlds_to_cs__V_12_12, ml_backend__mlds_to_cs__CodeAddrs_8, ((MR_Box) ((MR_Integer) 0)), &ml_backend__mlds_to_cs__conv0_STATE_VARIABLE_IO_11);
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__method_ptrs_in_lval_3_p_0(
  MR_Word ml_backend__mlds_to_cs__HeadVar__1_1,
  MR_Word ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0_2,
  MR_Word * ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_3)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;

    switch (MR_tag((MR_Word) ml_backend__mlds_to_cs__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_3 = ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0_2;
        break;
      case (MR_Integer) 1:
        *ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_3 = ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0_2;
        break;
      case (MR_Integer) 2:
        *ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_3 = ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0_2;
        break;
      case (MR_Integer) 3:
        *ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_3 = ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0_2;
        break;
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__method_ptrs_in_rval_3_p_0(
  MR_Word ml_backend__mlds_to_cs__Rval_4,
  MR_Word ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0_37,
  MR_Word * ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_38)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ml_backend__mlds_to_cs__succeeded;

        switch (MR_tag((MR_Word) ml_backend__mlds_to_cs__Rval_4)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_38 = ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0_37;
            break;
          case (MR_Integer) 1:
            {
              MR_Word ml_backend__mlds_to_cs__Lval_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__Rval_4, (MR_Integer) 0)));

              switch (MR_tag((MR_Word) ml_backend__mlds_to_cs__Lval_6)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_38 = ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0_37;
                  break;
                case (MR_Integer) 1:
                  *ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_38 = ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0_37;
                  break;
                case (MR_Integer) 2:
                  *ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_38 = ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0_37;
                  break;
                case (MR_Integer) 3:
                  *ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_38 = ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0_37;
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ml_backend__mlds_to_cs__SubRval_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__Rval_4, (MR_Integer) 1)));
              MR_Integer ml_backend__mlds_to_cs___Tag_7 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__Rval_4, (MR_Integer) 0)));

              /* direct tailcall eliminated */
              {
                MR_Word ml_backend__mlds_to_cs__Rval__tmp_copy_4 = ml_backend__mlds_to_cs__SubRval_8;

                ml_backend__mlds_to_cs__Rval_4 = ml_backend__mlds_to_cs__Rval__tmp_copy_4;
              }
              continue;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Rval_4, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ml_backend__mlds_to_cs__RvalConst_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Rval_4, (MR_Integer) 1)));

                  switch (MR_tag((MR_Word) ml_backend__mlds_to_cs__RvalConst_9)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      switch (MR_unmkbody(ml_backend__mlds_to_cs__RvalConst_9)) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          *ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_38 = ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0_37;
                          break;
                        case (MR_Integer) 1:
                          *ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_38 = ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0_37;
                          break;
                      }
                      break;
                    case (MR_Integer) 1:
                      *ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_38 = ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0_37;
                      break;
                    case (MR_Integer) 2:
                      *ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_38 = ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0_37;
                      break;
                    case (MR_Integer) 3:
                      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__RvalConst_9, (MR_Integer) 0)))) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          *ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_38 = ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0_37;
                          break;
                        case (MR_Integer) 1:
                          *ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_38 = ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0_37;
                          break;
                        case (MR_Integer) 2:
                          *ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_38 = ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0_37;
                          break;
                        case (MR_Integer) 3:
                          *ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_38 = ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0_37;
                          break;
                        case (MR_Integer) 4:
                          *ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_38 = ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0_37;
                          break;
                        case (MR_Integer) 5:
                          *ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_38 = ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0_37;
                          break;
                        case (MR_Integer) 6:
                          *ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_38 = ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0_37;
                          break;
                        case (MR_Integer) 7:
                          {
                            MR_Word ml_backend__mlds_to_cs__CodeAddr_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__RvalConst_9, (MR_Integer) 1)));
                            MR_Integer ml_backend__mlds_to_cs__Counter_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0_37, (MR_Integer) 0)));
                            MR_Word ml_backend__mlds_to_cs__Map0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0_37, (MR_Integer) 1)));

                            {
                              ml_backend__mlds_to_cs__succeeded = mercury__map__contains_2_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_code_addr_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ml_backend__mlds_to_cs__Map0_12, ((MR_Box) (ml_backend__mlds_to_cs__CodeAddr_10)));
                            }
                            if (ml_backend__mlds_to_cs__succeeded)
                              *ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_38 = ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0_37;
                            else
                              {
                                MR_String ml_backend__mlds_to_cs__Name_13;
                                MR_Word ml_backend__mlds_to_cs__Map_14;
                                MR_String ml_backend__mlds_to_cs__V_44_44;
                                MR_Integer ml_backend__mlds_to_cs__V_46_46;

                                {
                                  ml_backend__mlds_to_cs__V_44_44 = mercury__string__from_int_1_f_0(ml_backend__mlds_to_cs__Counter_11);
                                }
                                {
                                  ml_backend__mlds_to_cs__Name_13 = mercury__string__f_43_43_2_f_0((MR_String) "MR_method_ptr_", ml_backend__mlds_to_cs__V_44_44);
                                }
                                {
                                  mercury__map__det_insert_4_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_code_addr_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (ml_backend__mlds_to_cs__CodeAddr_10)), ((MR_Box) (ml_backend__mlds_to_cs__Name_13)), ml_backend__mlds_to_cs__Map0_12, &ml_backend__mlds_to_cs__Map_14);
                                }
                                ml_backend__mlds_to_cs__V_46_46 = (ml_backend__mlds_to_cs__Counter_11 + (MR_Integer) 1);
                                {
                                  MR_Word base;
                                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                  *ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_38 = base;
                                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__mlds_to_cs__V_46_46));
                                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__mlds_to_cs__Map_14));
                                }
                              }
                          }
                          break;
                        case (MR_Integer) 8:
                          *ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_38 = ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0_37;
                          break;
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ml_backend__mlds_to_cs__SubRval_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Rval_4, (MR_Integer) 2)));
                  MR_Word ml_backend__mlds_to_cs___UnaryOp_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Rval_4, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word ml_backend__mlds_to_cs__Rval__tmp_copy_4 = ml_backend__mlds_to_cs__SubRval_50;

                    ml_backend__mlds_to_cs__Rval_4 = ml_backend__mlds_to_cs__Rval__tmp_copy_4;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ml_backend__mlds_to_cs__SubRvalA_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Rval_4, (MR_Integer) 2)));
                  MR_Word ml_backend__mlds_to_cs__SubRvalB_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Rval_4, (MR_Integer) 3)));
                  MR_Word ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_40_40;
                  MR_Word ml_backend__mlds_to_cs___BinaryOp_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Rval_4, (MR_Integer) 1)));

                  {
                    ml_backend__mlds_to_cs__method_ptrs_in_rval_3_p_0(ml_backend__mlds_to_cs__SubRvalA_30, ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0_37, &ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_40_40);
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word ml_backend__mlds_to_cs__Rval__tmp_copy_4 = ml_backend__mlds_to_cs__SubRvalB_31;
                    MR_Word ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0__tmp_copy_37 = ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_40_40;

                    ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0_37 = ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0__tmp_copy_37;
                    ml_backend__mlds_to_cs__Rval_4 = ml_backend__mlds_to_cs__Rval__tmp_copy_4;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 3:
                *ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_38 = ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0_37;
                break;
              case (MR_Integer) 4:
                {
                  MR_Word ml_backend__mlds_to_cs__RowRval_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Rval_4, (MR_Integer) 2)));
                  MR_Word ml_backend__mlds_to_cs__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Rval_4, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word ml_backend__mlds_to_cs__Rval__tmp_copy_4 = ml_backend__mlds_to_cs__RowRval_33;

                    ml_backend__mlds_to_cs__Rval_4 = ml_backend__mlds_to_cs__Rval__tmp_copy_4;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 5:
                *ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_38 = ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0_37;
                break;
            }
            break;
        }
      }
      break;
    }
}

static void MR_CALL 
ml_backend__mlds_to_cs__method_ptrs_in_rvals_3_p_0(
  MR_Word ml_backend__mlds_to_cs__HeadVar__1_1,
  MR_Word ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0_2,
  MR_Word * ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ml_backend__mlds_to_cs__succeeded;

        if ((ml_backend__mlds_to_cs__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_3 = ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0_2;
        else
          {
            MR_Word ml_backend__mlds_to_cs__Rval_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ml_backend__mlds_to_cs__Rvals_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_12_12;

            {
              ml_backend__mlds_to_cs__method_ptrs_in_rval_3_p_0(ml_backend__mlds_to_cs__Rval_7, ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0_2, &ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_12_12);
            }
            /* direct tailcall eliminated */
            {
              MR_Word ml_backend__mlds_to_cs__HeadVar__1__tmp_copy_1 = ml_backend__mlds_to_cs__Rvals_8;
              MR_Word ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0__tmp_copy_2 = ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_12_12;

              ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0_2 = ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0__tmp_copy_2;
              ml_backend__mlds_to_cs__HeadVar__1_1 = ml_backend__mlds_to_cs__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
ml_backend__mlds_to_cs__method_ptrs_in_initializers_3_p_0(
  MR_Word ml_backend__mlds_to_cs__HeadVar__1_1,
  MR_Word ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0_2,
  MR_Word * ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ml_backend__mlds_to_cs__succeeded;

        if ((ml_backend__mlds_to_cs__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_3 = ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0_2;
        else
          {
            MR_Word ml_backend__mlds_to_cs__Initializer_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ml_backend__mlds_to_cs__Initializers_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_12_12;

            {
              ml_backend__mlds_to_cs__method_ptrs_in_initializer_3_p_0(ml_backend__mlds_to_cs__Initializer_7, ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0_2, &ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_12_12);
            }
            /* direct tailcall eliminated */
            {
              MR_Word ml_backend__mlds_to_cs__HeadVar__1__tmp_copy_1 = ml_backend__mlds_to_cs__Initializers_8;
              MR_Word ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0__tmp_copy_2 = ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_12_12;

              ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0_2 = ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0__tmp_copy_2;
              ml_backend__mlds_to_cs__HeadVar__1_1 = ml_backend__mlds_to_cs__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
ml_backend__mlds_to_cs__method_ptrs_in_initializer_3_p_0(
  MR_Word ml_backend__mlds_to_cs__HeadVar__1_1,
  MR_Word ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0_2,
  MR_Word * ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_3)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;

    switch (MR_tag((MR_Word) ml_backend__mlds_to_cs__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_3 = ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0_2;
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__mlds_to_cs__Rval_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__HeadVar__1_1, (MR_Integer) 0)));

          {
            ml_backend__mlds_to_cs__method_ptrs_in_rval_3_p_0(ml_backend__mlds_to_cs__Rval_18, ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0_2, ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_3);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ml_backend__mlds_to_cs__Initializers_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__HeadVar__1_1, (MR_Integer) 1)));
          MR_Word ml_backend__mlds_to_cs___Type_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__HeadVar__1_1, (MR_Integer) 0)));

          {
            ml_backend__mlds_to_cs__method_ptrs_in_initializers_3_p_0(ml_backend__mlds_to_cs__Initializers_8, ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0_2, ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_3);
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word ml_backend__mlds_to_cs__Initializers_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__HeadVar__1_1, (MR_Integer) 0)));

          {
            ml_backend__mlds_to_cs__method_ptrs_in_initializers_3_p_0(ml_backend__mlds_to_cs__Initializers_13, ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0_2, ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_3);
          }
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__method_ptrs_in_defn_3_p_0(
  MR_Word ml_backend__mlds_to_cs__HeadVar__1_1,
  MR_Word ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0_9,
  MR_Word * ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_10)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Word ml_backend__mlds_to_cs__Body_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__1_1, (MR_Integer) 3)));
    MR_Word ml_backend__mlds_to_cs___Name_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word ml_backend__mlds_to_cs___Context_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word ml_backend__mlds_to_cs___Flags_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__1_1, (MR_Integer) 2)));

    switch (MR_tag((MR_Word) ml_backend__mlds_to_cs__Body_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ml_backend__mlds_to_cs__ClassDefn_26 = (MR_Word) MR_body(((MR_Word) ml_backend__mlds_to_cs__Body_7), (MR_Integer) 0);
          MR_Word ml_backend__mlds_to_cs__Ctors_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__ClassDefn_26, (MR_Integer) 5)));
          MR_Word ml_backend__mlds_to_cs__Members_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__ClassDefn_26, (MR_Integer) 6)));
          MR_Word ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_26_34;
          MR_Word ml_backend__mlds_to_cs__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__ClassDefn_26, (MR_Integer) 0)));
          MR_Word ml_backend__mlds_to_cs__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__ClassDefn_26, (MR_Integer) 1)));
          MR_Word ml_backend__mlds_to_cs__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__ClassDefn_26, (MR_Integer) 2)));
          MR_Word ml_backend__mlds_to_cs__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__ClassDefn_26, (MR_Integer) 3)));
          MR_Word ml_backend__mlds_to_cs__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__ClassDefn_26, (MR_Integer) 4)));

          {
            ml_backend__mlds_to_cs__method_ptrs_in_defns_3_p_0(ml_backend__mlds_to_cs__Ctors_32, ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0_9, &ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_26_34);
          }
          {
            ml_backend__mlds_to_cs__method_ptrs_in_defns_3_p_0(ml_backend__mlds_to_cs__Members_33, ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_26_34, ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_10);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__mlds_to_cs__Initializer_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__Body_7, (MR_Integer) 1)));
          MR_Word ml_backend__mlds_to_cs___Type_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__Body_7, (MR_Integer) 0)));
          MR_Word ml_backend__mlds_to_cs___GCStatement_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__Body_7, (MR_Integer) 2)));

          {
            ml_backend__mlds_to_cs__method_ptrs_in_initializer_3_p_0(ml_backend__mlds_to_cs__Initializer_24, ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0_9, ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_10);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ml_backend__mlds_to_cs__Body_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__Body_7, (MR_Integer) 2)));
          MR_Word ml_backend__mlds_to_cs___MaybeID_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__Body_7, (MR_Integer) 0)));
          MR_Word ml_backend__mlds_to_cs___Params_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__Body_7, (MR_Integer) 1)));
          MR_Word ml_backend__mlds_to_cs___Attributes_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__Body_7, (MR_Integer) 3)));
          MR_Word ml_backend__mlds_to_cs___EnvVars_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__Body_7, (MR_Integer) 4)));
          MR_Word ml_backend__mlds_to_cs___MaybeRequireTailrecInfo_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__Body_7, (MR_Integer) 5)));

          if ((ml_backend__mlds_to_cs__Body_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            *ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_10 = ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0_9;
          else
            {
              MR_Word ml_backend__mlds_to_cs__Statement_22 = (MR_Word) MR_body(((MR_Word) ml_backend__mlds_to_cs__Body_18), (MR_Integer) 1);

              {
                ml_backend__mlds_to_cs__method_ptrs_in_statement_3_p_0(ml_backend__mlds_to_cs__Statement_22, ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0_9, ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_10);
              }
            }
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__method_ptrs_in_defns_3_p_0(
  MR_Word ml_backend__mlds_to_cs__HeadVar__1_1,
  MR_Word ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0_2,
  MR_Word * ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ml_backend__mlds_to_cs__succeeded;

        if ((ml_backend__mlds_to_cs__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_3 = ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0_2;
        else
          {
            MR_Word ml_backend__mlds_to_cs__Defn_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ml_backend__mlds_to_cs__Defns_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_12_12;

            {
              ml_backend__mlds_to_cs__method_ptrs_in_defn_3_p_0(ml_backend__mlds_to_cs__Defn_7, ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0_2, &ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_12_12);
            }
            /* direct tailcall eliminated */
            {
              MR_Word ml_backend__mlds_to_cs__HeadVar__1__tmp_copy_1 = ml_backend__mlds_to_cs__Defns_8;
              MR_Word ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0__tmp_copy_2 = ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_12_12;

              ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0_2 = ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0__tmp_copy_2;
              ml_backend__mlds_to_cs__HeadVar__1_1 = ml_backend__mlds_to_cs__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
ml_backend__mlds_to_cs__method_ptrs_in_switch_cases_3_p_0(
  MR_Word ml_backend__mlds_to_cs__HeadVar__1_1,
  MR_Word ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0_2,
  MR_Word * ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ml_backend__mlds_to_cs__succeeded;

        if ((ml_backend__mlds_to_cs__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_3 = ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0_2;
        else
          {
            MR_Word ml_backend__mlds_to_cs__Case_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ml_backend__mlds_to_cs__Cases_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ml_backend__mlds_to_cs__Statement_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Case_7, (MR_Integer) 2)));
            MR_Word ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_15_15;
            MR_Word ml_backend__mlds_to_cs__Stmt_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Statement_12, (MR_Integer) 0)));
            MR_Word ml_backend__mlds_to_cs___FirstCond_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Case_7, (MR_Integer) 0)));
            MR_Word ml_backend__mlds_to_cs___LaterConds_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Case_7, (MR_Integer) 1)));
            MR_Word ml_backend__mlds_to_cs___Context_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Statement_12, (MR_Integer) 1)));

            {
              ml_backend__mlds_to_cs__method_ptrs_in_stmt_3_p_0(ml_backend__mlds_to_cs__Stmt_19, ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0_2, &ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_15_15);
            }
            /* direct tailcall eliminated */
            {
              MR_Word ml_backend__mlds_to_cs__HeadVar__1__tmp_copy_1 = ml_backend__mlds_to_cs__Cases_8;
              MR_Word ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0__tmp_copy_2 = ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_15_15;

              ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0_2 = ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0__tmp_copy_2;
              ml_backend__mlds_to_cs__HeadVar__1_1 = ml_backend__mlds_to_cs__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
ml_backend__mlds_to_cs__method_ptrs_in_switch_default_3_p_0(
  MR_Word ml_backend__mlds_to_cs__HeadVar__1_1,
  MR_Word ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0_2,
  MR_Word * ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_3)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;

    switch (MR_tag((MR_Word) ml_backend__mlds_to_cs__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ml_backend__mlds_to_cs__HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_3 = ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0_2;
            break;
          case (MR_Integer) 1:
            *ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_3 = ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0_2;
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__mlds_to_cs__Statement_10 = (MR_Word) MR_body(((MR_Word) ml_backend__mlds_to_cs__HeadVar__1_1), (MR_Integer) 1);
          MR_Word ml_backend__mlds_to_cs__Stmt_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Statement_10, (MR_Integer) 0)));
          MR_Word ml_backend__mlds_to_cs___Context_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Statement_10, (MR_Integer) 1)));

          {
            ml_backend__mlds_to_cs__method_ptrs_in_stmt_3_p_0(ml_backend__mlds_to_cs__Stmt_17, ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0_2, ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_3);
          }
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__method_ptrs_in_stmt_3_p_0(
  MR_Word ml_backend__mlds_to_cs__HeadVar__1_1,
  MR_Word ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0_2,
  MR_Word * ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_3)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;

    switch (MR_tag((MR_Word) ml_backend__mlds_to_cs__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ml_backend__mlds_to_cs__Defns_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__1_1, (MR_Integer) 0)));
          MR_Word ml_backend__mlds_to_cs__Statements_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__1_1, (MR_Integer) 1)));
          MR_Word ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_9_9;

          {
            ml_backend__mlds_to_cs__method_ptrs_in_defns_3_p_0(ml_backend__mlds_to_cs__Defns_4, ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0_2, &ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_9_9);
          }
          {
            ml_backend__mlds_to_cs__method_ptrs_in_statements_3_p_0(ml_backend__mlds_to_cs__Statements_5, ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_9_9, ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_3);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__mlds_to_cs__Rval_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__HeadVar__1_1, (MR_Integer) 1)));
          MR_Word ml_backend__mlds_to_cs__Statement_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__HeadVar__1_1, (MR_Integer) 2)));
          MR_Word ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_17_17;
          MR_Word ml_backend__mlds_to_cs___Kind_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__HeadVar__1_1, (MR_Integer) 0)));

          {
            ml_backend__mlds_to_cs__method_ptrs_in_rval_3_p_0(ml_backend__mlds_to_cs__Rval_12, ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0_2, &ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_17_17);
          }
          {
            ml_backend__mlds_to_cs__method_ptrs_in_statement_3_p_0(ml_backend__mlds_to_cs__Statement_13, ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_17_17, ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_3);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ml_backend__mlds_to_cs__Rval_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__HeadVar__1_1, (MR_Integer) 0)));
          MR_Word ml_backend__mlds_to_cs__StatementThen_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__HeadVar__1_1, (MR_Integer) 1)));
          MR_Word ml_backend__mlds_to_cs__MaybeStatementElse_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__HeadVar__1_1, (MR_Integer) 2)));
          MR_Word ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_26_26;
          MR_Word ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_27_27;

          {
            ml_backend__mlds_to_cs__method_ptrs_in_rval_3_p_0(ml_backend__mlds_to_cs__Rval_19, ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0_2, &ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_26_26);
          }
          {
            ml_backend__mlds_to_cs__method_ptrs_in_statement_3_p_0(ml_backend__mlds_to_cs__StatementThen_20, ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_26_26, &ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_27_27);
          }
          if ((ml_backend__mlds_to_cs__MaybeStatementElse_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            *ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_3 = ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_27_27;
          else
            {
              MR_Word ml_backend__mlds_to_cs__StatementElse_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__MaybeStatementElse_21, (MR_Integer) 0)));

              {
                ml_backend__mlds_to_cs__method_ptrs_in_statement_3_p_0(ml_backend__mlds_to_cs__StatementElse_23, ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_27_27, ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_3);
              }
            }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__HeadVar__1_1, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ml_backend__mlds_to_cs__Rval_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__HeadVar__1_1, (MR_Integer) 2)));
              MR_Word ml_backend__mlds_to_cs__Cases_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__HeadVar__1_1, (MR_Integer) 4)));
              MR_Word ml_backend__mlds_to_cs__Default_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__HeadVar__1_1, (MR_Integer) 5)));
              MR_Word ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_37_37;
              MR_Word ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_38_38;
              MR_Word ml_backend__mlds_to_cs___Type_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__HeadVar__1_1, (MR_Integer) 1)));
              MR_Word ml_backend__mlds_to_cs___Range_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__HeadVar__1_1, (MR_Integer) 3)));

              {
                ml_backend__mlds_to_cs__method_ptrs_in_rval_3_p_0(ml_backend__mlds_to_cs__Rval_30, ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0_2, &ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_37_37);
              }
              {
                ml_backend__mlds_to_cs__method_ptrs_in_switch_cases_3_p_0(ml_backend__mlds_to_cs__Cases_32, ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_37_37, &ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_38_38);
              }
              {
                ml_backend__mlds_to_cs__method_ptrs_in_switch_default_3_p_0(ml_backend__mlds_to_cs__Default_33, ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_38_38, ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_3);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ml_backend.mlds_to_cs", (MR_String) "predicate \140ml_backend.mlds_to_cs.method_ptrs_in_stmt\'/3", (MR_String) "labels not supported in Java.");
                return;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ml_backend__mlds_to_cs__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__HeadVar__1_1, (MR_Integer) 1)));

              switch (MR_tag((MR_Word) ml_backend__mlds_to_cs__V_116_116)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(ml_backend__mlds_to_cs__V_116_116)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_3 = ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0_2;
                      break;
                    case (MR_Integer) 1:
                      *ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_3 = ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0_2;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "ml_backend.mlds_to_cs", (MR_String) "predicate \140ml_backend.mlds_to_cs.method_ptrs_in_stmt\'/3", (MR_String) "goto label not supported in Java.");
                      return;
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ml_backend.mlds_to_cs", (MR_String) "predicate \140ml_backend.mlds_to_cs.method_ptrs_in_stmt\'/3", (MR_String) "computed gotos not supported in Java.");
                return;
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ml_backend__mlds_to_cs__Rvals_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__HeadVar__1_1, (MR_Integer) 4)));
              MR_Word ml_backend__mlds_to_cs___FuncSig_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__HeadVar__1_1, (MR_Integer) 1)));
              MR_Word ml_backend__mlds_to_cs___Rval_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__HeadVar__1_1, (MR_Integer) 2)));
              MR_Word ml_backend__mlds_to_cs___MaybeThis_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__HeadVar__1_1, (MR_Integer) 3)));
              MR_Word ml_backend__mlds_to_cs___ReturnVars_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__HeadVar__1_1, (MR_Integer) 5)));
              MR_Word ml_backend__mlds_to_cs___IsTailCall_92 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__HeadVar__1_1, (MR_Integer) 6)));

              {
                ml_backend__mlds_to_cs__method_ptrs_in_rvals_3_p_0(ml_backend__mlds_to_cs__Rvals_90, ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0_2, ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_3);
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word ml_backend__mlds_to_cs__Rvals_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__HeadVar__1_1, (MR_Integer) 1)));

              {
                ml_backend__mlds_to_cs__method_ptrs_in_rvals_3_p_0(ml_backend__mlds_to_cs__Rvals_80, ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0_2, ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_3);
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word ml_backend__mlds_to_cs__StatementGoal_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__HeadVar__1_1, (MR_Integer) 2)));
              MR_Word ml_backend__mlds_to_cs__StatementHandler_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__HeadVar__1_1, (MR_Integer) 3)));
              MR_Word ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_74_74;
              MR_Word ml_backend__mlds_to_cs___Lval_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__HeadVar__1_1, (MR_Integer) 1)));

              {
                ml_backend__mlds_to_cs__method_ptrs_in_statement_3_p_0(ml_backend__mlds_to_cs__StatementGoal_69, ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0_2, &ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_74_74);
              }
              {
                ml_backend__mlds_to_cs__method_ptrs_in_statement_3_p_0(ml_backend__mlds_to_cs__StatementHandler_70, ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_74_74, ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_3);
              }
            }
            break;
          case (MR_Integer) 7:
            *ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_3 = ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0_2;
            break;
          case (MR_Integer) 8:
            {
              MR_Word ml_backend__mlds_to_cs__AtomicStatement_96 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__HeadVar__1_1, (MR_Integer) 1)));
              MR_Word ml_backend__mlds_to_cs__Lval_98;
              MR_Word ml_backend__mlds_to_cs__Rvals_104;
              MR_Word ml_backend__mlds_to_cs___MaybeTag_99;
              MR_Word ml_backend__mlds_to_cs___Bool_100;
              MR_Word ml_backend__mlds_to_cs___Type_101;
              MR_Word ml_backend__mlds_to_cs___MemRval_102;
              MR_Word ml_backend__mlds_to_cs___MaybeCtorName_103;
              MR_Word ml_backend__mlds_to_cs___Types_105;
              MR_Word ml_backend__mlds_to_cs___MayUseAtomic_106;
              MR_Word ml_backend__mlds_to_cs___AllocId_107;

              ml_backend__mlds_to_cs__succeeded = ((((MR_tag((MR_Word) ml_backend__mlds_to_cs__AtomicStatement_96)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__AtomicStatement_96, (MR_Integer) 0)))) == (MR_Integer) 2)));
              if (ml_backend__mlds_to_cs__succeeded)
                {
                  ml_backend__mlds_to_cs__Lval_98 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__AtomicStatement_96, (MR_Integer) 1)));
                  ml_backend__mlds_to_cs___MaybeTag_99 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__AtomicStatement_96, (MR_Integer) 2)));
                  ml_backend__mlds_to_cs___Bool_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__AtomicStatement_96, (MR_Integer) 3)));
                  ml_backend__mlds_to_cs___Type_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__AtomicStatement_96, (MR_Integer) 4)));
                  ml_backend__mlds_to_cs___MemRval_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__AtomicStatement_96, (MR_Integer) 5)));
                  ml_backend__mlds_to_cs___MaybeCtorName_103 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__AtomicStatement_96, (MR_Integer) 6)));
                  ml_backend__mlds_to_cs__Rvals_104 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__AtomicStatement_96, (MR_Integer) 7)));
                  ml_backend__mlds_to_cs___Types_105 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__AtomicStatement_96, (MR_Integer) 8)));
                  ml_backend__mlds_to_cs___MayUseAtomic_106 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__AtomicStatement_96, (MR_Integer) 9)));
                  ml_backend__mlds_to_cs___AllocId_107 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__AtomicStatement_96, (MR_Integer) 10)));
                  {
                    MR_Word ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_111_111;

                    {
                      ml_backend__mlds_to_cs__method_ptrs_in_lval_3_p_0(ml_backend__mlds_to_cs__Lval_98, ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0_2, &ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_111_111);
                    }
                    {
                      ml_backend__mlds_to_cs__method_ptrs_in_rvals_3_p_0(ml_backend__mlds_to_cs__Rvals_104, ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_111_111, ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_3);
                    }
                  }
                }
              else
                {
                  MR_Word ml_backend__mlds_to_cs__Rval_108;
                  MR_Word ml_backend__mlds_to_cs__Lval_115;

                  ml_backend__mlds_to_cs__succeeded = ((MR_tag((MR_Word) ml_backend__mlds_to_cs__AtomicStatement_96)) == (MR_mktag((MR_Integer) 2)));
                  if (ml_backend__mlds_to_cs__succeeded)
                    {
                      ml_backend__mlds_to_cs__Lval_115 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__AtomicStatement_96, (MR_Integer) 0)));
                      ml_backend__mlds_to_cs__Rval_108 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__AtomicStatement_96, (MR_Integer) 1)));
                      {
                        MR_Word ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_113_113;

                        {
                          ml_backend__mlds_to_cs__method_ptrs_in_lval_3_p_0(ml_backend__mlds_to_cs__Lval_115, ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0_2, &ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_113_113);
                        }
                        {
                          ml_backend__mlds_to_cs__method_ptrs_in_rval_3_p_0(ml_backend__mlds_to_cs__Rval_108, ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_113_113, ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_3);
                        }
                      }
                    }
                  else
                    *ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_3 = ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0_2;
                }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__method_ptrs_in_statement_3_p_0(
  MR_Word ml_backend__mlds_to_cs__HeadVar__1_1,
  MR_Word ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0_7,
  MR_Word * ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_8)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Word ml_backend__mlds_to_cs__Stmt_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word ml_backend__mlds_to_cs___Context_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__1_1, (MR_Integer) 1)));

    {
      ml_backend__mlds_to_cs__method_ptrs_in_stmt_3_p_0(ml_backend__mlds_to_cs__Stmt_4, ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0_7, ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_8);
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__method_ptrs_in_statements_3_p_0(
  MR_Word ml_backend__mlds_to_cs__HeadVar__1_1,
  MR_Word ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0_2,
  MR_Word * ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ml_backend__mlds_to_cs__succeeded;

        if ((ml_backend__mlds_to_cs__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_3 = ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0_2;
        else
          {
            MR_Word ml_backend__mlds_to_cs__Statement_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ml_backend__mlds_to_cs__Statements_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_12_12;

            {
              ml_backend__mlds_to_cs__method_ptrs_in_statement_3_p_0(ml_backend__mlds_to_cs__Statement_7, ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0_2, &ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_12_12);
            }
            /* direct tailcall eliminated */
            {
              MR_Word ml_backend__mlds_to_cs__HeadVar__1__tmp_copy_1 = ml_backend__mlds_to_cs__Statements_8;
              MR_Word ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0__tmp_copy_2 = ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_12_12;

              ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0_2 = ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0__tmp_copy_2;
              ml_backend__mlds_to_cs__HeadVar__1_1 = ml_backend__mlds_to_cs__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
ml_backend__mlds_to_cs__find_pointer_addressed_methods_in_scalars_3_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3)
{
  {
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;
    MR_Word ml_backend__mlds_to_cs__conv0_STATE_VARIABLE_CodeAddrs_3;

    {
      ml_backend__mlds_to_cs__method_ptrs_in_initializer_3_p_0(((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_1), ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_2), &ml_backend__mlds_to_cs__conv0_STATE_VARIABLE_CodeAddrs_3);
    }
    *ml_backend__mlds_to_cs__wrapper_arg_3 = ((MR_Box) (ml_backend__mlds_to_cs__conv0_STATE_VARIABLE_CodeAddrs_3));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__find_pointer_addressed_methods_in_scalars_3_p_0(
  MR_Word ml_backend__mlds_to_cs__Cord_4,
  MR_Word ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0_6,
  MR_Word * ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_7)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Box ml_backend__mlds_to_cs__conv1_STATE_VARIABLE_CodeAddrs_7;

    {
      mercury__cord__foldl_pred_4_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, (MR_Word) &ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__type_ctor_info_code_addr_map_0, (MR_Word) &ml_backend__mlds_to_cs_scalar_common_2[8], ml_backend__mlds_to_cs__Cord_4, ((MR_Box) (ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0_6)), &ml_backend__mlds_to_cs__conv1_STATE_VARIABLE_CodeAddrs_7);
    }
    *ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_7 = ((MR_Word) ml_backend__mlds_to_cs__conv1_STATE_VARIABLE_CodeAddrs_7);
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__find_pointer_addressed_methods_3_p_0(
  MR_Word ml_backend__mlds_to_cs__HeadVar__1_1,
  MR_Word ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0_2,
  MR_Word * ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ml_backend__mlds_to_cs__succeeded;

        if ((ml_backend__mlds_to_cs__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_3 = ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0_2;
        else
          {
            MR_Word ml_backend__mlds_to_cs__Defn_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ml_backend__mlds_to_cs__Defns_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ml_backend__mlds_to_cs__Body_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Defn_7, (MR_Integer) 3)));
            MR_Word ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_16_16;
            MR_Word ml_backend__mlds_to_cs___Name_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Defn_7, (MR_Integer) 0)));
            MR_Word ml_backend__mlds_to_cs___Context_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Defn_7, (MR_Integer) 1)));
            MR_Word ml_backend__mlds_to_cs___Flags_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Defn_7, (MR_Integer) 2)));

            switch (MR_tag((MR_Word) ml_backend__mlds_to_cs__Body_13)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ml_backend__mlds_to_cs__ClassDefn_32 = (MR_Word) MR_body(((MR_Word) ml_backend__mlds_to_cs__Body_13), (MR_Integer) 0);
                  MR_Word ml_backend__mlds_to_cs__Ctors_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__ClassDefn_32, (MR_Integer) 5)));
                  MR_Word ml_backend__mlds_to_cs__Members_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__ClassDefn_32, (MR_Integer) 6)));
                  MR_Word ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_26_40;
                  MR_Word ml_backend__mlds_to_cs__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__ClassDefn_32, (MR_Integer) 0)));
                  MR_Word ml_backend__mlds_to_cs__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__ClassDefn_32, (MR_Integer) 1)));
                  MR_Word ml_backend__mlds_to_cs__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__ClassDefn_32, (MR_Integer) 2)));
                  MR_Word ml_backend__mlds_to_cs__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__ClassDefn_32, (MR_Integer) 3)));
                  MR_Word ml_backend__mlds_to_cs__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__ClassDefn_32, (MR_Integer) 4)));

                  {
                    ml_backend__mlds_to_cs__method_ptrs_in_defns_3_p_0(ml_backend__mlds_to_cs__Ctors_38, ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0_2, &ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_26_40);
                  }
                  {
                    ml_backend__mlds_to_cs__method_ptrs_in_defns_3_p_0(ml_backend__mlds_to_cs__Members_39, ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_26_40, &ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_16_16);
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ml_backend__mlds_to_cs__Initializer_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__Body_13, (MR_Integer) 1)));
                  MR_Word ml_backend__mlds_to_cs___Type_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__Body_13, (MR_Integer) 0)));
                  MR_Word ml_backend__mlds_to_cs___GCStatement_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__Body_13, (MR_Integer) 2)));

                  {
                    ml_backend__mlds_to_cs__method_ptrs_in_initializer_3_p_0(ml_backend__mlds_to_cs__Initializer_30, ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0_2, &ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_16_16);
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ml_backend__mlds_to_cs__Body_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__Body_13, (MR_Integer) 2)));
                  MR_Word ml_backend__mlds_to_cs___MaybeID_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__Body_13, (MR_Integer) 0)));
                  MR_Word ml_backend__mlds_to_cs___Params_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__Body_13, (MR_Integer) 1)));
                  MR_Word ml_backend__mlds_to_cs___Attributes_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__Body_13, (MR_Integer) 3)));
                  MR_Word ml_backend__mlds_to_cs___EnvVars_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__Body_13, (MR_Integer) 4)));
                  MR_Word ml_backend__mlds_to_cs___MaybeRequireTailrecInfo_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_cs__Body_13, (MR_Integer) 5)));

                  if ((ml_backend__mlds_to_cs__Body_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_16_16 = ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0_2;
                  else
                    {
                      MR_Word ml_backend__mlds_to_cs__Statement_28 = (MR_Word) MR_body(((MR_Word) ml_backend__mlds_to_cs__Body_24), (MR_Integer) 1);

                      {
                        ml_backend__mlds_to_cs__method_ptrs_in_statement_3_p_0(ml_backend__mlds_to_cs__Statement_28, ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0_2, &ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_16_16);
                      }
                    }
                }
                break;
            }
            /* direct tailcall eliminated */
            {
              MR_Word ml_backend__mlds_to_cs__HeadVar__1__tmp_copy_1 = ml_backend__mlds_to_cs__Defns_8;
              MR_Word ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0__tmp_copy_2 = ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_16_16;

              ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0_2 = ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_0__tmp_copy_2;
              ml_backend__mlds_to_cs__HeadVar__1_1 = ml_backend__mlds_to_cs__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_exported_enum_constant_6_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_7,
  MR_Integer ml_backend__mlds_to_cs__Indent_8,
  MR_Word ml_backend__mlds_to_cs__MLDS_Type_9,
  MR_Word ml_backend__mlds_to_cs__ExportedConstant_10)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_String ml_backend__mlds_to_cs__Name_12 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__ExportedConstant_10, (MR_Integer) 0)));
    MR_Word ml_backend__mlds_to_cs__Initializer_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__ExportedConstant_10, (MR_Integer) 1)));

    {
      ml_backend__mlds_to_cs__indent_line_3_p_0(ml_backend__mlds_to_cs__Indent_8);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "public static readonly ");
    }
    {
      ml_backend__mlds_to_cs__output_type_4_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__MLDS_Type_9);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " ");
    }
    {
      mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__Name_12);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " = ");
    }
    {
      ml_backend__mlds_to_cs__output_initializer_body_5_p_0(ml_backend__mlds_to_cs__Info_7, ml_backend__mlds_to_cs__Initializer_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ";\n");
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_exported_enum_5_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3)
{
  {
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;

    {
      ml_backend__mlds_to_cs__output_exported_enum_constant_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 5))), ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_exported_enum_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_6,
  MR_Integer ml_backend__mlds_to_cs__Indent_7,
  MR_Word ml_backend__mlds_to_cs__ExportedEnum_8)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Word ml_backend__mlds_to_cs__Lang_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__ExportedEnum_8, (MR_Integer) 0)));
    MR_Word ml_backend__mlds_to_cs__TypeCtor_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__ExportedEnum_8, (MR_Integer) 2)));
    MR_Word ml_backend__mlds_to_cs__ExportedConstants0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__ExportedEnum_8, (MR_Integer) 3)));
    MR_Word ml_backend__mlds_to_cs__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__ExportedEnum_8, (MR_Integer) 1)));

    switch (ml_backend__mlds_to_cs__Lang_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__mlds_to_cs__TypeCtorInfo_23_23;
          MR_Word ml_backend__mlds_to_cs__ClassName_14;
          MR_Integer ml_backend__mlds_to_cs__ClassArity_15;
          MR_Word ml_backend__mlds_to_cs__MLDS_Type_16;
          MR_Word ml_backend__mlds_to_cs__ExportedConstants_17;
          MR_Word ml_backend__mlds_to_cs__V_21_21;
          MR_Box ml_backend__mlds_to_cs__conv0_STATE_VARIABLE_IO_19;

          {
            ml_backend__ml_type_gen__ml_gen_type_name_3_p_0(ml_backend__mlds_to_cs__TypeCtor_12, &ml_backend__mlds_to_cs__ClassName_14, &ml_backend__mlds_to_cs__ClassArity_15);
          }
          {
            ml_backend__mlds_to_cs__MLDS_Type_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__MLDS_Type_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__MLDS_Type_16, 1) = ((MR_Box) (ml_backend__mlds_to_cs__ClassName_14));
            MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__MLDS_Type_16, 2) = ((MR_Box) (ml_backend__mlds_to_cs__ClassArity_15));
            MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__MLDS_Type_16, 3) = ((MR_Box) ((MR_Integer) 4));
          }
          ml_backend__mlds_to_cs__TypeCtorInfo_23_23 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_exported_enum_constant_0;
          {
            mercury__list__reverse_2_p_0(ml_backend__mlds_to_cs__TypeCtorInfo_23_23, ml_backend__mlds_to_cs__ExportedConstants0_13, &ml_backend__mlds_to_cs__ExportedConstants_17);
          }
          {
            ml_backend__mlds_to_cs__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_21_21, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_7[0]));
            MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_21_21, 1) = ((MR_Box) (ml_backend__mlds_to_cs__output_exported_enum_5_p_0_1));
            MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_21_21, 3) = ((MR_Box) (ml_backend__mlds_to_cs__Info_6));
            MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_21_21, 4) = ((MR_Box) (ml_backend__mlds_to_cs__Indent_7));
            MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_21_21, 5) = ((MR_Box) (ml_backend__mlds_to_cs__MLDS_Type_16));
          }
          {
            mercury__list__foldl_4_p_2(ml_backend__mlds_to_cs__TypeCtorInfo_23_23, (MR_Word) &mercury__io__io__type_ctor_info_state_0, ml_backend__mlds_to_cs__V_21_21, ml_backend__mlds_to_cs__ExportedConstants_17, ((MR_Box) ((MR_Integer) 0)), &ml_backend__mlds_to_cs__conv0_STATE_VARIABLE_IO_19);
          }
        }
        break;
      case (MR_Integer) 3:
        {
        }
        break;
      case (MR_Integer) 2:
        {
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_exported_enums_5_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3)
{
  {
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;

    {
      ml_backend__mlds_to_cs__output_exported_enum_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_exported_enums_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_6,
  MR_Integer ml_backend__mlds_to_cs__Indent_7,
  MR_Word ml_backend__mlds_to_cs__ExportedEnums_8)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Word ml_backend__mlds_to_cs__V_12_12;
    MR_Box ml_backend__mlds_to_cs__conv0_STATE_VARIABLE_IO_11;

    {
      ml_backend__mlds_to_cs__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_12_12, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_4[3]));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_12_12, 1) = ((MR_Box) (ml_backend__mlds_to_cs__output_exported_enums_5_p_0_1));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_12_12, 3) = ((MR_Box) (ml_backend__mlds_to_cs__Info_6));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_12_12, 4) = ((MR_Box) (ml_backend__mlds_to_cs__Indent_7));
    }
    {
      mercury__list__foldl_4_p_2((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_exported_enum_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, ml_backend__mlds_to_cs__V_12_12, ml_backend__mlds_to_cs__ExportedEnums_8, ((MR_Box) ((MR_Integer) 0)), &ml_backend__mlds_to_cs__conv0_STATE_VARIABLE_IO_11);
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__write_argument_name_3_p_0(
  MR_Word ml_backend__mlds_to_cs__Arg_4)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Word ml_backend__mlds_to_cs__Name_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Arg_4, (MR_Integer) 0)));
    MR_Word ml_backend__mlds_to_cs__Type_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Arg_4, (MR_Integer) 1)));
    MR_Word ml_backend__mlds_to_cs__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Arg_4, (MR_Integer) 2)));
    MR_Word ml_backend__mlds_to_cs__V_9_9;

    ml_backend__mlds_to_cs__succeeded = ((((MR_tag((MR_Word) ml_backend__mlds_to_cs__Type_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Type_7, (MR_Integer) 0)))) == (MR_Integer) 6)));
    if (ml_backend__mlds_to_cs__succeeded)
      {
        ml_backend__mlds_to_cs__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Type_7, (MR_Integer) 1)));
        {
          mercury__io__write_string_3_p_0((MR_String) "out ");
        }
      }
    else
      {
      }
    {
      ml_backend__mlds_to_cs__output_name_3_p_0(ml_backend__mlds_to_cs__Name_6);
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__write_export_call_4_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3)
{
  {
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;

    {
      ml_backend__mlds_to_cs__write_argument_name_3_p_0(((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__write_export_call_4_p_0(
  MR_Word ml_backend__mlds_to_cs__MLDS_Name_5,
  MR_Word ml_backend__mlds_to_cs__Parameters_6)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Word ml_backend__mlds_to_cs__MLDS_ModuleName_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__MLDS_Name_5, (MR_Integer) 0)));
    MR_Word ml_backend__mlds_to_cs__QualKind_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__MLDS_Name_5, (MR_Integer) 1)));
    MR_Word ml_backend__mlds_to_cs__UnqualName_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__MLDS_Name_5, (MR_Integer) 2)));
    MR_String ml_backend__mlds_to_cs__QualifierString_36;
    MR_Word ml_backend__mlds_to_cs__OuterName_45;
    MR_Word ml_backend__mlds_to_cs__InnerName_46;
    MR_String ml_backend__mlds_to_cs__MangledOuterName_48;
    MR_String ml_backend__mlds_to_cs__MangledSuffix_49;
    MR_Word ml_backend__mlds_to_cs__StrippedOuterName_47;
    MR_String ml_backend__mlds_to_cs__V_60_60;

    {
      ml_backend__mlds_to_cs__OuterName_45 = ml_backend__mlds__mlds_module_name_to_package_name_1_f_0(ml_backend__mlds_to_cs__MLDS_ModuleName_33);
    }
    {
      ml_backend__mlds_to_cs__InnerName_46 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ml_backend__mlds_to_cs__MLDS_ModuleName_33);
    }
    {
      ml_backend__mlds_to_cs__succeeded = mdbcomp__sym_name__strip_outermost_qualifier_3_p_0(ml_backend__mlds_to_cs__OuterName_45, &ml_backend__mlds_to_cs__V_60_60, &ml_backend__mlds_to_cs__StrippedOuterName_47);
    }
    if (ml_backend__mlds_to_cs__succeeded)
      ml_backend__mlds_to_cs__succeeded = (strcmp((MR_String) "mercury", ml_backend__mlds_to_cs__V_60_60) == 0);
    if (ml_backend__mlds_to_cs__succeeded)
      {
        {
          parse_tree__java_names__mangle_sym_name_for_csharp_4_p_0(ml_backend__mlds_to_cs__StrippedOuterName_47, (MR_Integer) 0, (MR_String) "__", &ml_backend__mlds_to_cs__MangledOuterName_48);
        }
      }
    else
      {
        {
          parse_tree__java_names__mangle_sym_name_for_csharp_4_p_0(ml_backend__mlds_to_cs__OuterName_45, (MR_Integer) 0, (MR_String) "__", &ml_backend__mlds_to_cs__MangledOuterName_48);
        }
      }
    {
      ml_backend__mlds_to_cs__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ml_backend__mlds_to_cs__OuterName_45, ml_backend__mlds_to_cs__InnerName_46);
    }
    if (ml_backend__mlds_to_cs__succeeded)
      ml_backend__mlds_to_cs__MangledSuffix_49 = (MR_String) "";
    else
      {
        MR_Word ml_backend__mlds_to_cs__Suffix_50;
        MR_String ml_backend__mlds_to_cs__MangledSuffix0_51;
        MR_Word ml_backend__mlds_to_cs__V_57_57;

        {
          ml_backend__mlds_to_cs__remove_sym_name_prefixes_3_p_0(ml_backend__mlds_to_cs__InnerName_46, ml_backend__mlds_to_cs__OuterName_45, &ml_backend__mlds_to_cs__Suffix_50);
        }
        switch (ml_backend__mlds_to_cs__QualKind_34) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            ml_backend__mlds_to_cs__V_57_57 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            ml_backend__mlds_to_cs__V_57_57 = (MR_Integer) 1;
            break;
        }
        {
          parse_tree__java_names__mangle_sym_name_for_csharp_4_p_0(ml_backend__mlds_to_cs__Suffix_50, ml_backend__mlds_to_cs__V_57_57, (MR_String) ".", &ml_backend__mlds_to_cs__MangledSuffix0_51);
        }
        {
          ml_backend__mlds_to_cs__MangledSuffix_49 = mercury__string__f_43_43_2_f_0((MR_String) ".", ml_backend__mlds_to_cs__MangledSuffix0_51);
        }
      }
    {
      ml_backend__mlds_to_cs__QualifierString_36 = mercury__string__f_43_43_2_f_0(ml_backend__mlds_to_cs__MangledOuterName_48, ml_backend__mlds_to_cs__MangledSuffix_49);
    }
    {
      mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__QualifierString_36);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ".");
    }
    {
      ml_backend__mlds_to_cs__output_name_3_p_0(ml_backend__mlds_to_cs__UnqualName_35);
    }
    {
      mercury__io__write_char_3_p_0((MR_Char) 40);
    }
    {
      mercury__io__write_list_5_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0, ml_backend__mlds_to_cs__Parameters_6, (MR_String) ", ", (MR_Word) &ml_backend__mlds_to_cs_scalar_common_2[7]);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ");\n");
    }
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_cs__is_out_argument_1_p_0(
  MR_Word ml_backend__mlds_to_cs__HeadVar__1_1)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Word ml_backend__mlds_to_cs__Type_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word ml_backend__mlds_to_cs__V_2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word ml_backend__mlds_to_cs__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__HeadVar__1_1, (MR_Integer) 2)));
    MR_Word ml_backend__mlds_to_cs__V_5_5;

    ml_backend__mlds_to_cs__succeeded = ((((MR_tag((MR_Word) ml_backend__mlds_to_cs__Type_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Type_3, (MR_Integer) 0)))) == (MR_Integer) 6)));
    if (ml_backend__mlds_to_cs__succeeded)
      ml_backend__mlds_to_cs__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Type_3, (MR_Integer) 1)));
    return ml_backend__mlds_to_cs__succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_cs__output_export_5_p_0_2(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;

    {
      ml_backend__mlds_to_cs__succeeded = ml_backend__mlds_to_cs__is_out_argument_1_p_0(((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_1));
    }
    return ml_backend__mlds_to_cs__succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_cs__output_export_5_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;

    {
      ml_backend__mlds_to_cs__succeeded = ml_backend__mlds_to_cs__IntroducedFrom__pred__output_export__321__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 4))));
    }
    return ml_backend__mlds_to_cs__succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_export_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_6,
  MR_Integer ml_backend__mlds_to_cs__Indent_7,
  MR_Word ml_backend__mlds_to_cs__Export_8)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Word ml_backend__mlds_to_cs__TypeCtorInfo_80_80;
    MR_Word ml_backend__mlds_to_cs__Lang_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Export_8, (MR_Integer) 0)));
    MR_String ml_backend__mlds_to_cs__ExportName_11 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Export_8, (MR_Integer) 1)));
    MR_Word ml_backend__mlds_to_cs__MLDS_Name_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Export_8, (MR_Integer) 2)));
    MR_Word ml_backend__mlds_to_cs__MLDS_Signature_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Export_8, (MR_Integer) 3)));
    MR_Word ml_backend__mlds_to_cs__Parameters_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__MLDS_Signature_13, (MR_Integer) 0)));
    MR_Word ml_backend__mlds_to_cs__ReturnTypes_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__MLDS_Signature_13, (MR_Integer) 1)));
    MR_Word ml_backend__mlds_to_cs__OutArgs_22;
    MR_Word ml_backend__mlds_to_cs__InArgs_23;
    MR_Word ml_backend__mlds_to_cs__RestOutArgs_24;
    MR_Word ml_backend__mlds_to_cs__V_33_33;
    MR_Integer ml_backend__mlds_to_cs__V_54_54;
    MR_Integer ml_backend__mlds_to_cs__V_61_61;
    MR_Word ml_backend__mlds_to_cs__V_73_73;
    MR_Word ml_backend__mlds_to_cs___UnivQTVars_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Export_8, (MR_Integer) 4)));
    MR_Word ml_backend__mlds_to_cs__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Export_8, (MR_Integer) 5)));

    {
      ml_backend__mlds_to_cs__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_33_33, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_5[1]));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_33_33, 1) = ((MR_Box) (ml_backend__mlds_to_cs__output_export_5_p_0_1));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_33_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_33_33, 3) = ((MR_Box) (ml_backend__mlds_to_cs__Lang_10));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_33_33, 4) = ((MR_Box) ((MR_Integer) 1));
    }
    {
      mercury__require__expect_4_p_0(ml_backend__mlds_to_cs__V_33_33, (MR_String) "ml_backend.mlds_to_cs", (MR_String) "predicate \140ml_backend.mlds_to_cs.output_export\'/5", (MR_String) "foreign_export for language other than C#.");
    }
    {
      ml_backend__mlds_to_cs__indent_line_3_p_0(ml_backend__mlds_to_cs__Indent_7);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "public static ");
    }
    {
      mercury__io__nl_2_p_0();
    }
    {
      ml_backend__mlds_to_cs__indent_line_3_p_0(ml_backend__mlds_to_cs__Indent_7);
    }
    if ((ml_backend__mlds_to_cs__ReturnTypes_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__io__write_string_3_p_0((MR_String) "void ");
        }
      }
    else
      {
        MR_Word ml_backend__mlds_to_cs__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__ReturnTypes_17, (MR_Integer) 1)));
        MR_Word ml_backend__mlds_to_cs__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__ReturnTypes_17, (MR_Integer) 0)));

        if ((ml_backend__mlds_to_cs__V_81_81 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              ml_backend__mlds_to_cs__output_type_4_p_0(ml_backend__mlds_to_cs__Info_6, ml_backend__mlds_to_cs__V_82_82);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) " ");
            }
          }
        else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "ml_backend.mlds_to_cs", (MR_String) "predicate \140ml_backend.mlds_to_cs.output_export\'/5", (MR_String) "multiple return values in export method");
              return;
            }
          }
      }
    {
      mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__ExportName_11);
    }
    ml_backend__mlds_to_cs__V_54_54 = (ml_backend__mlds_to_cs__Indent_7 + (MR_Integer) 1);
    {
      ml_backend__mlds_to_cs__output_params_5_p_0(ml_backend__mlds_to_cs__Info_6, ml_backend__mlds_to_cs__V_54_54, ml_backend__mlds_to_cs__Parameters_16);
    }
    {
      mercury__io__nl_2_p_0();
    }
    {
      ml_backend__mlds_to_cs__indent_line_3_p_0(ml_backend__mlds_to_cs__Indent_7);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "{\n");
    }
    ml_backend__mlds_to_cs__V_61_61 = (ml_backend__mlds_to_cs__Indent_7 + (MR_Integer) 1);
    {
      ml_backend__mlds_to_cs__indent_line_3_p_0(ml_backend__mlds_to_cs__V_61_61);
    }
    ml_backend__mlds_to_cs__TypeCtorInfo_80_80 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0;
    {
      mercury__list__filter_4_p_0(ml_backend__mlds_to_cs__TypeCtorInfo_80_80, (MR_Word) &ml_backend__mlds_to_cs_scalar_common_2[6], ml_backend__mlds_to_cs__Parameters_16, &ml_backend__mlds_to_cs__OutArgs_22, &ml_backend__mlds_to_cs__InArgs_23);
    }
    if ((ml_backend__mlds_to_cs__ReturnTypes_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((ml_backend__mlds_to_cs__OutArgs_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        ml_backend__mlds_to_cs__RestOutArgs_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      else
        {
          MR_Word ml_backend__mlds_to_cs__FirstOutArg_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__OutArgs_22, (MR_Integer) 0)));
          MR_Word ml_backend__mlds_to_cs__FirstOutArgName_26;
          MR_Word ml_backend__mlds_to_cs__V_27_27;
          MR_Word ml_backend__mlds_to_cs__V_28_28;

          ml_backend__mlds_to_cs__RestOutArgs_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__OutArgs_22, (MR_Integer) 1)));
          ml_backend__mlds_to_cs__FirstOutArgName_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__FirstOutArg_25, (MR_Integer) 0)));
          ml_backend__mlds_to_cs__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__FirstOutArg_25, (MR_Integer) 1)));
          ml_backend__mlds_to_cs__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__FirstOutArg_25, (MR_Integer) 2)));
          {
            ml_backend__mlds_to_cs__output_name_3_p_0(ml_backend__mlds_to_cs__FirstOutArgName_26);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) " = ");
          }
        }
    else
      {
        MR_Word ml_backend__mlds_to_cs__RetTypeB_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__ReturnTypes_17, (MR_Integer) 0)));
        MR_Word ml_backend__mlds_to_cs__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__ReturnTypes_17, (MR_Integer) 1)));

        {
          mercury__io__write_string_3_p_0((MR_String) "return (");
        }
        {
          ml_backend__mlds_to_cs__output_type_4_p_0(ml_backend__mlds_to_cs__Info_6, ml_backend__mlds_to_cs__RetTypeB_29);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ") ");
        }
        ml_backend__mlds_to_cs__RestOutArgs_24 = ml_backend__mlds_to_cs__OutArgs_22;
      }
    {
      ml_backend__mlds_to_cs__V_73_73 = mercury__list__f_43_43_2_f_0(ml_backend__mlds_to_cs__TypeCtorInfo_80_80, ml_backend__mlds_to_cs__InArgs_23, ml_backend__mlds_to_cs__RestOutArgs_24);
    }
    {
      ml_backend__mlds_to_cs__write_export_call_4_p_0(ml_backend__mlds_to_cs__MLDS_Name_12, ml_backend__mlds_to_cs__V_73_73);
    }
    {
      ml_backend__mlds_to_cs__indent_line_3_p_0(ml_backend__mlds_to_cs__Indent_7);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "}\n");
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_exports_5_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3)
{
  {
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;

    {
      ml_backend__mlds_to_cs__output_export_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_exports_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_6,
  MR_Integer ml_backend__mlds_to_cs__Indent_7,
  MR_Word ml_backend__mlds_to_cs__Exports_8)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Word ml_backend__mlds_to_cs__V_12_12;
    MR_Box ml_backend__mlds_to_cs__conv0_STATE_VARIABLE_IO_11;

    {
      ml_backend__mlds_to_cs__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_12_12, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_4[2]));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_12_12, 1) = ((MR_Box) (ml_backend__mlds_to_cs__output_exports_5_p_0_1));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_12_12, 3) = ((MR_Box) (ml_backend__mlds_to_cs__Info_6));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_12_12, 4) = ((MR_Box) (ml_backend__mlds_to_cs__Indent_7));
    }
    {
      mercury__list__foldl_4_p_2((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_pragma_export_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, ml_backend__mlds_to_cs__V_12_12, ml_backend__mlds_to_cs__Exports_8, ((MR_Box) ((MR_Integer) 0)), &ml_backend__mlds_to_cs__conv0_STATE_VARIABLE_IO_11);
    }
  }
}

static MR_Word MR_CALL 
ml_backend__mlds_to_cs__mlds_get_csharp_foreign_code_1_f_0(
  MR_Word ml_backend__mlds_to_cs__AllForeignCode_3)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Word ml_backend__mlds_to_cs__ForeignCode_4;
    MR_Word ml_backend__mlds_to_cs__ForeignCode0_5;
    MR_Box ml_backend__mlds_to_cs__conv0_ForeignCode0_5;

    {
      ml_backend__mlds_to_cs__succeeded = mercury__map__search_3_p_0((MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_foreign_code_0, ml_backend__mlds_to_cs__AllForeignCode_3, ((MR_Box) ((MR_Integer) 1)), &ml_backend__mlds_to_cs__conv0_ForeignCode0_5);
    }
    if (ml_backend__mlds_to_cs__succeeded)
      {
        ml_backend__mlds_to_cs__ForeignCode0_5 = ((MR_Word) ml_backend__mlds_to_cs__conv0_ForeignCode0_5);
        ml_backend__mlds_to_cs__succeeded = MR_TRUE;
      }
    if (ml_backend__mlds_to_cs__succeeded)
      ml_backend__mlds_to_cs__ForeignCode_4 = ml_backend__mlds_to_cs__ForeignCode0_5;
    else
      ml_backend__mlds_to_cs__ForeignCode_4 = (MR_Word) &ml_backend__mlds_to_cs_scalar_common_3[0];
    return ml_backend__mlds_to_cs__ForeignCode_4;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_csharp_body_code_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_6,
  MR_Integer ml_backend__mlds_to_cs__Indent_7,
  MR_Word ml_backend__mlds_to_cs__ForeignBodyCode_8)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Word ml_backend__mlds_to_cs__Lang_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__ForeignBodyCode_8, (MR_Integer) 0)));
    MR_Word ml_backend__mlds_to_cs__LiteralOrInclude_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__ForeignBodyCode_8, (MR_Integer) 1)));
    MR_Word ml_backend__mlds_to_cs__Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__ForeignBodyCode_8, (MR_Integer) 2)));

    switch (ml_backend__mlds_to_cs__Lang_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 3:
      case (MR_Integer) 2:
        {
          {
            mercury__require__sorry_3_p_0((MR_String) "ml_backend.mlds_to_cs", (MR_String) "predicate \140ml_backend.mlds_to_cs.output_csharp_body_code\'/5", (MR_String) "foreign code other than C#");
            return;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__mlds_to_cs__V_39_39;
          MR_String ml_backend__mlds_to_cs__V_76_76 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 3)));
          MR_Word ml_backend__mlds_to_cs__V_78_78 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
          MR_Word ml_backend__mlds_to_cs__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 6)));
          MR_Word ml_backend__mlds_to_cs__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 5)));
          MR_Word ml_backend__mlds_to_cs__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 4)));
          MR_Word ml_backend__mlds_to_cs__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 2)));
          MR_Word ml_backend__mlds_to_cs__V_79_79 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          MR_Word ml_backend__mlds_to_cs__V_80_80 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 1)))) & (MR_Integer) 1);
          MR_Word ml_backend__mlds_to_cs__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 0)));
          MR_Word ml_backend__mlds_to_cs__V_65_65;
          MR_Word ml_backend__mlds_to_cs__V_66_66;
          MR_Word ml_backend__mlds_to_cs__V_67_67;
          MR_Word ml_backend__mlds_to_cs__V_68_68;
          MR_String ml_backend__mlds_to_cs__V_69_69;
          MR_Word ml_backend__mlds_to_cs__V_70_70;
          MR_Word ml_backend__mlds_to_cs__V_71_71;
          MR_Word ml_backend__mlds_to_cs__V_72_72;

          if (((MR_tag((MR_Word) ml_backend__mlds_to_cs__LiteralOrInclude_11)) == (MR_mktag((MR_Integer) 1))))
            {
              MR_String ml_backend__mlds_to_cs__IncludeFileName_27 = ((MR_String) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__LiteralOrInclude_11, (MR_Integer) 0)));
              MR_String ml_backend__mlds_to_cs__IncludePath_29;
              MR_Word ml_backend__mlds_to_cs__V_30_30;
              MR_Word ml_backend__mlds_to_cs__V_31_31;
              MR_Word ml_backend__mlds_to_cs__V_57_57;
              MR_Word ml_backend__mlds_to_cs__V_58_58;
              MR_Word ml_backend__mlds_to_cs__V_59_59;
              MR_Word ml_backend__mlds_to_cs__V_60_60;
              MR_String ml_backend__mlds_to_cs__V_61_61;
              MR_Word ml_backend__mlds_to_cs__V_62_62;
              MR_Word ml_backend__mlds_to_cs__V_63_63;
              MR_Word ml_backend__mlds_to_cs__V_64_64;

              {
                parse_tree__file_names__make_include_file_path_3_p_0(ml_backend__mlds_to_cs__V_76_76, ml_backend__mlds_to_cs__IncludeFileName_27, &ml_backend__mlds_to_cs__IncludePath_29);
              }
              ml_backend__mlds_to_cs__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 0)));
              ml_backend__mlds_to_cs__V_58_58 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 1)))) & (MR_Integer) 1);
              ml_backend__mlds_to_cs__V_59_59 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              ml_backend__mlds_to_cs__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
              ml_backend__mlds_to_cs__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 2)));
              ml_backend__mlds_to_cs__V_61_61 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 3)));
              ml_backend__mlds_to_cs__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 4)));
              ml_backend__mlds_to_cs__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 5)));
              ml_backend__mlds_to_cs__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 6)));
              {
                ml_backend__mlds_to_cs__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_31_31, 0) = ((MR_Box) (ml_backend__mlds_to_cs__IncludePath_29));
                MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_31_31, 1) = ((MR_Box) ((MR_Integer) 1));
              }
              {
                ml_backend__mlds_to_cs__cs_output_context_4_p_0(ml_backend__mlds_to_cs__V_30_30, ml_backend__mlds_to_cs__V_31_31);
              }
              {
                libs__file_util__write_include_file_contents_3_p_0(ml_backend__mlds_to_cs__IncludePath_29);
              }
            }
          else
            {
              MR_String ml_backend__mlds_to_cs__Code_26 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__LiteralOrInclude_11, (MR_Integer) 0)));

              {
                ml_backend__mlds_to_cs__indent_line_prog_context_5_p_0(ml_backend__mlds_to_cs__V_78_78, ml_backend__mlds_to_cs__Context_12, ml_backend__mlds_to_cs__Indent_7);
              }
              {
                mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__Code_26);
              }
            }
          {
            mercury__io__nl_2_p_0();
          }
          ml_backend__mlds_to_cs__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 0)));
          ml_backend__mlds_to_cs__V_66_66 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 1)))) & (MR_Integer) 1);
          ml_backend__mlds_to_cs__V_67_67 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          ml_backend__mlds_to_cs__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
          ml_backend__mlds_to_cs__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 2)));
          ml_backend__mlds_to_cs__V_69_69 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 3)));
          ml_backend__mlds_to_cs__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 4)));
          ml_backend__mlds_to_cs__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 5)));
          ml_backend__mlds_to_cs__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 6)));
          switch (ml_backend__mlds_to_cs__V_39_39) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
              }
              break;
            case (MR_Integer) 1:
              {
                {
                  mercury__io__write_string_3_p_0((MR_String) "#line default\n");
                }
              }
              break;
          }
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_csharp_decl_5_p_0(
  MR_Word ml_backend__mlds_to_cs__Info_6,
  MR_Integer ml_backend__mlds_to_cs__Indent_7,
  MR_Word ml_backend__mlds_to_cs__DeclCode_8)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Word ml_backend__mlds_to_cs__Lang_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__DeclCode_8, (MR_Integer) 0)));
    MR_Word ml_backend__mlds_to_cs__LiteralOrInclude_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__DeclCode_8, (MR_Integer) 2)));
    MR_Word ml_backend__mlds_to_cs__Context_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__DeclCode_8, (MR_Integer) 3)));
    MR_Word ml_backend__mlds_to_cs___IsLocal_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__DeclCode_8, (MR_Integer) 1)));

    switch (ml_backend__mlds_to_cs__Lang_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 3:
      case (MR_Integer) 2:
        {
          {
            mercury__require__sorry_3_p_0((MR_String) "ml_backend.mlds_to_cs", (MR_String) "predicate \140ml_backend.mlds_to_cs.output_csharp_decl\'/5", (MR_String) "foreign decl other than C#");
            return;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__mlds_to_cs__V_40_40;
          MR_String ml_backend__mlds_to_cs__V_77_77 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 3)));
          MR_Word ml_backend__mlds_to_cs__V_79_79 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
          MR_Word ml_backend__mlds_to_cs__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 6)));
          MR_Word ml_backend__mlds_to_cs__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 5)));
          MR_Word ml_backend__mlds_to_cs__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 4)));
          MR_Word ml_backend__mlds_to_cs__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 2)));
          MR_Word ml_backend__mlds_to_cs__V_80_80 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          MR_Word ml_backend__mlds_to_cs__V_81_81 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 1)))) & (MR_Integer) 1);
          MR_Word ml_backend__mlds_to_cs__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 0)));
          MR_Word ml_backend__mlds_to_cs__V_66_66;
          MR_Word ml_backend__mlds_to_cs__V_67_67;
          MR_Word ml_backend__mlds_to_cs__V_68_68;
          MR_Word ml_backend__mlds_to_cs__V_69_69;
          MR_String ml_backend__mlds_to_cs__V_70_70;
          MR_Word ml_backend__mlds_to_cs__V_71_71;
          MR_Word ml_backend__mlds_to_cs__V_72_72;
          MR_Word ml_backend__mlds_to_cs__V_73_73;

          if (((MR_tag((MR_Word) ml_backend__mlds_to_cs__LiteralOrInclude_12)) == (MR_mktag((MR_Integer) 1))))
            {
              MR_String ml_backend__mlds_to_cs__IncludeFileName_28 = ((MR_String) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__LiteralOrInclude_12, (MR_Integer) 0)));
              MR_String ml_backend__mlds_to_cs__IncludePath_30;
              MR_Word ml_backend__mlds_to_cs__V_31_31;
              MR_Word ml_backend__mlds_to_cs__V_32_32;
              MR_Word ml_backend__mlds_to_cs__V_58_58;
              MR_Word ml_backend__mlds_to_cs__V_59_59;
              MR_Word ml_backend__mlds_to_cs__V_60_60;
              MR_Word ml_backend__mlds_to_cs__V_61_61;
              MR_String ml_backend__mlds_to_cs__V_62_62;
              MR_Word ml_backend__mlds_to_cs__V_63_63;
              MR_Word ml_backend__mlds_to_cs__V_64_64;
              MR_Word ml_backend__mlds_to_cs__V_65_65;

              {
                parse_tree__file_names__make_include_file_path_3_p_0(ml_backend__mlds_to_cs__V_77_77, ml_backend__mlds_to_cs__IncludeFileName_28, &ml_backend__mlds_to_cs__IncludePath_30);
              }
              ml_backend__mlds_to_cs__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 0)));
              ml_backend__mlds_to_cs__V_59_59 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 1)))) & (MR_Integer) 1);
              ml_backend__mlds_to_cs__V_60_60 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              ml_backend__mlds_to_cs__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
              ml_backend__mlds_to_cs__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 2)));
              ml_backend__mlds_to_cs__V_62_62 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 3)));
              ml_backend__mlds_to_cs__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 4)));
              ml_backend__mlds_to_cs__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 5)));
              ml_backend__mlds_to_cs__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 6)));
              {
                ml_backend__mlds_to_cs__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_32_32, 0) = ((MR_Box) (ml_backend__mlds_to_cs__IncludePath_30));
                MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_32_32, 1) = ((MR_Box) ((MR_Integer) 1));
              }
              {
                ml_backend__mlds_to_cs__cs_output_context_4_p_0(ml_backend__mlds_to_cs__V_31_31, ml_backend__mlds_to_cs__V_32_32);
              }
              {
                libs__file_util__write_include_file_contents_3_p_0(ml_backend__mlds_to_cs__IncludePath_30);
              }
            }
          else
            {
              MR_String ml_backend__mlds_to_cs__Code_27 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__LiteralOrInclude_12, (MR_Integer) 0)));

              {
                ml_backend__mlds_to_cs__indent_line_prog_context_5_p_0(ml_backend__mlds_to_cs__V_79_79, ml_backend__mlds_to_cs__Context_13, ml_backend__mlds_to_cs__Indent_7);
              }
              {
                mercury__io__write_string_3_p_0(ml_backend__mlds_to_cs__Code_27);
              }
            }
          {
            mercury__io__nl_2_p_0();
          }
          ml_backend__mlds_to_cs__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 0)));
          ml_backend__mlds_to_cs__V_67_67 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 1)))) & (MR_Integer) 1);
          ml_backend__mlds_to_cs__V_68_68 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          ml_backend__mlds_to_cs__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
          ml_backend__mlds_to_cs__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 2)));
          ml_backend__mlds_to_cs__V_70_70 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 3)));
          ml_backend__mlds_to_cs__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 4)));
          ml_backend__mlds_to_cs__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 5)));
          ml_backend__mlds_to_cs__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Info_6, (MR_Integer) 6)));
          switch (ml_backend__mlds_to_cs__V_40_40) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
              }
              break;
            case (MR_Integer) 1:
              {
                {
                  mercury__io__write_string_3_p_0((MR_String) "#line default\n");
                }
              }
              break;
          }
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_cs__output_csharp_src_file_5_p_0_5(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;

    {
      ml_backend__mlds_to_cs__succeeded = ml_backend__mlds_to_cs__defn_is_data_1_p_0(((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_1));
    }
    return ml_backend__mlds_to_cs__succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_cs__output_csharp_src_file_5_p_0_4(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;

    {
      ml_backend__mlds_to_cs__succeeded = ml_backend__mlds_to_cs__defn_is_rtti_data_1_p_0(((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_1));
    }
    return ml_backend__mlds_to_cs__succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_csharp_src_file_5_p_0_3(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3)
{
  {
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;

    {
      ml_backend__mlds_to_cs__output_csharp_body_code_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_csharp_src_file_5_p_0_2(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_2,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_3)
{
  {
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;
    MR_Word ml_backend__mlds_to_cs__conv1_STATE_VARIABLE_CodeAddrs_7;

    {
      ml_backend__mlds_to_cs__find_pointer_addressed_methods_in_scalars_3_p_0(((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_1), ((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_2), &ml_backend__mlds_to_cs__conv1_STATE_VARIABLE_CodeAddrs_7);
    }
    *ml_backend__mlds_to_cs__wrapper_arg_3 = ((MR_Box) (ml_backend__mlds_to_cs__conv1_STATE_VARIABLE_CodeAddrs_7));
  }
}

static MR_Box MR_CALL 
ml_backend__mlds_to_cs__output_csharp_src_file_5_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1)
{
  {
    MR_Box ml_backend__mlds_to_cs__wrapper_arg_2;
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;
    MR_Word ml_backend__mlds_to_cs__conv0_LambdaHeadVar__2_49;

    {
      ml_backend__mlds_to_cs__conv0_LambdaHeadVar__2_49 = ml_backend__mlds_to_cs__IntroducedFrom__func__output_csharp_src_file__154__1_1_f_0(((MR_Word) ml_backend__mlds_to_cs__wrapper_arg_1));
    }
    ml_backend__mlds_to_cs__wrapper_arg_2 = ((MR_Box) (ml_backend__mlds_to_cs__conv0_LambdaHeadVar__2_49));
    return ml_backend__mlds_to_cs__wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_csharp_src_file_5_p_0(
  MR_Word ml_backend__mlds_to_cs__ModuleInfo_6,
  MR_Integer ml_backend__mlds_to_cs__Indent_7,
  MR_Word ml_backend__mlds_to_cs__MLDS_8)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Word ml_backend__mlds_to_cs__TypeCtorInfo_129_129;
    MR_Word ml_backend__mlds_to_cs__TypeCtorInfo_133_133;
    MR_Word ml_backend__mlds_to_cs__TypeInfo_134_134;
    MR_Word ml_backend__mlds_to_cs__ModuleName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__MLDS_8, (MR_Integer) 0)));
    MR_Word ml_backend__mlds_to_cs__AllForeignCode_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__MLDS_8, (MR_Integer) 1)));
    MR_Word ml_backend__mlds_to_cs__GlobalData_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__MLDS_8, (MR_Integer) 3)));
    MR_Word ml_backend__mlds_to_cs__Defns0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__MLDS_8, (MR_Integer) 4)));
    MR_Word ml_backend__mlds_to_cs__InitPreds_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__MLDS_8, (MR_Integer) 5)));
    MR_Word ml_backend__mlds_to_cs__FinalPreds_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__MLDS_8, (MR_Integer) 6)));
    MR_Word ml_backend__mlds_to_cs__ExportedEnums_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__MLDS_8, (MR_Integer) 7)));
    MR_Word ml_backend__mlds_to_cs__ScalarCellGroupMap_18;
    MR_Word ml_backend__mlds_to_cs__VectorCellGroupMap_19;
    MR_Word ml_backend__mlds_to_cs__GlobalDefns_21;
    MR_Word ml_backend__mlds_to_cs__Defns_22;
    MR_Word ml_backend__mlds_to_cs__CodeAddrs_23;
    MR_Word ml_backend__mlds_to_cs__ScalarCellGroups_24;
    MR_Word ml_backend__mlds_to_cs__ScalarCellRows_25;
    MR_Word ml_backend__mlds_to_cs__ForeignCode_28;
    MR_Word ml_backend__mlds_to_cs__ForeignDeclCodes_29;
    MR_Word ml_backend__mlds_to_cs__ForeignBodyCodes_30;
    MR_Word ml_backend__mlds_to_cs__ExportDefns_32;
    MR_Word ml_backend__mlds_to_cs__Globals_33;
    MR_String ml_backend__mlds_to_cs__SourceFileName_34;
    MR_Word ml_backend__mlds_to_cs__Info_35;
    MR_Word ml_backend__mlds_to_cs__RttiDefns_36;
    MR_Word ml_backend__mlds_to_cs__NonRttiDefns_37;
    MR_Word ml_backend__mlds_to_cs__DataDefns_38;
    MR_Word ml_backend__mlds_to_cs__NonDataDefns_39;
    MR_Word ml_backend__mlds_to_cs__StaticCtorCalls_40;
    MR_Word ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_43_43;
    MR_Word ml_backend__mlds_to_cs__V_45_45;
    MR_Word ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_46_46;
    MR_Word ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_51_51;
    MR_Word ml_backend__mlds_to_cs__V_55_55;
    MR_Integer ml_backend__mlds_to_cs__V_61_61;
    MR_Integer ml_backend__mlds_to_cs__V_65_65;
    MR_Integer ml_backend__mlds_to_cs__V_71_71;
    MR_Integer ml_backend__mlds_to_cs__V_74_74;
    MR_Integer ml_backend__mlds_to_cs__V_79_79;
    MR_Integer ml_backend__mlds_to_cs__V_84_84;
    MR_Integer ml_backend__mlds_to_cs__V_89_89;
    MR_Integer ml_backend__mlds_to_cs__V_94_94;
    MR_Integer ml_backend__mlds_to_cs__V_100_100;
    MR_Integer ml_backend__mlds_to_cs__V_105_105;
    MR_Integer ml_backend__mlds_to_cs__V_110_110;
    MR_Word ml_backend__mlds_to_cs__V_114_114;
    MR_Word ml_backend__mlds_to_cs__V_116_116;
    MR_Word ml_backend__mlds_to_cs__V_118_118;
    MR_Integer ml_backend__mlds_to_cs__V_120_120;
    MR_Word ml_backend__mlds_to_cs__Imports_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__MLDS_8, (MR_Integer) 2)));
    MR_Word ml_backend__mlds_to_cs___AllocIdMap_20;
    MR_Box ml_backend__mlds_to_cs__conv2_STATE_VARIABLE_CodeAddrs_51_51;
    MR_Integer ml_backend__mlds_to_cs__V_27_27;
    MR_Word ml_backend__mlds_to_cs___Imports_31;

    {
      ml_backend__ml_global_data__ml_global_data_get_all_global_defns_5_p_0(ml_backend__mlds_to_cs__GlobalData_13, &ml_backend__mlds_to_cs__ScalarCellGroupMap_18, &ml_backend__mlds_to_cs__VectorCellGroupMap_19, &ml_backend__mlds_to_cs___AllocIdMap_20, &ml_backend__mlds_to_cs__GlobalDefns_21);
    }
    ml_backend__mlds_to_cs__TypeCtorInfo_129_129 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0;
    {
      ml_backend__mlds_to_cs__Defns_22 = mercury__list__f_43_43_2_f_0(ml_backend__mlds_to_cs__TypeCtorInfo_129_129, ml_backend__mlds_to_cs__GlobalDefns_21, ml_backend__mlds_to_cs__Defns0_14);
    }
    {
      ml_backend__mlds_to_cs__V_45_45 = mercury__map__init_0_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_code_addr_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
    }
    {
      ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_43_43, 0) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_43_43, 1) = ((MR_Box) (ml_backend__mlds_to_cs__V_45_45));
    }
    {
      ml_backend__mlds_to_cs__find_pointer_addressed_methods_3_p_0(ml_backend__mlds_to_cs__Defns_22, ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_43_43, &ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_46_46);
    }
    ml_backend__mlds_to_cs__TypeCtorInfo_133_133 = (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_group_0;
    {
      mercury__map__values_2_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0, ml_backend__mlds_to_cs__TypeCtorInfo_133_133, ml_backend__mlds_to_cs__ScalarCellGroupMap_18, &ml_backend__mlds_to_cs__ScalarCellGroups_24);
    }
    ml_backend__mlds_to_cs__TypeInfo_134_134 = (MR_Word) &ml_backend__mlds_to_cs_scalar_common_1[0];
    {
      ml_backend__mlds_to_cs__ScalarCellRows_25 = mercury__list__map_2_f_0(ml_backend__mlds_to_cs__TypeCtorInfo_133_133, ml_backend__mlds_to_cs__TypeInfo_134_134, (MR_Word) &ml_backend__mlds_to_cs_scalar_common_2[2], ml_backend__mlds_to_cs__ScalarCellGroups_24);
    }
    {
      mercury__list__foldl_4_p_0(ml_backend__mlds_to_cs__TypeInfo_134_134, (MR_Word) &ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__type_ctor_info_code_addr_map_0, (MR_Word) &ml_backend__mlds_to_cs_scalar_common_2[3], ml_backend__mlds_to_cs__ScalarCellRows_25, ((MR_Box) (ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_46_46)), &ml_backend__mlds_to_cs__conv2_STATE_VARIABLE_CodeAddrs_51_51);
    }
    ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_51_51 = ((MR_Word) ml_backend__mlds_to_cs__conv2_STATE_VARIABLE_CodeAddrs_51_51);
    ml_backend__mlds_to_cs__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_51_51, (MR_Integer) 0)));
    ml_backend__mlds_to_cs__CodeAddrs_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__STATE_VARIABLE_CodeAddrs_51_51, (MR_Integer) 1)));
    {
      ml_backend__mlds_to_cs__ForeignCode_28 = ml_backend__mlds_to_cs__mlds_get_csharp_foreign_code_1_f_0(ml_backend__mlds_to_cs__AllForeignCode_11);
    }
    ml_backend__mlds_to_cs__ForeignDeclCodes_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__ForeignCode_28, (MR_Integer) 0)));
    ml_backend__mlds_to_cs__ForeignBodyCodes_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__ForeignCode_28, (MR_Integer) 1)));
    ml_backend__mlds_to_cs___Imports_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__ForeignCode_28, (MR_Integer) 2)));
    ml_backend__mlds_to_cs__ExportDefns_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__ForeignCode_28, (MR_Integer) 3)));
    {
      hlds__hlds_module__module_info_get_globals_2_p_0(ml_backend__mlds_to_cs__ModuleInfo_6, &ml_backend__mlds_to_cs__Globals_33);
    }
    {
      parse_tree__file_names__module_source_filename_5_p_0(ml_backend__mlds_to_cs__Globals_33, ml_backend__mlds_to_cs__ModuleName_10, &ml_backend__mlds_to_cs__SourceFileName_34);
    }
    {
      ml_backend__mlds_to_cs__Info_35 = ml_backend__mlds_to_cs__init_csharp_out_info_3_f_0(ml_backend__mlds_to_cs__ModuleInfo_6, ml_backend__mlds_to_cs__SourceFileName_34, ml_backend__mlds_to_cs__CodeAddrs_23);
    }
    {
      ml_backend__mlds_to_cs__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_114_99_95_115_116_97_114_116_95_95_91_52_93_95_48_8_p_0(ml_backend__mlds_to_cs__Info_35, ml_backend__mlds_to_cs__Indent_7, ml_backend__mlds_to_cs__ModuleName_10, ml_backend__mlds_to_cs__ForeignDeclCodes_29, ml_backend__mlds_to_cs__Defns_22);
    }
    {
      ml_backend__mlds_to_cs__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_55_55, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_4[1]));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_55_55, 1) = ((MR_Box) (ml_backend__mlds_to_cs__output_csharp_src_file_5_p_0_3));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_55_55, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_55_55, 3) = ((MR_Box) (ml_backend__mlds_to_cs__Info_35));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_55_55, 4) = ((MR_Box) (ml_backend__mlds_to_cs__Indent_7));
    }
    {
      mercury__io__write_list_5_p_0((MR_Word) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0, ml_backend__mlds_to_cs__ForeignBodyCodes_30, (MR_String) "\n", ml_backend__mlds_to_cs__V_55_55);
    }
    {
      ml_backend__mlds_to_cs__output_pragma_warning_disable_2_p_0();
    }
    {
      mercury__list__filter_4_p_0(ml_backend__mlds_to_cs__TypeCtorInfo_129_129, (MR_Word) &ml_backend__mlds_to_cs_scalar_common_2[4], ml_backend__mlds_to_cs__Defns_22, &ml_backend__mlds_to_cs__RttiDefns_36, &ml_backend__mlds_to_cs__NonRttiDefns_37);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n// RttiDefns\n");
    }
    ml_backend__mlds_to_cs__V_61_61 = (ml_backend__mlds_to_cs__Indent_7 + (MR_Integer) 1);
    {
      ml_backend__mlds_to_cs__output_defns_6_p_0(ml_backend__mlds_to_cs__Info_35, ml_backend__mlds_to_cs__V_61_61, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), ml_backend__mlds_to_cs__RttiDefns_36);
    }
    ml_backend__mlds_to_cs__V_65_65 = (ml_backend__mlds_to_cs__Indent_7 + (MR_Integer) 1);
    {
      ml_backend__mlds_to_cs__output_rtti_assignments_5_p_0(ml_backend__mlds_to_cs__Info_35, ml_backend__mlds_to_cs__V_65_65, ml_backend__mlds_to_cs__RttiDefns_36);
    }
    {
      mercury__list__filter_4_p_0(ml_backend__mlds_to_cs__TypeCtorInfo_129_129, (MR_Word) &ml_backend__mlds_to_cs_scalar_common_2[5], ml_backend__mlds_to_cs__NonRttiDefns_37, &ml_backend__mlds_to_cs__DataDefns_38, &ml_backend__mlds_to_cs__NonDataDefns_39);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n// DataDefns\n");
    }
    ml_backend__mlds_to_cs__V_71_71 = (ml_backend__mlds_to_cs__Indent_7 + (MR_Integer) 1);
    {
      ml_backend__mlds_to_cs__output_data_decls_5_p_0(ml_backend__mlds_to_cs__Info_35, ml_backend__mlds_to_cs__V_71_71, ml_backend__mlds_to_cs__DataDefns_38);
    }
    ml_backend__mlds_to_cs__V_74_74 = (ml_backend__mlds_to_cs__Indent_7 + (MR_Integer) 1);
    {
      ml_backend__mlds_to_cs__output_init_data_method_5_p_0(ml_backend__mlds_to_cs__Info_35, ml_backend__mlds_to_cs__V_74_74, ml_backend__mlds_to_cs__DataDefns_38);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n// Scalar common data\n");
    }
    ml_backend__mlds_to_cs__V_79_79 = (ml_backend__mlds_to_cs__Indent_7 + (MR_Integer) 1);
    {
      ml_backend__mlds_to_cs__output_scalar_common_data_5_p_0(ml_backend__mlds_to_cs__Info_35, ml_backend__mlds_to_cs__V_79_79, ml_backend__mlds_to_cs__ScalarCellGroupMap_18);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n// Vector common data\n");
    }
    ml_backend__mlds_to_cs__V_84_84 = (ml_backend__mlds_to_cs__Indent_7 + (MR_Integer) 1);
    {
      ml_backend__mlds_to_cs__output_vector_common_data_5_p_0(ml_backend__mlds_to_cs__Info_35, ml_backend__mlds_to_cs__V_84_84, ml_backend__mlds_to_cs__VectorCellGroupMap_19);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n// Method pointers\n");
    }
    ml_backend__mlds_to_cs__V_89_89 = (ml_backend__mlds_to_cs__Indent_7 + (MR_Integer) 1);
    {
      ml_backend__mlds_to_cs__output_method_ptr_constants_5_p_0(ml_backend__mlds_to_cs__Info_35, ml_backend__mlds_to_cs__V_89_89, ml_backend__mlds_to_cs__CodeAddrs_23);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n// NonDataDefns\n");
    }
    ml_backend__mlds_to_cs__V_94_94 = (ml_backend__mlds_to_cs__Indent_7 + (MR_Integer) 1);
    {
      ml_backend__mlds_to_cs__output_defns_6_p_0(ml_backend__mlds_to_cs__Info_35, ml_backend__mlds_to_cs__V_94_94, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__mlds_to_cs__NonDataDefns_39);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n// ExportDefns\n");
    }
    ml_backend__mlds_to_cs__V_100_100 = (ml_backend__mlds_to_cs__Indent_7 + (MR_Integer) 1);
    {
      ml_backend__mlds_to_cs__output_exports_5_p_0(ml_backend__mlds_to_cs__Info_35, ml_backend__mlds_to_cs__V_100_100, ml_backend__mlds_to_cs__ExportDefns_32);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n// ExportedEnums\n");
    }
    ml_backend__mlds_to_cs__V_105_105 = (ml_backend__mlds_to_cs__Indent_7 + (MR_Integer) 1);
    {
      ml_backend__mlds_to_cs__output_exported_enums_5_p_0(ml_backend__mlds_to_cs__Info_35, ml_backend__mlds_to_cs__V_105_105, ml_backend__mlds_to_cs__ExportedEnums_17);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n// EnvVarNames\n");
    }
    ml_backend__mlds_to_cs__V_110_110 = (ml_backend__mlds_to_cs__Indent_7 + (MR_Integer) 1);
    {
      ml_backend__mlds_to_cs__output_env_vars_4_p_0(ml_backend__mlds_to_cs__V_110_110, ml_backend__mlds_to_cs__NonRttiDefns_37);
    }
    {
      ml_backend__mlds_to_cs__V_118_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__V_118_118, 0) = ((MR_Box) ((MR_String) "MR_init_vector_common_data"));
      MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__V_118_118, 1) = ((MR_Box) (ml_backend__mlds_to_cs__InitPreds_15));
    }
    {
      ml_backend__mlds_to_cs__V_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__V_116_116, 0) = ((MR_Box) ((MR_String) "MR_init_scalar_common_data"));
      MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__V_116_116, 1) = ((MR_Box) (ml_backend__mlds_to_cs__V_118_118));
    }
    {
      ml_backend__mlds_to_cs__V_114_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__V_114_114, 0) = ((MR_Box) ((MR_String) "MR_init_data"));
      MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__V_114_114, 1) = ((MR_Box) (ml_backend__mlds_to_cs__V_116_116));
    }
    {
      ml_backend__mlds_to_cs__StaticCtorCalls_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__StaticCtorCalls_40, 0) = ((MR_Box) ((MR_String) "MR_init_rtti"));
      MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__StaticCtorCalls_40, 1) = ((MR_Box) (ml_backend__mlds_to_cs__V_114_114));
    }
    ml_backend__mlds_to_cs__V_120_120 = (ml_backend__mlds_to_cs__Indent_7 + (MR_Integer) 1);
    {
      ml_backend__mlds_to_cs__output_static_constructor_6_p_0(ml_backend__mlds_to_cs__ModuleName_10, ml_backend__mlds_to_cs__V_120_120, ml_backend__mlds_to_cs__StaticCtorCalls_40, ml_backend__mlds_to_cs__FinalPreds_16);
    }
    {
      ml_backend__mlds_to_cs__output_src_end_4_p_0(ml_backend__mlds_to_cs__Indent_7, ml_backend__mlds_to_cs__ModuleName_10);
    }
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_cs__defn_is_data_1_p_0(
  MR_Word ml_backend__mlds_to_cs__Defn_2)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Word ml_backend__mlds_to_cs__Body_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Defn_2, (MR_Integer) 3)));
    MR_Word ml_backend__mlds_to_cs___Name_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Defn_2, (MR_Integer) 0)));
    MR_Word ml_backend__mlds_to_cs___Context_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Defn_2, (MR_Integer) 1)));
    MR_Word ml_backend__mlds_to_cs___Flags_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Defn_2, (MR_Integer) 2)));
    MR_Word ml_backend__mlds_to_cs__V_7_7;
    MR_Word ml_backend__mlds_to_cs__V_8_8;
    MR_Word ml_backend__mlds_to_cs__V_9_9;

    ml_backend__mlds_to_cs__succeeded = ((MR_tag((MR_Word) ml_backend__mlds_to_cs__Body_6)) == (MR_mktag((MR_Integer) 1)));
    if (ml_backend__mlds_to_cs__succeeded)
      {
        ml_backend__mlds_to_cs__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__Body_6, (MR_Integer) 0)));
        ml_backend__mlds_to_cs__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__Body_6, (MR_Integer) 1)));
        ml_backend__mlds_to_cs__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__Body_6, (MR_Integer) 2)));
      }
    return ml_backend__mlds_to_cs__succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_cs__defn_is_rtti_data_1_p_0(
  MR_Word ml_backend__mlds_to_cs__Defn_2)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Word ml_backend__mlds_to_cs__Body_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Defn_2, (MR_Integer) 3)));
    MR_Word ml_backend__mlds_to_cs__Type_7;
    MR_Word ml_backend__mlds_to_cs___Name_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Defn_2, (MR_Integer) 0)));
    MR_Word ml_backend__mlds_to_cs___Context_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Defn_2, (MR_Integer) 1)));
    MR_Word ml_backend__mlds_to_cs___Flags_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__Defn_2, (MR_Integer) 2)));
    MR_Word ml_backend__mlds_to_cs__V_8_8;
    MR_Word ml_backend__mlds_to_cs__V_9_9;
    MR_Word ml_backend__mlds_to_cs__V_10_10;

    ml_backend__mlds_to_cs__succeeded = ((MR_tag((MR_Word) ml_backend__mlds_to_cs__Body_6)) == (MR_mktag((MR_Integer) 1)));
    if (ml_backend__mlds_to_cs__succeeded)
      {
        ml_backend__mlds_to_cs__Type_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__Body_6, (MR_Integer) 0)));
        ml_backend__mlds_to_cs__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__Body_6, (MR_Integer) 1)));
        ml_backend__mlds_to_cs__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_cs__Body_6, (MR_Integer) 2)));
        ml_backend__mlds_to_cs__succeeded = ((((MR_tag((MR_Word) ml_backend__mlds_to_cs__Type_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Type_7, (MR_Integer) 0)))) == (MR_Integer) 7)));
        if (ml_backend__mlds_to_cs__succeeded)
          ml_backend__mlds_to_cs__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_cs__Type_7, (MR_Integer) 1)));
      }
    return ml_backend__mlds_to_cs__succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs__output_csharp_mlds_5_p_0_1(
  MR_Box ml_backend__mlds_to_cs__closure_arg,
  MR_Box ml_backend__mlds_to_cs__wrapper_arg_1,
  MR_Box * ml_backend__mlds_to_cs__wrapper_arg_2)
{
  {
    MR_Box ml_backend__mlds_to_cs__closure = ml_backend__mlds_to_cs__closure_arg;

    {
      ml_backend__mlds_to_cs__output_csharp_src_file_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__closure, (MR_Integer) 5))));
    }
  }
}

void MR_CALL 
ml_backend__mlds_to_cs__output_csharp_mlds_5_p_0(
  MR_Word ml_backend__mlds_to_cs__ModuleInfo_6,
  MR_Word ml_backend__mlds_to_cs__MLDS_7,
  MR_Word * ml_backend__mlds_to_cs__Succeeded_8)
{
  {
    MR_bool ml_backend__mlds_to_cs__succeeded;
    MR_Word ml_backend__mlds_to_cs__Globals_10;
    MR_Word ml_backend__mlds_to_cs__ModuleName_11;
    MR_String ml_backend__mlds_to_cs__SourceFile_12;
    MR_Word ml_backend__mlds_to_cs__V_19_19;

    {
      hlds__hlds_module__module_info_get_globals_2_p_0(ml_backend__mlds_to_cs__ModuleInfo_6, &ml_backend__mlds_to_cs__Globals_10);
    }
    {
      ml_backend__mlds_to_cs__ModuleName_11 = ml_backend__mlds__mlds_get_module_name_1_f_0(ml_backend__mlds_to_cs__MLDS_7);
    }
    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(ml_backend__mlds_to_cs__Globals_10, ml_backend__mlds_to_cs__ModuleName_11, (MR_String) ".cs", (MR_Integer) 0, &ml_backend__mlds_to_cs__SourceFile_12);
    }
    {
      ml_backend__mlds_to_cs__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_19_19, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_19_19, 1) = ((MR_Box) (ml_backend__mlds_to_cs__output_csharp_mlds_5_p_0_1));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_19_19, 3) = ((MR_Box) (ml_backend__mlds_to_cs__ModuleInfo_6));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_19_19, 4) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_cs__V_19_19, 5) = ((MR_Box) (ml_backend__mlds_to_cs__MLDS_7));
    }
    {
      libs__file_util__output_to_file_6_p_0(ml_backend__mlds_to_cs__Globals_10, ml_backend__mlds_to_cs__SourceFile_12, ml_backend__mlds_to_cs__V_19_19, ml_backend__mlds_to_cs__Succeeded_8);
    }
  }
}

void mercury__ml_backend__mlds_to_cs__init(void)
{
}

void mercury__ml_backend__mlds_to_cs__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__type_ctor_info_code_addr_map_0);
	MR_register_type_ctor_info(&ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__type_ctor_info_csharp_out_info_0);
	MR_register_type_ctor_info(&ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__type_ctor_info_exit_method_0);
	MR_register_type_ctor_info(&ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__type_ctor_info_exit_methods_0);
	MR_register_type_ctor_info(&ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__type_ctor_info_func_info_0);
	MR_register_type_ctor_info(&ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__type_ctor_info_indent_0);
	MR_register_type_ctor_info(&ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__type_ctor_info_output_aux_0);
	MR_register_type_ctor_info(&ml_backend__mlds_to_cs__ml_backend__mlds_to_cs__type_ctor_info_output_generics_0);
}

void mercury__ml_backend__mlds_to_cs__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ml_backend.mlds_to_cs. */
