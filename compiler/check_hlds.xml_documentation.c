/*
** Automatically generated from `xml_documentation.m'
** by the Mercury compiler,
** version rotd-2025-03-11
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


// :- module check_hlds.xml_documentation.
// :- implementation.

/*
INIT mercury__check_hlds__xml_documentation__init
ENDINIT
*/

#include "check_hlds.xml_documentation.mih"


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
#include "int.mih"
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
#include "ops.mih"
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
#include "term_to_xml.mih"
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
#include "hlds.hlds_proc_util.mih"
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
#include "libs.maybe_util.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
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
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.source_file_map.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.item_types.mih"
#include "recompilation.record_uses.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "parse_tree.module_qual.mq_info.mih"




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
check_hlds__xml_documentation__IntroducedFrom__func__class_methods_to_xml__838__1_2_f_0(
  MR_Word PredTable_6,
  MR_Word LambdaHeadVar__1_22);

static MR_Word MR_CALL 
check_hlds__xml_documentation__IntroducedFrom__func__class_methods_to_xml__831__1_1_f_0(
  MR_Word LambdaHeadVar__1_19);

static void MR_CALL 
check_hlds__xml_documentation__ClassMethod_for_term_to_xml__xmlable____check_hlds__xml_documentation__module_info_xml_doc__arity0______term_to_xml__to_xml_1_1_f_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__xml_documentation__ClassMethod_for_term_to_xml__xmlable____check_hlds__xml_documentation__module_info_xml_doc__arity0______term_to_xml__to_xml_1_1_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__xml_documentation__ClassMethod_for_term_to_xml__xmlable____check_hlds__xml_documentation__module_info_xml_doc__arity0______term_to_xml__to_xml_1_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__xml_documentation__ClassMethod_for_term_to_xml__xmlable____check_hlds__xml_documentation__module_info_xml_doc__arity0______term_to_xml__to_xml_1_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_Word MR_CALL 
check_hlds__xml_documentation__ClassMethod_for_term_to_xml__xmlable____check_hlds__xml_documentation__module_info_xml_doc__arity0______term_to_xml__to_xml_1_1_f_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
check_hlds__xml_documentation____Compare____module_info_xml_doc_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__xml_documentation____Unify____module_info_xml_doc_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__xml_documentation____Compare____line_type_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__xml_documentation____Unify____line_type_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__xml_documentation____Compare____comments_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__xml_documentation____Unify____comments_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
check_hlds__xml_documentation__instance_visibility_to_xml_1_f_0(
  MR_Word Status_3);

static MR_Word MR_CALL 
check_hlds__xml_documentation__mode_visibility_to_xml_1_f_0(
  MR_Word Status_3);

static MR_Word MR_CALL 
check_hlds__xml_documentation__inst_visibility_to_xml_1_f_0(
  MR_Word Status_3);

static MR_Box MR_CALL 
check_hlds__xml_documentation__prog_constraint_to_xml_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
check_hlds__xml_documentation__prog_constraint_to_xml_2_f_0(
  MR_Word TVarset_4,
  MR_Word Constraint_5);

static MR_Box MR_CALL 
check_hlds__xml_documentation__fundep_to_xml_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
check_hlds__xml_documentation__fundep_to_xml_3_f_0(
  MR_Word TVarset_5,
  MR_Word Vars_6,
  MR_Word HeadVar__3_3);

static MR_Box MR_CALL 
check_hlds__xml_documentation__class_documentation_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__xml_documentation__class_documentation_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__xml_documentation__class_documentation_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__xml_documentation__class_documentation_6_p_0(
  MR_Word C_7,
  MR_Word PredTable_8,
  MR_Word HeadVar__3_3,
  MR_Word ClassDefn_11,
  MR_Word STATE_VARIABLE_Xml_0_27,
  MR_Word * STATE_VARIABLE_Xml_28);

static MR_Word MR_CALL 
check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_120_109_108_95_108_105_115_116_95_95_104_111_53_95_95_91_49_93_95_48_3_f_0(
  MR_String Tag_5,
  MR_Word F_6,
  MR_Word L_7);

static MR_Word MR_CALL 
check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_120_109_108_95_108_105_115_116_95_95_104_111_52_95_95_91_49_44_32_50_93_95_48_3_f_0(
  MR_String Tag_5,
  MR_Word F_6,
  MR_Word L_7);

static MR_Word MR_CALL 
check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_120_109_108_95_108_105_115_116_95_95_104_111_51_95_95_91_49_93_95_48_3_f_0(
  MR_String Tag_5,
  MR_Word F_6,
  MR_Word L_7);

static MR_Word MR_CALL 
check_hlds__xml_documentation__typeclass_visibility_to_xml_1_f_0(
  MR_Word Status_3);

static MR_Word MR_CALL 
check_hlds__xml_documentation__prog_context_to_xml_1_f_0(
  MR_Word HeadVar__1_1);

static MR_Box MR_CALL 
check_hlds__xml_documentation__class_methods_to_xml_3_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__xml_documentation__class_methods_to_xml_3_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__xml_documentation__class_methods_to_xml_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
check_hlds__xml_documentation__class_methods_to_xml_3_f_0(
  MR_Word C_5,
  MR_Word PredTable_6,
  MR_Word MethodInfos_7);

static MR_Box MR_CALL 
check_hlds__xml_documentation__bound_functor_to_xml_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
check_hlds__xml_documentation__bound_functor_to_xml_2_f_0(
  MR_Word InstVarSet_4,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
check_hlds__xml_documentation__cons_id_to_xml_1_f_0(
  MR_Word HeadVar__1_1);

static MR_Word MR_CALL 
check_hlds__xml_documentation__tagged_string_2_f_0(
  MR_String E_4,
  MR_String S_5);

static MR_Word MR_CALL 
check_hlds__xml_documentation__tagged_int_2_f_0(
  MR_String E_4,
  MR_Integer I_5);

static MR_Word MR_CALL 
check_hlds__xml_documentation__arity_to_xml_1_f_0(
  MR_Integer Arity_3);

static MR_Box MR_CALL 
check_hlds__xml_documentation__mer_inst_to_xml_2_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__xml_documentation__mer_inst_to_xml_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
check_hlds__xml_documentation__mer_inst_to_xml_2_f_0(
  MR_Word InstVarSet_4,
  MR_Word Inst_5);

static MR_Word MR_CALL 
check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_120_109_108_95_108_105_115_116_95_95_104_111_54_95_95_91_49_93_95_48_3_f_0(
  MR_String Tag_5,
  MR_Word F_6,
  MR_Word L_7);

static MR_Word MR_CALL 
check_hlds__xml_documentation__nyi_1_f_0(
  MR_String Tag_3);

static MR_String MR_CALL 
check_hlds__xml_documentation__sym_name_arity_to_id_3_f_0(
  MR_String Prefix_5,
  MR_Word Name_6,
  MR_Integer Arity_7);

static MR_Box MR_CALL 
check_hlds__xml_documentation__mer_mode_to_xml_2_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__xml_documentation__mer_mode_to_xml_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
check_hlds__xml_documentation__mer_mode_to_xml_2_f_0(
  MR_Word InstVarSet_4,
  MR_Word Mode_5);

static void MR_CALL 
check_hlds__xml_documentation__pred_mode_documentation_5_p_0(
  MR_Word _C_6,
  MR_Integer _ProcId_7,
  MR_Word ProcInfo_8,
  MR_Word STATE_VARIABLE_Xml_0_15,
  MR_Word * STATE_VARIABLE_Xml_16);

static MR_Box MR_CALL 
check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_109_111_100_101_95_100_111_99_117_109_101_110_116_97_116_105_111_110_95_95_91_49_44_32_50_93_95_48_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_109_111_100_101_95_100_111_99_117_109_101_110_116_97_116_105_111_110_95_95_91_49_44_32_50_93_95_48_5_p_0(
  MR_Word ProcInfo_8,
  MR_Word STATE_VARIABLE_Xml_0_15,
  MR_Word * STATE_VARIABLE_Xml_16);

static void MR_CALL 
check_hlds__xml_documentation__pred_documentation_5_p_0(
  MR_Word C_6,
  MR_Word _PredId_7,
  MR_Word PredInfo_8,
  MR_Word STATE_VARIABLE_Xml_0_16,
  MR_Word * STATE_VARIABLE_Xml_17);

static void MR_CALL 
check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_100_111_99_117_109_101_110_116_97_116_105_111_110_95_95_91_50_93_95_48_5_p_0(
  MR_Word C_6,
  MR_Word PredInfo_8,
  MR_Word STATE_VARIABLE_Xml_0_16,
  MR_Word * STATE_VARIABLE_Xml_17);

static void MR_CALL 
check_hlds__xml_documentation__predicate_documentation_2_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_Box MR_CALL 
check_hlds__xml_documentation__predicate_documentation_2_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__xml_documentation__predicate_documentation_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
check_hlds__xml_documentation__predicate_documentation_2_f_0(
  MR_Word C_4,
  MR_Word PredInfo_5);

static MR_Word MR_CALL 
check_hlds__xml_documentation__pred_visibility_to_xml_1_f_0(
  MR_Word Status_3);

static MR_Box MR_CALL 
check_hlds__xml_documentation__univ_exist_constraints_to_xml_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
check_hlds__xml_documentation__univ_exist_constraints_to_xml_2_f_0(
  MR_Word TVarset_4,
  MR_Word Constraints_5);

static MR_Word MR_CALL 
check_hlds__xml_documentation__constructor_arg_to_xml_3_f_0(
  MR_Word C_5,
  MR_Word TVarset_6,
  MR_Word CtorArg_7);

static MR_Box MR_CALL 
check_hlds__xml_documentation__constructor_to_xml_3_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__xml_documentation__constructor_to_xml_3_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__xml_documentation__constructor_to_xml_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
check_hlds__xml_documentation__constructor_to_xml_3_f_0(
  MR_Word C_5,
  MR_Word TVarset_6,
  MR_Word Ctor_7);

static MR_Box MR_CALL 
check_hlds__xml_documentation__type_documentation_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__xml_documentation__type_documentation_5_p_0(
  MR_Word C_6,
  MR_Word HeadVar__2_2,
  MR_Word TypeDefn_9,
  MR_Word STATE_VARIABLE_Xmls_0_25,
  MR_Word * STATE_VARIABLE_Xmls_26);

static MR_Box MR_CALL 
check_hlds__xml_documentation__type_body_to_xml_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
check_hlds__xml_documentation__type_body_to_xml_3_f_0(
  MR_Word C_5,
  MR_Word TVarSet_6,
  MR_Word TypeDefnBody_7);

static MR_Box MR_CALL 
check_hlds__xml_documentation__mer_type_to_xml_2_f_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__xml_documentation__mer_type_to_xml_2_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__xml_documentation__mer_type_to_xml_2_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__xml_documentation__mer_type_to_xml_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
check_hlds__xml_documentation__mer_type_to_xml_2_f_0(
  MR_Word TVarset_1,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
check_hlds__xml_documentation__type_param_to_xml_2_f_0(
  MR_Word TVarset_4,
  MR_Word TVar_5);

static void MR_CALL 
check_hlds__xml_documentation__maybe_add_import_documentation_5_p_0(
  MR_Word BuiltinModuleNames_6,
  MR_Word ModuleName_7,
  MR_Word AvailEntry_8,
  MR_Word STATE_VARIABLE_Xmls_0_17,
  MR_Word * STATE_VARIABLE_Xmls_18);

static MR_Word MR_CALL 
check_hlds__xml_documentation__name_to_xml_1_f_0(
  MR_Word HeadVar__1_1);

static MR_Word MR_CALL 
check_hlds__xml_documentation__maybe_add_comment_3_f_0(
  MR_Word Comments_5,
  MR_Word Context_6,
  MR_Word Xml_7);

static MR_String MR_CALL 
check_hlds__xml_documentation__get_comment_backwards_2_f_0(
  MR_Word Comments_4,
  MR_Integer Line_5);

static MR_bool MR_CALL 
check_hlds__xml_documentation__is_not_comment_char_1_p_0(
  MR_Char C_2);

static MR_String MR_CALL 
check_hlds__xml_documentation__get_comment_forwards_2_f_0(
  MR_Word Comments_4,
  MR_Integer Line_5);

static MR_bool MR_CALL 
check_hlds__xml_documentation__build_comments_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
check_hlds__xml_documentation__build_comments_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__xml_documentation__build_comments_5_p_0(
  MR_Word S_6,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__xml_documentation____Unify____comments_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__xml_documentation____Compare____comments_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__xml_documentation____Unify____line_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__xml_documentation____Compare____line_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__xml_documentation____Unify____module_info_xml_doc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__xml_documentation____Compare____module_info_xml_doc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_Box MR_CALL 
check_hlds__xml_documentation__ClassMethod_for_term_to_xml__xmlable____check_hlds__xml_documentation__module_info_xml_doc__arity0______term_to_xml__to_xml_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);


static /* final */ const MR_Box check_hlds__xml_documentation_scalar_common_1[18][2];

static /* final */ const MR_Box check_hlds__xml_documentation_scalar_common_2[28][3];

static /* final */ const MR_Box check_hlds__xml_documentation_scalar_common_3[2][4];

static /* final */ const MR_Box check_hlds__xml_documentation_scalar_common_4[2][5];

static /* final */ const MR_Box check_hlds__xml_documentation_scalar_common_5[12][1];

static /* final */ const MR_Box check_hlds__xml_documentation_scalar_common_6[8][6];

static /* final */ const MR_Box check_hlds__xml_documentation_scalar_common_7[3][7];

static /* final */ const MR_Box check_hlds__xml_documentation_scalar_common_8[4][8];

static /* final */ const MR_Box check_hlds__xml_documentation_scalar_common_9[1][9];




static /* final */ const MR_Box check_hlds__xml_documentation_scalar_common_1[18][2] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_term_to_xml__xmlable__arity1__check_hlds__xml_documentation__module_info_xml_doc__arity0__)),
    ((MR_Box) (&check_hlds__xml_documentation__check_hlds__xml_documentation__type_ctor_info_module_info_xml_doc_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_mkword(1, &check_hlds__xml_documentation_scalar_common_5[1]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_mkword(1, &check_hlds__xml_documentation_scalar_common_5[2]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_mkword(1, &check_hlds__xml_documentation_scalar_common_5[3]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   6 */
  {
    ((MR_Box) (&check_hlds__xml_documentation_scalar_common_2[13])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   7 */
  {
    ((MR_Box) (&check_hlds__xml_documentation_scalar_common_2[14])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   8 */
  {
    ((MR_Box) (&check_hlds__xml_documentation_scalar_common_2[15])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   9 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_mkword(1, &check_hlds__xml_documentation_scalar_common_5[4]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_mkword(1, &check_hlds__xml_documentation_scalar_common_5[5]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_mkword(1, &check_hlds__xml_documentation_scalar_common_5[6]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_mkword(1, &check_hlds__xml_documentation_scalar_common_5[7]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_mkword(1, &check_hlds__xml_documentation_scalar_common_5[8]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_mkword(1, &check_hlds__xml_documentation_scalar_common_5[9]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_mkword(1, &check_hlds__xml_documentation_scalar_common_5[10]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_mkword(1, &check_hlds__xml_documentation_scalar_common_5[11]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box check_hlds__xml_documentation_scalar_common_2[28][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__xml_documentation__check_hlds__xml_documentation__type_ctor_info_line_type_0))
  },
  /* row   2 */
  {
    ((MR_Box) ((MR_String) "character")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   3 */
  {
    ((MR_Box) ((MR_String) "float")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   4 */
  {
    ((MR_Box) ((MR_String) "string")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   5 */
  {
    ((MR_Box) ((MR_String) "free")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   6 */
  {
    ((MR_Box) ((MR_String) "not_reached")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   7 */
  {
    ((MR_Box) (&check_hlds__xml_documentation_scalar_common_3[1])),
    ((MR_Box) (check_hlds__xml_documentation__build_comments_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&check_hlds__xml_documentation_scalar_common_3[1])),
    ((MR_Box) (check_hlds__xml_documentation__build_comments_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) ((MR_String) "visibility")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &check_hlds__xml_documentation_scalar_common_1[3])))
  },
  /* row  10 */
  {
    ((MR_Box) ((MR_String) "visibility")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &check_hlds__xml_documentation_scalar_common_1[4])))
  },
  /* row  11 */
  {
    ((MR_Box) ((MR_String) "apply_n_type")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &check_hlds__xml_documentation_scalar_common_1[5])))
  },
  /* row  12 */
  {
    ((MR_Box) ((MR_String) "kinded_type")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &check_hlds__xml_documentation_scalar_common_1[5])))
  },
  /* row  13 */
  {
    ((MR_Box) ((MR_String) "hlds_abstract_type")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &check_hlds__xml_documentation_scalar_common_1[5])))
  },
  /* row  14 */
  {
    ((MR_Box) ((MR_String) "hlds_foreign_type")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &check_hlds__xml_documentation_scalar_common_1[5])))
  },
  /* row  15 */
  {
    ((MR_Box) ((MR_String) "hlds_solver_type")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &check_hlds__xml_documentation_scalar_common_1[5])))
  },
  /* row  16 */
  {
    ((MR_Box) ((MR_String) "determinism")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &check_hlds__xml_documentation_scalar_common_1[10])))
  },
  /* row  17 */
  {
    ((MR_Box) ((MR_String) "determinism")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &check_hlds__xml_documentation_scalar_common_1[11])))
  },
  /* row  18 */
  {
    ((MR_Box) ((MR_String) "determinism")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &check_hlds__xml_documentation_scalar_common_1[12])))
  },
  /* row  19 */
  {
    ((MR_Box) ((MR_String) "determinism")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &check_hlds__xml_documentation_scalar_common_1[13])))
  },
  /* row  20 */
  {
    ((MR_Box) ((MR_String) "determinism")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &check_hlds__xml_documentation_scalar_common_1[14])))
  },
  /* row  21 */
  {
    ((MR_Box) ((MR_String) "determinism")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &check_hlds__xml_documentation_scalar_common_1[15])))
  },
  /* row  22 */
  {
    ((MR_Box) ((MR_String) "determinism")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &check_hlds__xml_documentation_scalar_common_1[16])))
  },
  /* row  23 */
  {
    ((MR_Box) ((MR_String) "determinism")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &check_hlds__xml_documentation_scalar_common_1[17])))
  },
  /* row  24 */
  {
    ((MR_Box) ((MR_String) "base_typeclass_info_const")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &check_hlds__xml_documentation_scalar_common_1[5])))
  },
  /* row  25 */
  {
    ((MR_Box) ((MR_String) "closure_cons")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &check_hlds__xml_documentation_scalar_common_1[5])))
  },
  /* row  26 */
  {
    ((MR_Box) ((MR_String) "deep_profiling_proc_layout")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &check_hlds__xml_documentation_scalar_common_1[5])))
  },
  /* row  27 */
  {
    ((MR_Box) (&check_hlds__xml_documentation_scalar_common_4[1])),
    ((MR_Box) (check_hlds__xml_documentation__class_methods_to_xml_3_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__xml_documentation_scalar_common_3[2][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&check_hlds__xml_documentation_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0))
  },
};

static /* final */ const MR_Box check_hlds__xml_documentation_scalar_common_4[2][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&check_hlds__xml_documentation_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_method_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
};

static /* final */ const MR_Box check_hlds__xml_documentation_scalar_common_5[12][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_String) "{}")) },
  /* row   1 */
  { ((MR_Box) ((MR_String) "implementation")) },
  /* row   2 */
  { ((MR_Box) ((MR_String) "interface")) },
  /* row   3 */
  { ((MR_Box) ((MR_String) "Not yet implemented!")) },
  /* row   4 */
  { ((MR_Box) ((MR_String) "cc_multi")) },
  /* row   5 */
  { ((MR_Box) ((MR_String) "cc_nondet")) },
  /* row   6 */
  { ((MR_Box) ((MR_String) "det")) },
  /* row   7 */
  { ((MR_Box) ((MR_String) "erroneous")) },
  /* row   8 */
  { ((MR_Box) ((MR_String) "failure")) },
  /* row   9 */
  { ((MR_Box) ((MR_String) "multi")) },
  /* row  10 */
  { ((MR_Box) ((MR_String) "nondet")) },
  /* row  11 */
  { ((MR_Box) ((MR_String) "semidet")) },
};

static /* final */ const MR_Box check_hlds__xml_documentation_scalar_common_6[8][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__xml_documentation__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__xml_documentation__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__xml_documentation__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__xml_documentation__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__xml_documentation__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__xml_documentation__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__xml_documentation__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_functor_0)),
    ((MR_Box) (&mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__xml_documentation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0))
  },
  /* row   7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__xml_documentation__check_hlds__xml_documentation__type_ctor_info_comments_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0))
  },
};

static /* final */ const MR_Box check_hlds__xml_documentation_scalar_common_7[3][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__xml_documentation__check_hlds__xml_documentation__type_ctor_info_comments_0)),
    ((MR_Box) (&check_hlds__xml_documentation__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__xml_documentation__check_hlds__xml_documentation__type_ctor_info_comments_0)),
    ((MR_Box) (&check_hlds__xml_documentation__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0)),
    ((MR_Box) (&mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__xml_documentation__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__xml_documentation__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_fundep_0)),
    ((MR_Box) (&mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0))
  },
};

static /* final */ const MR_Box check_hlds__xml_documentation_scalar_common_8[4][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&check_hlds__xml_documentation__check_hlds__xml_documentation__type_ctor_info_comments_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&check_hlds__xml_documentation__list__pti_list_1__plain_term_to_xml__type_ctor_info_xml_0)),
    ((MR_Box) (&check_hlds__xml_documentation__list__pti_list_1__plain_term_to_xml__type_ctor_info_xml_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&check_hlds__xml_documentation__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_avail_module_entry_0)),
    ((MR_Box) (&check_hlds__xml_documentation__list__pti_list_1__plain_term_to_xml__type_ctor_info_xml_0)),
    ((MR_Box) (&check_hlds__xml_documentation__list__pti_list_1__plain_term_to_xml__type_ctor_info_xml_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&check_hlds__xml_documentation__check_hlds__xml_documentation__type_ctor_info_comments_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&check_hlds__xml_documentation__list__pti_list_1__plain_term_to_xml__type_ctor_info_xml_0)),
    ((MR_Box) (&check_hlds__xml_documentation__list__pti_list_1__plain_term_to_xml__type_ctor_info_xml_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&check_hlds__xml_documentation__check_hlds__xml_documentation__type_ctor_info_comments_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&check_hlds__xml_documentation__list__pti_list_1__plain_term_to_xml__type_ctor_info_xml_0)),
    ((MR_Box) (&check_hlds__xml_documentation__list__pti_list_1__plain_term_to_xml__type_ctor_info_xml_0))
  },
};

static /* final */ const MR_Box check_hlds__xml_documentation_scalar_common_9[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&check_hlds__xml_documentation__check_hlds__xml_documentation__type_ctor_info_comments_0)),
    ((MR_Box) (&check_hlds__xml_documentation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0)),
    ((MR_Box) (&check_hlds__xml_documentation__list__pti_list_1__plain_term_to_xml__type_ctor_info_xml_0)),
    ((MR_Box) (&check_hlds__xml_documentation__list__pti_list_1__plain_term_to_xml__type_ctor_info_xml_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__xml_documentation__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__xml_documentation__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__xml_documentation__list__pti_list_1__plain_term_to_xml__type_ctor_info_xml_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__xml_documentation__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__xml_documentation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__xml_documentation__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__xml_documentation__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&check_hlds__xml_documentation__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__xml_documentation__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) }
};

static const MR_Integer check_hlds__xml_documentation__check_hlds__xml_documentation__functor_number_map_comments_0[1] = { (MR_Integer) 0 };

static const MR_FA_TypeInfo_Struct2 check_hlds__xml_documentation__tree234__ti_tree234_2builtin__type_ctor_info_int_0check_hlds__xml_documentation__type_ctor_info_line_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_TypeInfo) (&check_hlds__xml_documentation__check_hlds__xml_documentation__type_ctor_info_line_type_0)
  }
};

static const MR_NotagFunctorDesc check_hlds__xml_documentation__check_hlds__xml_documentation__notag_functor_desc_comments_0 = {
  (MR_String) "comments",
  (MR_PseudoTypeInfo) (&check_hlds__xml_documentation__tree234__ti_tree234_2builtin__type_ctor_info_int_0check_hlds__xml_documentation__type_ctor_info_line_type_0),
  (MR_String) "line_types",
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct check_hlds__xml_documentation__check_hlds__xml_documentation__type_ctor_info_comments_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (check_hlds__xml_documentation____Unify____comments_0_0_10001)),
  ((MR_Box) (check_hlds__xml_documentation____Compare____comments_0_0_10001)),
  (MR_String) "check_hlds.xml_documentation",
  (MR_String) "comments",
  { &check_hlds__xml_documentation__check_hlds__xml_documentation__notag_functor_desc_comments_0 },
  { &check_hlds__xml_documentation__check_hlds__xml_documentation__notag_functor_desc_comments_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  check_hlds__xml_documentation__check_hlds__xml_documentation__functor_number_map_comments_0,

};

static const MR_DuFunctorDesc check_hlds__xml_documentation__check_hlds__xml_documentation__du_functor_desc_line_type_0_0 = {
  (MR_String) "blank",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(0),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__xml_documentation__check_hlds__xml_documentation__field_types_line_type_0_1[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc check_hlds__xml_documentation__check_hlds__xml_documentation__du_functor_desc_line_type_0_1 = {
  (MR_String) "comment",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  check_hlds__xml_documentation__check_hlds__xml_documentation__field_types_line_type_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__xml_documentation__check_hlds__xml_documentation__field_types_line_type_0_2[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc check_hlds__xml_documentation__check_hlds__xml_documentation__du_functor_desc_line_type_0_2 = {
  (MR_String) "code_and_comment",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  check_hlds__xml_documentation__check_hlds__xml_documentation__field_types_line_type_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc check_hlds__xml_documentation__check_hlds__xml_documentation__du_functor_desc_line_type_0_3 = {
  (MR_String) "code",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(3),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__xml_documentation__check_hlds__xml_documentation__du_stag_ordered_line_type_0_0[2] = {
  &check_hlds__xml_documentation__check_hlds__xml_documentation__du_functor_desc_line_type_0_0,
  &check_hlds__xml_documentation__check_hlds__xml_documentation__du_functor_desc_line_type_0_3
};

static const MR_DuFunctorDescPtr check_hlds__xml_documentation__check_hlds__xml_documentation__du_stag_ordered_line_type_0_1[1] = { &check_hlds__xml_documentation__check_hlds__xml_documentation__du_functor_desc_line_type_0_1 };

static const MR_DuFunctorDescPtr check_hlds__xml_documentation__check_hlds__xml_documentation__du_stag_ordered_line_type_0_2[1] = { &check_hlds__xml_documentation__check_hlds__xml_documentation__du_functor_desc_line_type_0_2 };

static const MR_DuPtagLayout check_hlds__xml_documentation__check_hlds__xml_documentation__du_ptag_ordered_line_type_0[3] = {
  {
    UINT32_C(2),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    check_hlds__xml_documentation__check_hlds__xml_documentation__du_stag_ordered_line_type_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__xml_documentation__check_hlds__xml_documentation__du_stag_ordered_line_type_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__xml_documentation__check_hlds__xml_documentation__du_stag_ordered_line_type_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__xml_documentation____Unify____line_type_0_0_10001)),
  ((MR_Box) (check_hlds__xml_documentation____Compare____line_type_0_0_10001)),
  (MR_String) "check_hlds.xml_documentation",
  (MR_String) "line_type",
  { check_hlds__xml_documentation__check_hlds__xml_documentation__du_name_ordered_line_type_0 },
  { check_hlds__xml_documentation__check_hlds__xml_documentation__du_ptag_ordered_line_type_0 },
  (MR_Integer) 4,
  UINT16_C(12),
  check_hlds__xml_documentation__check_hlds__xml_documentation__functor_number_map_line_type_0,

};

static const MR_PseudoTypeInfo check_hlds__xml_documentation__check_hlds__xml_documentation__field_types_module_info_xml_doc_0_0[3] = {
  (MR_PseudoTypeInfo) (&check_hlds__xml_documentation__check_hlds__xml_documentation__type_ctor_info_comments_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)
};

static const MR_DuFunctorDesc check_hlds__xml_documentation__check_hlds__xml_documentation__du_functor_desc_module_info_xml_doc_0_0 = {
  (MR_String) "module_info_xml_doc",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__xml_documentation__check_hlds__xml_documentation__field_types_module_info_xml_doc_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__xml_documentation__check_hlds__xml_documentation__du_stag_ordered_module_info_xml_doc_0_0[1] = { &check_hlds__xml_documentation__check_hlds__xml_documentation__du_functor_desc_module_info_xml_doc_0_0 };

static const MR_DuPtagLayout check_hlds__xml_documentation__check_hlds__xml_documentation__du_ptag_ordered_module_info_xml_doc_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__xml_documentation__check_hlds__xml_documentation__du_stag_ordered_module_info_xml_doc_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__xml_documentation__check_hlds__xml_documentation__du_name_ordered_module_info_xml_doc_0[1] = { &check_hlds__xml_documentation__check_hlds__xml_documentation__du_functor_desc_module_info_xml_doc_0_0 };

static const MR_Integer check_hlds__xml_documentation__check_hlds__xml_documentation__functor_number_map_module_info_xml_doc_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__xml_documentation__check_hlds__xml_documentation__type_ctor_info_module_info_xml_doc_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__xml_documentation____Unify____module_info_xml_doc_0_0_10001)),
  ((MR_Box) (check_hlds__xml_documentation____Compare____module_info_xml_doc_0_0_10001)),
  (MR_String) "check_hlds.xml_documentation",
  (MR_String) "module_info_xml_doc",
  { check_hlds__xml_documentation__check_hlds__xml_documentation__du_name_ordered_module_info_xml_doc_0 },
  { check_hlds__xml_documentation__check_hlds__xml_documentation__du_ptag_ordered_module_info_xml_doc_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__xml_documentation__check_hlds__xml_documentation__functor_number_map_module_info_xml_doc_0,

};

const MR_BaseTypeclassInfo base_typeclass_info_term_to_xml__xmlable__arity1__check_hlds__xml_documentation__module_info_xml_doc__arity0__[6] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) (check_hlds__xml_documentation__ClassMethod_for_term_to_xml__xmlable____check_hlds__xml_documentation__module_info_xml_doc__arity0______term_to_xml__to_xml_1_1_f_0_10001))
};

static MR_Word MR_CALL 
check_hlds__xml_documentation__IntroducedFrom__func__class_methods_to_xml__838__1_2_f_0(
  MR_Word PredTable_6,
  MR_Word LambdaHeadVar__1_22)
{
  MR_Word LambdaHeadVar__2_23;
  MR_Box conv0_LambdaHeadVar__2_23;

  conv0_LambdaHeadVar__2_23 = mercury__map__lookup_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredTable_6, ((MR_Box) (LambdaHeadVar__1_22)));
  LambdaHeadVar__2_23 = ((MR_Word) (conv0_LambdaHeadVar__2_23));
  return LambdaHeadVar__2_23;
}

static MR_Word MR_CALL 
check_hlds__xml_documentation__IntroducedFrom__func__class_methods_to_xml__831__1_1_f_0(
  MR_Word LambdaHeadVar__1_19)
{
  MR_Word LambdaHeadVar__2_20;
  MR_Word PredProcId_31 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_19, (MR_Integer) 2))));

  LambdaHeadVar__2_20 = ((MR_Word) ((MR_hl_field(0, PredProcId_31, (MR_Integer) 0))));
  return LambdaHeadVar__2_20;
}

static void MR_CALL 
check_hlds__xml_documentation__ClassMethod_for_term_to_xml__xmlable____check_hlds__xml_documentation__module_info_xml_doc__arity0______term_to_xml__to_xml_1_1_f_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_STATE_VARIABLE_Xml_28;

  check_hlds__xml_documentation__class_documentation_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv6_STATE_VARIABLE_Xml_28);
  *wrapper_arg_4 = ((MR_Box) (conv6_STATE_VARIABLE_Xml_28));
}

static void MR_CALL 
check_hlds__xml_documentation__ClassMethod_for_term_to_xml__xmlable____check_hlds__xml_documentation__module_info_xml_doc__arity0______term_to_xml__to_xml_1_1_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_Xml_17;

  check_hlds__xml_documentation__pred_documentation_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv4_STATE_VARIABLE_Xml_17);
  *wrapper_arg_4 = ((MR_Box) (conv4_STATE_VARIABLE_Xml_17));
}

static void MR_CALL 
check_hlds__xml_documentation__ClassMethod_for_term_to_xml__xmlable____check_hlds__xml_documentation__module_info_xml_doc__arity0______term_to_xml__to_xml_1_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_Xmls_26;

  check_hlds__xml_documentation__type_documentation_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_Xmls_26);
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_Xmls_26));
}

static void MR_CALL 
check_hlds__xml_documentation__ClassMethod_for_term_to_xml__xmlable____check_hlds__xml_documentation__module_info_xml_doc__arity0______term_to_xml__to_xml_1_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Xmls_18;

  check_hlds__xml_documentation__maybe_add_import_documentation_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Xmls_18);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Xmls_18));
}

static MR_Word MR_CALL 
check_hlds__xml_documentation__ClassMethod_for_term_to_xml__xmlable____check_hlds__xml_documentation__module_info_xml_doc__arity0______term_to_xml__to_xml_1_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word Xml_6;
  MR_Word Comments_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_String ModuleComment_4 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
  MR_Word ModuleInfo_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
  MR_Word CommentXml_7;
  MR_Word AvailModuleMap_8;
  MR_Word BuiltinModuleNames_9;
  MR_Word ImportsXml_10;
  MR_Word ImportXml_11;
  MR_Word TypeTable_12;
  MR_Word TypeXmls_13;
  MR_Word TypeXml_14;
  MR_Word PredIdTable_15;
  MR_Word PredXmls_16;
  MR_Word PredXml_17;
  MR_Word ClassTable_18;
  MR_Word ClassXmls_19;
  MR_Word ClassXml_20;
  MR_Word Children_21;
  MR_Word Var_24;
  MR_Word Var_25;
  MR_Word Var_27;
  MR_Word Var_28;
  MR_Word Var_32;
  MR_Word Var_36;
  MR_Word Var_40;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word Var_46;
  MR_Word Var_47;
  MR_Box conv1_ImportsXml_10;
  MR_Box conv3_TypeXmls_13;
  MR_Box conv5_PredXmls_16;
  MR_Box conv7_ClassXmls_19;

  {
    Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_25, 0) = ((MR_Box) (ModuleComment_4));
  }
  {
    Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_24, 0) = ((MR_Box) (Var_25));
    MR_hl_field(1, Var_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    CommentXml_7 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, CommentXml_7, 0) = ((MR_Box) ((MR_String) "comment"));
    MR_hl_field(0, CommentXml_7, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, CommentXml_7, 2) = ((MR_Box) (Var_24));
  }
  hlds__hlds_module__module_info_get_avail_module_map_2_p_0(ModuleInfo_5, &AvailModuleMap_8);
  Var_27 = mdbcomp__builtin_modules__all_builtin_modules_0_f_0();
  BuiltinModuleNames_9 = mercury__set__list_to_set_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_27);
  {
    Var_28 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_28, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_8[1]));
    MR_hl_field(0, Var_28, 1) = ((MR_Box) (check_hlds__xml_documentation__ClassMethod_for_term_to_xml__xmlable____check_hlds__xml_documentation__module_info_xml_doc__arity0______term_to_xml__to_xml_1_1_f_0_1));
    MR_hl_field(0, Var_28, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_28, 3) = ((MR_Box) (BuiltinModuleNames_9));
  }
  mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_avail_module_entry_0), (MR_Word) (&check_hlds__xml_documentation_scalar_common_1[2]), Var_28, AvailModuleMap_8, ((MR_Box) ((MR_Unsigned) 0U)), &conv1_ImportsXml_10);
  ImportsXml_10 = ((MR_Word) (conv1_ImportsXml_10));
  {
    ImportXml_11 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ImportXml_11, 0) = ((MR_Box) ((MR_String) "imports"));
    MR_hl_field(0, ImportXml_11, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, ImportXml_11, 2) = ((MR_Box) (ImportsXml_10));
  }
  hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_5, &TypeTable_12);
  {
    Var_32 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_32, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_8[2]));
    MR_hl_field(0, Var_32, 1) = ((MR_Box) (check_hlds__xml_documentation__ClassMethod_for_term_to_xml__xmlable____check_hlds__xml_documentation__module_info_xml_doc__arity0______term_to_xml__to_xml_1_1_f_0_2));
    MR_hl_field(0, Var_32, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_32, 3) = ((MR_Box) (Comments_3));
  }
  hlds__hlds_data__foldl_over_type_ctor_defns_4_p_0((MR_Word) (&check_hlds__xml_documentation_scalar_common_1[2]), Var_32, TypeTable_12, ((MR_Box) ((MR_Unsigned) 0U)), &conv3_TypeXmls_13);
  TypeXmls_13 = ((MR_Word) (conv3_TypeXmls_13));
  {
    TypeXml_14 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeXml_14, 0) = ((MR_Box) ((MR_String) "types"));
    MR_hl_field(0, TypeXml_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, TypeXml_14, 2) = ((MR_Box) (TypeXmls_13));
  }
  hlds__hlds_module__module_info_get_pred_id_table_2_p_0(ModuleInfo_5, &PredIdTable_15);
  {
    Var_36 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_36, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_8[3]));
    MR_hl_field(0, Var_36, 1) = ((MR_Box) (check_hlds__xml_documentation__ClassMethod_for_term_to_xml__xmlable____check_hlds__xml_documentation__module_info_xml_doc__arity0______term_to_xml__to_xml_1_1_f_0_3));
    MR_hl_field(0, Var_36, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_36, 3) = ((MR_Box) (Comments_3));
  }
  mercury__map__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), (MR_Word) (&check_hlds__xml_documentation_scalar_common_1[2]), Var_36, PredIdTable_15, ((MR_Box) ((MR_Unsigned) 0U)), &conv5_PredXmls_16);
  PredXmls_16 = ((MR_Word) (conv5_PredXmls_16));
  {
    PredXml_17 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PredXml_17, 0) = ((MR_Box) ((MR_String) "preds"));
    MR_hl_field(0, PredXml_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, PredXml_17, 2) = ((MR_Box) (PredXmls_16));
  }
  hlds__hlds_module__module_info_get_class_table_2_p_0(ModuleInfo_5, &ClassTable_18);
  {
    Var_40 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_40, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_9[0]));
    MR_hl_field(0, Var_40, 1) = ((MR_Box) (check_hlds__xml_documentation__ClassMethod_for_term_to_xml__xmlable____check_hlds__xml_documentation__module_info_xml_doc__arity0______term_to_xml__to_xml_1_1_f_0_4));
    MR_hl_field(0, Var_40, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_40, 3) = ((MR_Box) (Comments_3));
    MR_hl_field(0, Var_40, 4) = ((MR_Box) (PredIdTable_15));
  }
  mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), (MR_Word) (&check_hlds__xml_documentation_scalar_common_1[2]), Var_40, ClassTable_18, ((MR_Box) ((MR_Unsigned) 0U)), &conv7_ClassXmls_19);
  ClassXmls_19 = ((MR_Word) (conv7_ClassXmls_19));
  {
    ClassXml_20 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ClassXml_20, 0) = ((MR_Box) ((MR_String) "typeclasses"));
    MR_hl_field(0, ClassXml_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, ClassXml_20, 2) = ((MR_Box) (ClassXmls_19));
  }
  {
    Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_47, 0) = ((MR_Box) (ClassXml_20));
    MR_hl_field(1, Var_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_46, 0) = ((MR_Box) (PredXml_17));
    MR_hl_field(1, Var_46, 1) = ((MR_Box) (Var_47));
  }
  {
    Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_45, 0) = ((MR_Box) (TypeXml_14));
    MR_hl_field(1, Var_45, 1) = ((MR_Box) (Var_46));
  }
  {
    Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_44, 0) = ((MR_Box) (ImportXml_11));
    MR_hl_field(1, Var_44, 1) = ((MR_Box) (Var_45));
  }
  {
    Children_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Children_21, 0) = ((MR_Box) (CommentXml_7));
    MR_hl_field(1, Children_21, 1) = ((MR_Box) (Var_44));
  }
  {
    Xml_6 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Xml_6, 0) = ((MR_Box) ((MR_String) "module"));
    MR_hl_field(0, Xml_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Xml_6, 2) = ((MR_Box) (Children_21));
  }
  return Xml_6;
}

static void MR_CALL 
check_hlds__xml_documentation____Compare____module_info_xml_doc_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_12 == CastY_13);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_String ArgX2_7 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_String ArgY2_8 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word SubResult1_6;

    check_hlds__xml_documentation____Compare____comments_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        hlds__hlds_module____Compare____module_info_0_0(HeadVar__1_1, ArgX3_10, ArgY3_11);
    }
  }
}

static MR_bool MR_CALL 
check_hlds__xml_documentation____Unify____module_info_xml_doc_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_String ArgX2_5 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_String ArgY2_6 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));

    succeeded = check_hlds__xml_documentation____Unify____comments_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = (strcmp(ArgX2_5, ArgY2_6) == 0);
      if (succeeded)
        succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX3_7, ArgY3_8);
    }
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__xml_documentation____Compare____line_type_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_8 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_9 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_8 == CastY_9);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
            break;
          case (MR_Integer) 1:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
              MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

              mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
            }
            break;
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 2:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
            break;
          case (MR_Integer) 1:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 2:
            {
              MR_String ArgX1_6 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
              MR_String ArgY1_7 = ((MR_String) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))));

              mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX1_6, ArgY1_7);
            }
            break;
        }
        break;
    }
}

static MR_bool MR_CALL 
check_hlds__xml_documentation____Unify____line_type_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
          MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

          succeeded = (CastY_8 == CastX_7);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
          MR_String ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String ArgX1_5 = ((MR_String) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))));
          MR_String ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_6 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = (strcmp(ArgX1_5, ArgY1_6) == 0);
          }
        }
        break;
    }
  return succeeded;
}

static void MR_CALL 
check_hlds__xml_documentation____Compare____comments_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = (MR_Word) (HeadVar__2_2);
    MR_Word ArgY1_5 = (MR_Word) (HeadVar__3_3);

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__xml_documentation_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
  }
}

static MR_bool MR_CALL 
check_hlds__xml_documentation____Unify____comments_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_5 == CastY_6);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = (MR_Word) (HeadVar__1_1);
    MR_Word ArgY1_4 = (MR_Word) (HeadVar__2_2);

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__xml_documentation_scalar_common_2[1]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
  }
  return succeeded;
}

static MR_Word MR_CALL 
check_hlds__xml_documentation__instance_visibility_to_xml_1_f_0(
  MR_Word Status_3)
{
  MR_bool succeeded;
  MR_Word HeadVar__2_2;
  MR_String Visibility_4;
  MR_Word Var_9;
  MR_Word Var_10;
  MR_Word Var_6;

  Var_6 = hlds__status__instance_status_defined_in_impl_section_1_f_0(Status_3);
  succeeded = (Var_6 == (MR_Integer) 1);
  if (succeeded)
  {
    MR_Word Var_7 = (MR_Word) (Status_3);

    succeeded = (Var_7 == (MR_Word) ((MR_Unsigned) 20U));
    if (succeeded)
      Visibility_4 = (MR_String) "abstract";
    else
      Visibility_4 = (MR_String) "implementation";
  }
  else
    Visibility_4 = (MR_String) "interface";
  {
    Var_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_10, 0) = ((MR_Box) (Visibility_4));
  }
  {
    Var_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_9, 0) = ((MR_Box) (Var_10));
    MR_hl_field(1, Var_9, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_2, 0) = ((MR_Box) ((MR_String) "visibility"));
    MR_hl_field(0, HeadVar__2_2, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, HeadVar__2_2, 2) = ((MR_Box) (Var_9));
  }
  return HeadVar__2_2;
}

static MR_Word MR_CALL 
check_hlds__xml_documentation__mode_visibility_to_xml_1_f_0(
  MR_Word Status_3)
{
  MR_bool succeeded;
  MR_Word HeadVar__2_2;
  MR_String Visibility_4;
  MR_Word Var_8;
  MR_Word Var_9;
  MR_Word Var_6;

  Var_6 = hlds__status__mode_status_defined_in_impl_section_1_f_0(Status_3);
  succeeded = (Var_6 == (MR_Integer) 1);
  if (succeeded)
    Visibility_4 = (MR_String) "implementation";
  else
    Visibility_4 = (MR_String) "interface";
  {
    Var_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_9, 0) = ((MR_Box) (Visibility_4));
  }
  {
    Var_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_8, 0) = ((MR_Box) (Var_9));
    MR_hl_field(1, Var_8, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_2, 0) = ((MR_Box) ((MR_String) "visibility"));
    MR_hl_field(0, HeadVar__2_2, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, HeadVar__2_2, 2) = ((MR_Box) (Var_8));
  }
  return HeadVar__2_2;
}

static MR_Word MR_CALL 
check_hlds__xml_documentation__inst_visibility_to_xml_1_f_0(
  MR_Word Status_3)
{
  MR_bool succeeded;
  MR_Word HeadVar__2_2;
  MR_String Visibility_4;
  MR_Word Var_8;
  MR_Word Var_9;
  MR_Word Var_6;

  Var_6 = hlds__status__inst_status_defined_in_impl_section_1_f_0(Status_3);
  succeeded = (Var_6 == (MR_Integer) 1);
  if (succeeded)
    Visibility_4 = (MR_String) "implementation";
  else
    Visibility_4 = (MR_String) "interface";
  {
    Var_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_9, 0) = ((MR_Box) (Visibility_4));
  }
  {
    Var_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_8, 0) = ((MR_Box) (Var_9));
    MR_hl_field(1, Var_8, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_2, 0) = ((MR_Box) ((MR_String) "visibility"));
    MR_hl_field(0, HeadVar__2_2, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, HeadVar__2_2, 2) = ((MR_Box) (Var_8));
  }
  return HeadVar__2_2;
}

static MR_Box MR_CALL 
check_hlds__xml_documentation__prog_constraint_to_xml_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = check_hlds__xml_documentation__mer_type_to_xml_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_2;
}

static MR_Word MR_CALL 
check_hlds__xml_documentation__prog_constraint_to_xml_2_f_0(
  MR_Word TVarset_4,
  MR_Word Constraint_5)
{
  MR_Word Xml_6;
  MR_Word ClassName_7 = ((MR_Word) ((MR_hl_field(0, Constraint_5, (MR_Integer) 0))));
  MR_Word ArgTypes_8 = ((MR_Word) ((MR_hl_field(0, Constraint_5, (MR_Integer) 1))));
  MR_String Id_9;
  MR_Word XmlName_10;
  MR_Word XmlTypes_11;
  MR_Integer Var_13;
  MR_Word Var_15;
  MR_Word Var_17;
  MR_Word Var_18;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_String Var_25;
  MR_String Var_26;
  MR_String Var_28;
  MR_String Var_29;
  MR_String Var_31;
  MR_Word Var_33;

  Var_13 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_8);
  Var_31 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ClassName_7);
  Var_29 = mercury__string__f_43_43_2_f_0((MR_String) ".", Var_31);
  Var_25 = mercury__string__f_43_43_2_f_0((MR_String) "constraint", Var_29);
  Var_28 = mercury__string__int_to_string_1_f_0(Var_13);
  Var_26 = mercury__string__f_43_43_2_f_0((MR_String) "-", Var_28);
  Id_9 = mercury__string__f_43_43_2_f_0(Var_25, Var_26);
  XmlName_10 = check_hlds__xml_documentation__name_to_xml_1_f_0(ClassName_7);
  {
    Var_15 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_15, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_6[0]));
    MR_hl_field(0, Var_15, 1) = ((MR_Box) (check_hlds__xml_documentation__prog_constraint_to_xml_2_f_0_1));
    MR_hl_field(0, Var_15, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_15, 3) = ((MR_Box) (TVarset_4));
  }
  Var_33 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0), Var_15, ArgTypes_8);
  {
    XmlTypes_11 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, XmlTypes_11, 0) = ((MR_Box) ((MR_String) "constraint_types"));
    MR_hl_field(0, XmlTypes_11, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, XmlTypes_11, 2) = ((MR_Box) (Var_33));
  }
  {
    Var_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_18, 0) = ((MR_Box) ((MR_String) "ref"));
    MR_hl_field(0, Var_18, 1) = ((MR_Box) (Id_9));
  }
  {
    Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_17, 0) = ((MR_Box) (Var_18));
    MR_hl_field(1, Var_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_22, 0) = ((MR_Box) (XmlTypes_11));
    MR_hl_field(1, Var_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_21, 0) = ((MR_Box) (XmlName_10));
    MR_hl_field(1, Var_21, 1) = ((MR_Box) (Var_22));
  }
  {
    Xml_6 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Xml_6, 0) = ((MR_Box) ((MR_String) "constraint"));
    MR_hl_field(0, Xml_6, 1) = ((MR_Box) (Var_17));
    MR_hl_field(0, Xml_6, 2) = ((MR_Box) (Var_21));
  }
  return Xml_6;
}

static MR_Box MR_CALL 
check_hlds__xml_documentation__fundep_to_xml_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_Xml_6;

  conv0_Xml_6 = check_hlds__xml_documentation__type_param_to_xml_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Xml_6));
  return wrapper_arg_2;
}

static MR_Word MR_CALL 
check_hlds__xml_documentation__fundep_to_xml_3_f_0(
  MR_Word TVarset_5,
  MR_Word Vars_6,
  MR_Word HeadVar__3_3)
{
  MR_Word Xml_9;
  MR_Word Domain_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
  MR_Word Range_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
  MR_Word XmlDomain_10;
  MR_Word XmlRange_11;
  MR_Word Var_16;
  MR_Word Var_17;
  MR_Word Var_19;
  MR_Word Var_20;
  MR_Word Var_23;
  MR_Word Var_27;
  MR_Word Var_30;

  {
    Var_19 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_19, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_6[1]));
    MR_hl_field(0, Var_19, 1) = ((MR_Box) (check_hlds__xml_documentation__fundep_to_xml_3_f_0_1));
    MR_hl_field(0, Var_19, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_19, 3) = ((MR_Box) (TVarset_5));
  }
  Var_20 = hlds__hlds_class__restrict_list_elements_2_f_0((MR_Word) (&check_hlds__xml_documentation_scalar_common_1[1]), Domain_7, Vars_6);
  Var_23 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__xml_documentation_scalar_common_1[1]), (MR_Word) (&mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0), Var_19, Var_20);
  {
    XmlDomain_10 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, XmlDomain_10, 0) = ((MR_Box) ((MR_String) "domain"));
    MR_hl_field(0, XmlDomain_10, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, XmlDomain_10, 2) = ((MR_Box) (Var_23));
  }
  Var_27 = hlds__hlds_class__restrict_list_elements_2_f_0((MR_Word) (&check_hlds__xml_documentation_scalar_common_1[1]), Range_8, Vars_6);
  Var_30 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__xml_documentation_scalar_common_1[1]), (MR_Word) (&mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0), Var_19, Var_27);
  {
    XmlRange_11 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, XmlRange_11, 0) = ((MR_Box) ((MR_String) "range"));
    MR_hl_field(0, XmlRange_11, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, XmlRange_11, 2) = ((MR_Box) (Var_30));
  }
  {
    Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_17, 0) = ((MR_Box) (XmlRange_11));
    MR_hl_field(1, Var_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_16, 0) = ((MR_Box) (XmlDomain_10));
    MR_hl_field(1, Var_16, 1) = ((MR_Box) (Var_17));
  }
  {
    Xml_9 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Xml_9, 0) = ((MR_Box) ((MR_String) "fundep"));
    MR_hl_field(0, Xml_9, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Xml_9, 2) = ((MR_Box) (Var_16));
  }
  return Xml_9;
}

static MR_Box MR_CALL 
check_hlds__xml_documentation__class_documentation_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv2_Xml_9;

  conv2_Xml_9 = check_hlds__xml_documentation__fundep_to_xml_3_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_Xml_9));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
check_hlds__xml_documentation__class_documentation_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_Xml_6;

  conv1_Xml_6 = check_hlds__xml_documentation__prog_constraint_to_xml_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_Xml_6));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
check_hlds__xml_documentation__class_documentation_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_Xml_6;

  conv0_Xml_6 = check_hlds__xml_documentation__type_param_to_xml_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Xml_6));
  return wrapper_arg_2;
}

static void MR_CALL 
check_hlds__xml_documentation__class_documentation_6_p_0(
  MR_Word C_7,
  MR_Word PredTable_8,
  MR_Word HeadVar__3_3,
  MR_Word ClassDefn_11,
  MR_Word STATE_VARIABLE_Xml_0_27,
  MR_Word * STATE_VARIABLE_Xml_28)
{
  MR_Word Name_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
  MR_Integer Arity_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
  MR_Word TypeClassStatus_13 = ((MR_Word) ((MR_hl_field(0, ClassDefn_11, (MR_Integer) 0))));
  MR_Word DefinedInThisModule_14;

  DefinedInThisModule_14 = hlds__status__typeclass_status_defined_in_this_module_1_f_0(TypeClassStatus_13);
  switch (DefinedInThisModule_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_Xml_28 = STATE_VARIABLE_Xml_0_27;
      break;
    case (MR_Integer) 1:
      {
        MR_Word Xml_12;
        MR_String Id_15;
        MR_Word Context_16;
        MR_Word TVarset_17;
        MR_Word Vars_18;
        MR_Word XmlName_19;
        MR_Word XmlClassVars_20;
        MR_Word XmlSupers_21;
        MR_Word XmlFundeps_22;
        MR_Word XmlMethods_23;
        MR_Word XmlVisibility_24;
        MR_Word XmlContext_25;
        MR_Word Xml0_26;
        MR_Word Var_31;
        MR_Word Var_33;
        MR_Word Var_34;
        MR_Word Var_36;
        MR_Word Var_37;
        MR_Word Var_38;
        MR_Word Var_40;
        MR_Word Var_41;
        MR_Word Var_44;
        MR_Word Var_45;
        MR_Word Var_46;
        MR_Word Var_47;
        MR_Word Var_48;
        MR_Word Var_49;
        MR_Word Var_50;

        Id_15 = check_hlds__xml_documentation__sym_name_arity_to_id_3_f_0((MR_String) "class", Name_9, Arity_10);
        TVarset_17 = ((MR_Word) ((MR_hl_field(0, ClassDefn_11, (MR_Integer) 1))));
        Vars_18 = ((MR_Word) ((MR_hl_field(0, ClassDefn_11, (MR_Integer) 3))));
        Context_16 = ((MR_Word) ((MR_hl_field(0, ClassDefn_11, (MR_Integer) 9))));
        XmlName_19 = check_hlds__xml_documentation__name_to_xml_1_f_0(Name_9);
        {
          Var_31 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_31, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_6[1]));
          MR_hl_field(0, Var_31, 1) = ((MR_Box) (check_hlds__xml_documentation__class_documentation_6_p_0_1));
          MR_hl_field(0, Var_31, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_31, 3) = ((MR_Box) (TVarset_17));
        }
        XmlClassVars_20 = check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_120_109_108_95_108_105_115_116_95_95_104_111_51_95_95_91_49_93_95_48_3_f_0((MR_String) "class_vars", Var_31, Vars_18);
        {
          Var_33 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_33, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_6[2]));
          MR_hl_field(0, Var_33, 1) = ((MR_Box) (check_hlds__xml_documentation__class_documentation_6_p_0_2));
          MR_hl_field(0, Var_33, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_33, 3) = ((MR_Box) (TVarset_17));
        }
        Var_34 = ((MR_Word) ((MR_hl_field(0, ClassDefn_11, (MR_Integer) 4))));
        XmlSupers_21 = check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_120_109_108_95_108_105_115_116_95_95_104_111_53_95_95_91_49_93_95_48_3_f_0((MR_String) "superclasses", Var_33, Var_34);
        {
          Var_36 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_36, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_7[2]));
          MR_hl_field(0, Var_36, 1) = ((MR_Box) (check_hlds__xml_documentation__class_documentation_6_p_0_3));
          MR_hl_field(0, Var_36, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_36, 3) = ((MR_Box) (TVarset_17));
          MR_hl_field(0, Var_36, 4) = ((MR_Box) (Vars_18));
        }
        Var_37 = ((MR_Word) ((MR_hl_field(0, ClassDefn_11, (MR_Integer) 5))));
        XmlFundeps_22 = check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_120_109_108_95_108_105_115_116_95_95_104_111_52_95_95_91_49_44_32_50_93_95_48_3_f_0((MR_String) "fundeps", Var_36, Var_37);
        Var_38 = ((MR_Word) ((MR_hl_field(0, ClassDefn_11, (MR_Integer) 8))));
        XmlMethods_23 = check_hlds__xml_documentation__class_methods_to_xml_3_f_0(C_7, PredTable_8, Var_38);
        XmlVisibility_24 = check_hlds__xml_documentation__typeclass_visibility_to_xml_1_f_0(TypeClassStatus_13);
        XmlContext_25 = check_hlds__xml_documentation__prog_context_to_xml_1_f_0(Context_16);
        {
          Var_41 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_41, 0) = ((MR_Box) ((MR_String) "id"));
          MR_hl_field(0, Var_41, 1) = ((MR_Box) (Id_15));
        }
        {
          Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_40, 0) = ((MR_Box) (Var_41));
          MR_hl_field(1, Var_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_50, 0) = ((MR_Box) (XmlContext_25));
          MR_hl_field(1, Var_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_49, 0) = ((MR_Box) (XmlVisibility_24));
          MR_hl_field(1, Var_49, 1) = ((MR_Box) (Var_50));
        }
        {
          Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_48, 0) = ((MR_Box) (XmlMethods_23));
          MR_hl_field(1, Var_48, 1) = ((MR_Box) (Var_49));
        }
        {
          Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_47, 0) = ((MR_Box) (XmlFundeps_22));
          MR_hl_field(1, Var_47, 1) = ((MR_Box) (Var_48));
        }
        {
          Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_46, 0) = ((MR_Box) (XmlSupers_21));
          MR_hl_field(1, Var_46, 1) = ((MR_Box) (Var_47));
        }
        {
          Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_45, 0) = ((MR_Box) (XmlClassVars_20));
          MR_hl_field(1, Var_45, 1) = ((MR_Box) (Var_46));
        }
        {
          Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_44, 0) = ((MR_Box) (XmlName_19));
          MR_hl_field(1, Var_44, 1) = ((MR_Box) (Var_45));
        }
        {
          Xml0_26 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Xml0_26, 0) = ((MR_Box) ((MR_String) "typeclass"));
          MR_hl_field(0, Xml0_26, 1) = ((MR_Box) (Var_40));
          MR_hl_field(0, Xml0_26, 2) = ((MR_Box) (Var_44));
        }
        Xml_12 = check_hlds__xml_documentation__maybe_add_comment_3_f_0(C_7, Context_16, Xml0_26);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Xml_28 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Xml_12));
          MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Xml_0_27));
        }
      }
      break;
  }
}

static MR_Word MR_CALL 
check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_120_109_108_95_108_105_115_116_95_95_104_111_53_95_95_91_49_93_95_48_3_f_0(
  MR_String Tag_5,
  MR_Word F_6,
  MR_Word L_7)
{
  MR_Word HeadVar__4_4;
  MR_Word Var_9;

  Var_9 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0), F_6, L_7);
  {
    HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__4_4, 0) = ((MR_Box) (Tag_5));
    MR_hl_field(0, HeadVar__4_4, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, HeadVar__4_4, 2) = ((MR_Box) (Var_9));
  }
  return HeadVar__4_4;
}

static MR_Word MR_CALL 
check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_120_109_108_95_108_105_115_116_95_95_104_111_52_95_95_91_49_44_32_50_93_95_48_3_f_0(
  MR_String Tag_5,
  MR_Word F_6,
  MR_Word L_7)
{
  MR_Word HeadVar__4_4;
  MR_Word Var_9;

  Var_9 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_fundep_0), (MR_Word) (&mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0), F_6, L_7);
  {
    HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__4_4, 0) = ((MR_Box) (Tag_5));
    MR_hl_field(0, HeadVar__4_4, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, HeadVar__4_4, 2) = ((MR_Box) (Var_9));
  }
  return HeadVar__4_4;
}

static MR_Word MR_CALL 
check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_120_109_108_95_108_105_115_116_95_95_104_111_51_95_95_91_49_93_95_48_3_f_0(
  MR_String Tag_5,
  MR_Word F_6,
  MR_Word L_7)
{
  MR_Word HeadVar__4_4;
  MR_Word Var_9;

  Var_9 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__xml_documentation_scalar_common_1[1]), (MR_Word) (&mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0), F_6, L_7);
  {
    HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__4_4, 0) = ((MR_Box) (Tag_5));
    MR_hl_field(0, HeadVar__4_4, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, HeadVar__4_4, 2) = ((MR_Box) (Var_9));
  }
  return HeadVar__4_4;
}

static MR_Word MR_CALL 
check_hlds__xml_documentation__typeclass_visibility_to_xml_1_f_0(
  MR_Word Status_3)
{
  MR_bool succeeded;
  MR_Word HeadVar__2_2;
  MR_String Visibility_4;
  MR_Word Var_9;
  MR_Word Var_10;
  MR_Word Var_6;

  Var_6 = hlds__status__typeclass_status_defined_in_impl_section_1_f_0(Status_3);
  succeeded = (Var_6 == (MR_Integer) 1);
  if (succeeded)
  {
    MR_Word Var_7 = (MR_Word) (Status_3);

    succeeded = (Var_7 == (MR_Word) ((MR_Unsigned) 20U));
    if (succeeded)
      Visibility_4 = (MR_String) "abstract";
    else
      Visibility_4 = (MR_String) "implementation";
  }
  else
    Visibility_4 = (MR_String) "interface";
  {
    Var_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_10, 0) = ((MR_Box) (Visibility_4));
  }
  {
    Var_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_9, 0) = ((MR_Box) (Var_10));
    MR_hl_field(1, Var_9, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_2, 0) = ((MR_Box) ((MR_String) "visibility"));
    MR_hl_field(0, HeadVar__2_2, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, HeadVar__2_2, 2) = ((MR_Box) (Var_9));
  }
  return HeadVar__2_2;
}

static MR_Word MR_CALL 
check_hlds__xml_documentation__prog_context_to_xml_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;
  MR_String FileName_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Integer LineNumber_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
  MR_Word Var_7;
  MR_Word Var_8;
  MR_Word Var_10;
  MR_Word Var_11;
  MR_Word Var_15;
  MR_Word Var_16;
  MR_Word Var_19;
  MR_Word Var_20;
  MR_String Var_21;

  {
    Var_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_16, 0) = ((MR_Box) (FileName_3));
  }
  {
    Var_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_15, 0) = ((MR_Box) (Var_16));
    MR_hl_field(1, Var_15, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_8 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_8, 0) = ((MR_Box) ((MR_String) "filename"));
    MR_hl_field(0, Var_8, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Var_8, 2) = ((MR_Box) (Var_15));
  }
  Var_21 = mercury__string__int_to_string_1_f_0(LineNumber_4);
  {
    Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_20, 0) = ((MR_Box) (Var_21));
  }
  {
    Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_19, 0) = ((MR_Box) (Var_20));
    MR_hl_field(1, Var_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_11 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_11, 0) = ((MR_Box) ((MR_String) "line"));
    MR_hl_field(0, Var_11, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Var_11, 2) = ((MR_Box) (Var_19));
  }
  {
    Var_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_10, 0) = ((MR_Box) (Var_11));
    MR_hl_field(1, Var_10, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_7 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_7, 0) = ((MR_Box) (Var_8));
    MR_hl_field(1, Var_7, 1) = ((MR_Box) (Var_10));
  }
  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_2, 0) = ((MR_Box) ((MR_String) "context"));
    MR_hl_field(0, HeadVar__2_2, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, HeadVar__2_2, 2) = ((MR_Box) (Var_7));
  }
  return HeadVar__2_2;
}

static MR_Box MR_CALL 
check_hlds__xml_documentation__class_methods_to_xml_3_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv2_Xml_6;

  conv2_Xml_6 = check_hlds__xml_documentation__predicate_documentation_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_Xml_6));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
check_hlds__xml_documentation__class_methods_to_xml_3_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_LambdaHeadVar__2_23;

  conv1_LambdaHeadVar__2_23 = check_hlds__xml_documentation__IntroducedFrom__func__class_methods_to_xml__838__1_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_23));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
check_hlds__xml_documentation__class_methods_to_xml_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_20;

  conv0_LambdaHeadVar__2_20 = check_hlds__xml_documentation__IntroducedFrom__func__class_methods_to_xml__831__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_20));
  return wrapper_arg_2;
}

static MR_Word MR_CALL 
check_hlds__xml_documentation__class_methods_to_xml_3_f_0(
  MR_Word C_5,
  MR_Word PredTable_6,
  MR_Word MethodInfos_7)
{
  MR_Word Xml_8;
  MR_Word AllPredIds_16;
  MR_Word PredIds_17;
  MR_Word PredInfos_18;
  MR_Word Var_21;
  MR_Word Var_25;
  MR_Word Var_38;

  AllPredIds_16 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_method_info_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&check_hlds__xml_documentation_scalar_common_2[27]), MethodInfos_7);
  PredIds_17 = mercury__list__sort_and_remove_dups_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), AllPredIds_16);
  {
    Var_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_21, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_6[6]));
    MR_hl_field(0, Var_21, 1) = ((MR_Box) (check_hlds__xml_documentation__class_methods_to_xml_3_f_0_2));
    MR_hl_field(0, Var_21, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_21, 3) = ((MR_Box) (PredTable_6));
  }
  PredInfos_18 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), Var_21, PredIds_17);
  {
    Var_25 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_25, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_6[7]));
    MR_hl_field(0, Var_25, 1) = ((MR_Box) (check_hlds__xml_documentation__class_methods_to_xml_3_f_0_3));
    MR_hl_field(0, Var_25, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_25, 3) = ((MR_Box) (C_5));
  }
  Var_38 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), (MR_Word) (&mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0), Var_25, PredInfos_18);
  {
    Xml_8 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Xml_8, 0) = ((MR_Box) ((MR_String) "methods"));
    MR_hl_field(0, Xml_8, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Xml_8, 2) = ((MR_Box) (Var_38));
  }
  return Xml_8;
}

static MR_Box MR_CALL 
check_hlds__xml_documentation__bound_functor_to_xml_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_Xml_6;

  conv0_Xml_6 = check_hlds__xml_documentation__mer_inst_to_xml_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Xml_6));
  return wrapper_arg_2;
}

static MR_Word MR_CALL 
check_hlds__xml_documentation__bound_functor_to_xml_2_f_0(
  MR_Word InstVarSet_4,
  MR_Word HeadVar__2_2)
{
  MR_Word Xml_7;
  MR_Word ConsId_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Word Insts_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
  MR_Word XmlCons_8;
  MR_Word XmlInsts_9;
  MR_Word Var_11;
  MR_Word Var_14;
  MR_Word Var_15;
  MR_Word Var_19;

  XmlCons_8 = check_hlds__xml_documentation__cons_id_to_xml_1_f_0(ConsId_5);
  {
    Var_11 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_11, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_6[4]));
    MR_hl_field(0, Var_11, 1) = ((MR_Box) (check_hlds__xml_documentation__bound_functor_to_xml_2_f_0_1));
    MR_hl_field(0, Var_11, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_11, 3) = ((MR_Box) (InstVarSet_4));
  }
  Var_19 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0), Var_11, Insts_6);
  {
    XmlInsts_9 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, XmlInsts_9, 0) = ((MR_Box) ((MR_String) "insts"));
    MR_hl_field(0, XmlInsts_9, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, XmlInsts_9, 2) = ((MR_Box) (Var_19));
  }
  {
    Var_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_15, 0) = ((MR_Box) (XmlInsts_9));
    MR_hl_field(1, Var_15, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_14, 0) = ((MR_Box) (XmlCons_8));
    MR_hl_field(1, Var_14, 1) = ((MR_Box) (Var_15));
  }
  {
    Xml_7 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Xml_7, 0) = ((MR_Box) ((MR_String) "bound_functor"));
    MR_hl_field(0, Xml_7, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Xml_7, 2) = ((MR_Box) (Var_14));
  }
  return Xml_7;
}

static MR_Word MR_CALL 
check_hlds__xml_documentation__cons_id_to_xml_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_bool succeeded;
  MR_Word HeadVar__2_2;

  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      HeadVar__2_2 = check_hlds__xml_documentation__nyi_1_f_0((MR_String) "typeclass_info_cell_constructor");
      break;
    case (MR_Integer) 1:
      {
        MR_Word Name_3;
        MR_Integer Arity_4;
        MR_Word Var_6 = (MR_Word) (MR_body((MR_Word) (HeadVar__1_1), (MR_Integer) 1));
        MR_Word Var_9;
        MR_Word Var_10;
        MR_Word Var_11;
        MR_Word Var_12;
        MR_Word Var_87;
        MR_Word Var_88;
        MR_String Var_89;

        Name_3 = ((MR_Word) ((MR_hl_field(0, Var_6, (MR_Integer) 0))));
        Arity_4 = ((MR_Integer) ((MR_hl_field(0, Var_6, (MR_Integer) 1))));
        Var_10 = check_hlds__xml_documentation__name_to_xml_1_f_0(Name_3);
        Var_89 = mercury__string__int_to_string_1_f_0(Arity_4);
        {
          Var_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_88, 0) = ((MR_Box) (Var_89));
        }
        {
          Var_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_87, 0) = ((MR_Box) (Var_88));
          MR_hl_field(1, Var_87, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_12 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_12, 0) = ((MR_Box) ((MR_String) "arity"));
          MR_hl_field(0, Var_12, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Var_12, 2) = ((MR_Box) (Var_87));
        }
        {
          Var_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_11, 0) = ((MR_Box) (Var_12));
          MR_hl_field(1, Var_11, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_9, 0) = ((MR_Box) (Var_10));
          MR_hl_field(1, Var_9, 1) = ((MR_Box) (Var_11));
        }
        {
          HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, HeadVar__2_2, 0) = ((MR_Box) ((MR_String) "cons"));
          MR_hl_field(0, HeadVar__2_2, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, HeadVar__2_2, 2) = ((MR_Box) (Var_9));
        }
      }
      break;
    case (MR_Integer) 2:
      HeadVar__2_2 = (MR_Word) (&check_hlds__xml_documentation_scalar_common_2[25]);
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          HeadVar__2_2 = check_hlds__xml_documentation__nyi_1_f_0((MR_String) "type_info_cell_constructor");
          break;
        case (MR_Integer) 1:
          HeadVar__2_2 = check_hlds__xml_documentation__nyi_1_f_0((MR_String) "tabling_info_const");
          break;
        case (MR_Integer) 2:
          HeadVar__2_2 = check_hlds__xml_documentation__nyi_1_f_0((MR_String) "table_io_entry_desc");
          break;
        case (MR_Integer) 3:
          HeadVar__2_2 = (MR_Word) (&check_hlds__xml_documentation_scalar_common_2[26]);
          break;
        case (MR_Integer) 4:
          {
            MR_Integer Arity_14 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
            MR_Word Var_17;
            MR_Word Var_18;
            MR_Word Var_21;
            MR_Word Var_22;

            Var_18 = check_hlds__xml_documentation__name_to_xml_1_f_0((MR_Word) (&check_hlds__xml_documentation_scalar_common_5[0]));
            Var_22 = check_hlds__xml_documentation__arity_to_xml_1_f_0(Arity_14);
            {
              Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_21, 0) = ((MR_Box) (Var_22));
              MR_hl_field(1, Var_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_17, 0) = ((MR_Box) (Var_18));
              MR_hl_field(1, Var_17, 1) = ((MR_Box) (Var_21));
            }
            {
              HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, HeadVar__2_2, 0) = ((MR_Box) ((MR_String) "cons"));
              MR_hl_field(0, HeadVar__2_2, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, HeadVar__2_2, 2) = ((MR_Box) (Var_17));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word IntConst_24 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
            MR_Integer I_25;

            succeeded = ((MR_tag((MR_Word) IntConst_24)) == (MR_Integer) 0);
            if (succeeded)
            {
              I_25 = ((MR_Integer) ((MR_hl_field(0, IntConst_24, (MR_Integer) 0))));
              HeadVar__2_2 = check_hlds__xml_documentation__tagged_int_2_f_0((MR_String) "int", I_25);
            }
            else
            {
              MR_Box conv0_HeadVar__2_2;

              conv0_HeadVar__2_2 = mercury__require__unexpected_2_f_0((MR_Word) (&mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0), (MR_String) "function \140check_hlds.xml_documentation.cons_id_to_xml\'/1", (MR_String) "NYI non-int integer const");
              HeadVar__2_2 = ((MR_Word) (conv0_HeadVar__2_2));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Float F_29 = MR_unbox_float((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1)));
            MR_Word Var_92;
            MR_Word Var_93;
            MR_String Var_94;

            Var_94 = mercury__string__float_to_string_1_f_0(F_29);
            {
              Var_93 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_93, 0) = ((MR_Box) (Var_94));
            }
            {
              Var_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_92, 0) = ((MR_Box) (Var_93));
              MR_hl_field(1, Var_92, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, HeadVar__2_2, 0) = ((MR_Box) ((MR_String) "float"));
              MR_hl_field(0, HeadVar__2_2, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, HeadVar__2_2, 2) = ((MR_Box) (Var_92));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Char C_31 = ((MR_Char) (MR_Word) (MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1)));
            MR_Word Var_71;
            MR_Word Var_72;
            MR_String Var_73;

            Var_73 = mercury__string__char_to_string_1_f_0(C_31);
            {
              Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_72, 0) = ((MR_Box) (Var_73));
            }
            {
              Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_71, 0) = ((MR_Box) (Var_72));
              MR_hl_field(1, Var_71, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, HeadVar__2_2, 0) = ((MR_Box) ((MR_String) "char"));
              MR_hl_field(0, HeadVar__2_2, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, HeadVar__2_2, 2) = ((MR_Box) (Var_71));
            }
          }
          break;
        case (MR_Integer) 8:
          {
            MR_String S_33 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));

            HeadVar__2_2 = check_hlds__xml_documentation__tagged_string_2_f_0((MR_String) "string", S_33);
          }
          break;
        case (MR_Integer) 9:
          HeadVar__2_2 = check_hlds__xml_documentation__nyi_1_f_0((MR_String) "impl_defined_const");
          break;
        case (MR_Integer) 10:
          HeadVar__2_2 = check_hlds__xml_documentation__nyi_1_f_0((MR_String) "type_ctor_info_const");
          break;
        case (MR_Integer) 11:
          HeadVar__2_2 = (MR_Word) (&check_hlds__xml_documentation_scalar_common_2[24]);
          break;
        case (MR_Integer) 12:
          HeadVar__2_2 = check_hlds__xml_documentation__nyi_1_f_0((MR_String) "type_info_const");
          break;
        case (MR_Integer) 13:
          HeadVar__2_2 = check_hlds__xml_documentation__nyi_1_f_0((MR_String) "typeclass_info_const");
          break;
        case (MR_Integer) 14:
          HeadVar__2_2 = check_hlds__xml_documentation__nyi_1_f_0((MR_String) "ground_term_const");
          break;
      }
      break;
  }
  return HeadVar__2_2;
}

static MR_Word MR_CALL 
check_hlds__xml_documentation__tagged_string_2_f_0(
  MR_String E_4,
  MR_String S_5)
{
  MR_Word HeadVar__3_3;
  MR_Word Var_7;
  MR_Word Var_8;

  {
    Var_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_8, 0) = ((MR_Box) (S_5));
  }
  {
    Var_7 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_7, 0) = ((MR_Box) (Var_8));
    MR_hl_field(1, Var_7, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__3_3, 0) = ((MR_Box) (E_4));
    MR_hl_field(0, HeadVar__3_3, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, HeadVar__3_3, 2) = ((MR_Box) (Var_7));
  }
  return HeadVar__3_3;
}

static MR_Word MR_CALL 
check_hlds__xml_documentation__tagged_int_2_f_0(
  MR_String E_4,
  MR_Integer I_5)
{
  MR_Word HeadVar__3_3;
  MR_Word Var_7;
  MR_Word Var_8;
  MR_String Var_9;

  Var_9 = mercury__string__int_to_string_1_f_0(I_5);
  {
    Var_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_8, 0) = ((MR_Box) (Var_9));
  }
  {
    Var_7 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_7, 0) = ((MR_Box) (Var_8));
    MR_hl_field(1, Var_7, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__3_3, 0) = ((MR_Box) (E_4));
    MR_hl_field(0, HeadVar__3_3, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, HeadVar__3_3, 2) = ((MR_Box) (Var_7));
  }
  return HeadVar__3_3;
}

static MR_Word MR_CALL 
check_hlds__xml_documentation__arity_to_xml_1_f_0(
  MR_Integer Arity_3)
{
  MR_Word HeadVar__2_2;
  MR_Word Var_6;
  MR_Word Var_7;
  MR_String Var_8;

  Var_8 = mercury__string__int_to_string_1_f_0(Arity_3);
  {
    Var_7 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_7, 0) = ((MR_Box) (Var_8));
  }
  {
    Var_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_6, 0) = ((MR_Box) (Var_7));
    MR_hl_field(1, Var_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_2, 0) = ((MR_Box) ((MR_String) "arity"));
    MR_hl_field(0, HeadVar__2_2, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, HeadVar__2_2, 2) = ((MR_Box) (Var_6));
  }
  return HeadVar__2_2;
}

static MR_Box MR_CALL 
check_hlds__xml_documentation__mer_inst_to_xml_2_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_Xml_6;

  conv1_Xml_6 = check_hlds__xml_documentation__mer_inst_to_xml_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_Xml_6));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
check_hlds__xml_documentation__mer_inst_to_xml_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_Xml_7;

  conv0_Xml_7 = check_hlds__xml_documentation__bound_functor_to_xml_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Xml_7));
  return wrapper_arg_2;
}

static MR_Word MR_CALL 
check_hlds__xml_documentation__mer_inst_to_xml_2_f_0(
  MR_Word InstVarSet_4,
  MR_Word Inst_5)
{
  while (MR_TRUE)
  {
    MR_Word Xml_6;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Inst_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Inst_5)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Xml_6 = (MR_Word) (&check_hlds__xml_documentation_scalar_common_2[5]);
            break;
          case (MR_Integer) 1:
            Xml_6 = (MR_Word) (&check_hlds__xml_documentation_scalar_common_2[6]);
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_32;
          MR_Word Var_33;
          MR_Word U_48 = ((MR_Unsigned) ((MR_hl_field(1, Inst_5, (MR_Integer) 0))) & (MR_Integer) 7);
          MR_String Var_98;
          MR_Word Var_101;
          MR_Word Var_102;

          Var_98 = mercury__string__string_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_uniqueness_0), ((MR_Box) (U_48)));
          {
            Var_102 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_102, 0) = ((MR_Box) (Var_98));
          }
          {
            Var_101 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_101, 0) = ((MR_Box) (Var_102));
            MR_hl_field(1, Var_101, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_33 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_33, 0) = ((MR_Box) ((MR_String) "uniqueness"));
            MR_hl_field(0, Var_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Var_33, 2) = ((MR_Box) (Var_101));
          }
          {
            Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_32, 0) = ((MR_Box) (Var_33));
            MR_hl_field(1, Var_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Xml_6 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Xml_6, 0) = ((MR_Box) ((MR_String) "ground"));
            MR_hl_field(0, Xml_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Xml_6, 2) = ((MR_Box) (Var_32));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word U_7 = ((MR_Unsigned) ((MR_hl_field(2, Inst_5, (MR_Integer) 0))) & (MR_Integer) 7);
          MR_Word BoundFunctors_9 = ((MR_Word) ((MR_hl_field(2, Inst_5, (MR_Integer) 2))));
          MR_Word XmlUniq_10;
          MR_Word XmlInsts_11;
          MR_Word Var_24;
          MR_Word Var_27;
          MR_Word Var_28;
          MR_String Var_62;
          MR_Word Var_65;
          MR_Word Var_66;
          MR_Word Var_69;

          Var_62 = mercury__string__string_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_uniqueness_0), ((MR_Box) (U_7)));
          {
            Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_66, 0) = ((MR_Box) (Var_62));
          }
          {
            Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_65, 0) = ((MR_Box) (Var_66));
            MR_hl_field(1, Var_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            XmlUniq_10 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, XmlUniq_10, 0) = ((MR_Box) ((MR_String) "uniqueness"));
            MR_hl_field(0, XmlUniq_10, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, XmlUniq_10, 2) = ((MR_Box) (Var_65));
          }
          {
            Var_24 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_24, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_6[5]));
            MR_hl_field(0, Var_24, 1) = ((MR_Box) (check_hlds__xml_documentation__mer_inst_to_xml_2_f_0_1));
            MR_hl_field(0, Var_24, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, Var_24, 3) = ((MR_Box) (InstVarSet_4));
          }
          Var_69 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_functor_0), (MR_Word) (&mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0), Var_24, BoundFunctors_9);
          {
            XmlInsts_11 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, XmlInsts_11, 0) = ((MR_Box) ((MR_String) "bound_functors"));
            MR_hl_field(0, XmlInsts_11, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, XmlInsts_11, 2) = ((MR_Box) (Var_69));
          }
          {
            Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_28, 0) = ((MR_Box) (XmlInsts_11));
            MR_hl_field(1, Var_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_27, 0) = ((MR_Box) (XmlUniq_10));
            MR_hl_field(1, Var_27, 1) = ((MR_Box) (Var_28));
          }
          {
            Xml_6 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Xml_6, 0) = ((MR_Box) ((MR_String) "bound"));
            MR_hl_field(0, Xml_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Xml_6, 2) = ((MR_Box) (Var_27));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Inst_5, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Name_18 = ((MR_Word) ((MR_hl_field(3, Inst_5, (MR_Integer) 1))));
              MR_Word XmlName_19;
              MR_Word Var_46;

              switch (MR_tag((MR_Word) Name_18)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word Name_72 = ((MR_Word) ((MR_hl_field(0, Name_18, (MR_Integer) 0))));
                    MR_Word Insts_73 = ((MR_Word) ((MR_hl_field(0, Name_18, (MR_Integer) 1))));
                    MR_Word Ref_74;
                    MR_Word XmlName_75;
                    MR_Word XmlInsts_76;
                    MR_String Var_78;
                    MR_Integer Var_80;
                    MR_Word Var_82;
                    MR_Word Var_84;
                    MR_Word Var_86;
                    MR_Word Var_87;

                    Var_80 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Insts_73);
                    Var_78 = check_hlds__xml_documentation__sym_name_arity_to_id_3_f_0((MR_String) "inst", Name_72, Var_80);
                    {
                      Ref_74 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Ref_74, 0) = ((MR_Box) ((MR_String) "ref"));
                      MR_hl_field(0, Ref_74, 1) = ((MR_Box) (Var_78));
                    }
                    XmlName_75 = check_hlds__xml_documentation__name_to_xml_1_f_0(Name_72);
                    {
                      Var_82 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_82, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_6[4]));
                      MR_hl_field(0, Var_82, 1) = ((MR_Box) (check_hlds__xml_documentation__mer_inst_to_xml_2_f_0_2));
                      MR_hl_field(0, Var_82, 2) = ((MR_Box) ((MR_Integer) 1));
                      MR_hl_field(0, Var_82, 3) = ((MR_Box) (InstVarSet_4));
                    }
                    XmlInsts_76 = check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_120_109_108_95_108_105_115_116_95_95_104_111_54_95_95_91_49_93_95_48_3_f_0((MR_String) "inst_args", Var_82, Insts_73);
                    {
                      Var_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_84, 0) = ((MR_Box) (Ref_74));
                      MR_hl_field(1, Var_84, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Var_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_87, 0) = ((MR_Box) (XmlInsts_76));
                      MR_hl_field(1, Var_87, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Var_86 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_86, 0) = ((MR_Box) (XmlName_75));
                      MR_hl_field(1, Var_86, 1) = ((MR_Box) (Var_87));
                    }
                    {
                      XmlName_19 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, XmlName_19, 0) = ((MR_Box) ((MR_String) "user_inst"));
                      MR_hl_field(0, XmlName_19, 1) = ((MR_Box) (Var_84));
                      MR_hl_field(0, XmlName_19, 2) = ((MR_Box) (Var_86));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  XmlName_19 = check_hlds__xml_documentation__nyi_1_f_0((MR_String) "unify_inst");
                  break;
                case (MR_Integer) 2:
                  XmlName_19 = check_hlds__xml_documentation__nyi_1_f_0((MR_String) "merge_inst");
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, Name_18, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      XmlName_19 = check_hlds__xml_documentation__nyi_1_f_0((MR_String) "ground_inst");
                      break;
                    case (MR_Integer) 1:
                      XmlName_19 = check_hlds__xml_documentation__nyi_1_f_0((MR_String) "any_inst");
                      break;
                    case (MR_Integer) 2:
                      XmlName_19 = check_hlds__xml_documentation__nyi_1_f_0((MR_String) "shared_inst");
                      break;
                    case (MR_Integer) 3:
                      XmlName_19 = check_hlds__xml_documentation__nyi_1_f_0((MR_String) "mostly_uniq_inst");
                      break;
                    case (MR_Integer) 4:
                      XmlName_19 = check_hlds__xml_documentation__nyi_1_f_0((MR_String) "typed_ground");
                      break;
                    case (MR_Integer) 5:
                      XmlName_19 = check_hlds__xml_documentation__nyi_1_f_0((MR_String) "typed_inst");
                      break;
                  }
                  break;
              }
              {
                Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_46, 0) = ((MR_Box) (XmlName_19));
                MR_hl_field(1, Var_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Xml_6 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Xml_6, 0) = ((MR_Box) ((MR_String) "defined_inst"));
                MR_hl_field(0, Xml_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(0, Xml_6, 2) = ((MR_Box) (Var_46));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word SubInst_17 = ((MR_Word) ((MR_hl_field(3, Inst_5, (MR_Integer) 2))));
              MR_Word next_value_of_Inst_5 = SubInst_17;

              // direct tailcall eliminated
              ;
              Inst_5 = next_value_of_Inst_5;
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_37;
              MR_Word Var_38;
              MR_Word U_49 = ((MR_Unsigned) ((MR_hl_field(3, Inst_5, (MR_Integer) 1))) & (MR_Integer) 7);
              MR_String Var_55;
              MR_Word Var_58;
              MR_Word Var_59;

              Var_55 = mercury__string__string_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_uniqueness_0), ((MR_Box) (U_49)));
              {
                Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_59, 0) = ((MR_Box) (Var_55));
              }
              {
                Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_58, 0) = ((MR_Box) (Var_59));
                MR_hl_field(1, Var_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_38 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_38, 0) = ((MR_Box) ((MR_String) "uniqueness"));
                MR_hl_field(0, Var_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(0, Var_38, 2) = ((MR_Box) (Var_58));
              }
              {
                Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_37, 0) = ((MR_Box) (Var_38));
                MR_hl_field(1, Var_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Xml_6 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Xml_6, 0) = ((MR_Box) ((MR_String) "any"));
                MR_hl_field(0, Xml_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(0, Xml_6, 2) = ((MR_Box) (Var_37));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word InstVar_14 = ((MR_Word) ((MR_hl_field(3, Inst_5, (MR_Integer) 1))));
              MR_String InstVarName_15;
              MR_Word Var_105;
              MR_Word Var_106;

              InstVarName_15 = mercury__varset__lookup_name_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), InstVarSet_4, InstVar_14);
              {
                Var_106 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_106, 0) = ((MR_Box) (InstVarName_15));
              }
              {
                Var_105 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_105, 0) = ((MR_Box) (Var_106));
                MR_hl_field(1, Var_105, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Xml_6 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Xml_6, 0) = ((MR_Box) ((MR_String) "inst_var"));
                MR_hl_field(0, Xml_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(0, Xml_6, 2) = ((MR_Box) (Var_105));
              }
            }
            break;
        }
        break;
    }
    return Xml_6;
    break;
  }
}

static MR_Word MR_CALL 
check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_120_109_108_95_108_105_115_116_95_95_104_111_54_95_95_91_49_93_95_48_3_f_0(
  MR_String Tag_5,
  MR_Word F_6,
  MR_Word L_7)
{
  MR_Word HeadVar__4_4;
  MR_Word Var_9;

  Var_9 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0), F_6, L_7);
  {
    HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__4_4, 0) = ((MR_Box) (Tag_5));
    MR_hl_field(0, HeadVar__4_4, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, HeadVar__4_4, 2) = ((MR_Box) (Var_9));
  }
  return HeadVar__4_4;
}

static MR_Word MR_CALL 
check_hlds__xml_documentation__nyi_1_f_0(
  MR_String Tag_3)
{
  MR_Word HeadVar__2_2;

  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_2, 0) = ((MR_Box) (Tag_3));
    MR_hl_field(0, HeadVar__2_2, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, HeadVar__2_2, 2) = ((MR_Box) (MR_mkword(1, &check_hlds__xml_documentation_scalar_common_1[5])));
  }
  return HeadVar__2_2;
}

static MR_String MR_CALL 
check_hlds__xml_documentation__sym_name_arity_to_id_3_f_0(
  MR_String Prefix_5,
  MR_Word Name_6,
  MR_Integer Arity_7)
{
  MR_String HeadVar__4_4;
  MR_String Var_8;
  MR_String Var_9;
  MR_String Var_11;
  MR_String Var_12;
  MR_String Var_14;

  Var_14 = mdbcomp__sym_name__sym_name_to_string_1_f_0(Name_6);
  Var_12 = mercury__string__f_43_43_2_f_0((MR_String) ".", Var_14);
  Var_8 = mercury__string__f_43_43_2_f_0(Prefix_5, Var_12);
  Var_11 = mercury__string__int_to_string_1_f_0(Arity_7);
  Var_9 = mercury__string__f_43_43_2_f_0((MR_String) "-", Var_11);
  HeadVar__4_4 = mercury__string__f_43_43_2_f_0(Var_8, Var_9);
  return HeadVar__4_4;
}

static MR_Box MR_CALL 
check_hlds__xml_documentation__mer_mode_to_xml_2_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_Xml_6;

  conv1_Xml_6 = check_hlds__xml_documentation__mer_inst_to_xml_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_Xml_6));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
check_hlds__xml_documentation__mer_mode_to_xml_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_Xml_6;

  conv0_Xml_6 = check_hlds__xml_documentation__mer_inst_to_xml_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Xml_6));
  return wrapper_arg_2;
}

static MR_Word MR_CALL 
check_hlds__xml_documentation__mer_mode_to_xml_2_f_0(
  MR_Word InstVarSet_4,
  MR_Word Mode_5)
{
  MR_Word Xml_6;

  if (((MR_tag((MR_Word) Mode_5)) == (MR_Integer) 0))
  {
    MR_Word A_7 = ((MR_Word) ((MR_hl_field(0, Mode_5, (MR_Integer) 0))));
    MR_Word B_8 = ((MR_Word) ((MR_hl_field(0, Mode_5, (MR_Integer) 1))));
    MR_Word XmlFrom_9;
    MR_Word XmlTo_10;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_21;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_48;
    MR_Word Var_52;

    {
      Var_16 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_16, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_6[4]));
      MR_hl_field(0, Var_16, 1) = ((MR_Box) (check_hlds__xml_documentation__mer_mode_to_xml_2_f_0_1));
      MR_hl_field(0, Var_16, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_16, 3) = ((MR_Box) (InstVarSet_4));
    }
    {
      Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_17, 0) = ((MR_Box) (A_7));
      MR_hl_field(1, Var_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_48 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0), Var_16, Var_17);
    {
      XmlFrom_9 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, XmlFrom_9, 0) = ((MR_Box) ((MR_String) "from"));
      MR_hl_field(0, XmlFrom_9, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, XmlFrom_9, 2) = ((MR_Box) (Var_48));
    }
    {
      Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_21, 0) = ((MR_Box) (B_8));
      MR_hl_field(1, Var_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_52 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0), Var_16, Var_21);
    {
      XmlTo_10 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, XmlTo_10, 0) = ((MR_Box) ((MR_String) "to"));
      MR_hl_field(0, XmlTo_10, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, XmlTo_10, 2) = ((MR_Box) (Var_52));
    }
    {
      Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_26, 0) = ((MR_Box) (XmlTo_10));
      MR_hl_field(1, Var_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_25, 0) = ((MR_Box) (XmlFrom_9));
      MR_hl_field(1, Var_25, 1) = ((MR_Box) (Var_26));
    }
    {
      Xml_6 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Xml_6, 0) = ((MR_Box) ((MR_String) "inst_to_inst"));
      MR_hl_field(0, Xml_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Xml_6, 2) = ((MR_Box) (Var_25));
    }
  }
  else
  {
    MR_Word Name_11 = ((MR_Word) ((MR_hl_field(1, Mode_5, (MR_Integer) 0))));
    MR_Word Args_12 = ((MR_Word) ((MR_hl_field(1, Mode_5, (MR_Integer) 1))));
    MR_Word Ref_13;
    MR_Word XmlArgs_14;
    MR_String Var_29;
    MR_Integer Var_31;
    MR_Word Var_33;
    MR_Word Var_35;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_String Var_55;
    MR_String Var_56;
    MR_String Var_58;
    MR_String Var_59;
    MR_String Var_61;
    MR_Word Var_63;

    Var_31 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Args_12);
    Var_61 = mdbcomp__sym_name__sym_name_to_string_1_f_0(Name_11);
    Var_59 = mercury__string__f_43_43_2_f_0((MR_String) ".", Var_61);
    Var_55 = mercury__string__f_43_43_2_f_0((MR_String) "mode", Var_59);
    Var_58 = mercury__string__int_to_string_1_f_0(Var_31);
    Var_56 = mercury__string__f_43_43_2_f_0((MR_String) "-", Var_58);
    Var_29 = mercury__string__f_43_43_2_f_0(Var_55, Var_56);
    {
      Ref_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Ref_13, 0) = ((MR_Box) ((MR_String) "ref"));
      MR_hl_field(0, Ref_13, 1) = ((MR_Box) (Var_29));
    }
    {
      Var_33 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_33, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_6[4]));
      MR_hl_field(0, Var_33, 1) = ((MR_Box) (check_hlds__xml_documentation__mer_mode_to_xml_2_f_0_2));
      MR_hl_field(0, Var_33, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_33, 3) = ((MR_Box) (InstVarSet_4));
    }
    Var_63 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0), Var_33, Args_12);
    {
      XmlArgs_14 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, XmlArgs_14, 0) = ((MR_Box) ((MR_String) "mode_args"));
      MR_hl_field(0, XmlArgs_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, XmlArgs_14, 2) = ((MR_Box) (Var_63));
    }
    {
      Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_35, 0) = ((MR_Box) (Ref_13));
      MR_hl_field(1, Var_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_38 = check_hlds__xml_documentation__name_to_xml_1_f_0(Name_11);
    {
      Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_39, 0) = ((MR_Box) (XmlArgs_14));
      MR_hl_field(1, Var_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_37, 0) = ((MR_Box) (Var_38));
      MR_hl_field(1, Var_37, 1) = ((MR_Box) (Var_39));
    }
    {
      Xml_6 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Xml_6, 0) = ((MR_Box) ((MR_String) "user_defined_mode"));
      MR_hl_field(0, Xml_6, 1) = ((MR_Box) (Var_35));
      MR_hl_field(0, Xml_6, 2) = ((MR_Box) (Var_37));
    }
  }
  return Xml_6;
}

static void MR_CALL 
check_hlds__xml_documentation__pred_mode_documentation_5_p_0(
  MR_Word _C_6,
  MR_Integer _ProcId_7,
  MR_Word ProcInfo_8,
  MR_Word STATE_VARIABLE_Xml_0_15,
  MR_Word * STATE_VARIABLE_Xml_16)
{
  check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_109_111_100_101_95_100_111_99_117_109_101_110_116_97_116_105_111_110_95_95_91_49_44_32_50_93_95_48_5_p_0(ProcInfo_8, STATE_VARIABLE_Xml_0_15, STATE_VARIABLE_Xml_16);
}

static MR_Box MR_CALL 
check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_109_111_100_101_95_100_111_99_117_109_101_110_116_97_116_105_111_110_95_95_91_49_44_32_50_93_95_48_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_Xml_6;

  conv0_Xml_6 = check_hlds__xml_documentation__mer_mode_to_xml_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Xml_6));
  return wrapper_arg_2;
}

static void MR_CALL 
check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_109_111_100_101_95_100_111_99_117_109_101_110_116_97_116_105_111_110_95_95_91_49_44_32_50_93_95_48_5_p_0(
  MR_Word ProcInfo_8,
  MR_Word STATE_VARIABLE_Xml_0_15,
  MR_Word * STATE_VARIABLE_Xml_16)
{
  MR_Word Xml_9;
  MR_Word IVarSet_10;
  MR_Word Modes_11;
  MR_Word Determinism_12;
  MR_Word XmlModes_13;
  MR_Word XmlDet_14;
  MR_Word Var_18;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_26;

  hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(ProcInfo_8, &IVarSet_10);
  hlds__hlds_proc_util__proc_info_declared_argmodes_2_p_0(ProcInfo_8, &Modes_11);
  hlds__hlds_proc_util__proc_info_interface_determinism_2_p_0(ProcInfo_8, &Determinism_12);
  {
    Var_18 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_18, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_6[3]));
    MR_hl_field(0, Var_18, 1) = ((MR_Box) (check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_109_111_100_101_95_100_111_99_117_109_101_110_116_97_116_105_111_110_95_95_91_49_44_32_50_93_95_48_5_p_0_1));
    MR_hl_field(0, Var_18, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_18, 3) = ((MR_Box) (IVarSet_10));
  }
  Var_26 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0), Var_18, Modes_11);
  {
    XmlModes_13 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, XmlModes_13, 0) = ((MR_Box) ((MR_String) "modes"));
    MR_hl_field(0, XmlModes_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, XmlModes_13, 2) = ((MR_Box) (Var_26));
  }
  switch (Determinism_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 4:
      XmlDet_14 = (MR_Word) (&check_hlds__xml_documentation_scalar_common_2[16]);
      break;
    case (MR_Integer) 5:
      XmlDet_14 = (MR_Word) (&check_hlds__xml_documentation_scalar_common_2[17]);
      break;
    case (MR_Integer) 0:
      XmlDet_14 = (MR_Word) (&check_hlds__xml_documentation_scalar_common_2[18]);
      break;
    case (MR_Integer) 6:
      XmlDet_14 = (MR_Word) (&check_hlds__xml_documentation_scalar_common_2[19]);
      break;
    case (MR_Integer) 7:
      XmlDet_14 = (MR_Word) (&check_hlds__xml_documentation_scalar_common_2[20]);
      break;
    case (MR_Integer) 2:
      XmlDet_14 = (MR_Word) (&check_hlds__xml_documentation_scalar_common_2[21]);
      break;
    case (MR_Integer) 3:
      XmlDet_14 = (MR_Word) (&check_hlds__xml_documentation_scalar_common_2[22]);
      break;
    case (MR_Integer) 1:
      XmlDet_14 = (MR_Word) (&check_hlds__xml_documentation_scalar_common_2[23]);
      break;
  }
  {
    Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_22, 0) = ((MR_Box) (XmlDet_14));
    MR_hl_field(1, Var_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_21, 0) = ((MR_Box) (XmlModes_13));
    MR_hl_field(1, Var_21, 1) = ((MR_Box) (Var_22));
  }
  {
    Xml_9 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Xml_9, 0) = ((MR_Box) ((MR_String) "pred_mode"));
    MR_hl_field(0, Xml_9, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Xml_9, 2) = ((MR_Box) (Var_21));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Xml_16 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Xml_9));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Xml_0_15));
  }
}

static void MR_CALL 
check_hlds__xml_documentation__pred_documentation_5_p_0(
  MR_Word C_6,
  MR_Word _PredId_7,
  MR_Word PredInfo_8,
  MR_Word STATE_VARIABLE_Xml_0_16,
  MR_Word * STATE_VARIABLE_Xml_17)
{
  check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_100_111_99_117_109_101_110_116_97_116_105_111_110_95_95_91_50_93_95_48_5_p_0(C_6, PredInfo_8, STATE_VARIABLE_Xml_0_16, STATE_VARIABLE_Xml_17);
}

static void MR_CALL 
check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_100_111_99_117_109_101_110_116_97_116_105_111_110_95_95_91_50_93_95_48_5_p_0(
  MR_Word C_6,
  MR_Word PredInfo_8,
  MR_Word STATE_VARIABLE_Xml_0_16,
  MR_Word * STATE_VARIABLE_Xml_17)
{
  MR_bool succeeded;
  MR_Word PredStatus_10;
  MR_Word Origin_11;
  MR_Word Markers_12;
  MR_Word Var_18;
  MR_Word Var_19;
  MR_Word Var_20;

  hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo_8, &PredStatus_10);
  hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo_8, &Origin_11);
  hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_8, &Markers_12);
  Var_18 = hlds__status__pred_status_defined_in_this_module_1_f_0(PredStatus_10);
  succeeded = (Var_18 == (MR_Integer) 1);
  if (succeeded)
  {
    succeeded = ((MR_tag((MR_Word) Origin_11)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_19 = ((MR_Word) ((MR_hl_field(0, Origin_11, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) Var_19)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_20 = (MR_Integer) 11;
        succeeded = hlds__hlds_markers__marker_is_present_2_p_0(Markers_12, Var_20);
        succeeded = !(succeeded);
      }
    }
  }
  if (succeeded)
  {
    MR_Word Xml_9;

    Xml_9 = check_hlds__xml_documentation__predicate_documentation_2_f_0(C_6, PredInfo_8);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Xml_17 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Xml_9));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Xml_0_16));
    }
  }
  else
    *STATE_VARIABLE_Xml_17 = STATE_VARIABLE_Xml_0_16;
}

static void MR_CALL 
check_hlds__xml_documentation__predicate_documentation_2_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_STATE_VARIABLE_Xml_16;

  check_hlds__xml_documentation__pred_mode_documentation_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv3_STATE_VARIABLE_Xml_16);
  *wrapper_arg_4 = ((MR_Box) (conv3_STATE_VARIABLE_Xml_16));
}

static MR_Box MR_CALL 
check_hlds__xml_documentation__predicate_documentation_2_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv2_Xml_6;

  conv2_Xml_6 = check_hlds__xml_documentation__type_param_to_xml_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_Xml_6));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
check_hlds__xml_documentation__predicate_documentation_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__3_3;

  conv1_HeadVar__3_3 = check_hlds__xml_documentation__mer_type_to_xml_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__3_3));
  return wrapper_arg_2;
}

static MR_Word MR_CALL 
check_hlds__xml_documentation__predicate_documentation_2_f_0(
  MR_Word C_4,
  MR_Word PredInfo_5)
{
  MR_bool succeeded;
  MR_Word Xml_6;
  MR_Word TVarset_7;
  MR_Word Exists_8;
  MR_Word IsPredOrFunc_9;
  MR_Word Module_10;
  MR_String Name_11;
  MR_Word PredName_12;
  MR_Word PredStatus_13;
  MR_Word Types_14;
  MR_Word Constraints_15;
  MR_Word Context_16;
  MR_String Tag_17;
  MR_Word PredInfoArity_18;
  MR_Integer PredInfoArityInt_19;
  MR_String Id_20;
  MR_Word XmlName_21;
  MR_Word XmlContext_22;
  MR_Word XmlTypes_23;
  MR_Word XmlExistVars_24;
  MR_Word XmlConstraints_25;
  MR_Word XmlVisibility_26;
  MR_Word ProcTable_27;
  MR_Word XmlProcs_28;
  MR_Word XmlModes_29;
  MR_Word Xml0_30;
  MR_Word Var_32;
  MR_Word Var_34;
  MR_Word Var_35;
  MR_Word Var_39;
  MR_Word Var_40;
  MR_Word Var_43;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word Var_46;
  MR_Word Var_47;
  MR_Word Var_48;
  MR_Word Var_49;
  MR_Word Types0_64;
  MR_Integer PredFormArity_65;
  MR_Word Var_66;
  MR_String Var_74;
  MR_String Var_75;
  MR_String Var_77;
  MR_String Var_78;
  MR_String Var_80;
  MR_String FileName_81;
  MR_Integer LineNumber_82;
  MR_Word Var_85;
  MR_Word Var_86;
  MR_Word Var_88;
  MR_Word Var_89;
  MR_Word Var_93;
  MR_Word Var_94;
  MR_Word Var_97;
  MR_Word Var_98;
  MR_String Var_99;
  MR_Word Var_102;
  MR_Word Var_106;
  MR_Word L_68;
  MR_Integer Var_69;
  MR_Integer Var_70;
  MR_Box conv4_XmlProcs_28;

  hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo_5, &TVarset_7);
  hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_p_0(PredInfo_5, &Exists_8);
  IsPredOrFunc_9 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_5);
  Module_10 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_5);
  Name_11 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_5);
  {
    PredName_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, PredName_12, 0) = ((MR_Box) (Module_10));
    MR_hl_field(1, PredName_12, 1) = ((MR_Box) (Name_11));
  }
  hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo_5, &PredStatus_13);
  hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_5, &Types0_64);
  hlds__hlds_pred__pred_info_get_orig_arity_2_p_0(PredInfo_5, &Var_66);
  PredFormArity_65 = (MR_Integer) (Var_66);
  Var_70 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Types0_64);
  Var_69 = (MR_Integer) ((MR_Unsigned) Var_70 - (MR_Unsigned) PredFormArity_65);
  succeeded = mercury__list__drop_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Var_69, Types0_64, &L_68);
  if (succeeded)
    Types_14 = L_68;
  else
  {
    MR_Box conv0_Types_14;

    conv0_Types_14 = mercury__require__func_error_1_f_0((MR_Word) (&check_hlds__xml_documentation_scalar_common_1[9]), (MR_String) "keep_last_n");
    Types_14 = ((MR_Word) (conv0_Types_14));
  }
  hlds__hlds_pred__pred_info_get_class_context_2_p_0(PredInfo_5, &Constraints_15);
  hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo_5, &Context_16);
  switch (IsPredOrFunc_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      Tag_17 = (MR_String) "function";
      break;
    case (MR_Integer) 0:
      Tag_17 = (MR_String) "predicate";
      break;
  }
  hlds__hlds_pred__pred_info_get_orig_arity_2_p_0(PredInfo_5, &PredInfoArity_18);
  PredInfoArityInt_19 = (MR_Integer) (PredInfoArity_18);
  Var_80 = mdbcomp__sym_name__sym_name_to_string_1_f_0(PredName_12);
  Var_78 = mercury__string__f_43_43_2_f_0((MR_String) ".", Var_80);
  Var_74 = mercury__string__f_43_43_2_f_0(Tag_17, Var_78);
  Var_77 = mercury__string__int_to_string_1_f_0(PredInfoArityInt_19);
  Var_75 = mercury__string__f_43_43_2_f_0((MR_String) "-", Var_77);
  Id_20 = mercury__string__f_43_43_2_f_0(Var_74, Var_75);
  XmlName_21 = check_hlds__xml_documentation__name_to_xml_1_f_0(PredName_12);
  FileName_81 = ((MR_String) ((MR_hl_field(0, Context_16, (MR_Integer) 0))));
  LineNumber_82 = ((MR_Integer) ((MR_hl_field(0, Context_16, (MR_Integer) 1))));
  {
    Var_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_94, 0) = ((MR_Box) (FileName_81));
  }
  {
    Var_93 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_93, 0) = ((MR_Box) (Var_94));
    MR_hl_field(1, Var_93, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_86 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_86, 0) = ((MR_Box) ((MR_String) "filename"));
    MR_hl_field(0, Var_86, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Var_86, 2) = ((MR_Box) (Var_93));
  }
  Var_99 = mercury__string__int_to_string_1_f_0(LineNumber_82);
  {
    Var_98 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_98, 0) = ((MR_Box) (Var_99));
  }
  {
    Var_97 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_97, 0) = ((MR_Box) (Var_98));
    MR_hl_field(1, Var_97, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_89 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_89, 0) = ((MR_Box) ((MR_String) "line"));
    MR_hl_field(0, Var_89, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Var_89, 2) = ((MR_Box) (Var_97));
  }
  {
    Var_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_88, 0) = ((MR_Box) (Var_89));
    MR_hl_field(1, Var_88, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_85, 0) = ((MR_Box) (Var_86));
    MR_hl_field(1, Var_85, 1) = ((MR_Box) (Var_88));
  }
  {
    XmlContext_22 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, XmlContext_22, 0) = ((MR_Box) ((MR_String) "context"));
    MR_hl_field(0, XmlContext_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, XmlContext_22, 2) = ((MR_Box) (Var_85));
  }
  {
    Var_32 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_32, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_6[0]));
    MR_hl_field(0, Var_32, 1) = ((MR_Box) (check_hlds__xml_documentation__predicate_documentation_2_f_0_1));
    MR_hl_field(0, Var_32, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_32, 3) = ((MR_Box) (TVarset_7));
  }
  Var_102 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0), Var_32, Types_14);
  {
    XmlTypes_23 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, XmlTypes_23, 0) = ((MR_Box) ((MR_String) "pred_types"));
    MR_hl_field(0, XmlTypes_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, XmlTypes_23, 2) = ((MR_Box) (Var_102));
  }
  {
    Var_34 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_34, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_6[1]));
    MR_hl_field(0, Var_34, 1) = ((MR_Box) (check_hlds__xml_documentation__predicate_documentation_2_f_0_2));
    MR_hl_field(0, Var_34, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_34, 3) = ((MR_Box) (TVarset_7));
  }
  Var_106 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__xml_documentation_scalar_common_1[1]), (MR_Word) (&mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0), Var_34, Exists_8);
  {
    XmlExistVars_24 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, XmlExistVars_24, 0) = ((MR_Box) ((MR_String) "pred_exist_vars"));
    MR_hl_field(0, XmlExistVars_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, XmlExistVars_24, 2) = ((MR_Box) (Var_106));
  }
  XmlConstraints_25 = check_hlds__xml_documentation__univ_exist_constraints_to_xml_2_f_0(TVarset_7, Constraints_15);
  XmlVisibility_26 = check_hlds__xml_documentation__pred_visibility_to_xml_1_f_0(PredStatus_13);
  hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_5, &ProcTable_27);
  {
    Var_35 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_35, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_8[0]));
    MR_hl_field(0, Var_35, 1) = ((MR_Box) (check_hlds__xml_documentation__predicate_documentation_2_f_0_3));
    MR_hl_field(0, Var_35, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_35, 3) = ((MR_Box) (C_4));
  }
  mercury__map__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), (MR_Word) (&check_hlds__xml_documentation_scalar_common_1[2]), Var_35, ProcTable_27, ((MR_Box) ((MR_Unsigned) 0U)), &conv4_XmlProcs_28);
  XmlProcs_28 = ((MR_Word) (conv4_XmlProcs_28));
  {
    XmlModes_29 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, XmlModes_29, 0) = ((MR_Box) ((MR_String) "pred_modes"));
    MR_hl_field(0, XmlModes_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, XmlModes_29, 2) = ((MR_Box) (XmlProcs_28));
  }
  {
    Var_40 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_40, 0) = ((MR_Box) ((MR_String) "id"));
    MR_hl_field(0, Var_40, 1) = ((MR_Box) (Id_20));
  }
  {
    Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_39, 0) = ((MR_Box) (Var_40));
    MR_hl_field(1, Var_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_49, 0) = ((MR_Box) (XmlModes_29));
    MR_hl_field(1, Var_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_48, 0) = ((MR_Box) (XmlVisibility_26));
    MR_hl_field(1, Var_48, 1) = ((MR_Box) (Var_49));
  }
  {
    Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_47, 0) = ((MR_Box) (XmlConstraints_25));
    MR_hl_field(1, Var_47, 1) = ((MR_Box) (Var_48));
  }
  {
    Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_46, 0) = ((MR_Box) (XmlExistVars_24));
    MR_hl_field(1, Var_46, 1) = ((MR_Box) (Var_47));
  }
  {
    Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_45, 0) = ((MR_Box) (XmlContext_22));
    MR_hl_field(1, Var_45, 1) = ((MR_Box) (Var_46));
  }
  {
    Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_44, 0) = ((MR_Box) (XmlTypes_23));
    MR_hl_field(1, Var_44, 1) = ((MR_Box) (Var_45));
  }
  {
    Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_43, 0) = ((MR_Box) (XmlName_21));
    MR_hl_field(1, Var_43, 1) = ((MR_Box) (Var_44));
  }
  {
    Xml0_30 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Xml0_30, 0) = ((MR_Box) (Tag_17));
    MR_hl_field(0, Xml0_30, 1) = ((MR_Box) (Var_39));
    MR_hl_field(0, Xml0_30, 2) = ((MR_Box) (Var_43));
  }
  Xml_6 = check_hlds__xml_documentation__maybe_add_comment_3_f_0(C_4, Context_16, Xml0_30);
  return Xml_6;
}

static MR_Word MR_CALL 
check_hlds__xml_documentation__pred_visibility_to_xml_1_f_0(
  MR_Word Status_3)
{
  MR_bool succeeded;
  MR_Word HeadVar__2_2;
  MR_String Visibility_4;
  MR_Word Var_9;
  MR_Word Var_10;
  MR_Word Var_6;

  Var_6 = hlds__status__pred_status_defined_in_impl_section_1_f_0(Status_3);
  succeeded = (Var_6 == (MR_Integer) 1);
  if (succeeded)
  {
    MR_Word Var_7 = (MR_Word) (Status_3);

    succeeded = (Var_7 == (MR_Word) ((MR_Unsigned) 20U));
    if (succeeded)
      Visibility_4 = (MR_String) "abstract";
    else
      Visibility_4 = (MR_String) "implementation";
  }
  else
    Visibility_4 = (MR_String) "interface";
  {
    Var_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_10, 0) = ((MR_Box) (Visibility_4));
  }
  {
    Var_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_9, 0) = ((MR_Box) (Var_10));
    MR_hl_field(1, Var_9, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_2, 0) = ((MR_Box) ((MR_String) "visibility"));
    MR_hl_field(0, HeadVar__2_2, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, HeadVar__2_2, 2) = ((MR_Box) (Var_9));
  }
  return HeadVar__2_2;
}

static MR_Box MR_CALL 
check_hlds__xml_documentation__univ_exist_constraints_to_xml_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_Xml_6;

  conv0_Xml_6 = check_hlds__xml_documentation__prog_constraint_to_xml_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Xml_6));
  return wrapper_arg_2;
}

static MR_Word MR_CALL 
check_hlds__xml_documentation__univ_exist_constraints_to_xml_2_f_0(
  MR_Word TVarset_4,
  MR_Word Constraints_5)
{
  MR_Word Xml_6;
  MR_Word Univs_7 = ((MR_Word) ((MR_hl_field(0, Constraints_5, (MR_Integer) 0))));
  MR_Word Exists_8 = ((MR_Word) ((MR_hl_field(0, Constraints_5, (MR_Integer) 1))));
  MR_Word XmlUnivs_9;
  MR_Word XmlExists_10;
  MR_Word Var_12;
  MR_Word Var_17;
  MR_Word Var_18;
  MR_Word Var_22;
  MR_Word Var_26;

  {
    Var_12 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_12, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_6[2]));
    MR_hl_field(0, Var_12, 1) = ((MR_Box) (check_hlds__xml_documentation__univ_exist_constraints_to_xml_2_f_0_1));
    MR_hl_field(0, Var_12, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_12, 3) = ((MR_Box) (TVarset_4));
  }
  Var_22 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0), Var_12, Univs_7);
  {
    XmlUnivs_9 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, XmlUnivs_9, 0) = ((MR_Box) ((MR_String) "pred_universal"));
    MR_hl_field(0, XmlUnivs_9, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, XmlUnivs_9, 2) = ((MR_Box) (Var_22));
  }
  Var_26 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0), Var_12, Exists_8);
  {
    XmlExists_10 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, XmlExists_10, 0) = ((MR_Box) ((MR_String) "pred_exist"));
    MR_hl_field(0, XmlExists_10, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, XmlExists_10, 2) = ((MR_Box) (Var_26));
  }
  {
    Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_18, 0) = ((MR_Box) (XmlExists_10));
    MR_hl_field(1, Var_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_17, 0) = ((MR_Box) (XmlUnivs_9));
    MR_hl_field(1, Var_17, 1) = ((MR_Box) (Var_18));
  }
  {
    Xml_6 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Xml_6, 0) = ((MR_Box) ((MR_String) "pred_constraints"));
    MR_hl_field(0, Xml_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Xml_6, 2) = ((MR_Box) (Var_17));
  }
  return Xml_6;
}

static MR_Word MR_CALL 
check_hlds__xml_documentation__constructor_arg_to_xml_3_f_0(
  MR_Word C_5,
  MR_Word TVarset_6,
  MR_Word CtorArg_7)
{
  MR_Word Xml_8;
  MR_Word MaybeCtorFieldName_9 = ((MR_Word) ((MR_hl_field(0, CtorArg_7, (MR_Integer) 0))));
  MR_Word Type_10 = ((MR_Word) ((MR_hl_field(0, CtorArg_7, (MR_Integer) 1))));
  MR_Word Context_11 = ((MR_Word) ((MR_hl_field(0, CtorArg_7, (MR_Integer) 2))));
  MR_Word XmlType_12;
  MR_Word XmlContext_13;
  MR_Word XmlMaybeFieldName_17;
  MR_Word Xml0_18;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_38;
  MR_Word Var_39;
  MR_String FileName_40;
  MR_Integer LineNumber_41;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word Var_47;
  MR_Word Var_48;
  MR_Word Var_52;
  MR_Word Var_53;
  MR_Word Var_56;
  MR_Word Var_57;
  MR_String Var_58;

  Var_22 = check_hlds__xml_documentation__mer_type_to_xml_2_f_0(TVarset_6, Type_10);
  {
    Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_21, 0) = ((MR_Box) (Var_22));
    MR_hl_field(1, Var_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    XmlType_12 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, XmlType_12, 0) = ((MR_Box) ((MR_String) "arg_type"));
    MR_hl_field(0, XmlType_12, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, XmlType_12, 2) = ((MR_Box) (Var_21));
  }
  FileName_40 = ((MR_String) ((MR_hl_field(0, Context_11, (MR_Integer) 0))));
  LineNumber_41 = ((MR_Integer) ((MR_hl_field(0, Context_11, (MR_Integer) 1))));
  {
    Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_53, 0) = ((MR_Box) (FileName_40));
  }
  {
    Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_52, 0) = ((MR_Box) (Var_53));
    MR_hl_field(1, Var_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_45 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_45, 0) = ((MR_Box) ((MR_String) "filename"));
    MR_hl_field(0, Var_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Var_45, 2) = ((MR_Box) (Var_52));
  }
  Var_58 = mercury__string__int_to_string_1_f_0(LineNumber_41);
  {
    Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_57, 0) = ((MR_Box) (Var_58));
  }
  {
    Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_56, 0) = ((MR_Box) (Var_57));
    MR_hl_field(1, Var_56, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_48 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_48, 0) = ((MR_Box) ((MR_String) "line"));
    MR_hl_field(0, Var_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Var_48, 2) = ((MR_Box) (Var_56));
  }
  {
    Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_47, 0) = ((MR_Box) (Var_48));
    MR_hl_field(1, Var_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_44, 0) = ((MR_Box) (Var_45));
    MR_hl_field(1, Var_44, 1) = ((MR_Box) (Var_47));
  }
  {
    XmlContext_13 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, XmlContext_13, 0) = ((MR_Box) ((MR_String) "context"));
    MR_hl_field(0, XmlContext_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, XmlContext_13, 2) = ((MR_Box) (Var_44));
  }
  if ((MaybeCtorFieldName_9 == (MR_Word) ((MR_Unsigned) 0U)))
    XmlMaybeFieldName_17 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word FieldName_14;
    MR_Word Id_16;
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(1, MaybeCtorFieldName_9, (MR_Integer) 0))));
    MR_String Var_26;
    MR_Word Var_28;
    MR_Word Var_30;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_String Var_60;
    MR_String Var_62;

    FieldName_14 = ((MR_Word) ((MR_hl_field(0, Var_24, (MR_Integer) 0))));
    Var_62 = mdbcomp__sym_name__sym_name_to_string_1_f_0(FieldName_14);
    Var_60 = mercury__string__f_43_43_2_f_0((MR_String) ".", Var_62);
    Var_26 = mercury__string__f_43_43_2_f_0((MR_String) "field", Var_60);
    {
      Id_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Id_16, 0) = ((MR_Box) ((MR_String) "id"));
      MR_hl_field(0, Id_16, 1) = ((MR_Box) (Var_26));
    }
    {
      Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_30, 0) = ((MR_Box) (Id_16));
      MR_hl_field(1, Var_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_33 = check_hlds__xml_documentation__name_to_xml_1_f_0(FieldName_14);
    {
      Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_32, 0) = ((MR_Box) (Var_33));
      MR_hl_field(1, Var_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_28 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_28, 0) = ((MR_Box) ((MR_String) "field"));
      MR_hl_field(0, Var_28, 1) = ((MR_Box) (Var_30));
      MR_hl_field(0, Var_28, 2) = ((MR_Box) (Var_32));
    }
    {
      XmlMaybeFieldName_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, XmlMaybeFieldName_17, 0) = ((MR_Box) (Var_28));
      MR_hl_field(1, XmlMaybeFieldName_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  {
    Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_39, 0) = ((MR_Box) (XmlContext_13));
    MR_hl_field(1, Var_39, 1) = ((MR_Box) (XmlMaybeFieldName_17));
  }
  {
    Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_38, 0) = ((MR_Box) (XmlType_12));
    MR_hl_field(1, Var_38, 1) = ((MR_Box) (Var_39));
  }
  {
    Xml0_18 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Xml0_18, 0) = ((MR_Box) ((MR_String) "ctor_arg"));
    MR_hl_field(0, Xml0_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Xml0_18, 2) = ((MR_Box) (Var_38));
  }
  Xml_8 = check_hlds__xml_documentation__maybe_add_comment_3_f_0(C_5, Context_11, Xml0_18);
  return Xml_8;
}

static MR_Box MR_CALL 
check_hlds__xml_documentation__constructor_to_xml_3_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv2_Xml_6;

  conv2_Xml_6 = check_hlds__xml_documentation__prog_constraint_to_xml_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_Xml_6));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
check_hlds__xml_documentation__constructor_to_xml_3_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_Xml_6;

  conv1_Xml_6 = check_hlds__xml_documentation__type_param_to_xml_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_Xml_6));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
check_hlds__xml_documentation__constructor_to_xml_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_Xml_8;

  conv0_Xml_8 = check_hlds__xml_documentation__constructor_arg_to_xml_3_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Xml_8));
  return wrapper_arg_2;
}

static MR_Word MR_CALL 
check_hlds__xml_documentation__constructor_to_xml_3_f_0(
  MR_Word C_5,
  MR_Word TVarset_6,
  MR_Word Ctor_7)
{
  MR_Word Xml_8;
  MR_Word MaybeExistConstraints_10 = ((MR_Word) ((MR_hl_field(0, Ctor_7, (MR_Integer) 1))));
  MR_Word Name_11 = ((MR_Word) ((MR_hl_field(0, Ctor_7, (MR_Integer) 2))));
  MR_Word Args_12 = ((MR_Word) ((MR_hl_field(0, Ctor_7, (MR_Integer) 3))));
  MR_Integer Arity_13 = ((MR_Integer) ((MR_hl_field(0, Ctor_7, (MR_Integer) 4))));
  MR_Word Context_14 = ((MR_Word) ((MR_hl_field(0, Ctor_7, (MR_Integer) 5))));
  MR_Word ExistQVars_15;
  MR_Word Constraints_16;
  MR_Word Id_20;
  MR_Word XmlName_21;
  MR_Word XmlContext_22;
  MR_Word XmlArgs_23;
  MR_Word XmlExistQVars_24;
  MR_Word XmlConstraints_25;
  MR_Word Xml0_26;
  MR_String Var_28;
  MR_Word Var_31;
  MR_Word Var_33;
  MR_Word Var_35;
  MR_Word Var_37;
  MR_Word Var_39;
  MR_Word Var_40;
  MR_Word Var_41;
  MR_Word Var_42;
  MR_Word Var_43;
  MR_String Var_52;
  MR_String Var_53;
  MR_String Var_55;
  MR_String Var_56;
  MR_String Var_58;
  MR_String FileName_59;
  MR_Integer LineNumber_60;
  MR_Word Var_63;
  MR_Word Var_64;
  MR_Word Var_66;
  MR_Word Var_67;
  MR_Word Var_71;
  MR_Word Var_72;
  MR_Word Var_75;
  MR_Word Var_76;
  MR_String Var_77;
  MR_Word Var_80;
  MR_Word Var_84;
  MR_Word Var_88;

  if ((MaybeExistConstraints_10 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    ExistQVars_15 = (MR_Word) ((MR_Unsigned) 0U);
    Constraints_16 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word ExistConstraints_17 = (MR_Word) (MR_body((MR_Word) (MaybeExistConstraints_10), (MR_Integer) 1));

    ExistQVars_15 = ((MR_Word) ((MR_hl_field(0, ExistConstraints_17, (MR_Integer) 0))));
    Constraints_16 = ((MR_Word) ((MR_hl_field(0, ExistConstraints_17, (MR_Integer) 1))));
  }
  Var_58 = mdbcomp__sym_name__sym_name_to_string_1_f_0(Name_11);
  Var_56 = mercury__string__f_43_43_2_f_0((MR_String) ".", Var_58);
  Var_52 = mercury__string__f_43_43_2_f_0((MR_String) "ctor", Var_56);
  Var_55 = mercury__string__int_to_string_1_f_0(Arity_13);
  Var_53 = mercury__string__f_43_43_2_f_0((MR_String) "-", Var_55);
  Var_28 = mercury__string__f_43_43_2_f_0(Var_52, Var_53);
  {
    Id_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Id_20, 0) = ((MR_Box) ((MR_String) "id"));
    MR_hl_field(0, Id_20, 1) = ((MR_Box) (Var_28));
  }
  XmlName_21 = check_hlds__xml_documentation__name_to_xml_1_f_0(Name_11);
  FileName_59 = ((MR_String) ((MR_hl_field(0, Context_14, (MR_Integer) 0))));
  LineNumber_60 = ((MR_Integer) ((MR_hl_field(0, Context_14, (MR_Integer) 1))));
  {
    Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_72, 0) = ((MR_Box) (FileName_59));
  }
  {
    Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_71, 0) = ((MR_Box) (Var_72));
    MR_hl_field(1, Var_71, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_64 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_64, 0) = ((MR_Box) ((MR_String) "filename"));
    MR_hl_field(0, Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Var_64, 2) = ((MR_Box) (Var_71));
  }
  Var_77 = mercury__string__int_to_string_1_f_0(LineNumber_60);
  {
    Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_76, 0) = ((MR_Box) (Var_77));
  }
  {
    Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_75, 0) = ((MR_Box) (Var_76));
    MR_hl_field(1, Var_75, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_67 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_67, 0) = ((MR_Box) ((MR_String) "line"));
    MR_hl_field(0, Var_67, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Var_67, 2) = ((MR_Box) (Var_75));
  }
  {
    Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_66, 0) = ((MR_Box) (Var_67));
    MR_hl_field(1, Var_66, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_63, 0) = ((MR_Box) (Var_64));
    MR_hl_field(1, Var_63, 1) = ((MR_Box) (Var_66));
  }
  {
    XmlContext_22 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, XmlContext_22, 0) = ((MR_Box) ((MR_String) "context"));
    MR_hl_field(0, XmlContext_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, XmlContext_22, 2) = ((MR_Box) (Var_63));
  }
  {
    Var_31 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_31, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_7[1]));
    MR_hl_field(0, Var_31, 1) = ((MR_Box) (check_hlds__xml_documentation__constructor_to_xml_3_f_0_1));
    MR_hl_field(0, Var_31, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_31, 3) = ((MR_Box) (C_5));
    MR_hl_field(0, Var_31, 4) = ((MR_Box) (TVarset_6));
  }
  Var_80 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0), (MR_Word) (&mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0), Var_31, Args_12);
  {
    XmlArgs_23 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, XmlArgs_23, 0) = ((MR_Box) ((MR_String) "ctor_args"));
    MR_hl_field(0, XmlArgs_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, XmlArgs_23, 2) = ((MR_Box) (Var_80));
  }
  {
    Var_33 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_33, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_6[1]));
    MR_hl_field(0, Var_33, 1) = ((MR_Box) (check_hlds__xml_documentation__constructor_to_xml_3_f_0_2));
    MR_hl_field(0, Var_33, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_33, 3) = ((MR_Box) (TVarset_6));
  }
  Var_84 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__xml_documentation_scalar_common_1[1]), (MR_Word) (&mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0), Var_33, ExistQVars_15);
  {
    XmlExistQVars_24 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, XmlExistQVars_24, 0) = ((MR_Box) ((MR_String) "ctor_exist_vars"));
    MR_hl_field(0, XmlExistQVars_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, XmlExistQVars_24, 2) = ((MR_Box) (Var_84));
  }
  {
    Var_35 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_35, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_6[2]));
    MR_hl_field(0, Var_35, 1) = ((MR_Box) (check_hlds__xml_documentation__constructor_to_xml_3_f_0_3));
    MR_hl_field(0, Var_35, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_35, 3) = ((MR_Box) (TVarset_6));
  }
  Var_88 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0), Var_35, Constraints_16);
  {
    XmlConstraints_25 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, XmlConstraints_25, 0) = ((MR_Box) ((MR_String) "ctor_constraints"));
    MR_hl_field(0, XmlConstraints_25, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, XmlConstraints_25, 2) = ((MR_Box) (Var_88));
  }
  {
    Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_37, 0) = ((MR_Box) (Id_20));
    MR_hl_field(1, Var_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_43, 0) = ((MR_Box) (XmlConstraints_25));
    MR_hl_field(1, Var_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_42, 0) = ((MR_Box) (XmlExistQVars_24));
    MR_hl_field(1, Var_42, 1) = ((MR_Box) (Var_43));
  }
  {
    Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_41, 0) = ((MR_Box) (XmlArgs_23));
    MR_hl_field(1, Var_41, 1) = ((MR_Box) (Var_42));
  }
  {
    Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_40, 0) = ((MR_Box) (XmlContext_22));
    MR_hl_field(1, Var_40, 1) = ((MR_Box) (Var_41));
  }
  {
    Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_39, 0) = ((MR_Box) (XmlName_21));
    MR_hl_field(1, Var_39, 1) = ((MR_Box) (Var_40));
  }
  {
    Xml0_26 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Xml0_26, 0) = ((MR_Box) ((MR_String) "constructor"));
    MR_hl_field(0, Xml0_26, 1) = ((MR_Box) (Var_37));
    MR_hl_field(0, Xml0_26, 2) = ((MR_Box) (Var_39));
  }
  Xml_8 = check_hlds__xml_documentation__maybe_add_comment_3_f_0(C_5, Context_14, Xml0_26);
  return Xml_8;
}

static MR_Box MR_CALL 
check_hlds__xml_documentation__type_documentation_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_Xml_6;

  conv0_Xml_6 = check_hlds__xml_documentation__type_param_to_xml_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Xml_6));
  return wrapper_arg_2;
}

static void MR_CALL 
check_hlds__xml_documentation__type_documentation_5_p_0(
  MR_Word C_6,
  MR_Word HeadVar__2_2,
  MR_Word TypeDefn_9,
  MR_Word STATE_VARIABLE_Xmls_0_25,
  MR_Word * STATE_VARIABLE_Xmls_26)
{
  MR_bool succeeded;
  MR_Word TypeName_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Integer TypeArity_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
  MR_Word TypeStatus_11;
  MR_Word DefinedInThisModule_12;

  hlds__hlds_data__get_type_defn_status_2_p_0(TypeDefn_9, &TypeStatus_11);
  DefinedInThisModule_12 = hlds__status__type_status_defined_in_this_module_1_f_0(TypeStatus_11);
  switch (DefinedInThisModule_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_Xmls_26 = STATE_VARIABLE_Xmls_0_25;
      break;
    case (MR_Integer) 1:
      {
        MR_Word TypeBody_13;
        MR_Word TVarset_14;
        MR_Word Context_15;
        MR_Word TParams_16;
        MR_Word XmlName_17;
        MR_Word XmlTypeParams_18;
        MR_Word XmlVisibility_19;
        MR_String Tag_20;
        MR_Word Id_21;
        MR_Word Children_22;
        MR_Word Xml0_23;
        MR_Word Xml_24;
        MR_Word Var_28;
        MR_String Var_30;
        MR_Word Var_32;
        MR_Word Var_33;
        MR_Word Var_34;
        MR_Word Var_35;
        MR_Word Var_36;
        MR_Word Var_37;
        MR_Word Var_41;
        MR_String Visibility_44;
        MR_Word Var_49;
        MR_Word Var_50;
        MR_String Var_57;
        MR_String Var_58;
        MR_String Var_60;
        MR_String Var_61;
        MR_String Var_63;
        MR_String FileName_64;
        MR_Integer LineNumber_65;
        MR_Word Var_68;
        MR_Word Var_69;
        MR_Word Var_71;
        MR_Word Var_72;
        MR_Word Var_76;
        MR_Word Var_77;
        MR_Word Var_80;
        MR_Word Var_81;
        MR_String Var_82;
        MR_Word Var_46;

        hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_9, &TypeBody_13);
        hlds__hlds_data__get_type_defn_tvarset_2_p_0(TypeDefn_9, &TVarset_14);
        hlds__hlds_data__get_type_defn_context_2_p_0(TypeDefn_9, &Context_15);
        hlds__hlds_data__get_type_defn_tparams_2_p_0(TypeDefn_9, &TParams_16);
        XmlName_17 = check_hlds__xml_documentation__name_to_xml_1_f_0(TypeName_7);
        {
          Var_28 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_28, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_6[1]));
          MR_hl_field(0, Var_28, 1) = ((MR_Box) (check_hlds__xml_documentation__type_documentation_5_p_0_1));
          MR_hl_field(0, Var_28, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_28, 3) = ((MR_Box) (TVarset_14));
        }
        Var_41 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__xml_documentation_scalar_common_1[1]), (MR_Word) (&mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0), Var_28, TParams_16);
        {
          XmlTypeParams_18 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, XmlTypeParams_18, 0) = ((MR_Box) ((MR_String) "type_params"));
          MR_hl_field(0, XmlTypeParams_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, XmlTypeParams_18, 2) = ((MR_Box) (Var_41));
        }
        Var_46 = hlds__status__type_status_defined_in_impl_section_1_f_0(TypeStatus_11);
        succeeded = (Var_46 == (MR_Integer) 1);
        if (succeeded)
        {
          MR_Word Var_47 = (MR_Word) (TypeStatus_11);

          succeeded = (Var_47 == (MR_Word) ((MR_Unsigned) 20U));
          if (succeeded)
            Visibility_44 = (MR_String) "abstract";
          else
            Visibility_44 = (MR_String) "implementation";
        }
        else
          Visibility_44 = (MR_String) "interface";
        {
          Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_50, 0) = ((MR_Box) (Visibility_44));
        }
        {
          Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_49, 0) = ((MR_Box) (Var_50));
          MR_hl_field(1, Var_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          XmlVisibility_19 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, XmlVisibility_19, 0) = ((MR_Box) ((MR_String) "visibility"));
          MR_hl_field(0, XmlVisibility_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, XmlVisibility_19, 2) = ((MR_Box) (Var_49));
        }
        switch (MR_tag((MR_Word) TypeBody_13)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Tag_20 = (MR_String) "du_type";
            break;
          case (MR_Integer) 1:
            Tag_20 = (MR_String) "foreign_type";
            break;
          case (MR_Integer) 2:
            Tag_20 = (MR_String) "eqv_type";
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, TypeBody_13, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                Tag_20 = (MR_String) "solver_type";
                break;
              case (MR_Integer) 1:
                Tag_20 = (MR_String) "abstract_type";
                break;
            }
            break;
        }
        Var_63 = mdbcomp__sym_name__sym_name_to_string_1_f_0(TypeName_7);
        Var_61 = mercury__string__f_43_43_2_f_0((MR_String) ".", Var_63);
        Var_57 = mercury__string__f_43_43_2_f_0((MR_String) "type", Var_61);
        Var_60 = mercury__string__int_to_string_1_f_0(TypeArity_8);
        Var_58 = mercury__string__f_43_43_2_f_0((MR_String) "-", Var_60);
        Var_30 = mercury__string__f_43_43_2_f_0(Var_57, Var_58);
        {
          Id_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Id_21, 0) = ((MR_Box) ((MR_String) "id"));
          MR_hl_field(0, Id_21, 1) = ((MR_Box) (Var_30));
        }
        FileName_64 = ((MR_String) ((MR_hl_field(0, Context_15, (MR_Integer) 0))));
        LineNumber_65 = ((MR_Integer) ((MR_hl_field(0, Context_15, (MR_Integer) 1))));
        {
          Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_77, 0) = ((MR_Box) (FileName_64));
        }
        {
          Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_76, 0) = ((MR_Box) (Var_77));
          MR_hl_field(1, Var_76, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_69 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_69, 0) = ((MR_Box) ((MR_String) "filename"));
          MR_hl_field(0, Var_69, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Var_69, 2) = ((MR_Box) (Var_76));
        }
        Var_82 = mercury__string__int_to_string_1_f_0(LineNumber_65);
        {
          Var_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_81, 0) = ((MR_Box) (Var_82));
        }
        {
          Var_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_80, 0) = ((MR_Box) (Var_81));
          MR_hl_field(1, Var_80, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_72 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_72, 0) = ((MR_Box) ((MR_String) "line"));
          MR_hl_field(0, Var_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Var_72, 2) = ((MR_Box) (Var_80));
        }
        {
          Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_71, 0) = ((MR_Box) (Var_72));
          MR_hl_field(1, Var_71, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_68, 0) = ((MR_Box) (Var_69));
          MR_hl_field(1, Var_68, 1) = ((MR_Box) (Var_71));
        }
        {
          Var_35 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_35, 0) = ((MR_Box) ((MR_String) "context"));
          MR_hl_field(0, Var_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Var_35, 2) = ((MR_Box) (Var_68));
        }
        Var_36 = check_hlds__xml_documentation__type_body_to_xml_3_f_0(C_6, TVarset_14, TypeBody_13);
        {
          Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_34, 0) = ((MR_Box) (Var_35));
          MR_hl_field(1, Var_34, 1) = ((MR_Box) (Var_36));
        }
        {
          Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_33, 0) = ((MR_Box) (XmlVisibility_19));
          MR_hl_field(1, Var_33, 1) = ((MR_Box) (Var_34));
        }
        {
          Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_32, 0) = ((MR_Box) (XmlTypeParams_18));
          MR_hl_field(1, Var_32, 1) = ((MR_Box) (Var_33));
        }
        {
          Children_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Children_22, 0) = ((MR_Box) (XmlName_17));
          MR_hl_field(1, Children_22, 1) = ((MR_Box) (Var_32));
        }
        {
          Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_37, 0) = ((MR_Box) (Id_21));
          MR_hl_field(1, Var_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Xml0_23 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Xml0_23, 0) = ((MR_Box) (Tag_20));
          MR_hl_field(0, Xml0_23, 1) = ((MR_Box) (Var_37));
          MR_hl_field(0, Xml0_23, 2) = ((MR_Box) (Children_22));
        }
        Xml_24 = check_hlds__xml_documentation__maybe_add_comment_3_f_0(C_6, Context_15, Xml0_23);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Xmls_26 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Xml_24));
          MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Xmls_0_25));
        }
      }
      break;
  }
}

static MR_Box MR_CALL 
check_hlds__xml_documentation__type_body_to_xml_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_Xml_8;

  conv0_Xml_8 = check_hlds__xml_documentation__constructor_to_xml_3_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Xml_8));
  return wrapper_arg_2;
}

static MR_Word MR_CALL 
check_hlds__xml_documentation__type_body_to_xml_3_f_0(
  MR_Word C_5,
  MR_Word TVarSet_6,
  MR_Word TypeDefnBody_7)
{
  MR_Word Xmls_8;

  switch (MR_tag((MR_Word) TypeDefnBody_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word OoMCtors_9;
        MR_Word Ctors_14;
        MR_Word Var_19 = (MR_Word) ((MR_Word) (TypeDefnBody_7));
        MR_Word Var_20;
        MR_Word Var_22;
        MR_Word Var_47;

        OoMCtors_9 = ((MR_Word) ((MR_hl_field(0, Var_19, (MR_Integer) 0))));
        Ctors_14 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), OoMCtors_9);
        {
          Var_22 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_22, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_7[0]));
          MR_hl_field(0, Var_22, 1) = ((MR_Box) (check_hlds__xml_documentation__type_body_to_xml_3_f_0_1));
          MR_hl_field(0, Var_22, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_22, 3) = ((MR_Box) (C_5));
          MR_hl_field(0, Var_22, 4) = ((MR_Box) (TVarSet_6));
        }
        Var_47 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), (MR_Word) (&mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0), Var_22, Ctors_14);
        {
          Var_20 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_20, 0) = ((MR_Box) ((MR_String) "constructors"));
          MR_hl_field(0, Var_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Var_20, 2) = ((MR_Box) (Var_47));
        }
        {
          Xmls_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Xmls_8, 0) = ((MR_Box) (Var_20));
          MR_hl_field(1, Xmls_8, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
    case (MR_Integer) 1:
      Xmls_8 = (MR_Word) (MR_mkword(1, &check_hlds__xml_documentation_scalar_common_1[7]));
      break;
    case (MR_Integer) 2:
      {
        MR_Word EqvType_15 = ((MR_Word) ((MR_hl_field(2, TypeDefnBody_7, (MR_Integer) 0))));
        MR_Word Var_24;
        MR_Word Var_27;
        MR_Word Var_28;

        Var_28 = check_hlds__xml_documentation__mer_type_to_xml_2_f_0(TVarSet_6, EqvType_15);
        {
          Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_27, 0) = ((MR_Box) (Var_28));
          MR_hl_field(1, Var_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_24 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_24, 0) = ((MR_Box) ((MR_String) "equivalent_type"));
          MR_hl_field(0, Var_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Var_24, 2) = ((MR_Box) (Var_27));
        }
        {
          Xmls_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Xmls_8, 0) = ((MR_Box) (Var_24));
          MR_hl_field(1, Xmls_8, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, TypeDefnBody_7, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          Xmls_8 = (MR_Word) (MR_mkword(1, &check_hlds__xml_documentation_scalar_common_1[8]));
          break;
        case (MR_Integer) 1:
          Xmls_8 = (MR_Word) (MR_mkword(1, &check_hlds__xml_documentation_scalar_common_1[6]));
          break;
      }
      break;
  }
  return Xmls_8;
}

static MR_Box MR_CALL 
check_hlds__xml_documentation__mer_type_to_xml_2_f_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv4_HeadVar__3_3;

  conv4_HeadVar__3_3 = check_hlds__xml_documentation__mer_type_to_xml_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv4_HeadVar__3_3));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
check_hlds__xml_documentation__mer_type_to_xml_2_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv3_HeadVar__3_3;

  conv3_HeadVar__3_3 = check_hlds__xml_documentation__mer_type_to_xml_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__3_3));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
check_hlds__xml_documentation__mer_type_to_xml_2_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__3_3;

  conv2_HeadVar__3_3 = check_hlds__xml_documentation__mer_type_to_xml_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__3_3));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
check_hlds__xml_documentation__mer_type_to_xml_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = check_hlds__xml_documentation__mer_type_to_xml_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_2;
}

static MR_Word MR_CALL 
check_hlds__xml_documentation__mer_type_to_xml_2_f_0(
  MR_Word TVarset_1,
  MR_Word HeadVar__2_2)
{
  MR_Word HeadVar__3_3;

  switch (MR_tag((MR_Word) HeadVar__2_2)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word TVar_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));

        HeadVar__3_3 = check_hlds__xml_documentation__type_param_to_xml_2_f_0(TVarset_1, TVar_5);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word TypeName_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
        MR_Word Args_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
        MR_Word Ref_12;
        MR_Word XmlName_13;
        MR_Word XmlArgs_14;
        MR_String Var_16;
        MR_Integer Var_18;
        MR_Word Var_20;
        MR_Word Var_22;
        MR_Word Var_24;
        MR_Word Var_25;
        MR_String Var_113;
        MR_String Var_114;
        MR_String Var_116;
        MR_String Var_117;
        MR_String Var_119;
        MR_Word Var_121;

        Var_18 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Args_9);
        Var_119 = mdbcomp__sym_name__sym_name_to_string_1_f_0(TypeName_8);
        Var_117 = mercury__string__f_43_43_2_f_0((MR_String) ".", Var_119);
        Var_113 = mercury__string__f_43_43_2_f_0((MR_String) "type", Var_117);
        Var_116 = mercury__string__int_to_string_1_f_0(Var_18);
        Var_114 = mercury__string__f_43_43_2_f_0((MR_String) "-", Var_116);
        Var_16 = mercury__string__f_43_43_2_f_0(Var_113, Var_114);
        {
          Ref_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Ref_12, 0) = ((MR_Box) ((MR_String) "ref"));
          MR_hl_field(0, Ref_12, 1) = ((MR_Box) (Var_16));
        }
        XmlName_13 = check_hlds__xml_documentation__name_to_xml_1_f_0(TypeName_8);
        {
          Var_20 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_20, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_6[0]));
          MR_hl_field(0, Var_20, 1) = ((MR_Box) (check_hlds__xml_documentation__mer_type_to_xml_2_f_0_1));
          MR_hl_field(0, Var_20, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_20, 3) = ((MR_Box) (TVarset_1));
        }
        Var_121 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0), Var_20, Args_9);
        {
          XmlArgs_14 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, XmlArgs_14, 0) = ((MR_Box) ((MR_String) "type_args"));
          MR_hl_field(0, XmlArgs_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, XmlArgs_14, 2) = ((MR_Box) (Var_121));
        }
        {
          Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_22, 0) = ((MR_Box) (Ref_12));
          MR_hl_field(1, Var_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_25, 0) = ((MR_Box) (XmlArgs_14));
          MR_hl_field(1, Var_25, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_24, 0) = ((MR_Box) (XmlName_13));
          MR_hl_field(1, Var_24, 1) = ((MR_Box) (Var_25));
        }
        {
          HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, HeadVar__3_3, 0) = ((MR_Box) ((MR_String) "type"));
          MR_hl_field(0, HeadVar__3_3, 1) = ((MR_Box) (Var_22));
          MR_hl_field(0, HeadVar__3_3, 2) = ((MR_Box) (Var_24));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Var_107 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));

        switch (MR_tag((MR_Word) Var_107)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(Var_107)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                HeadVar__3_3 = (MR_Word) (&check_hlds__xml_documentation_scalar_common_2[3]);
                break;
              case (MR_Integer) 1:
                HeadVar__3_3 = (MR_Word) (&check_hlds__xml_documentation_scalar_common_2[4]);
                break;
              case (MR_Integer) 2:
                HeadVar__3_3 = (MR_Word) (&check_hlds__xml_documentation_scalar_common_2[2]);
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word IntType_28 = ((MR_Unsigned) ((MR_hl_field(1, Var_107, (MR_Integer) 0))) & (MR_Integer) 15);
              MR_String IntTypeString_30;

              parse_tree__prog_data__int_type_module_name_2_p_0(IntType_28, &IntTypeString_30);
              {
                HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, HeadVar__3_3, 0) = ((MR_Box) (IntTypeString_30));
                MR_hl_field(0, HeadVar__3_3, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(0, HeadVar__3_3, 2) = ((MR_Box) ((MR_Unsigned) 0U));
              }
            }
            break;
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Types_76 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
            MR_Word XmlArgs_79;
            MR_Word Var_81;
            MR_Word Var_84;
            MR_Word Var_138;

            {
              Var_81 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_81, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_6[0]));
              MR_hl_field(0, Var_81, 1) = ((MR_Box) (check_hlds__xml_documentation__mer_type_to_xml_2_f_0_4));
              MR_hl_field(0, Var_81, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_81, 3) = ((MR_Box) (TVarset_1));
            }
            Var_138 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0), Var_81, Types_76);
            {
              XmlArgs_79 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, XmlArgs_79, 0) = ((MR_Box) ((MR_String) "tuple_types"));
              MR_hl_field(0, XmlArgs_79, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, XmlArgs_79, 2) = ((MR_Box) (Var_138));
            }
            {
              Var_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_84, 0) = ((MR_Box) (XmlArgs_79));
              MR_hl_field(1, Var_84, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, HeadVar__3_3, 0) = ((MR_Box) ((MR_String) "tuple"));
              MR_hl_field(0, HeadVar__3_3, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, HeadVar__3_3, 2) = ((MR_Box) (Var_84));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word PorF_50 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word Types_51 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
            MR_Word XmlChildren_56;

            switch (PorF_50) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word ArgTypes_57;
                  MR_Word ResultType_58;
                  MR_Word XmlReturn_59;
                  MR_Word Var_64;
                  MR_Word Var_67;
                  MR_Word Var_68;
                  MR_Word Var_70;
                  MR_Word XmlTypes_74;
                  MR_Word Var_125;
                  MR_Box conv1_ResultType_58;

                  mercury__list__det_split_last_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Types_51, &ArgTypes_57, &conv1_ResultType_58);
                  ResultType_58 = ((MR_Word) (conv1_ResultType_58));
                  {
                    Var_64 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_64, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_6[0]));
                    MR_hl_field(0, Var_64, 1) = ((MR_Box) (check_hlds__xml_documentation__mer_type_to_xml_2_f_0_2));
                    MR_hl_field(0, Var_64, 2) = ((MR_Box) ((MR_Integer) 1));
                    MR_hl_field(0, Var_64, 3) = ((MR_Box) (TVarset_1));
                  }
                  Var_125 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0), Var_64, ArgTypes_57);
                  {
                    XmlTypes_74 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, XmlTypes_74, 0) = ((MR_Box) ((MR_String) "higher_order_type_args"));
                    MR_hl_field(0, XmlTypes_74, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(0, XmlTypes_74, 2) = ((MR_Box) (Var_125));
                  }
                  Var_68 = check_hlds__xml_documentation__mer_type_to_xml_2_f_0(TVarset_1, ResultType_58);
                  {
                    Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_67, 0) = ((MR_Box) (Var_68));
                    MR_hl_field(1, Var_67, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    XmlReturn_59 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, XmlReturn_59, 0) = ((MR_Box) ((MR_String) "return_type"));
                    MR_hl_field(0, XmlReturn_59, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(0, XmlReturn_59, 2) = ((MR_Box) (Var_67));
                  }
                  {
                    Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_70, 0) = ((MR_Box) (XmlReturn_59));
                    MR_hl_field(1, Var_70, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    XmlChildren_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, XmlChildren_56, 0) = ((MR_Box) (XmlTypes_74));
                    MR_hl_field(1, XmlChildren_56, 1) = ((MR_Box) (Var_70));
                  }
                }
                break;
              case (MR_Integer) 0:
                {
                  MR_Word XmlTypes_55;
                  MR_Word Var_61;
                  MR_Word Var_129;

                  {
                    Var_61 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_61, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_6[0]));
                    MR_hl_field(0, Var_61, 1) = ((MR_Box) (check_hlds__xml_documentation__mer_type_to_xml_2_f_0_3));
                    MR_hl_field(0, Var_61, 2) = ((MR_Box) ((MR_Integer) 1));
                    MR_hl_field(0, Var_61, 3) = ((MR_Box) (TVarset_1));
                  }
                  Var_129 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0), Var_61, Types_51);
                  {
                    XmlTypes_55 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, XmlTypes_55, 0) = ((MR_Box) ((MR_String) "higher_order_type_args"));
                    MR_hl_field(0, XmlTypes_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(0, XmlTypes_55, 2) = ((MR_Box) (Var_129));
                  }
                  {
                    XmlChildren_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, XmlChildren_56, 0) = ((MR_Box) (XmlTypes_55));
                    MR_hl_field(1, XmlChildren_56, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                }
                break;
            }
            {
              HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, HeadVar__3_3, 0) = ((MR_Box) ((MR_String) "higher_order_type"));
              MR_hl_field(0, HeadVar__3_3, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, HeadVar__3_3, 2) = ((MR_Box) (XmlChildren_56));
            }
          }
          break;
        case (MR_Integer) 2:
          HeadVar__3_3 = (MR_Word) (&check_hlds__xml_documentation_scalar_common_2[11]);
          break;
        case (MR_Integer) 3:
          HeadVar__3_3 = (MR_Word) (&check_hlds__xml_documentation_scalar_common_2[12]);
          break;
      }
      break;
  }
  return HeadVar__3_3;
}

static MR_Word MR_CALL 
check_hlds__xml_documentation__type_param_to_xml_2_f_0(
  MR_Word TVarset_4,
  MR_Word TVar_5)
{
  MR_Word Xml_6;
  MR_String TVarName_7;
  MR_Word Var_11;
  MR_Word Var_12;

  TVarName_7 = mercury__varset__lookup_name_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVarset_4, TVar_5);
  {
    Var_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_12, 0) = ((MR_Box) (TVarName_7));
  }
  {
    Var_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_11, 0) = ((MR_Box) (Var_12));
    MR_hl_field(1, Var_11, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Xml_6 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Xml_6, 0) = ((MR_Box) ((MR_String) "type_variable"));
    MR_hl_field(0, Xml_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Xml_6, 2) = ((MR_Box) (Var_11));
  }
  return Xml_6;
}

static void MR_CALL 
check_hlds__xml_documentation__maybe_add_import_documentation_5_p_0(
  MR_Word BuiltinModuleNames_6,
  MR_Word ModuleName_7,
  MR_Word AvailEntry_8,
  MR_Word STATE_VARIABLE_Xmls_0_17,
  MR_Word * STATE_VARIABLE_Xmls_18)
{
  MR_bool succeeded;

  succeeded = mercury__set__member_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_7)), BuiltinModuleNames_6);
  if (succeeded)
    *STATE_VARIABLE_Xmls_18 = STATE_VARIABLE_Xmls_0_17;
  else
  {
    MR_Word XmlName_10;
    MR_Word Section_11;
    MR_Word ImportOrUse_12;
    MR_Word XmlVisibility_14;
    MR_String ImportOrUseWord_15;
    MR_Word Xml_16;
    MR_Word Var_24;
    MR_Word Var_25;

    XmlName_10 = check_hlds__xml_documentation__name_to_xml_1_f_0(ModuleName_7);
    Section_11 = ((((MR_Unsigned) ((MR_hl_field(0, AvailEntry_8, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    ImportOrUse_12 = ((MR_Unsigned) ((MR_hl_field(0, AvailEntry_8, (MR_Integer) 0))) & (MR_Integer) 1);
    switch (Section_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        XmlVisibility_14 = (MR_Word) (&check_hlds__xml_documentation_scalar_common_2[9]);
        break;
      case (MR_Integer) 0:
        XmlVisibility_14 = (MR_Word) (&check_hlds__xml_documentation_scalar_common_2[10]);
        break;
    }
    switch (ImportOrUse_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ImportOrUseWord_15 = (MR_String) "import";
        break;
      case (MR_Integer) 1:
        ImportOrUseWord_15 = (MR_String) "use";
        break;
    }
    {
      Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_25, 0) = ((MR_Box) (XmlVisibility_14));
      MR_hl_field(1, Var_25, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_24, 0) = ((MR_Box) (XmlName_10));
      MR_hl_field(1, Var_24, 1) = ((MR_Box) (Var_25));
    }
    {
      Xml_16 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Xml_16, 0) = ((MR_Box) (ImportOrUseWord_15));
      MR_hl_field(0, Xml_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Xml_16, 2) = ((MR_Box) (Var_24));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Xmls_18 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Xml_16));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Xmls_0_17));
    }
  }
}

static MR_Word MR_CALL 
check_hlds__xml_documentation__name_to_xml_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;

  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
  {
    MR_Word Module_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_String Name_6 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Var_9;
    MR_Word Var_10;
    MR_String Var_12;
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_22;
    MR_Word Var_23;

    Var_12 = mdbcomp__sym_name__sym_name_to_string_1_f_0(Module_5);
    {
      Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_19, 0) = ((MR_Box) (Var_12));
    }
    {
      Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_18, 0) = ((MR_Box) (Var_19));
      MR_hl_field(1, Var_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_10, 0) = ((MR_Box) ((MR_String) "module"));
      MR_hl_field(0, Var_10, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_18));
    }
    {
      Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_23, 0) = ((MR_Box) (Name_6));
    }
    {
      Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_22, 0) = ((MR_Box) (Var_23));
      MR_hl_field(1, Var_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_14 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_14, 0) = ((MR_Box) ((MR_String) "name"));
      MR_hl_field(0, Var_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Var_14, 2) = ((MR_Box) (Var_22));
    }
    {
      Var_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_13, 0) = ((MR_Box) (Var_14));
      MR_hl_field(1, Var_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_9, 0) = ((MR_Box) (Var_10));
      MR_hl_field(1, Var_9, 1) = ((MR_Box) (Var_13));
    }
    {
      HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, HeadVar__2_2, 0) = ((MR_Box) ((MR_String) "qualified"));
      MR_hl_field(0, HeadVar__2_2, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, HeadVar__2_2, 2) = ((MR_Box) (Var_9));
    }
  }
  else
  {
    MR_String Name_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Var_26;
    MR_Word Var_27;

    {
      Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_27, 0) = ((MR_Box) (Name_3));
    }
    {
      Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_26, 0) = ((MR_Box) (Var_27));
      MR_hl_field(1, Var_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, HeadVar__2_2, 0) = ((MR_Box) ((MR_String) "unqualified"));
      MR_hl_field(0, HeadVar__2_2, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, HeadVar__2_2, 2) = ((MR_Box) (Var_26));
    }
  }
  return HeadVar__2_2;
}

static MR_Word MR_CALL 
check_hlds__xml_documentation__maybe_add_comment_3_f_0(
  MR_Word Comments_5,
  MR_Word Context_6,
  MR_Word Xml_7)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Xml_7)) == (MR_Integer) 0);
  MR_Word HeadVar__4_4;
  MR_String N_8;
  MR_Word As_9;
  MR_Word Cs_10;

  if (succeeded)
  {
    N_8 = ((MR_String) ((MR_hl_field(0, Xml_7, (MR_Integer) 0))));
    As_9 = ((MR_Word) ((MR_hl_field(0, Xml_7, (MR_Integer) 1))));
    Cs_10 = ((MR_Word) ((MR_hl_field(0, Xml_7, (MR_Integer) 2))));
    {
      MR_String Comment_11;
      MR_Integer Line_23 = ((MR_Integer) ((MR_hl_field(0, Context_6, (MR_Integer) 1))));
      MR_String C_24;
      MR_String Comment0_26;
      MR_String RestComment_27;
      MR_Word Var_28 = (MR_Word) (Comments_5);
      MR_Word Var_29;
      MR_Integer Var_30;
      MR_Integer Var_31;
      MR_Box conv0_Var_29;

      succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&check_hlds__xml_documentation__check_hlds__xml_documentation__type_ctor_info_line_type_0), Var_28, Line_23, &conv0_Var_29);
      if (succeeded)
      {
        Var_29 = ((MR_Word) (conv0_Var_29));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Var_29)) == (MR_Integer) 2);
        if (succeeded)
        {
          Comment0_26 = ((MR_String) ((MR_hl_field(2, Var_29, (MR_Integer) 0))));
          Var_31 = (MR_Integer) 1;
          Var_30 = (MR_Integer) ((MR_Unsigned) Line_23 + (MR_Unsigned) Var_31);
          RestComment_27 = check_hlds__xml_documentation__get_comment_forwards_2_f_0(Comments_5, Var_30);
          C_24 = mercury__string__f_43_43_2_f_0(Comment0_26, RestComment_27);
          succeeded = MR_TRUE;
        }
      }
      if (succeeded)
      {
        Comment_11 = C_24;
        succeeded = (strcmp(Comment_11, (MR_String) "") == 0);
        succeeded = !(succeeded);
      }
      else
      {
        MR_String C_25;
        MR_Word Var_35 = (MR_Word) (Comments_5);
        MR_Integer Var_36 = (MR_Integer) ((MR_Unsigned) Line_23 - (MR_Unsigned) 1);
        MR_Integer Var_39;
        MR_Integer Var_40;
        MR_Word Var_43;
        MR_Box conv1_Var_43;

        succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&check_hlds__xml_documentation__check_hlds__xml_documentation__type_ctor_info_line_type_0), Var_35, Var_36, &conv1_Var_43);
        if (succeeded)
        {
          Var_43 = ((MR_Word) (conv1_Var_43));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) Var_43)) == (MR_Integer) 1);
          if (succeeded)
          {
            Var_40 = (MR_Integer) 1;
            Var_39 = (MR_Integer) ((MR_Unsigned) Line_23 - (MR_Unsigned) Var_40);
            C_25 = check_hlds__xml_documentation__get_comment_backwards_2_f_0(Comments_5, Var_39);
            succeeded = MR_TRUE;
          }
        }
        if (succeeded)
        {
          Comment_11 = C_25;
          succeeded = (strcmp(Comment_11, (MR_String) "") == 0);
          succeeded = !(succeeded);
        }
        else
        {
          succeeded = (strcmp((MR_String) "", (MR_String) "") == 0);
          succeeded = !(succeeded);
          if (succeeded)
          {
            Comment_11 = (MR_String) "";
            succeeded = MR_TRUE;
          }
        }
      }
      if (succeeded)
      {
        MR_Word Var_12;
        MR_Word Var_13;
        MR_Word Var_16;
        MR_Word Var_17;

        {
          Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_17, 0) = ((MR_Box) (Comment_11));
        }
        {
          Var_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_16, 0) = ((MR_Box) (Var_17));
          MR_hl_field(1, Var_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_13 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_13, 0) = ((MR_Box) ((MR_String) "comment"));
          MR_hl_field(0, Var_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Var_13, 2) = ((MR_Box) (Var_16));
        }
        {
          Var_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_12, 0) = ((MR_Box) (Var_13));
          MR_hl_field(1, Var_12, 1) = ((MR_Box) (Cs_10));
        }
        {
          HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, HeadVar__4_4, 0) = ((MR_Box) (N_8));
          MR_hl_field(0, HeadVar__4_4, 1) = ((MR_Box) (As_9));
          MR_hl_field(0, HeadVar__4_4, 2) = ((MR_Box) (Var_12));
        }
      }
      else
        HeadVar__4_4 = Xml_7;
    }
  }
  else
  {
    MR_Box conv2_HeadVar__4_4;

    conv2_HeadVar__4_4 = mercury__require__unexpected_2_f_0((MR_Word) (&mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0), (MR_String) "function \140check_hlds.xml_documentation.maybe_add_comment\'/3", (MR_String) "not an element");
    HeadVar__4_4 = ((MR_Word) (conv2_HeadVar__4_4));
  }
  return HeadVar__4_4;
}

static MR_String MR_CALL 
check_hlds__xml_documentation__get_comment_backwards_2_f_0(
  MR_Word Comments_4,
  MR_Integer Line_5)
{
  MR_bool succeeded;
  MR_String Comment_6;
  MR_Word LineType_7;
  MR_Word Var_11 = (MR_Word) (Comments_4);
  MR_Box conv0_LineType_7;

  succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&check_hlds__xml_documentation__check_hlds__xml_documentation__type_ctor_info_line_type_0), Var_11, Line_5, &conv0_LineType_7);
  if (succeeded)
  {
    LineType_7 = ((MR_Word) (conv0_LineType_7));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    switch (MR_tag((MR_Word) LineType_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 2:
        Comment_6 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        {
          MR_String CurrentComment_8 = ((MR_String) ((MR_hl_field(1, LineType_7, (MR_Integer) 0))));
          MR_String CommentAbove_9;
          MR_Integer Var_12 = (MR_Integer) ((MR_Unsigned) Line_5 - (MR_Unsigned) 1);

          CommentAbove_9 = check_hlds__xml_documentation__get_comment_backwards_2_f_0(Comments_4, Var_12);
          Comment_6 = mercury__string__f_43_43_2_f_0(CommentAbove_9, CurrentComment_8);
        }
        break;
    }
  else
    Comment_6 = (MR_String) "";
  return Comment_6;
}

static MR_bool MR_CALL 
check_hlds__xml_documentation__is_not_comment_char_1_p_0(
  MR_Char C_2)
{
  MR_bool succeeded = (C_2 != (MR_Char) 37);

  return succeeded;
}

void MR_CALL 
check_hlds__xml_documentation__xml_documentation_4_p_0(
  MR_Word ProgressStream_5,
  MR_Word ModuleInfo_6)
{
  MR_Word ModuleName_8;
  MR_String XmlFileName_9;
  MR_Word MaybeSrcFileName_10;

  hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_6, &ModuleName_8);
  parse_tree__file_names__module_name_to_cur_dir_file_name_3_p_0((MR_Integer) 15, ModuleName_8, &XmlFileName_9);
  parse_tree__source_file_map__lookup_module_source_file_4_p_0(ModuleName_8, &MaybeSrcFileName_10);
  if ((MaybeSrcFileName_10 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.xml_documentation.xml_documentation\'/4", (MR_String) "no source file name");
      return;
    }
  else
  {
    MR_String SrcFileName_11 = ((MR_String) ((MR_hl_field(1, MaybeSrcFileName_10, (MR_Integer) 0))));
    MR_Word SrcResult_12;

    mercury__io__open_input_4_p_0(SrcFileName_11, &SrcResult_12);
    if (((MR_tag((MR_Word) SrcResult_12)) == (MR_Integer) 1))
    {
      MR_Word SrcErr_20 = ((MR_Word) ((MR_hl_field(1, SrcResult_12, (MR_Integer) 0))));

      libs__file_util__report_unable_to_open_file_5_p_0(ProgressStream_5, SrcFileName_11, SrcErr_20);
    }
    else
    {
      MR_Word SrcStream_13 = ((MR_Word) ((MR_hl_field(0, SrcResult_12, (MR_Integer) 0))));
      MR_Word Comments_14;
      MR_String ModuleComment_15;
      MR_Word XmlOpenResult_16;
      MR_Word Var_26;
      MR_Word Var_28;

      Var_28 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&check_hlds__xml_documentation__check_hlds__xml_documentation__type_ctor_info_line_type_0));
      Var_26 = (MR_Word) (Var_28);
      check_hlds__xml_documentation__build_comments_5_p_0(SrcStream_13, Var_26, &Comments_14);
      ModuleComment_15 = check_hlds__xml_documentation__get_comment_forwards_2_f_0(Comments_14, (MR_Integer) 1);
      mercury__io__open_output_4_p_0(XmlFileName_9, &XmlOpenResult_16);
      if (((MR_tag((MR_Word) XmlOpenResult_16)) == (MR_Integer) 1))
      {
        MR_Word Err_19 = ((MR_Word) ((MR_hl_field(1, XmlOpenResult_16, (MR_Integer) 0))));

        libs__file_util__report_unable_to_open_file_5_p_0(ProgressStream_5, XmlFileName_9, Err_19);
      }
      else
      {
        MR_Word XmlStream_17 = ((MR_Word) ((MR_hl_field(0, XmlOpenResult_16, (MR_Integer) 0))));
        MR_Word MIXmlDoc_18;
        MR_Box conv0_STATE_VARIABLE_IO_22;

        {
          MIXmlDoc_18 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, MIXmlDoc_18, 0) = ((MR_Box) (Comments_14));
          MR_hl_field(0, MIXmlDoc_18, 1) = ((MR_Box) (ModuleComment_15));
          MR_hl_field(0, MIXmlDoc_18, 2) = ((MR_Box) (ModuleInfo_6));
        }
        mercury__term_to_xml__write_xml_doc_4_p_0((MR_Word) (&check_hlds__xml_documentation_scalar_common_1[0]), (MR_Word) (&check_hlds__xml_documentation_scalar_common_4[0]), ((MR_Box) (XmlStream_17)), ((MR_Box) (MIXmlDoc_18)), ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_22);
      }
    }
  }
}

static MR_String MR_CALL 
check_hlds__xml_documentation__get_comment_forwards_2_f_0(
  MR_Word Comments_4,
  MR_Integer Line_5)
{
  MR_bool succeeded;
  MR_String Comment_6;
  MR_Word LineType_7;
  MR_Word Var_11 = (MR_Word) (Comments_4);
  MR_Box conv0_LineType_7;

  succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&check_hlds__xml_documentation__check_hlds__xml_documentation__type_ctor_info_line_type_0), Var_11, Line_5, &conv0_LineType_7);
  if (succeeded)
  {
    LineType_7 = ((MR_Word) (conv0_LineType_7));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    switch (MR_tag((MR_Word) LineType_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 2:
        Comment_6 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        {
          MR_String CurrentComment_8 = ((MR_String) ((MR_hl_field(1, LineType_7, (MR_Integer) 0))));
          MR_String CommentBelow_9;
          MR_Integer Var_12 = (MR_Integer) ((MR_Unsigned) Line_5 + (MR_Unsigned) 1);

          CommentBelow_9 = check_hlds__xml_documentation__get_comment_forwards_2_f_0(Comments_4, Var_12);
          Comment_6 = mercury__string__f_43_43_2_f_0(CurrentComment_8, CommentBelow_9);
        }
        break;
    }
  else
    Comment_6 = (MR_String) "";
  return Comment_6;
}

static MR_bool MR_CALL 
check_hlds__xml_documentation__build_comments_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__xml_documentation__is_not_comment_char_1_p_0(((MR_Char) (MR_Word) wrapper_arg_1));
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__xml_documentation__build_comments_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = mercury__char__is_whitespace_1_p_0(((MR_Char) (MR_Word) wrapper_arg_1));
  return succeeded;
}

static void MR_CALL 
check_hlds__xml_documentation__build_comments_5_p_0(
  MR_Word S_6,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer LineNumber_9;
  MR_Word LineResult_10;
  MR_Word STATE_VARIABLE_C_0_13 = (MR_Word) (HeadVar__2_2);
  MR_Word STATE_VARIABLE_C_14;

  mercury__io__get_line_number_4_p_0(S_6, &LineNumber_9);
  mercury__io__read_line_4_p_0(S_6, &LineResult_10);
  switch (MR_tag((MR_Word) LineResult_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_C_14 = STATE_VARIABLE_C_0_13;
      break;
    case (MR_Integer) 1:
      {
        MR_Word Line_11 = ((MR_Word) ((MR_hl_field(1, LineResult_10, (MR_Integer) 0))));
        MR_Word Var_19;
        MR_Word STATE_VARIABLE_C_20_20;
        MR_Word Var_21;
        MR_Word Var_22;
        MR_Word Rest_29;
        MR_Word Decl_30;
        MR_Word Comment_31;

        mercury__list__drop_while_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), (MR_Word) (&check_hlds__xml_documentation_scalar_common_2[7]), Line_11, &Rest_29);
        mercury__list__take_while_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), (MR_Word) (&check_hlds__xml_documentation_scalar_common_2[8]), Rest_29, &Decl_30, &Comment_31);
        if ((Rest_29 == (MR_Word) ((MR_Unsigned) 0U)))
          Var_19 = (MR_Word) ((MR_Unsigned) 0U);
        else
        if ((Comment_31 == (MR_Word) ((MR_Unsigned) 0U)))
          Var_19 = (MR_Word) ((MR_Unsigned) 4U);
        else
        if ((Decl_30 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_String Var_34;

          Var_34 = mercury__string__from_char_list_1_f_0(Comment_31);
          {
            Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_19, 0) = ((MR_Box) (Var_34));
          }
        }
        else
        {
          MR_String Var_35;

          Var_35 = mercury__string__from_char_list_1_f_0(Comment_31);
          {
            Var_19 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Var_19, 0) = ((MR_Box) (Var_35));
          }
        }
        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&check_hlds__xml_documentation__check_hlds__xml_documentation__type_ctor_info_line_type_0), LineNumber_9, ((MR_Box) (Var_19)), STATE_VARIABLE_C_0_13, &STATE_VARIABLE_C_20_20);
        Var_21 = (MR_Word) (STATE_VARIABLE_C_20_20);
        check_hlds__xml_documentation__build_comments_5_p_0(S_6, Var_21, &Var_22);
        STATE_VARIABLE_C_14 = (MR_Word) (Var_22);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word E_12 = ((MR_Word) ((MR_hl_field(2, LineResult_10, (MR_Integer) 0))));
        MR_String Var_26;

        Var_26 = mercury__io__error_message_1_f_0(E_12);
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.xml_documentation.build_comments\'/5", Var_26);
          return;
        }
      }
      break;
  }
  *HeadVar__3_3 = (MR_Word) (STATE_VARIABLE_C_14);
}

static MR_bool MR_CALL 
check_hlds__xml_documentation____Unify____comments_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__xml_documentation____Unify____comments_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__xml_documentation____Compare____comments_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__xml_documentation____Compare____comments_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__xml_documentation____Unify____line_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__xml_documentation____Unify____line_type_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__xml_documentation____Compare____line_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__xml_documentation____Compare____line_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__xml_documentation____Unify____module_info_xml_doc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__xml_documentation____Unify____module_info_xml_doc_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__xml_documentation____Compare____module_info_xml_doc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__xml_documentation____Compare____module_info_xml_doc_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_Box MR_CALL 
check_hlds__xml_documentation__ClassMethod_for_term_to_xml__xmlable____check_hlds__xml_documentation__module_info_xml_doc__arity0______term_to_xml__to_xml_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_Xml_6;

  conv0_Xml_6 = check_hlds__xml_documentation__ClassMethod_for_term_to_xml__xmlable____check_hlds__xml_documentation__module_info_xml_doc__arity0______term_to_xml__to_xml_1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Xml_6));
  return wrapper_arg_2;
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

// :- end_module check_hlds.xml_documentation.
