/*
** Automatically generated from `declarative_tree.m'
** by the Mercury compiler,
** version rotd-2019-06-20
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


// :- module mdb.declarative_tree.
// :- implementation.

/*
INIT mercury__mdb__declarative_tree__init
ENDINIT
*/

#include "mdb.declarative_tree.mih"


#include "mdb.mih"
#include "mdbcomp.mih"
#include "mdb.browser_info.mih"
#include "mdb.browser_term.mih"
#include "mdb.declarative_analyser.mih"
#include "mdb.declarative_debugger.mih"
#include "mdb.declarative_edt.mih"
#include "mdb.declarative_execution.mih"
#include "mdb.declarative_oracle.mih"
#include "mdb.declarative_user.mih"
#include "mdb.help.mih"
#include "mdb.io_action.mih"
#include "mdb.parse.mih"
#include "mdb.term_rep.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "exception.mih"
#include "getopt.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stm_builtin.mih"
#include "store.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"



struct mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0_s {
  MR_bool mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__succeeded;
  MR_Word mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__Args_6;
  jmp_buf mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__commit_0;
  MR_Word mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__Arg_7;
  MR_Box mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__conv0_Arg_7;
};

struct mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0_s {
  MR_Word mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__Atom_2;
  MR_bool mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__succeeded;
  jmp_buf mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__commit_0;
  MR_Word mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__StdUtilModule1_4;
  MR_Word mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__StdUtilModule2_5;
  MR_String mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__Var_16;
  MR_Word mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__Var_18;
  MR_Word mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__Var_19;
};


static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_tree__mdb__declarative_execution__pti_trace_node_1__pseudo_2;

static const MR_FA_PseudoTypeInfo_Struct2 mdb__declarative_tree__pair__pti_pair_2__pseudo_2__pseudo_mdb__declarative_execution__pti_trace_node_1__pseudo_2;

static const MR_FA_TypeInfo_Struct1 mdb__declarative_tree__list__ti_list_1builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_tree__maybe__pti_maybe_1__pseudo_1;

static const MR_PseudoTypeInfo mdb__declarative_tree__mdb__declarative_tree__field_types_annotated_primitive_1_0[6];

static const MR_DuFunctorDesc mdb__declarative_tree__mdb__declarative_tree__du_functor_desc_annotated_primitive_1_0;

static const MR_DuFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__du_stag_ordered_annotated_primitive_1_0[1];

static const MR_DuPtagLayout mdb__declarative_tree__mdb__declarative_tree__du_ptag_ordered_annotated_primitive_1[1];

static const MR_DuFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__du_name_ordered_annotated_primitive_1[1];

static const MR_Integer mdb__declarative_tree__mdb__declarative_tree__functor_number_map_annotated_primitive_1[1];

static const MR_EnumFunctorDesc mdb__declarative_tree__mdb__declarative_tree__enum_functor_desc_contour_type_0_0;

static const MR_EnumFunctorDesc mdb__declarative_tree__mdb__declarative_tree__enum_functor_desc_contour_type_0_1;

static const MR_EnumFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__enum_value_ordered_contour_type_0[2];

static const MR_EnumFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__enum_name_ordered_contour_type_0[2];

static const MR_Integer mdb__declarative_tree__mdb__declarative_tree__functor_number_map_contour_type_0[2];

static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_tree__mdb__declarative_tree__pti_start_loc_1__pseudo_1;

static const MR_FA_TypeInfo_Struct1 mdb__declarative_tree__maybe__ti_maybe_1mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0;

static const MR_FA_TypeInfo_Struct1 mdb__declarative_tree__mdbcomp__program_representation__ti_proc_defn_rep_1unit__type_ctor_info_unit_0;

static const MR_FA_TypeInfo_Struct1 mdb__declarative_tree__maybe__ti_maybe_1mdbcomp__program_representation__ti_proc_defn_rep_1unit__type_ctor_info_unit_0;

static const MR_PseudoTypeInfo mdb__declarative_tree__mdb__declarative_tree__field_types_dependency_chain_start_1_0[6];

static const MR_DuFunctorDesc mdb__declarative_tree__mdb__declarative_tree__du_functor_desc_dependency_chain_start_1_0;

static const MR_DuFunctorDesc mdb__declarative_tree__mdb__declarative_tree__du_functor_desc_dependency_chain_start_1_1;

static const MR_DuFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__du_stag_ordered_dependency_chain_start_1_0[1];

static const MR_DuFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__du_stag_ordered_dependency_chain_start_1_1[1];

static const MR_DuPtagLayout mdb__declarative_tree__mdb__declarative_tree__du_ptag_ordered_dependency_chain_start_1[2];

static const MR_DuFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__du_name_ordered_dependency_chain_start_1[2];

static const MR_Integer mdb__declarative_tree__mdb__declarative_tree__functor_number_map_dependency_chain_start_1[2];

static const MR_Integer mdb__declarative_tree__mdb__declarative_tree__functor_number_map_edt_node_1[1];

static const MR_NotagFunctorDesc mdb__declarative_tree__mdb__declarative_tree__notag_functor_desc_edt_node_1;

static const MR_FA_TypeInfo_Struct1 mdb__declarative_tree__mdbcomp__program_representation__ti_goal_rep_1unit__type_ctor_info_unit_0;

static const MR_PseudoTypeInfo mdb__declarative_tree__mdb__declarative_tree__field_types_goal_and_path_0_0[2];

static const MR_DuFunctorDesc mdb__declarative_tree__mdb__declarative_tree__du_functor_desc_goal_and_path_0_0;

static const MR_DuFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__du_stag_ordered_goal_and_path_0_0[1];

static const MR_DuPtagLayout mdb__declarative_tree__mdb__declarative_tree__du_ptag_ordered_goal_and_path_0[1];

static const MR_DuFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__du_name_ordered_goal_and_path_0[1];

static const MR_Integer mdb__declarative_tree__mdb__declarative_tree__functor_number_map_goal_and_path_0[1];

static const MR_FA_TypeInfo_Struct1 mdb__declarative_tree__list__ti_list_1mdb__declarative_tree__type_ctor_info_goal_and_path_0;

static const MR_PseudoTypeInfo mdb__declarative_tree__mdb__declarative_tree__field_types_plain_call_info_0_0[4];

static const MR_ConstString mdb__declarative_tree__mdb__declarative_tree__field_names_plain_call_info_0_0[4];

static const MR_DuFunctorDesc mdb__declarative_tree__mdb__declarative_tree__du_functor_desc_plain_call_info_0_0;

static const MR_DuFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__du_stag_ordered_plain_call_info_0_0[1];

static const MR_DuPtagLayout mdb__declarative_tree__mdb__declarative_tree__du_ptag_ordered_plain_call_info_0[1];

static const MR_DuFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__du_name_ordered_plain_call_info_0[1];

static const MR_Integer mdb__declarative_tree__mdb__declarative_tree__functor_number_map_plain_call_info_0[1];

static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_tree__mdb__declarative_tree__pti_annotated_primitive_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_tree__list__pti_list_1__pseudo_mdb__declarative_tree__pti_annotated_primitive_1__pseudo_1;

static const MR_PseudoTypeInfo mdb__declarative_tree__mdb__declarative_tree__field_types_primitive_list_and_var_1_0[3];

static const MR_ConstString mdb__declarative_tree__mdb__declarative_tree__field_names_primitive_list_and_var_1_0[3];

static const MR_DuArgLocn mdb__declarative_tree__mdb__declarative_tree__field_locns_primitive_list_and_var_1_0[3];

static const MR_DuFunctorDesc mdb__declarative_tree__mdb__declarative_tree__du_functor_desc_primitive_list_and_var_1_0;

static const MR_DuFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__du_stag_ordered_primitive_list_and_var_1_0[1];

static const MR_DuPtagLayout mdb__declarative_tree__mdb__declarative_tree__du_ptag_ordered_primitive_list_and_var_1[1];

static const MR_DuFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__du_name_ordered_primitive_list_and_var_1[1];

static const MR_Integer mdb__declarative_tree__mdb__declarative_tree__functor_number_map_primitive_list_and_var_1[1];

static const MR_DuFunctorDesc mdb__declarative_tree__mdb__declarative_tree__du_functor_desc_start_loc_1_0;

static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_tree__mdb__declarative_execution__pti_trace_node_1__pseudo_1;

static const MR_PseudoTypeInfo mdb__declarative_tree__mdb__declarative_tree__field_types_start_loc_1_1[2];

static const MR_DuFunctorDesc mdb__declarative_tree__mdb__declarative_tree__du_functor_desc_start_loc_1_1;

static const MR_DuFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__du_stag_ordered_start_loc_1_0[1];

static const MR_DuFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__du_stag_ordered_start_loc_1_1[1];

static const MR_DuPtagLayout mdb__declarative_tree__mdb__declarative_tree__du_ptag_ordered_start_loc_1[2];

static const MR_DuFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__du_name_ordered_start_loc_1[2];

static const MR_Integer mdb__declarative_tree__mdb__declarative_tree__functor_number_map_start_loc_1[2];

static const MR_Integer mdb__declarative_tree__mdb__declarative_tree__functor_number_map_wrap_1[1];

static const MR_NotagFunctorDesc mdb__declarative_tree__mdb__declarative_tree__notag_functor_desc_wrap_1;

static MR_Integer MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_arg_pos_to_user_arg_num_3_3_f_0(
  MR_Word TypeClassInfo_for_annotated_trace_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_Word MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_proc_label_2_2_f_0(
  MR_Word TypeClassInfo_for_annotated_trace_4,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_context_4_4_p_0(
  MR_Word TypeClassInfo_for_annotated_trace_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_subtree_suspicion_4_4_p_0(
  MR_Word TypeClassInfo_for_annotated_trace_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Integer * HeadVar__3_3,
  MR_Integer * HeadVar__4_4);

static void MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_number_of_events_4_4_p_0(
  MR_Word TypeClassInfo_for_annotated_trace_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Integer * HeadVar__3_3,
  MR_Integer * HeadVar__4_4);

static MR_bool MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_topmost_node_2_2_p_0(
  MR_Word TypeClassInfo_for_annotated_trace_3,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
mdb__declarative_tree____Unify____mdb__declarative_execution__trace_node_1_1(
  MR_Word TypeInfo_for_R_127,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_same_nodes_3_3_p_0(
  MR_Word TypeClassInfo_for_annotated_trace_4,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_is_implicit_root_2_2_p_0(
  MR_Word TypeClassInfo_for_annotated_trace_3,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_subterm_mode_5_5_p_0(
  MR_Word TypeClassInfo_for_annotated_trace_6,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5);

static void MR_CALL 
mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_101_100_116_95_95_109_101_114_99_117_114_121_95_101_100_116_95_95_95_95_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_116_114_101_101_95_95_119_114_97_112_95_95_97_114_105_116_121_49_95_95_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_116_114_101_101_95_95_101_100_116_95_110_111_100_101_95_95_97_114_105_116_121_49_95_95_95_95_95_95_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_101_100_116_95_95_101_100_116_95_115_117_98_116_101_114_109_95_109_111_100_101_95_53_95_95_91_53_93_95_48_5_p_0(
  MR_Word TypeClassInfo_for_annotated_trace_6,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__5_5);

static MR_Box MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_dependency_6_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_dependency_6_6_p_0(
  MR_Word TypeClassInfo_for_annotated_trace_7,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6);

static MR_Box MR_CALL 
mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_118_101_114_115_101_95_112_114_105_109_105_116_105_118_101_115_95_95_91_49_44_32_53_93_95_48_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_118_101_114_115_101_95_112_114_105_109_105_116_105_118_101_115_95_95_91_49_44_32_53_93_95_48_6_p_0(
  MR_Word tscc_proc_1_input_1_HeadVar__1_1,
  MR_Integer tscc_proc_1_input_2_Var0_2,
  MR_Word tscc_proc_1_input_3_TermPath0_3,
  MR_Word tscc_proc_1_input_4_ProcDefnRep_5,
  MR_Word * tscc_output_ptr_1_Origin_6);

static void MR_CALL 
mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_118_101_114_115_101_95_99_97_108_108_95_95_91_49_44_32_49_48_93_95_48_11_p_0(
  MR_Word tscc_proc_2_input_1_BoundVars_12,
  MR_String tscc_proc_2_input_2_File_13,
  MR_Integer tscc_proc_2_input_3_Line_14,
  MR_Word tscc_proc_2_input_4_Args_15,
  MR_Word tscc_proc_2_input_5_MaybeNodeId_16,
  MR_Word tscc_proc_2_input_6_Prims_17,
  MR_Integer tscc_proc_2_input_7_Var_18,
  MR_Word tscc_proc_2_input_8_TermPath_19,
  MR_Word tscc_proc_2_input_9_ProcDefnRep_21,
  MR_Word * tscc_output_ptr_1_Origin_6);

static void MR_CALL 
mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_108_95_114_101_113_117_105_114_101_95_95_104_111_50_95_95_91_51_93_95_48_3_p_0(
  MR_Integer Var_9,
  MR_Integer Var_10,
  MR_String Loc_5,
  MR_String Msg_6);

static MR_bool MR_CALL 
mdb__declarative_tree__IntroducedFrom__pred__traverse_primitives__1662__1_2_p_0(
  MR_Integer Var0_2,
  MR_Integer ToVar_114);

static void MR_CALL 
mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_108_95_114_101_113_117_105_114_101_95_95_104_111_49_95_95_91_51_93_95_48_3_p_0(
  MR_Integer Var_9,
  MR_Integer Var_10,
  MR_String Loc_5,
  MR_String Msg_6);

static MR_bool MR_CALL 
mdb__declarative_tree__IntroducedFrom__pred__traverse_primitives__1650__1_2_p_0(
  MR_Integer Var0_2,
  MR_Integer ToVar_43);

static void MR_CALL 
mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_99_104_97_105_110_95_115_116_97_114_116_95_95_91_53_93_95_48_5_p_0(
  MR_Word TypeClassInfo_for_annotated_trace_49,
  MR_Box Store_6,
  MR_Box Ref_7,
  MR_Word ArgPos_8,
  MR_Word * ChainStart_10);

static MR_bool MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_parent_3_3_p_0(
  MR_Word TypeClassInfo_for_annotated_trace_4,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static MR_bool MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_children_3_3_p_0(
  MR_Word TypeClassInfo_for_annotated_trace_4,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_get_i_bug_4_4_p_0(
  MR_Word TypeClassInfo_for_annotated_trace_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_get_e_bug_3_3_p_0(
  MR_Word TypeClassInfo_for_annotated_trace_4,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_question_3_3_p_0(
  MR_Word TypeClassInfo_for_annotated_trace_4,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
mdb__declarative_tree____Compare____primitive_list_and_var_1_0(
  MR_Word TypeInfo_for_R_14,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mdb__declarative_tree____Unify____primitive_list_and_var_1_0(
  MR_Word TypeInfo_for_R_11,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mdb__declarative_tree____Compare____plain_call_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mdb__declarative_tree____Unify____plain_call_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mdb__declarative_tree____Compare____goal_and_path_list_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mdb__declarative_tree____Unify____goal_and_path_list_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mdb__declarative_tree____Compare____goal_and_path_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mdb__declarative_tree____Unify____goal_and_path_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mdb__declarative_tree____Compare____dependency_chain_start_1_0(
  MR_Word TypeInfo_for_R_35,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
mdb__declarative_tree____Compare____start_loc_1_0(
  MR_Word TypeInfo_for_R_15,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mdb__declarative_tree____Unify____dependency_chain_start_1_0(
  MR_Word TypeInfo_for_R_19,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
mdb__declarative_tree____Unify____start_loc_1_0(
  MR_Word TypeInfo_for_R_11,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mdb__declarative_tree____Compare____contour_type_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mdb__declarative_tree____Unify____contour_type_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mdb__declarative_tree____Compare____annotated_primitive_1_0(
  MR_Word TypeInfo_for_R_23,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mdb__declarative_tree____Unify____annotated_primitive_1_0(
  MR_Word TypeInfo_for_R_17,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
mdb__declarative_tree__find_arg_pos_2_f_0(
  MR_Word HeadVars_4,
  MR_Integer Var_5);

static void MR_CALL 
mdb__declarative_tree__find_arg_pos_from_back_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer Var_2,
  MR_Integer Pos_3,
  MR_Word * ArgPos_4);

static void MR_CALL 
mdb__declarative_tree__is_traced_grade_1_p_0(
  MR_Word * TracingOn_1);

static MR_bool MR_CALL 
mdb__declarative_tree__plain_call_is_special_case_4_p_0(
  MR_String Module_5,
  MR_String Name_6,
  MR_Word Args_7,
  MR_Integer * NewVar_8);

static MR_Word MR_CALL 
mdb__declarative_tree__make_primitive_list_9_f_0(
  MR_Word tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37,
  MR_Box tscc_proc_1_input_2_Store_11,
  MR_Word tscc_proc_1_input_3_GoalPaths_12,
  MR_Word tscc_proc_1_input_4_Contour_13,
  MR_Word tscc_proc_1_input_5_MaybeEnd_14,
  MR_Integer tscc_proc_1_input_6_ArgNum_15,
  MR_Integer tscc_proc_1_input_7_TotalArgs_16,
  MR_Word tscc_proc_1_input_8_HeadVars_17,
  MR_Word tscc_proc_1_input_9_AllTraced_18,
  MR_Word tscc_proc_1_input_10_Primitives0_19);

static MR_Word MR_CALL 
mdb__declarative_tree__match_goal_to_contour_event_11_f_0(
  MR_Word tscc_proc_2_input_1_TypeClassInfo_for_annotated_trace_177,
  MR_Box tscc_proc_2_input_2_Store_13,
  MR_Word tscc_proc_2_input_3_Goal_14,
  MR_Word tscc_proc_2_input_4_Path_15,
  MR_Word tscc_proc_2_input_5_GoalPaths_16,
  MR_Word tscc_proc_2_input_6_Contour_17,
  MR_Word tscc_proc_2_input_7_MaybeEnd_18,
  MR_Integer tscc_proc_2_input_8_ArgNum_19,
  MR_Integer tscc_proc_2_input_9_TotalArgs_20,
  MR_Word tscc_proc_2_input_10_HeadVars_21,
  MR_Word tscc_proc_2_input_11_AllTraced_22,
  MR_Word tscc_proc_2_input_12_Primitives0_23);

static MR_Word MR_CALL 
mdb__declarative_tree__match_atomic_goal_to_contour_event_15_f_0(
  MR_Word tscc_proc_3_input_1_TypeClassInfo_for_annotated_trace_145,
  MR_Box tscc_proc_3_input_2_Store_17,
  MR_String tscc_proc_3_input_3_File_18,
  MR_Integer tscc_proc_3_input_4_Line_19,
  MR_Word tscc_proc_3_input_5_BoundVars_20,
  MR_Word tscc_proc_3_input_6_AtomicGoal_21,
  MR_Word tscc_proc_3_input_7_AtomicGoalArgs_22,
  MR_Word tscc_proc_3_input_8_Path_23,
  MR_Word tscc_proc_3_input_9_GoalPaths_24,
  MR_Word tscc_proc_3_input_10_Contour_25,
  MR_Word tscc_proc_3_input_11_MaybeEnd_26,
  MR_Integer tscc_proc_3_input_12_ArgNum_27,
  MR_Integer tscc_proc_3_input_13_TotalArgs_28,
  MR_Word tscc_proc_3_input_14_HeadVars_29,
  MR_Word tscc_proc_3_input_15_AllTraced_30,
  MR_Word tscc_proc_3_input_16_Primitives0_31);

static void MR_CALL 
mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_108_95_114_101_113_117_105_114_101_95_95_104_111_51_95_95_91_51_93_95_48_3_p_0(
  MR_Word Var_9,
  MR_Word Var_10,
  MR_String Loc_5,
  MR_String Msg_6);

static void MR_CALL 
mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_108_101_97_100_105_110_103_95_101_120_105_116_95_102_97_105_108_95_101_118_101_110_116_115_95_95_91_49_93_95_48_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static MR_bool MR_CALL 
mdb__declarative_tree__IntroducedFrom__pred__make_primitive_list__1184__1_3_p_0(
  MR_Word TypeClassInfo_for_annotated_trace_37,
  MR_Word AdjustedContour_21,
  MR_Word HeadVar__3_29);

static void MR_CALL 
mdb__declarative_tree__add_paths_to_conjuncts_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ParentPath_2,
  MR_Integer N_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
mdb__declarative_tree__find_variable_in_args_4_p_0(
  MR_Word Args_5,
  MR_Integer ArgNum_6,
  MR_Integer TotalArgs_7,
  MR_Integer * Var_8);

static MR_bool MR_CALL 
mdb__declarative_tree__atomic_goal_matches_atom_2_p_0(
  MR_Word AtomicGoalId_3,
  MR_Word Atom_4);

static MR_bool MR_CALL 
mdb__declarative_tree__get_exit_atom_3_p_0(
  MR_Word TypeClassInfo_for_annotated_trace_16,
  MR_Box Store_4,
  MR_Word HeadVar__2_2,
  MR_Word * FinalAtom_7);

static MR_bool MR_CALL 
mdb__declarative_tree__get_exit_atoms_in_contour_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
mdb__declarative_tree__get_exit_atoms_in_contour_3_p_0(
  MR_Word TypeClassInfo_for_annotated_trace_19,
  MR_Box Store_4,
  MR_Word ExitNode_5,
  MR_Word * ExitAtoms_6);

static void MR_CALL 
mdb__declarative_tree__materialize_contour_5_p_0(
  MR_Word TypeClassInfo_for_annotated_trace_34,
  MR_Box Store_6,
  MR_Box NodeId_7,
  MR_Word Node_8,
  MR_Word Nodes0_9,
  MR_Word * Nodes_10);

static void MR_CALL 
mdb__declarative_tree__find_chain_start_outside_4_p_0(
  MR_Word TypeInfo_for_R_25,
  MR_Word CallNode_5,
  MR_Word ExitNode_6,
  MR_Word ArgPos_7,
  MR_Word * ChainStart_8);

static void MR_CALL 
mdb__declarative_tree__find_chain_start_inside_5_p_0(
  MR_Word TypeClassInfo_for_annotated_trace_42,
  MR_Box Store_6,
  MR_Box CallId_7,
  MR_Word CallNode_8,
  MR_Word ArgPos_9,
  MR_Word * ChainStart_10);

static MR_bool MR_CALL 
mdb__declarative_tree__step_left_to_call_3_p_0(
  MR_Word TypeClassInfo_for_annotated_trace_25,
  MR_Box Store_4,
  MR_Box NodeId_5,
  MR_Word * ParentCallNode_6);

static MR_Box MR_CALL 
mdb__declarative_tree__trace_dependency_special_case_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
mdb__declarative_tree__trace_dependency_special_case_8_p_0(
  MR_Word TypeClassInfo_for_annotated_trace_43,
  MR_Box Store_9,
  MR_Word ProcDefnRep_10,
  MR_Box Ref_11,
  MR_Word StartLoc_12,
  MR_Integer ArgNum_13,
  MR_Word TermPath_14,
  MR_Box NodeId_15,
  MR_Word * Origin_16);

static void MR_CALL 
mdb__declarative_tree__stratum_children_5_p_0(
  MR_Word tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_11,
  MR_Box tscc_proc_1_input_2_Store_6,
  MR_Box tscc_proc_1_input_3_NodeId_7,
  MR_Box tscc_proc_1_input_4_StartId_8,
  MR_Word tscc_proc_1_input_5_Ns0_9,
  MR_Word * tscc_output_ptr_1_Ns_10);

static void MR_CALL 
mdb__declarative_tree__stratum_children_2_5_p_0(
  MR_Word tscc_proc_2_input_1_TypeClassInfo_for_annotated_trace_84,
  MR_Box tscc_proc_2_input_2_Store_6,
  MR_Box tscc_proc_2_input_3_NodeId_7,
  MR_Box tscc_proc_2_input_4_StartId_8,
  MR_Word tscc_proc_2_input_5_Ns0_9,
  MR_Word * tscc_output_ptr_1_Ns_10);

static void MR_CALL 
mdb__declarative_tree__contour_children_6_p_0(
  MR_Word tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_13,
  MR_Word tscc_proc_1_input_2_ContourType_7,
  MR_Box tscc_proc_1_input_3_Store_8,
  MR_Box tscc_proc_1_input_4_NodeId_9,
  MR_Box tscc_proc_1_input_5_StartId_10,
  MR_Word tscc_proc_1_input_6_Ns0_11,
  MR_Word * tscc_output_ptr_1_Ns_12);

static void MR_CALL 
mdb__declarative_tree__contour_children_2_6_p_0(
  MR_Word tscc_proc_2_input_1_TypeClassInfo_for_annotated_trace_115,
  MR_Word tscc_proc_2_input_2_ContourType_7,
  MR_Box tscc_proc_2_input_3_Store_8,
  MR_Box tscc_proc_2_input_4_NodeId_9,
  MR_Box tscc_proc_2_input_5_StartId_10,
  MR_Word tscc_proc_2_input_6_Ns0_11,
  MR_Word * tscc_output_ptr_1_Ns_12);

static void MR_CALL 
mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_4(
  void * env_ptr_arg);

static MR_bool MR_CALL 
mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0(
  MR_Word TypeClassInfo_for_annotated_trace_21,
  MR_Box Store_3,
  MR_Box CallId_4);

static MR_bool MR_CALL 
mdb__declarative_tree__not_at_depth_limit_2_p_0(
  MR_Word TypeClassInfo_for_annotated_trace_16,
  MR_Box Store_3,
  MR_Box Ref_4);

static void MR_CALL 
mdb__declarative_tree__missing_answer_special_case_1_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
mdb__declarative_tree__missing_answer_special_case_1_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
mdb__declarative_tree__missing_answer_special_case_1_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
mdb__declarative_tree__missing_answer_special_case_1_p_0_4(
  void * env_ptr_arg);

static MR_bool MR_CALL 
mdb__declarative_tree__missing_answer_special_case_1_p_0(
  MR_Word Atom_2);

static void MR_CALL 
mdb__declarative_tree__trace_weight_9_p_0(
  MR_Word TypeClassInfo_for_annotated_trace_90,
  MR_Word Weighting_10,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Integer PrevWeight_13,
  MR_Integer * Weight_14,
  MR_Word RecordDups_15,
  MR_Integer DupFactor_16,
  MR_Integer PrevDupWeight_17,
  MR_Integer * Excess_18);

static void MR_CALL 
mdb__declarative_tree__get_answers_4_p_0(
  MR_Word TypeClassInfo_for_annotated_trace_26,
  MR_Box Store_5,
  MR_Box RedoId_6,
  MR_Word DeclAtoms0_7,
  MR_Word * DeclAtoms_8);

static void MR_CALL 
mdb__declarative_tree__get_edt_node_initial_atom_3_p_0(
  MR_Word TypeClassInfo_for_annotated_trace_29,
  MR_Box Store_4,
  MR_Box Ref_5,
  MR_Word * Atom_6);

static void MR_CALL 
mdb__declarative_tree__det_edt_return_node_from_id_3_p_0(
  MR_Word TypeClassInfo_for_annotated_trace_32,
  MR_Box Store_4,
  MR_Box Ref_5,
  MR_Word * Node_6);

static MR_bool MR_CALL 
mdb__declarative_tree____Unify____annotated_primitive_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mdb__declarative_tree____Compare____annotated_primitive_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mdb__declarative_tree____Unify____contour_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__declarative_tree____Compare____contour_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__declarative_tree____Unify____dependency_chain_start_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mdb__declarative_tree____Compare____dependency_chain_start_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mdb__declarative_tree____Unify____edt_node_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mdb__declarative_tree____Compare____edt_node_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mdb__declarative_tree____Unify____goal_and_path_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__declarative_tree____Compare____goal_and_path_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__declarative_tree____Unify____goal_and_path_list_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__declarative_tree____Compare____goal_and_path_list_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__declarative_tree____Unify____plain_call_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__declarative_tree____Compare____plain_call_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__declarative_tree____Unify____primitive_list_and_var_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mdb__declarative_tree____Compare____primitive_list_and_var_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mdb__declarative_tree____Unify____start_loc_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mdb__declarative_tree____Compare____start_loc_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mdb__declarative_tree____Unify____wrap_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mdb__declarative_tree____Compare____wrap_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static void MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_question_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_get_e_bug_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_get_i_bug_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_bool MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_children_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_parent_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_dependency_6_6_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_subterm_mode_5_5_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_bool MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_is_implicit_root_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_bool MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_same_nodes_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_topmost_node_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_number_of_events_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_subtree_suspicion_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_bool MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_context_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_Box MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_proc_label_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_arg_pos_to_user_arg_num_3_3_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box mdb__declarative_tree_scalar_common_1[34][2];

static /* final */ const MR_Box mdb__declarative_tree_scalar_common_2[3][1];

static /* final */ const MR_Box mdb__declarative_tree_scalar_common_3[1][5];

static /* final */ const MR_Box mdb__declarative_tree_scalar_common_4[4][3];

static /* final */ const MR_Integer mdb__declarative_tree_scalar_common_5[1][3];

static /* final */ const MR_Box mdb__declarative_tree_scalar_common_6[1][7];




static /* final */ const MR_Box mdb__declarative_tree_scalar_common_1[34][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_goal_rep_1)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_case_rep_1)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_proc_defn_rep_1)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mdb__declarative_tree_scalar_common_1[5]))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_goal_and_path_0))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) "predicate \140mdb.declarative_tree.get_edt_call_node\'/3")),
    ((MR_Box) ((MR_String) "not a return node"))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) "predicate \140mdb.declarative_tree.det_edt_return_node_from_id\'/3")),
    ((MR_Box) ((MR_String) "not a return node"))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_String) "predicate \140mdb.declarative_tree.trace_weight\'/9")),
    ((MR_Box) ((MR_String) "not a final event"))
  },
  /* row 11 */
  {
    ((MR_Box) (&mdb__declarative_tree_scalar_common_2[1])),
    ((MR_Box) ((MR_String) "solutions"))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_String) "predicate \140mdb.declarative_tree.contour_children_2\'/6")),
    ((MR_Box) ((MR_String) "unexpected start of contour"))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_String) "predicate \140mdb.declarative_tree.stratum_children_2\'/5")),
    ((MR_Box) ((MR_String) "unexpected start of contour"))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_String) "predicate \140mdb.declarative_tree.find_variable_in_args\'/4")),
    ((MR_Box) ((MR_String) "arg not found"))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_String) "make_primitive_list")),
    ((MR_Box) ((MR_String) "nonempty contour at end"))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_String) "function \140mdb.declarative_tree.match_goal_to_contour_event\'/11")),
    ((MR_Box) ((MR_String) "mismatch on disj"))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_String) "function \140mdb.declarative_tree.match_goal_to_contour_event\'/11")),
    ((MR_Box) ((MR_String) "mismatch on if-then-else"))
  },
  /* row 18 */
  {
    ((MR_Box) ((MR_String) "function \140mdb.declarative_tree.match_goal_to_contour_event\'/11")),
    ((MR_Box) ((MR_String) "mismatch on negation"))
  },
  /* row 19 */
  {
    ((MR_Box) ((MR_String) "function \140mdb.declarative_tree.match_goal_to_contour_event\'/11")),
    ((MR_Box) ((MR_String) "mismatch on switch"))
  },
  /* row 20 */
  {
    ((MR_Box) ((MR_String) "function \140mdb.declarative_tree.match_atomic_goal_to_contour_event\'/15")),
    ((MR_Box) ((MR_String) "argument number mismatch"))
  },
  /* row 21 */
  {
    ((MR_Box) ((MR_String) "function \140mdb.declarative_tree.match_atomic_goal_to_contour_event\'/15")),
    ((MR_Box) ((MR_String) "name mismatch on call"))
  },
  /* row 22 */
  {
    ((MR_Box) ((MR_String) "function \140mdb.declarative_tree.match_atomic_goal_to_contour_event\'/15")),
    ((MR_Box) ((MR_String) "goalpath mismatch on call"))
  },
  /* row 23 */
  {
    ((MR_Box) ((MR_String) "function \140mdb.declarative_tree.match_atomic_goal_to_contour_event\'/15")),
    ((MR_Box) ((MR_String) "premature contour end"))
  },
  /* row 24 */
  {
    ((MR_Box) ((MR_String) "function \140mdb.declarative_tree.match_atomic_goal_to_contour_event\'/15")),
    ((MR_Box) ((MR_String) "atomic goal doesn\'t match exit event\n"))
  },
  /* row 25 */
  {
    ((MR_Box) ((MR_String) "function \140mdb.declarative_tree.match_atomic_goal_to_contour_event\'/15")),
    ((MR_Box) ((MR_String) "atomic goal with no exit event when assuming all traced"))
  },
  /* row 26 */
  {
    ((MR_Box) ((MR_String) "predicate \140mdb.declarative_tree.find_arg_pos_from_back\'/4")),
    ((MR_Box) ((MR_String) "empty list"))
  },
  /* row 27 */
  {
    ((MR_Box) ((MR_String) "predicate \140mdb.declarative_tree.find_chain_start\'/5")),
    ((MR_Box) ((MR_String) "unbound exception term"))
  },
  /* row 28 */
  {
    ((MR_Box) ((MR_String) "predicate \140mdb.declarative_tree.find_chain_start\'/5")),
    ((MR_Box) ((MR_String) "unbound wrong answer term"))
  },
  /* row 29 */
  {
    ((MR_Box) ((MR_String) "predicate \140mdb.declarative_tree.find_chain_start\'/5")),
    ((MR_Box) ((MR_String) "unbound missing answer term"))
  },
  /* row 30 */
  {
    ((MR_Box) ((MR_String) "predicate \140mdb.declarative_tree.traverse_primitives\'/6")),
    ((MR_Box) ((MR_String) "bad event"))
  },
  /* row 31 */
  {
    ((MR_Box) ((MR_String) "predicate \140mdb.declarative_tree.traverse_primitives\'/6")),
    ((MR_Box) ((MR_String) "input argument not found"))
  },
  /* row 32 */
  {
    ((MR_Box) ((MR_String) "predicate \140mdb.declarative_tree.traverse_primitives\'/6")),
    ((MR_Box) ((MR_String) "bad deconstruct"))
  },
  /* row 33 */
  {
    ((MR_Box) ((MR_String) "predicate \140mdb.declarative_tree.traverse_primitives\'/6")),
    ((MR_Box) ((MR_String) "bad test"))
  },
};

static /* final */ const MR_Box mdb__declarative_tree_scalar_common_2[3][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "solutions"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "library"))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box mdb__declarative_tree_scalar_common_3[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_head_var_rep_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box mdb__declarative_tree_scalar_common_4[4][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mdb__declarative_tree_scalar_common_3[0])),
    ((MR_Box) (mdb__declarative_tree__trace_dependency_special_case_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "exception.m")),
    ((MR_Box) ((MR_Integer) 0)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row 2 */
  {
    ((MR_Box) (&mdb__declarative_tree_scalar_common_3[0])),
    ((MR_Box) (mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_118_101_114_115_101_95_112_114_105_109_105_116_105_118_101_115_95_95_91_49_44_32_53_93_95_48_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mdb__declarative_tree_scalar_common_3[0])),
    ((MR_Box) (mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_dependency_6_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Integer mdb__declarative_tree_scalar_common_5[1][3] = {
  /* row 0 */
  {
    (MR_Integer) 2,
    (MR_Integer) 67631,
    (MR_Integer) 67663
  },
};

static /* final */ const MR_Box mdb__declarative_tree_scalar_common_6[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&mdb__declarative_tree_scalar_common_5[0])),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&mdb__declarative_tree__pair__pti_pair_2__pseudo_2__pseudo_mdb__declarative_execution__pti_trace_node_1__pseudo_2)),
    ((MR_Box) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_final_decl_atom_0))
  },
};



#include "io.mh"
#include "mdb.mh"
#include "string.mh"
#include "time.mh"
#include "mdb.declarative_tree.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_tree__mdb__declarative_execution__pti_trace_node_1__pseudo_2 = {
  &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 2)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 mdb__declarative_tree__pair__pti_pair_2__pseudo_2__pseudo_mdb__declarative_execution__pti_trace_node_1__pseudo_2 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 2),
    (MR_PseudoTypeInfo) (&mdb__declarative_tree__mdb__declarative_execution__pti_trace_node_1__pseudo_2)
  }
};

static const MR_FA_TypeInfo_Struct1 mdb__declarative_tree__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_tree__maybe__pti_maybe_1__pseudo_1 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_PseudoTypeInfo mdb__declarative_tree__mdb__declarative_tree__field_types_annotated_primitive_1_0[6] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mdb__declarative_tree__list__ti_list_1builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_atomic_goal_rep_0),
  (MR_PseudoTypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0),
  (MR_PseudoTypeInfo) (&mdb__declarative_tree__maybe__pti_maybe_1__pseudo_1)
};

static const MR_DuFunctorDesc mdb__declarative_tree__mdb__declarative_tree__du_functor_desc_annotated_primitive_1_0 = {
  (MR_String) "primitive",
  INT16_C(6),
  UINT16_C(32),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mdb__declarative_tree__mdb__declarative_tree__field_types_annotated_primitive_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__du_stag_ordered_annotated_primitive_1_0[1] = {
  &mdb__declarative_tree__mdb__declarative_tree__du_functor_desc_annotated_primitive_1_0
};

static const MR_DuPtagLayout mdb__declarative_tree__mdb__declarative_tree__du_ptag_ordered_annotated_primitive_1[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__declarative_tree__mdb__declarative_tree__du_stag_ordered_annotated_primitive_1_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__du_name_ordered_annotated_primitive_1[1] = {
  &mdb__declarative_tree__mdb__declarative_tree__du_functor_desc_annotated_primitive_1_0
};

static const MR_Integer mdb__declarative_tree__mdb__declarative_tree__functor_number_map_annotated_primitive_1[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_annotated_primitive_1 = {
  (MR_Integer) 1,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_tree____Unify____annotated_primitive_1_0_10001)),
  ((MR_Box) (mdb__declarative_tree____Compare____annotated_primitive_1_0_10001)),
  (MR_String) "mdb.declarative_tree",
  (MR_String) "annotated_primitive",
  {     mdb__declarative_tree__mdb__declarative_tree__du_name_ordered_annotated_primitive_1 },
  {     mdb__declarative_tree__mdb__declarative_tree__du_ptag_ordered_annotated_primitive_1 },
  (MR_Integer) 1,
  UINT16_C(4),
  mdb__declarative_tree__mdb__declarative_tree__functor_number_map_annotated_primitive_1
};

static const MR_EnumFunctorDesc mdb__declarative_tree__mdb__declarative_tree__enum_functor_desc_contour_type_0_0 = {
  (MR_String) "normal",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mdb__declarative_tree__mdb__declarative_tree__enum_functor_desc_contour_type_0_1 = {
  (MR_String) "exception",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__enum_value_ordered_contour_type_0[2] = {
  &mdb__declarative_tree__mdb__declarative_tree__enum_functor_desc_contour_type_0_0,
  &mdb__declarative_tree__mdb__declarative_tree__enum_functor_desc_contour_type_0_1
};

static const MR_EnumFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__enum_name_ordered_contour_type_0[2] = {
  &mdb__declarative_tree__mdb__declarative_tree__enum_functor_desc_contour_type_0_1,
  &mdb__declarative_tree__mdb__declarative_tree__enum_functor_desc_contour_type_0_0
};

static const MR_Integer mdb__declarative_tree__mdb__declarative_tree__functor_number_map_contour_type_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_contour_type_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdb__declarative_tree____Unify____contour_type_0_0_10001)),
  ((MR_Box) (mdb__declarative_tree____Compare____contour_type_0_0_10001)),
  (MR_String) "mdb.declarative_tree",
  (MR_String) "contour_type",
  {     mdb__declarative_tree__mdb__declarative_tree__enum_name_ordered_contour_type_0 },
  {     mdb__declarative_tree__mdb__declarative_tree__enum_value_ordered_contour_type_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  mdb__declarative_tree__mdb__declarative_tree__functor_number_map_contour_type_0
};

static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_tree__mdb__declarative_tree__pti_start_loc_1__pseudo_1 = {
  &mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_start_loc_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_FA_TypeInfo_Struct1 mdb__declarative_tree__maybe__ti_maybe_1mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0)
  }
};

static const MR_FA_TypeInfo_Struct1 mdb__declarative_tree__mdbcomp__program_representation__ti_proc_defn_rep_1unit__type_ctor_info_unit_0 = {
  &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_proc_defn_rep_1,
  {
    (MR_TypeInfo) (&mercury__unit__unit__type_ctor_info_unit_0)
  }
};

static const MR_FA_TypeInfo_Struct1 mdb__declarative_tree__maybe__ti_maybe_1mdbcomp__program_representation__ti_proc_defn_rep_1unit__type_ctor_info_unit_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&mdb__declarative_tree__mdbcomp__program_representation__ti_proc_defn_rep_1unit__type_ctor_info_unit_0)
  }
};

static const MR_PseudoTypeInfo mdb__declarative_tree__mdb__declarative_tree__field_types_dependency_chain_start_1_0[6] = {
  (MR_PseudoTypeInfo) (&mdb__declarative_tree__mdb__declarative_tree__pti_start_loc_1__pseudo_1),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) (&mdb__declarative_tree__maybe__ti_maybe_1mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0),
  (MR_PseudoTypeInfo) (&mdb__declarative_tree__maybe__ti_maybe_1mdbcomp__program_representation__ti_proc_defn_rep_1unit__type_ctor_info_unit_0)
};

static const MR_DuFunctorDesc mdb__declarative_tree__mdb__declarative_tree__du_functor_desc_dependency_chain_start_1_0 = {
  (MR_String) "chain_start",
  INT16_C(6),
  UINT16_C(9),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  mdb__declarative_tree__mdb__declarative_tree__field_types_dependency_chain_start_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__declarative_tree__mdb__declarative_tree__du_functor_desc_dependency_chain_start_1_1 = {
  (MR_String) "require_explicit_subtree",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__du_stag_ordered_dependency_chain_start_1_0[1] = {
  &mdb__declarative_tree__mdb__declarative_tree__du_functor_desc_dependency_chain_start_1_1
};

static const MR_DuFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__du_stag_ordered_dependency_chain_start_1_1[1] = {
  &mdb__declarative_tree__mdb__declarative_tree__du_functor_desc_dependency_chain_start_1_0
};

static const MR_DuPtagLayout mdb__declarative_tree__mdb__declarative_tree__du_ptag_ordered_dependency_chain_start_1[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mdb__declarative_tree__mdb__declarative_tree__du_stag_ordered_dependency_chain_start_1_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__declarative_tree__mdb__declarative_tree__du_stag_ordered_dependency_chain_start_1_1,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__du_name_ordered_dependency_chain_start_1[2] = {
  &mdb__declarative_tree__mdb__declarative_tree__du_functor_desc_dependency_chain_start_1_0,
  &mdb__declarative_tree__mdb__declarative_tree__du_functor_desc_dependency_chain_start_1_1
};

static const MR_Integer mdb__declarative_tree__mdb__declarative_tree__functor_number_map_dependency_chain_start_1[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_dependency_chain_start_1 = {
  (MR_Integer) 1,
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_tree____Unify____dependency_chain_start_1_0_10001)),
  ((MR_Box) (mdb__declarative_tree____Compare____dependency_chain_start_1_0_10001)),
  (MR_String) "mdb.declarative_tree",
  (MR_String) "dependency_chain_start",
  {     mdb__declarative_tree__mdb__declarative_tree__du_name_ordered_dependency_chain_start_1 },
  {     mdb__declarative_tree__mdb__declarative_tree__du_ptag_ordered_dependency_chain_start_1 },
  (MR_Integer) 2,
  UINT16_C(4),
  mdb__declarative_tree__mdb__declarative_tree__functor_number_map_dependency_chain_start_1
};

static const MR_Integer mdb__declarative_tree__mdb__declarative_tree__functor_number_map_edt_node_1[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc mdb__declarative_tree__mdb__declarative_tree__notag_functor_desc_edt_node_1 = {
  (MR_String) "dynamic",
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_edt_node_1 = {
  (MR_Integer) 1,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG,
  ((MR_Box) (mdb__declarative_tree____Unify____edt_node_1_0_10001)),
  ((MR_Box) (mdb__declarative_tree____Compare____edt_node_1_0_10001)),
  (MR_String) "mdb.declarative_tree",
  (MR_String) "edt_node",
  {     &mdb__declarative_tree__mdb__declarative_tree__notag_functor_desc_edt_node_1 },
  {     &mdb__declarative_tree__mdb__declarative_tree__notag_functor_desc_edt_node_1 },
  (MR_Integer) 1,
  UINT16_C(4),
  mdb__declarative_tree__mdb__declarative_tree__functor_number_map_edt_node_1
};

static const MR_FA_TypeInfo_Struct1 mdb__declarative_tree__mdbcomp__program_representation__ti_goal_rep_1unit__type_ctor_info_unit_0 = {
  &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_goal_rep_1,
  {
    (MR_TypeInfo) (&mercury__unit__unit__type_ctor_info_unit_0)
  }
};

static const MR_PseudoTypeInfo mdb__declarative_tree__mdb__declarative_tree__field_types_goal_and_path_0_0[2] = {
  (MR_PseudoTypeInfo) (&mdb__declarative_tree__mdbcomp__program_representation__ti_goal_rep_1unit__type_ctor_info_unit_0),
  (MR_PseudoTypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0)
};

static const MR_DuFunctorDesc mdb__declarative_tree__mdb__declarative_tree__du_functor_desc_goal_and_path_0_0 = {
  (MR_String) "goal_and_path",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mdb__declarative_tree__mdb__declarative_tree__field_types_goal_and_path_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__du_stag_ordered_goal_and_path_0_0[1] = {
  &mdb__declarative_tree__mdb__declarative_tree__du_functor_desc_goal_and_path_0_0
};

static const MR_DuPtagLayout mdb__declarative_tree__mdb__declarative_tree__du_ptag_ordered_goal_and_path_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__declarative_tree__mdb__declarative_tree__du_stag_ordered_goal_and_path_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__du_name_ordered_goal_and_path_0[1] = {
  &mdb__declarative_tree__mdb__declarative_tree__du_functor_desc_goal_and_path_0_0
};

static const MR_Integer mdb__declarative_tree__mdb__declarative_tree__functor_number_map_goal_and_path_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_goal_and_path_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_tree____Unify____goal_and_path_0_0_10001)),
  ((MR_Box) (mdb__declarative_tree____Compare____goal_and_path_0_0_10001)),
  (MR_String) "mdb.declarative_tree",
  (MR_String) "goal_and_path",
  {     mdb__declarative_tree__mdb__declarative_tree__du_name_ordered_goal_and_path_0 },
  {     mdb__declarative_tree__mdb__declarative_tree__du_ptag_ordered_goal_and_path_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  mdb__declarative_tree__mdb__declarative_tree__functor_number_map_goal_and_path_0
};

static const MR_FA_TypeInfo_Struct1 mdb__declarative_tree__list__ti_list_1mdb__declarative_tree__type_ctor_info_goal_and_path_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_goal_and_path_0)
  }
};

const MR_TypeCtorInfo_Struct mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_goal_and_path_list_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__declarative_tree____Unify____goal_and_path_list_0_0_10001)),
  ((MR_Box) (mdb__declarative_tree____Compare____goal_and_path_list_0_0_10001)),
  (MR_String) "mdb.declarative_tree",
  (MR_String) "goal_and_path_list",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mdb__declarative_tree__list__ti_list_1mdb__declarative_tree__type_ctor_info_goal_and_path_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_PseudoTypeInfo mdb__declarative_tree__mdb__declarative_tree__field_types_plain_call_info_0_0[4] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_ConstString mdb__declarative_tree__mdb__declarative_tree__field_names_plain_call_info_0_0[4] = {
  (MR_String) "file_name",
  (MR_String) "line_number",
  (MR_String) "flat_module_name",
  (MR_String) "pred_name"
};

static const MR_DuFunctorDesc mdb__declarative_tree__mdb__declarative_tree__du_functor_desc_plain_call_info_0_0 = {
  (MR_String) "plain_call_info",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mdb__declarative_tree__mdb__declarative_tree__field_types_plain_call_info_0_0,
  mdb__declarative_tree__mdb__declarative_tree__field_names_plain_call_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__du_stag_ordered_plain_call_info_0_0[1] = {
  &mdb__declarative_tree__mdb__declarative_tree__du_functor_desc_plain_call_info_0_0
};

static const MR_DuPtagLayout mdb__declarative_tree__mdb__declarative_tree__du_ptag_ordered_plain_call_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__declarative_tree__mdb__declarative_tree__du_stag_ordered_plain_call_info_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__du_name_ordered_plain_call_info_0[1] = {
  &mdb__declarative_tree__mdb__declarative_tree__du_functor_desc_plain_call_info_0_0
};

static const MR_Integer mdb__declarative_tree__mdb__declarative_tree__functor_number_map_plain_call_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_plain_call_info_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_tree____Unify____plain_call_info_0_0_10001)),
  ((MR_Box) (mdb__declarative_tree____Compare____plain_call_info_0_0_10001)),
  (MR_String) "mdb.declarative_tree",
  (MR_String) "plain_call_info",
  {     mdb__declarative_tree__mdb__declarative_tree__du_name_ordered_plain_call_info_0 },
  {     mdb__declarative_tree__mdb__declarative_tree__du_ptag_ordered_plain_call_info_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  mdb__declarative_tree__mdb__declarative_tree__functor_number_map_plain_call_info_0
};

static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_tree__mdb__declarative_tree__pti_annotated_primitive_1__pseudo_1 = {
  &mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_annotated_primitive_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_tree__list__pti_list_1__pseudo_mdb__declarative_tree__pti_annotated_primitive_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&mdb__declarative_tree__mdb__declarative_tree__pti_annotated_primitive_1__pseudo_1)
  }
};

static const MR_PseudoTypeInfo mdb__declarative_tree__mdb__declarative_tree__field_types_primitive_list_and_var_1_0[3] = {
  (MR_PseudoTypeInfo) (&mdb__declarative_tree__list__pti_list_1__pseudo_mdb__declarative_tree__pti_annotated_primitive_1__pseudo_1),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0)
};

static const MR_ConstString mdb__declarative_tree__mdb__declarative_tree__field_names_primitive_list_and_var_1_0[3] = {
  (MR_String) "primitives",
  (MR_String) "var",
  (MR_String) "closure"
};

static const MR_DuArgLocn mdb__declarative_tree__mdb__declarative_tree__field_locns_primitive_list_and_var_1_0[3] = {
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
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc mdb__declarative_tree__mdb__declarative_tree__du_functor_desc_primitive_list_and_var_1_0 = {
  (MR_String) "primitive_list_and_var",
  INT16_C(3),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mdb__declarative_tree__mdb__declarative_tree__field_types_primitive_list_and_var_1_0,
  mdb__declarative_tree__mdb__declarative_tree__field_names_primitive_list_and_var_1_0,
  mdb__declarative_tree__mdb__declarative_tree__field_locns_primitive_list_and_var_1_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__du_stag_ordered_primitive_list_and_var_1_0[1] = {
  &mdb__declarative_tree__mdb__declarative_tree__du_functor_desc_primitive_list_and_var_1_0
};

static const MR_DuPtagLayout mdb__declarative_tree__mdb__declarative_tree__du_ptag_ordered_primitive_list_and_var_1[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__declarative_tree__mdb__declarative_tree__du_stag_ordered_primitive_list_and_var_1_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__du_name_ordered_primitive_list_and_var_1[1] = {
  &mdb__declarative_tree__mdb__declarative_tree__du_functor_desc_primitive_list_and_var_1_0
};

static const MR_Integer mdb__declarative_tree__mdb__declarative_tree__functor_number_map_primitive_list_and_var_1[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_primitive_list_and_var_1 = {
  (MR_Integer) 1,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_tree____Unify____primitive_list_and_var_1_0_10001)),
  ((MR_Box) (mdb__declarative_tree____Compare____primitive_list_and_var_1_0_10001)),
  (MR_String) "mdb.declarative_tree",
  (MR_String) "primitive_list_and_var",
  {     mdb__declarative_tree__mdb__declarative_tree__du_name_ordered_primitive_list_and_var_1 },
  {     mdb__declarative_tree__mdb__declarative_tree__du_ptag_ordered_primitive_list_and_var_1 },
  (MR_Integer) 1,
  UINT16_C(4),
  mdb__declarative_tree__mdb__declarative_tree__functor_number_map_primitive_list_and_var_1
};

static const MR_DuFunctorDesc mdb__declarative_tree__mdb__declarative_tree__du_functor_desc_start_loc_1_0 = {
  (MR_String) "cur_goal",
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

static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_tree__mdb__declarative_execution__pti_trace_node_1__pseudo_1 = {
  &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_PseudoTypeInfo mdb__declarative_tree__mdb__declarative_tree__field_types_start_loc_1_1[2] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) (&mdb__declarative_tree__mdb__declarative_execution__pti_trace_node_1__pseudo_1)
};

static const MR_DuFunctorDesc mdb__declarative_tree__mdb__declarative_tree__du_functor_desc_start_loc_1_1 = {
  (MR_String) "parent_goal",
  INT16_C(2),
  UINT16_C(3),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mdb__declarative_tree__mdb__declarative_tree__field_types_start_loc_1_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__du_stag_ordered_start_loc_1_0[1] = {
  &mdb__declarative_tree__mdb__declarative_tree__du_functor_desc_start_loc_1_0
};

static const MR_DuFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__du_stag_ordered_start_loc_1_1[1] = {
  &mdb__declarative_tree__mdb__declarative_tree__du_functor_desc_start_loc_1_1
};

static const MR_DuPtagLayout mdb__declarative_tree__mdb__declarative_tree__du_ptag_ordered_start_loc_1[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mdb__declarative_tree__mdb__declarative_tree__du_stag_ordered_start_loc_1_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__declarative_tree__mdb__declarative_tree__du_stag_ordered_start_loc_1_1,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__du_name_ordered_start_loc_1[2] = {
  &mdb__declarative_tree__mdb__declarative_tree__du_functor_desc_start_loc_1_0,
  &mdb__declarative_tree__mdb__declarative_tree__du_functor_desc_start_loc_1_1
};

static const MR_Integer mdb__declarative_tree__mdb__declarative_tree__functor_number_map_start_loc_1[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_start_loc_1 = {
  (MR_Integer) 1,
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_tree____Unify____start_loc_1_0_10001)),
  ((MR_Box) (mdb__declarative_tree____Compare____start_loc_1_0_10001)),
  (MR_String) "mdb.declarative_tree",
  (MR_String) "start_loc",
  {     mdb__declarative_tree__mdb__declarative_tree__du_name_ordered_start_loc_1 },
  {     mdb__declarative_tree__mdb__declarative_tree__du_ptag_ordered_start_loc_1 },
  (MR_Integer) 2,
  UINT16_C(4),
  mdb__declarative_tree__mdb__declarative_tree__functor_number_map_start_loc_1
};

static const MR_Integer mdb__declarative_tree__mdb__declarative_tree__functor_number_map_wrap_1[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc mdb__declarative_tree__mdb__declarative_tree__notag_functor_desc_wrap_1 = {
  (MR_String) "wrap",
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_wrap_1 = {
  (MR_Integer) 1,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG,
  ((MR_Box) (mdb__declarative_tree____Unify____wrap_1_0_10001)),
  ((MR_Box) (mdb__declarative_tree____Compare____wrap_1_0_10001)),
  (MR_String) "mdb.declarative_tree",
  (MR_String) "wrap",
  {     &mdb__declarative_tree__mdb__declarative_tree__notag_functor_desc_wrap_1 },
  {     &mdb__declarative_tree__mdb__declarative_tree__notag_functor_desc_wrap_1 },
  (MR_Integer) 1,
  UINT16_C(4),
  mdb__declarative_tree__mdb__declarative_tree__functor_number_map_wrap_1
};

const MR_BaseTypeclassInfo base_typeclass_info_mdb__declarative_edt__mercury_edt__arity2__mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1__[20] = {
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 15)),
  ((MR_Box) (mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_question_3_3_p_0_10001)),
  ((MR_Box) (mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_get_e_bug_3_3_p_0_10001)),
  ((MR_Box) (mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_get_i_bug_4_4_p_0_10001)),
  ((MR_Box) (mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_children_3_3_p_0_10001)),
  ((MR_Box) (mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_parent_3_3_p_0_10001)),
  ((MR_Box) (mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_dependency_6_6_p_0_10001)),
  ((MR_Box) (mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_subterm_mode_5_5_p_0_10001)),
  ((MR_Box) (mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_is_implicit_root_2_2_p_0_10001)),
  ((MR_Box) (mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_same_nodes_3_3_p_0_10001)),
  ((MR_Box) (mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_topmost_node_2_2_p_0_10001)),
  ((MR_Box) (mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_number_of_events_4_4_p_0_10001)),
  ((MR_Box) (mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_subtree_suspicion_4_4_p_0_10001)),
  ((MR_Box) (mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_context_4_4_p_0_10001)),
  ((MR_Box) (mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_proc_label_2_2_f_0_10001)),
  ((MR_Box) (mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_arg_pos_to_user_arg_num_3_3_f_0_10001))
};

static MR_Integer MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_arg_pos_to_user_arg_num_3_3_f_0(
  MR_Word TypeClassInfo_for_annotated_trace_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer HeadVar__4_4;
    MR_Word TypeInfo_14_14;
    MR_Box Store_8 = ((MR_Box) (HeadVar__1_1));
    MR_Box Ref_9 = ((MR_Box) (HeadVar__2_2));
    MR_Box CallId_10;
    MR_Word Call_11;
    MR_Word Atom_12;
    MR_Box CallId0_20;
    MR_Word Node0_18;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_annotated_trace_5, (MR_Integer) 0)), (MR_Integer) 5))));
    MR_Box conv1_Node0_18;

    succeeded = func_0(((MR_Box) (TypeClassInfo_for_annotated_trace_5)), Store_8, Ref_9, &conv1_Node0_18);
    if (succeeded)
    {
      Node0_18 = ((MR_Word) (conv1_Node0_18));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      switch (MR_tag((MR_Word) Node0_18)) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 1:
          {
            CallId0_20 = (MR_hl_field(MR_mktag(1), Node0_18, (MR_Integer) 1));
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Node0_18, (MR_Integer) 0))))) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 0:
              {
                CallId0_20 = (MR_hl_field(MR_mktag(3), Node0_18, (MR_Integer) 2));
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 1:
              {
                CallId0_20 = (MR_hl_field(MR_mktag(3), Node0_18, (MR_Integer) 2));
                succeeded = MR_TRUE;
              }
              break;
          }
          break;
      }
    if (succeeded)
      CallId_10 = CallId0_20;
    else
    {
      mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_tree_scalar_common_1[8])));
    }
    mdb__declarative_execution__call_node_from_id_3_p_0(TypeClassInfo_for_annotated_trace_5, Store_8, CallId_10, &Call_11);
    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_annotated_trace_5, (MR_Integer) 2, &TypeInfo_14_14);
    Atom_12 = mdb__declarative_execution__get_trace_call_atom_1_f_0(TypeInfo_14_14, Call_11);
    mdb__declarative_execution__user_arg_num_3_p_0(HeadVar__3_3, Atom_12, &HeadVar__4_4);
    return HeadVar__4_4;
  }
}

static MR_Word MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_proc_label_2_2_f_0(
  MR_Word TypeClassInfo_for_annotated_trace_4,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_Word HeadVar__3_3;
    MR_Box Store_6 = ((MR_Box) (HeadVar__1_1));
    MR_Box Ref_7 = ((MR_Box) (HeadVar__2_2));
    MR_Word Node_8;
    MR_Box Label_13;
    MR_Box ProcLayout_28;

    mdb__declarative_tree__det_edt_return_node_from_id_3_p_0(TypeClassInfo_for_annotated_trace_4, Store_6, Ref_7, &Node_8);
    switch (MR_tag((MR_Word) Node_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        Label_13 = ((MR_Box) ((MR_hl_field(MR_mktag(1), Node_8, (MR_Integer) 5))));
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Node_8, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Label_13 = ((MR_Box) ((MR_hl_field(MR_mktag(3), Node_8, (MR_Integer) 5))));
            break;
          case (MR_Integer) 1:
            Label_13 = ((MR_Box) ((MR_hl_field(MR_mktag(3), Node_8, (MR_Integer) 6))));
            break;
        }
        break;
    }
    ProcLayout_28 = mdbcomp__rtti_access__get_proc_layout_from_label_layout_1_f_0(Label_13);
    HeadVar__3_3 = mdbcomp__rtti_access__get_proc_label_from_layout_1_f_0(ProcLayout_28);
    return HeadVar__3_3;
  }
}

static MR_bool MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_context_4_4_p_0(
  MR_Word TypeClassInfo_for_annotated_trace_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  {
    MR_bool succeeded;
    MR_Box Store_7 = ((MR_Box) (HeadVar__1_1));
    MR_Box Ref_8 = ((MR_Box) (HeadVar__2_2));
    MR_String FileName_9;
    MR_Integer LineNo_10;
    MR_Word Final_11;
    MR_Box CallId_13;
    MR_Box Label_17;
    MR_Word Call_29;
    MR_Word Var_57;

    mdb__declarative_execution__det_trace_node_from_id_3_p_0(TypeClassInfo_for_annotated_trace_5, Store_7, Ref_8, &Final_11);
    switch (MR_tag((MR_Word) Final_11)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 1:
        {
          CallId_13 = (MR_hl_field(MR_mktag(1), Final_11, (MR_Integer) 1));
          Label_17 = ((MR_Box) ((MR_hl_field(MR_mktag(1), Final_11, (MR_Integer) 5))));
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Final_11, (MR_Integer) 0))))) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            {
              CallId_13 = (MR_hl_field(MR_mktag(3), Final_11, (MR_Integer) 2));
              Label_17 = ((MR_Box) ((MR_hl_field(MR_mktag(3), Final_11, (MR_Integer) 5))));
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 1:
            {
              CallId_13 = (MR_hl_field(MR_mktag(3), Final_11, (MR_Integer) 2));
              Label_17 = ((MR_Box) ((MR_hl_field(MR_mktag(3), Final_11, (MR_Integer) 6))));
              succeeded = MR_TRUE;
            }
            break;
        }
        break;
    }
    if (succeeded)
    {
      succeeded = mdbcomp__rtti_access__get_context_from_label_layout_3_p_0(Label_17, &FileName_9, &LineNo_10);
      if (succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (FileName_9));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (LineNo_10));
        }
        mdb__declarative_execution__call_node_from_id_3_p_0(TypeClassInfo_for_annotated_trace_5, Store_7, CallId_13, &Call_29);
        Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Call_29, (MR_Integer) 6))));
        if ((Var_57 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Box ReturnLabel_30 = ((MR_Box) ((MR_hl_field(MR_mktag(1), Var_57, (MR_Integer) 0))));
          MR_String ReturnFileName_31;
          MR_Integer ReturnLineNo_32;
          MR_Word Var_35;

          succeeded = mdbcomp__rtti_access__get_context_from_label_layout_3_p_0(ReturnLabel_30, &ReturnFileName_31, &ReturnLineNo_32);
          if (succeeded)
          {
            {
              Var_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_35, 0) = ((MR_Box) (ReturnFileName_31));
              MR_hl_field(MR_mktag(0), Var_35, 1) = ((MR_Box) (ReturnLineNo_32));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__4_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_35));
            }
            succeeded = MR_TRUE;
          }
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_subtree_suspicion_4_4_p_0(
  MR_Word TypeClassInfo_for_annotated_trace_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Integer * HeadVar__3_3,
  MR_Integer * HeadVar__4_4)
{
  {
    mdb__declarative_tree__trace_weight_9_p_0(TypeClassInfo_for_annotated_trace_5, (MR_Integer) 1, HeadVar__1_1, HeadVar__2_2, (MR_Integer) 0, HeadVar__3_3, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, HeadVar__4_4);
  }
}

static void MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_number_of_events_4_4_p_0(
  MR_Word TypeClassInfo_for_annotated_trace_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Integer * HeadVar__3_3,
  MR_Integer * HeadVar__4_4)
{
  {
    mdb__declarative_tree__trace_weight_9_p_0(TypeClassInfo_for_annotated_trace_5, (MR_Integer) 0, HeadVar__1_1, HeadVar__2_2, (MR_Integer) 0, HeadVar__3_3, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, HeadVar__4_4);
  }
}

static MR_bool MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_topmost_node_2_2_p_0(
  MR_Word TypeClassInfo_for_annotated_trace_3,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_39_39;
    MR_Box Store_4 = ((MR_Box) (HeadVar__1_1));
    MR_Box Ref_5 = ((MR_Box) (HeadVar__2_2));
    MR_Word Node_6;
    MR_Box CallId_8;
    MR_Word Var_35;
    MR_Word Var_37;

    mdb__declarative_tree__det_edt_return_node_from_id_3_p_0(TypeClassInfo_for_annotated_trace_3, Store_4, Ref_5, &Node_6);
    switch (MR_tag((MR_Word) Node_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        CallId_8 = (MR_hl_field(MR_mktag(1), Node_6, (MR_Integer) 1));
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Node_6, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            CallId_8 = (MR_hl_field(MR_mktag(3), Node_6, (MR_Integer) 2));
            break;
          case (MR_Integer) 1:
            CallId_8 = (MR_hl_field(MR_mktag(3), Node_6, (MR_Integer) 2));
            break;
        }
        break;
    }
    {
      Var_35 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_35, 0) = NULL;
      MR_hl_field(MR_mktag(0), Var_35, 1) = NULL;
      MR_hl_field(MR_mktag(0), Var_35, 2) = NULL;
      MR_hl_field(MR_mktag(0), Var_35, 3) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_35, 4) = NULL;
      MR_hl_field(MR_mktag(0), Var_35, 5) = NULL;
      MR_hl_field(MR_mktag(0), Var_35, 6) = NULL;
      MR_hl_field(MR_mktag(0), Var_35, 7) = NULL;
      MR_hl_field(MR_mktag(0), Var_35, 8) = NULL;
      MR_hl_field(MR_mktag(0), Var_35, 9) = NULL;
    }
    mdb__declarative_execution__call_node_from_id_3_p_0(TypeClassInfo_for_annotated_trace_3, Store_4, CallId_8, &Var_37);
    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_annotated_trace_3, (MR_Integer) 2, &TypeInfo_39_39);
    succeeded = mdb__declarative_tree____Unify____mdb__declarative_execution__trace_node_1_1(TypeInfo_39_39, Var_35, Var_37);
    return succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_tree____Unify____mdb__declarative_execution__trace_node_1_1(
  MR_Word TypeInfo_for_R_127,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Box ArgX1_3 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));
    MR_Box ArgX2_5 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
    MR_Integer ArgX4_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
    MR_Integer ArgX5_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
    MR_Box ArgX8_17 = ((MR_Box) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))));
    MR_Integer ArgX9_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 8))));
    MR_Integer ArgX10_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 9))));
    MR_Integer Var_128;

    (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)) = ArgX1_3;
    (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)) = ArgX2_5;
    (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)) = ((MR_Box) (ArgX3_7));
    Var_128 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
    (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4)) = ((MR_Box) (ArgX5_11));
    (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5)) = ((MR_Box) (ArgX6_13));
    (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6)) = ((MR_Box) (ArgX7_15));
    (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 7)) = ((MR_Box) (ArgX8_17));
    (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 8)) = ((MR_Box) (ArgX9_19));
    (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 9)) = ((MR_Box) (ArgX10_21));
    succeeded = (ArgX4_9 == Var_128);
    return succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_same_nodes_3_3_p_0(
  MR_Word TypeClassInfo_for_annotated_trace_4,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Box Store_5 = ((MR_Box) (HeadVar__1_1));
    MR_Box Ref1_6 = ((MR_Box) (HeadVar__2_2));
    MR_Box Ref2_7 = ((MR_Box) (HeadVar__3_3));
    MR_Word Node1_8;
    MR_Word Node2_9;

    mdb__declarative_tree__det_edt_return_node_from_id_3_p_0(TypeClassInfo_for_annotated_trace_4, Store_5, Ref1_6, &Node1_8);
    mdb__declarative_tree__det_edt_return_node_from_id_3_p_0(TypeClassInfo_for_annotated_trace_4, Store_5, Ref2_7, &Node2_9);
    switch (MR_tag((MR_Word) Node1_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Integer Event_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Node1_8, (MR_Integer) 4))));
          MR_Integer Var_49;

          succeeded = ((MR_tag((MR_Word) Node2_9)) == (MR_Integer) 1);
          if (succeeded)
          {
            Var_49 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Node2_9, (MR_Integer) 4))));
            succeeded = (Event_14 == Var_49);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Node1_8, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer Event_47 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Node1_8, (MR_Integer) 4))));
              MR_Integer Var_50;

              succeeded = ((((MR_tag((MR_Word) Node2_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Node2_9, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                Var_50 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Node2_9, (MR_Integer) 4))));
                succeeded = (Event_47 == Var_50);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer Event_48 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Node1_8, (MR_Integer) 5))));
              MR_Integer Var_51;

              succeeded = ((((MR_tag((MR_Word) Node2_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Node2_9, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                Var_51 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Node2_9, (MR_Integer) 5))));
                succeeded = (Event_48 == Var_51);
              }
            }
            break;
        }
        break;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_is_implicit_root_2_2_p_0(
  MR_Word TypeClassInfo_for_annotated_trace_3,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Box Store_4 = ((MR_Box) (HeadVar__1_1));
    MR_Box Ref_5 = ((MR_Box) (HeadVar__2_2));
    MR_Box CallId_6;
    MR_Box CallId0_12;
    MR_Word Node0_10;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_annotated_trace_3, (MR_Integer) 0)), (MR_Integer) 5))));
    MR_Box conv1_Node0_10;
    MR_Word CallNode_36;
    MR_Word Var_37;

    succeeded = func_0(((MR_Box) (TypeClassInfo_for_annotated_trace_3)), Store_4, Ref_5, &conv1_Node0_10);
    if (succeeded)
    {
      Node0_10 = ((MR_Word) (conv1_Node0_10));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      switch (MR_tag((MR_Word) Node0_10)) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 1:
          {
            CallId0_12 = (MR_hl_field(MR_mktag(1), Node0_10, (MR_Integer) 1));
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Node0_10, (MR_Integer) 0))))) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 0:
              {
                CallId0_12 = (MR_hl_field(MR_mktag(3), Node0_10, (MR_Integer) 2));
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 1:
              {
                CallId0_12 = (MR_hl_field(MR_mktag(3), Node0_10, (MR_Integer) 2));
                succeeded = MR_TRUE;
              }
              break;
          }
          break;
      }
    if (succeeded)
      CallId_6 = CallId0_12;
    else
    {
      mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_tree_scalar_common_1[8])));
    }
    mdb__declarative_execution__call_node_from_id_3_p_0(TypeClassInfo_for_annotated_trace_3, Store_4, CallId_6, &CallNode_36);
    Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CallNode_36, (MR_Integer) 5))));
    succeeded = (Var_37 != (MR_Word) ((MR_Unsigned) 0U));
    return succeeded;
  }
}

static void MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_subterm_mode_5_5_p_0(
  MR_Word TypeClassInfo_for_annotated_trace_6,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_101_100_116_95_95_109_101_114_99_117_114_121_95_101_100_116_95_95_95_95_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_116_114_101_101_95_95_119_114_97_112_95_95_97_114_105_116_121_49_95_95_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_116_114_101_101_95_95_101_100_116_95_110_111_100_101_95_95_97_114_105_116_121_49_95_95_95_95_95_95_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_101_100_116_95_95_101_100_116_95_115_117_98_116_101_114_109_95_109_111_100_101_95_53_95_95_91_53_93_95_48_5_p_0(TypeClassInfo_for_annotated_trace_6, HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, HeadVar__5_5);
}

static void MR_CALL 
mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_101_100_116_95_95_109_101_114_99_117_114_121_95_101_100_116_95_95_95_95_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_116_114_101_101_95_95_119_114_97_112_95_95_97_114_105_116_121_49_95_95_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_116_114_101_101_95_95_101_100_116_95_110_111_100_101_95_95_97_114_105_116_121_49_95_95_95_95_95_95_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_101_100_116_95_95_101_100_116_95_115_117_98_116_101_114_109_95_109_111_100_101_95_53_95_95_91_53_93_95_48_5_p_0(
  MR_Word TypeClassInfo_for_annotated_trace_6,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__5_5)
{
  {
    MR_Box Store_10 = ((MR_Box) (HeadVar__1_1));
    MR_Box Ref_11 = ((MR_Box) (HeadVar__2_2));
    MR_Word ChainStart_12;

    mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_99_104_97_105_110_95_115_116_97_114_116_95_95_91_53_93_95_48_5_p_0(TypeClassInfo_for_annotated_trace_6, Store_10, Ref_11, HeadVar__3_3, &ChainStart_12);
    if ((ChainStart_12 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__5_5 = (MR_Integer) 1;
    else
    {
      MR_Word StartLoc_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ChainStart_12, (MR_Integer) 0))));
      MR_Word TypeInfo_20_20;

      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_annotated_trace_6, (MR_Integer) 2, &TypeInfo_20_20);
      if ((StartLoc_13 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__5_5 = (MR_Integer) 1;
      else
        *HeadVar__5_5 = (MR_Integer) 0;
    }
  }
}

static MR_Box MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_dependency_6_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Integer conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = mdbcomp__program_representation__head_var_to_var_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_dependency_6_6_p_0(
  MR_Word TypeClassInfo_for_annotated_trace_7,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6)
{
  {
    MR_bool succeeded;
    MR_Box Store_12 = ((MR_Box) (HeadVar__1_1));
    MR_Box Ref_13 = ((MR_Box) (HeadVar__2_2));
    MR_Word ChainStart_14;

    mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_99_104_97_105_110_95_115_116_97_114_116_95_95_91_53_93_95_48_5_p_0(TypeClassInfo_for_annotated_trace_7, Store_12, Ref_13, HeadVar__3_3, &ChainStart_14);
    if ((ChainStart_14 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 4U);
      *HeadVar__5_5 = (MR_Integer) 1;
    }
    else
    {
      MR_Word StartLoc_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ChainStart_14, (MR_Integer) 0))));
      MR_Integer ArgNum_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), ChainStart_14, (MR_Integer) 1))));
      MR_Integer TotalArgs_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), ChainStart_14, (MR_Integer) 2))));
      MR_Box NodeId_18 = (MR_hl_field(MR_mktag(1), ChainStart_14, (MR_Integer) 3));
      MR_Word StartPath_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ChainStart_14, (MR_Integer) 4))));
      MR_Word MaybeProcDefnRep_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ChainStart_14, (MR_Integer) 5))));
      MR_Word TypeInfo_24_24;

      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_annotated_trace_7, (MR_Integer) 2, &TypeInfo_24_24);
      if ((StartLoc_15 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__5_5 = (MR_Integer) 1;
      else
        *HeadVar__5_5 = (MR_Integer) 0;
      if ((MaybeProcDefnRep_20 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word ProcDefnRep_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeProcDefnRep_20, (MR_Integer) 0))));
        MR_Word Origin0_22;

        succeeded = mdb__declarative_tree__trace_dependency_special_case_8_p_0(TypeClassInfo_for_annotated_trace_7, Store_12, ProcDefnRep_21, Ref_13, StartLoc_15, ArgNum_16, HeadVar__4_4, NodeId_18, &Origin0_22);
        if (succeeded)
          *HeadVar__6_6 = Origin0_22;
        else
        {
          MR_Word Node_36;
          MR_Word Contour0_37;
          MR_Word Contour_40;
          MR_Word HeadVars_41;
          MR_Word GoalRep_42;
          MR_Word AllTraced_43;
          MR_Word MaybePrims_44;
          MR_Word Var_54;
          MR_Word Var_55;
          MR_Word Var_56;

          mdb__declarative_execution__det_trace_node_from_id_3_p_0(TypeClassInfo_for_annotated_trace_7, Store_12, NodeId_18, &Node_36);
          mdb__declarative_tree__materialize_contour_5_p_0(TypeClassInfo_for_annotated_trace_7, Store_12, NodeId_18, Node_36, (MR_Word) ((MR_Unsigned) 0U), &Contour0_37);
          if ((StartLoc_15 == (MR_Word) ((MR_Unsigned) 0U)))
            Contour_40 = Contour0_37;
          else
          {
            MR_Word TypeInfo_54_70;
            MR_Word TypeInfo_55_71;
            MR_Word TypeInfo_57_73;
            MR_Word TypeInfo_59_75;
            MR_Box CallId_38 = (MR_hl_field(MR_mktag(1), StartLoc_15, (MR_Integer) 0));
            MR_Word CallNode_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), StartLoc_15, (MR_Integer) 1))));
            MR_Word Var_50;
            MR_Word Var_51;

            mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_annotated_trace_7, (MR_Integer) 2, &TypeInfo_54_70);
            mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_annotated_trace_7, (MR_Integer) 2, &TypeInfo_55_71);
            {
              TypeInfo_57_73 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), TypeInfo_57_73, 0) = ((MR_Box) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_1));
              MR_hl_field(MR_mktag(0), TypeInfo_57_73, 1) = ((MR_Box) (TypeInfo_55_71));
            }
            {
              TypeInfo_59_75 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), TypeInfo_59_75, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
              MR_hl_field(MR_mktag(0), TypeInfo_59_75, 1) = ((MR_Box) (TypeInfo_54_70));
              MR_hl_field(MR_mktag(0), TypeInfo_59_75, 2) = ((MR_Box) (TypeInfo_57_73));
            }
            {
              Var_51 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_51, 0) = CallId_38;
              MR_hl_field(MR_mktag(0), Var_51, 1) = ((MR_Box) (CallNode_39));
            }
            {
              Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (Var_51));
              MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            Contour_40 = mercury__list__append_2_f_0(TypeInfo_59_75, Contour0_37, Var_50);
          }
          Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProcDefnRep_21, (MR_Integer) 0))));
          HeadVars_41 = mercury__list__map_2_f_0((MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_head_var_rep_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mdb__declarative_tree_scalar_common_4[3]), Var_54);
          GoalRep_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProcDefnRep_21, (MR_Integer) 1))));
{
#define MR_PROC_LABEL mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_dependency_6_6_p_0

	MR_Word TracingOn;

		{

    #ifdef MR_EXEC_TRACE
        TracingOn = MR_YES;
    #else
        TracingOn = MR_NO;
    #endif


		;}
#undef MR_PROC_LABEL
	 AllTraced_43  = TracingOn;
}
          {
            Var_56 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_56, 0) = ((MR_Box) (GoalRep_42));
            MR_hl_field(MR_mktag(0), Var_56, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (Var_56));
            MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          MaybePrims_44 = mdb__declarative_tree__make_primitive_list_9_f_0(TypeClassInfo_for_annotated_trace_7, Store_12, Var_55, Contour_40, StartPath_19, ArgNum_16, TotalArgs_17, HeadVars_41, AllTraced_43, (MR_Word) ((MR_Unsigned) 0U));
          if ((MaybePrims_44 == (MR_Word) ((MR_Unsigned) 0U)))
            *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
          else
          {
            MR_Word Primitives_45;
            MR_Integer Var_46;
            MR_Word MaybeClosure_47;
            MR_Word AdjustedTermPath_48;
            MR_Word Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePrims_44, (MR_Integer) 0))));

            Primitives_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_60, (MR_Integer) 0))));
            Var_46 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_60, (MR_Integer) 1))));
            MaybeClosure_47 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_60, (MR_Integer) 2))) & (MR_Integer) 1);
            switch (MaybeClosure_47) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                AdjustedTermPath_48 = HeadVar__4_4;
                break;
              case (MR_Integer) 1:
                {
                  AdjustedTermPath_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), AdjustedTermPath_48, 0) = ((MR_Box) (ArgNum_16));
                  MR_hl_field(MR_mktag(1), AdjustedTermPath_48, 1) = ((MR_Box) (HeadVar__4_4));
                }
                break;
            }
            mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_118_101_114_115_101_95_112_114_105_109_105_116_105_118_101_115_95_95_91_49_44_32_53_93_95_48_6_p_0(Primitives_45, Var_46, AdjustedTermPath_48, ProcDefnRep_21, HeadVar__6_6);
          }
        }
      }
    }
  }
}

static MR_Box MR_CALL 
mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_118_101_114_115_101_95_112_114_105_109_105_116_105_118_101_115_95_95_91_49_44_32_53_93_95_48_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Integer conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = mdbcomp__program_representation__head_var_to_var_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_118_101_114_115_101_95_112_114_105_109_105_116_105_118_101_115_95_95_91_49_44_32_53_93_95_48_6_p_0(
  MR_Word tscc_proc_1_input_1_HeadVar__1_1,
  MR_Integer tscc_proc_1_input_2_Var0_2,
  MR_Word tscc_proc_1_input_3_TermPath0_3,
  MR_Word tscc_proc_1_input_4_ProcDefnRep_5,
  MR_Word * tscc_output_ptr_1_Origin_6)
{
  {
    MR_Word tscc_proc_2_input_1_BoundVars_12;
    MR_String tscc_proc_2_input_2_File_13;
    MR_Integer tscc_proc_2_input_3_Line_14;
    MR_Word tscc_proc_2_input_4_Args_15;
    MR_Word tscc_proc_2_input_5_MaybeNodeId_16;
    MR_Word tscc_proc_2_input_6_Prims_17;
    MR_Integer tscc_proc_2_input_7_Var_18;
    MR_Word tscc_proc_2_input_8_TermPath_19;
    MR_Word tscc_proc_2_input_9_ProcDefnRep_21;
    MR_Word tscc_output_1_Origin_6;

    // The code for TSCC PROC 1: pred mdb.declarative_tree.UnusedArgs__pred__traverse_primitives__[1, 5]_0/6-0.
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: pred mdb.declarative_tree.UnusedArgs__pred__traverse_primitives__[1, 5]_0/6-0
    ;
    // proc 2 in TSCC: pred mdb.declarative_tree.UnusedArgs__pred__traverse_call__[1, 10]_0/11-0
    ;
    ;
    goto top_of_proc_1;
  top_of_proc_1:;
    {
      MR_Word HeadVar__1_1 = tscc_proc_1_input_1_HeadVar__1_1;
      MR_Integer Var0_2 = tscc_proc_1_input_2_Var0_2;
      MR_Word TermPath0_3 = tscc_proc_1_input_3_TermPath0_3;
      MR_Word ProcDefnRep_5 = tscc_proc_1_input_4_ProcDefnRep_5;
      MR_Word Origin_6;
      MR_bool succeeded;

      if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word HeadVars_12;
        MR_Word ArgPos_13;
        MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProcDefnRep_5, (MR_Integer) 0))));

        HeadVars_12 = mercury__list__map_2_f_0((MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_head_var_rep_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mdb__declarative_tree_scalar_common_4[2]), Var_15);
        ArgPos_13 = mdb__declarative_tree__find_arg_pos_2_f_0(HeadVars_12, Var0_2);
        {
          Origin_6 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Origin_6, 0) = ((MR_Box) (ArgPos_13));
          MR_hl_field(MR_mktag(2), Origin_6, 1) = ((MR_Box) (TermPath0_3));
        }
      }
      else
      {
        MR_Word Prim_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
        MR_Word Prims_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
        MR_String File_23 = ((MR_String) ((MR_hl_field(MR_mktag(0), Prim_16, (MR_Integer) 0))));
        MR_Integer Line_24 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Prim_16, (MR_Integer) 1))));
        MR_Word BoundVars_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Prim_16, (MR_Integer) 2))));
        MR_Word AtomicGoal_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Prim_16, (MR_Integer) 3))));
        MR_Word MaybeNodeId_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Prim_16, (MR_Integer) 5))));

        switch (MR_tag((MR_Word) AtomicGoal_26)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word FieldVars_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AtomicGoal_26, (MR_Integer) 2))));

              succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (Var0_2)), BoundVars_25);
              if (succeeded)
                if ((TermPath0_3 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  {
                    Origin_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Origin_6, 0) = ((MR_Box) (File_23));
                    MR_hl_field(MR_mktag(3), Origin_6, 1) = ((MR_Box) (Line_24));
                    MR_hl_field(MR_mktag(3), Origin_6, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 3));
                  }
                }
                else
                {
                  MR_Integer TermPathStep0_32 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), TermPath0_3, (MR_Integer) 0))));
                  MR_Word TermPath_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TermPath0_3, (MR_Integer) 1))));
                  MR_Integer Var_34;
                  MR_Box conv3_Var_34;
                  MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                  MR_Integer next_value_of_tscc_proc_1_input_2_Var0_2;
                  MR_Word next_value_of_tscc_proc_1_input_3_TermPath0_3;
                  MR_Word next_value_of_tscc_proc_1_input_4_ProcDefnRep_5;

                  mercury__list__det_index1_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), FieldVars_31, TermPathStep0_32, &conv3_Var_34);
                  Var_34 = ((MR_Integer) (conv3_Var_34));
                  // direct tailcall eliminated
                  ;
                  next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Prims_17;
                  next_value_of_tscc_proc_1_input_2_Var0_2 = Var_34;
                  next_value_of_tscc_proc_1_input_3_TermPath0_3 = TermPath_33;
                  next_value_of_tscc_proc_1_input_4_ProcDefnRep_5 = ProcDefnRep_5;
                  tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                  tscc_proc_1_input_2_Var0_2 = next_value_of_tscc_proc_1_input_2_Var0_2;
                  tscc_proc_1_input_3_TermPath0_3 = next_value_of_tscc_proc_1_input_3_TermPath0_3;
                  tscc_proc_1_input_4_ProcDefnRep_5 = next_value_of_tscc_proc_1_input_4_ProcDefnRep_5;
                  goto top_of_proc_1;
                }
              else
              {
                MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Prims_17;
                MR_Integer next_value_of_tscc_proc_1_input_2_Var0_2 = Var0_2;
                MR_Word next_value_of_tscc_proc_1_input_3_TermPath0_3 = TermPath0_3;
                MR_Word next_value_of_tscc_proc_1_input_4_ProcDefnRep_5 = ProcDefnRep_5;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                tscc_proc_1_input_2_Var0_2 = next_value_of_tscc_proc_1_input_2_Var0_2;
                tscc_proc_1_input_3_TermPath0_3 = next_value_of_tscc_proc_1_input_3_TermPath0_3;
                tscc_proc_1_input_4_ProcDefnRep_5 = next_value_of_tscc_proc_1_input_4_ProcDefnRep_5;
                goto top_of_proc_1;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer CellVar_35 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), AtomicGoal_26, (MR_Integer) 0))));
              MR_Word FieldVars_85 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AtomicGoal_26, (MR_Integer) 2))));

              succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (Var0_2)), BoundVars_25);
              if (succeeded)
              {
                MR_Integer Pos_36;

                succeeded = mercury__list__index1_of_first_occurrence_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), FieldVars_85, ((MR_Box) (Var0_2)), &Pos_36);
                if (succeeded)
                {
                  MR_Word Var_78;
                  MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                  MR_Integer next_value_of_tscc_proc_1_input_2_Var0_2;
                  MR_Word next_value_of_tscc_proc_1_input_3_TermPath0_3;
                  MR_Word next_value_of_tscc_proc_1_input_4_ProcDefnRep_5;

                  {
                    Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (Pos_36));
                    MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) (TermPath0_3));
                  }
                  // direct tailcall eliminated
                  ;
                  next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Prims_17;
                  next_value_of_tscc_proc_1_input_2_Var0_2 = CellVar_35;
                  next_value_of_tscc_proc_1_input_3_TermPath0_3 = Var_78;
                  next_value_of_tscc_proc_1_input_4_ProcDefnRep_5 = ProcDefnRep_5;
                  tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                  tscc_proc_1_input_2_Var0_2 = next_value_of_tscc_proc_1_input_2_Var0_2;
                  tscc_proc_1_input_3_TermPath0_3 = next_value_of_tscc_proc_1_input_3_TermPath0_3;
                  tscc_proc_1_input_4_ProcDefnRep_5 = next_value_of_tscc_proc_1_input_4_ProcDefnRep_5;
                  goto top_of_proc_1;
                }
                else
                {
                  {
                    mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_tree_scalar_common_1[32])));
                    return;
                  }
                }
              }
              else
              {
                MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Prims_17;
                MR_Integer next_value_of_tscc_proc_1_input_2_Var0_2 = Var0_2;
                MR_Word next_value_of_tscc_proc_1_input_3_TermPath0_3 = TermPath0_3;
                MR_Word next_value_of_tscc_proc_1_input_4_ProcDefnRep_5 = ProcDefnRep_5;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                tscc_proc_1_input_2_Var0_2 = next_value_of_tscc_proc_1_input_2_Var0_2;
                tscc_proc_1_input_3_TermPath0_3 = next_value_of_tscc_proc_1_input_3_TermPath0_3;
                tscc_proc_1_input_4_ProcDefnRep_5 = next_value_of_tscc_proc_1_input_4_ProcDefnRep_5;
                goto top_of_proc_1;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word MaybeFieldVars_39 = ((MR_Word) ((MR_hl_field(MR_mktag(2), AtomicGoal_26, (MR_Integer) 2))));
              MR_Integer TermPathStep0_89;
              MR_Word TermPath_90;

              succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (Var0_2)), BoundVars_25);
              if (succeeded)
              {
                succeeded = (TermPath0_3 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  TermPathStep0_89 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), TermPath0_3, (MR_Integer) 0))));
                  TermPath_90 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TermPath0_3, (MR_Integer) 1))));
                }
              }
              if (succeeded)
              {
                MR_Word MaybeVar_40;
                MR_Box conv2_MaybeVar_40;

                mercury__list__det_index1_3_p_0((MR_Word) (&mdb__declarative_tree_scalar_common_1[3]), MaybeFieldVars_39, TermPathStep0_89, &conv2_MaybeVar_40);
                MaybeVar_40 = ((MR_Word) (conv2_MaybeVar_40));
                if ((MaybeVar_40 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Prims_17;
                  MR_Integer next_value_of_tscc_proc_1_input_2_Var0_2 = Var0_2;
                  MR_Word next_value_of_tscc_proc_1_input_3_TermPath0_3 = TermPath0_3;
                  MR_Word next_value_of_tscc_proc_1_input_4_ProcDefnRep_5 = ProcDefnRep_5;

                  // direct tailcall eliminated
                  ;
                  tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                  tscc_proc_1_input_2_Var0_2 = next_value_of_tscc_proc_1_input_2_Var0_2;
                  tscc_proc_1_input_3_TermPath0_3 = next_value_of_tscc_proc_1_input_3_TermPath0_3;
                  tscc_proc_1_input_4_ProcDefnRep_5 = next_value_of_tscc_proc_1_input_4_ProcDefnRep_5;
                  goto top_of_proc_1;
                }
                else
                {
                  MR_Integer Var_86 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybeVar_40, (MR_Integer) 0))));
                  MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Prims_17;
                  MR_Integer next_value_of_tscc_proc_1_input_2_Var0_2 = Var_86;
                  MR_Word next_value_of_tscc_proc_1_input_3_TermPath0_3 = TermPath_90;
                  MR_Word next_value_of_tscc_proc_1_input_4_ProcDefnRep_5 = ProcDefnRep_5;

                  // direct tailcall eliminated
                  ;
                  tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                  tscc_proc_1_input_2_Var0_2 = next_value_of_tscc_proc_1_input_2_Var0_2;
                  tscc_proc_1_input_3_TermPath0_3 = next_value_of_tscc_proc_1_input_3_TermPath0_3;
                  tscc_proc_1_input_4_ProcDefnRep_5 = next_value_of_tscc_proc_1_input_4_ProcDefnRep_5;
                  goto top_of_proc_1;
                }
              }
              else
              {
                MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Prims_17;
                MR_Integer next_value_of_tscc_proc_1_input_2_Var0_2 = Var0_2;
                MR_Word next_value_of_tscc_proc_1_input_3_TermPath0_3 = TermPath0_3;
                MR_Word next_value_of_tscc_proc_1_input_4_ProcDefnRep_5 = ProcDefnRep_5;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                tscc_proc_1_input_2_Var0_2 = next_value_of_tscc_proc_1_input_2_Var0_2;
                tscc_proc_1_input_3_TermPath0_3 = next_value_of_tscc_proc_1_input_3_TermPath0_3;
                tscc_proc_1_input_4_ProcDefnRep_5 = next_value_of_tscc_proc_1_input_4_ProcDefnRep_5;
                goto top_of_proc_1;
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), AtomicGoal_26, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word MaybeFieldVars_112 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicGoal_26, (MR_Integer) 3))));

                  succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (Var0_2)), BoundVars_25);
                  if (succeeded)
                    if ((TermPath0_3 == (MR_Word) ((MR_Unsigned) 0U)))
                    {
                      {
                        Origin_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), Origin_6, 0) = ((MR_Box) (File_23));
                        MR_hl_field(MR_mktag(3), Origin_6, 1) = ((MR_Box) (Line_24));
                        MR_hl_field(MR_mktag(3), Origin_6, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 3));
                      }
                    }
                    else
                    {
                      MR_Integer TermPathStep0_97 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), TermPath0_3, (MR_Integer) 0))));
                      MR_Word TermPath_98 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TermPath0_3, (MR_Integer) 1))));
                      MR_Word MaybeVar_100;
                      MR_Box conv1_MaybeVar_100;

                      mercury__list__det_index1_3_p_0((MR_Word) (&mdb__declarative_tree_scalar_common_1[3]), MaybeFieldVars_112, TermPathStep0_97, &conv1_MaybeVar_100);
                      MaybeVar_100 = ((MR_Word) (conv1_MaybeVar_100));
                      if ((MaybeVar_100 == (MR_Word) ((MR_Unsigned) 0U)))
                      {
                        {
                          mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_tree_scalar_common_1[31])));
                          return;
                        }
                      }
                      else
                      {
                        MR_Integer Var_95 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybeVar_100, (MR_Integer) 0))));
                        MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Prims_17;
                        MR_Integer next_value_of_tscc_proc_1_input_2_Var0_2 = Var_95;
                        MR_Word next_value_of_tscc_proc_1_input_3_TermPath0_3 = TermPath_98;
                        MR_Word next_value_of_tscc_proc_1_input_4_ProcDefnRep_5 = ProcDefnRep_5;

                        // direct tailcall eliminated
                        ;
                        tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                        tscc_proc_1_input_2_Var0_2 = next_value_of_tscc_proc_1_input_2_Var0_2;
                        tscc_proc_1_input_3_TermPath0_3 = next_value_of_tscc_proc_1_input_3_TermPath0_3;
                        tscc_proc_1_input_4_ProcDefnRep_5 = next_value_of_tscc_proc_1_input_4_ProcDefnRep_5;
                        goto top_of_proc_1;
                      }
                    }
                  else
                  {
                    MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Prims_17;
                    MR_Integer next_value_of_tscc_proc_1_input_2_Var0_2 = Var0_2;
                    MR_Word next_value_of_tscc_proc_1_input_3_TermPath0_3 = TermPath0_3;
                    MR_Word next_value_of_tscc_proc_1_input_4_ProcDefnRep_5 = ProcDefnRep_5;

                    // direct tailcall eliminated
                    ;
                    tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                    tscc_proc_1_input_2_Var0_2 = next_value_of_tscc_proc_1_input_2_Var0_2;
                    tscc_proc_1_input_3_TermPath0_3 = next_value_of_tscc_proc_1_input_3_TermPath0_3;
                    tscc_proc_1_input_4_ProcDefnRep_5 = next_value_of_tscc_proc_1_input_4_ProcDefnRep_5;
                    goto top_of_proc_1;
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer ToVar_43 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), AtomicGoal_26, (MR_Integer) 1))));
                  MR_Integer FromVar_44 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), AtomicGoal_26, (MR_Integer) 2))));

                  succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (Var0_2)), BoundVars_25);
                  if (succeeded)
                  {
                    MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                    MR_Integer next_value_of_tscc_proc_1_input_2_Var0_2;
                    MR_Word next_value_of_tscc_proc_1_input_3_TermPath0_3;
                    MR_Word next_value_of_tscc_proc_1_input_4_ProcDefnRep_5;

                    mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_108_95_114_101_113_117_105_114_101_95_95_104_111_49_95_95_91_51_93_95_48_3_p_0(Var0_2, ToVar_43, (MR_String) "traverse_primitives", (MR_String) "bad assign");
                    // direct tailcall eliminated
                    ;
                    next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Prims_17;
                    next_value_of_tscc_proc_1_input_2_Var0_2 = FromVar_44;
                    next_value_of_tscc_proc_1_input_3_TermPath0_3 = TermPath0_3;
                    next_value_of_tscc_proc_1_input_4_ProcDefnRep_5 = ProcDefnRep_5;
                    tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                    tscc_proc_1_input_2_Var0_2 = next_value_of_tscc_proc_1_input_2_Var0_2;
                    tscc_proc_1_input_3_TermPath0_3 = next_value_of_tscc_proc_1_input_3_TermPath0_3;
                    tscc_proc_1_input_4_ProcDefnRep_5 = next_value_of_tscc_proc_1_input_4_ProcDefnRep_5;
                    goto top_of_proc_1;
                  }
                  else
                  {
                    MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Prims_17;
                    MR_Integer next_value_of_tscc_proc_1_input_2_Var0_2 = Var0_2;
                    MR_Word next_value_of_tscc_proc_1_input_3_TermPath0_3 = TermPath0_3;
                    MR_Word next_value_of_tscc_proc_1_input_4_ProcDefnRep_5 = ProcDefnRep_5;

                    // direct tailcall eliminated
                    ;
                    tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                    tscc_proc_1_input_2_Var0_2 = next_value_of_tscc_proc_1_input_2_Var0_2;
                    tscc_proc_1_input_3_TermPath0_3 = next_value_of_tscc_proc_1_input_3_TermPath0_3;
                    tscc_proc_1_input_4_ProcDefnRep_5 = next_value_of_tscc_proc_1_input_4_ProcDefnRep_5;
                    goto top_of_proc_1;
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Integer ToVar_114 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), AtomicGoal_26, (MR_Integer) 1))));
                  MR_Integer FromVar_115 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), AtomicGoal_26, (MR_Integer) 2))));

                  succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (Var0_2)), BoundVars_25);
                  if (succeeded)
                  {
                    MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                    MR_Integer next_value_of_tscc_proc_1_input_2_Var0_2;
                    MR_Word next_value_of_tscc_proc_1_input_3_TermPath0_3;
                    MR_Word next_value_of_tscc_proc_1_input_4_ProcDefnRep_5;

                    mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_108_95_114_101_113_117_105_114_101_95_95_104_111_50_95_95_91_51_93_95_48_3_p_0(Var0_2, ToVar_114, (MR_String) "predicate \140mdb.declarative_tree.traverse_primitives\'/6", (MR_String) "bad unsafe_cast");
                    // direct tailcall eliminated
                    ;
                    next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Prims_17;
                    next_value_of_tscc_proc_1_input_2_Var0_2 = FromVar_115;
                    next_value_of_tscc_proc_1_input_3_TermPath0_3 = TermPath0_3;
                    next_value_of_tscc_proc_1_input_4_ProcDefnRep_5 = ProcDefnRep_5;
                    tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                    tscc_proc_1_input_2_Var0_2 = next_value_of_tscc_proc_1_input_2_Var0_2;
                    tscc_proc_1_input_3_TermPath0_3 = next_value_of_tscc_proc_1_input_3_TermPath0_3;
                    tscc_proc_1_input_4_ProcDefnRep_5 = next_value_of_tscc_proc_1_input_4_ProcDefnRep_5;
                    goto top_of_proc_1;
                  }
                  else
                  {
                    MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Prims_17;
                    MR_Integer next_value_of_tscc_proc_1_input_2_Var0_2 = Var0_2;
                    MR_Word next_value_of_tscc_proc_1_input_3_TermPath0_3 = TermPath0_3;
                    MR_Word next_value_of_tscc_proc_1_input_4_ProcDefnRep_5 = ProcDefnRep_5;

                    // direct tailcall eliminated
                    ;
                    tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                    tscc_proc_1_input_2_Var0_2 = next_value_of_tscc_proc_1_input_2_Var0_2;
                    tscc_proc_1_input_3_TermPath0_3 = next_value_of_tscc_proc_1_input_3_TermPath0_3;
                    tscc_proc_1_input_4_ProcDefnRep_5 = next_value_of_tscc_proc_1_input_4_ProcDefnRep_5;
                    goto top_of_proc_1;
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (Var0_2)), BoundVars_25);
                  if (succeeded)
                  {
                    {
                      mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_tree_scalar_common_1[33])));
                      return;
                    }
                  }
                  else
                  {
                    MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Prims_17;
                    MR_Integer next_value_of_tscc_proc_1_input_2_Var0_2 = Var0_2;
                    MR_Word next_value_of_tscc_proc_1_input_3_TermPath0_3 = TermPath0_3;
                    MR_Word next_value_of_tscc_proc_1_input_4_ProcDefnRep_5 = ProcDefnRep_5;

                    // direct tailcall eliminated
                    ;
                    tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                    tscc_proc_1_input_2_Var0_2 = next_value_of_tscc_proc_1_input_2_Var0_2;
                    tscc_proc_1_input_3_TermPath0_3 = next_value_of_tscc_proc_1_input_3_TermPath0_3;
                    tscc_proc_1_input_4_ProcDefnRep_5 = next_value_of_tscc_proc_1_input_4_ProcDefnRep_5;
                    goto top_of_proc_1;
                  }
                }
                break;
              case (MR_Integer) 4:
                {
                  succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (Var0_2)), BoundVars_25);
                  if (succeeded)
                  {
                    {
                      Origin_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Origin_6, 0) = ((MR_Box) (File_23));
                      MR_hl_field(MR_mktag(3), Origin_6, 1) = ((MR_Box) (Line_24));
                      MR_hl_field(MR_mktag(3), Origin_6, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                    }
                  }
                  else
                  {
                    MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Prims_17;
                    MR_Integer next_value_of_tscc_proc_1_input_2_Var0_2 = Var0_2;
                    MR_Word next_value_of_tscc_proc_1_input_3_TermPath0_3 = TermPath0_3;
                    MR_Word next_value_of_tscc_proc_1_input_4_ProcDefnRep_5 = ProcDefnRep_5;

                    // direct tailcall eliminated
                    ;
                    tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                    tscc_proc_1_input_2_Var0_2 = next_value_of_tscc_proc_1_input_2_Var0_2;
                    tscc_proc_1_input_3_TermPath0_3 = next_value_of_tscc_proc_1_input_3_TermPath0_3;
                    tscc_proc_1_input_4_ProcDefnRep_5 = next_value_of_tscc_proc_1_input_4_ProcDefnRep_5;
                    goto top_of_proc_1;
                  }
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word Args_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicGoal_26, (MR_Integer) 2))));
                  MR_Word next_value_of_tscc_proc_2_input_1_BoundVars_12 = BoundVars_25;
                  MR_String next_value_of_tscc_proc_2_input_2_File_13 = File_23;
                  MR_Integer next_value_of_tscc_proc_2_input_3_Line_14 = Line_24;
                  MR_Word next_value_of_tscc_proc_2_input_4_Args_15 = Args_49;
                  MR_Word next_value_of_tscc_proc_2_input_5_MaybeNodeId_16 = MaybeNodeId_28;
                  MR_Word next_value_of_tscc_proc_2_input_6_Prims_17 = Prims_17;
                  MR_Integer next_value_of_tscc_proc_2_input_7_Var_18 = Var0_2;
                  MR_Word next_value_of_tscc_proc_2_input_8_TermPath_19 = TermPath0_3;
                  MR_Word next_value_of_tscc_proc_2_input_9_ProcDefnRep_21 = ProcDefnRep_5;

                  // direct tailcall eliminated
                  ;
                  tscc_proc_2_input_1_BoundVars_12 = next_value_of_tscc_proc_2_input_1_BoundVars_12;
                  tscc_proc_2_input_2_File_13 = next_value_of_tscc_proc_2_input_2_File_13;
                  tscc_proc_2_input_3_Line_14 = next_value_of_tscc_proc_2_input_3_Line_14;
                  tscc_proc_2_input_4_Args_15 = next_value_of_tscc_proc_2_input_4_Args_15;
                  tscc_proc_2_input_5_MaybeNodeId_16 = next_value_of_tscc_proc_2_input_5_MaybeNodeId_16;
                  tscc_proc_2_input_6_Prims_17 = next_value_of_tscc_proc_2_input_6_Prims_17;
                  tscc_proc_2_input_7_Var_18 = next_value_of_tscc_proc_2_input_7_Var_18;
                  tscc_proc_2_input_8_TermPath_19 = next_value_of_tscc_proc_2_input_8_TermPath_19;
                  tscc_proc_2_input_9_ProcDefnRep_21 = next_value_of_tscc_proc_2_input_9_ProcDefnRep_21;
                  goto top_of_proc_2;
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Word Args_116 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicGoal_26, (MR_Integer) 3))));
                  MR_Word next_value_of_tscc_proc_2_input_1_BoundVars_12 = BoundVars_25;
                  MR_String next_value_of_tscc_proc_2_input_2_File_13 = File_23;
                  MR_Integer next_value_of_tscc_proc_2_input_3_Line_14 = Line_24;
                  MR_Word next_value_of_tscc_proc_2_input_4_Args_15 = Args_116;
                  MR_Word next_value_of_tscc_proc_2_input_5_MaybeNodeId_16 = MaybeNodeId_28;
                  MR_Word next_value_of_tscc_proc_2_input_6_Prims_17 = Prims_17;
                  MR_Integer next_value_of_tscc_proc_2_input_7_Var_18 = Var0_2;
                  MR_Word next_value_of_tscc_proc_2_input_8_TermPath_19 = TermPath0_3;
                  MR_Word next_value_of_tscc_proc_2_input_9_ProcDefnRep_21 = ProcDefnRep_5;

                  // direct tailcall eliminated
                  ;
                  tscc_proc_2_input_1_BoundVars_12 = next_value_of_tscc_proc_2_input_1_BoundVars_12;
                  tscc_proc_2_input_2_File_13 = next_value_of_tscc_proc_2_input_2_File_13;
                  tscc_proc_2_input_3_Line_14 = next_value_of_tscc_proc_2_input_3_Line_14;
                  tscc_proc_2_input_4_Args_15 = next_value_of_tscc_proc_2_input_4_Args_15;
                  tscc_proc_2_input_5_MaybeNodeId_16 = next_value_of_tscc_proc_2_input_5_MaybeNodeId_16;
                  tscc_proc_2_input_6_Prims_17 = next_value_of_tscc_proc_2_input_6_Prims_17;
                  tscc_proc_2_input_7_Var_18 = next_value_of_tscc_proc_2_input_7_Var_18;
                  tscc_proc_2_input_8_TermPath_19 = next_value_of_tscc_proc_2_input_8_TermPath_19;
                  tscc_proc_2_input_9_ProcDefnRep_21 = next_value_of_tscc_proc_2_input_9_ProcDefnRep_21;
                  goto top_of_proc_2;
                }
                break;
              case (MR_Integer) 7:
                {
                  MR_String Module_52 = ((MR_String) ((MR_hl_field(MR_mktag(3), AtomicGoal_26, (MR_Integer) 1))));
                  MR_String Name_53 = ((MR_String) ((MR_hl_field(MR_mktag(3), AtomicGoal_26, (MR_Integer) 2))));
                  MR_Word Args_117 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicGoal_26, (MR_Integer) 3))));
                  MR_Integer NewVar_54;

                  succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (Var0_2)), BoundVars_25);
                  if (succeeded)
                    succeeded = mdb__declarative_tree__plain_call_is_special_case_4_p_0(Module_52, Name_53, Args_117, &NewVar_54);
                  if (succeeded)
                  {
                    MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Prims_17;
                    MR_Integer next_value_of_tscc_proc_1_input_2_Var0_2 = NewVar_54;
                    MR_Word next_value_of_tscc_proc_1_input_3_TermPath0_3 = TermPath0_3;
                    MR_Word next_value_of_tscc_proc_1_input_4_ProcDefnRep_5 = ProcDefnRep_5;

                    // direct tailcall eliminated
                    ;
                    tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                    tscc_proc_1_input_2_Var0_2 = next_value_of_tscc_proc_1_input_2_Var0_2;
                    tscc_proc_1_input_3_TermPath0_3 = next_value_of_tscc_proc_1_input_3_TermPath0_3;
                    tscc_proc_1_input_4_ProcDefnRep_5 = next_value_of_tscc_proc_1_input_4_ProcDefnRep_5;
                    goto top_of_proc_1;
                  }
                  else
                  {
                    MR_Word next_value_of_tscc_proc_2_input_1_BoundVars_12 = BoundVars_25;
                    MR_String next_value_of_tscc_proc_2_input_2_File_13 = File_23;
                    MR_Integer next_value_of_tscc_proc_2_input_3_Line_14 = Line_24;
                    MR_Word next_value_of_tscc_proc_2_input_4_Args_15 = Args_117;
                    MR_Word next_value_of_tscc_proc_2_input_5_MaybeNodeId_16 = MaybeNodeId_28;
                    MR_Word next_value_of_tscc_proc_2_input_6_Prims_17 = Prims_17;
                    MR_Integer next_value_of_tscc_proc_2_input_7_Var_18 = Var0_2;
                    MR_Word next_value_of_tscc_proc_2_input_8_TermPath_19 = TermPath0_3;
                    MR_Word next_value_of_tscc_proc_2_input_9_ProcDefnRep_21 = ProcDefnRep_5;

                    // direct tailcall eliminated
                    ;
                    tscc_proc_2_input_1_BoundVars_12 = next_value_of_tscc_proc_2_input_1_BoundVars_12;
                    tscc_proc_2_input_2_File_13 = next_value_of_tscc_proc_2_input_2_File_13;
                    tscc_proc_2_input_3_Line_14 = next_value_of_tscc_proc_2_input_3_Line_14;
                    tscc_proc_2_input_4_Args_15 = next_value_of_tscc_proc_2_input_4_Args_15;
                    tscc_proc_2_input_5_MaybeNodeId_16 = next_value_of_tscc_proc_2_input_5_MaybeNodeId_16;
                    tscc_proc_2_input_6_Prims_17 = next_value_of_tscc_proc_2_input_6_Prims_17;
                    tscc_proc_2_input_7_Var_18 = next_value_of_tscc_proc_2_input_7_Var_18;
                    tscc_proc_2_input_8_TermPath_19 = next_value_of_tscc_proc_2_input_8_TermPath_19;
                    tscc_proc_2_input_9_ProcDefnRep_21 = next_value_of_tscc_proc_2_input_9_ProcDefnRep_21;
                    goto top_of_proc_2;
                  }
                }
                break;
              case (MR_Integer) 8:
                {
                  succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (Var0_2)), BoundVars_25);
                  if (succeeded)
                  {
                    {
                      Origin_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Origin_6, 0) = ((MR_Box) (File_23));
                      MR_hl_field(MR_mktag(3), Origin_6, 1) = ((MR_Box) (Line_24));
                      MR_hl_field(MR_mktag(3), Origin_6, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                    }
                  }
                  else
                  {
                    MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Prims_17;
                    MR_Integer next_value_of_tscc_proc_1_input_2_Var0_2 = Var0_2;
                    MR_Word next_value_of_tscc_proc_1_input_3_TermPath0_3 = TermPath0_3;
                    MR_Word next_value_of_tscc_proc_1_input_4_ProcDefnRep_5 = ProcDefnRep_5;

                    // direct tailcall eliminated
                    ;
                    tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                    tscc_proc_1_input_2_Var0_2 = next_value_of_tscc_proc_1_input_2_Var0_2;
                    tscc_proc_1_input_3_TermPath0_3 = next_value_of_tscc_proc_1_input_3_TermPath0_3;
                    tscc_proc_1_input_4_ProcDefnRep_5 = next_value_of_tscc_proc_1_input_4_ProcDefnRep_5;
                    goto top_of_proc_1;
                  }
                }
                break;
              case (MR_Integer) 9:
                {
                  succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (Var0_2)), BoundVars_25);
                  if (succeeded)
                  {
                    {
                      mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_tree_scalar_common_1[30])));
                      return;
                    }
                  }
                  else
                  {
                    MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Prims_17;
                    MR_Integer next_value_of_tscc_proc_1_input_2_Var0_2 = Var0_2;
                    MR_Word next_value_of_tscc_proc_1_input_3_TermPath0_3 = TermPath0_3;
                    MR_Word next_value_of_tscc_proc_1_input_4_ProcDefnRep_5 = ProcDefnRep_5;

                    // direct tailcall eliminated
                    ;
                    tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                    tscc_proc_1_input_2_Var0_2 = next_value_of_tscc_proc_1_input_2_Var0_2;
                    tscc_proc_1_input_3_TermPath0_3 = next_value_of_tscc_proc_1_input_3_TermPath0_3;
                    tscc_proc_1_input_4_ProcDefnRep_5 = next_value_of_tscc_proc_1_input_4_ProcDefnRep_5;
                    goto top_of_proc_1;
                  }
                }
                break;
            }
            break;
        }
      }
      tscc_output_1_Origin_6 = Origin_6;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word BoundVars_12 = tscc_proc_2_input_1_BoundVars_12;
      MR_String File_13 = tscc_proc_2_input_2_File_13;
      MR_Integer Line_14 = tscc_proc_2_input_3_Line_14;
      MR_Word Args_15 = tscc_proc_2_input_4_Args_15;
      MR_Word MaybeNodeId_16 = tscc_proc_2_input_5_MaybeNodeId_16;
      MR_Word Prims_17 = tscc_proc_2_input_6_Prims_17;
      MR_Integer Var_18 = tscc_proc_2_input_7_Var_18;
      MR_Word TermPath_19 = tscc_proc_2_input_8_TermPath_19;
      MR_Word ProcDefnRep_21 = tscc_proc_2_input_9_ProcDefnRep_21;
      MR_Word Origin_22;
      MR_bool succeeded;

      succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (Var_18)), BoundVars_12);
      if (succeeded)
      {
        MR_Word Pos_23;
        MR_Integer Var_32;

        Var_32 = mercury__list__length_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Args_15);
        mdb__declarative_tree__find_arg_pos_from_back_4_p_0(Args_15, Var_18, Var_32, &Pos_23);
        if ((MaybeNodeId_16 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          {
            Origin_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Origin_22, 0) = ((MR_Box) (File_13));
            MR_hl_field(MR_mktag(3), Origin_22, 1) = ((MR_Box) (Line_14));
            MR_hl_field(MR_mktag(3), Origin_22, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
          }
        }
        else
        {
          MR_Box NodeId_24 = (MR_hl_field(MR_mktag(1), MaybeNodeId_16, (MR_Integer) 0));
          MR_Word Var_26 = ((MR_Word) (NodeId_24));

          {
            Origin_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Origin_22, 0) = ((MR_Box) (Var_26));
            MR_hl_field(MR_mktag(1), Origin_22, 1) = ((MR_Box) (Pos_23));
            MR_hl_field(MR_mktag(1), Origin_22, 2) = ((MR_Box) (TermPath_19));
          }
        }
      }
      else
      {
        MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Prims_17;
        MR_Integer next_value_of_tscc_proc_1_input_2_Var0_2 = Var_18;
        MR_Word next_value_of_tscc_proc_1_input_3_TermPath0_3 = TermPath_19;
        MR_Word next_value_of_tscc_proc_1_input_4_ProcDefnRep_5 = ProcDefnRep_21;

        // direct tailcall eliminated
        ;
        tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
        tscc_proc_1_input_2_Var0_2 = next_value_of_tscc_proc_1_input_2_Var0_2;
        tscc_proc_1_input_3_TermPath0_3 = next_value_of_tscc_proc_1_input_3_TermPath0_3;
        tscc_proc_1_input_4_ProcDefnRep_5 = next_value_of_tscc_proc_1_input_4_ProcDefnRep_5;
        goto top_of_proc_1;
      }
      tscc_output_1_Origin_6 = Origin_22;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_Origin_6 = tscc_output_1_Origin_6;
    return;
  }
}

static void MR_CALL 
mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_118_101_114_115_101_95_99_97_108_108_95_95_91_49_44_32_49_48_93_95_48_11_p_0(
  MR_Word tscc_proc_2_input_1_BoundVars_12,
  MR_String tscc_proc_2_input_2_File_13,
  MR_Integer tscc_proc_2_input_3_Line_14,
  MR_Word tscc_proc_2_input_4_Args_15,
  MR_Word tscc_proc_2_input_5_MaybeNodeId_16,
  MR_Word tscc_proc_2_input_6_Prims_17,
  MR_Integer tscc_proc_2_input_7_Var_18,
  MR_Word tscc_proc_2_input_8_TermPath_19,
  MR_Word tscc_proc_2_input_9_ProcDefnRep_21,
  MR_Word * tscc_output_ptr_1_Origin_6)
{
  {
    MR_Word tscc_proc_1_input_1_HeadVar__1_1;
    MR_Integer tscc_proc_1_input_2_Var0_2;
    MR_Word tscc_proc_1_input_3_TermPath0_3;
    MR_Word tscc_proc_1_input_4_ProcDefnRep_5;
    MR_Word tscc_output_1_Origin_6;

    // The code for TSCC PROC 2: pred mdb.declarative_tree.UnusedArgs__pred__traverse_call__[1, 10]_0/11-0.
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: pred mdb.declarative_tree.UnusedArgs__pred__traverse_primitives__[1, 5]_0/6-0
    ;
    // proc 2 in TSCC: pred mdb.declarative_tree.UnusedArgs__pred__traverse_call__[1, 10]_0/11-0
    ;
    ;
    goto top_of_proc_2;
  top_of_proc_1:;
    {
      MR_Word HeadVar__1_1 = tscc_proc_1_input_1_HeadVar__1_1;
      MR_Integer Var0_2 = tscc_proc_1_input_2_Var0_2;
      MR_Word TermPath0_3 = tscc_proc_1_input_3_TermPath0_3;
      MR_Word ProcDefnRep_5 = tscc_proc_1_input_4_ProcDefnRep_5;
      MR_Word Origin_6;
      MR_bool succeeded;

      if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word HeadVars_12;
        MR_Word ArgPos_13;
        MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProcDefnRep_5, (MR_Integer) 0))));

        HeadVars_12 = mercury__list__map_2_f_0((MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_head_var_rep_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mdb__declarative_tree_scalar_common_4[2]), Var_15);
        ArgPos_13 = mdb__declarative_tree__find_arg_pos_2_f_0(HeadVars_12, Var0_2);
        {
          Origin_6 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Origin_6, 0) = ((MR_Box) (ArgPos_13));
          MR_hl_field(MR_mktag(2), Origin_6, 1) = ((MR_Box) (TermPath0_3));
        }
      }
      else
      {
        MR_Word Prim_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
        MR_Word Prims_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
        MR_String File_23 = ((MR_String) ((MR_hl_field(MR_mktag(0), Prim_16, (MR_Integer) 0))));
        MR_Integer Line_24 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Prim_16, (MR_Integer) 1))));
        MR_Word BoundVars_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Prim_16, (MR_Integer) 2))));
        MR_Word AtomicGoal_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Prim_16, (MR_Integer) 3))));
        MR_Word MaybeNodeId_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Prim_16, (MR_Integer) 5))));

        switch (MR_tag((MR_Word) AtomicGoal_26)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word FieldVars_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AtomicGoal_26, (MR_Integer) 2))));

              succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (Var0_2)), BoundVars_25);
              if (succeeded)
                if ((TermPath0_3 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  {
                    Origin_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Origin_6, 0) = ((MR_Box) (File_23));
                    MR_hl_field(MR_mktag(3), Origin_6, 1) = ((MR_Box) (Line_24));
                    MR_hl_field(MR_mktag(3), Origin_6, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 3));
                  }
                }
                else
                {
                  MR_Integer TermPathStep0_32 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), TermPath0_3, (MR_Integer) 0))));
                  MR_Word TermPath_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TermPath0_3, (MR_Integer) 1))));
                  MR_Integer Var_34;
                  MR_Box conv3_Var_34;
                  MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                  MR_Integer next_value_of_tscc_proc_1_input_2_Var0_2;
                  MR_Word next_value_of_tscc_proc_1_input_3_TermPath0_3;
                  MR_Word next_value_of_tscc_proc_1_input_4_ProcDefnRep_5;

                  mercury__list__det_index1_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), FieldVars_31, TermPathStep0_32, &conv3_Var_34);
                  Var_34 = ((MR_Integer) (conv3_Var_34));
                  // direct tailcall eliminated
                  ;
                  next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Prims_17;
                  next_value_of_tscc_proc_1_input_2_Var0_2 = Var_34;
                  next_value_of_tscc_proc_1_input_3_TermPath0_3 = TermPath_33;
                  next_value_of_tscc_proc_1_input_4_ProcDefnRep_5 = ProcDefnRep_5;
                  tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                  tscc_proc_1_input_2_Var0_2 = next_value_of_tscc_proc_1_input_2_Var0_2;
                  tscc_proc_1_input_3_TermPath0_3 = next_value_of_tscc_proc_1_input_3_TermPath0_3;
                  tscc_proc_1_input_4_ProcDefnRep_5 = next_value_of_tscc_proc_1_input_4_ProcDefnRep_5;
                  goto top_of_proc_1;
                }
              else
              {
                MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Prims_17;
                MR_Integer next_value_of_tscc_proc_1_input_2_Var0_2 = Var0_2;
                MR_Word next_value_of_tscc_proc_1_input_3_TermPath0_3 = TermPath0_3;
                MR_Word next_value_of_tscc_proc_1_input_4_ProcDefnRep_5 = ProcDefnRep_5;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                tscc_proc_1_input_2_Var0_2 = next_value_of_tscc_proc_1_input_2_Var0_2;
                tscc_proc_1_input_3_TermPath0_3 = next_value_of_tscc_proc_1_input_3_TermPath0_3;
                tscc_proc_1_input_4_ProcDefnRep_5 = next_value_of_tscc_proc_1_input_4_ProcDefnRep_5;
                goto top_of_proc_1;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer CellVar_35 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), AtomicGoal_26, (MR_Integer) 0))));
              MR_Word FieldVars_85 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AtomicGoal_26, (MR_Integer) 2))));

              succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (Var0_2)), BoundVars_25);
              if (succeeded)
              {
                MR_Integer Pos_36;

                succeeded = mercury__list__index1_of_first_occurrence_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), FieldVars_85, ((MR_Box) (Var0_2)), &Pos_36);
                if (succeeded)
                {
                  MR_Word Var_78;
                  MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                  MR_Integer next_value_of_tscc_proc_1_input_2_Var0_2;
                  MR_Word next_value_of_tscc_proc_1_input_3_TermPath0_3;
                  MR_Word next_value_of_tscc_proc_1_input_4_ProcDefnRep_5;

                  {
                    Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (Pos_36));
                    MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) (TermPath0_3));
                  }
                  // direct tailcall eliminated
                  ;
                  next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Prims_17;
                  next_value_of_tscc_proc_1_input_2_Var0_2 = CellVar_35;
                  next_value_of_tscc_proc_1_input_3_TermPath0_3 = Var_78;
                  next_value_of_tscc_proc_1_input_4_ProcDefnRep_5 = ProcDefnRep_5;
                  tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                  tscc_proc_1_input_2_Var0_2 = next_value_of_tscc_proc_1_input_2_Var0_2;
                  tscc_proc_1_input_3_TermPath0_3 = next_value_of_tscc_proc_1_input_3_TermPath0_3;
                  tscc_proc_1_input_4_ProcDefnRep_5 = next_value_of_tscc_proc_1_input_4_ProcDefnRep_5;
                  goto top_of_proc_1;
                }
                else
                {
                  {
                    mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_tree_scalar_common_1[32])));
                    return;
                  }
                }
              }
              else
              {
                MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Prims_17;
                MR_Integer next_value_of_tscc_proc_1_input_2_Var0_2 = Var0_2;
                MR_Word next_value_of_tscc_proc_1_input_3_TermPath0_3 = TermPath0_3;
                MR_Word next_value_of_tscc_proc_1_input_4_ProcDefnRep_5 = ProcDefnRep_5;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                tscc_proc_1_input_2_Var0_2 = next_value_of_tscc_proc_1_input_2_Var0_2;
                tscc_proc_1_input_3_TermPath0_3 = next_value_of_tscc_proc_1_input_3_TermPath0_3;
                tscc_proc_1_input_4_ProcDefnRep_5 = next_value_of_tscc_proc_1_input_4_ProcDefnRep_5;
                goto top_of_proc_1;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word MaybeFieldVars_39 = ((MR_Word) ((MR_hl_field(MR_mktag(2), AtomicGoal_26, (MR_Integer) 2))));
              MR_Integer TermPathStep0_89;
              MR_Word TermPath_90;

              succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (Var0_2)), BoundVars_25);
              if (succeeded)
              {
                succeeded = (TermPath0_3 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  TermPathStep0_89 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), TermPath0_3, (MR_Integer) 0))));
                  TermPath_90 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TermPath0_3, (MR_Integer) 1))));
                }
              }
              if (succeeded)
              {
                MR_Word MaybeVar_40;
                MR_Box conv2_MaybeVar_40;

                mercury__list__det_index1_3_p_0((MR_Word) (&mdb__declarative_tree_scalar_common_1[3]), MaybeFieldVars_39, TermPathStep0_89, &conv2_MaybeVar_40);
                MaybeVar_40 = ((MR_Word) (conv2_MaybeVar_40));
                if ((MaybeVar_40 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Prims_17;
                  MR_Integer next_value_of_tscc_proc_1_input_2_Var0_2 = Var0_2;
                  MR_Word next_value_of_tscc_proc_1_input_3_TermPath0_3 = TermPath0_3;
                  MR_Word next_value_of_tscc_proc_1_input_4_ProcDefnRep_5 = ProcDefnRep_5;

                  // direct tailcall eliminated
                  ;
                  tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                  tscc_proc_1_input_2_Var0_2 = next_value_of_tscc_proc_1_input_2_Var0_2;
                  tscc_proc_1_input_3_TermPath0_3 = next_value_of_tscc_proc_1_input_3_TermPath0_3;
                  tscc_proc_1_input_4_ProcDefnRep_5 = next_value_of_tscc_proc_1_input_4_ProcDefnRep_5;
                  goto top_of_proc_1;
                }
                else
                {
                  MR_Integer Var_86 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybeVar_40, (MR_Integer) 0))));
                  MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Prims_17;
                  MR_Integer next_value_of_tscc_proc_1_input_2_Var0_2 = Var_86;
                  MR_Word next_value_of_tscc_proc_1_input_3_TermPath0_3 = TermPath_90;
                  MR_Word next_value_of_tscc_proc_1_input_4_ProcDefnRep_5 = ProcDefnRep_5;

                  // direct tailcall eliminated
                  ;
                  tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                  tscc_proc_1_input_2_Var0_2 = next_value_of_tscc_proc_1_input_2_Var0_2;
                  tscc_proc_1_input_3_TermPath0_3 = next_value_of_tscc_proc_1_input_3_TermPath0_3;
                  tscc_proc_1_input_4_ProcDefnRep_5 = next_value_of_tscc_proc_1_input_4_ProcDefnRep_5;
                  goto top_of_proc_1;
                }
              }
              else
              {
                MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Prims_17;
                MR_Integer next_value_of_tscc_proc_1_input_2_Var0_2 = Var0_2;
                MR_Word next_value_of_tscc_proc_1_input_3_TermPath0_3 = TermPath0_3;
                MR_Word next_value_of_tscc_proc_1_input_4_ProcDefnRep_5 = ProcDefnRep_5;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                tscc_proc_1_input_2_Var0_2 = next_value_of_tscc_proc_1_input_2_Var0_2;
                tscc_proc_1_input_3_TermPath0_3 = next_value_of_tscc_proc_1_input_3_TermPath0_3;
                tscc_proc_1_input_4_ProcDefnRep_5 = next_value_of_tscc_proc_1_input_4_ProcDefnRep_5;
                goto top_of_proc_1;
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), AtomicGoal_26, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word MaybeFieldVars_112 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicGoal_26, (MR_Integer) 3))));

                  succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (Var0_2)), BoundVars_25);
                  if (succeeded)
                    if ((TermPath0_3 == (MR_Word) ((MR_Unsigned) 0U)))
                    {
                      {
                        Origin_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), Origin_6, 0) = ((MR_Box) (File_23));
                        MR_hl_field(MR_mktag(3), Origin_6, 1) = ((MR_Box) (Line_24));
                        MR_hl_field(MR_mktag(3), Origin_6, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 3));
                      }
                    }
                    else
                    {
                      MR_Integer TermPathStep0_97 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), TermPath0_3, (MR_Integer) 0))));
                      MR_Word TermPath_98 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TermPath0_3, (MR_Integer) 1))));
                      MR_Word MaybeVar_100;
                      MR_Box conv1_MaybeVar_100;

                      mercury__list__det_index1_3_p_0((MR_Word) (&mdb__declarative_tree_scalar_common_1[3]), MaybeFieldVars_112, TermPathStep0_97, &conv1_MaybeVar_100);
                      MaybeVar_100 = ((MR_Word) (conv1_MaybeVar_100));
                      if ((MaybeVar_100 == (MR_Word) ((MR_Unsigned) 0U)))
                      {
                        {
                          mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_tree_scalar_common_1[31])));
                          return;
                        }
                      }
                      else
                      {
                        MR_Integer Var_95 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybeVar_100, (MR_Integer) 0))));
                        MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Prims_17;
                        MR_Integer next_value_of_tscc_proc_1_input_2_Var0_2 = Var_95;
                        MR_Word next_value_of_tscc_proc_1_input_3_TermPath0_3 = TermPath_98;
                        MR_Word next_value_of_tscc_proc_1_input_4_ProcDefnRep_5 = ProcDefnRep_5;

                        // direct tailcall eliminated
                        ;
                        tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                        tscc_proc_1_input_2_Var0_2 = next_value_of_tscc_proc_1_input_2_Var0_2;
                        tscc_proc_1_input_3_TermPath0_3 = next_value_of_tscc_proc_1_input_3_TermPath0_3;
                        tscc_proc_1_input_4_ProcDefnRep_5 = next_value_of_tscc_proc_1_input_4_ProcDefnRep_5;
                        goto top_of_proc_1;
                      }
                    }
                  else
                  {
                    MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Prims_17;
                    MR_Integer next_value_of_tscc_proc_1_input_2_Var0_2 = Var0_2;
                    MR_Word next_value_of_tscc_proc_1_input_3_TermPath0_3 = TermPath0_3;
                    MR_Word next_value_of_tscc_proc_1_input_4_ProcDefnRep_5 = ProcDefnRep_5;

                    // direct tailcall eliminated
                    ;
                    tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                    tscc_proc_1_input_2_Var0_2 = next_value_of_tscc_proc_1_input_2_Var0_2;
                    tscc_proc_1_input_3_TermPath0_3 = next_value_of_tscc_proc_1_input_3_TermPath0_3;
                    tscc_proc_1_input_4_ProcDefnRep_5 = next_value_of_tscc_proc_1_input_4_ProcDefnRep_5;
                    goto top_of_proc_1;
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer ToVar_43 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), AtomicGoal_26, (MR_Integer) 1))));
                  MR_Integer FromVar_44 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), AtomicGoal_26, (MR_Integer) 2))));

                  succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (Var0_2)), BoundVars_25);
                  if (succeeded)
                  {
                    MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                    MR_Integer next_value_of_tscc_proc_1_input_2_Var0_2;
                    MR_Word next_value_of_tscc_proc_1_input_3_TermPath0_3;
                    MR_Word next_value_of_tscc_proc_1_input_4_ProcDefnRep_5;

                    mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_108_95_114_101_113_117_105_114_101_95_95_104_111_49_95_95_91_51_93_95_48_3_p_0(Var0_2, ToVar_43, (MR_String) "traverse_primitives", (MR_String) "bad assign");
                    // direct tailcall eliminated
                    ;
                    next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Prims_17;
                    next_value_of_tscc_proc_1_input_2_Var0_2 = FromVar_44;
                    next_value_of_tscc_proc_1_input_3_TermPath0_3 = TermPath0_3;
                    next_value_of_tscc_proc_1_input_4_ProcDefnRep_5 = ProcDefnRep_5;
                    tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                    tscc_proc_1_input_2_Var0_2 = next_value_of_tscc_proc_1_input_2_Var0_2;
                    tscc_proc_1_input_3_TermPath0_3 = next_value_of_tscc_proc_1_input_3_TermPath0_3;
                    tscc_proc_1_input_4_ProcDefnRep_5 = next_value_of_tscc_proc_1_input_4_ProcDefnRep_5;
                    goto top_of_proc_1;
                  }
                  else
                  {
                    MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Prims_17;
                    MR_Integer next_value_of_tscc_proc_1_input_2_Var0_2 = Var0_2;
                    MR_Word next_value_of_tscc_proc_1_input_3_TermPath0_3 = TermPath0_3;
                    MR_Word next_value_of_tscc_proc_1_input_4_ProcDefnRep_5 = ProcDefnRep_5;

                    // direct tailcall eliminated
                    ;
                    tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                    tscc_proc_1_input_2_Var0_2 = next_value_of_tscc_proc_1_input_2_Var0_2;
                    tscc_proc_1_input_3_TermPath0_3 = next_value_of_tscc_proc_1_input_3_TermPath0_3;
                    tscc_proc_1_input_4_ProcDefnRep_5 = next_value_of_tscc_proc_1_input_4_ProcDefnRep_5;
                    goto top_of_proc_1;
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Integer ToVar_114 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), AtomicGoal_26, (MR_Integer) 1))));
                  MR_Integer FromVar_115 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), AtomicGoal_26, (MR_Integer) 2))));

                  succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (Var0_2)), BoundVars_25);
                  if (succeeded)
                  {
                    MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                    MR_Integer next_value_of_tscc_proc_1_input_2_Var0_2;
                    MR_Word next_value_of_tscc_proc_1_input_3_TermPath0_3;
                    MR_Word next_value_of_tscc_proc_1_input_4_ProcDefnRep_5;

                    mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_108_95_114_101_113_117_105_114_101_95_95_104_111_50_95_95_91_51_93_95_48_3_p_0(Var0_2, ToVar_114, (MR_String) "predicate \140mdb.declarative_tree.traverse_primitives\'/6", (MR_String) "bad unsafe_cast");
                    // direct tailcall eliminated
                    ;
                    next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Prims_17;
                    next_value_of_tscc_proc_1_input_2_Var0_2 = FromVar_115;
                    next_value_of_tscc_proc_1_input_3_TermPath0_3 = TermPath0_3;
                    next_value_of_tscc_proc_1_input_4_ProcDefnRep_5 = ProcDefnRep_5;
                    tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                    tscc_proc_1_input_2_Var0_2 = next_value_of_tscc_proc_1_input_2_Var0_2;
                    tscc_proc_1_input_3_TermPath0_3 = next_value_of_tscc_proc_1_input_3_TermPath0_3;
                    tscc_proc_1_input_4_ProcDefnRep_5 = next_value_of_tscc_proc_1_input_4_ProcDefnRep_5;
                    goto top_of_proc_1;
                  }
                  else
                  {
                    MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Prims_17;
                    MR_Integer next_value_of_tscc_proc_1_input_2_Var0_2 = Var0_2;
                    MR_Word next_value_of_tscc_proc_1_input_3_TermPath0_3 = TermPath0_3;
                    MR_Word next_value_of_tscc_proc_1_input_4_ProcDefnRep_5 = ProcDefnRep_5;

                    // direct tailcall eliminated
                    ;
                    tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                    tscc_proc_1_input_2_Var0_2 = next_value_of_tscc_proc_1_input_2_Var0_2;
                    tscc_proc_1_input_3_TermPath0_3 = next_value_of_tscc_proc_1_input_3_TermPath0_3;
                    tscc_proc_1_input_4_ProcDefnRep_5 = next_value_of_tscc_proc_1_input_4_ProcDefnRep_5;
                    goto top_of_proc_1;
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (Var0_2)), BoundVars_25);
                  if (succeeded)
                  {
                    {
                      mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_tree_scalar_common_1[33])));
                      return;
                    }
                  }
                  else
                  {
                    MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Prims_17;
                    MR_Integer next_value_of_tscc_proc_1_input_2_Var0_2 = Var0_2;
                    MR_Word next_value_of_tscc_proc_1_input_3_TermPath0_3 = TermPath0_3;
                    MR_Word next_value_of_tscc_proc_1_input_4_ProcDefnRep_5 = ProcDefnRep_5;

                    // direct tailcall eliminated
                    ;
                    tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                    tscc_proc_1_input_2_Var0_2 = next_value_of_tscc_proc_1_input_2_Var0_2;
                    tscc_proc_1_input_3_TermPath0_3 = next_value_of_tscc_proc_1_input_3_TermPath0_3;
                    tscc_proc_1_input_4_ProcDefnRep_5 = next_value_of_tscc_proc_1_input_4_ProcDefnRep_5;
                    goto top_of_proc_1;
                  }
                }
                break;
              case (MR_Integer) 4:
                {
                  succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (Var0_2)), BoundVars_25);
                  if (succeeded)
                  {
                    {
                      Origin_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Origin_6, 0) = ((MR_Box) (File_23));
                      MR_hl_field(MR_mktag(3), Origin_6, 1) = ((MR_Box) (Line_24));
                      MR_hl_field(MR_mktag(3), Origin_6, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                    }
                  }
                  else
                  {
                    MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Prims_17;
                    MR_Integer next_value_of_tscc_proc_1_input_2_Var0_2 = Var0_2;
                    MR_Word next_value_of_tscc_proc_1_input_3_TermPath0_3 = TermPath0_3;
                    MR_Word next_value_of_tscc_proc_1_input_4_ProcDefnRep_5 = ProcDefnRep_5;

                    // direct tailcall eliminated
                    ;
                    tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                    tscc_proc_1_input_2_Var0_2 = next_value_of_tscc_proc_1_input_2_Var0_2;
                    tscc_proc_1_input_3_TermPath0_3 = next_value_of_tscc_proc_1_input_3_TermPath0_3;
                    tscc_proc_1_input_4_ProcDefnRep_5 = next_value_of_tscc_proc_1_input_4_ProcDefnRep_5;
                    goto top_of_proc_1;
                  }
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word Args_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicGoal_26, (MR_Integer) 2))));
                  MR_Word next_value_of_tscc_proc_2_input_1_BoundVars_12 = BoundVars_25;
                  MR_String next_value_of_tscc_proc_2_input_2_File_13 = File_23;
                  MR_Integer next_value_of_tscc_proc_2_input_3_Line_14 = Line_24;
                  MR_Word next_value_of_tscc_proc_2_input_4_Args_15 = Args_49;
                  MR_Word next_value_of_tscc_proc_2_input_5_MaybeNodeId_16 = MaybeNodeId_28;
                  MR_Word next_value_of_tscc_proc_2_input_6_Prims_17 = Prims_17;
                  MR_Integer next_value_of_tscc_proc_2_input_7_Var_18 = Var0_2;
                  MR_Word next_value_of_tscc_proc_2_input_8_TermPath_19 = TermPath0_3;
                  MR_Word next_value_of_tscc_proc_2_input_9_ProcDefnRep_21 = ProcDefnRep_5;

                  // direct tailcall eliminated
                  ;
                  tscc_proc_2_input_1_BoundVars_12 = next_value_of_tscc_proc_2_input_1_BoundVars_12;
                  tscc_proc_2_input_2_File_13 = next_value_of_tscc_proc_2_input_2_File_13;
                  tscc_proc_2_input_3_Line_14 = next_value_of_tscc_proc_2_input_3_Line_14;
                  tscc_proc_2_input_4_Args_15 = next_value_of_tscc_proc_2_input_4_Args_15;
                  tscc_proc_2_input_5_MaybeNodeId_16 = next_value_of_tscc_proc_2_input_5_MaybeNodeId_16;
                  tscc_proc_2_input_6_Prims_17 = next_value_of_tscc_proc_2_input_6_Prims_17;
                  tscc_proc_2_input_7_Var_18 = next_value_of_tscc_proc_2_input_7_Var_18;
                  tscc_proc_2_input_8_TermPath_19 = next_value_of_tscc_proc_2_input_8_TermPath_19;
                  tscc_proc_2_input_9_ProcDefnRep_21 = next_value_of_tscc_proc_2_input_9_ProcDefnRep_21;
                  goto top_of_proc_2;
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Word Args_116 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicGoal_26, (MR_Integer) 3))));
                  MR_Word next_value_of_tscc_proc_2_input_1_BoundVars_12 = BoundVars_25;
                  MR_String next_value_of_tscc_proc_2_input_2_File_13 = File_23;
                  MR_Integer next_value_of_tscc_proc_2_input_3_Line_14 = Line_24;
                  MR_Word next_value_of_tscc_proc_2_input_4_Args_15 = Args_116;
                  MR_Word next_value_of_tscc_proc_2_input_5_MaybeNodeId_16 = MaybeNodeId_28;
                  MR_Word next_value_of_tscc_proc_2_input_6_Prims_17 = Prims_17;
                  MR_Integer next_value_of_tscc_proc_2_input_7_Var_18 = Var0_2;
                  MR_Word next_value_of_tscc_proc_2_input_8_TermPath_19 = TermPath0_3;
                  MR_Word next_value_of_tscc_proc_2_input_9_ProcDefnRep_21 = ProcDefnRep_5;

                  // direct tailcall eliminated
                  ;
                  tscc_proc_2_input_1_BoundVars_12 = next_value_of_tscc_proc_2_input_1_BoundVars_12;
                  tscc_proc_2_input_2_File_13 = next_value_of_tscc_proc_2_input_2_File_13;
                  tscc_proc_2_input_3_Line_14 = next_value_of_tscc_proc_2_input_3_Line_14;
                  tscc_proc_2_input_4_Args_15 = next_value_of_tscc_proc_2_input_4_Args_15;
                  tscc_proc_2_input_5_MaybeNodeId_16 = next_value_of_tscc_proc_2_input_5_MaybeNodeId_16;
                  tscc_proc_2_input_6_Prims_17 = next_value_of_tscc_proc_2_input_6_Prims_17;
                  tscc_proc_2_input_7_Var_18 = next_value_of_tscc_proc_2_input_7_Var_18;
                  tscc_proc_2_input_8_TermPath_19 = next_value_of_tscc_proc_2_input_8_TermPath_19;
                  tscc_proc_2_input_9_ProcDefnRep_21 = next_value_of_tscc_proc_2_input_9_ProcDefnRep_21;
                  goto top_of_proc_2;
                }
                break;
              case (MR_Integer) 7:
                {
                  MR_String Module_52 = ((MR_String) ((MR_hl_field(MR_mktag(3), AtomicGoal_26, (MR_Integer) 1))));
                  MR_String Name_53 = ((MR_String) ((MR_hl_field(MR_mktag(3), AtomicGoal_26, (MR_Integer) 2))));
                  MR_Word Args_117 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicGoal_26, (MR_Integer) 3))));
                  MR_Integer NewVar_54;

                  succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (Var0_2)), BoundVars_25);
                  if (succeeded)
                    succeeded = mdb__declarative_tree__plain_call_is_special_case_4_p_0(Module_52, Name_53, Args_117, &NewVar_54);
                  if (succeeded)
                  {
                    MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Prims_17;
                    MR_Integer next_value_of_tscc_proc_1_input_2_Var0_2 = NewVar_54;
                    MR_Word next_value_of_tscc_proc_1_input_3_TermPath0_3 = TermPath0_3;
                    MR_Word next_value_of_tscc_proc_1_input_4_ProcDefnRep_5 = ProcDefnRep_5;

                    // direct tailcall eliminated
                    ;
                    tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                    tscc_proc_1_input_2_Var0_2 = next_value_of_tscc_proc_1_input_2_Var0_2;
                    tscc_proc_1_input_3_TermPath0_3 = next_value_of_tscc_proc_1_input_3_TermPath0_3;
                    tscc_proc_1_input_4_ProcDefnRep_5 = next_value_of_tscc_proc_1_input_4_ProcDefnRep_5;
                    goto top_of_proc_1;
                  }
                  else
                  {
                    MR_Word next_value_of_tscc_proc_2_input_1_BoundVars_12 = BoundVars_25;
                    MR_String next_value_of_tscc_proc_2_input_2_File_13 = File_23;
                    MR_Integer next_value_of_tscc_proc_2_input_3_Line_14 = Line_24;
                    MR_Word next_value_of_tscc_proc_2_input_4_Args_15 = Args_117;
                    MR_Word next_value_of_tscc_proc_2_input_5_MaybeNodeId_16 = MaybeNodeId_28;
                    MR_Word next_value_of_tscc_proc_2_input_6_Prims_17 = Prims_17;
                    MR_Integer next_value_of_tscc_proc_2_input_7_Var_18 = Var0_2;
                    MR_Word next_value_of_tscc_proc_2_input_8_TermPath_19 = TermPath0_3;
                    MR_Word next_value_of_tscc_proc_2_input_9_ProcDefnRep_21 = ProcDefnRep_5;

                    // direct tailcall eliminated
                    ;
                    tscc_proc_2_input_1_BoundVars_12 = next_value_of_tscc_proc_2_input_1_BoundVars_12;
                    tscc_proc_2_input_2_File_13 = next_value_of_tscc_proc_2_input_2_File_13;
                    tscc_proc_2_input_3_Line_14 = next_value_of_tscc_proc_2_input_3_Line_14;
                    tscc_proc_2_input_4_Args_15 = next_value_of_tscc_proc_2_input_4_Args_15;
                    tscc_proc_2_input_5_MaybeNodeId_16 = next_value_of_tscc_proc_2_input_5_MaybeNodeId_16;
                    tscc_proc_2_input_6_Prims_17 = next_value_of_tscc_proc_2_input_6_Prims_17;
                    tscc_proc_2_input_7_Var_18 = next_value_of_tscc_proc_2_input_7_Var_18;
                    tscc_proc_2_input_8_TermPath_19 = next_value_of_tscc_proc_2_input_8_TermPath_19;
                    tscc_proc_2_input_9_ProcDefnRep_21 = next_value_of_tscc_proc_2_input_9_ProcDefnRep_21;
                    goto top_of_proc_2;
                  }
                }
                break;
              case (MR_Integer) 8:
                {
                  succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (Var0_2)), BoundVars_25);
                  if (succeeded)
                  {
                    {
                      Origin_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Origin_6, 0) = ((MR_Box) (File_23));
                      MR_hl_field(MR_mktag(3), Origin_6, 1) = ((MR_Box) (Line_24));
                      MR_hl_field(MR_mktag(3), Origin_6, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                    }
                  }
                  else
                  {
                    MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Prims_17;
                    MR_Integer next_value_of_tscc_proc_1_input_2_Var0_2 = Var0_2;
                    MR_Word next_value_of_tscc_proc_1_input_3_TermPath0_3 = TermPath0_3;
                    MR_Word next_value_of_tscc_proc_1_input_4_ProcDefnRep_5 = ProcDefnRep_5;

                    // direct tailcall eliminated
                    ;
                    tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                    tscc_proc_1_input_2_Var0_2 = next_value_of_tscc_proc_1_input_2_Var0_2;
                    tscc_proc_1_input_3_TermPath0_3 = next_value_of_tscc_proc_1_input_3_TermPath0_3;
                    tscc_proc_1_input_4_ProcDefnRep_5 = next_value_of_tscc_proc_1_input_4_ProcDefnRep_5;
                    goto top_of_proc_1;
                  }
                }
                break;
              case (MR_Integer) 9:
                {
                  succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (Var0_2)), BoundVars_25);
                  if (succeeded)
                  {
                    {
                      mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_tree_scalar_common_1[30])));
                      return;
                    }
                  }
                  else
                  {
                    MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Prims_17;
                    MR_Integer next_value_of_tscc_proc_1_input_2_Var0_2 = Var0_2;
                    MR_Word next_value_of_tscc_proc_1_input_3_TermPath0_3 = TermPath0_3;
                    MR_Word next_value_of_tscc_proc_1_input_4_ProcDefnRep_5 = ProcDefnRep_5;

                    // direct tailcall eliminated
                    ;
                    tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                    tscc_proc_1_input_2_Var0_2 = next_value_of_tscc_proc_1_input_2_Var0_2;
                    tscc_proc_1_input_3_TermPath0_3 = next_value_of_tscc_proc_1_input_3_TermPath0_3;
                    tscc_proc_1_input_4_ProcDefnRep_5 = next_value_of_tscc_proc_1_input_4_ProcDefnRep_5;
                    goto top_of_proc_1;
                  }
                }
                break;
            }
            break;
        }
      }
      tscc_output_1_Origin_6 = Origin_6;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word BoundVars_12 = tscc_proc_2_input_1_BoundVars_12;
      MR_String File_13 = tscc_proc_2_input_2_File_13;
      MR_Integer Line_14 = tscc_proc_2_input_3_Line_14;
      MR_Word Args_15 = tscc_proc_2_input_4_Args_15;
      MR_Word MaybeNodeId_16 = tscc_proc_2_input_5_MaybeNodeId_16;
      MR_Word Prims_17 = tscc_proc_2_input_6_Prims_17;
      MR_Integer Var_18 = tscc_proc_2_input_7_Var_18;
      MR_Word TermPath_19 = tscc_proc_2_input_8_TermPath_19;
      MR_Word ProcDefnRep_21 = tscc_proc_2_input_9_ProcDefnRep_21;
      MR_Word Origin_22;
      MR_bool succeeded;

      succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (Var_18)), BoundVars_12);
      if (succeeded)
      {
        MR_Word Pos_23;
        MR_Integer Var_32;

        Var_32 = mercury__list__length_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Args_15);
        mdb__declarative_tree__find_arg_pos_from_back_4_p_0(Args_15, Var_18, Var_32, &Pos_23);
        if ((MaybeNodeId_16 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          {
            Origin_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Origin_22, 0) = ((MR_Box) (File_13));
            MR_hl_field(MR_mktag(3), Origin_22, 1) = ((MR_Box) (Line_14));
            MR_hl_field(MR_mktag(3), Origin_22, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
          }
        }
        else
        {
          MR_Box NodeId_24 = (MR_hl_field(MR_mktag(1), MaybeNodeId_16, (MR_Integer) 0));
          MR_Word Var_26 = ((MR_Word) (NodeId_24));

          {
            Origin_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Origin_22, 0) = ((MR_Box) (Var_26));
            MR_hl_field(MR_mktag(1), Origin_22, 1) = ((MR_Box) (Pos_23));
            MR_hl_field(MR_mktag(1), Origin_22, 2) = ((MR_Box) (TermPath_19));
          }
        }
      }
      else
      {
        MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Prims_17;
        MR_Integer next_value_of_tscc_proc_1_input_2_Var0_2 = Var_18;
        MR_Word next_value_of_tscc_proc_1_input_3_TermPath0_3 = TermPath_19;
        MR_Word next_value_of_tscc_proc_1_input_4_ProcDefnRep_5 = ProcDefnRep_21;

        // direct tailcall eliminated
        ;
        tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
        tscc_proc_1_input_2_Var0_2 = next_value_of_tscc_proc_1_input_2_Var0_2;
        tscc_proc_1_input_3_TermPath0_3 = next_value_of_tscc_proc_1_input_3_TermPath0_3;
        tscc_proc_1_input_4_ProcDefnRep_5 = next_value_of_tscc_proc_1_input_4_ProcDefnRep_5;
        goto top_of_proc_1;
      }
      tscc_output_1_Origin_6 = Origin_22;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_Origin_6 = tscc_output_1_Origin_6;
    return;
  }
}

static void MR_CALL 
mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_108_95_114_101_113_117_105_114_101_95_95_104_111_50_95_95_91_51_93_95_48_3_p_0(
  MR_Integer Var_9,
  MR_Integer Var_10,
  MR_String Loc_5,
  MR_String Msg_6)
{
  {
    MR_bool succeeded;

    succeeded = mdb__declarative_tree__IntroducedFrom__pred__traverse_primitives__1662__1_2_p_0(Var_9, Var_10);
    if (!(succeeded))
    {
      MR_Word Var_7;

      {
        Var_7 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_7, 0) = ((MR_Box) (Loc_5));
        MR_hl_field(MR_mktag(0), Var_7, 1) = ((MR_Box) (Msg_6));
      }
      {
        mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (Var_7)));
        return;
      }
    }
  }
}

static MR_bool MR_CALL 
mdb__declarative_tree__IntroducedFrom__pred__traverse_primitives__1662__1_2_p_0(
  MR_Integer Var0_2,
  MR_Integer ToVar_114)
{
  {
    MR_bool succeeded = (Var0_2 == ToVar_114);

    return succeeded;
  }
}

static void MR_CALL 
mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_108_95_114_101_113_117_105_114_101_95_95_104_111_49_95_95_91_51_93_95_48_3_p_0(
  MR_Integer Var_9,
  MR_Integer Var_10,
  MR_String Loc_5,
  MR_String Msg_6)
{
  {
    MR_bool succeeded;

    succeeded = mdb__declarative_tree__IntroducedFrom__pred__traverse_primitives__1650__1_2_p_0(Var_9, Var_10);
    if (!(succeeded))
    {
      MR_Word Var_7;

      {
        Var_7 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_7, 0) = ((MR_Box) (Loc_5));
        MR_hl_field(MR_mktag(0), Var_7, 1) = ((MR_Box) (Msg_6));
      }
      {
        mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (Var_7)));
        return;
      }
    }
  }
}

static MR_bool MR_CALL 
mdb__declarative_tree__IntroducedFrom__pred__traverse_primitives__1650__1_2_p_0(
  MR_Integer Var0_2,
  MR_Integer ToVar_43)
{
  {
    MR_bool succeeded = (Var0_2 == ToVar_43);

    return succeeded;
  }
}

static void MR_CALL 
mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_99_104_97_105_110_95_115_116_97_114_116_95_95_91_53_93_95_48_5_p_0(
  MR_Word TypeClassInfo_for_annotated_trace_49,
  MR_Box Store_6,
  MR_Box Ref_7,
  MR_Word ArgPos_8,
  MR_Word * ChainStart_10)
{
  {
    MR_bool succeeded;
    MR_Word Node_11;

    mdb__declarative_tree__det_edt_return_node_from_id_3_p_0(TypeClassInfo_for_annotated_trace_49, Store_6, Ref_7, &Node_11);
    switch (MR_tag((MR_Word) Node_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word TypeInfo_51_51;
          MR_Word TypeInfo_52_52;
          MR_Box CallId_13 = (MR_hl_field(MR_mktag(1), Node_11, (MR_Integer) 1));
          MR_Word ExitAtom_20;
          MR_Word CallNode_21;
          MR_Word CallAtom_22;
          MR_Word Args_73;
          MR_Word ArgInfo_74;
          MR_Word MaybeArg_77;

          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_annotated_trace_49, (MR_Integer) 2, &TypeInfo_51_51);
          ExitAtom_20 = mdb__declarative_execution__get_trace_exit_atom_1_f_0(TypeInfo_51_51, Node_11);
          mdb__declarative_execution__call_node_from_id_3_p_0(TypeClassInfo_for_annotated_trace_49, Store_6, CallId_13, &CallNode_21);
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_annotated_trace_49, (MR_Integer) 2, &TypeInfo_52_52);
          CallAtom_22 = mdb__declarative_execution__get_trace_call_atom_1_f_0(TypeInfo_52_52, CallNode_21);
          Args_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CallAtom_22, (MR_Integer) 1))));
          mdb__declarative_execution__select_arg_at_pos_3_p_0(ArgPos_8, Args_73, &ArgInfo_74);
          MaybeArg_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgInfo_74, (MR_Integer) 2))));
          succeeded = (MaybeArg_77 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            mdb__declarative_tree__find_chain_start_inside_5_p_0(TypeClassInfo_for_annotated_trace_49, Store_6, CallId_13, CallNode_21, ArgPos_8, ChainStart_10);
          }
          else
          {
            MR_Word Args_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExitAtom_20, (MR_Integer) 1))));
            MR_Word ArgInfo_83;
            MR_Word MaybeArg_86;

            mdb__declarative_execution__select_arg_at_pos_3_p_0(ArgPos_8, Args_82, &ArgInfo_83);
            MaybeArg_86 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgInfo_83, (MR_Integer) 2))));
            succeeded = (MaybeArg_86 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              succeeded = mdb__declarative_tree__not_at_depth_limit_2_p_0(TypeClassInfo_for_annotated_trace_49, Store_6, CallId_13);
              if (succeeded)
              {
                MR_Word TypeInfo_53_53;

                mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_annotated_trace_49, (MR_Integer) 2, &TypeInfo_53_53);
                mdb__declarative_tree__find_chain_start_outside_4_p_0(TypeInfo_53_53, CallNode_21, Node_11, ArgPos_8, ChainStart_10);
              }
              else
                *ChainStart_10 = (MR_Word) ((MR_Unsigned) 0U);
            }
            else
            {
              {
                mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_tree_scalar_common_1[28])));
                return;
              }
            }
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Node_11, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word TypeInfo_56_56;
              MR_Box CallId_43 = (MR_hl_field(MR_mktag(3), Node_11, (MR_Integer) 2));
              MR_Word CallNode_44;
              MR_Word CallAtom_45;
              MR_Word Args_91;
              MR_Word ArgInfo_92;
              MR_Word MaybeArg_95;

              mdb__declarative_execution__call_node_from_id_3_p_0(TypeClassInfo_for_annotated_trace_49, Store_6, CallId_43, &CallNode_44);
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_annotated_trace_49, (MR_Integer) 2, &TypeInfo_56_56);
              CallAtom_45 = mdb__declarative_execution__get_trace_call_atom_1_f_0(TypeInfo_56_56, CallNode_44);
              Args_91 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CallAtom_45, (MR_Integer) 1))));
              mdb__declarative_execution__select_arg_at_pos_3_p_0(ArgPos_8, Args_91, &ArgInfo_92);
              MaybeArg_95 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgInfo_92, (MR_Integer) 2))));
              succeeded = (MaybeArg_95 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                mdb__declarative_tree__find_chain_start_inside_5_p_0(TypeClassInfo_for_annotated_trace_49, Store_6, CallId_43, CallNode_44, ArgPos_8, ChainStart_10);
              }
              else
              {
                {
                  mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_tree_scalar_common_1[29])));
                  return;
                }
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word TypeInfo_59_59;
              MR_Box CallId_46 = (MR_hl_field(MR_mktag(3), Node_11, (MR_Integer) 2));
              MR_Word CallNode_47;
              MR_Word CallAtom_48;
              MR_Word Args_64;
              MR_Word ArgInfo_65;
              MR_Word MaybeArg_68;

              mdb__declarative_execution__call_node_from_id_3_p_0(TypeClassInfo_for_annotated_trace_49, Store_6, CallId_46, &CallNode_47);
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_annotated_trace_49, (MR_Integer) 2, &TypeInfo_59_59);
              CallAtom_48 = mdb__declarative_execution__get_trace_call_atom_1_f_0(TypeInfo_59_59, CallNode_47);
              Args_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CallAtom_48, (MR_Integer) 1))));
              mdb__declarative_execution__select_arg_at_pos_3_p_0(ArgPos_8, Args_64, &ArgInfo_65);
              MaybeArg_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgInfo_65, (MR_Integer) 2))));
              succeeded = (MaybeArg_68 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                mdb__declarative_tree__find_chain_start_inside_5_p_0(TypeClassInfo_for_annotated_trace_49, Store_6, CallId_46, CallNode_47, ArgPos_8, ChainStart_10);
              }
              else
              {
                {
                  mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_tree_scalar_common_1[27])));
                  return;
                }
              }
            }
            break;
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_parent_3_3_p_0(
  MR_Word TypeClassInfo_for_annotated_trace_4,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Box Store_5 = ((MR_Box) (HeadVar__1_1));
    MR_Box Ref_6 = ((MR_Box) (HeadVar__2_2));
    MR_Box Parent_7;
    MR_Word Node_8;
    MR_Box CallId_10;
    MR_Word Call_28;
    MR_Box CallPrecId_29;
    MR_Word ParentCallNode_30;

    mdb__declarative_tree__det_edt_return_node_from_id_3_p_0(TypeClassInfo_for_annotated_trace_4, Store_5, Ref_6, &Node_8);
    switch (MR_tag((MR_Word) Node_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        CallId_10 = (MR_hl_field(MR_mktag(1), Node_8, (MR_Integer) 1));
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Node_8, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            CallId_10 = (MR_hl_field(MR_mktag(3), Node_8, (MR_Integer) 2));
            break;
          case (MR_Integer) 1:
            CallId_10 = (MR_hl_field(MR_mktag(3), Node_8, (MR_Integer) 2));
            break;
        }
        break;
    }
    mdb__declarative_execution__call_node_from_id_3_p_0(TypeClassInfo_for_annotated_trace_4, Store_5, CallId_10, &Call_28);
    CallPrecId_29 = (MR_hl_field(MR_mktag(0), Call_28, (MR_Integer) 0));
    succeeded = mdb__declarative_tree__step_left_to_call_3_p_0(TypeClassInfo_for_annotated_trace_4, Store_5, CallPrecId_29, &ParentCallNode_30);
    if (succeeded)
    {
      Parent_7 = (MR_hl_field(MR_mktag(0), ParentCallNode_30, (MR_Integer) 1));
      *HeadVar__3_3 = ((MR_Word) (Parent_7));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_children_3_3_p_0(
  MR_Word TypeClassInfo_for_annotated_trace_4,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Box Store_6 = ((MR_Box) (HeadVar__1_1));
    MR_Box Ref_7 = ((MR_Box) (HeadVar__2_2));
    MR_Word Node_8;

    mdb__declarative_tree__det_edt_return_node_from_id_3_p_0(TypeClassInfo_for_annotated_trace_4, Store_6, Ref_7, &Node_8);
    switch (MR_tag((MR_Word) Node_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word TypeInfo_38_38;
          MR_Word Atom_21;
          MR_Box PrecId_33 = (MR_hl_field(MR_mktag(1), Node_8, (MR_Integer) 0));
          MR_Box CallId_34 = (MR_hl_field(MR_mktag(1), Node_8, (MR_Integer) 1));
          MR_Word CallNode_62;
          MR_Word Var_63;

          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_annotated_trace_4, (MR_Integer) 2, &TypeInfo_38_38);
          Atom_21 = mdb__declarative_execution__get_trace_exit_atom_1_f_0(TypeInfo_38_38, Node_8);
          mdb__declarative_execution__call_node_from_id_3_p_0(TypeClassInfo_for_annotated_trace_4, Store_6, CallId_34, &CallNode_62);
          Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CallNode_62, (MR_Integer) 5))));
          succeeded = (Var_63 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = mdb__declarative_tree__missing_answer_special_case_1_p_0(Atom_21);
            if (succeeded)
            {
              MR_Word TypeInfo_13_79;

              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_annotated_trace_4, (MR_Integer) 2, &TypeInfo_13_79);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_79, PrecId_33, CallId_34);
              if (succeeded)
                *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
              else
                mdb__declarative_tree__stratum_children_2_5_p_0(TypeClassInfo_for_annotated_trace_4, Store_6, PrecId_33, CallId_34, (MR_Word) ((MR_Unsigned) 0U), HeadVar__3_3);
            }
            else
            {
              MR_Word TypeInfo_15_87;

              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_annotated_trace_4, (MR_Integer) 2, &TypeInfo_15_87);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_87, PrecId_33, CallId_34);
              if (succeeded)
                *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
              else
                mdb__declarative_tree__contour_children_2_6_p_0(TypeClassInfo_for_annotated_trace_4, (MR_Integer) 0, Store_6, PrecId_33, CallId_34, (MR_Word) ((MR_Unsigned) 0U), HeadVar__3_3);
            }
            succeeded = MR_TRUE;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Node_8, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Box PrecId_9 = (MR_hl_field(MR_mktag(3), Node_8, (MR_Integer) 1));
              MR_Box CallId_10 = (MR_hl_field(MR_mktag(3), Node_8, (MR_Integer) 2));
              MR_Word Var_32;
              MR_Word TypeInfo_13_94;
              MR_Integer TypeInfoIndex_93;

              succeeded = mdb__declarative_tree__not_at_depth_limit_2_p_0(TypeClassInfo_for_annotated_trace_4, Store_6, CallId_10);
              if (succeeded)
              {
                Var_32 = (MR_Word) ((MR_Unsigned) 0U);
                TypeInfoIndex_93 = (MR_Integer) 2;
                mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_annotated_trace_4, TypeInfoIndex_93, &TypeInfo_13_94);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_94, PrecId_9, CallId_10);
                if (succeeded)
                  *HeadVar__3_3 = Var_32;
                else
                  mdb__declarative_tree__stratum_children_2_5_p_0(TypeClassInfo_for_annotated_trace_4, Store_6, PrecId_9, CallId_10, Var_32, HeadVar__3_3);
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_27;
              MR_Word Var_28;
              MR_Box PrecId_35 = (MR_hl_field(MR_mktag(3), Node_8, (MR_Integer) 1));
              MR_Box CallId_36 = (MR_hl_field(MR_mktag(3), Node_8, (MR_Integer) 2));
              MR_Word CallNode_41;
              MR_Word Var_42;
              MR_Word TypeInfo_15_59;
              MR_Integer TypeInfoIndex_58;

              mdb__declarative_execution__call_node_from_id_3_p_0(TypeClassInfo_for_annotated_trace_4, Store_6, CallId_36, &CallNode_41);
              Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CallNode_41, (MR_Integer) 5))));
              succeeded = (Var_42 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Var_27 = (MR_Integer) 1;
                Var_28 = (MR_Word) ((MR_Unsigned) 0U);
                TypeInfoIndex_58 = (MR_Integer) 2;
                mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_annotated_trace_4, TypeInfoIndex_58, &TypeInfo_15_59);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_59, PrecId_35, CallId_36);
                if (succeeded)
                  *HeadVar__3_3 = Var_28;
                else
                  mdb__declarative_tree__contour_children_2_6_p_0(TypeClassInfo_for_annotated_trace_4, Var_27, Store_6, PrecId_35, CallId_36, Var_28, HeadVar__3_3);
                succeeded = MR_TRUE;
              }
            }
            break;
        }
        break;
    }
    return succeeded;
  }
}

static void MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_get_i_bug_4_4_p_0(
  MR_Word TypeClassInfo_for_annotated_trace_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  {
    MR_Box Store_6 = ((MR_Box) (HeadVar__1_1));
    MR_Box BugRef_7 = ((MR_Box) (HeadVar__2_2));
    MR_Box InadmissibleRef_8 = ((MR_Box) (HeadVar__3_3));
    MR_Word BugAtom_9;
    MR_Word InadmissibleAtom_10;
    MR_Integer Event_11;
    MR_Word Node_16;
    MR_Word Node_62;

    mdb__declarative_tree__det_edt_return_node_from_id_3_p_0(TypeClassInfo_for_annotated_trace_5, Store_6, BugRef_7, &Node_16);
    switch (MR_tag((MR_Word) Node_16)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word TypeInfo_11_51;
          MR_Box CallId_18 = (MR_hl_field(MR_mktag(1), Node_16, (MR_Integer) 1));
          MR_Word CallNode_48;
          MR_Word CallAtom_49;

          mdb__declarative_execution__call_node_from_id_3_p_0(TypeClassInfo_for_annotated_trace_5, Store_6, CallId_18, &CallNode_48);
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_annotated_trace_5, (MR_Integer) 2, &TypeInfo_11_51);
          CallAtom_49 = mdb__declarative_execution__get_trace_call_atom_1_f_0(TypeInfo_11_51, CallNode_48);
          BugAtom_9 = (MR_Word) (CallAtom_49);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Node_16, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word TypeInfo_11_58;
              MR_Box CallId_36 = (MR_hl_field(MR_mktag(3), Node_16, (MR_Integer) 2));
              MR_Word CallNode_55;
              MR_Word CallAtom_56;

              mdb__declarative_execution__call_node_from_id_3_p_0(TypeClassInfo_for_annotated_trace_5, Store_6, CallId_36, &CallNode_55);
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_annotated_trace_5, (MR_Integer) 2, &TypeInfo_11_58);
              CallAtom_56 = mdb__declarative_execution__get_trace_call_atom_1_f_0(TypeInfo_11_58, CallNode_55);
              BugAtom_9 = (MR_Word) (CallAtom_56);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word TypeInfo_11_44;
              MR_Box CallId_37 = (MR_hl_field(MR_mktag(3), Node_16, (MR_Integer) 2));
              MR_Word CallNode_41;
              MR_Word CallAtom_42;

              mdb__declarative_execution__call_node_from_id_3_p_0(TypeClassInfo_for_annotated_trace_5, Store_6, CallId_37, &CallNode_41);
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_annotated_trace_5, (MR_Integer) 2, &TypeInfo_11_44);
              CallAtom_42 = mdb__declarative_execution__get_trace_call_atom_1_f_0(TypeInfo_11_44, CallNode_41);
              BugAtom_9 = (MR_Word) (CallAtom_42);
            }
            break;
        }
        break;
    }
    mdb__declarative_tree__get_edt_node_initial_atom_3_p_0(TypeClassInfo_for_annotated_trace_5, Store_6, InadmissibleRef_8, &InadmissibleAtom_10);
    mdb__declarative_tree__det_edt_return_node_from_id_3_p_0(TypeClassInfo_for_annotated_trace_5, Store_6, BugRef_7, &Node_62);
    switch (MR_tag((MR_Word) Node_62)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        Event_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Node_62, (MR_Integer) 4))));
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Node_62, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Event_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Node_62, (MR_Integer) 4))));
            break;
          case (MR_Integer) 1:
            Event_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Node_62, (MR_Integer) 5))));
            break;
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (BugAtom_9));
      MR_hl_field(MR_mktag(0), base, 1) = NULL;
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (InadmissibleAtom_10));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Event_11));
    }
  }
}

static void MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_get_e_bug_3_3_p_0(
  MR_Word TypeClassInfo_for_annotated_trace_4,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Box Store_6 = ((MR_Box) (HeadVar__1_1));
    MR_Box Ref_7 = ((MR_Box) (HeadVar__2_2));
    MR_Word Node_8;

    mdb__declarative_tree__det_edt_return_node_from_id_3_p_0(TypeClassInfo_for_annotated_trace_4, Store_6, Ref_7, &Node_8);
    switch (MR_tag((MR_Word) Node_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word TypeInfo_11_48;
          MR_Word TypeInfo_40_84;
          MR_Box CallId_10 = (MR_hl_field(MR_mktag(1), Node_8, (MR_Integer) 1));
          MR_Integer Event_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Node_8, (MR_Integer) 4))));
          MR_Word InitDeclAtom_17;
          MR_Word FinalDeclAtom_18;
          MR_Word Contour_19;
          MR_Word CallNode_45;
          MR_Word CallAtom_46;
          MR_Word ExitAtom_52;
          MR_Box CallId_53;
          MR_Word Call_54;
          MR_Integer CallIoSeq_55;
          MR_Integer ExitIoSeq_56;

          mdb__declarative_execution__call_node_from_id_3_p_0(TypeClassInfo_for_annotated_trace_4, Store_6, CallId_10, &CallNode_45);
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_annotated_trace_4, (MR_Integer) 2, &TypeInfo_11_48);
          CallAtom_46 = mdb__declarative_execution__get_trace_call_atom_1_f_0(TypeInfo_11_48, CallNode_45);
          InitDeclAtom_17 = (MR_Word) (CallAtom_46);
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_annotated_trace_4, (MR_Integer) 2, &TypeInfo_40_84);
          ExitAtom_52 = mdb__declarative_execution__get_trace_exit_atom_1_f_0(TypeInfo_40_84, Node_8);
          CallId_53 = (MR_hl_field(MR_mktag(1), Node_8, (MR_Integer) 1));
          mdb__declarative_execution__call_node_from_id_3_p_0(TypeClassInfo_for_annotated_trace_4, Store_6, CallId_53, &Call_54);
          CallIoSeq_55 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Call_54, (MR_Integer) 8))));
          ExitIoSeq_56 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Node_8, (MR_Integer) 6))));
          succeeded = (CallIoSeq_55 == ExitIoSeq_56);
          if (succeeded)
          {
            {
              FinalDeclAtom_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), FinalDeclAtom_18, 0) = ((MR_Box) (ExitAtom_52));
              MR_hl_field(MR_mktag(0), FinalDeclAtom_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          else
          {
            MR_Word Var_58;
            MR_Word Var_59;

            {
              Var_59 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_59, 0) = ((MR_Box) (CallIoSeq_55));
              MR_hl_field(MR_mktag(0), Var_59, 1) = ((MR_Box) (ExitIoSeq_56));
            }
            {
              Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (Var_59));
            }
            {
              FinalDeclAtom_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), FinalDeclAtom_18, 0) = ((MR_Box) (ExitAtom_52));
              MR_hl_field(MR_mktag(0), FinalDeclAtom_18, 1) = ((MR_Box) (Var_58));
            }
          }
          mdb__declarative_tree__get_exit_atoms_in_contour_3_p_0(TypeClassInfo_for_annotated_trace_4, Store_6, Node_8, &Contour_19);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            *HeadVar__3_3 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (InitDeclAtom_17));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (FinalDeclAtom_18));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Contour_19));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Event_13));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Node_8, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word TypeInfo_11_91;
              MR_Word DeclAtom_24;
              MR_Box CallId_30 = (MR_hl_field(MR_mktag(3), Node_8, (MR_Integer) 2));
              MR_Integer Event_31 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Node_8, (MR_Integer) 4))));
              MR_Word CallNode_88;
              MR_Word CallAtom_89;

              mdb__declarative_execution__call_node_from_id_3_p_0(TypeClassInfo_for_annotated_trace_4, Store_6, CallId_30, &CallNode_88);
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_annotated_trace_4, (MR_Integer) 2, &TypeInfo_11_91);
              CallAtom_89 = mdb__declarative_execution__get_trace_call_atom_1_f_0(TypeInfo_11_91, CallNode_88);
              DeclAtom_24 = (MR_Word) (CallAtom_89);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__3_3 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (DeclAtom_24));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Event_31));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word TypeInfo_11_41;
              MR_Word Exception_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Node_8, (MR_Integer) 4))));
              MR_Box CallId_32 = (MR_hl_field(MR_mktag(3), Node_8, (MR_Integer) 2));
              MR_Integer Event_33 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Node_8, (MR_Integer) 5))));
              MR_Word DeclAtom_34;
              MR_Word CallNode_38;
              MR_Word CallAtom_39;

              mdb__declarative_execution__call_node_from_id_3_p_0(TypeClassInfo_for_annotated_trace_4, Store_6, CallId_32, &CallNode_38);
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_annotated_trace_4, (MR_Integer) 2, &TypeInfo_11_41);
              CallAtom_39 = mdb__declarative_execution__get_trace_call_atom_1_f_0(TypeInfo_11_41, CallNode_38);
              DeclAtom_34 = (MR_Word) (CallAtom_39);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__3_3 = base;
                MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (DeclAtom_34));
                MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (Exception_27));
                MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (Event_33));
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_question_3_3_p_0(
  MR_Word TypeClassInfo_for_annotated_trace_4,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Box Store_6 = ((MR_Box) (HeadVar__1_1));
    MR_Box Ref_7 = ((MR_Box) (HeadVar__2_2));
    MR_Word Node_8;

    mdb__declarative_tree__det_edt_return_node_from_id_3_p_0(TypeClassInfo_for_annotated_trace_4, Store_6, Ref_7, &Node_8);
    switch (MR_tag((MR_Word) Node_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word TypeInfo_11_52;
          MR_Word TypeInfo_40_88;
          MR_Word InitDeclAtom_24;
          MR_Word FinalDeclAtom_25;
          MR_Box CallId_36 = (MR_hl_field(MR_mktag(1), Node_8, (MR_Integer) 1));
          MR_Word CallNode_49;
          MR_Word CallAtom_50;
          MR_Word ExitAtom_56;
          MR_Box CallId_57;
          MR_Word Call_58;
          MR_Integer CallIoSeq_59;
          MR_Integer ExitIoSeq_60;

          mdb__declarative_execution__call_node_from_id_3_p_0(TypeClassInfo_for_annotated_trace_4, Store_6, CallId_36, &CallNode_49);
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_annotated_trace_4, (MR_Integer) 2, &TypeInfo_11_52);
          CallAtom_50 = mdb__declarative_execution__get_trace_call_atom_1_f_0(TypeInfo_11_52, CallNode_49);
          InitDeclAtom_24 = (MR_Word) (CallAtom_50);
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_annotated_trace_4, (MR_Integer) 2, &TypeInfo_40_88);
          ExitAtom_56 = mdb__declarative_execution__get_trace_exit_atom_1_f_0(TypeInfo_40_88, Node_8);
          CallId_57 = (MR_hl_field(MR_mktag(1), Node_8, (MR_Integer) 1));
          mdb__declarative_execution__call_node_from_id_3_p_0(TypeClassInfo_for_annotated_trace_4, Store_6, CallId_57, &Call_58);
          CallIoSeq_59 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Call_58, (MR_Integer) 8))));
          ExitIoSeq_60 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Node_8, (MR_Integer) 6))));
          succeeded = (CallIoSeq_59 == ExitIoSeq_60);
          if (succeeded)
          {
            {
              FinalDeclAtom_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), FinalDeclAtom_25, 0) = ((MR_Box) (ExitAtom_56));
              MR_hl_field(MR_mktag(0), FinalDeclAtom_25, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          else
          {
            MR_Word Var_62;
            MR_Word Var_63;

            {
              Var_63 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_63, 0) = ((MR_Box) (CallIoSeq_59));
              MR_hl_field(MR_mktag(0), Var_63, 1) = ((MR_Box) (ExitIoSeq_60));
            }
            {
              Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (Var_63));
            }
            {
              FinalDeclAtom_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), FinalDeclAtom_25, 0) = ((MR_Box) (ExitAtom_56));
              MR_hl_field(MR_mktag(0), FinalDeclAtom_25, 1) = ((MR_Box) (Var_62));
            }
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            *HeadVar__3_3 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (HeadVar__2_2));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (InitDeclAtom_24));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (FinalDeclAtom_25));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Node_8, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word TypeInfo_11_95;
              MR_Box CallId_10 = (MR_hl_field(MR_mktag(3), Node_8, (MR_Integer) 2));
              MR_Box RedoId_11 = (MR_hl_field(MR_mktag(3), Node_8, (MR_Integer) 3));
              MR_Word DeclAtom_15;
              MR_Word Answers_16;
              MR_Word CallNode_92;
              MR_Word CallAtom_93;

              mdb__declarative_execution__call_node_from_id_3_p_0(TypeClassInfo_for_annotated_trace_4, Store_6, CallId_10, &CallNode_92);
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_annotated_trace_4, (MR_Integer) 2, &TypeInfo_11_95);
              CallAtom_93 = mdb__declarative_execution__get_trace_call_atom_1_f_0(TypeInfo_11_95, CallNode_92);
              DeclAtom_15 = (MR_Word) (CallAtom_93);
              mdb__declarative_tree__get_answers_4_p_0(TypeClassInfo_for_annotated_trace_4, Store_6, RedoId_11, (MR_Word) ((MR_Unsigned) 0U), &Answers_16);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__3_3 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadVar__2_2));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (DeclAtom_15));
                MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (Answers_16));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word TypeInfo_11_45;
              MR_Word Exception_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Node_8, (MR_Integer) 4))));
              MR_Box CallId_37 = (MR_hl_field(MR_mktag(3), Node_8, (MR_Integer) 2));
              MR_Word DeclAtom_38;
              MR_Word CallNode_42;
              MR_Word CallAtom_43;

              mdb__declarative_execution__call_node_from_id_3_p_0(TypeClassInfo_for_annotated_trace_4, Store_6, CallId_37, &CallNode_42);
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_annotated_trace_4, (MR_Integer) 2, &TypeInfo_11_45);
              CallAtom_43 = mdb__declarative_execution__get_trace_call_atom_1_f_0(TypeInfo_11_45, CallNode_42);
              DeclAtom_38 = (MR_Word) (CallAtom_43);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__3_3 = base;
                MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (HeadVar__2_2));
                MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (DeclAtom_38));
                MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (Exception_28));
              }
            }
            break;
        }
        break;
    }
  }
}

void MR_CALL 
mdb__declarative_tree____Compare____wrap_1_0(
  MR_Word TypeInfo_for_S_8,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_6 == CastY_7);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Box ArgX1_4 = ((MR_Box) (HeadVar__2_2));
      MR_Box ArgY1_5 = ((MR_Box) (HeadVar__3_3));

      mercury__builtin__compare_3_p_0(TypeInfo_for_S_8, HeadVar__1_1, ArgX1_4, ArgY1_5);
    }
  }
}

MR_bool MR_CALL 
mdb__declarative_tree____Unify____wrap_1_0(
  MR_Word TypeInfo_for_S_7,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_5 == CastY_6);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Box ArgX1_3 = ((MR_Box) (HeadVar__1_1));
      MR_Box ArgY1_4 = ((MR_Box) (HeadVar__2_2));

      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_S_7, ArgX1_3, ArgY1_4);
    }
    return succeeded;
  }
}

static void MR_CALL 
mdb__declarative_tree____Compare____primitive_list_and_var_1_0(
  MR_Word TypeInfo_for_R_14,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 1);
      MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))) & (MR_Integer) 1);
      MR_Word SubResult1_6;
      MR_Word TypeInfo_16_16;

      {
        TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_16_16, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_annotated_primitive_1));
        MR_hl_field(MR_mktag(0), TypeInfo_16_16, 1) = ((MR_Box) (TypeInfo_for_R_14));
      }
      mercury__list____Compare____list_1_0(TypeInfo_16_16, &SubResult1_6, (MR_Word) (ArgX1_4), (MR_Word) (ArgY1_5));
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        succeeded = (ArgX2_7 < ArgY2_8);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (ArgX2_7 > ArgY2_8);
          if (succeeded)
          {
            SubResult2_9 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = MR_TRUE;
            succeeded = !(succeeded);
            if (succeeded)
            {
              SubResult2_9 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
          }
        }
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Integer Var_21 = (MR_Integer) (ArgX3_10);
          MR_Integer Var_22 = (MR_Integer) (ArgY3_11);

          succeeded = (Var_21 < Var_22);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 1;
          else
          {
            succeeded = (Var_21 > Var_22);
            if (succeeded)
              *HeadVar__1_1 = (MR_Integer) 2;
            else
              *HeadVar__1_1 = (MR_Integer) 0;
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
mdb__declarative_tree____Unify____primitive_list_and_var_1_0(
  MR_Word TypeInfo_for_R_11,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_13_13;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))) & (MR_Integer) 1);
      MR_Word ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 1);

      {
        TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_13_13, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_annotated_primitive_1));
        MR_hl_field(MR_mktag(0), TypeInfo_13_13, 1) = ((MR_Box) (TypeInfo_for_R_11));
      }
      succeeded = mercury__list____Unify____list_1_0(TypeInfo_13_13, (MR_Word) (ArgX1_3), (MR_Word) (ArgY1_4));
      if (succeeded)
      {
        succeeded = (ArgX2_5 == ArgY2_6);
        if (succeeded)
          succeeded = (ArgX3_7 == ArgY3_8);
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
mdb__declarative_tree____Compare____plain_call_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_15 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_16 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_15 == CastY_16);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_String ArgX3_10 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_String ArgY3_11 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_String ArgX4_13 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_String ArgY4_14 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word SubResult1_6;

      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        succeeded = (ArgX2_7 < ArgY2_8);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (ArgX2_7 > ArgY2_8);
          if (succeeded)
          {
            SubResult2_9 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = MR_TRUE;
            succeeded = !(succeeded);
            if (succeeded)
            {
              SubResult2_9 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
          }
        }
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;

          mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult3_12, ArgX3_10, ArgY3_11);
          succeeded = (SubResult3_12 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
            mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX4_13, ArgY4_14);
        }
      }
    }
  }
}

static MR_bool MR_CALL 
mdb__declarative_tree____Unify____plain_call_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_11 == CastY_12);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_String ArgY1_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_String ArgX3_7 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_String ArgY3_8 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_String ArgX4_9 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_String ArgY4_10 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));

      succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
      if (succeeded)
      {
        succeeded = (ArgX2_5 == ArgY2_6);
        if (succeeded)
        {
          succeeded = (strcmp(ArgX3_7, ArgY3_8) == 0);
          if (succeeded)
            succeeded = (strcmp(ArgX4_9, ArgY4_10) == 0);
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
mdb__declarative_tree____Compare____goal_and_path_list_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&mdb__declarative_tree_scalar_common_1[7]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
mdb__declarative_tree____Unify____goal_and_path_list_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&mdb__declarative_tree_scalar_common_1[7]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
mdb__declarative_tree____Compare____goal_and_path_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_6;

      mercury__builtin__compare_3_p_0((MR_Word) (&mdb__declarative_tree_scalar_common_1[1]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
        mdbcomp__goal_path____Compare____reverse_goal_path_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
    }
  }
}

static MR_bool MR_CALL 
mdb__declarative_tree____Unify____goal_and_path_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&mdb__declarative_tree_scalar_common_1[1]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
        succeeded = mdbcomp__goal_path____Unify____reverse_goal_path_0_0(ArgX2_5, ArgY2_6);
    }
    return succeeded;
  }
}

void MR_CALL 
mdb__declarative_tree____Compare____edt_node_1_0(
  MR_Word TypeInfo_for_R_8,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_6 == CastY_7);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Box ArgX1_4 = ((MR_Box) (HeadVar__2_2));
      MR_Box ArgY1_5 = ((MR_Box) (HeadVar__3_3));

      mercury__builtin__compare_3_p_0(TypeInfo_for_R_8, HeadVar__1_1, ArgX1_4, ArgY1_5);
    }
  }
}

MR_bool MR_CALL 
mdb__declarative_tree____Unify____edt_node_1_0(
  MR_Word TypeInfo_for_R_7,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_5 == CastY_6);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Box ArgX1_3 = ((MR_Box) (HeadVar__1_1));
      MR_Box ArgY1_4 = ((MR_Box) (HeadVar__2_2));

      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_R_7, ArgX1_3, ArgY1_4);
    }
    return succeeded;
  }
}

static void MR_CALL 
mdb__declarative_tree____Compare____dependency_chain_start_1_0(
  MR_Word TypeInfo_for_R_35,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_33 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_34 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_33 == CastY_34);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_Word Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 4))));
      MR_Box Var_44 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3));
      MR_Integer Var_45 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
      MR_Integer Var_46 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Integer ArgY3_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 2))));
        MR_Box ArgY4_14 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 3));
        MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 4))));
        MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 5))));
        MR_Word SubResult1_6;

        mdb__declarative_tree____Compare____start_loc_1_0(TypeInfo_for_R_35, &SubResult1_6, Var_47, ArgY1_5);
        succeeded = (SubResult1_6 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult1_6;
        else
        {
          MR_Word SubResult2_9;

          succeeded = (Var_46 < ArgY2_8);
          if (succeeded)
          {
            SubResult2_9 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (Var_46 > ArgY2_8);
            if (succeeded)
            {
              SubResult2_9 = (MR_Integer) 2;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = MR_TRUE;
              succeeded = !(succeeded);
              if (succeeded)
              {
                SubResult2_9 = (MR_Integer) 0;
                succeeded = MR_TRUE;
              }
            }
          }
          if (succeeded)
            *HeadVar__1_1 = SubResult2_9;
          else
          {
            MR_Word SubResult3_12;

            succeeded = (Var_45 < ArgY3_11);
            if (succeeded)
            {
              SubResult3_12 = (MR_Integer) 1;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = (Var_45 > ArgY3_11);
              if (succeeded)
              {
                SubResult3_12 = (MR_Integer) 2;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = MR_TRUE;
                succeeded = !(succeeded);
                if (succeeded)
                {
                  SubResult3_12 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
              }
            }
            if (succeeded)
              *HeadVar__1_1 = SubResult3_12;
            else
            {
              MR_Word SubResult4_15;

              mercury__builtin__compare_3_p_0(TypeInfo_for_R_35, &SubResult4_15, Var_44, ArgY4_14);
              succeeded = (SubResult4_15 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult4_15;
              else
              {
                MR_Word SubResult5_18;

                mercury__builtin__compare_3_p_0((MR_Word) (&mdb__declarative_tree_scalar_common_1[0]), &SubResult5_18, ((MR_Box) (Var_43)), ((MR_Box) (ArgY5_17)));
                succeeded = (SubResult5_18 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult5_18;
                else
                {
                  mercury__builtin__compare_3_p_0((MR_Word) (&mdb__declarative_tree_scalar_common_1[6]), HeadVar__1_1, ((MR_Box) (Var_42)), ((MR_Box) (ArgY6_20)));
                }
              }
            }
          }
        }
      }
    }
  }
}

static void MR_CALL 
mdb__declarative_tree____Compare____start_loc_1_0(
  MR_Word TypeInfo_for_R_15,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_13 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_14 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_13 == CastY_14);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Box Var_19 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Box ArgY1_9 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0));
        MR_Word ArgY2_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word SubResult1_10;

        mercury__builtin__compare_3_p_0(TypeInfo_for_R_15, &SubResult1_10, Var_19, ArgY1_9);
        succeeded = (SubResult1_10 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult1_10;
        else
          mdb__declarative_execution____Compare____trace_node_1_0(TypeInfo_for_R_15, HeadVar__1_1, Var_18, ArgY2_12);
      }
    }
  }
}

static MR_bool MR_CALL 
mdb__declarative_tree____Unify____dependency_chain_start_1_0(
  MR_Word TypeInfo_for_R_19,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_17 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_18 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_17 == CastY_18);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Integer CastX_15 = (MR_Integer) (HeadVar__1_1);
      MR_Integer CastY_16 = (MR_Integer) (HeadVar__2_2);

      succeeded = (CastY_16 == CastX_15);
    }
    else
    {
      MR_Word TypeInfo_20_20;
      MR_Word TypeInfo_21_21;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4;
      MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer ArgY2_6;
      MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2))));
      MR_Integer ArgY3_8;
      MR_Box ArgX4_9 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 3));
      MR_Box ArgY4_10;
      MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 4))));
      MR_Word ArgY5_12;
      MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 5))));
      MR_Word ArgY6_14;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        ArgY2_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        ArgY3_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
        ArgY4_10 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3));
        ArgY5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 4))));
        ArgY6_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 5))));
        succeeded = mdb__declarative_tree____Unify____start_loc_1_0(TypeInfo_for_R_19, ArgX1_3, ArgY1_4);
        if (succeeded)
        {
          succeeded = (ArgX2_5 == ArgY2_6);
          if (succeeded)
          {
            succeeded = (ArgX3_7 == ArgY3_8);
            if (succeeded)
            {
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_R_19, ArgX4_9, ArgY4_10);
              if (succeeded)
              {
                TypeInfo_20_20 = (MR_Word) (&mdb__declarative_tree_scalar_common_1[0]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_20_20, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
                if (succeeded)
                {
                  TypeInfo_21_21 = (MR_Word) (&mdb__declarative_tree_scalar_common_1[6]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_21_21, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
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

static MR_bool MR_CALL 
mdb__declarative_tree____Unify____start_loc_1_0(
  MR_Word TypeInfo_for_R_11,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
      MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

      succeeded = (CastY_4 == CastX_3);
    }
    else
    {
      MR_Box ArgX1_5 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
      MR_Box ArgY1_6;
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_8;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgY1_6 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
        ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_R_11, ArgX1_5, ArgY1_6);
        if (succeeded)
          succeeded = mdb__declarative_execution____Unify____trace_node_1_0(TypeInfo_for_R_11, ArgX2_7, ArgY2_8);
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
mdb__declarative_tree____Compare____contour_type_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
}

static MR_bool MR_CALL 
mdb__declarative_tree____Unify____contour_type_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
mdb__declarative_tree____Compare____annotated_primitive_1_0(
  MR_Word TypeInfo_for_R_23,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_21 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_22 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_21 == CastY_22);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
      MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5))));
      MR_Word SubResult1_6;

      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        succeeded = (ArgX2_7 < ArgY2_8);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (ArgX2_7 > ArgY2_8);
          if (succeeded)
          {
            SubResult2_9 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = MR_TRUE;
            succeeded = !(succeeded);
            if (succeeded)
            {
              SubResult2_9 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
          }
        }
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;

          mercury__builtin__compare_3_p_0((MR_Word) (&mdb__declarative_tree_scalar_common_1[4]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
          succeeded = (SubResult3_12 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
          {
            MR_Word SubResult4_15;

            mdbcomp__program_representation____Compare____atomic_goal_rep_0_0(&SubResult4_15, ArgX4_13, ArgY4_14);
            succeeded = (SubResult4_15 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult4_15;
            else
            {
              MR_Word SubResult5_18;

              mdbcomp__goal_path____Compare____reverse_goal_path_0_0(&SubResult5_18, ArgX5_16, ArgY5_17);
              succeeded = (SubResult5_18 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult5_18;
              else
                mercury__maybe____Compare____maybe_1_0(TypeInfo_for_R_23, HeadVar__1_1, ArgX6_19, ArgY6_20);
            }
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
mdb__declarative_tree____Unify____annotated_primitive_1_0(
  MR_Word TypeInfo_for_R_17,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_15 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_16 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_15 == CastY_16);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_18_18;
      MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_String ArgY1_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
      MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5))));
      MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));

      succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
      if (succeeded)
      {
        succeeded = (ArgX2_5 == ArgY2_6);
        if (succeeded)
        {
          TypeInfo_18_18 = (MR_Word) (&mdb__declarative_tree_scalar_common_1[4]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
          if (succeeded)
          {
            succeeded = mdbcomp__program_representation____Unify____atomic_goal_rep_0_0(ArgX4_9, ArgY4_10);
            if (succeeded)
            {
              succeeded = mdbcomp__goal_path____Unify____reverse_goal_path_0_0(ArgX5_11, ArgY5_12);
              if (succeeded)
                succeeded = mercury__maybe____Unify____maybe_1_0(TypeInfo_for_R_17, ArgX6_13, ArgY6_14);
            }
          }
        }
      }
    }
    return succeeded;
  }
}

static MR_Word MR_CALL 
mdb__declarative_tree__find_arg_pos_2_f_0(
  MR_Word HeadVars_4,
  MR_Integer Var_5)
{
  {
    MR_Word ArgPos_6;
    MR_Integer Var_7;

    Var_7 = mercury__list__length_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), HeadVars_4);
    mdb__declarative_tree__find_arg_pos_from_back_4_p_0(HeadVars_4, Var_5, Var_7, &ArgPos_6);
    return ArgPos_6;
  }
}

static void MR_CALL 
mdb__declarative_tree__find_arg_pos_from_back_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer Var_2,
  MR_Integer Pos_3,
  MR_Word * ArgPos_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      {
        mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_tree_scalar_common_1[26])));
        return;
      }
    }
    else
    {
      MR_Integer HeadVar_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word HeadVars_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));

      succeeded = (HeadVar_11 == Var_2);
      if (succeeded)
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *ArgPos_4 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Pos_3));
        }
      else
      {
        MR_Integer Var_16 = (MR_Integer) ((MR_Unsigned) Pos_3 - (MR_Unsigned) (MR_Integer) 1);
        MR_Word next_value_of_HeadVar__1_1 = HeadVars_12;
        MR_Integer next_value_of_Pos_3 = Var_16;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        Pos_3 = next_value_of_Pos_3;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
mdb__declarative_tree__is_traced_grade_1_p_0(
  MR_Word * TracingOn_1)
{
  {
{
#define MR_PROC_LABEL mdb__declarative_tree__is_traced_grade_1_p_0

	MR_Word TracingOn;

		{

    #ifdef MR_EXEC_TRACE
        TracingOn = MR_YES;
    #else
        TracingOn = MR_NO;
    #endif


		;}
#undef MR_PROC_LABEL
	 *TracingOn_1  = TracingOn;
}
  }
}

static MR_bool MR_CALL 
mdb__declarative_tree__plain_call_is_special_case_4_p_0(
  MR_String Module_5,
  MR_String Name_6,
  MR_Word Args_7,
  MR_Integer * NewVar_8)
{
  {
    MR_bool succeeded = (strcmp(Module_5, (MR_String) "builtin") == 0);
    MR_Word TypeCtorInfo_11_11;
    MR_Integer Var_9;
    MR_Integer Var_10;
    MR_Integer Var_12;
    MR_Box conv0_NewVar_8;

    if (succeeded)
    {
      succeeded = (strcmp(Name_6, (MR_String) "cc_multi_equal") == 0);
      if (succeeded)
      {
        Var_9 = (MR_Integer) 3;
        TypeCtorInfo_11_11 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0);
        mercury__list__length_2_p_0(TypeCtorInfo_11_11, Args_7, &Var_12);
        succeeded = (Var_9 == Var_12);
        if (succeeded)
        {
          Var_10 = (MR_Integer) 2;
          conv0_NewVar_8 = mercury__list__det_index1_2_f_0(TypeCtorInfo_11_11, Args_7, Var_10);
          *NewVar_8 = ((MR_Integer) (conv0_NewVar_8));
          succeeded = MR_TRUE;
        }
      }
    }
    return succeeded;
  }
}

static MR_Word MR_CALL 
mdb__declarative_tree__make_primitive_list_9_f_0(
  MR_Word tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37,
  MR_Box tscc_proc_1_input_2_Store_11,
  MR_Word tscc_proc_1_input_3_GoalPaths_12,
  MR_Word tscc_proc_1_input_4_Contour_13,
  MR_Word tscc_proc_1_input_5_MaybeEnd_14,
  MR_Integer tscc_proc_1_input_6_ArgNum_15,
  MR_Integer tscc_proc_1_input_7_TotalArgs_16,
  MR_Word tscc_proc_1_input_8_HeadVars_17,
  MR_Word tscc_proc_1_input_9_AllTraced_18,
  MR_Word tscc_proc_1_input_10_Primitives0_19)
{
  {
    MR_Word tscc_proc_2_input_1_TypeClassInfo_for_annotated_trace_177;
    MR_Box tscc_proc_2_input_2_Store_13;
    MR_Word tscc_proc_2_input_3_Goal_14;
    MR_Word tscc_proc_2_input_4_Path_15;
    MR_Word tscc_proc_2_input_5_GoalPaths_16;
    MR_Word tscc_proc_2_input_6_Contour_17;
    MR_Word tscc_proc_2_input_7_MaybeEnd_18;
    MR_Integer tscc_proc_2_input_8_ArgNum_19;
    MR_Integer tscc_proc_2_input_9_TotalArgs_20;
    MR_Word tscc_proc_2_input_10_HeadVars_21;
    MR_Word tscc_proc_2_input_11_AllTraced_22;
    MR_Word tscc_proc_2_input_12_Primitives0_23;
    MR_Word tscc_proc_3_input_1_TypeClassInfo_for_annotated_trace_145;
    MR_Box tscc_proc_3_input_2_Store_17;
    MR_String tscc_proc_3_input_3_File_18;
    MR_Integer tscc_proc_3_input_4_Line_19;
    MR_Word tscc_proc_3_input_5_BoundVars_20;
    MR_Word tscc_proc_3_input_6_AtomicGoal_21;
    MR_Word tscc_proc_3_input_7_AtomicGoalArgs_22;
    MR_Word tscc_proc_3_input_8_Path_23;
    MR_Word tscc_proc_3_input_9_GoalPaths_24;
    MR_Word tscc_proc_3_input_10_Contour_25;
    MR_Word tscc_proc_3_input_11_MaybeEnd_26;
    MR_Integer tscc_proc_3_input_12_ArgNum_27;
    MR_Integer tscc_proc_3_input_13_TotalArgs_28;
    MR_Word tscc_proc_3_input_14_HeadVars_29;
    MR_Word tscc_proc_3_input_15_AllTraced_30;
    MR_Word tscc_proc_3_input_16_Primitives0_31;
    MR_Word tscc_output_1_MaybePrims_20;

    // The code for TSCC PROC 1: func mdb.declarative_tree.make_primitive_list/9-0.
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: func mdb.declarative_tree.make_primitive_list/9-0
    ;
    // proc 2 in TSCC: func mdb.declarative_tree.match_goal_to_contour_event/11-0
    ;
    // proc 3 in TSCC: func mdb.declarative_tree.match_atomic_goal_to_contour_event/15-0
    ;
    ;
    goto top_of_proc_1;
  top_of_proc_1:;
    {
      MR_Word TypeClassInfo_for_annotated_trace_37 = tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37;
      MR_Box Store_11 = tscc_proc_1_input_2_Store_11;
      MR_Word GoalPaths_12 = tscc_proc_1_input_3_GoalPaths_12;
      MR_Word Contour_13 = tscc_proc_1_input_4_Contour_13;
      MR_Word MaybeEnd_14 = tscc_proc_1_input_5_MaybeEnd_14;
      MR_Integer ArgNum_15 = tscc_proc_1_input_6_ArgNum_15;
      MR_Integer TotalArgs_16 = tscc_proc_1_input_7_TotalArgs_16;
      MR_Word HeadVars_17 = tscc_proc_1_input_8_HeadVars_17;
      MR_Word AllTraced_18 = tscc_proc_1_input_9_AllTraced_18;
      MR_Word Primitives0_19 = tscc_proc_1_input_10_Primitives0_19;
      MR_Word MaybePrims_20;
      MR_bool succeeded = (AllTraced_18 == (MR_Integer) 0);
      MR_Word AdjustedContour_21;
      MR_Integer PolyConst2_40;
      MR_Word Node_58;
      MR_Word EndPath_59;
      MR_Word MaybeReturnLabel_66;
      MR_String CallPathStr_70;
      MR_Word CallPath_71;
      MR_Word Var_72;
      MR_Word Var_73;
      MR_Word TypeInfo_41_41;

      if (succeeded)
      {
        {
          MR_Word NextGoal_52;
          MR_Word Var_55;
          MR_Word Var_56;

          succeeded = (GoalPaths_12 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalPaths_12, (MR_Integer) 0))));
            NextGoal_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_55, (MR_Integer) 0))));
            Var_56 = mdbcomp__program_representation__goal_generates_internal_event_1_f_0(NextGoal_52);
            succeeded = (Var_56 == (MR_Integer) 1);
          }
        }
        if (!(succeeded))
          succeeded = (GoalPaths_12 == (MR_Word) ((MR_Unsigned) 0U));
      }
      if (succeeded)
      {
        MR_Word TypeInfo_39_39;

        mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_annotated_trace_37, (MR_Integer) 2, &TypeInfo_39_39);
        mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_108_101_97_100_105_110_103_95_101_120_105_116_95_102_97_105_108_95_101_118_101_110_116_115_95_95_91_49_93_95_48_2_p_0(Contour_13, &AdjustedContour_21);
      }
      else
        AdjustedContour_21 = Contour_13;
      succeeded = (AllTraced_18 == (MR_Integer) 0);
      if (succeeded)
      {
        PolyConst2_40 = (MR_Integer) 2;
        mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_annotated_trace_37, PolyConst2_40, &TypeInfo_41_41);
        succeeded = (AdjustedContour_21 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AdjustedContour_21, (MR_Integer) 0))));
          Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AdjustedContour_21, (MR_Integer) 1))));
          succeeded = (Var_73 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Node_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_72, (MR_Integer) 1))));
            succeeded = (MaybeEnd_14 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              EndPath_59 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeEnd_14, (MR_Integer) 0))));
              succeeded = ((MR_tag((MR_Word) Node_58)) == (MR_Integer) 0);
              if (succeeded)
              {
                MaybeReturnLabel_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Node_58, (MR_Integer) 6))));
                CallPathStr_70 = mdbcomp__rtti_access__get_goal_path_from_maybe_label_1_f_0(MaybeReturnLabel_66);
                mdbcomp__goal_path__rev_goal_path_from_string_det_2_p_0(CallPathStr_70, &CallPath_71);
                succeeded = mdbcomp__goal_path____Unify____reverse_goal_path_0_0(CallPath_71, EndPath_59);
                if (succeeded)
                {
                  {
                    MR_Word NextGoal_75;
                    MR_Word Var_78;
                    MR_Word Var_79;

                    succeeded = (GoalPaths_12 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalPaths_12, (MR_Integer) 0))));
                      NextGoal_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_78, (MR_Integer) 0))));
                      Var_79 = mdbcomp__program_representation__goal_generates_internal_event_1_f_0(NextGoal_75);
                      succeeded = (Var_79 == (MR_Integer) 1);
                    }
                  }
                  if (!(succeeded))
                    succeeded = (GoalPaths_12 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
            }
          }
        }
      }
      if (succeeded)
        MaybePrims_20 = (MR_Word) ((MR_Unsigned) 0U);
      else
      if ((GoalPaths_12 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Integer Var_25;
        MR_Word Var_34;

        succeeded = mdb__declarative_tree__IntroducedFrom__pred__make_primitive_list__1184__1_3_p_0(TypeClassInfo_for_annotated_trace_37, AdjustedContour_21, (MR_Word) ((MR_Unsigned) 0U));
        if (!(succeeded))
        {
          mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_tree_scalar_common_1[15])));
        }
        mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_108_95_114_101_113_117_105_114_101_95_95_104_111_51_95_95_91_51_93_95_48_3_p_0(MaybeEnd_14, (MR_Word) ((MR_Unsigned) 0U), (MR_String) "make_primitive_list", (MR_String) "found end when looking for call");
        mdb__declarative_tree__find_variable_in_args_4_p_0(HeadVars_17, ArgNum_15, TotalArgs_16, &Var_25);
        {
          Var_34 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_34, 0) = ((MR_Box) (Primitives0_19));
          MR_hl_field(MR_mktag(0), Var_34, 1) = ((MR_Box) (Var_25));
          MR_hl_field(MR_mktag(0), Var_34, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        }
        {
          MaybePrims_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybePrims_20, 0) = ((MR_Box) (Var_34));
        }
      }
      else
      {
        MR_Word Goal_22;
        MR_Word Path_23;
        MR_Word Tail_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalPaths_12, (MR_Integer) 1))));
        MR_Word Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalPaths_12, (MR_Integer) 0))));
        MR_Word next_value_of_tscc_proc_2_input_1_TypeClassInfo_for_annotated_trace_177;
        MR_Box next_value_of_tscc_proc_2_input_2_Store_13;
        MR_Word next_value_of_tscc_proc_2_input_3_Goal_14;
        MR_Word next_value_of_tscc_proc_2_input_4_Path_15;
        MR_Word next_value_of_tscc_proc_2_input_5_GoalPaths_16;
        MR_Word next_value_of_tscc_proc_2_input_6_Contour_17;
        MR_Word next_value_of_tscc_proc_2_input_7_MaybeEnd_18;
        MR_Integer next_value_of_tscc_proc_2_input_8_ArgNum_19;
        MR_Integer next_value_of_tscc_proc_2_input_9_TotalArgs_20;
        MR_Word next_value_of_tscc_proc_2_input_10_HeadVars_21;
        MR_Word next_value_of_tscc_proc_2_input_11_AllTraced_22;
        MR_Word next_value_of_tscc_proc_2_input_12_Primitives0_23;

        Goal_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_36, (MR_Integer) 0))));
        Path_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_36, (MR_Integer) 1))));
        // direct tailcall eliminated
        ;
        next_value_of_tscc_proc_2_input_1_TypeClassInfo_for_annotated_trace_177 = TypeClassInfo_for_annotated_trace_37;
        next_value_of_tscc_proc_2_input_2_Store_13 = Store_11;
        next_value_of_tscc_proc_2_input_3_Goal_14 = Goal_22;
        next_value_of_tscc_proc_2_input_4_Path_15 = Path_23;
        next_value_of_tscc_proc_2_input_5_GoalPaths_16 = Tail_24;
        next_value_of_tscc_proc_2_input_6_Contour_17 = AdjustedContour_21;
        next_value_of_tscc_proc_2_input_7_MaybeEnd_18 = MaybeEnd_14;
        next_value_of_tscc_proc_2_input_8_ArgNum_19 = ArgNum_15;
        next_value_of_tscc_proc_2_input_9_TotalArgs_20 = TotalArgs_16;
        next_value_of_tscc_proc_2_input_10_HeadVars_21 = HeadVars_17;
        next_value_of_tscc_proc_2_input_11_AllTraced_22 = AllTraced_18;
        next_value_of_tscc_proc_2_input_12_Primitives0_23 = Primitives0_19;
        tscc_proc_2_input_1_TypeClassInfo_for_annotated_trace_177 = next_value_of_tscc_proc_2_input_1_TypeClassInfo_for_annotated_trace_177;
        tscc_proc_2_input_2_Store_13 = next_value_of_tscc_proc_2_input_2_Store_13;
        tscc_proc_2_input_3_Goal_14 = next_value_of_tscc_proc_2_input_3_Goal_14;
        tscc_proc_2_input_4_Path_15 = next_value_of_tscc_proc_2_input_4_Path_15;
        tscc_proc_2_input_5_GoalPaths_16 = next_value_of_tscc_proc_2_input_5_GoalPaths_16;
        tscc_proc_2_input_6_Contour_17 = next_value_of_tscc_proc_2_input_6_Contour_17;
        tscc_proc_2_input_7_MaybeEnd_18 = next_value_of_tscc_proc_2_input_7_MaybeEnd_18;
        tscc_proc_2_input_8_ArgNum_19 = next_value_of_tscc_proc_2_input_8_ArgNum_19;
        tscc_proc_2_input_9_TotalArgs_20 = next_value_of_tscc_proc_2_input_9_TotalArgs_20;
        tscc_proc_2_input_10_HeadVars_21 = next_value_of_tscc_proc_2_input_10_HeadVars_21;
        tscc_proc_2_input_11_AllTraced_22 = next_value_of_tscc_proc_2_input_11_AllTraced_22;
        tscc_proc_2_input_12_Primitives0_23 = next_value_of_tscc_proc_2_input_12_Primitives0_23;
        goto top_of_proc_2;
      }
      tscc_output_1_MaybePrims_20 = MaybePrims_20;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word TypeClassInfo_for_annotated_trace_177 = tscc_proc_2_input_1_TypeClassInfo_for_annotated_trace_177;
      MR_Box Store_13 = tscc_proc_2_input_2_Store_13;
      MR_Word Goal_14 = tscc_proc_2_input_3_Goal_14;
      MR_Word Path_15 = tscc_proc_2_input_4_Path_15;
      MR_Word GoalPaths_16 = tscc_proc_2_input_5_GoalPaths_16;
      MR_Word Contour_17 = tscc_proc_2_input_6_Contour_17;
      MR_Word MaybeEnd_18 = tscc_proc_2_input_7_MaybeEnd_18;
      MR_Integer ArgNum_19 = tscc_proc_2_input_8_ArgNum_19;
      MR_Integer TotalArgs_20 = tscc_proc_2_input_9_TotalArgs_20;
      MR_Word HeadVars_21 = tscc_proc_2_input_10_HeadVars_21;
      MR_Word AllTraced_22 = tscc_proc_2_input_11_AllTraced_22;
      MR_Word Primitives0_23 = tscc_proc_2_input_12_Primitives0_23;
      MR_Word MaybePrims_24;
      MR_bool succeeded;
      MR_Word GoalExpr_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_14, (MR_Integer) 0))));

      switch (MR_tag((MR_Word) GoalExpr_25)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Conjs_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GoalExpr_25, (MR_Integer) 0))));
            MR_Word ConjPaths_29;
            MR_Word Var_137;
            MR_Word next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37;
            MR_Box next_value_of_tscc_proc_1_input_2_Store_11;
            MR_Word next_value_of_tscc_proc_1_input_3_GoalPaths_12;
            MR_Word next_value_of_tscc_proc_1_input_4_Contour_13;
            MR_Word next_value_of_tscc_proc_1_input_5_MaybeEnd_14;
            MR_Integer next_value_of_tscc_proc_1_input_6_ArgNum_15;
            MR_Integer next_value_of_tscc_proc_1_input_7_TotalArgs_16;
            MR_Word next_value_of_tscc_proc_1_input_8_HeadVars_17;
            MR_Word next_value_of_tscc_proc_1_input_9_AllTraced_18;
            MR_Word next_value_of_tscc_proc_1_input_10_Primitives0_19;

            mdb__declarative_tree__add_paths_to_conjuncts_4_p_0(Conjs_28, Path_15, (MR_Integer) 1, &ConjPaths_29);
            Var_137 = mercury__list__f_43_43_2_f_0((MR_Word) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_goal_and_path_0), ConjPaths_29, GoalPaths_16);
            // direct tailcall eliminated
            ;
            next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37 = TypeClassInfo_for_annotated_trace_177;
            next_value_of_tscc_proc_1_input_2_Store_11 = Store_13;
            next_value_of_tscc_proc_1_input_3_GoalPaths_12 = Var_137;
            next_value_of_tscc_proc_1_input_4_Contour_13 = Contour_17;
            next_value_of_tscc_proc_1_input_5_MaybeEnd_14 = MaybeEnd_18;
            next_value_of_tscc_proc_1_input_6_ArgNum_15 = ArgNum_19;
            next_value_of_tscc_proc_1_input_7_TotalArgs_16 = TotalArgs_20;
            next_value_of_tscc_proc_1_input_8_HeadVars_17 = HeadVars_21;
            next_value_of_tscc_proc_1_input_9_AllTraced_18 = AllTraced_22;
            next_value_of_tscc_proc_1_input_10_Primitives0_19 = Primitives0_23;
            tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37 = next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37;
            tscc_proc_1_input_2_Store_11 = next_value_of_tscc_proc_1_input_2_Store_11;
            tscc_proc_1_input_3_GoalPaths_12 = next_value_of_tscc_proc_1_input_3_GoalPaths_12;
            tscc_proc_1_input_4_Contour_13 = next_value_of_tscc_proc_1_input_4_Contour_13;
            tscc_proc_1_input_5_MaybeEnd_14 = next_value_of_tscc_proc_1_input_5_MaybeEnd_14;
            tscc_proc_1_input_6_ArgNum_15 = next_value_of_tscc_proc_1_input_6_ArgNum_15;
            tscc_proc_1_input_7_TotalArgs_16 = next_value_of_tscc_proc_1_input_7_TotalArgs_16;
            tscc_proc_1_input_8_HeadVars_17 = next_value_of_tscc_proc_1_input_8_HeadVars_17;
            tscc_proc_1_input_9_AllTraced_18 = next_value_of_tscc_proc_1_input_9_AllTraced_18;
            tscc_proc_1_input_10_Primitives0_19 = next_value_of_tscc_proc_1_input_10_Primitives0_19;
            goto top_of_proc_1;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Disjs_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_25, (MR_Integer) 0))));
            MR_Word ContourTail_45;
            MR_Word DisjPath_51;
            MR_Integer N_54;
            MR_Word ContourHeadNode_44;
            MR_Box Label_47;
            MR_String DisjPathStr_50;
            MR_Word DisjInitialPath_52;
            MR_Word DisjLastStep_53;
            MR_Word Var_128;

            succeeded = (Contour_17 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_128 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Contour_17, (MR_Integer) 0))));
              ContourTail_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Contour_17, (MR_Integer) 1))));
              ContourHeadNode_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_128, (MR_Integer) 1))));
              if (((((MR_tag((MR_Word) ContourHeadNode_44)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ContourHeadNode_44, (MR_Integer) 0)))) == (MR_Integer) 3))))
              {
                Label_47 = ((MR_Box) ((MR_hl_field(MR_mktag(3), ContourHeadNode_44, (MR_Integer) 2))));
                succeeded = MR_TRUE;
              }
              else
              if (((((MR_tag((MR_Word) ContourHeadNode_44)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ContourHeadNode_44, (MR_Integer) 0)))) == (MR_Integer) 4))))
              {
                Label_47 = ((MR_Box) ((MR_hl_field(MR_mktag(3), ContourHeadNode_44, (MR_Integer) 2))));
                succeeded = MR_TRUE;
              }
              else
                succeeded = MR_FALSE;
              if (succeeded)
              {
                DisjPathStr_50 = mdbcomp__rtti_access__get_goal_path_from_label_layout_1_f_0(Label_47);
                mdbcomp__goal_path__rev_goal_path_from_string_det_2_p_0(DisjPathStr_50, &DisjPath_51);
                succeeded = mdbcomp__goal_path__rev_goal_path_remove_last_3_p_0(DisjPath_51, &DisjInitialPath_52, &DisjLastStep_53);
                if (succeeded)
                {
                  succeeded = mdbcomp__goal_path____Unify____reverse_goal_path_0_0(DisjInitialPath_52, Path_15);
                  if (succeeded)
                  {
                    succeeded = ((MR_tag((MR_Word) DisjLastStep_53)) == (MR_Integer) 2);
                    if (succeeded)
                      N_54 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), DisjLastStep_53, (MR_Integer) 0))));
                  }
                }
              }
            }
            if (succeeded)
            {
              MR_Word Disj_55;
              MR_Word DisjAndPath_56;
              MR_Word Var_129;
              MR_Box conv0_Disj_55;
              MR_Word next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37;
              MR_Box next_value_of_tscc_proc_1_input_2_Store_11;
              MR_Word next_value_of_tscc_proc_1_input_3_GoalPaths_12;
              MR_Word next_value_of_tscc_proc_1_input_4_Contour_13;
              MR_Word next_value_of_tscc_proc_1_input_5_MaybeEnd_14;
              MR_Integer next_value_of_tscc_proc_1_input_6_ArgNum_15;
              MR_Integer next_value_of_tscc_proc_1_input_7_TotalArgs_16;
              MR_Word next_value_of_tscc_proc_1_input_8_HeadVars_17;
              MR_Word next_value_of_tscc_proc_1_input_9_AllTraced_18;
              MR_Word next_value_of_tscc_proc_1_input_10_Primitives0_19;

              mercury__list__det_index1_3_p_0((MR_Word) (&mdb__declarative_tree_scalar_common_1[1]), Disjs_42, N_54, &conv0_Disj_55);
              Disj_55 = ((MR_Word) (conv0_Disj_55));
              {
                DisjAndPath_56 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), DisjAndPath_56, 0) = ((MR_Box) (Disj_55));
                MR_hl_field(MR_mktag(0), DisjAndPath_56, 1) = ((MR_Box) (DisjPath_51));
              }
              {
                Var_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_129, 0) = ((MR_Box) (DisjAndPath_56));
                MR_hl_field(MR_mktag(1), Var_129, 1) = ((MR_Box) (GoalPaths_16));
              }
              // direct tailcall eliminated
              ;
              next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37 = TypeClassInfo_for_annotated_trace_177;
              next_value_of_tscc_proc_1_input_2_Store_11 = Store_13;
              next_value_of_tscc_proc_1_input_3_GoalPaths_12 = Var_129;
              next_value_of_tscc_proc_1_input_4_Contour_13 = ContourTail_45;
              next_value_of_tscc_proc_1_input_5_MaybeEnd_14 = MaybeEnd_18;
              next_value_of_tscc_proc_1_input_6_ArgNum_15 = ArgNum_19;
              next_value_of_tscc_proc_1_input_7_TotalArgs_16 = TotalArgs_20;
              next_value_of_tscc_proc_1_input_8_HeadVars_17 = HeadVars_21;
              next_value_of_tscc_proc_1_input_9_AllTraced_18 = AllTraced_22;
              next_value_of_tscc_proc_1_input_10_Primitives0_19 = Primitives0_23;
              tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37 = next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37;
              tscc_proc_1_input_2_Store_11 = next_value_of_tscc_proc_1_input_2_Store_11;
              tscc_proc_1_input_3_GoalPaths_12 = next_value_of_tscc_proc_1_input_3_GoalPaths_12;
              tscc_proc_1_input_4_Contour_13 = next_value_of_tscc_proc_1_input_4_Contour_13;
              tscc_proc_1_input_5_MaybeEnd_14 = next_value_of_tscc_proc_1_input_5_MaybeEnd_14;
              tscc_proc_1_input_6_ArgNum_15 = next_value_of_tscc_proc_1_input_6_ArgNum_15;
              tscc_proc_1_input_7_TotalArgs_16 = next_value_of_tscc_proc_1_input_7_TotalArgs_16;
              tscc_proc_1_input_8_HeadVars_17 = next_value_of_tscc_proc_1_input_8_HeadVars_17;
              tscc_proc_1_input_9_AllTraced_18 = next_value_of_tscc_proc_1_input_9_AllTraced_18;
              tscc_proc_1_input_10_Primitives0_19 = next_value_of_tscc_proc_1_input_10_Primitives0_19;
              goto top_of_proc_1;
            }
            else
            {
              mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_tree_scalar_common_1[16])));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Cases_59 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_25, (MR_Integer) 2))));
            MR_Word ArmPath_63;
            MR_Word ContourTail_141;
            MR_Integer N_143;
            MR_String ArmPathStr_62;
            MR_Word ArmInitialPath_64;
            MR_Word ArmLastStep_65;
            MR_Word Var_123;
            MR_Word ContourHeadNode_138;
            MR_Box Label_139;

            succeeded = (Contour_17 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_123 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Contour_17, (MR_Integer) 0))));
              ContourTail_141 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Contour_17, (MR_Integer) 1))));
              ContourHeadNode_138 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_123, (MR_Integer) 1))));
              succeeded = ((((MR_tag((MR_Word) ContourHeadNode_138)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ContourHeadNode_138, (MR_Integer) 0)))) == (MR_Integer) 2)));
              if (succeeded)
              {
                Label_139 = ((MR_Box) ((MR_hl_field(MR_mktag(3), ContourHeadNode_138, (MR_Integer) 2))));
                ArmPathStr_62 = mdbcomp__rtti_access__get_goal_path_from_label_layout_1_f_0(Label_139);
                mdbcomp__goal_path__rev_goal_path_from_string_det_2_p_0(ArmPathStr_62, &ArmPath_63);
                succeeded = mdbcomp__goal_path__rev_goal_path_remove_last_3_p_0(ArmPath_63, &ArmInitialPath_64, &ArmLastStep_65);
                if (succeeded)
                {
                  succeeded = mdbcomp__goal_path____Unify____reverse_goal_path_0_0(ArmInitialPath_64, Path_15);
                  if (succeeded)
                  {
                    succeeded = ((((MR_tag((MR_Word) ArmLastStep_65)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ArmLastStep_65, (MR_Integer) 0)))) == (MR_Integer) 0)));
                    if (succeeded)
                      N_143 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ArmLastStep_65, (MR_Integer) 1))));
                  }
                }
              }
            }
            if (succeeded)
            {
              MR_Word Case_67;
              MR_Word Arm_70;
              MR_Word ArmAndPath_71;
              MR_Word Var_124;
              MR_Box conv1_Case_67;
              MR_Word next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37;
              MR_Box next_value_of_tscc_proc_1_input_2_Store_11;
              MR_Word next_value_of_tscc_proc_1_input_3_GoalPaths_12;
              MR_Word next_value_of_tscc_proc_1_input_4_Contour_13;
              MR_Word next_value_of_tscc_proc_1_input_5_MaybeEnd_14;
              MR_Integer next_value_of_tscc_proc_1_input_6_ArgNum_15;
              MR_Integer next_value_of_tscc_proc_1_input_7_TotalArgs_16;
              MR_Word next_value_of_tscc_proc_1_input_8_HeadVars_17;
              MR_Word next_value_of_tscc_proc_1_input_9_AllTraced_18;
              MR_Word next_value_of_tscc_proc_1_input_10_Primitives0_19;

              mercury__list__det_index1_3_p_0((MR_Word) (&mdb__declarative_tree_scalar_common_1[2]), Cases_59, N_143, &conv1_Case_67);
              Case_67 = ((MR_Word) (conv1_Case_67));
              Arm_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_67, (MR_Integer) 2))));
              {
                ArmAndPath_71 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ArmAndPath_71, 0) = ((MR_Box) (Arm_70));
                MR_hl_field(MR_mktag(0), ArmAndPath_71, 1) = ((MR_Box) (ArmPath_63));
              }
              {
                Var_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_124, 0) = ((MR_Box) (ArmAndPath_71));
                MR_hl_field(MR_mktag(1), Var_124, 1) = ((MR_Box) (GoalPaths_16));
              }
              // direct tailcall eliminated
              ;
              next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37 = TypeClassInfo_for_annotated_trace_177;
              next_value_of_tscc_proc_1_input_2_Store_11 = Store_13;
              next_value_of_tscc_proc_1_input_3_GoalPaths_12 = Var_124;
              next_value_of_tscc_proc_1_input_4_Contour_13 = ContourTail_141;
              next_value_of_tscc_proc_1_input_5_MaybeEnd_14 = MaybeEnd_18;
              next_value_of_tscc_proc_1_input_6_ArgNum_15 = ArgNum_19;
              next_value_of_tscc_proc_1_input_7_TotalArgs_16 = TotalArgs_20;
              next_value_of_tscc_proc_1_input_8_HeadVars_17 = HeadVars_21;
              next_value_of_tscc_proc_1_input_9_AllTraced_18 = AllTraced_22;
              next_value_of_tscc_proc_1_input_10_Primitives0_19 = Primitives0_23;
              tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37 = next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37;
              tscc_proc_1_input_2_Store_11 = next_value_of_tscc_proc_1_input_2_Store_11;
              tscc_proc_1_input_3_GoalPaths_12 = next_value_of_tscc_proc_1_input_3_GoalPaths_12;
              tscc_proc_1_input_4_Contour_13 = next_value_of_tscc_proc_1_input_4_Contour_13;
              tscc_proc_1_input_5_MaybeEnd_14 = next_value_of_tscc_proc_1_input_5_MaybeEnd_14;
              tscc_proc_1_input_6_ArgNum_15 = next_value_of_tscc_proc_1_input_6_ArgNum_15;
              tscc_proc_1_input_7_TotalArgs_16 = next_value_of_tscc_proc_1_input_7_TotalArgs_16;
              tscc_proc_1_input_8_HeadVars_17 = next_value_of_tscc_proc_1_input_8_HeadVars_17;
              tscc_proc_1_input_9_AllTraced_18 = next_value_of_tscc_proc_1_input_9_AllTraced_18;
              tscc_proc_1_input_10_Primitives0_19 = next_value_of_tscc_proc_1_input_10_Primitives0_19;
              goto top_of_proc_1;
            }
            else
            {
              mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_tree_scalar_common_1[19])));
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_25, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Cond_72 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_25, (MR_Integer) 1))));
                MR_Word Then_73 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_25, (MR_Integer) 2))));
                MR_Word Else_74 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_25, (MR_Integer) 3))));
                MR_Word CondPath_79;
                MR_Word ContourTail_164;
                MR_String CondPathStr_78;
                MR_Word CondInitialPath_80;
                MR_Word CondLastStep_81;
                MR_Word Var_113;
                MR_Word ContourHeadNode_148;
                MR_Box Label_149;

                succeeded = (Contour_17 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_113 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Contour_17, (MR_Integer) 0))));
                  ContourTail_164 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Contour_17, (MR_Integer) 1))));
                  ContourHeadNode_148 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_113, (MR_Integer) 1))));
                  succeeded = ((((MR_tag((MR_Word) ContourHeadNode_148)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ContourHeadNode_148, (MR_Integer) 0)))) == (MR_Integer) 5)));
                  if (succeeded)
                  {
                    Label_149 = ((MR_Box) ((MR_hl_field(MR_mktag(3), ContourHeadNode_148, (MR_Integer) 2))));
                    CondPathStr_78 = mdbcomp__rtti_access__get_goal_path_from_label_layout_1_f_0(Label_149);
                    mdbcomp__goal_path__rev_goal_path_from_string_det_2_p_0(CondPathStr_78, &CondPath_79);
                    succeeded = mdbcomp__goal_path__rev_goal_path_remove_last_3_p_0(CondPath_79, &CondInitialPath_80, &CondLastStep_81);
                    if (succeeded)
                    {
                      succeeded = mdbcomp__goal_path____Unify____reverse_goal_path_0_0(CondInitialPath_80, Path_15);
                      if (succeeded)
                        succeeded = (CondLastStep_81 == (MR_Word) ((MR_Unsigned) 0U));
                    }
                  }
                }
                if (succeeded)
                {
                  MR_Word ThenPath_82;
                  MR_Word CondAndPath_83;
                  MR_Word ThenAndPath_84;
                  MR_Word Var_115;
                  MR_Word Var_116;
                  MR_Word next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37;
                  MR_Box next_value_of_tscc_proc_1_input_2_Store_11;
                  MR_Word next_value_of_tscc_proc_1_input_3_GoalPaths_12;
                  MR_Word next_value_of_tscc_proc_1_input_4_Contour_13;
                  MR_Word next_value_of_tscc_proc_1_input_5_MaybeEnd_14;
                  MR_Integer next_value_of_tscc_proc_1_input_6_ArgNum_15;
                  MR_Integer next_value_of_tscc_proc_1_input_7_TotalArgs_16;
                  MR_Word next_value_of_tscc_proc_1_input_8_HeadVars_17;
                  MR_Word next_value_of_tscc_proc_1_input_9_AllTraced_18;
                  MR_Word next_value_of_tscc_proc_1_input_10_Primitives0_19;

                  ThenPath_82 = mdbcomp__goal_path__rev_goal_path_add_at_end_2_f_0(Path_15, (MR_Word) ((MR_Unsigned) 4U));
                  {
                    CondAndPath_83 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), CondAndPath_83, 0) = ((MR_Box) (Cond_72));
                    MR_hl_field(MR_mktag(0), CondAndPath_83, 1) = ((MR_Box) (CondPath_79));
                  }
                  {
                    ThenAndPath_84 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ThenAndPath_84, 0) = ((MR_Box) (Then_73));
                    MR_hl_field(MR_mktag(0), ThenAndPath_84, 1) = ((MR_Box) (ThenPath_82));
                  }
                  {
                    Var_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_116, 0) = ((MR_Box) (ThenAndPath_84));
                    MR_hl_field(MR_mktag(1), Var_116, 1) = ((MR_Box) (GoalPaths_16));
                  }
                  {
                    Var_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_115, 0) = ((MR_Box) (CondAndPath_83));
                    MR_hl_field(MR_mktag(1), Var_115, 1) = ((MR_Box) (Var_116));
                  }
                  // direct tailcall eliminated
                  ;
                  next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37 = TypeClassInfo_for_annotated_trace_177;
                  next_value_of_tscc_proc_1_input_2_Store_11 = Store_13;
                  next_value_of_tscc_proc_1_input_3_GoalPaths_12 = Var_115;
                  next_value_of_tscc_proc_1_input_4_Contour_13 = ContourTail_164;
                  next_value_of_tscc_proc_1_input_5_MaybeEnd_14 = MaybeEnd_18;
                  next_value_of_tscc_proc_1_input_6_ArgNum_15 = ArgNum_19;
                  next_value_of_tscc_proc_1_input_7_TotalArgs_16 = TotalArgs_20;
                  next_value_of_tscc_proc_1_input_8_HeadVars_17 = HeadVars_21;
                  next_value_of_tscc_proc_1_input_9_AllTraced_18 = AllTraced_22;
                  next_value_of_tscc_proc_1_input_10_Primitives0_19 = Primitives0_23;
                  tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37 = next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37;
                  tscc_proc_1_input_2_Store_11 = next_value_of_tscc_proc_1_input_2_Store_11;
                  tscc_proc_1_input_3_GoalPaths_12 = next_value_of_tscc_proc_1_input_3_GoalPaths_12;
                  tscc_proc_1_input_4_Contour_13 = next_value_of_tscc_proc_1_input_4_Contour_13;
                  tscc_proc_1_input_5_MaybeEnd_14 = next_value_of_tscc_proc_1_input_5_MaybeEnd_14;
                  tscc_proc_1_input_6_ArgNum_15 = next_value_of_tscc_proc_1_input_6_ArgNum_15;
                  tscc_proc_1_input_7_TotalArgs_16 = next_value_of_tscc_proc_1_input_7_TotalArgs_16;
                  tscc_proc_1_input_8_HeadVars_17 = next_value_of_tscc_proc_1_input_8_HeadVars_17;
                  tscc_proc_1_input_9_AllTraced_18 = next_value_of_tscc_proc_1_input_9_AllTraced_18;
                  tscc_proc_1_input_10_Primitives0_19 = next_value_of_tscc_proc_1_input_10_Primitives0_19;
                  goto top_of_proc_1;
                }
                else
                {
                  MR_Word ContourTail_157;
                  MR_Box ElseCondId_87;
                  MR_Word CondNode_89;
                  MR_Word Var_117;
                  MR_Word ContourHeadNode_150;
                  MR_Box Label_151;
                  MR_String CondPathStr_152;
                  MR_Word CondPath_153;
                  MR_Word CondInitialPath_154;
                  MR_Word CondLastStep_155;

                  succeeded = (Contour_17 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_117 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Contour_17, (MR_Integer) 0))));
                    ContourTail_157 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Contour_17, (MR_Integer) 1))));
                    ContourHeadNode_150 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_117, (MR_Integer) 1))));
                    succeeded = ((((MR_tag((MR_Word) ContourHeadNode_150)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ContourHeadNode_150, (MR_Integer) 0)))) == (MR_Integer) 7)));
                    if (succeeded)
                    {
                      ElseCondId_87 = (MR_hl_field(MR_mktag(3), ContourHeadNode_150, (MR_Integer) 2));
                      mdb__declarative_execution__cond_node_from_id_3_p_0(TypeClassInfo_for_annotated_trace_177, Store_13, ElseCondId_87, &CondNode_89);
                      Label_151 = ((MR_Box) ((MR_hl_field(MR_mktag(3), CondNode_89, (MR_Integer) 2))));
                      CondPathStr_152 = mdbcomp__rtti_access__get_goal_path_from_label_layout_1_f_0(Label_151);
                      mdbcomp__goal_path__rev_goal_path_from_string_det_2_p_0(CondPathStr_152, &CondPath_153);
                      succeeded = mdbcomp__goal_path__rev_goal_path_remove_last_3_p_0(CondPath_153, &CondInitialPath_154, &CondLastStep_155);
                      if (succeeded)
                      {
                        succeeded = mdbcomp__goal_path____Unify____reverse_goal_path_0_0(CondInitialPath_154, Path_15);
                        if (succeeded)
                          succeeded = (CondLastStep_155 == (MR_Word) ((MR_Unsigned) 0U));
                      }
                    }
                  }
                  if (succeeded)
                  {
                    MR_Word ElsePath_92;
                    MR_Word ElseAndPath_93;
                    MR_Word Var_119;
                    MR_Word next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37;
                    MR_Box next_value_of_tscc_proc_1_input_2_Store_11;
                    MR_Word next_value_of_tscc_proc_1_input_3_GoalPaths_12;
                    MR_Word next_value_of_tscc_proc_1_input_4_Contour_13;
                    MR_Word next_value_of_tscc_proc_1_input_5_MaybeEnd_14;
                    MR_Integer next_value_of_tscc_proc_1_input_6_ArgNum_15;
                    MR_Integer next_value_of_tscc_proc_1_input_7_TotalArgs_16;
                    MR_Word next_value_of_tscc_proc_1_input_8_HeadVars_17;
                    MR_Word next_value_of_tscc_proc_1_input_9_AllTraced_18;
                    MR_Word next_value_of_tscc_proc_1_input_10_Primitives0_19;

                    ElsePath_92 = mdbcomp__goal_path__rev_goal_path_add_at_end_2_f_0(Path_15, (MR_Word) ((MR_Unsigned) 8U));
                    {
                      ElseAndPath_93 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), ElseAndPath_93, 0) = ((MR_Box) (Else_74));
                      MR_hl_field(MR_mktag(0), ElseAndPath_93, 1) = ((MR_Box) (ElsePath_92));
                    }
                    {
                      Var_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_119, 0) = ((MR_Box) (ElseAndPath_93));
                      MR_hl_field(MR_mktag(1), Var_119, 1) = ((MR_Box) (GoalPaths_16));
                    }
                    // direct tailcall eliminated
                    ;
                    next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37 = TypeClassInfo_for_annotated_trace_177;
                    next_value_of_tscc_proc_1_input_2_Store_11 = Store_13;
                    next_value_of_tscc_proc_1_input_3_GoalPaths_12 = Var_119;
                    next_value_of_tscc_proc_1_input_4_Contour_13 = ContourTail_157;
                    next_value_of_tscc_proc_1_input_5_MaybeEnd_14 = MaybeEnd_18;
                    next_value_of_tscc_proc_1_input_6_ArgNum_15 = ArgNum_19;
                    next_value_of_tscc_proc_1_input_7_TotalArgs_16 = TotalArgs_20;
                    next_value_of_tscc_proc_1_input_8_HeadVars_17 = HeadVars_21;
                    next_value_of_tscc_proc_1_input_9_AllTraced_18 = AllTraced_22;
                    next_value_of_tscc_proc_1_input_10_Primitives0_19 = Primitives0_23;
                    tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37 = next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37;
                    tscc_proc_1_input_2_Store_11 = next_value_of_tscc_proc_1_input_2_Store_11;
                    tscc_proc_1_input_3_GoalPaths_12 = next_value_of_tscc_proc_1_input_3_GoalPaths_12;
                    tscc_proc_1_input_4_Contour_13 = next_value_of_tscc_proc_1_input_4_Contour_13;
                    tscc_proc_1_input_5_MaybeEnd_14 = next_value_of_tscc_proc_1_input_5_MaybeEnd_14;
                    tscc_proc_1_input_6_ArgNum_15 = next_value_of_tscc_proc_1_input_6_ArgNum_15;
                    tscc_proc_1_input_7_TotalArgs_16 = next_value_of_tscc_proc_1_input_7_TotalArgs_16;
                    tscc_proc_1_input_8_HeadVars_17 = next_value_of_tscc_proc_1_input_8_HeadVars_17;
                    tscc_proc_1_input_9_AllTraced_18 = next_value_of_tscc_proc_1_input_9_AllTraced_18;
                    tscc_proc_1_input_10_Primitives0_19 = next_value_of_tscc_proc_1_input_10_Primitives0_19;
                    goto top_of_proc_1;
                  }
                  else
                  {
                    mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_tree_scalar_common_1[17])));
                  }
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word NegGoal_94 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_25, (MR_Integer) 1))));
                MR_Word ContourTail_174;
                MR_Word Var_105;
                MR_Word ContourHeadNode_169;

                succeeded = (Contour_17 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_105 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Contour_17, (MR_Integer) 0))));
                  ContourTail_174 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Contour_17, (MR_Integer) 1))));
                  ContourHeadNode_169 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_105, (MR_Integer) 1))));
                  succeeded = ((((MR_tag((MR_Word) ContourHeadNode_169)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ContourHeadNode_169, (MR_Integer) 0)))) == (MR_Integer) 9)));
                  if (succeeded)
                  {
                  }
                }
                if (succeeded)
                {
                  MR_Word next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37 = TypeClassInfo_for_annotated_trace_177;
                  MR_Box next_value_of_tscc_proc_1_input_2_Store_11 = Store_13;
                  MR_Word next_value_of_tscc_proc_1_input_3_GoalPaths_12 = GoalPaths_16;
                  MR_Word next_value_of_tscc_proc_1_input_4_Contour_13 = ContourTail_174;
                  MR_Word next_value_of_tscc_proc_1_input_5_MaybeEnd_14 = MaybeEnd_18;
                  MR_Integer next_value_of_tscc_proc_1_input_6_ArgNum_15 = ArgNum_19;
                  MR_Integer next_value_of_tscc_proc_1_input_7_TotalArgs_16 = TotalArgs_20;
                  MR_Word next_value_of_tscc_proc_1_input_8_HeadVars_17 = HeadVars_21;
                  MR_Word next_value_of_tscc_proc_1_input_9_AllTraced_18 = AllTraced_22;
                  MR_Word next_value_of_tscc_proc_1_input_10_Primitives0_19 = Primitives0_23;

                  // direct tailcall eliminated
                  ;
                  tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37 = next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37;
                  tscc_proc_1_input_2_Store_11 = next_value_of_tscc_proc_1_input_2_Store_11;
                  tscc_proc_1_input_3_GoalPaths_12 = next_value_of_tscc_proc_1_input_3_GoalPaths_12;
                  tscc_proc_1_input_4_Contour_13 = next_value_of_tscc_proc_1_input_4_Contour_13;
                  tscc_proc_1_input_5_MaybeEnd_14 = next_value_of_tscc_proc_1_input_5_MaybeEnd_14;
                  tscc_proc_1_input_6_ArgNum_15 = next_value_of_tscc_proc_1_input_6_ArgNum_15;
                  tscc_proc_1_input_7_TotalArgs_16 = next_value_of_tscc_proc_1_input_7_TotalArgs_16;
                  tscc_proc_1_input_8_HeadVars_17 = next_value_of_tscc_proc_1_input_8_HeadVars_17;
                  tscc_proc_1_input_9_AllTraced_18 = next_value_of_tscc_proc_1_input_9_AllTraced_18;
                  tscc_proc_1_input_10_Primitives0_19 = next_value_of_tscc_proc_1_input_10_Primitives0_19;
                  goto top_of_proc_1;
                }
                else
                {
                  MR_Word ContourTail_172;
                  MR_Word Var_106;
                  MR_Word ContourHeadNode_170;

                  succeeded = (Contour_17 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_106 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Contour_17, (MR_Integer) 0))));
                    ContourTail_172 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Contour_17, (MR_Integer) 1))));
                    ContourHeadNode_170 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_106, (MR_Integer) 1))));
                    succeeded = ((((MR_tag((MR_Word) ContourHeadNode_170)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ContourHeadNode_170, (MR_Integer) 0)))) == (MR_Integer) 8)));
                    if (succeeded)
                    {
                    }
                  }
                  if (succeeded)
                  {
                    MR_Word NegPath_103;
                    MR_Word NegAndPath_104;
                    MR_Word Var_108;
                    MR_Word next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37;
                    MR_Box next_value_of_tscc_proc_1_input_2_Store_11;
                    MR_Word next_value_of_tscc_proc_1_input_3_GoalPaths_12;
                    MR_Word next_value_of_tscc_proc_1_input_4_Contour_13;
                    MR_Word next_value_of_tscc_proc_1_input_5_MaybeEnd_14;
                    MR_Integer next_value_of_tscc_proc_1_input_6_ArgNum_15;
                    MR_Integer next_value_of_tscc_proc_1_input_7_TotalArgs_16;
                    MR_Word next_value_of_tscc_proc_1_input_8_HeadVars_17;
                    MR_Word next_value_of_tscc_proc_1_input_9_AllTraced_18;
                    MR_Word next_value_of_tscc_proc_1_input_10_Primitives0_19;

                    NegPath_103 = mdbcomp__goal_path__rev_goal_path_add_at_end_2_f_0(Path_15, (MR_Word) ((MR_Unsigned) 12U));
                    {
                      NegAndPath_104 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), NegAndPath_104, 0) = ((MR_Box) (NegGoal_94));
                      MR_hl_field(MR_mktag(0), NegAndPath_104, 1) = ((MR_Box) (NegPath_103));
                    }
                    {
                      Var_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_108, 0) = ((MR_Box) (NegAndPath_104));
                      MR_hl_field(MR_mktag(1), Var_108, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    // direct tailcall eliminated
                    ;
                    next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37 = TypeClassInfo_for_annotated_trace_177;
                    next_value_of_tscc_proc_1_input_2_Store_11 = Store_13;
                    next_value_of_tscc_proc_1_input_3_GoalPaths_12 = Var_108;
                    next_value_of_tscc_proc_1_input_4_Contour_13 = ContourTail_172;
                    next_value_of_tscc_proc_1_input_5_MaybeEnd_14 = MaybeEnd_18;
                    next_value_of_tscc_proc_1_input_6_ArgNum_15 = ArgNum_19;
                    next_value_of_tscc_proc_1_input_7_TotalArgs_16 = TotalArgs_20;
                    next_value_of_tscc_proc_1_input_8_HeadVars_17 = HeadVars_21;
                    next_value_of_tscc_proc_1_input_9_AllTraced_18 = AllTraced_22;
                    next_value_of_tscc_proc_1_input_10_Primitives0_19 = Primitives0_23;
                    tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37 = next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37;
                    tscc_proc_1_input_2_Store_11 = next_value_of_tscc_proc_1_input_2_Store_11;
                    tscc_proc_1_input_3_GoalPaths_12 = next_value_of_tscc_proc_1_input_3_GoalPaths_12;
                    tscc_proc_1_input_4_Contour_13 = next_value_of_tscc_proc_1_input_4_Contour_13;
                    tscc_proc_1_input_5_MaybeEnd_14 = next_value_of_tscc_proc_1_input_5_MaybeEnd_14;
                    tscc_proc_1_input_6_ArgNum_15 = next_value_of_tscc_proc_1_input_6_ArgNum_15;
                    tscc_proc_1_input_7_TotalArgs_16 = next_value_of_tscc_proc_1_input_7_TotalArgs_16;
                    tscc_proc_1_input_8_HeadVars_17 = next_value_of_tscc_proc_1_input_8_HeadVars_17;
                    tscc_proc_1_input_9_AllTraced_18 = next_value_of_tscc_proc_1_input_9_AllTraced_18;
                    tscc_proc_1_input_10_Primitives0_19 = next_value_of_tscc_proc_1_input_10_Primitives0_19;
                    goto top_of_proc_1;
                  }
                  else
                  {
                    mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_tree_scalar_common_1[18])));
                  }
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word InnerGoal_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_25, (MR_Integer) 1))));
                MR_Word MaybeCut_31 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr_25, (MR_Integer) 2))) & (MR_Integer) 1);
                MR_Word InnerPath_32;
                MR_Word InnerAndPath_33;
                MR_Word Var_134;
                MR_Word Var_135;
                MR_Word next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37;
                MR_Box next_value_of_tscc_proc_1_input_2_Store_11;
                MR_Word next_value_of_tscc_proc_1_input_3_GoalPaths_12;
                MR_Word next_value_of_tscc_proc_1_input_4_Contour_13;
                MR_Word next_value_of_tscc_proc_1_input_5_MaybeEnd_14;
                MR_Integer next_value_of_tscc_proc_1_input_6_ArgNum_15;
                MR_Integer next_value_of_tscc_proc_1_input_7_TotalArgs_16;
                MR_Word next_value_of_tscc_proc_1_input_8_HeadVars_17;
                MR_Word next_value_of_tscc_proc_1_input_9_AllTraced_18;
                MR_Word next_value_of_tscc_proc_1_input_10_Primitives0_19;

                {
                  Var_134 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_134, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(MR_mktag(3), Var_134, 1) = (MR_Box) ((MR_Unsigned) (MaybeCut_31));
                }
                InnerPath_32 = mdbcomp__goal_path__rev_goal_path_add_at_end_2_f_0(Path_15, Var_134);
                {
                  InnerAndPath_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), InnerAndPath_33, 0) = ((MR_Box) (InnerGoal_30));
                  MR_hl_field(MR_mktag(0), InnerAndPath_33, 1) = ((MR_Box) (InnerPath_32));
                }
                {
                  Var_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_135, 0) = ((MR_Box) (InnerAndPath_33));
                  MR_hl_field(MR_mktag(1), Var_135, 1) = ((MR_Box) (GoalPaths_16));
                }
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37 = TypeClassInfo_for_annotated_trace_177;
                next_value_of_tscc_proc_1_input_2_Store_11 = Store_13;
                next_value_of_tscc_proc_1_input_3_GoalPaths_12 = Var_135;
                next_value_of_tscc_proc_1_input_4_Contour_13 = Contour_17;
                next_value_of_tscc_proc_1_input_5_MaybeEnd_14 = MaybeEnd_18;
                next_value_of_tscc_proc_1_input_6_ArgNum_15 = ArgNum_19;
                next_value_of_tscc_proc_1_input_7_TotalArgs_16 = TotalArgs_20;
                next_value_of_tscc_proc_1_input_8_HeadVars_17 = HeadVars_21;
                next_value_of_tscc_proc_1_input_9_AllTraced_18 = AllTraced_22;
                next_value_of_tscc_proc_1_input_10_Primitives0_19 = Primitives0_23;
                tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37 = next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37;
                tscc_proc_1_input_2_Store_11 = next_value_of_tscc_proc_1_input_2_Store_11;
                tscc_proc_1_input_3_GoalPaths_12 = next_value_of_tscc_proc_1_input_3_GoalPaths_12;
                tscc_proc_1_input_4_Contour_13 = next_value_of_tscc_proc_1_input_4_Contour_13;
                tscc_proc_1_input_5_MaybeEnd_14 = next_value_of_tscc_proc_1_input_5_MaybeEnd_14;
                tscc_proc_1_input_6_ArgNum_15 = next_value_of_tscc_proc_1_input_6_ArgNum_15;
                tscc_proc_1_input_7_TotalArgs_16 = next_value_of_tscc_proc_1_input_7_TotalArgs_16;
                tscc_proc_1_input_8_HeadVars_17 = next_value_of_tscc_proc_1_input_8_HeadVars_17;
                tscc_proc_1_input_9_AllTraced_18 = next_value_of_tscc_proc_1_input_9_AllTraced_18;
                tscc_proc_1_input_10_Primitives0_19 = next_value_of_tscc_proc_1_input_10_Primitives0_19;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_String File_34 = ((MR_String) ((MR_hl_field(MR_mktag(3), GoalExpr_25, (MR_Integer) 1))));
                MR_Integer Line_35 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_25, (MR_Integer) 2))));
                MR_Word BoundVars_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_25, (MR_Integer) 3))));
                MR_Word AtomicGoal_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_25, (MR_Integer) 4))));
                MR_Word GeneratesEvent_38;

                GeneratesEvent_38 = mdbcomp__program_representation__atomic_goal_generates_event_like_call_1_f_0(AtomicGoal_37);
                if ((GeneratesEvent_38 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word Primitive_40;
                  MR_Word Primitives1_41;
                  MR_Word next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37;
                  MR_Box next_value_of_tscc_proc_1_input_2_Store_11;
                  MR_Word next_value_of_tscc_proc_1_input_3_GoalPaths_12;
                  MR_Word next_value_of_tscc_proc_1_input_4_Contour_13;
                  MR_Word next_value_of_tscc_proc_1_input_5_MaybeEnd_14;
                  MR_Integer next_value_of_tscc_proc_1_input_6_ArgNum_15;
                  MR_Integer next_value_of_tscc_proc_1_input_7_TotalArgs_16;
                  MR_Word next_value_of_tscc_proc_1_input_8_HeadVars_17;
                  MR_Word next_value_of_tscc_proc_1_input_9_AllTraced_18;
                  MR_Word next_value_of_tscc_proc_1_input_10_Primitives0_19;

                  {
                    Primitive_40 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Primitive_40, 0) = ((MR_Box) (File_34));
                    MR_hl_field(MR_mktag(0), Primitive_40, 1) = ((MR_Box) (Line_35));
                    MR_hl_field(MR_mktag(0), Primitive_40, 2) = ((MR_Box) (BoundVars_36));
                    MR_hl_field(MR_mktag(0), Primitive_40, 3) = ((MR_Box) (AtomicGoal_37));
                    MR_hl_field(MR_mktag(0), Primitive_40, 4) = ((MR_Box) (Path_15));
                    MR_hl_field(MR_mktag(0), Primitive_40, 5) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Primitives1_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Primitives1_41, 0) = ((MR_Box) (Primitive_40));
                    MR_hl_field(MR_mktag(1), Primitives1_41, 1) = ((MR_Box) (Primitives0_23));
                  }
                  // direct tailcall eliminated
                  ;
                  next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37 = TypeClassInfo_for_annotated_trace_177;
                  next_value_of_tscc_proc_1_input_2_Store_11 = Store_13;
                  next_value_of_tscc_proc_1_input_3_GoalPaths_12 = GoalPaths_16;
                  next_value_of_tscc_proc_1_input_4_Contour_13 = Contour_17;
                  next_value_of_tscc_proc_1_input_5_MaybeEnd_14 = MaybeEnd_18;
                  next_value_of_tscc_proc_1_input_6_ArgNum_15 = ArgNum_19;
                  next_value_of_tscc_proc_1_input_7_TotalArgs_16 = TotalArgs_20;
                  next_value_of_tscc_proc_1_input_8_HeadVars_17 = HeadVars_21;
                  next_value_of_tscc_proc_1_input_9_AllTraced_18 = AllTraced_22;
                  next_value_of_tscc_proc_1_input_10_Primitives0_19 = Primitives1_41;
                  tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37 = next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37;
                  tscc_proc_1_input_2_Store_11 = next_value_of_tscc_proc_1_input_2_Store_11;
                  tscc_proc_1_input_3_GoalPaths_12 = next_value_of_tscc_proc_1_input_3_GoalPaths_12;
                  tscc_proc_1_input_4_Contour_13 = next_value_of_tscc_proc_1_input_4_Contour_13;
                  tscc_proc_1_input_5_MaybeEnd_14 = next_value_of_tscc_proc_1_input_5_MaybeEnd_14;
                  tscc_proc_1_input_6_ArgNum_15 = next_value_of_tscc_proc_1_input_6_ArgNum_15;
                  tscc_proc_1_input_7_TotalArgs_16 = next_value_of_tscc_proc_1_input_7_TotalArgs_16;
                  tscc_proc_1_input_8_HeadVars_17 = next_value_of_tscc_proc_1_input_8_HeadVars_17;
                  tscc_proc_1_input_9_AllTraced_18 = next_value_of_tscc_proc_1_input_9_AllTraced_18;
                  tscc_proc_1_input_10_Primitives0_19 = next_value_of_tscc_proc_1_input_10_Primitives0_19;
                  goto top_of_proc_1;
                }
                else
                {
                  MR_Word AtomicGoalArgs_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GeneratesEvent_38, (MR_Integer) 0))));
                  MR_Word next_value_of_tscc_proc_3_input_1_TypeClassInfo_for_annotated_trace_145 = TypeClassInfo_for_annotated_trace_177;
                  MR_Box next_value_of_tscc_proc_3_input_2_Store_17 = Store_13;
                  MR_String next_value_of_tscc_proc_3_input_3_File_18 = File_34;
                  MR_Integer next_value_of_tscc_proc_3_input_4_Line_19 = Line_35;
                  MR_Word next_value_of_tscc_proc_3_input_5_BoundVars_20 = BoundVars_36;
                  MR_Word next_value_of_tscc_proc_3_input_6_AtomicGoal_21 = AtomicGoal_37;
                  MR_Word next_value_of_tscc_proc_3_input_7_AtomicGoalArgs_22 = AtomicGoalArgs_39;
                  MR_Word next_value_of_tscc_proc_3_input_8_Path_23 = Path_15;
                  MR_Word next_value_of_tscc_proc_3_input_9_GoalPaths_24 = GoalPaths_16;
                  MR_Word next_value_of_tscc_proc_3_input_10_Contour_25 = Contour_17;
                  MR_Word next_value_of_tscc_proc_3_input_11_MaybeEnd_26 = MaybeEnd_18;
                  MR_Integer next_value_of_tscc_proc_3_input_12_ArgNum_27 = ArgNum_19;
                  MR_Integer next_value_of_tscc_proc_3_input_13_TotalArgs_28 = TotalArgs_20;
                  MR_Word next_value_of_tscc_proc_3_input_14_HeadVars_29 = HeadVars_21;
                  MR_Word next_value_of_tscc_proc_3_input_15_AllTraced_30 = AllTraced_22;
                  MR_Word next_value_of_tscc_proc_3_input_16_Primitives0_31 = Primitives0_23;

                  // direct tailcall eliminated
                  ;
                  tscc_proc_3_input_1_TypeClassInfo_for_annotated_trace_145 = next_value_of_tscc_proc_3_input_1_TypeClassInfo_for_annotated_trace_145;
                  tscc_proc_3_input_2_Store_17 = next_value_of_tscc_proc_3_input_2_Store_17;
                  tscc_proc_3_input_3_File_18 = next_value_of_tscc_proc_3_input_3_File_18;
                  tscc_proc_3_input_4_Line_19 = next_value_of_tscc_proc_3_input_4_Line_19;
                  tscc_proc_3_input_5_BoundVars_20 = next_value_of_tscc_proc_3_input_5_BoundVars_20;
                  tscc_proc_3_input_6_AtomicGoal_21 = next_value_of_tscc_proc_3_input_6_AtomicGoal_21;
                  tscc_proc_3_input_7_AtomicGoalArgs_22 = next_value_of_tscc_proc_3_input_7_AtomicGoalArgs_22;
                  tscc_proc_3_input_8_Path_23 = next_value_of_tscc_proc_3_input_8_Path_23;
                  tscc_proc_3_input_9_GoalPaths_24 = next_value_of_tscc_proc_3_input_9_GoalPaths_24;
                  tscc_proc_3_input_10_Contour_25 = next_value_of_tscc_proc_3_input_10_Contour_25;
                  tscc_proc_3_input_11_MaybeEnd_26 = next_value_of_tscc_proc_3_input_11_MaybeEnd_26;
                  tscc_proc_3_input_12_ArgNum_27 = next_value_of_tscc_proc_3_input_12_ArgNum_27;
                  tscc_proc_3_input_13_TotalArgs_28 = next_value_of_tscc_proc_3_input_13_TotalArgs_28;
                  tscc_proc_3_input_14_HeadVars_29 = next_value_of_tscc_proc_3_input_14_HeadVars_29;
                  tscc_proc_3_input_15_AllTraced_30 = next_value_of_tscc_proc_3_input_15_AllTraced_30;
                  tscc_proc_3_input_16_Primitives0_31 = next_value_of_tscc_proc_3_input_16_Primitives0_31;
                  goto top_of_proc_3;
                }
              }
              break;
          }
          break;
      }
      tscc_output_1_MaybePrims_20 = MaybePrims_24;
      goto tscc_end;
    }
  top_of_proc_3:;
    {
      MR_Word TypeClassInfo_for_annotated_trace_145 = tscc_proc_3_input_1_TypeClassInfo_for_annotated_trace_145;
      MR_Box Store_17 = tscc_proc_3_input_2_Store_17;
      MR_String File_18 = tscc_proc_3_input_3_File_18;
      MR_Integer Line_19 = tscc_proc_3_input_4_Line_19;
      MR_Word BoundVars_20 = tscc_proc_3_input_5_BoundVars_20;
      MR_Word AtomicGoal_21 = tscc_proc_3_input_6_AtomicGoal_21;
      MR_Word AtomicGoalArgs_22 = tscc_proc_3_input_7_AtomicGoalArgs_22;
      MR_Word Path_23 = tscc_proc_3_input_8_Path_23;
      MR_Word GoalPaths_24 = tscc_proc_3_input_9_GoalPaths_24;
      MR_Word Contour_25 = tscc_proc_3_input_10_Contour_25;
      MR_Word MaybeEnd_26 = tscc_proc_3_input_11_MaybeEnd_26;
      MR_Integer ArgNum_27 = tscc_proc_3_input_12_ArgNum_27;
      MR_Integer TotalArgs_28 = tscc_proc_3_input_13_TotalArgs_28;
      MR_Word HeadVars_29 = tscc_proc_3_input_14_HeadVars_29;
      MR_Word AllTraced_30 = tscc_proc_3_input_15_AllTraced_30;
      MR_Word Primitives0_31 = tscc_proc_3_input_16_Primitives0_31;
      MR_Word MaybePrims_32;
      MR_bool succeeded = (Contour_25 != (MR_Word) ((MR_Unsigned) 0U));
      MR_Word ContourHeadNode_34;
      MR_Word EndPath_35;
      MR_Word Var_89;
      MR_Word Var_90;

      if (succeeded)
      {
        Var_89 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Contour_25, (MR_Integer) 0))));
        Var_90 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Contour_25, (MR_Integer) 1))));
        succeeded = (Var_90 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ContourHeadNode_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_89, (MR_Integer) 1))));
          succeeded = (MaybeEnd_26 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
            EndPath_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeEnd_26, (MR_Integer) 0))));
        }
      }
      if (succeeded)
      {
        MR_Word Atom_46;
        MR_Word TypeInfo_147_147;
        MR_Word MaybeReturnLabel_42;
        MR_String CallPathStr_47;
        MR_Word CallPath_48;
        MR_Integer PolyConst2_146;

        succeeded = ((MR_tag((MR_Word) ContourHeadNode_34)) == (MR_Integer) 0);
        if (succeeded)
        {
          MaybeReturnLabel_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ContourHeadNode_34, (MR_Integer) 6))));
          PolyConst2_146 = (MR_Integer) 2;
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_annotated_trace_145, PolyConst2_146, &TypeInfo_147_147);
          Atom_46 = mdb__declarative_execution__get_trace_call_atom_1_f_0(TypeInfo_147_147, ContourHeadNode_34);
          CallPathStr_47 = mdbcomp__rtti_access__get_goal_path_from_maybe_label_1_f_0(MaybeReturnLabel_42);
          mdbcomp__goal_path__rev_goal_path_from_string_det_2_p_0(CallPathStr_47, &CallPath_48);
          succeeded = mdbcomp__goal_path____Unify____reverse_goal_path_0_0(CallPath_48, EndPath_35);
        }
        if (succeeded)
        {
          MR_Word AtomicGoalId_49;
          MR_Word Var_91;

          Var_91 = mdbcomp__program_representation__atomic_goal_identifiable_1_f_0(AtomicGoal_21);
          succeeded = (Var_91 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            AtomicGoalId_49 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_91, (MR_Integer) 0))));
            succeeded = mdb__declarative_tree__atomic_goal_matches_atom_2_p_0(AtomicGoalId_49, Atom_46);
          }
          else
            succeeded = (AllTraced_30 == (MR_Integer) 1);
          if (succeeded)
          {
            MR_Integer Var_92;
            MR_Integer Var_93;

            Var_93 = mercury__list__length_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), AtomicGoalArgs_22);
            Var_92 = (MR_Integer) ((MR_Unsigned) TotalArgs_28 - (MR_Unsigned) Var_93);
            succeeded = (ArgNum_27 > Var_92);
            if (succeeded)
            {
              MR_Integer Var_50;
              MR_Word Var_94;

              mdb__declarative_tree__find_variable_in_args_4_p_0(AtomicGoalArgs_22, ArgNum_27, TotalArgs_28, &Var_50);
              {
                Var_94 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_94, 0) = ((MR_Box) (Primitives0_31));
                MR_hl_field(MR_mktag(0), Var_94, 1) = ((MR_Box) (Var_50));
                MR_hl_field(MR_mktag(0), Var_94, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              }
              {
                MaybePrims_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MaybePrims_32, 0) = ((MR_Box) (Var_94));
              }
            }
            else
              switch (MR_tag((MR_Word) AtomicGoal_21)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                  {
                    mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_tree_scalar_common_1[20])));
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), AtomicGoal_21, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                    case (MR_Integer) 1:
                    case (MR_Integer) 2:
                    case (MR_Integer) 3:
                    case (MR_Integer) 4:
                    case (MR_Integer) 6:
                    case (MR_Integer) 7:
                    case (MR_Integer) 8:
                    case (MR_Integer) 9:
                      {
                        mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_tree_scalar_common_1[20])));
                      }
                      break;
                    case (MR_Integer) 5:
                      {
                        MR_Word Var_99;
                        MR_Integer Var_123 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), AtomicGoal_21, (MR_Integer) 1))));

                        {
                          Var_99 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), Var_99, 0) = ((MR_Box) (Primitives0_31));
                          MR_hl_field(MR_mktag(0), Var_99, 1) = ((MR_Box) (Var_123));
                          MR_hl_field(MR_mktag(0), Var_99, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                        }
                        {
                          MaybePrims_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), MaybePrims_32, 0) = ((MR_Box) (Var_99));
                        }
                      }
                      break;
                  }
                  break;
              }
          }
          else
            switch (AllTraced_30) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word Primitive_83;
                  MR_Word Primitives1_84;
                  MR_Word next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37;
                  MR_Box next_value_of_tscc_proc_1_input_2_Store_11;
                  MR_Word next_value_of_tscc_proc_1_input_3_GoalPaths_12;
                  MR_Word next_value_of_tscc_proc_1_input_4_Contour_13;
                  MR_Word next_value_of_tscc_proc_1_input_5_MaybeEnd_14;
                  MR_Integer next_value_of_tscc_proc_1_input_6_ArgNum_15;
                  MR_Integer next_value_of_tscc_proc_1_input_7_TotalArgs_16;
                  MR_Word next_value_of_tscc_proc_1_input_8_HeadVars_17;
                  MR_Word next_value_of_tscc_proc_1_input_9_AllTraced_18;
                  MR_Word next_value_of_tscc_proc_1_input_10_Primitives0_19;

                  {
                    Primitive_83 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Primitive_83, 0) = ((MR_Box) (File_18));
                    MR_hl_field(MR_mktag(0), Primitive_83, 1) = ((MR_Box) (Line_19));
                    MR_hl_field(MR_mktag(0), Primitive_83, 2) = ((MR_Box) (BoundVars_20));
                    MR_hl_field(MR_mktag(0), Primitive_83, 3) = ((MR_Box) (AtomicGoal_21));
                    MR_hl_field(MR_mktag(0), Primitive_83, 4) = ((MR_Box) (Path_23));
                    MR_hl_field(MR_mktag(0), Primitive_83, 5) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Primitives1_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Primitives1_84, 0) = ((MR_Box) (Primitive_83));
                    MR_hl_field(MR_mktag(1), Primitives1_84, 1) = ((MR_Box) (Primitives0_31));
                  }
                  // direct tailcall eliminated
                  ;
                  next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37 = TypeClassInfo_for_annotated_trace_145;
                  next_value_of_tscc_proc_1_input_2_Store_11 = Store_17;
                  next_value_of_tscc_proc_1_input_3_GoalPaths_12 = GoalPaths_24;
                  next_value_of_tscc_proc_1_input_4_Contour_13 = Contour_25;
                  next_value_of_tscc_proc_1_input_5_MaybeEnd_14 = MaybeEnd_26;
                  next_value_of_tscc_proc_1_input_6_ArgNum_15 = ArgNum_27;
                  next_value_of_tscc_proc_1_input_7_TotalArgs_16 = TotalArgs_28;
                  next_value_of_tscc_proc_1_input_8_HeadVars_17 = HeadVars_29;
                  next_value_of_tscc_proc_1_input_9_AllTraced_18 = AllTraced_30;
                  next_value_of_tscc_proc_1_input_10_Primitives0_19 = Primitives1_84;
                  tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37 = next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37;
                  tscc_proc_1_input_2_Store_11 = next_value_of_tscc_proc_1_input_2_Store_11;
                  tscc_proc_1_input_3_GoalPaths_12 = next_value_of_tscc_proc_1_input_3_GoalPaths_12;
                  tscc_proc_1_input_4_Contour_13 = next_value_of_tscc_proc_1_input_4_Contour_13;
                  tscc_proc_1_input_5_MaybeEnd_14 = next_value_of_tscc_proc_1_input_5_MaybeEnd_14;
                  tscc_proc_1_input_6_ArgNum_15 = next_value_of_tscc_proc_1_input_6_ArgNum_15;
                  tscc_proc_1_input_7_TotalArgs_16 = next_value_of_tscc_proc_1_input_7_TotalArgs_16;
                  tscc_proc_1_input_8_HeadVars_17 = next_value_of_tscc_proc_1_input_8_HeadVars_17;
                  tscc_proc_1_input_9_AllTraced_18 = next_value_of_tscc_proc_1_input_9_AllTraced_18;
                  tscc_proc_1_input_10_Primitives0_19 = next_value_of_tscc_proc_1_input_10_Primitives0_19;
                  goto top_of_proc_1;
                }
                break;
              case (MR_Integer) 1:
                {
                  mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_tree_scalar_common_1[21])));
                }
                break;
            }
        }
        else
        {
          mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_tree_scalar_common_1[22])));
        }
      }
      else
      if ((Contour_25 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        succeeded = (MaybeEnd_26 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
          succeeded = (AllTraced_30 == (MR_Integer) 0);
        if (succeeded)
        {
          MR_Word Primitive_134;
          MR_Word Primitives1_135;
          MR_Word next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37;
          MR_Box next_value_of_tscc_proc_1_input_2_Store_11;
          MR_Word next_value_of_tscc_proc_1_input_3_GoalPaths_12;
          MR_Word next_value_of_tscc_proc_1_input_5_MaybeEnd_14;
          MR_Integer next_value_of_tscc_proc_1_input_6_ArgNum_15;
          MR_Integer next_value_of_tscc_proc_1_input_7_TotalArgs_16;
          MR_Word next_value_of_tscc_proc_1_input_8_HeadVars_17;
          MR_Word next_value_of_tscc_proc_1_input_9_AllTraced_18;
          MR_Word next_value_of_tscc_proc_1_input_10_Primitives0_19;

          {
            Primitive_134 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Primitive_134, 0) = ((MR_Box) (File_18));
            MR_hl_field(MR_mktag(0), Primitive_134, 1) = ((MR_Box) (Line_19));
            MR_hl_field(MR_mktag(0), Primitive_134, 2) = ((MR_Box) (BoundVars_20));
            MR_hl_field(MR_mktag(0), Primitive_134, 3) = ((MR_Box) (AtomicGoal_21));
            MR_hl_field(MR_mktag(0), Primitive_134, 4) = ((MR_Box) (Path_23));
            MR_hl_field(MR_mktag(0), Primitive_134, 5) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Primitives1_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Primitives1_135, 0) = ((MR_Box) (Primitive_134));
            MR_hl_field(MR_mktag(1), Primitives1_135, 1) = ((MR_Box) (Primitives0_31));
          }
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37 = TypeClassInfo_for_annotated_trace_145;
          next_value_of_tscc_proc_1_input_2_Store_11 = Store_17;
          next_value_of_tscc_proc_1_input_3_GoalPaths_12 = GoalPaths_24;
          next_value_of_tscc_proc_1_input_5_MaybeEnd_14 = MaybeEnd_26;
          next_value_of_tscc_proc_1_input_6_ArgNum_15 = ArgNum_27;
          next_value_of_tscc_proc_1_input_7_TotalArgs_16 = TotalArgs_28;
          next_value_of_tscc_proc_1_input_8_HeadVars_17 = HeadVars_29;
          next_value_of_tscc_proc_1_input_9_AllTraced_18 = AllTraced_30;
          next_value_of_tscc_proc_1_input_10_Primitives0_19 = Primitives1_135;
          tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37 = next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37;
          tscc_proc_1_input_2_Store_11 = next_value_of_tscc_proc_1_input_2_Store_11;
          tscc_proc_1_input_3_GoalPaths_12 = next_value_of_tscc_proc_1_input_3_GoalPaths_12;
          tscc_proc_1_input_4_Contour_13 = (MR_Word) ((MR_Unsigned) 0U);
          tscc_proc_1_input_5_MaybeEnd_14 = next_value_of_tscc_proc_1_input_5_MaybeEnd_14;
          tscc_proc_1_input_6_ArgNum_15 = next_value_of_tscc_proc_1_input_6_ArgNum_15;
          tscc_proc_1_input_7_TotalArgs_16 = next_value_of_tscc_proc_1_input_7_TotalArgs_16;
          tscc_proc_1_input_8_HeadVars_17 = next_value_of_tscc_proc_1_input_8_HeadVars_17;
          tscc_proc_1_input_9_AllTraced_18 = next_value_of_tscc_proc_1_input_9_AllTraced_18;
          tscc_proc_1_input_10_Primitives0_19 = next_value_of_tscc_proc_1_input_10_Primitives0_19;
          goto top_of_proc_1;
        }
        else
        {
          mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_tree_scalar_common_1[23])));
        }
      }
      else
      {
        MR_Box ContourHeadId_85;
        MR_Word ContourTail_86 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Contour_25, (MR_Integer) 1))));
        MR_Word CallInfo_87;
        MR_Word NewContour_88;
        MR_Word Var_113 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Contour_25, (MR_Integer) 0))));
        MR_Word ContourHeadNode_129;
        MR_Word Primitive_132;
        MR_Word Primitives1_133;
        MR_Word Atom_127;
        MR_Word TypeInfo_153_153;
        MR_Word next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37;
        MR_Box next_value_of_tscc_proc_1_input_2_Store_11;
        MR_Word next_value_of_tscc_proc_1_input_3_GoalPaths_12;
        MR_Word next_value_of_tscc_proc_1_input_4_Contour_13;
        MR_Word next_value_of_tscc_proc_1_input_5_MaybeEnd_14;
        MR_Integer next_value_of_tscc_proc_1_input_6_ArgNum_15;
        MR_Integer next_value_of_tscc_proc_1_input_7_TotalArgs_16;
        MR_Word next_value_of_tscc_proc_1_input_8_HeadVars_17;
        MR_Word next_value_of_tscc_proc_1_input_9_AllTraced_18;
        MR_Word next_value_of_tscc_proc_1_input_10_Primitives0_19;

        ContourHeadId_85 = (MR_hl_field(MR_mktag(0), Var_113, (MR_Integer) 0));
        ContourHeadNode_129 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_113, (MR_Integer) 1))));
        mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_annotated_trace_145, (MR_Integer) 2, &TypeInfo_153_153);
        succeeded = mdb__declarative_execution__get_trace_exit_atom_1_f_1(TypeInfo_153_153, ContourHeadNode_129, &Atom_127);
        if (succeeded)
        {
          MR_Word AtomicGoalId_125;
          MR_Word Var_114;

          Var_114 = mdbcomp__program_representation__atomic_goal_identifiable_1_f_0(AtomicGoal_21);
          succeeded = (Var_114 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            AtomicGoalId_125 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_114, (MR_Integer) 0))));
            succeeded = mdb__declarative_tree__atomic_goal_matches_atom_2_p_0(AtomicGoalId_125, Atom_127);
          }
          else
            succeeded = (AllTraced_30 == (MR_Integer) 1);
          if (succeeded)
          {
            {
              CallInfo_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), CallInfo_87, 0) = ContourHeadId_85;
            }
            NewContour_88 = ContourTail_86;
          }
          else
            switch (AllTraced_30) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  CallInfo_87 = (MR_Word) ((MR_Unsigned) 0U);
                  NewContour_88 = Contour_25;
                }
                break;
              case (MR_Integer) 1:
                {
                  mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_tree_scalar_common_1[24])));
                }
                break;
            }
        }
        else
          switch (AllTraced_30) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                CallInfo_87 = (MR_Word) ((MR_Unsigned) 0U);
                NewContour_88 = Contour_25;
              }
              break;
            case (MR_Integer) 1:
              {
                mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_tree_scalar_common_1[25])));
              }
              break;
          }
        {
          Primitive_132 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Primitive_132, 0) = ((MR_Box) (File_18));
          MR_hl_field(MR_mktag(0), Primitive_132, 1) = ((MR_Box) (Line_19));
          MR_hl_field(MR_mktag(0), Primitive_132, 2) = ((MR_Box) (BoundVars_20));
          MR_hl_field(MR_mktag(0), Primitive_132, 3) = ((MR_Box) (AtomicGoal_21));
          MR_hl_field(MR_mktag(0), Primitive_132, 4) = ((MR_Box) (Path_23));
          MR_hl_field(MR_mktag(0), Primitive_132, 5) = ((MR_Box) (CallInfo_87));
        }
        {
          Primitives1_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Primitives1_133, 0) = ((MR_Box) (Primitive_132));
          MR_hl_field(MR_mktag(1), Primitives1_133, 1) = ((MR_Box) (Primitives0_31));
        }
        // direct tailcall eliminated
        ;
        next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37 = TypeClassInfo_for_annotated_trace_145;
        next_value_of_tscc_proc_1_input_2_Store_11 = Store_17;
        next_value_of_tscc_proc_1_input_3_GoalPaths_12 = GoalPaths_24;
        next_value_of_tscc_proc_1_input_4_Contour_13 = NewContour_88;
        next_value_of_tscc_proc_1_input_5_MaybeEnd_14 = MaybeEnd_26;
        next_value_of_tscc_proc_1_input_6_ArgNum_15 = ArgNum_27;
        next_value_of_tscc_proc_1_input_7_TotalArgs_16 = TotalArgs_28;
        next_value_of_tscc_proc_1_input_8_HeadVars_17 = HeadVars_29;
        next_value_of_tscc_proc_1_input_9_AllTraced_18 = AllTraced_30;
        next_value_of_tscc_proc_1_input_10_Primitives0_19 = Primitives1_133;
        tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37 = next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37;
        tscc_proc_1_input_2_Store_11 = next_value_of_tscc_proc_1_input_2_Store_11;
        tscc_proc_1_input_3_GoalPaths_12 = next_value_of_tscc_proc_1_input_3_GoalPaths_12;
        tscc_proc_1_input_4_Contour_13 = next_value_of_tscc_proc_1_input_4_Contour_13;
        tscc_proc_1_input_5_MaybeEnd_14 = next_value_of_tscc_proc_1_input_5_MaybeEnd_14;
        tscc_proc_1_input_6_ArgNum_15 = next_value_of_tscc_proc_1_input_6_ArgNum_15;
        tscc_proc_1_input_7_TotalArgs_16 = next_value_of_tscc_proc_1_input_7_TotalArgs_16;
        tscc_proc_1_input_8_HeadVars_17 = next_value_of_tscc_proc_1_input_8_HeadVars_17;
        tscc_proc_1_input_9_AllTraced_18 = next_value_of_tscc_proc_1_input_9_AllTraced_18;
        tscc_proc_1_input_10_Primitives0_19 = next_value_of_tscc_proc_1_input_10_Primitives0_19;
        goto top_of_proc_1;
      }
      tscc_output_1_MaybePrims_20 = MaybePrims_32;
      goto tscc_end;
    }
  tscc_end:;
    return tscc_output_1_MaybePrims_20;
  }
}

static MR_Word MR_CALL 
mdb__declarative_tree__match_goal_to_contour_event_11_f_0(
  MR_Word tscc_proc_2_input_1_TypeClassInfo_for_annotated_trace_177,
  MR_Box tscc_proc_2_input_2_Store_13,
  MR_Word tscc_proc_2_input_3_Goal_14,
  MR_Word tscc_proc_2_input_4_Path_15,
  MR_Word tscc_proc_2_input_5_GoalPaths_16,
  MR_Word tscc_proc_2_input_6_Contour_17,
  MR_Word tscc_proc_2_input_7_MaybeEnd_18,
  MR_Integer tscc_proc_2_input_8_ArgNum_19,
  MR_Integer tscc_proc_2_input_9_TotalArgs_20,
  MR_Word tscc_proc_2_input_10_HeadVars_21,
  MR_Word tscc_proc_2_input_11_AllTraced_22,
  MR_Word tscc_proc_2_input_12_Primitives0_23)
{
  {
    MR_Word tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37;
    MR_Box tscc_proc_1_input_2_Store_11;
    MR_Word tscc_proc_1_input_3_GoalPaths_12;
    MR_Word tscc_proc_1_input_4_Contour_13;
    MR_Word tscc_proc_1_input_5_MaybeEnd_14;
    MR_Integer tscc_proc_1_input_6_ArgNum_15;
    MR_Integer tscc_proc_1_input_7_TotalArgs_16;
    MR_Word tscc_proc_1_input_8_HeadVars_17;
    MR_Word tscc_proc_1_input_9_AllTraced_18;
    MR_Word tscc_proc_1_input_10_Primitives0_19;
    MR_Word tscc_proc_3_input_1_TypeClassInfo_for_annotated_trace_145;
    MR_Box tscc_proc_3_input_2_Store_17;
    MR_String tscc_proc_3_input_3_File_18;
    MR_Integer tscc_proc_3_input_4_Line_19;
    MR_Word tscc_proc_3_input_5_BoundVars_20;
    MR_Word tscc_proc_3_input_6_AtomicGoal_21;
    MR_Word tscc_proc_3_input_7_AtomicGoalArgs_22;
    MR_Word tscc_proc_3_input_8_Path_23;
    MR_Word tscc_proc_3_input_9_GoalPaths_24;
    MR_Word tscc_proc_3_input_10_Contour_25;
    MR_Word tscc_proc_3_input_11_MaybeEnd_26;
    MR_Integer tscc_proc_3_input_12_ArgNum_27;
    MR_Integer tscc_proc_3_input_13_TotalArgs_28;
    MR_Word tscc_proc_3_input_14_HeadVars_29;
    MR_Word tscc_proc_3_input_15_AllTraced_30;
    MR_Word tscc_proc_3_input_16_Primitives0_31;
    MR_Word tscc_output_1_MaybePrims_20;

    // The code for TSCC PROC 2: func mdb.declarative_tree.match_goal_to_contour_event/11-0.
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: func mdb.declarative_tree.make_primitive_list/9-0
    ;
    // proc 2 in TSCC: func mdb.declarative_tree.match_goal_to_contour_event/11-0
    ;
    // proc 3 in TSCC: func mdb.declarative_tree.match_atomic_goal_to_contour_event/15-0
    ;
    ;
    goto top_of_proc_2;
  top_of_proc_1:;
    {
      MR_Word TypeClassInfo_for_annotated_trace_37 = tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37;
      MR_Box Store_11 = tscc_proc_1_input_2_Store_11;
      MR_Word GoalPaths_12 = tscc_proc_1_input_3_GoalPaths_12;
      MR_Word Contour_13 = tscc_proc_1_input_4_Contour_13;
      MR_Word MaybeEnd_14 = tscc_proc_1_input_5_MaybeEnd_14;
      MR_Integer ArgNum_15 = tscc_proc_1_input_6_ArgNum_15;
      MR_Integer TotalArgs_16 = tscc_proc_1_input_7_TotalArgs_16;
      MR_Word HeadVars_17 = tscc_proc_1_input_8_HeadVars_17;
      MR_Word AllTraced_18 = tscc_proc_1_input_9_AllTraced_18;
      MR_Word Primitives0_19 = tscc_proc_1_input_10_Primitives0_19;
      MR_Word MaybePrims_20;
      MR_bool succeeded = (AllTraced_18 == (MR_Integer) 0);
      MR_Word AdjustedContour_21;
      MR_Integer PolyConst2_40;
      MR_Word Node_58;
      MR_Word EndPath_59;
      MR_Word MaybeReturnLabel_66;
      MR_String CallPathStr_70;
      MR_Word CallPath_71;
      MR_Word Var_72;
      MR_Word Var_73;
      MR_Word TypeInfo_41_41;

      if (succeeded)
      {
        {
          MR_Word NextGoal_52;
          MR_Word Var_55;
          MR_Word Var_56;

          succeeded = (GoalPaths_12 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalPaths_12, (MR_Integer) 0))));
            NextGoal_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_55, (MR_Integer) 0))));
            Var_56 = mdbcomp__program_representation__goal_generates_internal_event_1_f_0(NextGoal_52);
            succeeded = (Var_56 == (MR_Integer) 1);
          }
        }
        if (!(succeeded))
          succeeded = (GoalPaths_12 == (MR_Word) ((MR_Unsigned) 0U));
      }
      if (succeeded)
      {
        MR_Word TypeInfo_39_39;

        mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_annotated_trace_37, (MR_Integer) 2, &TypeInfo_39_39);
        mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_108_101_97_100_105_110_103_95_101_120_105_116_95_102_97_105_108_95_101_118_101_110_116_115_95_95_91_49_93_95_48_2_p_0(Contour_13, &AdjustedContour_21);
      }
      else
        AdjustedContour_21 = Contour_13;
      succeeded = (AllTraced_18 == (MR_Integer) 0);
      if (succeeded)
      {
        PolyConst2_40 = (MR_Integer) 2;
        mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_annotated_trace_37, PolyConst2_40, &TypeInfo_41_41);
        succeeded = (AdjustedContour_21 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AdjustedContour_21, (MR_Integer) 0))));
          Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AdjustedContour_21, (MR_Integer) 1))));
          succeeded = (Var_73 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Node_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_72, (MR_Integer) 1))));
            succeeded = (MaybeEnd_14 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              EndPath_59 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeEnd_14, (MR_Integer) 0))));
              succeeded = ((MR_tag((MR_Word) Node_58)) == (MR_Integer) 0);
              if (succeeded)
              {
                MaybeReturnLabel_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Node_58, (MR_Integer) 6))));
                CallPathStr_70 = mdbcomp__rtti_access__get_goal_path_from_maybe_label_1_f_0(MaybeReturnLabel_66);
                mdbcomp__goal_path__rev_goal_path_from_string_det_2_p_0(CallPathStr_70, &CallPath_71);
                succeeded = mdbcomp__goal_path____Unify____reverse_goal_path_0_0(CallPath_71, EndPath_59);
                if (succeeded)
                {
                  {
                    MR_Word NextGoal_75;
                    MR_Word Var_78;
                    MR_Word Var_79;

                    succeeded = (GoalPaths_12 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalPaths_12, (MR_Integer) 0))));
                      NextGoal_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_78, (MR_Integer) 0))));
                      Var_79 = mdbcomp__program_representation__goal_generates_internal_event_1_f_0(NextGoal_75);
                      succeeded = (Var_79 == (MR_Integer) 1);
                    }
                  }
                  if (!(succeeded))
                    succeeded = (GoalPaths_12 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
            }
          }
        }
      }
      if (succeeded)
        MaybePrims_20 = (MR_Word) ((MR_Unsigned) 0U);
      else
      if ((GoalPaths_12 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Integer Var_25;
        MR_Word Var_34;

        succeeded = mdb__declarative_tree__IntroducedFrom__pred__make_primitive_list__1184__1_3_p_0(TypeClassInfo_for_annotated_trace_37, AdjustedContour_21, (MR_Word) ((MR_Unsigned) 0U));
        if (!(succeeded))
        {
          mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_tree_scalar_common_1[15])));
        }
        mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_108_95_114_101_113_117_105_114_101_95_95_104_111_51_95_95_91_51_93_95_48_3_p_0(MaybeEnd_14, (MR_Word) ((MR_Unsigned) 0U), (MR_String) "make_primitive_list", (MR_String) "found end when looking for call");
        mdb__declarative_tree__find_variable_in_args_4_p_0(HeadVars_17, ArgNum_15, TotalArgs_16, &Var_25);
        {
          Var_34 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_34, 0) = ((MR_Box) (Primitives0_19));
          MR_hl_field(MR_mktag(0), Var_34, 1) = ((MR_Box) (Var_25));
          MR_hl_field(MR_mktag(0), Var_34, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        }
        {
          MaybePrims_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybePrims_20, 0) = ((MR_Box) (Var_34));
        }
      }
      else
      {
        MR_Word Goal_22;
        MR_Word Path_23;
        MR_Word Tail_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalPaths_12, (MR_Integer) 1))));
        MR_Word Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalPaths_12, (MR_Integer) 0))));
        MR_Word next_value_of_tscc_proc_2_input_1_TypeClassInfo_for_annotated_trace_177;
        MR_Box next_value_of_tscc_proc_2_input_2_Store_13;
        MR_Word next_value_of_tscc_proc_2_input_3_Goal_14;
        MR_Word next_value_of_tscc_proc_2_input_4_Path_15;
        MR_Word next_value_of_tscc_proc_2_input_5_GoalPaths_16;
        MR_Word next_value_of_tscc_proc_2_input_6_Contour_17;
        MR_Word next_value_of_tscc_proc_2_input_7_MaybeEnd_18;
        MR_Integer next_value_of_tscc_proc_2_input_8_ArgNum_19;
        MR_Integer next_value_of_tscc_proc_2_input_9_TotalArgs_20;
        MR_Word next_value_of_tscc_proc_2_input_10_HeadVars_21;
        MR_Word next_value_of_tscc_proc_2_input_11_AllTraced_22;
        MR_Word next_value_of_tscc_proc_2_input_12_Primitives0_23;

        Goal_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_36, (MR_Integer) 0))));
        Path_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_36, (MR_Integer) 1))));
        // direct tailcall eliminated
        ;
        next_value_of_tscc_proc_2_input_1_TypeClassInfo_for_annotated_trace_177 = TypeClassInfo_for_annotated_trace_37;
        next_value_of_tscc_proc_2_input_2_Store_13 = Store_11;
        next_value_of_tscc_proc_2_input_3_Goal_14 = Goal_22;
        next_value_of_tscc_proc_2_input_4_Path_15 = Path_23;
        next_value_of_tscc_proc_2_input_5_GoalPaths_16 = Tail_24;
        next_value_of_tscc_proc_2_input_6_Contour_17 = AdjustedContour_21;
        next_value_of_tscc_proc_2_input_7_MaybeEnd_18 = MaybeEnd_14;
        next_value_of_tscc_proc_2_input_8_ArgNum_19 = ArgNum_15;
        next_value_of_tscc_proc_2_input_9_TotalArgs_20 = TotalArgs_16;
        next_value_of_tscc_proc_2_input_10_HeadVars_21 = HeadVars_17;
        next_value_of_tscc_proc_2_input_11_AllTraced_22 = AllTraced_18;
        next_value_of_tscc_proc_2_input_12_Primitives0_23 = Primitives0_19;
        tscc_proc_2_input_1_TypeClassInfo_for_annotated_trace_177 = next_value_of_tscc_proc_2_input_1_TypeClassInfo_for_annotated_trace_177;
        tscc_proc_2_input_2_Store_13 = next_value_of_tscc_proc_2_input_2_Store_13;
        tscc_proc_2_input_3_Goal_14 = next_value_of_tscc_proc_2_input_3_Goal_14;
        tscc_proc_2_input_4_Path_15 = next_value_of_tscc_proc_2_input_4_Path_15;
        tscc_proc_2_input_5_GoalPaths_16 = next_value_of_tscc_proc_2_input_5_GoalPaths_16;
        tscc_proc_2_input_6_Contour_17 = next_value_of_tscc_proc_2_input_6_Contour_17;
        tscc_proc_2_input_7_MaybeEnd_18 = next_value_of_tscc_proc_2_input_7_MaybeEnd_18;
        tscc_proc_2_input_8_ArgNum_19 = next_value_of_tscc_proc_2_input_8_ArgNum_19;
        tscc_proc_2_input_9_TotalArgs_20 = next_value_of_tscc_proc_2_input_9_TotalArgs_20;
        tscc_proc_2_input_10_HeadVars_21 = next_value_of_tscc_proc_2_input_10_HeadVars_21;
        tscc_proc_2_input_11_AllTraced_22 = next_value_of_tscc_proc_2_input_11_AllTraced_22;
        tscc_proc_2_input_12_Primitives0_23 = next_value_of_tscc_proc_2_input_12_Primitives0_23;
        goto top_of_proc_2;
      }
      tscc_output_1_MaybePrims_20 = MaybePrims_20;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word TypeClassInfo_for_annotated_trace_177 = tscc_proc_2_input_1_TypeClassInfo_for_annotated_trace_177;
      MR_Box Store_13 = tscc_proc_2_input_2_Store_13;
      MR_Word Goal_14 = tscc_proc_2_input_3_Goal_14;
      MR_Word Path_15 = tscc_proc_2_input_4_Path_15;
      MR_Word GoalPaths_16 = tscc_proc_2_input_5_GoalPaths_16;
      MR_Word Contour_17 = tscc_proc_2_input_6_Contour_17;
      MR_Word MaybeEnd_18 = tscc_proc_2_input_7_MaybeEnd_18;
      MR_Integer ArgNum_19 = tscc_proc_2_input_8_ArgNum_19;
      MR_Integer TotalArgs_20 = tscc_proc_2_input_9_TotalArgs_20;
      MR_Word HeadVars_21 = tscc_proc_2_input_10_HeadVars_21;
      MR_Word AllTraced_22 = tscc_proc_2_input_11_AllTraced_22;
      MR_Word Primitives0_23 = tscc_proc_2_input_12_Primitives0_23;
      MR_Word MaybePrims_24;
      MR_bool succeeded;
      MR_Word GoalExpr_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_14, (MR_Integer) 0))));

      switch (MR_tag((MR_Word) GoalExpr_25)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Conjs_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GoalExpr_25, (MR_Integer) 0))));
            MR_Word ConjPaths_29;
            MR_Word Var_137;
            MR_Word next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37;
            MR_Box next_value_of_tscc_proc_1_input_2_Store_11;
            MR_Word next_value_of_tscc_proc_1_input_3_GoalPaths_12;
            MR_Word next_value_of_tscc_proc_1_input_4_Contour_13;
            MR_Word next_value_of_tscc_proc_1_input_5_MaybeEnd_14;
            MR_Integer next_value_of_tscc_proc_1_input_6_ArgNum_15;
            MR_Integer next_value_of_tscc_proc_1_input_7_TotalArgs_16;
            MR_Word next_value_of_tscc_proc_1_input_8_HeadVars_17;
            MR_Word next_value_of_tscc_proc_1_input_9_AllTraced_18;
            MR_Word next_value_of_tscc_proc_1_input_10_Primitives0_19;

            mdb__declarative_tree__add_paths_to_conjuncts_4_p_0(Conjs_28, Path_15, (MR_Integer) 1, &ConjPaths_29);
            Var_137 = mercury__list__f_43_43_2_f_0((MR_Word) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_goal_and_path_0), ConjPaths_29, GoalPaths_16);
            // direct tailcall eliminated
            ;
            next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37 = TypeClassInfo_for_annotated_trace_177;
            next_value_of_tscc_proc_1_input_2_Store_11 = Store_13;
            next_value_of_tscc_proc_1_input_3_GoalPaths_12 = Var_137;
            next_value_of_tscc_proc_1_input_4_Contour_13 = Contour_17;
            next_value_of_tscc_proc_1_input_5_MaybeEnd_14 = MaybeEnd_18;
            next_value_of_tscc_proc_1_input_6_ArgNum_15 = ArgNum_19;
            next_value_of_tscc_proc_1_input_7_TotalArgs_16 = TotalArgs_20;
            next_value_of_tscc_proc_1_input_8_HeadVars_17 = HeadVars_21;
            next_value_of_tscc_proc_1_input_9_AllTraced_18 = AllTraced_22;
            next_value_of_tscc_proc_1_input_10_Primitives0_19 = Primitives0_23;
            tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37 = next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37;
            tscc_proc_1_input_2_Store_11 = next_value_of_tscc_proc_1_input_2_Store_11;
            tscc_proc_1_input_3_GoalPaths_12 = next_value_of_tscc_proc_1_input_3_GoalPaths_12;
            tscc_proc_1_input_4_Contour_13 = next_value_of_tscc_proc_1_input_4_Contour_13;
            tscc_proc_1_input_5_MaybeEnd_14 = next_value_of_tscc_proc_1_input_5_MaybeEnd_14;
            tscc_proc_1_input_6_ArgNum_15 = next_value_of_tscc_proc_1_input_6_ArgNum_15;
            tscc_proc_1_input_7_TotalArgs_16 = next_value_of_tscc_proc_1_input_7_TotalArgs_16;
            tscc_proc_1_input_8_HeadVars_17 = next_value_of_tscc_proc_1_input_8_HeadVars_17;
            tscc_proc_1_input_9_AllTraced_18 = next_value_of_tscc_proc_1_input_9_AllTraced_18;
            tscc_proc_1_input_10_Primitives0_19 = next_value_of_tscc_proc_1_input_10_Primitives0_19;
            goto top_of_proc_1;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Disjs_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_25, (MR_Integer) 0))));
            MR_Word ContourTail_45;
            MR_Word DisjPath_51;
            MR_Integer N_54;
            MR_Word ContourHeadNode_44;
            MR_Box Label_47;
            MR_String DisjPathStr_50;
            MR_Word DisjInitialPath_52;
            MR_Word DisjLastStep_53;
            MR_Word Var_128;

            succeeded = (Contour_17 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_128 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Contour_17, (MR_Integer) 0))));
              ContourTail_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Contour_17, (MR_Integer) 1))));
              ContourHeadNode_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_128, (MR_Integer) 1))));
              if (((((MR_tag((MR_Word) ContourHeadNode_44)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ContourHeadNode_44, (MR_Integer) 0)))) == (MR_Integer) 3))))
              {
                Label_47 = ((MR_Box) ((MR_hl_field(MR_mktag(3), ContourHeadNode_44, (MR_Integer) 2))));
                succeeded = MR_TRUE;
              }
              else
              if (((((MR_tag((MR_Word) ContourHeadNode_44)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ContourHeadNode_44, (MR_Integer) 0)))) == (MR_Integer) 4))))
              {
                Label_47 = ((MR_Box) ((MR_hl_field(MR_mktag(3), ContourHeadNode_44, (MR_Integer) 2))));
                succeeded = MR_TRUE;
              }
              else
                succeeded = MR_FALSE;
              if (succeeded)
              {
                DisjPathStr_50 = mdbcomp__rtti_access__get_goal_path_from_label_layout_1_f_0(Label_47);
                mdbcomp__goal_path__rev_goal_path_from_string_det_2_p_0(DisjPathStr_50, &DisjPath_51);
                succeeded = mdbcomp__goal_path__rev_goal_path_remove_last_3_p_0(DisjPath_51, &DisjInitialPath_52, &DisjLastStep_53);
                if (succeeded)
                {
                  succeeded = mdbcomp__goal_path____Unify____reverse_goal_path_0_0(DisjInitialPath_52, Path_15);
                  if (succeeded)
                  {
                    succeeded = ((MR_tag((MR_Word) DisjLastStep_53)) == (MR_Integer) 2);
                    if (succeeded)
                      N_54 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), DisjLastStep_53, (MR_Integer) 0))));
                  }
                }
              }
            }
            if (succeeded)
            {
              MR_Word Disj_55;
              MR_Word DisjAndPath_56;
              MR_Word Var_129;
              MR_Box conv0_Disj_55;
              MR_Word next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37;
              MR_Box next_value_of_tscc_proc_1_input_2_Store_11;
              MR_Word next_value_of_tscc_proc_1_input_3_GoalPaths_12;
              MR_Word next_value_of_tscc_proc_1_input_4_Contour_13;
              MR_Word next_value_of_tscc_proc_1_input_5_MaybeEnd_14;
              MR_Integer next_value_of_tscc_proc_1_input_6_ArgNum_15;
              MR_Integer next_value_of_tscc_proc_1_input_7_TotalArgs_16;
              MR_Word next_value_of_tscc_proc_1_input_8_HeadVars_17;
              MR_Word next_value_of_tscc_proc_1_input_9_AllTraced_18;
              MR_Word next_value_of_tscc_proc_1_input_10_Primitives0_19;

              mercury__list__det_index1_3_p_0((MR_Word) (&mdb__declarative_tree_scalar_common_1[1]), Disjs_42, N_54, &conv0_Disj_55);
              Disj_55 = ((MR_Word) (conv0_Disj_55));
              {
                DisjAndPath_56 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), DisjAndPath_56, 0) = ((MR_Box) (Disj_55));
                MR_hl_field(MR_mktag(0), DisjAndPath_56, 1) = ((MR_Box) (DisjPath_51));
              }
              {
                Var_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_129, 0) = ((MR_Box) (DisjAndPath_56));
                MR_hl_field(MR_mktag(1), Var_129, 1) = ((MR_Box) (GoalPaths_16));
              }
              // direct tailcall eliminated
              ;
              next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37 = TypeClassInfo_for_annotated_trace_177;
              next_value_of_tscc_proc_1_input_2_Store_11 = Store_13;
              next_value_of_tscc_proc_1_input_3_GoalPaths_12 = Var_129;
              next_value_of_tscc_proc_1_input_4_Contour_13 = ContourTail_45;
              next_value_of_tscc_proc_1_input_5_MaybeEnd_14 = MaybeEnd_18;
              next_value_of_tscc_proc_1_input_6_ArgNum_15 = ArgNum_19;
              next_value_of_tscc_proc_1_input_7_TotalArgs_16 = TotalArgs_20;
              next_value_of_tscc_proc_1_input_8_HeadVars_17 = HeadVars_21;
              next_value_of_tscc_proc_1_input_9_AllTraced_18 = AllTraced_22;
              next_value_of_tscc_proc_1_input_10_Primitives0_19 = Primitives0_23;
              tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37 = next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37;
              tscc_proc_1_input_2_Store_11 = next_value_of_tscc_proc_1_input_2_Store_11;
              tscc_proc_1_input_3_GoalPaths_12 = next_value_of_tscc_proc_1_input_3_GoalPaths_12;
              tscc_proc_1_input_4_Contour_13 = next_value_of_tscc_proc_1_input_4_Contour_13;
              tscc_proc_1_input_5_MaybeEnd_14 = next_value_of_tscc_proc_1_input_5_MaybeEnd_14;
              tscc_proc_1_input_6_ArgNum_15 = next_value_of_tscc_proc_1_input_6_ArgNum_15;
              tscc_proc_1_input_7_TotalArgs_16 = next_value_of_tscc_proc_1_input_7_TotalArgs_16;
              tscc_proc_1_input_8_HeadVars_17 = next_value_of_tscc_proc_1_input_8_HeadVars_17;
              tscc_proc_1_input_9_AllTraced_18 = next_value_of_tscc_proc_1_input_9_AllTraced_18;
              tscc_proc_1_input_10_Primitives0_19 = next_value_of_tscc_proc_1_input_10_Primitives0_19;
              goto top_of_proc_1;
            }
            else
            {
              mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_tree_scalar_common_1[16])));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Cases_59 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_25, (MR_Integer) 2))));
            MR_Word ArmPath_63;
            MR_Word ContourTail_141;
            MR_Integer N_143;
            MR_String ArmPathStr_62;
            MR_Word ArmInitialPath_64;
            MR_Word ArmLastStep_65;
            MR_Word Var_123;
            MR_Word ContourHeadNode_138;
            MR_Box Label_139;

            succeeded = (Contour_17 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_123 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Contour_17, (MR_Integer) 0))));
              ContourTail_141 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Contour_17, (MR_Integer) 1))));
              ContourHeadNode_138 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_123, (MR_Integer) 1))));
              succeeded = ((((MR_tag((MR_Word) ContourHeadNode_138)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ContourHeadNode_138, (MR_Integer) 0)))) == (MR_Integer) 2)));
              if (succeeded)
              {
                Label_139 = ((MR_Box) ((MR_hl_field(MR_mktag(3), ContourHeadNode_138, (MR_Integer) 2))));
                ArmPathStr_62 = mdbcomp__rtti_access__get_goal_path_from_label_layout_1_f_0(Label_139);
                mdbcomp__goal_path__rev_goal_path_from_string_det_2_p_0(ArmPathStr_62, &ArmPath_63);
                succeeded = mdbcomp__goal_path__rev_goal_path_remove_last_3_p_0(ArmPath_63, &ArmInitialPath_64, &ArmLastStep_65);
                if (succeeded)
                {
                  succeeded = mdbcomp__goal_path____Unify____reverse_goal_path_0_0(ArmInitialPath_64, Path_15);
                  if (succeeded)
                  {
                    succeeded = ((((MR_tag((MR_Word) ArmLastStep_65)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ArmLastStep_65, (MR_Integer) 0)))) == (MR_Integer) 0)));
                    if (succeeded)
                      N_143 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ArmLastStep_65, (MR_Integer) 1))));
                  }
                }
              }
            }
            if (succeeded)
            {
              MR_Word Case_67;
              MR_Word Arm_70;
              MR_Word ArmAndPath_71;
              MR_Word Var_124;
              MR_Box conv1_Case_67;
              MR_Word next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37;
              MR_Box next_value_of_tscc_proc_1_input_2_Store_11;
              MR_Word next_value_of_tscc_proc_1_input_3_GoalPaths_12;
              MR_Word next_value_of_tscc_proc_1_input_4_Contour_13;
              MR_Word next_value_of_tscc_proc_1_input_5_MaybeEnd_14;
              MR_Integer next_value_of_tscc_proc_1_input_6_ArgNum_15;
              MR_Integer next_value_of_tscc_proc_1_input_7_TotalArgs_16;
              MR_Word next_value_of_tscc_proc_1_input_8_HeadVars_17;
              MR_Word next_value_of_tscc_proc_1_input_9_AllTraced_18;
              MR_Word next_value_of_tscc_proc_1_input_10_Primitives0_19;

              mercury__list__det_index1_3_p_0((MR_Word) (&mdb__declarative_tree_scalar_common_1[2]), Cases_59, N_143, &conv1_Case_67);
              Case_67 = ((MR_Word) (conv1_Case_67));
              Arm_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_67, (MR_Integer) 2))));
              {
                ArmAndPath_71 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ArmAndPath_71, 0) = ((MR_Box) (Arm_70));
                MR_hl_field(MR_mktag(0), ArmAndPath_71, 1) = ((MR_Box) (ArmPath_63));
              }
              {
                Var_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_124, 0) = ((MR_Box) (ArmAndPath_71));
                MR_hl_field(MR_mktag(1), Var_124, 1) = ((MR_Box) (GoalPaths_16));
              }
              // direct tailcall eliminated
              ;
              next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37 = TypeClassInfo_for_annotated_trace_177;
              next_value_of_tscc_proc_1_input_2_Store_11 = Store_13;
              next_value_of_tscc_proc_1_input_3_GoalPaths_12 = Var_124;
              next_value_of_tscc_proc_1_input_4_Contour_13 = ContourTail_141;
              next_value_of_tscc_proc_1_input_5_MaybeEnd_14 = MaybeEnd_18;
              next_value_of_tscc_proc_1_input_6_ArgNum_15 = ArgNum_19;
              next_value_of_tscc_proc_1_input_7_TotalArgs_16 = TotalArgs_20;
              next_value_of_tscc_proc_1_input_8_HeadVars_17 = HeadVars_21;
              next_value_of_tscc_proc_1_input_9_AllTraced_18 = AllTraced_22;
              next_value_of_tscc_proc_1_input_10_Primitives0_19 = Primitives0_23;
              tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37 = next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37;
              tscc_proc_1_input_2_Store_11 = next_value_of_tscc_proc_1_input_2_Store_11;
              tscc_proc_1_input_3_GoalPaths_12 = next_value_of_tscc_proc_1_input_3_GoalPaths_12;
              tscc_proc_1_input_4_Contour_13 = next_value_of_tscc_proc_1_input_4_Contour_13;
              tscc_proc_1_input_5_MaybeEnd_14 = next_value_of_tscc_proc_1_input_5_MaybeEnd_14;
              tscc_proc_1_input_6_ArgNum_15 = next_value_of_tscc_proc_1_input_6_ArgNum_15;
              tscc_proc_1_input_7_TotalArgs_16 = next_value_of_tscc_proc_1_input_7_TotalArgs_16;
              tscc_proc_1_input_8_HeadVars_17 = next_value_of_tscc_proc_1_input_8_HeadVars_17;
              tscc_proc_1_input_9_AllTraced_18 = next_value_of_tscc_proc_1_input_9_AllTraced_18;
              tscc_proc_1_input_10_Primitives0_19 = next_value_of_tscc_proc_1_input_10_Primitives0_19;
              goto top_of_proc_1;
            }
            else
            {
              mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_tree_scalar_common_1[19])));
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_25, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Cond_72 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_25, (MR_Integer) 1))));
                MR_Word Then_73 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_25, (MR_Integer) 2))));
                MR_Word Else_74 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_25, (MR_Integer) 3))));
                MR_Word CondPath_79;
                MR_Word ContourTail_164;
                MR_String CondPathStr_78;
                MR_Word CondInitialPath_80;
                MR_Word CondLastStep_81;
                MR_Word Var_113;
                MR_Word ContourHeadNode_148;
                MR_Box Label_149;

                succeeded = (Contour_17 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_113 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Contour_17, (MR_Integer) 0))));
                  ContourTail_164 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Contour_17, (MR_Integer) 1))));
                  ContourHeadNode_148 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_113, (MR_Integer) 1))));
                  succeeded = ((((MR_tag((MR_Word) ContourHeadNode_148)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ContourHeadNode_148, (MR_Integer) 0)))) == (MR_Integer) 5)));
                  if (succeeded)
                  {
                    Label_149 = ((MR_Box) ((MR_hl_field(MR_mktag(3), ContourHeadNode_148, (MR_Integer) 2))));
                    CondPathStr_78 = mdbcomp__rtti_access__get_goal_path_from_label_layout_1_f_0(Label_149);
                    mdbcomp__goal_path__rev_goal_path_from_string_det_2_p_0(CondPathStr_78, &CondPath_79);
                    succeeded = mdbcomp__goal_path__rev_goal_path_remove_last_3_p_0(CondPath_79, &CondInitialPath_80, &CondLastStep_81);
                    if (succeeded)
                    {
                      succeeded = mdbcomp__goal_path____Unify____reverse_goal_path_0_0(CondInitialPath_80, Path_15);
                      if (succeeded)
                        succeeded = (CondLastStep_81 == (MR_Word) ((MR_Unsigned) 0U));
                    }
                  }
                }
                if (succeeded)
                {
                  MR_Word ThenPath_82;
                  MR_Word CondAndPath_83;
                  MR_Word ThenAndPath_84;
                  MR_Word Var_115;
                  MR_Word Var_116;
                  MR_Word next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37;
                  MR_Box next_value_of_tscc_proc_1_input_2_Store_11;
                  MR_Word next_value_of_tscc_proc_1_input_3_GoalPaths_12;
                  MR_Word next_value_of_tscc_proc_1_input_4_Contour_13;
                  MR_Word next_value_of_tscc_proc_1_input_5_MaybeEnd_14;
                  MR_Integer next_value_of_tscc_proc_1_input_6_ArgNum_15;
                  MR_Integer next_value_of_tscc_proc_1_input_7_TotalArgs_16;
                  MR_Word next_value_of_tscc_proc_1_input_8_HeadVars_17;
                  MR_Word next_value_of_tscc_proc_1_input_9_AllTraced_18;
                  MR_Word next_value_of_tscc_proc_1_input_10_Primitives0_19;

                  ThenPath_82 = mdbcomp__goal_path__rev_goal_path_add_at_end_2_f_0(Path_15, (MR_Word) ((MR_Unsigned) 4U));
                  {
                    CondAndPath_83 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), CondAndPath_83, 0) = ((MR_Box) (Cond_72));
                    MR_hl_field(MR_mktag(0), CondAndPath_83, 1) = ((MR_Box) (CondPath_79));
                  }
                  {
                    ThenAndPath_84 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ThenAndPath_84, 0) = ((MR_Box) (Then_73));
                    MR_hl_field(MR_mktag(0), ThenAndPath_84, 1) = ((MR_Box) (ThenPath_82));
                  }
                  {
                    Var_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_116, 0) = ((MR_Box) (ThenAndPath_84));
                    MR_hl_field(MR_mktag(1), Var_116, 1) = ((MR_Box) (GoalPaths_16));
                  }
                  {
                    Var_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_115, 0) = ((MR_Box) (CondAndPath_83));
                    MR_hl_field(MR_mktag(1), Var_115, 1) = ((MR_Box) (Var_116));
                  }
                  // direct tailcall eliminated
                  ;
                  next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37 = TypeClassInfo_for_annotated_trace_177;
                  next_value_of_tscc_proc_1_input_2_Store_11 = Store_13;
                  next_value_of_tscc_proc_1_input_3_GoalPaths_12 = Var_115;
                  next_value_of_tscc_proc_1_input_4_Contour_13 = ContourTail_164;
                  next_value_of_tscc_proc_1_input_5_MaybeEnd_14 = MaybeEnd_18;
                  next_value_of_tscc_proc_1_input_6_ArgNum_15 = ArgNum_19;
                  next_value_of_tscc_proc_1_input_7_TotalArgs_16 = TotalArgs_20;
                  next_value_of_tscc_proc_1_input_8_HeadVars_17 = HeadVars_21;
                  next_value_of_tscc_proc_1_input_9_AllTraced_18 = AllTraced_22;
                  next_value_of_tscc_proc_1_input_10_Primitives0_19 = Primitives0_23;
                  tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37 = next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37;
                  tscc_proc_1_input_2_Store_11 = next_value_of_tscc_proc_1_input_2_Store_11;
                  tscc_proc_1_input_3_GoalPaths_12 = next_value_of_tscc_proc_1_input_3_GoalPaths_12;
                  tscc_proc_1_input_4_Contour_13 = next_value_of_tscc_proc_1_input_4_Contour_13;
                  tscc_proc_1_input_5_MaybeEnd_14 = next_value_of_tscc_proc_1_input_5_MaybeEnd_14;
                  tscc_proc_1_input_6_ArgNum_15 = next_value_of_tscc_proc_1_input_6_ArgNum_15;
                  tscc_proc_1_input_7_TotalArgs_16 = next_value_of_tscc_proc_1_input_7_TotalArgs_16;
                  tscc_proc_1_input_8_HeadVars_17 = next_value_of_tscc_proc_1_input_8_HeadVars_17;
                  tscc_proc_1_input_9_AllTraced_18 = next_value_of_tscc_proc_1_input_9_AllTraced_18;
                  tscc_proc_1_input_10_Primitives0_19 = next_value_of_tscc_proc_1_input_10_Primitives0_19;
                  goto top_of_proc_1;
                }
                else
                {
                  MR_Word ContourTail_157;
                  MR_Box ElseCondId_87;
                  MR_Word CondNode_89;
                  MR_Word Var_117;
                  MR_Word ContourHeadNode_150;
                  MR_Box Label_151;
                  MR_String CondPathStr_152;
                  MR_Word CondPath_153;
                  MR_Word CondInitialPath_154;
                  MR_Word CondLastStep_155;

                  succeeded = (Contour_17 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_117 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Contour_17, (MR_Integer) 0))));
                    ContourTail_157 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Contour_17, (MR_Integer) 1))));
                    ContourHeadNode_150 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_117, (MR_Integer) 1))));
                    succeeded = ((((MR_tag((MR_Word) ContourHeadNode_150)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ContourHeadNode_150, (MR_Integer) 0)))) == (MR_Integer) 7)));
                    if (succeeded)
                    {
                      ElseCondId_87 = (MR_hl_field(MR_mktag(3), ContourHeadNode_150, (MR_Integer) 2));
                      mdb__declarative_execution__cond_node_from_id_3_p_0(TypeClassInfo_for_annotated_trace_177, Store_13, ElseCondId_87, &CondNode_89);
                      Label_151 = ((MR_Box) ((MR_hl_field(MR_mktag(3), CondNode_89, (MR_Integer) 2))));
                      CondPathStr_152 = mdbcomp__rtti_access__get_goal_path_from_label_layout_1_f_0(Label_151);
                      mdbcomp__goal_path__rev_goal_path_from_string_det_2_p_0(CondPathStr_152, &CondPath_153);
                      succeeded = mdbcomp__goal_path__rev_goal_path_remove_last_3_p_0(CondPath_153, &CondInitialPath_154, &CondLastStep_155);
                      if (succeeded)
                      {
                        succeeded = mdbcomp__goal_path____Unify____reverse_goal_path_0_0(CondInitialPath_154, Path_15);
                        if (succeeded)
                          succeeded = (CondLastStep_155 == (MR_Word) ((MR_Unsigned) 0U));
                      }
                    }
                  }
                  if (succeeded)
                  {
                    MR_Word ElsePath_92;
                    MR_Word ElseAndPath_93;
                    MR_Word Var_119;
                    MR_Word next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37;
                    MR_Box next_value_of_tscc_proc_1_input_2_Store_11;
                    MR_Word next_value_of_tscc_proc_1_input_3_GoalPaths_12;
                    MR_Word next_value_of_tscc_proc_1_input_4_Contour_13;
                    MR_Word next_value_of_tscc_proc_1_input_5_MaybeEnd_14;
                    MR_Integer next_value_of_tscc_proc_1_input_6_ArgNum_15;
                    MR_Integer next_value_of_tscc_proc_1_input_7_TotalArgs_16;
                    MR_Word next_value_of_tscc_proc_1_input_8_HeadVars_17;
                    MR_Word next_value_of_tscc_proc_1_input_9_AllTraced_18;
                    MR_Word next_value_of_tscc_proc_1_input_10_Primitives0_19;

                    ElsePath_92 = mdbcomp__goal_path__rev_goal_path_add_at_end_2_f_0(Path_15, (MR_Word) ((MR_Unsigned) 8U));
                    {
                      ElseAndPath_93 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), ElseAndPath_93, 0) = ((MR_Box) (Else_74));
                      MR_hl_field(MR_mktag(0), ElseAndPath_93, 1) = ((MR_Box) (ElsePath_92));
                    }
                    {
                      Var_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_119, 0) = ((MR_Box) (ElseAndPath_93));
                      MR_hl_field(MR_mktag(1), Var_119, 1) = ((MR_Box) (GoalPaths_16));
                    }
                    // direct tailcall eliminated
                    ;
                    next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37 = TypeClassInfo_for_annotated_trace_177;
                    next_value_of_tscc_proc_1_input_2_Store_11 = Store_13;
                    next_value_of_tscc_proc_1_input_3_GoalPaths_12 = Var_119;
                    next_value_of_tscc_proc_1_input_4_Contour_13 = ContourTail_157;
                    next_value_of_tscc_proc_1_input_5_MaybeEnd_14 = MaybeEnd_18;
                    next_value_of_tscc_proc_1_input_6_ArgNum_15 = ArgNum_19;
                    next_value_of_tscc_proc_1_input_7_TotalArgs_16 = TotalArgs_20;
                    next_value_of_tscc_proc_1_input_8_HeadVars_17 = HeadVars_21;
                    next_value_of_tscc_proc_1_input_9_AllTraced_18 = AllTraced_22;
                    next_value_of_tscc_proc_1_input_10_Primitives0_19 = Primitives0_23;
                    tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37 = next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37;
                    tscc_proc_1_input_2_Store_11 = next_value_of_tscc_proc_1_input_2_Store_11;
                    tscc_proc_1_input_3_GoalPaths_12 = next_value_of_tscc_proc_1_input_3_GoalPaths_12;
                    tscc_proc_1_input_4_Contour_13 = next_value_of_tscc_proc_1_input_4_Contour_13;
                    tscc_proc_1_input_5_MaybeEnd_14 = next_value_of_tscc_proc_1_input_5_MaybeEnd_14;
                    tscc_proc_1_input_6_ArgNum_15 = next_value_of_tscc_proc_1_input_6_ArgNum_15;
                    tscc_proc_1_input_7_TotalArgs_16 = next_value_of_tscc_proc_1_input_7_TotalArgs_16;
                    tscc_proc_1_input_8_HeadVars_17 = next_value_of_tscc_proc_1_input_8_HeadVars_17;
                    tscc_proc_1_input_9_AllTraced_18 = next_value_of_tscc_proc_1_input_9_AllTraced_18;
                    tscc_proc_1_input_10_Primitives0_19 = next_value_of_tscc_proc_1_input_10_Primitives0_19;
                    goto top_of_proc_1;
                  }
                  else
                  {
                    mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_tree_scalar_common_1[17])));
                  }
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word NegGoal_94 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_25, (MR_Integer) 1))));
                MR_Word ContourTail_174;
                MR_Word Var_105;
                MR_Word ContourHeadNode_169;

                succeeded = (Contour_17 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_105 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Contour_17, (MR_Integer) 0))));
                  ContourTail_174 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Contour_17, (MR_Integer) 1))));
                  ContourHeadNode_169 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_105, (MR_Integer) 1))));
                  succeeded = ((((MR_tag((MR_Word) ContourHeadNode_169)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ContourHeadNode_169, (MR_Integer) 0)))) == (MR_Integer) 9)));
                  if (succeeded)
                  {
                  }
                }
                if (succeeded)
                {
                  MR_Word next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37 = TypeClassInfo_for_annotated_trace_177;
                  MR_Box next_value_of_tscc_proc_1_input_2_Store_11 = Store_13;
                  MR_Word next_value_of_tscc_proc_1_input_3_GoalPaths_12 = GoalPaths_16;
                  MR_Word next_value_of_tscc_proc_1_input_4_Contour_13 = ContourTail_174;
                  MR_Word next_value_of_tscc_proc_1_input_5_MaybeEnd_14 = MaybeEnd_18;
                  MR_Integer next_value_of_tscc_proc_1_input_6_ArgNum_15 = ArgNum_19;
                  MR_Integer next_value_of_tscc_proc_1_input_7_TotalArgs_16 = TotalArgs_20;
                  MR_Word next_value_of_tscc_proc_1_input_8_HeadVars_17 = HeadVars_21;
                  MR_Word next_value_of_tscc_proc_1_input_9_AllTraced_18 = AllTraced_22;
                  MR_Word next_value_of_tscc_proc_1_input_10_Primitives0_19 = Primitives0_23;

                  // direct tailcall eliminated
                  ;
                  tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37 = next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37;
                  tscc_proc_1_input_2_Store_11 = next_value_of_tscc_proc_1_input_2_Store_11;
                  tscc_proc_1_input_3_GoalPaths_12 = next_value_of_tscc_proc_1_input_3_GoalPaths_12;
                  tscc_proc_1_input_4_Contour_13 = next_value_of_tscc_proc_1_input_4_Contour_13;
                  tscc_proc_1_input_5_MaybeEnd_14 = next_value_of_tscc_proc_1_input_5_MaybeEnd_14;
                  tscc_proc_1_input_6_ArgNum_15 = next_value_of_tscc_proc_1_input_6_ArgNum_15;
                  tscc_proc_1_input_7_TotalArgs_16 = next_value_of_tscc_proc_1_input_7_TotalArgs_16;
                  tscc_proc_1_input_8_HeadVars_17 = next_value_of_tscc_proc_1_input_8_HeadVars_17;
                  tscc_proc_1_input_9_AllTraced_18 = next_value_of_tscc_proc_1_input_9_AllTraced_18;
                  tscc_proc_1_input_10_Primitives0_19 = next_value_of_tscc_proc_1_input_10_Primitives0_19;
                  goto top_of_proc_1;
                }
                else
                {
                  MR_Word ContourTail_172;
                  MR_Word Var_106;
                  MR_Word ContourHeadNode_170;

                  succeeded = (Contour_17 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_106 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Contour_17, (MR_Integer) 0))));
                    ContourTail_172 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Contour_17, (MR_Integer) 1))));
                    ContourHeadNode_170 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_106, (MR_Integer) 1))));
                    succeeded = ((((MR_tag((MR_Word) ContourHeadNode_170)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ContourHeadNode_170, (MR_Integer) 0)))) == (MR_Integer) 8)));
                    if (succeeded)
                    {
                    }
                  }
                  if (succeeded)
                  {
                    MR_Word NegPath_103;
                    MR_Word NegAndPath_104;
                    MR_Word Var_108;
                    MR_Word next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37;
                    MR_Box next_value_of_tscc_proc_1_input_2_Store_11;
                    MR_Word next_value_of_tscc_proc_1_input_3_GoalPaths_12;
                    MR_Word next_value_of_tscc_proc_1_input_4_Contour_13;
                    MR_Word next_value_of_tscc_proc_1_input_5_MaybeEnd_14;
                    MR_Integer next_value_of_tscc_proc_1_input_6_ArgNum_15;
                    MR_Integer next_value_of_tscc_proc_1_input_7_TotalArgs_16;
                    MR_Word next_value_of_tscc_proc_1_input_8_HeadVars_17;
                    MR_Word next_value_of_tscc_proc_1_input_9_AllTraced_18;
                    MR_Word next_value_of_tscc_proc_1_input_10_Primitives0_19;

                    NegPath_103 = mdbcomp__goal_path__rev_goal_path_add_at_end_2_f_0(Path_15, (MR_Word) ((MR_Unsigned) 12U));
                    {
                      NegAndPath_104 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), NegAndPath_104, 0) = ((MR_Box) (NegGoal_94));
                      MR_hl_field(MR_mktag(0), NegAndPath_104, 1) = ((MR_Box) (NegPath_103));
                    }
                    {
                      Var_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_108, 0) = ((MR_Box) (NegAndPath_104));
                      MR_hl_field(MR_mktag(1), Var_108, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    // direct tailcall eliminated
                    ;
                    next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37 = TypeClassInfo_for_annotated_trace_177;
                    next_value_of_tscc_proc_1_input_2_Store_11 = Store_13;
                    next_value_of_tscc_proc_1_input_3_GoalPaths_12 = Var_108;
                    next_value_of_tscc_proc_1_input_4_Contour_13 = ContourTail_172;
                    next_value_of_tscc_proc_1_input_5_MaybeEnd_14 = MaybeEnd_18;
                    next_value_of_tscc_proc_1_input_6_ArgNum_15 = ArgNum_19;
                    next_value_of_tscc_proc_1_input_7_TotalArgs_16 = TotalArgs_20;
                    next_value_of_tscc_proc_1_input_8_HeadVars_17 = HeadVars_21;
                    next_value_of_tscc_proc_1_input_9_AllTraced_18 = AllTraced_22;
                    next_value_of_tscc_proc_1_input_10_Primitives0_19 = Primitives0_23;
                    tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37 = next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37;
                    tscc_proc_1_input_2_Store_11 = next_value_of_tscc_proc_1_input_2_Store_11;
                    tscc_proc_1_input_3_GoalPaths_12 = next_value_of_tscc_proc_1_input_3_GoalPaths_12;
                    tscc_proc_1_input_4_Contour_13 = next_value_of_tscc_proc_1_input_4_Contour_13;
                    tscc_proc_1_input_5_MaybeEnd_14 = next_value_of_tscc_proc_1_input_5_MaybeEnd_14;
                    tscc_proc_1_input_6_ArgNum_15 = next_value_of_tscc_proc_1_input_6_ArgNum_15;
                    tscc_proc_1_input_7_TotalArgs_16 = next_value_of_tscc_proc_1_input_7_TotalArgs_16;
                    tscc_proc_1_input_8_HeadVars_17 = next_value_of_tscc_proc_1_input_8_HeadVars_17;
                    tscc_proc_1_input_9_AllTraced_18 = next_value_of_tscc_proc_1_input_9_AllTraced_18;
                    tscc_proc_1_input_10_Primitives0_19 = next_value_of_tscc_proc_1_input_10_Primitives0_19;
                    goto top_of_proc_1;
                  }
                  else
                  {
                    mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_tree_scalar_common_1[18])));
                  }
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word InnerGoal_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_25, (MR_Integer) 1))));
                MR_Word MaybeCut_31 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr_25, (MR_Integer) 2))) & (MR_Integer) 1);
                MR_Word InnerPath_32;
                MR_Word InnerAndPath_33;
                MR_Word Var_134;
                MR_Word Var_135;
                MR_Word next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37;
                MR_Box next_value_of_tscc_proc_1_input_2_Store_11;
                MR_Word next_value_of_tscc_proc_1_input_3_GoalPaths_12;
                MR_Word next_value_of_tscc_proc_1_input_4_Contour_13;
                MR_Word next_value_of_tscc_proc_1_input_5_MaybeEnd_14;
                MR_Integer next_value_of_tscc_proc_1_input_6_ArgNum_15;
                MR_Integer next_value_of_tscc_proc_1_input_7_TotalArgs_16;
                MR_Word next_value_of_tscc_proc_1_input_8_HeadVars_17;
                MR_Word next_value_of_tscc_proc_1_input_9_AllTraced_18;
                MR_Word next_value_of_tscc_proc_1_input_10_Primitives0_19;

                {
                  Var_134 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_134, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(MR_mktag(3), Var_134, 1) = (MR_Box) ((MR_Unsigned) (MaybeCut_31));
                }
                InnerPath_32 = mdbcomp__goal_path__rev_goal_path_add_at_end_2_f_0(Path_15, Var_134);
                {
                  InnerAndPath_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), InnerAndPath_33, 0) = ((MR_Box) (InnerGoal_30));
                  MR_hl_field(MR_mktag(0), InnerAndPath_33, 1) = ((MR_Box) (InnerPath_32));
                }
                {
                  Var_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_135, 0) = ((MR_Box) (InnerAndPath_33));
                  MR_hl_field(MR_mktag(1), Var_135, 1) = ((MR_Box) (GoalPaths_16));
                }
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37 = TypeClassInfo_for_annotated_trace_177;
                next_value_of_tscc_proc_1_input_2_Store_11 = Store_13;
                next_value_of_tscc_proc_1_input_3_GoalPaths_12 = Var_135;
                next_value_of_tscc_proc_1_input_4_Contour_13 = Contour_17;
                next_value_of_tscc_proc_1_input_5_MaybeEnd_14 = MaybeEnd_18;
                next_value_of_tscc_proc_1_input_6_ArgNum_15 = ArgNum_19;
                next_value_of_tscc_proc_1_input_7_TotalArgs_16 = TotalArgs_20;
                next_value_of_tscc_proc_1_input_8_HeadVars_17 = HeadVars_21;
                next_value_of_tscc_proc_1_input_9_AllTraced_18 = AllTraced_22;
                next_value_of_tscc_proc_1_input_10_Primitives0_19 = Primitives0_23;
                tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37 = next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37;
                tscc_proc_1_input_2_Store_11 = next_value_of_tscc_proc_1_input_2_Store_11;
                tscc_proc_1_input_3_GoalPaths_12 = next_value_of_tscc_proc_1_input_3_GoalPaths_12;
                tscc_proc_1_input_4_Contour_13 = next_value_of_tscc_proc_1_input_4_Contour_13;
                tscc_proc_1_input_5_MaybeEnd_14 = next_value_of_tscc_proc_1_input_5_MaybeEnd_14;
                tscc_proc_1_input_6_ArgNum_15 = next_value_of_tscc_proc_1_input_6_ArgNum_15;
                tscc_proc_1_input_7_TotalArgs_16 = next_value_of_tscc_proc_1_input_7_TotalArgs_16;
                tscc_proc_1_input_8_HeadVars_17 = next_value_of_tscc_proc_1_input_8_HeadVars_17;
                tscc_proc_1_input_9_AllTraced_18 = next_value_of_tscc_proc_1_input_9_AllTraced_18;
                tscc_proc_1_input_10_Primitives0_19 = next_value_of_tscc_proc_1_input_10_Primitives0_19;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_String File_34 = ((MR_String) ((MR_hl_field(MR_mktag(3), GoalExpr_25, (MR_Integer) 1))));
                MR_Integer Line_35 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_25, (MR_Integer) 2))));
                MR_Word BoundVars_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_25, (MR_Integer) 3))));
                MR_Word AtomicGoal_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_25, (MR_Integer) 4))));
                MR_Word GeneratesEvent_38;

                GeneratesEvent_38 = mdbcomp__program_representation__atomic_goal_generates_event_like_call_1_f_0(AtomicGoal_37);
                if ((GeneratesEvent_38 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word Primitive_40;
                  MR_Word Primitives1_41;
                  MR_Word next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37;
                  MR_Box next_value_of_tscc_proc_1_input_2_Store_11;
                  MR_Word next_value_of_tscc_proc_1_input_3_GoalPaths_12;
                  MR_Word next_value_of_tscc_proc_1_input_4_Contour_13;
                  MR_Word next_value_of_tscc_proc_1_input_5_MaybeEnd_14;
                  MR_Integer next_value_of_tscc_proc_1_input_6_ArgNum_15;
                  MR_Integer next_value_of_tscc_proc_1_input_7_TotalArgs_16;
                  MR_Word next_value_of_tscc_proc_1_input_8_HeadVars_17;
                  MR_Word next_value_of_tscc_proc_1_input_9_AllTraced_18;
                  MR_Word next_value_of_tscc_proc_1_input_10_Primitives0_19;

                  {
                    Primitive_40 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Primitive_40, 0) = ((MR_Box) (File_34));
                    MR_hl_field(MR_mktag(0), Primitive_40, 1) = ((MR_Box) (Line_35));
                    MR_hl_field(MR_mktag(0), Primitive_40, 2) = ((MR_Box) (BoundVars_36));
                    MR_hl_field(MR_mktag(0), Primitive_40, 3) = ((MR_Box) (AtomicGoal_37));
                    MR_hl_field(MR_mktag(0), Primitive_40, 4) = ((MR_Box) (Path_15));
                    MR_hl_field(MR_mktag(0), Primitive_40, 5) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Primitives1_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Primitives1_41, 0) = ((MR_Box) (Primitive_40));
                    MR_hl_field(MR_mktag(1), Primitives1_41, 1) = ((MR_Box) (Primitives0_23));
                  }
                  // direct tailcall eliminated
                  ;
                  next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37 = TypeClassInfo_for_annotated_trace_177;
                  next_value_of_tscc_proc_1_input_2_Store_11 = Store_13;
                  next_value_of_tscc_proc_1_input_3_GoalPaths_12 = GoalPaths_16;
                  next_value_of_tscc_proc_1_input_4_Contour_13 = Contour_17;
                  next_value_of_tscc_proc_1_input_5_MaybeEnd_14 = MaybeEnd_18;
                  next_value_of_tscc_proc_1_input_6_ArgNum_15 = ArgNum_19;
                  next_value_of_tscc_proc_1_input_7_TotalArgs_16 = TotalArgs_20;
                  next_value_of_tscc_proc_1_input_8_HeadVars_17 = HeadVars_21;
                  next_value_of_tscc_proc_1_input_9_AllTraced_18 = AllTraced_22;
                  next_value_of_tscc_proc_1_input_10_Primitives0_19 = Primitives1_41;
                  tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37 = next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37;
                  tscc_proc_1_input_2_Store_11 = next_value_of_tscc_proc_1_input_2_Store_11;
                  tscc_proc_1_input_3_GoalPaths_12 = next_value_of_tscc_proc_1_input_3_GoalPaths_12;
                  tscc_proc_1_input_4_Contour_13 = next_value_of_tscc_proc_1_input_4_Contour_13;
                  tscc_proc_1_input_5_MaybeEnd_14 = next_value_of_tscc_proc_1_input_5_MaybeEnd_14;
                  tscc_proc_1_input_6_ArgNum_15 = next_value_of_tscc_proc_1_input_6_ArgNum_15;
                  tscc_proc_1_input_7_TotalArgs_16 = next_value_of_tscc_proc_1_input_7_TotalArgs_16;
                  tscc_proc_1_input_8_HeadVars_17 = next_value_of_tscc_proc_1_input_8_HeadVars_17;
                  tscc_proc_1_input_9_AllTraced_18 = next_value_of_tscc_proc_1_input_9_AllTraced_18;
                  tscc_proc_1_input_10_Primitives0_19 = next_value_of_tscc_proc_1_input_10_Primitives0_19;
                  goto top_of_proc_1;
                }
                else
                {
                  MR_Word AtomicGoalArgs_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GeneratesEvent_38, (MR_Integer) 0))));
                  MR_Word next_value_of_tscc_proc_3_input_1_TypeClassInfo_for_annotated_trace_145 = TypeClassInfo_for_annotated_trace_177;
                  MR_Box next_value_of_tscc_proc_3_input_2_Store_17 = Store_13;
                  MR_String next_value_of_tscc_proc_3_input_3_File_18 = File_34;
                  MR_Integer next_value_of_tscc_proc_3_input_4_Line_19 = Line_35;
                  MR_Word next_value_of_tscc_proc_3_input_5_BoundVars_20 = BoundVars_36;
                  MR_Word next_value_of_tscc_proc_3_input_6_AtomicGoal_21 = AtomicGoal_37;
                  MR_Word next_value_of_tscc_proc_3_input_7_AtomicGoalArgs_22 = AtomicGoalArgs_39;
                  MR_Word next_value_of_tscc_proc_3_input_8_Path_23 = Path_15;
                  MR_Word next_value_of_tscc_proc_3_input_9_GoalPaths_24 = GoalPaths_16;
                  MR_Word next_value_of_tscc_proc_3_input_10_Contour_25 = Contour_17;
                  MR_Word next_value_of_tscc_proc_3_input_11_MaybeEnd_26 = MaybeEnd_18;
                  MR_Integer next_value_of_tscc_proc_3_input_12_ArgNum_27 = ArgNum_19;
                  MR_Integer next_value_of_tscc_proc_3_input_13_TotalArgs_28 = TotalArgs_20;
                  MR_Word next_value_of_tscc_proc_3_input_14_HeadVars_29 = HeadVars_21;
                  MR_Word next_value_of_tscc_proc_3_input_15_AllTraced_30 = AllTraced_22;
                  MR_Word next_value_of_tscc_proc_3_input_16_Primitives0_31 = Primitives0_23;

                  // direct tailcall eliminated
                  ;
                  tscc_proc_3_input_1_TypeClassInfo_for_annotated_trace_145 = next_value_of_tscc_proc_3_input_1_TypeClassInfo_for_annotated_trace_145;
                  tscc_proc_3_input_2_Store_17 = next_value_of_tscc_proc_3_input_2_Store_17;
                  tscc_proc_3_input_3_File_18 = next_value_of_tscc_proc_3_input_3_File_18;
                  tscc_proc_3_input_4_Line_19 = next_value_of_tscc_proc_3_input_4_Line_19;
                  tscc_proc_3_input_5_BoundVars_20 = next_value_of_tscc_proc_3_input_5_BoundVars_20;
                  tscc_proc_3_input_6_AtomicGoal_21 = next_value_of_tscc_proc_3_input_6_AtomicGoal_21;
                  tscc_proc_3_input_7_AtomicGoalArgs_22 = next_value_of_tscc_proc_3_input_7_AtomicGoalArgs_22;
                  tscc_proc_3_input_8_Path_23 = next_value_of_tscc_proc_3_input_8_Path_23;
                  tscc_proc_3_input_9_GoalPaths_24 = next_value_of_tscc_proc_3_input_9_GoalPaths_24;
                  tscc_proc_3_input_10_Contour_25 = next_value_of_tscc_proc_3_input_10_Contour_25;
                  tscc_proc_3_input_11_MaybeEnd_26 = next_value_of_tscc_proc_3_input_11_MaybeEnd_26;
                  tscc_proc_3_input_12_ArgNum_27 = next_value_of_tscc_proc_3_input_12_ArgNum_27;
                  tscc_proc_3_input_13_TotalArgs_28 = next_value_of_tscc_proc_3_input_13_TotalArgs_28;
                  tscc_proc_3_input_14_HeadVars_29 = next_value_of_tscc_proc_3_input_14_HeadVars_29;
                  tscc_proc_3_input_15_AllTraced_30 = next_value_of_tscc_proc_3_input_15_AllTraced_30;
                  tscc_proc_3_input_16_Primitives0_31 = next_value_of_tscc_proc_3_input_16_Primitives0_31;
                  goto top_of_proc_3;
                }
              }
              break;
          }
          break;
      }
      tscc_output_1_MaybePrims_20 = MaybePrims_24;
      goto tscc_end;
    }
  top_of_proc_3:;
    {
      MR_Word TypeClassInfo_for_annotated_trace_145 = tscc_proc_3_input_1_TypeClassInfo_for_annotated_trace_145;
      MR_Box Store_17 = tscc_proc_3_input_2_Store_17;
      MR_String File_18 = tscc_proc_3_input_3_File_18;
      MR_Integer Line_19 = tscc_proc_3_input_4_Line_19;
      MR_Word BoundVars_20 = tscc_proc_3_input_5_BoundVars_20;
      MR_Word AtomicGoal_21 = tscc_proc_3_input_6_AtomicGoal_21;
      MR_Word AtomicGoalArgs_22 = tscc_proc_3_input_7_AtomicGoalArgs_22;
      MR_Word Path_23 = tscc_proc_3_input_8_Path_23;
      MR_Word GoalPaths_24 = tscc_proc_3_input_9_GoalPaths_24;
      MR_Word Contour_25 = tscc_proc_3_input_10_Contour_25;
      MR_Word MaybeEnd_26 = tscc_proc_3_input_11_MaybeEnd_26;
      MR_Integer ArgNum_27 = tscc_proc_3_input_12_ArgNum_27;
      MR_Integer TotalArgs_28 = tscc_proc_3_input_13_TotalArgs_28;
      MR_Word HeadVars_29 = tscc_proc_3_input_14_HeadVars_29;
      MR_Word AllTraced_30 = tscc_proc_3_input_15_AllTraced_30;
      MR_Word Primitives0_31 = tscc_proc_3_input_16_Primitives0_31;
      MR_Word MaybePrims_32;
      MR_bool succeeded = (Contour_25 != (MR_Word) ((MR_Unsigned) 0U));
      MR_Word ContourHeadNode_34;
      MR_Word EndPath_35;
      MR_Word Var_89;
      MR_Word Var_90;

      if (succeeded)
      {
        Var_89 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Contour_25, (MR_Integer) 0))));
        Var_90 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Contour_25, (MR_Integer) 1))));
        succeeded = (Var_90 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ContourHeadNode_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_89, (MR_Integer) 1))));
          succeeded = (MaybeEnd_26 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
            EndPath_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeEnd_26, (MR_Integer) 0))));
        }
      }
      if (succeeded)
      {
        MR_Word Atom_46;
        MR_Word TypeInfo_147_147;
        MR_Word MaybeReturnLabel_42;
        MR_String CallPathStr_47;
        MR_Word CallPath_48;
        MR_Integer PolyConst2_146;

        succeeded = ((MR_tag((MR_Word) ContourHeadNode_34)) == (MR_Integer) 0);
        if (succeeded)
        {
          MaybeReturnLabel_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ContourHeadNode_34, (MR_Integer) 6))));
          PolyConst2_146 = (MR_Integer) 2;
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_annotated_trace_145, PolyConst2_146, &TypeInfo_147_147);
          Atom_46 = mdb__declarative_execution__get_trace_call_atom_1_f_0(TypeInfo_147_147, ContourHeadNode_34);
          CallPathStr_47 = mdbcomp__rtti_access__get_goal_path_from_maybe_label_1_f_0(MaybeReturnLabel_42);
          mdbcomp__goal_path__rev_goal_path_from_string_det_2_p_0(CallPathStr_47, &CallPath_48);
          succeeded = mdbcomp__goal_path____Unify____reverse_goal_path_0_0(CallPath_48, EndPath_35);
        }
        if (succeeded)
        {
          MR_Word AtomicGoalId_49;
          MR_Word Var_91;

          Var_91 = mdbcomp__program_representation__atomic_goal_identifiable_1_f_0(AtomicGoal_21);
          succeeded = (Var_91 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            AtomicGoalId_49 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_91, (MR_Integer) 0))));
            succeeded = mdb__declarative_tree__atomic_goal_matches_atom_2_p_0(AtomicGoalId_49, Atom_46);
          }
          else
            succeeded = (AllTraced_30 == (MR_Integer) 1);
          if (succeeded)
          {
            MR_Integer Var_92;
            MR_Integer Var_93;

            Var_93 = mercury__list__length_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), AtomicGoalArgs_22);
            Var_92 = (MR_Integer) ((MR_Unsigned) TotalArgs_28 - (MR_Unsigned) Var_93);
            succeeded = (ArgNum_27 > Var_92);
            if (succeeded)
            {
              MR_Integer Var_50;
              MR_Word Var_94;

              mdb__declarative_tree__find_variable_in_args_4_p_0(AtomicGoalArgs_22, ArgNum_27, TotalArgs_28, &Var_50);
              {
                Var_94 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_94, 0) = ((MR_Box) (Primitives0_31));
                MR_hl_field(MR_mktag(0), Var_94, 1) = ((MR_Box) (Var_50));
                MR_hl_field(MR_mktag(0), Var_94, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              }
              {
                MaybePrims_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MaybePrims_32, 0) = ((MR_Box) (Var_94));
              }
            }
            else
              switch (MR_tag((MR_Word) AtomicGoal_21)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                  {
                    mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_tree_scalar_common_1[20])));
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), AtomicGoal_21, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                    case (MR_Integer) 1:
                    case (MR_Integer) 2:
                    case (MR_Integer) 3:
                    case (MR_Integer) 4:
                    case (MR_Integer) 6:
                    case (MR_Integer) 7:
                    case (MR_Integer) 8:
                    case (MR_Integer) 9:
                      {
                        mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_tree_scalar_common_1[20])));
                      }
                      break;
                    case (MR_Integer) 5:
                      {
                        MR_Word Var_99;
                        MR_Integer Var_123 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), AtomicGoal_21, (MR_Integer) 1))));

                        {
                          Var_99 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), Var_99, 0) = ((MR_Box) (Primitives0_31));
                          MR_hl_field(MR_mktag(0), Var_99, 1) = ((MR_Box) (Var_123));
                          MR_hl_field(MR_mktag(0), Var_99, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                        }
                        {
                          MaybePrims_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), MaybePrims_32, 0) = ((MR_Box) (Var_99));
                        }
                      }
                      break;
                  }
                  break;
              }
          }
          else
            switch (AllTraced_30) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word Primitive_83;
                  MR_Word Primitives1_84;
                  MR_Word next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37;
                  MR_Box next_value_of_tscc_proc_1_input_2_Store_11;
                  MR_Word next_value_of_tscc_proc_1_input_3_GoalPaths_12;
                  MR_Word next_value_of_tscc_proc_1_input_4_Contour_13;
                  MR_Word next_value_of_tscc_proc_1_input_5_MaybeEnd_14;
                  MR_Integer next_value_of_tscc_proc_1_input_6_ArgNum_15;
                  MR_Integer next_value_of_tscc_proc_1_input_7_TotalArgs_16;
                  MR_Word next_value_of_tscc_proc_1_input_8_HeadVars_17;
                  MR_Word next_value_of_tscc_proc_1_input_9_AllTraced_18;
                  MR_Word next_value_of_tscc_proc_1_input_10_Primitives0_19;

                  {
                    Primitive_83 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Primitive_83, 0) = ((MR_Box) (File_18));
                    MR_hl_field(MR_mktag(0), Primitive_83, 1) = ((MR_Box) (Line_19));
                    MR_hl_field(MR_mktag(0), Primitive_83, 2) = ((MR_Box) (BoundVars_20));
                    MR_hl_field(MR_mktag(0), Primitive_83, 3) = ((MR_Box) (AtomicGoal_21));
                    MR_hl_field(MR_mktag(0), Primitive_83, 4) = ((MR_Box) (Path_23));
                    MR_hl_field(MR_mktag(0), Primitive_83, 5) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Primitives1_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Primitives1_84, 0) = ((MR_Box) (Primitive_83));
                    MR_hl_field(MR_mktag(1), Primitives1_84, 1) = ((MR_Box) (Primitives0_31));
                  }
                  // direct tailcall eliminated
                  ;
                  next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37 = TypeClassInfo_for_annotated_trace_145;
                  next_value_of_tscc_proc_1_input_2_Store_11 = Store_17;
                  next_value_of_tscc_proc_1_input_3_GoalPaths_12 = GoalPaths_24;
                  next_value_of_tscc_proc_1_input_4_Contour_13 = Contour_25;
                  next_value_of_tscc_proc_1_input_5_MaybeEnd_14 = MaybeEnd_26;
                  next_value_of_tscc_proc_1_input_6_ArgNum_15 = ArgNum_27;
                  next_value_of_tscc_proc_1_input_7_TotalArgs_16 = TotalArgs_28;
                  next_value_of_tscc_proc_1_input_8_HeadVars_17 = HeadVars_29;
                  next_value_of_tscc_proc_1_input_9_AllTraced_18 = AllTraced_30;
                  next_value_of_tscc_proc_1_input_10_Primitives0_19 = Primitives1_84;
                  tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37 = next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37;
                  tscc_proc_1_input_2_Store_11 = next_value_of_tscc_proc_1_input_2_Store_11;
                  tscc_proc_1_input_3_GoalPaths_12 = next_value_of_tscc_proc_1_input_3_GoalPaths_12;
                  tscc_proc_1_input_4_Contour_13 = next_value_of_tscc_proc_1_input_4_Contour_13;
                  tscc_proc_1_input_5_MaybeEnd_14 = next_value_of_tscc_proc_1_input_5_MaybeEnd_14;
                  tscc_proc_1_input_6_ArgNum_15 = next_value_of_tscc_proc_1_input_6_ArgNum_15;
                  tscc_proc_1_input_7_TotalArgs_16 = next_value_of_tscc_proc_1_input_7_TotalArgs_16;
                  tscc_proc_1_input_8_HeadVars_17 = next_value_of_tscc_proc_1_input_8_HeadVars_17;
                  tscc_proc_1_input_9_AllTraced_18 = next_value_of_tscc_proc_1_input_9_AllTraced_18;
                  tscc_proc_1_input_10_Primitives0_19 = next_value_of_tscc_proc_1_input_10_Primitives0_19;
                  goto top_of_proc_1;
                }
                break;
              case (MR_Integer) 1:
                {
                  mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_tree_scalar_common_1[21])));
                }
                break;
            }
        }
        else
        {
          mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_tree_scalar_common_1[22])));
        }
      }
      else
      if ((Contour_25 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        succeeded = (MaybeEnd_26 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
          succeeded = (AllTraced_30 == (MR_Integer) 0);
        if (succeeded)
        {
          MR_Word Primitive_134;
          MR_Word Primitives1_135;
          MR_Word next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37;
          MR_Box next_value_of_tscc_proc_1_input_2_Store_11;
          MR_Word next_value_of_tscc_proc_1_input_3_GoalPaths_12;
          MR_Word next_value_of_tscc_proc_1_input_5_MaybeEnd_14;
          MR_Integer next_value_of_tscc_proc_1_input_6_ArgNum_15;
          MR_Integer next_value_of_tscc_proc_1_input_7_TotalArgs_16;
          MR_Word next_value_of_tscc_proc_1_input_8_HeadVars_17;
          MR_Word next_value_of_tscc_proc_1_input_9_AllTraced_18;
          MR_Word next_value_of_tscc_proc_1_input_10_Primitives0_19;

          {
            Primitive_134 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Primitive_134, 0) = ((MR_Box) (File_18));
            MR_hl_field(MR_mktag(0), Primitive_134, 1) = ((MR_Box) (Line_19));
            MR_hl_field(MR_mktag(0), Primitive_134, 2) = ((MR_Box) (BoundVars_20));
            MR_hl_field(MR_mktag(0), Primitive_134, 3) = ((MR_Box) (AtomicGoal_21));
            MR_hl_field(MR_mktag(0), Primitive_134, 4) = ((MR_Box) (Path_23));
            MR_hl_field(MR_mktag(0), Primitive_134, 5) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Primitives1_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Primitives1_135, 0) = ((MR_Box) (Primitive_134));
            MR_hl_field(MR_mktag(1), Primitives1_135, 1) = ((MR_Box) (Primitives0_31));
          }
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37 = TypeClassInfo_for_annotated_trace_145;
          next_value_of_tscc_proc_1_input_2_Store_11 = Store_17;
          next_value_of_tscc_proc_1_input_3_GoalPaths_12 = GoalPaths_24;
          next_value_of_tscc_proc_1_input_5_MaybeEnd_14 = MaybeEnd_26;
          next_value_of_tscc_proc_1_input_6_ArgNum_15 = ArgNum_27;
          next_value_of_tscc_proc_1_input_7_TotalArgs_16 = TotalArgs_28;
          next_value_of_tscc_proc_1_input_8_HeadVars_17 = HeadVars_29;
          next_value_of_tscc_proc_1_input_9_AllTraced_18 = AllTraced_30;
          next_value_of_tscc_proc_1_input_10_Primitives0_19 = Primitives1_135;
          tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37 = next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37;
          tscc_proc_1_input_2_Store_11 = next_value_of_tscc_proc_1_input_2_Store_11;
          tscc_proc_1_input_3_GoalPaths_12 = next_value_of_tscc_proc_1_input_3_GoalPaths_12;
          tscc_proc_1_input_4_Contour_13 = (MR_Word) ((MR_Unsigned) 0U);
          tscc_proc_1_input_5_MaybeEnd_14 = next_value_of_tscc_proc_1_input_5_MaybeEnd_14;
          tscc_proc_1_input_6_ArgNum_15 = next_value_of_tscc_proc_1_input_6_ArgNum_15;
          tscc_proc_1_input_7_TotalArgs_16 = next_value_of_tscc_proc_1_input_7_TotalArgs_16;
          tscc_proc_1_input_8_HeadVars_17 = next_value_of_tscc_proc_1_input_8_HeadVars_17;
          tscc_proc_1_input_9_AllTraced_18 = next_value_of_tscc_proc_1_input_9_AllTraced_18;
          tscc_proc_1_input_10_Primitives0_19 = next_value_of_tscc_proc_1_input_10_Primitives0_19;
          goto top_of_proc_1;
        }
        else
        {
          mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_tree_scalar_common_1[23])));
        }
      }
      else
      {
        MR_Box ContourHeadId_85;
        MR_Word ContourTail_86 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Contour_25, (MR_Integer) 1))));
        MR_Word CallInfo_87;
        MR_Word NewContour_88;
        MR_Word Var_113 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Contour_25, (MR_Integer) 0))));
        MR_Word ContourHeadNode_129;
        MR_Word Primitive_132;
        MR_Word Primitives1_133;
        MR_Word Atom_127;
        MR_Word TypeInfo_153_153;
        MR_Word next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37;
        MR_Box next_value_of_tscc_proc_1_input_2_Store_11;
        MR_Word next_value_of_tscc_proc_1_input_3_GoalPaths_12;
        MR_Word next_value_of_tscc_proc_1_input_4_Contour_13;
        MR_Word next_value_of_tscc_proc_1_input_5_MaybeEnd_14;
        MR_Integer next_value_of_tscc_proc_1_input_6_ArgNum_15;
        MR_Integer next_value_of_tscc_proc_1_input_7_TotalArgs_16;
        MR_Word next_value_of_tscc_proc_1_input_8_HeadVars_17;
        MR_Word next_value_of_tscc_proc_1_input_9_AllTraced_18;
        MR_Word next_value_of_tscc_proc_1_input_10_Primitives0_19;

        ContourHeadId_85 = (MR_hl_field(MR_mktag(0), Var_113, (MR_Integer) 0));
        ContourHeadNode_129 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_113, (MR_Integer) 1))));
        mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_annotated_trace_145, (MR_Integer) 2, &TypeInfo_153_153);
        succeeded = mdb__declarative_execution__get_trace_exit_atom_1_f_1(TypeInfo_153_153, ContourHeadNode_129, &Atom_127);
        if (succeeded)
        {
          MR_Word AtomicGoalId_125;
          MR_Word Var_114;

          Var_114 = mdbcomp__program_representation__atomic_goal_identifiable_1_f_0(AtomicGoal_21);
          succeeded = (Var_114 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            AtomicGoalId_125 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_114, (MR_Integer) 0))));
            succeeded = mdb__declarative_tree__atomic_goal_matches_atom_2_p_0(AtomicGoalId_125, Atom_127);
          }
          else
            succeeded = (AllTraced_30 == (MR_Integer) 1);
          if (succeeded)
          {
            {
              CallInfo_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), CallInfo_87, 0) = ContourHeadId_85;
            }
            NewContour_88 = ContourTail_86;
          }
          else
            switch (AllTraced_30) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  CallInfo_87 = (MR_Word) ((MR_Unsigned) 0U);
                  NewContour_88 = Contour_25;
                }
                break;
              case (MR_Integer) 1:
                {
                  mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_tree_scalar_common_1[24])));
                }
                break;
            }
        }
        else
          switch (AllTraced_30) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                CallInfo_87 = (MR_Word) ((MR_Unsigned) 0U);
                NewContour_88 = Contour_25;
              }
              break;
            case (MR_Integer) 1:
              {
                mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_tree_scalar_common_1[25])));
              }
              break;
          }
        {
          Primitive_132 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Primitive_132, 0) = ((MR_Box) (File_18));
          MR_hl_field(MR_mktag(0), Primitive_132, 1) = ((MR_Box) (Line_19));
          MR_hl_field(MR_mktag(0), Primitive_132, 2) = ((MR_Box) (BoundVars_20));
          MR_hl_field(MR_mktag(0), Primitive_132, 3) = ((MR_Box) (AtomicGoal_21));
          MR_hl_field(MR_mktag(0), Primitive_132, 4) = ((MR_Box) (Path_23));
          MR_hl_field(MR_mktag(0), Primitive_132, 5) = ((MR_Box) (CallInfo_87));
        }
        {
          Primitives1_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Primitives1_133, 0) = ((MR_Box) (Primitive_132));
          MR_hl_field(MR_mktag(1), Primitives1_133, 1) = ((MR_Box) (Primitives0_31));
        }
        // direct tailcall eliminated
        ;
        next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37 = TypeClassInfo_for_annotated_trace_145;
        next_value_of_tscc_proc_1_input_2_Store_11 = Store_17;
        next_value_of_tscc_proc_1_input_3_GoalPaths_12 = GoalPaths_24;
        next_value_of_tscc_proc_1_input_4_Contour_13 = NewContour_88;
        next_value_of_tscc_proc_1_input_5_MaybeEnd_14 = MaybeEnd_26;
        next_value_of_tscc_proc_1_input_6_ArgNum_15 = ArgNum_27;
        next_value_of_tscc_proc_1_input_7_TotalArgs_16 = TotalArgs_28;
        next_value_of_tscc_proc_1_input_8_HeadVars_17 = HeadVars_29;
        next_value_of_tscc_proc_1_input_9_AllTraced_18 = AllTraced_30;
        next_value_of_tscc_proc_1_input_10_Primitives0_19 = Primitives1_133;
        tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37 = next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37;
        tscc_proc_1_input_2_Store_11 = next_value_of_tscc_proc_1_input_2_Store_11;
        tscc_proc_1_input_3_GoalPaths_12 = next_value_of_tscc_proc_1_input_3_GoalPaths_12;
        tscc_proc_1_input_4_Contour_13 = next_value_of_tscc_proc_1_input_4_Contour_13;
        tscc_proc_1_input_5_MaybeEnd_14 = next_value_of_tscc_proc_1_input_5_MaybeEnd_14;
        tscc_proc_1_input_6_ArgNum_15 = next_value_of_tscc_proc_1_input_6_ArgNum_15;
        tscc_proc_1_input_7_TotalArgs_16 = next_value_of_tscc_proc_1_input_7_TotalArgs_16;
        tscc_proc_1_input_8_HeadVars_17 = next_value_of_tscc_proc_1_input_8_HeadVars_17;
        tscc_proc_1_input_9_AllTraced_18 = next_value_of_tscc_proc_1_input_9_AllTraced_18;
        tscc_proc_1_input_10_Primitives0_19 = next_value_of_tscc_proc_1_input_10_Primitives0_19;
        goto top_of_proc_1;
      }
      tscc_output_1_MaybePrims_20 = MaybePrims_32;
      goto tscc_end;
    }
  tscc_end:;
    return tscc_output_1_MaybePrims_20;
  }
}

static MR_Word MR_CALL 
mdb__declarative_tree__match_atomic_goal_to_contour_event_15_f_0(
  MR_Word tscc_proc_3_input_1_TypeClassInfo_for_annotated_trace_145,
  MR_Box tscc_proc_3_input_2_Store_17,
  MR_String tscc_proc_3_input_3_File_18,
  MR_Integer tscc_proc_3_input_4_Line_19,
  MR_Word tscc_proc_3_input_5_BoundVars_20,
  MR_Word tscc_proc_3_input_6_AtomicGoal_21,
  MR_Word tscc_proc_3_input_7_AtomicGoalArgs_22,
  MR_Word tscc_proc_3_input_8_Path_23,
  MR_Word tscc_proc_3_input_9_GoalPaths_24,
  MR_Word tscc_proc_3_input_10_Contour_25,
  MR_Word tscc_proc_3_input_11_MaybeEnd_26,
  MR_Integer tscc_proc_3_input_12_ArgNum_27,
  MR_Integer tscc_proc_3_input_13_TotalArgs_28,
  MR_Word tscc_proc_3_input_14_HeadVars_29,
  MR_Word tscc_proc_3_input_15_AllTraced_30,
  MR_Word tscc_proc_3_input_16_Primitives0_31)
{
  {
    MR_Word tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37;
    MR_Box tscc_proc_1_input_2_Store_11;
    MR_Word tscc_proc_1_input_3_GoalPaths_12;
    MR_Word tscc_proc_1_input_4_Contour_13;
    MR_Word tscc_proc_1_input_5_MaybeEnd_14;
    MR_Integer tscc_proc_1_input_6_ArgNum_15;
    MR_Integer tscc_proc_1_input_7_TotalArgs_16;
    MR_Word tscc_proc_1_input_8_HeadVars_17;
    MR_Word tscc_proc_1_input_9_AllTraced_18;
    MR_Word tscc_proc_1_input_10_Primitives0_19;
    MR_Word tscc_proc_2_input_1_TypeClassInfo_for_annotated_trace_177;
    MR_Box tscc_proc_2_input_2_Store_13;
    MR_Word tscc_proc_2_input_3_Goal_14;
    MR_Word tscc_proc_2_input_4_Path_15;
    MR_Word tscc_proc_2_input_5_GoalPaths_16;
    MR_Word tscc_proc_2_input_6_Contour_17;
    MR_Word tscc_proc_2_input_7_MaybeEnd_18;
    MR_Integer tscc_proc_2_input_8_ArgNum_19;
    MR_Integer tscc_proc_2_input_9_TotalArgs_20;
    MR_Word tscc_proc_2_input_10_HeadVars_21;
    MR_Word tscc_proc_2_input_11_AllTraced_22;
    MR_Word tscc_proc_2_input_12_Primitives0_23;
    MR_Word tscc_output_1_MaybePrims_20;

    // The code for TSCC PROC 3: func mdb.declarative_tree.match_atomic_goal_to_contour_event/15-0.
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: func mdb.declarative_tree.make_primitive_list/9-0
    ;
    // proc 2 in TSCC: func mdb.declarative_tree.match_goal_to_contour_event/11-0
    ;
    // proc 3 in TSCC: func mdb.declarative_tree.match_atomic_goal_to_contour_event/15-0
    ;
    ;
    goto top_of_proc_3;
  top_of_proc_1:;
    {
      MR_Word TypeClassInfo_for_annotated_trace_37 = tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37;
      MR_Box Store_11 = tscc_proc_1_input_2_Store_11;
      MR_Word GoalPaths_12 = tscc_proc_1_input_3_GoalPaths_12;
      MR_Word Contour_13 = tscc_proc_1_input_4_Contour_13;
      MR_Word MaybeEnd_14 = tscc_proc_1_input_5_MaybeEnd_14;
      MR_Integer ArgNum_15 = tscc_proc_1_input_6_ArgNum_15;
      MR_Integer TotalArgs_16 = tscc_proc_1_input_7_TotalArgs_16;
      MR_Word HeadVars_17 = tscc_proc_1_input_8_HeadVars_17;
      MR_Word AllTraced_18 = tscc_proc_1_input_9_AllTraced_18;
      MR_Word Primitives0_19 = tscc_proc_1_input_10_Primitives0_19;
      MR_Word MaybePrims_20;
      MR_bool succeeded = (AllTraced_18 == (MR_Integer) 0);
      MR_Word AdjustedContour_21;
      MR_Integer PolyConst2_40;
      MR_Word Node_58;
      MR_Word EndPath_59;
      MR_Word MaybeReturnLabel_66;
      MR_String CallPathStr_70;
      MR_Word CallPath_71;
      MR_Word Var_72;
      MR_Word Var_73;
      MR_Word TypeInfo_41_41;

      if (succeeded)
      {
        {
          MR_Word NextGoal_52;
          MR_Word Var_55;
          MR_Word Var_56;

          succeeded = (GoalPaths_12 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalPaths_12, (MR_Integer) 0))));
            NextGoal_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_55, (MR_Integer) 0))));
            Var_56 = mdbcomp__program_representation__goal_generates_internal_event_1_f_0(NextGoal_52);
            succeeded = (Var_56 == (MR_Integer) 1);
          }
        }
        if (!(succeeded))
          succeeded = (GoalPaths_12 == (MR_Word) ((MR_Unsigned) 0U));
      }
      if (succeeded)
      {
        MR_Word TypeInfo_39_39;

        mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_annotated_trace_37, (MR_Integer) 2, &TypeInfo_39_39);
        mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_108_101_97_100_105_110_103_95_101_120_105_116_95_102_97_105_108_95_101_118_101_110_116_115_95_95_91_49_93_95_48_2_p_0(Contour_13, &AdjustedContour_21);
      }
      else
        AdjustedContour_21 = Contour_13;
      succeeded = (AllTraced_18 == (MR_Integer) 0);
      if (succeeded)
      {
        PolyConst2_40 = (MR_Integer) 2;
        mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_annotated_trace_37, PolyConst2_40, &TypeInfo_41_41);
        succeeded = (AdjustedContour_21 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AdjustedContour_21, (MR_Integer) 0))));
          Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AdjustedContour_21, (MR_Integer) 1))));
          succeeded = (Var_73 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Node_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_72, (MR_Integer) 1))));
            succeeded = (MaybeEnd_14 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              EndPath_59 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeEnd_14, (MR_Integer) 0))));
              succeeded = ((MR_tag((MR_Word) Node_58)) == (MR_Integer) 0);
              if (succeeded)
              {
                MaybeReturnLabel_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Node_58, (MR_Integer) 6))));
                CallPathStr_70 = mdbcomp__rtti_access__get_goal_path_from_maybe_label_1_f_0(MaybeReturnLabel_66);
                mdbcomp__goal_path__rev_goal_path_from_string_det_2_p_0(CallPathStr_70, &CallPath_71);
                succeeded = mdbcomp__goal_path____Unify____reverse_goal_path_0_0(CallPath_71, EndPath_59);
                if (succeeded)
                {
                  {
                    MR_Word NextGoal_75;
                    MR_Word Var_78;
                    MR_Word Var_79;

                    succeeded = (GoalPaths_12 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalPaths_12, (MR_Integer) 0))));
                      NextGoal_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_78, (MR_Integer) 0))));
                      Var_79 = mdbcomp__program_representation__goal_generates_internal_event_1_f_0(NextGoal_75);
                      succeeded = (Var_79 == (MR_Integer) 1);
                    }
                  }
                  if (!(succeeded))
                    succeeded = (GoalPaths_12 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
            }
          }
        }
      }
      if (succeeded)
        MaybePrims_20 = (MR_Word) ((MR_Unsigned) 0U);
      else
      if ((GoalPaths_12 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Integer Var_25;
        MR_Word Var_34;

        succeeded = mdb__declarative_tree__IntroducedFrom__pred__make_primitive_list__1184__1_3_p_0(TypeClassInfo_for_annotated_trace_37, AdjustedContour_21, (MR_Word) ((MR_Unsigned) 0U));
        if (!(succeeded))
        {
          mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_tree_scalar_common_1[15])));
        }
        mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_108_95_114_101_113_117_105_114_101_95_95_104_111_51_95_95_91_51_93_95_48_3_p_0(MaybeEnd_14, (MR_Word) ((MR_Unsigned) 0U), (MR_String) "make_primitive_list", (MR_String) "found end when looking for call");
        mdb__declarative_tree__find_variable_in_args_4_p_0(HeadVars_17, ArgNum_15, TotalArgs_16, &Var_25);
        {
          Var_34 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_34, 0) = ((MR_Box) (Primitives0_19));
          MR_hl_field(MR_mktag(0), Var_34, 1) = ((MR_Box) (Var_25));
          MR_hl_field(MR_mktag(0), Var_34, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        }
        {
          MaybePrims_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybePrims_20, 0) = ((MR_Box) (Var_34));
        }
      }
      else
      {
        MR_Word Goal_22;
        MR_Word Path_23;
        MR_Word Tail_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalPaths_12, (MR_Integer) 1))));
        MR_Word Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalPaths_12, (MR_Integer) 0))));
        MR_Word next_value_of_tscc_proc_2_input_1_TypeClassInfo_for_annotated_trace_177;
        MR_Box next_value_of_tscc_proc_2_input_2_Store_13;
        MR_Word next_value_of_tscc_proc_2_input_3_Goal_14;
        MR_Word next_value_of_tscc_proc_2_input_4_Path_15;
        MR_Word next_value_of_tscc_proc_2_input_5_GoalPaths_16;
        MR_Word next_value_of_tscc_proc_2_input_6_Contour_17;
        MR_Word next_value_of_tscc_proc_2_input_7_MaybeEnd_18;
        MR_Integer next_value_of_tscc_proc_2_input_8_ArgNum_19;
        MR_Integer next_value_of_tscc_proc_2_input_9_TotalArgs_20;
        MR_Word next_value_of_tscc_proc_2_input_10_HeadVars_21;
        MR_Word next_value_of_tscc_proc_2_input_11_AllTraced_22;
        MR_Word next_value_of_tscc_proc_2_input_12_Primitives0_23;

        Goal_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_36, (MR_Integer) 0))));
        Path_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_36, (MR_Integer) 1))));
        // direct tailcall eliminated
        ;
        next_value_of_tscc_proc_2_input_1_TypeClassInfo_for_annotated_trace_177 = TypeClassInfo_for_annotated_trace_37;
        next_value_of_tscc_proc_2_input_2_Store_13 = Store_11;
        next_value_of_tscc_proc_2_input_3_Goal_14 = Goal_22;
        next_value_of_tscc_proc_2_input_4_Path_15 = Path_23;
        next_value_of_tscc_proc_2_input_5_GoalPaths_16 = Tail_24;
        next_value_of_tscc_proc_2_input_6_Contour_17 = AdjustedContour_21;
        next_value_of_tscc_proc_2_input_7_MaybeEnd_18 = MaybeEnd_14;
        next_value_of_tscc_proc_2_input_8_ArgNum_19 = ArgNum_15;
        next_value_of_tscc_proc_2_input_9_TotalArgs_20 = TotalArgs_16;
        next_value_of_tscc_proc_2_input_10_HeadVars_21 = HeadVars_17;
        next_value_of_tscc_proc_2_input_11_AllTraced_22 = AllTraced_18;
        next_value_of_tscc_proc_2_input_12_Primitives0_23 = Primitives0_19;
        tscc_proc_2_input_1_TypeClassInfo_for_annotated_trace_177 = next_value_of_tscc_proc_2_input_1_TypeClassInfo_for_annotated_trace_177;
        tscc_proc_2_input_2_Store_13 = next_value_of_tscc_proc_2_input_2_Store_13;
        tscc_proc_2_input_3_Goal_14 = next_value_of_tscc_proc_2_input_3_Goal_14;
        tscc_proc_2_input_4_Path_15 = next_value_of_tscc_proc_2_input_4_Path_15;
        tscc_proc_2_input_5_GoalPaths_16 = next_value_of_tscc_proc_2_input_5_GoalPaths_16;
        tscc_proc_2_input_6_Contour_17 = next_value_of_tscc_proc_2_input_6_Contour_17;
        tscc_proc_2_input_7_MaybeEnd_18 = next_value_of_tscc_proc_2_input_7_MaybeEnd_18;
        tscc_proc_2_input_8_ArgNum_19 = next_value_of_tscc_proc_2_input_8_ArgNum_19;
        tscc_proc_2_input_9_TotalArgs_20 = next_value_of_tscc_proc_2_input_9_TotalArgs_20;
        tscc_proc_2_input_10_HeadVars_21 = next_value_of_tscc_proc_2_input_10_HeadVars_21;
        tscc_proc_2_input_11_AllTraced_22 = next_value_of_tscc_proc_2_input_11_AllTraced_22;
        tscc_proc_2_input_12_Primitives0_23 = next_value_of_tscc_proc_2_input_12_Primitives0_23;
        goto top_of_proc_2;
      }
      tscc_output_1_MaybePrims_20 = MaybePrims_20;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word TypeClassInfo_for_annotated_trace_177 = tscc_proc_2_input_1_TypeClassInfo_for_annotated_trace_177;
      MR_Box Store_13 = tscc_proc_2_input_2_Store_13;
      MR_Word Goal_14 = tscc_proc_2_input_3_Goal_14;
      MR_Word Path_15 = tscc_proc_2_input_4_Path_15;
      MR_Word GoalPaths_16 = tscc_proc_2_input_5_GoalPaths_16;
      MR_Word Contour_17 = tscc_proc_2_input_6_Contour_17;
      MR_Word MaybeEnd_18 = tscc_proc_2_input_7_MaybeEnd_18;
      MR_Integer ArgNum_19 = tscc_proc_2_input_8_ArgNum_19;
      MR_Integer TotalArgs_20 = tscc_proc_2_input_9_TotalArgs_20;
      MR_Word HeadVars_21 = tscc_proc_2_input_10_HeadVars_21;
      MR_Word AllTraced_22 = tscc_proc_2_input_11_AllTraced_22;
      MR_Word Primitives0_23 = tscc_proc_2_input_12_Primitives0_23;
      MR_Word MaybePrims_24;
      MR_bool succeeded;
      MR_Word GoalExpr_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_14, (MR_Integer) 0))));

      switch (MR_tag((MR_Word) GoalExpr_25)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Conjs_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GoalExpr_25, (MR_Integer) 0))));
            MR_Word ConjPaths_29;
            MR_Word Var_137;
            MR_Word next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37;
            MR_Box next_value_of_tscc_proc_1_input_2_Store_11;
            MR_Word next_value_of_tscc_proc_1_input_3_GoalPaths_12;
            MR_Word next_value_of_tscc_proc_1_input_4_Contour_13;
            MR_Word next_value_of_tscc_proc_1_input_5_MaybeEnd_14;
            MR_Integer next_value_of_tscc_proc_1_input_6_ArgNum_15;
            MR_Integer next_value_of_tscc_proc_1_input_7_TotalArgs_16;
            MR_Word next_value_of_tscc_proc_1_input_8_HeadVars_17;
            MR_Word next_value_of_tscc_proc_1_input_9_AllTraced_18;
            MR_Word next_value_of_tscc_proc_1_input_10_Primitives0_19;

            mdb__declarative_tree__add_paths_to_conjuncts_4_p_0(Conjs_28, Path_15, (MR_Integer) 1, &ConjPaths_29);
            Var_137 = mercury__list__f_43_43_2_f_0((MR_Word) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_goal_and_path_0), ConjPaths_29, GoalPaths_16);
            // direct tailcall eliminated
            ;
            next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37 = TypeClassInfo_for_annotated_trace_177;
            next_value_of_tscc_proc_1_input_2_Store_11 = Store_13;
            next_value_of_tscc_proc_1_input_3_GoalPaths_12 = Var_137;
            next_value_of_tscc_proc_1_input_4_Contour_13 = Contour_17;
            next_value_of_tscc_proc_1_input_5_MaybeEnd_14 = MaybeEnd_18;
            next_value_of_tscc_proc_1_input_6_ArgNum_15 = ArgNum_19;
            next_value_of_tscc_proc_1_input_7_TotalArgs_16 = TotalArgs_20;
            next_value_of_tscc_proc_1_input_8_HeadVars_17 = HeadVars_21;
            next_value_of_tscc_proc_1_input_9_AllTraced_18 = AllTraced_22;
            next_value_of_tscc_proc_1_input_10_Primitives0_19 = Primitives0_23;
            tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37 = next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37;
            tscc_proc_1_input_2_Store_11 = next_value_of_tscc_proc_1_input_2_Store_11;
            tscc_proc_1_input_3_GoalPaths_12 = next_value_of_tscc_proc_1_input_3_GoalPaths_12;
            tscc_proc_1_input_4_Contour_13 = next_value_of_tscc_proc_1_input_4_Contour_13;
            tscc_proc_1_input_5_MaybeEnd_14 = next_value_of_tscc_proc_1_input_5_MaybeEnd_14;
            tscc_proc_1_input_6_ArgNum_15 = next_value_of_tscc_proc_1_input_6_ArgNum_15;
            tscc_proc_1_input_7_TotalArgs_16 = next_value_of_tscc_proc_1_input_7_TotalArgs_16;
            tscc_proc_1_input_8_HeadVars_17 = next_value_of_tscc_proc_1_input_8_HeadVars_17;
            tscc_proc_1_input_9_AllTraced_18 = next_value_of_tscc_proc_1_input_9_AllTraced_18;
            tscc_proc_1_input_10_Primitives0_19 = next_value_of_tscc_proc_1_input_10_Primitives0_19;
            goto top_of_proc_1;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Disjs_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_25, (MR_Integer) 0))));
            MR_Word ContourTail_45;
            MR_Word DisjPath_51;
            MR_Integer N_54;
            MR_Word ContourHeadNode_44;
            MR_Box Label_47;
            MR_String DisjPathStr_50;
            MR_Word DisjInitialPath_52;
            MR_Word DisjLastStep_53;
            MR_Word Var_128;

            succeeded = (Contour_17 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_128 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Contour_17, (MR_Integer) 0))));
              ContourTail_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Contour_17, (MR_Integer) 1))));
              ContourHeadNode_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_128, (MR_Integer) 1))));
              if (((((MR_tag((MR_Word) ContourHeadNode_44)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ContourHeadNode_44, (MR_Integer) 0)))) == (MR_Integer) 3))))
              {
                Label_47 = ((MR_Box) ((MR_hl_field(MR_mktag(3), ContourHeadNode_44, (MR_Integer) 2))));
                succeeded = MR_TRUE;
              }
              else
              if (((((MR_tag((MR_Word) ContourHeadNode_44)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ContourHeadNode_44, (MR_Integer) 0)))) == (MR_Integer) 4))))
              {
                Label_47 = ((MR_Box) ((MR_hl_field(MR_mktag(3), ContourHeadNode_44, (MR_Integer) 2))));
                succeeded = MR_TRUE;
              }
              else
                succeeded = MR_FALSE;
              if (succeeded)
              {
                DisjPathStr_50 = mdbcomp__rtti_access__get_goal_path_from_label_layout_1_f_0(Label_47);
                mdbcomp__goal_path__rev_goal_path_from_string_det_2_p_0(DisjPathStr_50, &DisjPath_51);
                succeeded = mdbcomp__goal_path__rev_goal_path_remove_last_3_p_0(DisjPath_51, &DisjInitialPath_52, &DisjLastStep_53);
                if (succeeded)
                {
                  succeeded = mdbcomp__goal_path____Unify____reverse_goal_path_0_0(DisjInitialPath_52, Path_15);
                  if (succeeded)
                  {
                    succeeded = ((MR_tag((MR_Word) DisjLastStep_53)) == (MR_Integer) 2);
                    if (succeeded)
                      N_54 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), DisjLastStep_53, (MR_Integer) 0))));
                  }
                }
              }
            }
            if (succeeded)
            {
              MR_Word Disj_55;
              MR_Word DisjAndPath_56;
              MR_Word Var_129;
              MR_Box conv0_Disj_55;
              MR_Word next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37;
              MR_Box next_value_of_tscc_proc_1_input_2_Store_11;
              MR_Word next_value_of_tscc_proc_1_input_3_GoalPaths_12;
              MR_Word next_value_of_tscc_proc_1_input_4_Contour_13;
              MR_Word next_value_of_tscc_proc_1_input_5_MaybeEnd_14;
              MR_Integer next_value_of_tscc_proc_1_input_6_ArgNum_15;
              MR_Integer next_value_of_tscc_proc_1_input_7_TotalArgs_16;
              MR_Word next_value_of_tscc_proc_1_input_8_HeadVars_17;
              MR_Word next_value_of_tscc_proc_1_input_9_AllTraced_18;
              MR_Word next_value_of_tscc_proc_1_input_10_Primitives0_19;

              mercury__list__det_index1_3_p_0((MR_Word) (&mdb__declarative_tree_scalar_common_1[1]), Disjs_42, N_54, &conv0_Disj_55);
              Disj_55 = ((MR_Word) (conv0_Disj_55));
              {
                DisjAndPath_56 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), DisjAndPath_56, 0) = ((MR_Box) (Disj_55));
                MR_hl_field(MR_mktag(0), DisjAndPath_56, 1) = ((MR_Box) (DisjPath_51));
              }
              {
                Var_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_129, 0) = ((MR_Box) (DisjAndPath_56));
                MR_hl_field(MR_mktag(1), Var_129, 1) = ((MR_Box) (GoalPaths_16));
              }
              // direct tailcall eliminated
              ;
              next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37 = TypeClassInfo_for_annotated_trace_177;
              next_value_of_tscc_proc_1_input_2_Store_11 = Store_13;
              next_value_of_tscc_proc_1_input_3_GoalPaths_12 = Var_129;
              next_value_of_tscc_proc_1_input_4_Contour_13 = ContourTail_45;
              next_value_of_tscc_proc_1_input_5_MaybeEnd_14 = MaybeEnd_18;
              next_value_of_tscc_proc_1_input_6_ArgNum_15 = ArgNum_19;
              next_value_of_tscc_proc_1_input_7_TotalArgs_16 = TotalArgs_20;
              next_value_of_tscc_proc_1_input_8_HeadVars_17 = HeadVars_21;
              next_value_of_tscc_proc_1_input_9_AllTraced_18 = AllTraced_22;
              next_value_of_tscc_proc_1_input_10_Primitives0_19 = Primitives0_23;
              tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37 = next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37;
              tscc_proc_1_input_2_Store_11 = next_value_of_tscc_proc_1_input_2_Store_11;
              tscc_proc_1_input_3_GoalPaths_12 = next_value_of_tscc_proc_1_input_3_GoalPaths_12;
              tscc_proc_1_input_4_Contour_13 = next_value_of_tscc_proc_1_input_4_Contour_13;
              tscc_proc_1_input_5_MaybeEnd_14 = next_value_of_tscc_proc_1_input_5_MaybeEnd_14;
              tscc_proc_1_input_6_ArgNum_15 = next_value_of_tscc_proc_1_input_6_ArgNum_15;
              tscc_proc_1_input_7_TotalArgs_16 = next_value_of_tscc_proc_1_input_7_TotalArgs_16;
              tscc_proc_1_input_8_HeadVars_17 = next_value_of_tscc_proc_1_input_8_HeadVars_17;
              tscc_proc_1_input_9_AllTraced_18 = next_value_of_tscc_proc_1_input_9_AllTraced_18;
              tscc_proc_1_input_10_Primitives0_19 = next_value_of_tscc_proc_1_input_10_Primitives0_19;
              goto top_of_proc_1;
            }
            else
            {
              mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_tree_scalar_common_1[16])));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Cases_59 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_25, (MR_Integer) 2))));
            MR_Word ArmPath_63;
            MR_Word ContourTail_141;
            MR_Integer N_143;
            MR_String ArmPathStr_62;
            MR_Word ArmInitialPath_64;
            MR_Word ArmLastStep_65;
            MR_Word Var_123;
            MR_Word ContourHeadNode_138;
            MR_Box Label_139;

            succeeded = (Contour_17 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_123 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Contour_17, (MR_Integer) 0))));
              ContourTail_141 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Contour_17, (MR_Integer) 1))));
              ContourHeadNode_138 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_123, (MR_Integer) 1))));
              succeeded = ((((MR_tag((MR_Word) ContourHeadNode_138)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ContourHeadNode_138, (MR_Integer) 0)))) == (MR_Integer) 2)));
              if (succeeded)
              {
                Label_139 = ((MR_Box) ((MR_hl_field(MR_mktag(3), ContourHeadNode_138, (MR_Integer) 2))));
                ArmPathStr_62 = mdbcomp__rtti_access__get_goal_path_from_label_layout_1_f_0(Label_139);
                mdbcomp__goal_path__rev_goal_path_from_string_det_2_p_0(ArmPathStr_62, &ArmPath_63);
                succeeded = mdbcomp__goal_path__rev_goal_path_remove_last_3_p_0(ArmPath_63, &ArmInitialPath_64, &ArmLastStep_65);
                if (succeeded)
                {
                  succeeded = mdbcomp__goal_path____Unify____reverse_goal_path_0_0(ArmInitialPath_64, Path_15);
                  if (succeeded)
                  {
                    succeeded = ((((MR_tag((MR_Word) ArmLastStep_65)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ArmLastStep_65, (MR_Integer) 0)))) == (MR_Integer) 0)));
                    if (succeeded)
                      N_143 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ArmLastStep_65, (MR_Integer) 1))));
                  }
                }
              }
            }
            if (succeeded)
            {
              MR_Word Case_67;
              MR_Word Arm_70;
              MR_Word ArmAndPath_71;
              MR_Word Var_124;
              MR_Box conv1_Case_67;
              MR_Word next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37;
              MR_Box next_value_of_tscc_proc_1_input_2_Store_11;
              MR_Word next_value_of_tscc_proc_1_input_3_GoalPaths_12;
              MR_Word next_value_of_tscc_proc_1_input_4_Contour_13;
              MR_Word next_value_of_tscc_proc_1_input_5_MaybeEnd_14;
              MR_Integer next_value_of_tscc_proc_1_input_6_ArgNum_15;
              MR_Integer next_value_of_tscc_proc_1_input_7_TotalArgs_16;
              MR_Word next_value_of_tscc_proc_1_input_8_HeadVars_17;
              MR_Word next_value_of_tscc_proc_1_input_9_AllTraced_18;
              MR_Word next_value_of_tscc_proc_1_input_10_Primitives0_19;

              mercury__list__det_index1_3_p_0((MR_Word) (&mdb__declarative_tree_scalar_common_1[2]), Cases_59, N_143, &conv1_Case_67);
              Case_67 = ((MR_Word) (conv1_Case_67));
              Arm_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_67, (MR_Integer) 2))));
              {
                ArmAndPath_71 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ArmAndPath_71, 0) = ((MR_Box) (Arm_70));
                MR_hl_field(MR_mktag(0), ArmAndPath_71, 1) = ((MR_Box) (ArmPath_63));
              }
              {
                Var_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_124, 0) = ((MR_Box) (ArmAndPath_71));
                MR_hl_field(MR_mktag(1), Var_124, 1) = ((MR_Box) (GoalPaths_16));
              }
              // direct tailcall eliminated
              ;
              next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37 = TypeClassInfo_for_annotated_trace_177;
              next_value_of_tscc_proc_1_input_2_Store_11 = Store_13;
              next_value_of_tscc_proc_1_input_3_GoalPaths_12 = Var_124;
              next_value_of_tscc_proc_1_input_4_Contour_13 = ContourTail_141;
              next_value_of_tscc_proc_1_input_5_MaybeEnd_14 = MaybeEnd_18;
              next_value_of_tscc_proc_1_input_6_ArgNum_15 = ArgNum_19;
              next_value_of_tscc_proc_1_input_7_TotalArgs_16 = TotalArgs_20;
              next_value_of_tscc_proc_1_input_8_HeadVars_17 = HeadVars_21;
              next_value_of_tscc_proc_1_input_9_AllTraced_18 = AllTraced_22;
              next_value_of_tscc_proc_1_input_10_Primitives0_19 = Primitives0_23;
              tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37 = next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37;
              tscc_proc_1_input_2_Store_11 = next_value_of_tscc_proc_1_input_2_Store_11;
              tscc_proc_1_input_3_GoalPaths_12 = next_value_of_tscc_proc_1_input_3_GoalPaths_12;
              tscc_proc_1_input_4_Contour_13 = next_value_of_tscc_proc_1_input_4_Contour_13;
              tscc_proc_1_input_5_MaybeEnd_14 = next_value_of_tscc_proc_1_input_5_MaybeEnd_14;
              tscc_proc_1_input_6_ArgNum_15 = next_value_of_tscc_proc_1_input_6_ArgNum_15;
              tscc_proc_1_input_7_TotalArgs_16 = next_value_of_tscc_proc_1_input_7_TotalArgs_16;
              tscc_proc_1_input_8_HeadVars_17 = next_value_of_tscc_proc_1_input_8_HeadVars_17;
              tscc_proc_1_input_9_AllTraced_18 = next_value_of_tscc_proc_1_input_9_AllTraced_18;
              tscc_proc_1_input_10_Primitives0_19 = next_value_of_tscc_proc_1_input_10_Primitives0_19;
              goto top_of_proc_1;
            }
            else
            {
              mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_tree_scalar_common_1[19])));
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_25, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Cond_72 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_25, (MR_Integer) 1))));
                MR_Word Then_73 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_25, (MR_Integer) 2))));
                MR_Word Else_74 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_25, (MR_Integer) 3))));
                MR_Word CondPath_79;
                MR_Word ContourTail_164;
                MR_String CondPathStr_78;
                MR_Word CondInitialPath_80;
                MR_Word CondLastStep_81;
                MR_Word Var_113;
                MR_Word ContourHeadNode_148;
                MR_Box Label_149;

                succeeded = (Contour_17 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_113 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Contour_17, (MR_Integer) 0))));
                  ContourTail_164 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Contour_17, (MR_Integer) 1))));
                  ContourHeadNode_148 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_113, (MR_Integer) 1))));
                  succeeded = ((((MR_tag((MR_Word) ContourHeadNode_148)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ContourHeadNode_148, (MR_Integer) 0)))) == (MR_Integer) 5)));
                  if (succeeded)
                  {
                    Label_149 = ((MR_Box) ((MR_hl_field(MR_mktag(3), ContourHeadNode_148, (MR_Integer) 2))));
                    CondPathStr_78 = mdbcomp__rtti_access__get_goal_path_from_label_layout_1_f_0(Label_149);
                    mdbcomp__goal_path__rev_goal_path_from_string_det_2_p_0(CondPathStr_78, &CondPath_79);
                    succeeded = mdbcomp__goal_path__rev_goal_path_remove_last_3_p_0(CondPath_79, &CondInitialPath_80, &CondLastStep_81);
                    if (succeeded)
                    {
                      succeeded = mdbcomp__goal_path____Unify____reverse_goal_path_0_0(CondInitialPath_80, Path_15);
                      if (succeeded)
                        succeeded = (CondLastStep_81 == (MR_Word) ((MR_Unsigned) 0U));
                    }
                  }
                }
                if (succeeded)
                {
                  MR_Word ThenPath_82;
                  MR_Word CondAndPath_83;
                  MR_Word ThenAndPath_84;
                  MR_Word Var_115;
                  MR_Word Var_116;
                  MR_Word next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37;
                  MR_Box next_value_of_tscc_proc_1_input_2_Store_11;
                  MR_Word next_value_of_tscc_proc_1_input_3_GoalPaths_12;
                  MR_Word next_value_of_tscc_proc_1_input_4_Contour_13;
                  MR_Word next_value_of_tscc_proc_1_input_5_MaybeEnd_14;
                  MR_Integer next_value_of_tscc_proc_1_input_6_ArgNum_15;
                  MR_Integer next_value_of_tscc_proc_1_input_7_TotalArgs_16;
                  MR_Word next_value_of_tscc_proc_1_input_8_HeadVars_17;
                  MR_Word next_value_of_tscc_proc_1_input_9_AllTraced_18;
                  MR_Word next_value_of_tscc_proc_1_input_10_Primitives0_19;

                  ThenPath_82 = mdbcomp__goal_path__rev_goal_path_add_at_end_2_f_0(Path_15, (MR_Word) ((MR_Unsigned) 4U));
                  {
                    CondAndPath_83 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), CondAndPath_83, 0) = ((MR_Box) (Cond_72));
                    MR_hl_field(MR_mktag(0), CondAndPath_83, 1) = ((MR_Box) (CondPath_79));
                  }
                  {
                    ThenAndPath_84 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ThenAndPath_84, 0) = ((MR_Box) (Then_73));
                    MR_hl_field(MR_mktag(0), ThenAndPath_84, 1) = ((MR_Box) (ThenPath_82));
                  }
                  {
                    Var_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_116, 0) = ((MR_Box) (ThenAndPath_84));
                    MR_hl_field(MR_mktag(1), Var_116, 1) = ((MR_Box) (GoalPaths_16));
                  }
                  {
                    Var_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_115, 0) = ((MR_Box) (CondAndPath_83));
                    MR_hl_field(MR_mktag(1), Var_115, 1) = ((MR_Box) (Var_116));
                  }
                  // direct tailcall eliminated
                  ;
                  next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37 = TypeClassInfo_for_annotated_trace_177;
                  next_value_of_tscc_proc_1_input_2_Store_11 = Store_13;
                  next_value_of_tscc_proc_1_input_3_GoalPaths_12 = Var_115;
                  next_value_of_tscc_proc_1_input_4_Contour_13 = ContourTail_164;
                  next_value_of_tscc_proc_1_input_5_MaybeEnd_14 = MaybeEnd_18;
                  next_value_of_tscc_proc_1_input_6_ArgNum_15 = ArgNum_19;
                  next_value_of_tscc_proc_1_input_7_TotalArgs_16 = TotalArgs_20;
                  next_value_of_tscc_proc_1_input_8_HeadVars_17 = HeadVars_21;
                  next_value_of_tscc_proc_1_input_9_AllTraced_18 = AllTraced_22;
                  next_value_of_tscc_proc_1_input_10_Primitives0_19 = Primitives0_23;
                  tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37 = next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37;
                  tscc_proc_1_input_2_Store_11 = next_value_of_tscc_proc_1_input_2_Store_11;
                  tscc_proc_1_input_3_GoalPaths_12 = next_value_of_tscc_proc_1_input_3_GoalPaths_12;
                  tscc_proc_1_input_4_Contour_13 = next_value_of_tscc_proc_1_input_4_Contour_13;
                  tscc_proc_1_input_5_MaybeEnd_14 = next_value_of_tscc_proc_1_input_5_MaybeEnd_14;
                  tscc_proc_1_input_6_ArgNum_15 = next_value_of_tscc_proc_1_input_6_ArgNum_15;
                  tscc_proc_1_input_7_TotalArgs_16 = next_value_of_tscc_proc_1_input_7_TotalArgs_16;
                  tscc_proc_1_input_8_HeadVars_17 = next_value_of_tscc_proc_1_input_8_HeadVars_17;
                  tscc_proc_1_input_9_AllTraced_18 = next_value_of_tscc_proc_1_input_9_AllTraced_18;
                  tscc_proc_1_input_10_Primitives0_19 = next_value_of_tscc_proc_1_input_10_Primitives0_19;
                  goto top_of_proc_1;
                }
                else
                {
                  MR_Word ContourTail_157;
                  MR_Box ElseCondId_87;
                  MR_Word CondNode_89;
                  MR_Word Var_117;
                  MR_Word ContourHeadNode_150;
                  MR_Box Label_151;
                  MR_String CondPathStr_152;
                  MR_Word CondPath_153;
                  MR_Word CondInitialPath_154;
                  MR_Word CondLastStep_155;

                  succeeded = (Contour_17 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_117 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Contour_17, (MR_Integer) 0))));
                    ContourTail_157 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Contour_17, (MR_Integer) 1))));
                    ContourHeadNode_150 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_117, (MR_Integer) 1))));
                    succeeded = ((((MR_tag((MR_Word) ContourHeadNode_150)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ContourHeadNode_150, (MR_Integer) 0)))) == (MR_Integer) 7)));
                    if (succeeded)
                    {
                      ElseCondId_87 = (MR_hl_field(MR_mktag(3), ContourHeadNode_150, (MR_Integer) 2));
                      mdb__declarative_execution__cond_node_from_id_3_p_0(TypeClassInfo_for_annotated_trace_177, Store_13, ElseCondId_87, &CondNode_89);
                      Label_151 = ((MR_Box) ((MR_hl_field(MR_mktag(3), CondNode_89, (MR_Integer) 2))));
                      CondPathStr_152 = mdbcomp__rtti_access__get_goal_path_from_label_layout_1_f_0(Label_151);
                      mdbcomp__goal_path__rev_goal_path_from_string_det_2_p_0(CondPathStr_152, &CondPath_153);
                      succeeded = mdbcomp__goal_path__rev_goal_path_remove_last_3_p_0(CondPath_153, &CondInitialPath_154, &CondLastStep_155);
                      if (succeeded)
                      {
                        succeeded = mdbcomp__goal_path____Unify____reverse_goal_path_0_0(CondInitialPath_154, Path_15);
                        if (succeeded)
                          succeeded = (CondLastStep_155 == (MR_Word) ((MR_Unsigned) 0U));
                      }
                    }
                  }
                  if (succeeded)
                  {
                    MR_Word ElsePath_92;
                    MR_Word ElseAndPath_93;
                    MR_Word Var_119;
                    MR_Word next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37;
                    MR_Box next_value_of_tscc_proc_1_input_2_Store_11;
                    MR_Word next_value_of_tscc_proc_1_input_3_GoalPaths_12;
                    MR_Word next_value_of_tscc_proc_1_input_4_Contour_13;
                    MR_Word next_value_of_tscc_proc_1_input_5_MaybeEnd_14;
                    MR_Integer next_value_of_tscc_proc_1_input_6_ArgNum_15;
                    MR_Integer next_value_of_tscc_proc_1_input_7_TotalArgs_16;
                    MR_Word next_value_of_tscc_proc_1_input_8_HeadVars_17;
                    MR_Word next_value_of_tscc_proc_1_input_9_AllTraced_18;
                    MR_Word next_value_of_tscc_proc_1_input_10_Primitives0_19;

                    ElsePath_92 = mdbcomp__goal_path__rev_goal_path_add_at_end_2_f_0(Path_15, (MR_Word) ((MR_Unsigned) 8U));
                    {
                      ElseAndPath_93 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), ElseAndPath_93, 0) = ((MR_Box) (Else_74));
                      MR_hl_field(MR_mktag(0), ElseAndPath_93, 1) = ((MR_Box) (ElsePath_92));
                    }
                    {
                      Var_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_119, 0) = ((MR_Box) (ElseAndPath_93));
                      MR_hl_field(MR_mktag(1), Var_119, 1) = ((MR_Box) (GoalPaths_16));
                    }
                    // direct tailcall eliminated
                    ;
                    next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37 = TypeClassInfo_for_annotated_trace_177;
                    next_value_of_tscc_proc_1_input_2_Store_11 = Store_13;
                    next_value_of_tscc_proc_1_input_3_GoalPaths_12 = Var_119;
                    next_value_of_tscc_proc_1_input_4_Contour_13 = ContourTail_157;
                    next_value_of_tscc_proc_1_input_5_MaybeEnd_14 = MaybeEnd_18;
                    next_value_of_tscc_proc_1_input_6_ArgNum_15 = ArgNum_19;
                    next_value_of_tscc_proc_1_input_7_TotalArgs_16 = TotalArgs_20;
                    next_value_of_tscc_proc_1_input_8_HeadVars_17 = HeadVars_21;
                    next_value_of_tscc_proc_1_input_9_AllTraced_18 = AllTraced_22;
                    next_value_of_tscc_proc_1_input_10_Primitives0_19 = Primitives0_23;
                    tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37 = next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37;
                    tscc_proc_1_input_2_Store_11 = next_value_of_tscc_proc_1_input_2_Store_11;
                    tscc_proc_1_input_3_GoalPaths_12 = next_value_of_tscc_proc_1_input_3_GoalPaths_12;
                    tscc_proc_1_input_4_Contour_13 = next_value_of_tscc_proc_1_input_4_Contour_13;
                    tscc_proc_1_input_5_MaybeEnd_14 = next_value_of_tscc_proc_1_input_5_MaybeEnd_14;
                    tscc_proc_1_input_6_ArgNum_15 = next_value_of_tscc_proc_1_input_6_ArgNum_15;
                    tscc_proc_1_input_7_TotalArgs_16 = next_value_of_tscc_proc_1_input_7_TotalArgs_16;
                    tscc_proc_1_input_8_HeadVars_17 = next_value_of_tscc_proc_1_input_8_HeadVars_17;
                    tscc_proc_1_input_9_AllTraced_18 = next_value_of_tscc_proc_1_input_9_AllTraced_18;
                    tscc_proc_1_input_10_Primitives0_19 = next_value_of_tscc_proc_1_input_10_Primitives0_19;
                    goto top_of_proc_1;
                  }
                  else
                  {
                    mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_tree_scalar_common_1[17])));
                  }
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word NegGoal_94 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_25, (MR_Integer) 1))));
                MR_Word ContourTail_174;
                MR_Word Var_105;
                MR_Word ContourHeadNode_169;

                succeeded = (Contour_17 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_105 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Contour_17, (MR_Integer) 0))));
                  ContourTail_174 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Contour_17, (MR_Integer) 1))));
                  ContourHeadNode_169 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_105, (MR_Integer) 1))));
                  succeeded = ((((MR_tag((MR_Word) ContourHeadNode_169)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ContourHeadNode_169, (MR_Integer) 0)))) == (MR_Integer) 9)));
                  if (succeeded)
                  {
                  }
                }
                if (succeeded)
                {
                  MR_Word next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37 = TypeClassInfo_for_annotated_trace_177;
                  MR_Box next_value_of_tscc_proc_1_input_2_Store_11 = Store_13;
                  MR_Word next_value_of_tscc_proc_1_input_3_GoalPaths_12 = GoalPaths_16;
                  MR_Word next_value_of_tscc_proc_1_input_4_Contour_13 = ContourTail_174;
                  MR_Word next_value_of_tscc_proc_1_input_5_MaybeEnd_14 = MaybeEnd_18;
                  MR_Integer next_value_of_tscc_proc_1_input_6_ArgNum_15 = ArgNum_19;
                  MR_Integer next_value_of_tscc_proc_1_input_7_TotalArgs_16 = TotalArgs_20;
                  MR_Word next_value_of_tscc_proc_1_input_8_HeadVars_17 = HeadVars_21;
                  MR_Word next_value_of_tscc_proc_1_input_9_AllTraced_18 = AllTraced_22;
                  MR_Word next_value_of_tscc_proc_1_input_10_Primitives0_19 = Primitives0_23;

                  // direct tailcall eliminated
                  ;
                  tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37 = next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37;
                  tscc_proc_1_input_2_Store_11 = next_value_of_tscc_proc_1_input_2_Store_11;
                  tscc_proc_1_input_3_GoalPaths_12 = next_value_of_tscc_proc_1_input_3_GoalPaths_12;
                  tscc_proc_1_input_4_Contour_13 = next_value_of_tscc_proc_1_input_4_Contour_13;
                  tscc_proc_1_input_5_MaybeEnd_14 = next_value_of_tscc_proc_1_input_5_MaybeEnd_14;
                  tscc_proc_1_input_6_ArgNum_15 = next_value_of_tscc_proc_1_input_6_ArgNum_15;
                  tscc_proc_1_input_7_TotalArgs_16 = next_value_of_tscc_proc_1_input_7_TotalArgs_16;
                  tscc_proc_1_input_8_HeadVars_17 = next_value_of_tscc_proc_1_input_8_HeadVars_17;
                  tscc_proc_1_input_9_AllTraced_18 = next_value_of_tscc_proc_1_input_9_AllTraced_18;
                  tscc_proc_1_input_10_Primitives0_19 = next_value_of_tscc_proc_1_input_10_Primitives0_19;
                  goto top_of_proc_1;
                }
                else
                {
                  MR_Word ContourTail_172;
                  MR_Word Var_106;
                  MR_Word ContourHeadNode_170;

                  succeeded = (Contour_17 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_106 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Contour_17, (MR_Integer) 0))));
                    ContourTail_172 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Contour_17, (MR_Integer) 1))));
                    ContourHeadNode_170 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_106, (MR_Integer) 1))));
                    succeeded = ((((MR_tag((MR_Word) ContourHeadNode_170)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ContourHeadNode_170, (MR_Integer) 0)))) == (MR_Integer) 8)));
                    if (succeeded)
                    {
                    }
                  }
                  if (succeeded)
                  {
                    MR_Word NegPath_103;
                    MR_Word NegAndPath_104;
                    MR_Word Var_108;
                    MR_Word next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37;
                    MR_Box next_value_of_tscc_proc_1_input_2_Store_11;
                    MR_Word next_value_of_tscc_proc_1_input_3_GoalPaths_12;
                    MR_Word next_value_of_tscc_proc_1_input_4_Contour_13;
                    MR_Word next_value_of_tscc_proc_1_input_5_MaybeEnd_14;
                    MR_Integer next_value_of_tscc_proc_1_input_6_ArgNum_15;
                    MR_Integer next_value_of_tscc_proc_1_input_7_TotalArgs_16;
                    MR_Word next_value_of_tscc_proc_1_input_8_HeadVars_17;
                    MR_Word next_value_of_tscc_proc_1_input_9_AllTraced_18;
                    MR_Word next_value_of_tscc_proc_1_input_10_Primitives0_19;

                    NegPath_103 = mdbcomp__goal_path__rev_goal_path_add_at_end_2_f_0(Path_15, (MR_Word) ((MR_Unsigned) 12U));
                    {
                      NegAndPath_104 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), NegAndPath_104, 0) = ((MR_Box) (NegGoal_94));
                      MR_hl_field(MR_mktag(0), NegAndPath_104, 1) = ((MR_Box) (NegPath_103));
                    }
                    {
                      Var_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_108, 0) = ((MR_Box) (NegAndPath_104));
                      MR_hl_field(MR_mktag(1), Var_108, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    // direct tailcall eliminated
                    ;
                    next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37 = TypeClassInfo_for_annotated_trace_177;
                    next_value_of_tscc_proc_1_input_2_Store_11 = Store_13;
                    next_value_of_tscc_proc_1_input_3_GoalPaths_12 = Var_108;
                    next_value_of_tscc_proc_1_input_4_Contour_13 = ContourTail_172;
                    next_value_of_tscc_proc_1_input_5_MaybeEnd_14 = MaybeEnd_18;
                    next_value_of_tscc_proc_1_input_6_ArgNum_15 = ArgNum_19;
                    next_value_of_tscc_proc_1_input_7_TotalArgs_16 = TotalArgs_20;
                    next_value_of_tscc_proc_1_input_8_HeadVars_17 = HeadVars_21;
                    next_value_of_tscc_proc_1_input_9_AllTraced_18 = AllTraced_22;
                    next_value_of_tscc_proc_1_input_10_Primitives0_19 = Primitives0_23;
                    tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37 = next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37;
                    tscc_proc_1_input_2_Store_11 = next_value_of_tscc_proc_1_input_2_Store_11;
                    tscc_proc_1_input_3_GoalPaths_12 = next_value_of_tscc_proc_1_input_3_GoalPaths_12;
                    tscc_proc_1_input_4_Contour_13 = next_value_of_tscc_proc_1_input_4_Contour_13;
                    tscc_proc_1_input_5_MaybeEnd_14 = next_value_of_tscc_proc_1_input_5_MaybeEnd_14;
                    tscc_proc_1_input_6_ArgNum_15 = next_value_of_tscc_proc_1_input_6_ArgNum_15;
                    tscc_proc_1_input_7_TotalArgs_16 = next_value_of_tscc_proc_1_input_7_TotalArgs_16;
                    tscc_proc_1_input_8_HeadVars_17 = next_value_of_tscc_proc_1_input_8_HeadVars_17;
                    tscc_proc_1_input_9_AllTraced_18 = next_value_of_tscc_proc_1_input_9_AllTraced_18;
                    tscc_proc_1_input_10_Primitives0_19 = next_value_of_tscc_proc_1_input_10_Primitives0_19;
                    goto top_of_proc_1;
                  }
                  else
                  {
                    mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_tree_scalar_common_1[18])));
                  }
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word InnerGoal_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_25, (MR_Integer) 1))));
                MR_Word MaybeCut_31 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr_25, (MR_Integer) 2))) & (MR_Integer) 1);
                MR_Word InnerPath_32;
                MR_Word InnerAndPath_33;
                MR_Word Var_134;
                MR_Word Var_135;
                MR_Word next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37;
                MR_Box next_value_of_tscc_proc_1_input_2_Store_11;
                MR_Word next_value_of_tscc_proc_1_input_3_GoalPaths_12;
                MR_Word next_value_of_tscc_proc_1_input_4_Contour_13;
                MR_Word next_value_of_tscc_proc_1_input_5_MaybeEnd_14;
                MR_Integer next_value_of_tscc_proc_1_input_6_ArgNum_15;
                MR_Integer next_value_of_tscc_proc_1_input_7_TotalArgs_16;
                MR_Word next_value_of_tscc_proc_1_input_8_HeadVars_17;
                MR_Word next_value_of_tscc_proc_1_input_9_AllTraced_18;
                MR_Word next_value_of_tscc_proc_1_input_10_Primitives0_19;

                {
                  Var_134 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_134, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(MR_mktag(3), Var_134, 1) = (MR_Box) ((MR_Unsigned) (MaybeCut_31));
                }
                InnerPath_32 = mdbcomp__goal_path__rev_goal_path_add_at_end_2_f_0(Path_15, Var_134);
                {
                  InnerAndPath_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), InnerAndPath_33, 0) = ((MR_Box) (InnerGoal_30));
                  MR_hl_field(MR_mktag(0), InnerAndPath_33, 1) = ((MR_Box) (InnerPath_32));
                }
                {
                  Var_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_135, 0) = ((MR_Box) (InnerAndPath_33));
                  MR_hl_field(MR_mktag(1), Var_135, 1) = ((MR_Box) (GoalPaths_16));
                }
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37 = TypeClassInfo_for_annotated_trace_177;
                next_value_of_tscc_proc_1_input_2_Store_11 = Store_13;
                next_value_of_tscc_proc_1_input_3_GoalPaths_12 = Var_135;
                next_value_of_tscc_proc_1_input_4_Contour_13 = Contour_17;
                next_value_of_tscc_proc_1_input_5_MaybeEnd_14 = MaybeEnd_18;
                next_value_of_tscc_proc_1_input_6_ArgNum_15 = ArgNum_19;
                next_value_of_tscc_proc_1_input_7_TotalArgs_16 = TotalArgs_20;
                next_value_of_tscc_proc_1_input_8_HeadVars_17 = HeadVars_21;
                next_value_of_tscc_proc_1_input_9_AllTraced_18 = AllTraced_22;
                next_value_of_tscc_proc_1_input_10_Primitives0_19 = Primitives0_23;
                tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37 = next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37;
                tscc_proc_1_input_2_Store_11 = next_value_of_tscc_proc_1_input_2_Store_11;
                tscc_proc_1_input_3_GoalPaths_12 = next_value_of_tscc_proc_1_input_3_GoalPaths_12;
                tscc_proc_1_input_4_Contour_13 = next_value_of_tscc_proc_1_input_4_Contour_13;
                tscc_proc_1_input_5_MaybeEnd_14 = next_value_of_tscc_proc_1_input_5_MaybeEnd_14;
                tscc_proc_1_input_6_ArgNum_15 = next_value_of_tscc_proc_1_input_6_ArgNum_15;
                tscc_proc_1_input_7_TotalArgs_16 = next_value_of_tscc_proc_1_input_7_TotalArgs_16;
                tscc_proc_1_input_8_HeadVars_17 = next_value_of_tscc_proc_1_input_8_HeadVars_17;
                tscc_proc_1_input_9_AllTraced_18 = next_value_of_tscc_proc_1_input_9_AllTraced_18;
                tscc_proc_1_input_10_Primitives0_19 = next_value_of_tscc_proc_1_input_10_Primitives0_19;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_String File_34 = ((MR_String) ((MR_hl_field(MR_mktag(3), GoalExpr_25, (MR_Integer) 1))));
                MR_Integer Line_35 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_25, (MR_Integer) 2))));
                MR_Word BoundVars_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_25, (MR_Integer) 3))));
                MR_Word AtomicGoal_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_25, (MR_Integer) 4))));
                MR_Word GeneratesEvent_38;

                GeneratesEvent_38 = mdbcomp__program_representation__atomic_goal_generates_event_like_call_1_f_0(AtomicGoal_37);
                if ((GeneratesEvent_38 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word Primitive_40;
                  MR_Word Primitives1_41;
                  MR_Word next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37;
                  MR_Box next_value_of_tscc_proc_1_input_2_Store_11;
                  MR_Word next_value_of_tscc_proc_1_input_3_GoalPaths_12;
                  MR_Word next_value_of_tscc_proc_1_input_4_Contour_13;
                  MR_Word next_value_of_tscc_proc_1_input_5_MaybeEnd_14;
                  MR_Integer next_value_of_tscc_proc_1_input_6_ArgNum_15;
                  MR_Integer next_value_of_tscc_proc_1_input_7_TotalArgs_16;
                  MR_Word next_value_of_tscc_proc_1_input_8_HeadVars_17;
                  MR_Word next_value_of_tscc_proc_1_input_9_AllTraced_18;
                  MR_Word next_value_of_tscc_proc_1_input_10_Primitives0_19;

                  {
                    Primitive_40 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Primitive_40, 0) = ((MR_Box) (File_34));
                    MR_hl_field(MR_mktag(0), Primitive_40, 1) = ((MR_Box) (Line_35));
                    MR_hl_field(MR_mktag(0), Primitive_40, 2) = ((MR_Box) (BoundVars_36));
                    MR_hl_field(MR_mktag(0), Primitive_40, 3) = ((MR_Box) (AtomicGoal_37));
                    MR_hl_field(MR_mktag(0), Primitive_40, 4) = ((MR_Box) (Path_15));
                    MR_hl_field(MR_mktag(0), Primitive_40, 5) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Primitives1_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Primitives1_41, 0) = ((MR_Box) (Primitive_40));
                    MR_hl_field(MR_mktag(1), Primitives1_41, 1) = ((MR_Box) (Primitives0_23));
                  }
                  // direct tailcall eliminated
                  ;
                  next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37 = TypeClassInfo_for_annotated_trace_177;
                  next_value_of_tscc_proc_1_input_2_Store_11 = Store_13;
                  next_value_of_tscc_proc_1_input_3_GoalPaths_12 = GoalPaths_16;
                  next_value_of_tscc_proc_1_input_4_Contour_13 = Contour_17;
                  next_value_of_tscc_proc_1_input_5_MaybeEnd_14 = MaybeEnd_18;
                  next_value_of_tscc_proc_1_input_6_ArgNum_15 = ArgNum_19;
                  next_value_of_tscc_proc_1_input_7_TotalArgs_16 = TotalArgs_20;
                  next_value_of_tscc_proc_1_input_8_HeadVars_17 = HeadVars_21;
                  next_value_of_tscc_proc_1_input_9_AllTraced_18 = AllTraced_22;
                  next_value_of_tscc_proc_1_input_10_Primitives0_19 = Primitives1_41;
                  tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37 = next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37;
                  tscc_proc_1_input_2_Store_11 = next_value_of_tscc_proc_1_input_2_Store_11;
                  tscc_proc_1_input_3_GoalPaths_12 = next_value_of_tscc_proc_1_input_3_GoalPaths_12;
                  tscc_proc_1_input_4_Contour_13 = next_value_of_tscc_proc_1_input_4_Contour_13;
                  tscc_proc_1_input_5_MaybeEnd_14 = next_value_of_tscc_proc_1_input_5_MaybeEnd_14;
                  tscc_proc_1_input_6_ArgNum_15 = next_value_of_tscc_proc_1_input_6_ArgNum_15;
                  tscc_proc_1_input_7_TotalArgs_16 = next_value_of_tscc_proc_1_input_7_TotalArgs_16;
                  tscc_proc_1_input_8_HeadVars_17 = next_value_of_tscc_proc_1_input_8_HeadVars_17;
                  tscc_proc_1_input_9_AllTraced_18 = next_value_of_tscc_proc_1_input_9_AllTraced_18;
                  tscc_proc_1_input_10_Primitives0_19 = next_value_of_tscc_proc_1_input_10_Primitives0_19;
                  goto top_of_proc_1;
                }
                else
                {
                  MR_Word AtomicGoalArgs_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GeneratesEvent_38, (MR_Integer) 0))));
                  MR_Word next_value_of_tscc_proc_3_input_1_TypeClassInfo_for_annotated_trace_145 = TypeClassInfo_for_annotated_trace_177;
                  MR_Box next_value_of_tscc_proc_3_input_2_Store_17 = Store_13;
                  MR_String next_value_of_tscc_proc_3_input_3_File_18 = File_34;
                  MR_Integer next_value_of_tscc_proc_3_input_4_Line_19 = Line_35;
                  MR_Word next_value_of_tscc_proc_3_input_5_BoundVars_20 = BoundVars_36;
                  MR_Word next_value_of_tscc_proc_3_input_6_AtomicGoal_21 = AtomicGoal_37;
                  MR_Word next_value_of_tscc_proc_3_input_7_AtomicGoalArgs_22 = AtomicGoalArgs_39;
                  MR_Word next_value_of_tscc_proc_3_input_8_Path_23 = Path_15;
                  MR_Word next_value_of_tscc_proc_3_input_9_GoalPaths_24 = GoalPaths_16;
                  MR_Word next_value_of_tscc_proc_3_input_10_Contour_25 = Contour_17;
                  MR_Word next_value_of_tscc_proc_3_input_11_MaybeEnd_26 = MaybeEnd_18;
                  MR_Integer next_value_of_tscc_proc_3_input_12_ArgNum_27 = ArgNum_19;
                  MR_Integer next_value_of_tscc_proc_3_input_13_TotalArgs_28 = TotalArgs_20;
                  MR_Word next_value_of_tscc_proc_3_input_14_HeadVars_29 = HeadVars_21;
                  MR_Word next_value_of_tscc_proc_3_input_15_AllTraced_30 = AllTraced_22;
                  MR_Word next_value_of_tscc_proc_3_input_16_Primitives0_31 = Primitives0_23;

                  // direct tailcall eliminated
                  ;
                  tscc_proc_3_input_1_TypeClassInfo_for_annotated_trace_145 = next_value_of_tscc_proc_3_input_1_TypeClassInfo_for_annotated_trace_145;
                  tscc_proc_3_input_2_Store_17 = next_value_of_tscc_proc_3_input_2_Store_17;
                  tscc_proc_3_input_3_File_18 = next_value_of_tscc_proc_3_input_3_File_18;
                  tscc_proc_3_input_4_Line_19 = next_value_of_tscc_proc_3_input_4_Line_19;
                  tscc_proc_3_input_5_BoundVars_20 = next_value_of_tscc_proc_3_input_5_BoundVars_20;
                  tscc_proc_3_input_6_AtomicGoal_21 = next_value_of_tscc_proc_3_input_6_AtomicGoal_21;
                  tscc_proc_3_input_7_AtomicGoalArgs_22 = next_value_of_tscc_proc_3_input_7_AtomicGoalArgs_22;
                  tscc_proc_3_input_8_Path_23 = next_value_of_tscc_proc_3_input_8_Path_23;
                  tscc_proc_3_input_9_GoalPaths_24 = next_value_of_tscc_proc_3_input_9_GoalPaths_24;
                  tscc_proc_3_input_10_Contour_25 = next_value_of_tscc_proc_3_input_10_Contour_25;
                  tscc_proc_3_input_11_MaybeEnd_26 = next_value_of_tscc_proc_3_input_11_MaybeEnd_26;
                  tscc_proc_3_input_12_ArgNum_27 = next_value_of_tscc_proc_3_input_12_ArgNum_27;
                  tscc_proc_3_input_13_TotalArgs_28 = next_value_of_tscc_proc_3_input_13_TotalArgs_28;
                  tscc_proc_3_input_14_HeadVars_29 = next_value_of_tscc_proc_3_input_14_HeadVars_29;
                  tscc_proc_3_input_15_AllTraced_30 = next_value_of_tscc_proc_3_input_15_AllTraced_30;
                  tscc_proc_3_input_16_Primitives0_31 = next_value_of_tscc_proc_3_input_16_Primitives0_31;
                  goto top_of_proc_3;
                }
              }
              break;
          }
          break;
      }
      tscc_output_1_MaybePrims_20 = MaybePrims_24;
      goto tscc_end;
    }
  top_of_proc_3:;
    {
      MR_Word TypeClassInfo_for_annotated_trace_145 = tscc_proc_3_input_1_TypeClassInfo_for_annotated_trace_145;
      MR_Box Store_17 = tscc_proc_3_input_2_Store_17;
      MR_String File_18 = tscc_proc_3_input_3_File_18;
      MR_Integer Line_19 = tscc_proc_3_input_4_Line_19;
      MR_Word BoundVars_20 = tscc_proc_3_input_5_BoundVars_20;
      MR_Word AtomicGoal_21 = tscc_proc_3_input_6_AtomicGoal_21;
      MR_Word AtomicGoalArgs_22 = tscc_proc_3_input_7_AtomicGoalArgs_22;
      MR_Word Path_23 = tscc_proc_3_input_8_Path_23;
      MR_Word GoalPaths_24 = tscc_proc_3_input_9_GoalPaths_24;
      MR_Word Contour_25 = tscc_proc_3_input_10_Contour_25;
      MR_Word MaybeEnd_26 = tscc_proc_3_input_11_MaybeEnd_26;
      MR_Integer ArgNum_27 = tscc_proc_3_input_12_ArgNum_27;
      MR_Integer TotalArgs_28 = tscc_proc_3_input_13_TotalArgs_28;
      MR_Word HeadVars_29 = tscc_proc_3_input_14_HeadVars_29;
      MR_Word AllTraced_30 = tscc_proc_3_input_15_AllTraced_30;
      MR_Word Primitives0_31 = tscc_proc_3_input_16_Primitives0_31;
      MR_Word MaybePrims_32;
      MR_bool succeeded = (Contour_25 != (MR_Word) ((MR_Unsigned) 0U));
      MR_Word ContourHeadNode_34;
      MR_Word EndPath_35;
      MR_Word Var_89;
      MR_Word Var_90;

      if (succeeded)
      {
        Var_89 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Contour_25, (MR_Integer) 0))));
        Var_90 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Contour_25, (MR_Integer) 1))));
        succeeded = (Var_90 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ContourHeadNode_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_89, (MR_Integer) 1))));
          succeeded = (MaybeEnd_26 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
            EndPath_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeEnd_26, (MR_Integer) 0))));
        }
      }
      if (succeeded)
      {
        MR_Word Atom_46;
        MR_Word TypeInfo_147_147;
        MR_Word MaybeReturnLabel_42;
        MR_String CallPathStr_47;
        MR_Word CallPath_48;
        MR_Integer PolyConst2_146;

        succeeded = ((MR_tag((MR_Word) ContourHeadNode_34)) == (MR_Integer) 0);
        if (succeeded)
        {
          MaybeReturnLabel_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ContourHeadNode_34, (MR_Integer) 6))));
          PolyConst2_146 = (MR_Integer) 2;
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_annotated_trace_145, PolyConst2_146, &TypeInfo_147_147);
          Atom_46 = mdb__declarative_execution__get_trace_call_atom_1_f_0(TypeInfo_147_147, ContourHeadNode_34);
          CallPathStr_47 = mdbcomp__rtti_access__get_goal_path_from_maybe_label_1_f_0(MaybeReturnLabel_42);
          mdbcomp__goal_path__rev_goal_path_from_string_det_2_p_0(CallPathStr_47, &CallPath_48);
          succeeded = mdbcomp__goal_path____Unify____reverse_goal_path_0_0(CallPath_48, EndPath_35);
        }
        if (succeeded)
        {
          MR_Word AtomicGoalId_49;
          MR_Word Var_91;

          Var_91 = mdbcomp__program_representation__atomic_goal_identifiable_1_f_0(AtomicGoal_21);
          succeeded = (Var_91 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            AtomicGoalId_49 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_91, (MR_Integer) 0))));
            succeeded = mdb__declarative_tree__atomic_goal_matches_atom_2_p_0(AtomicGoalId_49, Atom_46);
          }
          else
            succeeded = (AllTraced_30 == (MR_Integer) 1);
          if (succeeded)
          {
            MR_Integer Var_92;
            MR_Integer Var_93;

            Var_93 = mercury__list__length_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), AtomicGoalArgs_22);
            Var_92 = (MR_Integer) ((MR_Unsigned) TotalArgs_28 - (MR_Unsigned) Var_93);
            succeeded = (ArgNum_27 > Var_92);
            if (succeeded)
            {
              MR_Integer Var_50;
              MR_Word Var_94;

              mdb__declarative_tree__find_variable_in_args_4_p_0(AtomicGoalArgs_22, ArgNum_27, TotalArgs_28, &Var_50);
              {
                Var_94 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_94, 0) = ((MR_Box) (Primitives0_31));
                MR_hl_field(MR_mktag(0), Var_94, 1) = ((MR_Box) (Var_50));
                MR_hl_field(MR_mktag(0), Var_94, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              }
              {
                MaybePrims_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MaybePrims_32, 0) = ((MR_Box) (Var_94));
              }
            }
            else
              switch (MR_tag((MR_Word) AtomicGoal_21)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                  {
                    mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_tree_scalar_common_1[20])));
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), AtomicGoal_21, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                    case (MR_Integer) 1:
                    case (MR_Integer) 2:
                    case (MR_Integer) 3:
                    case (MR_Integer) 4:
                    case (MR_Integer) 6:
                    case (MR_Integer) 7:
                    case (MR_Integer) 8:
                    case (MR_Integer) 9:
                      {
                        mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_tree_scalar_common_1[20])));
                      }
                      break;
                    case (MR_Integer) 5:
                      {
                        MR_Word Var_99;
                        MR_Integer Var_123 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), AtomicGoal_21, (MR_Integer) 1))));

                        {
                          Var_99 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), Var_99, 0) = ((MR_Box) (Primitives0_31));
                          MR_hl_field(MR_mktag(0), Var_99, 1) = ((MR_Box) (Var_123));
                          MR_hl_field(MR_mktag(0), Var_99, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                        }
                        {
                          MaybePrims_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), MaybePrims_32, 0) = ((MR_Box) (Var_99));
                        }
                      }
                      break;
                  }
                  break;
              }
          }
          else
            switch (AllTraced_30) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word Primitive_83;
                  MR_Word Primitives1_84;
                  MR_Word next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37;
                  MR_Box next_value_of_tscc_proc_1_input_2_Store_11;
                  MR_Word next_value_of_tscc_proc_1_input_3_GoalPaths_12;
                  MR_Word next_value_of_tscc_proc_1_input_4_Contour_13;
                  MR_Word next_value_of_tscc_proc_1_input_5_MaybeEnd_14;
                  MR_Integer next_value_of_tscc_proc_1_input_6_ArgNum_15;
                  MR_Integer next_value_of_tscc_proc_1_input_7_TotalArgs_16;
                  MR_Word next_value_of_tscc_proc_1_input_8_HeadVars_17;
                  MR_Word next_value_of_tscc_proc_1_input_9_AllTraced_18;
                  MR_Word next_value_of_tscc_proc_1_input_10_Primitives0_19;

                  {
                    Primitive_83 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Primitive_83, 0) = ((MR_Box) (File_18));
                    MR_hl_field(MR_mktag(0), Primitive_83, 1) = ((MR_Box) (Line_19));
                    MR_hl_field(MR_mktag(0), Primitive_83, 2) = ((MR_Box) (BoundVars_20));
                    MR_hl_field(MR_mktag(0), Primitive_83, 3) = ((MR_Box) (AtomicGoal_21));
                    MR_hl_field(MR_mktag(0), Primitive_83, 4) = ((MR_Box) (Path_23));
                    MR_hl_field(MR_mktag(0), Primitive_83, 5) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Primitives1_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Primitives1_84, 0) = ((MR_Box) (Primitive_83));
                    MR_hl_field(MR_mktag(1), Primitives1_84, 1) = ((MR_Box) (Primitives0_31));
                  }
                  // direct tailcall eliminated
                  ;
                  next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37 = TypeClassInfo_for_annotated_trace_145;
                  next_value_of_tscc_proc_1_input_2_Store_11 = Store_17;
                  next_value_of_tscc_proc_1_input_3_GoalPaths_12 = GoalPaths_24;
                  next_value_of_tscc_proc_1_input_4_Contour_13 = Contour_25;
                  next_value_of_tscc_proc_1_input_5_MaybeEnd_14 = MaybeEnd_26;
                  next_value_of_tscc_proc_1_input_6_ArgNum_15 = ArgNum_27;
                  next_value_of_tscc_proc_1_input_7_TotalArgs_16 = TotalArgs_28;
                  next_value_of_tscc_proc_1_input_8_HeadVars_17 = HeadVars_29;
                  next_value_of_tscc_proc_1_input_9_AllTraced_18 = AllTraced_30;
                  next_value_of_tscc_proc_1_input_10_Primitives0_19 = Primitives1_84;
                  tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37 = next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37;
                  tscc_proc_1_input_2_Store_11 = next_value_of_tscc_proc_1_input_2_Store_11;
                  tscc_proc_1_input_3_GoalPaths_12 = next_value_of_tscc_proc_1_input_3_GoalPaths_12;
                  tscc_proc_1_input_4_Contour_13 = next_value_of_tscc_proc_1_input_4_Contour_13;
                  tscc_proc_1_input_5_MaybeEnd_14 = next_value_of_tscc_proc_1_input_5_MaybeEnd_14;
                  tscc_proc_1_input_6_ArgNum_15 = next_value_of_tscc_proc_1_input_6_ArgNum_15;
                  tscc_proc_1_input_7_TotalArgs_16 = next_value_of_tscc_proc_1_input_7_TotalArgs_16;
                  tscc_proc_1_input_8_HeadVars_17 = next_value_of_tscc_proc_1_input_8_HeadVars_17;
                  tscc_proc_1_input_9_AllTraced_18 = next_value_of_tscc_proc_1_input_9_AllTraced_18;
                  tscc_proc_1_input_10_Primitives0_19 = next_value_of_tscc_proc_1_input_10_Primitives0_19;
                  goto top_of_proc_1;
                }
                break;
              case (MR_Integer) 1:
                {
                  mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_tree_scalar_common_1[21])));
                }
                break;
            }
        }
        else
        {
          mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_tree_scalar_common_1[22])));
        }
      }
      else
      if ((Contour_25 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        succeeded = (MaybeEnd_26 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
          succeeded = (AllTraced_30 == (MR_Integer) 0);
        if (succeeded)
        {
          MR_Word Primitive_134;
          MR_Word Primitives1_135;
          MR_Word next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37;
          MR_Box next_value_of_tscc_proc_1_input_2_Store_11;
          MR_Word next_value_of_tscc_proc_1_input_3_GoalPaths_12;
          MR_Word next_value_of_tscc_proc_1_input_5_MaybeEnd_14;
          MR_Integer next_value_of_tscc_proc_1_input_6_ArgNum_15;
          MR_Integer next_value_of_tscc_proc_1_input_7_TotalArgs_16;
          MR_Word next_value_of_tscc_proc_1_input_8_HeadVars_17;
          MR_Word next_value_of_tscc_proc_1_input_9_AllTraced_18;
          MR_Word next_value_of_tscc_proc_1_input_10_Primitives0_19;

          {
            Primitive_134 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Primitive_134, 0) = ((MR_Box) (File_18));
            MR_hl_field(MR_mktag(0), Primitive_134, 1) = ((MR_Box) (Line_19));
            MR_hl_field(MR_mktag(0), Primitive_134, 2) = ((MR_Box) (BoundVars_20));
            MR_hl_field(MR_mktag(0), Primitive_134, 3) = ((MR_Box) (AtomicGoal_21));
            MR_hl_field(MR_mktag(0), Primitive_134, 4) = ((MR_Box) (Path_23));
            MR_hl_field(MR_mktag(0), Primitive_134, 5) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Primitives1_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Primitives1_135, 0) = ((MR_Box) (Primitive_134));
            MR_hl_field(MR_mktag(1), Primitives1_135, 1) = ((MR_Box) (Primitives0_31));
          }
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37 = TypeClassInfo_for_annotated_trace_145;
          next_value_of_tscc_proc_1_input_2_Store_11 = Store_17;
          next_value_of_tscc_proc_1_input_3_GoalPaths_12 = GoalPaths_24;
          next_value_of_tscc_proc_1_input_5_MaybeEnd_14 = MaybeEnd_26;
          next_value_of_tscc_proc_1_input_6_ArgNum_15 = ArgNum_27;
          next_value_of_tscc_proc_1_input_7_TotalArgs_16 = TotalArgs_28;
          next_value_of_tscc_proc_1_input_8_HeadVars_17 = HeadVars_29;
          next_value_of_tscc_proc_1_input_9_AllTraced_18 = AllTraced_30;
          next_value_of_tscc_proc_1_input_10_Primitives0_19 = Primitives1_135;
          tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37 = next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37;
          tscc_proc_1_input_2_Store_11 = next_value_of_tscc_proc_1_input_2_Store_11;
          tscc_proc_1_input_3_GoalPaths_12 = next_value_of_tscc_proc_1_input_3_GoalPaths_12;
          tscc_proc_1_input_4_Contour_13 = (MR_Word) ((MR_Unsigned) 0U);
          tscc_proc_1_input_5_MaybeEnd_14 = next_value_of_tscc_proc_1_input_5_MaybeEnd_14;
          tscc_proc_1_input_6_ArgNum_15 = next_value_of_tscc_proc_1_input_6_ArgNum_15;
          tscc_proc_1_input_7_TotalArgs_16 = next_value_of_tscc_proc_1_input_7_TotalArgs_16;
          tscc_proc_1_input_8_HeadVars_17 = next_value_of_tscc_proc_1_input_8_HeadVars_17;
          tscc_proc_1_input_9_AllTraced_18 = next_value_of_tscc_proc_1_input_9_AllTraced_18;
          tscc_proc_1_input_10_Primitives0_19 = next_value_of_tscc_proc_1_input_10_Primitives0_19;
          goto top_of_proc_1;
        }
        else
        {
          mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_tree_scalar_common_1[23])));
        }
      }
      else
      {
        MR_Box ContourHeadId_85;
        MR_Word ContourTail_86 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Contour_25, (MR_Integer) 1))));
        MR_Word CallInfo_87;
        MR_Word NewContour_88;
        MR_Word Var_113 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Contour_25, (MR_Integer) 0))));
        MR_Word ContourHeadNode_129;
        MR_Word Primitive_132;
        MR_Word Primitives1_133;
        MR_Word Atom_127;
        MR_Word TypeInfo_153_153;
        MR_Word next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37;
        MR_Box next_value_of_tscc_proc_1_input_2_Store_11;
        MR_Word next_value_of_tscc_proc_1_input_3_GoalPaths_12;
        MR_Word next_value_of_tscc_proc_1_input_4_Contour_13;
        MR_Word next_value_of_tscc_proc_1_input_5_MaybeEnd_14;
        MR_Integer next_value_of_tscc_proc_1_input_6_ArgNum_15;
        MR_Integer next_value_of_tscc_proc_1_input_7_TotalArgs_16;
        MR_Word next_value_of_tscc_proc_1_input_8_HeadVars_17;
        MR_Word next_value_of_tscc_proc_1_input_9_AllTraced_18;
        MR_Word next_value_of_tscc_proc_1_input_10_Primitives0_19;

        ContourHeadId_85 = (MR_hl_field(MR_mktag(0), Var_113, (MR_Integer) 0));
        ContourHeadNode_129 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_113, (MR_Integer) 1))));
        mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_annotated_trace_145, (MR_Integer) 2, &TypeInfo_153_153);
        succeeded = mdb__declarative_execution__get_trace_exit_atom_1_f_1(TypeInfo_153_153, ContourHeadNode_129, &Atom_127);
        if (succeeded)
        {
          MR_Word AtomicGoalId_125;
          MR_Word Var_114;

          Var_114 = mdbcomp__program_representation__atomic_goal_identifiable_1_f_0(AtomicGoal_21);
          succeeded = (Var_114 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            AtomicGoalId_125 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_114, (MR_Integer) 0))));
            succeeded = mdb__declarative_tree__atomic_goal_matches_atom_2_p_0(AtomicGoalId_125, Atom_127);
          }
          else
            succeeded = (AllTraced_30 == (MR_Integer) 1);
          if (succeeded)
          {
            {
              CallInfo_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), CallInfo_87, 0) = ContourHeadId_85;
            }
            NewContour_88 = ContourTail_86;
          }
          else
            switch (AllTraced_30) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  CallInfo_87 = (MR_Word) ((MR_Unsigned) 0U);
                  NewContour_88 = Contour_25;
                }
                break;
              case (MR_Integer) 1:
                {
                  mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_tree_scalar_common_1[24])));
                }
                break;
            }
        }
        else
          switch (AllTraced_30) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                CallInfo_87 = (MR_Word) ((MR_Unsigned) 0U);
                NewContour_88 = Contour_25;
              }
              break;
            case (MR_Integer) 1:
              {
                mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_tree_scalar_common_1[25])));
              }
              break;
          }
        {
          Primitive_132 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Primitive_132, 0) = ((MR_Box) (File_18));
          MR_hl_field(MR_mktag(0), Primitive_132, 1) = ((MR_Box) (Line_19));
          MR_hl_field(MR_mktag(0), Primitive_132, 2) = ((MR_Box) (BoundVars_20));
          MR_hl_field(MR_mktag(0), Primitive_132, 3) = ((MR_Box) (AtomicGoal_21));
          MR_hl_field(MR_mktag(0), Primitive_132, 4) = ((MR_Box) (Path_23));
          MR_hl_field(MR_mktag(0), Primitive_132, 5) = ((MR_Box) (CallInfo_87));
        }
        {
          Primitives1_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Primitives1_133, 0) = ((MR_Box) (Primitive_132));
          MR_hl_field(MR_mktag(1), Primitives1_133, 1) = ((MR_Box) (Primitives0_31));
        }
        // direct tailcall eliminated
        ;
        next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37 = TypeClassInfo_for_annotated_trace_145;
        next_value_of_tscc_proc_1_input_2_Store_11 = Store_17;
        next_value_of_tscc_proc_1_input_3_GoalPaths_12 = GoalPaths_24;
        next_value_of_tscc_proc_1_input_4_Contour_13 = NewContour_88;
        next_value_of_tscc_proc_1_input_5_MaybeEnd_14 = MaybeEnd_26;
        next_value_of_tscc_proc_1_input_6_ArgNum_15 = ArgNum_27;
        next_value_of_tscc_proc_1_input_7_TotalArgs_16 = TotalArgs_28;
        next_value_of_tscc_proc_1_input_8_HeadVars_17 = HeadVars_29;
        next_value_of_tscc_proc_1_input_9_AllTraced_18 = AllTraced_30;
        next_value_of_tscc_proc_1_input_10_Primitives0_19 = Primitives1_133;
        tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37 = next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_37;
        tscc_proc_1_input_2_Store_11 = next_value_of_tscc_proc_1_input_2_Store_11;
        tscc_proc_1_input_3_GoalPaths_12 = next_value_of_tscc_proc_1_input_3_GoalPaths_12;
        tscc_proc_1_input_4_Contour_13 = next_value_of_tscc_proc_1_input_4_Contour_13;
        tscc_proc_1_input_5_MaybeEnd_14 = next_value_of_tscc_proc_1_input_5_MaybeEnd_14;
        tscc_proc_1_input_6_ArgNum_15 = next_value_of_tscc_proc_1_input_6_ArgNum_15;
        tscc_proc_1_input_7_TotalArgs_16 = next_value_of_tscc_proc_1_input_7_TotalArgs_16;
        tscc_proc_1_input_8_HeadVars_17 = next_value_of_tscc_proc_1_input_8_HeadVars_17;
        tscc_proc_1_input_9_AllTraced_18 = next_value_of_tscc_proc_1_input_9_AllTraced_18;
        tscc_proc_1_input_10_Primitives0_19 = next_value_of_tscc_proc_1_input_10_Primitives0_19;
        goto top_of_proc_1;
      }
      tscc_output_1_MaybePrims_20 = MaybePrims_32;
      goto tscc_end;
    }
  tscc_end:;
    return tscc_output_1_MaybePrims_20;
  }
}

static void MR_CALL 
mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_108_95_114_101_113_117_105_114_101_95_95_104_111_51_95_95_91_51_93_95_48_3_p_0(
  MR_Word Var_9,
  MR_Word Var_10,
  MR_String Loc_5,
  MR_String Msg_6)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&mdb__declarative_tree_scalar_common_1[0]), ((MR_Box) (Var_9)), ((MR_Box) (Var_10)));
    if (!(succeeded))
    {
      MR_Word Var_7;

      {
        Var_7 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_7, 0) = ((MR_Box) (Loc_5));
        MR_hl_field(MR_mktag(0), Var_7, 1) = ((MR_Box) (Msg_6));
      }
      {
        mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (Var_7)));
        return;
      }
    }
  }
}

static void MR_CALL 
mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_108_101_97_100_105_110_103_95_101_120_105_116_95_102_97_105_108_95_101_118_101_110_116_115_95_95_91_49_93_95_48_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word ContourHeadNode_6;
      MR_Word ContourTail_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

      ContourHeadNode_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_22, (MR_Integer) 1))));
      if (((MR_tag((MR_Word) ContourHeadNode_6)) == (MR_Integer) 1))
        succeeded = MR_TRUE;
      else
      if (((((MR_tag((MR_Word) ContourHeadNode_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ContourHeadNode_6, (MR_Integer) 0)))) == (MR_Integer) 0))))
        succeeded = MR_TRUE;
      else
        succeeded = MR_FALSE;
      if (succeeded)
      {
        MR_Word next_value_of_HeadVar__1_1 = ContourTail_7;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
      else
        *HeadVar__2_2 = HeadVar__1_1;
    }
    break;
  }
}

static MR_bool MR_CALL 
mdb__declarative_tree__IntroducedFrom__pred__make_primitive_list__1184__1_3_p_0(
  MR_Word TypeClassInfo_for_annotated_trace_37,
  MR_Word AdjustedContour_21,
  MR_Word HeadVar__3_29)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_43_43;
    MR_Word TypeInfo_44_44;
    MR_Word TypeInfo_46_46;
    MR_Word TypeInfo_48_48;

    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_annotated_trace_37, (MR_Integer) 2, &TypeInfo_43_43);
    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_annotated_trace_37, (MR_Integer) 2, &TypeInfo_44_44);
    {
      TypeInfo_46_46 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_46_46, 0) = ((MR_Box) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_1));
      MR_hl_field(MR_mktag(0), TypeInfo_46_46, 1) = ((MR_Box) (TypeInfo_44_44));
    }
    {
      TypeInfo_48_48 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_48_48, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
      MR_hl_field(MR_mktag(0), TypeInfo_48_48, 1) = ((MR_Box) (TypeInfo_43_43));
      MR_hl_field(MR_mktag(0), TypeInfo_48_48, 2) = ((MR_Box) (TypeInfo_46_46));
    }
    succeeded = mercury__list____Unify____list_1_0(TypeInfo_48_48, AdjustedContour_21, HeadVar__3_29);
    return succeeded;
  }
}

static void MR_CALL 
mdb__declarative_tree__add_paths_to_conjuncts_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ParentPath_2,
  MR_Integer N_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Goal_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Goals_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Path_11;
    MR_Word GoalAndPaths_12;
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Integer Var_15;

    {
      Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_14, 0) = ((MR_Box) (N_3));
    }
    Path_11 = mdbcomp__goal_path__rev_goal_path_add_at_end_2_f_0(ParentPath_2, Var_14);
    {
      Var_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_13, 0) = ((MR_Box) (Goal_7));
      MR_hl_field(MR_mktag(0), Var_13, 1) = ((MR_Box) (Path_11));
    }
    Var_15 = (MR_Integer) ((MR_Unsigned) N_3 + (MR_Unsigned) (MR_Integer) 1);
    mdb__declarative_tree__add_paths_to_conjuncts_4_p_0(Goals_8, ParentPath_2, Var_15, &GoalAndPaths_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (GoalAndPaths_12));
    }
  }
}

static void MR_CALL 
mdb__declarative_tree__find_variable_in_args_4_p_0(
  MR_Word Args_5,
  MR_Integer ArgNum_6,
  MR_Integer TotalArgs_7,
  MR_Integer * Var_8)
{
  {
    MR_bool succeeded;
    MR_Integer FoundVar_9;
    MR_Word Var_10;
    MR_Integer Var_11;
    MR_Integer Var_12;
    MR_Box conv0_FoundVar_9;

    Var_10 = mercury__list__reverse_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Args_5);
    Var_12 = (MR_Integer) ((MR_Unsigned) TotalArgs_7 - (MR_Unsigned) ArgNum_6);
    Var_11 = (MR_Integer) ((MR_Unsigned) Var_12 + (MR_Unsigned) (MR_Integer) 1);
    succeeded = mercury__list__index1_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_10, Var_11, &conv0_FoundVar_9);
    if (succeeded)
    {
      FoundVar_9 = ((MR_Integer) (conv0_FoundVar_9));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      *Var_8 = FoundVar_9;
    else
    {
      {
        mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_tree_scalar_common_1[14])));
        return;
      }
    }
  }
}

static MR_bool MR_CALL 
mdb__declarative_tree__atomic_goal_matches_atom_2_p_0(
  MR_Word AtomicGoalId_3,
  MR_Word Atom_4)
{
  {
    MR_bool succeeded;
    MR_String GoalModule_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), AtomicGoalId_3, (MR_Integer) 0))));
    MR_String GoalName_6 = ((MR_String) ((MR_hl_field(MR_mktag(0), AtomicGoalId_3, (MR_Integer) 1))));
    MR_Integer GoalArity_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), AtomicGoalId_3, (MR_Integer) 2))));
    MR_Word ProcLabel_8;
    MR_Word EventModule_9;
    MR_String EventName_10;
    MR_Integer EventArity_13;
    MR_Box Var_14 = ((MR_Box) ((MR_hl_field(MR_mktag(0), Atom_4, (MR_Integer) 0))));
    MR_Word Var_15;
    MR_String Var_19;
    MR_Integer Var_11;
    MR_Word Var_12;

    ProcLabel_8 = mdbcomp__rtti_access__get_proc_label_from_layout_1_f_0(Var_14);
    mdb__declarative_execution__get_pred_attributes_5_p_0(ProcLabel_8, &EventModule_9, &EventName_10, &Var_11, &Var_12);
    Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Atom_4, (MR_Integer) 1))));
    EventArity_13 = mercury__list__length_1_f_0((MR_Word) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0), Var_15);
    Var_19 = mdbcomp__sym_name__sym_name_to_string_1_f_0(EventModule_9);
    succeeded = (strcmp(GoalModule_5, Var_19) == 0);
    if (succeeded)
    {
      succeeded = (strcmp(EventName_10, GoalName_6) == 0);
      if (succeeded)
        succeeded = (EventArity_13 == GoalArity_7);
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_tree__get_exit_atom_3_p_0(
  MR_Word TypeClassInfo_for_annotated_trace_16,
  MR_Box Store_4,
  MR_Word HeadVar__2_2,
  MR_Word * FinalAtom_7)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_40_52;
    MR_Word Exit_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ExitAtom_20;
    MR_Box CallId_21;
    MR_Word Call_22;
    MR_Integer CallIoSeq_23;
    MR_Integer ExitIoSeq_24;
    MR_Integer PolyConst2_51;

    succeeded = ((MR_tag((MR_Word) Exit_6)) == (MR_Integer) 1);
    if (succeeded)
    {
      PolyConst2_51 = (MR_Integer) 2;
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_annotated_trace_16, PolyConst2_51, &TypeInfo_40_52);
      ExitAtom_20 = mdb__declarative_execution__get_trace_exit_atom_1_f_0(TypeInfo_40_52, Exit_6);
      CallId_21 = (MR_hl_field(MR_mktag(1), Exit_6, (MR_Integer) 1));
      mdb__declarative_execution__call_node_from_id_3_p_0(TypeClassInfo_for_annotated_trace_16, Store_4, CallId_21, &Call_22);
      CallIoSeq_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Call_22, (MR_Integer) 8))));
      ExitIoSeq_24 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Exit_6, (MR_Integer) 6))));
      succeeded = (CallIoSeq_23 == ExitIoSeq_24);
      if (succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *FinalAtom_7 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ExitAtom_20));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      else
      {
        MR_Word Var_26;
        MR_Word Var_27;

        {
          Var_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_27, 0) = ((MR_Box) (CallIoSeq_23));
          MR_hl_field(MR_mktag(0), Var_27, 1) = ((MR_Box) (ExitIoSeq_24));
        }
        {
          Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (Var_27));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *FinalAtom_7 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ExitAtom_20));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_26));
        }
      }
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_tree__get_exit_atoms_in_contour_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv0_FinalAtom_7;

    succeeded = mdb__declarative_tree__get_exit_atom_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)), ((MR_Word) (wrapper_arg_1)), &conv0_FinalAtom_7);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv0_FinalAtom_7));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
mdb__declarative_tree__get_exit_atoms_in_contour_3_p_0(
  MR_Word TypeClassInfo_for_annotated_trace_19,
  MR_Box Store_4,
  MR_Word ExitNode_5,
  MR_Word * ExitAtoms_6)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_23_23;
    MR_Word TypeInfo_24_24;
    MR_Word TypeInfo_26_26;
    MR_Word TypeInfo_28_28;
    MR_Box ExitPrecId_7 = (MR_hl_field(MR_mktag(1), ExitNode_5, (MR_Integer) 0));
    MR_Word ExitPrec_8;
    MR_Word Contour_9;
    MR_Word Var_11;

    mdb__declarative_execution__det_trace_node_from_id_3_p_0(TypeClassInfo_for_annotated_trace_19, Store_4, ExitPrecId_7, &ExitPrec_8);
    mdb__declarative_tree__materialize_contour_5_p_0(TypeClassInfo_for_annotated_trace_19, Store_4, ExitPrecId_7, ExitPrec_8, (MR_Word) ((MR_Unsigned) 0U), &Contour_9);
    {
      Var_11 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_11, 0) = ((MR_Box) (&mdb__declarative_tree_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_11, 1) = ((MR_Box) (mdb__declarative_tree__get_exit_atoms_in_contour_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_11, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_11, 3) = ((MR_Box) (TypeClassInfo_for_annotated_trace_19));
      MR_hl_field(MR_mktag(0), Var_11, 4) = Store_4;
    }
    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_annotated_trace_19, (MR_Integer) 2, &TypeInfo_23_23);
    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_annotated_trace_19, (MR_Integer) 2, &TypeInfo_24_24);
    {
      TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_26_26, 0) = ((MR_Box) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_1));
      MR_hl_field(MR_mktag(0), TypeInfo_26_26, 1) = ((MR_Box) (TypeInfo_24_24));
    }
    {
      TypeInfo_28_28 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_28_28, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
      MR_hl_field(MR_mktag(0), TypeInfo_28_28, 1) = ((MR_Box) (TypeInfo_23_23));
      MR_hl_field(MR_mktag(0), TypeInfo_28_28, 2) = ((MR_Box) (TypeInfo_26_26));
    }
    mercury__list__filter_map_3_p_0(TypeInfo_28_28, (MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_final_decl_atom_0), Var_11, Contour_9, ExitAtoms_6);
  }
}

static void MR_CALL 
mdb__declarative_tree__materialize_contour_5_p_0(
  MR_Word TypeClassInfo_for_annotated_trace_34,
  MR_Box Store_6,
  MR_Box NodeId_7,
  MR_Word Node_8,
  MR_Word Nodes0_9,
  MR_Word * Nodes_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Node_8)) == (MR_Integer) 0);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *Nodes_10 = Nodes0_9;
    }
    else
    {
      MR_Box PrevNodeId_24;
      MR_Word PrevNode_28;
      MR_Word Nodes1_32;
      MR_Box NegPrec_21;
      MR_Box next_value_of_NodeId_7;
      MR_Word next_value_of_Node_8;
      MR_Word next_value_of_Nodes0_9;

      succeeded = ((((MR_tag((MR_Word) Node_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Node_8, (MR_Integer) 0)))) == (MR_Integer) 8)));
      if (succeeded)
      {
        NegPrec_21 = (MR_hl_field(MR_mktag(3), Node_8, (MR_Integer) 1));
        PrevNodeId_24 = NegPrec_21;
      }
      else
      {
        MR_Box CondPrec_25;

        succeeded = ((((MR_tag((MR_Word) Node_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Node_8, (MR_Integer) 0)))) == (MR_Integer) 5)));
        if (succeeded)
        {
          CondPrec_25 = (MR_hl_field(MR_mktag(3), Node_8, (MR_Integer) 1));
          PrevNodeId_24 = CondPrec_25;
        }
        else
          PrevNodeId_24 = mdb__declarative_execution__step_left_in_contour_2_f_0(TypeClassInfo_for_annotated_trace_34, Store_6, Node_8);
      }
      mdb__declarative_execution__det_trace_node_from_id_3_p_0(TypeClassInfo_for_annotated_trace_34, Store_6, PrevNodeId_24, &PrevNode_28);
      succeeded = ((((MR_tag((MR_Word) Node_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Node_8, (MR_Integer) 0)))) == (MR_Integer) 6)));
      if (succeeded)
      {
        Nodes1_32 = Nodes0_9;
      }
      else
      {
        MR_Word Var_33;

        {
          Var_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_33, 0) = NodeId_7;
          MR_hl_field(MR_mktag(0), Var_33, 1) = ((MR_Box) (Node_8));
        }
        {
          Nodes1_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Nodes1_32, 0) = ((MR_Box) (Var_33));
          MR_hl_field(MR_mktag(1), Nodes1_32, 1) = ((MR_Box) (Nodes0_9));
        }
      }
      // direct tailcall eliminated
      ;
      next_value_of_NodeId_7 = PrevNodeId_24;
      next_value_of_Node_8 = PrevNode_28;
      next_value_of_Nodes0_9 = Nodes1_32;
      NodeId_7 = next_value_of_NodeId_7;
      Node_8 = next_value_of_Node_8;
      Nodes0_9 = next_value_of_Nodes0_9;
      continue;
    }
    break;
  }
}

static void MR_CALL 
mdb__declarative_tree__find_chain_start_outside_4_p_0(
  MR_Word TypeInfo_for_R_25,
  MR_Word CallNode_5,
  MR_Word ExitNode_6,
  MR_Word ArgPos_7,
  MR_Word * ChainStart_8)
{
  {
    MR_Word ExitAtom_10;
    MR_Integer ArgNum_11;
    MR_Integer TotalArgs_12;
    MR_Box StartId_13;
    MR_Word StartRep_15;
    MR_Word Var_16;

    ExitAtom_10 = mdb__declarative_execution__get_trace_exit_atom_1_f_0(TypeInfo_for_R_25, ExitNode_6);
    mdb__declarative_execution__absolute_arg_num_3_p_0(ArgPos_7, ExitAtom_10, &ArgNum_11);
    Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExitAtom_10, (MR_Integer) 1))));
    TotalArgs_12 = mercury__list__length_1_f_0((MR_Word) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0), Var_16);
    StartId_13 = (MR_hl_field(MR_mktag(1), ExitNode_6, (MR_Integer) 0));
    mdb__declarative_execution__call_node_maybe_proc_defn_rep_2_p_0(TypeInfo_for_R_25, CallNode_5, &StartRep_15);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      *ChainStart_8 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ArgNum_11));
      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (TotalArgs_12));
      MR_hl_field(MR_mktag(1), base, 3) = StartId_13;
      MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), base, 5) = ((MR_Box) (StartRep_15));
    }
  }
}

static void MR_CALL 
mdb__declarative_tree__find_chain_start_inside_5_p_0(
  MR_Word TypeClassInfo_for_annotated_trace_42,
  MR_Box Store_6,
  MR_Box CallId_7,
  MR_Word CallNode_8,
  MR_Word ArgPos_9,
  MR_Word * ChainStart_10)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_44_44;
    MR_Word CallAtom_12;
    MR_String CallPathStr_13;
    MR_Word CallPath_14;
    MR_Word StartLoc_15;
    MR_Integer ArgNum_16;
    MR_Integer TotalArgs_17;
    MR_Box StartId_18 = (MR_hl_field(MR_mktag(0), CallNode_8, (MR_Integer) 0));
    MR_Word StartPath_19;
    MR_Word StartRep_20;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Call_49;
    MR_Box CallPrecId_50;
    MR_Word ParentCallNode_51;

    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_annotated_trace_42, (MR_Integer) 2, &TypeInfo_44_44);
    CallAtom_12 = mdb__declarative_execution__get_trace_call_atom_1_f_0(TypeInfo_44_44, CallNode_8);
    Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CallNode_8, (MR_Integer) 6))));
    CallPathStr_13 = mdbcomp__rtti_access__get_goal_path_from_maybe_label_1_f_0(Var_21);
    mdbcomp__goal_path__rev_goal_path_from_string_det_2_p_0(CallPathStr_13, &CallPath_14);
    {
      StartLoc_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), StartLoc_15, 0) = CallId_7;
      MR_hl_field(MR_mktag(1), StartLoc_15, 1) = ((MR_Box) (CallNode_8));
    }
    mdb__declarative_execution__absolute_arg_num_3_p_0(ArgPos_9, CallAtom_12, &ArgNum_16);
    Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CallAtom_12, (MR_Integer) 1))));
    TotalArgs_17 = mercury__list__length_1_f_0((MR_Word) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0), Var_22);
    {
      StartPath_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), StartPath_19, 0) = ((MR_Box) (CallPath_14));
    }
    mdb__declarative_execution__call_node_from_id_3_p_0(TypeClassInfo_for_annotated_trace_42, Store_6, CallId_7, &Call_49);
    CallPrecId_50 = (MR_hl_field(MR_mktag(0), Call_49, (MR_Integer) 0));
    succeeded = mdb__declarative_tree__step_left_to_call_3_p_0(TypeClassInfo_for_annotated_trace_42, Store_6, CallPrecId_50, &ParentCallNode_51);
    if (succeeded)
    {
      MR_Word TypeInfo_21_62;

      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_annotated_trace_42, (MR_Integer) 2, &TypeInfo_21_62);
      mdb__declarative_execution__call_node_maybe_proc_defn_rep_2_p_0(TypeInfo_21_62, ParentCallNode_51, &StartRep_20);
    }
    else
      StartRep_20 = (MR_Word) ((MR_Unsigned) 0U);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      *ChainStart_10 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (StartLoc_15));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ArgNum_16));
      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (TotalArgs_17));
      MR_hl_field(MR_mktag(1), base, 3) = StartId_18;
      MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (StartPath_19));
      MR_hl_field(MR_mktag(1), base, 5) = ((MR_Box) (StartRep_20));
    }
  }
}

static MR_bool MR_CALL 
mdb__declarative_tree__step_left_to_call_3_p_0(
  MR_Word TypeClassInfo_for_annotated_trace_25,
  MR_Box Store_4,
  MR_Box NodeId_5,
  MR_Word * ParentCallNode_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word Node_7;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_annotated_trace_25, (MR_Integer) 0)), (MR_Integer) 5))));
    MR_Box conv1_Node_7;

    // setup for model_semi tailcalls optimized into a loop
    ;
    succeeded = func_0(((MR_Box) (TypeClassInfo_for_annotated_trace_25)), Store_4, NodeId_5, &conv1_Node_7);
    if (succeeded)
    {
      Node_7 = ((MR_Word) (conv1_Node_7));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) Node_7)) == (MR_Integer) 0);
      if (succeeded)
      {
        *ParentCallNode_6 = Node_7;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Box PrevNodeId_21;
        MR_Box NegPrec_18;
        MR_Box next_value_of_NodeId_5;

        succeeded = ((((MR_tag((MR_Word) Node_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Node_7, (MR_Integer) 0)))) == (MR_Integer) 8)));
        if (succeeded)
        {
          NegPrec_18 = (MR_hl_field(MR_mktag(3), Node_7, (MR_Integer) 1));
          PrevNodeId_21 = NegPrec_18;
        }
        else
        {
          MR_Box CondPrec_22;

          succeeded = ((((MR_tag((MR_Word) Node_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Node_7, (MR_Integer) 0)))) == (MR_Integer) 5)));
          if (succeeded)
          {
            CondPrec_22 = (MR_hl_field(MR_mktag(3), Node_7, (MR_Integer) 1));
            PrevNodeId_21 = CondPrec_22;
          }
          else
            PrevNodeId_21 = mdb__declarative_execution__step_left_in_contour_2_f_0(TypeClassInfo_for_annotated_trace_25, Store_4, Node_7);
        }
        // direct tailcall eliminated
        ;
        next_value_of_NodeId_5 = PrevNodeId_21;
        NodeId_5 = next_value_of_NodeId_5;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static MR_Box MR_CALL 
mdb__declarative_tree__trace_dependency_special_case_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Integer conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = mdbcomp__program_representation__head_var_to_var_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
mdb__declarative_tree__trace_dependency_special_case_8_p_0(
  MR_Word TypeClassInfo_for_annotated_trace_43,
  MR_Box Store_9,
  MR_Word ProcDefnRep_10,
  MR_Box Ref_11,
  MR_Word StartLoc_12,
  MR_Integer ArgNum_13,
  MR_Word TermPath_14,
  MR_Box NodeId_15,
  MR_Word * Origin_16)
{
  {
    MR_bool succeeded;
    MR_Word GoalRep_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProcDefnRep_10, (MR_Integer) 1))));
    MR_Word HeadVars_50;
    MR_Word GoalExprRep_51;
    MR_Integer A_52;
    MR_Integer B_53;
    MR_Integer C_54;
    MR_Integer D_55;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_String Var_63;
    MR_Word Var_64;
    MR_Word Var_65;
    MR_Word Var_66;
    MR_String Var_67;
    MR_String Var_68;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_Word Var_71;
    MR_Word Var_72;
    MR_Word Var_73;
    MR_Word Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProcDefnRep_10, (MR_Integer) 0))));
    MR_Integer Var_88;
    MR_Integer Var_89;
    MR_Integer Var_90;
    MR_Integer Var_91;
    MR_Integer Var_92;

    HeadVars_50 = mercury__list__map_2_f_0((MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_head_var_rep_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mdb__declarative_tree_scalar_common_4[0]), Var_74);
    GoalExprRep_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GoalRep_49, (MR_Integer) 0))));
    succeeded = (HeadVars_50 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      A_52 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVars_50, (MR_Integer) 0))));
      Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVars_50, (MR_Integer) 1))));
      succeeded = (Var_59 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        B_53 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Var_59, (MR_Integer) 0))));
        Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_59, (MR_Integer) 1))));
        succeeded = (Var_60 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          C_54 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Var_60, (MR_Integer) 0))));
          Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_60, (MR_Integer) 1))));
          succeeded = (Var_61 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            D_55 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Var_61, (MR_Integer) 0))));
            Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_61, (MR_Integer) 1))));
            succeeded = (Var_62 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              succeeded = ((((MR_tag((MR_Word) GoalExprRep_51)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExprRep_51, (MR_Integer) 0)))) == (MR_Integer) 3)));
              if (succeeded)
              {
                Var_63 = ((MR_String) ((MR_hl_field(MR_mktag(3), GoalExprRep_51, (MR_Integer) 1))));
                Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExprRep_51, (MR_Integer) 3))));
                Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExprRep_51, (MR_Integer) 4))));
                succeeded = (strcmp(Var_63, (MR_String) "exception.m") == 0);
                if (succeeded)
                {
                  succeeded = (Var_64 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_88 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Var_64, (MR_Integer) 0))));
                    Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_64, (MR_Integer) 1))));
                    succeeded = (D_55 == Var_88);
                    if (succeeded)
                    {
                      succeeded = (Var_65 == (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        succeeded = ((((MR_tag((MR_Word) Var_66)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_66, (MR_Integer) 0)))) == (MR_Integer) 7)));
                        if (succeeded)
                        {
                          Var_67 = ((MR_String) ((MR_hl_field(MR_mktag(3), Var_66, (MR_Integer) 1))));
                          Var_68 = ((MR_String) ((MR_hl_field(MR_mktag(3), Var_66, (MR_Integer) 2))));
                          Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_66, (MR_Integer) 3))));
                          succeeded = (strcmp(Var_67, (MR_String) "exception") == 0);
                          if (succeeded)
                          {
                            succeeded = (strcmp(Var_68, (MR_String) "builtin_catch") == 0);
                            if (succeeded)
                            {
                              succeeded = (Var_69 != (MR_Word) ((MR_Unsigned) 0U));
                              if (succeeded)
                              {
                                Var_89 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Var_69, (MR_Integer) 0))));
                                Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_69, (MR_Integer) 1))));
                                succeeded = (A_52 == Var_89);
                                if (succeeded)
                                {
                                  succeeded = (Var_70 != (MR_Word) ((MR_Unsigned) 0U));
                                  if (succeeded)
                                  {
                                    Var_90 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Var_70, (MR_Integer) 0))));
                                    Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_70, (MR_Integer) 1))));
                                    succeeded = (B_53 == Var_90);
                                    if (succeeded)
                                    {
                                      succeeded = (Var_71 != (MR_Word) ((MR_Unsigned) 0U));
                                      if (succeeded)
                                      {
                                        Var_91 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Var_71, (MR_Integer) 0))));
                                        Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_71, (MR_Integer) 1))));
                                        succeeded = (C_54 == Var_91);
                                        if (succeeded)
                                        {
                                          succeeded = (Var_72 != (MR_Word) ((MR_Unsigned) 0U));
                                          if (succeeded)
                                          {
                                            Var_92 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Var_72, (MR_Integer) 0))));
                                            Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_72, (MR_Integer) 1))));
                                            succeeded = (D_55 == Var_92);
                                            if (succeeded)
                                            {
                                              succeeded = (Var_73 == (MR_Word) ((MR_Unsigned) 0U));
                                              if (succeeded)
                                              {
                                                if ((StartLoc_12 == (MR_Word) ((MR_Unsigned) 0U)))
                                                {
                                                  MR_Word TypeInfo_45_45;
                                                  MR_Word TypeInfo_47_47;
                                                  MR_Word ExitNode_19;
                                                  MR_Word ExitAtom_20;
                                                  MR_Word Args_22;
                                                  MR_Word TryResultArgInfo_23;
                                                  MR_Word TryResultRep_26;
                                                  MR_Word TryResultUniv_27;
                                                  MR_Box TryResult_28;
                                                  MR_String Functor_29;
                                                  MR_Word Var_32;
                                                  MR_Word Var_33;
                                                  MR_Box conv1_TryResultArgInfo_23;
                                                  MR_Integer Var_30;
                                                  MR_Word Var_31;

                                                  mdb__declarative_execution__exit_node_from_id_3_p_0(TypeClassInfo_for_annotated_trace_43, Store_9, Ref_11, &ExitNode_19);
                                                  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_annotated_trace_43, (MR_Integer) 2, &TypeInfo_45_45);
                                                  ExitAtom_20 = mdb__declarative_execution__get_trace_exit_atom_1_f_0(TypeInfo_45_45, ExitNode_19);
                                                  Args_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExitAtom_20, (MR_Integer) 1))));
                                                  mercury__list__det_index1_3_p_0((MR_Word) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0), Args_22, ArgNum_13, &conv1_TryResultArgInfo_23);
                                                  TryResultArgInfo_23 = ((MR_Word) (conv1_TryResultArgInfo_23));
                                                  Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TryResultArgInfo_23, (MR_Integer) 2))));
                                                  succeeded = (Var_32 != (MR_Word) ((MR_Unsigned) 0U));
                                                  if (succeeded)
                                                  {
                                                    TryResultRep_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_32, (MR_Integer) 0))));
                                                    mdb__term_rep__rep_to_univ_2_p_0(TryResultRep_26, &TryResultUniv_27);
                                                    TryResult_28 = mercury__univ__univ_value_1_f_0(&TypeInfo_47_47, TryResultUniv_27);
                                                    Var_33 = (MR_Integer) 1;
                                                    mercury__deconstruct__deconstruct_5_p_1(TypeInfo_47_47, TryResult_28, Var_33, &Functor_29, &Var_30, &Var_31);
                                                    succeeded = (strcmp(Functor_29, (MR_String) "succeeded") == 0);
                                                    if (succeeded)
                                                    {
                                                      MR_Word Var_34 = ((MR_Word) (NodeId_15));

                                                      {
                                                        MR_Word base;
                                                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                                                        *Origin_16 = base;
                                                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_34));
                                                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &mdb__declarative_tree_scalar_common_2[2])));
                                                        MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (TermPath_14));
                                                      }
                                                    }
                                                    else
                                                      *Origin_16 = (MR_Word) (MR_mkword(MR_mktag(3), &mdb__declarative_tree_scalar_common_4[1]));
                                                    succeeded = MR_TRUE;
                                                  }
                                                }
                                                else
                                                {
                                                  MR_Word Var_42;

                                                  {
                                                    Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                                    MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (ArgNum_13));
                                                    MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (TermPath_14));
                                                  }
                                                  {
                                                    MR_Word base;
                                                    base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                                    *Origin_16 = base;
                                                    MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (&mdb__declarative_tree_scalar_common_2[2]));
                                                    MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (Var_42));
                                                  }
                                                  succeeded = MR_TRUE;
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
              }
            }
          }
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
mdb__declarative_tree__stratum_children_5_p_0(
  MR_Word tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_11,
  MR_Box tscc_proc_1_input_2_Store_6,
  MR_Box tscc_proc_1_input_3_NodeId_7,
  MR_Box tscc_proc_1_input_4_StartId_8,
  MR_Word tscc_proc_1_input_5_Ns0_9,
  MR_Word * tscc_output_ptr_1_Ns_10)
{
  {
    MR_Word tscc_proc_2_input_1_TypeClassInfo_for_annotated_trace_84;
    MR_Box tscc_proc_2_input_2_Store_6;
    MR_Box tscc_proc_2_input_3_NodeId_7;
    MR_Box tscc_proc_2_input_4_StartId_8;
    MR_Word tscc_proc_2_input_5_Ns0_9;
    MR_Word tscc_output_1_Ns_10;

    // The code for TSCC PROC 1: pred mdb.declarative_tree.stratum_children/5-0.
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: pred mdb.declarative_tree.stratum_children/5-0
    ;
    // proc 2 in TSCC: pred mdb.declarative_tree.stratum_children_2/5-0
    ;
    ;
    goto top_of_proc_1;
  top_of_proc_1:;
    {
      MR_Word TypeClassInfo_for_annotated_trace_11 = tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_11;
      MR_Box Store_6 = tscc_proc_1_input_2_Store_6;
      MR_Box NodeId_7 = tscc_proc_1_input_3_NodeId_7;
      MR_Box StartId_8 = tscc_proc_1_input_4_StartId_8;
      MR_Word Ns0_9 = tscc_proc_1_input_5_Ns0_9;
      MR_Word Ns_10;
      MR_bool succeeded;
      MR_Word TypeInfo_13_13;

      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_annotated_trace_11, (MR_Integer) 2, &TypeInfo_13_13);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, NodeId_7, StartId_8);
      if (succeeded)
        Ns_10 = Ns0_9;
      else
      {
        MR_Word next_value_of_tscc_proc_2_input_1_TypeClassInfo_for_annotated_trace_84 = TypeClassInfo_for_annotated_trace_11;
        MR_Box next_value_of_tscc_proc_2_input_2_Store_6 = Store_6;
        MR_Box next_value_of_tscc_proc_2_input_3_NodeId_7 = NodeId_7;
        MR_Box next_value_of_tscc_proc_2_input_4_StartId_8 = StartId_8;
        MR_Word next_value_of_tscc_proc_2_input_5_Ns0_9 = Ns0_9;

        // direct tailcall eliminated
        ;
        tscc_proc_2_input_1_TypeClassInfo_for_annotated_trace_84 = next_value_of_tscc_proc_2_input_1_TypeClassInfo_for_annotated_trace_84;
        tscc_proc_2_input_2_Store_6 = next_value_of_tscc_proc_2_input_2_Store_6;
        tscc_proc_2_input_3_NodeId_7 = next_value_of_tscc_proc_2_input_3_NodeId_7;
        tscc_proc_2_input_4_StartId_8 = next_value_of_tscc_proc_2_input_4_StartId_8;
        tscc_proc_2_input_5_Ns0_9 = next_value_of_tscc_proc_2_input_5_Ns0_9;
        goto top_of_proc_2;
      }
      tscc_output_1_Ns_10 = Ns_10;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word TypeClassInfo_for_annotated_trace_84 = tscc_proc_2_input_1_TypeClassInfo_for_annotated_trace_84;
      MR_Box Store_6 = tscc_proc_2_input_2_Store_6;
      MR_Box NodeId_7 = tscc_proc_2_input_3_NodeId_7;
      MR_Box StartId_8 = tscc_proc_2_input_4_StartId_8;
      MR_Word Ns0_9 = tscc_proc_2_input_5_Ns0_9;
      MR_Word Ns_10;
      MR_bool succeeded;
      MR_Word Node_11;
      MR_Word Ns1_38;
      MR_Box Next_72;
      MR_Word next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_11;
      MR_Box next_value_of_tscc_proc_1_input_2_Store_6;
      MR_Box next_value_of_tscc_proc_1_input_3_NodeId_7;
      MR_Box next_value_of_tscc_proc_1_input_4_StartId_8;
      MR_Word next_value_of_tscc_proc_1_input_5_Ns0_9;

      mdb__declarative_execution__det_trace_node_from_id_3_p_0(TypeClassInfo_for_annotated_trace_84, Store_6, NodeId_7, &Node_11);
      switch (MR_tag((MR_Word) Node_11)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            {
              mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_tree_scalar_common_1[13])));
              return;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Box CallId_44 = (MR_hl_field(MR_mktag(1), Node_11, (MR_Integer) 1));

            succeeded = mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0(TypeClassInfo_for_annotated_trace_84, Store_6, CallId_44);
            if (succeeded)
              Ns1_38 = Ns0_9;
            else
            {
              MR_Word Var_76 = ((MR_Word) (NodeId_7));

              {
                Ns1_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Ns1_38, 0) = ((MR_Box) (Var_76));
                MR_hl_field(MR_mktag(1), Ns1_38, 1) = ((MR_Box) (Ns0_9));
              }
            }
          }
          break;
        case (MR_Integer) 2:
          Ns1_38 = Ns0_9;
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Node_11, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_87 = ((MR_Word) (NodeId_7));

                {
                  Ns1_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Ns1_38, 0) = ((MR_Box) (Var_87));
                  MR_hl_field(MR_mktag(1), Ns1_38, 1) = ((MR_Box) (Ns0_9));
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_78 = ((MR_Word) (NodeId_7));

                {
                  Ns1_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Ns1_38, 0) = ((MR_Box) (Var_78));
                  MR_hl_field(MR_mktag(1), Ns1_38, 1) = ((MR_Box) (Ns0_9));
                }
              }
              break;
            case (MR_Integer) 2:
              Ns1_38 = Ns0_9;
              break;
            case (MR_Integer) 3:
              Ns1_38 = Ns0_9;
              break;
            case (MR_Integer) 4:
              Ns1_38 = Ns0_9;
              break;
            case (MR_Integer) 5:
              {
                MR_Word CondStatus_71 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Node_11, (MR_Integer) 3))) & (MR_Integer) 3);

                switch (CondStatus_71) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      {
                        mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_tree_scalar_common_1[13])));
                        return;
                      }
                    }
                    break;
                  case (MR_Integer) 0:
                  case (MR_Integer) 2:
                    Ns1_38 = Ns0_9;
                    break;
                }
              }
              break;
            case (MR_Integer) 6:
              Ns1_38 = Ns0_9;
              break;
            case (MR_Integer) 7:
              {
                MR_Box Prec_82 = (MR_hl_field(MR_mktag(3), Node_11, (MR_Integer) 1));
                MR_Box NestedStartId_83 = (MR_hl_field(MR_mktag(3), Node_11, (MR_Integer) 2));

                mdb__declarative_tree__stratum_children_5_p_0(TypeClassInfo_for_annotated_trace_84, Store_6, Prec_82, NestedStartId_83, Ns0_9, &Ns1_38);
              }
              break;
            case (MR_Integer) 8:
              {
                {
                  mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_tree_scalar_common_1[13])));
                  return;
                }
              }
              break;
            case (MR_Integer) 9:
              Ns1_38 = Ns0_9;
              break;
            case (MR_Integer) 10:
              {
                MR_Box Prec_39 = (MR_hl_field(MR_mktag(3), Node_11, (MR_Integer) 1));
                MR_Box NestedStartId_40 = (MR_hl_field(MR_mktag(3), Node_11, (MR_Integer) 2));

                mdb__declarative_tree__contour_children_6_p_0(TypeClassInfo_for_annotated_trace_84, (MR_Integer) 0, Store_6, Prec_39, NestedStartId_40, Ns0_9, &Ns1_38);
              }
              break;
          }
          break;
      }
      Next_72 = mdb__declarative_execution__step_in_stratum_2_f_0(TypeClassInfo_for_annotated_trace_84, Store_6, Node_11);
      // direct tailcall eliminated
      ;
      next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_11 = TypeClassInfo_for_annotated_trace_84;
      next_value_of_tscc_proc_1_input_2_Store_6 = Store_6;
      next_value_of_tscc_proc_1_input_3_NodeId_7 = Next_72;
      next_value_of_tscc_proc_1_input_4_StartId_8 = StartId_8;
      next_value_of_tscc_proc_1_input_5_Ns0_9 = Ns1_38;
      tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_11 = next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_11;
      tscc_proc_1_input_2_Store_6 = next_value_of_tscc_proc_1_input_2_Store_6;
      tscc_proc_1_input_3_NodeId_7 = next_value_of_tscc_proc_1_input_3_NodeId_7;
      tscc_proc_1_input_4_StartId_8 = next_value_of_tscc_proc_1_input_4_StartId_8;
      tscc_proc_1_input_5_Ns0_9 = next_value_of_tscc_proc_1_input_5_Ns0_9;
      goto top_of_proc_1;
      tscc_output_1_Ns_10 = Ns_10;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_Ns_10 = tscc_output_1_Ns_10;
    return;
  }
}

static void MR_CALL 
mdb__declarative_tree__stratum_children_2_5_p_0(
  MR_Word tscc_proc_2_input_1_TypeClassInfo_for_annotated_trace_84,
  MR_Box tscc_proc_2_input_2_Store_6,
  MR_Box tscc_proc_2_input_3_NodeId_7,
  MR_Box tscc_proc_2_input_4_StartId_8,
  MR_Word tscc_proc_2_input_5_Ns0_9,
  MR_Word * tscc_output_ptr_1_Ns_10)
{
  {
    MR_Word tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_11;
    MR_Box tscc_proc_1_input_2_Store_6;
    MR_Box tscc_proc_1_input_3_NodeId_7;
    MR_Box tscc_proc_1_input_4_StartId_8;
    MR_Word tscc_proc_1_input_5_Ns0_9;
    MR_Word tscc_output_1_Ns_10;

    // The code for TSCC PROC 2: pred mdb.declarative_tree.stratum_children_2/5-0.
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: pred mdb.declarative_tree.stratum_children/5-0
    ;
    // proc 2 in TSCC: pred mdb.declarative_tree.stratum_children_2/5-0
    ;
    ;
    goto top_of_proc_2;
  top_of_proc_1:;
    {
      MR_Word TypeClassInfo_for_annotated_trace_11 = tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_11;
      MR_Box Store_6 = tscc_proc_1_input_2_Store_6;
      MR_Box NodeId_7 = tscc_proc_1_input_3_NodeId_7;
      MR_Box StartId_8 = tscc_proc_1_input_4_StartId_8;
      MR_Word Ns0_9 = tscc_proc_1_input_5_Ns0_9;
      MR_Word Ns_10;
      MR_bool succeeded;
      MR_Word TypeInfo_13_13;

      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_annotated_trace_11, (MR_Integer) 2, &TypeInfo_13_13);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, NodeId_7, StartId_8);
      if (succeeded)
        Ns_10 = Ns0_9;
      else
      {
        MR_Word next_value_of_tscc_proc_2_input_1_TypeClassInfo_for_annotated_trace_84 = TypeClassInfo_for_annotated_trace_11;
        MR_Box next_value_of_tscc_proc_2_input_2_Store_6 = Store_6;
        MR_Box next_value_of_tscc_proc_2_input_3_NodeId_7 = NodeId_7;
        MR_Box next_value_of_tscc_proc_2_input_4_StartId_8 = StartId_8;
        MR_Word next_value_of_tscc_proc_2_input_5_Ns0_9 = Ns0_9;

        // direct tailcall eliminated
        ;
        tscc_proc_2_input_1_TypeClassInfo_for_annotated_trace_84 = next_value_of_tscc_proc_2_input_1_TypeClassInfo_for_annotated_trace_84;
        tscc_proc_2_input_2_Store_6 = next_value_of_tscc_proc_2_input_2_Store_6;
        tscc_proc_2_input_3_NodeId_7 = next_value_of_tscc_proc_2_input_3_NodeId_7;
        tscc_proc_2_input_4_StartId_8 = next_value_of_tscc_proc_2_input_4_StartId_8;
        tscc_proc_2_input_5_Ns0_9 = next_value_of_tscc_proc_2_input_5_Ns0_9;
        goto top_of_proc_2;
      }
      tscc_output_1_Ns_10 = Ns_10;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word TypeClassInfo_for_annotated_trace_84 = tscc_proc_2_input_1_TypeClassInfo_for_annotated_trace_84;
      MR_Box Store_6 = tscc_proc_2_input_2_Store_6;
      MR_Box NodeId_7 = tscc_proc_2_input_3_NodeId_7;
      MR_Box StartId_8 = tscc_proc_2_input_4_StartId_8;
      MR_Word Ns0_9 = tscc_proc_2_input_5_Ns0_9;
      MR_Word Ns_10;
      MR_bool succeeded;
      MR_Word Node_11;
      MR_Word Ns1_38;
      MR_Box Next_72;
      MR_Word next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_11;
      MR_Box next_value_of_tscc_proc_1_input_2_Store_6;
      MR_Box next_value_of_tscc_proc_1_input_3_NodeId_7;
      MR_Box next_value_of_tscc_proc_1_input_4_StartId_8;
      MR_Word next_value_of_tscc_proc_1_input_5_Ns0_9;

      mdb__declarative_execution__det_trace_node_from_id_3_p_0(TypeClassInfo_for_annotated_trace_84, Store_6, NodeId_7, &Node_11);
      switch (MR_tag((MR_Word) Node_11)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            {
              mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_tree_scalar_common_1[13])));
              return;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Box CallId_44 = (MR_hl_field(MR_mktag(1), Node_11, (MR_Integer) 1));

            succeeded = mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0(TypeClassInfo_for_annotated_trace_84, Store_6, CallId_44);
            if (succeeded)
              Ns1_38 = Ns0_9;
            else
            {
              MR_Word Var_76 = ((MR_Word) (NodeId_7));

              {
                Ns1_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Ns1_38, 0) = ((MR_Box) (Var_76));
                MR_hl_field(MR_mktag(1), Ns1_38, 1) = ((MR_Box) (Ns0_9));
              }
            }
          }
          break;
        case (MR_Integer) 2:
          Ns1_38 = Ns0_9;
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Node_11, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_87 = ((MR_Word) (NodeId_7));

                {
                  Ns1_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Ns1_38, 0) = ((MR_Box) (Var_87));
                  MR_hl_field(MR_mktag(1), Ns1_38, 1) = ((MR_Box) (Ns0_9));
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_78 = ((MR_Word) (NodeId_7));

                {
                  Ns1_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Ns1_38, 0) = ((MR_Box) (Var_78));
                  MR_hl_field(MR_mktag(1), Ns1_38, 1) = ((MR_Box) (Ns0_9));
                }
              }
              break;
            case (MR_Integer) 2:
              Ns1_38 = Ns0_9;
              break;
            case (MR_Integer) 3:
              Ns1_38 = Ns0_9;
              break;
            case (MR_Integer) 4:
              Ns1_38 = Ns0_9;
              break;
            case (MR_Integer) 5:
              {
                MR_Word CondStatus_71 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Node_11, (MR_Integer) 3))) & (MR_Integer) 3);

                switch (CondStatus_71) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      {
                        mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_tree_scalar_common_1[13])));
                        return;
                      }
                    }
                    break;
                  case (MR_Integer) 0:
                  case (MR_Integer) 2:
                    Ns1_38 = Ns0_9;
                    break;
                }
              }
              break;
            case (MR_Integer) 6:
              Ns1_38 = Ns0_9;
              break;
            case (MR_Integer) 7:
              {
                MR_Box Prec_82 = (MR_hl_field(MR_mktag(3), Node_11, (MR_Integer) 1));
                MR_Box NestedStartId_83 = (MR_hl_field(MR_mktag(3), Node_11, (MR_Integer) 2));

                mdb__declarative_tree__stratum_children_5_p_0(TypeClassInfo_for_annotated_trace_84, Store_6, Prec_82, NestedStartId_83, Ns0_9, &Ns1_38);
              }
              break;
            case (MR_Integer) 8:
              {
                {
                  mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_tree_scalar_common_1[13])));
                  return;
                }
              }
              break;
            case (MR_Integer) 9:
              Ns1_38 = Ns0_9;
              break;
            case (MR_Integer) 10:
              {
                MR_Box Prec_39 = (MR_hl_field(MR_mktag(3), Node_11, (MR_Integer) 1));
                MR_Box NestedStartId_40 = (MR_hl_field(MR_mktag(3), Node_11, (MR_Integer) 2));

                mdb__declarative_tree__contour_children_6_p_0(TypeClassInfo_for_annotated_trace_84, (MR_Integer) 0, Store_6, Prec_39, NestedStartId_40, Ns0_9, &Ns1_38);
              }
              break;
          }
          break;
      }
      Next_72 = mdb__declarative_execution__step_in_stratum_2_f_0(TypeClassInfo_for_annotated_trace_84, Store_6, Node_11);
      // direct tailcall eliminated
      ;
      next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_11 = TypeClassInfo_for_annotated_trace_84;
      next_value_of_tscc_proc_1_input_2_Store_6 = Store_6;
      next_value_of_tscc_proc_1_input_3_NodeId_7 = Next_72;
      next_value_of_tscc_proc_1_input_4_StartId_8 = StartId_8;
      next_value_of_tscc_proc_1_input_5_Ns0_9 = Ns1_38;
      tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_11 = next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_11;
      tscc_proc_1_input_2_Store_6 = next_value_of_tscc_proc_1_input_2_Store_6;
      tscc_proc_1_input_3_NodeId_7 = next_value_of_tscc_proc_1_input_3_NodeId_7;
      tscc_proc_1_input_4_StartId_8 = next_value_of_tscc_proc_1_input_4_StartId_8;
      tscc_proc_1_input_5_Ns0_9 = next_value_of_tscc_proc_1_input_5_Ns0_9;
      goto top_of_proc_1;
      tscc_output_1_Ns_10 = Ns_10;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_Ns_10 = tscc_output_1_Ns_10;
    return;
  }
}

static void MR_CALL 
mdb__declarative_tree__contour_children_6_p_0(
  MR_Word tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_13,
  MR_Word tscc_proc_1_input_2_ContourType_7,
  MR_Box tscc_proc_1_input_3_Store_8,
  MR_Box tscc_proc_1_input_4_NodeId_9,
  MR_Box tscc_proc_1_input_5_StartId_10,
  MR_Word tscc_proc_1_input_6_Ns0_11,
  MR_Word * tscc_output_ptr_1_Ns_12)
{
  {
    MR_Word tscc_proc_2_input_1_TypeClassInfo_for_annotated_trace_115;
    MR_Word tscc_proc_2_input_2_ContourType_7;
    MR_Box tscc_proc_2_input_3_Store_8;
    MR_Box tscc_proc_2_input_4_NodeId_9;
    MR_Box tscc_proc_2_input_5_StartId_10;
    MR_Word tscc_proc_2_input_6_Ns0_11;
    MR_Word tscc_output_1_Ns_12;

    // The code for TSCC PROC 1: pred mdb.declarative_tree.contour_children/6-0.
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: pred mdb.declarative_tree.contour_children/6-0
    ;
    // proc 2 in TSCC: pred mdb.declarative_tree.contour_children_2/6-0
    ;
    ;
    goto top_of_proc_1;
  top_of_proc_1:;
    {
      MR_Word TypeClassInfo_for_annotated_trace_13 = tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_13;
      MR_Word ContourType_7 = tscc_proc_1_input_2_ContourType_7;
      MR_Box Store_8 = tscc_proc_1_input_3_Store_8;
      MR_Box NodeId_9 = tscc_proc_1_input_4_NodeId_9;
      MR_Box StartId_10 = tscc_proc_1_input_5_StartId_10;
      MR_Word Ns0_11 = tscc_proc_1_input_6_Ns0_11;
      MR_Word Ns_12;
      MR_bool succeeded;
      MR_Word TypeInfo_15_15;

      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_annotated_trace_13, (MR_Integer) 2, &TypeInfo_15_15);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, NodeId_9, StartId_10);
      if (succeeded)
        Ns_12 = Ns0_11;
      else
      {
        MR_Word next_value_of_tscc_proc_2_input_1_TypeClassInfo_for_annotated_trace_115 = TypeClassInfo_for_annotated_trace_13;
        MR_Word next_value_of_tscc_proc_2_input_2_ContourType_7 = ContourType_7;
        MR_Box next_value_of_tscc_proc_2_input_3_Store_8 = Store_8;
        MR_Box next_value_of_tscc_proc_2_input_4_NodeId_9 = NodeId_9;
        MR_Box next_value_of_tscc_proc_2_input_5_StartId_10 = StartId_10;
        MR_Word next_value_of_tscc_proc_2_input_6_Ns0_11 = Ns0_11;

        // direct tailcall eliminated
        ;
        tscc_proc_2_input_1_TypeClassInfo_for_annotated_trace_115 = next_value_of_tscc_proc_2_input_1_TypeClassInfo_for_annotated_trace_115;
        tscc_proc_2_input_2_ContourType_7 = next_value_of_tscc_proc_2_input_2_ContourType_7;
        tscc_proc_2_input_3_Store_8 = next_value_of_tscc_proc_2_input_3_Store_8;
        tscc_proc_2_input_4_NodeId_9 = next_value_of_tscc_proc_2_input_4_NodeId_9;
        tscc_proc_2_input_5_StartId_10 = next_value_of_tscc_proc_2_input_5_StartId_10;
        tscc_proc_2_input_6_Ns0_11 = next_value_of_tscc_proc_2_input_6_Ns0_11;
        goto top_of_proc_2;
      }
      tscc_output_1_Ns_12 = Ns_12;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word TypeClassInfo_for_annotated_trace_115 = tscc_proc_2_input_1_TypeClassInfo_for_annotated_trace_115;
      MR_Word ContourType_7 = tscc_proc_2_input_2_ContourType_7;
      MR_Box Store_8 = tscc_proc_2_input_3_Store_8;
      MR_Box NodeId_9 = tscc_proc_2_input_4_NodeId_9;
      MR_Box StartId_10 = tscc_proc_2_input_5_StartId_10;
      MR_Word Ns0_11 = tscc_proc_2_input_6_Ns0_11;
      MR_Word Ns_12;
      MR_Word Node_13;
      MR_Word Ns1_32;
      MR_Box Next_72;
      MR_Word next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_13;
      MR_Word next_value_of_tscc_proc_1_input_2_ContourType_7;
      MR_Box next_value_of_tscc_proc_1_input_3_Store_8;
      MR_Box next_value_of_tscc_proc_1_input_4_NodeId_9;
      MR_Box next_value_of_tscc_proc_1_input_5_StartId_10;
      MR_Word next_value_of_tscc_proc_1_input_6_Ns0_11;

      mdb__declarative_execution__det_trace_node_from_id_3_p_0(TypeClassInfo_for_annotated_trace_115, Store_8, NodeId_9, &Node_13);
      switch (MR_tag((MR_Word) Node_13)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            {
              mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_tree_scalar_common_1[12])));
              return;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_83 = ((MR_Word) (NodeId_9));

            {
              Ns1_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Ns1_32, 0) = ((MR_Box) (Var_83));
              MR_hl_field(MR_mktag(1), Ns1_32, 1) = ((MR_Box) (Ns0_11));
            }
          }
          break;
        case (MR_Integer) 2:
          Ns1_32 = Ns0_11;
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Node_13, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Box CallId_34 = (MR_hl_field(MR_mktag(3), Node_13, (MR_Integer) 2));
                MR_Word Call_39;
                MR_Box NestedStartId_40;

                mdb__declarative_execution__call_node_from_id_3_p_0(TypeClassInfo_for_annotated_trace_115, Store_8, CallId_34, &Call_39);
                NestedStartId_40 = (MR_hl_field(MR_mktag(0), Call_39, (MR_Integer) 0));
                mdb__declarative_tree__stratum_children_5_p_0(TypeClassInfo_for_annotated_trace_115, Store_8, NodeId_9, NestedStartId_40, Ns0_11, &Ns1_32);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Box CallId_94 = (MR_hl_field(MR_mktag(3), Node_13, (MR_Integer) 2));

                switch (ContourType_7) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      MR_Word Var_82 = ((MR_Word) (NodeId_9));

                      {
                        Ns1_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Ns1_32, 0) = ((MR_Box) (Var_82));
                        MR_hl_field(MR_mktag(1), Ns1_32, 1) = ((MR_Box) (Ns0_11));
                      }
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      MR_Word Call_90;
                      MR_Box NestedStartId_91;

                      mdb__declarative_execution__call_node_from_id_3_p_0(TypeClassInfo_for_annotated_trace_115, Store_8, CallId_94, &Call_90);
                      NestedStartId_91 = (MR_hl_field(MR_mktag(0), Call_90, (MR_Integer) 0));
                      mdb__declarative_tree__stratum_children_5_p_0(TypeClassInfo_for_annotated_trace_115, Store_8, NodeId_9, NestedStartId_91, Ns0_11, &Ns1_32);
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              Ns1_32 = Ns0_11;
              break;
            case (MR_Integer) 3:
              Ns1_32 = Ns0_11;
              break;
            case (MR_Integer) 4:
              Ns1_32 = Ns0_11;
              break;
            case (MR_Integer) 5:
              {
                MR_Word CondStatus_68 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Node_13, (MR_Integer) 3))) & (MR_Integer) 3);

                switch (CondStatus_68) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      {
                        mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_tree_scalar_common_1[12])));
                        return;
                      }
                    }
                    break;
                  case (MR_Integer) 0:
                  case (MR_Integer) 2:
                    Ns1_32 = Ns0_11;
                    break;
                }
              }
              break;
            case (MR_Integer) 6:
              Ns1_32 = Ns0_11;
              break;
            case (MR_Integer) 7:
              {
                MR_Box NestedStartId_88 = (MR_hl_field(MR_mktag(3), Node_13, (MR_Integer) 2));
                MR_Box Prec_89 = (MR_hl_field(MR_mktag(3), Node_13, (MR_Integer) 1));

                mdb__declarative_tree__stratum_children_5_p_0(TypeClassInfo_for_annotated_trace_115, Store_8, Prec_89, NestedStartId_88, Ns0_11, &Ns1_32);
              }
              break;
            case (MR_Integer) 8:
              {
                MR_Word NegStatus_71 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Node_13, (MR_Integer) 3))) & (MR_Integer) 3);

                switch (ContourType_7) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    switch (NegStatus_71) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 1:
                        {
                          {
                            mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_tree_scalar_common_1[12])));
                            return;
                          }
                        }
                        break;
                      case (MR_Integer) 0:
                      case (MR_Integer) 2:
                        Ns1_32 = Ns0_11;
                        break;
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      {
                        mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_tree_scalar_common_1[12])));
                        return;
                      }
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 9:
              {
                MR_Box NestedStartId_120 = (MR_hl_field(MR_mktag(3), Node_13, (MR_Integer) 2));
                MR_Box Prec_121 = (MR_hl_field(MR_mktag(3), Node_13, (MR_Integer) 1));

                mdb__declarative_tree__stratum_children_5_p_0(TypeClassInfo_for_annotated_trace_115, Store_8, Prec_121, NestedStartId_120, Ns0_11, &Ns1_32);
              }
              break;
            case (MR_Integer) 10:
              {
                MR_Box Prec_41 = (MR_hl_field(MR_mktag(3), Node_13, (MR_Integer) 1));
                MR_Box NestedStartId_87 = (MR_hl_field(MR_mktag(3), Node_13, (MR_Integer) 2));

                mdb__declarative_tree__contour_children_6_p_0(TypeClassInfo_for_annotated_trace_115, ContourType_7, Store_8, Prec_41, NestedStartId_87, Ns0_11, &Ns1_32);
              }
              break;
          }
          break;
      }
      Next_72 = mdb__declarative_execution__step_left_in_contour_2_f_0(TypeClassInfo_for_annotated_trace_115, Store_8, Node_13);
      // direct tailcall eliminated
      ;
      next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_13 = TypeClassInfo_for_annotated_trace_115;
      next_value_of_tscc_proc_1_input_2_ContourType_7 = ContourType_7;
      next_value_of_tscc_proc_1_input_3_Store_8 = Store_8;
      next_value_of_tscc_proc_1_input_4_NodeId_9 = Next_72;
      next_value_of_tscc_proc_1_input_5_StartId_10 = StartId_10;
      next_value_of_tscc_proc_1_input_6_Ns0_11 = Ns1_32;
      tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_13 = next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_13;
      tscc_proc_1_input_2_ContourType_7 = next_value_of_tscc_proc_1_input_2_ContourType_7;
      tscc_proc_1_input_3_Store_8 = next_value_of_tscc_proc_1_input_3_Store_8;
      tscc_proc_1_input_4_NodeId_9 = next_value_of_tscc_proc_1_input_4_NodeId_9;
      tscc_proc_1_input_5_StartId_10 = next_value_of_tscc_proc_1_input_5_StartId_10;
      tscc_proc_1_input_6_Ns0_11 = next_value_of_tscc_proc_1_input_6_Ns0_11;
      goto top_of_proc_1;
      tscc_output_1_Ns_12 = Ns_12;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_Ns_12 = tscc_output_1_Ns_12;
    return;
  }
}

static void MR_CALL 
mdb__declarative_tree__contour_children_2_6_p_0(
  MR_Word tscc_proc_2_input_1_TypeClassInfo_for_annotated_trace_115,
  MR_Word tscc_proc_2_input_2_ContourType_7,
  MR_Box tscc_proc_2_input_3_Store_8,
  MR_Box tscc_proc_2_input_4_NodeId_9,
  MR_Box tscc_proc_2_input_5_StartId_10,
  MR_Word tscc_proc_2_input_6_Ns0_11,
  MR_Word * tscc_output_ptr_1_Ns_12)
{
  {
    MR_Word tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_13;
    MR_Word tscc_proc_1_input_2_ContourType_7;
    MR_Box tscc_proc_1_input_3_Store_8;
    MR_Box tscc_proc_1_input_4_NodeId_9;
    MR_Box tscc_proc_1_input_5_StartId_10;
    MR_Word tscc_proc_1_input_6_Ns0_11;
    MR_Word tscc_output_1_Ns_12;

    // The code for TSCC PROC 2: pred mdb.declarative_tree.contour_children_2/6-0.
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: pred mdb.declarative_tree.contour_children/6-0
    ;
    // proc 2 in TSCC: pred mdb.declarative_tree.contour_children_2/6-0
    ;
    ;
    goto top_of_proc_2;
  top_of_proc_1:;
    {
      MR_Word TypeClassInfo_for_annotated_trace_13 = tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_13;
      MR_Word ContourType_7 = tscc_proc_1_input_2_ContourType_7;
      MR_Box Store_8 = tscc_proc_1_input_3_Store_8;
      MR_Box NodeId_9 = tscc_proc_1_input_4_NodeId_9;
      MR_Box StartId_10 = tscc_proc_1_input_5_StartId_10;
      MR_Word Ns0_11 = tscc_proc_1_input_6_Ns0_11;
      MR_Word Ns_12;
      MR_bool succeeded;
      MR_Word TypeInfo_15_15;

      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_annotated_trace_13, (MR_Integer) 2, &TypeInfo_15_15);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, NodeId_9, StartId_10);
      if (succeeded)
        Ns_12 = Ns0_11;
      else
      {
        MR_Word next_value_of_tscc_proc_2_input_1_TypeClassInfo_for_annotated_trace_115 = TypeClassInfo_for_annotated_trace_13;
        MR_Word next_value_of_tscc_proc_2_input_2_ContourType_7 = ContourType_7;
        MR_Box next_value_of_tscc_proc_2_input_3_Store_8 = Store_8;
        MR_Box next_value_of_tscc_proc_2_input_4_NodeId_9 = NodeId_9;
        MR_Box next_value_of_tscc_proc_2_input_5_StartId_10 = StartId_10;
        MR_Word next_value_of_tscc_proc_2_input_6_Ns0_11 = Ns0_11;

        // direct tailcall eliminated
        ;
        tscc_proc_2_input_1_TypeClassInfo_for_annotated_trace_115 = next_value_of_tscc_proc_2_input_1_TypeClassInfo_for_annotated_trace_115;
        tscc_proc_2_input_2_ContourType_7 = next_value_of_tscc_proc_2_input_2_ContourType_7;
        tscc_proc_2_input_3_Store_8 = next_value_of_tscc_proc_2_input_3_Store_8;
        tscc_proc_2_input_4_NodeId_9 = next_value_of_tscc_proc_2_input_4_NodeId_9;
        tscc_proc_2_input_5_StartId_10 = next_value_of_tscc_proc_2_input_5_StartId_10;
        tscc_proc_2_input_6_Ns0_11 = next_value_of_tscc_proc_2_input_6_Ns0_11;
        goto top_of_proc_2;
      }
      tscc_output_1_Ns_12 = Ns_12;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word TypeClassInfo_for_annotated_trace_115 = tscc_proc_2_input_1_TypeClassInfo_for_annotated_trace_115;
      MR_Word ContourType_7 = tscc_proc_2_input_2_ContourType_7;
      MR_Box Store_8 = tscc_proc_2_input_3_Store_8;
      MR_Box NodeId_9 = tscc_proc_2_input_4_NodeId_9;
      MR_Box StartId_10 = tscc_proc_2_input_5_StartId_10;
      MR_Word Ns0_11 = tscc_proc_2_input_6_Ns0_11;
      MR_Word Ns_12;
      MR_Word Node_13;
      MR_Word Ns1_32;
      MR_Box Next_72;
      MR_Word next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_13;
      MR_Word next_value_of_tscc_proc_1_input_2_ContourType_7;
      MR_Box next_value_of_tscc_proc_1_input_3_Store_8;
      MR_Box next_value_of_tscc_proc_1_input_4_NodeId_9;
      MR_Box next_value_of_tscc_proc_1_input_5_StartId_10;
      MR_Word next_value_of_tscc_proc_1_input_6_Ns0_11;

      mdb__declarative_execution__det_trace_node_from_id_3_p_0(TypeClassInfo_for_annotated_trace_115, Store_8, NodeId_9, &Node_13);
      switch (MR_tag((MR_Word) Node_13)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            {
              mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_tree_scalar_common_1[12])));
              return;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_83 = ((MR_Word) (NodeId_9));

            {
              Ns1_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Ns1_32, 0) = ((MR_Box) (Var_83));
              MR_hl_field(MR_mktag(1), Ns1_32, 1) = ((MR_Box) (Ns0_11));
            }
          }
          break;
        case (MR_Integer) 2:
          Ns1_32 = Ns0_11;
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Node_13, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Box CallId_34 = (MR_hl_field(MR_mktag(3), Node_13, (MR_Integer) 2));
                MR_Word Call_39;
                MR_Box NestedStartId_40;

                mdb__declarative_execution__call_node_from_id_3_p_0(TypeClassInfo_for_annotated_trace_115, Store_8, CallId_34, &Call_39);
                NestedStartId_40 = (MR_hl_field(MR_mktag(0), Call_39, (MR_Integer) 0));
                mdb__declarative_tree__stratum_children_5_p_0(TypeClassInfo_for_annotated_trace_115, Store_8, NodeId_9, NestedStartId_40, Ns0_11, &Ns1_32);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Box CallId_94 = (MR_hl_field(MR_mktag(3), Node_13, (MR_Integer) 2));

                switch (ContourType_7) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      MR_Word Var_82 = ((MR_Word) (NodeId_9));

                      {
                        Ns1_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Ns1_32, 0) = ((MR_Box) (Var_82));
                        MR_hl_field(MR_mktag(1), Ns1_32, 1) = ((MR_Box) (Ns0_11));
                      }
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      MR_Word Call_90;
                      MR_Box NestedStartId_91;

                      mdb__declarative_execution__call_node_from_id_3_p_0(TypeClassInfo_for_annotated_trace_115, Store_8, CallId_94, &Call_90);
                      NestedStartId_91 = (MR_hl_field(MR_mktag(0), Call_90, (MR_Integer) 0));
                      mdb__declarative_tree__stratum_children_5_p_0(TypeClassInfo_for_annotated_trace_115, Store_8, NodeId_9, NestedStartId_91, Ns0_11, &Ns1_32);
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              Ns1_32 = Ns0_11;
              break;
            case (MR_Integer) 3:
              Ns1_32 = Ns0_11;
              break;
            case (MR_Integer) 4:
              Ns1_32 = Ns0_11;
              break;
            case (MR_Integer) 5:
              {
                MR_Word CondStatus_68 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Node_13, (MR_Integer) 3))) & (MR_Integer) 3);

                switch (CondStatus_68) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      {
                        mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_tree_scalar_common_1[12])));
                        return;
                      }
                    }
                    break;
                  case (MR_Integer) 0:
                  case (MR_Integer) 2:
                    Ns1_32 = Ns0_11;
                    break;
                }
              }
              break;
            case (MR_Integer) 6:
              Ns1_32 = Ns0_11;
              break;
            case (MR_Integer) 7:
              {
                MR_Box NestedStartId_88 = (MR_hl_field(MR_mktag(3), Node_13, (MR_Integer) 2));
                MR_Box Prec_89 = (MR_hl_field(MR_mktag(3), Node_13, (MR_Integer) 1));

                mdb__declarative_tree__stratum_children_5_p_0(TypeClassInfo_for_annotated_trace_115, Store_8, Prec_89, NestedStartId_88, Ns0_11, &Ns1_32);
              }
              break;
            case (MR_Integer) 8:
              {
                MR_Word NegStatus_71 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Node_13, (MR_Integer) 3))) & (MR_Integer) 3);

                switch (ContourType_7) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    switch (NegStatus_71) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 1:
                        {
                          {
                            mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_tree_scalar_common_1[12])));
                            return;
                          }
                        }
                        break;
                      case (MR_Integer) 0:
                      case (MR_Integer) 2:
                        Ns1_32 = Ns0_11;
                        break;
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      {
                        mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_tree_scalar_common_1[12])));
                        return;
                      }
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 9:
              {
                MR_Box NestedStartId_120 = (MR_hl_field(MR_mktag(3), Node_13, (MR_Integer) 2));
                MR_Box Prec_121 = (MR_hl_field(MR_mktag(3), Node_13, (MR_Integer) 1));

                mdb__declarative_tree__stratum_children_5_p_0(TypeClassInfo_for_annotated_trace_115, Store_8, Prec_121, NestedStartId_120, Ns0_11, &Ns1_32);
              }
              break;
            case (MR_Integer) 10:
              {
                MR_Box Prec_41 = (MR_hl_field(MR_mktag(3), Node_13, (MR_Integer) 1));
                MR_Box NestedStartId_87 = (MR_hl_field(MR_mktag(3), Node_13, (MR_Integer) 2));

                mdb__declarative_tree__contour_children_6_p_0(TypeClassInfo_for_annotated_trace_115, ContourType_7, Store_8, Prec_41, NestedStartId_87, Ns0_11, &Ns1_32);
              }
              break;
          }
          break;
      }
      Next_72 = mdb__declarative_execution__step_left_in_contour_2_f_0(TypeClassInfo_for_annotated_trace_115, Store_8, Node_13);
      // direct tailcall eliminated
      ;
      next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_13 = TypeClassInfo_for_annotated_trace_115;
      next_value_of_tscc_proc_1_input_2_ContourType_7 = ContourType_7;
      next_value_of_tscc_proc_1_input_3_Store_8 = Store_8;
      next_value_of_tscc_proc_1_input_4_NodeId_9 = Next_72;
      next_value_of_tscc_proc_1_input_5_StartId_10 = StartId_10;
      next_value_of_tscc_proc_1_input_6_Ns0_11 = Ns1_32;
      tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_13 = next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_annotated_trace_13;
      tscc_proc_1_input_2_ContourType_7 = next_value_of_tscc_proc_1_input_2_ContourType_7;
      tscc_proc_1_input_3_Store_8 = next_value_of_tscc_proc_1_input_3_Store_8;
      tscc_proc_1_input_4_NodeId_9 = next_value_of_tscc_proc_1_input_4_NodeId_9;
      tscc_proc_1_input_5_StartId_10 = next_value_of_tscc_proc_1_input_5_StartId_10;
      tscc_proc_1_input_6_Ns0_11 = next_value_of_tscc_proc_1_input_6_Ns0_11;
      goto top_of_proc_1;
      tscc_output_1_Ns_12 = Ns_12;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_Ns_12 = tscc_output_1_Ns_12;
    return;
  }
}

static void MR_CALL 
mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_1(
  void * env_ptr_arg)
{
  {
    struct mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0_s * env_ptr = (struct mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_3(
  void * env_ptr_arg)
{
  {
    struct mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0_s * env_ptr = (struct mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__Arg_7 = ((MR_Word) ((env_ptr)->mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__conv0_Arg_7));
    mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_2(env_ptr);
  }
}

static void MR_CALL 
mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_2(
  void * env_ptr_arg)
{
  {
    struct mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0_s * env_ptr = (struct mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0_s *) (env_ptr_arg);

    {
      MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__Arg_7, (MR_Integer) 2))));
      MR_Word Var_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), (env_ptr)->mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__Arg_7, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Integer Var_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), (env_ptr)->mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__Arg_7, (MR_Integer) 1))));
      MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), (env_ptr)->mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__Arg_7, (MR_Integer) 0)));
      MR_Word Var_10;

      (env_ptr)->mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__succeeded = (Var_11 != (MR_Word) ((MR_Unsigned) 0U));
      if ((env_ptr)->mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__succeeded)
        Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_11, (MR_Integer) 0))));
      (env_ptr)->mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__succeeded = !((env_ptr)->mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__succeeded);
      if ((env_ptr)->mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__succeeded)
        mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_1(env_ptr);
    }
  }
}

static void MR_CALL 
mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_4(
  void * env_ptr_arg)
{
  {
    struct mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0_s * env_ptr = (struct mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__commit_0) == 0)
      {
        {
          mercury__list__member_2_p_1((MR_Word) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0), &(env_ptr)->mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__conv0_Arg_7, (env_ptr)->mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__Args_6, mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_3, env_ptr);
        }
        (env_ptr)->mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__succeeded = MR_TRUE;
  }
}

static MR_bool MR_CALL 
mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0(
  MR_Word TypeClassInfo_for_annotated_trace_21,
  MR_Box Store_3,
  MR_Box CallId_4)
{
  {
    struct mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0_s env;

    {
      MR_Word Call_5;
      MR_Box Var_12;
      MR_Box Var_13;
      MR_Integer Var_14;
      MR_Integer Var_15;
      MR_Word Var_16;
      MR_Word Var_17;
      MR_Box Var_18;
      MR_Integer Var_19;
      MR_Integer Var_20;

      mdb__declarative_execution__call_node_from_id_3_p_0(TypeClassInfo_for_annotated_trace_21, Store_3, CallId_4, &Call_5);
      Var_12 = (MR_hl_field(MR_mktag(0), Call_5, (MR_Integer) 0));
      Var_13 = (MR_hl_field(MR_mktag(0), Call_5, (MR_Integer) 1));
      (env).mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__Args_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Call_5, (MR_Integer) 2))));
      Var_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Call_5, (MR_Integer) 3))));
      Var_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Call_5, (MR_Integer) 4))));
      Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Call_5, (MR_Integer) 5))));
      Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Call_5, (MR_Integer) 6))));
      Var_18 = ((MR_Box) ((MR_hl_field(MR_mktag(0), Call_5, (MR_Integer) 7))));
      Var_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Call_5, (MR_Integer) 8))));
      Var_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Call_5, (MR_Integer) 9))));
      mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_4(&env);
      (env).mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__succeeded = !((env).mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__succeeded);
      return (env).mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__succeeded;
    }
  }
}

static MR_bool MR_CALL 
mdb__declarative_tree__not_at_depth_limit_2_p_0(
  MR_Word TypeClassInfo_for_annotated_trace_16,
  MR_Box Store_3,
  MR_Box Ref_4)
{
  {
    MR_bool succeeded;
    MR_Word CallNode_5;
    MR_Word Var_6;

    mdb__declarative_execution__call_node_from_id_3_p_0(TypeClassInfo_for_annotated_trace_16, Store_3, Ref_4, &CallNode_5);
    Var_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CallNode_5, (MR_Integer) 5))));
    succeeded = (Var_6 == (MR_Word) ((MR_Unsigned) 0U));
    return succeeded;
  }
}

static void MR_CALL 
mdb__declarative_tree__missing_answer_special_case_1_p_0_1(
  void * env_ptr_arg)
{
  {
    struct mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0_s * env_ptr = (struct mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
mdb__declarative_tree__missing_answer_special_case_1_p_0_3(
  void * env_ptr_arg)
{
  {
    struct mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0_s * env_ptr = (struct mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0((env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__StdUtilModule2_5, (env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__Var_19);
    if ((env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__succeeded)
      mdb__declarative_tree__missing_answer_special_case_1_p_0_1(env_ptr);
  }
}

static void MR_CALL 
mdb__declarative_tree__missing_answer_special_case_1_p_0_2(
  void * env_ptr_arg)
{
  {
    struct mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0_s * env_ptr = (struct mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0((env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__StdUtilModule1_4, (env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__Var_18);
    if ((env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__succeeded)
    {
      (env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__Var_16 = (MR_String) "solutions";
      (env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__Var_19 = (MR_Word) (&mdb__declarative_tree_scalar_common_2[0]);
      mdb__declarative_tree__missing_answer_special_case_1_p_0_3(env_ptr);
      {
        (env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__Var_19 = (MR_Word) (MR_mkword(MR_mktag(1), &mdb__declarative_tree_scalar_common_1[11]));
        mdb__declarative_tree__missing_answer_special_case_1_p_0_3(env_ptr);
      }
    }
  }
}

static void MR_CALL 
mdb__declarative_tree__missing_answer_special_case_1_p_0_4(
  void * env_ptr_arg)
{
  {
    struct mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0_s * env_ptr = (struct mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__commit_0) == 0)
      {
        {
          MR_Word ProcLabel_3;
          MR_Box Var_8 = ((MR_Box) ((MR_hl_field(MR_mktag(0), (env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__Atom_2, (MR_Integer) 0))));
          MR_String Var_15;
          MR_Integer Var_21;
          MR_String Var_22;
          MR_Word Var_23;
          MR_Word Var_24;
          MR_Word Var_25;
          MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__Atom_2, (MR_Integer) 1))));
          MR_Integer Var_20;
          MR_Unsigned packed_word_0;

          ProcLabel_3 = mdbcomp__rtti_access__get_proc_label_from_layout_1_f_0(Var_8);
          (env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__succeeded = ((MR_tag((MR_Word) ProcLabel_3)) == (MR_Integer) 0);
          if ((env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__succeeded)
          {
            Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProcLabel_3, (MR_Integer) 0))));
            packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), ProcLabel_3, (MR_Integer) 1)));
            Var_24 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ProcLabel_3, (MR_Integer) 1))) & (MR_Integer) 1);
            Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProcLabel_3, (MR_Integer) 2))));
            Var_22 = ((MR_String) ((MR_hl_field(MR_mktag(0), ProcLabel_3, (MR_Integer) 3))));
            Var_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ProcLabel_3, (MR_Integer) 4))));
            Var_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ProcLabel_3, (MR_Integer) 5))));
            (env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__succeeded = (Var_24 == (MR_Integer) 0);
            if ((env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__succeeded)
            {
              switch (Var_21) {
                default:
                  (env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 4:
                  {
                    (env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__succeeded = (strcmp(Var_22, (MR_String) "builtin_aggregate") == 0);
                    if ((env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__succeeded)
                    {
                      (env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__StdUtilModule1_4 = Var_25;
                      (env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__StdUtilModule2_5 = Var_23;
                      (env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    (env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__succeeded = (strcmp(Var_22, (MR_String) "builtin_aggregate2") == 0);
                    if ((env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__succeeded)
                    {
                      (env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__StdUtilModule1_4 = Var_25;
                      (env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__StdUtilModule2_5 = Var_23;
                      (env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__succeeded = MR_TRUE;
                    }
                  }
                  break;
              }
              if ((env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__succeeded)
              {
                Var_15 = (MR_String) "solutions";
                (env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__Var_18 = (MR_Word) (&mdb__declarative_tree_scalar_common_2[0]);
                mdb__declarative_tree__missing_answer_special_case_1_p_0_2(env_ptr);
                {
                  (env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__Var_18 = (MR_Word) (MR_mkword(MR_mktag(1), &mdb__declarative_tree_scalar_common_1[11]));
                  mdb__declarative_tree__missing_answer_special_case_1_p_0_2(env_ptr);
                }
              }
            }
          }
        }
        (env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__succeeded = MR_TRUE;
  }
}

static MR_bool MR_CALL 
mdb__declarative_tree__missing_answer_special_case_1_p_0(
  MR_Word Atom_2)
{
  {
    struct mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0_s env;

    (env).mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__Atom_2 = Atom_2;
    mdb__declarative_tree__missing_answer_special_case_1_p_0_4(&env);
    return (env).mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__succeeded;
  }
}

static void MR_CALL 
mdb__declarative_tree__trace_weight_9_p_0(
  MR_Word TypeClassInfo_for_annotated_trace_90,
  MR_Word Weighting_10,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Integer PrevWeight_13,
  MR_Integer * Weight_14,
  MR_Word RecordDups_15,
  MR_Integer DupFactor_16,
  MR_Integer PrevDupWeight_17,
  MR_Integer * Excess_18)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Box Store_11 = ((MR_Box) (HeadVar__2_2));
    MR_Box Ref_12 = ((MR_Box) (HeadVar__3_3));
    MR_Word Final_19;
    MR_Box CallId_21;
    MR_Box RedoId_22;
    MR_Integer FinalEvent_24;
    MR_Integer FinalSuspicion_27;
    MR_Word NewRecordDups_28;

    // setup for model_det tailcalls optimized into a loop
    ;
    mdb__declarative_execution__det_trace_node_from_id_3_p_0(TypeClassInfo_for_annotated_trace_90, Store_11, Ref_12, &Final_19);
    switch (MR_tag((MR_Word) Final_19)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 1:
        {
          CallId_21 = (MR_hl_field(MR_mktag(1), Final_19, (MR_Integer) 1));
          RedoId_22 = (MR_hl_field(MR_mktag(1), Final_19, (MR_Integer) 2));
          FinalEvent_24 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Final_19, (MR_Integer) 4))));
          FinalSuspicion_27 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Final_19, (MR_Integer) 7))));
          NewRecordDups_28 = RecordDups_15;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Final_19, (MR_Integer) 0))))) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            {
              CallId_21 = (MR_hl_field(MR_mktag(3), Final_19, (MR_Integer) 2));
              RedoId_22 = (MR_hl_field(MR_mktag(3), Final_19, (MR_Integer) 3));
              FinalEvent_24 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Final_19, (MR_Integer) 4))));
              FinalSuspicion_27 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Final_19, (MR_Integer) 6))));
              NewRecordDups_28 = (MR_Integer) 1;
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 1:
            {
              CallId_21 = (MR_hl_field(MR_mktag(3), Final_19, (MR_Integer) 2));
              RedoId_22 = (MR_hl_field(MR_mktag(3), Final_19, (MR_Integer) 3));
              FinalEvent_24 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Final_19, (MR_Integer) 5))));
              FinalSuspicion_27 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Final_19, (MR_Integer) 7))));
              NewRecordDups_28 = (MR_Integer) 1;
              succeeded = MR_TRUE;
            }
            break;
        }
        break;
    }
    if (succeeded)
    {
      MR_Box ExitId_36;
      MR_Integer RedoEvent_37;
      MR_Integer RedoSuspicion_39;
      MR_Word Redo_34;

      succeeded = mdb__declarative_execution__maybe_redo_node_from_id_3_p_0(TypeClassInfo_for_annotated_trace_90, Store_11, RedoId_22, &Redo_34);
      if (succeeded)
      {
        ExitId_36 = (MR_hl_field(MR_mktag(2), Redo_34, (MR_Integer) 1));
        RedoEvent_37 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), Redo_34, (MR_Integer) 2))));
        RedoSuspicion_39 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), Redo_34, (MR_Integer) 4))));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Integer NewPrevDupWeight_40;
        MR_Integer NewPrevWeight_41;
        MR_Word Var_56;
        MR_Integer Var_57;
        MR_Word next_value_of_HeadVar__3_3;
        MR_Integer next_value_of_PrevWeight_13;
        MR_Word next_value_of_RecordDups_15;
        MR_Integer next_value_of_DupFactor_16;
        MR_Integer next_value_of_PrevDupWeight_17;

        switch (NewRecordDups_28) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              NewPrevDupWeight_40 = (MR_Integer) 0;
              switch (Weighting_10) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Integer Var_52;
                    MR_Integer Var_53 = (MR_Integer) ((MR_Unsigned) PrevWeight_13 + (MR_Unsigned) FinalEvent_24);

                    Var_52 = (MR_Integer) ((MR_Unsigned) Var_53 - (MR_Unsigned) RedoEvent_37);
                    NewPrevWeight_41 = (MR_Integer) ((MR_Unsigned) Var_52 + (MR_Unsigned) (MR_Integer) 1);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Integer Var_51 = (MR_Integer) ((MR_Unsigned) PrevWeight_13 + (MR_Unsigned) FinalSuspicion_27);

                    NewPrevWeight_41 = (MR_Integer) ((MR_Unsigned) Var_51 - (MR_Unsigned) RedoSuspicion_39);
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            switch (Weighting_10) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Integer Var_47;
                  MR_Integer Var_48;
                  MR_Integer Var_49 = (MR_Integer) ((MR_Unsigned) FinalEvent_24 - (MR_Unsigned) RedoEvent_37);
                  MR_Integer Var_92;
                  MR_Integer Var_93;

                  Var_48 = (MR_Integer) ((MR_Unsigned) Var_49 + (MR_Unsigned) (MR_Integer) 1);
                  Var_47 = (MR_Integer) ((MR_Unsigned) DupFactor_16 * (MR_Unsigned) Var_48);
                  NewPrevDupWeight_40 = (MR_Integer) ((MR_Unsigned) PrevDupWeight_17 + (MR_Unsigned) Var_47);
                  Var_93 = (MR_Integer) ((MR_Unsigned) PrevWeight_13 + (MR_Unsigned) FinalEvent_24);
                  Var_92 = (MR_Integer) ((MR_Unsigned) Var_93 - (MR_Unsigned) RedoEvent_37);
                  NewPrevWeight_41 = (MR_Integer) ((MR_Unsigned) Var_92 + (MR_Unsigned) (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer Var_45;
                  MR_Integer Var_46 = (MR_Integer) ((MR_Unsigned) FinalSuspicion_27 - (MR_Unsigned) RedoSuspicion_39);
                  MR_Integer Var_95;

                  Var_45 = (MR_Integer) ((MR_Unsigned) DupFactor_16 * (MR_Unsigned) Var_46);
                  NewPrevDupWeight_40 = (MR_Integer) ((MR_Unsigned) PrevDupWeight_17 + (MR_Unsigned) Var_45);
                  Var_95 = (MR_Integer) ((MR_Unsigned) PrevWeight_13 + (MR_Unsigned) FinalSuspicion_27);
                  NewPrevWeight_41 = (MR_Integer) ((MR_Unsigned) Var_95 - (MR_Unsigned) RedoSuspicion_39);
                }
                break;
            }
            break;
        }
        Var_56 = ((MR_Word) (ExitId_36));
        Var_57 = (MR_Integer) ((MR_Unsigned) DupFactor_16 + (MR_Unsigned) (MR_Integer) 1);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__3_3 = Var_56;
        next_value_of_PrevWeight_13 = NewPrevWeight_41;
        next_value_of_RecordDups_15 = NewRecordDups_28;
        next_value_of_DupFactor_16 = Var_57;
        next_value_of_PrevDupWeight_17 = NewPrevDupWeight_40;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        PrevWeight_13 = next_value_of_PrevWeight_13;
        RecordDups_15 = next_value_of_RecordDups_15;
        DupFactor_16 = next_value_of_DupFactor_16;
        PrevDupWeight_17 = next_value_of_PrevDupWeight_17;
        continue;
      }
      else
      {
        MR_Word Call_42;
        MR_Integer CallEvent_43;
        MR_Integer CallSuspicion_44;

        mdb__declarative_execution__call_node_from_id_3_p_0(TypeClassInfo_for_annotated_trace_90, Store_11, CallId_21, &Call_42);
        CallEvent_43 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Call_42, (MR_Integer) 4))));
        CallSuspicion_44 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Call_42, (MR_Integer) 9))));
        switch (Weighting_10) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer Var_60;
              MR_Integer Var_61 = (MR_Integer) ((MR_Unsigned) PrevWeight_13 + (MR_Unsigned) FinalEvent_24);

              Var_60 = (MR_Integer) ((MR_Unsigned) Var_61 - (MR_Unsigned) CallEvent_43);
              *Weight_14 = (MR_Integer) ((MR_Unsigned) Var_60 + (MR_Unsigned) (MR_Integer) 1);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer Var_59 = (MR_Integer) ((MR_Unsigned) PrevWeight_13 + (MR_Unsigned) FinalSuspicion_27);

              *Weight_14 = (MR_Integer) ((MR_Unsigned) Var_59 - (MR_Unsigned) CallSuspicion_44);
            }
            break;
        }
        switch (NewRecordDups_28) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *Excess_18 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            switch (Weighting_10) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Integer Var_65;
                  MR_Integer Var_66;
                  MR_Integer Var_67 = (MR_Integer) ((MR_Unsigned) FinalEvent_24 - (MR_Unsigned) CallEvent_43);

                  Var_66 = (MR_Integer) ((MR_Unsigned) Var_67 + (MR_Unsigned) (MR_Integer) 1);
                  Var_65 = (MR_Integer) ((MR_Unsigned) DupFactor_16 * (MR_Unsigned) Var_66);
                  *Excess_18 = (MR_Integer) ((MR_Unsigned) PrevDupWeight_17 + (MR_Unsigned) Var_65);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer Var_63;
                  MR_Integer Var_64 = (MR_Integer) ((MR_Unsigned) FinalSuspicion_27 - (MR_Unsigned) CallSuspicion_44);

                  Var_63 = (MR_Integer) ((MR_Unsigned) DupFactor_16 * (MR_Unsigned) Var_64);
                  *Excess_18 = (MR_Integer) ((MR_Unsigned) PrevDupWeight_17 + (MR_Unsigned) Var_63);
                }
                break;
            }
            break;
        }
      }
    }
    else
    {
      {
        mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_tree_scalar_common_1[10])));
        return;
      }
    }
    break;
  }
}

static void MR_CALL 
mdb__declarative_tree__get_answers_4_p_0(
  MR_Word TypeClassInfo_for_annotated_trace_26,
  MR_Box Store_5,
  MR_Box RedoId_6,
  MR_Word DeclAtoms0_7,
  MR_Word * DeclAtoms_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Box ExitId_10;
    MR_Word Var_17;

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = mdb__declarative_execution__maybe_redo_node_from_id_3_p_0(TypeClassInfo_for_annotated_trace_26, Store_5, RedoId_6, &Var_17);
    if (succeeded)
    {
      ExitId_10 = (MR_hl_field(MR_mktag(2), Var_17, (MR_Integer) 1));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word TypeInfo_40_62;
      MR_Word ExitNode_14;
      MR_Box NextId_15;
      MR_Word DeclAtom_16;
      MR_Word Var_18;
      MR_Word ExitAtom_30;
      MR_Box CallId_31;
      MR_Word Call_32;
      MR_Integer CallIoSeq_33;
      MR_Integer ExitIoSeq_34;
      MR_Box next_value_of_RedoId_6;
      MR_Word next_value_of_DeclAtoms0_7;

      mdb__declarative_execution__exit_node_from_id_3_p_0(TypeClassInfo_for_annotated_trace_26, Store_5, ExitId_10, &ExitNode_14);
      NextId_15 = (MR_hl_field(MR_mktag(1), ExitNode_14, (MR_Integer) 2));
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_annotated_trace_26, (MR_Integer) 2, &TypeInfo_40_62);
      ExitAtom_30 = mdb__declarative_execution__get_trace_exit_atom_1_f_0(TypeInfo_40_62, ExitNode_14);
      CallId_31 = (MR_hl_field(MR_mktag(1), ExitNode_14, (MR_Integer) 1));
      mdb__declarative_execution__call_node_from_id_3_p_0(TypeClassInfo_for_annotated_trace_26, Store_5, CallId_31, &Call_32);
      CallIoSeq_33 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Call_32, (MR_Integer) 8))));
      ExitIoSeq_34 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), ExitNode_14, (MR_Integer) 6))));
      succeeded = (CallIoSeq_33 == ExitIoSeq_34);
      if (succeeded)
      {
        {
          DeclAtom_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), DeclAtom_16, 0) = ((MR_Box) (ExitAtom_30));
          MR_hl_field(MR_mktag(0), DeclAtom_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      else
      {
        MR_Word Var_36;
        MR_Word Var_37;

        {
          Var_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_37, 0) = ((MR_Box) (CallIoSeq_33));
          MR_hl_field(MR_mktag(0), Var_37, 1) = ((MR_Box) (ExitIoSeq_34));
        }
        {
          Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (Var_37));
        }
        {
          DeclAtom_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), DeclAtom_16, 0) = ((MR_Box) (ExitAtom_30));
          MR_hl_field(MR_mktag(0), DeclAtom_16, 1) = ((MR_Box) (Var_36));
        }
      }
      {
        Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (DeclAtom_16));
        MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (DeclAtoms0_7));
      }
      // direct tailcall eliminated
      ;
      next_value_of_RedoId_6 = NextId_15;
      next_value_of_DeclAtoms0_7 = Var_18;
      RedoId_6 = next_value_of_RedoId_6;
      DeclAtoms0_7 = next_value_of_DeclAtoms0_7;
      continue;
    }
    else
      *DeclAtoms_8 = DeclAtoms0_7;
    break;
  }
}

static void MR_CALL 
mdb__declarative_tree__get_edt_node_initial_atom_3_p_0(
  MR_Word TypeClassInfo_for_annotated_trace_29,
  MR_Box Store_4,
  MR_Box Ref_5,
  MR_Word * Atom_6)
{
  {
    MR_Word Node_7;

    mdb__declarative_tree__det_edt_return_node_from_id_3_p_0(TypeClassInfo_for_annotated_trace_29, Store_4, Ref_5, &Node_7);
    switch (MR_tag((MR_Word) Node_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word TypeInfo_11_43;
          MR_Box CallId_9 = (MR_hl_field(MR_mktag(1), Node_7, (MR_Integer) 1));
          MR_Word CallNode_40;
          MR_Word CallAtom_41;

          mdb__declarative_execution__call_node_from_id_3_p_0(TypeClassInfo_for_annotated_trace_29, Store_4, CallId_9, &CallNode_40);
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_annotated_trace_29, (MR_Integer) 2, &TypeInfo_11_43);
          CallAtom_41 = mdb__declarative_execution__get_trace_call_atom_1_f_0(TypeInfo_11_43, CallNode_40);
          *Atom_6 = (MR_Word) (CallAtom_41);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Node_7, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word TypeInfo_11_50;
              MR_Box CallId_27 = (MR_hl_field(MR_mktag(3), Node_7, (MR_Integer) 2));
              MR_Word CallNode_47;
              MR_Word CallAtom_48;

              mdb__declarative_execution__call_node_from_id_3_p_0(TypeClassInfo_for_annotated_trace_29, Store_4, CallId_27, &CallNode_47);
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_annotated_trace_29, (MR_Integer) 2, &TypeInfo_11_50);
              CallAtom_48 = mdb__declarative_execution__get_trace_call_atom_1_f_0(TypeInfo_11_50, CallNode_47);
              *Atom_6 = (MR_Word) (CallAtom_48);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word TypeInfo_11_36;
              MR_Box CallId_28 = (MR_hl_field(MR_mktag(3), Node_7, (MR_Integer) 2));
              MR_Word CallNode_33;
              MR_Word CallAtom_34;

              mdb__declarative_execution__call_node_from_id_3_p_0(TypeClassInfo_for_annotated_trace_29, Store_4, CallId_28, &CallNode_33);
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_annotated_trace_29, (MR_Integer) 2, &TypeInfo_11_36);
              CallAtom_34 = mdb__declarative_execution__get_trace_call_atom_1_f_0(TypeInfo_11_36, CallNode_33);
              *Atom_6 = (MR_Word) (CallAtom_34);
            }
            break;
        }
        break;
    }
  }
}

MR_bool MR_CALL 
mdb__declarative_tree__trace_atom_subterm_is_ground_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ArgPos_6,
  MR_Word HeadVar__3_7)
{
  {
    MR_bool succeeded;

    succeeded = mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_97_116_111_109_95_115_117_98_116_101_114_109_95_105_115_95_103_114_111_117_110_100_95_95_91_51_93_95_48_3_p_0(HeadVar__1_1, ArgPos_6);
    return succeeded;
  }
}

MR_bool MR_CALL 
mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_97_116_111_109_95_115_117_98_116_101_114_109_95_105_115_95_103_114_111_117_110_100_95_95_91_51_93_95_48_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ArgPos_6)
{
  {
    MR_bool succeeded;
    MR_Word Args_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgInfo_8;
    MR_Word MaybeArg_11;

    mdb__declarative_execution__select_arg_at_pos_3_p_0(ArgPos_6, Args_5, &ArgInfo_8);
    MaybeArg_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgInfo_8, (MR_Integer) 2))));
    succeeded = (MaybeArg_11 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
    }
    return succeeded;
  }
}

void MR_CALL 
mdb__declarative_tree__edt_subtree_details_5_p_0(
  MR_Word TypeClassInfo_for_annotated_trace_47,
  MR_Box Store_6,
  MR_Word HeadVar__2_2,
  MR_Integer * Event_8,
  MR_Integer * SeqNo_9,
  MR_Box * CallPreceding_10)
{
  {
    MR_Box Ref_7 = ((MR_Box) (HeadVar__2_2));
    MR_Word Node_11;
    MR_Box Call_13;
    MR_Word CallNode_28;

    mdb__declarative_tree__det_edt_return_node_from_id_3_p_0(TypeClassInfo_for_annotated_trace_47, Store_6, Ref_7, &Node_11);
    switch (MR_tag((MR_Word) Node_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          Call_13 = (MR_hl_field(MR_mktag(1), Node_11, (MR_Integer) 1));
          *Event_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Node_11, (MR_Integer) 4))));
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Node_11, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              Call_13 = (MR_hl_field(MR_mktag(3), Node_11, (MR_Integer) 2));
              *Event_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Node_11, (MR_Integer) 4))));
            }
            break;
          case (MR_Integer) 1:
            {
              Call_13 = (MR_hl_field(MR_mktag(3), Node_11, (MR_Integer) 2));
              *Event_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Node_11, (MR_Integer) 5))));
            }
            break;
        }
        break;
    }
    mdb__declarative_execution__call_node_from_id_3_p_0(TypeClassInfo_for_annotated_trace_47, Store_6, Call_13, &CallNode_28);
    *CallPreceding_10 = (MR_hl_field(MR_mktag(0), CallNode_28, (MR_Integer) 0));
    *SeqNo_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), CallNode_28, (MR_Integer) 3))));
  }
}

static void MR_CALL 
mdb__declarative_tree__det_edt_return_node_from_id_3_p_0(
  MR_Word TypeClassInfo_for_annotated_trace_32,
  MR_Box Store_4,
  MR_Box Ref_5,
  MR_Word * Node_6)
{
  {
    MR_bool succeeded;
    MR_Word Node0_7;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_annotated_trace_32, (MR_Integer) 0)), (MR_Integer) 5))));
    MR_Box conv1_Node0_7;

    succeeded = func_0(((MR_Box) (TypeClassInfo_for_annotated_trace_32)), Store_4, Ref_5, &conv1_Node0_7);
    if (succeeded)
    {
      Node0_7 = ((MR_Word) (conv1_Node0_7));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      switch (MR_tag((MR_Word) Node0_7)) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 1:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Node0_7, (MR_Integer) 0))))) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 0:
              succeeded = MR_TRUE;
              break;
            case (MR_Integer) 1:
              succeeded = MR_TRUE;
              break;
          }
          break;
      }
    if (succeeded)
      *Node_6 = Node0_7;
    else
    {
      {
        mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_tree_scalar_common_1[9])));
        return;
      }
    }
  }
}

MR_bool MR_CALL 
mdb__declarative_tree__trace_implicit_tree_info_3_p_0(
  MR_Word TypeClassInfo_for_annotated_trace_19,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * ImplicitTreeInfo_6)
{
  {
    MR_bool succeeded;
    MR_Box Store_4 = ((MR_Box) (HeadVar__1_1));
    MR_Box Ref_5 = ((MR_Box) (HeadVar__2_2));
    MR_Box CallId_7;
    MR_Word CallNode_8;
    MR_Word Var_9;
    MR_Box CallId0_25;
    MR_Word Node0_23;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_annotated_trace_19, (MR_Integer) 0)), (MR_Integer) 5))));
    MR_Box conv1_Node0_23;

    succeeded = func_0(((MR_Box) (TypeClassInfo_for_annotated_trace_19)), Store_4, Ref_5, &conv1_Node0_23);
    if (succeeded)
    {
      Node0_23 = ((MR_Word) (conv1_Node0_23));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      switch (MR_tag((MR_Word) Node0_23)) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 1:
          {
            CallId0_25 = (MR_hl_field(MR_mktag(1), Node0_23, (MR_Integer) 1));
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Node0_23, (MR_Integer) 0))))) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 0:
              {
                CallId0_25 = (MR_hl_field(MR_mktag(3), Node0_23, (MR_Integer) 2));
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 1:
              {
                CallId0_25 = (MR_hl_field(MR_mktag(3), Node0_23, (MR_Integer) 2));
                succeeded = MR_TRUE;
              }
              break;
          }
          break;
      }
    if (succeeded)
      CallId_7 = CallId0_25;
    else
    {
      mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_tree_scalar_common_1[8])));
    }
    mdb__declarative_execution__call_node_from_id_3_p_0(TypeClassInfo_for_annotated_trace_19, Store_4, CallId_7, &CallNode_8);
    Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CallNode_8, (MR_Integer) 5))));
    succeeded = (Var_9 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      *ImplicitTreeInfo_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_9, (MR_Integer) 0))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_tree____Unify____annotated_primitive_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mdb__declarative_tree____Unify____annotated_primitive_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
mdb__declarative_tree____Compare____annotated_primitive_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__declarative_tree____Compare____annotated_primitive_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__declarative_tree____Unify____contour_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdb__declarative_tree____Unify____contour_type_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mdb__declarative_tree____Compare____contour_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__declarative_tree____Compare____contour_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__declarative_tree____Unify____dependency_chain_start_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mdb__declarative_tree____Unify____dependency_chain_start_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
mdb__declarative_tree____Compare____dependency_chain_start_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__declarative_tree____Compare____dependency_chain_start_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__declarative_tree____Unify____edt_node_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mdb__declarative_tree____Unify____edt_node_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
mdb__declarative_tree____Compare____edt_node_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__declarative_tree____Compare____edt_node_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__declarative_tree____Unify____goal_and_path_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdb__declarative_tree____Unify____goal_and_path_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mdb__declarative_tree____Compare____goal_and_path_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__declarative_tree____Compare____goal_and_path_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__declarative_tree____Unify____goal_and_path_list_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdb__declarative_tree____Unify____goal_and_path_list_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mdb__declarative_tree____Compare____goal_and_path_list_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__declarative_tree____Compare____goal_and_path_list_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__declarative_tree____Unify____plain_call_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdb__declarative_tree____Unify____plain_call_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mdb__declarative_tree____Compare____plain_call_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__declarative_tree____Compare____plain_call_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__declarative_tree____Unify____primitive_list_and_var_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mdb__declarative_tree____Unify____primitive_list_and_var_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
mdb__declarative_tree____Compare____primitive_list_and_var_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__declarative_tree____Compare____primitive_list_and_var_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__declarative_tree____Unify____start_loc_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mdb__declarative_tree____Unify____start_loc_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
mdb__declarative_tree____Compare____start_loc_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__declarative_tree____Compare____start_loc_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__declarative_tree____Unify____wrap_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mdb__declarative_tree____Unify____wrap_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
mdb__declarative_tree____Compare____wrap_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__declarative_tree____Compare____wrap_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_question_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_question_3_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 1)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  }
}

static void MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_get_e_bug_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_get_e_bug_3_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 1)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  }
}

static void MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_get_i_bug_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__4_4;

    mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_get_i_bug_4_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 1)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__4_4);
    *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
  }
}

static MR_bool MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_children_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    succeeded = mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_children_3_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 1)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_3);
    if (succeeded)
    {
      *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_parent_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    succeeded = mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_parent_3_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 1)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_3);
    if (succeeded)
    {
      *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_dependency_6_6_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__5_5;
    MR_Word conv0_HeadVar__6_6;

    mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_dependency_6_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 1)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)), &conv1_HeadVar__5_5, &conv0_HeadVar__6_6);
    *wrapper_arg_5 = ((MR_Box) (conv1_HeadVar__5_5));
    *wrapper_arg_6 = ((MR_Box) (conv0_HeadVar__6_6));
  }
}

static void MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_subterm_mode_5_5_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__5_5;

    mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_subterm_mode_5_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 1)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)), &conv0_HeadVar__5_5);
    *wrapper_arg_5 = ((MR_Box) (conv0_HeadVar__5_5));
  }
}

static MR_bool MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_is_implicit_root_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_is_implicit_root_2_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 1)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_same_nodes_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_same_nodes_3_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 1)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_topmost_node_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_topmost_node_2_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 1)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_number_of_events_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv1_HeadVar__3_3;
    MR_Integer conv0_HeadVar__4_4;

    mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_number_of_events_4_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 1)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_HeadVar__3_3, &conv0_HeadVar__4_4);
    *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__3_3));
    *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
  }
}

static void MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_subtree_suspicion_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv1_HeadVar__3_3;
    MR_Integer conv0_HeadVar__4_4;

    mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_subtree_suspicion_4_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 1)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_HeadVar__3_3, &conv0_HeadVar__4_4);
    *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__3_3));
    *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
  }
}

static MR_bool MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_context_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__3_3;
    MR_Word conv0_HeadVar__4_4;

    succeeded = mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_context_4_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 1)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_HeadVar__3_3, &conv0_HeadVar__4_4);
    if (succeeded)
    {
      *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__3_3));
      *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_Box MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_proc_label_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    conv0_HeadVar__3_3 = mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_proc_label_2_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 1)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
    return wrapper_arg_3;
  }
}

static MR_Box MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_arg_pos_to_user_arg_num_3_3_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Box wrapper_arg_4;
    MR_Box closure = closure_arg;
    MR_Integer conv0_HeadVar__4_4;

    conv0_HeadVar__4_4 = mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_arg_pos_to_user_arg_num_3_3_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 1)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
    return wrapper_arg_4;
  }
}

void mercury__mdb__declarative_tree__init(void)
{
}

void mercury__mdb__declarative_tree__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_annotated_primitive_1);
	MR_register_type_ctor_info(&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_contour_type_0);
	MR_register_type_ctor_info(&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_dependency_chain_start_1);
	MR_register_type_ctor_info(&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_edt_node_1);
	MR_register_type_ctor_info(&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_goal_and_path_0);
	MR_register_type_ctor_info(&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_goal_and_path_list_0);
	MR_register_type_ctor_info(&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_plain_call_info_0);
	MR_register_type_ctor_info(&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_primitive_list_and_var_1);
	MR_register_type_ctor_info(&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_start_loc_1);
	MR_register_type_ctor_info(&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_wrap_1);
}

void mercury__mdb__declarative_tree__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__mdb__declarative_tree__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module mdb.declarative_tree.
