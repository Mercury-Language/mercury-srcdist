/*
** Automatically generated from `mlds_to_managed.m'
** by the Mercury compiler,
** version rotd-2014-11-20
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


/* :- module ml_backend.mlds_to_managed. */
/* :- implementation. */

/*
INIT mercury__ml_backend__mlds_to_managed__init
ENDINIT
*/

#include "ml_backend.mlds_to_managed.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "integer.mih"
#include "io.mih"
#include "library.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "ml_backend.mih"
#include "mode_robdd.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "random.mih"
#include "recompilation.mih"
#include "require.mih"
#include "robdd.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "tree_bitset.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
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
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
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
#include "ml_backend.ilasm.mih"
#include "ml_backend.ilds.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.ml_util.mih"
#include "ml_backend.mlds.mih"
#include "ml_backend.mlds_to_il.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 152 "ml_backend.mlds_to_managed.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__mlds_to_managed__tree234__pti_tree234_2__plain_ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0__plain_ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_group_0;

#line 155 "ml_backend.mlds_to_managed.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__mlds_to_managed__tree234__pti_tree234_2__plain_ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0__plain_ml_backend__ml_global_data__type_ctor_info_ml_vector_cell_group_0;

#line 158 "ml_backend.mlds_to_managed.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_managed__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0;

#line 161 "ml_backend.mlds_to_managed.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_managed__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_argument_0;

#line 114 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_99_115_104_97_114_112_95_99_111_100_101_95_95_49_49_52_95_95_49_95_95_91_49_93_95_48_3_p_0(void);

#line 261 "mlds_to_managed.m"
static MR_bool MR_CALL 
ml_backend__mlds_to_managed__IntroducedFrom__pred__generate_method_code__261__1_1_p_0(
#line 261 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__EnvVarNames_26);

#line 213 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__IntroducedFrom__pred__generate_foreign_code__213__1_5_p_0(
#line 213 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__Globals_6,
#line 213 "mlds_to_managed.m"
  MR_String ml_backend__mlds_to_managed__SourceFileName_7,
#line 213 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__HeadVar__3_25);

#line 174 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__IntroducedFrom__pred__generate_foreign_header_code__174__1_5_p_0(
#line 174 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__Globals_6,
#line 174 "mlds_to_managed.m"
  MR_String ml_backend__mlds_to_managed__SourceFileName_7,
#line 174 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__HeadVar__3_27);

#line 114 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__IntroducedFrom__pred__output_csharp_code__114__1_3_p_0(
#line 114 "mlds_to_managed.m"
  MR_String ml_backend__mlds_to_managed__HeadVar__1_77);

#line 94 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__IntroducedFrom__pred__output_csharp_code__94__1_4_p_0(
#line 94 "mlds_to_managed.m"
  MR_String ml_backend__mlds_to_managed__NameSpaceFmtStr_24,
#line 94 "mlds_to_managed.m"
  MR_String ml_backend__mlds_to_managed__HeadVar__2_51);

#line 76 "mlds_to_managed.m"
static MR_bool MR_CALL 
ml_backend__mlds_to_managed__IntroducedFrom__pred__output_csharp_code__76__1_1_p_0(
#line 76 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__VectorCellGroupMap_17);

#line 74 "mlds_to_managed.m"
static MR_bool MR_CALL 
ml_backend__mlds_to_managed__IntroducedFrom__pred__output_csharp_code__74__1_1_p_0(
#line 74 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__ScalarCellGroupMap_16);

#line 754 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__write_class_name_3_p_0_1(
#line 754 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__closure_arg,
#line 754 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_1,
#line 754 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_2,
#line 754 "mlds_to_managed.m"
  MR_Box * ml_backend__mlds_to_managed__wrapper_arg_3);

#line 751 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__write_class_name_3_p_0(
#line 751 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__HeadVar__1_1);

#line 698 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__write_csharp_initializer_3_p_0(
#line 698 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__HeadVar__1_1);

#line 636 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__write_il_simple_type_as_foreign_type_3_p_0(
#line 636 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__HeadVar__1_1);

#line 624 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__write_il_type_modifier_as_foreign_type_3_p_0(
#line 624 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__HeadVar__1_1);

#line 621 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__write_il_type_as_foreign_type_3_p_0_1(
#line 621 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__closure_arg,
#line 621 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_1,
#line 621 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_2,
#line 621 "mlds_to_managed.m"
  MR_Box * ml_backend__mlds_to_managed__wrapper_arg_3);

#line 617 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__write_il_type_as_foreign_type_3_p_0(
#line 617 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__HeadVar__1_1);

#line 621 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__write_input_arg_as_foreign_type_4_p_0_1(
#line 621 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__closure_arg,
#line 621 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_1,
#line 621 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_2,
#line 621 "mlds_to_managed.m"
  MR_Box * ml_backend__mlds_to_managed__wrapper_arg_3);

#line 589 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__write_input_arg_as_foreign_type_4_p_0(
#line 589 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__DataRep_5,
#line 589 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__Arg_6);

#line 621 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__write_defn_decl_4_p_0_1(
#line 621 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__closure_arg,
#line 621 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_1,
#line 621 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_2,
#line 621 "mlds_to_managed.m"
  MR_Box * ml_backend__mlds_to_managed__wrapper_arg_3);

#line 565 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__write_defn_decl_4_p_0(
#line 565 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__DataRep_5,
#line 565 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__Defn_6);

#line 531 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__write_lval_4_p_0(
#line 531 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__DataRep_5,
#line 531 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__Lval_6);

#line 485 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__write_rval_const_3_p_0(
#line 485 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__HeadVar__1_1);

#line 621 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__write_rval_4_p_0_1(
#line 621 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__closure_arg,
#line 621 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_1,
#line 621 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_2,
#line 621 "mlds_to_managed.m"
  MR_Box * ml_backend__mlds_to_managed__wrapper_arg_3);

#line 425 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__write_rval_4_p_0(
#line 425 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__DataRep_5,
#line 425 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__Rval_6);

#line 368 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__write_outline_arg_final_4_p_0(
#line 368 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__DataRep_5,
#line 368 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__OutlineArg_6);

#line 621 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__write_outline_arg_init_4_p_0_2(
#line 621 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__closure_arg,
#line 621 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_1,
#line 621 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_2,
#line 621 "mlds_to_managed.m"
  MR_Box * ml_backend__mlds_to_managed__wrapper_arg_3);

#line 621 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__write_outline_arg_init_4_p_0_1(
#line 621 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__closure_arg,
#line 621 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_1,
#line 621 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_2,
#line 621 "mlds_to_managed.m"
  MR_Box * ml_backend__mlds_to_managed__wrapper_arg_3);

#line 343 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__write_outline_arg_init_4_p_0(
#line 343 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__DataRep_5,
#line 343 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__OutlineArg_6);

#line 318 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__write_statement_6_p_0_4(
#line 318 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__closure_arg,
#line 318 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_1,
#line 318 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_2,
#line 318 "mlds_to_managed.m"
  MR_Box * ml_backend__mlds_to_managed__wrapper_arg_3);

#line 316 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__write_statement_6_p_0_3(
#line 316 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__closure_arg,
#line 316 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_1,
#line 316 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_2,
#line 316 "mlds_to_managed.m"
  MR_Box * ml_backend__mlds_to_managed__wrapper_arg_3);

#line 312 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__write_statement_6_p_0_2(
#line 312 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__closure_arg,
#line 312 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_1,
#line 312 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_2,
#line 312 "mlds_to_managed.m"
  MR_Box * ml_backend__mlds_to_managed__wrapper_arg_3);

#line 307 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__write_statement_6_p_0_1(
#line 307 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__closure_arg,
#line 307 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_1,
#line 307 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_2,
#line 307 "mlds_to_managed.m"
  MR_Box * ml_backend__mlds_to_managed__wrapper_arg_3);

#line 298 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__write_statement_6_p_0(
#line 298 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__Globals_7,
#line 298 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__DataRep_8,
#line 298 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__Args_9,
#line 298 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__HeadVar__4_4);

#line 286 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__generate_method_code_5_p_0_2(
#line 286 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__closure_arg,
#line 286 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_1,
#line 286 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_2,
#line 286 "mlds_to_managed.m"
  MR_Box * ml_backend__mlds_to_managed__wrapper_arg_3);

#line 261 "mlds_to_managed.m"
static MR_bool MR_CALL 
ml_backend__mlds_to_managed__generate_method_code_5_p_0_1(
#line 261 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__closure_arg);

#line 242 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__generate_method_code_5_p_0(
#line 242 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__Globals_6,
#line 242 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__DataRep_7,
#line 242 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__Defn_8);

#line 213 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__generate_foreign_code_5_p_0_1(
#line 213 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__closure_arg,
#line 213 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_1,
#line 213 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_2,
#line 213 "mlds_to_managed.m"
  MR_Box * ml_backend__mlds_to_managed__wrapper_arg_3);

#line 206 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__generate_foreign_code_5_p_0(
#line 206 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__Globals_6,
#line 206 "mlds_to_managed.m"
  MR_String ml_backend__mlds_to_managed__SourceFileName_7,
#line 206 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__ForeignCode_8);

#line 188 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__generate_namespace_details_3_p_0(
#line 188 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__ClassName_4,
#line 188 "mlds_to_managed.m"
  MR_String * ml_backend__mlds_to_managed__NameSpaceFmtStr_5,
#line 188 "mlds_to_managed.m"
  MR_Word * ml_backend__mlds_to_managed__Namespace_6);

#line 174 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__generate_foreign_header_code_5_p_0_1(
#line 174 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__closure_arg,
#line 174 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_1,
#line 174 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_2,
#line 174 "mlds_to_managed.m"
  MR_Box * ml_backend__mlds_to_managed__wrapper_arg_3);

#line 166 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__generate_foreign_header_code_5_p_0(
#line 166 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__Globals_6,
#line 166 "mlds_to_managed.m"
  MR_String ml_backend__mlds_to_managed__SourceFileName_7,
#line 166 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__ForeignCode_8);

#line 142 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__output_csharp_header_code_3_p_0(
#line 142 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__Globals_4);

#line 114 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__output_csharp_code_4_p_0_5(
#line 114 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__closure_arg,
#line 114 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_1,
#line 114 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_2,
#line 114 "mlds_to_managed.m"
  MR_Box * ml_backend__mlds_to_managed__wrapper_arg_3);

#line 109 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__output_csharp_code_4_p_0_4(
#line 109 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__closure_arg,
#line 109 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_1,
#line 109 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_2,
#line 109 "mlds_to_managed.m"
  MR_Box * ml_backend__mlds_to_managed__wrapper_arg_3);

#line 94 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__output_csharp_code_4_p_0_3(
#line 94 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__closure_arg,
#line 94 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_1,
#line 94 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_2,
#line 94 "mlds_to_managed.m"
  MR_Box * ml_backend__mlds_to_managed__wrapper_arg_3);

#line 76 "mlds_to_managed.m"
static MR_bool MR_CALL 
ml_backend__mlds_to_managed__output_csharp_code_4_p_0_2(
#line 76 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__closure_arg);

#line 74 "mlds_to_managed.m"
static MR_bool MR_CALL 
ml_backend__mlds_to_managed__output_csharp_code_4_p_0_1(
#line 74 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__closure_arg);


static /* final */ const MR_Box ml_backend__mlds_to_managed_scalar_common_1[4][2];

static /* final */ const MR_Box ml_backend__mlds_to_managed_scalar_common_2[3][4];

static /* final */ const MR_Box ml_backend__mlds_to_managed_scalar_common_3[4][7];

static /* final */ const MR_Box ml_backend__mlds_to_managed_scalar_common_4[3][8];

static /* final */ const MR_Box ml_backend__mlds_to_managed_scalar_common_5[2][6];

static /* final */ const MR_Box ml_backend__mlds_to_managed_scalar_common_6[8][3];

static /* final */ const MR_Box ml_backend__mlds_to_managed_scalar_common_7[1][9];




static /* final */ const MR_Box ml_backend__mlds_to_managed_scalar_common_1[4][2] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "\n\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "// Do not edit.\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_managed_scalar_common_1[0])))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) ".\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_managed_scalar_common_1[1])))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "{\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_managed_scalar_common_2[3][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&ml_backend__mlds_to_managed__tree234__pti_tree234_2__plain_ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0__plain_ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_group_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&ml_backend__mlds_to_managed__tree234__pti_tree234_2__plain_ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0__plain_ml_backend__ml_global_data__type_ctor_info_ml_vector_cell_group_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&ml_backend__mlds_to_managed__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_managed_scalar_common_3[4][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__mlds_to_il__ml_backend__mlds_to_il__type_ctor_info_il_data_rep_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__mlds_to_il__ml_backend__mlds_to_il__type_ctor_info_il_data_rep_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_outline_arg_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__mlds_to_il__ml_backend__mlds_to_il__type_ctor_info_il_data_rep_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_managed_scalar_common_4[3][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&ml_backend__mlds_to_il__ml_backend__mlds_to_il__type_ctor_info_il_data_rep_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_user_foreign_code_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_managed_scalar_common_5[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__ilds__ml_backend__ilds__type_ctor_info_type_modifier_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_managed_scalar_common_6[8][3] = {
  /* row 0 */
  {
    ((MR_Box) (&ml_backend__mlds_to_managed_scalar_common_5[0])),
    ((MR_Box) (ml_backend__mlds_to_managed__output_csharp_code_4_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&ml_backend__mlds_to_managed_scalar_common_5[1])),
    ((MR_Box) (ml_backend__mlds_to_managed__write_outline_arg_init_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&ml_backend__mlds_to_managed_scalar_common_5[1])),
    ((MR_Box) (ml_backend__mlds_to_managed__write_outline_arg_init_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&ml_backend__mlds_to_managed_scalar_common_5[1])),
    ((MR_Box) (ml_backend__mlds_to_managed__write_rval_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&ml_backend__mlds_to_managed_scalar_common_5[1])),
    ((MR_Box) (ml_backend__mlds_to_managed__write_defn_decl_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&ml_backend__mlds_to_managed_scalar_common_5[1])),
    ((MR_Box) (ml_backend__mlds_to_managed__write_input_arg_as_foreign_type_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&ml_backend__mlds_to_managed_scalar_common_5[1])),
    ((MR_Box) (ml_backend__mlds_to_managed__write_il_type_as_foreign_type_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&ml_backend__mlds_to_managed_scalar_common_5[0])),
    ((MR_Box) (ml_backend__mlds_to_managed__write_class_name_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_managed_scalar_common_7[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&ml_backend__mlds_to_il__ml_backend__mlds_to_il__type_ctor_info_il_data_rep_0)),
    ((MR_Box) (&ml_backend__mlds_to_managed__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_argument_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "array.mh"
#include "array.mh"



#line 832 "ml_backend.mlds_to_managed.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__mlds_to_managed__tree234__pti_tree234_2__plain_ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0__plain_ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_group_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0,
    (MR_PseudoTypeInfo) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_group_0
  }
};

#line 841 "ml_backend.mlds_to_managed.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__mlds_to_managed__tree234__pti_tree234_2__plain_ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0__plain_ml_backend__ml_global_data__type_ctor_info_ml_vector_cell_group_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0,
    (MR_PseudoTypeInfo) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_vector_cell_group_0
  }
};

#line 850 "ml_backend.mlds_to_managed.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_managed__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 858 "ml_backend.mlds_to_managed.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_managed__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_argument_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0
  }
};

#line 114 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_99_115_104_97_114_112_95_99_111_100_101_95_95_49_49_52_95_95_49_95_95_91_49_93_95_48_3_p_0(void)
#line 114 "mlds_to_managed.m"
{
#line 114 "mlds_to_managed.m"
  {
#line 114 "mlds_to_managed.m"
    MR_bool ml_backend__mlds_to_managed__succeeded;

#line 116 "mlds_to_managed.m"
    {
#line 116 "mlds_to_managed.m"
      mercury__io__write_string_3_p_0((MR_String) "}");
#line 116 "mlds_to_managed.m"
      return;
    }
#line 114 "mlds_to_managed.m"
  }
#line 114 "mlds_to_managed.m"
}

#line 261 "mlds_to_managed.m"
static MR_bool MR_CALL 
ml_backend__mlds_to_managed__IntroducedFrom__pred__generate_method_code__261__1_1_p_0(
#line 261 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__EnvVarNames_26)
#line 261 "mlds_to_managed.m"
{
#line 261 "mlds_to_managed.m"
  {
#line 261 "mlds_to_managed.m"
    MR_bool ml_backend__mlds_to_managed__succeeded;

#line 261 "mlds_to_managed.m"
    {
#line 261 "mlds_to_managed.m"
      return ml_backend__mlds_to_managed__succeeded = mercury__set__is_empty_1_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ml_backend__mlds_to_managed__EnvVarNames_26);
    }
#line 261 "mlds_to_managed.m"
    return ml_backend__mlds_to_managed__succeeded;
#line 261 "mlds_to_managed.m"
  }
#line 261 "mlds_to_managed.m"
}

#line 213 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__IntroducedFrom__pred__generate_foreign_code__213__1_5_p_0(
#line 213 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__Globals_6,
#line 213 "mlds_to_managed.m"
  MR_String ml_backend__mlds_to_managed__SourceFileName_7,
#line 213 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__HeadVar__3_25)
#line 213 "mlds_to_managed.m"
{
#line 213 "mlds_to_managed.m"
  {
#line 213 "mlds_to_managed.m"
    MR_bool ml_backend__mlds_to_managed__succeeded;
#line 213 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__CodeLang_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__HeadVar__3_25, (MR_Integer) 0)));
#line 213 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__LiteralOrInclude_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__HeadVar__3_25, (MR_Integer) 1)));
#line 213 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__Context_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__HeadVar__3_25, (MR_Integer) 2)));

#line 216 "mlds_to_managed.m"
    ml_backend__mlds_to_managed__succeeded = (ml_backend__mlds_to_managed__CodeLang_33 == (MR_Integer) 1);
#line 219 "mlds_to_managed.m"
    if (ml_backend__mlds_to_managed__succeeded)
#line 229 "mlds_to_managed.m"
      {
#line 234 "mlds_to_managed.m"
        if (((MR_tag((MR_Word) ml_backend__mlds_to_managed__LiteralOrInclude_34)) == (MR_mktag((MR_Integer) 1))))
#line 235 "mlds_to_managed.m"
          {
#line 235 "mlds_to_managed.m"
            MR_String ml_backend__mlds_to_managed__IncludeFileName_47 = ((MR_String) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_managed__LiteralOrInclude_34, (MR_Integer) 0)));
#line 235 "mlds_to_managed.m"
            MR_String ml_backend__mlds_to_managed__IncludePath_48;
#line 235 "mlds_to_managed.m"
            MR_Word ml_backend__mlds_to_managed__V_49_49;
#line 235 "mlds_to_managed.m"
            MR_String ml_backend__mlds_to_managed__File_61;
#line 235 "mlds_to_managed.m"
            MR_Integer ml_backend__mlds_to_managed__Line_62;

#line 236 "mlds_to_managed.m"
            {
#line 236 "mlds_to_managed.m"
              parse_tree__file_names__make_include_file_path_3_p_0(ml_backend__mlds_to_managed__SourceFileName_7, ml_backend__mlds_to_managed__IncludeFileName_47, &ml_backend__mlds_to_managed__IncludePath_48);
            }
#line 237 "mlds_to_managed.m"
            {
#line 237 "mlds_to_managed.m"
              ml_backend__mlds_to_managed__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 237 "mlds_to_managed.m"
              MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_49_49, 0) = ((MR_Box) (ml_backend__mlds_to_managed__IncludePath_48));
#line 237 "mlds_to_managed.m"
              MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_49_49, 1) = ((MR_Box) ((MR_Integer) 1));
#line 237 "mlds_to_managed.m"
            }
#line 416 "mlds_to_managed.m"
            {
#line 416 "mlds_to_managed.m"
              mercury__term__context_file_2_p_0(ml_backend__mlds_to_managed__V_49_49, &ml_backend__mlds_to_managed__File_61);
            }
#line 417 "mlds_to_managed.m"
            {
#line 417 "mlds_to_managed.m"
              mercury__term__context_line_2_p_0(ml_backend__mlds_to_managed__V_49_49, &ml_backend__mlds_to_managed__Line_62);
            }
#line 418 "mlds_to_managed.m"
            {
#line 418 "mlds_to_managed.m"
              backend_libs__c_util__set_line_num_5_p_0(ml_backend__mlds_to_managed__Globals_6, ml_backend__mlds_to_managed__File_61, ml_backend__mlds_to_managed__Line_62);
            }
#line 238 "mlds_to_managed.m"
            {
#line 238 "mlds_to_managed.m"
              libs__file_util__write_include_file_contents_3_p_0(ml_backend__mlds_to_managed__IncludePath_48);
            }
#line 235 "mlds_to_managed.m"
          }
#line 234 "mlds_to_managed.m"
        else
#line 231 "mlds_to_managed.m"
          {
#line 231 "mlds_to_managed.m"
            MR_String ml_backend__mlds_to_managed__Code_46 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__LiteralOrInclude_34, (MR_Integer) 0)));
#line 231 "mlds_to_managed.m"
            MR_String ml_backend__mlds_to_managed__File_69;
#line 231 "mlds_to_managed.m"
            MR_Integer ml_backend__mlds_to_managed__Line_70;

#line 416 "mlds_to_managed.m"
            {
#line 416 "mlds_to_managed.m"
              mercury__term__context_file_2_p_0(ml_backend__mlds_to_managed__Context_35, &ml_backend__mlds_to_managed__File_69);
            }
#line 417 "mlds_to_managed.m"
            {
#line 417 "mlds_to_managed.m"
              mercury__term__context_line_2_p_0(ml_backend__mlds_to_managed__Context_35, &ml_backend__mlds_to_managed__Line_70);
            }
#line 418 "mlds_to_managed.m"
            {
#line 418 "mlds_to_managed.m"
              backend_libs__c_util__set_line_num_5_p_0(ml_backend__mlds_to_managed__Globals_6, ml_backend__mlds_to_managed__File_69, ml_backend__mlds_to_managed__Line_70);
            }
#line 233 "mlds_to_managed.m"
            {
#line 233 "mlds_to_managed.m"
              mercury__io__write_string_3_p_0(ml_backend__mlds_to_managed__Code_46);
            }
#line 231 "mlds_to_managed.m"
          }
#line 240 "mlds_to_managed.m"
        {
#line 240 "mlds_to_managed.m"
          mercury__io__nl_2_p_0();
        }
#line 229 "mlds_to_managed.m"
      }
#line 219 "mlds_to_managed.m"
    else
#line 220 "mlds_to_managed.m"
      {
#line 220 "mlds_to_managed.m"
        {
#line 220 "mlds_to_managed.m"
          mercury__require__sorry_3_p_0((MR_String) "ml_backend.mlds_to_managed", (MR_String) "predicate \140ml_backend.mlds_to_managed.generate_foreign_code\'/5", (MR_String) "wrong foreign code");
#line 220 "mlds_to_managed.m"
          return;
        }
#line 220 "mlds_to_managed.m"
      }
#line 423 "mlds_to_managed.m"
    {
#line 423 "mlds_to_managed.m"
      backend_libs__c_util__reset_line_num_3_p_0(ml_backend__mlds_to_managed__Globals_6);
#line 423 "mlds_to_managed.m"
      return;
    }
#line 213 "mlds_to_managed.m"
  }
#line 213 "mlds_to_managed.m"
}

#line 174 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__IntroducedFrom__pred__generate_foreign_header_code__174__1_5_p_0(
#line 174 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__Globals_6,
#line 174 "mlds_to_managed.m"
  MR_String ml_backend__mlds_to_managed__SourceFileName_7,
#line 174 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__HeadVar__3_27)
#line 174 "mlds_to_managed.m"
{
#line 174 "mlds_to_managed.m"
  {
#line 174 "mlds_to_managed.m"
    MR_bool ml_backend__mlds_to_managed__succeeded;
#line 174 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__CodeLang_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__HeadVar__3_27, (MR_Integer) 0)));
#line 174 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__LiteralOrInclude_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__HeadVar__3_27, (MR_Integer) 2)));
#line 174 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__Context_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__HeadVar__3_27, (MR_Integer) 3)));
#line 177 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed___IsLocal_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__HeadVar__3_27, (MR_Integer) 1)));

#line 179 "mlds_to_managed.m"
    ml_backend__mlds_to_managed__succeeded = (ml_backend__mlds_to_managed__CodeLang_16 == (MR_Integer) 1);
#line 182 "mlds_to_managed.m"
    if (ml_backend__mlds_to_managed__succeeded)
#line 229 "mlds_to_managed.m"
      {
#line 234 "mlds_to_managed.m"
        if (((MR_tag((MR_Word) ml_backend__mlds_to_managed__LiteralOrInclude_18)) == (MR_mktag((MR_Integer) 1))))
#line 235 "mlds_to_managed.m"
          {
#line 235 "mlds_to_managed.m"
            MR_String ml_backend__mlds_to_managed__IncludeFileName_47 = ((MR_String) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_managed__LiteralOrInclude_18, (MR_Integer) 0)));
#line 235 "mlds_to_managed.m"
            MR_String ml_backend__mlds_to_managed__IncludePath_48;
#line 235 "mlds_to_managed.m"
            MR_Word ml_backend__mlds_to_managed__V_49_49;
#line 235 "mlds_to_managed.m"
            MR_String ml_backend__mlds_to_managed__File_61;
#line 235 "mlds_to_managed.m"
            MR_Integer ml_backend__mlds_to_managed__Line_62;

#line 236 "mlds_to_managed.m"
            {
#line 236 "mlds_to_managed.m"
              parse_tree__file_names__make_include_file_path_3_p_0(ml_backend__mlds_to_managed__SourceFileName_7, ml_backend__mlds_to_managed__IncludeFileName_47, &ml_backend__mlds_to_managed__IncludePath_48);
            }
#line 237 "mlds_to_managed.m"
            {
#line 237 "mlds_to_managed.m"
              ml_backend__mlds_to_managed__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 237 "mlds_to_managed.m"
              MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_49_49, 0) = ((MR_Box) (ml_backend__mlds_to_managed__IncludePath_48));
#line 237 "mlds_to_managed.m"
              MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_49_49, 1) = ((MR_Box) ((MR_Integer) 1));
#line 237 "mlds_to_managed.m"
            }
#line 416 "mlds_to_managed.m"
            {
#line 416 "mlds_to_managed.m"
              mercury__term__context_file_2_p_0(ml_backend__mlds_to_managed__V_49_49, &ml_backend__mlds_to_managed__File_61);
            }
#line 417 "mlds_to_managed.m"
            {
#line 417 "mlds_to_managed.m"
              mercury__term__context_line_2_p_0(ml_backend__mlds_to_managed__V_49_49, &ml_backend__mlds_to_managed__Line_62);
            }
#line 418 "mlds_to_managed.m"
            {
#line 418 "mlds_to_managed.m"
              backend_libs__c_util__set_line_num_5_p_0(ml_backend__mlds_to_managed__Globals_6, ml_backend__mlds_to_managed__File_61, ml_backend__mlds_to_managed__Line_62);
            }
#line 238 "mlds_to_managed.m"
            {
#line 238 "mlds_to_managed.m"
              libs__file_util__write_include_file_contents_3_p_0(ml_backend__mlds_to_managed__IncludePath_48);
            }
#line 235 "mlds_to_managed.m"
          }
#line 234 "mlds_to_managed.m"
        else
#line 231 "mlds_to_managed.m"
          {
#line 231 "mlds_to_managed.m"
            MR_String ml_backend__mlds_to_managed__Code_46 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__LiteralOrInclude_18, (MR_Integer) 0)));
#line 231 "mlds_to_managed.m"
            MR_String ml_backend__mlds_to_managed__File_69;
#line 231 "mlds_to_managed.m"
            MR_Integer ml_backend__mlds_to_managed__Line_70;

#line 416 "mlds_to_managed.m"
            {
#line 416 "mlds_to_managed.m"
              mercury__term__context_file_2_p_0(ml_backend__mlds_to_managed__Context_19, &ml_backend__mlds_to_managed__File_69);
            }
#line 417 "mlds_to_managed.m"
            {
#line 417 "mlds_to_managed.m"
              mercury__term__context_line_2_p_0(ml_backend__mlds_to_managed__Context_19, &ml_backend__mlds_to_managed__Line_70);
            }
#line 418 "mlds_to_managed.m"
            {
#line 418 "mlds_to_managed.m"
              backend_libs__c_util__set_line_num_5_p_0(ml_backend__mlds_to_managed__Globals_6, ml_backend__mlds_to_managed__File_69, ml_backend__mlds_to_managed__Line_70);
            }
#line 233 "mlds_to_managed.m"
            {
#line 233 "mlds_to_managed.m"
              mercury__io__write_string_3_p_0(ml_backend__mlds_to_managed__Code_46);
            }
#line 231 "mlds_to_managed.m"
          }
#line 240 "mlds_to_managed.m"
        {
#line 240 "mlds_to_managed.m"
          mercury__io__nl_2_p_0();
        }
#line 229 "mlds_to_managed.m"
      }
#line 182 "mlds_to_managed.m"
    else
#line 183 "mlds_to_managed.m"
      {
#line 183 "mlds_to_managed.m"
        {
#line 183 "mlds_to_managed.m"
          mercury__require__sorry_3_p_0((MR_String) "ml_backend.mlds_to_managed", (MR_String) "predicate \140ml_backend.mlds_to_managed.generate_foreign_header_code\'/5", (MR_String) "wrong foreign code");
#line 183 "mlds_to_managed.m"
          return;
        }
#line 183 "mlds_to_managed.m"
      }
#line 423 "mlds_to_managed.m"
    {
#line 423 "mlds_to_managed.m"
      backend_libs__c_util__reset_line_num_3_p_0(ml_backend__mlds_to_managed__Globals_6);
#line 423 "mlds_to_managed.m"
      return;
    }
#line 174 "mlds_to_managed.m"
  }
#line 174 "mlds_to_managed.m"
}

#line 114 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__IntroducedFrom__pred__output_csharp_code__114__1_3_p_0(
#line 114 "mlds_to_managed.m"
  MR_String ml_backend__mlds_to_managed__HeadVar__1_77)
#line 114 "mlds_to_managed.m"
{
#line 114 "mlds_to_managed.m"
  {
#line 114 "mlds_to_managed.m"
    MR_bool ml_backend__mlds_to_managed__succeeded;

#line 114 "mlds_to_managed.m"
    {
#line 114 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_99_115_104_97_114_112_95_99_111_100_101_95_95_49_49_52_95_95_49_95_95_91_49_93_95_48_3_p_0();
#line 114 "mlds_to_managed.m"
      return;
    }
#line 114 "mlds_to_managed.m"
  }
#line 114 "mlds_to_managed.m"
}

#line 94 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__IntroducedFrom__pred__output_csharp_code__94__1_4_p_0(
#line 94 "mlds_to_managed.m"
  MR_String ml_backend__mlds_to_managed__NameSpaceFmtStr_24,
#line 94 "mlds_to_managed.m"
  MR_String ml_backend__mlds_to_managed__HeadVar__2_51)
#line 94 "mlds_to_managed.m"
{
#line 94 "mlds_to_managed.m"
  {
#line 94 "mlds_to_managed.m"
    MR_bool ml_backend__mlds_to_managed__succeeded;
#line 94 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__V_54_54;
#line 94 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__V_56_56;

#line 96 "mlds_to_managed.m"
    {
#line 96 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__V_56_56 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 96 "mlds_to_managed.m"
      MR_hl_field(MR_mktag(2), ml_backend__mlds_to_managed__V_56_56, 0) = ((MR_Box) (ml_backend__mlds_to_managed__HeadVar__2_51));
#line 96 "mlds_to_managed.m"
    }
#line 96 "mlds_to_managed.m"
    {
#line 96 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 96 "mlds_to_managed.m"
      MR_hl_field(MR_mktag(1), ml_backend__mlds_to_managed__V_54_54, 0) = ((MR_Box) (ml_backend__mlds_to_managed__V_56_56));
#line 96 "mlds_to_managed.m"
      MR_hl_field(MR_mktag(1), ml_backend__mlds_to_managed__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 96 "mlds_to_managed.m"
    }
#line 96 "mlds_to_managed.m"
    {
#line 96 "mlds_to_managed.m"
      mercury__io__format_4_p_0(ml_backend__mlds_to_managed__NameSpaceFmtStr_24, ml_backend__mlds_to_managed__V_54_54);
#line 96 "mlds_to_managed.m"
      return;
    }
#line 94 "mlds_to_managed.m"
  }
#line 94 "mlds_to_managed.m"
}

#line 76 "mlds_to_managed.m"
static MR_bool MR_CALL 
ml_backend__mlds_to_managed__IntroducedFrom__pred__output_csharp_code__76__1_1_p_0(
#line 76 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__VectorCellGroupMap_17)
#line 76 "mlds_to_managed.m"
{
#line 76 "mlds_to_managed.m"
  {
#line 76 "mlds_to_managed.m"
    MR_bool ml_backend__mlds_to_managed__succeeded;

#line 76 "mlds_to_managed.m"
    {
#line 76 "mlds_to_managed.m"
      return ml_backend__mlds_to_managed__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_vector_cell_group_0, ml_backend__mlds_to_managed__VectorCellGroupMap_17);
    }
#line 76 "mlds_to_managed.m"
    return ml_backend__mlds_to_managed__succeeded;
#line 76 "mlds_to_managed.m"
  }
#line 76 "mlds_to_managed.m"
}

#line 74 "mlds_to_managed.m"
static MR_bool MR_CALL 
ml_backend__mlds_to_managed__IntroducedFrom__pred__output_csharp_code__74__1_1_p_0(
#line 74 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__ScalarCellGroupMap_16)
#line 74 "mlds_to_managed.m"
{
#line 74 "mlds_to_managed.m"
  {
#line 74 "mlds_to_managed.m"
    MR_bool ml_backend__mlds_to_managed__succeeded;

#line 74 "mlds_to_managed.m"
    {
#line 74 "mlds_to_managed.m"
      return ml_backend__mlds_to_managed__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_group_0, ml_backend__mlds_to_managed__ScalarCellGroupMap_16);
    }
#line 74 "mlds_to_managed.m"
    return ml_backend__mlds_to_managed__succeeded;
#line 74 "mlds_to_managed.m"
  }
#line 74 "mlds_to_managed.m"
}

#line 754 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__write_class_name_3_p_0_1(
#line 754 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__closure_arg,
#line 754 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_1,
#line 754 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_2,
#line 754 "mlds_to_managed.m"
  MR_Box * ml_backend__mlds_to_managed__wrapper_arg_3)
#line 754 "mlds_to_managed.m"
{
#line 754 "mlds_to_managed.m"
  {
#line 754 "mlds_to_managed.m"
    MR_Box ml_backend__mlds_to_managed__closure = ml_backend__mlds_to_managed__closure_arg;

#line 754 "mlds_to_managed.m"
    {
#line 754 "mlds_to_managed.m"
      mercury__io__write_string_3_p_0(((MR_String) ml_backend__mlds_to_managed__wrapper_arg_1));
#line 754 "mlds_to_managed.m"
      return;
    }
#line 754 "mlds_to_managed.m"
  }
#line 754 "mlds_to_managed.m"
}

#line 751 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__write_class_name_3_p_0(
#line 751 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__HeadVar__1_1)
#line 751 "mlds_to_managed.m"
{
#line 753 "mlds_to_managed.m"
  {
#line 753 "mlds_to_managed.m"
    MR_bool ml_backend__mlds_to_managed__succeeded;
#line 753 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__TypeCtorInfo_14_14 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 753 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__DottedName_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__HeadVar__1_1, (MR_Integer) 1)));
#line 753 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__NestedClasses_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__HeadVar__1_1, (MR_Integer) 2)));
#line 753 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__V_10_10;
#line 753 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed___Asm_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__HeadVar__1_1, (MR_Integer) 0)));

#line 754 "mlds_to_managed.m"
    {
#line 754 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__V_10_10 = mercury__list__f_43_43_2_f_0(ml_backend__mlds_to_managed__TypeCtorInfo_14_14, ml_backend__mlds_to_managed__DottedName_5, ml_backend__mlds_to_managed__NestedClasses_6);
    }
#line 754 "mlds_to_managed.m"
    {
#line 754 "mlds_to_managed.m"
      mercury__io__write_list_5_p_0(ml_backend__mlds_to_managed__TypeCtorInfo_14_14, ml_backend__mlds_to_managed__V_10_10, (MR_String) ".", (MR_Word) &ml_backend__mlds_to_managed_scalar_common_6[7]);
#line 754 "mlds_to_managed.m"
      return;
    }
#line 753 "mlds_to_managed.m"
  }
#line 751 "mlds_to_managed.m"
}

#line 698 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__write_csharp_initializer_3_p_0(
#line 698 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__HeadVar__1_1)
#line 698 "mlds_to_managed.m"
{
#line 700 "mlds_to_managed.m"
  {
#line 700 "mlds_to_managed.m"
    MR_bool ml_backend__mlds_to_managed__succeeded;

#line 700 "mlds_to_managed.m"
    if ((ml_backend__mlds_to_managed__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13)))))
#line 726 "mlds_to_managed.m"
      {
#line 727 "mlds_to_managed.m"
        {
#line 727 "mlds_to_managed.m"
          mercury__io__write_string_3_p_0((MR_String) "false");
#line 727 "mlds_to_managed.m"
          return;
        }
#line 726 "mlds_to_managed.m"
      }
#line 700 "mlds_to_managed.m"
    else
#line 700 "mlds_to_managed.m"
      if ((ml_backend__mlds_to_managed__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 14)))))
#line 728 "mlds_to_managed.m"
        {
#line 729 "mlds_to_managed.m"
          {
#line 729 "mlds_to_managed.m"
            mercury__io__write_string_3_p_0((MR_String) "\'\\0\'");
#line 729 "mlds_to_managed.m"
            return;
          }
#line 728 "mlds_to_managed.m"
        }
#line 700 "mlds_to_managed.m"
      else
#line 700 "mlds_to_managed.m"
        if ((ml_backend__mlds_to_managed__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10)))))
#line 720 "mlds_to_managed.m"
          {
#line 721 "mlds_to_managed.m"
            {
#line 721 "mlds_to_managed.m"
              mercury__io__write_string_3_p_0((MR_String) "0.0");
#line 721 "mlds_to_managed.m"
              return;
            }
#line 720 "mlds_to_managed.m"
          }
#line 700 "mlds_to_managed.m"
        else
#line 700 "mlds_to_managed.m"
          if ((ml_backend__mlds_to_managed__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11)))))
#line 722 "mlds_to_managed.m"
            {
#line 723 "mlds_to_managed.m"
              {
#line 723 "mlds_to_managed.m"
                mercury__io__write_string_3_p_0((MR_String) "0.0");
#line 723 "mlds_to_managed.m"
                return;
              }
#line 722 "mlds_to_managed.m"
            }
#line 700 "mlds_to_managed.m"
          else
#line 700 "mlds_to_managed.m"
            if ((ml_backend__mlds_to_managed__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 702 "mlds_to_managed.m"
              {
#line 703 "mlds_to_managed.m"
                {
#line 703 "mlds_to_managed.m"
                  mercury__io__write_string_3_p_0((MR_String) "0");
#line 703 "mlds_to_managed.m"
                  return;
                }
#line 702 "mlds_to_managed.m"
              }
#line 700 "mlds_to_managed.m"
            else
#line 700 "mlds_to_managed.m"
              if ((ml_backend__mlds_to_managed__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 704 "mlds_to_managed.m"
                {
#line 705 "mlds_to_managed.m"
                  {
#line 705 "mlds_to_managed.m"
                    mercury__io__write_string_3_p_0((MR_String) "0");
#line 705 "mlds_to_managed.m"
                    return;
                  }
#line 704 "mlds_to_managed.m"
                }
#line 700 "mlds_to_managed.m"
              else
#line 700 "mlds_to_managed.m"
                if ((ml_backend__mlds_to_managed__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 706 "mlds_to_managed.m"
                  {
#line 707 "mlds_to_managed.m"
                    {
#line 707 "mlds_to_managed.m"
                      mercury__io__write_string_3_p_0((MR_String) "0");
#line 707 "mlds_to_managed.m"
                      return;
                    }
#line 706 "mlds_to_managed.m"
                  }
#line 700 "mlds_to_managed.m"
                else
#line 700 "mlds_to_managed.m"
                  if ((ml_backend__mlds_to_managed__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 700 "mlds_to_managed.m"
                    {
#line 701 "mlds_to_managed.m"
                      {
#line 701 "mlds_to_managed.m"
                        mercury__io__write_string_3_p_0((MR_String) "0");
#line 701 "mlds_to_managed.m"
                        return;
                      }
#line 700 "mlds_to_managed.m"
                    }
#line 700 "mlds_to_managed.m"
                  else
#line 700 "mlds_to_managed.m"
                    if ((ml_backend__mlds_to_managed__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12)))))
#line 724 "mlds_to_managed.m"
                      {
#line 725 "mlds_to_managed.m"
                        {
#line 725 "mlds_to_managed.m"
                          mercury__io__write_string_3_p_0((MR_String) "0.0");
#line 725 "mlds_to_managed.m"
                          return;
                        }
#line 724 "mlds_to_managed.m"
                      }
#line 700 "mlds_to_managed.m"
                    else
#line 700 "mlds_to_managed.m"
                      if ((ml_backend__mlds_to_managed__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 716 "mlds_to_managed.m"
                        {
#line 717 "mlds_to_managed.m"
                          {
#line 717 "mlds_to_managed.m"
                            mercury__io__write_string_3_p_0((MR_String) "0");
#line 717 "mlds_to_managed.m"
                            return;
                          }
#line 716 "mlds_to_managed.m"
                        }
#line 700 "mlds_to_managed.m"
                      else
#line 700 "mlds_to_managed.m"
                        if ((ml_backend__mlds_to_managed__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)))))
#line 718 "mlds_to_managed.m"
                          {
#line 719 "mlds_to_managed.m"
                            {
#line 719 "mlds_to_managed.m"
                              mercury__io__write_string_3_p_0((MR_String) "0");
#line 719 "mlds_to_managed.m"
                              return;
                            }
#line 718 "mlds_to_managed.m"
                          }
#line 700 "mlds_to_managed.m"
                        else
#line 700 "mlds_to_managed.m"
                          if ((ml_backend__mlds_to_managed__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 15)))))
#line 732 "mlds_to_managed.m"
                            {
#line 733 "mlds_to_managed.m"
                              {
#line 733 "mlds_to_managed.m"
                                mercury__io__write_string_3_p_0((MR_String) "null");
#line 733 "mlds_to_managed.m"
                                return;
                              }
#line 732 "mlds_to_managed.m"
                            }
#line 700 "mlds_to_managed.m"
                          else
#line 700 "mlds_to_managed.m"
                            if ((ml_backend__mlds_to_managed__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 17)))))
#line 734 "mlds_to_managed.m"
                              {
#line 735 "mlds_to_managed.m"
                                {
#line 735 "mlds_to_managed.m"
                                  mercury__io__write_string_3_p_0((MR_String) "null");
#line 735 "mlds_to_managed.m"
                                  return;
                                }
#line 734 "mlds_to_managed.m"
                              }
#line 700 "mlds_to_managed.m"
                            else
#line 700 "mlds_to_managed.m"
                              if ((ml_backend__mlds_to_managed__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16)))))
#line 730 "mlds_to_managed.m"
                                {
#line 731 "mlds_to_managed.m"
                                  {
#line 731 "mlds_to_managed.m"
                                    mercury__io__write_string_3_p_0((MR_String) "null");
#line 731 "mlds_to_managed.m"
                                    return;
                                  }
#line 730 "mlds_to_managed.m"
                                }
#line 700 "mlds_to_managed.m"
                              else
#line 700 "mlds_to_managed.m"
                                if ((ml_backend__mlds_to_managed__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 710 "mlds_to_managed.m"
                                  {
#line 711 "mlds_to_managed.m"
                                    {
#line 711 "mlds_to_managed.m"
                                      mercury__io__write_string_3_p_0((MR_String) "0");
#line 711 "mlds_to_managed.m"
                                      return;
                                    }
#line 710 "mlds_to_managed.m"
                                  }
#line 700 "mlds_to_managed.m"
                                else
#line 700 "mlds_to_managed.m"
                                  if ((ml_backend__mlds_to_managed__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 712 "mlds_to_managed.m"
                                    {
#line 713 "mlds_to_managed.m"
                                      {
#line 713 "mlds_to_managed.m"
                                        mercury__io__write_string_3_p_0((MR_String) "0");
#line 713 "mlds_to_managed.m"
                                        return;
                                      }
#line 712 "mlds_to_managed.m"
                                    }
#line 700 "mlds_to_managed.m"
                                  else
#line 700 "mlds_to_managed.m"
                                    if ((ml_backend__mlds_to_managed__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
#line 714 "mlds_to_managed.m"
                                      {
#line 715 "mlds_to_managed.m"
                                        {
#line 715 "mlds_to_managed.m"
                                          mercury__io__write_string_3_p_0((MR_String) "0");
#line 715 "mlds_to_managed.m"
                                          return;
                                        }
#line 714 "mlds_to_managed.m"
                                      }
#line 700 "mlds_to_managed.m"
                                    else
#line 700 "mlds_to_managed.m"
                                      if ((ml_backend__mlds_to_managed__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 708 "mlds_to_managed.m"
                                        {
#line 709 "mlds_to_managed.m"
                                          {
#line 709 "mlds_to_managed.m"
                                            mercury__io__write_string_3_p_0((MR_String) "0");
#line 709 "mlds_to_managed.m"
                                            return;
                                          }
#line 708 "mlds_to_managed.m"
                                        }
#line 700 "mlds_to_managed.m"
                                      else
#line 700 "mlds_to_managed.m"
                                        if (((MR_tag((MR_Word) ml_backend__mlds_to_managed__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 736 "mlds_to_managed.m"
                                          {
#line 737 "mlds_to_managed.m"
                                            {
#line 737 "mlds_to_managed.m"
                                              mercury__io__write_string_3_p_0((MR_String) "null");
#line 737 "mlds_to_managed.m"
                                              return;
                                            }
#line 736 "mlds_to_managed.m"
                                          }
#line 700 "mlds_to_managed.m"
                                        else
#line 700 "mlds_to_managed.m"
                                          if (((MR_tag((MR_Word) ml_backend__mlds_to_managed__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 746 "mlds_to_managed.m"
                                            {
#line 746 "mlds_to_managed.m"
                                              MR_Word ml_backend__mlds_to_managed__ClassName_125 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_managed__HeadVar__1_1, (MR_Integer) 0)));

#line 747 "mlds_to_managed.m"
                                              {
#line 747 "mlds_to_managed.m"
                                                mercury__io__write_string_3_p_0((MR_String) "new ");
                                              }
#line 748 "mlds_to_managed.m"
                                              {
#line 748 "mlds_to_managed.m"
                                                ml_backend__mlds_to_managed__write_class_name_3_p_0(ml_backend__mlds_to_managed__ClassName_125);
                                              }
#line 749 "mlds_to_managed.m"
                                              {
#line 749 "mlds_to_managed.m"
                                                mercury__io__write_string_3_p_0((MR_String) "()");
#line 749 "mlds_to_managed.m"
                                                return;
                                              }
#line 746 "mlds_to_managed.m"
                                            }
#line 700 "mlds_to_managed.m"
                                          else
#line 700 "mlds_to_managed.m"
                                            if (((((MR_tag((MR_Word) ml_backend__mlds_to_managed__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_managed__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 742 "mlds_to_managed.m"
                                              {
#line 743 "mlds_to_managed.m"
                                                {
#line 743 "mlds_to_managed.m"
                                                  mercury__io__write_string_3_p_0((MR_String) "null");
#line 743 "mlds_to_managed.m"
                                                  return;
                                                }
#line 742 "mlds_to_managed.m"
                                              }
#line 700 "mlds_to_managed.m"
                                            else
#line 700 "mlds_to_managed.m"
                                              if (((((MR_tag((MR_Word) ml_backend__mlds_to_managed__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_managed__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 744 "mlds_to_managed.m"
                                                {
#line 745 "mlds_to_managed.m"
                                                  {
#line 745 "mlds_to_managed.m"
                                                    mercury__io__write_string_3_p_0((MR_String) "null");
#line 745 "mlds_to_managed.m"
                                                    return;
                                                  }
#line 744 "mlds_to_managed.m"
                                                }
#line 700 "mlds_to_managed.m"
                                              else
#line 700 "mlds_to_managed.m"
                                                if (((((MR_tag((MR_Word) ml_backend__mlds_to_managed__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_managed__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 740 "mlds_to_managed.m"
                                                  {
#line 741 "mlds_to_managed.m"
                                                    {
#line 741 "mlds_to_managed.m"
                                                      mercury__io__write_string_3_p_0((MR_String) "null");
#line 741 "mlds_to_managed.m"
                                                      return;
                                                    }
#line 740 "mlds_to_managed.m"
                                                  }
#line 700 "mlds_to_managed.m"
                                                else
#line 738 "mlds_to_managed.m"
                                                  {
#line 739 "mlds_to_managed.m"
                                                    {
#line 739 "mlds_to_managed.m"
                                                      mercury__io__write_string_3_p_0((MR_String) "null");
#line 739 "mlds_to_managed.m"
                                                      return;
                                                    }
#line 738 "mlds_to_managed.m"
                                                  }
#line 700 "mlds_to_managed.m"
  }
#line 698 "mlds_to_managed.m"
}

#line 636 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__write_il_simple_type_as_foreign_type_3_p_0(
#line 636 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__HeadVar__1_1)
#line 636 "mlds_to_managed.m"
{
#line 639 "mlds_to_managed.m"
  {
#line 639 "mlds_to_managed.m"
    MR_bool ml_backend__mlds_to_managed__succeeded;

#line 639 "mlds_to_managed.m"
    if ((ml_backend__mlds_to_managed__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13)))))
#line 665 "mlds_to_managed.m"
      {
#line 666 "mlds_to_managed.m"
        {
#line 666 "mlds_to_managed.m"
          mercury__io__write_string_3_p_0((MR_String) "bool");
#line 666 "mlds_to_managed.m"
          return;
        }
#line 665 "mlds_to_managed.m"
      }
#line 639 "mlds_to_managed.m"
    else
#line 639 "mlds_to_managed.m"
      if ((ml_backend__mlds_to_managed__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 14)))))
#line 667 "mlds_to_managed.m"
        {
#line 668 "mlds_to_managed.m"
          {
#line 668 "mlds_to_managed.m"
            mercury__io__write_string_3_p_0((MR_String) "char");
#line 668 "mlds_to_managed.m"
            return;
          }
#line 667 "mlds_to_managed.m"
        }
#line 639 "mlds_to_managed.m"
      else
#line 639 "mlds_to_managed.m"
        if ((ml_backend__mlds_to_managed__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10)))))
#line 659 "mlds_to_managed.m"
          {
#line 660 "mlds_to_managed.m"
            {
#line 660 "mlds_to_managed.m"
              mercury__io__write_string_3_p_0((MR_String) "float");
#line 660 "mlds_to_managed.m"
              return;
            }
#line 659 "mlds_to_managed.m"
          }
#line 639 "mlds_to_managed.m"
        else
#line 639 "mlds_to_managed.m"
          if ((ml_backend__mlds_to_managed__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11)))))
#line 661 "mlds_to_managed.m"
            {
#line 662 "mlds_to_managed.m"
              {
#line 662 "mlds_to_managed.m"
                mercury__io__write_string_3_p_0((MR_String) "double");
#line 662 "mlds_to_managed.m"
                return;
              }
#line 661 "mlds_to_managed.m"
            }
#line 639 "mlds_to_managed.m"
          else
#line 639 "mlds_to_managed.m"
            if ((ml_backend__mlds_to_managed__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 641 "mlds_to_managed.m"
              {
#line 642 "mlds_to_managed.m"
                {
#line 642 "mlds_to_managed.m"
                  mercury__io__write_string_3_p_0((MR_String) "short");
#line 642 "mlds_to_managed.m"
                  return;
                }
#line 641 "mlds_to_managed.m"
              }
#line 639 "mlds_to_managed.m"
            else
#line 639 "mlds_to_managed.m"
              if ((ml_backend__mlds_to_managed__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 643 "mlds_to_managed.m"
                {
#line 644 "mlds_to_managed.m"
                  {
#line 644 "mlds_to_managed.m"
                    mercury__io__write_string_3_p_0((MR_String) "int");
#line 644 "mlds_to_managed.m"
                    return;
                  }
#line 643 "mlds_to_managed.m"
                }
#line 639 "mlds_to_managed.m"
              else
#line 639 "mlds_to_managed.m"
                if ((ml_backend__mlds_to_managed__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 645 "mlds_to_managed.m"
                  {
#line 646 "mlds_to_managed.m"
                    {
#line 646 "mlds_to_managed.m"
                      mercury__io__write_string_3_p_0((MR_String) "long");
#line 646 "mlds_to_managed.m"
                      return;
                    }
#line 645 "mlds_to_managed.m"
                  }
#line 639 "mlds_to_managed.m"
                else
#line 639 "mlds_to_managed.m"
                  if ((ml_backend__mlds_to_managed__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 639 "mlds_to_managed.m"
                    {
#line 640 "mlds_to_managed.m"
                      {
#line 640 "mlds_to_managed.m"
                        mercury__io__write_string_3_p_0((MR_String) "sbyte");
#line 640 "mlds_to_managed.m"
                        return;
                      }
#line 639 "mlds_to_managed.m"
                    }
#line 639 "mlds_to_managed.m"
                  else
#line 639 "mlds_to_managed.m"
                    if ((ml_backend__mlds_to_managed__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12)))))
#line 663 "mlds_to_managed.m"
                      {
#line 664 "mlds_to_managed.m"
                        {
#line 664 "mlds_to_managed.m"
                          mercury__io__write_string_3_p_0((MR_String) "float");
#line 664 "mlds_to_managed.m"
                          return;
                        }
#line 663 "mlds_to_managed.m"
                      }
#line 639 "mlds_to_managed.m"
                    else
#line 639 "mlds_to_managed.m"
                      if ((ml_backend__mlds_to_managed__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 655 "mlds_to_managed.m"
                        {
#line 656 "mlds_to_managed.m"
                          {
#line 656 "mlds_to_managed.m"
                            mercury__io__write_string_3_p_0((MR_String) "int");
#line 656 "mlds_to_managed.m"
                            return;
                          }
#line 655 "mlds_to_managed.m"
                        }
#line 639 "mlds_to_managed.m"
                      else
#line 639 "mlds_to_managed.m"
                        if ((ml_backend__mlds_to_managed__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)))))
#line 657 "mlds_to_managed.m"
                          {
#line 658 "mlds_to_managed.m"
                            {
#line 658 "mlds_to_managed.m"
                              mercury__io__write_string_3_p_0((MR_String) "uint");
#line 658 "mlds_to_managed.m"
                              return;
                            }
#line 657 "mlds_to_managed.m"
                          }
#line 639 "mlds_to_managed.m"
                        else
#line 639 "mlds_to_managed.m"
                          if ((ml_backend__mlds_to_managed__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 15)))))
#line 671 "mlds_to_managed.m"
                            {
#line 672 "mlds_to_managed.m"
                              {
#line 672 "mlds_to_managed.m"
                                mercury__io__write_string_3_p_0((MR_String) "object");
#line 672 "mlds_to_managed.m"
                                return;
                              }
#line 671 "mlds_to_managed.m"
                            }
#line 639 "mlds_to_managed.m"
                          else
#line 639 "mlds_to_managed.m"
                            if ((ml_backend__mlds_to_managed__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 17)))))
#line 673 "mlds_to_managed.m"
                              {
#line 674 "mlds_to_managed.m"
                                {
#line 674 "mlds_to_managed.m"
                                  mercury__io__write_string_3_p_0((MR_String) "mercury.MR_RefAny");
#line 674 "mlds_to_managed.m"
                                  return;
                                }
#line 673 "mlds_to_managed.m"
                              }
#line 639 "mlds_to_managed.m"
                            else
#line 639 "mlds_to_managed.m"
                              if ((ml_backend__mlds_to_managed__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16)))))
#line 669 "mlds_to_managed.m"
                                {
#line 670 "mlds_to_managed.m"
                                  {
#line 670 "mlds_to_managed.m"
                                    mercury__io__write_string_3_p_0((MR_String) "string");
#line 670 "mlds_to_managed.m"
                                    return;
                                  }
#line 669 "mlds_to_managed.m"
                                }
#line 639 "mlds_to_managed.m"
                              else
#line 639 "mlds_to_managed.m"
                                if ((ml_backend__mlds_to_managed__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 649 "mlds_to_managed.m"
                                  {
#line 650 "mlds_to_managed.m"
                                    {
#line 650 "mlds_to_managed.m"
                                      mercury__io__write_string_3_p_0((MR_String) "ushort");
#line 650 "mlds_to_managed.m"
                                      return;
                                    }
#line 649 "mlds_to_managed.m"
                                  }
#line 639 "mlds_to_managed.m"
                                else
#line 639 "mlds_to_managed.m"
                                  if ((ml_backend__mlds_to_managed__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 651 "mlds_to_managed.m"
                                    {
#line 652 "mlds_to_managed.m"
                                      {
#line 652 "mlds_to_managed.m"
                                        mercury__io__write_string_3_p_0((MR_String) "uint");
#line 652 "mlds_to_managed.m"
                                        return;
                                      }
#line 651 "mlds_to_managed.m"
                                    }
#line 639 "mlds_to_managed.m"
                                  else
#line 639 "mlds_to_managed.m"
                                    if ((ml_backend__mlds_to_managed__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
#line 653 "mlds_to_managed.m"
                                      {
#line 654 "mlds_to_managed.m"
                                        {
#line 654 "mlds_to_managed.m"
                                          mercury__io__write_string_3_p_0((MR_String) "ulong");
#line 654 "mlds_to_managed.m"
                                          return;
                                        }
#line 653 "mlds_to_managed.m"
                                      }
#line 639 "mlds_to_managed.m"
                                    else
#line 639 "mlds_to_managed.m"
                                      if ((ml_backend__mlds_to_managed__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 647 "mlds_to_managed.m"
                                        {
#line 648 "mlds_to_managed.m"
                                          {
#line 648 "mlds_to_managed.m"
                                            mercury__io__write_string_3_p_0((MR_String) "byte");
#line 648 "mlds_to_managed.m"
                                            return;
                                          }
#line 647 "mlds_to_managed.m"
                                        }
#line 639 "mlds_to_managed.m"
                                      else
#line 639 "mlds_to_managed.m"
                                        if (((MR_tag((MR_Word) ml_backend__mlds_to_managed__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 675 "mlds_to_managed.m"
                                          {
#line 675 "mlds_to_managed.m"
                                            MR_Word ml_backend__mlds_to_managed__ClassName_94 = (MR_Word) MR_body(((MR_Word) ml_backend__mlds_to_managed__HeadVar__1_1), (MR_Integer) 1);

#line 676 "mlds_to_managed.m"
                                            {
#line 676 "mlds_to_managed.m"
                                              ml_backend__mlds_to_managed__write_class_name_3_p_0(ml_backend__mlds_to_managed__ClassName_94);
#line 676 "mlds_to_managed.m"
                                              return;
                                            }
#line 675 "mlds_to_managed.m"
                                          }
#line 639 "mlds_to_managed.m"
                                        else
#line 639 "mlds_to_managed.m"
                                          if (((MR_tag((MR_Word) ml_backend__mlds_to_managed__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 677 "mlds_to_managed.m"
                                            {
#line 677 "mlds_to_managed.m"
                                              MR_Word ml_backend__mlds_to_managed__ClassName_99 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_managed__HeadVar__1_1, (MR_Integer) 0)));

#line 678 "mlds_to_managed.m"
                                              {
#line 678 "mlds_to_managed.m"
                                                ml_backend__mlds_to_managed__write_class_name_3_p_0(ml_backend__mlds_to_managed__ClassName_99);
#line 678 "mlds_to_managed.m"
                                                return;
                                              }
#line 677 "mlds_to_managed.m"
                                            }
#line 639 "mlds_to_managed.m"
                                          else
#line 639 "mlds_to_managed.m"
                                            if (((((MR_tag((MR_Word) ml_backend__mlds_to_managed__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_managed__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 690 "mlds_to_managed.m"
                                              {
#line 690 "mlds_to_managed.m"
                                                MR_Word ml_backend__mlds_to_managed__Type_124 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_managed__HeadVar__1_1, (MR_Integer) 1)));

#line 692 "mlds_to_managed.m"
                                                {
#line 692 "mlds_to_managed.m"
                                                  mercury__io__write_string_3_p_0((MR_String) "ref ");
                                                }
#line 693 "mlds_to_managed.m"
                                                {
#line 693 "mlds_to_managed.m"
                                                  ml_backend__mlds_to_managed__write_il_type_as_foreign_type_3_p_0(ml_backend__mlds_to_managed__Type_124);
#line 693 "mlds_to_managed.m"
                                                  return;
                                                }
#line 690 "mlds_to_managed.m"
                                              }
#line 639 "mlds_to_managed.m"
                                            else
#line 639 "mlds_to_managed.m"
                                              if (((((MR_tag((MR_Word) ml_backend__mlds_to_managed__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_managed__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 694 "mlds_to_managed.m"
                                                {
#line 694 "mlds_to_managed.m"
                                                  MR_Word ml_backend__mlds_to_managed__Type_131 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_managed__HeadVar__1_1, (MR_Integer) 1)));

#line 695 "mlds_to_managed.m"
                                                  {
#line 695 "mlds_to_managed.m"
                                                    ml_backend__mlds_to_managed__write_il_type_as_foreign_type_3_p_0(ml_backend__mlds_to_managed__Type_131);
                                                  }
#line 696 "mlds_to_managed.m"
                                                  {
#line 696 "mlds_to_managed.m"
                                                    mercury__io__write_string_3_p_0((MR_String) " *");
#line 696 "mlds_to_managed.m"
                                                    return;
                                                  }
#line 694 "mlds_to_managed.m"
                                                }
#line 639 "mlds_to_managed.m"
                                              else
#line 639 "mlds_to_managed.m"
                                                if (((((MR_tag((MR_Word) ml_backend__mlds_to_managed__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_managed__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 681 "mlds_to_managed.m"
                                                  {
#line 681 "mlds_to_managed.m"
                                                    MR_Word ml_backend__mlds_to_managed__Type_111 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_managed__HeadVar__1_1, (MR_Integer) 1)));
#line 681 "mlds_to_managed.m"
                                                    MR_Word ml_backend__mlds_to_managed__Bounds_112 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_managed__HeadVar__1_1, (MR_Integer) 2)));

#line 682 "mlds_to_managed.m"
                                                    {
#line 682 "mlds_to_managed.m"
                                                      ml_backend__mlds_to_managed__write_il_type_as_foreign_type_3_p_0(ml_backend__mlds_to_managed__Type_111);
                                                    }
#line 683 "mlds_to_managed.m"
                                                    {
#line 683 "mlds_to_managed.m"
                                                      mercury__io__write_string_3_p_0((MR_String) "[]");
                                                    }
#line 686 "mlds_to_managed.m"
                                                    if ((ml_backend__mlds_to_managed__Bounds_112 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 685 "mlds_to_managed.m"
                                                      {
#line 685 "mlds_to_managed.m"
                                                      }
#line 686 "mlds_to_managed.m"
                                                    else
#line 687 "mlds_to_managed.m"
                                                      {
#line 688 "mlds_to_managed.m"
                                                        {
#line 688 "mlds_to_managed.m"
                                                          mercury__require__sorry_3_p_0((MR_String) "ml_backend.mlds_to_managed", (MR_String) "predicate \140ml_backend.mlds_to_managed.write_il_simple_type_as_foreign_type\'/3", (MR_String) "arrays with bounds");
#line 688 "mlds_to_managed.m"
                                                          return;
                                                        }
#line 687 "mlds_to_managed.m"
                                                      }
#line 681 "mlds_to_managed.m"
                                                  }
#line 639 "mlds_to_managed.m"
                                                else
#line 679 "mlds_to_managed.m"
                                                  {
#line 680 "mlds_to_managed.m"
                                                    {
#line 680 "mlds_to_managed.m"
                                                      mercury__require__sorry_3_p_0((MR_String) "ml_backend.mlds_to_managed", (MR_String) "predicate \140ml_backend.mlds_to_managed.write_il_simple_type_as_foreign_type\'/3", (MR_String) "interfaces");
#line 680 "mlds_to_managed.m"
                                                      return;
                                                    }
#line 679 "mlds_to_managed.m"
                                                  }
#line 639 "mlds_to_managed.m"
  }
#line 636 "mlds_to_managed.m"
}

#line 624 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__write_il_type_modifier_as_foreign_type_3_p_0(
#line 624 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__HeadVar__1_1)
#line 624 "mlds_to_managed.m"
{
#line 627 "mlds_to_managed.m"
  {
#line 627 "mlds_to_managed.m"
    MR_bool ml_backend__mlds_to_managed__succeeded;

#line 627 "mlds_to_managed.m"
    if ((ml_backend__mlds_to_managed__HeadVar__1_1 == (MR_Integer) 0))
#line 627 "mlds_to_managed.m"
      {
#line 628 "mlds_to_managed.m"
        {
#line 628 "mlds_to_managed.m"
          mercury__io__write_string_3_p_0((MR_String) "const");
#line 628 "mlds_to_managed.m"
          return;
        }
#line 627 "mlds_to_managed.m"
      }
#line 627 "mlds_to_managed.m"
    else
#line 627 "mlds_to_managed.m"
      if ((ml_backend__mlds_to_managed__HeadVar__1_1 == (MR_Integer) 1))
#line 629 "mlds_to_managed.m"
        {
#line 630 "mlds_to_managed.m"
          {
#line 630 "mlds_to_managed.m"
            mercury__io__write_string_3_p_0((MR_String) "readonly");
#line 630 "mlds_to_managed.m"
            return;
          }
#line 629 "mlds_to_managed.m"
        }
#line 627 "mlds_to_managed.m"
      else
#line 631 "mlds_to_managed.m"
        {
#line 632 "mlds_to_managed.m"
          {
#line 632 "mlds_to_managed.m"
            mercury__io__write_string_3_p_0((MR_String) "volatile");
#line 632 "mlds_to_managed.m"
            return;
          }
#line 631 "mlds_to_managed.m"
        }
#line 627 "mlds_to_managed.m"
  }
#line 624 "mlds_to_managed.m"
}

#line 621 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__write_il_type_as_foreign_type_3_p_0_1(
#line 621 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__closure_arg,
#line 621 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_1,
#line 621 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_2,
#line 621 "mlds_to_managed.m"
  MR_Box * ml_backend__mlds_to_managed__wrapper_arg_3)
#line 621 "mlds_to_managed.m"
{
#line 621 "mlds_to_managed.m"
  {
#line 621 "mlds_to_managed.m"
    MR_Box ml_backend__mlds_to_managed__closure = ml_backend__mlds_to_managed__closure_arg;

#line 621 "mlds_to_managed.m"
    {
#line 621 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__write_il_type_modifier_as_foreign_type_3_p_0(((MR_Word) ml_backend__mlds_to_managed__wrapper_arg_1));
#line 621 "mlds_to_managed.m"
      return;
    }
#line 621 "mlds_to_managed.m"
  }
#line 621 "mlds_to_managed.m"
}

#line 617 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__write_il_type_as_foreign_type_3_p_0(
#line 617 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__HeadVar__1_1)
#line 617 "mlds_to_managed.m"
{
#line 619 "mlds_to_managed.m"
  {
#line 619 "mlds_to_managed.m"
    MR_bool ml_backend__mlds_to_managed__succeeded;
#line 619 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__Modifiers_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__HeadVar__1_1, (MR_Integer) 0)));
#line 619 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__SimpleType_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__HeadVar__1_1, (MR_Integer) 1)));

#line 620 "mlds_to_managed.m"
    {
#line 620 "mlds_to_managed.m"
      mercury__io__write_list_5_p_0((MR_Word) &ml_backend__ilds__ml_backend__ilds__type_ctor_info_type_modifier_0, ml_backend__mlds_to_managed__Modifiers_4, (MR_String) " ", (MR_Word) &ml_backend__mlds_to_managed_scalar_common_6[6]);
    }
#line 622 "mlds_to_managed.m"
    {
#line 622 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__write_il_simple_type_as_foreign_type_3_p_0(ml_backend__mlds_to_managed__SimpleType_5);
#line 622 "mlds_to_managed.m"
      return;
    }
#line 619 "mlds_to_managed.m"
  }
#line 617 "mlds_to_managed.m"
}

#line 621 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__write_input_arg_as_foreign_type_4_p_0_1(
#line 621 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__closure_arg,
#line 621 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_1,
#line 621 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_2,
#line 621 "mlds_to_managed.m"
  MR_Box * ml_backend__mlds_to_managed__wrapper_arg_3)
#line 621 "mlds_to_managed.m"
{
#line 621 "mlds_to_managed.m"
  {
#line 621 "mlds_to_managed.m"
    MR_Box ml_backend__mlds_to_managed__closure = ml_backend__mlds_to_managed__closure_arg;

#line 621 "mlds_to_managed.m"
    {
#line 621 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__write_il_type_modifier_as_foreign_type_3_p_0(((MR_Word) ml_backend__mlds_to_managed__wrapper_arg_1));
#line 621 "mlds_to_managed.m"
      return;
    }
#line 621 "mlds_to_managed.m"
  }
#line 621 "mlds_to_managed.m"
}

#line 589 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__write_input_arg_as_foreign_type_4_p_0(
#line 589 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__DataRep_5,
#line 589 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__Arg_6)
#line 589 "mlds_to_managed.m"
{
#line 592 "mlds_to_managed.m"
  {
#line 592 "mlds_to_managed.m"
    MR_bool ml_backend__mlds_to_managed__succeeded;
#line 592 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__EntityName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__Arg_6, (MR_Integer) 0)));
#line 592 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__Type_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__Arg_6, (MR_Integer) 1)));
#line 592 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__V_14_14;
#line 592 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__Modifiers_25;
#line 592 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__SimpleType_26;
#line 593 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed___GCStatement_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__Arg_6, (MR_Integer) 2)));
#line 598 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__VarName_11;
#line 596 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__V_18_18;

#line 594 "mlds_to_managed.m"
    {
#line 594 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__V_14_14 = ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_f_0(ml_backend__mlds_to_managed__DataRep_5, ml_backend__mlds_to_managed__Type_9);
    }
#line 619 "mlds_to_managed.m"
    ml_backend__mlds_to_managed__Modifiers_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_14_14, (MR_Integer) 0)));
#line 619 "mlds_to_managed.m"
    ml_backend__mlds_to_managed__SimpleType_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_14_14, (MR_Integer) 1)));
#line 620 "mlds_to_managed.m"
    {
#line 620 "mlds_to_managed.m"
      mercury__io__write_list_5_p_0((MR_Word) &ml_backend__ilds__ml_backend__ilds__type_ctor_info_type_modifier_0, ml_backend__mlds_to_managed__Modifiers_25, (MR_String) " ", (MR_Word) &ml_backend__mlds_to_managed_scalar_common_6[5]);
    }
#line 622 "mlds_to_managed.m"
    {
#line 622 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__write_il_simple_type_as_foreign_type_3_p_0(ml_backend__mlds_to_managed__SimpleType_26);
    }
#line 595 "mlds_to_managed.m"
    {
#line 595 "mlds_to_managed.m"
      mercury__io__write_string_3_p_0((MR_String) " ");
    }
#line 596 "mlds_to_managed.m"
    ml_backend__mlds_to_managed__succeeded = ((MR_tag((MR_Word) ml_backend__mlds_to_managed__EntityName_8)) == (MR_mktag((MR_Integer) 1)));
#line 596 "mlds_to_managed.m"
    if (ml_backend__mlds_to_managed__succeeded)
#line 596 "mlds_to_managed.m"
      {
#line 596 "mlds_to_managed.m"
        ml_backend__mlds_to_managed__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_managed__EntityName_8, (MR_Integer) 0)));
#line 596 "mlds_to_managed.m"
        ml_backend__mlds_to_managed__succeeded = ((MR_tag((MR_Word) ml_backend__mlds_to_managed__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 596 "mlds_to_managed.m"
        if (ml_backend__mlds_to_managed__succeeded)
#line 596 "mlds_to_managed.m"
          ml_backend__mlds_to_managed__VarName_11 = (MR_Word) MR_body(((MR_Word) ml_backend__mlds_to_managed__V_18_18), (MR_Integer) 1);
#line 596 "mlds_to_managed.m"
      }
#line 598 "mlds_to_managed.m"
    if (ml_backend__mlds_to_managed__succeeded)
#line 765 "mlds_to_managed.m"
      {
#line 765 "mlds_to_managed.m"
        MR_String ml_backend__mlds_to_managed__Name_38 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__VarName_11, (MR_Integer) 0)));
#line 765 "mlds_to_managed.m"
        MR_Word ml_backend__mlds_to_managed__MaybeNum_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__VarName_11, (MR_Integer) 1)));

#line 766 "mlds_to_managed.m"
        {
#line 766 "mlds_to_managed.m"
          mercury__io__write_string_3_p_0(ml_backend__mlds_to_managed__Name_38);
        }
#line 771 "mlds_to_managed.m"
        if ((ml_backend__mlds_to_managed__MaybeNum_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 772 "mlds_to_managed.m"
          {
#line 772 "mlds_to_managed.m"
          }
#line 771 "mlds_to_managed.m"
        else
#line 768 "mlds_to_managed.m"
          {
#line 768 "mlds_to_managed.m"
            MR_Integer ml_backend__mlds_to_managed__Num_41 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_managed__MaybeNum_39, (MR_Integer) 0)));

#line 769 "mlds_to_managed.m"
            {
#line 769 "mlds_to_managed.m"
              mercury__io__write_string_3_p_0((MR_String) "_");
            }
#line 770 "mlds_to_managed.m"
            {
#line 770 "mlds_to_managed.m"
              mercury__io__write_int_3_p_0(ml_backend__mlds_to_managed__Num_41);
#line 770 "mlds_to_managed.m"
              return;
            }
#line 768 "mlds_to_managed.m"
          }
#line 765 "mlds_to_managed.m"
      }
#line 598 "mlds_to_managed.m"
    else
#line 599 "mlds_to_managed.m"
      {
#line 599 "mlds_to_managed.m"
        {
#line 599 "mlds_to_managed.m"
          mercury__require__unexpected_3_p_0((MR_String) "ml_backend.mlds_to_managed", (MR_String) "predicate \140ml_backend.mlds_to_managed.write_input_arg_as_foreign_type\'/4", (MR_String) "found a variable in a list");
#line 599 "mlds_to_managed.m"
          return;
        }
#line 599 "mlds_to_managed.m"
      }
#line 592 "mlds_to_managed.m"
  }
#line 589 "mlds_to_managed.m"
}

#line 621 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__write_defn_decl_4_p_0_1(
#line 621 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__closure_arg,
#line 621 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_1,
#line 621 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_2,
#line 621 "mlds_to_managed.m"
  MR_Box * ml_backend__mlds_to_managed__wrapper_arg_3)
#line 621 "mlds_to_managed.m"
{
#line 621 "mlds_to_managed.m"
  {
#line 621 "mlds_to_managed.m"
    MR_Box ml_backend__mlds_to_managed__closure = ml_backend__mlds_to_managed__closure_arg;

#line 621 "mlds_to_managed.m"
    {
#line 621 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__write_il_type_modifier_as_foreign_type_3_p_0(((MR_Word) ml_backend__mlds_to_managed__wrapper_arg_1));
#line 621 "mlds_to_managed.m"
      return;
    }
#line 621 "mlds_to_managed.m"
  }
#line 621 "mlds_to_managed.m"
}

#line 565 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__write_defn_decl_4_p_0(
#line 565 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__DataRep_5,
#line 565 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__Defn_6)
#line 565 "mlds_to_managed.m"
{
#line 567 "mlds_to_managed.m"
  {
#line 567 "mlds_to_managed.m"
    MR_bool ml_backend__mlds_to_managed__succeeded;
#line 567 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__Name_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__Defn_6, (MR_Integer) 0)));
#line 567 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__DefnBody_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__Defn_6, (MR_Integer) 3)));
#line 568 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed___Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__Defn_6, (MR_Integer) 1)));
#line 568 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed___Flags_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__Defn_6, (MR_Integer) 2)));
#line 577 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__Type_12;
#line 577 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__VarName_15;
#line 570 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__V_18_18;
#line 570 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed___Initializer_13;
#line 570 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed___GCStatement_14;

#line 570 "mlds_to_managed.m"
    ml_backend__mlds_to_managed__succeeded = ((MR_tag((MR_Word) ml_backend__mlds_to_managed__DefnBody_11)) == (MR_mktag((MR_Integer) 1)));
#line 570 "mlds_to_managed.m"
    if (ml_backend__mlds_to_managed__succeeded)
#line 570 "mlds_to_managed.m"
      {
#line 570 "mlds_to_managed.m"
        ml_backend__mlds_to_managed__Type_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_managed__DefnBody_11, (MR_Integer) 0)));
#line 570 "mlds_to_managed.m"
        ml_backend__mlds_to_managed___Initializer_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_managed__DefnBody_11, (MR_Integer) 1)));
#line 570 "mlds_to_managed.m"
        ml_backend__mlds_to_managed___GCStatement_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_managed__DefnBody_11, (MR_Integer) 2)));
#line 571 "mlds_to_managed.m"
        ml_backend__mlds_to_managed__succeeded = ((MR_tag((MR_Word) ml_backend__mlds_to_managed__Name_8)) == (MR_mktag((MR_Integer) 1)));
#line 571 "mlds_to_managed.m"
        if (ml_backend__mlds_to_managed__succeeded)
#line 571 "mlds_to_managed.m"
          {
#line 571 "mlds_to_managed.m"
            ml_backend__mlds_to_managed__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_managed__Name_8, (MR_Integer) 0)));
#line 571 "mlds_to_managed.m"
            ml_backend__mlds_to_managed__succeeded = ((MR_tag((MR_Word) ml_backend__mlds_to_managed__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 571 "mlds_to_managed.m"
            if (ml_backend__mlds_to_managed__succeeded)
#line 571 "mlds_to_managed.m"
              ml_backend__mlds_to_managed__VarName_15 = (MR_Word) MR_body(((MR_Word) ml_backend__mlds_to_managed__V_18_18), (MR_Integer) 1);
#line 571 "mlds_to_managed.m"
          }
#line 570 "mlds_to_managed.m"
      }
#line 577 "mlds_to_managed.m"
    if (ml_backend__mlds_to_managed__succeeded)
#line 573 "mlds_to_managed.m"
      {
#line 573 "mlds_to_managed.m"
        MR_Word ml_backend__mlds_to_managed__ILType_33;
#line 573 "mlds_to_managed.m"
        MR_Word ml_backend__mlds_to_managed__Modifiers_37;
#line 573 "mlds_to_managed.m"
        MR_Word ml_backend__mlds_to_managed__SimpleType_38;
#line 573 "mlds_to_managed.m"
        MR_String ml_backend__mlds_to_managed__Name_50;
#line 573 "mlds_to_managed.m"
        MR_Word ml_backend__mlds_to_managed__MaybeNum_51;

#line 586 "mlds_to_managed.m"
        {
#line 586 "mlds_to_managed.m"
          ml_backend__mlds_to_managed__ILType_33 = ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_f_0(ml_backend__mlds_to_managed__DataRep_5, ml_backend__mlds_to_managed__Type_12);
        }
#line 619 "mlds_to_managed.m"
        ml_backend__mlds_to_managed__Modifiers_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__ILType_33, (MR_Integer) 0)));
#line 619 "mlds_to_managed.m"
        ml_backend__mlds_to_managed__SimpleType_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__ILType_33, (MR_Integer) 1)));
#line 620 "mlds_to_managed.m"
        {
#line 620 "mlds_to_managed.m"
          mercury__io__write_list_5_p_0((MR_Word) &ml_backend__ilds__ml_backend__ilds__type_ctor_info_type_modifier_0, ml_backend__mlds_to_managed__Modifiers_37, (MR_String) " ", (MR_Word) &ml_backend__mlds_to_managed_scalar_common_6[4]);
        }
#line 622 "mlds_to_managed.m"
        {
#line 622 "mlds_to_managed.m"
          ml_backend__mlds_to_managed__write_il_simple_type_as_foreign_type_3_p_0(ml_backend__mlds_to_managed__SimpleType_38);
        }
#line 574 "mlds_to_managed.m"
        {
#line 574 "mlds_to_managed.m"
          mercury__io__write_string_3_p_0((MR_String) " ");
        }
#line 765 "mlds_to_managed.m"
        ml_backend__mlds_to_managed__Name_50 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__VarName_15, (MR_Integer) 0)));
#line 765 "mlds_to_managed.m"
        ml_backend__mlds_to_managed__MaybeNum_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__VarName_15, (MR_Integer) 1)));
#line 766 "mlds_to_managed.m"
        {
#line 766 "mlds_to_managed.m"
          mercury__io__write_string_3_p_0(ml_backend__mlds_to_managed__Name_50);
        }
#line 771 "mlds_to_managed.m"
        if ((ml_backend__mlds_to_managed__MaybeNum_51 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 772 "mlds_to_managed.m"
          {
#line 772 "mlds_to_managed.m"
          }
#line 771 "mlds_to_managed.m"
        else
#line 768 "mlds_to_managed.m"
          {
#line 768 "mlds_to_managed.m"
            MR_Integer ml_backend__mlds_to_managed__Num_53 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_managed__MaybeNum_51, (MR_Integer) 0)));

#line 769 "mlds_to_managed.m"
            {
#line 769 "mlds_to_managed.m"
              mercury__io__write_string_3_p_0((MR_String) "_");
            }
#line 770 "mlds_to_managed.m"
            {
#line 770 "mlds_to_managed.m"
              mercury__io__write_int_3_p_0(ml_backend__mlds_to_managed__Num_53);
            }
#line 768 "mlds_to_managed.m"
          }
#line 576 "mlds_to_managed.m"
        {
#line 576 "mlds_to_managed.m"
          mercury__io__write_string_3_p_0((MR_String) ";\n");
#line 576 "mlds_to_managed.m"
          return;
        }
#line 573 "mlds_to_managed.m"
      }
#line 577 "mlds_to_managed.m"
    else
#line 579 "mlds_to_managed.m"
      {
#line 579 "mlds_to_managed.m"
        {
#line 579 "mlds_to_managed.m"
          mercury__require__sorry_3_p_0((MR_String) "ml_backend.mlds_to_managed", (MR_String) "predicate \140ml_backend.mlds_to_managed.write_defn_decl\'/4", (MR_String) "data_addr_const rval");
#line 579 "mlds_to_managed.m"
          return;
        }
#line 579 "mlds_to_managed.m"
      }
#line 567 "mlds_to_managed.m"
  }
#line 565 "mlds_to_managed.m"
}

#line 531 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__write_lval_4_p_0(
#line 531 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__DataRep_5,
#line 531 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__Lval_6)
#line 531 "mlds_to_managed.m"
{
#line 535 "mlds_to_managed.m"
  {
#line 535 "mlds_to_managed.m"
    MR_bool ml_backend__mlds_to_managed__succeeded;

#line 535 "mlds_to_managed.m"
    if (((MR_tag((MR_Word) ml_backend__mlds_to_managed__Lval_6)) == (MR_mktag((MR_Integer) 0))))
#line 535 "mlds_to_managed.m"
      {
#line 535 "mlds_to_managed.m"
        MR_Word ml_backend__mlds_to_managed__Rval_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__Lval_6, (MR_Integer) 1)));
#line 535 "mlds_to_managed.m"
        MR_Word ml_backend__mlds_to_managed__FieldId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__Lval_6, (MR_Integer) 2)));
#line 535 "mlds_to_managed.m"
        MR_Word ml_backend__mlds_to_managed__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__Lval_6, (MR_Integer) 0)));
#line 535 "mlds_to_managed.m"
        MR_Word ml_backend__mlds_to_managed__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__Lval_6, (MR_Integer) 3)));
#line 535 "mlds_to_managed.m"
        MR_Word ml_backend__mlds_to_managed__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__Lval_6, (MR_Integer) 4)));

#line 544 "mlds_to_managed.m"
        if (((MR_tag((MR_Word) ml_backend__mlds_to_managed__FieldId_10)) == (MR_mktag((MR_Integer) 1))))
#line 545 "mlds_to_managed.m"
          {
#line 545 "mlds_to_managed.m"
            MR_Word ml_backend__mlds_to_managed__FQFieldName_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_managed__FieldId_10, (MR_Integer) 0)));
#line 545 "mlds_to_managed.m"
            MR_String ml_backend__mlds_to_managed__FieldName_18;
#line 545 "mlds_to_managed.m"
            MR_Word ml_backend__mlds_to_managed___Type_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_managed__FieldId_10, (MR_Integer) 1)));
#line 550 "mlds_to_managed.m"
            MR_Word ml_backend__mlds_to_managed__V_16_16;
#line 550 "mlds_to_managed.m"
            MR_Word ml_backend__mlds_to_managed__V_17_17;

#line 546 "mlds_to_managed.m"
            {
#line 546 "mlds_to_managed.m"
              mercury__io__write_string_3_p_0((MR_String) "(");
            }
#line 547 "mlds_to_managed.m"
            {
#line 547 "mlds_to_managed.m"
              ml_backend__mlds_to_managed__write_rval_4_p_0(ml_backend__mlds_to_managed__DataRep_5, ml_backend__mlds_to_managed__Rval_9);
            }
#line 548 "mlds_to_managed.m"
            {
#line 548 "mlds_to_managed.m"
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
#line 549 "mlds_to_managed.m"
            {
#line 549 "mlds_to_managed.m"
              mercury__io__write_string_3_p_0((MR_String) ".");
            }
#line 550 "mlds_to_managed.m"
            ml_backend__mlds_to_managed__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__FQFieldName_14, (MR_Integer) 0)));
#line 550 "mlds_to_managed.m"
            ml_backend__mlds_to_managed__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__FQFieldName_14, (MR_Integer) 1)));
#line 550 "mlds_to_managed.m"
            ml_backend__mlds_to_managed__FieldName_18 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__FQFieldName_14, (MR_Integer) 2)));
#line 551 "mlds_to_managed.m"
            {
#line 551 "mlds_to_managed.m"
              mercury__io__write_string_3_p_0(ml_backend__mlds_to_managed__FieldName_18);
#line 551 "mlds_to_managed.m"
              return;
            }
#line 545 "mlds_to_managed.m"
          }
#line 544 "mlds_to_managed.m"
        else
#line 537 "mlds_to_managed.m"
          {
#line 537 "mlds_to_managed.m"
            MR_Word ml_backend__mlds_to_managed__OffSet_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__FieldId_10, (MR_Integer) 0)));

#line 538 "mlds_to_managed.m"
            {
#line 538 "mlds_to_managed.m"
              mercury__io__write_string_3_p_0((MR_String) "(");
            }
#line 539 "mlds_to_managed.m"
            {
#line 539 "mlds_to_managed.m"
              ml_backend__mlds_to_managed__write_rval_4_p_0(ml_backend__mlds_to_managed__DataRep_5, ml_backend__mlds_to_managed__Rval_9);
            }
#line 540 "mlds_to_managed.m"
            {
#line 540 "mlds_to_managed.m"
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
#line 541 "mlds_to_managed.m"
            {
#line 541 "mlds_to_managed.m"
              mercury__io__write_string_3_p_0((MR_String) "[");
            }
#line 542 "mlds_to_managed.m"
            {
#line 542 "mlds_to_managed.m"
              ml_backend__mlds_to_managed__write_rval_4_p_0(ml_backend__mlds_to_managed__DataRep_5, ml_backend__mlds_to_managed__OffSet_13);
            }
#line 543 "mlds_to_managed.m"
            {
#line 543 "mlds_to_managed.m"
              mercury__io__write_string_3_p_0((MR_String) "]");
#line 543 "mlds_to_managed.m"
              return;
            }
#line 537 "mlds_to_managed.m"
          }
#line 535 "mlds_to_managed.m"
      }
#line 535 "mlds_to_managed.m"
    else
#line 535 "mlds_to_managed.m"
      if (((MR_tag((MR_Word) ml_backend__mlds_to_managed__Lval_6)) == (MR_mktag((MR_Integer) 2))))
#line 557 "mlds_to_managed.m"
        {
#line 558 "mlds_to_managed.m"
          {
#line 558 "mlds_to_managed.m"
            mercury__require__sorry_3_p_0((MR_String) "ml_backend.mlds_to_managed", (MR_String) "predicate \140ml_backend.mlds_to_managed.write_lval\'/4", (MR_String) "global_var_ref NYI");
#line 558 "mlds_to_managed.m"
            return;
          }
#line 557 "mlds_to_managed.m"
        }
#line 535 "mlds_to_managed.m"
      else
#line 535 "mlds_to_managed.m"
        if (((MR_tag((MR_Word) ml_backend__mlds_to_managed__Lval_6)) == (MR_mktag((MR_Integer) 1))))
#line 554 "mlds_to_managed.m"
          {
#line 554 "mlds_to_managed.m"
            MR_Word ml_backend__mlds_to_managed__Rval_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_managed__Lval_6, (MR_Integer) 0)));
#line 554 "mlds_to_managed.m"
            MR_Word ml_backend__mlds_to_managed__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_managed__Lval_6, (MR_Integer) 1)));

#line 555 "mlds_to_managed.m"
            {
#line 555 "mlds_to_managed.m"
              ml_backend__mlds_to_managed__write_rval_4_p_0(ml_backend__mlds_to_managed__DataRep_5, ml_backend__mlds_to_managed__Rval_51);
#line 555 "mlds_to_managed.m"
              return;
            }
#line 554 "mlds_to_managed.m"
          }
#line 535 "mlds_to_managed.m"
        else
#line 560 "mlds_to_managed.m"
          {
#line 560 "mlds_to_managed.m"
            MR_Word ml_backend__mlds_to_managed__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_managed__Lval_6, (MR_Integer) 0)));
#line 560 "mlds_to_managed.m"
            MR_Word ml_backend__mlds_to_managed__VarName_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__Var_21, (MR_Integer) 2)));
#line 560 "mlds_to_managed.m"
            MR_String ml_backend__mlds_to_managed__Name_54 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__VarName_25, (MR_Integer) 0)));
#line 560 "mlds_to_managed.m"
            MR_Word ml_backend__mlds_to_managed__MaybeNum_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__VarName_25, (MR_Integer) 1)));
#line 560 "mlds_to_managed.m"
            MR_Word ml_backend__mlds_to_managed___VarType_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_managed__Lval_6, (MR_Integer) 1)));
#line 561 "mlds_to_managed.m"
            MR_Word ml_backend__mlds_to_managed__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__Var_21, (MR_Integer) 0)));
#line 561 "mlds_to_managed.m"
            MR_Word ml_backend__mlds_to_managed__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__Var_21, (MR_Integer) 1)));

#line 766 "mlds_to_managed.m"
            {
#line 766 "mlds_to_managed.m"
              mercury__io__write_string_3_p_0(ml_backend__mlds_to_managed__Name_54);
            }
#line 771 "mlds_to_managed.m"
            if ((ml_backend__mlds_to_managed__MaybeNum_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 772 "mlds_to_managed.m"
              {
#line 772 "mlds_to_managed.m"
              }
#line 771 "mlds_to_managed.m"
            else
#line 768 "mlds_to_managed.m"
              {
#line 768 "mlds_to_managed.m"
                MR_Integer ml_backend__mlds_to_managed__Num_57 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_managed__MaybeNum_55, (MR_Integer) 0)));

#line 769 "mlds_to_managed.m"
                {
#line 769 "mlds_to_managed.m"
                  mercury__io__write_string_3_p_0((MR_String) "_");
                }
#line 770 "mlds_to_managed.m"
                {
#line 770 "mlds_to_managed.m"
                  mercury__io__write_int_3_p_0(ml_backend__mlds_to_managed__Num_57);
#line 770 "mlds_to_managed.m"
                  return;
                }
#line 768 "mlds_to_managed.m"
              }
#line 560 "mlds_to_managed.m"
          }
#line 535 "mlds_to_managed.m"
  }
#line 531 "mlds_to_managed.m"
}

#line 485 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__write_rval_const_3_p_0(
#line 485 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__HeadVar__1_1)
#line 485 "mlds_to_managed.m"
{
#line 487 "mlds_to_managed.m"
  {
#line 487 "mlds_to_managed.m"
    MR_bool ml_backend__mlds_to_managed__succeeded;

#line 487 "mlds_to_managed.m"
    if ((ml_backend__mlds_to_managed__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 489 "mlds_to_managed.m"
      {
#line 490 "mlds_to_managed.m"
        {
#line 490 "mlds_to_managed.m"
          mercury__io__write_string_3_p_0((MR_String) "0");
#line 490 "mlds_to_managed.m"
          return;
        }
#line 489 "mlds_to_managed.m"
      }
#line 487 "mlds_to_managed.m"
    else
#line 487 "mlds_to_managed.m"
      if ((ml_backend__mlds_to_managed__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 487 "mlds_to_managed.m"
        {
#line 488 "mlds_to_managed.m"
          {
#line 488 "mlds_to_managed.m"
            mercury__io__write_string_3_p_0((MR_String) "1");
#line 488 "mlds_to_managed.m"
            return;
          }
#line 487 "mlds_to_managed.m"
        }
#line 487 "mlds_to_managed.m"
      else
#line 487 "mlds_to_managed.m"
        if (((MR_tag((MR_Word) ml_backend__mlds_to_managed__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 526 "mlds_to_managed.m"
          {
#line 527 "mlds_to_managed.m"
            {
#line 527 "mlds_to_managed.m"
              mercury__require__sorry_3_p_0((MR_String) "ml_backend.mlds_to_managed", (MR_String) "predicate \140ml_backend.mlds_to_managed.write_rval_const\'/3", (MR_String) "data_addr_const rval");
#line 527 "mlds_to_managed.m"
              return;
            }
#line 526 "mlds_to_managed.m"
          }
#line 487 "mlds_to_managed.m"
        else
#line 487 "mlds_to_managed.m"
          if (((MR_tag((MR_Word) ml_backend__mlds_to_managed__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 491 "mlds_to_managed.m"
            {
#line 491 "mlds_to_managed.m"
              MR_Integer ml_backend__mlds_to_managed__I_100 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_managed__HeadVar__1_1, (MR_Integer) 0)));

#line 496 "mlds_to_managed.m"
              {
#line 496 "mlds_to_managed.m"
                mercury__io__write_int_3_p_0(ml_backend__mlds_to_managed__I_100);
#line 496 "mlds_to_managed.m"
                return;
              }
#line 491 "mlds_to_managed.m"
            }
#line 487 "mlds_to_managed.m"
          else
#line 487 "mlds_to_managed.m"
            if (((((MR_tag((MR_Word) ml_backend__mlds_to_managed__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_managed__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 491 "mlds_to_managed.m"
              {
#line 491 "mlds_to_managed.m"
                MR_Integer ml_backend__mlds_to_managed__I_16 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_managed__HeadVar__1_1, (MR_Integer) 1)));

#line 496 "mlds_to_managed.m"
                {
#line 496 "mlds_to_managed.m"
                  mercury__io__write_int_3_p_0(ml_backend__mlds_to_managed__I_16);
#line 496 "mlds_to_managed.m"
                  return;
                }
#line 491 "mlds_to_managed.m"
              }
#line 487 "mlds_to_managed.m"
            else
#line 487 "mlds_to_managed.m"
              if (((((MR_tag((MR_Word) ml_backend__mlds_to_managed__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_managed__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 512 "mlds_to_managed.m"
                {
#line 512 "mlds_to_managed.m"
                  MR_Word ml_backend__mlds_to_managed__CodeAddrConst_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_managed__HeadVar__1_1, (MR_Integer) 1)));

#line 519 "mlds_to_managed.m"
                  if (((MR_tag((MR_Word) ml_backend__mlds_to_managed__CodeAddrConst_58)) == (MR_mktag((MR_Integer) 1))))
#line 520 "mlds_to_managed.m"
                    {
#line 520 "mlds_to_managed.m"
                      MR_Integer ml_backend__mlds_to_managed__SeqNum_64 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_managed__CodeAddrConst_58, (MR_Integer) 1)));
#line 520 "mlds_to_managed.m"
                      MR_Word ml_backend__mlds_to_managed__V_67_67;
#line 520 "mlds_to_managed.m"
                      MR_Word ml_backend__mlds_to_managed__ProcLabel_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_managed__CodeAddrConst_58, (MR_Integer) 0)));
#line 520 "mlds_to_managed.m"
                      MR_Word ml_backend__mlds_to_managed__ClassName_80;
#line 520 "mlds_to_managed.m"
                      MR_String ml_backend__mlds_to_managed__MangledName_81;
#line 520 "mlds_to_managed.m"
                      MR_Word ml_backend__mlds_to_managed___FuncSignature_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_managed__CodeAddrConst_58, (MR_Integer) 2)));

#line 521 "mlds_to_managed.m"
                      {
#line 521 "mlds_to_managed.m"
                        ml_backend__mlds_to_managed__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 521 "mlds_to_managed.m"
                        MR_hl_field(MR_mktag(1), ml_backend__mlds_to_managed__V_67_67, 0) = ((MR_Box) (ml_backend__mlds_to_managed__SeqNum_64));
#line 521 "mlds_to_managed.m"
                      }
#line 521 "mlds_to_managed.m"
                      {
#line 521 "mlds_to_managed.m"
                        ml_backend__mlds_to_il__mangle_mlds_proc_label_4_p_0(ml_backend__mlds_to_managed__ProcLabel_78, ml_backend__mlds_to_managed__V_67_67, &ml_backend__mlds_to_managed__ClassName_80, &ml_backend__mlds_to_managed__MangledName_81);
                      }
#line 522 "mlds_to_managed.m"
                      {
#line 522 "mlds_to_managed.m"
                        ml_backend__mlds_to_managed__write_class_name_3_p_0(ml_backend__mlds_to_managed__ClassName_80);
                      }
#line 523 "mlds_to_managed.m"
                      {
#line 523 "mlds_to_managed.m"
                        mercury__io__write_string_3_p_0((MR_String) ".");
                      }
#line 524 "mlds_to_managed.m"
                      {
#line 524 "mlds_to_managed.m"
                        mercury__io__write_string_3_p_0(ml_backend__mlds_to_managed__MangledName_81);
#line 524 "mlds_to_managed.m"
                        return;
                      }
#line 520 "mlds_to_managed.m"
                    }
#line 519 "mlds_to_managed.m"
                  else
#line 514 "mlds_to_managed.m"
                    {
#line 514 "mlds_to_managed.m"
                      MR_Word ml_backend__mlds_to_managed__ProcLabel_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__CodeAddrConst_58, (MR_Integer) 0)));
#line 514 "mlds_to_managed.m"
                      MR_Word ml_backend__mlds_to_managed__ClassName_62;
#line 514 "mlds_to_managed.m"
                      MR_String ml_backend__mlds_to_managed__MangledName_63;
#line 514 "mlds_to_managed.m"
                      MR_Word ml_backend__mlds_to_managed___FuncSignature_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__CodeAddrConst_58, (MR_Integer) 1)));

#line 515 "mlds_to_managed.m"
                      {
#line 515 "mlds_to_managed.m"
                        ml_backend__mlds_to_il__mangle_mlds_proc_label_4_p_0(ml_backend__mlds_to_managed__ProcLabel_60, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ml_backend__mlds_to_managed__ClassName_62, &ml_backend__mlds_to_managed__MangledName_63);
                      }
#line 516 "mlds_to_managed.m"
                      {
#line 516 "mlds_to_managed.m"
                        ml_backend__mlds_to_managed__write_class_name_3_p_0(ml_backend__mlds_to_managed__ClassName_62);
                      }
#line 517 "mlds_to_managed.m"
                      {
#line 517 "mlds_to_managed.m"
                        mercury__io__write_string_3_p_0((MR_String) ".");
                      }
#line 518 "mlds_to_managed.m"
                      {
#line 518 "mlds_to_managed.m"
                        mercury__io__write_string_3_p_0(ml_backend__mlds_to_managed__MangledName_63);
#line 518 "mlds_to_managed.m"
                        return;
                      }
#line 514 "mlds_to_managed.m"
                    }
#line 512 "mlds_to_managed.m"
                }
#line 487 "mlds_to_managed.m"
              else
#line 487 "mlds_to_managed.m"
                if (((((MR_tag((MR_Word) ml_backend__mlds_to_managed__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_managed__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 491 "mlds_to_managed.m"
                  {
#line 491 "mlds_to_managed.m"
                    MR_Integer ml_backend__mlds_to_managed__I_96 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_managed__HeadVar__1_1, (MR_Integer) 1)));
#line 493 "mlds_to_managed.m"
                    MR_Word ml_backend__mlds_to_managed__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_managed__HeadVar__1_1, (MR_Integer) 2)));

#line 496 "mlds_to_managed.m"
                    {
#line 496 "mlds_to_managed.m"
                      mercury__io__write_int_3_p_0(ml_backend__mlds_to_managed__I_96);
#line 496 "mlds_to_managed.m"
                      return;
                    }
#line 491 "mlds_to_managed.m"
                  }
#line 487 "mlds_to_managed.m"
                else
#line 487 "mlds_to_managed.m"
                  if (((((MR_tag((MR_Word) ml_backend__mlds_to_managed__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_managed__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 499 "mlds_to_managed.m"
                    {
#line 499 "mlds_to_managed.m"
                      MR_Float ml_backend__mlds_to_managed__F_30 = MR_unbox_float((MR_hl_field(MR_mktag(3), ml_backend__mlds_to_managed__HeadVar__1_1, (MR_Integer) 1)));

#line 500 "mlds_to_managed.m"
                      {
#line 500 "mlds_to_managed.m"
                        mercury__io__write_float_3_p_0(ml_backend__mlds_to_managed__F_30);
#line 500 "mlds_to_managed.m"
                        return;
                      }
#line 499 "mlds_to_managed.m"
                    }
#line 487 "mlds_to_managed.m"
                  else
#line 487 "mlds_to_managed.m"
                    if (((((MR_tag((MR_Word) ml_backend__mlds_to_managed__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_managed__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 497 "mlds_to_managed.m"
                      {
#line 498 "mlds_to_managed.m"
                        {
#line 498 "mlds_to_managed.m"
                          mercury__require__sorry_3_p_0((MR_String) "ml_backend.mlds_to_managed", (MR_String) "predicate \140ml_backend.mlds_to_managed.write_rval_const\'/3", (MR_String) "mlconst_foreign for managed languages");
#line 498 "mlds_to_managed.m"
                          return;
                        }
#line 497 "mlds_to_managed.m"
                      }
#line 487 "mlds_to_managed.m"
                    else
#line 487 "mlds_to_managed.m"
                      if (((((MR_tag((MR_Word) ml_backend__mlds_to_managed__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_managed__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 506 "mlds_to_managed.m"
                        {
#line 506 "mlds_to_managed.m"
                          MR_Word ml_backend__mlds_to_managed__S_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_managed__HeadVar__1_1, (MR_Integer) 1)));

#line 507 "mlds_to_managed.m"
                          {
#line 507 "mlds_to_managed.m"
                            mercury__io__write_string_3_p_0((MR_String) "\"");
                          }
#line 508 "mlds_to_managed.m"
                          {
#line 508 "mlds_to_managed.m"
                            backend_libs__c_util__output_quoted_multi_string_3_p_0(ml_backend__mlds_to_managed__S_44);
                          }
#line 509 "mlds_to_managed.m"
                          {
#line 509 "mlds_to_managed.m"
                            mercury__io__write_string_3_p_0((MR_String) "\"");
#line 509 "mlds_to_managed.m"
                            return;
                          }
#line 506 "mlds_to_managed.m"
                        }
#line 487 "mlds_to_managed.m"
                      else
#line 487 "mlds_to_managed.m"
                        if (((((MR_tag((MR_Word) ml_backend__mlds_to_managed__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_managed__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 510 "mlds_to_managed.m"
                          {
#line 510 "mlds_to_managed.m"
                            MR_String ml_backend__mlds_to_managed__NamedConst_53 = ((MR_String) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_managed__HeadVar__1_1, (MR_Integer) 1)));

#line 511 "mlds_to_managed.m"
                            {
#line 511 "mlds_to_managed.m"
                              mercury__io__write_string_3_p_0(ml_backend__mlds_to_managed__NamedConst_53);
#line 511 "mlds_to_managed.m"
                              return;
                            }
#line 510 "mlds_to_managed.m"
                          }
#line 487 "mlds_to_managed.m"
                        else
#line 487 "mlds_to_managed.m"
                          if (((((MR_tag((MR_Word) ml_backend__mlds_to_managed__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_managed__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 528 "mlds_to_managed.m"
                            {
#line 529 "mlds_to_managed.m"
                              {
#line 529 "mlds_to_managed.m"
                                mercury__io__write_string_3_p_0((MR_String) "null");
#line 529 "mlds_to_managed.m"
                                return;
                              }
#line 528 "mlds_to_managed.m"
                            }
#line 487 "mlds_to_managed.m"
                          else
#line 502 "mlds_to_managed.m"
                            {
#line 502 "mlds_to_managed.m"
                              MR_String ml_backend__mlds_to_managed__S_35 = ((MR_String) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_managed__HeadVar__1_1, (MR_Integer) 1)));

#line 503 "mlds_to_managed.m"
                              {
#line 503 "mlds_to_managed.m"
                                mercury__io__write_string_3_p_0((MR_String) "\"");
                              }
#line 504 "mlds_to_managed.m"
                              {
#line 504 "mlds_to_managed.m"
                                backend_libs__c_util__output_quoted_string_3_p_0(ml_backend__mlds_to_managed__S_35);
                              }
#line 505 "mlds_to_managed.m"
                              {
#line 505 "mlds_to_managed.m"
                                mercury__io__write_string_3_p_0((MR_String) "\"");
#line 505 "mlds_to_managed.m"
                                return;
                              }
#line 502 "mlds_to_managed.m"
                            }
#line 487 "mlds_to_managed.m"
  }
#line 485 "mlds_to_managed.m"
}

#line 621 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__write_rval_4_p_0_1(
#line 621 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__closure_arg,
#line 621 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_1,
#line 621 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_2,
#line 621 "mlds_to_managed.m"
  MR_Box * ml_backend__mlds_to_managed__wrapper_arg_3)
#line 621 "mlds_to_managed.m"
{
#line 621 "mlds_to_managed.m"
  {
#line 621 "mlds_to_managed.m"
    MR_Box ml_backend__mlds_to_managed__closure = ml_backend__mlds_to_managed__closure_arg;

#line 621 "mlds_to_managed.m"
    {
#line 621 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__write_il_type_modifier_as_foreign_type_3_p_0(((MR_Word) ml_backend__mlds_to_managed__wrapper_arg_1));
#line 621 "mlds_to_managed.m"
      return;
    }
#line 621 "mlds_to_managed.m"
  }
#line 621 "mlds_to_managed.m"
}

#line 425 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__write_rval_4_p_0(
#line 425 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__DataRep_5,
#line 425 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__Rval_6)
#line 425 "mlds_to_managed.m"
{
#line 429 "mlds_to_managed.m"
  while (MR_TRUE)
#line 429 "mlds_to_managed.m"
    {
#line 429 "mlds_to_managed.m"
      /* tailcall optimized into a loop */
#line 429 "mlds_to_managed.m"
      {
#line 429 "mlds_to_managed.m"
        MR_bool ml_backend__mlds_to_managed__succeeded;

#line 429 "mlds_to_managed.m"
        if (((MR_tag((MR_Word) ml_backend__mlds_to_managed__Rval_6)) == (MR_mktag((MR_Integer) 1))))
#line 429 "mlds_to_managed.m"
          {
#line 429 "mlds_to_managed.m"
            MR_Word ml_backend__mlds_to_managed__Lval_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_managed__Rval_6, (MR_Integer) 0)));

#line 430 "mlds_to_managed.m"
            {
#line 430 "mlds_to_managed.m"
              ml_backend__mlds_to_managed__write_lval_4_p_0(ml_backend__mlds_to_managed__DataRep_5, ml_backend__mlds_to_managed__Lval_8);
#line 430 "mlds_to_managed.m"
              return;
            }
#line 429 "mlds_to_managed.m"
          }
#line 429 "mlds_to_managed.m"
        else
#line 429 "mlds_to_managed.m"
          if (((MR_tag((MR_Word) ml_backend__mlds_to_managed__Rval_6)) == (MR_mktag((MR_Integer) 2))))
#line 432 "mlds_to_managed.m"
            {
#line 433 "mlds_to_managed.m"
              {
#line 433 "mlds_to_managed.m"
                mercury__require__sorry_3_p_0((MR_String) "ml_backend.mlds_to_managed", (MR_String) "predicate \140ml_backend.mlds_to_managed.write_rval\'/4", (MR_String) "mkword rval");
#line 433 "mlds_to_managed.m"
                return;
              }
#line 432 "mlds_to_managed.m"
            }
#line 429 "mlds_to_managed.m"
          else
#line 429 "mlds_to_managed.m"
            if (((MR_tag((MR_Word) ml_backend__mlds_to_managed__Rval_6)) == (MR_mktag((MR_Integer) 0))))
#line 472 "mlds_to_managed.m"
              {
#line 473 "mlds_to_managed.m"
                {
#line 473 "mlds_to_managed.m"
                  mercury__require__sorry_3_p_0((MR_String) "ml_backend.mlds_to_managed", (MR_String) "predicate \140ml_backend.mlds_to_managed.write_rval\'/4", (MR_String) "scalar_common rval");
#line 473 "mlds_to_managed.m"
                  return;
                }
#line 472 "mlds_to_managed.m"
              }
#line 429 "mlds_to_managed.m"
            else
#line 429 "mlds_to_managed.m"
              if (((((MR_tag((MR_Word) ml_backend__mlds_to_managed__Rval_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_managed__Rval_6, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 458 "mlds_to_managed.m"
                {
#line 458 "mlds_to_managed.m"
                  MR_Word ml_backend__mlds_to_managed__Binop_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_managed__Rval_6, (MR_Integer) 1)));
#line 458 "mlds_to_managed.m"
                  MR_Word ml_backend__mlds_to_managed__RvalB_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_managed__Rval_6, (MR_Integer) 3)));
#line 458 "mlds_to_managed.m"
                  MR_Word ml_backend__mlds_to_managed__Category_19;
#line 458 "mlds_to_managed.m"
                  MR_String ml_backend__mlds_to_managed__BinopStr_20;
#line 458 "mlds_to_managed.m"
                  MR_Word ml_backend__mlds_to_managed__RvalA_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_managed__Rval_6, (MR_Integer) 2)));

#line 459 "mlds_to_managed.m"
                  {
#line 459 "mlds_to_managed.m"
                    backend_libs__c_util__binop_category_string_3_p_0(ml_backend__mlds_to_managed__Binop_17, &ml_backend__mlds_to_managed__Category_19, &ml_backend__mlds_to_managed__BinopStr_20);
                  }
#line 460 "mlds_to_managed.m"
                  ml_backend__mlds_to_managed__succeeded = (ml_backend__mlds_to_managed__Category_19 == (MR_Integer) 6);
#line 468 "mlds_to_managed.m"
                  if (ml_backend__mlds_to_managed__succeeded)
#line 461 "mlds_to_managed.m"
                    {
#line 461 "mlds_to_managed.m"
                      {
#line 461 "mlds_to_managed.m"
                        mercury__io__write_string_3_p_0((MR_String) "(");
                      }
#line 462 "mlds_to_managed.m"
                      {
#line 462 "mlds_to_managed.m"
                        ml_backend__mlds_to_managed__write_rval_4_p_0(ml_backend__mlds_to_managed__DataRep_5, ml_backend__mlds_to_managed__RvalA_74);
                      }
#line 463 "mlds_to_managed.m"
                      {
#line 463 "mlds_to_managed.m"
                        mercury__io__write_string_3_p_0((MR_String) ") ");
                      }
#line 464 "mlds_to_managed.m"
                      {
#line 464 "mlds_to_managed.m"
                        mercury__io__write_string_3_p_0(ml_backend__mlds_to_managed__BinopStr_20);
                      }
#line 465 "mlds_to_managed.m"
                      {
#line 465 "mlds_to_managed.m"
                        mercury__io__write_string_3_p_0((MR_String) " (");
                      }
#line 466 "mlds_to_managed.m"
                      {
#line 466 "mlds_to_managed.m"
                        ml_backend__mlds_to_managed__write_rval_4_p_0(ml_backend__mlds_to_managed__DataRep_5, ml_backend__mlds_to_managed__RvalB_18);
                      }
#line 467 "mlds_to_managed.m"
                      {
#line 467 "mlds_to_managed.m"
                        mercury__io__write_string_3_p_0((MR_String) ")");
#line 467 "mlds_to_managed.m"
                        return;
                      }
#line 461 "mlds_to_managed.m"
                    }
#line 468 "mlds_to_managed.m"
                  else
#line 469 "mlds_to_managed.m"
                    {
#line 469 "mlds_to_managed.m"
                      {
#line 469 "mlds_to_managed.m"
                        mercury__require__sorry_3_p_0((MR_String) "ml_backend.mlds_to_managed", (MR_String) "predicate \140ml_backend.mlds_to_managed.write_rval\'/4", (MR_String) "binop rval");
#line 469 "mlds_to_managed.m"
                        return;
                      }
#line 469 "mlds_to_managed.m"
                    }
#line 458 "mlds_to_managed.m"
                }
#line 429 "mlds_to_managed.m"
              else
#line 429 "mlds_to_managed.m"
                if (((((MR_tag((MR_Word) ml_backend__mlds_to_managed__Rval_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_managed__Rval_6, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 435 "mlds_to_managed.m"
                  {
#line 435 "mlds_to_managed.m"
                    MR_Word ml_backend__mlds_to_managed__RvalConst_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_managed__Rval_6, (MR_Integer) 1)));

#line 436 "mlds_to_managed.m"
                    {
#line 436 "mlds_to_managed.m"
                      ml_backend__mlds_to_managed__write_rval_const_3_p_0(ml_backend__mlds_to_managed__RvalConst_11);
#line 436 "mlds_to_managed.m"
                      return;
                    }
#line 435 "mlds_to_managed.m"
                  }
#line 429 "mlds_to_managed.m"
                else
#line 429 "mlds_to_managed.m"
                  if (((((MR_tag((MR_Word) ml_backend__mlds_to_managed__Rval_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_managed__Rval_6, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 478 "mlds_to_managed.m"
                    {
#line 479 "mlds_to_managed.m"
                      {
#line 479 "mlds_to_managed.m"
                        mercury__require__sorry_3_p_0((MR_String) "ml_backend.mlds_to_managed", (MR_String) "predicate \140ml_backend.mlds_to_managed.write_rval\'/4", (MR_String) "mem_addr rval");
#line 479 "mlds_to_managed.m"
                        return;
                      }
#line 478 "mlds_to_managed.m"
                    }
#line 429 "mlds_to_managed.m"
                  else
#line 429 "mlds_to_managed.m"
                    if (((((MR_tag((MR_Word) ml_backend__mlds_to_managed__Rval_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_managed__Rval_6, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 481 "mlds_to_managed.m"
                      {
#line 482 "mlds_to_managed.m"
                        {
#line 482 "mlds_to_managed.m"
                          mercury__require__sorry_3_p_0((MR_String) "ml_backend.mlds_to_managed", (MR_String) "predicate \140ml_backend.mlds_to_managed.write_rval\'/4", (MR_String) "self rval");
#line 482 "mlds_to_managed.m"
                          return;
                        }
#line 481 "mlds_to_managed.m"
                      }
#line 429 "mlds_to_managed.m"
                    else
#line 429 "mlds_to_managed.m"
                      if (((((MR_tag((MR_Word) ml_backend__mlds_to_managed__Rval_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_managed__Rval_6, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 438 "mlds_to_managed.m"
                        {
#line 438 "mlds_to_managed.m"
                          MR_Word ml_backend__mlds_to_managed__Unop_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_managed__Rval_6, (MR_Integer) 1)));
#line 438 "mlds_to_managed.m"
                          MR_Word ml_backend__mlds_to_managed__RvalA_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_managed__Rval_6, (MR_Integer) 2)));
#line 447 "mlds_to_managed.m"
                          MR_String ml_backend__mlds_to_managed__UnopStr_15;
#line 440 "mlds_to_managed.m"
                          MR_Word ml_backend__mlds_to_managed__StdUnop_14;

#line 440 "mlds_to_managed.m"
                          ml_backend__mlds_to_managed__succeeded = ((MR_tag((MR_Word) ml_backend__mlds_to_managed__Unop_12)) == (MR_mktag((MR_Integer) 3)));
#line 440 "mlds_to_managed.m"
                          if (ml_backend__mlds_to_managed__succeeded)
#line 440 "mlds_to_managed.m"
                            {
#line 440 "mlds_to_managed.m"
                              ml_backend__mlds_to_managed__StdUnop_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_managed__Unop_12, (MR_Integer) 0)));
#line 441 "mlds_to_managed.m"
                              {
#line 441 "mlds_to_managed.m"
                                backend_libs__c_util__unary_prefix_op_2_p_0(ml_backend__mlds_to_managed__StdUnop_14, &ml_backend__mlds_to_managed__UnopStr_15);
                              }
#line 441 "mlds_to_managed.m"
                              ml_backend__mlds_to_managed__succeeded = MR_TRUE;
#line 440 "mlds_to_managed.m"
                            }
#line 447 "mlds_to_managed.m"
                          if (ml_backend__mlds_to_managed__succeeded)
#line 443 "mlds_to_managed.m"
                            {
#line 443 "mlds_to_managed.m"
                              {
#line 443 "mlds_to_managed.m"
                                mercury__io__write_string_3_p_0(ml_backend__mlds_to_managed__UnopStr_15);
                              }
#line 444 "mlds_to_managed.m"
                              {
#line 444 "mlds_to_managed.m"
                                mercury__io__write_string_3_p_0((MR_String) "(");
                              }
#line 445 "mlds_to_managed.m"
                              {
#line 445 "mlds_to_managed.m"
                                ml_backend__mlds_to_managed__write_rval_4_p_0(ml_backend__mlds_to_managed__DataRep_5, ml_backend__mlds_to_managed__RvalA_13);
                              }
#line 446 "mlds_to_managed.m"
                              {
#line 446 "mlds_to_managed.m"
                                mercury__io__write_string_3_p_0((MR_String) ")");
#line 446 "mlds_to_managed.m"
                                return;
                              }
#line 443 "mlds_to_managed.m"
                            }
#line 447 "mlds_to_managed.m"
                          else
#line 454 "mlds_to_managed.m"
                            {
#line 454 "mlds_to_managed.m"
                              MR_Word ml_backend__mlds_to_managed__Type_16;

#line 448 "mlds_to_managed.m"
                              ml_backend__mlds_to_managed__succeeded = ((MR_tag((MR_Word) ml_backend__mlds_to_managed__Unop_12)) == (MR_mktag((MR_Integer) 2)));
#line 448 "mlds_to_managed.m"
                              if (ml_backend__mlds_to_managed__succeeded)
#line 448 "mlds_to_managed.m"
                                {
#line 448 "mlds_to_managed.m"
                                  ml_backend__mlds_to_managed__Type_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_managed__Unop_12, (MR_Integer) 0)));
#line 450 "mlds_to_managed.m"
                                  {
#line 450 "mlds_to_managed.m"
                                    MR_Word ml_backend__mlds_to_managed__ILType_80;
#line 450 "mlds_to_managed.m"
                                    MR_Word ml_backend__mlds_to_managed__Modifiers_84;
#line 450 "mlds_to_managed.m"
                                    MR_Word ml_backend__mlds_to_managed__SimpleType_85;

#line 450 "mlds_to_managed.m"
                                    {
#line 450 "mlds_to_managed.m"
                                      mercury__io__write_string_3_p_0((MR_String) "(");
                                    }
#line 586 "mlds_to_managed.m"
                                    {
#line 586 "mlds_to_managed.m"
                                      ml_backend__mlds_to_managed__ILType_80 = ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_f_0(ml_backend__mlds_to_managed__DataRep_5, ml_backend__mlds_to_managed__Type_16);
                                    }
#line 619 "mlds_to_managed.m"
                                    ml_backend__mlds_to_managed__Modifiers_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__ILType_80, (MR_Integer) 0)));
#line 619 "mlds_to_managed.m"
                                    ml_backend__mlds_to_managed__SimpleType_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__ILType_80, (MR_Integer) 1)));
#line 620 "mlds_to_managed.m"
                                    {
#line 620 "mlds_to_managed.m"
                                      mercury__io__write_list_5_p_0((MR_Word) &ml_backend__ilds__ml_backend__ilds__type_ctor_info_type_modifier_0, ml_backend__mlds_to_managed__Modifiers_84, (MR_String) " ", (MR_Word) &ml_backend__mlds_to_managed_scalar_common_6[3]);
                                    }
#line 622 "mlds_to_managed.m"
                                    {
#line 622 "mlds_to_managed.m"
                                      ml_backend__mlds_to_managed__write_il_simple_type_as_foreign_type_3_p_0(ml_backend__mlds_to_managed__SimpleType_85);
                                    }
#line 452 "mlds_to_managed.m"
                                    {
#line 452 "mlds_to_managed.m"
                                      mercury__io__write_string_3_p_0((MR_String) ") ");
                                    }
#line 453 "mlds_to_managed.m"
                                    /* direct tailcall eliminated */
#line 453 "mlds_to_managed.m"
                                    {
#line 453 "mlds_to_managed.m"
                                      MR_Word ml_backend__mlds_to_managed__Rval__tmp_copy_6 = ml_backend__mlds_to_managed__RvalA_13;

#line 453 "mlds_to_managed.m"
                                      ml_backend__mlds_to_managed__Rval_6 = ml_backend__mlds_to_managed__Rval__tmp_copy_6;
#line 453 "mlds_to_managed.m"
                                    }
#line 453 "mlds_to_managed.m"
                                    continue;
#line 450 "mlds_to_managed.m"
                                  }
#line 448 "mlds_to_managed.m"
                                }
#line 448 "mlds_to_managed.m"
                              else
#line 455 "mlds_to_managed.m"
                                {
#line 455 "mlds_to_managed.m"
                                  {
#line 455 "mlds_to_managed.m"
                                    mercury__require__sorry_3_p_0((MR_String) "ml_backend.mlds_to_managed", (MR_String) "predicate \140ml_backend.mlds_to_managed.write_rval\'/4", (MR_String) "box or unbox unop");
#line 455 "mlds_to_managed.m"
                                    return;
                                  }
#line 455 "mlds_to_managed.m"
                                }
#line 454 "mlds_to_managed.m"
                            }
#line 438 "mlds_to_managed.m"
                        }
#line 429 "mlds_to_managed.m"
                      else
#line 475 "mlds_to_managed.m"
                        {
#line 476 "mlds_to_managed.m"
                          {
#line 476 "mlds_to_managed.m"
                            mercury__require__sorry_3_p_0((MR_String) "ml_backend.mlds_to_managed", (MR_String) "predicate \140ml_backend.mlds_to_managed.write_rval\'/4", (MR_String) "vector_common_row rval");
#line 476 "mlds_to_managed.m"
                            return;
                          }
#line 475 "mlds_to_managed.m"
                        }
#line 429 "mlds_to_managed.m"
      }
#line 429 "mlds_to_managed.m"
      break;
#line 429 "mlds_to_managed.m"
    }
#line 425 "mlds_to_managed.m"
}

#line 368 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__write_outline_arg_final_4_p_0(
#line 368 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__DataRep_5,
#line 368 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__OutlineArg_6)
#line 368 "mlds_to_managed.m"
{
#line 373 "mlds_to_managed.m"
  {
#line 373 "mlds_to_managed.m"
    MR_bool ml_backend__mlds_to_managed__succeeded;

#line 373 "mlds_to_managed.m"
    if ((ml_backend__mlds_to_managed__OutlineArg_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 381 "mlds_to_managed.m"
      {
#line 381 "mlds_to_managed.m"
      }
#line 373 "mlds_to_managed.m"
    else
#line 373 "mlds_to_managed.m"
      if (((MR_tag((MR_Word) ml_backend__mlds_to_managed__OutlineArg_6)) == (MR_mktag((MR_Integer) 1))))
#line 373 "mlds_to_managed.m"
        {
#line 373 "mlds_to_managed.m"
        }
#line 373 "mlds_to_managed.m"
      else
#line 375 "mlds_to_managed.m"
        {
#line 375 "mlds_to_managed.m"
          MR_String ml_backend__mlds_to_managed__VarName_12 = ((MR_String) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_managed__OutlineArg_6, (MR_Integer) 1)));
#line 375 "mlds_to_managed.m"
          MR_Word ml_backend__mlds_to_managed__Lval_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_managed__OutlineArg_6, (MR_Integer) 2)));
#line 375 "mlds_to_managed.m"
          MR_Word ml_backend__mlds_to_managed___Type_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_managed__OutlineArg_6, (MR_Integer) 0)));

#line 376 "mlds_to_managed.m"
          {
#line 376 "mlds_to_managed.m"
            ml_backend__mlds_to_managed__write_lval_4_p_0(ml_backend__mlds_to_managed__DataRep_5, ml_backend__mlds_to_managed__Lval_13);
          }
#line 377 "mlds_to_managed.m"
          {
#line 377 "mlds_to_managed.m"
            mercury__io__write_string_3_p_0((MR_String) " = ");
          }
#line 378 "mlds_to_managed.m"
          {
#line 378 "mlds_to_managed.m"
            mercury__io__write_string_3_p_0(ml_backend__mlds_to_managed__VarName_12);
          }
#line 379 "mlds_to_managed.m"
          {
#line 379 "mlds_to_managed.m"
            mercury__io__write_string_3_p_0((MR_String) ";\n");
#line 379 "mlds_to_managed.m"
            return;
          }
#line 375 "mlds_to_managed.m"
        }
#line 373 "mlds_to_managed.m"
  }
#line 368 "mlds_to_managed.m"
}

#line 621 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__write_outline_arg_init_4_p_0_2(
#line 621 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__closure_arg,
#line 621 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_1,
#line 621 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_2,
#line 621 "mlds_to_managed.m"
  MR_Box * ml_backend__mlds_to_managed__wrapper_arg_3)
#line 621 "mlds_to_managed.m"
{
#line 621 "mlds_to_managed.m"
  {
#line 621 "mlds_to_managed.m"
    MR_Box ml_backend__mlds_to_managed__closure = ml_backend__mlds_to_managed__closure_arg;

#line 621 "mlds_to_managed.m"
    {
#line 621 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__write_il_type_modifier_as_foreign_type_3_p_0(((MR_Word) ml_backend__mlds_to_managed__wrapper_arg_1));
#line 621 "mlds_to_managed.m"
      return;
    }
#line 621 "mlds_to_managed.m"
  }
#line 621 "mlds_to_managed.m"
}

#line 621 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__write_outline_arg_init_4_p_0_1(
#line 621 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__closure_arg,
#line 621 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_1,
#line 621 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_2,
#line 621 "mlds_to_managed.m"
  MR_Box * ml_backend__mlds_to_managed__wrapper_arg_3)
#line 621 "mlds_to_managed.m"
{
#line 621 "mlds_to_managed.m"
  {
#line 621 "mlds_to_managed.m"
    MR_Box ml_backend__mlds_to_managed__closure = ml_backend__mlds_to_managed__closure_arg;

#line 621 "mlds_to_managed.m"
    {
#line 621 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__write_il_type_modifier_as_foreign_type_3_p_0(((MR_Word) ml_backend__mlds_to_managed__wrapper_arg_1));
#line 621 "mlds_to_managed.m"
      return;
    }
#line 621 "mlds_to_managed.m"
  }
#line 621 "mlds_to_managed.m"
}

#line 343 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__write_outline_arg_init_4_p_0(
#line 343 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__DataRep_5,
#line 343 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__OutlineArg_6)
#line 343 "mlds_to_managed.m"
{
#line 348 "mlds_to_managed.m"
  {
#line 348 "mlds_to_managed.m"
    MR_bool ml_backend__mlds_to_managed__succeeded;

#line 348 "mlds_to_managed.m"
    if ((ml_backend__mlds_to_managed__OutlineArg_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 365 "mlds_to_managed.m"
      {
#line 365 "mlds_to_managed.m"
      }
#line 348 "mlds_to_managed.m"
    else
#line 348 "mlds_to_managed.m"
      if (((MR_tag((MR_Word) ml_backend__mlds_to_managed__OutlineArg_6)) == (MR_mktag((MR_Integer) 1))))
#line 348 "mlds_to_managed.m"
        {
#line 348 "mlds_to_managed.m"
          MR_Word ml_backend__mlds_to_managed__Type_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_managed__OutlineArg_6, (MR_Integer) 0)));
#line 348 "mlds_to_managed.m"
          MR_String ml_backend__mlds_to_managed__VarName_9 = ((MR_String) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_managed__OutlineArg_6, (MR_Integer) 1)));
#line 348 "mlds_to_managed.m"
          MR_Word ml_backend__mlds_to_managed__Rval_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_managed__OutlineArg_6, (MR_Integer) 2)));
#line 348 "mlds_to_managed.m"
          MR_Word ml_backend__mlds_to_managed__ILType_39;
#line 348 "mlds_to_managed.m"
          MR_Word ml_backend__mlds_to_managed__Modifiers_43;
#line 348 "mlds_to_managed.m"
          MR_Word ml_backend__mlds_to_managed__SimpleType_44;

#line 586 "mlds_to_managed.m"
          {
#line 586 "mlds_to_managed.m"
            ml_backend__mlds_to_managed__ILType_39 = ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_f_0(ml_backend__mlds_to_managed__DataRep_5, ml_backend__mlds_to_managed__Type_8);
          }
#line 619 "mlds_to_managed.m"
          ml_backend__mlds_to_managed__Modifiers_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__ILType_39, (MR_Integer) 0)));
#line 619 "mlds_to_managed.m"
          ml_backend__mlds_to_managed__SimpleType_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__ILType_39, (MR_Integer) 1)));
#line 620 "mlds_to_managed.m"
          {
#line 620 "mlds_to_managed.m"
            mercury__io__write_list_5_p_0((MR_Word) &ml_backend__ilds__ml_backend__ilds__type_ctor_info_type_modifier_0, ml_backend__mlds_to_managed__Modifiers_43, (MR_String) " ", (MR_Word) &ml_backend__mlds_to_managed_scalar_common_6[1]);
          }
#line 622 "mlds_to_managed.m"
          {
#line 622 "mlds_to_managed.m"
            ml_backend__mlds_to_managed__write_il_simple_type_as_foreign_type_3_p_0(ml_backend__mlds_to_managed__SimpleType_44);
          }
#line 350 "mlds_to_managed.m"
          {
#line 350 "mlds_to_managed.m"
            mercury__io__write_string_3_p_0((MR_String) " ");
          }
#line 351 "mlds_to_managed.m"
          {
#line 351 "mlds_to_managed.m"
            mercury__io__write_string_3_p_0(ml_backend__mlds_to_managed__VarName_9);
          }
#line 352 "mlds_to_managed.m"
          {
#line 352 "mlds_to_managed.m"
            mercury__io__write_string_3_p_0((MR_String) " = ");
          }
#line 353 "mlds_to_managed.m"
          {
#line 353 "mlds_to_managed.m"
            ml_backend__mlds_to_managed__write_rval_4_p_0(ml_backend__mlds_to_managed__DataRep_5, ml_backend__mlds_to_managed__Rval_10);
          }
#line 354 "mlds_to_managed.m"
          {
#line 354 "mlds_to_managed.m"
            mercury__io__write_string_3_p_0((MR_String) ";\n");
#line 354 "mlds_to_managed.m"
            return;
          }
#line 348 "mlds_to_managed.m"
        }
#line 348 "mlds_to_managed.m"
      else
#line 356 "mlds_to_managed.m"
        {
#line 356 "mlds_to_managed.m"
          MR_Word ml_backend__mlds_to_managed__Type_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_managed__OutlineArg_6, (MR_Integer) 0)));
#line 356 "mlds_to_managed.m"
          MR_String ml_backend__mlds_to_managed__VarName_33 = ((MR_String) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_managed__OutlineArg_6, (MR_Integer) 1)));
#line 356 "mlds_to_managed.m"
          MR_Word ml_backend__mlds_to_managed__ILType_59;
#line 356 "mlds_to_managed.m"
          MR_Word ml_backend__mlds_to_managed__Modifiers_63;
#line 356 "mlds_to_managed.m"
          MR_Word ml_backend__mlds_to_managed__SimpleType_64;
#line 356 "mlds_to_managed.m"
          MR_Word ml_backend__mlds_to_managed__ILType_79;
#line 356 "mlds_to_managed.m"
          MR_Word ml_backend__mlds_to_managed__ILSimpleType_81;
#line 356 "mlds_to_managed.m"
          MR_Word ml_backend__mlds_to_managed___Lval_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_managed__OutlineArg_6, (MR_Integer) 2)));
#line 607 "mlds_to_managed.m"
          MR_Word ml_backend__mlds_to_managed__V_80_80;

#line 586 "mlds_to_managed.m"
          {
#line 586 "mlds_to_managed.m"
            ml_backend__mlds_to_managed__ILType_59 = ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_f_0(ml_backend__mlds_to_managed__DataRep_5, ml_backend__mlds_to_managed__Type_32);
          }
#line 619 "mlds_to_managed.m"
          ml_backend__mlds_to_managed__Modifiers_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__ILType_59, (MR_Integer) 0)));
#line 619 "mlds_to_managed.m"
          ml_backend__mlds_to_managed__SimpleType_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__ILType_59, (MR_Integer) 1)));
#line 620 "mlds_to_managed.m"
          {
#line 620 "mlds_to_managed.m"
            mercury__io__write_list_5_p_0((MR_Word) &ml_backend__ilds__ml_backend__ilds__type_ctor_info_type_modifier_0, ml_backend__mlds_to_managed__Modifiers_63, (MR_String) " ", (MR_Word) &ml_backend__mlds_to_managed_scalar_common_6[2]);
          }
#line 622 "mlds_to_managed.m"
          {
#line 622 "mlds_to_managed.m"
            ml_backend__mlds_to_managed__write_il_simple_type_as_foreign_type_3_p_0(ml_backend__mlds_to_managed__SimpleType_64);
          }
#line 358 "mlds_to_managed.m"
          {
#line 358 "mlds_to_managed.m"
            mercury__io__write_string_3_p_0((MR_String) " ");
          }
#line 359 "mlds_to_managed.m"
          {
#line 359 "mlds_to_managed.m"
            mercury__io__write_string_3_p_0(ml_backend__mlds_to_managed__VarName_33);
          }
#line 361 "mlds_to_managed.m"
          {
#line 361 "mlds_to_managed.m"
            mercury__io__write_string_3_p_0((MR_String) " = ");
          }
#line 606 "mlds_to_managed.m"
          {
#line 606 "mlds_to_managed.m"
            ml_backend__mlds_to_managed__ILType_79 = ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_f_0(ml_backend__mlds_to_managed__DataRep_5, ml_backend__mlds_to_managed__Type_32);
          }
#line 607 "mlds_to_managed.m"
          ml_backend__mlds_to_managed__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__ILType_79, (MR_Integer) 0)));
#line 607 "mlds_to_managed.m"
          ml_backend__mlds_to_managed__ILSimpleType_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__ILType_79, (MR_Integer) 1)));
#line 608 "mlds_to_managed.m"
          {
#line 608 "mlds_to_managed.m"
            ml_backend__mlds_to_managed__write_csharp_initializer_3_p_0(ml_backend__mlds_to_managed__ILSimpleType_81);
          }
#line 363 "mlds_to_managed.m"
          {
#line 363 "mlds_to_managed.m"
            mercury__io__write_string_3_p_0((MR_String) ";\n");
#line 363 "mlds_to_managed.m"
            return;
          }
#line 356 "mlds_to_managed.m"
        }
#line 348 "mlds_to_managed.m"
  }
#line 343 "mlds_to_managed.m"
}

#line 318 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__write_statement_6_p_0_4(
#line 318 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__closure_arg,
#line 318 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_1,
#line 318 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_2,
#line 318 "mlds_to_managed.m"
  MR_Box * ml_backend__mlds_to_managed__wrapper_arg_3)
#line 318 "mlds_to_managed.m"
{
#line 318 "mlds_to_managed.m"
  {
#line 318 "mlds_to_managed.m"
    MR_Box ml_backend__mlds_to_managed__closure = ml_backend__mlds_to_managed__closure_arg;

#line 318 "mlds_to_managed.m"
    {
#line 318 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__write_statement_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__closure, (MR_Integer) 5))), ((MR_Word) ml_backend__mlds_to_managed__wrapper_arg_1));
#line 318 "mlds_to_managed.m"
      return;
    }
#line 318 "mlds_to_managed.m"
  }
#line 318 "mlds_to_managed.m"
}

#line 316 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__write_statement_6_p_0_3(
#line 316 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__closure_arg,
#line 316 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_1,
#line 316 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_2,
#line 316 "mlds_to_managed.m"
  MR_Box * ml_backend__mlds_to_managed__wrapper_arg_3)
#line 316 "mlds_to_managed.m"
{
#line 316 "mlds_to_managed.m"
  {
#line 316 "mlds_to_managed.m"
    MR_Box ml_backend__mlds_to_managed__closure = ml_backend__mlds_to_managed__closure_arg;

#line 316 "mlds_to_managed.m"
    {
#line 316 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__write_defn_decl_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__mlds_to_managed__wrapper_arg_1));
#line 316 "mlds_to_managed.m"
      return;
    }
#line 316 "mlds_to_managed.m"
  }
#line 316 "mlds_to_managed.m"
}

#line 312 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__write_statement_6_p_0_2(
#line 312 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__closure_arg,
#line 312 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_1,
#line 312 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_2,
#line 312 "mlds_to_managed.m"
  MR_Box * ml_backend__mlds_to_managed__wrapper_arg_3)
#line 312 "mlds_to_managed.m"
{
#line 312 "mlds_to_managed.m"
  {
#line 312 "mlds_to_managed.m"
    MR_Box ml_backend__mlds_to_managed__closure = ml_backend__mlds_to_managed__closure_arg;

#line 312 "mlds_to_managed.m"
    {
#line 312 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__write_outline_arg_final_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__mlds_to_managed__wrapper_arg_1));
#line 312 "mlds_to_managed.m"
      return;
    }
#line 312 "mlds_to_managed.m"
  }
#line 312 "mlds_to_managed.m"
}

#line 307 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__write_statement_6_p_0_1(
#line 307 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__closure_arg,
#line 307 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_1,
#line 307 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_2,
#line 307 "mlds_to_managed.m"
  MR_Box * ml_backend__mlds_to_managed__wrapper_arg_3)
#line 307 "mlds_to_managed.m"
{
#line 307 "mlds_to_managed.m"
  {
#line 307 "mlds_to_managed.m"
    MR_Box ml_backend__mlds_to_managed__closure = ml_backend__mlds_to_managed__closure_arg;

#line 307 "mlds_to_managed.m"
    {
#line 307 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__write_outline_arg_init_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__mlds_to_managed__wrapper_arg_1));
#line 307 "mlds_to_managed.m"
      return;
    }
#line 307 "mlds_to_managed.m"
  }
#line 307 "mlds_to_managed.m"
}

#line 298 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__write_statement_6_p_0(
#line 298 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__Globals_7,
#line 298 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__DataRep_8,
#line 298 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__Args_9,
#line 298 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__HeadVar__4_4)
#line 298 "mlds_to_managed.m"
{
#line 301 "mlds_to_managed.m"
  {
#line 301 "mlds_to_managed.m"
    MR_bool ml_backend__mlds_to_managed__succeeded;
#line 301 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__Statement_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__HeadVar__4_4, (MR_Integer) 0)));
#line 301 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__Context_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__HeadVar__4_4, (MR_Integer) 1)));
#line 313 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__OutlineArgs_14;
#line 313 "mlds_to_managed.m"
    MR_String ml_backend__mlds_to_managed__Code_16;
#line 304 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__ForeignProc_13;
#line 304 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__V_27_27;
#line 305 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__V_15_15;

#line 304 "mlds_to_managed.m"
    ml_backend__mlds_to_managed__succeeded = ((((MR_tag((MR_Word) ml_backend__mlds_to_managed__Statement_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_managed__Statement_10, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 304 "mlds_to_managed.m"
    if (ml_backend__mlds_to_managed__succeeded)
#line 304 "mlds_to_managed.m"
      {
#line 304 "mlds_to_managed.m"
        ml_backend__mlds_to_managed__ForeignProc_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_managed__Statement_10, (MR_Integer) 1)));
#line 305 "mlds_to_managed.m"
        ml_backend__mlds_to_managed__succeeded = ((((MR_tag((MR_Word) ml_backend__mlds_to_managed__ForeignProc_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_managed__ForeignProc_13, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 305 "mlds_to_managed.m"
        if (ml_backend__mlds_to_managed__succeeded)
#line 305 "mlds_to_managed.m"
          {
#line 305 "mlds_to_managed.m"
            ml_backend__mlds_to_managed__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_managed__ForeignProc_13, (MR_Integer) 1)));
#line 305 "mlds_to_managed.m"
            ml_backend__mlds_to_managed__OutlineArgs_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_managed__ForeignProc_13, (MR_Integer) 2)));
#line 305 "mlds_to_managed.m"
            ml_backend__mlds_to_managed__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_managed__ForeignProc_13, (MR_Integer) 3)));
#line 305 "mlds_to_managed.m"
            ml_backend__mlds_to_managed__Code_16 = ((MR_String) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_managed__ForeignProc_13, (MR_Integer) 4)));
#line 305 "mlds_to_managed.m"
            ml_backend__mlds_to_managed__succeeded = (ml_backend__mlds_to_managed__V_27_27 == (MR_Integer) 1);
#line 305 "mlds_to_managed.m"
          }
#line 304 "mlds_to_managed.m"
      }
#line 313 "mlds_to_managed.m"
    if (ml_backend__mlds_to_managed__succeeded)
#line 307 "mlds_to_managed.m"
      {
#line 307 "mlds_to_managed.m"
        MR_Word ml_backend__mlds_to_managed__TypeCtorInfo_71_71;
#line 307 "mlds_to_managed.m"
        MR_Word ml_backend__mlds_to_managed__TypeCtorInfo_72_72;
#line 307 "mlds_to_managed.m"
        MR_Word ml_backend__mlds_to_managed__V_28_28;
#line 307 "mlds_to_managed.m"
        MR_Word ml_backend__mlds_to_managed__V_30_30;
#line 307 "mlds_to_managed.m"
        MR_Word ml_backend__mlds_to_managed__V_35_35;
#line 307 "mlds_to_managed.m"
        MR_String ml_backend__mlds_to_managed__File_90;
#line 307 "mlds_to_managed.m"
        MR_Integer ml_backend__mlds_to_managed__Line_91;
#line 307 "mlds_to_managed.m"
        MR_Box ml_backend__mlds_to_managed__conv0_STATE_VARIABLE_IO_29_29;
#line 312 "mlds_to_managed.m"
        MR_Box ml_backend__mlds_to_managed__conv1_STATE_VARIABLE_IO_26;

#line 307 "mlds_to_managed.m"
        {
#line 307 "mlds_to_managed.m"
          ml_backend__mlds_to_managed__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 307 "mlds_to_managed.m"
          MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_28_28, 0) = ((MR_Box) (&ml_backend__mlds_to_managed_scalar_common_3[2]));
#line 307 "mlds_to_managed.m"
          MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_28_28, 1) = ((MR_Box) (ml_backend__mlds_to_managed__write_statement_6_p_0_1));
#line 307 "mlds_to_managed.m"
          MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_28_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 307 "mlds_to_managed.m"
          MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_28_28, 3) = ((MR_Box) (ml_backend__mlds_to_managed__DataRep_8));
#line 307 "mlds_to_managed.m"
        }
#line 4135 "ml_backend.mlds_to_managed.c"
        ml_backend__mlds_to_managed__TypeCtorInfo_71_71 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_outline_arg_0;
#line 4137 "ml_backend.mlds_to_managed.c"
        ml_backend__mlds_to_managed__TypeCtorInfo_72_72 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
#line 307 "mlds_to_managed.m"
        {
#line 307 "mlds_to_managed.m"
          mercury__list__foldl_4_p_2(ml_backend__mlds_to_managed__TypeCtorInfo_71_71, ml_backend__mlds_to_managed__TypeCtorInfo_72_72, ml_backend__mlds_to_managed__V_28_28, ml_backend__mlds_to_managed__OutlineArgs_14, ((MR_Box) ((MR_Integer) 0)), &ml_backend__mlds_to_managed__conv0_STATE_VARIABLE_IO_29_29);
        }
#line 308 "mlds_to_managed.m"
        {
#line 308 "mlds_to_managed.m"
          ml_backend__mlds_to_managed__V_30_30 = ml_backend__mlds__mlds_get_prog_context_1_f_0(ml_backend__mlds_to_managed__Context_11);
        }
#line 416 "mlds_to_managed.m"
        {
#line 416 "mlds_to_managed.m"
          mercury__term__context_file_2_p_0(ml_backend__mlds_to_managed__V_30_30, &ml_backend__mlds_to_managed__File_90);
        }
#line 417 "mlds_to_managed.m"
        {
#line 417 "mlds_to_managed.m"
          mercury__term__context_line_2_p_0(ml_backend__mlds_to_managed__V_30_30, &ml_backend__mlds_to_managed__Line_91);
        }
#line 418 "mlds_to_managed.m"
        {
#line 418 "mlds_to_managed.m"
          backend_libs__c_util__set_line_num_5_p_0(ml_backend__mlds_to_managed__Globals_7, ml_backend__mlds_to_managed__File_90, ml_backend__mlds_to_managed__Line_91);
        }
#line 309 "mlds_to_managed.m"
        {
#line 309 "mlds_to_managed.m"
          mercury__io__write_string_3_p_0(ml_backend__mlds_to_managed__Code_16);
        }
#line 310 "mlds_to_managed.m"
        {
#line 310 "mlds_to_managed.m"
          mercury__io__nl_2_p_0();
        }
#line 423 "mlds_to_managed.m"
        {
#line 423 "mlds_to_managed.m"
          backend_libs__c_util__reset_line_num_3_p_0(ml_backend__mlds_to_managed__Globals_7);
        }
#line 312 "mlds_to_managed.m"
        {
#line 312 "mlds_to_managed.m"
          ml_backend__mlds_to_managed__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 312 "mlds_to_managed.m"
          MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_35_35, 0) = ((MR_Box) (&ml_backend__mlds_to_managed_scalar_common_3[2]));
#line 312 "mlds_to_managed.m"
          MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_35_35, 1) = ((MR_Box) (ml_backend__mlds_to_managed__write_statement_6_p_0_2));
#line 312 "mlds_to_managed.m"
          MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_35_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 312 "mlds_to_managed.m"
          MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_35_35, 3) = ((MR_Box) (ml_backend__mlds_to_managed__DataRep_8));
#line 312 "mlds_to_managed.m"
        }
#line 312 "mlds_to_managed.m"
        {
#line 312 "mlds_to_managed.m"
          mercury__list__foldl_4_p_2(ml_backend__mlds_to_managed__TypeCtorInfo_71_71, ml_backend__mlds_to_managed__TypeCtorInfo_72_72, ml_backend__mlds_to_managed__V_35_35, ml_backend__mlds_to_managed__OutlineArgs_14, ((MR_Box) ((MR_Integer) 0)), &ml_backend__mlds_to_managed__conv1_STATE_VARIABLE_IO_26);
        }
#line 307 "mlds_to_managed.m"
      }
#line 313 "mlds_to_managed.m"
    else
#line 321 "mlds_to_managed.m"
      {
#line 321 "mlds_to_managed.m"
        MR_Word ml_backend__mlds_to_managed__Defns_17;
#line 321 "mlds_to_managed.m"
        MR_Word ml_backend__mlds_to_managed__Statements_18;

#line 314 "mlds_to_managed.m"
        ml_backend__mlds_to_managed__succeeded = ((MR_tag((MR_Word) ml_backend__mlds_to_managed__Statement_10)) == (MR_mktag((MR_Integer) 0)));
#line 314 "mlds_to_managed.m"
        if (ml_backend__mlds_to_managed__succeeded)
#line 314 "mlds_to_managed.m"
          {
#line 314 "mlds_to_managed.m"
            ml_backend__mlds_to_managed__Defns_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__Statement_10, (MR_Integer) 0)));
#line 314 "mlds_to_managed.m"
            ml_backend__mlds_to_managed__Statements_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__Statement_10, (MR_Integer) 1)));
#line 316 "mlds_to_managed.m"
            {
#line 316 "mlds_to_managed.m"
              MR_Word ml_backend__mlds_to_managed__V_38_38;
#line 316 "mlds_to_managed.m"
              MR_Word ml_backend__mlds_to_managed__V_43_43;

#line 316 "mlds_to_managed.m"
              {
#line 316 "mlds_to_managed.m"
                ml_backend__mlds_to_managed__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 316 "mlds_to_managed.m"
                MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_38_38, 0) = ((MR_Box) (&ml_backend__mlds_to_managed_scalar_common_3[3]));
#line 316 "mlds_to_managed.m"
                MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_38_38, 1) = ((MR_Box) (ml_backend__mlds_to_managed__write_statement_6_p_0_3));
#line 316 "mlds_to_managed.m"
                MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_38_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 316 "mlds_to_managed.m"
                MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_38_38, 3) = ((MR_Box) (ml_backend__mlds_to_managed__DataRep_8));
#line 316 "mlds_to_managed.m"
              }
#line 316 "mlds_to_managed.m"
              {
#line 316 "mlds_to_managed.m"
                mercury__io__write_list_5_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0, ml_backend__mlds_to_managed__Defns_17, (MR_String) "", ml_backend__mlds_to_managed__V_38_38);
              }
#line 317 "mlds_to_managed.m"
              {
#line 317 "mlds_to_managed.m"
                mercury__io__write_string_3_p_0((MR_String) "{\n");
              }
#line 318 "mlds_to_managed.m"
              {
#line 318 "mlds_to_managed.m"
                ml_backend__mlds_to_managed__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 318 "mlds_to_managed.m"
                MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_43_43, 0) = ((MR_Box) (&ml_backend__mlds_to_managed_scalar_common_7[0]));
#line 318 "mlds_to_managed.m"
                MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_43_43, 1) = ((MR_Box) (ml_backend__mlds_to_managed__write_statement_6_p_0_4));
#line 318 "mlds_to_managed.m"
                MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_43_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 318 "mlds_to_managed.m"
                MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_43_43, 3) = ((MR_Box) (ml_backend__mlds_to_managed__Globals_7));
#line 318 "mlds_to_managed.m"
                MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_43_43, 4) = ((MR_Box) (ml_backend__mlds_to_managed__DataRep_8));
#line 318 "mlds_to_managed.m"
                MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_43_43, 5) = ((MR_Box) (ml_backend__mlds_to_managed__Args_9));
#line 318 "mlds_to_managed.m"
              }
#line 318 "mlds_to_managed.m"
              {
#line 318 "mlds_to_managed.m"
                mercury__io__write_list_5_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0, ml_backend__mlds_to_managed__Statements_18, (MR_String) "", ml_backend__mlds_to_managed__V_43_43);
              }
#line 320 "mlds_to_managed.m"
              {
#line 320 "mlds_to_managed.m"
                mercury__io__write_string_3_p_0((MR_String) "\n}\n");
#line 320 "mlds_to_managed.m"
                return;
              }
#line 316 "mlds_to_managed.m"
            }
#line 314 "mlds_to_managed.m"
          }
#line 314 "mlds_to_managed.m"
        else
#line 331 "mlds_to_managed.m"
          {
#line 331 "mlds_to_managed.m"
            MR_Word ml_backend__mlds_to_managed__Rvals_19;

#line 322 "mlds_to_managed.m"
            ml_backend__mlds_to_managed__succeeded = ((((MR_tag((MR_Word) ml_backend__mlds_to_managed__Statement_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_managed__Statement_10, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 322 "mlds_to_managed.m"
            if (ml_backend__mlds_to_managed__succeeded)
#line 322 "mlds_to_managed.m"
              {
#line 322 "mlds_to_managed.m"
                ml_backend__mlds_to_managed__Rvals_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_managed__Statement_10, (MR_Integer) 1)));
#line 328 "mlds_to_managed.m"
                {
#line 328 "mlds_to_managed.m"
                  MR_Word ml_backend__mlds_to_managed__Rval_20;
#line 324 "mlds_to_managed.m"
                  MR_Word ml_backend__mlds_to_managed__V_47_47;

#line 324 "mlds_to_managed.m"
                  ml_backend__mlds_to_managed__succeeded = ((MR_tag((MR_Word) ml_backend__mlds_to_managed__Rvals_19)) == (MR_mktag((MR_Integer) 1)));
#line 324 "mlds_to_managed.m"
                  if (ml_backend__mlds_to_managed__succeeded)
#line 324 "mlds_to_managed.m"
                    {
#line 324 "mlds_to_managed.m"
                      ml_backend__mlds_to_managed__Rval_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_managed__Rvals_19, (MR_Integer) 0)));
#line 324 "mlds_to_managed.m"
                      ml_backend__mlds_to_managed__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_managed__Rvals_19, (MR_Integer) 1)));
#line 324 "mlds_to_managed.m"
                      ml_backend__mlds_to_managed__succeeded = (ml_backend__mlds_to_managed__V_47_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 324 "mlds_to_managed.m"
                    }
#line 328 "mlds_to_managed.m"
                  if (ml_backend__mlds_to_managed__succeeded)
#line 325 "mlds_to_managed.m"
                    {
#line 325 "mlds_to_managed.m"
                      {
#line 325 "mlds_to_managed.m"
                        mercury__io__write_string_3_p_0((MR_String) "return ");
                      }
#line 326 "mlds_to_managed.m"
                      {
#line 326 "mlds_to_managed.m"
                        ml_backend__mlds_to_managed__write_rval_4_p_0(ml_backend__mlds_to_managed__DataRep_8, ml_backend__mlds_to_managed__Rval_20);
                      }
#line 327 "mlds_to_managed.m"
                      {
#line 327 "mlds_to_managed.m"
                        mercury__io__write_string_3_p_0((MR_String) ";\n");
#line 327 "mlds_to_managed.m"
                        return;
                      }
#line 325 "mlds_to_managed.m"
                    }
#line 328 "mlds_to_managed.m"
                  else
#line 329 "mlds_to_managed.m"
                    {
#line 329 "mlds_to_managed.m"
                      {
#line 329 "mlds_to_managed.m"
                        mercury__require__sorry_3_p_0((MR_String) "ml_backend.mlds_to_managed", (MR_String) "predicate \140ml_backend.mlds_to_managed.write_statement\'/6", (MR_String) "multiple return values");
#line 329 "mlds_to_managed.m"
                        return;
                      }
#line 329 "mlds_to_managed.m"
                    }
#line 328 "mlds_to_managed.m"
                }
#line 322 "mlds_to_managed.m"
              }
#line 322 "mlds_to_managed.m"
            else
#line 338 "mlds_to_managed.m"
              {
#line 338 "mlds_to_managed.m"
                MR_Word ml_backend__mlds_to_managed__LVal_21;
#line 338 "mlds_to_managed.m"
                MR_Word ml_backend__mlds_to_managed__RVal_22;
#line 332 "mlds_to_managed.m"
                MR_Word ml_backend__mlds_to_managed__V_56_56;

#line 332 "mlds_to_managed.m"
                ml_backend__mlds_to_managed__succeeded = ((((MR_tag((MR_Word) ml_backend__mlds_to_managed__Statement_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_managed__Statement_10, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 332 "mlds_to_managed.m"
                if (ml_backend__mlds_to_managed__succeeded)
#line 332 "mlds_to_managed.m"
                  {
#line 332 "mlds_to_managed.m"
                    ml_backend__mlds_to_managed__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_managed__Statement_10, (MR_Integer) 1)));
#line 332 "mlds_to_managed.m"
                    ml_backend__mlds_to_managed__succeeded = ((MR_tag((MR_Word) ml_backend__mlds_to_managed__V_56_56)) == (MR_mktag((MR_Integer) 2)));
#line 332 "mlds_to_managed.m"
                    if (ml_backend__mlds_to_managed__succeeded)
#line 332 "mlds_to_managed.m"
                      {
#line 332 "mlds_to_managed.m"
                        ml_backend__mlds_to_managed__LVal_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_managed__V_56_56, (MR_Integer) 0)));
#line 332 "mlds_to_managed.m"
                        ml_backend__mlds_to_managed__RVal_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_managed__V_56_56, (MR_Integer) 1)));
#line 332 "mlds_to_managed.m"
                      }
#line 332 "mlds_to_managed.m"
                  }
#line 338 "mlds_to_managed.m"
                if (ml_backend__mlds_to_managed__succeeded)
#line 334 "mlds_to_managed.m"
                  {
#line 334 "mlds_to_managed.m"
                    {
#line 334 "mlds_to_managed.m"
                      ml_backend__mlds_to_managed__write_lval_4_p_0(ml_backend__mlds_to_managed__DataRep_8, ml_backend__mlds_to_managed__LVal_21);
                    }
#line 335 "mlds_to_managed.m"
                    {
#line 335 "mlds_to_managed.m"
                      mercury__io__write_string_3_p_0((MR_String) " = ");
                    }
#line 336 "mlds_to_managed.m"
                    {
#line 336 "mlds_to_managed.m"
                      ml_backend__mlds_to_managed__write_rval_4_p_0(ml_backend__mlds_to_managed__DataRep_8, ml_backend__mlds_to_managed__RVal_22);
                    }
#line 337 "mlds_to_managed.m"
                    {
#line 337 "mlds_to_managed.m"
                      mercury__io__write_string_3_p_0((MR_String) ";\n");
#line 337 "mlds_to_managed.m"
                      return;
                    }
#line 334 "mlds_to_managed.m"
                  }
#line 338 "mlds_to_managed.m"
                else
#line 339 "mlds_to_managed.m"
                  {
#line 339 "mlds_to_managed.m"
                    MR_String ml_backend__mlds_to_managed__SFunctor_23;
#line 339 "mlds_to_managed.m"
                    MR_String ml_backend__mlds_to_managed__V_66_66;
#line 339 "mlds_to_managed.m"
                    MR_Integer ml_backend__mlds_to_managed___Arity_24;

#line 339 "mlds_to_managed.m"
                    {
#line 339 "mlds_to_managed.m"
                      mercury__deconstruct__functor_4_p_1((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0, ((MR_Box) (ml_backend__mlds_to_managed__Statement_10)), (MR_Integer) 1, &ml_backend__mlds_to_managed__SFunctor_23, &ml_backend__mlds_to_managed___Arity_24);
                    }
#line 340 "mlds_to_managed.m"
                    {
#line 340 "mlds_to_managed.m"
                      ml_backend__mlds_to_managed__V_66_66 = mercury__string__f_43_43_2_f_0((MR_String) "foreign code output for ", ml_backend__mlds_to_managed__SFunctor_23);
                    }
#line 340 "mlds_to_managed.m"
                    {
#line 340 "mlds_to_managed.m"
                      mercury__require__sorry_3_p_0((MR_String) "ml_backend.mlds_to_managed", (MR_String) "predicate \140ml_backend.mlds_to_managed.write_statement\'/6", ml_backend__mlds_to_managed__V_66_66);
#line 340 "mlds_to_managed.m"
                      return;
                    }
#line 339 "mlds_to_managed.m"
                  }
#line 338 "mlds_to_managed.m"
              }
#line 331 "mlds_to_managed.m"
          }
#line 321 "mlds_to_managed.m"
      }
#line 301 "mlds_to_managed.m"
  }
#line 298 "mlds_to_managed.m"
}

#line 286 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__generate_method_code_5_p_0_2(
#line 286 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__closure_arg,
#line 286 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_1,
#line 286 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_2,
#line 286 "mlds_to_managed.m"
  MR_Box * ml_backend__mlds_to_managed__wrapper_arg_3)
#line 286 "mlds_to_managed.m"
{
#line 286 "mlds_to_managed.m"
  {
#line 286 "mlds_to_managed.m"
    MR_Box ml_backend__mlds_to_managed__closure = ml_backend__mlds_to_managed__closure_arg;

#line 286 "mlds_to_managed.m"
    {
#line 286 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__write_input_arg_as_foreign_type_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__mlds_to_managed__wrapper_arg_1));
#line 286 "mlds_to_managed.m"
      return;
    }
#line 286 "mlds_to_managed.m"
  }
#line 286 "mlds_to_managed.m"
}

#line 261 "mlds_to_managed.m"
static MR_bool MR_CALL 
ml_backend__mlds_to_managed__generate_method_code_5_p_0_1(
#line 261 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__closure_arg)
#line 261 "mlds_to_managed.m"
{
#line 261 "mlds_to_managed.m"
  {
#line 261 "mlds_to_managed.m"
    MR_bool ml_backend__mlds_to_managed__succeeded;
#line 261 "mlds_to_managed.m"
    MR_Box ml_backend__mlds_to_managed__closure = ml_backend__mlds_to_managed__closure_arg;

#line 261 "mlds_to_managed.m"
    {
#line 261 "mlds_to_managed.m"
      return ml_backend__mlds_to_managed__succeeded = ml_backend__mlds_to_managed__IntroducedFrom__pred__generate_method_code__261__1_1_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__closure, (MR_Integer) 3))));
    }
#line 261 "mlds_to_managed.m"
    return ml_backend__mlds_to_managed__succeeded;
#line 261 "mlds_to_managed.m"
  }
#line 261 "mlds_to_managed.m"
}

#line 242 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__generate_method_code_5_p_0(
#line 242 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__Globals_6,
#line 242 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__DataRep_7,
#line 242 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__Defn_8)
#line 242 "mlds_to_managed.m"
{
#line 245 "mlds_to_managed.m"
  {
#line 245 "mlds_to_managed.m"
    MR_bool ml_backend__mlds_to_managed__succeeded;
#line 245 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__EntityName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__Defn_8, (MR_Integer) 0)));
#line 245 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__Entity_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__Defn_8, (MR_Integer) 3)));
#line 246 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed___Context_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__Defn_8, (MR_Integer) 1)));
#line 246 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed___DeclFlags_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__Defn_8, (MR_Integer) 2)));

#line 252 "mlds_to_managed.m"
    if (((MR_tag((MR_Word) ml_backend__mlds_to_managed__EntityName_10)) == (MR_mktag((MR_Integer) 1))))
#line 249 "mlds_to_managed.m"
      {
#line 249 "mlds_to_managed.m"
      }
#line 252 "mlds_to_managed.m"
    else
#line 252 "mlds_to_managed.m"
      if (((MR_tag((MR_Word) ml_backend__mlds_to_managed__EntityName_10)) == (MR_mktag((MR_Integer) 3))))
#line 248 "mlds_to_managed.m"
        {
#line 248 "mlds_to_managed.m"
        }
#line 252 "mlds_to_managed.m"
      else
#line 252 "mlds_to_managed.m"
        if (((MR_tag((MR_Word) ml_backend__mlds_to_managed__EntityName_10)) == (MR_mktag((MR_Integer) 2))))
#line 253 "mlds_to_managed.m"
          {
#line 253 "mlds_to_managed.m"
            MR_Word ml_backend__mlds_to_managed__PredLabel_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_managed__EntityName_10, (MR_Integer) 0)));
#line 253 "mlds_to_managed.m"
            MR_Integer ml_backend__mlds_to_managed__ProcId_19 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_managed__EntityName_10, (MR_Integer) 1)));
#line 253 "mlds_to_managed.m"
            MR_Word ml_backend__mlds_to_managed__MaybeSeqNum_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_managed__EntityName_10, (MR_Integer) 2)));
#line 253 "mlds_to_managed.m"
            MR_Word ml_backend__mlds_to_managed___PredId_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_managed__EntityName_10, (MR_Integer) 3)));
#line 293 "mlds_to_managed.m"
            MR_Word ml_backend__mlds_to_managed__Params_23;
#line 293 "mlds_to_managed.m"
            MR_Word ml_backend__mlds_to_managed__Statement_24;
#line 293 "mlds_to_managed.m"
            MR_Word ml_backend__mlds_to_managed__EnvVarNames_26;
#line 257 "mlds_to_managed.m"
            MR_Word ml_backend__mlds_to_managed__TypeCtorInfo_71_71;
#line 257 "mlds_to_managed.m"
            MR_Word ml_backend__mlds_to_managed__Langs_27;
#line 257 "mlds_to_managed.m"
            MR_Word ml_backend__mlds_to_managed__V_40_40;
#line 257 "mlds_to_managed.m"
            MR_Word ml_backend__mlds_to_managed__V_41_41;
#line 256 "mlds_to_managed.m"
            MR_Word ml_backend__mlds_to_managed__V_22_22;
#line 256 "mlds_to_managed.m"
            MR_Word ml_backend__mlds_to_managed___Attributes_25;

#line 256 "mlds_to_managed.m"
            ml_backend__mlds_to_managed__succeeded = ((MR_tag((MR_Word) ml_backend__mlds_to_managed__Entity_13)) == (MR_mktag((MR_Integer) 2)));
#line 256 "mlds_to_managed.m"
            if (ml_backend__mlds_to_managed__succeeded)
#line 256 "mlds_to_managed.m"
              {
#line 256 "mlds_to_managed.m"
                ml_backend__mlds_to_managed__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_managed__Entity_13, (MR_Integer) 0)));
#line 256 "mlds_to_managed.m"
                ml_backend__mlds_to_managed__Params_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_managed__Entity_13, (MR_Integer) 1)));
#line 256 "mlds_to_managed.m"
                ml_backend__mlds_to_managed__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_managed__Entity_13, (MR_Integer) 2)));
#line 256 "mlds_to_managed.m"
                ml_backend__mlds_to_managed___Attributes_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_managed__Entity_13, (MR_Integer) 3)));
#line 256 "mlds_to_managed.m"
                ml_backend__mlds_to_managed__EnvVarNames_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_managed__Entity_13, (MR_Integer) 4)));
#line 256 "mlds_to_managed.m"
                ml_backend__mlds_to_managed__succeeded = ((MR_tag((MR_Word) ml_backend__mlds_to_managed__V_40_40)) == (MR_mktag((MR_Integer) 1)));
#line 256 "mlds_to_managed.m"
                if (ml_backend__mlds_to_managed__succeeded)
#line 256 "mlds_to_managed.m"
                  {
#line 256 "mlds_to_managed.m"
                    ml_backend__mlds_to_managed__Statement_24 = (MR_Word) MR_body(((MR_Word) ml_backend__mlds_to_managed__V_40_40), (MR_Integer) 1);
#line 258 "mlds_to_managed.m"
                    {
#line 258 "mlds_to_managed.m"
                      ml_backend__ml_util__has_foreign_languages_2_p_0(ml_backend__mlds_to_managed__Statement_24, &ml_backend__mlds_to_managed__Langs_27);
                    }
#line 259 "mlds_to_managed.m"
                    ml_backend__mlds_to_managed__V_41_41 = (MR_Integer) 1;
#line 4620 "ml_backend.mlds_to_managed.c"
                    ml_backend__mlds_to_managed__TypeCtorInfo_71_71 = (MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0;
#line 259 "mlds_to_managed.m"
                    {
#line 259 "mlds_to_managed.m"
                      ml_backend__mlds_to_managed__succeeded = mercury__list__member_2_p_0(ml_backend__mlds_to_managed__TypeCtorInfo_71_71, ((MR_Box) (ml_backend__mlds_to_managed__V_41_41)), ml_backend__mlds_to_managed__Langs_27);
                    }
#line 256 "mlds_to_managed.m"
                  }
#line 256 "mlds_to_managed.m"
              }
#line 293 "mlds_to_managed.m"
            if (ml_backend__mlds_to_managed__succeeded)
#line 261 "mlds_to_managed.m"
              {
#line 261 "mlds_to_managed.m"
                MR_Word ml_backend__mlds_to_managed__Inputs_28;
#line 261 "mlds_to_managed.m"
                MR_Word ml_backend__mlds_to_managed__Outputs_29;
#line 261 "mlds_to_managed.m"
                MR_Word ml_backend__mlds_to_managed__ReturnType_30;
#line 261 "mlds_to_managed.m"
                MR_String ml_backend__mlds_to_managed__Id_37;
#line 261 "mlds_to_managed.m"
                MR_Word ml_backend__mlds_to_managed__V_42_42;
#line 261 "mlds_to_managed.m"
                MR_Word ml_backend__mlds_to_managed__V_61_61;

#line 261 "mlds_to_managed.m"
                {
#line 261 "mlds_to_managed.m"
                  ml_backend__mlds_to_managed__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 261 "mlds_to_managed.m"
                  MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_42_42, 0) = ((MR_Box) (&ml_backend__mlds_to_managed_scalar_common_2[2]));
#line 261 "mlds_to_managed.m"
                  MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_42_42, 1) = ((MR_Box) (ml_backend__mlds_to_managed__generate_method_code_5_p_0_1));
#line 261 "mlds_to_managed.m"
                  MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_42_42, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 261 "mlds_to_managed.m"
                  MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_42_42, 3) = ((MR_Box) (ml_backend__mlds_to_managed__EnvVarNames_26));
#line 261 "mlds_to_managed.m"
                }
#line 261 "mlds_to_managed.m"
                {
#line 261 "mlds_to_managed.m"
                  mercury__require__expect_4_p_0(ml_backend__mlds_to_managed__V_42_42, (MR_String) "ml_backend.mlds_to_managed", (MR_String) "predicate \140ml_backend.mlds_to_managed.generate_method_code\'/5", (MR_String) "EnvVarNames");
                }
#line 262 "mlds_to_managed.m"
                ml_backend__mlds_to_managed__Inputs_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__Params_23, (MR_Integer) 0)));
#line 262 "mlds_to_managed.m"
                ml_backend__mlds_to_managed__Outputs_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__Params_23, (MR_Integer) 1)));
#line 266 "mlds_to_managed.m"
                if ((ml_backend__mlds_to_managed__Outputs_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 264 "mlds_to_managed.m"
                  ml_backend__mlds_to_managed__ReturnType_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 266 "mlds_to_managed.m"
                else
#line 266 "mlds_to_managed.m"
                  {
#line 266 "mlds_to_managed.m"
                    MR_Word ml_backend__mlds_to_managed__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_managed__Outputs_29, (MR_Integer) 1)));
#line 266 "mlds_to_managed.m"
                    MR_Word ml_backend__mlds_to_managed__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_managed__Outputs_29, (MR_Integer) 0)));

#line 266 "mlds_to_managed.m"
                    if ((ml_backend__mlds_to_managed__V_77_77 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 267 "mlds_to_managed.m"
                      {
#line 267 "mlds_to_managed.m"
                        MR_Word ml_backend__mlds_to_managed__SimpleType_33;
#line 267 "mlds_to_managed.m"
                        MR_Word ml_backend__mlds_to_managed__V_51_51;
#line 269 "mlds_to_managed.m"
                        MR_Word ml_backend__mlds_to_managed__V_32_32;

#line 268 "mlds_to_managed.m"
                        {
#line 268 "mlds_to_managed.m"
                          ml_backend__mlds_to_managed__V_51_51 = ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_f_0(ml_backend__mlds_to_managed__DataRep_7, ml_backend__mlds_to_managed__V_78_78);
                        }
#line 269 "mlds_to_managed.m"
                        ml_backend__mlds_to_managed__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_51_51, (MR_Integer) 0)));
#line 269 "mlds_to_managed.m"
                        ml_backend__mlds_to_managed__SimpleType_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_51_51, (MR_Integer) 1)));
#line 270 "mlds_to_managed.m"
                        {
#line 270 "mlds_to_managed.m"
                          ml_backend__mlds_to_managed__ReturnType_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 270 "mlds_to_managed.m"
                          MR_hl_field(MR_mktag(1), ml_backend__mlds_to_managed__ReturnType_30, 0) = ((MR_Box) (ml_backend__mlds_to_managed__SimpleType_33));
#line 270 "mlds_to_managed.m"
                        }
#line 267 "mlds_to_managed.m"
                      }
#line 266 "mlds_to_managed.m"
                    else
#line 272 "mlds_to_managed.m"
                      {
#line 274 "mlds_to_managed.m"
                        {
#line 274 "mlds_to_managed.m"
                          mercury__require__sorry_3_p_0((MR_String) "ml_backend.mlds_to_managed", (MR_String) "predicate \140ml_backend.mlds_to_managed.generate_method_code\'/5", (MR_String) "multiple return values");
#line 274 "mlds_to_managed.m"
                          return;
                        }
#line 272 "mlds_to_managed.m"
                      }
#line 266 "mlds_to_managed.m"
                  }
#line 277 "mlds_to_managed.m"
                {
#line 277 "mlds_to_managed.m"
                  ml_backend__mlds_to_il__predlabel_to_csharp_id_4_p_0(ml_backend__mlds_to_managed__PredLabel_18, ml_backend__mlds_to_managed__ProcId_19, ml_backend__mlds_to_managed__MaybeSeqNum_20, &ml_backend__mlds_to_managed__Id_37);
                }
#line 278 "mlds_to_managed.m"
                {
#line 278 "mlds_to_managed.m"
                  mercury__io__write_string_3_p_0((MR_String) "public static ");
                }
#line 612 "mlds_to_managed.m"
                if ((ml_backend__mlds_to_managed__ReturnType_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 612 "mlds_to_managed.m"
                  {
#line 613 "mlds_to_managed.m"
                    {
#line 613 "mlds_to_managed.m"
                      mercury__io__write_string_3_p_0((MR_String) "void");
                    }
#line 612 "mlds_to_managed.m"
                  }
#line 612 "mlds_to_managed.m"
                else
#line 614 "mlds_to_managed.m"
                  {
#line 614 "mlds_to_managed.m"
                    MR_Word ml_backend__mlds_to_managed__T_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_managed__ReturnType_30, (MR_Integer) 0)));

#line 615 "mlds_to_managed.m"
                    {
#line 615 "mlds_to_managed.m"
                      ml_backend__mlds_to_managed__write_il_simple_type_as_foreign_type_3_p_0(ml_backend__mlds_to_managed__T_84);
                    }
#line 614 "mlds_to_managed.m"
                  }
#line 281 "mlds_to_managed.m"
                {
#line 281 "mlds_to_managed.m"
                  mercury__io__write_string_3_p_0((MR_String) " ");
                }
#line 283 "mlds_to_managed.m"
                {
#line 283 "mlds_to_managed.m"
                  mercury__io__write_string_3_p_0(ml_backend__mlds_to_managed__Id_37);
                }
#line 284 "mlds_to_managed.m"
                {
#line 284 "mlds_to_managed.m"
                  mercury__io__write_string_3_p_0((MR_String) "(");
                }
#line 286 "mlds_to_managed.m"
                {
#line 286 "mlds_to_managed.m"
                  ml_backend__mlds_to_managed__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 286 "mlds_to_managed.m"
                  MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_61_61, 0) = ((MR_Box) (&ml_backend__mlds_to_managed_scalar_common_3[1]));
#line 286 "mlds_to_managed.m"
                  MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_61_61, 1) = ((MR_Box) (ml_backend__mlds_to_managed__generate_method_code_5_p_0_2));
#line 286 "mlds_to_managed.m"
                  MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_61_61, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 286 "mlds_to_managed.m"
                  MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_61_61, 3) = ((MR_Box) (ml_backend__mlds_to_managed__DataRep_7));
#line 286 "mlds_to_managed.m"
                }
#line 285 "mlds_to_managed.m"
                {
#line 285 "mlds_to_managed.m"
                  mercury__io__write_list_5_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0, ml_backend__mlds_to_managed__Inputs_28, (MR_String) ", ", ml_backend__mlds_to_managed__V_61_61);
                }
#line 287 "mlds_to_managed.m"
                {
#line 287 "mlds_to_managed.m"
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
#line 288 "mlds_to_managed.m"
                {
#line 288 "mlds_to_managed.m"
                  mercury__io__nl_2_p_0();
                }
#line 290 "mlds_to_managed.m"
                {
#line 290 "mlds_to_managed.m"
                  mercury__io__write_string_3_p_0((MR_String) "{\n");
                }
#line 291 "mlds_to_managed.m"
                {
#line 291 "mlds_to_managed.m"
                  ml_backend__mlds_to_managed__write_statement_6_p_0(ml_backend__mlds_to_managed__Globals_6, ml_backend__mlds_to_managed__DataRep_7, ml_backend__mlds_to_managed__Inputs_28, ml_backend__mlds_to_managed__Statement_24);
                }
#line 292 "mlds_to_managed.m"
                {
#line 292 "mlds_to_managed.m"
                  mercury__io__write_string_3_p_0((MR_String) "}\n");
#line 292 "mlds_to_managed.m"
                  return;
                }
#line 261 "mlds_to_managed.m"
              }
#line 293 "mlds_to_managed.m"
            else
#line 292 "mlds_to_managed.m"
              {
#line 292 "mlds_to_managed.m"
              }
#line 253 "mlds_to_managed.m"
          }
#line 252 "mlds_to_managed.m"
        else
#line 250 "mlds_to_managed.m"
          {
#line 250 "mlds_to_managed.m"
          }
#line 245 "mlds_to_managed.m"
  }
#line 242 "mlds_to_managed.m"
}

#line 213 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__generate_foreign_code_5_p_0_1(
#line 213 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__closure_arg,
#line 213 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_1,
#line 213 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_2,
#line 213 "mlds_to_managed.m"
  MR_Box * ml_backend__mlds_to_managed__wrapper_arg_3)
#line 213 "mlds_to_managed.m"
{
#line 213 "mlds_to_managed.m"
  {
#line 213 "mlds_to_managed.m"
    MR_Box ml_backend__mlds_to_managed__closure = ml_backend__mlds_to_managed__closure_arg;

#line 213 "mlds_to_managed.m"
    {
#line 213 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__IntroducedFrom__pred__generate_foreign_code__213__1_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__mlds_to_managed__wrapper_arg_1));
#line 213 "mlds_to_managed.m"
      return;
    }
#line 213 "mlds_to_managed.m"
  }
#line 213 "mlds_to_managed.m"
}

#line 206 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__generate_foreign_code_5_p_0(
#line 206 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__Globals_6,
#line 206 "mlds_to_managed.m"
  MR_String ml_backend__mlds_to_managed__SourceFileName_7,
#line 206 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__ForeignCode_8)
#line 206 "mlds_to_managed.m"
{
#line 209 "mlds_to_managed.m"
  {
#line 209 "mlds_to_managed.m"
    MR_bool ml_backend__mlds_to_managed__succeeded;
#line 209 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__TypeCtorInfo_38_38 = (MR_Word) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_user_foreign_code_0;
#line 209 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__RevBodyCode_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__ForeignCode_8, (MR_Integer) 2)));
#line 209 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__BodyCode_14;
#line 209 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__V_21_21;
#line 210 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed___RevHeaderCode_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__ForeignCode_8, (MR_Integer) 0)));
#line 210 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed___RevImports_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__ForeignCode_8, (MR_Integer) 1)));
#line 210 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed___ExportDefns_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__ForeignCode_8, (MR_Integer) 3)));

#line 212 "mlds_to_managed.m"
    {
#line 212 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__BodyCode_14 = mercury__list__reverse_1_f_0(ml_backend__mlds_to_managed__TypeCtorInfo_38_38, ml_backend__mlds_to_managed__RevBodyCode_12);
    }
#line 213 "mlds_to_managed.m"
    {
#line 213 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 213 "mlds_to_managed.m"
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_21_21, 0) = ((MR_Box) (&ml_backend__mlds_to_managed_scalar_common_4[2]));
#line 213 "mlds_to_managed.m"
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_21_21, 1) = ((MR_Box) (ml_backend__mlds_to_managed__generate_foreign_code_5_p_0_1));
#line 213 "mlds_to_managed.m"
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 213 "mlds_to_managed.m"
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_21_21, 3) = ((MR_Box) (ml_backend__mlds_to_managed__Globals_6));
#line 213 "mlds_to_managed.m"
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_21_21, 4) = ((MR_Box) (ml_backend__mlds_to_managed__SourceFileName_7));
#line 213 "mlds_to_managed.m"
    }
#line 213 "mlds_to_managed.m"
    {
#line 213 "mlds_to_managed.m"
      mercury__io__write_list_5_p_0(ml_backend__mlds_to_managed__TypeCtorInfo_38_38, ml_backend__mlds_to_managed__BodyCode_14, (MR_String) "\n", ml_backend__mlds_to_managed__V_21_21);
#line 213 "mlds_to_managed.m"
      return;
    }
#line 209 "mlds_to_managed.m"
  }
#line 206 "mlds_to_managed.m"
}

#line 188 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__generate_namespace_details_3_p_0(
#line 188 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__ClassName_4,
#line 188 "mlds_to_managed.m"
  MR_String * ml_backend__mlds_to_managed__NameSpaceFmtStr_5,
#line 188 "mlds_to_managed.m"
  MR_Word * ml_backend__mlds_to_managed__Namespace_6)
#line 188 "mlds_to_managed.m"
{
#line 191 "mlds_to_managed.m"
  {
#line 191 "mlds_to_managed.m"
    MR_bool ml_backend__mlds_to_managed__succeeded;
#line 191 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__Namespace0_7;
#line 202 "mlds_to_managed.m"
    MR_String ml_backend__mlds_to_managed__Head_8;
#line 202 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__Tail_9;
#line 200 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__V_10_10;

#line 197 "mlds_to_managed.m"
    *ml_backend__mlds_to_managed__NameSpaceFmtStr_5 = (MR_String) "namespace \100%s {";
#line 199 "mlds_to_managed.m"
    {
#line 199 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__Namespace0_7 = ml_backend__ilds__get_class_namespace_1_f_0(ml_backend__mlds_to_managed__ClassName_4);
    }
#line 200 "mlds_to_managed.m"
    {
#line 200 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__V_10_10 = mercury__list__reverse_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ml_backend__mlds_to_managed__Namespace0_7);
    }
#line 200 "mlds_to_managed.m"
    ml_backend__mlds_to_managed__succeeded = ((MR_tag((MR_Word) ml_backend__mlds_to_managed__V_10_10)) == (MR_mktag((MR_Integer) 1)));
#line 200 "mlds_to_managed.m"
    if (ml_backend__mlds_to_managed__succeeded)
#line 200 "mlds_to_managed.m"
      {
#line 200 "mlds_to_managed.m"
        ml_backend__mlds_to_managed__Head_8 = ((MR_String) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_managed__V_10_10, (MR_Integer) 0)));
#line 200 "mlds_to_managed.m"
        ml_backend__mlds_to_managed__Tail_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_managed__V_10_10, (MR_Integer) 1)));
#line 201 "mlds_to_managed.m"
        {
#line 201 "mlds_to_managed.m"
          MR_Word ml_backend__mlds_to_managed__V_11_11;
#line 201 "mlds_to_managed.m"
          MR_String ml_backend__mlds_to_managed__V_12_12;

#line 201 "mlds_to_managed.m"
          {
#line 201 "mlds_to_managed.m"
            ml_backend__mlds_to_managed__V_12_12 = mercury__string__f_43_43_2_f_0(ml_backend__mlds_to_managed__Head_8, (MR_String) "__csharp_code");
          }
#line 201 "mlds_to_managed.m"
          {
#line 201 "mlds_to_managed.m"
            ml_backend__mlds_to_managed__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 201 "mlds_to_managed.m"
            MR_hl_field(MR_mktag(1), ml_backend__mlds_to_managed__V_11_11, 0) = ((MR_Box) (ml_backend__mlds_to_managed__V_12_12));
#line 201 "mlds_to_managed.m"
            MR_hl_field(MR_mktag(1), ml_backend__mlds_to_managed__V_11_11, 1) = ((MR_Box) (ml_backend__mlds_to_managed__Tail_9));
#line 201 "mlds_to_managed.m"
          }
#line 201 "mlds_to_managed.m"
          {
#line 201 "mlds_to_managed.m"
            *ml_backend__mlds_to_managed__Namespace_6 = mercury__list__reverse_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ml_backend__mlds_to_managed__V_11_11);
          }
#line 201 "mlds_to_managed.m"
        }
#line 200 "mlds_to_managed.m"
      }
#line 200 "mlds_to_managed.m"
    else
#line 203 "mlds_to_managed.m"
      *ml_backend__mlds_to_managed__Namespace_6 = ml_backend__mlds_to_managed__Namespace0_7;
#line 191 "mlds_to_managed.m"
  }
#line 188 "mlds_to_managed.m"
}

#line 174 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__generate_foreign_header_code_5_p_0_1(
#line 174 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__closure_arg,
#line 174 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_1,
#line 174 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_2,
#line 174 "mlds_to_managed.m"
  MR_Box * ml_backend__mlds_to_managed__wrapper_arg_3)
#line 174 "mlds_to_managed.m"
{
#line 174 "mlds_to_managed.m"
  {
#line 174 "mlds_to_managed.m"
    MR_Box ml_backend__mlds_to_managed__closure = ml_backend__mlds_to_managed__closure_arg;

#line 174 "mlds_to_managed.m"
    {
#line 174 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__IntroducedFrom__pred__generate_foreign_header_code__174__1_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__mlds_to_managed__wrapper_arg_1));
#line 174 "mlds_to_managed.m"
      return;
    }
#line 174 "mlds_to_managed.m"
  }
#line 174 "mlds_to_managed.m"
}

#line 166 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__generate_foreign_header_code_5_p_0(
#line 166 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__Globals_6,
#line 166 "mlds_to_managed.m"
  MR_String ml_backend__mlds_to_managed__SourceFileName_7,
#line 166 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__ForeignCode_8)
#line 166 "mlds_to_managed.m"
{
#line 169 "mlds_to_managed.m"
  {
#line 169 "mlds_to_managed.m"
    MR_bool ml_backend__mlds_to_managed__succeeded;
#line 169 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__TypeCtorInfo_38_38 = (MR_Word) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0;
#line 169 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__RevHeaderCode_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__ForeignCode_8, (MR_Integer) 0)));
#line 169 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__HeaderCode_14;
#line 169 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__V_23_23;
#line 170 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed___RevImports_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__ForeignCode_8, (MR_Integer) 1)));
#line 170 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed___RevBodyCode_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__ForeignCode_8, (MR_Integer) 2)));
#line 170 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed___ExportDefns_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__ForeignCode_8, (MR_Integer) 3)));

#line 173 "mlds_to_managed.m"
    {
#line 173 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__HeaderCode_14 = mercury__list__reverse_1_f_0(ml_backend__mlds_to_managed__TypeCtorInfo_38_38, ml_backend__mlds_to_managed__RevHeaderCode_10);
    }
#line 174 "mlds_to_managed.m"
    {
#line 174 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 174 "mlds_to_managed.m"
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_23_23, 0) = ((MR_Box) (&ml_backend__mlds_to_managed_scalar_common_4[1]));
#line 174 "mlds_to_managed.m"
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_23_23, 1) = ((MR_Box) (ml_backend__mlds_to_managed__generate_foreign_header_code_5_p_0_1));
#line 174 "mlds_to_managed.m"
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_23_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 174 "mlds_to_managed.m"
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_23_23, 3) = ((MR_Box) (ml_backend__mlds_to_managed__Globals_6));
#line 174 "mlds_to_managed.m"
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_23_23, 4) = ((MR_Box) (ml_backend__mlds_to_managed__SourceFileName_7));
#line 174 "mlds_to_managed.m"
    }
#line 174 "mlds_to_managed.m"
    {
#line 174 "mlds_to_managed.m"
      mercury__io__write_list_5_p_0(ml_backend__mlds_to_managed__TypeCtorInfo_38_38, ml_backend__mlds_to_managed__HeaderCode_14, (MR_String) "\n", ml_backend__mlds_to_managed__V_23_23);
#line 174 "mlds_to_managed.m"
      return;
    }
#line 169 "mlds_to_managed.m"
  }
#line 166 "mlds_to_managed.m"
}

#line 142 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__output_csharp_header_code_3_p_0(
#line 142 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__Globals_4)
#line 142 "mlds_to_managed.m"
{
#line 144 "mlds_to_managed.m"
  {
#line 144 "mlds_to_managed.m"
    MR_bool ml_backend__mlds_to_managed__succeeded;
#line 144 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__DataRep_6;
#line 144 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__SignAssembly_8;
#line 146 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__V_11_11;
#line 146 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__V_7_7;

#line 145 "mlds_to_managed.m"
    {
#line 145 "mlds_to_managed.m"
      ml_backend__mlds_to_il__get_il_data_rep_2_p_0(ml_backend__mlds_to_managed__Globals_4, &ml_backend__mlds_to_managed__DataRep_6);
    }
#line 146 "mlds_to_managed.m"
    ml_backend__mlds_to_managed__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__DataRep_6, (MR_Integer) 0)));
#line 146 "mlds_to_managed.m"
    ml_backend__mlds_to_managed__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__DataRep_6, (MR_Integer) 1)));
#line 146 "mlds_to_managed.m"
    ml_backend__mlds_to_managed__succeeded = (ml_backend__mlds_to_managed__V_11_11 == (MR_Integer) 1);
#line 148 "mlds_to_managed.m"
    if (ml_backend__mlds_to_managed__succeeded)
#line 147 "mlds_to_managed.m"
      {
#line 147 "mlds_to_managed.m"
        {
#line 147 "mlds_to_managed.m"
          mercury__io__write_string_3_p_0((MR_String) "#define MR_HIGHLEVEL_DATA\n");
        }
#line 147 "mlds_to_managed.m"
      }
#line 148 "mlds_to_managed.m"
    else
#line 147 "mlds_to_managed.m"
      {
#line 147 "mlds_to_managed.m"
      }
#line 155 "mlds_to_managed.m"
    {
#line 155 "mlds_to_managed.m"
      mercury__io__write_string_3_p_0((MR_String) "using mercury;\n\n");
    }
#line 157 "mlds_to_managed.m"
    {
#line 157 "mlds_to_managed.m"
      libs__globals__lookup_bool_option_3_p_0(ml_backend__mlds_to_managed__Globals_4, (MR_Integer) 157, &ml_backend__mlds_to_managed__SignAssembly_8);
    }
#line 162 "mlds_to_managed.m"
    if ((ml_backend__mlds_to_managed__SignAssembly_8 == (MR_Integer) 0))
#line 163 "mlds_to_managed.m"
      {
#line 163 "mlds_to_managed.m"
      }
#line 162 "mlds_to_managed.m"
    else
#line 159 "mlds_to_managed.m"
      {
#line 160 "mlds_to_managed.m"
        {
#line 160 "mlds_to_managed.m"
          mercury__io__write_string_3_p_0((MR_String) "[assembly:System.Reflection.AssemblyKeyFileAttribute(\"mercury.sn\")]\n");
#line 160 "mlds_to_managed.m"
          return;
        }
#line 159 "mlds_to_managed.m"
      }
#line 144 "mlds_to_managed.m"
  }
#line 142 "mlds_to_managed.m"
}

#line 36 "mlds_to_managed.m"
void MR_CALL 
ml_backend__mlds_to_managed__output_src_end_3_p_0(
#line 36 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__ModuleName_4)
#line 36 "mlds_to_managed.m"
{
#line 135 "mlds_to_managed.m"
  {
#line 135 "mlds_to_managed.m"
    MR_bool ml_backend__mlds_to_managed__succeeded;

#line 136 "mlds_to_managed.m"
    {
#line 136 "mlds_to_managed.m"
      mercury__io__write_string_3_p_0((MR_String) "// End of module: ");
    }
#line 137 "mlds_to_managed.m"
    {
#line 137 "mlds_to_managed.m"
      parse_tree__prog_out__write_sym_name_3_p_0(ml_backend__mlds_to_managed__ModuleName_4);
    }
#line 138 "mlds_to_managed.m"
    {
#line 138 "mlds_to_managed.m"
      mercury__io__write_string_3_p_0((MR_String) ". \n");
#line 138 "mlds_to_managed.m"
      return;
    }
#line 135 "mlds_to_managed.m"
  }
#line 36 "mlds_to_managed.m"
}

#line 32 "mlds_to_managed.m"
void MR_CALL 
ml_backend__mlds_to_managed__output_src_start_3_p_0(
#line 32 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__ModuleName_4)
#line 32 "mlds_to_managed.m"
{
#line 124 "mlds_to_managed.m"
  {
#line 124 "mlds_to_managed.m"
    MR_bool ml_backend__mlds_to_managed__succeeded;
#line 124 "mlds_to_managed.m"
    MR_String ml_backend__mlds_to_managed__Version_6;
#line 124 "mlds_to_managed.m"
    MR_String ml_backend__mlds_to_managed__Fullarch_7;
#line 124 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__V_10_10;
#line 124 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__V_13_13;
#line 124 "mlds_to_managed.m"
    MR_String ml_backend__mlds_to_managed__V_14_14;
#line 124 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__V_15_15;
#line 124 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__V_17_17;
#line 124 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__V_19_19;
#line 124 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__V_20_20;
#line 124 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__V_22_22;
#line 124 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__V_24_24;

#line 125 "mlds_to_managed.m"
    {
#line 125 "mlds_to_managed.m"
      mercury__library__version_2_p_0(&ml_backend__mlds_to_managed__Version_6, &ml_backend__mlds_to_managed__Fullarch_7);
    }
#line 128 "mlds_to_managed.m"
    {
#line 128 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__V_14_14 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ml_backend__mlds_to_managed__ModuleName_4);
    }
#line 131 "mlds_to_managed.m"
    {
#line 131 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 131 "mlds_to_managed.m"
      MR_hl_field(MR_mktag(1), ml_backend__mlds_to_managed__V_24_24, 0) = ((MR_Box) (ml_backend__mlds_to_managed__Fullarch_7));
#line 131 "mlds_to_managed.m"
      MR_hl_field(MR_mktag(1), ml_backend__mlds_to_managed__V_24_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_managed_scalar_common_1[2])));
#line 131 "mlds_to_managed.m"
    }
#line 131 "mlds_to_managed.m"
    {
#line 131 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 131 "mlds_to_managed.m"
      MR_hl_field(MR_mktag(1), ml_backend__mlds_to_managed__V_22_22, 0) = ((MR_Box) ((MR_String) "// configured for "));
#line 131 "mlds_to_managed.m"
      MR_hl_field(MR_mktag(1), ml_backend__mlds_to_managed__V_22_22, 1) = ((MR_Box) (ml_backend__mlds_to_managed__V_24_24));
#line 131 "mlds_to_managed.m"
    }
#line 130 "mlds_to_managed.m"
    {
#line 130 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 130 "mlds_to_managed.m"
      MR_hl_field(MR_mktag(1), ml_backend__mlds_to_managed__V_20_20, 0) = ((MR_Box) ((MR_String) ",\n"));
#line 130 "mlds_to_managed.m"
      MR_hl_field(MR_mktag(1), ml_backend__mlds_to_managed__V_20_20, 1) = ((MR_Box) (ml_backend__mlds_to_managed__V_22_22));
#line 130 "mlds_to_managed.m"
    }
#line 130 "mlds_to_managed.m"
    {
#line 130 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 130 "mlds_to_managed.m"
      MR_hl_field(MR_mktag(1), ml_backend__mlds_to_managed__V_19_19, 0) = ((MR_Box) (ml_backend__mlds_to_managed__Version_6));
#line 130 "mlds_to_managed.m"
      MR_hl_field(MR_mktag(1), ml_backend__mlds_to_managed__V_19_19, 1) = ((MR_Box) (ml_backend__mlds_to_managed__V_20_20));
#line 130 "mlds_to_managed.m"
    }
#line 130 "mlds_to_managed.m"
    {
#line 130 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 130 "mlds_to_managed.m"
      MR_hl_field(MR_mktag(1), ml_backend__mlds_to_managed__V_17_17, 0) = ((MR_Box) ((MR_String) "// Mercury compiler, version "));
#line 130 "mlds_to_managed.m"
      MR_hl_field(MR_mktag(1), ml_backend__mlds_to_managed__V_17_17, 1) = ((MR_Box) (ml_backend__mlds_to_managed__V_19_19));
#line 130 "mlds_to_managed.m"
    }
#line 129 "mlds_to_managed.m"
    {
#line 129 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 129 "mlds_to_managed.m"
      MR_hl_field(MR_mktag(1), ml_backend__mlds_to_managed__V_15_15, 0) = ((MR_Box) ((MR_String) ".m\' by the\n"));
#line 129 "mlds_to_managed.m"
      MR_hl_field(MR_mktag(1), ml_backend__mlds_to_managed__V_15_15, 1) = ((MR_Box) (ml_backend__mlds_to_managed__V_17_17));
#line 129 "mlds_to_managed.m"
    }
#line 128 "mlds_to_managed.m"
    {
#line 128 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 128 "mlds_to_managed.m"
      MR_hl_field(MR_mktag(1), ml_backend__mlds_to_managed__V_13_13, 0) = ((MR_Box) (ml_backend__mlds_to_managed__V_14_14));
#line 128 "mlds_to_managed.m"
      MR_hl_field(MR_mktag(1), ml_backend__mlds_to_managed__V_13_13, 1) = ((MR_Box) (ml_backend__mlds_to_managed__V_15_15));
#line 128 "mlds_to_managed.m"
    }
#line 127 "mlds_to_managed.m"
    {
#line 127 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 127 "mlds_to_managed.m"
      MR_hl_field(MR_mktag(1), ml_backend__mlds_to_managed__V_10_10, 0) = ((MR_Box) ((MR_String) "//\n// Automatically generated from \140"));
#line 127 "mlds_to_managed.m"
      MR_hl_field(MR_mktag(1), ml_backend__mlds_to_managed__V_10_10, 1) = ((MR_Box) (ml_backend__mlds_to_managed__V_13_13));
#line 127 "mlds_to_managed.m"
    }
#line 126 "mlds_to_managed.m"
    {
#line 126 "mlds_to_managed.m"
      mercury__io__write_strings_3_p_0(ml_backend__mlds_to_managed__V_10_10);
#line 126 "mlds_to_managed.m"
      return;
    }
#line 124 "mlds_to_managed.m"
  }
#line 32 "mlds_to_managed.m"
}

#line 114 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__output_csharp_code_4_p_0_5(
#line 114 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__closure_arg,
#line 114 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_1,
#line 114 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_2,
#line 114 "mlds_to_managed.m"
  MR_Box * ml_backend__mlds_to_managed__wrapper_arg_3)
#line 114 "mlds_to_managed.m"
{
#line 114 "mlds_to_managed.m"
  {
#line 114 "mlds_to_managed.m"
    MR_Box ml_backend__mlds_to_managed__closure = ml_backend__mlds_to_managed__closure_arg;

#line 114 "mlds_to_managed.m"
    {
#line 114 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__IntroducedFrom__pred__output_csharp_code__114__1_3_p_0(((MR_String) ml_backend__mlds_to_managed__wrapper_arg_1));
#line 114 "mlds_to_managed.m"
      return;
    }
#line 114 "mlds_to_managed.m"
  }
#line 114 "mlds_to_managed.m"
}

#line 109 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__output_csharp_code_4_p_0_4(
#line 109 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__closure_arg,
#line 109 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_1,
#line 109 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_2,
#line 109 "mlds_to_managed.m"
  MR_Box * ml_backend__mlds_to_managed__wrapper_arg_3)
#line 109 "mlds_to_managed.m"
{
#line 109 "mlds_to_managed.m"
  {
#line 109 "mlds_to_managed.m"
    MR_Box ml_backend__mlds_to_managed__closure = ml_backend__mlds_to_managed__closure_arg;

#line 109 "mlds_to_managed.m"
    {
#line 109 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__generate_method_code_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__mlds_to_managed__wrapper_arg_1));
#line 109 "mlds_to_managed.m"
      return;
    }
#line 109 "mlds_to_managed.m"
  }
#line 109 "mlds_to_managed.m"
}

#line 94 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__output_csharp_code_4_p_0_3(
#line 94 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__closure_arg,
#line 94 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_1,
#line 94 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_2,
#line 94 "mlds_to_managed.m"
  MR_Box * ml_backend__mlds_to_managed__wrapper_arg_3)
#line 94 "mlds_to_managed.m"
{
#line 94 "mlds_to_managed.m"
  {
#line 94 "mlds_to_managed.m"
    MR_Box ml_backend__mlds_to_managed__closure = ml_backend__mlds_to_managed__closure_arg;

#line 94 "mlds_to_managed.m"
    {
#line 94 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__IntroducedFrom__pred__output_csharp_code__94__1_4_p_0(((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__closure, (MR_Integer) 3))), ((MR_String) ml_backend__mlds_to_managed__wrapper_arg_1));
#line 94 "mlds_to_managed.m"
      return;
    }
#line 94 "mlds_to_managed.m"
  }
#line 94 "mlds_to_managed.m"
}

#line 76 "mlds_to_managed.m"
static MR_bool MR_CALL 
ml_backend__mlds_to_managed__output_csharp_code_4_p_0_2(
#line 76 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__closure_arg)
#line 76 "mlds_to_managed.m"
{
#line 76 "mlds_to_managed.m"
  {
#line 76 "mlds_to_managed.m"
    MR_bool ml_backend__mlds_to_managed__succeeded;
#line 76 "mlds_to_managed.m"
    MR_Box ml_backend__mlds_to_managed__closure = ml_backend__mlds_to_managed__closure_arg;

#line 76 "mlds_to_managed.m"
    {
#line 76 "mlds_to_managed.m"
      return ml_backend__mlds_to_managed__succeeded = ml_backend__mlds_to_managed__IntroducedFrom__pred__output_csharp_code__76__1_1_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__closure, (MR_Integer) 3))));
    }
#line 76 "mlds_to_managed.m"
    return ml_backend__mlds_to_managed__succeeded;
#line 76 "mlds_to_managed.m"
  }
#line 76 "mlds_to_managed.m"
}

#line 74 "mlds_to_managed.m"
static MR_bool MR_CALL 
ml_backend__mlds_to_managed__output_csharp_code_4_p_0_1(
#line 74 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__closure_arg)
#line 74 "mlds_to_managed.m"
{
#line 74 "mlds_to_managed.m"
  {
#line 74 "mlds_to_managed.m"
    MR_bool ml_backend__mlds_to_managed__succeeded;
#line 74 "mlds_to_managed.m"
    MR_Box ml_backend__mlds_to_managed__closure = ml_backend__mlds_to_managed__closure_arg;

#line 74 "mlds_to_managed.m"
    {
#line 74 "mlds_to_managed.m"
      return ml_backend__mlds_to_managed__succeeded = ml_backend__mlds_to_managed__IntroducedFrom__pred__output_csharp_code__74__1_1_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__closure, (MR_Integer) 3))));
    }
#line 74 "mlds_to_managed.m"
    return ml_backend__mlds_to_managed__succeeded;
#line 74 "mlds_to_managed.m"
  }
#line 74 "mlds_to_managed.m"
}

#line 28 "mlds_to_managed.m"
void MR_CALL 
ml_backend__mlds_to_managed__output_csharp_code_4_p_0(
#line 28 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__Globals_5,
#line 28 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__MLDS_6)
#line 28 "mlds_to_managed.m"
{
#line 69 "mlds_to_managed.m"
  {
#line 69 "mlds_to_managed.m"
    MR_bool ml_backend__mlds_to_managed__succeeded;
#line 69 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__TypeCtorInfo_95_95;
#line 69 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__TypeCtorInfo_98_98;
#line 69 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__MLDS_6, (MR_Integer) 0)));
#line 69 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__AllForeignCode_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__MLDS_6, (MR_Integer) 1)));
#line 69 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__GlobalData_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__MLDS_6, (MR_Integer) 3)));
#line 69 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__Defns0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__MLDS_6, (MR_Integer) 4)));
#line 69 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__ScalarCellGroupMap_16;
#line 69 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__VectorCellGroupMap_17;
#line 69 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__GlobalDefns_19;
#line 69 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__Defns_20;
#line 69 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__ClassName_21;
#line 69 "mlds_to_managed.m"
    MR_String ml_backend__mlds_to_managed__SourceFileName_22;
#line 69 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__ForeignCode_23;
#line 69 "mlds_to_managed.m"
    MR_String ml_backend__mlds_to_managed__NameSpaceFmtStr_24;
#line 69 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__Namespace_25;
#line 69 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__DataRep_27;
#line 69 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__V_31_31;
#line 69 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__V_35_35;
#line 69 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__V_40_40;
#line 69 "mlds_to_managed.m"
    MR_String ml_backend__mlds_to_managed__V_41_41;
#line 69 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__V_47_47;
#line 69 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__V_58_58;
#line 69 "mlds_to_managed.m"
    MR_String ml_backend__mlds_to_managed__V_60_60;
#line 69 "mlds_to_managed.m"
    MR_String ml_backend__mlds_to_managed__V_62_62;
#line 69 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__V_68_68;
#line 70 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed___Imports_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__MLDS_6, (MR_Integer) 2)));
#line 70 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed___InitPreds_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__MLDS_6, (MR_Integer) 5)));
#line 70 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed___FinalPreds_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__MLDS_6, (MR_Integer) 6)));
#line 70 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed___ExportedEnums_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__MLDS_6, (MR_Integer) 7)));
#line 72 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed___AllocIdMap_18;
#line 89 "mlds_to_managed.m"
    MR_Box ml_backend__mlds_to_managed__conv0_ForeignCode_23;
#line 109 "mlds_to_managed.m"
    MR_Box ml_backend__mlds_to_managed__conv1_STATE_VARIABLE_IO_69_69;

#line 72 "mlds_to_managed.m"
    {
#line 72 "mlds_to_managed.m"
      ml_backend__ml_global_data__ml_global_data_get_all_global_defns_5_p_0(ml_backend__mlds_to_managed__GlobalData_11, &ml_backend__mlds_to_managed__ScalarCellGroupMap_16, &ml_backend__mlds_to_managed__VectorCellGroupMap_17, &ml_backend__mlds_to_managed___AllocIdMap_18, &ml_backend__mlds_to_managed__GlobalDefns_19);
    }
#line 74 "mlds_to_managed.m"
    {
#line 74 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 74 "mlds_to_managed.m"
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_31_31, 0) = ((MR_Box) (&ml_backend__mlds_to_managed_scalar_common_2[0]));
#line 74 "mlds_to_managed.m"
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_31_31, 1) = ((MR_Box) (ml_backend__mlds_to_managed__output_csharp_code_4_p_0_1));
#line 74 "mlds_to_managed.m"
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_31_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 74 "mlds_to_managed.m"
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_31_31, 3) = ((MR_Box) (ml_backend__mlds_to_managed__ScalarCellGroupMap_16));
#line 74 "mlds_to_managed.m"
    }
#line 74 "mlds_to_managed.m"
    {
#line 74 "mlds_to_managed.m"
      mercury__require__expect_4_p_0(ml_backend__mlds_to_managed__V_31_31, (MR_String) "ml_backend.mlds_to_managed", (MR_String) "predicate \140ml_backend.mlds_to_managed.output_csharp_code\'/4", (MR_String) "nonempty ScalarCellGroupMap");
    }
#line 76 "mlds_to_managed.m"
    {
#line 76 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 76 "mlds_to_managed.m"
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_35_35, 0) = ((MR_Box) (&ml_backend__mlds_to_managed_scalar_common_2[1]));
#line 76 "mlds_to_managed.m"
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_35_35, 1) = ((MR_Box) (ml_backend__mlds_to_managed__output_csharp_code_4_p_0_2));
#line 76 "mlds_to_managed.m"
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_35_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 76 "mlds_to_managed.m"
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_35_35, 3) = ((MR_Box) (ml_backend__mlds_to_managed__VectorCellGroupMap_17));
#line 76 "mlds_to_managed.m"
    }
#line 76 "mlds_to_managed.m"
    {
#line 76 "mlds_to_managed.m"
      mercury__require__expect_4_p_0(ml_backend__mlds_to_managed__V_35_35, (MR_String) "ml_backend.mlds_to_managed", (MR_String) "predicate \140ml_backend.mlds_to_managed.output_csharp_code\'/4", (MR_String) "nonempty VectorCellGroupMap");
    }
#line 5633 "ml_backend.mlds_to_managed.c"
    ml_backend__mlds_to_managed__TypeCtorInfo_95_95 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0;
#line 78 "mlds_to_managed.m"
    {
#line 78 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__Defns_20 = mercury__list__f_43_43_2_f_0(ml_backend__mlds_to_managed__TypeCtorInfo_95_95, ml_backend__mlds_to_managed__GlobalDefns_19, ml_backend__mlds_to_managed__Defns0_12);
    }
#line 80 "mlds_to_managed.m"
    {
#line 80 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__output_src_start_3_p_0(ml_backend__mlds_to_managed__ModuleName_8);
    }
#line 82 "mlds_to_managed.m"
    {
#line 82 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__V_40_40 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__mlds_to_managed__ModuleName_8);
    }
#line 83 "mlds_to_managed.m"
    {
#line 83 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__V_41_41 = ml_backend__mlds__wrapper_class_name_0_f_0();
    }
#line 82 "mlds_to_managed.m"
    {
#line 82 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__ClassName_21 = ml_backend__mlds_to_il__class_name_2_f_0(ml_backend__mlds_to_managed__V_40_40, ml_backend__mlds_to_managed__V_41_41);
    }
#line 85 "mlds_to_managed.m"
    {
#line 85 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__output_csharp_header_code_3_p_0(ml_backend__mlds_to_managed__Globals_5);
    }
#line 88 "mlds_to_managed.m"
    {
#line 88 "mlds_to_managed.m"
      parse_tree__file_names__module_source_filename_5_p_0(ml_backend__mlds_to_managed__Globals_5, ml_backend__mlds_to_managed__ModuleName_8, &ml_backend__mlds_to_managed__SourceFileName_22);
    }
#line 89 "mlds_to_managed.m"
    {
#line 89 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__conv0_ForeignCode_23 = mercury__map__lookup_2_f_0((MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_foreign_code_0, ml_backend__mlds_to_managed__AllForeignCode_9, ((MR_Box) ((MR_Integer) 1)));
    }
#line 89 "mlds_to_managed.m"
    ml_backend__mlds_to_managed__ForeignCode_23 = ((MR_Word) ml_backend__mlds_to_managed__conv0_ForeignCode_23);
#line 90 "mlds_to_managed.m"
    {
#line 90 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__generate_foreign_header_code_5_p_0(ml_backend__mlds_to_managed__Globals_5, ml_backend__mlds_to_managed__SourceFileName_22, ml_backend__mlds_to_managed__ForeignCode_23);
    }
#line 93 "mlds_to_managed.m"
    {
#line 93 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__generate_namespace_details_3_p_0(ml_backend__mlds_to_managed__ClassName_21, &ml_backend__mlds_to_managed__NameSpaceFmtStr_24, &ml_backend__mlds_to_managed__Namespace_25);
    }
#line 94 "mlds_to_managed.m"
    {
#line 94 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 94 "mlds_to_managed.m"
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_47_47, 0) = ((MR_Box) (&ml_backend__mlds_to_managed_scalar_common_3[0]));
#line 94 "mlds_to_managed.m"
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_47_47, 1) = ((MR_Box) (ml_backend__mlds_to_managed__output_csharp_code_4_p_0_3));
#line 94 "mlds_to_managed.m"
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_47_47, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 94 "mlds_to_managed.m"
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_47_47, 3) = ((MR_Box) (ml_backend__mlds_to_managed__NameSpaceFmtStr_24));
#line 94 "mlds_to_managed.m"
    }
#line 5701 "ml_backend.mlds_to_managed.c"
    ml_backend__mlds_to_managed__TypeCtorInfo_98_98 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 94 "mlds_to_managed.m"
    {
#line 94 "mlds_to_managed.m"
      mercury__io__write_list_5_p_0(ml_backend__mlds_to_managed__TypeCtorInfo_98_98, ml_backend__mlds_to_managed__Namespace_25, (MR_String) "\n", ml_backend__mlds_to_managed__V_47_47);
    }
#line 99 "mlds_to_managed.m"
    {
#line 99 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__V_62_62 = ml_backend__mlds__wrapper_class_name_0_f_0();
    }
#line 99 "mlds_to_managed.m"
    {
#line 99 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__V_60_60 = mercury__string__f_43_43_2_f_0((MR_String) "\npublic class ", ml_backend__mlds_to_managed__V_62_62);
    }
#line 99 "mlds_to_managed.m"
    {
#line 99 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 99 "mlds_to_managed.m"
      MR_hl_field(MR_mktag(1), ml_backend__mlds_to_managed__V_58_58, 0) = ((MR_Box) (ml_backend__mlds_to_managed__V_60_60));
#line 99 "mlds_to_managed.m"
      MR_hl_field(MR_mktag(1), ml_backend__mlds_to_managed__V_58_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_managed_scalar_common_1[3])));
#line 99 "mlds_to_managed.m"
    }
#line 99 "mlds_to_managed.m"
    {
#line 99 "mlds_to_managed.m"
      mercury__io__write_strings_3_p_0(ml_backend__mlds_to_managed__V_58_58);
    }
#line 102 "mlds_to_managed.m"
    {
#line 102 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__generate_foreign_code_5_p_0(ml_backend__mlds_to_managed__Globals_5, ml_backend__mlds_to_managed__SourceFileName_22, ml_backend__mlds_to_managed__ForeignCode_23);
    }
#line 104 "mlds_to_managed.m"
    {
#line 104 "mlds_to_managed.m"
      mercury__io__nl_2_p_0();
    }
#line 108 "mlds_to_managed.m"
    {
#line 108 "mlds_to_managed.m"
      ml_backend__mlds_to_il__get_il_data_rep_2_p_0(ml_backend__mlds_to_managed__Globals_5, &ml_backend__mlds_to_managed__DataRep_27);
    }
#line 109 "mlds_to_managed.m"
    {
#line 109 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__V_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 109 "mlds_to_managed.m"
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_68_68, 0) = ((MR_Box) (&ml_backend__mlds_to_managed_scalar_common_4[0]));
#line 109 "mlds_to_managed.m"
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_68_68, 1) = ((MR_Box) (ml_backend__mlds_to_managed__output_csharp_code_4_p_0_4));
#line 109 "mlds_to_managed.m"
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_68_68, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 109 "mlds_to_managed.m"
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_68_68, 3) = ((MR_Box) (ml_backend__mlds_to_managed__Globals_5));
#line 109 "mlds_to_managed.m"
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_68_68, 4) = ((MR_Box) (ml_backend__mlds_to_managed__DataRep_27));
#line 109 "mlds_to_managed.m"
    }
#line 109 "mlds_to_managed.m"
    {
#line 109 "mlds_to_managed.m"
      mercury__list__foldl_4_p_2(ml_backend__mlds_to_managed__TypeCtorInfo_95_95, (MR_Word) &mercury__io__io__type_ctor_info_state_0, ml_backend__mlds_to_managed__V_68_68, ml_backend__mlds_to_managed__Defns_20, ((MR_Box) ((MR_Integer) 0)), &ml_backend__mlds_to_managed__conv1_STATE_VARIABLE_IO_69_69);
    }
#line 111 "mlds_to_managed.m"
    {
#line 111 "mlds_to_managed.m"
      mercury__io__write_string_3_p_0((MR_String) "};\n");
    }
#line 114 "mlds_to_managed.m"
    {
#line 114 "mlds_to_managed.m"
      mercury__io__write_list_5_p_0(ml_backend__mlds_to_managed__TypeCtorInfo_98_98, ml_backend__mlds_to_managed__Namespace_25, (MR_String) "\n", (MR_Word) &ml_backend__mlds_to_managed_scalar_common_6[0]);
    }
#line 118 "mlds_to_managed.m"
    {
#line 118 "mlds_to_managed.m"
      mercury__io__nl_2_p_0();
    }
#line 120 "mlds_to_managed.m"
    {
#line 120 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__output_src_end_3_p_0(ml_backend__mlds_to_managed__ModuleName_8);
#line 120 "mlds_to_managed.m"
      return;
    }
#line 69 "mlds_to_managed.m"
  }
#line 28 "mlds_to_managed.m"
}

void mercury__ml_backend__mlds_to_managed__init(void)
{
}

void mercury__ml_backend__mlds_to_managed__init_type_tables(void)
{
}

void mercury__ml_backend__mlds_to_managed__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ml_backend.mlds_to_managed. */
