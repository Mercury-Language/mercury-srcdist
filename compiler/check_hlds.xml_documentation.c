/*
** Automatically generated from `xml_documentation.m'
** by the Mercury compiler,
** version rotd-2017-07-24
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


/* :- module check_hlds.xml_documentation. */
/* :- implementation. */

/*
INIT mercury__check_hlds__xml_documentation__init
ENDINIT
*/

#include "check_hlds.xml_documentation.mih"


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
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "int.mih"
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
#include "term_to_xml.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
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
#include "parse_tree.source_file_map.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__xml_documentation__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__xml_documentation__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__xml_documentation__list__pti_list_1__plain_term_to_xml__type_ctor_info_xml_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__xml_documentation__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__xml_documentation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__xml_documentation__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__xml_documentation__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__xml_documentation__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_Integer check_hlds__xml_documentation__check_hlds__xml_documentation__functor_number_map_comments_0[1];

static const MR_FA_TypeInfo_Struct2 check_hlds__xml_documentation__tree234__ti_tree234_2builtin__type_ctor_info_int_0check_hlds__xml_documentation__type_ctor_info_line_type_0;

static const MR_NotagFunctorDesc check_hlds__xml_documentation__check_hlds__xml_documentation__notag_functor_desc_comments_0;

static const MR_DuFunctorDesc check_hlds__xml_documentation__check_hlds__xml_documentation__du_functor_desc_line_type_0_0;

static const MR_PseudoTypeInfo check_hlds__xml_documentation__check_hlds__xml_documentation__field_types_line_type_0_1[1];

static const MR_DuFunctorDesc check_hlds__xml_documentation__check_hlds__xml_documentation__du_functor_desc_line_type_0_1;

static const MR_PseudoTypeInfo check_hlds__xml_documentation__check_hlds__xml_documentation__field_types_line_type_0_2[1];

static const MR_DuFunctorDesc check_hlds__xml_documentation__check_hlds__xml_documentation__du_functor_desc_line_type_0_2;

static const MR_DuFunctorDesc check_hlds__xml_documentation__check_hlds__xml_documentation__du_functor_desc_line_type_0_3;

static const MR_DuFunctorDescPtr check_hlds__xml_documentation__check_hlds__xml_documentation__du_stag_ordered_line_type_0_0[2];

static const MR_DuFunctorDescPtr check_hlds__xml_documentation__check_hlds__xml_documentation__du_stag_ordered_line_type_0_1[1];

static const MR_DuFunctorDescPtr check_hlds__xml_documentation__check_hlds__xml_documentation__du_stag_ordered_line_type_0_2[1];

static const MR_DuPtagLayout check_hlds__xml_documentation__check_hlds__xml_documentation__du_ptag_ordered_line_type_0[3];

static const MR_DuFunctorDescPtr check_hlds__xml_documentation__check_hlds__xml_documentation__du_name_ordered_line_type_0[4];

static const MR_Integer check_hlds__xml_documentation__check_hlds__xml_documentation__functor_number_map_line_type_0[4];

static const MR_PseudoTypeInfo check_hlds__xml_documentation__check_hlds__xml_documentation__field_types_module_info_xml_doc_0_0[3];

static const MR_DuFunctorDesc check_hlds__xml_documentation__check_hlds__xml_documentation__du_functor_desc_module_info_xml_doc_0_0;

static const MR_DuFunctorDescPtr check_hlds__xml_documentation__check_hlds__xml_documentation__du_stag_ordered_module_info_xml_doc_0_0[1];

static const MR_DuPtagLayout check_hlds__xml_documentation__check_hlds__xml_documentation__du_ptag_ordered_module_info_xml_doc_0[1];

static const MR_DuFunctorDescPtr check_hlds__xml_documentation__check_hlds__xml_documentation__du_name_ordered_module_info_xml_doc_0[1];

static const MR_Integer check_hlds__xml_documentation__check_hlds__xml_documentation__functor_number_map_module_info_xml_doc_0[1];

static MR_Word MR_CALL 
check_hlds__xml_documentation__IntroducedFrom__func__class_methods_to_xml__815__1_2_f_0(
  MR_Word check_hlds__xml_documentation__PredTable_6,
  MR_Word check_hlds__xml_documentation__LambdaHeadVar__1_15);

static void MR_CALL 
check_hlds__xml_documentation__ClassMethod_for_term_to_xml__xmlable____check_hlds__xml_documentation__module_info_xml_doc__arity0______term_to_xml__to_xml_1_1_f_0_4(
  MR_Box check_hlds__xml_documentation__closure_arg,
  MR_Box check_hlds__xml_documentation__wrapper_arg_1,
  MR_Box check_hlds__xml_documentation__wrapper_arg_2,
  MR_Box check_hlds__xml_documentation__wrapper_arg_3,
  MR_Box * check_hlds__xml_documentation__wrapper_arg_4);

static void MR_CALL 
check_hlds__xml_documentation__ClassMethod_for_term_to_xml__xmlable____check_hlds__xml_documentation__module_info_xml_doc__arity0______term_to_xml__to_xml_1_1_f_0_3(
  MR_Box check_hlds__xml_documentation__closure_arg,
  MR_Box check_hlds__xml_documentation__wrapper_arg_1,
  MR_Box check_hlds__xml_documentation__wrapper_arg_2,
  MR_Box check_hlds__xml_documentation__wrapper_arg_3,
  MR_Box * check_hlds__xml_documentation__wrapper_arg_4);

static void MR_CALL 
check_hlds__xml_documentation__ClassMethod_for_term_to_xml__xmlable____check_hlds__xml_documentation__module_info_xml_doc__arity0______term_to_xml__to_xml_1_1_f_0_2(
  MR_Box check_hlds__xml_documentation__closure_arg,
  MR_Box check_hlds__xml_documentation__wrapper_arg_1,
  MR_Box check_hlds__xml_documentation__wrapper_arg_2,
  MR_Box check_hlds__xml_documentation__wrapper_arg_3,
  MR_Box * check_hlds__xml_documentation__wrapper_arg_4);

static void MR_CALL 
check_hlds__xml_documentation__ClassMethod_for_term_to_xml__xmlable____check_hlds__xml_documentation__module_info_xml_doc__arity0______term_to_xml__to_xml_1_1_f_0_1(
  MR_Box check_hlds__xml_documentation__closure_arg,
  MR_Box check_hlds__xml_documentation__wrapper_arg_1,
  MR_Box check_hlds__xml_documentation__wrapper_arg_2,
  MR_Box check_hlds__xml_documentation__wrapper_arg_3,
  MR_Box * check_hlds__xml_documentation__wrapper_arg_4);

static MR_Word MR_CALL 
check_hlds__xml_documentation__ClassMethod_for_term_to_xml__xmlable____check_hlds__xml_documentation__module_info_xml_doc__arity0______term_to_xml__to_xml_1_1_f_0(
  MR_Word check_hlds__xml_documentation__HeadVar__1_1);

static void MR_CALL 
check_hlds__xml_documentation____Compare____module_info_xml_doc_0_0(
  MR_Word * check_hlds__xml_documentation__HeadVar__1_1,
  MR_Word check_hlds__xml_documentation__HeadVar__2_2,
  MR_Word check_hlds__xml_documentation__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__xml_documentation____Unify____module_info_xml_doc_0_0(
  MR_Word check_hlds__xml_documentation__HeadVar__1_1,
  MR_Word check_hlds__xml_documentation__HeadVar__2_2);

static void MR_CALL 
check_hlds__xml_documentation____Compare____line_type_0_0(
  MR_Word * check_hlds__xml_documentation__HeadVar__1_1,
  MR_Word check_hlds__xml_documentation__HeadVar__2_2,
  MR_Word check_hlds__xml_documentation__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__xml_documentation____Unify____line_type_0_0(
  MR_Word check_hlds__xml_documentation__HeadVar__1_1,
  MR_Word check_hlds__xml_documentation__HeadVar__2_2);

static void MR_CALL 
check_hlds__xml_documentation____Compare____comments_0_0(
  MR_Word * check_hlds__xml_documentation__HeadVar__1_1,
  MR_Word check_hlds__xml_documentation__HeadVar__2_2,
  MR_Word check_hlds__xml_documentation__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__xml_documentation____Unify____comments_0_0(
  MR_Word check_hlds__xml_documentation__HeadVar__1_1,
  MR_Word check_hlds__xml_documentation__HeadVar__2_2);

static MR_Word MR_CALL 
check_hlds__xml_documentation__instance_visibility_to_xml_1_f_0(
  MR_Word check_hlds__xml_documentation__Status_3);

static MR_Word MR_CALL 
check_hlds__xml_documentation__mode_visibility_to_xml_1_f_0(
  MR_Word check_hlds__xml_documentation__Status_3);

static MR_Word MR_CALL 
check_hlds__xml_documentation__inst_visibility_to_xml_1_f_0(
  MR_Word check_hlds__xml_documentation__Status_3);

static MR_Box MR_CALL 
check_hlds__xml_documentation__prog_constraint_to_xml_2_f_0_1(
  MR_Box check_hlds__xml_documentation__closure_arg,
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

static MR_Word MR_CALL 
check_hlds__xml_documentation__prog_constraint_to_xml_2_f_0(
  MR_Word check_hlds__xml_documentation__TVarset_4,
  MR_Word check_hlds__xml_documentation__Constraint_5);

static MR_Box MR_CALL 
check_hlds__xml_documentation__fundep_to_xml_3_f_0_1(
  MR_Box check_hlds__xml_documentation__closure_arg,
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

static MR_Word MR_CALL 
check_hlds__xml_documentation__fundep_to_xml_3_f_0(
  MR_Word check_hlds__xml_documentation__TVarset_5,
  MR_Word check_hlds__xml_documentation__Vars_6,
  MR_Word check_hlds__xml_documentation__HeadVar__3_3);

static MR_Box MR_CALL 
check_hlds__xml_documentation__class_documentation_6_p_0_3(
  MR_Box check_hlds__xml_documentation__closure_arg,
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__xml_documentation__class_documentation_6_p_0_2(
  MR_Box check_hlds__xml_documentation__closure_arg,
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__xml_documentation__class_documentation_6_p_0_1(
  MR_Box check_hlds__xml_documentation__closure_arg,
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

static void MR_CALL 
check_hlds__xml_documentation__class_documentation_6_p_0(
  MR_Word check_hlds__xml_documentation__C_7,
  MR_Word check_hlds__xml_documentation__PredTable_8,
  MR_Word check_hlds__xml_documentation__HeadVar__3_3,
  MR_Word check_hlds__xml_documentation__ClassDefn_11,
  MR_Word check_hlds__xml_documentation__STATE_VARIABLE_Xml_0_27,
  MR_Word * check_hlds__xml_documentation__STATE_VARIABLE_Xml_28);

static MR_Word MR_CALL 
check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_120_109_108_95_108_105_115_116_95_95_104_111_52_95_95_91_49_44_32_50_93_95_48_3_f_0(
  MR_String check_hlds__xml_documentation__Tag_5,
  MR_Word check_hlds__xml_documentation__F_6,
  MR_Word check_hlds__xml_documentation__L_7);

static MR_Word MR_CALL 
check_hlds__xml_documentation__typeclass_visibility_to_xml_1_f_0(
  MR_Word check_hlds__xml_documentation__Status_3);

static MR_Box MR_CALL 
check_hlds__xml_documentation__class_methods_to_xml_3_f_0_3(
  MR_Box check_hlds__xml_documentation__closure_arg,
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__xml_documentation__class_methods_to_xml_3_f_0_2(
  MR_Box check_hlds__xml_documentation__closure_arg,
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__xml_documentation__class_methods_to_xml_3_f_0_1(
  MR_Box check_hlds__xml_documentation__closure_arg,
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

static MR_Word MR_CALL 
check_hlds__xml_documentation__class_methods_to_xml_3_f_0(
  MR_Word check_hlds__xml_documentation__C_5,
  MR_Word check_hlds__xml_documentation__PredTable_6,
  MR_Word check_hlds__xml_documentation__Methods_7);

static MR_Box MR_CALL 
check_hlds__xml_documentation__bound_inst_to_xml_2_f_0_1(
  MR_Box check_hlds__xml_documentation__closure_arg,
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

static MR_Word MR_CALL 
check_hlds__xml_documentation__bound_inst_to_xml_2_f_0(
  MR_Word check_hlds__xml_documentation__InstVarSet_4,
  MR_Word check_hlds__xml_documentation__HeadVar__2_2);

static MR_Word MR_CALL 
check_hlds__xml_documentation__cons_id_to_xml_1_f_0(
  MR_Word check_hlds__xml_documentation__HeadVar__1_1);

static MR_Word MR_CALL 
check_hlds__xml_documentation__tagged_char_2_f_0(
  MR_String check_hlds__xml_documentation__E_4,
  MR_Char check_hlds__xml_documentation__C_5);

static MR_Word MR_CALL 
check_hlds__xml_documentation__tagged_float_2_f_0(
  MR_String check_hlds__xml_documentation__E_4,
  MR_Float check_hlds__xml_documentation__F_5);

static MR_Word MR_CALL 
check_hlds__xml_documentation__tagged_int_2_f_0(
  MR_String check_hlds__xml_documentation__E_4,
  MR_Integer check_hlds__xml_documentation__I_5);

static MR_Word MR_CALL 
check_hlds__xml_documentation__arity_to_xml_1_f_0(
  MR_Integer check_hlds__xml_documentation__Arity_3);

static MR_Box MR_CALL 
check_hlds__xml_documentation__mer_inst_to_xml_2_f_0_1(
  MR_Box check_hlds__xml_documentation__closure_arg,
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

static MR_Word MR_CALL 
check_hlds__xml_documentation__mer_inst_to_xml_2_f_0(
  MR_Word check_hlds__xml_documentation__InstVarSet_4,
  MR_Word check_hlds__xml_documentation__Inst_5);

static MR_Word MR_CALL 
check_hlds__xml_documentation__tagged_string_2_f_0(
  MR_String check_hlds__xml_documentation__E_4,
  MR_String check_hlds__xml_documentation__S_5);

static MR_Box MR_CALL 
check_hlds__xml_documentation__inst_name_to_xml_2_f_0_1(
  MR_Box check_hlds__xml_documentation__closure_arg,
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

static MR_Word MR_CALL 
check_hlds__xml_documentation__inst_name_to_xml_2_f_0(
  MR_Word check_hlds__xml_documentation__InstVarSet_1,
  MR_Word check_hlds__xml_documentation__HeadVar__2_2);

static MR_Word MR_CALL 
check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_120_109_108_95_108_105_115_116_95_95_104_111_54_95_95_91_49_93_95_48_3_f_0(
  MR_String check_hlds__xml_documentation__Tag_5,
  MR_Word check_hlds__xml_documentation__F_6,
  MR_Word check_hlds__xml_documentation__L_7);

static MR_Box MR_CALL 
check_hlds__xml_documentation__mer_mode_to_xml_2_f_0_2(
  MR_Box check_hlds__xml_documentation__closure_arg,
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__xml_documentation__mer_mode_to_xml_2_f_0_1(
  MR_Box check_hlds__xml_documentation__closure_arg,
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

static MR_Word MR_CALL 
check_hlds__xml_documentation__mer_mode_to_xml_2_f_0(
  MR_Word check_hlds__xml_documentation__InstVarSet_4,
  MR_Word check_hlds__xml_documentation__Mode_5);

static void MR_CALL 
check_hlds__xml_documentation__pred_mode_documentation_5_p_0(
  MR_Word check_hlds__xml_documentation___C_6,
  MR_Integer check_hlds__xml_documentation___ProcId_7,
  MR_Word check_hlds__xml_documentation__ProcInfo_8,
  MR_Word check_hlds__xml_documentation__STATE_VARIABLE_Xml_0_15,
  MR_Word * check_hlds__xml_documentation__STATE_VARIABLE_Xml_16);

static MR_Box MR_CALL 
check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_109_111_100_101_95_100_111_99_117_109_101_110_116_97_116_105_111_110_95_95_91_49_44_32_50_93_95_48_5_p_0_1(
  MR_Box check_hlds__xml_documentation__closure_arg,
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

static void MR_CALL 
check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_109_111_100_101_95_100_111_99_117_109_101_110_116_97_116_105_111_110_95_95_91_49_44_32_50_93_95_48_5_p_0(
  MR_Word check_hlds__xml_documentation__ProcInfo_8,
  MR_Word check_hlds__xml_documentation__STATE_VARIABLE_Xml_0_15,
  MR_Word * check_hlds__xml_documentation__STATE_VARIABLE_Xml_16);

static void MR_CALL 
check_hlds__xml_documentation__pred_documentation_5_p_0(
  MR_Word check_hlds__xml_documentation__C_6,
  MR_Word check_hlds__xml_documentation___PredId_7,
  MR_Word check_hlds__xml_documentation__PredInfo_8,
  MR_Word check_hlds__xml_documentation__STATE_VARIABLE_Xml_0_14,
  MR_Word * check_hlds__xml_documentation__STATE_VARIABLE_Xml_15);

static void MR_CALL 
check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_100_111_99_117_109_101_110_116_97_116_105_111_110_95_95_91_50_93_95_48_5_p_0(
  MR_Word check_hlds__xml_documentation__C_6,
  MR_Word check_hlds__xml_documentation__PredInfo_8,
  MR_Word check_hlds__xml_documentation__STATE_VARIABLE_Xml_0_14,
  MR_Word * check_hlds__xml_documentation__STATE_VARIABLE_Xml_15);

static void MR_CALL 
check_hlds__xml_documentation__predicate_documentation_2_f_0_3(
  MR_Box check_hlds__xml_documentation__closure_arg,
  MR_Box check_hlds__xml_documentation__wrapper_arg_1,
  MR_Box check_hlds__xml_documentation__wrapper_arg_2,
  MR_Box check_hlds__xml_documentation__wrapper_arg_3,
  MR_Box * check_hlds__xml_documentation__wrapper_arg_4);

static MR_Box MR_CALL 
check_hlds__xml_documentation__predicate_documentation_2_f_0_2(
  MR_Box check_hlds__xml_documentation__closure_arg,
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__xml_documentation__predicate_documentation_2_f_0_1(
  MR_Box check_hlds__xml_documentation__closure_arg,
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

static MR_Word MR_CALL 
check_hlds__xml_documentation__predicate_documentation_2_f_0(
  MR_Word check_hlds__xml_documentation__C_4,
  MR_Word check_hlds__xml_documentation__PredInfo_5);

static MR_Word MR_CALL 
check_hlds__xml_documentation__pred_visibility_to_xml_1_f_0(
  MR_Word check_hlds__xml_documentation__Status_3);

static MR_Box MR_CALL 
check_hlds__xml_documentation__prog_constraints_to_xml_2_f_0_1(
  MR_Box check_hlds__xml_documentation__closure_arg,
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

static MR_Word MR_CALL 
check_hlds__xml_documentation__prog_constraints_to_xml_2_f_0(
  MR_Word check_hlds__xml_documentation__TVarset_4,
  MR_Word check_hlds__xml_documentation__HeadVar__2_2);

static MR_Word MR_CALL 
check_hlds__xml_documentation__constructor_arg_to_xml_3_f_0(
  MR_Word check_hlds__xml_documentation__C_5,
  MR_Word check_hlds__xml_documentation__TVarset_6,
  MR_Word check_hlds__xml_documentation__CtorArg_7);

static MR_Box MR_CALL 
check_hlds__xml_documentation__constructor_to_xml_3_f_0_3(
  MR_Box check_hlds__xml_documentation__closure_arg,
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__xml_documentation__constructor_to_xml_3_f_0_2(
  MR_Box check_hlds__xml_documentation__closure_arg,
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__xml_documentation__constructor_to_xml_3_f_0_1(
  MR_Box check_hlds__xml_documentation__closure_arg,
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

static MR_Word MR_CALL 
check_hlds__xml_documentation__constructor_to_xml_3_f_0(
  MR_Word check_hlds__xml_documentation__C_5,
  MR_Word check_hlds__xml_documentation__TVarset_6,
  MR_Word check_hlds__xml_documentation__Ctor_7);

static MR_Word MR_CALL 
check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_120_109_108_95_108_105_115_116_95_95_104_111_53_95_95_91_49_93_95_48_3_f_0(
  MR_String check_hlds__xml_documentation__Tag_5,
  MR_Word check_hlds__xml_documentation__F_6,
  MR_Word check_hlds__xml_documentation__L_7);

static MR_Word MR_CALL 
check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_120_109_108_95_108_105_115_116_95_95_104_111_51_95_95_91_49_93_95_48_3_f_0(
  MR_String check_hlds__xml_documentation__Tag_5,
  MR_Word check_hlds__xml_documentation__F_6,
  MR_Word check_hlds__xml_documentation__L_7);

static MR_Box MR_CALL 
check_hlds__xml_documentation__type_documentation_5_p_0_1(
  MR_Box check_hlds__xml_documentation__closure_arg,
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

static void MR_CALL 
check_hlds__xml_documentation__type_documentation_5_p_0(
  MR_Word check_hlds__xml_documentation__C_6,
  MR_Word check_hlds__xml_documentation__HeadVar__2_2,
  MR_Word check_hlds__xml_documentation__TypeDefn_9,
  MR_Word check_hlds__xml_documentation__STATE_VARIABLE_Xmls_0_25,
  MR_Word * check_hlds__xml_documentation__STATE_VARIABLE_Xmls_26);

static MR_Word MR_CALL 
check_hlds__xml_documentation__prog_context_to_xml_1_f_0(
  MR_Word check_hlds__xml_documentation__HeadVar__1_1);

static MR_Box MR_CALL 
check_hlds__xml_documentation__type_body_to_xml_3_f_0_1(
  MR_Box check_hlds__xml_documentation__closure_arg,
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

static MR_Word MR_CALL 
check_hlds__xml_documentation__type_body_to_xml_3_f_0(
  MR_Word check_hlds__xml_documentation__C_5,
  MR_Word check_hlds__xml_documentation__TVarSet_6,
  MR_Word check_hlds__xml_documentation__TypeDefnBody_7);

static MR_Box MR_CALL 
check_hlds__xml_documentation__mer_type_to_xml_2_f_0_4(
  MR_Box check_hlds__xml_documentation__closure_arg,
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__xml_documentation__mer_type_to_xml_2_f_0_3(
  MR_Box check_hlds__xml_documentation__closure_arg,
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__xml_documentation__mer_type_to_xml_2_f_0_2(
  MR_Box check_hlds__xml_documentation__closure_arg,
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__xml_documentation__mer_type_to_xml_2_f_0_1(
  MR_Box check_hlds__xml_documentation__closure_arg,
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

static MR_Word MR_CALL 
check_hlds__xml_documentation__mer_type_to_xml_2_f_0(
  MR_Word check_hlds__xml_documentation__TVarset_1,
  MR_Word check_hlds__xml_documentation__HeadVar__2_2);

static MR_Word MR_CALL 
check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_120_109_108_95_108_105_115_116_95_95_104_111_49_95_95_91_49_93_95_48_3_f_0(
  MR_String check_hlds__xml_documentation__Tag_5,
  MR_Word check_hlds__xml_documentation__F_6,
  MR_Word check_hlds__xml_documentation__L_7);

static MR_Word MR_CALL 
check_hlds__xml_documentation__nyi_1_f_0(
  MR_String check_hlds__xml_documentation__Tag_3);

static MR_String MR_CALL 
check_hlds__xml_documentation__sym_name_and_arity_to_id_3_f_0(
  MR_String check_hlds__xml_documentation__Prefix_5,
  MR_Word check_hlds__xml_documentation__Name_6,
  MR_Integer check_hlds__xml_documentation__Arity_7);

static MR_Word MR_CALL 
check_hlds__xml_documentation__type_param_to_xml_2_f_0(
  MR_Word check_hlds__xml_documentation__TVarset_4,
  MR_Word check_hlds__xml_documentation__TVar_5);

static void MR_CALL 
check_hlds__xml_documentation__maybe_add_import_documentation_5_p_0(
  MR_Word check_hlds__xml_documentation__BuiltinModuleNames_6,
  MR_Word check_hlds__xml_documentation__ModuleName_7,
  MR_Word check_hlds__xml_documentation__AvailEntry_8,
  MR_Word check_hlds__xml_documentation__STATE_VARIABLE_Xmls_0_17,
  MR_Word * check_hlds__xml_documentation__STATE_VARIABLE_Xmls_18);

static MR_Word MR_CALL 
check_hlds__xml_documentation__name_to_xml_1_f_0(
  MR_Word check_hlds__xml_documentation__HeadVar__1_1);

static MR_Word MR_CALL 
check_hlds__xml_documentation__maybe_add_comment_3_f_0(
  MR_Word check_hlds__xml_documentation__Comments_5,
  MR_Word check_hlds__xml_documentation__Context_6,
  MR_Word check_hlds__xml_documentation__Xml_7);

static MR_String MR_CALL 
check_hlds__xml_documentation__get_comment_backwards_2_f_0(
  MR_Word check_hlds__xml_documentation__Comments_4,
  MR_Integer check_hlds__xml_documentation__Line_5);

static MR_bool MR_CALL 
check_hlds__xml_documentation__is_not_comment_char_1_p_0(
  MR_Char check_hlds__xml_documentation__C_2);

static MR_String MR_CALL 
check_hlds__xml_documentation__get_comment_forwards_2_f_0(
  MR_Word check_hlds__xml_documentation__Comments_4,
  MR_Integer check_hlds__xml_documentation__Line_5);

static MR_bool MR_CALL 
check_hlds__xml_documentation__build_comments_5_p_0_2(
  MR_Box check_hlds__xml_documentation__closure_arg,
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

static MR_bool MR_CALL 
check_hlds__xml_documentation__build_comments_5_p_0_1(
  MR_Box check_hlds__xml_documentation__closure_arg,
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

static void MR_CALL 
check_hlds__xml_documentation__build_comments_5_p_0(
  MR_Word check_hlds__xml_documentation__S_6,
  MR_Word check_hlds__xml_documentation__HeadVar__2_2,
  MR_Word * check_hlds__xml_documentation__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__xml_documentation____Unify____comments_0_0_10001(
  MR_Box check_hlds__xml_documentation__wrapper_arg_1,
  MR_Box check_hlds__xml_documentation__wrapper_arg_2);

static void MR_CALL 
check_hlds__xml_documentation____Compare____comments_0_0_10001(
  MR_Box * check_hlds__xml_documentation__wrapper_arg_1,
  MR_Box check_hlds__xml_documentation__wrapper_arg_2,
  MR_Box check_hlds__xml_documentation__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__xml_documentation____Unify____line_type_0_0_10001(
  MR_Box check_hlds__xml_documentation__wrapper_arg_1,
  MR_Box check_hlds__xml_documentation__wrapper_arg_2);

static void MR_CALL 
check_hlds__xml_documentation____Compare____line_type_0_0_10001(
  MR_Box * check_hlds__xml_documentation__wrapper_arg_1,
  MR_Box check_hlds__xml_documentation__wrapper_arg_2,
  MR_Box check_hlds__xml_documentation__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__xml_documentation____Unify____module_info_xml_doc_0_0_10001(
  MR_Box check_hlds__xml_documentation__wrapper_arg_1,
  MR_Box check_hlds__xml_documentation__wrapper_arg_2);

static void MR_CALL 
check_hlds__xml_documentation____Compare____module_info_xml_doc_0_0_10001(
  MR_Box * check_hlds__xml_documentation__wrapper_arg_1,
  MR_Box check_hlds__xml_documentation__wrapper_arg_2,
  MR_Box check_hlds__xml_documentation__wrapper_arg_3);

static MR_Box MR_CALL 
check_hlds__xml_documentation__ClassMethod_for_term_to_xml__xmlable____check_hlds__xml_documentation__module_info_xml_doc__arity0______term_to_xml__to_xml_1_1_f_0_10001(
  MR_Box check_hlds__xml_documentation__closure_arg,
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);


static /* final */ const MR_Box check_hlds__xml_documentation_scalar_common_1[18][2];

static /* final */ const MR_Box check_hlds__xml_documentation_scalar_common_2[27][3];

static /* final */ const MR_Box check_hlds__xml_documentation_scalar_common_3[2][4];

static /* final */ const MR_Box check_hlds__xml_documentation_scalar_common_4[2][5];

static /* final */ const MR_Box check_hlds__xml_documentation_scalar_common_5[12][1];

static /* final */ const MR_Box check_hlds__xml_documentation_scalar_common_6[8][6];

static /* final */ const MR_Box check_hlds__xml_documentation_scalar_common_7[3][7];

static /* final */ const MR_Box check_hlds__xml_documentation_scalar_common_8[4][8];

static /* final */ const MR_Box check_hlds__xml_documentation_scalar_common_10[1][9];


/* sealed */ struct check_hlds__xml_documentation__vector_common_type_9_0_s {
  const MR_Word check_hlds__xml_documentation__vector_common_type_9_0__vct_9_f_0;
};

static /* final */ const struct check_hlds__xml_documentation__vector_common_type_9_0_s check_hlds__xml_documentation_vector_common_9[8];



static /* final */ const MR_Box check_hlds__xml_documentation_scalar_common_1[18][2] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_term_to_xml__xmlable__arity1__check_hlds__xml_documentation__module_info_xml_doc__arity0__)),
    ((MR_Box) (&check_hlds__xml_documentation__check_hlds__xml_documentation__type_ctor_info_module_info_xml_doc_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_5[0]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_5[1]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_5[2]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 6 */
  {
    ((MR_Box) (&check_hlds__xml_documentation_scalar_common_2[9])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 7 */
  {
    ((MR_Box) (&check_hlds__xml_documentation_scalar_common_2[10])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 8 */
  {
    ((MR_Box) (&check_hlds__xml_documentation_scalar_common_2[11])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_5[3]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_5[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_5[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_5[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_5[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_5[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_5[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_5[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box check_hlds__xml_documentation_scalar_common_2[27][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__xml_documentation__check_hlds__xml_documentation__type_ctor_info_line_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&check_hlds__xml_documentation_scalar_common_3[1])),
    ((MR_Box) (check_hlds__xml_documentation__build_comments_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&check_hlds__xml_documentation_scalar_common_3[1])),
    ((MR_Box) (check_hlds__xml_documentation__build_comments_5_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "visibility")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_1[3])))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "visibility")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_1[4])))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "character")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) "float")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) "string")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) "hlds_abstract_type")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_1[5])))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_String) "hlds_foreign_type")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_1[5])))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_String) "hlds_solver_type")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_1[5])))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_String) "determinism")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_1[10])))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_String) "determinism")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_1[11])))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_String) "determinism")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_1[12])))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_String) "determinism")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_1[13])))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_String) "determinism")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_1[14])))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_String) "determinism")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_1[15])))
  },
  /* row 18 */
  {
    ((MR_Box) ((MR_String) "determinism")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_1[16])))
  },
  /* row 19 */
  {
    ((MR_Box) ((MR_String) "determinism")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_1[17])))
  },
  /* row 20 */
  {
    ((MR_Box) ((MR_String) "any_inst")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_1[5])))
  },
  /* row 21 */
  {
    ((MR_Box) ((MR_String) "ground_inst")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_1[5])))
  },
  /* row 22 */
  {
    ((MR_Box) ((MR_String) "merge_inst")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_1[5])))
  },
  /* row 23 */
  {
    ((MR_Box) ((MR_String) "mostly_uniq_inst")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_1[5])))
  },
  /* row 24 */
  {
    ((MR_Box) ((MR_String) "free")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 25 */
  {
    ((MR_Box) ((MR_String) "not_reached")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 26 */
  {
    ((MR_Box) (&check_hlds__xml_documentation_scalar_common_4[1])),
    ((MR_Box) (check_hlds__xml_documentation__class_methods_to_xml_3_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__xml_documentation_scalar_common_3[2][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&check_hlds__xml_documentation_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0))
  },
};

static /* final */ const MR_Box check_hlds__xml_documentation_scalar_common_4[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&check_hlds__xml_documentation_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
};

static /* final */ const MR_Box check_hlds__xml_documentation_scalar_common_5[12][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "implementation"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "interface"))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "Not yet implemented!"))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "cc_multi"))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "cc_nondet"))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "det"))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "erroneous"))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) "failure"))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) "multi"))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) "nondet"))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_String) "semidet"))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_String) "{}"))
  },
};

static /* final */ const MR_Box check_hlds__xml_documentation_scalar_common_6[8][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__xml_documentation__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__xml_documentation__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__xml_documentation__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__xml_documentation__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__xml_documentation__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__xml_documentation__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__xml_documentation__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0)),
    ((MR_Box) (&mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__xml_documentation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__xml_documentation__check_hlds__xml_documentation__type_ctor_info_comments_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0))
  },
};

static /* final */ const MR_Box check_hlds__xml_documentation_scalar_common_7[3][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__xml_documentation__check_hlds__xml_documentation__type_ctor_info_comments_0)),
    ((MR_Box) (&check_hlds__xml_documentation__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__xml_documentation__check_hlds__xml_documentation__type_ctor_info_comments_0)),
    ((MR_Box) (&check_hlds__xml_documentation__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0)),
    ((MR_Box) (&mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__xml_documentation__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__xml_documentation__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_fundep_0)),
    ((MR_Box) (&mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0))
  },
};

static /* final */ const MR_Box check_hlds__xml_documentation_scalar_common_8[4][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&check_hlds__xml_documentation__check_hlds__xml_documentation__type_ctor_info_comments_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&check_hlds__xml_documentation__list__pti_list_1__plain_term_to_xml__type_ctor_info_xml_0)),
    ((MR_Box) (&check_hlds__xml_documentation__list__pti_list_1__plain_term_to_xml__type_ctor_info_xml_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&check_hlds__xml_documentation__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_avail_module_entry_0)),
    ((MR_Box) (&check_hlds__xml_documentation__list__pti_list_1__plain_term_to_xml__type_ctor_info_xml_0)),
    ((MR_Box) (&check_hlds__xml_documentation__list__pti_list_1__plain_term_to_xml__type_ctor_info_xml_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&check_hlds__xml_documentation__check_hlds__xml_documentation__type_ctor_info_comments_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&check_hlds__xml_documentation__list__pti_list_1__plain_term_to_xml__type_ctor_info_xml_0)),
    ((MR_Box) (&check_hlds__xml_documentation__list__pti_list_1__plain_term_to_xml__type_ctor_info_xml_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&check_hlds__xml_documentation__check_hlds__xml_documentation__type_ctor_info_comments_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&check_hlds__xml_documentation__list__pti_list_1__plain_term_to_xml__type_ctor_info_xml_0)),
    ((MR_Box) (&check_hlds__xml_documentation__list__pti_list_1__plain_term_to_xml__type_ctor_info_xml_0))
  },
};

static /* final */ const MR_Box check_hlds__xml_documentation_scalar_common_10[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&check_hlds__xml_documentation__check_hlds__xml_documentation__type_ctor_info_comments_0)),
    ((MR_Box) (&check_hlds__xml_documentation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_defn_0)),
    ((MR_Box) (&check_hlds__xml_documentation__list__pti_list_1__plain_term_to_xml__type_ctor_info_xml_0)),
    ((MR_Box) (&check_hlds__xml_documentation__list__pti_list_1__plain_term_to_xml__type_ctor_info_xml_0))
  },
};


static /* final */ const struct check_hlds__xml_documentation__vector_common_type_9_0_s check_hlds__xml_documentation_vector_common_9[8] = {
  /* row 0 */   {     (MR_Word) &check_hlds__xml_documentation_scalar_common_2[14] },
  /* row 1 */   {     (MR_Word) &check_hlds__xml_documentation_scalar_common_2[19] },
  /* row 2 */   {     (MR_Word) &check_hlds__xml_documentation_scalar_common_2[17] },
  /* row 3 */   {     (MR_Word) &check_hlds__xml_documentation_scalar_common_2[18] },
  /* row 4 */   {     (MR_Word) &check_hlds__xml_documentation_scalar_common_2[12] },
  /* row 5 */   {     (MR_Word) &check_hlds__xml_documentation_scalar_common_2[13] },
  /* row 6 */   {     (MR_Word) &check_hlds__xml_documentation_scalar_common_2[15] },
  /* row 7 */   {     (MR_Word) &check_hlds__xml_documentation_scalar_common_2[16] },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__xml_documentation__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__xml_documentation__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__xml_documentation__list__pti_list_1__plain_term_to_xml__type_ctor_info_xml_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__xml_documentation__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__xml_documentation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__xml_documentation__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__xml_documentation__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__xml_documentation__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__xml_documentation__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

static const MR_Integer check_hlds__xml_documentation__check_hlds__xml_documentation__functor_number_map_comments_0[1] = {
  (MR_Integer) 0
};

static const MR_FA_TypeInfo_Struct2 check_hlds__xml_documentation__tree234__ti_tree234_2builtin__type_ctor_info_int_0check_hlds__xml_documentation__type_ctor_info_line_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &check_hlds__xml_documentation__check_hlds__xml_documentation__type_ctor_info_line_type_0
  }
};

static const MR_NotagFunctorDesc check_hlds__xml_documentation__check_hlds__xml_documentation__notag_functor_desc_comments_0 = {
  (MR_String) "comments",
  (MR_PseudoTypeInfo) &check_hlds__xml_documentation__tree234__ti_tree234_2builtin__type_ctor_info_int_0check_hlds__xml_documentation__type_ctor_info_line_type_0,
  (MR_String) "line_types",
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct check_hlds__xml_documentation__check_hlds__xml_documentation__type_ctor_info_comments_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (check_hlds__xml_documentation____Unify____comments_0_0_10001)),
  ((MR_Box) (check_hlds__xml_documentation____Compare____comments_0_0_10001)),
  (MR_String) "check_hlds.xml_documentation",
  (MR_String) "comments",
  {     &check_hlds__xml_documentation__check_hlds__xml_documentation__notag_functor_desc_comments_0 },
  {     &check_hlds__xml_documentation__check_hlds__xml_documentation__notag_functor_desc_comments_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__xml_documentation__check_hlds__xml_documentation__functor_number_map_comments_0
};

static const MR_DuFunctorDesc check_hlds__xml_documentation__check_hlds__xml_documentation__du_functor_desc_line_type_0_0 = {
  (MR_String) "blank",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo check_hlds__xml_documentation__check_hlds__xml_documentation__field_types_line_type_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc check_hlds__xml_documentation__check_hlds__xml_documentation__du_functor_desc_line_type_0_1 = {
  (MR_String) "comment",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  check_hlds__xml_documentation__check_hlds__xml_documentation__field_types_line_type_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo check_hlds__xml_documentation__check_hlds__xml_documentation__field_types_line_type_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc check_hlds__xml_documentation__check_hlds__xml_documentation__du_functor_desc_line_type_0_2 = {
  (MR_String) "code_and_comment",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  check_hlds__xml_documentation__check_hlds__xml_documentation__field_types_line_type_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc check_hlds__xml_documentation__check_hlds__xml_documentation__du_functor_desc_line_type_0_3 = {
  (MR_String) "code",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 3,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__xml_documentation__check_hlds__xml_documentation__du_stag_ordered_line_type_0_0[2] = {
  &check_hlds__xml_documentation__check_hlds__xml_documentation__du_functor_desc_line_type_0_0,
  &check_hlds__xml_documentation__check_hlds__xml_documentation__du_functor_desc_line_type_0_3
};

static const MR_DuFunctorDescPtr check_hlds__xml_documentation__check_hlds__xml_documentation__du_stag_ordered_line_type_0_1[1] = {
  &check_hlds__xml_documentation__check_hlds__xml_documentation__du_functor_desc_line_type_0_1
};

static const MR_DuFunctorDescPtr check_hlds__xml_documentation__check_hlds__xml_documentation__du_stag_ordered_line_type_0_2[1] = {
  &check_hlds__xml_documentation__check_hlds__xml_documentation__du_functor_desc_line_type_0_2
};

static const MR_DuPtagLayout check_hlds__xml_documentation__check_hlds__xml_documentation__du_ptag_ordered_line_type_0[3] = {
  {
    (MR_Integer) 2,
    MR_SECTAG_LOCAL,
    check_hlds__xml_documentation__check_hlds__xml_documentation__du_stag_ordered_line_type_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__xml_documentation__check_hlds__xml_documentation__du_stag_ordered_line_type_0_1
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__xml_documentation__check_hlds__xml_documentation__du_stag_ordered_line_type_0_2
  }
};

static const MR_DuFunctorDescPtr check_hlds__xml_documentation__check_hlds__xml_documentation__du_name_ordered_line_type_0[4] = {
  &check_hlds__xml_documentation__check_hlds__xml_documentation__du_functor_desc_line_type_0_0,
  &check_hlds__xml_documentation__check_hlds__xml_documentation__du_functor_desc_line_type_0_3,
  &check_hlds__xml_documentation__check_hlds__xml_documentation__du_functor_desc_line_type_0_2,
  &check_hlds__xml_documentation__check_hlds__xml_documentation__du_functor_desc_line_type_0_1
};

static const MR_Integer check_hlds__xml_documentation__check_hlds__xml_documentation__functor_number_map_line_type_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__xml_documentation__check_hlds__xml_documentation__type_ctor_info_line_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 3,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__xml_documentation____Unify____line_type_0_0_10001)),
  ((MR_Box) (check_hlds__xml_documentation____Compare____line_type_0_0_10001)),
  (MR_String) "check_hlds.xml_documentation",
  (MR_String) "line_type",
  {     check_hlds__xml_documentation__check_hlds__xml_documentation__du_name_ordered_line_type_0 },
  {     check_hlds__xml_documentation__check_hlds__xml_documentation__du_ptag_ordered_line_type_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  check_hlds__xml_documentation__check_hlds__xml_documentation__functor_number_map_line_type_0
};

static const MR_PseudoTypeInfo check_hlds__xml_documentation__check_hlds__xml_documentation__field_types_module_info_xml_doc_0_0[3] = {
  (MR_PseudoTypeInfo) &check_hlds__xml_documentation__check_hlds__xml_documentation__type_ctor_info_comments_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0
};

static const MR_DuFunctorDesc check_hlds__xml_documentation__check_hlds__xml_documentation__du_functor_desc_module_info_xml_doc_0_0 = {
  (MR_String) "module_info_xml_doc",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__xml_documentation__check_hlds__xml_documentation__field_types_module_info_xml_doc_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__xml_documentation__check_hlds__xml_documentation__du_stag_ordered_module_info_xml_doc_0_0[1] = {
  &check_hlds__xml_documentation__check_hlds__xml_documentation__du_functor_desc_module_info_xml_doc_0_0
};

static const MR_DuPtagLayout check_hlds__xml_documentation__check_hlds__xml_documentation__du_ptag_ordered_module_info_xml_doc_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__xml_documentation__check_hlds__xml_documentation__du_stag_ordered_module_info_xml_doc_0_0
  }
};

static const MR_DuFunctorDescPtr check_hlds__xml_documentation__check_hlds__xml_documentation__du_name_ordered_module_info_xml_doc_0[1] = {
  &check_hlds__xml_documentation__check_hlds__xml_documentation__du_functor_desc_module_info_xml_doc_0_0
};

static const MR_Integer check_hlds__xml_documentation__check_hlds__xml_documentation__functor_number_map_module_info_xml_doc_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__xml_documentation__check_hlds__xml_documentation__type_ctor_info_module_info_xml_doc_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__xml_documentation____Unify____module_info_xml_doc_0_0_10001)),
  ((MR_Box) (check_hlds__xml_documentation____Compare____module_info_xml_doc_0_0_10001)),
  (MR_String) "check_hlds.xml_documentation",
  (MR_String) "module_info_xml_doc",
  {     check_hlds__xml_documentation__check_hlds__xml_documentation__du_name_ordered_module_info_xml_doc_0 },
  {     check_hlds__xml_documentation__check_hlds__xml_documentation__du_ptag_ordered_module_info_xml_doc_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__xml_documentation__check_hlds__xml_documentation__functor_number_map_module_info_xml_doc_0
};

const MR_BaseTypeclassInfo base_typeclass_info_term_to_xml__xmlable__arity1__check_hlds__xml_documentation__module_info_xml_doc__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (check_hlds__xml_documentation__ClassMethod_for_term_to_xml__xmlable____check_hlds__xml_documentation__module_info_xml_doc__arity0______term_to_xml__to_xml_1_1_f_0_10001))
};

static MR_Word MR_CALL 
check_hlds__xml_documentation__IntroducedFrom__func__class_methods_to_xml__815__1_2_f_0(
  MR_Word check_hlds__xml_documentation__PredTable_6,
  MR_Word check_hlds__xml_documentation__LambdaHeadVar__1_15)
{
  {
    MR_bool check_hlds__xml_documentation__succeeded;
    MR_Word check_hlds__xml_documentation__LambdaHeadVar__2_16;
    MR_Box check_hlds__xml_documentation__conv0_LambdaHeadVar__2_16;

    {
      check_hlds__xml_documentation__conv0_LambdaHeadVar__2_16 = mercury__map__lookup_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, check_hlds__xml_documentation__PredTable_6, ((MR_Box) (check_hlds__xml_documentation__LambdaHeadVar__1_15)));
    }
    check_hlds__xml_documentation__LambdaHeadVar__2_16 = ((MR_Word) check_hlds__xml_documentation__conv0_LambdaHeadVar__2_16);
    return check_hlds__xml_documentation__LambdaHeadVar__2_16;
  }
}

static void MR_CALL 
check_hlds__xml_documentation__ClassMethod_for_term_to_xml__xmlable____check_hlds__xml_documentation__module_info_xml_doc__arity0______term_to_xml__to_xml_1_1_f_0_4(
  MR_Box check_hlds__xml_documentation__closure_arg,
  MR_Box check_hlds__xml_documentation__wrapper_arg_1,
  MR_Box check_hlds__xml_documentation__wrapper_arg_2,
  MR_Box check_hlds__xml_documentation__wrapper_arg_3,
  MR_Box * check_hlds__xml_documentation__wrapper_arg_4)
{
  {
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
    MR_Word check_hlds__xml_documentation__conv6_STATE_VARIABLE_Xml_28;

    {
      check_hlds__xml_documentation__class_documentation_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_2), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_3), &check_hlds__xml_documentation__conv6_STATE_VARIABLE_Xml_28);
    }
    *check_hlds__xml_documentation__wrapper_arg_4 = ((MR_Box) (check_hlds__xml_documentation__conv6_STATE_VARIABLE_Xml_28));
  }
}

static void MR_CALL 
check_hlds__xml_documentation__ClassMethod_for_term_to_xml__xmlable____check_hlds__xml_documentation__module_info_xml_doc__arity0______term_to_xml__to_xml_1_1_f_0_3(
  MR_Box check_hlds__xml_documentation__closure_arg,
  MR_Box check_hlds__xml_documentation__wrapper_arg_1,
  MR_Box check_hlds__xml_documentation__wrapper_arg_2,
  MR_Box check_hlds__xml_documentation__wrapper_arg_3,
  MR_Box * check_hlds__xml_documentation__wrapper_arg_4)
{
  {
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
    MR_Word check_hlds__xml_documentation__conv4_STATE_VARIABLE_Xml_15;

    {
      check_hlds__xml_documentation__pred_documentation_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_2), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_3), &check_hlds__xml_documentation__conv4_STATE_VARIABLE_Xml_15);
    }
    *check_hlds__xml_documentation__wrapper_arg_4 = ((MR_Box) (check_hlds__xml_documentation__conv4_STATE_VARIABLE_Xml_15));
  }
}

static void MR_CALL 
check_hlds__xml_documentation__ClassMethod_for_term_to_xml__xmlable____check_hlds__xml_documentation__module_info_xml_doc__arity0______term_to_xml__to_xml_1_1_f_0_2(
  MR_Box check_hlds__xml_documentation__closure_arg,
  MR_Box check_hlds__xml_documentation__wrapper_arg_1,
  MR_Box check_hlds__xml_documentation__wrapper_arg_2,
  MR_Box check_hlds__xml_documentation__wrapper_arg_3,
  MR_Box * check_hlds__xml_documentation__wrapper_arg_4)
{
  {
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
    MR_Word check_hlds__xml_documentation__conv2_STATE_VARIABLE_Xmls_26;

    {
      check_hlds__xml_documentation__type_documentation_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_2), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_3), &check_hlds__xml_documentation__conv2_STATE_VARIABLE_Xmls_26);
    }
    *check_hlds__xml_documentation__wrapper_arg_4 = ((MR_Box) (check_hlds__xml_documentation__conv2_STATE_VARIABLE_Xmls_26));
  }
}

static void MR_CALL 
check_hlds__xml_documentation__ClassMethod_for_term_to_xml__xmlable____check_hlds__xml_documentation__module_info_xml_doc__arity0______term_to_xml__to_xml_1_1_f_0_1(
  MR_Box check_hlds__xml_documentation__closure_arg,
  MR_Box check_hlds__xml_documentation__wrapper_arg_1,
  MR_Box check_hlds__xml_documentation__wrapper_arg_2,
  MR_Box check_hlds__xml_documentation__wrapper_arg_3,
  MR_Box * check_hlds__xml_documentation__wrapper_arg_4)
{
  {
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
    MR_Word check_hlds__xml_documentation__conv0_STATE_VARIABLE_Xmls_18;

    {
      check_hlds__xml_documentation__maybe_add_import_documentation_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_2), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_3), &check_hlds__xml_documentation__conv0_STATE_VARIABLE_Xmls_18);
    }
    *check_hlds__xml_documentation__wrapper_arg_4 = ((MR_Box) (check_hlds__xml_documentation__conv0_STATE_VARIABLE_Xmls_18));
  }
}

static MR_Word MR_CALL 
check_hlds__xml_documentation__ClassMethod_for_term_to_xml__xmlable____check_hlds__xml_documentation__module_info_xml_doc__arity0______term_to_xml__to_xml_1_1_f_0(
  MR_Word check_hlds__xml_documentation__HeadVar__1_1)
{
  {
    MR_bool check_hlds__xml_documentation__succeeded;
    MR_Word check_hlds__xml_documentation__Xml_6;
    MR_Word check_hlds__xml_documentation__TypeCtorInfo_51_51;
    MR_Word check_hlds__xml_documentation__TypeInfo_57_57;
    MR_Word check_hlds__xml_documentation__Comments_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__1_1, (MR_Integer) 0)));
    MR_String check_hlds__xml_documentation__ModuleComment_4 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word check_hlds__xml_documentation__ModuleInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__1_1, (MR_Integer) 2)));
    MR_Word check_hlds__xml_documentation__CommentXml_7;
    MR_Word check_hlds__xml_documentation__AvailModuleMap_8;
    MR_Word check_hlds__xml_documentation__BuiltinModuleNames_9;
    MR_Word check_hlds__xml_documentation__ImportsXml_10;
    MR_Word check_hlds__xml_documentation__ImportXml_11;
    MR_Word check_hlds__xml_documentation__TypeTable_12;
    MR_Word check_hlds__xml_documentation__TypeXmls_13;
    MR_Word check_hlds__xml_documentation__TypeXml_14;
    MR_Word check_hlds__xml_documentation__PredTable_15;
    MR_Word check_hlds__xml_documentation__PredXmls_16;
    MR_Word check_hlds__xml_documentation__PredXml_17;
    MR_Word check_hlds__xml_documentation__ClassTable_18;
    MR_Word check_hlds__xml_documentation__ClassXmls_19;
    MR_Word check_hlds__xml_documentation__ClassXml_20;
    MR_Word check_hlds__xml_documentation__Children_21;
    MR_Word check_hlds__xml_documentation__Var_24;
    MR_Word check_hlds__xml_documentation__Var_25;
    MR_Word check_hlds__xml_documentation__Var_27;
    MR_Word check_hlds__xml_documentation__Var_28;
    MR_Word check_hlds__xml_documentation__Var_32;
    MR_Word check_hlds__xml_documentation__Var_36;
    MR_Word check_hlds__xml_documentation__Var_40;
    MR_Word check_hlds__xml_documentation__Var_44;
    MR_Word check_hlds__xml_documentation__Var_45;
    MR_Word check_hlds__xml_documentation__Var_46;
    MR_Word check_hlds__xml_documentation__Var_47;
    MR_Box check_hlds__xml_documentation__conv1_ImportsXml_10;
    MR_Box check_hlds__xml_documentation__conv3_TypeXmls_13;
    MR_Box check_hlds__xml_documentation__conv5_PredXmls_16;
    MR_Box check_hlds__xml_documentation__conv7_ClassXmls_19;

    {
      check_hlds__xml_documentation__Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_25, 0) = ((MR_Box) (check_hlds__xml_documentation__ModuleComment_4));
    }
    {
      check_hlds__xml_documentation__Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_24, 0) = ((MR_Box) (check_hlds__xml_documentation__Var_25));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__xml_documentation__CommentXml_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__CommentXml_7, 0) = ((MR_Box) ((MR_String) "comment"));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__CommentXml_7, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__CommentXml_7, 2) = ((MR_Box) (check_hlds__xml_documentation__Var_24));
    }
    {
      hlds__hlds_module__module_info_get_avail_module_map_2_p_0(check_hlds__xml_documentation__ModuleInfo_5, &check_hlds__xml_documentation__AvailModuleMap_8);
    }
    check_hlds__xml_documentation__TypeCtorInfo_51_51 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    {
      check_hlds__xml_documentation__Var_27 = mdbcomp__builtin_modules__all_builtin_modules_0_f_0();
    }
    {
      check_hlds__xml_documentation__BuiltinModuleNames_9 = mercury__set__list_to_set_1_f_0(check_hlds__xml_documentation__TypeCtorInfo_51_51, check_hlds__xml_documentation__Var_27);
    }
    {
      check_hlds__xml_documentation__Var_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_28, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_8[1]));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_28, 1) = ((MR_Box) (check_hlds__xml_documentation__ClassMethod_for_term_to_xml__xmlable____check_hlds__xml_documentation__module_info_xml_doc__arity0______term_to_xml__to_xml_1_1_f_0_1));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_28, 3) = ((MR_Box) (check_hlds__xml_documentation__BuiltinModuleNames_9));
    }
    check_hlds__xml_documentation__TypeInfo_57_57 = (MR_Word) &check_hlds__xml_documentation_scalar_common_1[2];
    {
      mercury__map__foldl_4_p_0(check_hlds__xml_documentation__TypeCtorInfo_51_51, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_avail_module_entry_0, check_hlds__xml_documentation__TypeInfo_57_57, check_hlds__xml_documentation__Var_28, check_hlds__xml_documentation__AvailModuleMap_8, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &check_hlds__xml_documentation__conv1_ImportsXml_10);
    }
    check_hlds__xml_documentation__ImportsXml_10 = ((MR_Word) check_hlds__xml_documentation__conv1_ImportsXml_10);
    {
      check_hlds__xml_documentation__ImportXml_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ImportXml_11, 0) = ((MR_Box) ((MR_String) "imports"));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ImportXml_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ImportXml_11, 2) = ((MR_Box) (check_hlds__xml_documentation__ImportsXml_10));
    }
    {
      hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__xml_documentation__ModuleInfo_5, &check_hlds__xml_documentation__TypeTable_12);
    }
    {
      check_hlds__xml_documentation__Var_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_32, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_8[2]));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_32, 1) = ((MR_Box) (check_hlds__xml_documentation__ClassMethod_for_term_to_xml__xmlable____check_hlds__xml_documentation__module_info_xml_doc__arity0______term_to_xml__to_xml_1_1_f_0_2));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_32, 3) = ((MR_Box) (check_hlds__xml_documentation__Comments_3));
    }
    {
      hlds__hlds_data__foldl_over_type_ctor_defns_4_p_0(check_hlds__xml_documentation__TypeInfo_57_57, check_hlds__xml_documentation__Var_32, check_hlds__xml_documentation__TypeTable_12, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &check_hlds__xml_documentation__conv3_TypeXmls_13);
    }
    check_hlds__xml_documentation__TypeXmls_13 = ((MR_Word) check_hlds__xml_documentation__conv3_TypeXmls_13);
    {
      check_hlds__xml_documentation__TypeXml_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__TypeXml_14, 0) = ((MR_Box) ((MR_String) "types"));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__TypeXml_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__TypeXml_14, 2) = ((MR_Box) (check_hlds__xml_documentation__TypeXmls_13));
    }
    {
      hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__xml_documentation__ModuleInfo_5, &check_hlds__xml_documentation__PredTable_15);
    }
    {
      check_hlds__xml_documentation__Var_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_36, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_8[3]));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_36, 1) = ((MR_Box) (check_hlds__xml_documentation__ClassMethod_for_term_to_xml__xmlable____check_hlds__xml_documentation__module_info_xml_doc__arity0______term_to_xml__to_xml_1_1_f_0_3));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_36, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_36, 3) = ((MR_Box) (check_hlds__xml_documentation__Comments_3));
    }
    {
      mercury__map__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, check_hlds__xml_documentation__TypeInfo_57_57, check_hlds__xml_documentation__Var_36, check_hlds__xml_documentation__PredTable_15, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &check_hlds__xml_documentation__conv5_PredXmls_16);
    }
    check_hlds__xml_documentation__PredXmls_16 = ((MR_Word) check_hlds__xml_documentation__conv5_PredXmls_16);
    {
      check_hlds__xml_documentation__PredXml_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__PredXml_17, 0) = ((MR_Box) ((MR_String) "preds"));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__PredXml_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__PredXml_17, 2) = ((MR_Box) (check_hlds__xml_documentation__PredXmls_16));
    }
    {
      hlds__hlds_module__module_info_get_class_table_2_p_0(check_hlds__xml_documentation__ModuleInfo_5, &check_hlds__xml_documentation__ClassTable_18);
    }
    {
      check_hlds__xml_documentation__Var_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_40, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_10[0]));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_40, 1) = ((MR_Box) (check_hlds__xml_documentation__ClassMethod_for_term_to_xml__xmlable____check_hlds__xml_documentation__module_info_xml_doc__arity0______term_to_xml__to_xml_1_1_f_0_4));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_40, 3) = ((MR_Box) (check_hlds__xml_documentation__Comments_3));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_40, 4) = ((MR_Box) (check_hlds__xml_documentation__PredTable_15));
    }
    {
      mercury__map__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_defn_0, check_hlds__xml_documentation__TypeInfo_57_57, check_hlds__xml_documentation__Var_40, check_hlds__xml_documentation__ClassTable_18, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &check_hlds__xml_documentation__conv7_ClassXmls_19);
    }
    check_hlds__xml_documentation__ClassXmls_19 = ((MR_Word) check_hlds__xml_documentation__conv7_ClassXmls_19);
    {
      check_hlds__xml_documentation__ClassXml_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassXml_20, 0) = ((MR_Box) ((MR_String) "typeclasses"));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassXml_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassXml_20, 2) = ((MR_Box) (check_hlds__xml_documentation__ClassXmls_19));
    }
    {
      check_hlds__xml_documentation__Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_47, 0) = ((MR_Box) (check_hlds__xml_documentation__ClassXml_20));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__xml_documentation__Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_46, 0) = ((MR_Box) (check_hlds__xml_documentation__PredXml_17));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_46, 1) = ((MR_Box) (check_hlds__xml_documentation__Var_47));
    }
    {
      check_hlds__xml_documentation__Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_45, 0) = ((MR_Box) (check_hlds__xml_documentation__TypeXml_14));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_45, 1) = ((MR_Box) (check_hlds__xml_documentation__Var_46));
    }
    {
      check_hlds__xml_documentation__Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_44, 0) = ((MR_Box) (check_hlds__xml_documentation__ImportXml_11));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_44, 1) = ((MR_Box) (check_hlds__xml_documentation__Var_45));
    }
    {
      check_hlds__xml_documentation__Children_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Children_21, 0) = ((MR_Box) (check_hlds__xml_documentation__CommentXml_7));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Children_21, 1) = ((MR_Box) (check_hlds__xml_documentation__Var_44));
    }
    {
      check_hlds__xml_documentation__Xml_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_6, 0) = ((MR_Box) ((MR_String) "module"));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_6, 2) = ((MR_Box) (check_hlds__xml_documentation__Children_21));
    }
    return check_hlds__xml_documentation__Xml_6;
  }
}

static void MR_CALL 
check_hlds__xml_documentation____Compare____module_info_xml_doc_0_0(
  MR_Word * check_hlds__xml_documentation__HeadVar__1_1,
  MR_Word check_hlds__xml_documentation__HeadVar__2_2,
  MR_Word check_hlds__xml_documentation__HeadVar__3_3)
{
  {
    MR_bool check_hlds__xml_documentation__succeeded;
    MR_Integer check_hlds__xml_documentation__CastX_12 = (MR_Integer) check_hlds__xml_documentation__HeadVar__2_2;
    MR_Integer check_hlds__xml_documentation__CastY_13 = (MR_Integer) check_hlds__xml_documentation__HeadVar__3_3;

    check_hlds__xml_documentation__succeeded = (check_hlds__xml_documentation__CastX_12 == check_hlds__xml_documentation__CastY_13);
    if (check_hlds__xml_documentation__succeeded)
      *check_hlds__xml_documentation__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word check_hlds__xml_documentation__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__xml_documentation__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, (MR_Integer) 0)));
        MR_String check_hlds__xml_documentation__ArgX2_6 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 1)));
        MR_String check_hlds__xml_documentation__ArgY2_7 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word check_hlds__xml_documentation__ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word check_hlds__xml_documentation__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word check_hlds__xml_documentation__Var_10;

        {
          check_hlds__xml_documentation____Compare____comments_0_0(&check_hlds__xml_documentation__Var_10, check_hlds__xml_documentation__ArgX1_4, check_hlds__xml_documentation__ArgY1_5);
        }
        check_hlds__xml_documentation__succeeded = (check_hlds__xml_documentation__Var_10 == (MR_Integer) 0);
        check_hlds__xml_documentation__succeeded = !(check_hlds__xml_documentation__succeeded);
        if (check_hlds__xml_documentation__succeeded)
          *check_hlds__xml_documentation__HeadVar__1_1 = check_hlds__xml_documentation__Var_10;
        else
          {
            MR_Word check_hlds__xml_documentation__Var_11;

            {
              mercury__private_builtin__builtin_compare_string_3_p_0(&check_hlds__xml_documentation__Var_11, check_hlds__xml_documentation__ArgX2_6, check_hlds__xml_documentation__ArgY2_7);
            }
            check_hlds__xml_documentation__succeeded = (check_hlds__xml_documentation__Var_11 == (MR_Integer) 0);
            check_hlds__xml_documentation__succeeded = !(check_hlds__xml_documentation__succeeded);
            if (check_hlds__xml_documentation__succeeded)
              *check_hlds__xml_documentation__HeadVar__1_1 = check_hlds__xml_documentation__Var_11;
            else
              {
                hlds__hlds_module____Compare____module_info_0_0(check_hlds__xml_documentation__HeadVar__1_1, check_hlds__xml_documentation__ArgX3_8, check_hlds__xml_documentation__ArgY3_9);
              }
          }
      }
  }
}

static MR_bool MR_CALL 
check_hlds__xml_documentation____Unify____module_info_xml_doc_0_0(
  MR_Word check_hlds__xml_documentation__HeadVar__1_1,
  MR_Word check_hlds__xml_documentation__HeadVar__2_2)
{
  {
    MR_bool check_hlds__xml_documentation__succeeded;
    MR_Integer check_hlds__xml_documentation__CastX_9 = (MR_Integer) check_hlds__xml_documentation__HeadVar__1_1;
    MR_Integer check_hlds__xml_documentation__CastY_10 = (MR_Integer) check_hlds__xml_documentation__HeadVar__2_2;

    check_hlds__xml_documentation__succeeded = (check_hlds__xml_documentation__CastX_9 == check_hlds__xml_documentation__CastY_10);
    if (check_hlds__xml_documentation__succeeded)
      check_hlds__xml_documentation__succeeded = MR_TRUE;
    else
      {
        MR_Word check_hlds__xml_documentation__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__xml_documentation__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 0)));
        MR_String check_hlds__xml_documentation__ArgX2_5 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__1_1, (MR_Integer) 1)));
        MR_String check_hlds__xml_documentation__ArgY2_6 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__xml_documentation__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word check_hlds__xml_documentation__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 2)));

        {
          check_hlds__xml_documentation__succeeded = check_hlds__xml_documentation____Unify____comments_0_0(check_hlds__xml_documentation__ArgX1_3, check_hlds__xml_documentation__ArgY1_4);
        }
        if (check_hlds__xml_documentation__succeeded)
          {
            check_hlds__xml_documentation__succeeded = (strcmp(check_hlds__xml_documentation__ArgX2_5, check_hlds__xml_documentation__ArgY2_6) == 0);
            if (check_hlds__xml_documentation__succeeded)
              {
                check_hlds__xml_documentation__succeeded = hlds__hlds_module____Unify____module_info_0_0(check_hlds__xml_documentation__ArgX3_7, check_hlds__xml_documentation__ArgY3_8);
              }
          }
      }
    return check_hlds__xml_documentation__succeeded;
  }
}

static void MR_CALL 
check_hlds__xml_documentation____Compare____line_type_0_0(
  MR_Word * check_hlds__xml_documentation__HeadVar__1_1,
  MR_Word check_hlds__xml_documentation__HeadVar__2_2,
  MR_Word check_hlds__xml_documentation__HeadVar__3_3)
{
  {
    MR_bool check_hlds__xml_documentation__succeeded;
    MR_Integer check_hlds__xml_documentation__CastX_20 = (MR_Integer) check_hlds__xml_documentation__HeadVar__2_2;
    MR_Integer check_hlds__xml_documentation__CastY_21 = (MR_Integer) check_hlds__xml_documentation__HeadVar__3_3;

    check_hlds__xml_documentation__succeeded = (check_hlds__xml_documentation__CastX_20 == check_hlds__xml_documentation__CastY_21);
    if (check_hlds__xml_documentation__succeeded)
      *check_hlds__xml_documentation__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) check_hlds__xml_documentation__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(check_hlds__xml_documentation__HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_tag((MR_Word) check_hlds__xml_documentation__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(check_hlds__xml_documentation__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *check_hlds__xml_documentation__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      *check_hlds__xml_documentation__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *check_hlds__xml_documentation__HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 2:
                  *check_hlds__xml_documentation__HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              switch (MR_tag((MR_Word) check_hlds__xml_documentation__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(check_hlds__xml_documentation__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *check_hlds__xml_documentation__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *check_hlds__xml_documentation__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *check_hlds__xml_documentation__HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *check_hlds__xml_documentation__HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String check_hlds__xml_documentation__Var_25 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) check_hlds__xml_documentation__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(check_hlds__xml_documentation__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *check_hlds__xml_documentation__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *check_hlds__xml_documentation__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_String check_hlds__xml_documentation__ArgY1_8 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__private_builtin__builtin_compare_string_3_p_0(check_hlds__xml_documentation__HeadVar__1_1, check_hlds__xml_documentation__Var_25, check_hlds__xml_documentation__ArgY1_8);
                  }
                }
                break;
              case (MR_Integer) 2:
                *check_hlds__xml_documentation__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String check_hlds__xml_documentation__Var_24 = ((MR_String) (MR_hl_field(MR_mktag(2), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) check_hlds__xml_documentation__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(check_hlds__xml_documentation__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *check_hlds__xml_documentation__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *check_hlds__xml_documentation__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *check_hlds__xml_documentation__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_String check_hlds__xml_documentation__ArgY1_16 = ((MR_String) (MR_hl_field(MR_mktag(2), check_hlds__xml_documentation__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__private_builtin__builtin_compare_string_3_p_0(check_hlds__xml_documentation__HeadVar__1_1, check_hlds__xml_documentation__Var_24, check_hlds__xml_documentation__ArgY1_16);
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
check_hlds__xml_documentation____Unify____line_type_0_0(
  MR_Word check_hlds__xml_documentation__HeadVar__1_1,
  MR_Word check_hlds__xml_documentation__HeadVar__2_2)
{
  {
    MR_bool check_hlds__xml_documentation__succeeded;
    MR_Integer check_hlds__xml_documentation__CastX_11 = (MR_Integer) check_hlds__xml_documentation__HeadVar__1_1;
    MR_Integer check_hlds__xml_documentation__CastY_12 = (MR_Integer) check_hlds__xml_documentation__HeadVar__2_2;

    check_hlds__xml_documentation__succeeded = (check_hlds__xml_documentation__CastX_11 == check_hlds__xml_documentation__CastY_12);
    if (check_hlds__xml_documentation__succeeded)
      check_hlds__xml_documentation__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) check_hlds__xml_documentation__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(check_hlds__xml_documentation__HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer check_hlds__xml_documentation__CastX_3 = (MR_Integer) check_hlds__xml_documentation__HeadVar__1_1;
                MR_Integer check_hlds__xml_documentation__CastY_4 = (MR_Integer) check_hlds__xml_documentation__HeadVar__2_2;

                check_hlds__xml_documentation__succeeded = (check_hlds__xml_documentation__CastY_4 == check_hlds__xml_documentation__CastX_3);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer check_hlds__xml_documentation__CastX_9 = (MR_Integer) check_hlds__xml_documentation__HeadVar__1_1;
                MR_Integer check_hlds__xml_documentation__CastY_10 = (MR_Integer) check_hlds__xml_documentation__HeadVar__2_2;

                check_hlds__xml_documentation__succeeded = (check_hlds__xml_documentation__CastY_10 == check_hlds__xml_documentation__CastX_9);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String check_hlds__xml_documentation__ArgX1_5 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__HeadVar__1_1, (MR_Integer) 0)));
            MR_String check_hlds__xml_documentation__ArgY1_6;

            check_hlds__xml_documentation__succeeded = ((MR_tag((MR_Word) check_hlds__xml_documentation__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (check_hlds__xml_documentation__succeeded)
              {
                check_hlds__xml_documentation__ArgY1_6 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 0)));
                check_hlds__xml_documentation__succeeded = (strcmp(check_hlds__xml_documentation__ArgX1_5, check_hlds__xml_documentation__ArgY1_6) == 0);
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String check_hlds__xml_documentation__ArgX1_7 = ((MR_String) (MR_hl_field(MR_mktag(2), check_hlds__xml_documentation__HeadVar__1_1, (MR_Integer) 0)));
            MR_String check_hlds__xml_documentation__ArgY1_8;

            check_hlds__xml_documentation__succeeded = ((MR_tag((MR_Word) check_hlds__xml_documentation__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (check_hlds__xml_documentation__succeeded)
              {
                check_hlds__xml_documentation__ArgY1_8 = ((MR_String) (MR_hl_field(MR_mktag(2), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 0)));
                check_hlds__xml_documentation__succeeded = (strcmp(check_hlds__xml_documentation__ArgX1_7, check_hlds__xml_documentation__ArgY1_8) == 0);
              }
          }
          break;
      }
    return check_hlds__xml_documentation__succeeded;
  }
}

static void MR_CALL 
check_hlds__xml_documentation____Compare____comments_0_0(
  MR_Word * check_hlds__xml_documentation__HeadVar__1_1,
  MR_Word check_hlds__xml_documentation__HeadVar__2_2,
  MR_Word check_hlds__xml_documentation__HeadVar__3_3)
{
  {
    MR_bool check_hlds__xml_documentation__succeeded;
    MR_Integer check_hlds__xml_documentation__CastX_6 = (MR_Integer) check_hlds__xml_documentation__HeadVar__2_2;
    MR_Integer check_hlds__xml_documentation__CastY_7 = (MR_Integer) check_hlds__xml_documentation__HeadVar__3_3;

    check_hlds__xml_documentation__succeeded = (check_hlds__xml_documentation__CastX_6 == check_hlds__xml_documentation__CastY_7);
    if (check_hlds__xml_documentation__succeeded)
      *check_hlds__xml_documentation__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word check_hlds__xml_documentation__ArgX1_4 = (MR_Word) check_hlds__xml_documentation__HeadVar__2_2;
        MR_Word check_hlds__xml_documentation__ArgY1_5 = (MR_Word) check_hlds__xml_documentation__HeadVar__3_3;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__xml_documentation_scalar_common_2[1], check_hlds__xml_documentation__HeadVar__1_1, ((MR_Box) (check_hlds__xml_documentation__ArgX1_4)), ((MR_Box) (check_hlds__xml_documentation__ArgY1_5)));
        }
      }
  }
}

static MR_bool MR_CALL 
check_hlds__xml_documentation____Unify____comments_0_0(
  MR_Word check_hlds__xml_documentation__HeadVar__1_1,
  MR_Word check_hlds__xml_documentation__HeadVar__2_2)
{
  {
    MR_bool check_hlds__xml_documentation__succeeded;
    MR_Integer check_hlds__xml_documentation__CastX_5 = (MR_Integer) check_hlds__xml_documentation__HeadVar__1_1;
    MR_Integer check_hlds__xml_documentation__CastY_6 = (MR_Integer) check_hlds__xml_documentation__HeadVar__2_2;

    check_hlds__xml_documentation__succeeded = (check_hlds__xml_documentation__CastX_5 == check_hlds__xml_documentation__CastY_6);
    if (check_hlds__xml_documentation__succeeded)
      check_hlds__xml_documentation__succeeded = MR_TRUE;
    else
      {
        MR_Word check_hlds__xml_documentation__ArgX1_3 = (MR_Word) check_hlds__xml_documentation__HeadVar__1_1;
        MR_Word check_hlds__xml_documentation__ArgY1_4 = (MR_Word) check_hlds__xml_documentation__HeadVar__2_2;

        {
          check_hlds__xml_documentation__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__xml_documentation_scalar_common_2[1], ((MR_Box) (check_hlds__xml_documentation__ArgX1_3)), ((MR_Box) (check_hlds__xml_documentation__ArgY1_4)));
        }
      }
    return check_hlds__xml_documentation__succeeded;
  }
}

static MR_Word MR_CALL 
check_hlds__xml_documentation__instance_visibility_to_xml_1_f_0(
  MR_Word check_hlds__xml_documentation__Status_3)
{
  {
    MR_bool check_hlds__xml_documentation__succeeded;
    MR_Word check_hlds__xml_documentation__HeadVar__2_2;
    MR_String check_hlds__xml_documentation__Visibility_4;
    MR_Word check_hlds__xml_documentation__Var_11;
    MR_Word check_hlds__xml_documentation__Var_12;
    MR_Word check_hlds__xml_documentation__Var_6;

    {
      check_hlds__xml_documentation__Var_6 = hlds__status__instance_status_defined_in_impl_section_1_f_0(check_hlds__xml_documentation__Status_3);
    }
    check_hlds__xml_documentation__succeeded = (check_hlds__xml_documentation__Var_6 == (MR_Integer) 1);
    if (check_hlds__xml_documentation__succeeded)
      {
        MR_Word check_hlds__xml_documentation__Var_7 = (MR_Word) check_hlds__xml_documentation__Status_3;

        check_hlds__xml_documentation__succeeded = (check_hlds__xml_documentation__Var_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
        if (check_hlds__xml_documentation__succeeded)
          check_hlds__xml_documentation__Visibility_4 = (MR_String) "abstract";
        else
          check_hlds__xml_documentation__Visibility_4 = (MR_String) "implementation";
      }
    else
      check_hlds__xml_documentation__Visibility_4 = (MR_String) "interface";
    {
      check_hlds__xml_documentation__Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_12, 0) = ((MR_Box) (check_hlds__xml_documentation__Visibility_4));
    }
    {
      check_hlds__xml_documentation__Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_11, 0) = ((MR_Box) (check_hlds__xml_documentation__Var_12));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__xml_documentation__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 0) = ((MR_Box) ((MR_String) "visibility"));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 2) = ((MR_Box) (check_hlds__xml_documentation__Var_11));
    }
    return check_hlds__xml_documentation__HeadVar__2_2;
  }
}

static MR_Word MR_CALL 
check_hlds__xml_documentation__mode_visibility_to_xml_1_f_0(
  MR_Word check_hlds__xml_documentation__Status_3)
{
  {
    MR_bool check_hlds__xml_documentation__succeeded;
    MR_Word check_hlds__xml_documentation__HeadVar__2_2;
    MR_String check_hlds__xml_documentation__Visibility_4;
    MR_Word check_hlds__xml_documentation__Var_10;
    MR_Word check_hlds__xml_documentation__Var_11;
    MR_Word check_hlds__xml_documentation__Var_6;

    {
      check_hlds__xml_documentation__Var_6 = hlds__status__mode_status_defined_in_impl_section_1_f_0(check_hlds__xml_documentation__Status_3);
    }
    check_hlds__xml_documentation__succeeded = (check_hlds__xml_documentation__Var_6 == (MR_Integer) 1);
    if (check_hlds__xml_documentation__succeeded)
      check_hlds__xml_documentation__Visibility_4 = (MR_String) "implementation";
    else
      check_hlds__xml_documentation__Visibility_4 = (MR_String) "interface";
    {
      check_hlds__xml_documentation__Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_11, 0) = ((MR_Box) (check_hlds__xml_documentation__Visibility_4));
    }
    {
      check_hlds__xml_documentation__Var_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_10, 0) = ((MR_Box) (check_hlds__xml_documentation__Var_11));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__xml_documentation__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 0) = ((MR_Box) ((MR_String) "visibility"));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 2) = ((MR_Box) (check_hlds__xml_documentation__Var_10));
    }
    return check_hlds__xml_documentation__HeadVar__2_2;
  }
}

static MR_Word MR_CALL 
check_hlds__xml_documentation__inst_visibility_to_xml_1_f_0(
  MR_Word check_hlds__xml_documentation__Status_3)
{
  {
    MR_bool check_hlds__xml_documentation__succeeded;
    MR_Word check_hlds__xml_documentation__HeadVar__2_2;
    MR_String check_hlds__xml_documentation__Visibility_4;
    MR_Word check_hlds__xml_documentation__Var_10;
    MR_Word check_hlds__xml_documentation__Var_11;
    MR_Word check_hlds__xml_documentation__Var_6;

    {
      check_hlds__xml_documentation__Var_6 = hlds__status__inst_status_defined_in_impl_section_1_f_0(check_hlds__xml_documentation__Status_3);
    }
    check_hlds__xml_documentation__succeeded = (check_hlds__xml_documentation__Var_6 == (MR_Integer) 1);
    if (check_hlds__xml_documentation__succeeded)
      check_hlds__xml_documentation__Visibility_4 = (MR_String) "implementation";
    else
      check_hlds__xml_documentation__Visibility_4 = (MR_String) "interface";
    {
      check_hlds__xml_documentation__Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_11, 0) = ((MR_Box) (check_hlds__xml_documentation__Visibility_4));
    }
    {
      check_hlds__xml_documentation__Var_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_10, 0) = ((MR_Box) (check_hlds__xml_documentation__Var_11));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__xml_documentation__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 0) = ((MR_Box) ((MR_String) "visibility"));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 2) = ((MR_Box) (check_hlds__xml_documentation__Var_10));
    }
    return check_hlds__xml_documentation__HeadVar__2_2;
  }
}

static MR_Box MR_CALL 
check_hlds__xml_documentation__prog_constraint_to_xml_2_f_0_1(
  MR_Box check_hlds__xml_documentation__closure_arg,
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
{
  {
    MR_Box check_hlds__xml_documentation__wrapper_arg_2;
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
    MR_Word check_hlds__xml_documentation__conv0_HeadVar__3_3;

    {
      check_hlds__xml_documentation__conv0_HeadVar__3_3 = check_hlds__xml_documentation__mer_type_to_xml_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
    check_hlds__xml_documentation__wrapper_arg_2 = ((MR_Box) (check_hlds__xml_documentation__conv0_HeadVar__3_3));
    return check_hlds__xml_documentation__wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
check_hlds__xml_documentation__prog_constraint_to_xml_2_f_0(
  MR_Word check_hlds__xml_documentation__TVarset_4,
  MR_Word check_hlds__xml_documentation__Constraint_5)
{
  {
    MR_bool check_hlds__xml_documentation__succeeded;
    MR_Word check_hlds__xml_documentation__Xml_6;
    MR_Word check_hlds__xml_documentation__ClassName_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Constraint_5, (MR_Integer) 0)));
    MR_Word check_hlds__xml_documentation__ArgTypes_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Constraint_5, (MR_Integer) 1)));
    MR_String check_hlds__xml_documentation__Id_9;
    MR_Word check_hlds__xml_documentation__XmlName_10;
    MR_Word check_hlds__xml_documentation__XmlTypes_11;
    MR_Integer check_hlds__xml_documentation__Var_13;
    MR_Word check_hlds__xml_documentation__Var_15;
    MR_Word check_hlds__xml_documentation__Var_17;
    MR_Word check_hlds__xml_documentation__Var_18;
    MR_Word check_hlds__xml_documentation__Var_21;
    MR_Word check_hlds__xml_documentation__Var_22;
    MR_String check_hlds__xml_documentation__Var_30;
    MR_String check_hlds__xml_documentation__Var_31;
    MR_String check_hlds__xml_documentation__Var_33;
    MR_String check_hlds__xml_documentation__Var_36;
    MR_String check_hlds__xml_documentation__Var_38;
    MR_Word check_hlds__xml_documentation__Var_43;

    {
      check_hlds__xml_documentation__Var_13 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__xml_documentation__ArgTypes_8);
    }
    {
      check_hlds__xml_documentation__Var_38 = mdbcomp__sym_name__sym_name_to_string_1_f_0(check_hlds__xml_documentation__ClassName_7);
    }
    {
      check_hlds__xml_documentation__Var_36 = mercury__string__f_43_43_2_f_0((MR_String) ".", check_hlds__xml_documentation__Var_38);
    }
    {
      check_hlds__xml_documentation__Var_30 = mercury__string__f_43_43_2_f_0((MR_String) "constraint", check_hlds__xml_documentation__Var_36);
    }
    {
      check_hlds__xml_documentation__Var_33 = mercury__string__int_to_string_1_f_0(check_hlds__xml_documentation__Var_13);
    }
    {
      check_hlds__xml_documentation__Var_31 = mercury__string__f_43_43_2_f_0((MR_String) "-", check_hlds__xml_documentation__Var_33);
    }
    {
      check_hlds__xml_documentation__Id_9 = mercury__string__f_43_43_2_f_0(check_hlds__xml_documentation__Var_30, check_hlds__xml_documentation__Var_31);
    }
    {
      check_hlds__xml_documentation__XmlName_10 = check_hlds__xml_documentation__name_to_xml_1_f_0(check_hlds__xml_documentation__ClassName_7);
    }
    {
      check_hlds__xml_documentation__Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_15, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_15, 1) = ((MR_Box) (check_hlds__xml_documentation__prog_constraint_to_xml_2_f_0_1));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_15, 3) = ((MR_Box) (check_hlds__xml_documentation__TVarset_4));
    }
    {
      check_hlds__xml_documentation__Var_43 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0, check_hlds__xml_documentation__Var_15, check_hlds__xml_documentation__ArgTypes_8);
    }
    {
      check_hlds__xml_documentation__XmlTypes_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlTypes_11, 0) = ((MR_Box) ((MR_String) "constraint_types"));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlTypes_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlTypes_11, 2) = ((MR_Box) (check_hlds__xml_documentation__Var_43));
    }
    {
      check_hlds__xml_documentation__Var_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_18, 0) = ((MR_Box) ((MR_String) "ref"));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_18, 1) = ((MR_Box) (check_hlds__xml_documentation__Id_9));
    }
    {
      check_hlds__xml_documentation__Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_17, 0) = ((MR_Box) (check_hlds__xml_documentation__Var_18));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__xml_documentation__Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_22, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlTypes_11));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__xml_documentation__Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_21, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlName_10));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_21, 1) = ((MR_Box) (check_hlds__xml_documentation__Var_22));
    }
    {
      check_hlds__xml_documentation__Xml_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_6, 0) = ((MR_Box) ((MR_String) "constraint"));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_6, 1) = ((MR_Box) (check_hlds__xml_documentation__Var_17));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_6, 2) = ((MR_Box) (check_hlds__xml_documentation__Var_21));
    }
    return check_hlds__xml_documentation__Xml_6;
  }
}

static MR_Box MR_CALL 
check_hlds__xml_documentation__fundep_to_xml_3_f_0_1(
  MR_Box check_hlds__xml_documentation__closure_arg,
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
{
  {
    MR_Box check_hlds__xml_documentation__wrapper_arg_2;
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
    MR_Word check_hlds__xml_documentation__conv0_Xml_6;

    {
      check_hlds__xml_documentation__conv0_Xml_6 = check_hlds__xml_documentation__type_param_to_xml_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
    check_hlds__xml_documentation__wrapper_arg_2 = ((MR_Box) (check_hlds__xml_documentation__conv0_Xml_6));
    return check_hlds__xml_documentation__wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
check_hlds__xml_documentation__fundep_to_xml_3_f_0(
  MR_Word check_hlds__xml_documentation__TVarset_5,
  MR_Word check_hlds__xml_documentation__Vars_6,
  MR_Word check_hlds__xml_documentation__HeadVar__3_3)
{
  {
    MR_bool check_hlds__xml_documentation__succeeded;
    MR_Word check_hlds__xml_documentation__Xml_9;
    MR_Word check_hlds__xml_documentation__Domain_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, (MR_Integer) 0)));
    MR_Word check_hlds__xml_documentation__Range_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, (MR_Integer) 1)));
    MR_Word check_hlds__xml_documentation__XmlDomain_10;
    MR_Word check_hlds__xml_documentation__XmlRange_11;
    MR_Word check_hlds__xml_documentation__Var_16;
    MR_Word check_hlds__xml_documentation__Var_17;
    MR_Word check_hlds__xml_documentation__Var_23;
    MR_Word check_hlds__xml_documentation__Var_24;
    MR_Word check_hlds__xml_documentation__Var_32;
    MR_Word check_hlds__xml_documentation__Var_40;
    MR_Word check_hlds__xml_documentation__Var_48;

    {
      check_hlds__xml_documentation__Var_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_23, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_6[1]));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_23, 1) = ((MR_Box) (check_hlds__xml_documentation__fundep_to_xml_3_f_0_1));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_23, 3) = ((MR_Box) (check_hlds__xml_documentation__TVarset_5));
    }
    {
      check_hlds__xml_documentation__Var_24 = hlds__hlds_data__restrict_list_elements_2_f_0((MR_Word) &check_hlds__xml_documentation_scalar_common_1[1], check_hlds__xml_documentation__Domain_7, check_hlds__xml_documentation__Vars_6);
    }
    {
      check_hlds__xml_documentation__Var_32 = mercury__list__map_2_f_0((MR_Word) &check_hlds__xml_documentation_scalar_common_1[1], (MR_Word) &mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0, check_hlds__xml_documentation__Var_23, check_hlds__xml_documentation__Var_24);
    }
    {
      check_hlds__xml_documentation__XmlDomain_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlDomain_10, 0) = ((MR_Box) ((MR_String) "domain"));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlDomain_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlDomain_10, 2) = ((MR_Box) (check_hlds__xml_documentation__Var_32));
    }
    {
      check_hlds__xml_documentation__Var_40 = hlds__hlds_data__restrict_list_elements_2_f_0((MR_Word) &check_hlds__xml_documentation_scalar_common_1[1], check_hlds__xml_documentation__Range_8, check_hlds__xml_documentation__Vars_6);
    }
    {
      check_hlds__xml_documentation__Var_48 = mercury__list__map_2_f_0((MR_Word) &check_hlds__xml_documentation_scalar_common_1[1], (MR_Word) &mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0, check_hlds__xml_documentation__Var_23, check_hlds__xml_documentation__Var_40);
    }
    {
      check_hlds__xml_documentation__XmlRange_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlRange_11, 0) = ((MR_Box) ((MR_String) "range"));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlRange_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlRange_11, 2) = ((MR_Box) (check_hlds__xml_documentation__Var_48));
    }
    {
      check_hlds__xml_documentation__Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_17, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlRange_11));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__xml_documentation__Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_16, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlDomain_10));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_16, 1) = ((MR_Box) (check_hlds__xml_documentation__Var_17));
    }
    {
      check_hlds__xml_documentation__Xml_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_9, 0) = ((MR_Box) ((MR_String) "fundep"));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_9, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_9, 2) = ((MR_Box) (check_hlds__xml_documentation__Var_16));
    }
    return check_hlds__xml_documentation__Xml_9;
  }
}

static MR_Box MR_CALL 
check_hlds__xml_documentation__class_documentation_6_p_0_3(
  MR_Box check_hlds__xml_documentation__closure_arg,
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
{
  {
    MR_Box check_hlds__xml_documentation__wrapper_arg_2;
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
    MR_Word check_hlds__xml_documentation__conv2_Xml_9;

    {
      check_hlds__xml_documentation__conv2_Xml_9 = check_hlds__xml_documentation__fundep_to_xml_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
    check_hlds__xml_documentation__wrapper_arg_2 = ((MR_Box) (check_hlds__xml_documentation__conv2_Xml_9));
    return check_hlds__xml_documentation__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
check_hlds__xml_documentation__class_documentation_6_p_0_2(
  MR_Box check_hlds__xml_documentation__closure_arg,
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
{
  {
    MR_Box check_hlds__xml_documentation__wrapper_arg_2;
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
    MR_Word check_hlds__xml_documentation__conv1_Xml_6;

    {
      check_hlds__xml_documentation__conv1_Xml_6 = check_hlds__xml_documentation__prog_constraint_to_xml_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
    check_hlds__xml_documentation__wrapper_arg_2 = ((MR_Box) (check_hlds__xml_documentation__conv1_Xml_6));
    return check_hlds__xml_documentation__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
check_hlds__xml_documentation__class_documentation_6_p_0_1(
  MR_Box check_hlds__xml_documentation__closure_arg,
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
{
  {
    MR_Box check_hlds__xml_documentation__wrapper_arg_2;
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
    MR_Word check_hlds__xml_documentation__conv0_Xml_6;

    {
      check_hlds__xml_documentation__conv0_Xml_6 = check_hlds__xml_documentation__type_param_to_xml_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
    check_hlds__xml_documentation__wrapper_arg_2 = ((MR_Box) (check_hlds__xml_documentation__conv0_Xml_6));
    return check_hlds__xml_documentation__wrapper_arg_2;
  }
}

static void MR_CALL 
check_hlds__xml_documentation__class_documentation_6_p_0(
  MR_Word check_hlds__xml_documentation__C_7,
  MR_Word check_hlds__xml_documentation__PredTable_8,
  MR_Word check_hlds__xml_documentation__HeadVar__3_3,
  MR_Word check_hlds__xml_documentation__ClassDefn_11,
  MR_Word check_hlds__xml_documentation__STATE_VARIABLE_Xml_0_27,
  MR_Word * check_hlds__xml_documentation__STATE_VARIABLE_Xml_28)
{
  {
    MR_bool check_hlds__xml_documentation__succeeded;
    MR_Word check_hlds__xml_documentation__Name_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, (MR_Integer) 0)));
    MR_Integer check_hlds__xml_documentation__Arity_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, (MR_Integer) 1)));
    MR_Word check_hlds__xml_documentation__TypeClassStatus_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 0)));
    MR_Word check_hlds__xml_documentation__DefinedInThisModule_14;
    MR_Word check_hlds__xml_documentation__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 1)));
    MR_Word check_hlds__xml_documentation__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 2)));
    MR_Word check_hlds__xml_documentation__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 3)));
    MR_Word check_hlds__xml_documentation__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 4)));
    MR_Word check_hlds__xml_documentation__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 5)));
    MR_Word check_hlds__xml_documentation__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 6)));
    MR_Word check_hlds__xml_documentation__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 7)));
    MR_Word check_hlds__xml_documentation__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 8)));
    MR_Word check_hlds__xml_documentation__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 9)));

    {
      check_hlds__xml_documentation__DefinedInThisModule_14 = hlds__status__typeclass_status_defined_in_this_module_1_f_0(check_hlds__xml_documentation__TypeClassStatus_13);
    }
    switch (check_hlds__xml_documentation__DefinedInThisModule_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *check_hlds__xml_documentation__STATE_VARIABLE_Xml_28 = check_hlds__xml_documentation__STATE_VARIABLE_Xml_0_27;
        break;
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__xml_documentation__Xml_12;
          MR_String check_hlds__xml_documentation__Id_15;
          MR_Word check_hlds__xml_documentation__Context_16;
          MR_Word check_hlds__xml_documentation__TVarset_17;
          MR_Word check_hlds__xml_documentation__Vars_18;
          MR_Word check_hlds__xml_documentation__XmlName_19;
          MR_Word check_hlds__xml_documentation__XmlClassVars_20;
          MR_Word check_hlds__xml_documentation__XmlSupers_21;
          MR_Word check_hlds__xml_documentation__XmlFundeps_22;
          MR_Word check_hlds__xml_documentation__XmlMethods_23;
          MR_Word check_hlds__xml_documentation__XmlVisibility_24;
          MR_Word check_hlds__xml_documentation__XmlContext_25;
          MR_Word check_hlds__xml_documentation__Xml0_26;
          MR_Word check_hlds__xml_documentation__Var_31;
          MR_Word check_hlds__xml_documentation__Var_33;
          MR_Word check_hlds__xml_documentation__Var_34;
          MR_Word check_hlds__xml_documentation__Var_36;
          MR_Word check_hlds__xml_documentation__Var_37;
          MR_Word check_hlds__xml_documentation__Var_38;
          MR_Word check_hlds__xml_documentation__Var_40;
          MR_Word check_hlds__xml_documentation__Var_41;
          MR_Word check_hlds__xml_documentation__Var_44;
          MR_Word check_hlds__xml_documentation__Var_45;
          MR_Word check_hlds__xml_documentation__Var_46;
          MR_Word check_hlds__xml_documentation__Var_47;
          MR_Word check_hlds__xml_documentation__Var_48;
          MR_Word check_hlds__xml_documentation__Var_49;
          MR_Word check_hlds__xml_documentation__Var_50;
          MR_Word check_hlds__xml_documentation__Var_62;
          MR_Word check_hlds__xml_documentation__Var_63;
          MR_Word check_hlds__xml_documentation__Var_64;
          MR_Word check_hlds__xml_documentation__Var_65;
          MR_Word check_hlds__xml_documentation__Var_67;
          MR_Word check_hlds__xml_documentation__Var_68;
          MR_Word check_hlds__xml_documentation__Var_69;
          MR_Word check_hlds__xml_documentation__Var_89;
          MR_Word check_hlds__xml_documentation__Var_90;
          MR_Word check_hlds__xml_documentation__Var_91;
          MR_Word check_hlds__xml_documentation__Var_92;
          MR_Word check_hlds__xml_documentation__Var_93;
          MR_Word check_hlds__xml_documentation__Var_94;
          MR_Word check_hlds__xml_documentation__Var_95;
          MR_Word check_hlds__xml_documentation__Var_96;
          MR_Word check_hlds__xml_documentation__Var_97;
          MR_Word check_hlds__xml_documentation__Var_98;
          MR_Word check_hlds__xml_documentation__Var_99;
          MR_Word check_hlds__xml_documentation__Var_100;
          MR_Word check_hlds__xml_documentation__Var_101;
          MR_Word check_hlds__xml_documentation__Var_102;
          MR_Word check_hlds__xml_documentation__Var_103;
          MR_Word check_hlds__xml_documentation__Var_104;
          MR_Word check_hlds__xml_documentation__Var_105;
          MR_Word check_hlds__xml_documentation__Var_106;
          MR_Word check_hlds__xml_documentation__Var_107;
          MR_Word check_hlds__xml_documentation__Var_108;
          MR_Word check_hlds__xml_documentation__Var_109;
          MR_Word check_hlds__xml_documentation__Var_110;
          MR_Word check_hlds__xml_documentation__Var_111;
          MR_Word check_hlds__xml_documentation__Var_112;
          MR_Word check_hlds__xml_documentation__Var_113;
          MR_Word check_hlds__xml_documentation__Var_114;
          MR_Word check_hlds__xml_documentation__Var_115;

          {
            check_hlds__xml_documentation__Id_15 = check_hlds__xml_documentation__sym_name_and_arity_to_id_3_f_0((MR_String) "class", check_hlds__xml_documentation__Name_9, check_hlds__xml_documentation__Arity_10);
          }
          check_hlds__xml_documentation__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 0)));
          check_hlds__xml_documentation__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 1)));
          check_hlds__xml_documentation__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 2)));
          check_hlds__xml_documentation__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 3)));
          check_hlds__xml_documentation__Vars_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 4)));
          check_hlds__xml_documentation__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 5)));
          check_hlds__xml_documentation__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 6)));
          check_hlds__xml_documentation__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 7)));
          check_hlds__xml_documentation__TVarset_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 8)));
          check_hlds__xml_documentation__Context_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 9)));
          {
            check_hlds__xml_documentation__XmlName_19 = check_hlds__xml_documentation__name_to_xml_1_f_0(check_hlds__xml_documentation__Name_9);
          }
          {
            check_hlds__xml_documentation__Var_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_31, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_6[1]));
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_31, 1) = ((MR_Box) (check_hlds__xml_documentation__class_documentation_6_p_0_1));
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_31, 3) = ((MR_Box) (check_hlds__xml_documentation__TVarset_17));
          }
          {
            check_hlds__xml_documentation__XmlClassVars_20 = check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_120_109_108_95_108_105_115_116_95_95_104_111_51_95_95_91_49_93_95_48_3_f_0((MR_String) "class_vars", check_hlds__xml_documentation__Var_31, check_hlds__xml_documentation__Vars_18);
          }
          {
            check_hlds__xml_documentation__Var_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_33, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_6[2]));
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_33, 1) = ((MR_Box) (check_hlds__xml_documentation__class_documentation_6_p_0_2));
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_33, 3) = ((MR_Box) (check_hlds__xml_documentation__TVarset_17));
          }
          check_hlds__xml_documentation__Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 0)));
          check_hlds__xml_documentation__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 1)));
          check_hlds__xml_documentation__Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 2)));
          check_hlds__xml_documentation__Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 3)));
          check_hlds__xml_documentation__Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 4)));
          check_hlds__xml_documentation__Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 5)));
          check_hlds__xml_documentation__Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 6)));
          check_hlds__xml_documentation__Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 7)));
          check_hlds__xml_documentation__Var_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 8)));
          check_hlds__xml_documentation__Var_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 9)));
          {
            check_hlds__xml_documentation__XmlSupers_21 = check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_120_109_108_95_108_105_115_116_95_95_104_111_53_95_95_91_49_93_95_48_3_f_0((MR_String) "superclasses", check_hlds__xml_documentation__Var_33, check_hlds__xml_documentation__Var_34);
          }
          {
            check_hlds__xml_documentation__Var_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_36, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_7[2]));
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_36, 1) = ((MR_Box) (check_hlds__xml_documentation__class_documentation_6_p_0_3));
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_36, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_36, 3) = ((MR_Box) (check_hlds__xml_documentation__TVarset_17));
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_36, 4) = ((MR_Box) (check_hlds__xml_documentation__Vars_18));
          }
          check_hlds__xml_documentation__Var_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 0)));
          check_hlds__xml_documentation__Var_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 1)));
          check_hlds__xml_documentation__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 2)));
          check_hlds__xml_documentation__Var_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 3)));
          check_hlds__xml_documentation__Var_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 4)));
          check_hlds__xml_documentation__Var_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 5)));
          check_hlds__xml_documentation__Var_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 6)));
          check_hlds__xml_documentation__Var_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 7)));
          check_hlds__xml_documentation__Var_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 8)));
          check_hlds__xml_documentation__Var_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 9)));
          {
            check_hlds__xml_documentation__XmlFundeps_22 = check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_120_109_108_95_108_105_115_116_95_95_104_111_52_95_95_91_49_44_32_50_93_95_48_3_f_0((MR_String) "fundeps", check_hlds__xml_documentation__Var_36, check_hlds__xml_documentation__Var_37);
          }
          check_hlds__xml_documentation__Var_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 0)));
          check_hlds__xml_documentation__Var_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 1)));
          check_hlds__xml_documentation__Var_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 2)));
          check_hlds__xml_documentation__Var_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 3)));
          check_hlds__xml_documentation__Var_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 4)));
          check_hlds__xml_documentation__Var_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 5)));
          check_hlds__xml_documentation__Var_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 6)));
          check_hlds__xml_documentation__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 7)));
          check_hlds__xml_documentation__Var_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 8)));
          check_hlds__xml_documentation__Var_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 9)));
          {
            check_hlds__xml_documentation__XmlMethods_23 = check_hlds__xml_documentation__class_methods_to_xml_3_f_0(check_hlds__xml_documentation__C_7, check_hlds__xml_documentation__PredTable_8, check_hlds__xml_documentation__Var_38);
          }
          {
            check_hlds__xml_documentation__XmlVisibility_24 = check_hlds__xml_documentation__typeclass_visibility_to_xml_1_f_0(check_hlds__xml_documentation__TypeClassStatus_13);
          }
          {
            check_hlds__xml_documentation__XmlContext_25 = check_hlds__xml_documentation__prog_context_to_xml_1_f_0(check_hlds__xml_documentation__Context_16);
          }
          {
            check_hlds__xml_documentation__Var_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_41, 0) = ((MR_Box) ((MR_String) "id"));
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_41, 1) = ((MR_Box) (check_hlds__xml_documentation__Id_15));
          }
          {
            check_hlds__xml_documentation__Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_40, 0) = ((MR_Box) (check_hlds__xml_documentation__Var_41));
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            check_hlds__xml_documentation__Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_50, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlContext_25));
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            check_hlds__xml_documentation__Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_49, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlVisibility_24));
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_49, 1) = ((MR_Box) (check_hlds__xml_documentation__Var_50));
          }
          {
            check_hlds__xml_documentation__Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_48, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlMethods_23));
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_48, 1) = ((MR_Box) (check_hlds__xml_documentation__Var_49));
          }
          {
            check_hlds__xml_documentation__Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_47, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlFundeps_22));
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_47, 1) = ((MR_Box) (check_hlds__xml_documentation__Var_48));
          }
          {
            check_hlds__xml_documentation__Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_46, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlSupers_21));
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_46, 1) = ((MR_Box) (check_hlds__xml_documentation__Var_47));
          }
          {
            check_hlds__xml_documentation__Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_45, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlClassVars_20));
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_45, 1) = ((MR_Box) (check_hlds__xml_documentation__Var_46));
          }
          {
            check_hlds__xml_documentation__Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_44, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlName_19));
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_44, 1) = ((MR_Box) (check_hlds__xml_documentation__Var_45));
          }
          {
            check_hlds__xml_documentation__Xml0_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml0_26, 0) = ((MR_Box) ((MR_String) "typeclass"));
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml0_26, 1) = ((MR_Box) (check_hlds__xml_documentation__Var_40));
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml0_26, 2) = ((MR_Box) (check_hlds__xml_documentation__Var_44));
          }
          {
            check_hlds__xml_documentation__Xml_12 = check_hlds__xml_documentation__maybe_add_comment_3_f_0(check_hlds__xml_documentation__C_7, check_hlds__xml_documentation__Context_16, check_hlds__xml_documentation__Xml0_26);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *check_hlds__xml_documentation__STATE_VARIABLE_Xml_28 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__xml_documentation__Xml_12));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__xml_documentation__STATE_VARIABLE_Xml_0_27));
          }
        }
        break;
    }
  }
}

static MR_Word MR_CALL 
check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_120_109_108_95_108_105_115_116_95_95_104_111_52_95_95_91_49_44_32_50_93_95_48_3_f_0(
  MR_String check_hlds__xml_documentation__Tag_5,
  MR_Word check_hlds__xml_documentation__F_6,
  MR_Word check_hlds__xml_documentation__L_7)
{
  {
    MR_bool check_hlds__xml_documentation__succeeded;
    MR_Word check_hlds__xml_documentation__HeadVar__4_4;
    MR_Word check_hlds__xml_documentation__Var_9;

    {
      check_hlds__xml_documentation__Var_9 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_fundep_0, (MR_Word) &mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0, check_hlds__xml_documentation__F_6, check_hlds__xml_documentation__L_7);
    }
    {
      check_hlds__xml_documentation__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__4_4, 0) = ((MR_Box) (check_hlds__xml_documentation__Tag_5));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__4_4, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__4_4, 2) = ((MR_Box) (check_hlds__xml_documentation__Var_9));
    }
    return check_hlds__xml_documentation__HeadVar__4_4;
  }
}

static MR_Word MR_CALL 
check_hlds__xml_documentation__typeclass_visibility_to_xml_1_f_0(
  MR_Word check_hlds__xml_documentation__Status_3)
{
  {
    MR_bool check_hlds__xml_documentation__succeeded;
    MR_Word check_hlds__xml_documentation__HeadVar__2_2;
    MR_String check_hlds__xml_documentation__Visibility_4;
    MR_Word check_hlds__xml_documentation__Var_11;
    MR_Word check_hlds__xml_documentation__Var_12;
    MR_Word check_hlds__xml_documentation__Var_6;

    {
      check_hlds__xml_documentation__Var_6 = hlds__status__typeclass_status_defined_in_impl_section_1_f_0(check_hlds__xml_documentation__Status_3);
    }
    check_hlds__xml_documentation__succeeded = (check_hlds__xml_documentation__Var_6 == (MR_Integer) 1);
    if (check_hlds__xml_documentation__succeeded)
      {
        MR_Word check_hlds__xml_documentation__Var_7 = (MR_Word) check_hlds__xml_documentation__Status_3;

        check_hlds__xml_documentation__succeeded = (check_hlds__xml_documentation__Var_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
        if (check_hlds__xml_documentation__succeeded)
          check_hlds__xml_documentation__Visibility_4 = (MR_String) "abstract";
        else
          check_hlds__xml_documentation__Visibility_4 = (MR_String) "implementation";
      }
    else
      check_hlds__xml_documentation__Visibility_4 = (MR_String) "interface";
    {
      check_hlds__xml_documentation__Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_12, 0) = ((MR_Box) (check_hlds__xml_documentation__Visibility_4));
    }
    {
      check_hlds__xml_documentation__Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_11, 0) = ((MR_Box) (check_hlds__xml_documentation__Var_12));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__xml_documentation__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 0) = ((MR_Box) ((MR_String) "visibility"));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 2) = ((MR_Box) (check_hlds__xml_documentation__Var_11));
    }
    return check_hlds__xml_documentation__HeadVar__2_2;
  }
}

static MR_Box MR_CALL 
check_hlds__xml_documentation__class_methods_to_xml_3_f_0_3(
  MR_Box check_hlds__xml_documentation__closure_arg,
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
{
  {
    MR_Box check_hlds__xml_documentation__wrapper_arg_2;
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
    MR_Word check_hlds__xml_documentation__conv2_Xml_6;

    {
      check_hlds__xml_documentation__conv2_Xml_6 = check_hlds__xml_documentation__predicate_documentation_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
    check_hlds__xml_documentation__wrapper_arg_2 = ((MR_Box) (check_hlds__xml_documentation__conv2_Xml_6));
    return check_hlds__xml_documentation__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
check_hlds__xml_documentation__class_methods_to_xml_3_f_0_2(
  MR_Box check_hlds__xml_documentation__closure_arg,
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
{
  {
    MR_Box check_hlds__xml_documentation__wrapper_arg_2;
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
    MR_Word check_hlds__xml_documentation__conv1_LambdaHeadVar__2_16;

    {
      check_hlds__xml_documentation__conv1_LambdaHeadVar__2_16 = check_hlds__xml_documentation__IntroducedFrom__func__class_methods_to_xml__815__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
    check_hlds__xml_documentation__wrapper_arg_2 = ((MR_Box) (check_hlds__xml_documentation__conv1_LambdaHeadVar__2_16));
    return check_hlds__xml_documentation__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
check_hlds__xml_documentation__class_methods_to_xml_3_f_0_1(
  MR_Box check_hlds__xml_documentation__closure_arg,
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
{
  {
    MR_Box check_hlds__xml_documentation__wrapper_arg_2;
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
    MR_Word check_hlds__xml_documentation__conv0_HeadVar__2_2;

    {
      check_hlds__xml_documentation__conv0_HeadVar__2_2 = hlds__hlds_pred__pred_proc_id_project_pred_id_1_f_0(((MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
    check_hlds__xml_documentation__wrapper_arg_2 = ((MR_Box) (check_hlds__xml_documentation__conv0_HeadVar__2_2));
    return check_hlds__xml_documentation__wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
check_hlds__xml_documentation__class_methods_to_xml_3_f_0(
  MR_Word check_hlds__xml_documentation__C_5,
  MR_Word check_hlds__xml_documentation__PredTable_6,
  MR_Word check_hlds__xml_documentation__Methods_7)
{
  {
    MR_bool check_hlds__xml_documentation__succeeded;
    MR_Word check_hlds__xml_documentation__Xml_8;
    MR_Word check_hlds__xml_documentation__TypeCtorInfo_21_21 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
    MR_Word check_hlds__xml_documentation__AllPredIds_9;
    MR_Word check_hlds__xml_documentation__PredIds_10;
    MR_Word check_hlds__xml_documentation__PredInfos_11;
    MR_Word check_hlds__xml_documentation__Var_14;
    MR_Word check_hlds__xml_documentation__Var_18;
    MR_Word check_hlds__xml_documentation__Var_33;

    {
      check_hlds__xml_documentation__AllPredIds_9 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, check_hlds__xml_documentation__TypeCtorInfo_21_21, (MR_Word) &check_hlds__xml_documentation_scalar_common_2[26], check_hlds__xml_documentation__Methods_7);
    }
    {
      check_hlds__xml_documentation__PredIds_10 = mercury__list__sort_and_remove_dups_1_f_0(check_hlds__xml_documentation__TypeCtorInfo_21_21, check_hlds__xml_documentation__AllPredIds_9);
    }
    {
      check_hlds__xml_documentation__Var_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_14, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_6[6]));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_14, 1) = ((MR_Box) (check_hlds__xml_documentation__class_methods_to_xml_3_f_0_2));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_14, 3) = ((MR_Box) (check_hlds__xml_documentation__PredTable_6));
    }
    {
      check_hlds__xml_documentation__PredInfos_11 = mercury__list__map_2_f_0(check_hlds__xml_documentation__TypeCtorInfo_21_21, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, check_hlds__xml_documentation__Var_14, check_hlds__xml_documentation__PredIds_10);
    }
    {
      check_hlds__xml_documentation__Var_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_18, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_6[7]));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_18, 1) = ((MR_Box) (check_hlds__xml_documentation__class_methods_to_xml_3_f_0_3));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_18, 3) = ((MR_Box) (check_hlds__xml_documentation__C_5));
    }
    {
      check_hlds__xml_documentation__Var_33 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, (MR_Word) &mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0, check_hlds__xml_documentation__Var_18, check_hlds__xml_documentation__PredInfos_11);
    }
    {
      check_hlds__xml_documentation__Xml_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_8, 0) = ((MR_Box) ((MR_String) "methods"));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_8, 2) = ((MR_Box) (check_hlds__xml_documentation__Var_33));
    }
    return check_hlds__xml_documentation__Xml_8;
  }
}

static MR_Box MR_CALL 
check_hlds__xml_documentation__bound_inst_to_xml_2_f_0_1(
  MR_Box check_hlds__xml_documentation__closure_arg,
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
{
  {
    MR_Box check_hlds__xml_documentation__wrapper_arg_2;
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
    MR_Word check_hlds__xml_documentation__conv0_Xml_6;

    {
      check_hlds__xml_documentation__conv0_Xml_6 = check_hlds__xml_documentation__mer_inst_to_xml_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
    check_hlds__xml_documentation__wrapper_arg_2 = ((MR_Box) (check_hlds__xml_documentation__conv0_Xml_6));
    return check_hlds__xml_documentation__wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
check_hlds__xml_documentation__bound_inst_to_xml_2_f_0(
  MR_Word check_hlds__xml_documentation__InstVarSet_4,
  MR_Word check_hlds__xml_documentation__HeadVar__2_2)
{
  {
    MR_bool check_hlds__xml_documentation__succeeded;
    MR_Word check_hlds__xml_documentation__Xml_7;
    MR_Word check_hlds__xml_documentation__ConsId_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word check_hlds__xml_documentation__Insts_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 1)));
    MR_Word check_hlds__xml_documentation__XmlCons_8;
    MR_Word check_hlds__xml_documentation__XmlInsts_9;
    MR_Word check_hlds__xml_documentation__Var_11;
    MR_Word check_hlds__xml_documentation__Var_14;
    MR_Word check_hlds__xml_documentation__Var_15;
    MR_Word check_hlds__xml_documentation__Var_24;

    {
      check_hlds__xml_documentation__XmlCons_8 = check_hlds__xml_documentation__cons_id_to_xml_1_f_0(check_hlds__xml_documentation__ConsId_5);
    }
    {
      check_hlds__xml_documentation__Var_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_11, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_6[4]));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_11, 1) = ((MR_Box) (check_hlds__xml_documentation__bound_inst_to_xml_2_f_0_1));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_11, 3) = ((MR_Box) (check_hlds__xml_documentation__InstVarSet_4));
    }
    {
      check_hlds__xml_documentation__Var_24 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0, check_hlds__xml_documentation__Var_11, check_hlds__xml_documentation__Insts_6);
    }
    {
      check_hlds__xml_documentation__XmlInsts_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlInsts_9, 0) = ((MR_Box) ((MR_String) "insts"));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlInsts_9, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlInsts_9, 2) = ((MR_Box) (check_hlds__xml_documentation__Var_24));
    }
    {
      check_hlds__xml_documentation__Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_15, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlInsts_9));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__xml_documentation__Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_14, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlCons_8));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_14, 1) = ((MR_Box) (check_hlds__xml_documentation__Var_15));
    }
    {
      check_hlds__xml_documentation__Xml_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_7, 0) = ((MR_Box) ((MR_String) "bound_functor"));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_7, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_7, 2) = ((MR_Box) (check_hlds__xml_documentation__Var_14));
    }
    return check_hlds__xml_documentation__Xml_7;
  }
}

static MR_Word MR_CALL 
check_hlds__xml_documentation__cons_id_to_xml_1_f_0(
  MR_Word check_hlds__xml_documentation__HeadVar__1_1)
{
  {
    MR_bool check_hlds__xml_documentation__succeeded;
    MR_Word check_hlds__xml_documentation__HeadVar__2_2;

    switch (MR_tag((MR_Word) check_hlds__xml_documentation__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            check_hlds__xml_documentation__HeadVar__2_2 = check_hlds__xml_documentation__nyi_1_f_0((MR_String) "typeclass_info_cell_constructor");
          }
        }
        break;
      case (MR_Integer) 1:
        {
          {
            check_hlds__xml_documentation__HeadVar__2_2 = check_hlds__xml_documentation__nyi_1_f_0((MR_String) "type_info_cell_constructor");
          }
        }
        break;
      case (MR_Integer) 2:
        {
          {
            check_hlds__xml_documentation__HeadVar__2_2 = check_hlds__xml_documentation__nyi_1_f_0((MR_String) "tabling_info_const");
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__HeadVar__1_1, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                check_hlds__xml_documentation__HeadVar__2_2 = check_hlds__xml_documentation__nyi_1_f_0((MR_String) "table_io_entry_desc");
              }
            }
            break;
          case (MR_Integer) 1:
            {
              {
                check_hlds__xml_documentation__HeadVar__2_2 = check_hlds__xml_documentation__nyi_1_f_0((MR_String) "deep_profiling_proc_layout");
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word check_hlds__xml_documentation__Name_3 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__HeadVar__1_1, (MR_Integer) 1)));
              MR_Integer check_hlds__xml_documentation__Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__HeadVar__1_1, (MR_Integer) 2)));
              MR_Word check_hlds__xml_documentation__Var_8;
              MR_Word check_hlds__xml_documentation__Var_9;
              MR_Word check_hlds__xml_documentation__Var_10;
              MR_Word check_hlds__xml_documentation__Var_11;
              MR_Word check_hlds__xml_documentation__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__HeadVar__1_1, (MR_Integer) 3)));

              {
                check_hlds__xml_documentation__Var_9 = check_hlds__xml_documentation__name_to_xml_1_f_0(check_hlds__xml_documentation__Name_3);
              }
              {
                check_hlds__xml_documentation__Var_11 = check_hlds__xml_documentation__arity_to_xml_1_f_0(check_hlds__xml_documentation__Arity_4);
              }
              {
                check_hlds__xml_documentation__Var_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_10, 0) = ((MR_Box) (check_hlds__xml_documentation__Var_11));
                MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                check_hlds__xml_documentation__Var_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_8, 0) = ((MR_Box) (check_hlds__xml_documentation__Var_9));
                MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_8, 1) = ((MR_Box) (check_hlds__xml_documentation__Var_10));
              }
              {
                check_hlds__xml_documentation__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 0) = ((MR_Box) ((MR_String) "cons"));
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 2) = ((MR_Box) (check_hlds__xml_documentation__Var_8));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Integer check_hlds__xml_documentation__Arity_13 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__HeadVar__1_1, (MR_Integer) 1)));
              MR_Word check_hlds__xml_documentation__Var_16;
              MR_Word check_hlds__xml_documentation__Var_17;
              MR_Word check_hlds__xml_documentation__Var_20;
              MR_Word check_hlds__xml_documentation__Var_21;

              {
                check_hlds__xml_documentation__Var_17 = check_hlds__xml_documentation__name_to_xml_1_f_0((MR_Word) &check_hlds__xml_documentation_scalar_common_5[11]);
              }
              {
                check_hlds__xml_documentation__Var_21 = check_hlds__xml_documentation__arity_to_xml_1_f_0(check_hlds__xml_documentation__Arity_13);
              }
              {
                check_hlds__xml_documentation__Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_20, 0) = ((MR_Box) (check_hlds__xml_documentation__Var_21));
                MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                check_hlds__xml_documentation__Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_16, 0) = ((MR_Box) (check_hlds__xml_documentation__Var_17));
                MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_16, 1) = ((MR_Box) (check_hlds__xml_documentation__Var_20));
              }
              {
                check_hlds__xml_documentation__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 0) = ((MR_Box) ((MR_String) "cons"));
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 2) = ((MR_Box) (check_hlds__xml_documentation__Var_16));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              {
                check_hlds__xml_documentation__HeadVar__2_2 = check_hlds__xml_documentation__nyi_1_f_0((MR_String) "closure_cons");
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Integer check_hlds__xml_documentation__I_23 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__HeadVar__1_1, (MR_Integer) 1)));

              {
                check_hlds__xml_documentation__HeadVar__2_2 = check_hlds__xml_documentation__tagged_int_2_f_0((MR_String) "int", check_hlds__xml_documentation__I_23);
              }
            }
            break;
          case (MR_Integer) 6:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "xml_documentation.m", (MR_String) "function \140check_hlds.xml_documentation.cons_id_to_xml\'/1", (MR_String) "NYI uint");
              }
            }
            break;
          case (MR_Integer) 7:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "xml_documentation.m", (MR_String) "function \140check_hlds.xml_documentation.cons_id_to_xml\'/1", (MR_String) "NYI int8");
              }
            }
            break;
          case (MR_Integer) 8:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "xml_documentation.m", (MR_String) "function \140check_hlds.xml_documentation.cons_id_to_xml\'/1", (MR_String) "NYI uint8");
              }
            }
            break;
          case (MR_Integer) 9:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "xml_documentation.m", (MR_String) "function \140check_hlds.xml_documentation.cons_id_to_xml\'/1", (MR_String) "NYI int16");
              }
            }
            break;
          case (MR_Integer) 10:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "xml_documentation.m", (MR_String) "function \140check_hlds.xml_documentation.cons_id_to_xml\'/1", (MR_String) "NYI uint16");
              }
            }
            break;
          case (MR_Integer) 11:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "xml_documentation.m", (MR_String) "function \140check_hlds.xml_documentation.cons_id_to_xml\'/1", (MR_String) "NYI int32");
              }
            }
            break;
          case (MR_Integer) 12:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "xml_documentation.m", (MR_String) "function \140check_hlds.xml_documentation.cons_id_to_xml\'/1", (MR_String) "NYI uint32");
              }
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Float check_hlds__xml_documentation__F_60 = MR_unbox_float((MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__HeadVar__1_1, (MR_Integer) 1)));

              {
                check_hlds__xml_documentation__HeadVar__2_2 = check_hlds__xml_documentation__tagged_float_2_f_0((MR_String) "float", check_hlds__xml_documentation__F_60);
              }
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Char check_hlds__xml_documentation__C_62 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__HeadVar__1_1, (MR_Integer) 1)));

              {
                check_hlds__xml_documentation__HeadVar__2_2 = check_hlds__xml_documentation__tagged_char_2_f_0((MR_String) "char", check_hlds__xml_documentation__C_62);
              }
            }
            break;
          case (MR_Integer) 15:
            {
              MR_String check_hlds__xml_documentation__S_64 = ((MR_String) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__HeadVar__1_1, (MR_Integer) 1)));

              {
                check_hlds__xml_documentation__HeadVar__2_2 = check_hlds__xml_documentation__tagged_string_2_f_0((MR_String) "string", check_hlds__xml_documentation__S_64);
              }
            }
            break;
          case (MR_Integer) 16:
            {
              {
                check_hlds__xml_documentation__HeadVar__2_2 = check_hlds__xml_documentation__nyi_1_f_0((MR_String) "impl_defined_const");
              }
            }
            break;
          case (MR_Integer) 17:
            {
              {
                check_hlds__xml_documentation__HeadVar__2_2 = check_hlds__xml_documentation__nyi_1_f_0((MR_String) "type_ctor_info_const");
              }
            }
            break;
          case (MR_Integer) 18:
            {
              {
                check_hlds__xml_documentation__HeadVar__2_2 = check_hlds__xml_documentation__nyi_1_f_0((MR_String) "base_typeclass_info_const");
              }
            }
            break;
          case (MR_Integer) 19:
            {
              {
                check_hlds__xml_documentation__HeadVar__2_2 = check_hlds__xml_documentation__nyi_1_f_0((MR_String) "type_info_const");
              }
            }
            break;
          case (MR_Integer) 20:
            {
              {
                check_hlds__xml_documentation__HeadVar__2_2 = check_hlds__xml_documentation__nyi_1_f_0((MR_String) "typeclass_info_const");
              }
            }
            break;
          case (MR_Integer) 21:
            {
              {
                check_hlds__xml_documentation__HeadVar__2_2 = check_hlds__xml_documentation__nyi_1_f_0((MR_String) "ground_term_const");
              }
            }
            break;
        }
        break;
    }
    return check_hlds__xml_documentation__HeadVar__2_2;
  }
}

static MR_Word MR_CALL 
check_hlds__xml_documentation__tagged_char_2_f_0(
  MR_String check_hlds__xml_documentation__E_4,
  MR_Char check_hlds__xml_documentation__C_5)
{
  {
    MR_bool check_hlds__xml_documentation__succeeded;
    MR_Word check_hlds__xml_documentation__HeadVar__3_3;
    MR_Word check_hlds__xml_documentation__Var_7;
    MR_Word check_hlds__xml_documentation__Var_8;
    MR_String check_hlds__xml_documentation__Var_9;

    {
      check_hlds__xml_documentation__Var_9 = mercury__string__char_to_string_1_f_0(check_hlds__xml_documentation__C_5);
    }
    {
      check_hlds__xml_documentation__Var_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_8, 0) = ((MR_Box) (check_hlds__xml_documentation__Var_9));
    }
    {
      check_hlds__xml_documentation__Var_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_7, 0) = ((MR_Box) (check_hlds__xml_documentation__Var_8));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_7, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__xml_documentation__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, 0) = ((MR_Box) (check_hlds__xml_documentation__E_4));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, 2) = ((MR_Box) (check_hlds__xml_documentation__Var_7));
    }
    return check_hlds__xml_documentation__HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
check_hlds__xml_documentation__tagged_float_2_f_0(
  MR_String check_hlds__xml_documentation__E_4,
  MR_Float check_hlds__xml_documentation__F_5)
{
  {
    MR_bool check_hlds__xml_documentation__succeeded;
    MR_Word check_hlds__xml_documentation__HeadVar__3_3;
    MR_Word check_hlds__xml_documentation__Var_7;
    MR_Word check_hlds__xml_documentation__Var_8;
    MR_String check_hlds__xml_documentation__Var_9;

    {
      check_hlds__xml_documentation__Var_9 = mercury__string__float_to_string_1_f_0(check_hlds__xml_documentation__F_5);
    }
    {
      check_hlds__xml_documentation__Var_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_8, 0) = ((MR_Box) (check_hlds__xml_documentation__Var_9));
    }
    {
      check_hlds__xml_documentation__Var_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_7, 0) = ((MR_Box) (check_hlds__xml_documentation__Var_8));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_7, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__xml_documentation__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, 0) = ((MR_Box) (check_hlds__xml_documentation__E_4));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, 2) = ((MR_Box) (check_hlds__xml_documentation__Var_7));
    }
    return check_hlds__xml_documentation__HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
check_hlds__xml_documentation__tagged_int_2_f_0(
  MR_String check_hlds__xml_documentation__E_4,
  MR_Integer check_hlds__xml_documentation__I_5)
{
  {
    MR_bool check_hlds__xml_documentation__succeeded;
    MR_Word check_hlds__xml_documentation__HeadVar__3_3;
    MR_Word check_hlds__xml_documentation__Var_7;
    MR_Word check_hlds__xml_documentation__Var_8;
    MR_String check_hlds__xml_documentation__Var_9;

    {
      check_hlds__xml_documentation__Var_9 = mercury__string__int_to_string_1_f_0(check_hlds__xml_documentation__I_5);
    }
    {
      check_hlds__xml_documentation__Var_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_8, 0) = ((MR_Box) (check_hlds__xml_documentation__Var_9));
    }
    {
      check_hlds__xml_documentation__Var_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_7, 0) = ((MR_Box) (check_hlds__xml_documentation__Var_8));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_7, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__xml_documentation__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, 0) = ((MR_Box) (check_hlds__xml_documentation__E_4));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, 2) = ((MR_Box) (check_hlds__xml_documentation__Var_7));
    }
    return check_hlds__xml_documentation__HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
check_hlds__xml_documentation__arity_to_xml_1_f_0(
  MR_Integer check_hlds__xml_documentation__Arity_3)
{
  {
    MR_bool check_hlds__xml_documentation__succeeded;
    MR_Word check_hlds__xml_documentation__HeadVar__2_2;
    MR_Word check_hlds__xml_documentation__Var_8;
    MR_Word check_hlds__xml_documentation__Var_9;
    MR_String check_hlds__xml_documentation__Var_10;

    {
      check_hlds__xml_documentation__Var_10 = mercury__string__int_to_string_1_f_0(check_hlds__xml_documentation__Arity_3);
    }
    {
      check_hlds__xml_documentation__Var_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_9, 0) = ((MR_Box) (check_hlds__xml_documentation__Var_10));
    }
    {
      check_hlds__xml_documentation__Var_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_8, 0) = ((MR_Box) (check_hlds__xml_documentation__Var_9));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__xml_documentation__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 0) = ((MR_Box) ((MR_String) "arity"));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 2) = ((MR_Box) (check_hlds__xml_documentation__Var_8));
    }
    return check_hlds__xml_documentation__HeadVar__2_2;
  }
}

static MR_Box MR_CALL 
check_hlds__xml_documentation__mer_inst_to_xml_2_f_0_1(
  MR_Box check_hlds__xml_documentation__closure_arg,
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
{
  {
    MR_Box check_hlds__xml_documentation__wrapper_arg_2;
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
    MR_Word check_hlds__xml_documentation__conv0_Xml_7;

    {
      check_hlds__xml_documentation__conv0_Xml_7 = check_hlds__xml_documentation__bound_inst_to_xml_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
    check_hlds__xml_documentation__wrapper_arg_2 = ((MR_Box) (check_hlds__xml_documentation__conv0_Xml_7));
    return check_hlds__xml_documentation__wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
check_hlds__xml_documentation__mer_inst_to_xml_2_f_0(
  MR_Word check_hlds__xml_documentation__InstVarSet_4,
  MR_Word check_hlds__xml_documentation__Inst_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__xml_documentation__succeeded;
        MR_Word check_hlds__xml_documentation__Xml_6;

        switch (MR_tag((MR_Word) check_hlds__xml_documentation__Inst_5)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(check_hlds__xml_documentation__Inst_5)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  check_hlds__xml_documentation__Xml_6 = (MR_Word) &check_hlds__xml_documentation_scalar_common_2[24];
                }
                break;
              case (MR_Integer) 1:
                {
                  check_hlds__xml_documentation__Xml_6 = (MR_Word) &check_hlds__xml_documentation_scalar_common_2[25];
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              check_hlds__xml_documentation__Xml_6 = (MR_Word) &check_hlds__xml_documentation_scalar_common_2[24];
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word check_hlds__xml_documentation__Var_35;
              MR_Word check_hlds__xml_documentation__Var_36;
              MR_Word check_hlds__xml_documentation__U_57 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__xml_documentation__Inst_5, (MR_Integer) 0)));
              MR_String check_hlds__xml_documentation__Var_64;
              MR_Word check_hlds__xml_documentation__Var_69;
              MR_Word check_hlds__xml_documentation__Var_70;
              MR_Word check_hlds__xml_documentation__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__xml_documentation__Inst_5, (MR_Integer) 1)));

              {
                check_hlds__xml_documentation__Var_64 = mercury__string__string_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_uniqueness_0, ((MR_Box) (check_hlds__xml_documentation__U_57)));
              }
              {
                check_hlds__xml_documentation__Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_70, 0) = ((MR_Box) (check_hlds__xml_documentation__Var_64));
              }
              {
                check_hlds__xml_documentation__Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_69, 0) = ((MR_Box) (check_hlds__xml_documentation__Var_70));
                MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                check_hlds__xml_documentation__Var_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_36, 0) = ((MR_Box) ((MR_String) "uniqueness"));
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_36, 2) = ((MR_Box) (check_hlds__xml_documentation__Var_69));
              }
              {
                check_hlds__xml_documentation__Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_35, 0) = ((MR_Box) (check_hlds__xml_documentation__Var_36));
                MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                check_hlds__xml_documentation__Xml_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_6, 0) = ((MR_Box) ((MR_String) "any"));
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_6, 2) = ((MR_Box) (check_hlds__xml_documentation__Var_35));
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__Inst_5, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word check_hlds__xml_documentation__U_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__Inst_5, (MR_Integer) 1)));
                  MR_Word check_hlds__xml_documentation__BoundInsts_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__Inst_5, (MR_Integer) 3)));
                  MR_Word check_hlds__xml_documentation__XmlUniq_11;
                  MR_Word check_hlds__xml_documentation__XmlInsts_12;
                  MR_Word check_hlds__xml_documentation__Var_44;
                  MR_Word check_hlds__xml_documentation__Var_47;
                  MR_Word check_hlds__xml_documentation__Var_48;
                  MR_String check_hlds__xml_documentation__Var_74;
                  MR_Word check_hlds__xml_documentation__Var_79;
                  MR_Word check_hlds__xml_documentation__Var_80;
                  MR_Word check_hlds__xml_documentation__Var_86;
                  MR_Word check_hlds__xml_documentation__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__Inst_5, (MR_Integer) 2)));

                  {
                    check_hlds__xml_documentation__Var_74 = mercury__string__string_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_uniqueness_0, ((MR_Box) (check_hlds__xml_documentation__U_8)));
                  }
                  {
                    check_hlds__xml_documentation__Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_80, 0) = ((MR_Box) (check_hlds__xml_documentation__Var_74));
                  }
                  {
                    check_hlds__xml_documentation__Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_79, 0) = ((MR_Box) (check_hlds__xml_documentation__Var_80));
                    MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    check_hlds__xml_documentation__XmlUniq_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlUniq_11, 0) = ((MR_Box) ((MR_String) "uniqueness"));
                    MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlUniq_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlUniq_11, 2) = ((MR_Box) (check_hlds__xml_documentation__Var_79));
                  }
                  {
                    check_hlds__xml_documentation__Var_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_44, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_6[5]));
                    MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_44, 1) = ((MR_Box) (check_hlds__xml_documentation__mer_inst_to_xml_2_f_0_1));
                    MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_44, 3) = ((MR_Box) (check_hlds__xml_documentation__InstVarSet_4));
                  }
                  {
                    check_hlds__xml_documentation__Var_86 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0, (MR_Word) &mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0, check_hlds__xml_documentation__Var_44, check_hlds__xml_documentation__BoundInsts_10);
                  }
                  {
                    check_hlds__xml_documentation__XmlInsts_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlInsts_12, 0) = ((MR_Box) ((MR_String) "bound_insts"));
                    MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlInsts_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlInsts_12, 2) = ((MR_Box) (check_hlds__xml_documentation__Var_86));
                  }
                  {
                    check_hlds__xml_documentation__Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_48, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlInsts_12));
                    MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    check_hlds__xml_documentation__Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_47, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlUniq_11));
                    MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_47, 1) = ((MR_Box) (check_hlds__xml_documentation__Var_48));
                  }
                  {
                    check_hlds__xml_documentation__Xml_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_6, 0) = ((MR_Box) ((MR_String) "bound"));
                    MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_6, 2) = ((MR_Box) (check_hlds__xml_documentation__Var_47));
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word check_hlds__xml_documentation__Var_40;
                  MR_Word check_hlds__xml_documentation__Var_41;
                  MR_Word check_hlds__xml_documentation__U_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__Inst_5, (MR_Integer) 1)));
                  MR_String check_hlds__xml_documentation__Var_91;
                  MR_Word check_hlds__xml_documentation__Var_96;
                  MR_Word check_hlds__xml_documentation__Var_97;
                  MR_Word check_hlds__xml_documentation__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__Inst_5, (MR_Integer) 2)));

                  {
                    check_hlds__xml_documentation__Var_91 = mercury__string__string_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_uniqueness_0, ((MR_Box) (check_hlds__xml_documentation__U_56)));
                  }
                  {
                    check_hlds__xml_documentation__Var_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_97, 0) = ((MR_Box) (check_hlds__xml_documentation__Var_91));
                  }
                  {
                    check_hlds__xml_documentation__Var_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_96, 0) = ((MR_Box) (check_hlds__xml_documentation__Var_97));
                    MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_96, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    check_hlds__xml_documentation__Var_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_41, 0) = ((MR_Box) ((MR_String) "uniqueness"));
                    MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_41, 2) = ((MR_Box) (check_hlds__xml_documentation__Var_96));
                  }
                  {
                    check_hlds__xml_documentation__Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_40, 0) = ((MR_Box) (check_hlds__xml_documentation__Var_41));
                    MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    check_hlds__xml_documentation__Xml_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_6, 0) = ((MR_Box) ((MR_String) "ground"));
                    MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_6, 2) = ((MR_Box) (check_hlds__xml_documentation__Var_40));
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word check_hlds__xml_documentation__InstVar_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__Inst_5, (MR_Integer) 1)));
                  MR_String check_hlds__xml_documentation__InstVarName_16;

                  {
                    check_hlds__xml_documentation__InstVarName_16 = mercury__varset__lookup_name_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, check_hlds__xml_documentation__InstVarSet_4, check_hlds__xml_documentation__InstVar_15);
                  }
                  {
                    check_hlds__xml_documentation__Xml_6 = check_hlds__xml_documentation__tagged_string_2_f_0((MR_String) "inst_var", check_hlds__xml_documentation__InstVarName_16);
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word check_hlds__xml_documentation__SubInst_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__Inst_5, (MR_Integer) 2)));
                  MR_Word check_hlds__xml_documentation__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__Inst_5, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word check_hlds__xml_documentation__next_value_of_Inst_5 = check_hlds__xml_documentation__SubInst_18;

                    check_hlds__xml_documentation__Inst_5 = check_hlds__xml_documentation__next_value_of_Inst_5;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word check_hlds__xml_documentation__Name_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__Inst_5, (MR_Integer) 1)));
                  MR_Word check_hlds__xml_documentation__XmlName_20;
                  MR_Word check_hlds__xml_documentation__Var_27;

                  {
                    check_hlds__xml_documentation__XmlName_20 = check_hlds__xml_documentation__inst_name_to_xml_2_f_0(check_hlds__xml_documentation__InstVarSet_4, check_hlds__xml_documentation__Name_19);
                  }
                  {
                    check_hlds__xml_documentation__Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_27, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlName_20));
                    MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    check_hlds__xml_documentation__Xml_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_6, 0) = ((MR_Box) ((MR_String) "defined_inst"));
                    MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_6, 2) = ((MR_Box) (check_hlds__xml_documentation__Var_27));
                  }
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word check_hlds__xml_documentation__SymName_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__Inst_5, (MR_Integer) 1)));
                  MR_Word check_hlds__xml_documentation__ArgInsts_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__Inst_5, (MR_Integer) 2)));
                  MR_Word check_hlds__xml_documentation__Var_23;
                  MR_Word check_hlds__xml_documentation__Var_24;

                  {
                    check_hlds__xml_documentation__Var_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_24, 0) = ((MR_Box) (check_hlds__xml_documentation__SymName_21));
                    MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_24, 1) = ((MR_Box) (check_hlds__xml_documentation__ArgInsts_22));
                  }
                  {
                    check_hlds__xml_documentation__Var_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__Var_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                    MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__Var_23, 1) = ((MR_Box) (check_hlds__xml_documentation__Var_24));
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word check_hlds__xml_documentation__next_value_of_Inst_5 = check_hlds__xml_documentation__Var_23;

                    check_hlds__xml_documentation__Inst_5 = check_hlds__xml_documentation__next_value_of_Inst_5;
                  }
                  continue;
                }
                break;
            }
            break;
        }
        return check_hlds__xml_documentation__Xml_6;
      }
      break;
    }
}

static MR_Word MR_CALL 
check_hlds__xml_documentation__tagged_string_2_f_0(
  MR_String check_hlds__xml_documentation__E_4,
  MR_String check_hlds__xml_documentation__S_5)
{
  {
    MR_bool check_hlds__xml_documentation__succeeded;
    MR_Word check_hlds__xml_documentation__HeadVar__3_3;
    MR_Word check_hlds__xml_documentation__Var_7;
    MR_Word check_hlds__xml_documentation__Var_8;

    {
      check_hlds__xml_documentation__Var_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_8, 0) = ((MR_Box) (check_hlds__xml_documentation__S_5));
    }
    {
      check_hlds__xml_documentation__Var_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_7, 0) = ((MR_Box) (check_hlds__xml_documentation__Var_8));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_7, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__xml_documentation__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, 0) = ((MR_Box) (check_hlds__xml_documentation__E_4));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, 2) = ((MR_Box) (check_hlds__xml_documentation__Var_7));
    }
    return check_hlds__xml_documentation__HeadVar__3_3;
  }
}

static MR_Box MR_CALL 
check_hlds__xml_documentation__inst_name_to_xml_2_f_0_1(
  MR_Box check_hlds__xml_documentation__closure_arg,
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
{
  {
    MR_Box check_hlds__xml_documentation__wrapper_arg_2;
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
    MR_Word check_hlds__xml_documentation__conv0_Xml_6;

    {
      check_hlds__xml_documentation__conv0_Xml_6 = check_hlds__xml_documentation__mer_inst_to_xml_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
    check_hlds__xml_documentation__wrapper_arg_2 = ((MR_Box) (check_hlds__xml_documentation__conv0_Xml_6));
    return check_hlds__xml_documentation__wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
check_hlds__xml_documentation__inst_name_to_xml_2_f_0(
  MR_Word check_hlds__xml_documentation__InstVarSet_1,
  MR_Word check_hlds__xml_documentation__HeadVar__2_2)
{
  {
    MR_bool check_hlds__xml_documentation__succeeded;
    MR_Word check_hlds__xml_documentation__HeadVar__3_3;

    switch (MR_tag((MR_Word) check_hlds__xml_documentation__HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word check_hlds__xml_documentation__Name_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 0)));
          MR_Word check_hlds__xml_documentation__Insts_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 1)));
          MR_Word check_hlds__xml_documentation__Ref_8;
          MR_Word check_hlds__xml_documentation__XmlName_9;
          MR_Word check_hlds__xml_documentation__XmlInsts_10;
          MR_String check_hlds__xml_documentation__Var_12;
          MR_Integer check_hlds__xml_documentation__Var_14;
          MR_Word check_hlds__xml_documentation__Var_16;
          MR_Word check_hlds__xml_documentation__Var_18;
          MR_Word check_hlds__xml_documentation__Var_20;
          MR_Word check_hlds__xml_documentation__Var_21;

          {
            check_hlds__xml_documentation__Var_14 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__xml_documentation__Insts_6);
          }
          {
            check_hlds__xml_documentation__Var_12 = check_hlds__xml_documentation__sym_name_and_arity_to_id_3_f_0((MR_String) "inst", check_hlds__xml_documentation__Name_5, check_hlds__xml_documentation__Var_14);
          }
          {
            check_hlds__xml_documentation__Ref_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Ref_8, 0) = ((MR_Box) ((MR_String) "ref"));
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Ref_8, 1) = ((MR_Box) (check_hlds__xml_documentation__Var_12));
          }
          {
            check_hlds__xml_documentation__XmlName_9 = check_hlds__xml_documentation__name_to_xml_1_f_0(check_hlds__xml_documentation__Name_5);
          }
          {
            check_hlds__xml_documentation__Var_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_16, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_6[4]));
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_16, 1) = ((MR_Box) (check_hlds__xml_documentation__inst_name_to_xml_2_f_0_1));
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_16, 3) = ((MR_Box) (check_hlds__xml_documentation__InstVarSet_1));
          }
          {
            check_hlds__xml_documentation__XmlInsts_10 = check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_120_109_108_95_108_105_115_116_95_95_104_111_54_95_95_91_49_93_95_48_3_f_0((MR_String) "inst_args", check_hlds__xml_documentation__Var_16, check_hlds__xml_documentation__Insts_6);
          }
          {
            check_hlds__xml_documentation__Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_18, 0) = ((MR_Box) (check_hlds__xml_documentation__Ref_8));
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            check_hlds__xml_documentation__Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_21, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlInsts_10));
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            check_hlds__xml_documentation__Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_20, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlName_9));
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_20, 1) = ((MR_Box) (check_hlds__xml_documentation__Var_21));
          }
          {
            check_hlds__xml_documentation__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, 0) = ((MR_Box) ((MR_String) "user_inst"));
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, 1) = ((MR_Box) (check_hlds__xml_documentation__Var_18));
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, 2) = ((MR_Box) (check_hlds__xml_documentation__Var_20));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          {
            check_hlds__xml_documentation__HeadVar__3_3 = check_hlds__xml_documentation__nyi_1_f_0((MR_String) "unify_inst");
          }
        }
        break;
      case (MR_Integer) 2:
        {
          check_hlds__xml_documentation__HeadVar__3_3 = (MR_Word) &check_hlds__xml_documentation_scalar_common_2[22];
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              check_hlds__xml_documentation__HeadVar__3_3 = (MR_Word) &check_hlds__xml_documentation_scalar_common_2[21];
            }
            break;
          case (MR_Integer) 1:
            {
              check_hlds__xml_documentation__HeadVar__3_3 = (MR_Word) &check_hlds__xml_documentation_scalar_common_2[20];
            }
            break;
          case (MR_Integer) 2:
            {
              {
                check_hlds__xml_documentation__HeadVar__3_3 = check_hlds__xml_documentation__nyi_1_f_0((MR_String) "shared_inst");
              }
            }
            break;
          case (MR_Integer) 3:
            {
              check_hlds__xml_documentation__HeadVar__3_3 = (MR_Word) &check_hlds__xml_documentation_scalar_common_2[23];
            }
            break;
          case (MR_Integer) 4:
            {
              {
                check_hlds__xml_documentation__HeadVar__3_3 = check_hlds__xml_documentation__nyi_1_f_0((MR_String) "typed_ground");
              }
            }
            break;
          case (MR_Integer) 5:
            {
              {
                check_hlds__xml_documentation__HeadVar__3_3 = check_hlds__xml_documentation__nyi_1_f_0((MR_String) "typed_inst");
              }
            }
            break;
        }
        break;
    }
    return check_hlds__xml_documentation__HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_120_109_108_95_108_105_115_116_95_95_104_111_54_95_95_91_49_93_95_48_3_f_0(
  MR_String check_hlds__xml_documentation__Tag_5,
  MR_Word check_hlds__xml_documentation__F_6,
  MR_Word check_hlds__xml_documentation__L_7)
{
  {
    MR_bool check_hlds__xml_documentation__succeeded;
    MR_Word check_hlds__xml_documentation__HeadVar__4_4;
    MR_Word check_hlds__xml_documentation__Var_9;

    {
      check_hlds__xml_documentation__Var_9 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0, check_hlds__xml_documentation__F_6, check_hlds__xml_documentation__L_7);
    }
    {
      check_hlds__xml_documentation__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__4_4, 0) = ((MR_Box) (check_hlds__xml_documentation__Tag_5));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__4_4, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__4_4, 2) = ((MR_Box) (check_hlds__xml_documentation__Var_9));
    }
    return check_hlds__xml_documentation__HeadVar__4_4;
  }
}

static MR_Box MR_CALL 
check_hlds__xml_documentation__mer_mode_to_xml_2_f_0_2(
  MR_Box check_hlds__xml_documentation__closure_arg,
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
{
  {
    MR_Box check_hlds__xml_documentation__wrapper_arg_2;
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
    MR_Word check_hlds__xml_documentation__conv1_Xml_6;

    {
      check_hlds__xml_documentation__conv1_Xml_6 = check_hlds__xml_documentation__mer_inst_to_xml_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
    check_hlds__xml_documentation__wrapper_arg_2 = ((MR_Box) (check_hlds__xml_documentation__conv1_Xml_6));
    return check_hlds__xml_documentation__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
check_hlds__xml_documentation__mer_mode_to_xml_2_f_0_1(
  MR_Box check_hlds__xml_documentation__closure_arg,
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
{
  {
    MR_Box check_hlds__xml_documentation__wrapper_arg_2;
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
    MR_Word check_hlds__xml_documentation__conv0_Xml_6;

    {
      check_hlds__xml_documentation__conv0_Xml_6 = check_hlds__xml_documentation__mer_inst_to_xml_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
    check_hlds__xml_documentation__wrapper_arg_2 = ((MR_Box) (check_hlds__xml_documentation__conv0_Xml_6));
    return check_hlds__xml_documentation__wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
check_hlds__xml_documentation__mer_mode_to_xml_2_f_0(
  MR_Word check_hlds__xml_documentation__InstVarSet_4,
  MR_Word check_hlds__xml_documentation__Mode_5)
{
  {
    MR_bool check_hlds__xml_documentation__succeeded;
    MR_Word check_hlds__xml_documentation__Xml_6;

    if (((MR_tag((MR_Word) check_hlds__xml_documentation__Mode_5)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word check_hlds__xml_documentation__A_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Mode_5, (MR_Integer) 0)));
        MR_Word check_hlds__xml_documentation__B_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Mode_5, (MR_Integer) 1)));
        MR_Word check_hlds__xml_documentation__XmlFrom_9;
        MR_Word check_hlds__xml_documentation__XmlTo_10;
        MR_Word check_hlds__xml_documentation__Var_29;
        MR_Word check_hlds__xml_documentation__Var_30;
        MR_Word check_hlds__xml_documentation__Var_34;
        MR_Word check_hlds__xml_documentation__Var_38;
        MR_Word check_hlds__xml_documentation__Var_39;
        MR_Word check_hlds__xml_documentation__Var_53;
        MR_Word check_hlds__xml_documentation__Var_60;

        {
          check_hlds__xml_documentation__Var_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_29, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_6[4]));
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_29, 1) = ((MR_Box) (check_hlds__xml_documentation__mer_mode_to_xml_2_f_0_1));
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_29, 3) = ((MR_Box) (check_hlds__xml_documentation__InstVarSet_4));
        }
        {
          check_hlds__xml_documentation__Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_30, 0) = ((MR_Box) (check_hlds__xml_documentation__A_7));
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          check_hlds__xml_documentation__Var_53 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0, check_hlds__xml_documentation__Var_29, check_hlds__xml_documentation__Var_30);
        }
        {
          check_hlds__xml_documentation__XmlFrom_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlFrom_9, 0) = ((MR_Box) ((MR_String) "from"));
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlFrom_9, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlFrom_9, 2) = ((MR_Box) (check_hlds__xml_documentation__Var_53));
        }
        {
          check_hlds__xml_documentation__Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_34, 0) = ((MR_Box) (check_hlds__xml_documentation__B_8));
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          check_hlds__xml_documentation__Var_60 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0, check_hlds__xml_documentation__Var_29, check_hlds__xml_documentation__Var_34);
        }
        {
          check_hlds__xml_documentation__XmlTo_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlTo_10, 0) = ((MR_Box) ((MR_String) "to"));
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlTo_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlTo_10, 2) = ((MR_Box) (check_hlds__xml_documentation__Var_60));
        }
        {
          check_hlds__xml_documentation__Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_39, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlTo_10));
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          check_hlds__xml_documentation__Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_38, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlFrom_9));
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_38, 1) = ((MR_Box) (check_hlds__xml_documentation__Var_39));
        }
        {
          check_hlds__xml_documentation__Xml_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_6, 0) = ((MR_Box) ((MR_String) "inst_to_inst"));
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_6, 2) = ((MR_Box) (check_hlds__xml_documentation__Var_38));
        }
      }
    else
      {
        MR_Word check_hlds__xml_documentation__Name_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Mode_5, (MR_Integer) 0)));
        MR_Word check_hlds__xml_documentation__Args_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Mode_5, (MR_Integer) 1)));
        MR_Word check_hlds__xml_documentation__Ref_13;
        MR_Word check_hlds__xml_documentation__XmlArgs_14;
        MR_String check_hlds__xml_documentation__Var_16;
        MR_Integer check_hlds__xml_documentation__Var_18;
        MR_Word check_hlds__xml_documentation__Var_20;
        MR_Word check_hlds__xml_documentation__Var_22;
        MR_Word check_hlds__xml_documentation__Var_24;
        MR_Word check_hlds__xml_documentation__Var_25;
        MR_Word check_hlds__xml_documentation__Var_26;
        MR_String check_hlds__xml_documentation__Var_66;
        MR_String check_hlds__xml_documentation__Var_67;
        MR_String check_hlds__xml_documentation__Var_69;
        MR_String check_hlds__xml_documentation__Var_72;
        MR_String check_hlds__xml_documentation__Var_74;
        MR_Word check_hlds__xml_documentation__Var_79;

        {
          check_hlds__xml_documentation__Var_18 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__xml_documentation__Args_12);
        }
        {
          check_hlds__xml_documentation__Var_74 = mdbcomp__sym_name__sym_name_to_string_1_f_0(check_hlds__xml_documentation__Name_11);
        }
        {
          check_hlds__xml_documentation__Var_72 = mercury__string__f_43_43_2_f_0((MR_String) ".", check_hlds__xml_documentation__Var_74);
        }
        {
          check_hlds__xml_documentation__Var_66 = mercury__string__f_43_43_2_f_0((MR_String) "mode", check_hlds__xml_documentation__Var_72);
        }
        {
          check_hlds__xml_documentation__Var_69 = mercury__string__int_to_string_1_f_0(check_hlds__xml_documentation__Var_18);
        }
        {
          check_hlds__xml_documentation__Var_67 = mercury__string__f_43_43_2_f_0((MR_String) "-", check_hlds__xml_documentation__Var_69);
        }
        {
          check_hlds__xml_documentation__Var_16 = mercury__string__f_43_43_2_f_0(check_hlds__xml_documentation__Var_66, check_hlds__xml_documentation__Var_67);
        }
        {
          check_hlds__xml_documentation__Ref_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Ref_13, 0) = ((MR_Box) ((MR_String) "ref"));
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Ref_13, 1) = ((MR_Box) (check_hlds__xml_documentation__Var_16));
        }
        {
          check_hlds__xml_documentation__Var_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_20, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_6[4]));
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_20, 1) = ((MR_Box) (check_hlds__xml_documentation__mer_mode_to_xml_2_f_0_2));
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_20, 3) = ((MR_Box) (check_hlds__xml_documentation__InstVarSet_4));
        }
        {
          check_hlds__xml_documentation__Var_79 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0, check_hlds__xml_documentation__Var_20, check_hlds__xml_documentation__Args_12);
        }
        {
          check_hlds__xml_documentation__XmlArgs_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlArgs_14, 0) = ((MR_Box) ((MR_String) "mode_args"));
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlArgs_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlArgs_14, 2) = ((MR_Box) (check_hlds__xml_documentation__Var_79));
        }
        {
          check_hlds__xml_documentation__Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_22, 0) = ((MR_Box) (check_hlds__xml_documentation__Ref_13));
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          check_hlds__xml_documentation__Var_25 = check_hlds__xml_documentation__name_to_xml_1_f_0(check_hlds__xml_documentation__Name_11);
        }
        {
          check_hlds__xml_documentation__Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_26, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlArgs_14));
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          check_hlds__xml_documentation__Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_24, 0) = ((MR_Box) (check_hlds__xml_documentation__Var_25));
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_24, 1) = ((MR_Box) (check_hlds__xml_documentation__Var_26));
        }
        {
          check_hlds__xml_documentation__Xml_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_6, 0) = ((MR_Box) ((MR_String) "user_defined_mode"));
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_6, 1) = ((MR_Box) (check_hlds__xml_documentation__Var_22));
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_6, 2) = ((MR_Box) (check_hlds__xml_documentation__Var_24));
        }
      }
    return check_hlds__xml_documentation__Xml_6;
  }
}

static void MR_CALL 
check_hlds__xml_documentation__pred_mode_documentation_5_p_0(
  MR_Word check_hlds__xml_documentation___C_6,
  MR_Integer check_hlds__xml_documentation___ProcId_7,
  MR_Word check_hlds__xml_documentation__ProcInfo_8,
  MR_Word check_hlds__xml_documentation__STATE_VARIABLE_Xml_0_15,
  MR_Word * check_hlds__xml_documentation__STATE_VARIABLE_Xml_16)
{
  {
    MR_bool check_hlds__xml_documentation__succeeded;

    {
      check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_109_111_100_101_95_100_111_99_117_109_101_110_116_97_116_105_111_110_95_95_91_49_44_32_50_93_95_48_5_p_0(check_hlds__xml_documentation__ProcInfo_8, check_hlds__xml_documentation__STATE_VARIABLE_Xml_0_15, check_hlds__xml_documentation__STATE_VARIABLE_Xml_16);
    }
  }
}

static MR_Box MR_CALL 
check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_109_111_100_101_95_100_111_99_117_109_101_110_116_97_116_105_111_110_95_95_91_49_44_32_50_93_95_48_5_p_0_1(
  MR_Box check_hlds__xml_documentation__closure_arg,
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
{
  {
    MR_Box check_hlds__xml_documentation__wrapper_arg_2;
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
    MR_Word check_hlds__xml_documentation__conv0_Xml_6;

    {
      check_hlds__xml_documentation__conv0_Xml_6 = check_hlds__xml_documentation__mer_mode_to_xml_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
    check_hlds__xml_documentation__wrapper_arg_2 = ((MR_Box) (check_hlds__xml_documentation__conv0_Xml_6));
    return check_hlds__xml_documentation__wrapper_arg_2;
  }
}

static void MR_CALL 
check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_109_111_100_101_95_100_111_99_117_109_101_110_116_97_116_105_111_110_95_95_91_49_44_32_50_93_95_48_5_p_0(
  MR_Word check_hlds__xml_documentation__ProcInfo_8,
  MR_Word check_hlds__xml_documentation__STATE_VARIABLE_Xml_0_15,
  MR_Word * check_hlds__xml_documentation__STATE_VARIABLE_Xml_16)
{
  {
    MR_bool check_hlds__xml_documentation__succeeded;
    MR_Word check_hlds__xml_documentation__Xml_9;
    MR_Word check_hlds__xml_documentation__IVarSet_10;
    MR_Word check_hlds__xml_documentation__Modes_11;
    MR_Word check_hlds__xml_documentation__Determinism_12;
    MR_Word check_hlds__xml_documentation__XmlModes_13;
    MR_Word check_hlds__xml_documentation__XmlDet_14;
    MR_Word check_hlds__xml_documentation__Var_18;
    MR_Word check_hlds__xml_documentation__Var_21;
    MR_Word check_hlds__xml_documentation__Var_22;
    MR_Word check_hlds__xml_documentation__Var_32;

    {
      hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(check_hlds__xml_documentation__ProcInfo_8, &check_hlds__xml_documentation__IVarSet_10);
    }
    {
      hlds__hlds_pred__proc_info_declared_argmodes_2_p_0(check_hlds__xml_documentation__ProcInfo_8, &check_hlds__xml_documentation__Modes_11);
    }
    {
      hlds__hlds_pred__proc_info_interface_determinism_2_p_0(check_hlds__xml_documentation__ProcInfo_8, &check_hlds__xml_documentation__Determinism_12);
    }
    {
      check_hlds__xml_documentation__Var_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_18, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_6[3]));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_18, 1) = ((MR_Box) (check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_109_111_100_101_95_100_111_99_117_109_101_110_116_97_116_105_111_110_95_95_91_49_44_32_50_93_95_48_5_p_0_1));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_18, 3) = ((MR_Box) (check_hlds__xml_documentation__IVarSet_10));
    }
    {
      check_hlds__xml_documentation__Var_32 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, (MR_Word) &mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0, check_hlds__xml_documentation__Var_18, check_hlds__xml_documentation__Modes_11);
    }
    {
      check_hlds__xml_documentation__XmlModes_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlModes_13, 0) = ((MR_Box) ((MR_String) "modes"));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlModes_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlModes_13, 2) = ((MR_Box) (check_hlds__xml_documentation__Var_32));
    }
    check_hlds__xml_documentation__XmlDet_14 = ((&check_hlds__xml_documentation_vector_common_9[0 + check_hlds__xml_documentation__Determinism_12]))->check_hlds__xml_documentation__vector_common_type_9_0__vct_9_f_0;
    {
      check_hlds__xml_documentation__Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_22, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlDet_14));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__xml_documentation__Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_21, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlModes_13));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_21, 1) = ((MR_Box) (check_hlds__xml_documentation__Var_22));
    }
    {
      check_hlds__xml_documentation__Xml_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_9, 0) = ((MR_Box) ((MR_String) "pred_mode"));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_9, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_9, 2) = ((MR_Box) (check_hlds__xml_documentation__Var_21));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *check_hlds__xml_documentation__STATE_VARIABLE_Xml_16 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__xml_documentation__Xml_9));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__xml_documentation__STATE_VARIABLE_Xml_0_15));
    }
  }
}

static void MR_CALL 
check_hlds__xml_documentation__pred_documentation_5_p_0(
  MR_Word check_hlds__xml_documentation__C_6,
  MR_Word check_hlds__xml_documentation___PredId_7,
  MR_Word check_hlds__xml_documentation__PredInfo_8,
  MR_Word check_hlds__xml_documentation__STATE_VARIABLE_Xml_0_14,
  MR_Word * check_hlds__xml_documentation__STATE_VARIABLE_Xml_15)
{
  {
    MR_bool check_hlds__xml_documentation__succeeded;

    {
      check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_100_111_99_117_109_101_110_116_97_116_105_111_110_95_95_91_50_93_95_48_5_p_0(check_hlds__xml_documentation__C_6, check_hlds__xml_documentation__PredInfo_8, check_hlds__xml_documentation__STATE_VARIABLE_Xml_0_14, check_hlds__xml_documentation__STATE_VARIABLE_Xml_15);
    }
  }
}

static void MR_CALL 
check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_100_111_99_117_109_101_110_116_97_116_105_111_110_95_95_91_50_93_95_48_5_p_0(
  MR_Word check_hlds__xml_documentation__C_6,
  MR_Word check_hlds__xml_documentation__PredInfo_8,
  MR_Word check_hlds__xml_documentation__STATE_VARIABLE_Xml_0_14,
  MR_Word * check_hlds__xml_documentation__STATE_VARIABLE_Xml_15)
{
  {
    MR_bool check_hlds__xml_documentation__succeeded;
    MR_Word check_hlds__xml_documentation__PredStatus_10;
    MR_Word check_hlds__xml_documentation__Origin_11;
    MR_Word check_hlds__xml_documentation__Markers_12;
    MR_Word check_hlds__xml_documentation__Var_16;
    MR_Word check_hlds__xml_documentation__Var_13;
    MR_Word check_hlds__xml_documentation__Var_17;

    {
      hlds__hlds_pred__pred_info_get_status_2_p_0(check_hlds__xml_documentation__PredInfo_8, &check_hlds__xml_documentation__PredStatus_10);
    }
    {
      hlds__hlds_pred__pred_info_get_origin_2_p_0(check_hlds__xml_documentation__PredInfo_8, &check_hlds__xml_documentation__Origin_11);
    }
    {
      hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__xml_documentation__PredInfo_8, &check_hlds__xml_documentation__Markers_12);
    }
    {
      check_hlds__xml_documentation__Var_16 = hlds__status__pred_status_defined_in_this_module_1_f_0(check_hlds__xml_documentation__PredStatus_10);
    }
    check_hlds__xml_documentation__succeeded = (check_hlds__xml_documentation__Var_16 == (MR_Integer) 1);
    if (check_hlds__xml_documentation__succeeded)
      {
        check_hlds__xml_documentation__succeeded = ((((MR_tag((MR_Word) check_hlds__xml_documentation__Origin_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__Origin_11, (MR_Integer) 0)))) == (MR_Integer) 6)));
        if (check_hlds__xml_documentation__succeeded)
          {
            check_hlds__xml_documentation__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__Origin_11, (MR_Integer) 1)));
            check_hlds__xml_documentation__Var_17 = (MR_Integer) 11;
            {
              check_hlds__xml_documentation__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__xml_documentation__Markers_12, check_hlds__xml_documentation__Var_17);
            }
            check_hlds__xml_documentation__succeeded = !(check_hlds__xml_documentation__succeeded);
          }
      }
    if (check_hlds__xml_documentation__succeeded)
      {
        MR_Word check_hlds__xml_documentation__Xml_9;

        {
          check_hlds__xml_documentation__Xml_9 = check_hlds__xml_documentation__predicate_documentation_2_f_0(check_hlds__xml_documentation__C_6, check_hlds__xml_documentation__PredInfo_8);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__xml_documentation__STATE_VARIABLE_Xml_15 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__xml_documentation__Xml_9));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__xml_documentation__STATE_VARIABLE_Xml_0_14));
        }
      }
    else
      *check_hlds__xml_documentation__STATE_VARIABLE_Xml_15 = check_hlds__xml_documentation__STATE_VARIABLE_Xml_0_14;
  }
}

static void MR_CALL 
check_hlds__xml_documentation__predicate_documentation_2_f_0_3(
  MR_Box check_hlds__xml_documentation__closure_arg,
  MR_Box check_hlds__xml_documentation__wrapper_arg_1,
  MR_Box check_hlds__xml_documentation__wrapper_arg_2,
  MR_Box check_hlds__xml_documentation__wrapper_arg_3,
  MR_Box * check_hlds__xml_documentation__wrapper_arg_4)
{
  {
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
    MR_Word check_hlds__xml_documentation__conv3_STATE_VARIABLE_Xml_16;

    {
      check_hlds__xml_documentation__pred_mode_documentation_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Integer) check_hlds__xml_documentation__wrapper_arg_1), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_2), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_3), &check_hlds__xml_documentation__conv3_STATE_VARIABLE_Xml_16);
    }
    *check_hlds__xml_documentation__wrapper_arg_4 = ((MR_Box) (check_hlds__xml_documentation__conv3_STATE_VARIABLE_Xml_16));
  }
}

static MR_Box MR_CALL 
check_hlds__xml_documentation__predicate_documentation_2_f_0_2(
  MR_Box check_hlds__xml_documentation__closure_arg,
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
{
  {
    MR_Box check_hlds__xml_documentation__wrapper_arg_2;
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
    MR_Word check_hlds__xml_documentation__conv2_Xml_6;

    {
      check_hlds__xml_documentation__conv2_Xml_6 = check_hlds__xml_documentation__type_param_to_xml_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
    check_hlds__xml_documentation__wrapper_arg_2 = ((MR_Box) (check_hlds__xml_documentation__conv2_Xml_6));
    return check_hlds__xml_documentation__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
check_hlds__xml_documentation__predicate_documentation_2_f_0_1(
  MR_Box check_hlds__xml_documentation__closure_arg,
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
{
  {
    MR_Box check_hlds__xml_documentation__wrapper_arg_2;
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
    MR_Word check_hlds__xml_documentation__conv1_HeadVar__3_3;

    {
      check_hlds__xml_documentation__conv1_HeadVar__3_3 = check_hlds__xml_documentation__mer_type_to_xml_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
    check_hlds__xml_documentation__wrapper_arg_2 = ((MR_Box) (check_hlds__xml_documentation__conv1_HeadVar__3_3));
    return check_hlds__xml_documentation__wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
check_hlds__xml_documentation__predicate_documentation_2_f_0(
  MR_Word check_hlds__xml_documentation__C_4,
  MR_Word check_hlds__xml_documentation__PredInfo_5)
{
  {
    MR_bool check_hlds__xml_documentation__succeeded;
    MR_Word check_hlds__xml_documentation__Xml_6;
    MR_Word check_hlds__xml_documentation__TypeCtorInfo_7_67;
    MR_Word check_hlds__xml_documentation__TVarset_7;
    MR_Word check_hlds__xml_documentation__Exists_8;
    MR_Word check_hlds__xml_documentation__IsPredOrFunc_9;
    MR_Word check_hlds__xml_documentation__Module_10;
    MR_String check_hlds__xml_documentation__Name_11;
    MR_Word check_hlds__xml_documentation__PredName_12;
    MR_Integer check_hlds__xml_documentation__Arity_13;
    MR_Word check_hlds__xml_documentation__PredStatus_14;
    MR_Word check_hlds__xml_documentation__Types_15;
    MR_Word check_hlds__xml_documentation__Constraints_16;
    MR_Word check_hlds__xml_documentation__Context_17;
    MR_String check_hlds__xml_documentation__Tag_18;
    MR_String check_hlds__xml_documentation__Id_19;
    MR_Word check_hlds__xml_documentation__XmlName_20;
    MR_Word check_hlds__xml_documentation__XmlContext_21;
    MR_Word check_hlds__xml_documentation__XmlTypes_22;
    MR_Word check_hlds__xml_documentation__XmlExistVars_23;
    MR_Word check_hlds__xml_documentation__XmlConstraints_24;
    MR_Word check_hlds__xml_documentation__XmlVisibility_25;
    MR_Word check_hlds__xml_documentation__ProcTable_26;
    MR_Word check_hlds__xml_documentation__XmlProcs_27;
    MR_Word check_hlds__xml_documentation__XmlModes_28;
    MR_Word check_hlds__xml_documentation__Xml0_29;
    MR_Word check_hlds__xml_documentation__Var_31;
    MR_Word check_hlds__xml_documentation__Var_33;
    MR_Word check_hlds__xml_documentation__Var_34;
    MR_Word check_hlds__xml_documentation__Var_38;
    MR_Word check_hlds__xml_documentation__Var_39;
    MR_Word check_hlds__xml_documentation__Var_42;
    MR_Word check_hlds__xml_documentation__Var_43;
    MR_Word check_hlds__xml_documentation__Var_44;
    MR_Word check_hlds__xml_documentation__Var_45;
    MR_Word check_hlds__xml_documentation__Var_46;
    MR_Word check_hlds__xml_documentation__Var_47;
    MR_Word check_hlds__xml_documentation__Var_48;
    MR_Word check_hlds__xml_documentation__Types0_65;
    MR_Integer check_hlds__xml_documentation__Var_66;
    MR_String check_hlds__xml_documentation__Var_79;
    MR_String check_hlds__xml_documentation__Var_80;
    MR_String check_hlds__xml_documentation__Var_82;
    MR_String check_hlds__xml_documentation__Var_85;
    MR_String check_hlds__xml_documentation__Var_87;
    MR_Word check_hlds__xml_documentation__Var_92;
    MR_Word check_hlds__xml_documentation__L_70;
    MR_Integer check_hlds__xml_documentation__Var_71;
    MR_Integer check_hlds__xml_documentation__Var_72;
    MR_Box check_hlds__xml_documentation__conv4_XmlProcs_27;

    {
      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(check_hlds__xml_documentation__PredInfo_5, &check_hlds__xml_documentation__TVarset_7);
    }
    {
      hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_p_0(check_hlds__xml_documentation__PredInfo_5, &check_hlds__xml_documentation__Exists_8);
    }
    {
      check_hlds__xml_documentation__IsPredOrFunc_9 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(check_hlds__xml_documentation__PredInfo_5);
    }
    {
      check_hlds__xml_documentation__Module_10 = hlds__hlds_pred__pred_info_module_1_f_0(check_hlds__xml_documentation__PredInfo_5);
    }
    {
      check_hlds__xml_documentation__Name_11 = hlds__hlds_pred__pred_info_name_1_f_0(check_hlds__xml_documentation__PredInfo_5);
    }
    {
      check_hlds__xml_documentation__PredName_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__PredName_12, 0) = ((MR_Box) (check_hlds__xml_documentation__Module_10));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__PredName_12, 1) = ((MR_Box) (check_hlds__xml_documentation__Name_11));
    }
    {
      check_hlds__xml_documentation__Arity_13 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(check_hlds__xml_documentation__PredInfo_5);
    }
    {
      hlds__hlds_pred__pred_info_get_status_2_p_0(check_hlds__xml_documentation__PredInfo_5, &check_hlds__xml_documentation__PredStatus_14);
    }
    {
      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(check_hlds__xml_documentation__PredInfo_5, &check_hlds__xml_documentation__Types0_65);
    }
    check_hlds__xml_documentation__TypeCtorInfo_7_67 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
    {
      check_hlds__xml_documentation__Var_66 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(check_hlds__xml_documentation__PredInfo_5);
    }
    {
      check_hlds__xml_documentation__Var_72 = mercury__list__length_1_f_0(check_hlds__xml_documentation__TypeCtorInfo_7_67, check_hlds__xml_documentation__Types0_65);
    }
    check_hlds__xml_documentation__Var_71 = (check_hlds__xml_documentation__Var_72 - check_hlds__xml_documentation__Var_66);
    {
      check_hlds__xml_documentation__succeeded = mercury__list__drop_3_p_0(check_hlds__xml_documentation__TypeCtorInfo_7_67, check_hlds__xml_documentation__Var_71, check_hlds__xml_documentation__Types0_65, &check_hlds__xml_documentation__L_70);
    }
    if (check_hlds__xml_documentation__succeeded)
      check_hlds__xml_documentation__Types_15 = check_hlds__xml_documentation__L_70;
    else
      {
        MR_Box check_hlds__xml_documentation__conv0_Types_15;

        {
          check_hlds__xml_documentation__conv0_Types_15 = mercury__require__func_error_1_f_0((MR_Word) &check_hlds__xml_documentation_scalar_common_1[9], (MR_String) "keep_last_n");
        }
        check_hlds__xml_documentation__Types_15 = ((MR_Word) check_hlds__xml_documentation__conv0_Types_15);
      }
    {
      hlds__hlds_pred__pred_info_get_class_context_2_p_0(check_hlds__xml_documentation__PredInfo_5, &check_hlds__xml_documentation__Constraints_16);
    }
    {
      hlds__hlds_pred__pred_info_get_context_2_p_0(check_hlds__xml_documentation__PredInfo_5, &check_hlds__xml_documentation__Context_17);
    }
    switch (check_hlds__xml_documentation__IsPredOrFunc_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        check_hlds__xml_documentation__Tag_18 = (MR_String) "function";
        break;
      case (MR_Integer) 0:
        check_hlds__xml_documentation__Tag_18 = (MR_String) "predicate";
        break;
    }
    {
      check_hlds__xml_documentation__Var_87 = mdbcomp__sym_name__sym_name_to_string_1_f_0(check_hlds__xml_documentation__PredName_12);
    }
    {
      check_hlds__xml_documentation__Var_85 = mercury__string__f_43_43_2_f_0((MR_String) ".", check_hlds__xml_documentation__Var_87);
    }
    {
      check_hlds__xml_documentation__Var_79 = mercury__string__f_43_43_2_f_0(check_hlds__xml_documentation__Tag_18, check_hlds__xml_documentation__Var_85);
    }
    {
      check_hlds__xml_documentation__Var_82 = mercury__string__int_to_string_1_f_0(check_hlds__xml_documentation__Arity_13);
    }
    {
      check_hlds__xml_documentation__Var_80 = mercury__string__f_43_43_2_f_0((MR_String) "-", check_hlds__xml_documentation__Var_82);
    }
    {
      check_hlds__xml_documentation__Id_19 = mercury__string__f_43_43_2_f_0(check_hlds__xml_documentation__Var_79, check_hlds__xml_documentation__Var_80);
    }
    {
      check_hlds__xml_documentation__XmlName_20 = check_hlds__xml_documentation__name_to_xml_1_f_0(check_hlds__xml_documentation__PredName_12);
    }
    {
      check_hlds__xml_documentation__XmlContext_21 = check_hlds__xml_documentation__prog_context_to_xml_1_f_0(check_hlds__xml_documentation__Context_17);
    }
    {
      check_hlds__xml_documentation__Var_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_31, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_31, 1) = ((MR_Box) (check_hlds__xml_documentation__predicate_documentation_2_f_0_1));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_31, 3) = ((MR_Box) (check_hlds__xml_documentation__TVarset_7));
    }
    {
      check_hlds__xml_documentation__Var_92 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0, check_hlds__xml_documentation__Var_31, check_hlds__xml_documentation__Types_15);
    }
    {
      check_hlds__xml_documentation__XmlTypes_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlTypes_22, 0) = ((MR_Box) ((MR_String) "pred_types"));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlTypes_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlTypes_22, 2) = ((MR_Box) (check_hlds__xml_documentation__Var_92));
    }
    {
      check_hlds__xml_documentation__Var_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_33, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_6[1]));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_33, 1) = ((MR_Box) (check_hlds__xml_documentation__predicate_documentation_2_f_0_2));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_33, 3) = ((MR_Box) (check_hlds__xml_documentation__TVarset_7));
    }
    {
      check_hlds__xml_documentation__XmlExistVars_23 = check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_120_109_108_95_108_105_115_116_95_95_104_111_51_95_95_91_49_93_95_48_3_f_0((MR_String) "pred_exist_vars", check_hlds__xml_documentation__Var_33, check_hlds__xml_documentation__Exists_8);
    }
    {
      check_hlds__xml_documentation__XmlConstraints_24 = check_hlds__xml_documentation__prog_constraints_to_xml_2_f_0(check_hlds__xml_documentation__TVarset_7, check_hlds__xml_documentation__Constraints_16);
    }
    {
      check_hlds__xml_documentation__XmlVisibility_25 = check_hlds__xml_documentation__pred_visibility_to_xml_1_f_0(check_hlds__xml_documentation__PredStatus_14);
    }
    {
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__xml_documentation__PredInfo_5, &check_hlds__xml_documentation__ProcTable_26);
    }
    {
      check_hlds__xml_documentation__Var_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_34, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_34, 1) = ((MR_Box) (check_hlds__xml_documentation__predicate_documentation_2_f_0_3));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_34, 3) = ((MR_Box) (check_hlds__xml_documentation__C_4));
    }
    {
      mercury__map__foldl_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, (MR_Word) &check_hlds__xml_documentation_scalar_common_1[2], check_hlds__xml_documentation__Var_34, check_hlds__xml_documentation__ProcTable_26, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &check_hlds__xml_documentation__conv4_XmlProcs_27);
    }
    check_hlds__xml_documentation__XmlProcs_27 = ((MR_Word) check_hlds__xml_documentation__conv4_XmlProcs_27);
    {
      check_hlds__xml_documentation__XmlModes_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlModes_28, 0) = ((MR_Box) ((MR_String) "pred_modes"));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlModes_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlModes_28, 2) = ((MR_Box) (check_hlds__xml_documentation__XmlProcs_27));
    }
    {
      check_hlds__xml_documentation__Var_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_39, 0) = ((MR_Box) ((MR_String) "id"));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_39, 1) = ((MR_Box) (check_hlds__xml_documentation__Id_19));
    }
    {
      check_hlds__xml_documentation__Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_38, 0) = ((MR_Box) (check_hlds__xml_documentation__Var_39));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__xml_documentation__Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_48, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlModes_28));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__xml_documentation__Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_47, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlVisibility_25));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_47, 1) = ((MR_Box) (check_hlds__xml_documentation__Var_48));
    }
    {
      check_hlds__xml_documentation__Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_46, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlConstraints_24));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_46, 1) = ((MR_Box) (check_hlds__xml_documentation__Var_47));
    }
    {
      check_hlds__xml_documentation__Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_45, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlExistVars_23));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_45, 1) = ((MR_Box) (check_hlds__xml_documentation__Var_46));
    }
    {
      check_hlds__xml_documentation__Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_44, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlContext_21));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_44, 1) = ((MR_Box) (check_hlds__xml_documentation__Var_45));
    }
    {
      check_hlds__xml_documentation__Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_43, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlTypes_22));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_43, 1) = ((MR_Box) (check_hlds__xml_documentation__Var_44));
    }
    {
      check_hlds__xml_documentation__Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_42, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlName_20));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_42, 1) = ((MR_Box) (check_hlds__xml_documentation__Var_43));
    }
    {
      check_hlds__xml_documentation__Xml0_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml0_29, 0) = ((MR_Box) (check_hlds__xml_documentation__Tag_18));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml0_29, 1) = ((MR_Box) (check_hlds__xml_documentation__Var_38));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml0_29, 2) = ((MR_Box) (check_hlds__xml_documentation__Var_42));
    }
    {
      check_hlds__xml_documentation__Xml_6 = check_hlds__xml_documentation__maybe_add_comment_3_f_0(check_hlds__xml_documentation__C_4, check_hlds__xml_documentation__Context_17, check_hlds__xml_documentation__Xml0_29);
    }
    return check_hlds__xml_documentation__Xml_6;
  }
}

static MR_Word MR_CALL 
check_hlds__xml_documentation__pred_visibility_to_xml_1_f_0(
  MR_Word check_hlds__xml_documentation__Status_3)
{
  {
    MR_bool check_hlds__xml_documentation__succeeded;
    MR_Word check_hlds__xml_documentation__HeadVar__2_2;
    MR_String check_hlds__xml_documentation__Visibility_4;
    MR_Word check_hlds__xml_documentation__Var_11;
    MR_Word check_hlds__xml_documentation__Var_12;
    MR_Word check_hlds__xml_documentation__Var_6;

    {
      check_hlds__xml_documentation__Var_6 = hlds__status__pred_status_defined_in_impl_section_1_f_0(check_hlds__xml_documentation__Status_3);
    }
    check_hlds__xml_documentation__succeeded = (check_hlds__xml_documentation__Var_6 == (MR_Integer) 1);
    if (check_hlds__xml_documentation__succeeded)
      {
        MR_Word check_hlds__xml_documentation__Var_7 = (MR_Word) check_hlds__xml_documentation__Status_3;

        check_hlds__xml_documentation__succeeded = (check_hlds__xml_documentation__Var_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
        if (check_hlds__xml_documentation__succeeded)
          check_hlds__xml_documentation__Visibility_4 = (MR_String) "abstract";
        else
          check_hlds__xml_documentation__Visibility_4 = (MR_String) "implementation";
      }
    else
      check_hlds__xml_documentation__Visibility_4 = (MR_String) "interface";
    {
      check_hlds__xml_documentation__Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_12, 0) = ((MR_Box) (check_hlds__xml_documentation__Visibility_4));
    }
    {
      check_hlds__xml_documentation__Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_11, 0) = ((MR_Box) (check_hlds__xml_documentation__Var_12));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__xml_documentation__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 0) = ((MR_Box) ((MR_String) "visibility"));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 2) = ((MR_Box) (check_hlds__xml_documentation__Var_11));
    }
    return check_hlds__xml_documentation__HeadVar__2_2;
  }
}

static MR_Box MR_CALL 
check_hlds__xml_documentation__prog_constraints_to_xml_2_f_0_1(
  MR_Box check_hlds__xml_documentation__closure_arg,
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
{
  {
    MR_Box check_hlds__xml_documentation__wrapper_arg_2;
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
    MR_Word check_hlds__xml_documentation__conv0_Xml_6;

    {
      check_hlds__xml_documentation__conv0_Xml_6 = check_hlds__xml_documentation__prog_constraint_to_xml_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
    check_hlds__xml_documentation__wrapper_arg_2 = ((MR_Box) (check_hlds__xml_documentation__conv0_Xml_6));
    return check_hlds__xml_documentation__wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
check_hlds__xml_documentation__prog_constraints_to_xml_2_f_0(
  MR_Word check_hlds__xml_documentation__TVarset_4,
  MR_Word check_hlds__xml_documentation__HeadVar__2_2)
{
  {
    MR_bool check_hlds__xml_documentation__succeeded;
    MR_Word check_hlds__xml_documentation__Xml_7;
    MR_Word check_hlds__xml_documentation__Univs_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word check_hlds__xml_documentation__Exists_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 1)));
    MR_Word check_hlds__xml_documentation__XmlUnivs_8;
    MR_Word check_hlds__xml_documentation__XmlExists_9;
    MR_Word check_hlds__xml_documentation__Var_11;
    MR_Word check_hlds__xml_documentation__Var_16;
    MR_Word check_hlds__xml_documentation__Var_17;
    MR_Word check_hlds__xml_documentation__Var_28;
    MR_Word check_hlds__xml_documentation__Var_35;

    {
      check_hlds__xml_documentation__Var_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_11, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_6[2]));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_11, 1) = ((MR_Box) (check_hlds__xml_documentation__prog_constraints_to_xml_2_f_0_1));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_11, 3) = ((MR_Box) (check_hlds__xml_documentation__TVarset_4));
    }
    {
      check_hlds__xml_documentation__Var_28 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0, check_hlds__xml_documentation__Var_11, check_hlds__xml_documentation__Univs_5);
    }
    {
      check_hlds__xml_documentation__XmlUnivs_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlUnivs_8, 0) = ((MR_Box) ((MR_String) "pred_universal"));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlUnivs_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlUnivs_8, 2) = ((MR_Box) (check_hlds__xml_documentation__Var_28));
    }
    {
      check_hlds__xml_documentation__Var_35 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0, check_hlds__xml_documentation__Var_11, check_hlds__xml_documentation__Exists_6);
    }
    {
      check_hlds__xml_documentation__XmlExists_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlExists_9, 0) = ((MR_Box) ((MR_String) "pred_exist"));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlExists_9, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlExists_9, 2) = ((MR_Box) (check_hlds__xml_documentation__Var_35));
    }
    {
      check_hlds__xml_documentation__Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_17, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlExists_9));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__xml_documentation__Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_16, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlUnivs_8));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_16, 1) = ((MR_Box) (check_hlds__xml_documentation__Var_17));
    }
    {
      check_hlds__xml_documentation__Xml_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_7, 0) = ((MR_Box) ((MR_String) "pred_constraints"));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_7, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_7, 2) = ((MR_Box) (check_hlds__xml_documentation__Var_16));
    }
    return check_hlds__xml_documentation__Xml_7;
  }
}

static MR_Word MR_CALL 
check_hlds__xml_documentation__constructor_arg_to_xml_3_f_0(
  MR_Word check_hlds__xml_documentation__C_5,
  MR_Word check_hlds__xml_documentation__TVarset_6,
  MR_Word check_hlds__xml_documentation__CtorArg_7)
{
  {
    MR_bool check_hlds__xml_documentation__succeeded;
    MR_Word check_hlds__xml_documentation__Xml_8;
    MR_Word check_hlds__xml_documentation__MaybeCtorFieldName_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__CtorArg_7, (MR_Integer) 0)));
    MR_Word check_hlds__xml_documentation__Type_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__CtorArg_7, (MR_Integer) 1)));
    MR_Word check_hlds__xml_documentation__Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__CtorArg_7, (MR_Integer) 3)));
    MR_Word check_hlds__xml_documentation__XmlType_13;
    MR_Word check_hlds__xml_documentation__XmlContext_14;
    MR_Word check_hlds__xml_documentation__XmlMaybeFieldName_18;
    MR_Word check_hlds__xml_documentation__Xml0_19;
    MR_Word check_hlds__xml_documentation__Var_22;
    MR_Word check_hlds__xml_documentation__Var_23;
    MR_Word check_hlds__xml_documentation__Var_39;
    MR_Word check_hlds__xml_documentation__Var_40;
    MR_String check_hlds__xml_documentation__FileName_41;
    MR_Integer check_hlds__xml_documentation__LineNumber_42;
    MR_Word check_hlds__xml_documentation__Var_45;
    MR_Word check_hlds__xml_documentation__Var_46;
    MR_Word check_hlds__xml_documentation__Var_48;
    MR_Word check_hlds__xml_documentation__Var_49;
    MR_Word check_hlds__xml_documentation__Var_55;
    MR_Word check_hlds__xml_documentation__Var_56;
    MR_Word check_hlds__xml_documentation__Var_61;
    MR_Word check_hlds__xml_documentation__Var_62;
    MR_String check_hlds__xml_documentation__Var_63;
    MR_Word check_hlds__xml_documentation___Width_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__CtorArg_7, (MR_Integer) 2)));

    {
      check_hlds__xml_documentation__Var_23 = check_hlds__xml_documentation__mer_type_to_xml_2_f_0(check_hlds__xml_documentation__TVarset_6, check_hlds__xml_documentation__Type_10);
    }
    {
      check_hlds__xml_documentation__Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_22, 0) = ((MR_Box) (check_hlds__xml_documentation__Var_23));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__xml_documentation__XmlType_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlType_13, 0) = ((MR_Box) ((MR_String) "arg_type"));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlType_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlType_13, 2) = ((MR_Box) (check_hlds__xml_documentation__Var_22));
    }
    check_hlds__xml_documentation__FileName_41 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Context_12, (MR_Integer) 0)));
    check_hlds__xml_documentation__LineNumber_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Context_12, (MR_Integer) 1)));
    {
      check_hlds__xml_documentation__Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_56, 0) = ((MR_Box) (check_hlds__xml_documentation__FileName_41));
    }
    {
      check_hlds__xml_documentation__Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_55, 0) = ((MR_Box) (check_hlds__xml_documentation__Var_56));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__xml_documentation__Var_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_46, 0) = ((MR_Box) ((MR_String) "filename"));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_46, 2) = ((MR_Box) (check_hlds__xml_documentation__Var_55));
    }
    {
      check_hlds__xml_documentation__Var_63 = mercury__string__int_to_string_1_f_0(check_hlds__xml_documentation__LineNumber_42);
    }
    {
      check_hlds__xml_documentation__Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_62, 0) = ((MR_Box) (check_hlds__xml_documentation__Var_63));
    }
    {
      check_hlds__xml_documentation__Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_61, 0) = ((MR_Box) (check_hlds__xml_documentation__Var_62));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__xml_documentation__Var_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_49, 0) = ((MR_Box) ((MR_String) "line"));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_49, 2) = ((MR_Box) (check_hlds__xml_documentation__Var_61));
    }
    {
      check_hlds__xml_documentation__Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_48, 0) = ((MR_Box) (check_hlds__xml_documentation__Var_49));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__xml_documentation__Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_45, 0) = ((MR_Box) (check_hlds__xml_documentation__Var_46));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_45, 1) = ((MR_Box) (check_hlds__xml_documentation__Var_48));
    }
    {
      check_hlds__xml_documentation__XmlContext_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlContext_14, 0) = ((MR_Box) ((MR_String) "context"));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlContext_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlContext_14, 2) = ((MR_Box) (check_hlds__xml_documentation__Var_45));
    }
    if ((check_hlds__xml_documentation__MaybeCtorFieldName_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      check_hlds__xml_documentation__XmlMaybeFieldName_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word check_hlds__xml_documentation__FieldName_15;
        MR_Word check_hlds__xml_documentation__Id_17;
        MR_Word check_hlds__xml_documentation__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__MaybeCtorFieldName_9, (MR_Integer) 0)));
        MR_String check_hlds__xml_documentation__Var_27;
        MR_Word check_hlds__xml_documentation__Var_29;
        MR_Word check_hlds__xml_documentation__Var_31;
        MR_Word check_hlds__xml_documentation__Var_33;
        MR_Word check_hlds__xml_documentation__Var_34;
        MR_String check_hlds__xml_documentation__Var_69;
        MR_String check_hlds__xml_documentation__Var_71;
        MR_Word check_hlds__xml_documentation___FieldNameCtxt_16;

        check_hlds__xml_documentation__FieldName_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_25, (MR_Integer) 0)));
        check_hlds__xml_documentation___FieldNameCtxt_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_25, (MR_Integer) 1)));
        {
          check_hlds__xml_documentation__Var_71 = mdbcomp__sym_name__sym_name_to_string_1_f_0(check_hlds__xml_documentation__FieldName_15);
        }
        {
          check_hlds__xml_documentation__Var_69 = mercury__string__f_43_43_2_f_0((MR_String) ".", check_hlds__xml_documentation__Var_71);
        }
        {
          check_hlds__xml_documentation__Var_27 = mercury__string__f_43_43_2_f_0((MR_String) "field", check_hlds__xml_documentation__Var_69);
        }
        {
          check_hlds__xml_documentation__Id_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Id_17, 0) = ((MR_Box) ((MR_String) "id"));
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Id_17, 1) = ((MR_Box) (check_hlds__xml_documentation__Var_27));
        }
        {
          check_hlds__xml_documentation__Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_31, 0) = ((MR_Box) (check_hlds__xml_documentation__Id_17));
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          check_hlds__xml_documentation__Var_34 = check_hlds__xml_documentation__name_to_xml_1_f_0(check_hlds__xml_documentation__FieldName_15);
        }
        {
          check_hlds__xml_documentation__Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_33, 0) = ((MR_Box) (check_hlds__xml_documentation__Var_34));
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          check_hlds__xml_documentation__Var_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_29, 0) = ((MR_Box) ((MR_String) "field"));
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_29, 1) = ((MR_Box) (check_hlds__xml_documentation__Var_31));
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_29, 2) = ((MR_Box) (check_hlds__xml_documentation__Var_33));
        }
        {
          check_hlds__xml_documentation__XmlMaybeFieldName_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__XmlMaybeFieldName_18, 0) = ((MR_Box) (check_hlds__xml_documentation__Var_29));
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__XmlMaybeFieldName_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
    {
      check_hlds__xml_documentation__Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_40, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlContext_14));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_40, 1) = ((MR_Box) (check_hlds__xml_documentation__XmlMaybeFieldName_18));
    }
    {
      check_hlds__xml_documentation__Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_39, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlType_13));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_39, 1) = ((MR_Box) (check_hlds__xml_documentation__Var_40));
    }
    {
      check_hlds__xml_documentation__Xml0_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml0_19, 0) = ((MR_Box) ((MR_String) "ctor_arg"));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml0_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml0_19, 2) = ((MR_Box) (check_hlds__xml_documentation__Var_39));
    }
    {
      check_hlds__xml_documentation__Xml_8 = check_hlds__xml_documentation__maybe_add_comment_3_f_0(check_hlds__xml_documentation__C_5, check_hlds__xml_documentation__Context_12, check_hlds__xml_documentation__Xml0_19);
    }
    return check_hlds__xml_documentation__Xml_8;
  }
}

static MR_Box MR_CALL 
check_hlds__xml_documentation__constructor_to_xml_3_f_0_3(
  MR_Box check_hlds__xml_documentation__closure_arg,
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
{
  {
    MR_Box check_hlds__xml_documentation__wrapper_arg_2;
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
    MR_Word check_hlds__xml_documentation__conv2_Xml_6;

    {
      check_hlds__xml_documentation__conv2_Xml_6 = check_hlds__xml_documentation__prog_constraint_to_xml_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
    check_hlds__xml_documentation__wrapper_arg_2 = ((MR_Box) (check_hlds__xml_documentation__conv2_Xml_6));
    return check_hlds__xml_documentation__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
check_hlds__xml_documentation__constructor_to_xml_3_f_0_2(
  MR_Box check_hlds__xml_documentation__closure_arg,
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
{
  {
    MR_Box check_hlds__xml_documentation__wrapper_arg_2;
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
    MR_Word check_hlds__xml_documentation__conv1_Xml_6;

    {
      check_hlds__xml_documentation__conv1_Xml_6 = check_hlds__xml_documentation__type_param_to_xml_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
    check_hlds__xml_documentation__wrapper_arg_2 = ((MR_Box) (check_hlds__xml_documentation__conv1_Xml_6));
    return check_hlds__xml_documentation__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
check_hlds__xml_documentation__constructor_to_xml_3_f_0_1(
  MR_Box check_hlds__xml_documentation__closure_arg,
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
{
  {
    MR_Box check_hlds__xml_documentation__wrapper_arg_2;
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
    MR_Word check_hlds__xml_documentation__conv0_Xml_8;

    {
      check_hlds__xml_documentation__conv0_Xml_8 = check_hlds__xml_documentation__constructor_arg_to_xml_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
    check_hlds__xml_documentation__wrapper_arg_2 = ((MR_Box) (check_hlds__xml_documentation__conv0_Xml_8));
    return check_hlds__xml_documentation__wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
check_hlds__xml_documentation__constructor_to_xml_3_f_0(
  MR_Word check_hlds__xml_documentation__C_5,
  MR_Word check_hlds__xml_documentation__TVarset_6,
  MR_Word check_hlds__xml_documentation__Ctor_7)
{
  {
    MR_bool check_hlds__xml_documentation__succeeded;
    MR_Word check_hlds__xml_documentation__Xml_8;
    MR_Word check_hlds__xml_documentation__Exists_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Ctor_7, (MR_Integer) 0)));
    MR_Word check_hlds__xml_documentation__Constraints_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Ctor_7, (MR_Integer) 1)));
    MR_Word check_hlds__xml_documentation__Name_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Ctor_7, (MR_Integer) 2)));
    MR_Word check_hlds__xml_documentation__Args_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Ctor_7, (MR_Integer) 3)));
    MR_Integer check_hlds__xml_documentation__Arity_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Ctor_7, (MR_Integer) 4)));
    MR_Word check_hlds__xml_documentation__Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Ctor_7, (MR_Integer) 5)));
    MR_Word check_hlds__xml_documentation__Id_15;
    MR_Word check_hlds__xml_documentation__XmlName_16;
    MR_Word check_hlds__xml_documentation__XmlContext_17;
    MR_Word check_hlds__xml_documentation__XmlArgs_18;
    MR_Word check_hlds__xml_documentation__XmlExistVars_19;
    MR_Word check_hlds__xml_documentation__XmlConstraints_20;
    MR_Word check_hlds__xml_documentation__Xml0_21;
    MR_String check_hlds__xml_documentation__Var_23;
    MR_Word check_hlds__xml_documentation__Var_26;
    MR_Word check_hlds__xml_documentation__Var_28;
    MR_Word check_hlds__xml_documentation__Var_30;
    MR_Word check_hlds__xml_documentation__Var_32;
    MR_Word check_hlds__xml_documentation__Var_34;
    MR_Word check_hlds__xml_documentation__Var_35;
    MR_Word check_hlds__xml_documentation__Var_36;
    MR_Word check_hlds__xml_documentation__Var_37;
    MR_Word check_hlds__xml_documentation__Var_38;
    MR_String check_hlds__xml_documentation__Var_52;
    MR_String check_hlds__xml_documentation__Var_53;
    MR_String check_hlds__xml_documentation__Var_55;
    MR_String check_hlds__xml_documentation__Var_58;
    MR_String check_hlds__xml_documentation__Var_60;
    MR_String check_hlds__xml_documentation__FileName_61;
    MR_Integer check_hlds__xml_documentation__LineNumber_62;
    MR_Word check_hlds__xml_documentation__Var_65;
    MR_Word check_hlds__xml_documentation__Var_66;
    MR_Word check_hlds__xml_documentation__Var_68;
    MR_Word check_hlds__xml_documentation__Var_69;
    MR_Word check_hlds__xml_documentation__Var_75;
    MR_Word check_hlds__xml_documentation__Var_76;
    MR_Word check_hlds__xml_documentation__Var_81;
    MR_Word check_hlds__xml_documentation__Var_82;
    MR_String check_hlds__xml_documentation__Var_83;
    MR_Word check_hlds__xml_documentation__Var_89;

    {
      check_hlds__xml_documentation__Var_60 = mdbcomp__sym_name__sym_name_to_string_1_f_0(check_hlds__xml_documentation__Name_11);
    }
    {
      check_hlds__xml_documentation__Var_58 = mercury__string__f_43_43_2_f_0((MR_String) ".", check_hlds__xml_documentation__Var_60);
    }
    {
      check_hlds__xml_documentation__Var_52 = mercury__string__f_43_43_2_f_0((MR_String) "ctor", check_hlds__xml_documentation__Var_58);
    }
    {
      check_hlds__xml_documentation__Var_55 = mercury__string__int_to_string_1_f_0(check_hlds__xml_documentation__Arity_13);
    }
    {
      check_hlds__xml_documentation__Var_53 = mercury__string__f_43_43_2_f_0((MR_String) "-", check_hlds__xml_documentation__Var_55);
    }
    {
      check_hlds__xml_documentation__Var_23 = mercury__string__f_43_43_2_f_0(check_hlds__xml_documentation__Var_52, check_hlds__xml_documentation__Var_53);
    }
    {
      check_hlds__xml_documentation__Id_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Id_15, 0) = ((MR_Box) ((MR_String) "id"));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Id_15, 1) = ((MR_Box) (check_hlds__xml_documentation__Var_23));
    }
    {
      check_hlds__xml_documentation__XmlName_16 = check_hlds__xml_documentation__name_to_xml_1_f_0(check_hlds__xml_documentation__Name_11);
    }
    check_hlds__xml_documentation__FileName_61 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Context_14, (MR_Integer) 0)));
    check_hlds__xml_documentation__LineNumber_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Context_14, (MR_Integer) 1)));
    {
      check_hlds__xml_documentation__Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_76, 0) = ((MR_Box) (check_hlds__xml_documentation__FileName_61));
    }
    {
      check_hlds__xml_documentation__Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_75, 0) = ((MR_Box) (check_hlds__xml_documentation__Var_76));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__xml_documentation__Var_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_66, 0) = ((MR_Box) ((MR_String) "filename"));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_66, 2) = ((MR_Box) (check_hlds__xml_documentation__Var_75));
    }
    {
      check_hlds__xml_documentation__Var_83 = mercury__string__int_to_string_1_f_0(check_hlds__xml_documentation__LineNumber_62);
    }
    {
      check_hlds__xml_documentation__Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_82, 0) = ((MR_Box) (check_hlds__xml_documentation__Var_83));
    }
    {
      check_hlds__xml_documentation__Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_81, 0) = ((MR_Box) (check_hlds__xml_documentation__Var_82));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__xml_documentation__Var_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_69, 0) = ((MR_Box) ((MR_String) "line"));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_69, 2) = ((MR_Box) (check_hlds__xml_documentation__Var_81));
    }
    {
      check_hlds__xml_documentation__Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_68, 0) = ((MR_Box) (check_hlds__xml_documentation__Var_69));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__xml_documentation__Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_65, 0) = ((MR_Box) (check_hlds__xml_documentation__Var_66));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_65, 1) = ((MR_Box) (check_hlds__xml_documentation__Var_68));
    }
    {
      check_hlds__xml_documentation__XmlContext_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlContext_17, 0) = ((MR_Box) ((MR_String) "context"));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlContext_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlContext_17, 2) = ((MR_Box) (check_hlds__xml_documentation__Var_65));
    }
    {
      check_hlds__xml_documentation__Var_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_26, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_7[1]));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_26, 1) = ((MR_Box) (check_hlds__xml_documentation__constructor_to_xml_3_f_0_1));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_26, 3) = ((MR_Box) (check_hlds__xml_documentation__C_5));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_26, 4) = ((MR_Box) (check_hlds__xml_documentation__TVarset_6));
    }
    {
      check_hlds__xml_documentation__Var_89 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, (MR_Word) &mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0, check_hlds__xml_documentation__Var_26, check_hlds__xml_documentation__Args_12);
    }
    {
      check_hlds__xml_documentation__XmlArgs_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlArgs_18, 0) = ((MR_Box) ((MR_String) "ctor_args"));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlArgs_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlArgs_18, 2) = ((MR_Box) (check_hlds__xml_documentation__Var_89));
    }
    {
      check_hlds__xml_documentation__Var_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_28, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_6[1]));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_28, 1) = ((MR_Box) (check_hlds__xml_documentation__constructor_to_xml_3_f_0_2));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_28, 3) = ((MR_Box) (check_hlds__xml_documentation__TVarset_6));
    }
    {
      check_hlds__xml_documentation__XmlExistVars_19 = check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_120_109_108_95_108_105_115_116_95_95_104_111_51_95_95_91_49_93_95_48_3_f_0((MR_String) "ctor_exist_vars", check_hlds__xml_documentation__Var_28, check_hlds__xml_documentation__Exists_9);
    }
    {
      check_hlds__xml_documentation__Var_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_30, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_6[2]));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_30, 1) = ((MR_Box) (check_hlds__xml_documentation__constructor_to_xml_3_f_0_3));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_30, 3) = ((MR_Box) (check_hlds__xml_documentation__TVarset_6));
    }
    {
      check_hlds__xml_documentation__XmlConstraints_20 = check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_120_109_108_95_108_105_115_116_95_95_104_111_53_95_95_91_49_93_95_48_3_f_0((MR_String) "ctor_constraints", check_hlds__xml_documentation__Var_30, check_hlds__xml_documentation__Constraints_10);
    }
    {
      check_hlds__xml_documentation__Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_32, 0) = ((MR_Box) (check_hlds__xml_documentation__Id_15));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__xml_documentation__Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_38, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlConstraints_20));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__xml_documentation__Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_37, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlExistVars_19));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_37, 1) = ((MR_Box) (check_hlds__xml_documentation__Var_38));
    }
    {
      check_hlds__xml_documentation__Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_36, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlArgs_18));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_36, 1) = ((MR_Box) (check_hlds__xml_documentation__Var_37));
    }
    {
      check_hlds__xml_documentation__Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_35, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlContext_17));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_35, 1) = ((MR_Box) (check_hlds__xml_documentation__Var_36));
    }
    {
      check_hlds__xml_documentation__Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_34, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlName_16));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_34, 1) = ((MR_Box) (check_hlds__xml_documentation__Var_35));
    }
    {
      check_hlds__xml_documentation__Xml0_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml0_21, 0) = ((MR_Box) ((MR_String) "constructor"));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml0_21, 1) = ((MR_Box) (check_hlds__xml_documentation__Var_32));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml0_21, 2) = ((MR_Box) (check_hlds__xml_documentation__Var_34));
    }
    {
      check_hlds__xml_documentation__Xml_8 = check_hlds__xml_documentation__maybe_add_comment_3_f_0(check_hlds__xml_documentation__C_5, check_hlds__xml_documentation__Context_14, check_hlds__xml_documentation__Xml0_21);
    }
    return check_hlds__xml_documentation__Xml_8;
  }
}

static MR_Word MR_CALL 
check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_120_109_108_95_108_105_115_116_95_95_104_111_53_95_95_91_49_93_95_48_3_f_0(
  MR_String check_hlds__xml_documentation__Tag_5,
  MR_Word check_hlds__xml_documentation__F_6,
  MR_Word check_hlds__xml_documentation__L_7)
{
  {
    MR_bool check_hlds__xml_documentation__succeeded;
    MR_Word check_hlds__xml_documentation__HeadVar__4_4;
    MR_Word check_hlds__xml_documentation__Var_9;

    {
      check_hlds__xml_documentation__Var_9 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0, check_hlds__xml_documentation__F_6, check_hlds__xml_documentation__L_7);
    }
    {
      check_hlds__xml_documentation__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__4_4, 0) = ((MR_Box) (check_hlds__xml_documentation__Tag_5));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__4_4, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__4_4, 2) = ((MR_Box) (check_hlds__xml_documentation__Var_9));
    }
    return check_hlds__xml_documentation__HeadVar__4_4;
  }
}

static MR_Word MR_CALL 
check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_120_109_108_95_108_105_115_116_95_95_104_111_51_95_95_91_49_93_95_48_3_f_0(
  MR_String check_hlds__xml_documentation__Tag_5,
  MR_Word check_hlds__xml_documentation__F_6,
  MR_Word check_hlds__xml_documentation__L_7)
{
  {
    MR_bool check_hlds__xml_documentation__succeeded;
    MR_Word check_hlds__xml_documentation__HeadVar__4_4;
    MR_Word check_hlds__xml_documentation__Var_9;

    {
      check_hlds__xml_documentation__Var_9 = mercury__list__map_2_f_0((MR_Word) &check_hlds__xml_documentation_scalar_common_1[1], (MR_Word) &mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0, check_hlds__xml_documentation__F_6, check_hlds__xml_documentation__L_7);
    }
    {
      check_hlds__xml_documentation__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__4_4, 0) = ((MR_Box) (check_hlds__xml_documentation__Tag_5));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__4_4, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__4_4, 2) = ((MR_Box) (check_hlds__xml_documentation__Var_9));
    }
    return check_hlds__xml_documentation__HeadVar__4_4;
  }
}

static MR_Box MR_CALL 
check_hlds__xml_documentation__type_documentation_5_p_0_1(
  MR_Box check_hlds__xml_documentation__closure_arg,
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
{
  {
    MR_Box check_hlds__xml_documentation__wrapper_arg_2;
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
    MR_Word check_hlds__xml_documentation__conv0_Xml_6;

    {
      check_hlds__xml_documentation__conv0_Xml_6 = check_hlds__xml_documentation__type_param_to_xml_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
    check_hlds__xml_documentation__wrapper_arg_2 = ((MR_Box) (check_hlds__xml_documentation__conv0_Xml_6));
    return check_hlds__xml_documentation__wrapper_arg_2;
  }
}

static void MR_CALL 
check_hlds__xml_documentation__type_documentation_5_p_0(
  MR_Word check_hlds__xml_documentation__C_6,
  MR_Word check_hlds__xml_documentation__HeadVar__2_2,
  MR_Word check_hlds__xml_documentation__TypeDefn_9,
  MR_Word check_hlds__xml_documentation__STATE_VARIABLE_Xmls_0_25,
  MR_Word * check_hlds__xml_documentation__STATE_VARIABLE_Xmls_26)
{
  {
    MR_bool check_hlds__xml_documentation__succeeded;
    MR_Word check_hlds__xml_documentation__TypeName_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 0)));
    MR_Integer check_hlds__xml_documentation__TypeArity_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 1)));
    MR_Word check_hlds__xml_documentation__TypeStatus_11;
    MR_Word check_hlds__xml_documentation__DefinedInThisModule_12;

    {
      hlds__hlds_data__get_type_defn_status_2_p_0(check_hlds__xml_documentation__TypeDefn_9, &check_hlds__xml_documentation__TypeStatus_11);
    }
    {
      check_hlds__xml_documentation__DefinedInThisModule_12 = hlds__status__type_status_defined_in_this_module_1_f_0(check_hlds__xml_documentation__TypeStatus_11);
    }
    switch (check_hlds__xml_documentation__DefinedInThisModule_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *check_hlds__xml_documentation__STATE_VARIABLE_Xmls_26 = check_hlds__xml_documentation__STATE_VARIABLE_Xmls_0_25;
        break;
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__xml_documentation__TypeBody_13;
          MR_Word check_hlds__xml_documentation__TVarset_14;
          MR_Word check_hlds__xml_documentation__Context_15;
          MR_Word check_hlds__xml_documentation__TParams_16;
          MR_Word check_hlds__xml_documentation__XmlName_17;
          MR_Word check_hlds__xml_documentation__XmlTypeParams_18;
          MR_Word check_hlds__xml_documentation__XmlVisibility_19;
          MR_String check_hlds__xml_documentation__Tag_20;
          MR_Word check_hlds__xml_documentation__Id_21;
          MR_Word check_hlds__xml_documentation__Children_22;
          MR_Word check_hlds__xml_documentation__Xml0_23;
          MR_Word check_hlds__xml_documentation__Xml_24;
          MR_Word check_hlds__xml_documentation__Var_28;
          MR_String check_hlds__xml_documentation__Var_30;
          MR_Word check_hlds__xml_documentation__Var_32;
          MR_Word check_hlds__xml_documentation__Var_33;
          MR_Word check_hlds__xml_documentation__Var_34;
          MR_Word check_hlds__xml_documentation__Var_35;
          MR_Word check_hlds__xml_documentation__Var_36;
          MR_Word check_hlds__xml_documentation__Var_37;
          MR_Word check_hlds__xml_documentation__Var_47;
          MR_String check_hlds__xml_documentation__Visibility_51;
          MR_Word check_hlds__xml_documentation__Var_58;
          MR_Word check_hlds__xml_documentation__Var_59;
          MR_String check_hlds__xml_documentation__Var_77;
          MR_String check_hlds__xml_documentation__Var_78;
          MR_String check_hlds__xml_documentation__Var_80;
          MR_String check_hlds__xml_documentation__Var_83;
          MR_String check_hlds__xml_documentation__Var_85;
          MR_Word check_hlds__xml_documentation__Var_53;

          {
            hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__xml_documentation__TypeDefn_9, &check_hlds__xml_documentation__TypeBody_13);
          }
          {
            hlds__hlds_data__get_type_defn_tvarset_2_p_0(check_hlds__xml_documentation__TypeDefn_9, &check_hlds__xml_documentation__TVarset_14);
          }
          {
            hlds__hlds_data__get_type_defn_context_2_p_0(check_hlds__xml_documentation__TypeDefn_9, &check_hlds__xml_documentation__Context_15);
          }
          {
            hlds__hlds_data__get_type_defn_tparams_2_p_0(check_hlds__xml_documentation__TypeDefn_9, &check_hlds__xml_documentation__TParams_16);
          }
          {
            check_hlds__xml_documentation__XmlName_17 = check_hlds__xml_documentation__name_to_xml_1_f_0(check_hlds__xml_documentation__TypeName_7);
          }
          {
            check_hlds__xml_documentation__Var_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_28, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_6[1]));
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_28, 1) = ((MR_Box) (check_hlds__xml_documentation__type_documentation_5_p_0_1));
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_28, 3) = ((MR_Box) (check_hlds__xml_documentation__TVarset_14));
          }
          {
            check_hlds__xml_documentation__Var_47 = mercury__list__map_2_f_0((MR_Word) &check_hlds__xml_documentation_scalar_common_1[1], (MR_Word) &mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0, check_hlds__xml_documentation__Var_28, check_hlds__xml_documentation__TParams_16);
          }
          {
            check_hlds__xml_documentation__XmlTypeParams_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlTypeParams_18, 0) = ((MR_Box) ((MR_String) "type_params"));
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlTypeParams_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlTypeParams_18, 2) = ((MR_Box) (check_hlds__xml_documentation__Var_47));
          }
          {
            check_hlds__xml_documentation__Var_53 = hlds__status__type_status_defined_in_impl_section_1_f_0(check_hlds__xml_documentation__TypeStatus_11);
          }
          check_hlds__xml_documentation__succeeded = (check_hlds__xml_documentation__Var_53 == (MR_Integer) 1);
          if (check_hlds__xml_documentation__succeeded)
            {
              MR_Word check_hlds__xml_documentation__Var_54 = (MR_Word) check_hlds__xml_documentation__TypeStatus_11;

              check_hlds__xml_documentation__succeeded = (check_hlds__xml_documentation__Var_54 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
              if (check_hlds__xml_documentation__succeeded)
                check_hlds__xml_documentation__Visibility_51 = (MR_String) "abstract";
              else
                check_hlds__xml_documentation__Visibility_51 = (MR_String) "implementation";
            }
          else
            check_hlds__xml_documentation__Visibility_51 = (MR_String) "interface";
          {
            check_hlds__xml_documentation__Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_59, 0) = ((MR_Box) (check_hlds__xml_documentation__Visibility_51));
          }
          {
            check_hlds__xml_documentation__Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_58, 0) = ((MR_Box) (check_hlds__xml_documentation__Var_59));
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            check_hlds__xml_documentation__XmlVisibility_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlVisibility_19, 0) = ((MR_Box) ((MR_String) "visibility"));
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlVisibility_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlVisibility_19, 2) = ((MR_Box) (check_hlds__xml_documentation__Var_58));
          }
          switch (MR_tag((MR_Word) check_hlds__xml_documentation__TypeBody_13)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              check_hlds__xml_documentation__Tag_20 = (MR_String) "foreign_type";
              break;
            case (MR_Integer) 1:
              check_hlds__xml_documentation__Tag_20 = (MR_String) "du_type";
              break;
            case (MR_Integer) 2:
              check_hlds__xml_documentation__Tag_20 = (MR_String) "eqv_type";
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__TypeBody_13, (MR_Integer) 0)))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  check_hlds__xml_documentation__Tag_20 = (MR_String) "solver_type";
                  break;
                case (MR_Integer) 1:
                  check_hlds__xml_documentation__Tag_20 = (MR_String) "abstract_type";
                  break;
              }
              break;
          }
          {
            check_hlds__xml_documentation__Var_85 = mdbcomp__sym_name__sym_name_to_string_1_f_0(check_hlds__xml_documentation__TypeName_7);
          }
          {
            check_hlds__xml_documentation__Var_83 = mercury__string__f_43_43_2_f_0((MR_String) ".", check_hlds__xml_documentation__Var_85);
          }
          {
            check_hlds__xml_documentation__Var_77 = mercury__string__f_43_43_2_f_0((MR_String) "type", check_hlds__xml_documentation__Var_83);
          }
          {
            check_hlds__xml_documentation__Var_80 = mercury__string__int_to_string_1_f_0(check_hlds__xml_documentation__TypeArity_8);
          }
          {
            check_hlds__xml_documentation__Var_78 = mercury__string__f_43_43_2_f_0((MR_String) "-", check_hlds__xml_documentation__Var_80);
          }
          {
            check_hlds__xml_documentation__Var_30 = mercury__string__f_43_43_2_f_0(check_hlds__xml_documentation__Var_77, check_hlds__xml_documentation__Var_78);
          }
          {
            check_hlds__xml_documentation__Id_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Id_21, 0) = ((MR_Box) ((MR_String) "id"));
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Id_21, 1) = ((MR_Box) (check_hlds__xml_documentation__Var_30));
          }
          {
            check_hlds__xml_documentation__Var_35 = check_hlds__xml_documentation__prog_context_to_xml_1_f_0(check_hlds__xml_documentation__Context_15);
          }
          {
            check_hlds__xml_documentation__Var_36 = check_hlds__xml_documentation__type_body_to_xml_3_f_0(check_hlds__xml_documentation__C_6, check_hlds__xml_documentation__TVarset_14, check_hlds__xml_documentation__TypeBody_13);
          }
          {
            check_hlds__xml_documentation__Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_34, 0) = ((MR_Box) (check_hlds__xml_documentation__Var_35));
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_34, 1) = ((MR_Box) (check_hlds__xml_documentation__Var_36));
          }
          {
            check_hlds__xml_documentation__Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_33, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlVisibility_19));
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_33, 1) = ((MR_Box) (check_hlds__xml_documentation__Var_34));
          }
          {
            check_hlds__xml_documentation__Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_32, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlTypeParams_18));
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_32, 1) = ((MR_Box) (check_hlds__xml_documentation__Var_33));
          }
          {
            check_hlds__xml_documentation__Children_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Children_22, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlName_17));
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Children_22, 1) = ((MR_Box) (check_hlds__xml_documentation__Var_32));
          }
          {
            check_hlds__xml_documentation__Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_37, 0) = ((MR_Box) (check_hlds__xml_documentation__Id_21));
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            check_hlds__xml_documentation__Xml0_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml0_23, 0) = ((MR_Box) (check_hlds__xml_documentation__Tag_20));
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml0_23, 1) = ((MR_Box) (check_hlds__xml_documentation__Var_37));
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml0_23, 2) = ((MR_Box) (check_hlds__xml_documentation__Children_22));
          }
          {
            check_hlds__xml_documentation__Xml_24 = check_hlds__xml_documentation__maybe_add_comment_3_f_0(check_hlds__xml_documentation__C_6, check_hlds__xml_documentation__Context_15, check_hlds__xml_documentation__Xml0_23);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *check_hlds__xml_documentation__STATE_VARIABLE_Xmls_26 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__xml_documentation__Xml_24));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__xml_documentation__STATE_VARIABLE_Xmls_0_25));
          }
        }
        break;
    }
  }
}

static MR_Word MR_CALL 
check_hlds__xml_documentation__prog_context_to_xml_1_f_0(
  MR_Word check_hlds__xml_documentation__HeadVar__1_1)
{
  {
    MR_bool check_hlds__xml_documentation__succeeded;
    MR_Word check_hlds__xml_documentation__HeadVar__2_2;
    MR_String check_hlds__xml_documentation__FileName_3 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__1_1, (MR_Integer) 0)));
    MR_Integer check_hlds__xml_documentation__LineNumber_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word check_hlds__xml_documentation__Var_7;
    MR_Word check_hlds__xml_documentation__Var_8;
    MR_Word check_hlds__xml_documentation__Var_10;
    MR_Word check_hlds__xml_documentation__Var_11;
    MR_Word check_hlds__xml_documentation__Var_17;
    MR_Word check_hlds__xml_documentation__Var_18;
    MR_Word check_hlds__xml_documentation__Var_23;
    MR_Word check_hlds__xml_documentation__Var_24;
    MR_String check_hlds__xml_documentation__Var_25;

    {
      check_hlds__xml_documentation__Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_18, 0) = ((MR_Box) (check_hlds__xml_documentation__FileName_3));
    }
    {
      check_hlds__xml_documentation__Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_17, 0) = ((MR_Box) (check_hlds__xml_documentation__Var_18));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__xml_documentation__Var_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_8, 0) = ((MR_Box) ((MR_String) "filename"));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_8, 2) = ((MR_Box) (check_hlds__xml_documentation__Var_17));
    }
    {
      check_hlds__xml_documentation__Var_25 = mercury__string__int_to_string_1_f_0(check_hlds__xml_documentation__LineNumber_4);
    }
    {
      check_hlds__xml_documentation__Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_24, 0) = ((MR_Box) (check_hlds__xml_documentation__Var_25));
    }
    {
      check_hlds__xml_documentation__Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_23, 0) = ((MR_Box) (check_hlds__xml_documentation__Var_24));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__xml_documentation__Var_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_11, 0) = ((MR_Box) ((MR_String) "line"));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_11, 2) = ((MR_Box) (check_hlds__xml_documentation__Var_23));
    }
    {
      check_hlds__xml_documentation__Var_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_10, 0) = ((MR_Box) (check_hlds__xml_documentation__Var_11));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__xml_documentation__Var_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_7, 0) = ((MR_Box) (check_hlds__xml_documentation__Var_8));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_7, 1) = ((MR_Box) (check_hlds__xml_documentation__Var_10));
    }
    {
      check_hlds__xml_documentation__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 0) = ((MR_Box) ((MR_String) "context"));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 2) = ((MR_Box) (check_hlds__xml_documentation__Var_7));
    }
    return check_hlds__xml_documentation__HeadVar__2_2;
  }
}

static MR_Box MR_CALL 
check_hlds__xml_documentation__type_body_to_xml_3_f_0_1(
  MR_Box check_hlds__xml_documentation__closure_arg,
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
{
  {
    MR_Box check_hlds__xml_documentation__wrapper_arg_2;
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
    MR_Word check_hlds__xml_documentation__conv0_Xml_8;

    {
      check_hlds__xml_documentation__conv0_Xml_8 = check_hlds__xml_documentation__constructor_to_xml_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
    check_hlds__xml_documentation__wrapper_arg_2 = ((MR_Box) (check_hlds__xml_documentation__conv0_Xml_8));
    return check_hlds__xml_documentation__wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
check_hlds__xml_documentation__type_body_to_xml_3_f_0(
  MR_Word check_hlds__xml_documentation__C_5,
  MR_Word check_hlds__xml_documentation__TVarSet_6,
  MR_Word check_hlds__xml_documentation__TypeDefnBody_7)
{
  {
    MR_bool check_hlds__xml_documentation__succeeded;
    MR_Word check_hlds__xml_documentation__Xmls_8;

    switch (MR_tag((MR_Word) check_hlds__xml_documentation__TypeDefnBody_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          check_hlds__xml_documentation__Xmls_8 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_1[7]);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__xml_documentation__Ctors_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__TypeDefnBody_7, (MR_Integer) 0)));
          MR_Word check_hlds__xml_documentation__Var_38;
          MR_Word check_hlds__xml_documentation__Var_40;
          MR_Word check_hlds__xml_documentation__Var_57;
          MR_Word check_hlds__xml_documentation__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__TypeDefnBody_7, (MR_Integer) 1)));
          MR_Word check_hlds__xml_documentation__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__TypeDefnBody_7, (MR_Integer) 2)));
          MR_Word check_hlds__xml_documentation__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__TypeDefnBody_7, (MR_Integer) 3)));
          MR_Word check_hlds__xml_documentation__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__TypeDefnBody_7, (MR_Integer) 4)));
          MR_Word check_hlds__xml_documentation__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__TypeDefnBody_7, (MR_Integer) 5)));
          MR_Word check_hlds__xml_documentation__Var_15 = ((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__TypeDefnBody_7, (MR_Integer) 6)))) & (MR_Integer) 1);
          MR_Word check_hlds__xml_documentation__Var_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__TypeDefnBody_7, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          MR_Word check_hlds__xml_documentation__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__TypeDefnBody_7, (MR_Integer) 7)));

          {
            check_hlds__xml_documentation__Var_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_40, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_7[0]));
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_40, 1) = ((MR_Box) (check_hlds__xml_documentation__type_body_to_xml_3_f_0_1));
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_40, 3) = ((MR_Box) (check_hlds__xml_documentation__C_5));
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_40, 4) = ((MR_Box) (check_hlds__xml_documentation__TVarSet_6));
          }
          {
            check_hlds__xml_documentation__Var_57 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, (MR_Word) &mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0, check_hlds__xml_documentation__Var_40, check_hlds__xml_documentation__Ctors_9);
          }
          {
            check_hlds__xml_documentation__Var_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_38, 0) = ((MR_Box) ((MR_String) "constructors"));
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_38, 2) = ((MR_Box) (check_hlds__xml_documentation__Var_57));
          }
          {
            check_hlds__xml_documentation__Xmls_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Xmls_8, 0) = ((MR_Box) (check_hlds__xml_documentation__Var_38));
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Xmls_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word check_hlds__xml_documentation__EqvType_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__xml_documentation__TypeDefnBody_7, (MR_Integer) 0)));
          MR_Word check_hlds__xml_documentation__Var_31;
          MR_Word check_hlds__xml_documentation__Var_34;
          MR_Word check_hlds__xml_documentation__Var_35;

          {
            check_hlds__xml_documentation__Var_35 = check_hlds__xml_documentation__mer_type_to_xml_2_f_0(check_hlds__xml_documentation__TVarSet_6, check_hlds__xml_documentation__EqvType_18);
          }
          {
            check_hlds__xml_documentation__Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_34, 0) = ((MR_Box) (check_hlds__xml_documentation__Var_35));
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            check_hlds__xml_documentation__Var_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_31, 0) = ((MR_Box) ((MR_String) "equivalent_type"));
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_31, 2) = ((MR_Box) (check_hlds__xml_documentation__Var_34));
          }
          {
            check_hlds__xml_documentation__Xmls_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Xmls_8, 0) = ((MR_Box) (check_hlds__xml_documentation__Var_31));
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Xmls_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__TypeDefnBody_7, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              check_hlds__xml_documentation__Xmls_8 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_1[8]);
            }
            break;
          case (MR_Integer) 1:
            {
              check_hlds__xml_documentation__Xmls_8 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_1[6]);
            }
            break;
        }
        break;
    }
    return check_hlds__xml_documentation__Xmls_8;
  }
}

static MR_Box MR_CALL 
check_hlds__xml_documentation__mer_type_to_xml_2_f_0_4(
  MR_Box check_hlds__xml_documentation__closure_arg,
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
{
  {
    MR_Box check_hlds__xml_documentation__wrapper_arg_2;
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
    MR_Word check_hlds__xml_documentation__conv4_HeadVar__3_3;

    {
      check_hlds__xml_documentation__conv4_HeadVar__3_3 = check_hlds__xml_documentation__mer_type_to_xml_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
    check_hlds__xml_documentation__wrapper_arg_2 = ((MR_Box) (check_hlds__xml_documentation__conv4_HeadVar__3_3));
    return check_hlds__xml_documentation__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
check_hlds__xml_documentation__mer_type_to_xml_2_f_0_3(
  MR_Box check_hlds__xml_documentation__closure_arg,
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
{
  {
    MR_Box check_hlds__xml_documentation__wrapper_arg_2;
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
    MR_Word check_hlds__xml_documentation__conv3_HeadVar__3_3;

    {
      check_hlds__xml_documentation__conv3_HeadVar__3_3 = check_hlds__xml_documentation__mer_type_to_xml_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
    check_hlds__xml_documentation__wrapper_arg_2 = ((MR_Box) (check_hlds__xml_documentation__conv3_HeadVar__3_3));
    return check_hlds__xml_documentation__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
check_hlds__xml_documentation__mer_type_to_xml_2_f_0_2(
  MR_Box check_hlds__xml_documentation__closure_arg,
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
{
  {
    MR_Box check_hlds__xml_documentation__wrapper_arg_2;
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
    MR_Word check_hlds__xml_documentation__conv2_HeadVar__3_3;

    {
      check_hlds__xml_documentation__conv2_HeadVar__3_3 = check_hlds__xml_documentation__mer_type_to_xml_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
    check_hlds__xml_documentation__wrapper_arg_2 = ((MR_Box) (check_hlds__xml_documentation__conv2_HeadVar__3_3));
    return check_hlds__xml_documentation__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
check_hlds__xml_documentation__mer_type_to_xml_2_f_0_1(
  MR_Box check_hlds__xml_documentation__closure_arg,
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
{
  {
    MR_Box check_hlds__xml_documentation__wrapper_arg_2;
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
    MR_Word check_hlds__xml_documentation__conv0_HeadVar__3_3;

    {
      check_hlds__xml_documentation__conv0_HeadVar__3_3 = check_hlds__xml_documentation__mer_type_to_xml_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
    check_hlds__xml_documentation__wrapper_arg_2 = ((MR_Box) (check_hlds__xml_documentation__conv0_HeadVar__3_3));
    return check_hlds__xml_documentation__wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
check_hlds__xml_documentation__mer_type_to_xml_2_f_0(
  MR_Word check_hlds__xml_documentation__TVarset_1,
  MR_Word check_hlds__xml_documentation__HeadVar__2_2)
{
  {
    MR_bool check_hlds__xml_documentation__succeeded;
    MR_Word check_hlds__xml_documentation__HeadVar__3_3;

    switch (MR_tag((MR_Word) check_hlds__xml_documentation__HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word check_hlds__xml_documentation__TVar_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 0)));
          MR_Word check_hlds__xml_documentation__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 1)));

          {
            check_hlds__xml_documentation__HeadVar__3_3 = check_hlds__xml_documentation__type_param_to_xml_2_f_0(check_hlds__xml_documentation__TVarset_1, check_hlds__xml_documentation__TVar_5);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__xml_documentation__TypeName_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 0)));
          MR_Word check_hlds__xml_documentation__Args_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 1)));
          MR_Word check_hlds__xml_documentation__Ref_12;
          MR_Word check_hlds__xml_documentation__XmlName_13;
          MR_Word check_hlds__xml_documentation__XmlArgs_14;
          MR_String check_hlds__xml_documentation__Var_16;
          MR_Integer check_hlds__xml_documentation__Var_18;
          MR_Word check_hlds__xml_documentation__Var_20;
          MR_Word check_hlds__xml_documentation__Var_22;
          MR_Word check_hlds__xml_documentation__Var_24;
          MR_Word check_hlds__xml_documentation__Var_25;
          MR_Word check_hlds__xml_documentation__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 2)));

          {
            check_hlds__xml_documentation__Var_18 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__xml_documentation__Args_9);
          }
          {
            check_hlds__xml_documentation__Var_16 = check_hlds__xml_documentation__sym_name_and_arity_to_id_3_f_0((MR_String) "type", check_hlds__xml_documentation__TypeName_8, check_hlds__xml_documentation__Var_18);
          }
          {
            check_hlds__xml_documentation__Ref_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Ref_12, 0) = ((MR_Box) ((MR_String) "ref"));
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Ref_12, 1) = ((MR_Box) (check_hlds__xml_documentation__Var_16));
          }
          {
            check_hlds__xml_documentation__XmlName_13 = check_hlds__xml_documentation__name_to_xml_1_f_0(check_hlds__xml_documentation__TypeName_8);
          }
          {
            check_hlds__xml_documentation__Var_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_20, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_6[0]));
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_20, 1) = ((MR_Box) (check_hlds__xml_documentation__mer_type_to_xml_2_f_0_1));
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_20, 3) = ((MR_Box) (check_hlds__xml_documentation__TVarset_1));
          }
          {
            check_hlds__xml_documentation__XmlArgs_14 = check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_120_109_108_95_108_105_115_116_95_95_104_111_49_95_95_91_49_93_95_48_3_f_0((MR_String) "type_args", check_hlds__xml_documentation__Var_20, check_hlds__xml_documentation__Args_9);
          }
          {
            check_hlds__xml_documentation__Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_22, 0) = ((MR_Box) (check_hlds__xml_documentation__Ref_12));
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            check_hlds__xml_documentation__Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_25, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlArgs_14));
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            check_hlds__xml_documentation__Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_24, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlName_13));
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_24, 1) = ((MR_Box) (check_hlds__xml_documentation__Var_25));
          }
          {
            check_hlds__xml_documentation__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, 0) = ((MR_Box) ((MR_String) "type"));
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, 1) = ((MR_Box) (check_hlds__xml_documentation__Var_22));
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, 2) = ((MR_Box) (check_hlds__xml_documentation__Var_24));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word check_hlds__xml_documentation__Var_108 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 0)));

          switch (MR_tag((MR_Word) check_hlds__xml_documentation__Var_108)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(check_hlds__xml_documentation__Var_108)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    check_hlds__xml_documentation__HeadVar__3_3 = (MR_Word) &check_hlds__xml_documentation_scalar_common_2[7];
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    check_hlds__xml_documentation__HeadVar__3_3 = (MR_Word) &check_hlds__xml_documentation_scalar_common_2[8];
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    check_hlds__xml_documentation__HeadVar__3_3 = (MR_Word) &check_hlds__xml_documentation_scalar_common_2[6];
                  }
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word check_hlds__xml_documentation__IntType_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_108, (MR_Integer) 0)));
                MR_String check_hlds__xml_documentation__IntTypeString_30;

                {
                  parse_tree__prog_data__int_type_to_string_2_p_0(check_hlds__xml_documentation__IntType_28, &check_hlds__xml_documentation__IntTypeString_30);
                }
                {
                  check_hlds__xml_documentation__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, 0) = ((MR_Box) (check_hlds__xml_documentation__IntTypeString_30));
                  MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
              }
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word check_hlds__xml_documentation__Types_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 1)));
              MR_Word check_hlds__xml_documentation__XmlArgs_80;
              MR_Word check_hlds__xml_documentation__Var_82;
              MR_Word check_hlds__xml_documentation__Var_85;
              MR_Word check_hlds__xml_documentation__Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 2)));

              {
                check_hlds__xml_documentation__Var_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_82, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_6[0]));
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_82, 1) = ((MR_Box) (check_hlds__xml_documentation__mer_type_to_xml_2_f_0_4));
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_82, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_82, 3) = ((MR_Box) (check_hlds__xml_documentation__TVarset_1));
              }
              {
                check_hlds__xml_documentation__XmlArgs_80 = check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_120_109_108_95_108_105_115_116_95_95_104_111_49_95_95_91_49_93_95_48_3_f_0((MR_String) "tuple_types", check_hlds__xml_documentation__Var_82, check_hlds__xml_documentation__Types_77);
              }
              {
                check_hlds__xml_documentation__Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_85, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlArgs_80));
                MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                check_hlds__xml_documentation__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, 0) = ((MR_Box) ((MR_String) "tuple"));
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, 2) = ((MR_Box) (check_hlds__xml_documentation__Var_85));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word check_hlds__xml_documentation__PorF_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 1)));
              MR_Word check_hlds__xml_documentation__Types_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 2)));
              MR_Word check_hlds__xml_documentation__XmlChildren_57;
              MR_Word check_hlds__xml_documentation__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 3)));
              MR_Word check_hlds__xml_documentation__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 4)));

              switch (check_hlds__xml_documentation__PorF_50) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word check_hlds__xml_documentation__ArgTypes_58;
                    MR_Word check_hlds__xml_documentation__ResultType_59;
                    MR_Word check_hlds__xml_documentation__XmlReturn_60;
                    MR_Word check_hlds__xml_documentation__Var_62;
                    MR_Word check_hlds__xml_documentation__Var_65;
                    MR_Word check_hlds__xml_documentation__Var_66;
                    MR_Word check_hlds__xml_documentation__Var_68;
                    MR_Word check_hlds__xml_documentation__XmlTypes_75;
                    MR_Box check_hlds__xml_documentation__conv1_ResultType_59;

                    {
                      mercury__list__det_split_last_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__xml_documentation__Types_51, &check_hlds__xml_documentation__ArgTypes_58, &check_hlds__xml_documentation__conv1_ResultType_59);
                    }
                    check_hlds__xml_documentation__ResultType_59 = ((MR_Word) check_hlds__xml_documentation__conv1_ResultType_59);
                    {
                      check_hlds__xml_documentation__Var_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_62, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_6[0]));
                      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_62, 1) = ((MR_Box) (check_hlds__xml_documentation__mer_type_to_xml_2_f_0_2));
                      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_62, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_62, 3) = ((MR_Box) (check_hlds__xml_documentation__TVarset_1));
                    }
                    {
                      check_hlds__xml_documentation__XmlTypes_75 = check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_120_109_108_95_108_105_115_116_95_95_104_111_49_95_95_91_49_93_95_48_3_f_0((MR_String) "higher_order_type_args", check_hlds__xml_documentation__Var_62, check_hlds__xml_documentation__ArgTypes_58);
                    }
                    {
                      check_hlds__xml_documentation__Var_66 = check_hlds__xml_documentation__mer_type_to_xml_2_f_0(check_hlds__xml_documentation__TVarset_1, check_hlds__xml_documentation__ResultType_59);
                    }
                    {
                      check_hlds__xml_documentation__Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_65, 0) = ((MR_Box) (check_hlds__xml_documentation__Var_66));
                      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      check_hlds__xml_documentation__XmlReturn_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlReturn_60, 0) = ((MR_Box) ((MR_String) "return_type"));
                      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlReturn_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlReturn_60, 2) = ((MR_Box) (check_hlds__xml_documentation__Var_65));
                    }
                    {
                      check_hlds__xml_documentation__Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_68, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlReturn_60));
                      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      check_hlds__xml_documentation__XmlChildren_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__XmlChildren_57, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlTypes_75));
                      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__XmlChildren_57, 1) = ((MR_Box) (check_hlds__xml_documentation__Var_68));
                    }
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word check_hlds__xml_documentation__XmlTypes_56;
                    MR_Word check_hlds__xml_documentation__Var_71;

                    {
                      check_hlds__xml_documentation__Var_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_71, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_6[0]));
                      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_71, 1) = ((MR_Box) (check_hlds__xml_documentation__mer_type_to_xml_2_f_0_3));
                      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_71, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_71, 3) = ((MR_Box) (check_hlds__xml_documentation__TVarset_1));
                    }
                    {
                      check_hlds__xml_documentation__XmlTypes_56 = check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_120_109_108_95_108_105_115_116_95_95_104_111_49_95_95_91_49_93_95_48_3_f_0((MR_String) "higher_order_type_args", check_hlds__xml_documentation__Var_71, check_hlds__xml_documentation__Types_51);
                    }
                    {
                      check_hlds__xml_documentation__XmlChildren_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__XmlChildren_57, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlTypes_56));
                      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__XmlChildren_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                  }
                  break;
              }
              {
                check_hlds__xml_documentation__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, 0) = ((MR_Box) ((MR_String) "higher_order_type"));
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, 2) = ((MR_Box) (check_hlds__xml_documentation__XmlChildren_57));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              {
                check_hlds__xml_documentation__HeadVar__3_3 = check_hlds__xml_documentation__nyi_1_f_0((MR_String) "apply_n_type");
              }
            }
            break;
          case (MR_Integer) 3:
            {
              {
                check_hlds__xml_documentation__HeadVar__3_3 = check_hlds__xml_documentation__nyi_1_f_0((MR_String) "kinded_type");
              }
            }
            break;
        }
        break;
    }
    return check_hlds__xml_documentation__HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_120_109_108_95_108_105_115_116_95_95_104_111_49_95_95_91_49_93_95_48_3_f_0(
  MR_String check_hlds__xml_documentation__Tag_5,
  MR_Word check_hlds__xml_documentation__F_6,
  MR_Word check_hlds__xml_documentation__L_7)
{
  {
    MR_bool check_hlds__xml_documentation__succeeded;
    MR_Word check_hlds__xml_documentation__HeadVar__4_4;
    MR_Word check_hlds__xml_documentation__Var_9;

    {
      check_hlds__xml_documentation__Var_9 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0, check_hlds__xml_documentation__F_6, check_hlds__xml_documentation__L_7);
    }
    {
      check_hlds__xml_documentation__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__4_4, 0) = ((MR_Box) (check_hlds__xml_documentation__Tag_5));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__4_4, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__4_4, 2) = ((MR_Box) (check_hlds__xml_documentation__Var_9));
    }
    return check_hlds__xml_documentation__HeadVar__4_4;
  }
}

static MR_Word MR_CALL 
check_hlds__xml_documentation__nyi_1_f_0(
  MR_String check_hlds__xml_documentation__Tag_3)
{
  {
    MR_bool check_hlds__xml_documentation__succeeded;
    MR_Word check_hlds__xml_documentation__HeadVar__2_2;

    {
      check_hlds__xml_documentation__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 0) = ((MR_Box) (check_hlds__xml_documentation__Tag_3));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 2) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_1[5])));
    }
    return check_hlds__xml_documentation__HeadVar__2_2;
  }
}

static MR_String MR_CALL 
check_hlds__xml_documentation__sym_name_and_arity_to_id_3_f_0(
  MR_String check_hlds__xml_documentation__Prefix_5,
  MR_Word check_hlds__xml_documentation__Name_6,
  MR_Integer check_hlds__xml_documentation__Arity_7)
{
  {
    MR_bool check_hlds__xml_documentation__succeeded;
    MR_String check_hlds__xml_documentation__HeadVar__4_4;
    MR_String check_hlds__xml_documentation__Var_8;
    MR_String check_hlds__xml_documentation__Var_9;
    MR_String check_hlds__xml_documentation__Var_11;
    MR_String check_hlds__xml_documentation__Var_14;
    MR_String check_hlds__xml_documentation__Var_16;

    {
      check_hlds__xml_documentation__Var_16 = mdbcomp__sym_name__sym_name_to_string_1_f_0(check_hlds__xml_documentation__Name_6);
    }
    {
      check_hlds__xml_documentation__Var_14 = mercury__string__f_43_43_2_f_0((MR_String) ".", check_hlds__xml_documentation__Var_16);
    }
    {
      check_hlds__xml_documentation__Var_8 = mercury__string__f_43_43_2_f_0(check_hlds__xml_documentation__Prefix_5, check_hlds__xml_documentation__Var_14);
    }
    {
      check_hlds__xml_documentation__Var_11 = mercury__string__int_to_string_1_f_0(check_hlds__xml_documentation__Arity_7);
    }
    {
      check_hlds__xml_documentation__Var_9 = mercury__string__f_43_43_2_f_0((MR_String) "-", check_hlds__xml_documentation__Var_11);
    }
    {
      check_hlds__xml_documentation__HeadVar__4_4 = mercury__string__f_43_43_2_f_0(check_hlds__xml_documentation__Var_8, check_hlds__xml_documentation__Var_9);
    }
    return check_hlds__xml_documentation__HeadVar__4_4;
  }
}

static MR_Word MR_CALL 
check_hlds__xml_documentation__type_param_to_xml_2_f_0(
  MR_Word check_hlds__xml_documentation__TVarset_4,
  MR_Word check_hlds__xml_documentation__TVar_5)
{
  {
    MR_bool check_hlds__xml_documentation__succeeded;
    MR_Word check_hlds__xml_documentation__Xml_6;
    MR_String check_hlds__xml_documentation__TVarName_7;
    MR_Word check_hlds__xml_documentation__Var_13;
    MR_Word check_hlds__xml_documentation__Var_14;

    {
      check_hlds__xml_documentation__TVarName_7 = mercury__varset__lookup_name_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, check_hlds__xml_documentation__TVarset_4, check_hlds__xml_documentation__TVar_5);
    }
    {
      check_hlds__xml_documentation__Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_14, 0) = ((MR_Box) (check_hlds__xml_documentation__TVarName_7));
    }
    {
      check_hlds__xml_documentation__Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_13, 0) = ((MR_Box) (check_hlds__xml_documentation__Var_14));
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__xml_documentation__Xml_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_6, 0) = ((MR_Box) ((MR_String) "type_variable"));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_6, 2) = ((MR_Box) (check_hlds__xml_documentation__Var_13));
    }
    return check_hlds__xml_documentation__Xml_6;
  }
}

static void MR_CALL 
check_hlds__xml_documentation__maybe_add_import_documentation_5_p_0(
  MR_Word check_hlds__xml_documentation__BuiltinModuleNames_6,
  MR_Word check_hlds__xml_documentation__ModuleName_7,
  MR_Word check_hlds__xml_documentation__AvailEntry_8,
  MR_Word check_hlds__xml_documentation__STATE_VARIABLE_Xmls_0_17,
  MR_Word * check_hlds__xml_documentation__STATE_VARIABLE_Xmls_18)
{
  {
    MR_bool check_hlds__xml_documentation__succeeded;

    {
      check_hlds__xml_documentation__succeeded = mercury__set__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (check_hlds__xml_documentation__ModuleName_7)), check_hlds__xml_documentation__BuiltinModuleNames_6);
    }
    if (check_hlds__xml_documentation__succeeded)
      *check_hlds__xml_documentation__STATE_VARIABLE_Xmls_18 = check_hlds__xml_documentation__STATE_VARIABLE_Xmls_0_17;
    else
      {
        MR_Word check_hlds__xml_documentation__XmlName_10;
        MR_Word check_hlds__xml_documentation__Section_11;
        MR_Word check_hlds__xml_documentation__ImportOrUse_12;
        MR_Word check_hlds__xml_documentation__XmlVisibility_14;
        MR_String check_hlds__xml_documentation__ImportOrUseWord_15;
        MR_Word check_hlds__xml_documentation__Xml_16;
        MR_Word check_hlds__xml_documentation__Var_24;
        MR_Word check_hlds__xml_documentation__Var_25;
        MR_Word check_hlds__xml_documentation___Avails_13;

        {
          check_hlds__xml_documentation__XmlName_10 = check_hlds__xml_documentation__name_to_xml_1_f_0(check_hlds__xml_documentation__ModuleName_7);
        }
        check_hlds__xml_documentation__Section_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__AvailEntry_8, (MR_Integer) 0)))) & (MR_Integer) 1);
        check_hlds__xml_documentation__ImportOrUse_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__AvailEntry_8, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        check_hlds__xml_documentation___Avails_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__AvailEntry_8, (MR_Integer) 1)));
        switch (check_hlds__xml_documentation__Section_11) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              check_hlds__xml_documentation__XmlVisibility_14 = (MR_Word) &check_hlds__xml_documentation_scalar_common_2[4];
            }
            break;
          case (MR_Integer) 0:
            {
              check_hlds__xml_documentation__XmlVisibility_14 = (MR_Word) &check_hlds__xml_documentation_scalar_common_2[5];
            }
            break;
        }
        switch (check_hlds__xml_documentation__ImportOrUse_12) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            check_hlds__xml_documentation__ImportOrUseWord_15 = (MR_String) "import";
            break;
          case (MR_Integer) 1:
            check_hlds__xml_documentation__ImportOrUseWord_15 = (MR_String) "use";
            break;
        }
        {
          check_hlds__xml_documentation__Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_25, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlVisibility_14));
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          check_hlds__xml_documentation__Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_24, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlName_10));
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_24, 1) = ((MR_Box) (check_hlds__xml_documentation__Var_25));
        }
        {
          check_hlds__xml_documentation__Xml_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_16, 0) = ((MR_Box) (check_hlds__xml_documentation__ImportOrUseWord_15));
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_16, 2) = ((MR_Box) (check_hlds__xml_documentation__Var_24));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__xml_documentation__STATE_VARIABLE_Xmls_18 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__xml_documentation__Xml_16));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__xml_documentation__STATE_VARIABLE_Xmls_0_17));
        }
      }
  }
}

static MR_Word MR_CALL 
check_hlds__xml_documentation__name_to_xml_1_f_0(
  MR_Word check_hlds__xml_documentation__HeadVar__1_1)
{
  {
    MR_bool check_hlds__xml_documentation__succeeded;
    MR_Word check_hlds__xml_documentation__HeadVar__2_2;

    if (((MR_tag((MR_Word) check_hlds__xml_documentation__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word check_hlds__xml_documentation__Module_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__HeadVar__1_1, (MR_Integer) 0)));
        MR_String check_hlds__xml_documentation__Name_6 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__xml_documentation__Var_9;
        MR_Word check_hlds__xml_documentation__Var_10;
        MR_String check_hlds__xml_documentation__Var_12;
        MR_Word check_hlds__xml_documentation__Var_13;
        MR_Word check_hlds__xml_documentation__Var_14;
        MR_Word check_hlds__xml_documentation__Var_20;
        MR_Word check_hlds__xml_documentation__Var_21;
        MR_Word check_hlds__xml_documentation__Var_26;
        MR_Word check_hlds__xml_documentation__Var_27;

        {
          check_hlds__xml_documentation__Var_12 = mdbcomp__sym_name__sym_name_to_string_1_f_0(check_hlds__xml_documentation__Module_5);
        }
        {
          check_hlds__xml_documentation__Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_21, 0) = ((MR_Box) (check_hlds__xml_documentation__Var_12));
        }
        {
          check_hlds__xml_documentation__Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_20, 0) = ((MR_Box) (check_hlds__xml_documentation__Var_21));
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          check_hlds__xml_documentation__Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_10, 0) = ((MR_Box) ((MR_String) "module"));
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_10, 2) = ((MR_Box) (check_hlds__xml_documentation__Var_20));
        }
        {
          check_hlds__xml_documentation__Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_27, 0) = ((MR_Box) (check_hlds__xml_documentation__Name_6));
        }
        {
          check_hlds__xml_documentation__Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_26, 0) = ((MR_Box) (check_hlds__xml_documentation__Var_27));
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          check_hlds__xml_documentation__Var_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_14, 0) = ((MR_Box) ((MR_String) "name"));
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_14, 2) = ((MR_Box) (check_hlds__xml_documentation__Var_26));
        }
        {
          check_hlds__xml_documentation__Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_13, 0) = ((MR_Box) (check_hlds__xml_documentation__Var_14));
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          check_hlds__xml_documentation__Var_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_9, 0) = ((MR_Box) (check_hlds__xml_documentation__Var_10));
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_9, 1) = ((MR_Box) (check_hlds__xml_documentation__Var_13));
        }
        {
          check_hlds__xml_documentation__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 0) = ((MR_Box) ((MR_String) "qualified"));
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 2) = ((MR_Box) (check_hlds__xml_documentation__Var_9));
        }
      }
    else
      {
        MR_String check_hlds__xml_documentation__Name_3 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__xml_documentation__Var_32;
        MR_Word check_hlds__xml_documentation__Var_33;

        {
          check_hlds__xml_documentation__Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_33, 0) = ((MR_Box) (check_hlds__xml_documentation__Name_3));
        }
        {
          check_hlds__xml_documentation__Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_32, 0) = ((MR_Box) (check_hlds__xml_documentation__Var_33));
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          check_hlds__xml_documentation__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 0) = ((MR_Box) ((MR_String) "unqualified"));
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 2) = ((MR_Box) (check_hlds__xml_documentation__Var_32));
        }
      }
    return check_hlds__xml_documentation__HeadVar__2_2;
  }
}

static MR_Word MR_CALL 
check_hlds__xml_documentation__maybe_add_comment_3_f_0(
  MR_Word check_hlds__xml_documentation__Comments_5,
  MR_Word check_hlds__xml_documentation__Context_6,
  MR_Word check_hlds__xml_documentation__Xml_7)
{
  {
    MR_bool check_hlds__xml_documentation__succeeded = ((MR_tag((MR_Word) check_hlds__xml_documentation__Xml_7)) == (MR_mktag((MR_Integer) 0)));
    MR_Word check_hlds__xml_documentation__HeadVar__4_4;
    MR_String check_hlds__xml_documentation__N_8;
    MR_Word check_hlds__xml_documentation__As_9;
    MR_Word check_hlds__xml_documentation__Cs_10;

    if (check_hlds__xml_documentation__succeeded)
      {
        check_hlds__xml_documentation__N_8 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_7, (MR_Integer) 0)));
        check_hlds__xml_documentation__As_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_7, (MR_Integer) 1)));
        check_hlds__xml_documentation__Cs_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_7, (MR_Integer) 2)));
        {
          MR_String check_hlds__xml_documentation__Comment_11;
          MR_Integer check_hlds__xml_documentation__Line_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Context_6, (MR_Integer) 1)));
          MR_String check_hlds__xml_documentation__Var_24 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Context_6, (MR_Integer) 0)));
          MR_String check_hlds__xml_documentation__C_26;
          MR_String check_hlds__xml_documentation__Comment0_31;
          MR_String check_hlds__xml_documentation__RestComment_32;
          MR_Word check_hlds__xml_documentation__Var_33 = (MR_Word) check_hlds__xml_documentation__Comments_5;
          MR_Word check_hlds__xml_documentation__Var_34;
          MR_Integer check_hlds__xml_documentation__Var_35;
          MR_Integer check_hlds__xml_documentation__Var_36;
          MR_Box check_hlds__xml_documentation__conv0_Var_34;

          {
            check_hlds__xml_documentation__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &check_hlds__xml_documentation__check_hlds__xml_documentation__type_ctor_info_line_type_0, check_hlds__xml_documentation__Var_33, check_hlds__xml_documentation__Line_25, &check_hlds__xml_documentation__conv0_Var_34);
          }
          if (check_hlds__xml_documentation__succeeded)
            {
              check_hlds__xml_documentation__Var_34 = ((MR_Word) check_hlds__xml_documentation__conv0_Var_34);
              check_hlds__xml_documentation__succeeded = MR_TRUE;
            }
          if (check_hlds__xml_documentation__succeeded)
            {
              check_hlds__xml_documentation__succeeded = ((MR_tag((MR_Word) check_hlds__xml_documentation__Var_34)) == (MR_mktag((MR_Integer) 2)));
              if (check_hlds__xml_documentation__succeeded)
                {
                  check_hlds__xml_documentation__Comment0_31 = ((MR_String) (MR_hl_field(MR_mktag(2), check_hlds__xml_documentation__Var_34, (MR_Integer) 0)));
                  check_hlds__xml_documentation__Var_36 = (MR_Integer) 1;
                  check_hlds__xml_documentation__Var_35 = (check_hlds__xml_documentation__Line_25 + check_hlds__xml_documentation__Var_36);
                  {
                    check_hlds__xml_documentation__RestComment_32 = check_hlds__xml_documentation__get_comment_forwards_2_f_0(check_hlds__xml_documentation__Comments_5, check_hlds__xml_documentation__Var_35);
                  }
                  {
                    check_hlds__xml_documentation__C_26 = mercury__string__f_43_43_2_f_0(check_hlds__xml_documentation__Comment0_31, check_hlds__xml_documentation__RestComment_32);
                  }
                  check_hlds__xml_documentation__succeeded = MR_TRUE;
                }
            }
          if (check_hlds__xml_documentation__succeeded)
            {
              check_hlds__xml_documentation__Comment_11 = check_hlds__xml_documentation__C_26;
              check_hlds__xml_documentation__succeeded = (strcmp(check_hlds__xml_documentation__Comment_11, (MR_String) "") == 0);
              check_hlds__xml_documentation__succeeded = !(check_hlds__xml_documentation__succeeded);
            }
          else
            {
              MR_String check_hlds__xml_documentation__C_27;
              MR_Word check_hlds__xml_documentation__Var_43 = (MR_Word) check_hlds__xml_documentation__Comments_5;
              MR_Integer check_hlds__xml_documentation__Var_44 = (check_hlds__xml_documentation__Line_25 - (MR_Integer) 1);
              MR_Integer check_hlds__xml_documentation__Var_47;
              MR_Integer check_hlds__xml_documentation__Var_48;
              MR_Word check_hlds__xml_documentation__Var_51;
              MR_Box check_hlds__xml_documentation__conv1_Var_51;
              MR_String check_hlds__xml_documentation__ArgX1_54;

              {
                check_hlds__xml_documentation__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &check_hlds__xml_documentation__check_hlds__xml_documentation__type_ctor_info_line_type_0, check_hlds__xml_documentation__Var_43, check_hlds__xml_documentation__Var_44, &check_hlds__xml_documentation__conv1_Var_51);
              }
              if (check_hlds__xml_documentation__succeeded)
                {
                  check_hlds__xml_documentation__Var_51 = ((MR_Word) check_hlds__xml_documentation__conv1_Var_51);
                  check_hlds__xml_documentation__succeeded = MR_TRUE;
                }
              if (check_hlds__xml_documentation__succeeded)
                {
                  check_hlds__xml_documentation__succeeded = ((MR_tag((MR_Word) check_hlds__xml_documentation__Var_51)) == (MR_mktag((MR_Integer) 1)));
                  if (check_hlds__xml_documentation__succeeded)
                    {
                      check_hlds__xml_documentation__ArgX1_54 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_51, (MR_Integer) 0)));
                      check_hlds__xml_documentation__Var_48 = (MR_Integer) 1;
                      check_hlds__xml_documentation__Var_47 = (check_hlds__xml_documentation__Line_25 - check_hlds__xml_documentation__Var_48);
                      {
                        check_hlds__xml_documentation__C_27 = check_hlds__xml_documentation__get_comment_backwards_2_f_0(check_hlds__xml_documentation__Comments_5, check_hlds__xml_documentation__Var_47);
                      }
                      check_hlds__xml_documentation__succeeded = MR_TRUE;
                    }
                }
              if (check_hlds__xml_documentation__succeeded)
                {
                  check_hlds__xml_documentation__Comment_11 = check_hlds__xml_documentation__C_27;
                  check_hlds__xml_documentation__succeeded = (strcmp(check_hlds__xml_documentation__Comment_11, (MR_String) "") == 0);
                  check_hlds__xml_documentation__succeeded = !(check_hlds__xml_documentation__succeeded);
                }
              else
                {
                  check_hlds__xml_documentation__succeeded = (strcmp((MR_String) "", (MR_String) "") == 0);
                  check_hlds__xml_documentation__succeeded = !(check_hlds__xml_documentation__succeeded);
                  if (check_hlds__xml_documentation__succeeded)
                    {
                      check_hlds__xml_documentation__Comment_11 = (MR_String) "";
                      check_hlds__xml_documentation__succeeded = MR_TRUE;
                    }
                }
            }
          if (check_hlds__xml_documentation__succeeded)
            {
              MR_Word check_hlds__xml_documentation__Var_12;
              MR_Word check_hlds__xml_documentation__Var_13;
              MR_Word check_hlds__xml_documentation__Var_16;
              MR_Word check_hlds__xml_documentation__Var_17;

              {
                check_hlds__xml_documentation__Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_17, 0) = ((MR_Box) (check_hlds__xml_documentation__Comment_11));
              }
              {
                check_hlds__xml_documentation__Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_16, 0) = ((MR_Box) (check_hlds__xml_documentation__Var_17));
                MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                check_hlds__xml_documentation__Var_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_13, 0) = ((MR_Box) ((MR_String) "comment"));
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Var_13, 2) = ((MR_Box) (check_hlds__xml_documentation__Var_16));
              }
              {
                check_hlds__xml_documentation__Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_12, 0) = ((MR_Box) (check_hlds__xml_documentation__Var_13));
                MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_12, 1) = ((MR_Box) (check_hlds__xml_documentation__Cs_10));
              }
              {
                check_hlds__xml_documentation__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__4_4, 0) = ((MR_Box) (check_hlds__xml_documentation__N_8));
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__4_4, 1) = ((MR_Box) (check_hlds__xml_documentation__As_9));
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__4_4, 2) = ((MR_Box) (check_hlds__xml_documentation__Var_12));
              }
            }
          else
            check_hlds__xml_documentation__HeadVar__4_4 = check_hlds__xml_documentation__Xml_7;
        }
      }
    else
      {
        MR_Box check_hlds__xml_documentation__conv2_HeadVar__4_4;

        {
          check_hlds__xml_documentation__conv2_HeadVar__4_4 = mercury__require__unexpected_3_f_0((MR_Word) &mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0, (MR_String) "check_hlds.xml_documentation", (MR_String) "function \140check_hlds.xml_documentation.maybe_add_comment\'/3", (MR_String) "not an element");
        }
        check_hlds__xml_documentation__HeadVar__4_4 = ((MR_Word) check_hlds__xml_documentation__conv2_HeadVar__4_4);
      }
    return check_hlds__xml_documentation__HeadVar__4_4;
  }
}

static MR_String MR_CALL 
check_hlds__xml_documentation__get_comment_backwards_2_f_0(
  MR_Word check_hlds__xml_documentation__Comments_4,
  MR_Integer check_hlds__xml_documentation__Line_5)
{
  {
    MR_bool check_hlds__xml_documentation__succeeded;
    MR_String check_hlds__xml_documentation__Comment_6;
    MR_Word check_hlds__xml_documentation__LineType_7;
    MR_Word check_hlds__xml_documentation__Var_11 = (MR_Word) check_hlds__xml_documentation__Comments_4;
    MR_Box check_hlds__xml_documentation__conv0_LineType_7;

    {
      check_hlds__xml_documentation__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &check_hlds__xml_documentation__check_hlds__xml_documentation__type_ctor_info_line_type_0, check_hlds__xml_documentation__Var_11, check_hlds__xml_documentation__Line_5, &check_hlds__xml_documentation__conv0_LineType_7);
    }
    if (check_hlds__xml_documentation__succeeded)
      {
        check_hlds__xml_documentation__LineType_7 = ((MR_Word) check_hlds__xml_documentation__conv0_LineType_7);
        check_hlds__xml_documentation__succeeded = MR_TRUE;
      }
    if (check_hlds__xml_documentation__succeeded)
      switch (MR_tag((MR_Word) check_hlds__xml_documentation__LineType_7)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          check_hlds__xml_documentation__Comment_6 = (MR_String) "";
          break;
        case (MR_Integer) 1:
          {
            MR_String check_hlds__xml_documentation__CurrentComment_8 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__LineType_7, (MR_Integer) 0)));
            MR_String check_hlds__xml_documentation__CommentAbove_9;
            MR_Integer check_hlds__xml_documentation__Var_12 = (check_hlds__xml_documentation__Line_5 - (MR_Integer) 1);

            {
              check_hlds__xml_documentation__CommentAbove_9 = check_hlds__xml_documentation__get_comment_backwards_2_f_0(check_hlds__xml_documentation__Comments_4, check_hlds__xml_documentation__Var_12);
            }
            {
              check_hlds__xml_documentation__Comment_6 = mercury__string__f_43_43_2_f_0(check_hlds__xml_documentation__CommentAbove_9, check_hlds__xml_documentation__CurrentComment_8);
            }
          }
          break;
        case (MR_Integer) 2:
          check_hlds__xml_documentation__Comment_6 = (MR_String) "";
          break;
      }
    else
      check_hlds__xml_documentation__Comment_6 = (MR_String) "";
    return check_hlds__xml_documentation__Comment_6;
  }
}

static MR_bool MR_CALL 
check_hlds__xml_documentation__is_not_comment_char_1_p_0(
  MR_Char check_hlds__xml_documentation__C_2)
{
  {
    MR_bool check_hlds__xml_documentation__succeeded = (check_hlds__xml_documentation__C_2 == (MR_Char) 37);

    check_hlds__xml_documentation__succeeded = !(check_hlds__xml_documentation__succeeded);
    return check_hlds__xml_documentation__succeeded;
  }
}

void MR_CALL 
check_hlds__xml_documentation__xml_documentation_3_p_0(
  MR_Word check_hlds__xml_documentation__ModuleInfo_4)
{
  {
    MR_bool check_hlds__xml_documentation__succeeded;
    MR_Word check_hlds__xml_documentation__Globals_6;
    MR_Word check_hlds__xml_documentation__ModuleName_7;
    MR_String check_hlds__xml_documentation__FileName_8;
    MR_String check_hlds__xml_documentation__SrcFileName_9;
    MR_Word check_hlds__xml_documentation__SrcResult_10;

    {
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__xml_documentation__ModuleInfo_4, &check_hlds__xml_documentation__Globals_6);
    }
    {
      hlds__hlds_module__module_info_get_name_2_p_0(check_hlds__xml_documentation__ModuleInfo_4, &check_hlds__xml_documentation__ModuleName_7);
    }
    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(check_hlds__xml_documentation__Globals_6, (MR_Integer) 0, (MR_String) ".xml", check_hlds__xml_documentation__ModuleName_7, &check_hlds__xml_documentation__FileName_8);
    }
    {
      parse_tree__source_file_map__lookup_module_source_file_4_p_0(check_hlds__xml_documentation__ModuleName_7, &check_hlds__xml_documentation__SrcFileName_9);
    }
    {
      mercury__io__open_input_4_p_0(check_hlds__xml_documentation__SrcFileName_9, &check_hlds__xml_documentation__SrcResult_10);
    }
    if (((MR_tag((MR_Word) check_hlds__xml_documentation__SrcResult_10)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word check_hlds__xml_documentation__SrcErr_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__SrcResult_10, (MR_Integer) 0)));

        {
          parse_tree__error_util__unable_to_open_file_4_p_0(check_hlds__xml_documentation__SrcFileName_9, check_hlds__xml_documentation__SrcErr_18);
        }
      }
    else
      {
        MR_Word check_hlds__xml_documentation__SrcStream_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__SrcResult_10, (MR_Integer) 0)));
        MR_Word check_hlds__xml_documentation__Comments_12;
        MR_String check_hlds__xml_documentation__ModuleComment_13;
        MR_Word check_hlds__xml_documentation__OpenResult_14;
        MR_Word check_hlds__xml_documentation__Var_27;
        MR_Word check_hlds__xml_documentation__Var_29;

        {
          check_hlds__xml_documentation__Var_29 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &check_hlds__xml_documentation__check_hlds__xml_documentation__type_ctor_info_line_type_0);
        }
        check_hlds__xml_documentation__Var_27 = (MR_Word) check_hlds__xml_documentation__Var_29;
        {
          check_hlds__xml_documentation__build_comments_5_p_0(check_hlds__xml_documentation__SrcStream_11, check_hlds__xml_documentation__Var_27, &check_hlds__xml_documentation__Comments_12);
        }
        {
          check_hlds__xml_documentation__ModuleComment_13 = check_hlds__xml_documentation__get_comment_forwards_2_f_0(check_hlds__xml_documentation__Comments_12, (MR_Integer) 1);
        }
        {
          mercury__io__open_output_4_p_0(check_hlds__xml_documentation__FileName_8, &check_hlds__xml_documentation__OpenResult_14);
        }
        if (((MR_tag((MR_Word) check_hlds__xml_documentation__OpenResult_14)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Word check_hlds__xml_documentation__Err_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__OpenResult_14, (MR_Integer) 0)));

            {
              parse_tree__error_util__unable_to_open_file_4_p_0(check_hlds__xml_documentation__FileName_8, check_hlds__xml_documentation__Err_17);
            }
          }
        else
          {
            MR_Word check_hlds__xml_documentation__Stream_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__OpenResult_14, (MR_Integer) 0)));
            MR_Word check_hlds__xml_documentation__MIXmlDoc_16;
            MR_Box check_hlds__xml_documentation__conv0_STATE_VARIABLE_IO_20;

            {
              check_hlds__xml_documentation__MIXmlDoc_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__MIXmlDoc_16, 0) = ((MR_Box) (check_hlds__xml_documentation__Comments_12));
              MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__MIXmlDoc_16, 1) = ((MR_Box) (check_hlds__xml_documentation__ModuleComment_13));
              MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__MIXmlDoc_16, 2) = ((MR_Box) (check_hlds__xml_documentation__ModuleInfo_4));
            }
            {
              mercury__term_to_xml__write_xml_doc_4_p_0((MR_Word) &check_hlds__xml_documentation_scalar_common_1[0], (MR_Word) &check_hlds__xml_documentation_scalar_common_4[0], ((MR_Box) (check_hlds__xml_documentation__Stream_15)), ((MR_Box) (check_hlds__xml_documentation__MIXmlDoc_16)), ((MR_Box) ((MR_Integer) 0)), &check_hlds__xml_documentation__conv0_STATE_VARIABLE_IO_20);
            }
          }
      }
  }
}

static MR_String MR_CALL 
check_hlds__xml_documentation__get_comment_forwards_2_f_0(
  MR_Word check_hlds__xml_documentation__Comments_4,
  MR_Integer check_hlds__xml_documentation__Line_5)
{
  {
    MR_bool check_hlds__xml_documentation__succeeded;
    MR_String check_hlds__xml_documentation__Comment_6;
    MR_Word check_hlds__xml_documentation__LineType_7;
    MR_Word check_hlds__xml_documentation__Var_11 = (MR_Word) check_hlds__xml_documentation__Comments_4;
    MR_Box check_hlds__xml_documentation__conv0_LineType_7;

    {
      check_hlds__xml_documentation__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &check_hlds__xml_documentation__check_hlds__xml_documentation__type_ctor_info_line_type_0, check_hlds__xml_documentation__Var_11, check_hlds__xml_documentation__Line_5, &check_hlds__xml_documentation__conv0_LineType_7);
    }
    if (check_hlds__xml_documentation__succeeded)
      {
        check_hlds__xml_documentation__LineType_7 = ((MR_Word) check_hlds__xml_documentation__conv0_LineType_7);
        check_hlds__xml_documentation__succeeded = MR_TRUE;
      }
    if (check_hlds__xml_documentation__succeeded)
      switch (MR_tag((MR_Word) check_hlds__xml_documentation__LineType_7)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          check_hlds__xml_documentation__Comment_6 = (MR_String) "";
          break;
        case (MR_Integer) 1:
          {
            MR_String check_hlds__xml_documentation__CurrentComment_8 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__LineType_7, (MR_Integer) 0)));
            MR_String check_hlds__xml_documentation__CommentBelow_9;
            MR_Integer check_hlds__xml_documentation__Var_12 = (check_hlds__xml_documentation__Line_5 + (MR_Integer) 1);

            {
              check_hlds__xml_documentation__CommentBelow_9 = check_hlds__xml_documentation__get_comment_forwards_2_f_0(check_hlds__xml_documentation__Comments_4, check_hlds__xml_documentation__Var_12);
            }
            {
              check_hlds__xml_documentation__Comment_6 = mercury__string__f_43_43_2_f_0(check_hlds__xml_documentation__CurrentComment_8, check_hlds__xml_documentation__CommentBelow_9);
            }
          }
          break;
        case (MR_Integer) 2:
          check_hlds__xml_documentation__Comment_6 = (MR_String) "";
          break;
      }
    else
      check_hlds__xml_documentation__Comment_6 = (MR_String) "";
    return check_hlds__xml_documentation__Comment_6;
  }
}

static MR_bool MR_CALL 
check_hlds__xml_documentation__build_comments_5_p_0_2(
  MR_Box check_hlds__xml_documentation__closure_arg,
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
{
  {
    MR_bool check_hlds__xml_documentation__succeeded;
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;

    {
      check_hlds__xml_documentation__succeeded = check_hlds__xml_documentation__is_not_comment_char_1_p_0(((MR_Char) (MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
    return check_hlds__xml_documentation__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__xml_documentation__build_comments_5_p_0_1(
  MR_Box check_hlds__xml_documentation__closure_arg,
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
{
  {
    MR_bool check_hlds__xml_documentation__succeeded;
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;

    {
      check_hlds__xml_documentation__succeeded = mercury__char__is_whitespace_1_p_0(((MR_Char) (MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
    return check_hlds__xml_documentation__succeeded;
  }
}

static void MR_CALL 
check_hlds__xml_documentation__build_comments_5_p_0(
  MR_Word check_hlds__xml_documentation__S_6,
  MR_Word check_hlds__xml_documentation__HeadVar__2_2,
  MR_Word * check_hlds__xml_documentation__HeadVar__3_3)
{
  {
    MR_bool check_hlds__xml_documentation__succeeded;
    MR_Integer check_hlds__xml_documentation__LineNumber_9;
    MR_Word check_hlds__xml_documentation__LineResult_10;
    MR_Word check_hlds__xml_documentation__STATE_VARIABLE_C_0_13 = (MR_Word) check_hlds__xml_documentation__HeadVar__2_2;
    MR_Word check_hlds__xml_documentation__STATE_VARIABLE_C_14;

    {
      mercury__io__get_line_number_4_p_0(check_hlds__xml_documentation__S_6, &check_hlds__xml_documentation__LineNumber_9);
    }
    {
      mercury__io__read_line_4_p_0(check_hlds__xml_documentation__S_6, &check_hlds__xml_documentation__LineResult_10);
    }
    switch (MR_tag((MR_Word) check_hlds__xml_documentation__LineResult_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        check_hlds__xml_documentation__STATE_VARIABLE_C_14 = check_hlds__xml_documentation__STATE_VARIABLE_C_0_13;
        break;
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__xml_documentation__TypeCtorInfo_19_46 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
          MR_Word check_hlds__xml_documentation__Line_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__LineResult_10, (MR_Integer) 0)));
          MR_Word check_hlds__xml_documentation__Var_22;
          MR_Word check_hlds__xml_documentation__STATE_VARIABLE_C_23_23;
          MR_Word check_hlds__xml_documentation__Var_24;
          MR_Word check_hlds__xml_documentation__Var_25;
          MR_Word check_hlds__xml_documentation__Rest_32;
          MR_Word check_hlds__xml_documentation__Decl_33;
          MR_Word check_hlds__xml_documentation__Comment_34;

          {
            mercury__list__drop_while_3_p_0(check_hlds__xml_documentation__TypeCtorInfo_19_46, (MR_Word) &check_hlds__xml_documentation_scalar_common_2[2], check_hlds__xml_documentation__Line_11, &check_hlds__xml_documentation__Rest_32);
          }
          {
            mercury__list__take_while_4_p_0(check_hlds__xml_documentation__TypeCtorInfo_19_46, (MR_Word) &check_hlds__xml_documentation_scalar_common_2[3], check_hlds__xml_documentation__Rest_32, &check_hlds__xml_documentation__Decl_33, &check_hlds__xml_documentation__Comment_34);
          }
          if ((check_hlds__xml_documentation__Rest_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            check_hlds__xml_documentation__Var_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          else
          if ((check_hlds__xml_documentation__Comment_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            check_hlds__xml_documentation__Var_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
          else
          if ((check_hlds__xml_documentation__Decl_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              MR_String check_hlds__xml_documentation__Var_44;

              {
                check_hlds__xml_documentation__Var_44 = mercury__string__from_char_list_1_f_0(check_hlds__xml_documentation__Comment_34);
              }
              {
                check_hlds__xml_documentation__Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Var_22, 0) = ((MR_Box) (check_hlds__xml_documentation__Var_44));
              }
            }
          else
            {
              MR_String check_hlds__xml_documentation__Var_43;

              {
                check_hlds__xml_documentation__Var_43 = mercury__string__from_char_list_1_f_0(check_hlds__xml_documentation__Comment_34);
              }
              {
                check_hlds__xml_documentation__Var_22 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), check_hlds__xml_documentation__Var_22, 0) = ((MR_Box) (check_hlds__xml_documentation__Var_43));
              }
            }
          {
            mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &check_hlds__xml_documentation__check_hlds__xml_documentation__type_ctor_info_line_type_0, check_hlds__xml_documentation__LineNumber_9, ((MR_Box) (check_hlds__xml_documentation__Var_22)), check_hlds__xml_documentation__STATE_VARIABLE_C_0_13, &check_hlds__xml_documentation__STATE_VARIABLE_C_23_23);
          }
          check_hlds__xml_documentation__Var_24 = (MR_Word) check_hlds__xml_documentation__STATE_VARIABLE_C_23_23;
          {
            check_hlds__xml_documentation__build_comments_5_p_0(check_hlds__xml_documentation__S_6, check_hlds__xml_documentation__Var_24, &check_hlds__xml_documentation__Var_25);
          }
          check_hlds__xml_documentation__STATE_VARIABLE_C_14 = (MR_Word) check_hlds__xml_documentation__Var_25;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word check_hlds__xml_documentation__E_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__xml_documentation__LineResult_10, (MR_Integer) 0)));
          MR_String check_hlds__xml_documentation__Var_21;

          {
            check_hlds__xml_documentation__Var_21 = mercury__io__error_message_1_f_0(check_hlds__xml_documentation__E_12);
          }
          {
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.xml_documentation", (MR_String) "predicate \140check_hlds.xml_documentation.build_comments\'/5", check_hlds__xml_documentation__Var_21);
            return;
          }
        }
        break;
    }
    *check_hlds__xml_documentation__HeadVar__3_3 = (MR_Word) check_hlds__xml_documentation__STATE_VARIABLE_C_14;
  }
}

static MR_bool MR_CALL 
check_hlds__xml_documentation____Unify____comments_0_0_10001(
  MR_Box check_hlds__xml_documentation__wrapper_arg_1,
  MR_Box check_hlds__xml_documentation__wrapper_arg_2)
{
  {
    MR_bool check_hlds__xml_documentation__succeeded;

    {
      check_hlds__xml_documentation__succeeded = check_hlds__xml_documentation____Unify____comments_0_0(((MR_Word) check_hlds__xml_documentation__wrapper_arg_1), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_2));
    }
    return check_hlds__xml_documentation__succeeded;
  }
}

static void MR_CALL 
check_hlds__xml_documentation____Compare____comments_0_0_10001(
  MR_Box * check_hlds__xml_documentation__wrapper_arg_1,
  MR_Box check_hlds__xml_documentation__wrapper_arg_2,
  MR_Box check_hlds__xml_documentation__wrapper_arg_3)
{
  {
    MR_Word check_hlds__xml_documentation__conv0_HeadVar__1_1;

    {
      check_hlds__xml_documentation____Compare____comments_0_0(&check_hlds__xml_documentation__conv0_HeadVar__1_1, ((MR_Word) check_hlds__xml_documentation__wrapper_arg_2), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_3));
    }
    *check_hlds__xml_documentation__wrapper_arg_1 = ((MR_Box) (check_hlds__xml_documentation__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__xml_documentation____Unify____line_type_0_0_10001(
  MR_Box check_hlds__xml_documentation__wrapper_arg_1,
  MR_Box check_hlds__xml_documentation__wrapper_arg_2)
{
  {
    MR_bool check_hlds__xml_documentation__succeeded;

    {
      check_hlds__xml_documentation__succeeded = check_hlds__xml_documentation____Unify____line_type_0_0(((MR_Word) check_hlds__xml_documentation__wrapper_arg_1), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_2));
    }
    return check_hlds__xml_documentation__succeeded;
  }
}

static void MR_CALL 
check_hlds__xml_documentation____Compare____line_type_0_0_10001(
  MR_Box * check_hlds__xml_documentation__wrapper_arg_1,
  MR_Box check_hlds__xml_documentation__wrapper_arg_2,
  MR_Box check_hlds__xml_documentation__wrapper_arg_3)
{
  {
    MR_Word check_hlds__xml_documentation__conv0_HeadVar__1_1;

    {
      check_hlds__xml_documentation____Compare____line_type_0_0(&check_hlds__xml_documentation__conv0_HeadVar__1_1, ((MR_Word) check_hlds__xml_documentation__wrapper_arg_2), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_3));
    }
    *check_hlds__xml_documentation__wrapper_arg_1 = ((MR_Box) (check_hlds__xml_documentation__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__xml_documentation____Unify____module_info_xml_doc_0_0_10001(
  MR_Box check_hlds__xml_documentation__wrapper_arg_1,
  MR_Box check_hlds__xml_documentation__wrapper_arg_2)
{
  {
    MR_bool check_hlds__xml_documentation__succeeded;

    {
      check_hlds__xml_documentation__succeeded = check_hlds__xml_documentation____Unify____module_info_xml_doc_0_0(((MR_Word) check_hlds__xml_documentation__wrapper_arg_1), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_2));
    }
    return check_hlds__xml_documentation__succeeded;
  }
}

static void MR_CALL 
check_hlds__xml_documentation____Compare____module_info_xml_doc_0_0_10001(
  MR_Box * check_hlds__xml_documentation__wrapper_arg_1,
  MR_Box check_hlds__xml_documentation__wrapper_arg_2,
  MR_Box check_hlds__xml_documentation__wrapper_arg_3)
{
  {
    MR_Word check_hlds__xml_documentation__conv0_HeadVar__1_1;

    {
      check_hlds__xml_documentation____Compare____module_info_xml_doc_0_0(&check_hlds__xml_documentation__conv0_HeadVar__1_1, ((MR_Word) check_hlds__xml_documentation__wrapper_arg_2), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_3));
    }
    *check_hlds__xml_documentation__wrapper_arg_1 = ((MR_Box) (check_hlds__xml_documentation__conv0_HeadVar__1_1));
  }
}

static MR_Box MR_CALL 
check_hlds__xml_documentation__ClassMethod_for_term_to_xml__xmlable____check_hlds__xml_documentation__module_info_xml_doc__arity0______term_to_xml__to_xml_1_1_f_0_10001(
  MR_Box check_hlds__xml_documentation__closure_arg,
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
{
  {
    MR_Box check_hlds__xml_documentation__wrapper_arg_2;
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
    MR_Word check_hlds__xml_documentation__conv0_Xml_6;

    {
      check_hlds__xml_documentation__conv0_Xml_6 = check_hlds__xml_documentation__ClassMethod_for_term_to_xml__xmlable____check_hlds__xml_documentation__module_info_xml_doc__arity0______term_to_xml__to_xml_1_1_f_0(((MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
    check_hlds__xml_documentation__wrapper_arg_2 = ((MR_Box) (check_hlds__xml_documentation__conv0_Xml_6));
    return check_hlds__xml_documentation__wrapper_arg_2;
  }
}

void mercury__check_hlds__xml_documentation__init(void)
{
}

void mercury__check_hlds__xml_documentation__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__xml_documentation__check_hlds__xml_documentation__type_ctor_info_comments_0);
	MR_register_type_ctor_info(&check_hlds__xml_documentation__check_hlds__xml_documentation__type_ctor_info_line_type_0);
	MR_register_type_ctor_info(&check_hlds__xml_documentation__check_hlds__xml_documentation__type_ctor_info_module_info_xml_doc_0);
}

void mercury__check_hlds__xml_documentation__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__xml_documentation__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module check_hlds.xml_documentation. */
