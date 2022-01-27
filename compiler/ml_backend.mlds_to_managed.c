/*
** Automatically generated from `mlds_to_managed.m'
** by the Mercury compiler,
** version rotd-2013-10-01, configured for x86_64-apple-darwin12.4.0.
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
#include "mdbcomp.trace_counts.mih"
#include "ml_backend.ilasm.mih"
#include "ml_backend.ilds.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.ml_util.mih"
#include "ml_backend.mlds.mih"
#include "ml_backend.mlds_to_il.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
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




#line 148 "ml_backend.mlds_to_managed.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__mlds_to_managed__tree234__pti_tree234_2__plain_ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0__plain_ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_group_0;

#line 151 "ml_backend.mlds_to_managed.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__mlds_to_managed__tree234__pti_tree234_2__plain_ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0__plain_ml_backend__ml_global_data__type_ctor_info_ml_vector_cell_group_0;

#line 154 "ml_backend.mlds_to_managed.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_managed__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0;

#line 157 "ml_backend.mlds_to_managed.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_managed__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_argument_0;

#line 111 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_99_115_104_97_114_112_95_99_111_100_101_95_95_49_49_49_95_95_49_95_95_91_49_93_95_48_3_p_0(void);

#line 243 "mlds_to_managed.m"
static MR_bool MR_CALL 
ml_backend__mlds_to_managed__IntroducedFrom__pred__generate_method_code__243__1_1_p_0(
#line 243 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__EnvVarNames_26);

#line 211 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__IntroducedFrom__pred__generate_foreign_code__211__1_4_p_0(
#line 211 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__Globals_5,
#line 211 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__HeadVar__2_23);

#line 172 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__IntroducedFrom__pred__generate_foreign_header_code__172__1_4_p_0(
#line 172 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__Globals_5,
#line 172 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__HeadVar__2_24);

#line 111 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__IntroducedFrom__pred__output_csharp_code__111__1_3_p_0(
#line 111 "mlds_to_managed.m"
  MR_String ml_backend__mlds_to_managed__HeadVar__1_75);

#line 91 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__IntroducedFrom__pred__output_csharp_code__91__1_4_p_0(
#line 91 "mlds_to_managed.m"
  MR_String ml_backend__mlds_to_managed__NameSpaceFmtStr_23,
#line 91 "mlds_to_managed.m"
  MR_String ml_backend__mlds_to_managed__HeadVar__2_49);

#line 74 "mlds_to_managed.m"
static MR_bool MR_CALL 
ml_backend__mlds_to_managed__IntroducedFrom__pred__output_csharp_code__74__1_1_p_0(
#line 74 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__VectorCellGroupMap_17);

#line 72 "mlds_to_managed.m"
static MR_bool MR_CALL 
ml_backend__mlds_to_managed__IntroducedFrom__pred__output_csharp_code__72__1_1_p_0(
#line 72 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__ScalarCellGroupMap_16);

#line 736 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__write_class_name_3_p_0_1(
#line 736 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__closure_arg,
#line 736 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_1,
#line 736 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_2,
#line 736 "mlds_to_managed.m"
  MR_Box * ml_backend__mlds_to_managed__wrapper_arg_3);

#line 733 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__write_class_name_3_p_0(
#line 733 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__HeadVar__1_1);

#line 680 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__write_csharp_initializer_3_p_0(
#line 680 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__HeadVar__1_1);

#line 618 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__write_il_simple_type_as_foreign_type_3_p_0(
#line 618 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__HeadVar__1_1);

#line 606 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__write_il_type_modifier_as_foreign_type_3_p_0(
#line 606 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__HeadVar__1_1);

#line 602 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__write_il_type_as_foreign_type_3_p_0_1(
#line 602 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__closure_arg,
#line 602 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_1,
#line 602 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_2,
#line 602 "mlds_to_managed.m"
  MR_Box * ml_backend__mlds_to_managed__wrapper_arg_3);

#line 599 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__write_il_type_as_foreign_type_3_p_0(
#line 599 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__HeadVar__1_1);

#line 602 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__write_input_arg_as_foreign_type_4_p_0_1(
#line 602 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__closure_arg,
#line 602 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_1,
#line 602 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_2,
#line 602 "mlds_to_managed.m"
  MR_Box * ml_backend__mlds_to_managed__wrapper_arg_3);

#line 571 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__write_input_arg_as_foreign_type_4_p_0(
#line 571 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__DataRep_5,
#line 571 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__Arg_6);

#line 602 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__write_defn_decl_4_p_0_1(
#line 602 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__closure_arg,
#line 602 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_1,
#line 602 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_2,
#line 602 "mlds_to_managed.m"
  MR_Box * ml_backend__mlds_to_managed__wrapper_arg_3);

#line 547 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__write_defn_decl_4_p_0(
#line 547 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__DataRep_5,
#line 547 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__Defn_6);

#line 513 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__write_lval_4_p_0(
#line 513 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__DataRep_5,
#line 513 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__Lval_6);

#line 467 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__write_rval_const_3_p_0(
#line 467 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__HeadVar__1_1);

#line 602 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__write_rval_4_p_0_1(
#line 602 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__closure_arg,
#line 602 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_1,
#line 602 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_2,
#line 602 "mlds_to_managed.m"
  MR_Box * ml_backend__mlds_to_managed__wrapper_arg_3);

#line 407 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__write_rval_4_p_0(
#line 407 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__DataRep_5,
#line 407 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__Rval_6);

#line 350 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__write_outline_arg_final_4_p_0(
#line 350 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__DataRep_5,
#line 350 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__OutlineArg_6);

#line 602 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__write_outline_arg_init_4_p_0_2(
#line 602 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__closure_arg,
#line 602 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_1,
#line 602 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_2,
#line 602 "mlds_to_managed.m"
  MR_Box * ml_backend__mlds_to_managed__wrapper_arg_3);

#line 602 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__write_outline_arg_init_4_p_0_1(
#line 602 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__closure_arg,
#line 602 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_1,
#line 602 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_2,
#line 602 "mlds_to_managed.m"
  MR_Box * ml_backend__mlds_to_managed__wrapper_arg_3);

#line 325 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__write_outline_arg_init_4_p_0(
#line 325 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__DataRep_5,
#line 325 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__OutlineArg_6);

#line 300 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__write_statement_6_p_0_4(
#line 300 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__closure_arg,
#line 300 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_1,
#line 300 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_2,
#line 300 "mlds_to_managed.m"
  MR_Box * ml_backend__mlds_to_managed__wrapper_arg_3);

#line 298 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__write_statement_6_p_0_3(
#line 298 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__closure_arg,
#line 298 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_1,
#line 298 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_2,
#line 298 "mlds_to_managed.m"
  MR_Box * ml_backend__mlds_to_managed__wrapper_arg_3);

#line 294 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__write_statement_6_p_0_2(
#line 294 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__closure_arg,
#line 294 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_1,
#line 294 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_2,
#line 294 "mlds_to_managed.m"
  MR_Box * ml_backend__mlds_to_managed__wrapper_arg_3);

#line 289 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__write_statement_6_p_0_1(
#line 289 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__closure_arg,
#line 289 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_1,
#line 289 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_2,
#line 289 "mlds_to_managed.m"
  MR_Box * ml_backend__mlds_to_managed__wrapper_arg_3);

#line 280 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__write_statement_6_p_0(
#line 280 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__Globals_7,
#line 280 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__DataRep_8,
#line 280 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__Args_9,
#line 280 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__HeadVar__4_4);

#line 267 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__generate_method_code_5_p_0_2(
#line 267 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__closure_arg,
#line 267 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_1,
#line 267 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_2,
#line 267 "mlds_to_managed.m"
  MR_Box * ml_backend__mlds_to_managed__wrapper_arg_3);

#line 243 "mlds_to_managed.m"
static MR_bool MR_CALL 
ml_backend__mlds_to_managed__generate_method_code_5_p_0_1(
#line 243 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__closure_arg);

#line 224 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__generate_method_code_5_p_0(
#line 224 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__Globals_6,
#line 224 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__DataRep_7,
#line 224 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__Defn_8);

#line 211 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__generate_foreign_code_4_p_0_1(
#line 211 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__closure_arg,
#line 211 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_1,
#line 211 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_2,
#line 211 "mlds_to_managed.m"
  MR_Box * ml_backend__mlds_to_managed__wrapper_arg_3);

#line 204 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__generate_foreign_code_4_p_0(
#line 204 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__Globals_5,
#line 204 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__ForeignCode_6);

#line 186 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__generate_namespace_details_3_p_0(
#line 186 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__ClassName_4,
#line 186 "mlds_to_managed.m"
  MR_String * ml_backend__mlds_to_managed__NameSpaceFmtStr_5,
#line 186 "mlds_to_managed.m"
  MR_Word * ml_backend__mlds_to_managed__Namespace_6);

#line 172 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__generate_foreign_header_code_4_p_0_1(
#line 172 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__closure_arg,
#line 172 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_1,
#line 172 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_2,
#line 172 "mlds_to_managed.m"
  MR_Box * ml_backend__mlds_to_managed__wrapper_arg_3);

#line 164 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__generate_foreign_header_code_4_p_0(
#line 164 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__Globals_5,
#line 164 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__ForeignCode_6);

#line 140 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__output_csharp_header_code_3_p_0(
#line 140 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__Globals_4);

#line 111 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__output_csharp_code_4_p_0_5(
#line 111 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__closure_arg,
#line 111 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_1,
#line 111 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_2,
#line 111 "mlds_to_managed.m"
  MR_Box * ml_backend__mlds_to_managed__wrapper_arg_3);

#line 106 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__output_csharp_code_4_p_0_4(
#line 106 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__closure_arg,
#line 106 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_1,
#line 106 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_2,
#line 106 "mlds_to_managed.m"
  MR_Box * ml_backend__mlds_to_managed__wrapper_arg_3);

#line 91 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__output_csharp_code_4_p_0_3(
#line 91 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__closure_arg,
#line 91 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_1,
#line 91 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_2,
#line 91 "mlds_to_managed.m"
  MR_Box * ml_backend__mlds_to_managed__wrapper_arg_3);

#line 74 "mlds_to_managed.m"
static MR_bool MR_CALL 
ml_backend__mlds_to_managed__output_csharp_code_4_p_0_2(
#line 74 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__closure_arg);

#line 72 "mlds_to_managed.m"
static MR_bool MR_CALL 
ml_backend__mlds_to_managed__output_csharp_code_4_p_0_1(
#line 72 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__closure_arg);


static /* final */ const MR_Box ml_backend__mlds_to_managed_scalar_common_1[4][2];

static /* final */ const MR_Box ml_backend__mlds_to_managed_scalar_common_2[3][4];

static /* final */ const MR_Box ml_backend__mlds_to_managed_scalar_common_3[6][7];

static /* final */ const MR_Box ml_backend__mlds_to_managed_scalar_common_4[1][8];

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

static /* final */ const MR_Box ml_backend__mlds_to_managed_scalar_common_3[6][7] = {
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
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_user_foreign_code_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__mlds_to_il__ml_backend__mlds_to_il__type_ctor_info_il_data_rep_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__mlds_to_il__ml_backend__mlds_to_il__type_ctor_info_il_data_rep_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_outline_arg_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 5 */
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

static /* final */ const MR_Box ml_backend__mlds_to_managed_scalar_common_4[1][8] = {
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



#line 818 "ml_backend.mlds_to_managed.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__mlds_to_managed__tree234__pti_tree234_2__plain_ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0__plain_ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_group_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0,
    (MR_PseudoTypeInfo) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_group_0
  }
};

#line 827 "ml_backend.mlds_to_managed.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__mlds_to_managed__tree234__pti_tree234_2__plain_ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0__plain_ml_backend__ml_global_data__type_ctor_info_ml_vector_cell_group_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0,
    (MR_PseudoTypeInfo) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_vector_cell_group_0
  }
};

#line 836 "ml_backend.mlds_to_managed.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_managed__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 844 "ml_backend.mlds_to_managed.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_managed__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_argument_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0
  }
};

#line 111 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_99_115_104_97_114_112_95_99_111_100_101_95_95_49_49_49_95_95_49_95_95_91_49_93_95_48_3_p_0(void)
#line 111 "mlds_to_managed.m"
{
#line 111 "mlds_to_managed.m"
  {
#line 111 "mlds_to_managed.m"
    MR_bool ml_backend__mlds_to_managed__succeeded;

#line 113 "mlds_to_managed.m"
    {
#line 113 "mlds_to_managed.m"
      mercury__io__write_string_3_p_0((MR_String) "}");
#line 113 "mlds_to_managed.m"
      return;
    }
#line 111 "mlds_to_managed.m"
  }
#line 111 "mlds_to_managed.m"
}

#line 243 "mlds_to_managed.m"
static MR_bool MR_CALL 
ml_backend__mlds_to_managed__IntroducedFrom__pred__generate_method_code__243__1_1_p_0(
#line 243 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__EnvVarNames_26)
#line 243 "mlds_to_managed.m"
{
#line 243 "mlds_to_managed.m"
  {
#line 243 "mlds_to_managed.m"
    MR_bool ml_backend__mlds_to_managed__succeeded;

#line 243 "mlds_to_managed.m"
    {
#line 243 "mlds_to_managed.m"
      return ml_backend__mlds_to_managed__succeeded = mercury__set__empty_1_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ml_backend__mlds_to_managed__EnvVarNames_26);
    }
#line 243 "mlds_to_managed.m"
    return ml_backend__mlds_to_managed__succeeded;
#line 243 "mlds_to_managed.m"
  }
#line 243 "mlds_to_managed.m"
}

#line 211 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__IntroducedFrom__pred__generate_foreign_code__211__1_4_p_0(
#line 211 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__Globals_5,
#line 211 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__HeadVar__2_23)
#line 211 "mlds_to_managed.m"
{
#line 211 "mlds_to_managed.m"
  {
#line 211 "mlds_to_managed.m"
    MR_bool ml_backend__mlds_to_managed__succeeded;
#line 211 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__CodeLang_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__HeadVar__2_23, (MR_Integer) 0)));
#line 211 "mlds_to_managed.m"
    MR_String ml_backend__mlds_to_managed__Code_34 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__HeadVar__2_23, (MR_Integer) 1)));
#line 211 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__Context_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__HeadVar__2_23, (MR_Integer) 2)));
#line 211 "mlds_to_managed.m"
    MR_String ml_backend__mlds_to_managed__File_44;
#line 211 "mlds_to_managed.m"
    MR_Integer ml_backend__mlds_to_managed__Line_45;

#line 398 "mlds_to_managed.m"
    {
#line 398 "mlds_to_managed.m"
      mercury__term__context_file_2_p_0(ml_backend__mlds_to_managed__Context_35, &ml_backend__mlds_to_managed__File_44);
    }
#line 399 "mlds_to_managed.m"
    {
#line 399 "mlds_to_managed.m"
      mercury__term__context_line_2_p_0(ml_backend__mlds_to_managed__Context_35, &ml_backend__mlds_to_managed__Line_45);
    }
#line 400 "mlds_to_managed.m"
    {
#line 400 "mlds_to_managed.m"
      backend_libs__c_util__set_line_num_5_p_0(ml_backend__mlds_to_managed__Globals_5, ml_backend__mlds_to_managed__File_44, ml_backend__mlds_to_managed__Line_45);
    }
#line 215 "mlds_to_managed.m"
    ml_backend__mlds_to_managed__succeeded = (ml_backend__mlds_to_managed__CodeLang_33 == (MR_Integer) 1);
#line 218 "mlds_to_managed.m"
    if (ml_backend__mlds_to_managed__succeeded)
#line 216 "mlds_to_managed.m"
      {
#line 216 "mlds_to_managed.m"
        {
#line 216 "mlds_to_managed.m"
          mercury__io__write_string_3_p_0(ml_backend__mlds_to_managed__Code_34);
        }
#line 217 "mlds_to_managed.m"
        {
#line 217 "mlds_to_managed.m"
          mercury__io__nl_2_p_0();
        }
#line 216 "mlds_to_managed.m"
      }
#line 218 "mlds_to_managed.m"
    else
#line 219 "mlds_to_managed.m"
      {
#line 219 "mlds_to_managed.m"
        {
#line 219 "mlds_to_managed.m"
          mercury__require__sorry_3_p_0((MR_String) "ml_backend.mlds_to_managed", (MR_String) "predicate \140ml_backend.mlds_to_managed.generate_foreign_code\'/4", (MR_String) "wrong foreign code");
#line 219 "mlds_to_managed.m"
          return;
        }
#line 219 "mlds_to_managed.m"
      }
#line 405 "mlds_to_managed.m"
    {
#line 405 "mlds_to_managed.m"
      backend_libs__c_util__reset_line_num_3_p_0(ml_backend__mlds_to_managed__Globals_5);
#line 405 "mlds_to_managed.m"
      return;
    }
#line 211 "mlds_to_managed.m"
  }
#line 211 "mlds_to_managed.m"
}

#line 172 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__IntroducedFrom__pred__generate_foreign_header_code__172__1_4_p_0(
#line 172 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__Globals_5,
#line 172 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__HeadVar__2_24)
#line 172 "mlds_to_managed.m"
{
#line 172 "mlds_to_managed.m"
  {
#line 172 "mlds_to_managed.m"
    MR_bool ml_backend__mlds_to_managed__succeeded;
#line 172 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__CodeLang_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__HeadVar__2_24, (MR_Integer) 0)));
#line 172 "mlds_to_managed.m"
    MR_String ml_backend__mlds_to_managed__Code_37 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__HeadVar__2_24, (MR_Integer) 2)));
#line 172 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__Context_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__HeadVar__2_24, (MR_Integer) 3)));
#line 172 "mlds_to_managed.m"
    MR_String ml_backend__mlds_to_managed__File_47;
#line 172 "mlds_to_managed.m"
    MR_Integer ml_backend__mlds_to_managed__Line_48;
#line 172 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed___IsLocal_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__HeadVar__2_24, (MR_Integer) 1)));

#line 398 "mlds_to_managed.m"
    {
#line 398 "mlds_to_managed.m"
      mercury__term__context_file_2_p_0(ml_backend__mlds_to_managed__Context_38, &ml_backend__mlds_to_managed__File_47);
    }
#line 399 "mlds_to_managed.m"
    {
#line 399 "mlds_to_managed.m"
      mercury__term__context_line_2_p_0(ml_backend__mlds_to_managed__Context_38, &ml_backend__mlds_to_managed__Line_48);
    }
#line 400 "mlds_to_managed.m"
    {
#line 400 "mlds_to_managed.m"
      backend_libs__c_util__set_line_num_5_p_0(ml_backend__mlds_to_managed__Globals_5, ml_backend__mlds_to_managed__File_47, ml_backend__mlds_to_managed__Line_48);
    }
#line 177 "mlds_to_managed.m"
    ml_backend__mlds_to_managed__succeeded = (ml_backend__mlds_to_managed__CodeLang_35 == (MR_Integer) 1);
#line 180 "mlds_to_managed.m"
    if (ml_backend__mlds_to_managed__succeeded)
#line 178 "mlds_to_managed.m"
      {
#line 178 "mlds_to_managed.m"
        {
#line 178 "mlds_to_managed.m"
          mercury__io__write_string_3_p_0(ml_backend__mlds_to_managed__Code_37);
        }
#line 179 "mlds_to_managed.m"
        {
#line 179 "mlds_to_managed.m"
          mercury__io__nl_2_p_0();
        }
#line 178 "mlds_to_managed.m"
      }
#line 180 "mlds_to_managed.m"
    else
#line 181 "mlds_to_managed.m"
      {
#line 181 "mlds_to_managed.m"
        {
#line 181 "mlds_to_managed.m"
          mercury__require__sorry_3_p_0((MR_String) "ml_backend.mlds_to_managed", (MR_String) "predicate \140ml_backend.mlds_to_managed.generate_foreign_header_code\'/4", (MR_String) "wrong foreign code");
#line 181 "mlds_to_managed.m"
          return;
        }
#line 181 "mlds_to_managed.m"
      }
#line 405 "mlds_to_managed.m"
    {
#line 405 "mlds_to_managed.m"
      backend_libs__c_util__reset_line_num_3_p_0(ml_backend__mlds_to_managed__Globals_5);
#line 405 "mlds_to_managed.m"
      return;
    }
#line 172 "mlds_to_managed.m"
  }
#line 172 "mlds_to_managed.m"
}

#line 111 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__IntroducedFrom__pred__output_csharp_code__111__1_3_p_0(
#line 111 "mlds_to_managed.m"
  MR_String ml_backend__mlds_to_managed__HeadVar__1_75)
#line 111 "mlds_to_managed.m"
{
#line 111 "mlds_to_managed.m"
  {
#line 111 "mlds_to_managed.m"
    MR_bool ml_backend__mlds_to_managed__succeeded;

#line 111 "mlds_to_managed.m"
    {
#line 111 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_99_115_104_97_114_112_95_99_111_100_101_95_95_49_49_49_95_95_49_95_95_91_49_93_95_48_3_p_0();
#line 111 "mlds_to_managed.m"
      return;
    }
#line 111 "mlds_to_managed.m"
  }
#line 111 "mlds_to_managed.m"
}

#line 91 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__IntroducedFrom__pred__output_csharp_code__91__1_4_p_0(
#line 91 "mlds_to_managed.m"
  MR_String ml_backend__mlds_to_managed__NameSpaceFmtStr_23,
#line 91 "mlds_to_managed.m"
  MR_String ml_backend__mlds_to_managed__HeadVar__2_49)
#line 91 "mlds_to_managed.m"
{
#line 91 "mlds_to_managed.m"
  {
#line 91 "mlds_to_managed.m"
    MR_bool ml_backend__mlds_to_managed__succeeded;
#line 91 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__V_52_52;
#line 91 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__V_54_54;

#line 93 "mlds_to_managed.m"
    {
#line 93 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__V_54_54 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 93 "mlds_to_managed.m"
      MR_hl_field(MR_mktag(2), ml_backend__mlds_to_managed__V_54_54, 0) = ((MR_Box) (ml_backend__mlds_to_managed__HeadVar__2_49));
#line 93 "mlds_to_managed.m"
    }
#line 93 "mlds_to_managed.m"
    {
#line 93 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 93 "mlds_to_managed.m"
      MR_hl_field(MR_mktag(1), ml_backend__mlds_to_managed__V_52_52, 0) = ((MR_Box) (ml_backend__mlds_to_managed__V_54_54));
#line 93 "mlds_to_managed.m"
      MR_hl_field(MR_mktag(1), ml_backend__mlds_to_managed__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 93 "mlds_to_managed.m"
    }
#line 93 "mlds_to_managed.m"
    {
#line 93 "mlds_to_managed.m"
      mercury__io__format_4_p_0(ml_backend__mlds_to_managed__NameSpaceFmtStr_23, ml_backend__mlds_to_managed__V_52_52);
#line 93 "mlds_to_managed.m"
      return;
    }
#line 91 "mlds_to_managed.m"
  }
#line 91 "mlds_to_managed.m"
}

#line 74 "mlds_to_managed.m"
static MR_bool MR_CALL 
ml_backend__mlds_to_managed__IntroducedFrom__pred__output_csharp_code__74__1_1_p_0(
#line 74 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__VectorCellGroupMap_17)
#line 74 "mlds_to_managed.m"
{
#line 74 "mlds_to_managed.m"
  {
#line 74 "mlds_to_managed.m"
    MR_bool ml_backend__mlds_to_managed__succeeded;

#line 74 "mlds_to_managed.m"
    {
#line 74 "mlds_to_managed.m"
      return ml_backend__mlds_to_managed__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_vector_cell_group_0, ml_backend__mlds_to_managed__VectorCellGroupMap_17);
    }
#line 74 "mlds_to_managed.m"
    return ml_backend__mlds_to_managed__succeeded;
#line 74 "mlds_to_managed.m"
  }
#line 74 "mlds_to_managed.m"
}

#line 72 "mlds_to_managed.m"
static MR_bool MR_CALL 
ml_backend__mlds_to_managed__IntroducedFrom__pred__output_csharp_code__72__1_1_p_0(
#line 72 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__ScalarCellGroupMap_16)
#line 72 "mlds_to_managed.m"
{
#line 72 "mlds_to_managed.m"
  {
#line 72 "mlds_to_managed.m"
    MR_bool ml_backend__mlds_to_managed__succeeded;

#line 72 "mlds_to_managed.m"
    {
#line 72 "mlds_to_managed.m"
      return ml_backend__mlds_to_managed__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_group_0, ml_backend__mlds_to_managed__ScalarCellGroupMap_16);
    }
#line 72 "mlds_to_managed.m"
    return ml_backend__mlds_to_managed__succeeded;
#line 72 "mlds_to_managed.m"
  }
#line 72 "mlds_to_managed.m"
}

#line 736 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__write_class_name_3_p_0_1(
#line 736 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__closure_arg,
#line 736 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_1,
#line 736 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_2,
#line 736 "mlds_to_managed.m"
  MR_Box * ml_backend__mlds_to_managed__wrapper_arg_3)
#line 736 "mlds_to_managed.m"
{
#line 736 "mlds_to_managed.m"
  {
#line 736 "mlds_to_managed.m"
    MR_Box ml_backend__mlds_to_managed__closure = ml_backend__mlds_to_managed__closure_arg;

#line 736 "mlds_to_managed.m"
    {
#line 736 "mlds_to_managed.m"
      mercury__io__write_string_3_p_0(((MR_String) ml_backend__mlds_to_managed__wrapper_arg_1));
#line 736 "mlds_to_managed.m"
      return;
    }
#line 736 "mlds_to_managed.m"
  }
#line 736 "mlds_to_managed.m"
}

#line 733 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__write_class_name_3_p_0(
#line 733 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__HeadVar__1_1)
#line 733 "mlds_to_managed.m"
{
#line 735 "mlds_to_managed.m"
  {
#line 735 "mlds_to_managed.m"
    MR_bool ml_backend__mlds_to_managed__succeeded;
#line 735 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__TypeCtorInfo_14_14 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 735 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__DottedName_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__HeadVar__1_1, (MR_Integer) 1)));
#line 735 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__NestedClasses_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__HeadVar__1_1, (MR_Integer) 2)));
#line 735 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__V_10_10;
#line 735 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed___Asm_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__HeadVar__1_1, (MR_Integer) 0)));

#line 736 "mlds_to_managed.m"
    {
#line 736 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__V_10_10 = mercury__list__f_43_43_2_f_0(ml_backend__mlds_to_managed__TypeCtorInfo_14_14, ml_backend__mlds_to_managed__DottedName_5, ml_backend__mlds_to_managed__NestedClasses_6);
    }
#line 736 "mlds_to_managed.m"
    {
#line 736 "mlds_to_managed.m"
      mercury__io__write_list_5_p_0(ml_backend__mlds_to_managed__TypeCtorInfo_14_14, ml_backend__mlds_to_managed__V_10_10, (MR_String) ".", (MR_Word) &ml_backend__mlds_to_managed_scalar_common_6[7]);
#line 736 "mlds_to_managed.m"
      return;
    }
#line 735 "mlds_to_managed.m"
  }
#line 733 "mlds_to_managed.m"
}

#line 680 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__write_csharp_initializer_3_p_0(
#line 680 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__HeadVar__1_1)
#line 680 "mlds_to_managed.m"
{
#line 682 "mlds_to_managed.m"
  {
#line 682 "mlds_to_managed.m"
    MR_bool ml_backend__mlds_to_managed__succeeded;

#line 682 "mlds_to_managed.m"
    if ((ml_backend__mlds_to_managed__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13)))))
#line 708 "mlds_to_managed.m"
      {
#line 709 "mlds_to_managed.m"
        {
#line 709 "mlds_to_managed.m"
          mercury__io__write_string_3_p_0((MR_String) "false");
#line 709 "mlds_to_managed.m"
          return;
        }
#line 708 "mlds_to_managed.m"
      }
#line 682 "mlds_to_managed.m"
    else
#line 682 "mlds_to_managed.m"
      if ((ml_backend__mlds_to_managed__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 14)))))
#line 710 "mlds_to_managed.m"
        {
#line 711 "mlds_to_managed.m"
          {
#line 711 "mlds_to_managed.m"
            mercury__io__write_string_3_p_0((MR_String) "\'\\0\'");
#line 711 "mlds_to_managed.m"
            return;
          }
#line 710 "mlds_to_managed.m"
        }
#line 682 "mlds_to_managed.m"
      else
#line 682 "mlds_to_managed.m"
        if ((ml_backend__mlds_to_managed__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10)))))
#line 702 "mlds_to_managed.m"
          {
#line 703 "mlds_to_managed.m"
            {
#line 703 "mlds_to_managed.m"
              mercury__io__write_string_3_p_0((MR_String) "0.0");
#line 703 "mlds_to_managed.m"
              return;
            }
#line 702 "mlds_to_managed.m"
          }
#line 682 "mlds_to_managed.m"
        else
#line 682 "mlds_to_managed.m"
          if ((ml_backend__mlds_to_managed__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11)))))
#line 704 "mlds_to_managed.m"
            {
#line 705 "mlds_to_managed.m"
              {
#line 705 "mlds_to_managed.m"
                mercury__io__write_string_3_p_0((MR_String) "0.0");
#line 705 "mlds_to_managed.m"
                return;
              }
#line 704 "mlds_to_managed.m"
            }
#line 682 "mlds_to_managed.m"
          else
#line 682 "mlds_to_managed.m"
            if ((ml_backend__mlds_to_managed__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 684 "mlds_to_managed.m"
              {
#line 685 "mlds_to_managed.m"
                {
#line 685 "mlds_to_managed.m"
                  mercury__io__write_string_3_p_0((MR_String) "0");
#line 685 "mlds_to_managed.m"
                  return;
                }
#line 684 "mlds_to_managed.m"
              }
#line 682 "mlds_to_managed.m"
            else
#line 682 "mlds_to_managed.m"
              if ((ml_backend__mlds_to_managed__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 686 "mlds_to_managed.m"
                {
#line 687 "mlds_to_managed.m"
                  {
#line 687 "mlds_to_managed.m"
                    mercury__io__write_string_3_p_0((MR_String) "0");
#line 687 "mlds_to_managed.m"
                    return;
                  }
#line 686 "mlds_to_managed.m"
                }
#line 682 "mlds_to_managed.m"
              else
#line 682 "mlds_to_managed.m"
                if ((ml_backend__mlds_to_managed__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 688 "mlds_to_managed.m"
                  {
#line 689 "mlds_to_managed.m"
                    {
#line 689 "mlds_to_managed.m"
                      mercury__io__write_string_3_p_0((MR_String) "0");
#line 689 "mlds_to_managed.m"
                      return;
                    }
#line 688 "mlds_to_managed.m"
                  }
#line 682 "mlds_to_managed.m"
                else
#line 682 "mlds_to_managed.m"
                  if ((ml_backend__mlds_to_managed__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 682 "mlds_to_managed.m"
                    {
#line 683 "mlds_to_managed.m"
                      {
#line 683 "mlds_to_managed.m"
                        mercury__io__write_string_3_p_0((MR_String) "0");
#line 683 "mlds_to_managed.m"
                        return;
                      }
#line 682 "mlds_to_managed.m"
                    }
#line 682 "mlds_to_managed.m"
                  else
#line 682 "mlds_to_managed.m"
                    if ((ml_backend__mlds_to_managed__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12)))))
#line 706 "mlds_to_managed.m"
                      {
#line 707 "mlds_to_managed.m"
                        {
#line 707 "mlds_to_managed.m"
                          mercury__io__write_string_3_p_0((MR_String) "0.0");
#line 707 "mlds_to_managed.m"
                          return;
                        }
#line 706 "mlds_to_managed.m"
                      }
#line 682 "mlds_to_managed.m"
                    else
#line 682 "mlds_to_managed.m"
                      if ((ml_backend__mlds_to_managed__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 698 "mlds_to_managed.m"
                        {
#line 699 "mlds_to_managed.m"
                          {
#line 699 "mlds_to_managed.m"
                            mercury__io__write_string_3_p_0((MR_String) "0");
#line 699 "mlds_to_managed.m"
                            return;
                          }
#line 698 "mlds_to_managed.m"
                        }
#line 682 "mlds_to_managed.m"
                      else
#line 682 "mlds_to_managed.m"
                        if ((ml_backend__mlds_to_managed__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)))))
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
#line 682 "mlds_to_managed.m"
                        else
#line 682 "mlds_to_managed.m"
                          if ((ml_backend__mlds_to_managed__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 15)))))
#line 714 "mlds_to_managed.m"
                            {
#line 715 "mlds_to_managed.m"
                              {
#line 715 "mlds_to_managed.m"
                                mercury__io__write_string_3_p_0((MR_String) "null");
#line 715 "mlds_to_managed.m"
                                return;
                              }
#line 714 "mlds_to_managed.m"
                            }
#line 682 "mlds_to_managed.m"
                          else
#line 682 "mlds_to_managed.m"
                            if ((ml_backend__mlds_to_managed__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 17)))))
#line 716 "mlds_to_managed.m"
                              {
#line 717 "mlds_to_managed.m"
                                {
#line 717 "mlds_to_managed.m"
                                  mercury__io__write_string_3_p_0((MR_String) "null");
#line 717 "mlds_to_managed.m"
                                  return;
                                }
#line 716 "mlds_to_managed.m"
                              }
#line 682 "mlds_to_managed.m"
                            else
#line 682 "mlds_to_managed.m"
                              if ((ml_backend__mlds_to_managed__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16)))))
#line 712 "mlds_to_managed.m"
                                {
#line 713 "mlds_to_managed.m"
                                  {
#line 713 "mlds_to_managed.m"
                                    mercury__io__write_string_3_p_0((MR_String) "null");
#line 713 "mlds_to_managed.m"
                                    return;
                                  }
#line 712 "mlds_to_managed.m"
                                }
#line 682 "mlds_to_managed.m"
                              else
#line 682 "mlds_to_managed.m"
                                if ((ml_backend__mlds_to_managed__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 692 "mlds_to_managed.m"
                                  {
#line 693 "mlds_to_managed.m"
                                    {
#line 693 "mlds_to_managed.m"
                                      mercury__io__write_string_3_p_0((MR_String) "0");
#line 693 "mlds_to_managed.m"
                                      return;
                                    }
#line 692 "mlds_to_managed.m"
                                  }
#line 682 "mlds_to_managed.m"
                                else
#line 682 "mlds_to_managed.m"
                                  if ((ml_backend__mlds_to_managed__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 694 "mlds_to_managed.m"
                                    {
#line 695 "mlds_to_managed.m"
                                      {
#line 695 "mlds_to_managed.m"
                                        mercury__io__write_string_3_p_0((MR_String) "0");
#line 695 "mlds_to_managed.m"
                                        return;
                                      }
#line 694 "mlds_to_managed.m"
                                    }
#line 682 "mlds_to_managed.m"
                                  else
#line 682 "mlds_to_managed.m"
                                    if ((ml_backend__mlds_to_managed__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
#line 696 "mlds_to_managed.m"
                                      {
#line 697 "mlds_to_managed.m"
                                        {
#line 697 "mlds_to_managed.m"
                                          mercury__io__write_string_3_p_0((MR_String) "0");
#line 697 "mlds_to_managed.m"
                                          return;
                                        }
#line 696 "mlds_to_managed.m"
                                      }
#line 682 "mlds_to_managed.m"
                                    else
#line 682 "mlds_to_managed.m"
                                      if ((ml_backend__mlds_to_managed__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 690 "mlds_to_managed.m"
                                        {
#line 691 "mlds_to_managed.m"
                                          {
#line 691 "mlds_to_managed.m"
                                            mercury__io__write_string_3_p_0((MR_String) "0");
#line 691 "mlds_to_managed.m"
                                            return;
                                          }
#line 690 "mlds_to_managed.m"
                                        }
#line 682 "mlds_to_managed.m"
                                      else
#line 682 "mlds_to_managed.m"
                                        if (((MR_tag((MR_Word) ml_backend__mlds_to_managed__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 718 "mlds_to_managed.m"
                                          {
#line 719 "mlds_to_managed.m"
                                            {
#line 719 "mlds_to_managed.m"
                                              mercury__io__write_string_3_p_0((MR_String) "null");
#line 719 "mlds_to_managed.m"
                                              return;
                                            }
#line 718 "mlds_to_managed.m"
                                          }
#line 682 "mlds_to_managed.m"
                                        else
#line 682 "mlds_to_managed.m"
                                          if (((MR_tag((MR_Word) ml_backend__mlds_to_managed__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 728 "mlds_to_managed.m"
                                            {
#line 728 "mlds_to_managed.m"
                                              MR_Word ml_backend__mlds_to_managed__ClassName_125 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_managed__HeadVar__1_1, (MR_Integer) 0)));

#line 729 "mlds_to_managed.m"
                                              {
#line 729 "mlds_to_managed.m"
                                                mercury__io__write_string_3_p_0((MR_String) "new ");
                                              }
#line 730 "mlds_to_managed.m"
                                              {
#line 730 "mlds_to_managed.m"
                                                ml_backend__mlds_to_managed__write_class_name_3_p_0(ml_backend__mlds_to_managed__ClassName_125);
                                              }
#line 731 "mlds_to_managed.m"
                                              {
#line 731 "mlds_to_managed.m"
                                                mercury__io__write_string_3_p_0((MR_String) "()");
#line 731 "mlds_to_managed.m"
                                                return;
                                              }
#line 728 "mlds_to_managed.m"
                                            }
#line 682 "mlds_to_managed.m"
                                          else
#line 682 "mlds_to_managed.m"
                                            if (((((MR_tag((MR_Word) ml_backend__mlds_to_managed__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_managed__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 724 "mlds_to_managed.m"
                                              {
#line 725 "mlds_to_managed.m"
                                                {
#line 725 "mlds_to_managed.m"
                                                  mercury__io__write_string_3_p_0((MR_String) "null");
#line 725 "mlds_to_managed.m"
                                                  return;
                                                }
#line 724 "mlds_to_managed.m"
                                              }
#line 682 "mlds_to_managed.m"
                                            else
#line 682 "mlds_to_managed.m"
                                              if (((((MR_tag((MR_Word) ml_backend__mlds_to_managed__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_managed__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 726 "mlds_to_managed.m"
                                                {
#line 727 "mlds_to_managed.m"
                                                  {
#line 727 "mlds_to_managed.m"
                                                    mercury__io__write_string_3_p_0((MR_String) "null");
#line 727 "mlds_to_managed.m"
                                                    return;
                                                  }
#line 726 "mlds_to_managed.m"
                                                }
#line 682 "mlds_to_managed.m"
                                              else
#line 682 "mlds_to_managed.m"
                                                if (((((MR_tag((MR_Word) ml_backend__mlds_to_managed__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_managed__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 722 "mlds_to_managed.m"
                                                  {
#line 723 "mlds_to_managed.m"
                                                    {
#line 723 "mlds_to_managed.m"
                                                      mercury__io__write_string_3_p_0((MR_String) "null");
#line 723 "mlds_to_managed.m"
                                                      return;
                                                    }
#line 722 "mlds_to_managed.m"
                                                  }
#line 682 "mlds_to_managed.m"
                                                else
#line 720 "mlds_to_managed.m"
                                                  {
#line 721 "mlds_to_managed.m"
                                                    {
#line 721 "mlds_to_managed.m"
                                                      mercury__io__write_string_3_p_0((MR_String) "null");
#line 721 "mlds_to_managed.m"
                                                      return;
                                                    }
#line 720 "mlds_to_managed.m"
                                                  }
#line 682 "mlds_to_managed.m"
  }
#line 680 "mlds_to_managed.m"
}

#line 618 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__write_il_simple_type_as_foreign_type_3_p_0(
#line 618 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__HeadVar__1_1)
#line 618 "mlds_to_managed.m"
{
#line 621 "mlds_to_managed.m"
  {
#line 621 "mlds_to_managed.m"
    MR_bool ml_backend__mlds_to_managed__succeeded;

#line 621 "mlds_to_managed.m"
    if ((ml_backend__mlds_to_managed__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13)))))
#line 647 "mlds_to_managed.m"
      {
#line 648 "mlds_to_managed.m"
        {
#line 648 "mlds_to_managed.m"
          mercury__io__write_string_3_p_0((MR_String) "bool");
#line 648 "mlds_to_managed.m"
          return;
        }
#line 647 "mlds_to_managed.m"
      }
#line 621 "mlds_to_managed.m"
    else
#line 621 "mlds_to_managed.m"
      if ((ml_backend__mlds_to_managed__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 14)))))
#line 649 "mlds_to_managed.m"
        {
#line 650 "mlds_to_managed.m"
          {
#line 650 "mlds_to_managed.m"
            mercury__io__write_string_3_p_0((MR_String) "char");
#line 650 "mlds_to_managed.m"
            return;
          }
#line 649 "mlds_to_managed.m"
        }
#line 621 "mlds_to_managed.m"
      else
#line 621 "mlds_to_managed.m"
        if ((ml_backend__mlds_to_managed__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10)))))
#line 641 "mlds_to_managed.m"
          {
#line 642 "mlds_to_managed.m"
            {
#line 642 "mlds_to_managed.m"
              mercury__io__write_string_3_p_0((MR_String) "float");
#line 642 "mlds_to_managed.m"
              return;
            }
#line 641 "mlds_to_managed.m"
          }
#line 621 "mlds_to_managed.m"
        else
#line 621 "mlds_to_managed.m"
          if ((ml_backend__mlds_to_managed__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11)))))
#line 643 "mlds_to_managed.m"
            {
#line 644 "mlds_to_managed.m"
              {
#line 644 "mlds_to_managed.m"
                mercury__io__write_string_3_p_0((MR_String) "double");
#line 644 "mlds_to_managed.m"
                return;
              }
#line 643 "mlds_to_managed.m"
            }
#line 621 "mlds_to_managed.m"
          else
#line 621 "mlds_to_managed.m"
            if ((ml_backend__mlds_to_managed__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 623 "mlds_to_managed.m"
              {
#line 624 "mlds_to_managed.m"
                {
#line 624 "mlds_to_managed.m"
                  mercury__io__write_string_3_p_0((MR_String) "short");
#line 624 "mlds_to_managed.m"
                  return;
                }
#line 623 "mlds_to_managed.m"
              }
#line 621 "mlds_to_managed.m"
            else
#line 621 "mlds_to_managed.m"
              if ((ml_backend__mlds_to_managed__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 625 "mlds_to_managed.m"
                {
#line 626 "mlds_to_managed.m"
                  {
#line 626 "mlds_to_managed.m"
                    mercury__io__write_string_3_p_0((MR_String) "int");
#line 626 "mlds_to_managed.m"
                    return;
                  }
#line 625 "mlds_to_managed.m"
                }
#line 621 "mlds_to_managed.m"
              else
#line 621 "mlds_to_managed.m"
                if ((ml_backend__mlds_to_managed__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 627 "mlds_to_managed.m"
                  {
#line 628 "mlds_to_managed.m"
                    {
#line 628 "mlds_to_managed.m"
                      mercury__io__write_string_3_p_0((MR_String) "long");
#line 628 "mlds_to_managed.m"
                      return;
                    }
#line 627 "mlds_to_managed.m"
                  }
#line 621 "mlds_to_managed.m"
                else
#line 621 "mlds_to_managed.m"
                  if ((ml_backend__mlds_to_managed__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 621 "mlds_to_managed.m"
                    {
#line 622 "mlds_to_managed.m"
                      {
#line 622 "mlds_to_managed.m"
                        mercury__io__write_string_3_p_0((MR_String) "sbyte");
#line 622 "mlds_to_managed.m"
                        return;
                      }
#line 621 "mlds_to_managed.m"
                    }
#line 621 "mlds_to_managed.m"
                  else
#line 621 "mlds_to_managed.m"
                    if ((ml_backend__mlds_to_managed__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12)))))
#line 645 "mlds_to_managed.m"
                      {
#line 646 "mlds_to_managed.m"
                        {
#line 646 "mlds_to_managed.m"
                          mercury__io__write_string_3_p_0((MR_String) "float");
#line 646 "mlds_to_managed.m"
                          return;
                        }
#line 645 "mlds_to_managed.m"
                      }
#line 621 "mlds_to_managed.m"
                    else
#line 621 "mlds_to_managed.m"
                      if ((ml_backend__mlds_to_managed__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 637 "mlds_to_managed.m"
                        {
#line 638 "mlds_to_managed.m"
                          {
#line 638 "mlds_to_managed.m"
                            mercury__io__write_string_3_p_0((MR_String) "int");
#line 638 "mlds_to_managed.m"
                            return;
                          }
#line 637 "mlds_to_managed.m"
                        }
#line 621 "mlds_to_managed.m"
                      else
#line 621 "mlds_to_managed.m"
                        if ((ml_backend__mlds_to_managed__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)))))
#line 639 "mlds_to_managed.m"
                          {
#line 640 "mlds_to_managed.m"
                            {
#line 640 "mlds_to_managed.m"
                              mercury__io__write_string_3_p_0((MR_String) "uint");
#line 640 "mlds_to_managed.m"
                              return;
                            }
#line 639 "mlds_to_managed.m"
                          }
#line 621 "mlds_to_managed.m"
                        else
#line 621 "mlds_to_managed.m"
                          if ((ml_backend__mlds_to_managed__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 15)))))
#line 653 "mlds_to_managed.m"
                            {
#line 654 "mlds_to_managed.m"
                              {
#line 654 "mlds_to_managed.m"
                                mercury__io__write_string_3_p_0((MR_String) "object");
#line 654 "mlds_to_managed.m"
                                return;
                              }
#line 653 "mlds_to_managed.m"
                            }
#line 621 "mlds_to_managed.m"
                          else
#line 621 "mlds_to_managed.m"
                            if ((ml_backend__mlds_to_managed__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 17)))))
#line 655 "mlds_to_managed.m"
                              {
#line 656 "mlds_to_managed.m"
                                {
#line 656 "mlds_to_managed.m"
                                  mercury__io__write_string_3_p_0((MR_String) "mercury.MR_RefAny");
#line 656 "mlds_to_managed.m"
                                  return;
                                }
#line 655 "mlds_to_managed.m"
                              }
#line 621 "mlds_to_managed.m"
                            else
#line 621 "mlds_to_managed.m"
                              if ((ml_backend__mlds_to_managed__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16)))))
#line 651 "mlds_to_managed.m"
                                {
#line 652 "mlds_to_managed.m"
                                  {
#line 652 "mlds_to_managed.m"
                                    mercury__io__write_string_3_p_0((MR_String) "string");
#line 652 "mlds_to_managed.m"
                                    return;
                                  }
#line 651 "mlds_to_managed.m"
                                }
#line 621 "mlds_to_managed.m"
                              else
#line 621 "mlds_to_managed.m"
                                if ((ml_backend__mlds_to_managed__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 631 "mlds_to_managed.m"
                                  {
#line 632 "mlds_to_managed.m"
                                    {
#line 632 "mlds_to_managed.m"
                                      mercury__io__write_string_3_p_0((MR_String) "ushort");
#line 632 "mlds_to_managed.m"
                                      return;
                                    }
#line 631 "mlds_to_managed.m"
                                  }
#line 621 "mlds_to_managed.m"
                                else
#line 621 "mlds_to_managed.m"
                                  if ((ml_backend__mlds_to_managed__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 633 "mlds_to_managed.m"
                                    {
#line 634 "mlds_to_managed.m"
                                      {
#line 634 "mlds_to_managed.m"
                                        mercury__io__write_string_3_p_0((MR_String) "uint");
#line 634 "mlds_to_managed.m"
                                        return;
                                      }
#line 633 "mlds_to_managed.m"
                                    }
#line 621 "mlds_to_managed.m"
                                  else
#line 621 "mlds_to_managed.m"
                                    if ((ml_backend__mlds_to_managed__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
#line 635 "mlds_to_managed.m"
                                      {
#line 636 "mlds_to_managed.m"
                                        {
#line 636 "mlds_to_managed.m"
                                          mercury__io__write_string_3_p_0((MR_String) "ulong");
#line 636 "mlds_to_managed.m"
                                          return;
                                        }
#line 635 "mlds_to_managed.m"
                                      }
#line 621 "mlds_to_managed.m"
                                    else
#line 621 "mlds_to_managed.m"
                                      if ((ml_backend__mlds_to_managed__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 629 "mlds_to_managed.m"
                                        {
#line 630 "mlds_to_managed.m"
                                          {
#line 630 "mlds_to_managed.m"
                                            mercury__io__write_string_3_p_0((MR_String) "byte");
#line 630 "mlds_to_managed.m"
                                            return;
                                          }
#line 629 "mlds_to_managed.m"
                                        }
#line 621 "mlds_to_managed.m"
                                      else
#line 621 "mlds_to_managed.m"
                                        if (((MR_tag((MR_Word) ml_backend__mlds_to_managed__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 657 "mlds_to_managed.m"
                                          {
#line 657 "mlds_to_managed.m"
                                            MR_Word ml_backend__mlds_to_managed__ClassName_94 = (MR_Word) MR_body(((MR_Word) ml_backend__mlds_to_managed__HeadVar__1_1), (MR_Integer) 1);

#line 658 "mlds_to_managed.m"
                                            {
#line 658 "mlds_to_managed.m"
                                              ml_backend__mlds_to_managed__write_class_name_3_p_0(ml_backend__mlds_to_managed__ClassName_94);
#line 658 "mlds_to_managed.m"
                                              return;
                                            }
#line 657 "mlds_to_managed.m"
                                          }
#line 621 "mlds_to_managed.m"
                                        else
#line 621 "mlds_to_managed.m"
                                          if (((MR_tag((MR_Word) ml_backend__mlds_to_managed__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 659 "mlds_to_managed.m"
                                            {
#line 659 "mlds_to_managed.m"
                                              MR_Word ml_backend__mlds_to_managed__ClassName_99 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_managed__HeadVar__1_1, (MR_Integer) 0)));

#line 660 "mlds_to_managed.m"
                                              {
#line 660 "mlds_to_managed.m"
                                                ml_backend__mlds_to_managed__write_class_name_3_p_0(ml_backend__mlds_to_managed__ClassName_99);
#line 660 "mlds_to_managed.m"
                                                return;
                                              }
#line 659 "mlds_to_managed.m"
                                            }
#line 621 "mlds_to_managed.m"
                                          else
#line 621 "mlds_to_managed.m"
                                            if (((((MR_tag((MR_Word) ml_backend__mlds_to_managed__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_managed__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 672 "mlds_to_managed.m"
                                              {
#line 672 "mlds_to_managed.m"
                                                MR_Word ml_backend__mlds_to_managed__Type_124 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_managed__HeadVar__1_1, (MR_Integer) 1)));

#line 674 "mlds_to_managed.m"
                                                {
#line 674 "mlds_to_managed.m"
                                                  mercury__io__write_string_3_p_0((MR_String) "ref ");
                                                }
#line 675 "mlds_to_managed.m"
                                                {
#line 675 "mlds_to_managed.m"
                                                  ml_backend__mlds_to_managed__write_il_type_as_foreign_type_3_p_0(ml_backend__mlds_to_managed__Type_124);
#line 675 "mlds_to_managed.m"
                                                  return;
                                                }
#line 672 "mlds_to_managed.m"
                                              }
#line 621 "mlds_to_managed.m"
                                            else
#line 621 "mlds_to_managed.m"
                                              if (((((MR_tag((MR_Word) ml_backend__mlds_to_managed__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_managed__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 676 "mlds_to_managed.m"
                                                {
#line 676 "mlds_to_managed.m"
                                                  MR_Word ml_backend__mlds_to_managed__Type_131 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_managed__HeadVar__1_1, (MR_Integer) 1)));

#line 677 "mlds_to_managed.m"
                                                  {
#line 677 "mlds_to_managed.m"
                                                    ml_backend__mlds_to_managed__write_il_type_as_foreign_type_3_p_0(ml_backend__mlds_to_managed__Type_131);
                                                  }
#line 678 "mlds_to_managed.m"
                                                  {
#line 678 "mlds_to_managed.m"
                                                    mercury__io__write_string_3_p_0((MR_String) " *");
#line 678 "mlds_to_managed.m"
                                                    return;
                                                  }
#line 676 "mlds_to_managed.m"
                                                }
#line 621 "mlds_to_managed.m"
                                              else
#line 621 "mlds_to_managed.m"
                                                if (((((MR_tag((MR_Word) ml_backend__mlds_to_managed__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_managed__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 663 "mlds_to_managed.m"
                                                  {
#line 663 "mlds_to_managed.m"
                                                    MR_Word ml_backend__mlds_to_managed__Type_111 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_managed__HeadVar__1_1, (MR_Integer) 1)));
#line 663 "mlds_to_managed.m"
                                                    MR_Word ml_backend__mlds_to_managed__Bounds_112 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_managed__HeadVar__1_1, (MR_Integer) 2)));

#line 664 "mlds_to_managed.m"
                                                    {
#line 664 "mlds_to_managed.m"
                                                      ml_backend__mlds_to_managed__write_il_type_as_foreign_type_3_p_0(ml_backend__mlds_to_managed__Type_111);
                                                    }
#line 665 "mlds_to_managed.m"
                                                    {
#line 665 "mlds_to_managed.m"
                                                      mercury__io__write_string_3_p_0((MR_String) "[]");
                                                    }
#line 668 "mlds_to_managed.m"
                                                    if ((ml_backend__mlds_to_managed__Bounds_112 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 667 "mlds_to_managed.m"
                                                      {
#line 667 "mlds_to_managed.m"
                                                      }
#line 668 "mlds_to_managed.m"
                                                    else
#line 669 "mlds_to_managed.m"
                                                      {
#line 670 "mlds_to_managed.m"
                                                        {
#line 670 "mlds_to_managed.m"
                                                          mercury__require__sorry_3_p_0((MR_String) "ml_backend.mlds_to_managed", (MR_String) "predicate \140ml_backend.mlds_to_managed.write_il_simple_type_as_foreign_type\'/3", (MR_String) "arrays with bounds");
#line 670 "mlds_to_managed.m"
                                                          return;
                                                        }
#line 669 "mlds_to_managed.m"
                                                      }
#line 663 "mlds_to_managed.m"
                                                  }
#line 621 "mlds_to_managed.m"
                                                else
#line 661 "mlds_to_managed.m"
                                                  {
#line 662 "mlds_to_managed.m"
                                                    {
#line 662 "mlds_to_managed.m"
                                                      mercury__require__sorry_3_p_0((MR_String) "ml_backend.mlds_to_managed", (MR_String) "predicate \140ml_backend.mlds_to_managed.write_il_simple_type_as_foreign_type\'/3", (MR_String) "interfaces");
#line 662 "mlds_to_managed.m"
                                                      return;
                                                    }
#line 661 "mlds_to_managed.m"
                                                  }
#line 621 "mlds_to_managed.m"
  }
#line 618 "mlds_to_managed.m"
}

#line 606 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__write_il_type_modifier_as_foreign_type_3_p_0(
#line 606 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__HeadVar__1_1)
#line 606 "mlds_to_managed.m"
{
#line 609 "mlds_to_managed.m"
  {
#line 609 "mlds_to_managed.m"
    MR_bool ml_backend__mlds_to_managed__succeeded;

#line 609 "mlds_to_managed.m"
    if ((ml_backend__mlds_to_managed__HeadVar__1_1 == (MR_Integer) 0))
#line 609 "mlds_to_managed.m"
      {
#line 610 "mlds_to_managed.m"
        {
#line 610 "mlds_to_managed.m"
          mercury__io__write_string_3_p_0((MR_String) "const");
#line 610 "mlds_to_managed.m"
          return;
        }
#line 609 "mlds_to_managed.m"
      }
#line 609 "mlds_to_managed.m"
    else
#line 609 "mlds_to_managed.m"
      if ((ml_backend__mlds_to_managed__HeadVar__1_1 == (MR_Integer) 1))
#line 611 "mlds_to_managed.m"
        {
#line 612 "mlds_to_managed.m"
          {
#line 612 "mlds_to_managed.m"
            mercury__io__write_string_3_p_0((MR_String) "readonly");
#line 612 "mlds_to_managed.m"
            return;
          }
#line 611 "mlds_to_managed.m"
        }
#line 609 "mlds_to_managed.m"
      else
#line 613 "mlds_to_managed.m"
        {
#line 614 "mlds_to_managed.m"
          {
#line 614 "mlds_to_managed.m"
            mercury__io__write_string_3_p_0((MR_String) "volatile");
#line 614 "mlds_to_managed.m"
            return;
          }
#line 613 "mlds_to_managed.m"
        }
#line 609 "mlds_to_managed.m"
  }
#line 606 "mlds_to_managed.m"
}

#line 602 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__write_il_type_as_foreign_type_3_p_0_1(
#line 602 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__closure_arg,
#line 602 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_1,
#line 602 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_2,
#line 602 "mlds_to_managed.m"
  MR_Box * ml_backend__mlds_to_managed__wrapper_arg_3)
#line 602 "mlds_to_managed.m"
{
#line 602 "mlds_to_managed.m"
  {
#line 602 "mlds_to_managed.m"
    MR_Box ml_backend__mlds_to_managed__closure = ml_backend__mlds_to_managed__closure_arg;

#line 602 "mlds_to_managed.m"
    {
#line 602 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__write_il_type_modifier_as_foreign_type_3_p_0(((MR_Word) ml_backend__mlds_to_managed__wrapper_arg_1));
#line 602 "mlds_to_managed.m"
      return;
    }
#line 602 "mlds_to_managed.m"
  }
#line 602 "mlds_to_managed.m"
}

#line 599 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__write_il_type_as_foreign_type_3_p_0(
#line 599 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__HeadVar__1_1)
#line 599 "mlds_to_managed.m"
{
#line 601 "mlds_to_managed.m"
  {
#line 601 "mlds_to_managed.m"
    MR_bool ml_backend__mlds_to_managed__succeeded;
#line 601 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__Modifiers_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__HeadVar__1_1, (MR_Integer) 0)));
#line 601 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__SimpleType_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__HeadVar__1_1, (MR_Integer) 1)));

#line 602 "mlds_to_managed.m"
    {
#line 602 "mlds_to_managed.m"
      mercury__io__write_list_5_p_0((MR_Word) &ml_backend__ilds__ml_backend__ilds__type_ctor_info_type_modifier_0, ml_backend__mlds_to_managed__Modifiers_4, (MR_String) " ", (MR_Word) &ml_backend__mlds_to_managed_scalar_common_6[6]);
    }
#line 604 "mlds_to_managed.m"
    {
#line 604 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__write_il_simple_type_as_foreign_type_3_p_0(ml_backend__mlds_to_managed__SimpleType_5);
#line 604 "mlds_to_managed.m"
      return;
    }
#line 601 "mlds_to_managed.m"
  }
#line 599 "mlds_to_managed.m"
}

#line 602 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__write_input_arg_as_foreign_type_4_p_0_1(
#line 602 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__closure_arg,
#line 602 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_1,
#line 602 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_2,
#line 602 "mlds_to_managed.m"
  MR_Box * ml_backend__mlds_to_managed__wrapper_arg_3)
#line 602 "mlds_to_managed.m"
{
#line 602 "mlds_to_managed.m"
  {
#line 602 "mlds_to_managed.m"
    MR_Box ml_backend__mlds_to_managed__closure = ml_backend__mlds_to_managed__closure_arg;

#line 602 "mlds_to_managed.m"
    {
#line 602 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__write_il_type_modifier_as_foreign_type_3_p_0(((MR_Word) ml_backend__mlds_to_managed__wrapper_arg_1));
#line 602 "mlds_to_managed.m"
      return;
    }
#line 602 "mlds_to_managed.m"
  }
#line 602 "mlds_to_managed.m"
}

#line 571 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__write_input_arg_as_foreign_type_4_p_0(
#line 571 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__DataRep_5,
#line 571 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__Arg_6)
#line 571 "mlds_to_managed.m"
{
#line 574 "mlds_to_managed.m"
  {
#line 574 "mlds_to_managed.m"
    MR_bool ml_backend__mlds_to_managed__succeeded;
#line 574 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__EntityName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__Arg_6, (MR_Integer) 0)));
#line 574 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__Type_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__Arg_6, (MR_Integer) 1)));
#line 574 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__V_14_14;
#line 574 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__Modifiers_25;
#line 574 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__SimpleType_26;
#line 575 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed___GCStatement_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__Arg_6, (MR_Integer) 2)));
#line 580 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__VarName_11;
#line 578 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__V_18_18;

#line 576 "mlds_to_managed.m"
    {
#line 576 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__V_14_14 = ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_f_0(ml_backend__mlds_to_managed__DataRep_5, ml_backend__mlds_to_managed__Type_9);
    }
#line 601 "mlds_to_managed.m"
    ml_backend__mlds_to_managed__Modifiers_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_14_14, (MR_Integer) 0)));
#line 601 "mlds_to_managed.m"
    ml_backend__mlds_to_managed__SimpleType_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_14_14, (MR_Integer) 1)));
#line 602 "mlds_to_managed.m"
    {
#line 602 "mlds_to_managed.m"
      mercury__io__write_list_5_p_0((MR_Word) &ml_backend__ilds__ml_backend__ilds__type_ctor_info_type_modifier_0, ml_backend__mlds_to_managed__Modifiers_25, (MR_String) " ", (MR_Word) &ml_backend__mlds_to_managed_scalar_common_6[5]);
    }
#line 604 "mlds_to_managed.m"
    {
#line 604 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__write_il_simple_type_as_foreign_type_3_p_0(ml_backend__mlds_to_managed__SimpleType_26);
    }
#line 577 "mlds_to_managed.m"
    {
#line 577 "mlds_to_managed.m"
      mercury__io__write_string_3_p_0((MR_String) " ");
    }
#line 578 "mlds_to_managed.m"
    ml_backend__mlds_to_managed__succeeded = ((MR_tag((MR_Word) ml_backend__mlds_to_managed__EntityName_8)) == (MR_mktag((MR_Integer) 1)));
#line 578 "mlds_to_managed.m"
    if (ml_backend__mlds_to_managed__succeeded)
#line 578 "mlds_to_managed.m"
      {
#line 578 "mlds_to_managed.m"
        ml_backend__mlds_to_managed__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_managed__EntityName_8, (MR_Integer) 0)));
#line 578 "mlds_to_managed.m"
        ml_backend__mlds_to_managed__succeeded = ((MR_tag((MR_Word) ml_backend__mlds_to_managed__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 578 "mlds_to_managed.m"
        if (ml_backend__mlds_to_managed__succeeded)
#line 578 "mlds_to_managed.m"
          ml_backend__mlds_to_managed__VarName_11 = (MR_Word) MR_body(((MR_Word) ml_backend__mlds_to_managed__V_18_18), (MR_Integer) 1);
#line 578 "mlds_to_managed.m"
      }
#line 580 "mlds_to_managed.m"
    if (ml_backend__mlds_to_managed__succeeded)
#line 747 "mlds_to_managed.m"
      {
#line 747 "mlds_to_managed.m"
        MR_String ml_backend__mlds_to_managed__Name_38 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__VarName_11, (MR_Integer) 0)));
#line 747 "mlds_to_managed.m"
        MR_Word ml_backend__mlds_to_managed__MaybeNum_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__VarName_11, (MR_Integer) 1)));

#line 748 "mlds_to_managed.m"
        {
#line 748 "mlds_to_managed.m"
          mercury__io__write_string_3_p_0(ml_backend__mlds_to_managed__Name_38);
        }
#line 753 "mlds_to_managed.m"
        if ((ml_backend__mlds_to_managed__MaybeNum_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 754 "mlds_to_managed.m"
          {
#line 754 "mlds_to_managed.m"
          }
#line 753 "mlds_to_managed.m"
        else
#line 750 "mlds_to_managed.m"
          {
#line 750 "mlds_to_managed.m"
            MR_Integer ml_backend__mlds_to_managed__Num_41 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_managed__MaybeNum_39, (MR_Integer) 0)));

#line 751 "mlds_to_managed.m"
            {
#line 751 "mlds_to_managed.m"
              mercury__io__write_string_3_p_0((MR_String) "_");
            }
#line 752 "mlds_to_managed.m"
            {
#line 752 "mlds_to_managed.m"
              mercury__io__write_int_3_p_0(ml_backend__mlds_to_managed__Num_41);
#line 752 "mlds_to_managed.m"
              return;
            }
#line 750 "mlds_to_managed.m"
          }
#line 747 "mlds_to_managed.m"
      }
#line 580 "mlds_to_managed.m"
    else
#line 581 "mlds_to_managed.m"
      {
#line 581 "mlds_to_managed.m"
        {
#line 581 "mlds_to_managed.m"
          mercury__require__unexpected_3_p_0((MR_String) "ml_backend.mlds_to_managed", (MR_String) "predicate \140ml_backend.mlds_to_managed.write_input_arg_as_foreign_type\'/4", (MR_String) "found a variable in a list");
#line 581 "mlds_to_managed.m"
          return;
        }
#line 581 "mlds_to_managed.m"
      }
#line 574 "mlds_to_managed.m"
  }
#line 571 "mlds_to_managed.m"
}

#line 602 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__write_defn_decl_4_p_0_1(
#line 602 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__closure_arg,
#line 602 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_1,
#line 602 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_2,
#line 602 "mlds_to_managed.m"
  MR_Box * ml_backend__mlds_to_managed__wrapper_arg_3)
#line 602 "mlds_to_managed.m"
{
#line 602 "mlds_to_managed.m"
  {
#line 602 "mlds_to_managed.m"
    MR_Box ml_backend__mlds_to_managed__closure = ml_backend__mlds_to_managed__closure_arg;

#line 602 "mlds_to_managed.m"
    {
#line 602 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__write_il_type_modifier_as_foreign_type_3_p_0(((MR_Word) ml_backend__mlds_to_managed__wrapper_arg_1));
#line 602 "mlds_to_managed.m"
      return;
    }
#line 602 "mlds_to_managed.m"
  }
#line 602 "mlds_to_managed.m"
}

#line 547 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__write_defn_decl_4_p_0(
#line 547 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__DataRep_5,
#line 547 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__Defn_6)
#line 547 "mlds_to_managed.m"
{
#line 549 "mlds_to_managed.m"
  {
#line 549 "mlds_to_managed.m"
    MR_bool ml_backend__mlds_to_managed__succeeded;
#line 549 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__Name_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__Defn_6, (MR_Integer) 0)));
#line 549 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__DefnBody_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__Defn_6, (MR_Integer) 3)));
#line 550 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed___Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__Defn_6, (MR_Integer) 1)));
#line 550 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed___Flags_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__Defn_6, (MR_Integer) 2)));
#line 559 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__Type_12;
#line 559 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__VarName_15;
#line 552 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__V_18_18;
#line 552 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed___Initializer_13;
#line 552 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed___GCStatement_14;

#line 552 "mlds_to_managed.m"
    ml_backend__mlds_to_managed__succeeded = ((MR_tag((MR_Word) ml_backend__mlds_to_managed__DefnBody_11)) == (MR_mktag((MR_Integer) 1)));
#line 552 "mlds_to_managed.m"
    if (ml_backend__mlds_to_managed__succeeded)
#line 552 "mlds_to_managed.m"
      {
#line 552 "mlds_to_managed.m"
        ml_backend__mlds_to_managed__Type_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_managed__DefnBody_11, (MR_Integer) 0)));
#line 552 "mlds_to_managed.m"
        ml_backend__mlds_to_managed___Initializer_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_managed__DefnBody_11, (MR_Integer) 1)));
#line 552 "mlds_to_managed.m"
        ml_backend__mlds_to_managed___GCStatement_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_managed__DefnBody_11, (MR_Integer) 2)));
#line 553 "mlds_to_managed.m"
        ml_backend__mlds_to_managed__succeeded = ((MR_tag((MR_Word) ml_backend__mlds_to_managed__Name_8)) == (MR_mktag((MR_Integer) 1)));
#line 553 "mlds_to_managed.m"
        if (ml_backend__mlds_to_managed__succeeded)
#line 553 "mlds_to_managed.m"
          {
#line 553 "mlds_to_managed.m"
            ml_backend__mlds_to_managed__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_managed__Name_8, (MR_Integer) 0)));
#line 553 "mlds_to_managed.m"
            ml_backend__mlds_to_managed__succeeded = ((MR_tag((MR_Word) ml_backend__mlds_to_managed__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 553 "mlds_to_managed.m"
            if (ml_backend__mlds_to_managed__succeeded)
#line 553 "mlds_to_managed.m"
              ml_backend__mlds_to_managed__VarName_15 = (MR_Word) MR_body(((MR_Word) ml_backend__mlds_to_managed__V_18_18), (MR_Integer) 1);
#line 553 "mlds_to_managed.m"
          }
#line 552 "mlds_to_managed.m"
      }
#line 559 "mlds_to_managed.m"
    if (ml_backend__mlds_to_managed__succeeded)
#line 555 "mlds_to_managed.m"
      {
#line 555 "mlds_to_managed.m"
        MR_Word ml_backend__mlds_to_managed__ILType_33;
#line 555 "mlds_to_managed.m"
        MR_Word ml_backend__mlds_to_managed__Modifiers_37;
#line 555 "mlds_to_managed.m"
        MR_Word ml_backend__mlds_to_managed__SimpleType_38;
#line 555 "mlds_to_managed.m"
        MR_String ml_backend__mlds_to_managed__Name_50;
#line 555 "mlds_to_managed.m"
        MR_Word ml_backend__mlds_to_managed__MaybeNum_51;

#line 568 "mlds_to_managed.m"
        {
#line 568 "mlds_to_managed.m"
          ml_backend__mlds_to_managed__ILType_33 = ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_f_0(ml_backend__mlds_to_managed__DataRep_5, ml_backend__mlds_to_managed__Type_12);
        }
#line 601 "mlds_to_managed.m"
        ml_backend__mlds_to_managed__Modifiers_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__ILType_33, (MR_Integer) 0)));
#line 601 "mlds_to_managed.m"
        ml_backend__mlds_to_managed__SimpleType_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__ILType_33, (MR_Integer) 1)));
#line 602 "mlds_to_managed.m"
        {
#line 602 "mlds_to_managed.m"
          mercury__io__write_list_5_p_0((MR_Word) &ml_backend__ilds__ml_backend__ilds__type_ctor_info_type_modifier_0, ml_backend__mlds_to_managed__Modifiers_37, (MR_String) " ", (MR_Word) &ml_backend__mlds_to_managed_scalar_common_6[4]);
        }
#line 604 "mlds_to_managed.m"
        {
#line 604 "mlds_to_managed.m"
          ml_backend__mlds_to_managed__write_il_simple_type_as_foreign_type_3_p_0(ml_backend__mlds_to_managed__SimpleType_38);
        }
#line 556 "mlds_to_managed.m"
        {
#line 556 "mlds_to_managed.m"
          mercury__io__write_string_3_p_0((MR_String) " ");
        }
#line 747 "mlds_to_managed.m"
        ml_backend__mlds_to_managed__Name_50 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__VarName_15, (MR_Integer) 0)));
#line 747 "mlds_to_managed.m"
        ml_backend__mlds_to_managed__MaybeNum_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__VarName_15, (MR_Integer) 1)));
#line 748 "mlds_to_managed.m"
        {
#line 748 "mlds_to_managed.m"
          mercury__io__write_string_3_p_0(ml_backend__mlds_to_managed__Name_50);
        }
#line 753 "mlds_to_managed.m"
        if ((ml_backend__mlds_to_managed__MaybeNum_51 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 754 "mlds_to_managed.m"
          {
#line 754 "mlds_to_managed.m"
          }
#line 753 "mlds_to_managed.m"
        else
#line 750 "mlds_to_managed.m"
          {
#line 750 "mlds_to_managed.m"
            MR_Integer ml_backend__mlds_to_managed__Num_53 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_managed__MaybeNum_51, (MR_Integer) 0)));

#line 751 "mlds_to_managed.m"
            {
#line 751 "mlds_to_managed.m"
              mercury__io__write_string_3_p_0((MR_String) "_");
            }
#line 752 "mlds_to_managed.m"
            {
#line 752 "mlds_to_managed.m"
              mercury__io__write_int_3_p_0(ml_backend__mlds_to_managed__Num_53);
            }
#line 750 "mlds_to_managed.m"
          }
#line 558 "mlds_to_managed.m"
        {
#line 558 "mlds_to_managed.m"
          mercury__io__write_string_3_p_0((MR_String) ";\n");
#line 558 "mlds_to_managed.m"
          return;
        }
#line 555 "mlds_to_managed.m"
      }
#line 559 "mlds_to_managed.m"
    else
#line 561 "mlds_to_managed.m"
      {
#line 561 "mlds_to_managed.m"
        {
#line 561 "mlds_to_managed.m"
          mercury__require__sorry_3_p_0((MR_String) "ml_backend.mlds_to_managed", (MR_String) "predicate \140ml_backend.mlds_to_managed.write_defn_decl\'/4", (MR_String) "data_addr_const rval");
#line 561 "mlds_to_managed.m"
          return;
        }
#line 561 "mlds_to_managed.m"
      }
#line 549 "mlds_to_managed.m"
  }
#line 547 "mlds_to_managed.m"
}

#line 513 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__write_lval_4_p_0(
#line 513 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__DataRep_5,
#line 513 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__Lval_6)
#line 513 "mlds_to_managed.m"
{
#line 517 "mlds_to_managed.m"
  {
#line 517 "mlds_to_managed.m"
    MR_bool ml_backend__mlds_to_managed__succeeded;

#line 517 "mlds_to_managed.m"
    if (((MR_tag((MR_Word) ml_backend__mlds_to_managed__Lval_6)) == (MR_mktag((MR_Integer) 0))))
#line 517 "mlds_to_managed.m"
      {
#line 517 "mlds_to_managed.m"
        MR_Word ml_backend__mlds_to_managed__Rval_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__Lval_6, (MR_Integer) 1)));
#line 517 "mlds_to_managed.m"
        MR_Word ml_backend__mlds_to_managed__FieldId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__Lval_6, (MR_Integer) 2)));
#line 517 "mlds_to_managed.m"
        MR_Word ml_backend__mlds_to_managed__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__Lval_6, (MR_Integer) 0)));
#line 517 "mlds_to_managed.m"
        MR_Word ml_backend__mlds_to_managed__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__Lval_6, (MR_Integer) 3)));
#line 517 "mlds_to_managed.m"
        MR_Word ml_backend__mlds_to_managed__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__Lval_6, (MR_Integer) 4)));

#line 526 "mlds_to_managed.m"
        if (((MR_tag((MR_Word) ml_backend__mlds_to_managed__FieldId_10)) == (MR_mktag((MR_Integer) 1))))
#line 527 "mlds_to_managed.m"
          {
#line 527 "mlds_to_managed.m"
            MR_Word ml_backend__mlds_to_managed__FQFieldName_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_managed__FieldId_10, (MR_Integer) 0)));
#line 527 "mlds_to_managed.m"
            MR_String ml_backend__mlds_to_managed__FieldName_18;
#line 527 "mlds_to_managed.m"
            MR_Word ml_backend__mlds_to_managed___Type_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_managed__FieldId_10, (MR_Integer) 1)));
#line 532 "mlds_to_managed.m"
            MR_Word ml_backend__mlds_to_managed__V_16_16;
#line 532 "mlds_to_managed.m"
            MR_Word ml_backend__mlds_to_managed__V_17_17;

#line 528 "mlds_to_managed.m"
            {
#line 528 "mlds_to_managed.m"
              mercury__io__write_string_3_p_0((MR_String) "(");
            }
#line 529 "mlds_to_managed.m"
            {
#line 529 "mlds_to_managed.m"
              ml_backend__mlds_to_managed__write_rval_4_p_0(ml_backend__mlds_to_managed__DataRep_5, ml_backend__mlds_to_managed__Rval_9);
            }
#line 530 "mlds_to_managed.m"
            {
#line 530 "mlds_to_managed.m"
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
#line 531 "mlds_to_managed.m"
            {
#line 531 "mlds_to_managed.m"
              mercury__io__write_string_3_p_0((MR_String) ".");
            }
#line 532 "mlds_to_managed.m"
            ml_backend__mlds_to_managed__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__FQFieldName_14, (MR_Integer) 0)));
#line 532 "mlds_to_managed.m"
            ml_backend__mlds_to_managed__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__FQFieldName_14, (MR_Integer) 1)));
#line 532 "mlds_to_managed.m"
            ml_backend__mlds_to_managed__FieldName_18 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__FQFieldName_14, (MR_Integer) 2)));
#line 533 "mlds_to_managed.m"
            {
#line 533 "mlds_to_managed.m"
              mercury__io__write_string_3_p_0(ml_backend__mlds_to_managed__FieldName_18);
#line 533 "mlds_to_managed.m"
              return;
            }
#line 527 "mlds_to_managed.m"
          }
#line 526 "mlds_to_managed.m"
        else
#line 519 "mlds_to_managed.m"
          {
#line 519 "mlds_to_managed.m"
            MR_Word ml_backend__mlds_to_managed__OffSet_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__FieldId_10, (MR_Integer) 0)));

#line 520 "mlds_to_managed.m"
            {
#line 520 "mlds_to_managed.m"
              mercury__io__write_string_3_p_0((MR_String) "(");
            }
#line 521 "mlds_to_managed.m"
            {
#line 521 "mlds_to_managed.m"
              ml_backend__mlds_to_managed__write_rval_4_p_0(ml_backend__mlds_to_managed__DataRep_5, ml_backend__mlds_to_managed__Rval_9);
            }
#line 522 "mlds_to_managed.m"
            {
#line 522 "mlds_to_managed.m"
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
#line 523 "mlds_to_managed.m"
            {
#line 523 "mlds_to_managed.m"
              mercury__io__write_string_3_p_0((MR_String) "[");
            }
#line 524 "mlds_to_managed.m"
            {
#line 524 "mlds_to_managed.m"
              ml_backend__mlds_to_managed__write_rval_4_p_0(ml_backend__mlds_to_managed__DataRep_5, ml_backend__mlds_to_managed__OffSet_13);
            }
#line 525 "mlds_to_managed.m"
            {
#line 525 "mlds_to_managed.m"
              mercury__io__write_string_3_p_0((MR_String) "]");
#line 525 "mlds_to_managed.m"
              return;
            }
#line 519 "mlds_to_managed.m"
          }
#line 517 "mlds_to_managed.m"
      }
#line 517 "mlds_to_managed.m"
    else
#line 517 "mlds_to_managed.m"
      if (((MR_tag((MR_Word) ml_backend__mlds_to_managed__Lval_6)) == (MR_mktag((MR_Integer) 2))))
#line 539 "mlds_to_managed.m"
        {
#line 540 "mlds_to_managed.m"
          {
#line 540 "mlds_to_managed.m"
            mercury__require__sorry_3_p_0((MR_String) "ml_backend.mlds_to_managed", (MR_String) "predicate \140ml_backend.mlds_to_managed.write_lval\'/4", (MR_String) "global_var_ref NYI");
#line 540 "mlds_to_managed.m"
            return;
          }
#line 539 "mlds_to_managed.m"
        }
#line 517 "mlds_to_managed.m"
      else
#line 517 "mlds_to_managed.m"
        if (((MR_tag((MR_Word) ml_backend__mlds_to_managed__Lval_6)) == (MR_mktag((MR_Integer) 1))))
#line 536 "mlds_to_managed.m"
          {
#line 536 "mlds_to_managed.m"
            MR_Word ml_backend__mlds_to_managed__Rval_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_managed__Lval_6, (MR_Integer) 0)));
#line 536 "mlds_to_managed.m"
            MR_Word ml_backend__mlds_to_managed__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_managed__Lval_6, (MR_Integer) 1)));

#line 537 "mlds_to_managed.m"
            {
#line 537 "mlds_to_managed.m"
              ml_backend__mlds_to_managed__write_rval_4_p_0(ml_backend__mlds_to_managed__DataRep_5, ml_backend__mlds_to_managed__Rval_51);
#line 537 "mlds_to_managed.m"
              return;
            }
#line 536 "mlds_to_managed.m"
          }
#line 517 "mlds_to_managed.m"
        else
#line 542 "mlds_to_managed.m"
          {
#line 542 "mlds_to_managed.m"
            MR_Word ml_backend__mlds_to_managed__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_managed__Lval_6, (MR_Integer) 0)));
#line 542 "mlds_to_managed.m"
            MR_Word ml_backend__mlds_to_managed__VarName_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__Var_21, (MR_Integer) 2)));
#line 542 "mlds_to_managed.m"
            MR_String ml_backend__mlds_to_managed__Name_54 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__VarName_25, (MR_Integer) 0)));
#line 542 "mlds_to_managed.m"
            MR_Word ml_backend__mlds_to_managed__MaybeNum_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__VarName_25, (MR_Integer) 1)));
#line 542 "mlds_to_managed.m"
            MR_Word ml_backend__mlds_to_managed___VarType_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_managed__Lval_6, (MR_Integer) 1)));
#line 543 "mlds_to_managed.m"
            MR_Word ml_backend__mlds_to_managed__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__Var_21, (MR_Integer) 0)));
#line 543 "mlds_to_managed.m"
            MR_Word ml_backend__mlds_to_managed__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__Var_21, (MR_Integer) 1)));

#line 748 "mlds_to_managed.m"
            {
#line 748 "mlds_to_managed.m"
              mercury__io__write_string_3_p_0(ml_backend__mlds_to_managed__Name_54);
            }
#line 753 "mlds_to_managed.m"
            if ((ml_backend__mlds_to_managed__MaybeNum_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 754 "mlds_to_managed.m"
              {
#line 754 "mlds_to_managed.m"
              }
#line 753 "mlds_to_managed.m"
            else
#line 750 "mlds_to_managed.m"
              {
#line 750 "mlds_to_managed.m"
                MR_Integer ml_backend__mlds_to_managed__Num_57 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_managed__MaybeNum_55, (MR_Integer) 0)));

#line 751 "mlds_to_managed.m"
                {
#line 751 "mlds_to_managed.m"
                  mercury__io__write_string_3_p_0((MR_String) "_");
                }
#line 752 "mlds_to_managed.m"
                {
#line 752 "mlds_to_managed.m"
                  mercury__io__write_int_3_p_0(ml_backend__mlds_to_managed__Num_57);
#line 752 "mlds_to_managed.m"
                  return;
                }
#line 750 "mlds_to_managed.m"
              }
#line 542 "mlds_to_managed.m"
          }
#line 517 "mlds_to_managed.m"
  }
#line 513 "mlds_to_managed.m"
}

#line 467 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__write_rval_const_3_p_0(
#line 467 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__HeadVar__1_1)
#line 467 "mlds_to_managed.m"
{
#line 469 "mlds_to_managed.m"
  {
#line 469 "mlds_to_managed.m"
    MR_bool ml_backend__mlds_to_managed__succeeded;

#line 469 "mlds_to_managed.m"
    if ((ml_backend__mlds_to_managed__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 471 "mlds_to_managed.m"
      {
#line 472 "mlds_to_managed.m"
        {
#line 472 "mlds_to_managed.m"
          mercury__io__write_string_3_p_0((MR_String) "0");
#line 472 "mlds_to_managed.m"
          return;
        }
#line 471 "mlds_to_managed.m"
      }
#line 469 "mlds_to_managed.m"
    else
#line 469 "mlds_to_managed.m"
      if ((ml_backend__mlds_to_managed__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 469 "mlds_to_managed.m"
        {
#line 470 "mlds_to_managed.m"
          {
#line 470 "mlds_to_managed.m"
            mercury__io__write_string_3_p_0((MR_String) "1");
#line 470 "mlds_to_managed.m"
            return;
          }
#line 469 "mlds_to_managed.m"
        }
#line 469 "mlds_to_managed.m"
      else
#line 469 "mlds_to_managed.m"
        if (((MR_tag((MR_Word) ml_backend__mlds_to_managed__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 508 "mlds_to_managed.m"
          {
#line 509 "mlds_to_managed.m"
            {
#line 509 "mlds_to_managed.m"
              mercury__require__sorry_3_p_0((MR_String) "ml_backend.mlds_to_managed", (MR_String) "predicate \140ml_backend.mlds_to_managed.write_rval_const\'/3", (MR_String) "data_addr_const rval");
#line 509 "mlds_to_managed.m"
              return;
            }
#line 508 "mlds_to_managed.m"
          }
#line 469 "mlds_to_managed.m"
        else
#line 469 "mlds_to_managed.m"
          if (((MR_tag((MR_Word) ml_backend__mlds_to_managed__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 473 "mlds_to_managed.m"
            {
#line 473 "mlds_to_managed.m"
              MR_Integer ml_backend__mlds_to_managed__I_100 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_managed__HeadVar__1_1, (MR_Integer) 0)));

#line 478 "mlds_to_managed.m"
              {
#line 478 "mlds_to_managed.m"
                mercury__io__write_int_3_p_0(ml_backend__mlds_to_managed__I_100);
#line 478 "mlds_to_managed.m"
                return;
              }
#line 473 "mlds_to_managed.m"
            }
#line 469 "mlds_to_managed.m"
          else
#line 469 "mlds_to_managed.m"
            if (((((MR_tag((MR_Word) ml_backend__mlds_to_managed__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_managed__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 473 "mlds_to_managed.m"
              {
#line 473 "mlds_to_managed.m"
                MR_Integer ml_backend__mlds_to_managed__I_16 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_managed__HeadVar__1_1, (MR_Integer) 1)));

#line 478 "mlds_to_managed.m"
                {
#line 478 "mlds_to_managed.m"
                  mercury__io__write_int_3_p_0(ml_backend__mlds_to_managed__I_16);
#line 478 "mlds_to_managed.m"
                  return;
                }
#line 473 "mlds_to_managed.m"
              }
#line 469 "mlds_to_managed.m"
            else
#line 469 "mlds_to_managed.m"
              if (((((MR_tag((MR_Word) ml_backend__mlds_to_managed__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_managed__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 494 "mlds_to_managed.m"
                {
#line 494 "mlds_to_managed.m"
                  MR_Word ml_backend__mlds_to_managed__CodeAddrConst_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_managed__HeadVar__1_1, (MR_Integer) 1)));

#line 501 "mlds_to_managed.m"
                  if (((MR_tag((MR_Word) ml_backend__mlds_to_managed__CodeAddrConst_58)) == (MR_mktag((MR_Integer) 1))))
#line 502 "mlds_to_managed.m"
                    {
#line 502 "mlds_to_managed.m"
                      MR_Integer ml_backend__mlds_to_managed__SeqNum_64 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_managed__CodeAddrConst_58, (MR_Integer) 1)));
#line 502 "mlds_to_managed.m"
                      MR_Word ml_backend__mlds_to_managed__V_67_67;
#line 502 "mlds_to_managed.m"
                      MR_Word ml_backend__mlds_to_managed__ProcLabel_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_managed__CodeAddrConst_58, (MR_Integer) 0)));
#line 502 "mlds_to_managed.m"
                      MR_Word ml_backend__mlds_to_managed__ClassName_80;
#line 502 "mlds_to_managed.m"
                      MR_String ml_backend__mlds_to_managed__MangledName_81;
#line 502 "mlds_to_managed.m"
                      MR_Word ml_backend__mlds_to_managed___FuncSignature_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_managed__CodeAddrConst_58, (MR_Integer) 2)));

#line 503 "mlds_to_managed.m"
                      {
#line 503 "mlds_to_managed.m"
                        ml_backend__mlds_to_managed__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 503 "mlds_to_managed.m"
                        MR_hl_field(MR_mktag(1), ml_backend__mlds_to_managed__V_67_67, 0) = ((MR_Box) (ml_backend__mlds_to_managed__SeqNum_64));
#line 503 "mlds_to_managed.m"
                      }
#line 503 "mlds_to_managed.m"
                      {
#line 503 "mlds_to_managed.m"
                        ml_backend__mlds_to_il__mangle_mlds_proc_label_4_p_0(ml_backend__mlds_to_managed__ProcLabel_78, ml_backend__mlds_to_managed__V_67_67, &ml_backend__mlds_to_managed__ClassName_80, &ml_backend__mlds_to_managed__MangledName_81);
                      }
#line 504 "mlds_to_managed.m"
                      {
#line 504 "mlds_to_managed.m"
                        ml_backend__mlds_to_managed__write_class_name_3_p_0(ml_backend__mlds_to_managed__ClassName_80);
                      }
#line 505 "mlds_to_managed.m"
                      {
#line 505 "mlds_to_managed.m"
                        mercury__io__write_string_3_p_0((MR_String) ".");
                      }
#line 506 "mlds_to_managed.m"
                      {
#line 506 "mlds_to_managed.m"
                        mercury__io__write_string_3_p_0(ml_backend__mlds_to_managed__MangledName_81);
#line 506 "mlds_to_managed.m"
                        return;
                      }
#line 502 "mlds_to_managed.m"
                    }
#line 501 "mlds_to_managed.m"
                  else
#line 496 "mlds_to_managed.m"
                    {
#line 496 "mlds_to_managed.m"
                      MR_Word ml_backend__mlds_to_managed__ProcLabel_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__CodeAddrConst_58, (MR_Integer) 0)));
#line 496 "mlds_to_managed.m"
                      MR_Word ml_backend__mlds_to_managed__ClassName_62;
#line 496 "mlds_to_managed.m"
                      MR_String ml_backend__mlds_to_managed__MangledName_63;
#line 496 "mlds_to_managed.m"
                      MR_Word ml_backend__mlds_to_managed___FuncSignature_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__CodeAddrConst_58, (MR_Integer) 1)));

#line 497 "mlds_to_managed.m"
                      {
#line 497 "mlds_to_managed.m"
                        ml_backend__mlds_to_il__mangle_mlds_proc_label_4_p_0(ml_backend__mlds_to_managed__ProcLabel_60, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ml_backend__mlds_to_managed__ClassName_62, &ml_backend__mlds_to_managed__MangledName_63);
                      }
#line 498 "mlds_to_managed.m"
                      {
#line 498 "mlds_to_managed.m"
                        ml_backend__mlds_to_managed__write_class_name_3_p_0(ml_backend__mlds_to_managed__ClassName_62);
                      }
#line 499 "mlds_to_managed.m"
                      {
#line 499 "mlds_to_managed.m"
                        mercury__io__write_string_3_p_0((MR_String) ".");
                      }
#line 500 "mlds_to_managed.m"
                      {
#line 500 "mlds_to_managed.m"
                        mercury__io__write_string_3_p_0(ml_backend__mlds_to_managed__MangledName_63);
#line 500 "mlds_to_managed.m"
                        return;
                      }
#line 496 "mlds_to_managed.m"
                    }
#line 494 "mlds_to_managed.m"
                }
#line 469 "mlds_to_managed.m"
              else
#line 469 "mlds_to_managed.m"
                if (((((MR_tag((MR_Word) ml_backend__mlds_to_managed__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_managed__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 473 "mlds_to_managed.m"
                  {
#line 473 "mlds_to_managed.m"
                    MR_Integer ml_backend__mlds_to_managed__I_96 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_managed__HeadVar__1_1, (MR_Integer) 1)));
#line 475 "mlds_to_managed.m"
                    MR_Word ml_backend__mlds_to_managed__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_managed__HeadVar__1_1, (MR_Integer) 2)));

#line 478 "mlds_to_managed.m"
                    {
#line 478 "mlds_to_managed.m"
                      mercury__io__write_int_3_p_0(ml_backend__mlds_to_managed__I_96);
#line 478 "mlds_to_managed.m"
                      return;
                    }
#line 473 "mlds_to_managed.m"
                  }
#line 469 "mlds_to_managed.m"
                else
#line 469 "mlds_to_managed.m"
                  if (((((MR_tag((MR_Word) ml_backend__mlds_to_managed__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_managed__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 481 "mlds_to_managed.m"
                    {
#line 481 "mlds_to_managed.m"
                      MR_Float ml_backend__mlds_to_managed__F_30 = MR_unbox_float((MR_hl_field(MR_mktag(3), ml_backend__mlds_to_managed__HeadVar__1_1, (MR_Integer) 1)));

#line 482 "mlds_to_managed.m"
                      {
#line 482 "mlds_to_managed.m"
                        mercury__io__write_float_3_p_0(ml_backend__mlds_to_managed__F_30);
#line 482 "mlds_to_managed.m"
                        return;
                      }
#line 481 "mlds_to_managed.m"
                    }
#line 469 "mlds_to_managed.m"
                  else
#line 469 "mlds_to_managed.m"
                    if (((((MR_tag((MR_Word) ml_backend__mlds_to_managed__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_managed__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 479 "mlds_to_managed.m"
                      {
#line 480 "mlds_to_managed.m"
                        {
#line 480 "mlds_to_managed.m"
                          mercury__require__sorry_3_p_0((MR_String) "ml_backend.mlds_to_managed", (MR_String) "predicate \140ml_backend.mlds_to_managed.write_rval_const\'/3", (MR_String) "mlconst_foreign for managed languages");
#line 480 "mlds_to_managed.m"
                          return;
                        }
#line 479 "mlds_to_managed.m"
                      }
#line 469 "mlds_to_managed.m"
                    else
#line 469 "mlds_to_managed.m"
                      if (((((MR_tag((MR_Word) ml_backend__mlds_to_managed__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_managed__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 488 "mlds_to_managed.m"
                        {
#line 488 "mlds_to_managed.m"
                          MR_Word ml_backend__mlds_to_managed__S_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_managed__HeadVar__1_1, (MR_Integer) 1)));

#line 489 "mlds_to_managed.m"
                          {
#line 489 "mlds_to_managed.m"
                            mercury__io__write_string_3_p_0((MR_String) "\"");
                          }
#line 490 "mlds_to_managed.m"
                          {
#line 490 "mlds_to_managed.m"
                            backend_libs__c_util__output_quoted_multi_string_3_p_0(ml_backend__mlds_to_managed__S_44);
                          }
#line 491 "mlds_to_managed.m"
                          {
#line 491 "mlds_to_managed.m"
                            mercury__io__write_string_3_p_0((MR_String) "\"");
#line 491 "mlds_to_managed.m"
                            return;
                          }
#line 488 "mlds_to_managed.m"
                        }
#line 469 "mlds_to_managed.m"
                      else
#line 469 "mlds_to_managed.m"
                        if (((((MR_tag((MR_Word) ml_backend__mlds_to_managed__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_managed__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 492 "mlds_to_managed.m"
                          {
#line 492 "mlds_to_managed.m"
                            MR_String ml_backend__mlds_to_managed__NamedConst_53 = ((MR_String) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_managed__HeadVar__1_1, (MR_Integer) 1)));

#line 493 "mlds_to_managed.m"
                            {
#line 493 "mlds_to_managed.m"
                              mercury__io__write_string_3_p_0(ml_backend__mlds_to_managed__NamedConst_53);
#line 493 "mlds_to_managed.m"
                              return;
                            }
#line 492 "mlds_to_managed.m"
                          }
#line 469 "mlds_to_managed.m"
                        else
#line 469 "mlds_to_managed.m"
                          if (((((MR_tag((MR_Word) ml_backend__mlds_to_managed__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_managed__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 510 "mlds_to_managed.m"
                            {
#line 511 "mlds_to_managed.m"
                              {
#line 511 "mlds_to_managed.m"
                                mercury__io__write_string_3_p_0((MR_String) "null");
#line 511 "mlds_to_managed.m"
                                return;
                              }
#line 510 "mlds_to_managed.m"
                            }
#line 469 "mlds_to_managed.m"
                          else
#line 484 "mlds_to_managed.m"
                            {
#line 484 "mlds_to_managed.m"
                              MR_String ml_backend__mlds_to_managed__S_35 = ((MR_String) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_managed__HeadVar__1_1, (MR_Integer) 1)));

#line 485 "mlds_to_managed.m"
                              {
#line 485 "mlds_to_managed.m"
                                mercury__io__write_string_3_p_0((MR_String) "\"");
                              }
#line 486 "mlds_to_managed.m"
                              {
#line 486 "mlds_to_managed.m"
                                backend_libs__c_util__output_quoted_string_3_p_0(ml_backend__mlds_to_managed__S_35);
                              }
#line 487 "mlds_to_managed.m"
                              {
#line 487 "mlds_to_managed.m"
                                mercury__io__write_string_3_p_0((MR_String) "\"");
#line 487 "mlds_to_managed.m"
                                return;
                              }
#line 484 "mlds_to_managed.m"
                            }
#line 469 "mlds_to_managed.m"
  }
#line 467 "mlds_to_managed.m"
}

#line 602 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__write_rval_4_p_0_1(
#line 602 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__closure_arg,
#line 602 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_1,
#line 602 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_2,
#line 602 "mlds_to_managed.m"
  MR_Box * ml_backend__mlds_to_managed__wrapper_arg_3)
#line 602 "mlds_to_managed.m"
{
#line 602 "mlds_to_managed.m"
  {
#line 602 "mlds_to_managed.m"
    MR_Box ml_backend__mlds_to_managed__closure = ml_backend__mlds_to_managed__closure_arg;

#line 602 "mlds_to_managed.m"
    {
#line 602 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__write_il_type_modifier_as_foreign_type_3_p_0(((MR_Word) ml_backend__mlds_to_managed__wrapper_arg_1));
#line 602 "mlds_to_managed.m"
      return;
    }
#line 602 "mlds_to_managed.m"
  }
#line 602 "mlds_to_managed.m"
}

#line 407 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__write_rval_4_p_0(
#line 407 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__DataRep_5,
#line 407 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__Rval_6)
#line 407 "mlds_to_managed.m"
{
#line 411 "mlds_to_managed.m"
  while (MR_TRUE)
#line 411 "mlds_to_managed.m"
    {
#line 411 "mlds_to_managed.m"
      /* tailcall optimized into a loop */
#line 411 "mlds_to_managed.m"
      {
#line 411 "mlds_to_managed.m"
        MR_bool ml_backend__mlds_to_managed__succeeded;

#line 411 "mlds_to_managed.m"
        if (((MR_tag((MR_Word) ml_backend__mlds_to_managed__Rval_6)) == (MR_mktag((MR_Integer) 1))))
#line 411 "mlds_to_managed.m"
          {
#line 411 "mlds_to_managed.m"
            MR_Word ml_backend__mlds_to_managed__Lval_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_managed__Rval_6, (MR_Integer) 0)));

#line 412 "mlds_to_managed.m"
            {
#line 412 "mlds_to_managed.m"
              ml_backend__mlds_to_managed__write_lval_4_p_0(ml_backend__mlds_to_managed__DataRep_5, ml_backend__mlds_to_managed__Lval_8);
#line 412 "mlds_to_managed.m"
              return;
            }
#line 411 "mlds_to_managed.m"
          }
#line 411 "mlds_to_managed.m"
        else
#line 411 "mlds_to_managed.m"
          if (((MR_tag((MR_Word) ml_backend__mlds_to_managed__Rval_6)) == (MR_mktag((MR_Integer) 2))))
#line 414 "mlds_to_managed.m"
            {
#line 415 "mlds_to_managed.m"
              {
#line 415 "mlds_to_managed.m"
                mercury__require__sorry_3_p_0((MR_String) "ml_backend.mlds_to_managed", (MR_String) "predicate \140ml_backend.mlds_to_managed.write_rval\'/4", (MR_String) "mkword rval");
#line 415 "mlds_to_managed.m"
                return;
              }
#line 414 "mlds_to_managed.m"
            }
#line 411 "mlds_to_managed.m"
          else
#line 411 "mlds_to_managed.m"
            if (((MR_tag((MR_Word) ml_backend__mlds_to_managed__Rval_6)) == (MR_mktag((MR_Integer) 0))))
#line 454 "mlds_to_managed.m"
              {
#line 455 "mlds_to_managed.m"
                {
#line 455 "mlds_to_managed.m"
                  mercury__require__sorry_3_p_0((MR_String) "ml_backend.mlds_to_managed", (MR_String) "predicate \140ml_backend.mlds_to_managed.write_rval\'/4", (MR_String) "scalar_common rval");
#line 455 "mlds_to_managed.m"
                  return;
                }
#line 454 "mlds_to_managed.m"
              }
#line 411 "mlds_to_managed.m"
            else
#line 411 "mlds_to_managed.m"
              if (((((MR_tag((MR_Word) ml_backend__mlds_to_managed__Rval_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_managed__Rval_6, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 440 "mlds_to_managed.m"
                {
#line 440 "mlds_to_managed.m"
                  MR_Word ml_backend__mlds_to_managed__Binop_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_managed__Rval_6, (MR_Integer) 1)));
#line 440 "mlds_to_managed.m"
                  MR_Word ml_backend__mlds_to_managed__RvalB_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_managed__Rval_6, (MR_Integer) 3)));
#line 440 "mlds_to_managed.m"
                  MR_Word ml_backend__mlds_to_managed__Category_19;
#line 440 "mlds_to_managed.m"
                  MR_String ml_backend__mlds_to_managed__BinopStr_20;
#line 440 "mlds_to_managed.m"
                  MR_Word ml_backend__mlds_to_managed__RvalA_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_managed__Rval_6, (MR_Integer) 2)));

#line 441 "mlds_to_managed.m"
                  {
#line 441 "mlds_to_managed.m"
                    backend_libs__c_util__binop_category_string_3_p_0(ml_backend__mlds_to_managed__Binop_17, &ml_backend__mlds_to_managed__Category_19, &ml_backend__mlds_to_managed__BinopStr_20);
                  }
#line 442 "mlds_to_managed.m"
                  ml_backend__mlds_to_managed__succeeded = (ml_backend__mlds_to_managed__Category_19 == (MR_Integer) 6);
#line 450 "mlds_to_managed.m"
                  if (ml_backend__mlds_to_managed__succeeded)
#line 443 "mlds_to_managed.m"
                    {
#line 443 "mlds_to_managed.m"
                      {
#line 443 "mlds_to_managed.m"
                        mercury__io__write_string_3_p_0((MR_String) "(");
                      }
#line 444 "mlds_to_managed.m"
                      {
#line 444 "mlds_to_managed.m"
                        ml_backend__mlds_to_managed__write_rval_4_p_0(ml_backend__mlds_to_managed__DataRep_5, ml_backend__mlds_to_managed__RvalA_74);
                      }
#line 445 "mlds_to_managed.m"
                      {
#line 445 "mlds_to_managed.m"
                        mercury__io__write_string_3_p_0((MR_String) ") ");
                      }
#line 446 "mlds_to_managed.m"
                      {
#line 446 "mlds_to_managed.m"
                        mercury__io__write_string_3_p_0(ml_backend__mlds_to_managed__BinopStr_20);
                      }
#line 447 "mlds_to_managed.m"
                      {
#line 447 "mlds_to_managed.m"
                        mercury__io__write_string_3_p_0((MR_String) " (");
                      }
#line 448 "mlds_to_managed.m"
                      {
#line 448 "mlds_to_managed.m"
                        ml_backend__mlds_to_managed__write_rval_4_p_0(ml_backend__mlds_to_managed__DataRep_5, ml_backend__mlds_to_managed__RvalB_18);
                      }
#line 449 "mlds_to_managed.m"
                      {
#line 449 "mlds_to_managed.m"
                        mercury__io__write_string_3_p_0((MR_String) ")");
#line 449 "mlds_to_managed.m"
                        return;
                      }
#line 443 "mlds_to_managed.m"
                    }
#line 450 "mlds_to_managed.m"
                  else
#line 451 "mlds_to_managed.m"
                    {
#line 451 "mlds_to_managed.m"
                      {
#line 451 "mlds_to_managed.m"
                        mercury__require__sorry_3_p_0((MR_String) "ml_backend.mlds_to_managed", (MR_String) "predicate \140ml_backend.mlds_to_managed.write_rval\'/4", (MR_String) "binop rval");
#line 451 "mlds_to_managed.m"
                        return;
                      }
#line 451 "mlds_to_managed.m"
                    }
#line 440 "mlds_to_managed.m"
                }
#line 411 "mlds_to_managed.m"
              else
#line 411 "mlds_to_managed.m"
                if (((((MR_tag((MR_Word) ml_backend__mlds_to_managed__Rval_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_managed__Rval_6, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 417 "mlds_to_managed.m"
                  {
#line 417 "mlds_to_managed.m"
                    MR_Word ml_backend__mlds_to_managed__RvalConst_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_managed__Rval_6, (MR_Integer) 1)));

#line 418 "mlds_to_managed.m"
                    {
#line 418 "mlds_to_managed.m"
                      ml_backend__mlds_to_managed__write_rval_const_3_p_0(ml_backend__mlds_to_managed__RvalConst_11);
#line 418 "mlds_to_managed.m"
                      return;
                    }
#line 417 "mlds_to_managed.m"
                  }
#line 411 "mlds_to_managed.m"
                else
#line 411 "mlds_to_managed.m"
                  if (((((MR_tag((MR_Word) ml_backend__mlds_to_managed__Rval_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_managed__Rval_6, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 460 "mlds_to_managed.m"
                    {
#line 461 "mlds_to_managed.m"
                      {
#line 461 "mlds_to_managed.m"
                        mercury__require__sorry_3_p_0((MR_String) "ml_backend.mlds_to_managed", (MR_String) "predicate \140ml_backend.mlds_to_managed.write_rval\'/4", (MR_String) "mem_addr rval");
#line 461 "mlds_to_managed.m"
                        return;
                      }
#line 460 "mlds_to_managed.m"
                    }
#line 411 "mlds_to_managed.m"
                  else
#line 411 "mlds_to_managed.m"
                    if (((((MR_tag((MR_Word) ml_backend__mlds_to_managed__Rval_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_managed__Rval_6, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 463 "mlds_to_managed.m"
                      {
#line 464 "mlds_to_managed.m"
                        {
#line 464 "mlds_to_managed.m"
                          mercury__require__sorry_3_p_0((MR_String) "ml_backend.mlds_to_managed", (MR_String) "predicate \140ml_backend.mlds_to_managed.write_rval\'/4", (MR_String) "self rval");
#line 464 "mlds_to_managed.m"
                          return;
                        }
#line 463 "mlds_to_managed.m"
                      }
#line 411 "mlds_to_managed.m"
                    else
#line 411 "mlds_to_managed.m"
                      if (((((MR_tag((MR_Word) ml_backend__mlds_to_managed__Rval_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_managed__Rval_6, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 420 "mlds_to_managed.m"
                        {
#line 420 "mlds_to_managed.m"
                          MR_Word ml_backend__mlds_to_managed__Unop_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_managed__Rval_6, (MR_Integer) 1)));
#line 420 "mlds_to_managed.m"
                          MR_Word ml_backend__mlds_to_managed__RvalA_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_managed__Rval_6, (MR_Integer) 2)));
#line 429 "mlds_to_managed.m"
                          MR_String ml_backend__mlds_to_managed__UnopStr_15;
#line 422 "mlds_to_managed.m"
                          MR_Word ml_backend__mlds_to_managed__StdUnop_14;

#line 422 "mlds_to_managed.m"
                          ml_backend__mlds_to_managed__succeeded = ((MR_tag((MR_Word) ml_backend__mlds_to_managed__Unop_12)) == (MR_mktag((MR_Integer) 3)));
#line 422 "mlds_to_managed.m"
                          if (ml_backend__mlds_to_managed__succeeded)
#line 422 "mlds_to_managed.m"
                            {
#line 422 "mlds_to_managed.m"
                              ml_backend__mlds_to_managed__StdUnop_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_managed__Unop_12, (MR_Integer) 0)));
#line 423 "mlds_to_managed.m"
                              {
#line 423 "mlds_to_managed.m"
                                backend_libs__c_util__unary_prefix_op_2_p_0(ml_backend__mlds_to_managed__StdUnop_14, &ml_backend__mlds_to_managed__UnopStr_15);
                              }
#line 423 "mlds_to_managed.m"
                              ml_backend__mlds_to_managed__succeeded = MR_TRUE;
#line 422 "mlds_to_managed.m"
                            }
#line 429 "mlds_to_managed.m"
                          if (ml_backend__mlds_to_managed__succeeded)
#line 425 "mlds_to_managed.m"
                            {
#line 425 "mlds_to_managed.m"
                              {
#line 425 "mlds_to_managed.m"
                                mercury__io__write_string_3_p_0(ml_backend__mlds_to_managed__UnopStr_15);
                              }
#line 426 "mlds_to_managed.m"
                              {
#line 426 "mlds_to_managed.m"
                                mercury__io__write_string_3_p_0((MR_String) "(");
                              }
#line 427 "mlds_to_managed.m"
                              {
#line 427 "mlds_to_managed.m"
                                ml_backend__mlds_to_managed__write_rval_4_p_0(ml_backend__mlds_to_managed__DataRep_5, ml_backend__mlds_to_managed__RvalA_13);
                              }
#line 428 "mlds_to_managed.m"
                              {
#line 428 "mlds_to_managed.m"
                                mercury__io__write_string_3_p_0((MR_String) ")");
#line 428 "mlds_to_managed.m"
                                return;
                              }
#line 425 "mlds_to_managed.m"
                            }
#line 429 "mlds_to_managed.m"
                          else
#line 436 "mlds_to_managed.m"
                            {
#line 436 "mlds_to_managed.m"
                              MR_Word ml_backend__mlds_to_managed__Type_16;

#line 430 "mlds_to_managed.m"
                              ml_backend__mlds_to_managed__succeeded = ((MR_tag((MR_Word) ml_backend__mlds_to_managed__Unop_12)) == (MR_mktag((MR_Integer) 2)));
#line 430 "mlds_to_managed.m"
                              if (ml_backend__mlds_to_managed__succeeded)
#line 430 "mlds_to_managed.m"
                                {
#line 430 "mlds_to_managed.m"
                                  ml_backend__mlds_to_managed__Type_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_managed__Unop_12, (MR_Integer) 0)));
#line 432 "mlds_to_managed.m"
                                  {
#line 432 "mlds_to_managed.m"
                                    MR_Word ml_backend__mlds_to_managed__ILType_80;
#line 432 "mlds_to_managed.m"
                                    MR_Word ml_backend__mlds_to_managed__Modifiers_84;
#line 432 "mlds_to_managed.m"
                                    MR_Word ml_backend__mlds_to_managed__SimpleType_85;

#line 432 "mlds_to_managed.m"
                                    {
#line 432 "mlds_to_managed.m"
                                      mercury__io__write_string_3_p_0((MR_String) "(");
                                    }
#line 568 "mlds_to_managed.m"
                                    {
#line 568 "mlds_to_managed.m"
                                      ml_backend__mlds_to_managed__ILType_80 = ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_f_0(ml_backend__mlds_to_managed__DataRep_5, ml_backend__mlds_to_managed__Type_16);
                                    }
#line 601 "mlds_to_managed.m"
                                    ml_backend__mlds_to_managed__Modifiers_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__ILType_80, (MR_Integer) 0)));
#line 601 "mlds_to_managed.m"
                                    ml_backend__mlds_to_managed__SimpleType_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__ILType_80, (MR_Integer) 1)));
#line 602 "mlds_to_managed.m"
                                    {
#line 602 "mlds_to_managed.m"
                                      mercury__io__write_list_5_p_0((MR_Word) &ml_backend__ilds__ml_backend__ilds__type_ctor_info_type_modifier_0, ml_backend__mlds_to_managed__Modifiers_84, (MR_String) " ", (MR_Word) &ml_backend__mlds_to_managed_scalar_common_6[3]);
                                    }
#line 604 "mlds_to_managed.m"
                                    {
#line 604 "mlds_to_managed.m"
                                      ml_backend__mlds_to_managed__write_il_simple_type_as_foreign_type_3_p_0(ml_backend__mlds_to_managed__SimpleType_85);
                                    }
#line 434 "mlds_to_managed.m"
                                    {
#line 434 "mlds_to_managed.m"
                                      mercury__io__write_string_3_p_0((MR_String) ") ");
                                    }
#line 435 "mlds_to_managed.m"
                                    /* direct tailcall eliminated */
#line 435 "mlds_to_managed.m"
                                    {
#line 435 "mlds_to_managed.m"
                                      MR_Word ml_backend__mlds_to_managed__Rval__tmp_copy_6 = ml_backend__mlds_to_managed__RvalA_13;

#line 435 "mlds_to_managed.m"
                                      ml_backend__mlds_to_managed__Rval_6 = ml_backend__mlds_to_managed__Rval__tmp_copy_6;
#line 435 "mlds_to_managed.m"
                                    }
#line 435 "mlds_to_managed.m"
                                    continue;
#line 432 "mlds_to_managed.m"
                                  }
#line 430 "mlds_to_managed.m"
                                }
#line 430 "mlds_to_managed.m"
                              else
#line 437 "mlds_to_managed.m"
                                {
#line 437 "mlds_to_managed.m"
                                  {
#line 437 "mlds_to_managed.m"
                                    mercury__require__sorry_3_p_0((MR_String) "ml_backend.mlds_to_managed", (MR_String) "predicate \140ml_backend.mlds_to_managed.write_rval\'/4", (MR_String) "box or unbox unop");
#line 437 "mlds_to_managed.m"
                                    return;
                                  }
#line 437 "mlds_to_managed.m"
                                }
#line 436 "mlds_to_managed.m"
                            }
#line 420 "mlds_to_managed.m"
                        }
#line 411 "mlds_to_managed.m"
                      else
#line 457 "mlds_to_managed.m"
                        {
#line 458 "mlds_to_managed.m"
                          {
#line 458 "mlds_to_managed.m"
                            mercury__require__sorry_3_p_0((MR_String) "ml_backend.mlds_to_managed", (MR_String) "predicate \140ml_backend.mlds_to_managed.write_rval\'/4", (MR_String) "vector_common_row rval");
#line 458 "mlds_to_managed.m"
                            return;
                          }
#line 457 "mlds_to_managed.m"
                        }
#line 411 "mlds_to_managed.m"
      }
#line 411 "mlds_to_managed.m"
      break;
#line 411 "mlds_to_managed.m"
    }
#line 407 "mlds_to_managed.m"
}

#line 350 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__write_outline_arg_final_4_p_0(
#line 350 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__DataRep_5,
#line 350 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__OutlineArg_6)
#line 350 "mlds_to_managed.m"
{
#line 355 "mlds_to_managed.m"
  {
#line 355 "mlds_to_managed.m"
    MR_bool ml_backend__mlds_to_managed__succeeded;

#line 355 "mlds_to_managed.m"
    if ((ml_backend__mlds_to_managed__OutlineArg_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 363 "mlds_to_managed.m"
      {
#line 363 "mlds_to_managed.m"
      }
#line 355 "mlds_to_managed.m"
    else
#line 355 "mlds_to_managed.m"
      if (((MR_tag((MR_Word) ml_backend__mlds_to_managed__OutlineArg_6)) == (MR_mktag((MR_Integer) 1))))
#line 355 "mlds_to_managed.m"
        {
#line 355 "mlds_to_managed.m"
        }
#line 355 "mlds_to_managed.m"
      else
#line 357 "mlds_to_managed.m"
        {
#line 357 "mlds_to_managed.m"
          MR_String ml_backend__mlds_to_managed__VarName_12 = ((MR_String) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_managed__OutlineArg_6, (MR_Integer) 1)));
#line 357 "mlds_to_managed.m"
          MR_Word ml_backend__mlds_to_managed__Lval_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_managed__OutlineArg_6, (MR_Integer) 2)));
#line 357 "mlds_to_managed.m"
          MR_Word ml_backend__mlds_to_managed___Type_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_managed__OutlineArg_6, (MR_Integer) 0)));

#line 358 "mlds_to_managed.m"
          {
#line 358 "mlds_to_managed.m"
            ml_backend__mlds_to_managed__write_lval_4_p_0(ml_backend__mlds_to_managed__DataRep_5, ml_backend__mlds_to_managed__Lval_13);
          }
#line 359 "mlds_to_managed.m"
          {
#line 359 "mlds_to_managed.m"
            mercury__io__write_string_3_p_0((MR_String) " = ");
          }
#line 360 "mlds_to_managed.m"
          {
#line 360 "mlds_to_managed.m"
            mercury__io__write_string_3_p_0(ml_backend__mlds_to_managed__VarName_12);
          }
#line 361 "mlds_to_managed.m"
          {
#line 361 "mlds_to_managed.m"
            mercury__io__write_string_3_p_0((MR_String) ";\n");
#line 361 "mlds_to_managed.m"
            return;
          }
#line 357 "mlds_to_managed.m"
        }
#line 355 "mlds_to_managed.m"
  }
#line 350 "mlds_to_managed.m"
}

#line 602 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__write_outline_arg_init_4_p_0_2(
#line 602 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__closure_arg,
#line 602 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_1,
#line 602 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_2,
#line 602 "mlds_to_managed.m"
  MR_Box * ml_backend__mlds_to_managed__wrapper_arg_3)
#line 602 "mlds_to_managed.m"
{
#line 602 "mlds_to_managed.m"
  {
#line 602 "mlds_to_managed.m"
    MR_Box ml_backend__mlds_to_managed__closure = ml_backend__mlds_to_managed__closure_arg;

#line 602 "mlds_to_managed.m"
    {
#line 602 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__write_il_type_modifier_as_foreign_type_3_p_0(((MR_Word) ml_backend__mlds_to_managed__wrapper_arg_1));
#line 602 "mlds_to_managed.m"
      return;
    }
#line 602 "mlds_to_managed.m"
  }
#line 602 "mlds_to_managed.m"
}

#line 602 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__write_outline_arg_init_4_p_0_1(
#line 602 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__closure_arg,
#line 602 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_1,
#line 602 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_2,
#line 602 "mlds_to_managed.m"
  MR_Box * ml_backend__mlds_to_managed__wrapper_arg_3)
#line 602 "mlds_to_managed.m"
{
#line 602 "mlds_to_managed.m"
  {
#line 602 "mlds_to_managed.m"
    MR_Box ml_backend__mlds_to_managed__closure = ml_backend__mlds_to_managed__closure_arg;

#line 602 "mlds_to_managed.m"
    {
#line 602 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__write_il_type_modifier_as_foreign_type_3_p_0(((MR_Word) ml_backend__mlds_to_managed__wrapper_arg_1));
#line 602 "mlds_to_managed.m"
      return;
    }
#line 602 "mlds_to_managed.m"
  }
#line 602 "mlds_to_managed.m"
}

#line 325 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__write_outline_arg_init_4_p_0(
#line 325 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__DataRep_5,
#line 325 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__OutlineArg_6)
#line 325 "mlds_to_managed.m"
{
#line 330 "mlds_to_managed.m"
  {
#line 330 "mlds_to_managed.m"
    MR_bool ml_backend__mlds_to_managed__succeeded;

#line 330 "mlds_to_managed.m"
    if ((ml_backend__mlds_to_managed__OutlineArg_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 347 "mlds_to_managed.m"
      {
#line 347 "mlds_to_managed.m"
      }
#line 330 "mlds_to_managed.m"
    else
#line 330 "mlds_to_managed.m"
      if (((MR_tag((MR_Word) ml_backend__mlds_to_managed__OutlineArg_6)) == (MR_mktag((MR_Integer) 1))))
#line 330 "mlds_to_managed.m"
        {
#line 330 "mlds_to_managed.m"
          MR_Word ml_backend__mlds_to_managed__Type_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_managed__OutlineArg_6, (MR_Integer) 0)));
#line 330 "mlds_to_managed.m"
          MR_String ml_backend__mlds_to_managed__VarName_9 = ((MR_String) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_managed__OutlineArg_6, (MR_Integer) 1)));
#line 330 "mlds_to_managed.m"
          MR_Word ml_backend__mlds_to_managed__Rval_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_managed__OutlineArg_6, (MR_Integer) 2)));
#line 330 "mlds_to_managed.m"
          MR_Word ml_backend__mlds_to_managed__ILType_39;
#line 330 "mlds_to_managed.m"
          MR_Word ml_backend__mlds_to_managed__Modifiers_43;
#line 330 "mlds_to_managed.m"
          MR_Word ml_backend__mlds_to_managed__SimpleType_44;

#line 568 "mlds_to_managed.m"
          {
#line 568 "mlds_to_managed.m"
            ml_backend__mlds_to_managed__ILType_39 = ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_f_0(ml_backend__mlds_to_managed__DataRep_5, ml_backend__mlds_to_managed__Type_8);
          }
#line 601 "mlds_to_managed.m"
          ml_backend__mlds_to_managed__Modifiers_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__ILType_39, (MR_Integer) 0)));
#line 601 "mlds_to_managed.m"
          ml_backend__mlds_to_managed__SimpleType_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__ILType_39, (MR_Integer) 1)));
#line 602 "mlds_to_managed.m"
          {
#line 602 "mlds_to_managed.m"
            mercury__io__write_list_5_p_0((MR_Word) &ml_backend__ilds__ml_backend__ilds__type_ctor_info_type_modifier_0, ml_backend__mlds_to_managed__Modifiers_43, (MR_String) " ", (MR_Word) &ml_backend__mlds_to_managed_scalar_common_6[1]);
          }
#line 604 "mlds_to_managed.m"
          {
#line 604 "mlds_to_managed.m"
            ml_backend__mlds_to_managed__write_il_simple_type_as_foreign_type_3_p_0(ml_backend__mlds_to_managed__SimpleType_44);
          }
#line 332 "mlds_to_managed.m"
          {
#line 332 "mlds_to_managed.m"
            mercury__io__write_string_3_p_0((MR_String) " ");
          }
#line 333 "mlds_to_managed.m"
          {
#line 333 "mlds_to_managed.m"
            mercury__io__write_string_3_p_0(ml_backend__mlds_to_managed__VarName_9);
          }
#line 334 "mlds_to_managed.m"
          {
#line 334 "mlds_to_managed.m"
            mercury__io__write_string_3_p_0((MR_String) " = ");
          }
#line 335 "mlds_to_managed.m"
          {
#line 335 "mlds_to_managed.m"
            ml_backend__mlds_to_managed__write_rval_4_p_0(ml_backend__mlds_to_managed__DataRep_5, ml_backend__mlds_to_managed__Rval_10);
          }
#line 336 "mlds_to_managed.m"
          {
#line 336 "mlds_to_managed.m"
            mercury__io__write_string_3_p_0((MR_String) ";\n");
#line 336 "mlds_to_managed.m"
            return;
          }
#line 330 "mlds_to_managed.m"
        }
#line 330 "mlds_to_managed.m"
      else
#line 338 "mlds_to_managed.m"
        {
#line 338 "mlds_to_managed.m"
          MR_Word ml_backend__mlds_to_managed__Type_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_managed__OutlineArg_6, (MR_Integer) 0)));
#line 338 "mlds_to_managed.m"
          MR_String ml_backend__mlds_to_managed__VarName_33 = ((MR_String) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_managed__OutlineArg_6, (MR_Integer) 1)));
#line 338 "mlds_to_managed.m"
          MR_Word ml_backend__mlds_to_managed__ILType_59;
#line 338 "mlds_to_managed.m"
          MR_Word ml_backend__mlds_to_managed__Modifiers_63;
#line 338 "mlds_to_managed.m"
          MR_Word ml_backend__mlds_to_managed__SimpleType_64;
#line 338 "mlds_to_managed.m"
          MR_Word ml_backend__mlds_to_managed__ILType_79;
#line 338 "mlds_to_managed.m"
          MR_Word ml_backend__mlds_to_managed__ILSimpleType_81;
#line 338 "mlds_to_managed.m"
          MR_Word ml_backend__mlds_to_managed___Lval_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_managed__OutlineArg_6, (MR_Integer) 2)));
#line 589 "mlds_to_managed.m"
          MR_Word ml_backend__mlds_to_managed__V_80_80;

#line 568 "mlds_to_managed.m"
          {
#line 568 "mlds_to_managed.m"
            ml_backend__mlds_to_managed__ILType_59 = ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_f_0(ml_backend__mlds_to_managed__DataRep_5, ml_backend__mlds_to_managed__Type_32);
          }
#line 601 "mlds_to_managed.m"
          ml_backend__mlds_to_managed__Modifiers_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__ILType_59, (MR_Integer) 0)));
#line 601 "mlds_to_managed.m"
          ml_backend__mlds_to_managed__SimpleType_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__ILType_59, (MR_Integer) 1)));
#line 602 "mlds_to_managed.m"
          {
#line 602 "mlds_to_managed.m"
            mercury__io__write_list_5_p_0((MR_Word) &ml_backend__ilds__ml_backend__ilds__type_ctor_info_type_modifier_0, ml_backend__mlds_to_managed__Modifiers_63, (MR_String) " ", (MR_Word) &ml_backend__mlds_to_managed_scalar_common_6[2]);
          }
#line 604 "mlds_to_managed.m"
          {
#line 604 "mlds_to_managed.m"
            ml_backend__mlds_to_managed__write_il_simple_type_as_foreign_type_3_p_0(ml_backend__mlds_to_managed__SimpleType_64);
          }
#line 340 "mlds_to_managed.m"
          {
#line 340 "mlds_to_managed.m"
            mercury__io__write_string_3_p_0((MR_String) " ");
          }
#line 341 "mlds_to_managed.m"
          {
#line 341 "mlds_to_managed.m"
            mercury__io__write_string_3_p_0(ml_backend__mlds_to_managed__VarName_33);
          }
#line 343 "mlds_to_managed.m"
          {
#line 343 "mlds_to_managed.m"
            mercury__io__write_string_3_p_0((MR_String) " = ");
          }
#line 588 "mlds_to_managed.m"
          {
#line 588 "mlds_to_managed.m"
            ml_backend__mlds_to_managed__ILType_79 = ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_f_0(ml_backend__mlds_to_managed__DataRep_5, ml_backend__mlds_to_managed__Type_32);
          }
#line 589 "mlds_to_managed.m"
          ml_backend__mlds_to_managed__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__ILType_79, (MR_Integer) 0)));
#line 589 "mlds_to_managed.m"
          ml_backend__mlds_to_managed__ILSimpleType_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__ILType_79, (MR_Integer) 1)));
#line 590 "mlds_to_managed.m"
          {
#line 590 "mlds_to_managed.m"
            ml_backend__mlds_to_managed__write_csharp_initializer_3_p_0(ml_backend__mlds_to_managed__ILSimpleType_81);
          }
#line 345 "mlds_to_managed.m"
          {
#line 345 "mlds_to_managed.m"
            mercury__io__write_string_3_p_0((MR_String) ";\n");
#line 345 "mlds_to_managed.m"
            return;
          }
#line 338 "mlds_to_managed.m"
        }
#line 330 "mlds_to_managed.m"
  }
#line 325 "mlds_to_managed.m"
}

#line 300 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__write_statement_6_p_0_4(
#line 300 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__closure_arg,
#line 300 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_1,
#line 300 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_2,
#line 300 "mlds_to_managed.m"
  MR_Box * ml_backend__mlds_to_managed__wrapper_arg_3)
#line 300 "mlds_to_managed.m"
{
#line 300 "mlds_to_managed.m"
  {
#line 300 "mlds_to_managed.m"
    MR_Box ml_backend__mlds_to_managed__closure = ml_backend__mlds_to_managed__closure_arg;

#line 300 "mlds_to_managed.m"
    {
#line 300 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__write_statement_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__closure, (MR_Integer) 5))), ((MR_Word) ml_backend__mlds_to_managed__wrapper_arg_1));
#line 300 "mlds_to_managed.m"
      return;
    }
#line 300 "mlds_to_managed.m"
  }
#line 300 "mlds_to_managed.m"
}

#line 298 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__write_statement_6_p_0_3(
#line 298 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__closure_arg,
#line 298 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_1,
#line 298 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_2,
#line 298 "mlds_to_managed.m"
  MR_Box * ml_backend__mlds_to_managed__wrapper_arg_3)
#line 298 "mlds_to_managed.m"
{
#line 298 "mlds_to_managed.m"
  {
#line 298 "mlds_to_managed.m"
    MR_Box ml_backend__mlds_to_managed__closure = ml_backend__mlds_to_managed__closure_arg;

#line 298 "mlds_to_managed.m"
    {
#line 298 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__write_defn_decl_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__mlds_to_managed__wrapper_arg_1));
#line 298 "mlds_to_managed.m"
      return;
    }
#line 298 "mlds_to_managed.m"
  }
#line 298 "mlds_to_managed.m"
}

#line 294 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__write_statement_6_p_0_2(
#line 294 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__closure_arg,
#line 294 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_1,
#line 294 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_2,
#line 294 "mlds_to_managed.m"
  MR_Box * ml_backend__mlds_to_managed__wrapper_arg_3)
#line 294 "mlds_to_managed.m"
{
#line 294 "mlds_to_managed.m"
  {
#line 294 "mlds_to_managed.m"
    MR_Box ml_backend__mlds_to_managed__closure = ml_backend__mlds_to_managed__closure_arg;

#line 294 "mlds_to_managed.m"
    {
#line 294 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__write_outline_arg_final_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__mlds_to_managed__wrapper_arg_1));
#line 294 "mlds_to_managed.m"
      return;
    }
#line 294 "mlds_to_managed.m"
  }
#line 294 "mlds_to_managed.m"
}

#line 289 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__write_statement_6_p_0_1(
#line 289 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__closure_arg,
#line 289 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_1,
#line 289 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_2,
#line 289 "mlds_to_managed.m"
  MR_Box * ml_backend__mlds_to_managed__wrapper_arg_3)
#line 289 "mlds_to_managed.m"
{
#line 289 "mlds_to_managed.m"
  {
#line 289 "mlds_to_managed.m"
    MR_Box ml_backend__mlds_to_managed__closure = ml_backend__mlds_to_managed__closure_arg;

#line 289 "mlds_to_managed.m"
    {
#line 289 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__write_outline_arg_init_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__mlds_to_managed__wrapper_arg_1));
#line 289 "mlds_to_managed.m"
      return;
    }
#line 289 "mlds_to_managed.m"
  }
#line 289 "mlds_to_managed.m"
}

#line 280 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__write_statement_6_p_0(
#line 280 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__Globals_7,
#line 280 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__DataRep_8,
#line 280 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__Args_9,
#line 280 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__HeadVar__4_4)
#line 280 "mlds_to_managed.m"
{
#line 283 "mlds_to_managed.m"
  {
#line 283 "mlds_to_managed.m"
    MR_bool ml_backend__mlds_to_managed__succeeded;
#line 283 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__Statement_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__HeadVar__4_4, (MR_Integer) 0)));
#line 283 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__Context_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__HeadVar__4_4, (MR_Integer) 1)));
#line 295 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__OutlineArgs_14;
#line 295 "mlds_to_managed.m"
    MR_String ml_backend__mlds_to_managed__Code_16;
#line 286 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__ForeignProc_13;
#line 286 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__V_27_27;
#line 287 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__V_15_15;

#line 286 "mlds_to_managed.m"
    ml_backend__mlds_to_managed__succeeded = ((((MR_tag((MR_Word) ml_backend__mlds_to_managed__Statement_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_managed__Statement_10, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 286 "mlds_to_managed.m"
    if (ml_backend__mlds_to_managed__succeeded)
#line 286 "mlds_to_managed.m"
      {
#line 286 "mlds_to_managed.m"
        ml_backend__mlds_to_managed__ForeignProc_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_managed__Statement_10, (MR_Integer) 1)));
#line 287 "mlds_to_managed.m"
        ml_backend__mlds_to_managed__succeeded = ((((MR_tag((MR_Word) ml_backend__mlds_to_managed__ForeignProc_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_managed__ForeignProc_13, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 287 "mlds_to_managed.m"
        if (ml_backend__mlds_to_managed__succeeded)
#line 287 "mlds_to_managed.m"
          {
#line 287 "mlds_to_managed.m"
            ml_backend__mlds_to_managed__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_managed__ForeignProc_13, (MR_Integer) 1)));
#line 287 "mlds_to_managed.m"
            ml_backend__mlds_to_managed__OutlineArgs_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_managed__ForeignProc_13, (MR_Integer) 2)));
#line 287 "mlds_to_managed.m"
            ml_backend__mlds_to_managed__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_managed__ForeignProc_13, (MR_Integer) 3)));
#line 287 "mlds_to_managed.m"
            ml_backend__mlds_to_managed__Code_16 = ((MR_String) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_managed__ForeignProc_13, (MR_Integer) 4)));
#line 287 "mlds_to_managed.m"
            ml_backend__mlds_to_managed__succeeded = (ml_backend__mlds_to_managed__V_27_27 == (MR_Integer) 1);
#line 287 "mlds_to_managed.m"
          }
#line 286 "mlds_to_managed.m"
      }
#line 295 "mlds_to_managed.m"
    if (ml_backend__mlds_to_managed__succeeded)
#line 289 "mlds_to_managed.m"
      {
#line 289 "mlds_to_managed.m"
        MR_Word ml_backend__mlds_to_managed__TypeCtorInfo_71_71;
#line 289 "mlds_to_managed.m"
        MR_Word ml_backend__mlds_to_managed__TypeCtorInfo_72_72;
#line 289 "mlds_to_managed.m"
        MR_Word ml_backend__mlds_to_managed__V_28_28;
#line 289 "mlds_to_managed.m"
        MR_Word ml_backend__mlds_to_managed__V_30_30;
#line 289 "mlds_to_managed.m"
        MR_Word ml_backend__mlds_to_managed__V_35_35;
#line 289 "mlds_to_managed.m"
        MR_String ml_backend__mlds_to_managed__File_90;
#line 289 "mlds_to_managed.m"
        MR_Integer ml_backend__mlds_to_managed__Line_91;
#line 289 "mlds_to_managed.m"
        MR_Box ml_backend__mlds_to_managed__conv0_STATE_VARIABLE_IO_29_29;
#line 294 "mlds_to_managed.m"
        MR_Box ml_backend__mlds_to_managed__conv1_STATE_VARIABLE_IO_26;

#line 289 "mlds_to_managed.m"
        {
#line 289 "mlds_to_managed.m"
          ml_backend__mlds_to_managed__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 289 "mlds_to_managed.m"
          MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_28_28, 0) = ((MR_Box) (&ml_backend__mlds_to_managed_scalar_common_3[4]));
#line 289 "mlds_to_managed.m"
          MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_28_28, 1) = ((MR_Box) (ml_backend__mlds_to_managed__write_statement_6_p_0_1));
#line 289 "mlds_to_managed.m"
          MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_28_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 289 "mlds_to_managed.m"
          MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_28_28, 3) = ((MR_Box) (ml_backend__mlds_to_managed__DataRep_8));
#line 289 "mlds_to_managed.m"
        }
#line 3995 "ml_backend.mlds_to_managed.c"
        ml_backend__mlds_to_managed__TypeCtorInfo_71_71 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_outline_arg_0;
#line 3997 "ml_backend.mlds_to_managed.c"
        ml_backend__mlds_to_managed__TypeCtorInfo_72_72 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
#line 289 "mlds_to_managed.m"
        {
#line 289 "mlds_to_managed.m"
          mercury__list__foldl_4_p_2(ml_backend__mlds_to_managed__TypeCtorInfo_71_71, ml_backend__mlds_to_managed__TypeCtorInfo_72_72, ml_backend__mlds_to_managed__V_28_28, ml_backend__mlds_to_managed__OutlineArgs_14, ((MR_Box) ((MR_Integer) 0)), &ml_backend__mlds_to_managed__conv0_STATE_VARIABLE_IO_29_29);
        }
#line 290 "mlds_to_managed.m"
        {
#line 290 "mlds_to_managed.m"
          ml_backend__mlds_to_managed__V_30_30 = ml_backend__mlds__mlds_get_prog_context_1_f_0(ml_backend__mlds_to_managed__Context_11);
        }
#line 398 "mlds_to_managed.m"
        {
#line 398 "mlds_to_managed.m"
          mercury__term__context_file_2_p_0(ml_backend__mlds_to_managed__V_30_30, &ml_backend__mlds_to_managed__File_90);
        }
#line 399 "mlds_to_managed.m"
        {
#line 399 "mlds_to_managed.m"
          mercury__term__context_line_2_p_0(ml_backend__mlds_to_managed__V_30_30, &ml_backend__mlds_to_managed__Line_91);
        }
#line 400 "mlds_to_managed.m"
        {
#line 400 "mlds_to_managed.m"
          backend_libs__c_util__set_line_num_5_p_0(ml_backend__mlds_to_managed__Globals_7, ml_backend__mlds_to_managed__File_90, ml_backend__mlds_to_managed__Line_91);
        }
#line 291 "mlds_to_managed.m"
        {
#line 291 "mlds_to_managed.m"
          mercury__io__write_string_3_p_0(ml_backend__mlds_to_managed__Code_16);
        }
#line 292 "mlds_to_managed.m"
        {
#line 292 "mlds_to_managed.m"
          mercury__io__nl_2_p_0();
        }
#line 405 "mlds_to_managed.m"
        {
#line 405 "mlds_to_managed.m"
          backend_libs__c_util__reset_line_num_3_p_0(ml_backend__mlds_to_managed__Globals_7);
        }
#line 294 "mlds_to_managed.m"
        {
#line 294 "mlds_to_managed.m"
          ml_backend__mlds_to_managed__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 294 "mlds_to_managed.m"
          MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_35_35, 0) = ((MR_Box) (&ml_backend__mlds_to_managed_scalar_common_3[4]));
#line 294 "mlds_to_managed.m"
          MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_35_35, 1) = ((MR_Box) (ml_backend__mlds_to_managed__write_statement_6_p_0_2));
#line 294 "mlds_to_managed.m"
          MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_35_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 294 "mlds_to_managed.m"
          MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_35_35, 3) = ((MR_Box) (ml_backend__mlds_to_managed__DataRep_8));
#line 294 "mlds_to_managed.m"
        }
#line 294 "mlds_to_managed.m"
        {
#line 294 "mlds_to_managed.m"
          mercury__list__foldl_4_p_2(ml_backend__mlds_to_managed__TypeCtorInfo_71_71, ml_backend__mlds_to_managed__TypeCtorInfo_72_72, ml_backend__mlds_to_managed__V_35_35, ml_backend__mlds_to_managed__OutlineArgs_14, ((MR_Box) ((MR_Integer) 0)), &ml_backend__mlds_to_managed__conv1_STATE_VARIABLE_IO_26);
        }
#line 289 "mlds_to_managed.m"
      }
#line 295 "mlds_to_managed.m"
    else
#line 303 "mlds_to_managed.m"
      {
#line 303 "mlds_to_managed.m"
        MR_Word ml_backend__mlds_to_managed__Defns_17;
#line 303 "mlds_to_managed.m"
        MR_Word ml_backend__mlds_to_managed__Statements_18;

#line 296 "mlds_to_managed.m"
        ml_backend__mlds_to_managed__succeeded = ((MR_tag((MR_Word) ml_backend__mlds_to_managed__Statement_10)) == (MR_mktag((MR_Integer) 0)));
#line 296 "mlds_to_managed.m"
        if (ml_backend__mlds_to_managed__succeeded)
#line 296 "mlds_to_managed.m"
          {
#line 296 "mlds_to_managed.m"
            ml_backend__mlds_to_managed__Defns_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__Statement_10, (MR_Integer) 0)));
#line 296 "mlds_to_managed.m"
            ml_backend__mlds_to_managed__Statements_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__Statement_10, (MR_Integer) 1)));
#line 298 "mlds_to_managed.m"
            {
#line 298 "mlds_to_managed.m"
              MR_Word ml_backend__mlds_to_managed__V_38_38;
#line 298 "mlds_to_managed.m"
              MR_Word ml_backend__mlds_to_managed__V_43_43;

#line 298 "mlds_to_managed.m"
              {
#line 298 "mlds_to_managed.m"
                ml_backend__mlds_to_managed__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 298 "mlds_to_managed.m"
                MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_38_38, 0) = ((MR_Box) (&ml_backend__mlds_to_managed_scalar_common_3[5]));
#line 298 "mlds_to_managed.m"
                MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_38_38, 1) = ((MR_Box) (ml_backend__mlds_to_managed__write_statement_6_p_0_3));
#line 298 "mlds_to_managed.m"
                MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_38_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 298 "mlds_to_managed.m"
                MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_38_38, 3) = ((MR_Box) (ml_backend__mlds_to_managed__DataRep_8));
#line 298 "mlds_to_managed.m"
              }
#line 298 "mlds_to_managed.m"
              {
#line 298 "mlds_to_managed.m"
                mercury__io__write_list_5_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0, ml_backend__mlds_to_managed__Defns_17, (MR_String) "", ml_backend__mlds_to_managed__V_38_38);
              }
#line 299 "mlds_to_managed.m"
              {
#line 299 "mlds_to_managed.m"
                mercury__io__write_string_3_p_0((MR_String) "{\n");
              }
#line 300 "mlds_to_managed.m"
              {
#line 300 "mlds_to_managed.m"
                ml_backend__mlds_to_managed__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 300 "mlds_to_managed.m"
                MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_43_43, 0) = ((MR_Box) (&ml_backend__mlds_to_managed_scalar_common_7[0]));
#line 300 "mlds_to_managed.m"
                MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_43_43, 1) = ((MR_Box) (ml_backend__mlds_to_managed__write_statement_6_p_0_4));
#line 300 "mlds_to_managed.m"
                MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_43_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 300 "mlds_to_managed.m"
                MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_43_43, 3) = ((MR_Box) (ml_backend__mlds_to_managed__Globals_7));
#line 300 "mlds_to_managed.m"
                MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_43_43, 4) = ((MR_Box) (ml_backend__mlds_to_managed__DataRep_8));
#line 300 "mlds_to_managed.m"
                MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_43_43, 5) = ((MR_Box) (ml_backend__mlds_to_managed__Args_9));
#line 300 "mlds_to_managed.m"
              }
#line 300 "mlds_to_managed.m"
              {
#line 300 "mlds_to_managed.m"
                mercury__io__write_list_5_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0, ml_backend__mlds_to_managed__Statements_18, (MR_String) "", ml_backend__mlds_to_managed__V_43_43);
              }
#line 302 "mlds_to_managed.m"
              {
#line 302 "mlds_to_managed.m"
                mercury__io__write_string_3_p_0((MR_String) "\n}\n");
#line 302 "mlds_to_managed.m"
                return;
              }
#line 298 "mlds_to_managed.m"
            }
#line 296 "mlds_to_managed.m"
          }
#line 296 "mlds_to_managed.m"
        else
#line 313 "mlds_to_managed.m"
          {
#line 313 "mlds_to_managed.m"
            MR_Word ml_backend__mlds_to_managed__Rvals_19;

#line 304 "mlds_to_managed.m"
            ml_backend__mlds_to_managed__succeeded = ((((MR_tag((MR_Word) ml_backend__mlds_to_managed__Statement_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_managed__Statement_10, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 304 "mlds_to_managed.m"
            if (ml_backend__mlds_to_managed__succeeded)
#line 304 "mlds_to_managed.m"
              {
#line 304 "mlds_to_managed.m"
                ml_backend__mlds_to_managed__Rvals_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_managed__Statement_10, (MR_Integer) 1)));
#line 310 "mlds_to_managed.m"
                {
#line 310 "mlds_to_managed.m"
                  MR_Word ml_backend__mlds_to_managed__Rval_20;
#line 306 "mlds_to_managed.m"
                  MR_Word ml_backend__mlds_to_managed__V_47_47;

#line 306 "mlds_to_managed.m"
                  ml_backend__mlds_to_managed__succeeded = ((MR_tag((MR_Word) ml_backend__mlds_to_managed__Rvals_19)) == (MR_mktag((MR_Integer) 1)));
#line 306 "mlds_to_managed.m"
                  if (ml_backend__mlds_to_managed__succeeded)
#line 306 "mlds_to_managed.m"
                    {
#line 306 "mlds_to_managed.m"
                      ml_backend__mlds_to_managed__Rval_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_managed__Rvals_19, (MR_Integer) 0)));
#line 306 "mlds_to_managed.m"
                      ml_backend__mlds_to_managed__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_managed__Rvals_19, (MR_Integer) 1)));
#line 306 "mlds_to_managed.m"
                      ml_backend__mlds_to_managed__succeeded = (ml_backend__mlds_to_managed__V_47_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 306 "mlds_to_managed.m"
                    }
#line 310 "mlds_to_managed.m"
                  if (ml_backend__mlds_to_managed__succeeded)
#line 307 "mlds_to_managed.m"
                    {
#line 307 "mlds_to_managed.m"
                      {
#line 307 "mlds_to_managed.m"
                        mercury__io__write_string_3_p_0((MR_String) "return ");
                      }
#line 308 "mlds_to_managed.m"
                      {
#line 308 "mlds_to_managed.m"
                        ml_backend__mlds_to_managed__write_rval_4_p_0(ml_backend__mlds_to_managed__DataRep_8, ml_backend__mlds_to_managed__Rval_20);
                      }
#line 309 "mlds_to_managed.m"
                      {
#line 309 "mlds_to_managed.m"
                        mercury__io__write_string_3_p_0((MR_String) ";\n");
#line 309 "mlds_to_managed.m"
                        return;
                      }
#line 307 "mlds_to_managed.m"
                    }
#line 310 "mlds_to_managed.m"
                  else
#line 311 "mlds_to_managed.m"
                    {
#line 311 "mlds_to_managed.m"
                      {
#line 311 "mlds_to_managed.m"
                        mercury__require__sorry_3_p_0((MR_String) "ml_backend.mlds_to_managed", (MR_String) "predicate \140ml_backend.mlds_to_managed.write_statement\'/6", (MR_String) "multiple return values");
#line 311 "mlds_to_managed.m"
                        return;
                      }
#line 311 "mlds_to_managed.m"
                    }
#line 310 "mlds_to_managed.m"
                }
#line 304 "mlds_to_managed.m"
              }
#line 304 "mlds_to_managed.m"
            else
#line 320 "mlds_to_managed.m"
              {
#line 320 "mlds_to_managed.m"
                MR_Word ml_backend__mlds_to_managed__LVal_21;
#line 320 "mlds_to_managed.m"
                MR_Word ml_backend__mlds_to_managed__RVal_22;
#line 314 "mlds_to_managed.m"
                MR_Word ml_backend__mlds_to_managed__V_56_56;

#line 314 "mlds_to_managed.m"
                ml_backend__mlds_to_managed__succeeded = ((((MR_tag((MR_Word) ml_backend__mlds_to_managed__Statement_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_managed__Statement_10, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 314 "mlds_to_managed.m"
                if (ml_backend__mlds_to_managed__succeeded)
#line 314 "mlds_to_managed.m"
                  {
#line 314 "mlds_to_managed.m"
                    ml_backend__mlds_to_managed__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__mlds_to_managed__Statement_10, (MR_Integer) 1)));
#line 314 "mlds_to_managed.m"
                    ml_backend__mlds_to_managed__succeeded = ((MR_tag((MR_Word) ml_backend__mlds_to_managed__V_56_56)) == (MR_mktag((MR_Integer) 2)));
#line 314 "mlds_to_managed.m"
                    if (ml_backend__mlds_to_managed__succeeded)
#line 314 "mlds_to_managed.m"
                      {
#line 314 "mlds_to_managed.m"
                        ml_backend__mlds_to_managed__LVal_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_managed__V_56_56, (MR_Integer) 0)));
#line 314 "mlds_to_managed.m"
                        ml_backend__mlds_to_managed__RVal_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_managed__V_56_56, (MR_Integer) 1)));
#line 314 "mlds_to_managed.m"
                      }
#line 314 "mlds_to_managed.m"
                  }
#line 320 "mlds_to_managed.m"
                if (ml_backend__mlds_to_managed__succeeded)
#line 316 "mlds_to_managed.m"
                  {
#line 316 "mlds_to_managed.m"
                    {
#line 316 "mlds_to_managed.m"
                      ml_backend__mlds_to_managed__write_lval_4_p_0(ml_backend__mlds_to_managed__DataRep_8, ml_backend__mlds_to_managed__LVal_21);
                    }
#line 317 "mlds_to_managed.m"
                    {
#line 317 "mlds_to_managed.m"
                      mercury__io__write_string_3_p_0((MR_String) " = ");
                    }
#line 318 "mlds_to_managed.m"
                    {
#line 318 "mlds_to_managed.m"
                      ml_backend__mlds_to_managed__write_rval_4_p_0(ml_backend__mlds_to_managed__DataRep_8, ml_backend__mlds_to_managed__RVal_22);
                    }
#line 319 "mlds_to_managed.m"
                    {
#line 319 "mlds_to_managed.m"
                      mercury__io__write_string_3_p_0((MR_String) ";\n");
#line 319 "mlds_to_managed.m"
                      return;
                    }
#line 316 "mlds_to_managed.m"
                  }
#line 320 "mlds_to_managed.m"
                else
#line 321 "mlds_to_managed.m"
                  {
#line 321 "mlds_to_managed.m"
                    MR_String ml_backend__mlds_to_managed__SFunctor_23;
#line 321 "mlds_to_managed.m"
                    MR_String ml_backend__mlds_to_managed__V_66_66;
#line 321 "mlds_to_managed.m"
                    MR_Integer ml_backend__mlds_to_managed___Arity_24;

#line 321 "mlds_to_managed.m"
                    {
#line 321 "mlds_to_managed.m"
                      mercury__deconstruct__functor_4_p_1((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0, ((MR_Box) (ml_backend__mlds_to_managed__Statement_10)), (MR_Integer) 1, &ml_backend__mlds_to_managed__SFunctor_23, &ml_backend__mlds_to_managed___Arity_24);
                    }
#line 322 "mlds_to_managed.m"
                    {
#line 322 "mlds_to_managed.m"
                      ml_backend__mlds_to_managed__V_66_66 = mercury__string__f_43_43_2_f_0((MR_String) "foreign code output for ", ml_backend__mlds_to_managed__SFunctor_23);
                    }
#line 322 "mlds_to_managed.m"
                    {
#line 322 "mlds_to_managed.m"
                      mercury__require__sorry_3_p_0((MR_String) "ml_backend.mlds_to_managed", (MR_String) "predicate \140ml_backend.mlds_to_managed.write_statement\'/6", ml_backend__mlds_to_managed__V_66_66);
#line 322 "mlds_to_managed.m"
                      return;
                    }
#line 321 "mlds_to_managed.m"
                  }
#line 320 "mlds_to_managed.m"
              }
#line 313 "mlds_to_managed.m"
          }
#line 303 "mlds_to_managed.m"
      }
#line 283 "mlds_to_managed.m"
  }
#line 280 "mlds_to_managed.m"
}

#line 267 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__generate_method_code_5_p_0_2(
#line 267 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__closure_arg,
#line 267 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_1,
#line 267 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_2,
#line 267 "mlds_to_managed.m"
  MR_Box * ml_backend__mlds_to_managed__wrapper_arg_3)
#line 267 "mlds_to_managed.m"
{
#line 267 "mlds_to_managed.m"
  {
#line 267 "mlds_to_managed.m"
    MR_Box ml_backend__mlds_to_managed__closure = ml_backend__mlds_to_managed__closure_arg;

#line 267 "mlds_to_managed.m"
    {
#line 267 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__write_input_arg_as_foreign_type_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__mlds_to_managed__wrapper_arg_1));
#line 267 "mlds_to_managed.m"
      return;
    }
#line 267 "mlds_to_managed.m"
  }
#line 267 "mlds_to_managed.m"
}

#line 243 "mlds_to_managed.m"
static MR_bool MR_CALL 
ml_backend__mlds_to_managed__generate_method_code_5_p_0_1(
#line 243 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__closure_arg)
#line 243 "mlds_to_managed.m"
{
#line 243 "mlds_to_managed.m"
  {
#line 243 "mlds_to_managed.m"
    MR_bool ml_backend__mlds_to_managed__succeeded;
#line 243 "mlds_to_managed.m"
    MR_Box ml_backend__mlds_to_managed__closure = ml_backend__mlds_to_managed__closure_arg;

#line 243 "mlds_to_managed.m"
    {
#line 243 "mlds_to_managed.m"
      return ml_backend__mlds_to_managed__succeeded = ml_backend__mlds_to_managed__IntroducedFrom__pred__generate_method_code__243__1_1_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__closure, (MR_Integer) 3))));
    }
#line 243 "mlds_to_managed.m"
    return ml_backend__mlds_to_managed__succeeded;
#line 243 "mlds_to_managed.m"
  }
#line 243 "mlds_to_managed.m"
}

#line 224 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__generate_method_code_5_p_0(
#line 224 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__Globals_6,
#line 224 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__DataRep_7,
#line 224 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__Defn_8)
#line 224 "mlds_to_managed.m"
{
#line 227 "mlds_to_managed.m"
  {
#line 227 "mlds_to_managed.m"
    MR_bool ml_backend__mlds_to_managed__succeeded;
#line 227 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__EntityName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__Defn_8, (MR_Integer) 0)));
#line 227 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__Entity_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__Defn_8, (MR_Integer) 3)));
#line 228 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed___Context_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__Defn_8, (MR_Integer) 1)));
#line 228 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed___DeclFlags_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__Defn_8, (MR_Integer) 2)));

#line 234 "mlds_to_managed.m"
    if (((MR_tag((MR_Word) ml_backend__mlds_to_managed__EntityName_10)) == (MR_mktag((MR_Integer) 1))))
#line 231 "mlds_to_managed.m"
      {
#line 231 "mlds_to_managed.m"
      }
#line 234 "mlds_to_managed.m"
    else
#line 234 "mlds_to_managed.m"
      if (((MR_tag((MR_Word) ml_backend__mlds_to_managed__EntityName_10)) == (MR_mktag((MR_Integer) 3))))
#line 230 "mlds_to_managed.m"
        {
#line 230 "mlds_to_managed.m"
        }
#line 234 "mlds_to_managed.m"
      else
#line 234 "mlds_to_managed.m"
        if (((MR_tag((MR_Word) ml_backend__mlds_to_managed__EntityName_10)) == (MR_mktag((MR_Integer) 2))))
#line 235 "mlds_to_managed.m"
          {
#line 235 "mlds_to_managed.m"
            MR_Word ml_backend__mlds_to_managed__PredLabel_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_managed__EntityName_10, (MR_Integer) 0)));
#line 235 "mlds_to_managed.m"
            MR_Integer ml_backend__mlds_to_managed__ProcId_19 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_managed__EntityName_10, (MR_Integer) 1)));
#line 235 "mlds_to_managed.m"
            MR_Word ml_backend__mlds_to_managed__MaybeSeqNum_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_managed__EntityName_10, (MR_Integer) 2)));
#line 235 "mlds_to_managed.m"
            MR_Word ml_backend__mlds_to_managed___PredId_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_managed__EntityName_10, (MR_Integer) 3)));
#line 275 "mlds_to_managed.m"
            MR_Word ml_backend__mlds_to_managed__Params_23;
#line 275 "mlds_to_managed.m"
            MR_Word ml_backend__mlds_to_managed__Statement_24;
#line 275 "mlds_to_managed.m"
            MR_Word ml_backend__mlds_to_managed__EnvVarNames_26;
#line 239 "mlds_to_managed.m"
            MR_Word ml_backend__mlds_to_managed__TypeCtorInfo_71_71;
#line 239 "mlds_to_managed.m"
            MR_Word ml_backend__mlds_to_managed__Langs_27;
#line 239 "mlds_to_managed.m"
            MR_Word ml_backend__mlds_to_managed__V_40_40;
#line 239 "mlds_to_managed.m"
            MR_Word ml_backend__mlds_to_managed__V_41_41;
#line 238 "mlds_to_managed.m"
            MR_Word ml_backend__mlds_to_managed__V_22_22;
#line 238 "mlds_to_managed.m"
            MR_Word ml_backend__mlds_to_managed___Attributes_25;

#line 238 "mlds_to_managed.m"
            ml_backend__mlds_to_managed__succeeded = ((MR_tag((MR_Word) ml_backend__mlds_to_managed__Entity_13)) == (MR_mktag((MR_Integer) 2)));
#line 238 "mlds_to_managed.m"
            if (ml_backend__mlds_to_managed__succeeded)
#line 238 "mlds_to_managed.m"
              {
#line 238 "mlds_to_managed.m"
                ml_backend__mlds_to_managed__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_managed__Entity_13, (MR_Integer) 0)));
#line 238 "mlds_to_managed.m"
                ml_backend__mlds_to_managed__Params_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_managed__Entity_13, (MR_Integer) 1)));
#line 238 "mlds_to_managed.m"
                ml_backend__mlds_to_managed__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_managed__Entity_13, (MR_Integer) 2)));
#line 238 "mlds_to_managed.m"
                ml_backend__mlds_to_managed___Attributes_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_managed__Entity_13, (MR_Integer) 3)));
#line 238 "mlds_to_managed.m"
                ml_backend__mlds_to_managed__EnvVarNames_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__mlds_to_managed__Entity_13, (MR_Integer) 4)));
#line 238 "mlds_to_managed.m"
                ml_backend__mlds_to_managed__succeeded = ((MR_tag((MR_Word) ml_backend__mlds_to_managed__V_40_40)) == (MR_mktag((MR_Integer) 1)));
#line 238 "mlds_to_managed.m"
                if (ml_backend__mlds_to_managed__succeeded)
#line 238 "mlds_to_managed.m"
                  {
#line 238 "mlds_to_managed.m"
                    ml_backend__mlds_to_managed__Statement_24 = (MR_Word) MR_body(((MR_Word) ml_backend__mlds_to_managed__V_40_40), (MR_Integer) 1);
#line 240 "mlds_to_managed.m"
                    {
#line 240 "mlds_to_managed.m"
                      ml_backend__ml_util__has_foreign_languages_2_p_0(ml_backend__mlds_to_managed__Statement_24, &ml_backend__mlds_to_managed__Langs_27);
                    }
#line 241 "mlds_to_managed.m"
                    ml_backend__mlds_to_managed__V_41_41 = (MR_Integer) 1;
#line 4480 "ml_backend.mlds_to_managed.c"
                    ml_backend__mlds_to_managed__TypeCtorInfo_71_71 = (MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0;
#line 241 "mlds_to_managed.m"
                    {
#line 241 "mlds_to_managed.m"
                      ml_backend__mlds_to_managed__succeeded = mercury__list__member_2_p_0(ml_backend__mlds_to_managed__TypeCtorInfo_71_71, ((MR_Box) (ml_backend__mlds_to_managed__V_41_41)), ml_backend__mlds_to_managed__Langs_27);
                    }
#line 238 "mlds_to_managed.m"
                  }
#line 238 "mlds_to_managed.m"
              }
#line 275 "mlds_to_managed.m"
            if (ml_backend__mlds_to_managed__succeeded)
#line 243 "mlds_to_managed.m"
              {
#line 243 "mlds_to_managed.m"
                MR_Word ml_backend__mlds_to_managed__Inputs_28;
#line 243 "mlds_to_managed.m"
                MR_Word ml_backend__mlds_to_managed__Outputs_29;
#line 243 "mlds_to_managed.m"
                MR_Word ml_backend__mlds_to_managed__ReturnType_30;
#line 243 "mlds_to_managed.m"
                MR_String ml_backend__mlds_to_managed__Id_37;
#line 243 "mlds_to_managed.m"
                MR_Word ml_backend__mlds_to_managed__V_42_42;
#line 243 "mlds_to_managed.m"
                MR_Word ml_backend__mlds_to_managed__V_61_61;

#line 243 "mlds_to_managed.m"
                {
#line 243 "mlds_to_managed.m"
                  ml_backend__mlds_to_managed__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 243 "mlds_to_managed.m"
                  MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_42_42, 0) = ((MR_Box) (&ml_backend__mlds_to_managed_scalar_common_2[2]));
#line 243 "mlds_to_managed.m"
                  MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_42_42, 1) = ((MR_Box) (ml_backend__mlds_to_managed__generate_method_code_5_p_0_1));
#line 243 "mlds_to_managed.m"
                  MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_42_42, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 243 "mlds_to_managed.m"
                  MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_42_42, 3) = ((MR_Box) (ml_backend__mlds_to_managed__EnvVarNames_26));
#line 243 "mlds_to_managed.m"
                }
#line 243 "mlds_to_managed.m"
                {
#line 243 "mlds_to_managed.m"
                  mercury__require__expect_4_p_0(ml_backend__mlds_to_managed__V_42_42, (MR_String) "ml_backend.mlds_to_managed", (MR_String) "predicate \140ml_backend.mlds_to_managed.generate_method_code\'/5", (MR_String) "EnvVarNames");
                }
#line 244 "mlds_to_managed.m"
                ml_backend__mlds_to_managed__Inputs_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__Params_23, (MR_Integer) 0)));
#line 244 "mlds_to_managed.m"
                ml_backend__mlds_to_managed__Outputs_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__Params_23, (MR_Integer) 1)));
#line 248 "mlds_to_managed.m"
                if ((ml_backend__mlds_to_managed__Outputs_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 246 "mlds_to_managed.m"
                  ml_backend__mlds_to_managed__ReturnType_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 248 "mlds_to_managed.m"
                else
#line 248 "mlds_to_managed.m"
                  {
#line 248 "mlds_to_managed.m"
                    MR_Word ml_backend__mlds_to_managed__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_managed__Outputs_29, (MR_Integer) 1)));
#line 248 "mlds_to_managed.m"
                    MR_Word ml_backend__mlds_to_managed__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_managed__Outputs_29, (MR_Integer) 0)));

#line 248 "mlds_to_managed.m"
                    if ((ml_backend__mlds_to_managed__V_77_77 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 249 "mlds_to_managed.m"
                      {
#line 249 "mlds_to_managed.m"
                        MR_Word ml_backend__mlds_to_managed__SimpleType_33;
#line 249 "mlds_to_managed.m"
                        MR_Word ml_backend__mlds_to_managed__V_51_51;
#line 250 "mlds_to_managed.m"
                        MR_Word ml_backend__mlds_to_managed__V_32_32;

#line 250 "mlds_to_managed.m"
                        {
#line 250 "mlds_to_managed.m"
                          ml_backend__mlds_to_managed__V_51_51 = ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_f_0(ml_backend__mlds_to_managed__DataRep_7, ml_backend__mlds_to_managed__V_78_78);
                        }
#line 250 "mlds_to_managed.m"
                        ml_backend__mlds_to_managed__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_51_51, (MR_Integer) 0)));
#line 250 "mlds_to_managed.m"
                        ml_backend__mlds_to_managed__SimpleType_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_51_51, (MR_Integer) 1)));
#line 252 "mlds_to_managed.m"
                        {
#line 252 "mlds_to_managed.m"
                          ml_backend__mlds_to_managed__ReturnType_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 252 "mlds_to_managed.m"
                          MR_hl_field(MR_mktag(1), ml_backend__mlds_to_managed__ReturnType_30, 0) = ((MR_Box) (ml_backend__mlds_to_managed__SimpleType_33));
#line 252 "mlds_to_managed.m"
                        }
#line 249 "mlds_to_managed.m"
                      }
#line 248 "mlds_to_managed.m"
                    else
#line 254 "mlds_to_managed.m"
                      {
#line 256 "mlds_to_managed.m"
                        {
#line 256 "mlds_to_managed.m"
                          mercury__require__sorry_3_p_0((MR_String) "ml_backend.mlds_to_managed", (MR_String) "predicate \140ml_backend.mlds_to_managed.generate_method_code\'/5", (MR_String) "multiple return values");
#line 256 "mlds_to_managed.m"
                          return;
                        }
#line 254 "mlds_to_managed.m"
                      }
#line 248 "mlds_to_managed.m"
                  }
#line 259 "mlds_to_managed.m"
                {
#line 259 "mlds_to_managed.m"
                  ml_backend__mlds_to_il__predlabel_to_csharp_id_4_p_0(ml_backend__mlds_to_managed__PredLabel_18, ml_backend__mlds_to_managed__ProcId_19, ml_backend__mlds_to_managed__MaybeSeqNum_20, &ml_backend__mlds_to_managed__Id_37);
                }
#line 260 "mlds_to_managed.m"
                {
#line 260 "mlds_to_managed.m"
                  mercury__io__write_string_3_p_0((MR_String) "public static ");
                }
#line 594 "mlds_to_managed.m"
                if ((ml_backend__mlds_to_managed__ReturnType_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 594 "mlds_to_managed.m"
                  {
#line 595 "mlds_to_managed.m"
                    {
#line 595 "mlds_to_managed.m"
                      mercury__io__write_string_3_p_0((MR_String) "void");
                    }
#line 594 "mlds_to_managed.m"
                  }
#line 594 "mlds_to_managed.m"
                else
#line 596 "mlds_to_managed.m"
                  {
#line 596 "mlds_to_managed.m"
                    MR_Word ml_backend__mlds_to_managed__T_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_managed__ReturnType_30, (MR_Integer) 0)));

#line 597 "mlds_to_managed.m"
                    {
#line 597 "mlds_to_managed.m"
                      ml_backend__mlds_to_managed__write_il_simple_type_as_foreign_type_3_p_0(ml_backend__mlds_to_managed__T_84);
                    }
#line 596 "mlds_to_managed.m"
                  }
#line 263 "mlds_to_managed.m"
                {
#line 263 "mlds_to_managed.m"
                  mercury__io__write_string_3_p_0((MR_String) " ");
                }
#line 265 "mlds_to_managed.m"
                {
#line 265 "mlds_to_managed.m"
                  mercury__io__write_string_3_p_0(ml_backend__mlds_to_managed__Id_37);
                }
#line 266 "mlds_to_managed.m"
                {
#line 266 "mlds_to_managed.m"
                  mercury__io__write_string_3_p_0((MR_String) "(");
                }
#line 267 "mlds_to_managed.m"
                {
#line 267 "mlds_to_managed.m"
                  ml_backend__mlds_to_managed__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 267 "mlds_to_managed.m"
                  MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_61_61, 0) = ((MR_Box) (&ml_backend__mlds_to_managed_scalar_common_3[3]));
#line 267 "mlds_to_managed.m"
                  MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_61_61, 1) = ((MR_Box) (ml_backend__mlds_to_managed__generate_method_code_5_p_0_2));
#line 267 "mlds_to_managed.m"
                  MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_61_61, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 267 "mlds_to_managed.m"
                  MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_61_61, 3) = ((MR_Box) (ml_backend__mlds_to_managed__DataRep_7));
#line 267 "mlds_to_managed.m"
                }
#line 267 "mlds_to_managed.m"
                {
#line 267 "mlds_to_managed.m"
                  mercury__io__write_list_5_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0, ml_backend__mlds_to_managed__Inputs_28, (MR_String) ", ", ml_backend__mlds_to_managed__V_61_61);
                }
#line 269 "mlds_to_managed.m"
                {
#line 269 "mlds_to_managed.m"
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
#line 270 "mlds_to_managed.m"
                {
#line 270 "mlds_to_managed.m"
                  mercury__io__nl_2_p_0();
                }
#line 272 "mlds_to_managed.m"
                {
#line 272 "mlds_to_managed.m"
                  mercury__io__write_string_3_p_0((MR_String) "{\n");
                }
#line 273 "mlds_to_managed.m"
                {
#line 273 "mlds_to_managed.m"
                  ml_backend__mlds_to_managed__write_statement_6_p_0(ml_backend__mlds_to_managed__Globals_6, ml_backend__mlds_to_managed__DataRep_7, ml_backend__mlds_to_managed__Inputs_28, ml_backend__mlds_to_managed__Statement_24);
                }
#line 274 "mlds_to_managed.m"
                {
#line 274 "mlds_to_managed.m"
                  mercury__io__write_string_3_p_0((MR_String) "}\n");
#line 274 "mlds_to_managed.m"
                  return;
                }
#line 243 "mlds_to_managed.m"
              }
#line 275 "mlds_to_managed.m"
            else
#line 274 "mlds_to_managed.m"
              {
#line 274 "mlds_to_managed.m"
              }
#line 235 "mlds_to_managed.m"
          }
#line 234 "mlds_to_managed.m"
        else
#line 232 "mlds_to_managed.m"
          {
#line 232 "mlds_to_managed.m"
          }
#line 227 "mlds_to_managed.m"
  }
#line 224 "mlds_to_managed.m"
}

#line 211 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__generate_foreign_code_4_p_0_1(
#line 211 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__closure_arg,
#line 211 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_1,
#line 211 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_2,
#line 211 "mlds_to_managed.m"
  MR_Box * ml_backend__mlds_to_managed__wrapper_arg_3)
#line 211 "mlds_to_managed.m"
{
#line 211 "mlds_to_managed.m"
  {
#line 211 "mlds_to_managed.m"
    MR_Box ml_backend__mlds_to_managed__closure = ml_backend__mlds_to_managed__closure_arg;

#line 211 "mlds_to_managed.m"
    {
#line 211 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__IntroducedFrom__pred__generate_foreign_code__211__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__mlds_to_managed__wrapper_arg_1));
#line 211 "mlds_to_managed.m"
      return;
    }
#line 211 "mlds_to_managed.m"
  }
#line 211 "mlds_to_managed.m"
}

#line 204 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__generate_foreign_code_4_p_0(
#line 204 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__Globals_5,
#line 204 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__ForeignCode_6)
#line 204 "mlds_to_managed.m"
{
#line 207 "mlds_to_managed.m"
  {
#line 207 "mlds_to_managed.m"
    MR_bool ml_backend__mlds_to_managed__succeeded;
#line 207 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__TypeCtorInfo_38_38 = (MR_Word) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_user_foreign_code_0;
#line 207 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__RevBodyCode_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__ForeignCode_6, (MR_Integer) 2)));
#line 207 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__BodyCode_12;
#line 207 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__V_19_19;
#line 208 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed___RevHeaderCode_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__ForeignCode_6, (MR_Integer) 0)));
#line 208 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed___RevImports_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__ForeignCode_6, (MR_Integer) 1)));
#line 208 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed___ExportDefns_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__ForeignCode_6, (MR_Integer) 3)));

#line 210 "mlds_to_managed.m"
    {
#line 210 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__BodyCode_12 = mercury__list__reverse_1_f_0(ml_backend__mlds_to_managed__TypeCtorInfo_38_38, ml_backend__mlds_to_managed__RevBodyCode_10);
    }
#line 211 "mlds_to_managed.m"
    {
#line 211 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 211 "mlds_to_managed.m"
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_19_19, 0) = ((MR_Box) (&ml_backend__mlds_to_managed_scalar_common_3[2]));
#line 211 "mlds_to_managed.m"
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_19_19, 1) = ((MR_Box) (ml_backend__mlds_to_managed__generate_foreign_code_4_p_0_1));
#line 211 "mlds_to_managed.m"
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 211 "mlds_to_managed.m"
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_19_19, 3) = ((MR_Box) (ml_backend__mlds_to_managed__Globals_5));
#line 211 "mlds_to_managed.m"
    }
#line 211 "mlds_to_managed.m"
    {
#line 211 "mlds_to_managed.m"
      mercury__io__write_list_5_p_0(ml_backend__mlds_to_managed__TypeCtorInfo_38_38, ml_backend__mlds_to_managed__BodyCode_12, (MR_String) "\n", ml_backend__mlds_to_managed__V_19_19);
#line 211 "mlds_to_managed.m"
      return;
    }
#line 207 "mlds_to_managed.m"
  }
#line 204 "mlds_to_managed.m"
}

#line 186 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__generate_namespace_details_3_p_0(
#line 186 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__ClassName_4,
#line 186 "mlds_to_managed.m"
  MR_String * ml_backend__mlds_to_managed__NameSpaceFmtStr_5,
#line 186 "mlds_to_managed.m"
  MR_Word * ml_backend__mlds_to_managed__Namespace_6)
#line 186 "mlds_to_managed.m"
{
#line 189 "mlds_to_managed.m"
  {
#line 189 "mlds_to_managed.m"
    MR_bool ml_backend__mlds_to_managed__succeeded;
#line 189 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__Namespace0_7;
#line 200 "mlds_to_managed.m"
    MR_String ml_backend__mlds_to_managed__Head_8;
#line 200 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__Tail_9;
#line 198 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__V_10_10;

#line 195 "mlds_to_managed.m"
    *ml_backend__mlds_to_managed__NameSpaceFmtStr_5 = (MR_String) "namespace \100%s {";
#line 197 "mlds_to_managed.m"
    {
#line 197 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__Namespace0_7 = ml_backend__ilds__get_class_namespace_1_f_0(ml_backend__mlds_to_managed__ClassName_4);
    }
#line 198 "mlds_to_managed.m"
    {
#line 198 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__V_10_10 = mercury__list__reverse_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ml_backend__mlds_to_managed__Namespace0_7);
    }
#line 198 "mlds_to_managed.m"
    ml_backend__mlds_to_managed__succeeded = ((MR_tag((MR_Word) ml_backend__mlds_to_managed__V_10_10)) == (MR_mktag((MR_Integer) 1)));
#line 198 "mlds_to_managed.m"
    if (ml_backend__mlds_to_managed__succeeded)
#line 198 "mlds_to_managed.m"
      {
#line 198 "mlds_to_managed.m"
        ml_backend__mlds_to_managed__Head_8 = ((MR_String) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_managed__V_10_10, (MR_Integer) 0)));
#line 198 "mlds_to_managed.m"
        ml_backend__mlds_to_managed__Tail_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__mlds_to_managed__V_10_10, (MR_Integer) 1)));
#line 199 "mlds_to_managed.m"
        {
#line 199 "mlds_to_managed.m"
          MR_Word ml_backend__mlds_to_managed__V_11_11;
#line 199 "mlds_to_managed.m"
          MR_String ml_backend__mlds_to_managed__V_12_12;

#line 199 "mlds_to_managed.m"
          {
#line 199 "mlds_to_managed.m"
            ml_backend__mlds_to_managed__V_12_12 = mercury__string__f_43_43_2_f_0(ml_backend__mlds_to_managed__Head_8, (MR_String) "__csharp_code");
          }
#line 199 "mlds_to_managed.m"
          {
#line 199 "mlds_to_managed.m"
            ml_backend__mlds_to_managed__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 199 "mlds_to_managed.m"
            MR_hl_field(MR_mktag(1), ml_backend__mlds_to_managed__V_11_11, 0) = ((MR_Box) (ml_backend__mlds_to_managed__V_12_12));
#line 199 "mlds_to_managed.m"
            MR_hl_field(MR_mktag(1), ml_backend__mlds_to_managed__V_11_11, 1) = ((MR_Box) (ml_backend__mlds_to_managed__Tail_9));
#line 199 "mlds_to_managed.m"
          }
#line 199 "mlds_to_managed.m"
          {
#line 199 "mlds_to_managed.m"
            *ml_backend__mlds_to_managed__Namespace_6 = mercury__list__reverse_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ml_backend__mlds_to_managed__V_11_11);
          }
#line 199 "mlds_to_managed.m"
        }
#line 198 "mlds_to_managed.m"
      }
#line 198 "mlds_to_managed.m"
    else
#line 201 "mlds_to_managed.m"
      *ml_backend__mlds_to_managed__Namespace_6 = ml_backend__mlds_to_managed__Namespace0_7;
#line 189 "mlds_to_managed.m"
  }
#line 186 "mlds_to_managed.m"
}

#line 172 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__generate_foreign_header_code_4_p_0_1(
#line 172 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__closure_arg,
#line 172 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_1,
#line 172 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_2,
#line 172 "mlds_to_managed.m"
  MR_Box * ml_backend__mlds_to_managed__wrapper_arg_3)
#line 172 "mlds_to_managed.m"
{
#line 172 "mlds_to_managed.m"
  {
#line 172 "mlds_to_managed.m"
    MR_Box ml_backend__mlds_to_managed__closure = ml_backend__mlds_to_managed__closure_arg;

#line 172 "mlds_to_managed.m"
    {
#line 172 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__IntroducedFrom__pred__generate_foreign_header_code__172__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__mlds_to_managed__wrapper_arg_1));
#line 172 "mlds_to_managed.m"
      return;
    }
#line 172 "mlds_to_managed.m"
  }
#line 172 "mlds_to_managed.m"
}

#line 164 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__generate_foreign_header_code_4_p_0(
#line 164 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__Globals_5,
#line 164 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__ForeignCode_6)
#line 164 "mlds_to_managed.m"
{
#line 167 "mlds_to_managed.m"
  {
#line 167 "mlds_to_managed.m"
    MR_bool ml_backend__mlds_to_managed__succeeded;
#line 167 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__TypeCtorInfo_41_41 = (MR_Word) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0;
#line 167 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__RevHeaderCode_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__ForeignCode_6, (MR_Integer) 0)));
#line 167 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__HeaderCode_12;
#line 167 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__V_20_20;
#line 168 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed___RevImports_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__ForeignCode_6, (MR_Integer) 1)));
#line 168 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed___RevBodyCode_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__ForeignCode_6, (MR_Integer) 2)));
#line 168 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed___ExportDefns_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__ForeignCode_6, (MR_Integer) 3)));

#line 171 "mlds_to_managed.m"
    {
#line 171 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__HeaderCode_12 = mercury__list__reverse_1_f_0(ml_backend__mlds_to_managed__TypeCtorInfo_41_41, ml_backend__mlds_to_managed__RevHeaderCode_8);
    }
#line 172 "mlds_to_managed.m"
    {
#line 172 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 172 "mlds_to_managed.m"
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_20_20, 0) = ((MR_Box) (&ml_backend__mlds_to_managed_scalar_common_3[1]));
#line 172 "mlds_to_managed.m"
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_20_20, 1) = ((MR_Box) (ml_backend__mlds_to_managed__generate_foreign_header_code_4_p_0_1));
#line 172 "mlds_to_managed.m"
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_20_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 172 "mlds_to_managed.m"
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_20_20, 3) = ((MR_Box) (ml_backend__mlds_to_managed__Globals_5));
#line 172 "mlds_to_managed.m"
    }
#line 172 "mlds_to_managed.m"
    {
#line 172 "mlds_to_managed.m"
      mercury__io__write_list_5_p_0(ml_backend__mlds_to_managed__TypeCtorInfo_41_41, ml_backend__mlds_to_managed__HeaderCode_12, (MR_String) "\n", ml_backend__mlds_to_managed__V_20_20);
#line 172 "mlds_to_managed.m"
      return;
    }
#line 167 "mlds_to_managed.m"
  }
#line 164 "mlds_to_managed.m"
}

#line 140 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__output_csharp_header_code_3_p_0(
#line 140 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__Globals_4)
#line 140 "mlds_to_managed.m"
{
#line 142 "mlds_to_managed.m"
  {
#line 142 "mlds_to_managed.m"
    MR_bool ml_backend__mlds_to_managed__succeeded;
#line 142 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__DataRep_6;
#line 142 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__SignAssembly_8;
#line 144 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__V_11_11;
#line 144 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__V_7_7;

#line 143 "mlds_to_managed.m"
    {
#line 143 "mlds_to_managed.m"
      ml_backend__mlds_to_il__get_il_data_rep_2_p_0(ml_backend__mlds_to_managed__Globals_4, &ml_backend__mlds_to_managed__DataRep_6);
    }
#line 144 "mlds_to_managed.m"
    ml_backend__mlds_to_managed__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__DataRep_6, (MR_Integer) 0)));
#line 144 "mlds_to_managed.m"
    ml_backend__mlds_to_managed__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__DataRep_6, (MR_Integer) 1)));
#line 144 "mlds_to_managed.m"
    ml_backend__mlds_to_managed__succeeded = (ml_backend__mlds_to_managed__V_11_11 == (MR_Integer) 1);
#line 146 "mlds_to_managed.m"
    if (ml_backend__mlds_to_managed__succeeded)
#line 145 "mlds_to_managed.m"
      {
#line 145 "mlds_to_managed.m"
        {
#line 145 "mlds_to_managed.m"
          mercury__io__write_string_3_p_0((MR_String) "#define MR_HIGHLEVEL_DATA\n");
        }
#line 145 "mlds_to_managed.m"
      }
#line 146 "mlds_to_managed.m"
    else
#line 145 "mlds_to_managed.m"
      {
#line 145 "mlds_to_managed.m"
      }
#line 153 "mlds_to_managed.m"
    {
#line 153 "mlds_to_managed.m"
      mercury__io__write_string_3_p_0((MR_String) "using mercury;\n\n");
    }
#line 155 "mlds_to_managed.m"
    {
#line 155 "mlds_to_managed.m"
      libs__globals__lookup_bool_option_3_p_0(ml_backend__mlds_to_managed__Globals_4, (MR_Integer) 155, &ml_backend__mlds_to_managed__SignAssembly_8);
    }
#line 160 "mlds_to_managed.m"
    if ((ml_backend__mlds_to_managed__SignAssembly_8 == (MR_Integer) 0))
#line 161 "mlds_to_managed.m"
      {
#line 161 "mlds_to_managed.m"
      }
#line 160 "mlds_to_managed.m"
    else
#line 157 "mlds_to_managed.m"
      {
#line 158 "mlds_to_managed.m"
        {
#line 158 "mlds_to_managed.m"
          mercury__io__write_string_3_p_0((MR_String) "[assembly:System.Reflection.AssemblyKeyFileAttribute(\"mercury.sn\")]\n");
#line 158 "mlds_to_managed.m"
          return;
        }
#line 157 "mlds_to_managed.m"
      }
#line 142 "mlds_to_managed.m"
  }
#line 140 "mlds_to_managed.m"
}

#line 36 "mlds_to_managed.m"
void MR_CALL 
ml_backend__mlds_to_managed__output_src_end_3_p_0(
#line 36 "mlds_to_managed.m"
  MR_Word ml_backend__mlds_to_managed__ModuleName_4)
#line 36 "mlds_to_managed.m"
{
#line 133 "mlds_to_managed.m"
  {
#line 133 "mlds_to_managed.m"
    MR_bool ml_backend__mlds_to_managed__succeeded;

#line 134 "mlds_to_managed.m"
    {
#line 134 "mlds_to_managed.m"
      mercury__io__write_string_3_p_0((MR_String) "// End of module: ");
    }
#line 135 "mlds_to_managed.m"
    {
#line 135 "mlds_to_managed.m"
      parse_tree__prog_out__write_sym_name_3_p_0(ml_backend__mlds_to_managed__ModuleName_4);
    }
#line 136 "mlds_to_managed.m"
    {
#line 136 "mlds_to_managed.m"
      mercury__io__write_string_3_p_0((MR_String) ". \n");
#line 136 "mlds_to_managed.m"
      return;
    }
#line 133 "mlds_to_managed.m"
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
#line 121 "mlds_to_managed.m"
  {
#line 121 "mlds_to_managed.m"
    MR_bool ml_backend__mlds_to_managed__succeeded;
#line 121 "mlds_to_managed.m"
    MR_String ml_backend__mlds_to_managed__Version_6;
#line 121 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__V_9_9;
#line 121 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__V_12_12;
#line 121 "mlds_to_managed.m"
    MR_String ml_backend__mlds_to_managed__V_13_13;
#line 121 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__V_14_14;
#line 121 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__V_16_16;
#line 121 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__V_18_18;

#line 122 "mlds_to_managed.m"
    {
#line 122 "mlds_to_managed.m"
      mercury__library__version_1_p_0(&ml_backend__mlds_to_managed__Version_6);
    }
#line 125 "mlds_to_managed.m"
    {
#line 125 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__V_13_13 = mdbcomp__prim_data__sym_name_to_string_1_f_0(ml_backend__mlds_to_managed__ModuleName_4);
    }
#line 127 "mlds_to_managed.m"
    {
#line 127 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 127 "mlds_to_managed.m"
      MR_hl_field(MR_mktag(1), ml_backend__mlds_to_managed__V_18_18, 0) = ((MR_Box) (ml_backend__mlds_to_managed__Version_6));
#line 127 "mlds_to_managed.m"
      MR_hl_field(MR_mktag(1), ml_backend__mlds_to_managed__V_18_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_managed_scalar_common_1[2])));
#line 127 "mlds_to_managed.m"
    }
#line 126 "mlds_to_managed.m"
    {
#line 126 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 126 "mlds_to_managed.m"
      MR_hl_field(MR_mktag(1), ml_backend__mlds_to_managed__V_16_16, 0) = ((MR_Box) ((MR_String) "// Mercury compiler, version "));
#line 126 "mlds_to_managed.m"
      MR_hl_field(MR_mktag(1), ml_backend__mlds_to_managed__V_16_16, 1) = ((MR_Box) (ml_backend__mlds_to_managed__V_18_18));
#line 126 "mlds_to_managed.m"
    }
#line 125 "mlds_to_managed.m"
    {
#line 125 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 125 "mlds_to_managed.m"
      MR_hl_field(MR_mktag(1), ml_backend__mlds_to_managed__V_14_14, 0) = ((MR_Box) ((MR_String) ".m\' by the\n"));
#line 125 "mlds_to_managed.m"
      MR_hl_field(MR_mktag(1), ml_backend__mlds_to_managed__V_14_14, 1) = ((MR_Box) (ml_backend__mlds_to_managed__V_16_16));
#line 125 "mlds_to_managed.m"
    }
#line 124 "mlds_to_managed.m"
    {
#line 124 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 124 "mlds_to_managed.m"
      MR_hl_field(MR_mktag(1), ml_backend__mlds_to_managed__V_12_12, 0) = ((MR_Box) (ml_backend__mlds_to_managed__V_13_13));
#line 124 "mlds_to_managed.m"
      MR_hl_field(MR_mktag(1), ml_backend__mlds_to_managed__V_12_12, 1) = ((MR_Box) (ml_backend__mlds_to_managed__V_14_14));
#line 124 "mlds_to_managed.m"
    }
#line 123 "mlds_to_managed.m"
    {
#line 123 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 123 "mlds_to_managed.m"
      MR_hl_field(MR_mktag(1), ml_backend__mlds_to_managed__V_9_9, 0) = ((MR_Box) ((MR_String) "//\n// Automatically generated from \140"));
#line 123 "mlds_to_managed.m"
      MR_hl_field(MR_mktag(1), ml_backend__mlds_to_managed__V_9_9, 1) = ((MR_Box) (ml_backend__mlds_to_managed__V_12_12));
#line 123 "mlds_to_managed.m"
    }
#line 123 "mlds_to_managed.m"
    {
#line 123 "mlds_to_managed.m"
      mercury__io__write_strings_3_p_0(ml_backend__mlds_to_managed__V_9_9);
#line 123 "mlds_to_managed.m"
      return;
    }
#line 121 "mlds_to_managed.m"
  }
#line 32 "mlds_to_managed.m"
}

#line 111 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__output_csharp_code_4_p_0_5(
#line 111 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__closure_arg,
#line 111 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_1,
#line 111 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_2,
#line 111 "mlds_to_managed.m"
  MR_Box * ml_backend__mlds_to_managed__wrapper_arg_3)
#line 111 "mlds_to_managed.m"
{
#line 111 "mlds_to_managed.m"
  {
#line 111 "mlds_to_managed.m"
    MR_Box ml_backend__mlds_to_managed__closure = ml_backend__mlds_to_managed__closure_arg;

#line 111 "mlds_to_managed.m"
    {
#line 111 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__IntroducedFrom__pred__output_csharp_code__111__1_3_p_0(((MR_String) ml_backend__mlds_to_managed__wrapper_arg_1));
#line 111 "mlds_to_managed.m"
      return;
    }
#line 111 "mlds_to_managed.m"
  }
#line 111 "mlds_to_managed.m"
}

#line 106 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__output_csharp_code_4_p_0_4(
#line 106 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__closure_arg,
#line 106 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_1,
#line 106 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_2,
#line 106 "mlds_to_managed.m"
  MR_Box * ml_backend__mlds_to_managed__wrapper_arg_3)
#line 106 "mlds_to_managed.m"
{
#line 106 "mlds_to_managed.m"
  {
#line 106 "mlds_to_managed.m"
    MR_Box ml_backend__mlds_to_managed__closure = ml_backend__mlds_to_managed__closure_arg;

#line 106 "mlds_to_managed.m"
    {
#line 106 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__generate_method_code_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__mlds_to_managed__wrapper_arg_1));
#line 106 "mlds_to_managed.m"
      return;
    }
#line 106 "mlds_to_managed.m"
  }
#line 106 "mlds_to_managed.m"
}

#line 91 "mlds_to_managed.m"
static void MR_CALL 
ml_backend__mlds_to_managed__output_csharp_code_4_p_0_3(
#line 91 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__closure_arg,
#line 91 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_1,
#line 91 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__wrapper_arg_2,
#line 91 "mlds_to_managed.m"
  MR_Box * ml_backend__mlds_to_managed__wrapper_arg_3)
#line 91 "mlds_to_managed.m"
{
#line 91 "mlds_to_managed.m"
  {
#line 91 "mlds_to_managed.m"
    MR_Box ml_backend__mlds_to_managed__closure = ml_backend__mlds_to_managed__closure_arg;

#line 91 "mlds_to_managed.m"
    {
#line 91 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__IntroducedFrom__pred__output_csharp_code__91__1_4_p_0(((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__closure, (MR_Integer) 3))), ((MR_String) ml_backend__mlds_to_managed__wrapper_arg_1));
#line 91 "mlds_to_managed.m"
      return;
    }
#line 91 "mlds_to_managed.m"
  }
#line 91 "mlds_to_managed.m"
}

#line 74 "mlds_to_managed.m"
static MR_bool MR_CALL 
ml_backend__mlds_to_managed__output_csharp_code_4_p_0_2(
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

#line 72 "mlds_to_managed.m"
static MR_bool MR_CALL 
ml_backend__mlds_to_managed__output_csharp_code_4_p_0_1(
#line 72 "mlds_to_managed.m"
  MR_Box ml_backend__mlds_to_managed__closure_arg)
#line 72 "mlds_to_managed.m"
{
#line 72 "mlds_to_managed.m"
  {
#line 72 "mlds_to_managed.m"
    MR_bool ml_backend__mlds_to_managed__succeeded;
#line 72 "mlds_to_managed.m"
    MR_Box ml_backend__mlds_to_managed__closure = ml_backend__mlds_to_managed__closure_arg;

#line 72 "mlds_to_managed.m"
    {
#line 72 "mlds_to_managed.m"
      return ml_backend__mlds_to_managed__succeeded = ml_backend__mlds_to_managed__IntroducedFrom__pred__output_csharp_code__72__1_1_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__closure, (MR_Integer) 3))));
    }
#line 72 "mlds_to_managed.m"
    return ml_backend__mlds_to_managed__succeeded;
#line 72 "mlds_to_managed.m"
  }
#line 72 "mlds_to_managed.m"
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
#line 67 "mlds_to_managed.m"
  {
#line 67 "mlds_to_managed.m"
    MR_bool ml_backend__mlds_to_managed__succeeded;
#line 67 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__TypeCtorInfo_93_93;
#line 67 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__TypeCtorInfo_96_96;
#line 67 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__MLDS_6, (MR_Integer) 0)));
#line 67 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__AllForeignCode_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__MLDS_6, (MR_Integer) 1)));
#line 67 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__GlobalData_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__MLDS_6, (MR_Integer) 3)));
#line 67 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__Defns0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__MLDS_6, (MR_Integer) 4)));
#line 67 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__ScalarCellGroupMap_16;
#line 67 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__VectorCellGroupMap_17;
#line 67 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__GlobalDefns_19;
#line 67 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__Defns_20;
#line 67 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__ClassName_21;
#line 67 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__ForeignCode_22;
#line 67 "mlds_to_managed.m"
    MR_String ml_backend__mlds_to_managed__NameSpaceFmtStr_23;
#line 67 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__Namespace_24;
#line 67 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__DataRep_26;
#line 67 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__V_30_30;
#line 67 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__V_34_34;
#line 67 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__V_39_39;
#line 67 "mlds_to_managed.m"
    MR_String ml_backend__mlds_to_managed__V_40_40;
#line 67 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__V_45_45;
#line 67 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__V_56_56;
#line 67 "mlds_to_managed.m"
    MR_String ml_backend__mlds_to_managed__V_58_58;
#line 67 "mlds_to_managed.m"
    MR_String ml_backend__mlds_to_managed__V_60_60;
#line 67 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed__V_66_66;
#line 68 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed___Imports_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__MLDS_6, (MR_Integer) 2)));
#line 68 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed___InitPreds_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__MLDS_6, (MR_Integer) 5)));
#line 68 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed___FinalPreds_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__MLDS_6, (MR_Integer) 6)));
#line 68 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed___ExportedEnums_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__MLDS_6, (MR_Integer) 7)));
#line 70 "mlds_to_managed.m"
    MR_Word ml_backend__mlds_to_managed___AllocIdMap_18;
#line 86 "mlds_to_managed.m"
    MR_Box ml_backend__mlds_to_managed__conv0_ForeignCode_22;
#line 106 "mlds_to_managed.m"
    MR_Box ml_backend__mlds_to_managed__conv1_STATE_VARIABLE_IO_67_67;

#line 70 "mlds_to_managed.m"
    {
#line 70 "mlds_to_managed.m"
      ml_backend__ml_global_data__ml_global_data_get_all_global_defns_5_p_0(ml_backend__mlds_to_managed__GlobalData_11, &ml_backend__mlds_to_managed__ScalarCellGroupMap_16, &ml_backend__mlds_to_managed__VectorCellGroupMap_17, &ml_backend__mlds_to_managed___AllocIdMap_18, &ml_backend__mlds_to_managed__GlobalDefns_19);
    }
#line 72 "mlds_to_managed.m"
    {
#line 72 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 72 "mlds_to_managed.m"
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_30_30, 0) = ((MR_Box) (&ml_backend__mlds_to_managed_scalar_common_2[0]));
#line 72 "mlds_to_managed.m"
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_30_30, 1) = ((MR_Box) (ml_backend__mlds_to_managed__output_csharp_code_4_p_0_1));
#line 72 "mlds_to_managed.m"
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 72 "mlds_to_managed.m"
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_30_30, 3) = ((MR_Box) (ml_backend__mlds_to_managed__ScalarCellGroupMap_16));
#line 72 "mlds_to_managed.m"
    }
#line 72 "mlds_to_managed.m"
    {
#line 72 "mlds_to_managed.m"
      mercury__require__expect_4_p_0(ml_backend__mlds_to_managed__V_30_30, (MR_String) "ml_backend.mlds_to_managed", (MR_String) "predicate \140ml_backend.mlds_to_managed.output_csharp_code\'/4", (MR_String) "nonempty ScalarCellGroupMap");
    }
#line 74 "mlds_to_managed.m"
    {
#line 74 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 74 "mlds_to_managed.m"
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_34_34, 0) = ((MR_Box) (&ml_backend__mlds_to_managed_scalar_common_2[1]));
#line 74 "mlds_to_managed.m"
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_34_34, 1) = ((MR_Box) (ml_backend__mlds_to_managed__output_csharp_code_4_p_0_2));
#line 74 "mlds_to_managed.m"
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_34_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 74 "mlds_to_managed.m"
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_34_34, 3) = ((MR_Box) (ml_backend__mlds_to_managed__VectorCellGroupMap_17));
#line 74 "mlds_to_managed.m"
    }
#line 74 "mlds_to_managed.m"
    {
#line 74 "mlds_to_managed.m"
      mercury__require__expect_4_p_0(ml_backend__mlds_to_managed__V_34_34, (MR_String) "ml_backend.mlds_to_managed", (MR_String) "predicate \140ml_backend.mlds_to_managed.output_csharp_code\'/4", (MR_String) "nonempty VectorCellGroupMap");
    }
#line 5445 "ml_backend.mlds_to_managed.c"
    ml_backend__mlds_to_managed__TypeCtorInfo_93_93 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0;
#line 76 "mlds_to_managed.m"
    {
#line 76 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__Defns_20 = mercury__list__f_43_43_2_f_0(ml_backend__mlds_to_managed__TypeCtorInfo_93_93, ml_backend__mlds_to_managed__GlobalDefns_19, ml_backend__mlds_to_managed__Defns0_12);
    }
#line 78 "mlds_to_managed.m"
    {
#line 78 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__output_src_start_3_p_0(ml_backend__mlds_to_managed__ModuleName_8);
    }
#line 80 "mlds_to_managed.m"
    {
#line 80 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__V_39_39 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__mlds_to_managed__ModuleName_8);
    }
#line 80 "mlds_to_managed.m"
    {
#line 80 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__V_40_40 = ml_backend__mlds__wrapper_class_name_0_f_0();
    }
#line 80 "mlds_to_managed.m"
    {
#line 80 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__ClassName_21 = ml_backend__mlds_to_il__class_name_2_f_0(ml_backend__mlds_to_managed__V_39_39, ml_backend__mlds_to_managed__V_40_40);
    }
#line 83 "mlds_to_managed.m"
    {
#line 83 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__output_csharp_header_code_3_p_0(ml_backend__mlds_to_managed__Globals_5);
    }
#line 86 "mlds_to_managed.m"
    {
#line 86 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__conv0_ForeignCode_22 = mercury__map__lookup_2_f_0((MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_foreign_code_0, ml_backend__mlds_to_managed__AllForeignCode_9, ((MR_Box) ((MR_Integer) 1)));
    }
#line 86 "mlds_to_managed.m"
    ml_backend__mlds_to_managed__ForeignCode_22 = ((MR_Word) ml_backend__mlds_to_managed__conv0_ForeignCode_22);
#line 87 "mlds_to_managed.m"
    {
#line 87 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__generate_foreign_header_code_4_p_0(ml_backend__mlds_to_managed__Globals_5, ml_backend__mlds_to_managed__ForeignCode_22);
    }
#line 90 "mlds_to_managed.m"
    {
#line 90 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__generate_namespace_details_3_p_0(ml_backend__mlds_to_managed__ClassName_21, &ml_backend__mlds_to_managed__NameSpaceFmtStr_23, &ml_backend__mlds_to_managed__Namespace_24);
    }
#line 91 "mlds_to_managed.m"
    {
#line 91 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 91 "mlds_to_managed.m"
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_45_45, 0) = ((MR_Box) (&ml_backend__mlds_to_managed_scalar_common_3[0]));
#line 91 "mlds_to_managed.m"
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_45_45, 1) = ((MR_Box) (ml_backend__mlds_to_managed__output_csharp_code_4_p_0_3));
#line 91 "mlds_to_managed.m"
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_45_45, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 91 "mlds_to_managed.m"
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_45_45, 3) = ((MR_Box) (ml_backend__mlds_to_managed__NameSpaceFmtStr_23));
#line 91 "mlds_to_managed.m"
    }
#line 5508 "ml_backend.mlds_to_managed.c"
    ml_backend__mlds_to_managed__TypeCtorInfo_96_96 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 91 "mlds_to_managed.m"
    {
#line 91 "mlds_to_managed.m"
      mercury__io__write_list_5_p_0(ml_backend__mlds_to_managed__TypeCtorInfo_96_96, ml_backend__mlds_to_managed__Namespace_24, (MR_String) "\n", ml_backend__mlds_to_managed__V_45_45);
    }
#line 96 "mlds_to_managed.m"
    {
#line 96 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__V_60_60 = ml_backend__mlds__wrapper_class_name_0_f_0();
    }
#line 96 "mlds_to_managed.m"
    {
#line 96 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__V_58_58 = mercury__string__f_43_43_2_f_0((MR_String) "\npublic class ", ml_backend__mlds_to_managed__V_60_60);
    }
#line 96 "mlds_to_managed.m"
    {
#line 96 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 96 "mlds_to_managed.m"
      MR_hl_field(MR_mktag(1), ml_backend__mlds_to_managed__V_56_56, 0) = ((MR_Box) (ml_backend__mlds_to_managed__V_58_58));
#line 96 "mlds_to_managed.m"
      MR_hl_field(MR_mktag(1), ml_backend__mlds_to_managed__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_managed_scalar_common_1[3])));
#line 96 "mlds_to_managed.m"
    }
#line 96 "mlds_to_managed.m"
    {
#line 96 "mlds_to_managed.m"
      mercury__io__write_strings_3_p_0(ml_backend__mlds_to_managed__V_56_56);
    }
#line 99 "mlds_to_managed.m"
    {
#line 99 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__generate_foreign_code_4_p_0(ml_backend__mlds_to_managed__Globals_5, ml_backend__mlds_to_managed__ForeignCode_22);
    }
#line 101 "mlds_to_managed.m"
    {
#line 101 "mlds_to_managed.m"
      mercury__io__nl_2_p_0();
    }
#line 105 "mlds_to_managed.m"
    {
#line 105 "mlds_to_managed.m"
      ml_backend__mlds_to_il__get_il_data_rep_2_p_0(ml_backend__mlds_to_managed__Globals_5, &ml_backend__mlds_to_managed__DataRep_26);
    }
#line 106 "mlds_to_managed.m"
    {
#line 106 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 106 "mlds_to_managed.m"
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_66_66, 0) = ((MR_Box) (&ml_backend__mlds_to_managed_scalar_common_4[0]));
#line 106 "mlds_to_managed.m"
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_66_66, 1) = ((MR_Box) (ml_backend__mlds_to_managed__output_csharp_code_4_p_0_4));
#line 106 "mlds_to_managed.m"
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_66_66, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 106 "mlds_to_managed.m"
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_66_66, 3) = ((MR_Box) (ml_backend__mlds_to_managed__Globals_5));
#line 106 "mlds_to_managed.m"
      MR_hl_field(MR_mktag(0), ml_backend__mlds_to_managed__V_66_66, 4) = ((MR_Box) (ml_backend__mlds_to_managed__DataRep_26));
#line 106 "mlds_to_managed.m"
    }
#line 106 "mlds_to_managed.m"
    {
#line 106 "mlds_to_managed.m"
      mercury__list__foldl_4_p_2(ml_backend__mlds_to_managed__TypeCtorInfo_93_93, (MR_Word) &mercury__io__io__type_ctor_info_state_0, ml_backend__mlds_to_managed__V_66_66, ml_backend__mlds_to_managed__Defns_20, ((MR_Box) ((MR_Integer) 0)), &ml_backend__mlds_to_managed__conv1_STATE_VARIABLE_IO_67_67);
    }
#line 108 "mlds_to_managed.m"
    {
#line 108 "mlds_to_managed.m"
      mercury__io__write_string_3_p_0((MR_String) "};\n");
    }
#line 111 "mlds_to_managed.m"
    {
#line 111 "mlds_to_managed.m"
      mercury__io__write_list_5_p_0(ml_backend__mlds_to_managed__TypeCtorInfo_96_96, ml_backend__mlds_to_managed__Namespace_24, (MR_String) "\n", (MR_Word) &ml_backend__mlds_to_managed_scalar_common_6[0]);
    }
#line 115 "mlds_to_managed.m"
    {
#line 115 "mlds_to_managed.m"
      mercury__io__nl_2_p_0();
    }
#line 117 "mlds_to_managed.m"
    {
#line 117 "mlds_to_managed.m"
      ml_backend__mlds_to_managed__output_src_end_3_p_0(ml_backend__mlds_to_managed__ModuleName_8);
#line 117 "mlds_to_managed.m"
      return;
    }
#line 67 "mlds_to_managed.m"
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
