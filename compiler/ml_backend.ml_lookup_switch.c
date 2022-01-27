/*
** Automatically generated from `ml_lookup_switch.m'
** by the Mercury compiler,
** version rotd-2014-12-18
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


/* :- module ml_backend.ml_lookup_switch. */
/* :- implementation. */

/*
INIT mercury__ml_backend__ml_lookup_switch__init
ENDINIT
*/

#include "ml_backend.ml_lookup_switch.mih"


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
#include "int.mih"
#include "io.mih"
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
#include "backend_libs.foreign.mih"
#include "backend_libs.rtti.mih"
#include "backend_libs.switch_util.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
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
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "ml_backend.ml_code_util.mih"
#include "ml_backend.ml_gen_info.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.ml_util.mih"
#include "ml_backend.mlds.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 148 "ml_backend.ml_lookup_switch.c"
static const MR_VA_PseudoTypeInfo_Struct2 ml_backend__ml_lookup_switch____vpti_pred_2__plain_hlds__hlds_data__type_ctor_info_cons_tag_0__pseudo_1;

#line 151 "ml_backend.ml_lookup_switch.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_lookup_switch__backend_libs__switch_util__pti_soln_consts_1__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0;

#line 154 "ml_backend.ml_lookup_switch.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_lookup_switch__backend_libs__switch_util__ti_soln_consts_1ml_backend__mlds__type_ctor_info_mlds_rval_0;

#line 157 "ml_backend.ml_lookup_switch.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_lookup_switch__tree234__pti_tree234_2__pseudo_1__plain_backend_libs__switch_util__ti_soln_consts_1ml_backend__mlds__type_ctor_info_mlds_rval_0;

#line 160 "ml_backend.ml_lookup_switch.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_lookup_switch__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0;

#line 163 "ml_backend.ml_lookup_switch.c"
static const MR_FA_PseudoTypeInfo_Struct3 ml_backend__ml_lookup_switch__backend_libs__switch_util__pti_case_consts_3__pseudo_1__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0__plain_unit__type_ctor_info_unit_0;

#line 166 "ml_backend.ml_lookup_switch.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_lookup_switch__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 169 "ml_backend.ml_lookup_switch.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_lookup_switch__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 172 "ml_backend.ml_lookup_switch.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_lookup_switch__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_type_0;

#line 175 "ml_backend.ml_lookup_switch.c"
static const MR_PseudoTypeInfo ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__field_types_ml_lookup_switch_info_1_0[3];

#line 178 "ml_backend.ml_lookup_switch.c"
static const MR_ConstString ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__field_names_ml_lookup_switch_info_1_0[3];

#line 181 "ml_backend.ml_lookup_switch.c"
static const MR_DuFunctorDesc ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_functor_desc_ml_lookup_switch_info_1_0;

#line 184 "ml_backend.ml_lookup_switch.c"
static const MR_DuFunctorDescPtr ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_stag_ordered_ml_lookup_switch_info_1_0[1];

#line 187 "ml_backend.ml_lookup_switch.c"
static const MR_DuPtagLayout ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_ptag_ordered_ml_lookup_switch_info_1[1];

#line 190 "ml_backend.ml_lookup_switch.c"
static const MR_DuFunctorDescPtr ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_name_ordered_ml_lookup_switch_info_1[1];

#line 193 "ml_backend.ml_lookup_switch.c"
static const MR_Integer ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__functor_number_map_ml_lookup_switch_info_1[1];

#line 196 "ml_backend.ml_lookup_switch.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_lookup_switch__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_defn_0;

#line 199 "ml_backend.ml_lookup_switch.c"
static const MR_PseudoTypeInfo ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__field_types_ml_several_soln_lookup_vars_0_0[6];

#line 202 "ml_backend.ml_lookup_switch.c"
static const MR_ConstString ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__field_names_ml_several_soln_lookup_vars_0_0[6];

#line 205 "ml_backend.ml_lookup_switch.c"
static const MR_DuFunctorDesc ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_functor_desc_ml_several_soln_lookup_vars_0_0;

#line 208 "ml_backend.ml_lookup_switch.c"
static const MR_DuFunctorDescPtr ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_stag_ordered_ml_several_soln_lookup_vars_0_0[1];

#line 211 "ml_backend.ml_lookup_switch.c"
static const MR_DuPtagLayout ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_ptag_ordered_ml_several_soln_lookup_vars_0[1];

#line 214 "ml_backend.ml_lookup_switch.c"
static const MR_DuFunctorDescPtr ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_name_ordered_ml_several_soln_lookup_vars_0[1];

#line 217 "ml_backend.ml_lookup_switch.c"
static const MR_Integer ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__functor_number_map_ml_several_soln_lookup_vars_0[1];

#line 220 "ml_backend.ml_lookup_switch.c"
static MR_bool MR_CALL 
ml_backend__ml_lookup_switch____Unify____ml_lookup_switch_info_1_0_10001(
#line 223 "ml_backend.ml_lookup_switch.c"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1,
#line 225 "ml_backend.ml_lookup_switch.c"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_2,
#line 227 "ml_backend.ml_lookup_switch.c"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_3);

#line 230 "ml_backend.ml_lookup_switch.c"
static void MR_CALL 
ml_backend__ml_lookup_switch____Compare____ml_lookup_switch_info_1_0_10001(
#line 233 "ml_backend.ml_lookup_switch.c"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1,
#line 235 "ml_backend.ml_lookup_switch.c"
  MR_Box * ml_backend__ml_lookup_switch__wrapper_arg_2,
#line 237 "ml_backend.ml_lookup_switch.c"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_3,
#line 239 "ml_backend.ml_lookup_switch.c"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_4);

#line 242 "ml_backend.ml_lookup_switch.c"
static MR_bool MR_CALL 
ml_backend__ml_lookup_switch____Unify____ml_several_soln_lookup_vars_0_0_10001(
#line 245 "ml_backend.ml_lookup_switch.c"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1,
#line 247 "ml_backend.ml_lookup_switch.c"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_2);

#line 250 "ml_backend.ml_lookup_switch.c"
static void MR_CALL 
ml_backend__ml_lookup_switch____Compare____ml_several_soln_lookup_vars_0_0_10001(
#line 253 "ml_backend.ml_lookup_switch.c"
  MR_Box * ml_backend__ml_lookup_switch__wrapper_arg_1,
#line 255 "ml_backend.ml_lookup_switch.c"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_2,
#line 257 "ml_backend.ml_lookup_switch.c"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_3);

#line 702 "ml_lookup_switch.m"
static MR_Box MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_109_111_100_101_108_95_110_111_110_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_14_p_0_3(
#line 702 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg,
#line 702 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1);

#line 689 "ml_lookup_switch.m"
static MR_Box MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_109_111_100_101_108_95_110_111_110_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_14_p_0_2(
#line 689 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg,
#line 689 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1);

#line 677 "ml_lookup_switch.m"
static MR_Box MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_109_111_100_101_108_95_110_111_110_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_14_p_0_1(
#line 677 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg,
#line 677 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1);

#line 639 "ml_lookup_switch.m"
static void MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_109_111_100_101_108_95_110_111_110_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_14_p_0(
#line 639 "ml_lookup_switch.m"
  MR_Integer ml_backend__ml_lookup_switch__CurIndex_2,
#line 639 "ml_lookup_switch.m"
  MR_Integer ml_backend__ml_lookup_switch__EndVal_3,
#line 639 "ml_lookup_switch.m"
  MR_Integer ml_backend__ml_lookup_switch__STATE_VARIABLE_NextLaterSolnRow_0_4,
#line 639 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__5_5,
#line 639 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__FirstSolnStructType_6,
#line 639 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__LaterSolnStructType_7,
#line 639 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__FieldTypes_8,
#line 639 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_0_9,
#line 639 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_10,
#line 639 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_0_11,
#line 639 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_12,
#line 639 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_HadDummyRows_0_13,
#line 639 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_HadDummyRows_14);

#line 634 "ml_lookup_switch.m"
static MR_Box MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_115_105_109_112_108_101_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_6_p_0_2(
#line 634 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg,
#line 634 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1);

#line 628 "ml_lookup_switch.m"
static MR_Box MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_115_105_109_112_108_101_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_6_p_0_1(
#line 628 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg,
#line 628 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1);

#line 619 "ml_lookup_switch.m"
static void MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_115_105_109_112_108_101_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_6_p_0(
#line 619 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__StructType_2,
#line 619 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__FieldTypes_3,
#line 619 "ml_lookup_switch.m"
  MR_Integer ml_backend__ml_lookup_switch__CurIndex_4,
#line 619 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__5_5,
#line 619 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__HeadVar__6_6);

#line 583 "ml_lookup_switch.m"
static void MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_101_114_97_116_101_95_98_105_116_95_118_101_99_95_50_95_95_91_49_93_95_48_5_p_0(
#line 583 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__1_1,
#line 583 "ml_lookup_switch.m"
  MR_Integer ml_backend__ml_lookup_switch__Start_2,
#line 583 "ml_lookup_switch.m"
  MR_Integer ml_backend__ml_lookup_switch__WordBits_3,
#line 583 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_BitMap_0_4,
#line 583 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_BitMap_5);

#line 517 "ml_lookup_switch.m"
static void MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_101_114_97_116_101_95_98_105_116_118_101_99_95_116_101_115_116_95_95_91_49_44_32_55_93_95_48_9_p_0(
#line 517 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__MLDS_ModuleName_10,
#line 517 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__Context_11,
#line 517 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__IndexRval_12,
#line 517 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__CaseVals_13,
#line 517 "ml_lookup_switch.m"
  MR_Integer ml_backend__ml_lookup_switch__Start_14,
#line 517 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__CheckRval_16,
#line 517 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_30,
#line 517 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_31);

#line 179 "ml_lookup_switch.m"
static void MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_97_110_116_115_95_102_111_114_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_51_93_95_48_9_p_0_2(
#line 179 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg,
#line 179 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1,
#line 179 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_2,
#line 179 "ml_lookup_switch.m"
  MR_Box * ml_backend__ml_lookup_switch__wrapper_arg_3);

#line 170 "ml_lookup_switch.m"
static void MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_97_110_116_115_95_102_111_114_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_51_93_95_48_9_p_0_1(
#line 170 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg,
#line 170 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1,
#line 170 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_2,
#line 170 "ml_lookup_switch.m"
  MR_Box * ml_backend__ml_lookup_switch__wrapper_arg_3);

#line 141 "ml_lookup_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_97_110_116_115_95_102_111_114_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_51_93_95_48_9_p_0(
#line 141 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__TypeInfo_for_T_57,
#line 141 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__1_1,
#line 141 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__3_3,
#line 141 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__4_4,
#line 141 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__5_5,
#line 141 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_IndexMap_0_6,
#line 141 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_IndexMap_7,
#line 141 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_8,
#line 141 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_9);

#line 138 "ml_lookup_switch.m"
static MR_Box MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_105_115_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_54_93_95_48_8_p_0_1(
#line 138 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg,
#line 138 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1);

#line 441 "ml_lookup_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__IntroducedFrom__pred__ml_gen_several_soln_lookup_switch__441__1_2_p_0(
#line 441 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HadDummyRows_57,
#line 441 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__2_124);

#line 434 "ml_lookup_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__IntroducedFrom__pred__ml_gen_several_soln_lookup_switch__434__1_2_p_0(
#line 434 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HadDummyRows_57,
#line 434 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__2_138);

#line 273 "ml_lookup_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__IntroducedFrom__pred__ml_gen_simple_lookup_switch__273__1_2_p_0(
#line 273 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__NeedBitVecCheck_22,
#line 273 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__2_86);

#line 271 "ml_lookup_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__IntroducedFrom__pred__ml_gen_simple_lookup_switch__271__1_2_p_0(
#line 271 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__NeedRangeCheck_23,
#line 271 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__2_81);

#line 218 "ml_lookup_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__IntroducedFrom__pred__ml_gen_lookup_switch__218__1_2_p_0(
#line 218 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__CodeModel_14,
#line 218 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__2_40);

#line 728 "ml_lookup_switch.m"
static MR_Box MR_CALL 
ml_backend__ml_lookup_switch__make_dummy_first_soln_row_4_p_0_2(
#line 728 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg,
#line 728 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1);

#line 727 "ml_lookup_switch.m"
static MR_Box MR_CALL 
ml_backend__ml_lookup_switch__make_dummy_first_soln_row_4_p_0_1(
#line 727 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg,
#line 727 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1);

#line 722 "ml_lookup_switch.m"
static void MR_CALL 
ml_backend__ml_lookup_switch__make_dummy_first_soln_row_4_p_0(
#line 722 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__FirstSolnStructType_5,
#line 722 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__FieldTypes_6,
#line 722 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_0_14,
#line 722 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_15);

#line 599 "ml_lookup_switch.m"
static void MR_CALL 
ml_backend__ml_lookup_switch__ml_generate_bit_vec_initializers_4_p_0(
#line 599 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__1_1,
#line 599 "ml_lookup_switch.m"
  MR_Integer ml_backend__ml_lookup_switch__Count_2,
#line 599 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__HeadVar__3_3,
#line 599 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__HeadVar__4_4);

#line 441 "ml_lookup_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__ml_gen_several_soln_lookup_switch_12_p_0_2(
#line 441 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg);

#line 434 "ml_lookup_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__ml_gen_several_soln_lookup_switch_12_p_0_1(
#line 434 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg);

#line 338 "ml_lookup_switch.m"
static void MR_CALL 
ml_backend__ml_lookup_switch__ml_gen_several_soln_lookup_switch_12_p_0(
#line 338 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__IndexRval_13,
#line 338 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__OutVars_14,
#line 338 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__OutTypes_15,
#line 338 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__CaseSolns_16,
#line 338 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__Context_17,
#line 338 "ml_lookup_switch.m"
  MR_Integer ml_backend__ml_lookup_switch__StartVal_18,
#line 338 "ml_lookup_switch.m"
  MR_Integer ml_backend__ml_lookup_switch__EndVal_19,
#line 338 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__NeedBitVecCheck_20,
#line 338 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__NeedRangeCheck_21,
#line 338 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__Statement_22,
#line 338 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_86,
#line 338 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_87);

#line 273 "ml_lookup_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__ml_gen_simple_lookup_switch_13_p_0_2(
#line 273 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg);

#line 271 "ml_lookup_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__ml_gen_simple_lookup_switch_13_p_0_1(
#line 271 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg);

#line 227 "ml_lookup_switch.m"
static void MR_CALL 
ml_backend__ml_lookup_switch__ml_gen_simple_lookup_switch_13_p_0(
#line 227 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__IndexRval_14,
#line 227 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__OutVars_15,
#line 227 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__OutTypes_16,
#line 227 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__CaseValues_17,
#line 227 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__CodeModel_18,
#line 227 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__Context_19,
#line 227 "ml_lookup_switch.m"
  MR_Integer ml_backend__ml_lookup_switch__StartVal_20,
#line 227 "ml_lookup_switch.m"
  MR_Integer ml_backend__ml_lookup_switch__EndVal_21,
#line 227 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__NeedBitVecCheck_22,
#line 227 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__NeedRangeCheck_23,
#line 227 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__Statement_24,
#line 227 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_52,
#line 227 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_53);

#line 185 "ml_lookup_switch.m"
static void MR_CALL 
ml_backend__ml_lookup_switch__ml_record_lookup_for_tagged_cons_id_5_p_0(
#line 185 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__TypeInfo_for_T_16,
#line 185 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__GetTag_6,
#line 185 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__SolnConsts_7,
#line 185 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__TaggedConsId_8,
#line 185 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_IndexMap_0_13,
#line 185 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_IndexMap_14);

#line 717 "ml_lookup_switch.m"
static MR_Box MR_CALL 
ml_backend__ml_lookup_switch__ml_construct_later_soln_row_2_f_0_1(
#line 717 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg,
#line 717 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1);

#line 218 "ml_lookup_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__ml_gen_lookup_switch_11_p_0_1(
#line 218 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg);


static /* final */ const MR_Box ml_backend__ml_lookup_switch_scalar_common_1[15][2];

static /* final */ const MR_Box ml_backend__ml_lookup_switch_scalar_common_2[6][5];

static /* final */ const MR_Box ml_backend__ml_lookup_switch_scalar_common_3[4][1];

static /* final */ const MR_Box ml_backend__ml_lookup_switch_scalar_common_4[7][3];

static /* final */ const MR_Float ml_backend__ml_lookup_switch_scalar_common_5[1];

static /* final */ const MR_Box ml_backend__ml_lookup_switch_scalar_common_6[2][6];

static /* final */ const MR_Integer ml_backend__ml_lookup_switch_scalar_common_7[1][2];

static /* final */ const MR_Box ml_backend__ml_lookup_switch_scalar_common_8[1][9];




static /* final */ const MR_Box ml_backend__ml_lookup_switch_scalar_common_1[15][2] = {
  /* row 0 */
  {
    ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_soln_consts_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_1[2]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_lookup_switch_scalar_common_3[0])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[8])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    (MR_Box) &ml_backend__ml_lookup_switch_scalar_common_5[0]
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[10])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_lookup_switch_scalar_common_3[1])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))))
  },
};

static /* final */ const MR_Box ml_backend__ml_lookup_switch_scalar_common_2[6][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__code_model__hlds__code_model__type_ctor_info_code_model_0)),
    ((MR_Box) (&hlds__code_model__hlds__code_model__type_ctor_info_code_model_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_need_range_check_0)),
    ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_need_range_check_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_need_bit_vec_check_0)),
    ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_need_bit_vec_check_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_lookup_switch_scalar_common_3[4][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 3 */
  {
    ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_3[2]))
  },
};

static /* final */ const MR_Box ml_backend__ml_lookup_switch_scalar_common_4[7][3] = {
  /* row 0 */
  {
    ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_2[1])),
    ((MR_Box) (ml_backend__ml_lookup_switch__ml_construct_later_soln_row_2_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_2[5])),
    ((MR_Box) (ml_backend__ml_lookup_switch__make_dummy_first_soln_row_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_2[1])),
    ((MR_Box) (ml_backend__ml_lookup_switch__make_dummy_first_soln_row_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_2[5])),
    ((MR_Box) (ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_115_105_109_112_108_101_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_2[1])),
    ((MR_Box) (ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_115_105_109_112_108_101_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_2[1])),
    ((MR_Box) (ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_109_111_100_101_108_95_110_111_110_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_14_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_2[1])),
    ((MR_Box) (ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_109_111_100_101_108_95_110_111_110_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_14_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Float ml_backend__ml_lookup_switch_scalar_common_5[1] = {
  /* row 0 */
  (MR_Float) 0.0000000000000000,
};

static /* final */ const MR_Box ml_backend__ml_lookup_switch_scalar_common_6[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&ml_backend__ml_lookup_switch__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0))
  },
};

static /* final */ const MR_Integer ml_backend__ml_lookup_switch_scalar_common_7[1][2] = {
  /* row 0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
};

static /* final */ const MR_Box ml_backend__ml_lookup_switch_scalar_common_8[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_7[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&ml_backend__ml_lookup_switch____vpti_pred_2__plain_hlds__hlds_data__type_ctor_info_cons_tag_0__pseudo_1)),
    ((MR_Box) (&ml_backend__ml_lookup_switch__backend_libs__switch_util__pti_soln_consts_1__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0)),
    ((MR_Box) (&ml_backend__ml_lookup_switch__tree234__pti_tree234_2__pseudo_1__plain_backend_libs__switch_util__ti_soln_consts_1ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&ml_backend__ml_lookup_switch__tree234__pti_tree234_2__pseudo_1__plain_backend_libs__switch_util__ti_soln_consts_1ml_backend__mlds__type_ctor_info_mlds_rval_0))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 903 "ml_backend.ml_lookup_switch.c"
static const MR_VA_PseudoTypeInfo_Struct2 ml_backend__ml_lookup_switch____vpti_pred_2__plain_hlds__hlds_data__type_ctor_info_cons_tag_0__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0,
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 913 "ml_backend.ml_lookup_switch.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_lookup_switch__backend_libs__switch_util__pti_soln_consts_1__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0 = {
  &backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_soln_consts_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0
  }
};

#line 921 "ml_backend.ml_lookup_switch.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_lookup_switch__backend_libs__switch_util__ti_soln_consts_1ml_backend__mlds__type_ctor_info_mlds_rval_0 = {
  &backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_soln_consts_1,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0
  }
};

#line 929 "ml_backend.ml_lookup_switch.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_lookup_switch__tree234__pti_tree234_2__pseudo_1__plain_backend_libs__switch_util__ti_soln_consts_1ml_backend__mlds__type_ctor_info_mlds_rval_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &ml_backend__ml_lookup_switch__backend_libs__switch_util__ti_soln_consts_1ml_backend__mlds__type_ctor_info_mlds_rval_0
  }
};

#line 938 "ml_backend.ml_lookup_switch.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_lookup_switch__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0
  }
};

#line 946 "ml_backend.ml_lookup_switch.c"
static const MR_FA_PseudoTypeInfo_Struct3 ml_backend__ml_lookup_switch__backend_libs__switch_util__pti_case_consts_3__pseudo_1__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0__plain_unit__type_ctor_info_unit_0 = {
  &backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_case_consts_3,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0,
    (MR_PseudoTypeInfo) &mercury__unit__unit__type_ctor_info_unit_0
  }
};

#line 956 "ml_backend.ml_lookup_switch.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_lookup_switch__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 964 "ml_backend.ml_lookup_switch.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_lookup_switch__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ml_backend__ml_lookup_switch__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 972 "ml_backend.ml_lookup_switch.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_lookup_switch__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0
  }
};

#line 980 "ml_backend.ml_lookup_switch.c"
static const MR_PseudoTypeInfo ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__field_types_ml_lookup_switch_info_1_0[3] = {
  (MR_PseudoTypeInfo) &ml_backend__ml_lookup_switch__backend_libs__switch_util__pti_case_consts_3__pseudo_1__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0__plain_unit__type_ctor_info_unit_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_lookup_switch__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_lookup_switch__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_type_0
};

#line 987 "ml_backend.ml_lookup_switch.c"
static const MR_ConstString ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__field_names_ml_lookup_switch_info_1_0[3] = {
  (MR_String) "mllsi_cases",
  (MR_String) "mllsi_out_variables",
  (MR_String) "mllsi_out_types"
};

#line 994 "ml_backend.ml_lookup_switch.c"
static const MR_DuFunctorDesc ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_functor_desc_ml_lookup_switch_info_1_0 = {
  (MR_String) "ml_lookup_switch_info",
  (MR_Integer) 3,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__field_types_ml_lookup_switch_info_1_0,
  ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__field_names_ml_lookup_switch_info_1_0,
  NULL,
  NULL
};

#line 1009 "ml_backend.ml_lookup_switch.c"
static const MR_DuFunctorDescPtr ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_stag_ordered_ml_lookup_switch_info_1_0[1] = {
  &ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_functor_desc_ml_lookup_switch_info_1_0
};

#line 1014 "ml_backend.ml_lookup_switch.c"
static const MR_DuPtagLayout ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_ptag_ordered_ml_lookup_switch_info_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_stag_ordered_ml_lookup_switch_info_1_0
  }
};

#line 1023 "ml_backend.ml_lookup_switch.c"
static const MR_DuFunctorDescPtr ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_name_ordered_ml_lookup_switch_info_1[1] = {
  &ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_functor_desc_ml_lookup_switch_info_1_0
};

#line 1028 "ml_backend.ml_lookup_switch.c"
static const MR_Integer ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__functor_number_map_ml_lookup_switch_info_1[1] = {
  (MR_Integer) 0
};

#line 1033 "ml_backend.ml_lookup_switch.c"
const MR_TypeCtorInfo_Struct ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__type_ctor_info_ml_lookup_switch_info_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_lookup_switch____Unify____ml_lookup_switch_info_1_0_10001)),
  ((MR_Box) (ml_backend__ml_lookup_switch____Compare____ml_lookup_switch_info_1_0_10001)),
  (MR_String) "ml_backend.ml_lookup_switch",
  (MR_String) "ml_lookup_switch_info",
  {
    ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_name_ordered_ml_lookup_switch_info_1
  },
  {
    ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_ptag_ordered_ml_lookup_switch_info_1
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__functor_number_map_ml_lookup_switch_info_1
};

#line 1054 "ml_backend.ml_lookup_switch.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_lookup_switch__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0
  }
};

#line 1062 "ml_backend.ml_lookup_switch.c"
static const MR_PseudoTypeInfo ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__field_types_ml_several_soln_lookup_vars_0_0[6] = {
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_lookup_switch__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_defn_0
};

#line 1072 "ml_backend.ml_lookup_switch.c"
static const MR_ConstString ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__field_names_ml_several_soln_lookup_vars_0_0[6] = {
  (MR_String) "msslv_num_later_solns_var",
  (MR_String) "msslv_later_slot_var",
  (MR_String) "msslv_limit_var",
  (MR_String) "msslv_limit_assign_statement",
  (MR_String) "msslv_incr_later_slot_statement",
  (MR_String) "msslv_denfs"
};

#line 1082 "ml_backend.ml_lookup_switch.c"
static const MR_DuFunctorDesc ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_functor_desc_ml_several_soln_lookup_vars_0_0 = {
  (MR_String) "ml_several_soln_lookup_vars",
  (MR_Integer) 6,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__field_types_ml_several_soln_lookup_vars_0_0,
  ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__field_names_ml_several_soln_lookup_vars_0_0,
  NULL,
  NULL
};

#line 1097 "ml_backend.ml_lookup_switch.c"
static const MR_DuFunctorDescPtr ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_stag_ordered_ml_several_soln_lookup_vars_0_0[1] = {
  &ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_functor_desc_ml_several_soln_lookup_vars_0_0
};

#line 1102 "ml_backend.ml_lookup_switch.c"
static const MR_DuPtagLayout ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_ptag_ordered_ml_several_soln_lookup_vars_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_stag_ordered_ml_several_soln_lookup_vars_0_0
  }
};

#line 1111 "ml_backend.ml_lookup_switch.c"
static const MR_DuFunctorDescPtr ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_name_ordered_ml_several_soln_lookup_vars_0[1] = {
  &ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_functor_desc_ml_several_soln_lookup_vars_0_0
};

#line 1116 "ml_backend.ml_lookup_switch.c"
static const MR_Integer ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__functor_number_map_ml_several_soln_lookup_vars_0[1] = {
  (MR_Integer) 0
};

#line 1121 "ml_backend.ml_lookup_switch.c"
const MR_TypeCtorInfo_Struct ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__type_ctor_info_ml_several_soln_lookup_vars_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_lookup_switch____Unify____ml_several_soln_lookup_vars_0_0_10001)),
  ((MR_Box) (ml_backend__ml_lookup_switch____Compare____ml_several_soln_lookup_vars_0_0_10001)),
  (MR_String) "ml_backend.ml_lookup_switch",
  (MR_String) "ml_several_soln_lookup_vars",
  {
    ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_name_ordered_ml_several_soln_lookup_vars_0
  },
  {
    ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_ptag_ordered_ml_several_soln_lookup_vars_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__functor_number_map_ml_several_soln_lookup_vars_0
};

#line 1142 "ml_backend.ml_lookup_switch.c"
static MR_bool MR_CALL 
ml_backend__ml_lookup_switch____Unify____ml_lookup_switch_info_1_0_10001(
#line 1145 "ml_backend.ml_lookup_switch.c"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1,
#line 1147 "ml_backend.ml_lookup_switch.c"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_2,
#line 1149 "ml_backend.ml_lookup_switch.c"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_3)
#line 1151 "ml_backend.ml_lookup_switch.c"
{
#line 1153 "ml_backend.ml_lookup_switch.c"
  {
#line 1155 "ml_backend.ml_lookup_switch.c"
    MR_bool ml_backend__ml_lookup_switch__succeeded;

#line 1158 "ml_backend.ml_lookup_switch.c"
    {
#line 1160 "ml_backend.ml_lookup_switch.c"
      ml_backend__ml_lookup_switch__succeeded = ml_backend__ml_lookup_switch____Unify____ml_lookup_switch_info_1_0(((MR_Word) ml_backend__ml_lookup_switch__wrapper_arg_1), ((MR_Word) ml_backend__ml_lookup_switch__wrapper_arg_2), ((MR_Word) ml_backend__ml_lookup_switch__wrapper_arg_3));
    }
#line 1163 "ml_backend.ml_lookup_switch.c"
    return ml_backend__ml_lookup_switch__succeeded;
#line 1165 "ml_backend.ml_lookup_switch.c"
  }
#line 1167 "ml_backend.ml_lookup_switch.c"
}

#line 1170 "ml_backend.ml_lookup_switch.c"
static void MR_CALL 
ml_backend__ml_lookup_switch____Compare____ml_lookup_switch_info_1_0_10001(
#line 1173 "ml_backend.ml_lookup_switch.c"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1,
#line 1175 "ml_backend.ml_lookup_switch.c"
  MR_Box * ml_backend__ml_lookup_switch__wrapper_arg_2,
#line 1177 "ml_backend.ml_lookup_switch.c"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_3,
#line 1179 "ml_backend.ml_lookup_switch.c"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_4)
#line 1181 "ml_backend.ml_lookup_switch.c"
{
#line 1183 "ml_backend.ml_lookup_switch.c"
  {
#line 1185 "ml_backend.ml_lookup_switch.c"
    MR_Word ml_backend__ml_lookup_switch__conv0_HeadVar__1_1;

#line 1188 "ml_backend.ml_lookup_switch.c"
    {
#line 1190 "ml_backend.ml_lookup_switch.c"
      ml_backend__ml_lookup_switch____Compare____ml_lookup_switch_info_1_0(((MR_Word) ml_backend__ml_lookup_switch__wrapper_arg_1), &ml_backend__ml_lookup_switch__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_lookup_switch__wrapper_arg_3), ((MR_Word) ml_backend__ml_lookup_switch__wrapper_arg_4));
    }
#line 1193 "ml_backend.ml_lookup_switch.c"
    *ml_backend__ml_lookup_switch__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_lookup_switch__conv0_HeadVar__1_1));
#line 1195 "ml_backend.ml_lookup_switch.c"
  }
#line 1197 "ml_backend.ml_lookup_switch.c"
}

#line 1200 "ml_backend.ml_lookup_switch.c"
static MR_bool MR_CALL 
ml_backend__ml_lookup_switch____Unify____ml_several_soln_lookup_vars_0_0_10001(
#line 1203 "ml_backend.ml_lookup_switch.c"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1,
#line 1205 "ml_backend.ml_lookup_switch.c"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_2)
#line 1207 "ml_backend.ml_lookup_switch.c"
{
#line 1209 "ml_backend.ml_lookup_switch.c"
  {
#line 1211 "ml_backend.ml_lookup_switch.c"
    MR_bool ml_backend__ml_lookup_switch__succeeded;

#line 1214 "ml_backend.ml_lookup_switch.c"
    {
#line 1216 "ml_backend.ml_lookup_switch.c"
      ml_backend__ml_lookup_switch__succeeded = ml_backend__ml_lookup_switch____Unify____ml_several_soln_lookup_vars_0_0(((MR_Word) ml_backend__ml_lookup_switch__wrapper_arg_1), ((MR_Word) ml_backend__ml_lookup_switch__wrapper_arg_2));
    }
#line 1219 "ml_backend.ml_lookup_switch.c"
    return ml_backend__ml_lookup_switch__succeeded;
#line 1221 "ml_backend.ml_lookup_switch.c"
  }
#line 1223 "ml_backend.ml_lookup_switch.c"
}

#line 1226 "ml_backend.ml_lookup_switch.c"
static void MR_CALL 
ml_backend__ml_lookup_switch____Compare____ml_several_soln_lookup_vars_0_0_10001(
#line 1229 "ml_backend.ml_lookup_switch.c"
  MR_Box * ml_backend__ml_lookup_switch__wrapper_arg_1,
#line 1231 "ml_backend.ml_lookup_switch.c"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_2,
#line 1233 "ml_backend.ml_lookup_switch.c"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_3)
#line 1235 "ml_backend.ml_lookup_switch.c"
{
#line 1237 "ml_backend.ml_lookup_switch.c"
  {
#line 1239 "ml_backend.ml_lookup_switch.c"
    MR_Word ml_backend__ml_lookup_switch__conv0_HeadVar__1_1;

#line 1242 "ml_backend.ml_lookup_switch.c"
    {
#line 1244 "ml_backend.ml_lookup_switch.c"
      ml_backend__ml_lookup_switch____Compare____ml_several_soln_lookup_vars_0_0(&ml_backend__ml_lookup_switch__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_lookup_switch__wrapper_arg_2), ((MR_Word) ml_backend__ml_lookup_switch__wrapper_arg_3));
    }
#line 1247 "ml_backend.ml_lookup_switch.c"
    *ml_backend__ml_lookup_switch__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_lookup_switch__conv0_HeadVar__1_1));
#line 1249 "ml_backend.ml_lookup_switch.c"
  }
#line 1251 "ml_backend.ml_lookup_switch.c"
}

#line 702 "ml_lookup_switch.m"
static MR_Box MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_109_111_100_101_108_95_110_111_110_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_14_p_0_3(
#line 702 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg,
#line 702 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1)
#line 702 "ml_lookup_switch.m"
{
#line 702 "ml_lookup_switch.m"
  {
#line 702 "ml_lookup_switch.m"
    MR_Box ml_backend__ml_lookup_switch__wrapper_arg_2;
#line 702 "ml_lookup_switch.m"
    MR_Box ml_backend__ml_lookup_switch__closure = ml_backend__ml_lookup_switch__closure_arg;
#line 702 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__conv2_RowInitializer_6;

#line 702 "ml_lookup_switch.m"
    {
#line 702 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__conv2_RowInitializer_6 = ml_backend__ml_lookup_switch__ml_construct_later_soln_row_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_lookup_switch__wrapper_arg_1));
    }
#line 702 "ml_lookup_switch.m"
    ml_backend__ml_lookup_switch__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_lookup_switch__conv2_RowInitializer_6));
#line 702 "ml_lookup_switch.m"
    return ml_backend__ml_lookup_switch__wrapper_arg_2;
#line 702 "ml_lookup_switch.m"
  }
#line 702 "ml_lookup_switch.m"
}

#line 689 "ml_lookup_switch.m"
static MR_Box MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_109_111_100_101_108_95_110_111_110_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_14_p_0_2(
#line 689 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg,
#line 689 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1)
#line 689 "ml_lookup_switch.m"
{
#line 689 "ml_lookup_switch.m"
  {
#line 689 "ml_lookup_switch.m"
    MR_Box ml_backend__ml_lookup_switch__wrapper_arg_2;
#line 689 "ml_lookup_switch.m"
    MR_Box ml_backend__ml_lookup_switch__closure = ml_backend__ml_lookup_switch__closure_arg;
#line 689 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__conv1_HeadVar__2_2;

#line 689 "ml_lookup_switch.m"
    {
#line 689 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__conv1_HeadVar__2_2 = ml_backend__ml_util__wrap_init_obj_1_f_0(((MR_Word) ml_backend__ml_lookup_switch__wrapper_arg_1));
    }
#line 689 "ml_lookup_switch.m"
    ml_backend__ml_lookup_switch__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_lookup_switch__conv1_HeadVar__2_2));
#line 689 "ml_lookup_switch.m"
    return ml_backend__ml_lookup_switch__wrapper_arg_2;
#line 689 "ml_lookup_switch.m"
  }
#line 689 "ml_lookup_switch.m"
}

#line 677 "ml_lookup_switch.m"
static MR_Box MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_109_111_100_101_108_95_110_111_110_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_14_p_0_1(
#line 677 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg,
#line 677 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1)
#line 677 "ml_lookup_switch.m"
{
#line 677 "ml_lookup_switch.m"
  {
#line 677 "ml_lookup_switch.m"
    MR_Box ml_backend__ml_lookup_switch__wrapper_arg_2;
#line 677 "ml_lookup_switch.m"
    MR_Box ml_backend__ml_lookup_switch__closure = ml_backend__ml_lookup_switch__closure_arg;
#line 677 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__conv0_HeadVar__2_2;

#line 677 "ml_lookup_switch.m"
    {
#line 677 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__conv0_HeadVar__2_2 = ml_backend__ml_util__wrap_init_obj_1_f_0(((MR_Word) ml_backend__ml_lookup_switch__wrapper_arg_1));
    }
#line 677 "ml_lookup_switch.m"
    ml_backend__ml_lookup_switch__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_lookup_switch__conv0_HeadVar__2_2));
#line 677 "ml_lookup_switch.m"
    return ml_backend__ml_lookup_switch__wrapper_arg_2;
#line 677 "ml_lookup_switch.m"
  }
#line 677 "ml_lookup_switch.m"
}

#line 639 "ml_lookup_switch.m"
static void MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_109_111_100_101_108_95_110_111_110_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_14_p_0(
#line 639 "ml_lookup_switch.m"
  MR_Integer ml_backend__ml_lookup_switch__CurIndex_2,
#line 639 "ml_lookup_switch.m"
  MR_Integer ml_backend__ml_lookup_switch__EndVal_3,
#line 639 "ml_lookup_switch.m"
  MR_Integer ml_backend__ml_lookup_switch__STATE_VARIABLE_NextLaterSolnRow_0_4,
#line 639 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__5_5,
#line 639 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__FirstSolnStructType_6,
#line 639 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__LaterSolnStructType_7,
#line 639 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__FieldTypes_8,
#line 639 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_0_9,
#line 639 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_10,
#line 639 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_0_11,
#line 639 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_12,
#line 639 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_HadDummyRows_0_13,
#line 639 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_HadDummyRows_14)
#line 639 "ml_lookup_switch.m"
{
#line 650 "ml_lookup_switch.m"
  while (MR_TRUE)
#line 650 "ml_lookup_switch.m"
    {
#line 650 "ml_lookup_switch.m"
      /* tailcall optimized into a loop */
#line 650 "ml_lookup_switch.m"
      {
#line 650 "ml_lookup_switch.m"
        MR_bool ml_backend__ml_lookup_switch__succeeded;

#line 650 "ml_lookup_switch.m"
        if ((ml_backend__ml_lookup_switch__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 653 "ml_lookup_switch.m"
          {
#line 651 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__succeeded = (ml_backend__ml_lookup_switch__CurIndex_2 > ml_backend__ml_lookup_switch__EndVal_3);
#line 653 "ml_lookup_switch.m"
            if (ml_backend__ml_lookup_switch__succeeded)
#line 652 "ml_lookup_switch.m"
              {
#line 652 "ml_lookup_switch.m"
                *ml_backend__ml_lookup_switch__STATE_VARIABLE_HadDummyRows_14 = ml_backend__ml_lookup_switch__STATE_VARIABLE_HadDummyRows_0_13;
#line 652 "ml_lookup_switch.m"
                *ml_backend__ml_lookup_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_12 = ml_backend__ml_lookup_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_0_11;
#line 652 "ml_lookup_switch.m"
                *ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_10 = ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_0_9;
#line 652 "ml_lookup_switch.m"
              }
#line 653 "ml_lookup_switch.m"
            else
#line 655 "ml_lookup_switch.m"
              {
#line 655 "ml_lookup_switch.m"
                MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_32_32;
#line 655 "ml_lookup_switch.m"
                MR_Integer ml_backend__ml_lookup_switch__V_34_34;

#line 654 "ml_lookup_switch.m"
                {
#line 654 "ml_lookup_switch.m"
                  ml_backend__ml_lookup_switch__make_dummy_first_soln_row_4_p_0(ml_backend__ml_lookup_switch__FirstSolnStructType_6, ml_backend__ml_lookup_switch__FieldTypes_8, ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_0_9, &ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_32_32);
                }
#line 657 "ml_lookup_switch.m"
                ml_backend__ml_lookup_switch__V_34_34 = (ml_backend__ml_lookup_switch__CurIndex_2 + (MR_Integer) 1);
#line 657 "ml_lookup_switch.m"
                /* direct tailcall eliminated */
#line 657 "ml_lookup_switch.m"
                {
#line 657 "ml_lookup_switch.m"
                  MR_Integer ml_backend__ml_lookup_switch__CurIndex__tmp_copy_2 = ml_backend__ml_lookup_switch__V_34_34;
#line 657 "ml_lookup_switch.m"
                  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_0__tmp_copy_9 = ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_32_32;

#line 657 "ml_lookup_switch.m"
                  ml_backend__ml_lookup_switch__STATE_VARIABLE_HadDummyRows_0_13 = (MR_Integer) 1;
#line 657 "ml_lookup_switch.m"
                  ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_0_9 = ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_0__tmp_copy_9;
#line 657 "ml_lookup_switch.m"
                  ml_backend__ml_lookup_switch__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 657 "ml_lookup_switch.m"
                  ml_backend__ml_lookup_switch__CurIndex_2 = ml_backend__ml_lookup_switch__CurIndex__tmp_copy_2;
#line 657 "ml_lookup_switch.m"
                }
#line 657 "ml_lookup_switch.m"
                continue;
#line 655 "ml_lookup_switch.m"
              }
#line 653 "ml_lookup_switch.m"
          }
#line 650 "ml_lookup_switch.m"
        else
#line 667 "ml_lookup_switch.m"
          {
#line 667 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__Pair_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__HeadVar__5_5, (MR_Integer) 0)));
#line 667 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__Pairs_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__HeadVar__5_5, (MR_Integer) 1)));
#line 667 "ml_lookup_switch.m"
            MR_Integer ml_backend__ml_lookup_switch__Index_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__Pair_44, (MR_Integer) 0)));
#line 667 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__Soln_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__Pair_44, (MR_Integer) 1)));
#line 667 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__NextPairs_54;
#line 667 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_72_72;
#line 667 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_HadDummyRows_73_73;
#line 667 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_78_78;
#line 667 "ml_lookup_switch.m"
            MR_Integer ml_backend__ml_lookup_switch__STATE_VARIABLE_NextLaterSolnRow_80_80;
#line 667 "ml_lookup_switch.m"
            MR_Integer ml_backend__ml_lookup_switch__V_86_86;

#line 669 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__succeeded = (ml_backend__ml_lookup_switch__CurIndex_2 < ml_backend__ml_lookup_switch__Index_52);
#line 674 "ml_lookup_switch.m"
            if (ml_backend__ml_lookup_switch__succeeded)
#line 671 "ml_lookup_switch.m"
              {
#line 670 "ml_lookup_switch.m"
                {
#line 670 "ml_lookup_switch.m"
                  ml_backend__ml_lookup_switch__make_dummy_first_soln_row_4_p_0(ml_backend__ml_lookup_switch__FirstSolnStructType_6, ml_backend__ml_lookup_switch__FieldTypes_8, ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_0_9, &ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_72_72);
                }
#line 672 "ml_lookup_switch.m"
                ml_backend__ml_lookup_switch__STATE_VARIABLE_HadDummyRows_73_73 = (MR_Integer) 1;
#line 673 "ml_lookup_switch.m"
                ml_backend__ml_lookup_switch__NextPairs_54 = ml_backend__ml_lookup_switch__HeadVar__5_5;
#line 673 "ml_lookup_switch.m"
                ml_backend__ml_lookup_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_78_78 = ml_backend__ml_lookup_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_0_11;
#line 673 "ml_lookup_switch.m"
                ml_backend__ml_lookup_switch__STATE_VARIABLE_NextLaterSolnRow_80_80 = ml_backend__ml_lookup_switch__STATE_VARIABLE_NextLaterSolnRow_0_4;
#line 671 "ml_lookup_switch.m"
              }
#line 674 "ml_lookup_switch.m"
            else
#line 707 "ml_lookup_switch.m"
              {
#line 687 "ml_lookup_switch.m"
                if (((MR_tag((MR_Word) ml_backend__ml_lookup_switch__Soln_53)) == (MR_mktag((MR_Integer) 0))))
#line 676 "ml_lookup_switch.m"
                  {
#line 676 "ml_lookup_switch.m"
                    MR_Word ml_backend__ml_lookup_switch__FieldRvals_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__Soln_53, (MR_Integer) 0)));
#line 676 "ml_lookup_switch.m"
                    MR_Word ml_backend__ml_lookup_switch__FieldInitializers_56;
#line 676 "ml_lookup_switch.m"
                    MR_Word ml_backend__ml_lookup_switch__NumLaterSolnsInitializer_57;
#line 676 "ml_lookup_switch.m"
                    MR_Word ml_backend__ml_lookup_switch__FirstLaterSlotInitializer_58;
#line 676 "ml_lookup_switch.m"
                    MR_Word ml_backend__ml_lookup_switch__FirstSolnFieldInitializers_59;
#line 676 "ml_lookup_switch.m"
                    MR_Word ml_backend__ml_lookup_switch__FirstSolnRowInitializer_60;
#line 676 "ml_lookup_switch.m"
                    MR_Word ml_backend__ml_lookup_switch__V_84_84;

#line 677 "ml_lookup_switch.m"
                    {
#line 677 "ml_lookup_switch.m"
                      ml_backend__ml_lookup_switch__FieldInitializers_56 = mercury__list__map_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, (MR_Word) &ml_backend__ml_lookup_switch_scalar_common_4[5], ml_backend__ml_lookup_switch__FieldRvals_55);
                    }
#line 678 "ml_lookup_switch.m"
                    {
#line 678 "ml_lookup_switch.m"
                      ml_backend__ml_lookup_switch__NumLaterSolnsInitializer_57 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
                    }
#line 679 "ml_lookup_switch.m"
                    {
#line 679 "ml_lookup_switch.m"
                      ml_backend__ml_lookup_switch__FirstLaterSlotInitializer_58 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) -1);
                    }
#line 682 "ml_lookup_switch.m"
                    {
#line 682 "ml_lookup_switch.m"
                      ml_backend__ml_lookup_switch__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 682 "ml_lookup_switch.m"
                      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_84_84, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__FirstLaterSlotInitializer_58));
#line 682 "ml_lookup_switch.m"
                      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_84_84, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__FieldInitializers_56));
#line 682 "ml_lookup_switch.m"
                    }
#line 681 "ml_lookup_switch.m"
                    {
#line 681 "ml_lookup_switch.m"
                      ml_backend__ml_lookup_switch__FirstSolnFieldInitializers_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 681 "ml_lookup_switch.m"
                      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__FirstSolnFieldInitializers_59, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__NumLaterSolnsInitializer_57));
#line 681 "ml_lookup_switch.m"
                      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__FirstSolnFieldInitializers_59, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_84_84));
#line 681 "ml_lookup_switch.m"
                    }
#line 683 "ml_lookup_switch.m"
                    {
#line 683 "ml_lookup_switch.m"
                      ml_backend__ml_lookup_switch__FirstSolnRowInitializer_60 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 683 "ml_lookup_switch.m"
                      MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__FirstSolnRowInitializer_60, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__FirstSolnStructType_6));
#line 683 "ml_lookup_switch.m"
                      MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__FirstSolnRowInitializer_60, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__FirstSolnFieldInitializers_59));
#line 683 "ml_lookup_switch.m"
                    }
#line 685 "ml_lookup_switch.m"
                    {
#line 685 "ml_lookup_switch.m"
                      ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 685 "ml_lookup_switch.m"
                      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_72_72, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__FirstSolnRowInitializer_60));
#line 685 "ml_lookup_switch.m"
                      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_72_72, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_0_9));
#line 685 "ml_lookup_switch.m"
                    }
#line 685 "ml_lookup_switch.m"
                    ml_backend__ml_lookup_switch__STATE_VARIABLE_NextLaterSolnRow_80_80 = ml_backend__ml_lookup_switch__STATE_VARIABLE_NextLaterSolnRow_0_4;
#line 685 "ml_lookup_switch.m"
                    ml_backend__ml_lookup_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_78_78 = ml_backend__ml_lookup_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_0_11;
#line 676 "ml_lookup_switch.m"
                  }
#line 687 "ml_lookup_switch.m"
                else
#line 688 "ml_lookup_switch.m"
                  {
#line 688 "ml_lookup_switch.m"
                    MR_Word ml_backend__ml_lookup_switch__TypeCtorInfo_101_101 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0;
#line 688 "ml_lookup_switch.m"
                    MR_Word ml_backend__ml_lookup_switch__TypeInfo_104_104;
#line 688 "ml_lookup_switch.m"
                    MR_Word ml_backend__ml_lookup_switch__FirstSolnRvals_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__Soln_53, (MR_Integer) 0)));
#line 688 "ml_lookup_switch.m"
                    MR_Word ml_backend__ml_lookup_switch__LaterSolns_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__Soln_53, (MR_Integer) 1)));
#line 688 "ml_lookup_switch.m"
                    MR_Integer ml_backend__ml_lookup_switch__NumLaterSolns_63;
#line 688 "ml_lookup_switch.m"
                    MR_Word ml_backend__ml_lookup_switch__LaterSolnRowInitializers_64;
#line 688 "ml_lookup_switch.m"
                    MR_Word ml_backend__ml_lookup_switch__V_75_75;
#line 688 "ml_lookup_switch.m"
                    MR_Word ml_backend__ml_lookup_switch__V_77_77;
#line 688 "ml_lookup_switch.m"
                    MR_Word ml_backend__ml_lookup_switch__V_79_79;
#line 688 "ml_lookup_switch.m"
                    MR_Word ml_backend__ml_lookup_switch__FieldInitializers_91;
#line 688 "ml_lookup_switch.m"
                    MR_Word ml_backend__ml_lookup_switch__NumLaterSolnsInitializer_92;
#line 688 "ml_lookup_switch.m"
                    MR_Word ml_backend__ml_lookup_switch__FirstLaterSlotInitializer_93;
#line 688 "ml_lookup_switch.m"
                    MR_Word ml_backend__ml_lookup_switch__FirstSolnFieldInitializers_94;
#line 688 "ml_lookup_switch.m"
                    MR_Word ml_backend__ml_lookup_switch__FirstSolnRowInitializer_95;

#line 689 "ml_lookup_switch.m"
                    {
#line 689 "ml_lookup_switch.m"
                      ml_backend__ml_lookup_switch__FieldInitializers_91 = mercury__list__map_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0, ml_backend__ml_lookup_switch__TypeCtorInfo_101_101, (MR_Word) &ml_backend__ml_lookup_switch_scalar_common_4[6], ml_backend__ml_lookup_switch__FirstSolnRvals_61);
                    }
#line 1619 "ml_backend.ml_lookup_switch.c"
                    ml_backend__ml_lookup_switch__TypeInfo_104_104 = (MR_Word) &ml_backend__ml_lookup_switch_scalar_common_1[1];
#line 690 "ml_lookup_switch.m"
                    {
#line 690 "ml_lookup_switch.m"
                      mercury__list__length_2_p_0(ml_backend__ml_lookup_switch__TypeInfo_104_104, ml_backend__ml_lookup_switch__LaterSolns_62, &ml_backend__ml_lookup_switch__NumLaterSolns_63);
                    }
#line 691 "ml_lookup_switch.m"
                    {
#line 691 "ml_lookup_switch.m"
                      ml_backend__ml_lookup_switch__NumLaterSolnsInitializer_92 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__ml_lookup_switch__NumLaterSolns_63);
                    }
#line 692 "ml_lookup_switch.m"
                    {
#line 692 "ml_lookup_switch.m"
                      ml_backend__ml_lookup_switch__FirstLaterSlotInitializer_93 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__ml_lookup_switch__STATE_VARIABLE_NextLaterSolnRow_0_4);
                    }
#line 695 "ml_lookup_switch.m"
                    {
#line 695 "ml_lookup_switch.m"
                      ml_backend__ml_lookup_switch__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 695 "ml_lookup_switch.m"
                      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_75_75, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__FirstLaterSlotInitializer_93));
#line 695 "ml_lookup_switch.m"
                      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_75_75, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__FieldInitializers_91));
#line 695 "ml_lookup_switch.m"
                    }
#line 694 "ml_lookup_switch.m"
                    {
#line 694 "ml_lookup_switch.m"
                      ml_backend__ml_lookup_switch__FirstSolnFieldInitializers_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 694 "ml_lookup_switch.m"
                      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__FirstSolnFieldInitializers_94, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__NumLaterSolnsInitializer_92));
#line 694 "ml_lookup_switch.m"
                      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__FirstSolnFieldInitializers_94, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_75_75));
#line 694 "ml_lookup_switch.m"
                    }
#line 696 "ml_lookup_switch.m"
                    {
#line 696 "ml_lookup_switch.m"
                      ml_backend__ml_lookup_switch__FirstSolnRowInitializer_95 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 696 "ml_lookup_switch.m"
                      MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__FirstSolnRowInitializer_95, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__FirstSolnStructType_6));
#line 696 "ml_lookup_switch.m"
                      MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__FirstSolnRowInitializer_95, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__FirstSolnFieldInitializers_94));
#line 696 "ml_lookup_switch.m"
                    }
#line 698 "ml_lookup_switch.m"
                    {
#line 698 "ml_lookup_switch.m"
                      ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 698 "ml_lookup_switch.m"
                      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_72_72, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__FirstSolnRowInitializer_95));
#line 698 "ml_lookup_switch.m"
                      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_72_72, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_0_9));
#line 698 "ml_lookup_switch.m"
                    }
#line 702 "ml_lookup_switch.m"
                    {
#line 702 "ml_lookup_switch.m"
                      ml_backend__ml_lookup_switch__V_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 702 "ml_lookup_switch.m"
                      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_77_77, 0) = ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_6[1]));
#line 702 "ml_lookup_switch.m"
                      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_77_77, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_109_111_100_101_108_95_110_111_110_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_14_p_0_3));
#line 702 "ml_lookup_switch.m"
                      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_77_77, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 702 "ml_lookup_switch.m"
                      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_77_77, 3) = ((MR_Box) (ml_backend__ml_lookup_switch__LaterSolnStructType_7));
#line 702 "ml_lookup_switch.m"
                    }
#line 701 "ml_lookup_switch.m"
                    {
#line 701 "ml_lookup_switch.m"
                      ml_backend__ml_lookup_switch__LaterSolnRowInitializers_64 = mercury__list__map_2_f_0(ml_backend__ml_lookup_switch__TypeInfo_104_104, ml_backend__ml_lookup_switch__TypeCtorInfo_101_101, ml_backend__ml_lookup_switch__V_77_77, ml_backend__ml_lookup_switch__LaterSolns_62);
                    }
#line 705 "ml_lookup_switch.m"
                    {
#line 705 "ml_lookup_switch.m"
                      ml_backend__ml_lookup_switch__V_79_79 = mercury__cord__from_list_1_f_0(ml_backend__ml_lookup_switch__TypeCtorInfo_101_101, ml_backend__ml_lookup_switch__LaterSolnRowInitializers_64);
                    }
#line 704 "ml_lookup_switch.m"
                    {
#line 704 "ml_lookup_switch.m"
                      ml_backend__ml_lookup_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_78_78 = mercury__cord__f_43_43_2_f_0(ml_backend__ml_lookup_switch__TypeCtorInfo_101_101, ml_backend__ml_lookup_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_0_11, ml_backend__ml_lookup_switch__V_79_79);
                    }
#line 706 "ml_lookup_switch.m"
                    ml_backend__ml_lookup_switch__STATE_VARIABLE_NextLaterSolnRow_80_80 = (ml_backend__ml_lookup_switch__STATE_VARIABLE_NextLaterSolnRow_0_4 + ml_backend__ml_lookup_switch__NumLaterSolns_63);
#line 688 "ml_lookup_switch.m"
                  }
#line 708 "ml_lookup_switch.m"
                ml_backend__ml_lookup_switch__NextPairs_54 = ml_backend__ml_lookup_switch__Pairs_45;
#line 708 "ml_lookup_switch.m"
                ml_backend__ml_lookup_switch__STATE_VARIABLE_HadDummyRows_73_73 = ml_backend__ml_lookup_switch__STATE_VARIABLE_HadDummyRows_0_13;
#line 707 "ml_lookup_switch.m"
              }
#line 710 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__V_86_86 = (ml_backend__ml_lookup_switch__CurIndex_2 + (MR_Integer) 1);
#line 710 "ml_lookup_switch.m"
            /* direct tailcall eliminated */
#line 710 "ml_lookup_switch.m"
            {
#line 710 "ml_lookup_switch.m"
              MR_Integer ml_backend__ml_lookup_switch__CurIndex__tmp_copy_2 = ml_backend__ml_lookup_switch__V_86_86;
#line 710 "ml_lookup_switch.m"
              MR_Integer ml_backend__ml_lookup_switch__STATE_VARIABLE_NextLaterSolnRow_0__tmp_copy_4 = ml_backend__ml_lookup_switch__STATE_VARIABLE_NextLaterSolnRow_80_80;
#line 710 "ml_lookup_switch.m"
              MR_Word ml_backend__ml_lookup_switch__HeadVar__5__tmp_copy_5 = ml_backend__ml_lookup_switch__NextPairs_54;
#line 710 "ml_lookup_switch.m"
              MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_0__tmp_copy_9 = ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_72_72;
#line 710 "ml_lookup_switch.m"
              MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_0__tmp_copy_11 = ml_backend__ml_lookup_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_78_78;
#line 710 "ml_lookup_switch.m"
              MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_HadDummyRows_0__tmp_copy_13 = ml_backend__ml_lookup_switch__STATE_VARIABLE_HadDummyRows_73_73;

#line 710 "ml_lookup_switch.m"
              ml_backend__ml_lookup_switch__STATE_VARIABLE_HadDummyRows_0_13 = ml_backend__ml_lookup_switch__STATE_VARIABLE_HadDummyRows_0__tmp_copy_13;
#line 710 "ml_lookup_switch.m"
              ml_backend__ml_lookup_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_0_11 = ml_backend__ml_lookup_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_0__tmp_copy_11;
#line 710 "ml_lookup_switch.m"
              ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_0_9 = ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_0__tmp_copy_9;
#line 710 "ml_lookup_switch.m"
              ml_backend__ml_lookup_switch__HeadVar__5_5 = ml_backend__ml_lookup_switch__HeadVar__5__tmp_copy_5;
#line 710 "ml_lookup_switch.m"
              ml_backend__ml_lookup_switch__STATE_VARIABLE_NextLaterSolnRow_0_4 = ml_backend__ml_lookup_switch__STATE_VARIABLE_NextLaterSolnRow_0__tmp_copy_4;
#line 710 "ml_lookup_switch.m"
              ml_backend__ml_lookup_switch__CurIndex_2 = ml_backend__ml_lookup_switch__CurIndex__tmp_copy_2;
#line 710 "ml_lookup_switch.m"
            }
#line 710 "ml_lookup_switch.m"
            continue;
#line 667 "ml_lookup_switch.m"
          }
#line 650 "ml_lookup_switch.m"
      }
#line 650 "ml_lookup_switch.m"
      break;
#line 650 "ml_lookup_switch.m"
    }
#line 639 "ml_lookup_switch.m"
}

#line 634 "ml_lookup_switch.m"
static MR_Box MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_115_105_109_112_108_101_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_6_p_0_2(
#line 634 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg,
#line 634 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1)
#line 634 "ml_lookup_switch.m"
{
#line 634 "ml_lookup_switch.m"
  {
#line 634 "ml_lookup_switch.m"
    MR_Box ml_backend__ml_lookup_switch__wrapper_arg_2;
#line 634 "ml_lookup_switch.m"
    MR_Box ml_backend__ml_lookup_switch__closure = ml_backend__ml_lookup_switch__closure_arg;
#line 634 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__conv1_HeadVar__2_2;

#line 634 "ml_lookup_switch.m"
    {
#line 634 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__conv1_HeadVar__2_2 = ml_backend__ml_util__wrap_init_obj_1_f_0(((MR_Word) ml_backend__ml_lookup_switch__wrapper_arg_1));
    }
#line 634 "ml_lookup_switch.m"
    ml_backend__ml_lookup_switch__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_lookup_switch__conv1_HeadVar__2_2));
#line 634 "ml_lookup_switch.m"
    return ml_backend__ml_lookup_switch__wrapper_arg_2;
#line 634 "ml_lookup_switch.m"
  }
#line 634 "ml_lookup_switch.m"
}

#line 628 "ml_lookup_switch.m"
static MR_Box MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_115_105_109_112_108_101_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_6_p_0_1(
#line 628 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg,
#line 628 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1)
#line 628 "ml_lookup_switch.m"
{
#line 628 "ml_lookup_switch.m"
  {
#line 628 "ml_lookup_switch.m"
    MR_Box ml_backend__ml_lookup_switch__wrapper_arg_2;
#line 628 "ml_lookup_switch.m"
    MR_Box ml_backend__ml_lookup_switch__closure = ml_backend__ml_lookup_switch__closure_arg;
#line 628 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__conv0_DefaultRval_4;

#line 628 "ml_lookup_switch.m"
    {
#line 628 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__conv0_DefaultRval_4 = ml_backend__ml_lookup_switch__ml_default_value_for_type_1_f_0(((MR_Word) ml_backend__ml_lookup_switch__wrapper_arg_1));
    }
#line 628 "ml_lookup_switch.m"
    ml_backend__ml_lookup_switch__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_lookup_switch__conv0_DefaultRval_4));
#line 628 "ml_lookup_switch.m"
    return ml_backend__ml_lookup_switch__wrapper_arg_2;
#line 628 "ml_lookup_switch.m"
  }
#line 628 "ml_lookup_switch.m"
}

#line 619 "ml_lookup_switch.m"
static void MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_115_105_109_112_108_101_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_6_p_0(
#line 619 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__StructType_2,
#line 619 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__FieldTypes_3,
#line 619 "ml_lookup_switch.m"
  MR_Integer ml_backend__ml_lookup_switch__CurIndex_4,
#line 619 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__5_5,
#line 619 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__HeadVar__6_6)
#line 619 "ml_lookup_switch.m"
{
#line 623 "ml_lookup_switch.m"
  {
#line 623 "ml_lookup_switch.m"
    MR_bool ml_backend__ml_lookup_switch__succeeded;

#line 623 "ml_lookup_switch.m"
    if ((ml_backend__ml_lookup_switch__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 623 "ml_lookup_switch.m"
      *ml_backend__ml_lookup_switch__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 623 "ml_lookup_switch.m"
    else
#line 625 "ml_lookup_switch.m"
      {
#line 625 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__Pair_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__HeadVar__5_5, (MR_Integer) 0)));
#line 625 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__Pairs_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__HeadVar__5_5, (MR_Integer) 1)));
#line 625 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__RowInitializer_17;
#line 625 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__RowInitializers_18;
#line 625 "ml_lookup_switch.m"
        MR_Integer ml_backend__ml_lookup_switch__Index_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__Pair_15, (MR_Integer) 0)));
#line 625 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__Rvals_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__Pair_15, (MR_Integer) 1)));
#line 625 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__FieldRvals_21;
#line 625 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__RemainingPairs_22;
#line 625 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__FieldInitializers_23;
#line 625 "ml_lookup_switch.m"
        MR_Integer ml_backend__ml_lookup_switch__V_26_26;

#line 627 "ml_lookup_switch.m"
        ml_backend__ml_lookup_switch__succeeded = (ml_backend__ml_lookup_switch__CurIndex_4 < ml_backend__ml_lookup_switch__Index_19);
#line 630 "ml_lookup_switch.m"
        if (ml_backend__ml_lookup_switch__succeeded)
#line 628 "ml_lookup_switch.m"
          {
#line 628 "ml_lookup_switch.m"
            {
#line 628 "ml_lookup_switch.m"
              ml_backend__ml_lookup_switch__FieldRvals_21 = mercury__list__map_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0, (MR_Word) &ml_backend__ml_lookup_switch_scalar_common_4[3], ml_backend__ml_lookup_switch__FieldTypes_3);
            }
#line 629 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__RemainingPairs_22 = ml_backend__ml_lookup_switch__HeadVar__5_5;
#line 628 "ml_lookup_switch.m"
          }
#line 630 "ml_lookup_switch.m"
        else
#line 631 "ml_lookup_switch.m"
          {
#line 631 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__FieldRvals_21 = ml_backend__ml_lookup_switch__Rvals_20;
#line 632 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__RemainingPairs_22 = ml_backend__ml_lookup_switch__Pairs_16;
#line 631 "ml_lookup_switch.m"
          }
#line 634 "ml_lookup_switch.m"
        {
#line 634 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__FieldInitializers_23 = mercury__list__map_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, (MR_Word) &ml_backend__ml_lookup_switch_scalar_common_4[4], ml_backend__ml_lookup_switch__FieldRvals_21);
        }
#line 635 "ml_lookup_switch.m"
        {
#line 635 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__RowInitializer_17 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 635 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__RowInitializer_17, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__StructType_2));
#line 635 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__RowInitializer_17, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__FieldInitializers_23));
#line 635 "ml_lookup_switch.m"
        }
#line 637 "ml_lookup_switch.m"
        ml_backend__ml_lookup_switch__V_26_26 = (ml_backend__ml_lookup_switch__CurIndex_4 + (MR_Integer) 1);
#line 636 "ml_lookup_switch.m"
        {
#line 636 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_115_105_109_112_108_101_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_6_p_0(ml_backend__ml_lookup_switch__StructType_2, ml_backend__ml_lookup_switch__FieldTypes_3, ml_backend__ml_lookup_switch__V_26_26, ml_backend__ml_lookup_switch__RemainingPairs_22, &ml_backend__ml_lookup_switch__RowInitializers_18);
        }
#line 625 "ml_lookup_switch.m"
        {
#line 625 "ml_lookup_switch.m"
          MR_Word base;
#line 625 "ml_lookup_switch.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 625 "ml_lookup_switch.m"
          *ml_backend__ml_lookup_switch__HeadVar__6_6 = base;
#line 625 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__RowInitializer_17));
#line 625 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__RowInitializers_18));
#line 625 "ml_lookup_switch.m"
        }
#line 625 "ml_lookup_switch.m"
      }
#line 623 "ml_lookup_switch.m"
  }
#line 619 "ml_lookup_switch.m"
}

#line 583 "ml_lookup_switch.m"
static void MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_101_114_97_116_101_95_98_105_116_95_118_101_99_95_50_95_95_91_49_93_95_48_5_p_0(
#line 583 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__1_1,
#line 583 "ml_lookup_switch.m"
  MR_Integer ml_backend__ml_lookup_switch__Start_2,
#line 583 "ml_lookup_switch.m"
  MR_Integer ml_backend__ml_lookup_switch__WordBits_3,
#line 583 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_BitMap_0_4,
#line 583 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_BitMap_5)
#line 583 "ml_lookup_switch.m"
{
#line 586 "ml_lookup_switch.m"
  while (MR_TRUE)
#line 586 "ml_lookup_switch.m"
    {
#line 586 "ml_lookup_switch.m"
      /* tailcall optimized into a loop */
#line 586 "ml_lookup_switch.m"
      {
#line 586 "ml_lookup_switch.m"
        MR_bool ml_backend__ml_lookup_switch__succeeded;

#line 586 "ml_lookup_switch.m"
        if ((ml_backend__ml_lookup_switch__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 586 "ml_lookup_switch.m"
          *ml_backend__ml_lookup_switch__STATE_VARIABLE_BitMap_5 = ml_backend__ml_lookup_switch__STATE_VARIABLE_BitMap_0_4;
#line 586 "ml_lookup_switch.m"
        else
#line 587 "ml_lookup_switch.m"
          {
#line 587 "ml_lookup_switch.m"
            MR_Integer ml_backend__ml_lookup_switch__Tag_11;
#line 587 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__Rest_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__HeadVar__1_1, (MR_Integer) 1)));
#line 587 "ml_lookup_switch.m"
            MR_Integer ml_backend__ml_lookup_switch__Val_17;
#line 587 "ml_lookup_switch.m"
            MR_Integer ml_backend__ml_lookup_switch__WordNum_18;
#line 587 "ml_lookup_switch.m"
            MR_Integer ml_backend__ml_lookup_switch__Offset_19;
#line 587 "ml_lookup_switch.m"
            MR_Integer ml_backend__ml_lookup_switch__X1_21;
#line 587 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__HeadVar__1_1, (MR_Integer) 0)));
#line 587 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_BitMap_28_28;
#line 587 "ml_lookup_switch.m"
            MR_Box ml_backend__ml_lookup_switch__V_12_12;
#line 593 "ml_lookup_switch.m"
            MR_Integer ml_backend__ml_lookup_switch__X0_20;
#line 591 "ml_lookup_switch.m"
            MR_Box ml_backend__ml_lookup_switch__conv0_X0_20;

#line 587 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__Tag_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_24_24, (MR_Integer) 0)));
#line 587 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__V_12_12 = (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_24_24, (MR_Integer) 1));
#line 588 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__Val_17 = (ml_backend__ml_lookup_switch__Tag_11 - ml_backend__ml_lookup_switch__Start_2);
#line 589 "ml_lookup_switch.m"
            {
#line 589 "ml_lookup_switch.m"
              ml_backend__ml_lookup_switch__WordNum_18 = mercury__int__f_47_47_2_f_0(ml_backend__ml_lookup_switch__Val_17, ml_backend__ml_lookup_switch__WordBits_3);
            }
#line 590 "ml_lookup_switch.m"
            {
#line 590 "ml_lookup_switch.m"
              ml_backend__ml_lookup_switch__Offset_19 = mercury__int__mod_2_f_0(ml_backend__ml_lookup_switch__Val_17, ml_backend__ml_lookup_switch__WordBits_3);
            }
#line 591 "ml_lookup_switch.m"
            {
#line 591 "ml_lookup_switch.m"
              ml_backend__ml_lookup_switch__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ml_backend__ml_lookup_switch__STATE_VARIABLE_BitMap_0_4, ml_backend__ml_lookup_switch__WordNum_18, &ml_backend__ml_lookup_switch__conv0_X0_20);
            }
#line 591 "ml_lookup_switch.m"
            if (ml_backend__ml_lookup_switch__succeeded)
#line 591 "ml_lookup_switch.m"
              {
#line 591 "ml_lookup_switch.m"
                ml_backend__ml_lookup_switch__X0_20 = ((MR_Integer) ml_backend__ml_lookup_switch__conv0_X0_20);
#line 591 "ml_lookup_switch.m"
                ml_backend__ml_lookup_switch__succeeded = MR_TRUE;
#line 591 "ml_lookup_switch.m"
              }
#line 593 "ml_lookup_switch.m"
            if (ml_backend__ml_lookup_switch__succeeded)
#line 592 "ml_lookup_switch.m"
              {
#line 592 "ml_lookup_switch.m"
                MR_Integer ml_backend__ml_lookup_switch__V_25_25;

#line 592 "ml_lookup_switch.m"
                {
#line 592 "ml_lookup_switch.m"
                  ml_backend__ml_lookup_switch__V_25_25 = mercury__int__f_60_60_2_f_0((MR_Integer) 1, ml_backend__ml_lookup_switch__Offset_19);
                }
#line 592 "ml_lookup_switch.m"
                ml_backend__ml_lookup_switch__X1_21 = (ml_backend__ml_lookup_switch__X0_20 | ml_backend__ml_lookup_switch__V_25_25);
#line 592 "ml_lookup_switch.m"
              }
#line 593 "ml_lookup_switch.m"
            else
#line 594 "ml_lookup_switch.m"
              {
#line 594 "ml_lookup_switch.m"
                {
#line 594 "ml_lookup_switch.m"
                  ml_backend__ml_lookup_switch__X1_21 = mercury__int__f_60_60_2_f_0((MR_Integer) 1, ml_backend__ml_lookup_switch__Offset_19);
                }
#line 594 "ml_lookup_switch.m"
              }
#line 596 "ml_lookup_switch.m"
            {
#line 596 "ml_lookup_switch.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ml_backend__ml_lookup_switch__WordNum_18, ((MR_Box) (ml_backend__ml_lookup_switch__X1_21)), ml_backend__ml_lookup_switch__STATE_VARIABLE_BitMap_0_4, &ml_backend__ml_lookup_switch__STATE_VARIABLE_BitMap_28_28);
            }
#line 597 "ml_lookup_switch.m"
            /* direct tailcall eliminated */
#line 597 "ml_lookup_switch.m"
            {
#line 597 "ml_lookup_switch.m"
              MR_Word ml_backend__ml_lookup_switch__HeadVar__1__tmp_copy_1 = ml_backend__ml_lookup_switch__Rest_13;
#line 597 "ml_lookup_switch.m"
              MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_BitMap_0__tmp_copy_4 = ml_backend__ml_lookup_switch__STATE_VARIABLE_BitMap_28_28;

#line 597 "ml_lookup_switch.m"
              ml_backend__ml_lookup_switch__STATE_VARIABLE_BitMap_0_4 = ml_backend__ml_lookup_switch__STATE_VARIABLE_BitMap_0__tmp_copy_4;
#line 597 "ml_lookup_switch.m"
              ml_backend__ml_lookup_switch__HeadVar__1_1 = ml_backend__ml_lookup_switch__HeadVar__1__tmp_copy_1;
#line 597 "ml_lookup_switch.m"
            }
#line 597 "ml_lookup_switch.m"
            continue;
#line 587 "ml_lookup_switch.m"
          }
#line 586 "ml_lookup_switch.m"
      }
#line 586 "ml_lookup_switch.m"
      break;
#line 586 "ml_lookup_switch.m"
    }
#line 583 "ml_lookup_switch.m"
}

#line 517 "ml_lookup_switch.m"
static void MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_101_114_97_116_101_95_98_105_116_118_101_99_95_116_101_115_116_95_95_91_49_44_32_55_93_95_48_9_p_0(
#line 517 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__MLDS_ModuleName_10,
#line 517 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__Context_11,
#line 517 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__IndexRval_12,
#line 517 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__CaseVals_13,
#line 517 "ml_lookup_switch.m"
  MR_Integer ml_backend__ml_lookup_switch__Start_14,
#line 517 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__CheckRval_16,
#line 517 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_30,
#line 517 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_31)
#line 517 "ml_lookup_switch.m"
{
#line 522 "ml_lookup_switch.m"
  {
#line 522 "ml_lookup_switch.m"
    MR_bool ml_backend__ml_lookup_switch__succeeded;
#line 522 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__TypeCtorInfo_31_71;
#line 522 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__Globals_18;
#line 522 "ml_lookup_switch.m"
    MR_Integer ml_backend__ml_lookup_switch__WordBits_19;
#line 522 "ml_lookup_switch.m"
    MR_Integer ml_backend__ml_lookup_switch__Log2WordBits_20;
#line 522 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__GlobalData0_21;
#line 522 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__BitVecArgRvals_22;
#line 522 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__BitVecRval_23;
#line 522 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__GlobalData_24;
#line 522 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__WordRval_26;
#line 522 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__BitNumRval_27;
#line 522 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__V_45_45;
#line 522 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__BitMap0_61;
#line 522 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__BitMap_62;
#line 522 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__WordVals_63;
#line 522 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__WordInitializers_64;
#line 522 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__Initializer_65;
#line 536 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__SingleWordRval_25;
#line 532 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__V_32_32;

#line 523 "ml_lookup_switch.m"
    {
#line 523 "ml_lookup_switch.m"
      ml_backend__ml_gen_info__ml_gen_info_get_globals_2_p_0(ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_30, &ml_backend__ml_lookup_switch__Globals_18);
    }
#line 524 "ml_lookup_switch.m"
    {
#line 524 "ml_lookup_switch.m"
      backend_libs__switch_util__get_word_bits_3_p_0(ml_backend__ml_lookup_switch__Globals_18, &ml_backend__ml_lookup_switch__WordBits_19, &ml_backend__ml_lookup_switch__Log2WordBits_20);
    }
#line 525 "ml_lookup_switch.m"
    {
#line 525 "ml_lookup_switch.m"
      ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_30, &ml_backend__ml_lookup_switch__GlobalData0_21);
    }
#line 2167 "ml_backend.ml_lookup_switch.c"
    ml_backend__ml_lookup_switch__TypeCtorInfo_31_71 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 573 "ml_lookup_switch.m"
    {
#line 573 "ml_lookup_switch.m"
      mercury__map__init_1_p_0(ml_backend__ml_lookup_switch__TypeCtorInfo_31_71, ml_backend__ml_lookup_switch__TypeCtorInfo_31_71, &ml_backend__ml_lookup_switch__BitMap0_61);
    }
#line 574 "ml_lookup_switch.m"
    {
#line 574 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_101_114_97_116_101_95_98_105_116_95_118_101_99_95_50_95_95_91_49_93_95_48_5_p_0(ml_backend__ml_lookup_switch__CaseVals_13, ml_backend__ml_lookup_switch__Start_14, ml_backend__ml_lookup_switch__WordBits_19, ml_backend__ml_lookup_switch__BitMap0_61, &ml_backend__ml_lookup_switch__BitMap_62);
    }
#line 575 "ml_lookup_switch.m"
    {
#line 575 "ml_lookup_switch.m"
      mercury__map__to_assoc_list_2_p_0(ml_backend__ml_lookup_switch__TypeCtorInfo_31_71, ml_backend__ml_lookup_switch__TypeCtorInfo_31_71, ml_backend__ml_lookup_switch__BitMap_62, &ml_backend__ml_lookup_switch__WordVals_63);
    }
#line 576 "ml_lookup_switch.m"
    {
#line 576 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__ml_generate_bit_vec_initializers_4_p_0(ml_backend__ml_lookup_switch__WordVals_63, (MR_Integer) 0, &ml_backend__ml_lookup_switch__BitVecArgRvals_22, &ml_backend__ml_lookup_switch__WordInitializers_64);
    }
#line 577 "ml_lookup_switch.m"
    {
#line 577 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__Initializer_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 577 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__Initializer_65, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__WordInitializers_64));
#line 577 "ml_lookup_switch.m"
    }
#line 580 "ml_lookup_switch.m"
    {
#line 580 "ml_lookup_switch.m"
      ml_backend__ml_global_data__ml_gen_static_scalar_const_value_8_p_0(ml_backend__ml_lookup_switch__MLDS_ModuleName_10, (MR_String) "bit_vector", (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[14]), ml_backend__ml_lookup_switch__Initializer_65, ml_backend__ml_lookup_switch__Context_11, &ml_backend__ml_lookup_switch__BitVecRval_23, ml_backend__ml_lookup_switch__GlobalData0_21, &ml_backend__ml_lookup_switch__GlobalData_24);
    }
#line 532 "ml_lookup_switch.m"
    ml_backend__ml_lookup_switch__succeeded = ((MR_tag((MR_Word) ml_backend__ml_lookup_switch__BitVecArgRvals_22)) == (MR_mktag((MR_Integer) 1)));
#line 532 "ml_lookup_switch.m"
    if (ml_backend__ml_lookup_switch__succeeded)
#line 532 "ml_lookup_switch.m"
      {
#line 532 "ml_lookup_switch.m"
        ml_backend__ml_lookup_switch__SingleWordRval_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__BitVecArgRvals_22, (MR_Integer) 0)));
#line 532 "ml_lookup_switch.m"
        ml_backend__ml_lookup_switch__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__BitVecArgRvals_22, (MR_Integer) 1)));
#line 532 "ml_lookup_switch.m"
        ml_backend__ml_lookup_switch__succeeded = (ml_backend__ml_lookup_switch__V_32_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 532 "ml_lookup_switch.m"
      }
#line 536 "ml_lookup_switch.m"
    if (ml_backend__ml_lookup_switch__succeeded)
#line 534 "ml_lookup_switch.m"
      {
#line 534 "ml_lookup_switch.m"
        ml_backend__ml_lookup_switch__WordRval_26 = ml_backend__ml_lookup_switch__SingleWordRval_25;
#line 535 "ml_lookup_switch.m"
        ml_backend__ml_lookup_switch__BitNumRval_27 = ml_backend__ml_lookup_switch__IndexRval_12;
#line 535 "ml_lookup_switch.m"
        *ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_31 = ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_30;
#line 534 "ml_lookup_switch.m"
      }
#line 536 "ml_lookup_switch.m"
    else
#line 539 "ml_lookup_switch.m"
      {
#line 539 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__WordNumRval_28;
#line 539 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_35_35;
#line 539 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_36_36;
#line 539 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_40_40;
#line 539 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_41_41;
#line 539 "ml_lookup_switch.m"
        MR_Integer ml_backend__ml_lookup_switch__V_42_42;

#line 539 "ml_lookup_switch.m"
        {
#line 539 "ml_lookup_switch.m"
          ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_p_0(ml_backend__ml_lookup_switch__GlobalData_24, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_30, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_31);
        }
#line 546 "ml_lookup_switch.m"
        {
#line 546 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__V_36_36 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 546 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__V_36_36, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__Log2WordBits_20));
#line 546 "ml_lookup_switch.m"
        }
#line 546 "ml_lookup_switch.m"
        {
#line 546 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__V_35_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 546 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__V_35_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 546 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__V_35_35, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_36_36));
#line 546 "ml_lookup_switch.m"
        }
#line 545 "ml_lookup_switch.m"
        {
#line 545 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__WordNumRval_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 545 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__WordNumRval_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 545 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__WordNumRval_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
#line 545 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__WordNumRval_28, 2) = ((MR_Box) (ml_backend__ml_lookup_switch__IndexRval_12));
#line 545 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__WordNumRval_28, 3) = ((MR_Box) (ml_backend__ml_lookup_switch__V_35_35));
#line 545 "ml_lookup_switch.m"
        }
#line 549 "ml_lookup_switch.m"
        {
#line 549 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__WordRval_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 549 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__WordRval_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 549 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__WordRval_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_lookup_switch_scalar_common_3[3])));
#line 549 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__WordRval_26, 2) = ((MR_Box) (ml_backend__ml_lookup_switch__BitVecRval_23));
#line 549 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__WordRval_26, 3) = ((MR_Box) (ml_backend__ml_lookup_switch__WordNumRval_28));
#line 549 "ml_lookup_switch.m"
        }
#line 557 "ml_lookup_switch.m"
        ml_backend__ml_lookup_switch__V_42_42 = (ml_backend__ml_lookup_switch__WordBits_19 - (MR_Integer) 1);
#line 557 "ml_lookup_switch.m"
        {
#line 557 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__V_41_41 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 557 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__V_41_41, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__V_42_42));
#line 557 "ml_lookup_switch.m"
        }
#line 557 "ml_lookup_switch.m"
        {
#line 557 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__V_40_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 557 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__V_40_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 557 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__V_40_40, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_41_41));
#line 557 "ml_lookup_switch.m"
        }
#line 556 "ml_lookup_switch.m"
        {
#line 556 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__BitNumRval_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 556 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__BitNumRval_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 556 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__BitNumRval_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 556 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__BitNumRval_27, 2) = ((MR_Box) (ml_backend__ml_lookup_switch__IndexRval_12));
#line 556 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__BitNumRval_27, 3) = ((MR_Box) (ml_backend__ml_lookup_switch__V_40_40));
#line 556 "ml_lookup_switch.m"
        }
#line 539 "ml_lookup_switch.m"
      }
#line 560 "ml_lookup_switch.m"
    {
#line 560 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__V_45_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 560 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__V_45_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 560 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 560 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__V_45_45, 2) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[6])));
#line 560 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__V_45_45, 3) = ((MR_Box) (ml_backend__ml_lookup_switch__BitNumRval_27));
#line 560 "ml_lookup_switch.m"
    }
#line 559 "ml_lookup_switch.m"
    {
#line 559 "ml_lookup_switch.m"
      MR_Word base;
#line 559 "ml_lookup_switch.m"
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 559 "ml_lookup_switch.m"
      *ml_backend__ml_lookup_switch__CheckRval_16 = base;
#line 559 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 559 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 559 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_lookup_switch__WordRval_26));
#line 559 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ml_backend__ml_lookup_switch__V_45_45));
#line 559 "ml_lookup_switch.m"
    }
#line 522 "ml_lookup_switch.m"
  }
#line 517 "ml_lookup_switch.m"
}

#line 179 "ml_lookup_switch.m"
static void MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_97_110_116_115_95_102_111_114_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_51_93_95_48_9_p_0_2(
#line 179 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg,
#line 179 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1,
#line 179 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_2,
#line 179 "ml_lookup_switch.m"
  MR_Box * ml_backend__ml_lookup_switch__wrapper_arg_3)
#line 179 "ml_lookup_switch.m"
{
#line 179 "ml_lookup_switch.m"
  {
#line 179 "ml_lookup_switch.m"
    MR_Box ml_backend__ml_lookup_switch__closure = ml_backend__ml_lookup_switch__closure_arg;
#line 179 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__conv4_STATE_VARIABLE_IndexMap_14;

#line 179 "ml_lookup_switch.m"
    {
#line 179 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__ml_record_lookup_for_tagged_cons_id_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__closure, (MR_Integer) 5))), ((MR_Word) ml_backend__ml_lookup_switch__wrapper_arg_1), ((MR_Word) ml_backend__ml_lookup_switch__wrapper_arg_2), &ml_backend__ml_lookup_switch__conv4_STATE_VARIABLE_IndexMap_14);
    }
#line 179 "ml_lookup_switch.m"
    *ml_backend__ml_lookup_switch__wrapper_arg_3 = ((MR_Box) (ml_backend__ml_lookup_switch__conv4_STATE_VARIABLE_IndexMap_14));
#line 179 "ml_lookup_switch.m"
  }
#line 179 "ml_lookup_switch.m"
}

#line 170 "ml_lookup_switch.m"
static void MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_97_110_116_115_95_102_111_114_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_51_93_95_48_9_p_0_1(
#line 170 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg,
#line 170 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1,
#line 170 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_2,
#line 170 "ml_lookup_switch.m"
  MR_Box * ml_backend__ml_lookup_switch__wrapper_arg_3)
#line 170 "ml_lookup_switch.m"
{
#line 170 "ml_lookup_switch.m"
  {
#line 170 "ml_lookup_switch.m"
    MR_Box ml_backend__ml_lookup_switch__closure = ml_backend__ml_lookup_switch__closure_arg;
#line 170 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__conv1_STATE_VARIABLE_IndexMap_14;

#line 170 "ml_lookup_switch.m"
    {
#line 170 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__ml_record_lookup_for_tagged_cons_id_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__closure, (MR_Integer) 5))), ((MR_Word) ml_backend__ml_lookup_switch__wrapper_arg_1), ((MR_Word) ml_backend__ml_lookup_switch__wrapper_arg_2), &ml_backend__ml_lookup_switch__conv1_STATE_VARIABLE_IndexMap_14);
    }
#line 170 "ml_lookup_switch.m"
    *ml_backend__ml_lookup_switch__wrapper_arg_3 = ((MR_Box) (ml_backend__ml_lookup_switch__conv1_STATE_VARIABLE_IndexMap_14));
#line 170 "ml_lookup_switch.m"
  }
#line 170 "ml_lookup_switch.m"
}

#line 141 "ml_lookup_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_97_110_116_115_95_102_111_114_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_51_93_95_48_9_p_0(
#line 141 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__TypeInfo_for_T_57,
#line 141 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__1_1,
#line 141 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__3_3,
#line 141 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__4_4,
#line 141 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__5_5,
#line 141 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_IndexMap_0_6,
#line 141 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_IndexMap_7,
#line 141 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_8,
#line 141 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_9)
#line 141 "ml_lookup_switch.m"
{
#line 149 "ml_lookup_switch.m"
  while (MR_TRUE)
#line 149 "ml_lookup_switch.m"
    {
#line 149 "ml_lookup_switch.m"
      /* tailcall optimized into a loop */
#line 149 "ml_lookup_switch.m"
      {
#line 149 "ml_lookup_switch.m"
        MR_bool ml_backend__ml_lookup_switch__succeeded;

#line 149 "ml_lookup_switch.m"
        if ((ml_backend__ml_lookup_switch__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 149 "ml_lookup_switch.m"
          {
#line 150 "ml_lookup_switch.m"
            *ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_9 = ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_8;
#line 150 "ml_lookup_switch.m"
            *ml_backend__ml_lookup_switch__STATE_VARIABLE_IndexMap_7 = ml_backend__ml_lookup_switch__STATE_VARIABLE_IndexMap_0_6;
#line 149 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__succeeded = MR_TRUE;
#line 149 "ml_lookup_switch.m"
          }
#line 149 "ml_lookup_switch.m"
        else
#line 152 "ml_lookup_switch.m"
          {
#line 152 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__TaggedCase_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__HeadVar__5_5, (MR_Integer) 0)));
#line 152 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__TaggedCases_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__HeadVar__5_5, (MR_Integer) 1)));
#line 152 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__TaggedMainConsId_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TaggedCase_24, (MR_Integer) 0)));
#line 152 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__TaggedOtherConsIds_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TaggedCase_24, (MR_Integer) 1)));
#line 152 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__Goal_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TaggedCase_24, (MR_Integer) 3)));
#line 152 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__GoalExpr_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__Goal_31, (MR_Integer) 0)));
#line 152 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_46_46;
#line 152 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_IndexMap_49_49;
#line 153 "ml_lookup_switch.m"
            MR_Integer ml_backend__ml_lookup_switch__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TaggedCase_24, (MR_Integer) 2)));
#line 154 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch___GoalInfo_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__Goal_31, (MR_Integer) 1)));
#line 173 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__Disjuncts_34;

#line 155 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_lookup_switch__GoalExpr_32)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__GoalExpr_32, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 155 "ml_lookup_switch.m"
            if (ml_backend__ml_lookup_switch__succeeded)
#line 155 "ml_lookup_switch.m"
              {
#line 155 "ml_lookup_switch.m"
                ml_backend__ml_lookup_switch__Disjuncts_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__GoalExpr_32, (MR_Integer) 1)));
#line 158 "ml_lookup_switch.m"
                if ((ml_backend__ml_lookup_switch__Disjuncts_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 157 "ml_lookup_switch.m"
                  {
#line 157 "ml_lookup_switch.m"
                    ml_backend__ml_lookup_switch__STATE_VARIABLE_IndexMap_49_49 = ml_backend__ml_lookup_switch__STATE_VARIABLE_IndexMap_0_6;
#line 157 "ml_lookup_switch.m"
                    ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_46_46 = ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_8;
#line 157 "ml_lookup_switch.m"
                    ml_backend__ml_lookup_switch__succeeded = MR_TRUE;
#line 157 "ml_lookup_switch.m"
                  }
#line 158 "ml_lookup_switch.m"
                else
#line 159 "ml_lookup_switch.m"
                  {
#line 159 "ml_lookup_switch.m"
                    MR_Word ml_backend__ml_lookup_switch__TypeCtorInfo_61_61;
#line 159 "ml_lookup_switch.m"
                    MR_Word ml_backend__ml_lookup_switch__TypeInfo_62_62;
#line 159 "ml_lookup_switch.m"
                    MR_Word ml_backend__ml_lookup_switch__TypeCtorInfo_63_63;
#line 159 "ml_lookup_switch.m"
                    MR_Word ml_backend__ml_lookup_switch__TypeInfo_64_64;
#line 159 "ml_lookup_switch.m"
                    MR_Word ml_backend__ml_lookup_switch__TypeInfo_17_82;
#line 159 "ml_lookup_switch.m"
                    MR_Word ml_backend__ml_lookup_switch__FirstDisjunct_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__Disjuncts_34, (MR_Integer) 0)));
#line 159 "ml_lookup_switch.m"
                    MR_Word ml_backend__ml_lookup_switch__LaterDisjuncts_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__Disjuncts_34, (MR_Integer) 1)));
#line 159 "ml_lookup_switch.m"
                    MR_Word ml_backend__ml_lookup_switch__FirstSoln_37;
#line 159 "ml_lookup_switch.m"
                    MR_Word ml_backend__ml_lookup_switch__LaterSolns_38;
#line 159 "ml_lookup_switch.m"
                    MR_Word ml_backend__ml_lookup_switch__SolnConsts_39;
#line 159 "ml_lookup_switch.m"
                    MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_45_45;
#line 159 "ml_lookup_switch.m"
                    MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_IndexMap_47_47;
#line 159 "ml_lookup_switch.m"
                    MR_Word ml_backend__ml_lookup_switch__V_48_48;
#line 159 "ml_lookup_switch.m"
                    MR_Word ml_backend__ml_lookup_switch__ConsTag_79;
#line 159 "ml_lookup_switch.m"
                    MR_Box ml_backend__ml_lookup_switch__Index_80;
#line 193 "ml_lookup_switch.m"
                    MR_Word ml_backend__ml_lookup_switch___ConsId_78;
#line 194 "ml_lookup_switch.m"
                    void MR_CALL (* ml_backend__ml_lookup_switch__func_0)(MR_Box, MR_Box, MR_Box *);
#line 169 "ml_lookup_switch.m"
                    MR_Box ml_backend__ml_lookup_switch__conv2_STATE_VARIABLE_IndexMap_49_49;

#line 160 "ml_lookup_switch.m"
                    {
#line 160 "ml_lookup_switch.m"
                      ml_backend__ml_lookup_switch__succeeded = hlds__goal_form__goal_is_conj_of_unify_2_p_0(ml_backend__ml_lookup_switch__HeadVar__4_4, ml_backend__ml_lookup_switch__FirstDisjunct_35);
                    }
#line 159 "ml_lookup_switch.m"
                    if (ml_backend__ml_lookup_switch__succeeded)
#line 159 "ml_lookup_switch.m"
                      {
#line 161 "ml_lookup_switch.m"
                        {
#line 161 "ml_lookup_switch.m"
                          ml_backend__ml_lookup_switch__succeeded = hlds__goal_form__all_disjuncts_are_conj_of_unify_2_p_0(ml_backend__ml_lookup_switch__HeadVar__4_4, ml_backend__ml_lookup_switch__LaterDisjuncts_36);
                        }
#line 159 "ml_lookup_switch.m"
                        if (ml_backend__ml_lookup_switch__succeeded)
#line 159 "ml_lookup_switch.m"
                          {
#line 162 "ml_lookup_switch.m"
                            {
#line 162 "ml_lookup_switch.m"
                              ml_backend__ml_code_util__ml_generate_constants_for_arm_5_p_0(ml_backend__ml_lookup_switch__HeadVar__3_3, ml_backend__ml_lookup_switch__FirstDisjunct_35, &ml_backend__ml_lookup_switch__FirstSoln_37, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_8, &ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_45_45);
                            }
#line 164 "ml_lookup_switch.m"
                            {
#line 164 "ml_lookup_switch.m"
                              ml_backend__ml_code_util__ml_generate_constants_for_arms_5_p_0(ml_backend__ml_lookup_switch__HeadVar__3_3, ml_backend__ml_lookup_switch__LaterDisjuncts_36, &ml_backend__ml_lookup_switch__LaterSolns_38, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_45_45, &ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_46_46);
                            }
#line 193 "ml_lookup_switch.m"
                            ml_backend__ml_lookup_switch___ConsId_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TaggedMainConsId_28, (MR_Integer) 0)));
#line 193 "ml_lookup_switch.m"
                            ml_backend__ml_lookup_switch__ConsTag_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TaggedMainConsId_28, (MR_Integer) 1)));
#line 166 "ml_lookup_switch.m"
                            {
#line 166 "ml_lookup_switch.m"
                              ml_backend__ml_lookup_switch__SolnConsts_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 166 "ml_lookup_switch.m"
                              MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__SolnConsts_39, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__FirstSoln_37));
#line 166 "ml_lookup_switch.m"
                              MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__SolnConsts_39, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__LaterSolns_38));
#line 166 "ml_lookup_switch.m"
                            }
#line 194 "ml_lookup_switch.m"
                            ml_backend__ml_lookup_switch__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__1_1, (MR_Integer) 1)));
#line 194 "ml_lookup_switch.m"
                            {
#line 194 "ml_lookup_switch.m"
                              ml_backend__ml_lookup_switch__func_0(((MR_Box) ml_backend__ml_lookup_switch__HeadVar__1_1), ((MR_Box) (ml_backend__ml_lookup_switch__ConsTag_79)), &ml_backend__ml_lookup_switch__Index_80);
                            }
#line 2616 "ml_backend.ml_lookup_switch.c"
                            ml_backend__ml_lookup_switch__TypeInfo_17_82 = (MR_Word) &ml_backend__ml_lookup_switch_scalar_common_1[0];
#line 195 "ml_lookup_switch.m"
                            {
#line 195 "ml_lookup_switch.m"
                              mercury__map__det_insert_4_p_0(ml_backend__ml_lookup_switch__TypeInfo_for_T_57, ml_backend__ml_lookup_switch__TypeInfo_17_82, ml_backend__ml_lookup_switch__Index_80, ((MR_Box) (ml_backend__ml_lookup_switch__SolnConsts_39)), ml_backend__ml_lookup_switch__STATE_VARIABLE_IndexMap_0_6, &ml_backend__ml_lookup_switch__STATE_VARIABLE_IndexMap_47_47);
                            }
#line 2623 "ml_backend.ml_lookup_switch.c"
                            ml_backend__ml_lookup_switch__TypeCtorInfo_61_61 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0;
#line 2625 "ml_backend.ml_lookup_switch.c"
                            ml_backend__ml_lookup_switch__TypeCtorInfo_63_63 = (MR_Word) &mercury__tree234__tree234__type_ctor_info_tree234_2;
#line 2627 "ml_backend.ml_lookup_switch.c"
                            ml_backend__ml_lookup_switch__TypeInfo_62_62 = (MR_Word) &ml_backend__ml_lookup_switch_scalar_common_1[0];
#line 170 "ml_lookup_switch.m"
                            {
#line 170 "ml_lookup_switch.m"
                              ml_backend__ml_lookup_switch__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 170 "ml_lookup_switch.m"
                              MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_48_48, 0) = ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_8[0]));
#line 170 "ml_lookup_switch.m"
                              MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_48_48, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_97_110_116_115_95_102_111_114_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_51_93_95_48_9_p_0_1));
#line 170 "ml_lookup_switch.m"
                              MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_48_48, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 170 "ml_lookup_switch.m"
                              MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_48_48, 3) = ((MR_Box) (ml_backend__ml_lookup_switch__TypeInfo_for_T_57));
#line 170 "ml_lookup_switch.m"
                              MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_48_48, 4) = ((MR_Box) (ml_backend__ml_lookup_switch__HeadVar__1_1));
#line 170 "ml_lookup_switch.m"
                              MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_48_48, 5) = ((MR_Box) (ml_backend__ml_lookup_switch__SolnConsts_39));
#line 170 "ml_lookup_switch.m"
                            }
#line 2647 "ml_backend.ml_lookup_switch.c"
                            {
#line 2649 "ml_backend.ml_lookup_switch.c"
                              ml_backend__ml_lookup_switch__TypeInfo_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2651 "ml_backend.ml_lookup_switch.c"
                              MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TypeInfo_64_64, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__TypeCtorInfo_63_63));
#line 2653 "ml_backend.ml_lookup_switch.c"
                              MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TypeInfo_64_64, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__TypeInfo_for_T_57));
#line 2655 "ml_backend.ml_lookup_switch.c"
                              MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TypeInfo_64_64, 2) = ((MR_Box) (ml_backend__ml_lookup_switch__TypeInfo_62_62));
#line 2657 "ml_backend.ml_lookup_switch.c"
                            }
#line 169 "ml_lookup_switch.m"
                            {
#line 169 "ml_lookup_switch.m"
                              mercury__list__foldl_4_p_0(ml_backend__ml_lookup_switch__TypeCtorInfo_61_61, ml_backend__ml_lookup_switch__TypeInfo_64_64, ml_backend__ml_lookup_switch__V_48_48, ml_backend__ml_lookup_switch__TaggedOtherConsIds_29, ((MR_Box) (ml_backend__ml_lookup_switch__STATE_VARIABLE_IndexMap_47_47)), &ml_backend__ml_lookup_switch__conv2_STATE_VARIABLE_IndexMap_49_49);
                            }
#line 169 "ml_lookup_switch.m"
                            ml_backend__ml_lookup_switch__STATE_VARIABLE_IndexMap_49_49 = ((MR_Word) ml_backend__ml_lookup_switch__conv2_STATE_VARIABLE_IndexMap_49_49);
#line 169 "ml_lookup_switch.m"
                            ml_backend__ml_lookup_switch__succeeded = MR_TRUE;
#line 159 "ml_lookup_switch.m"
                          }
#line 159 "ml_lookup_switch.m"
                      }
#line 159 "ml_lookup_switch.m"
                  }
#line 155 "ml_lookup_switch.m"
              }
#line 155 "ml_lookup_switch.m"
            else
#line 174 "ml_lookup_switch.m"
              {
#line 174 "ml_lookup_switch.m"
                MR_Word ml_backend__ml_lookup_switch__TypeCtorInfo_68_68;
#line 174 "ml_lookup_switch.m"
                MR_Word ml_backend__ml_lookup_switch__TypeInfo_69_69;
#line 174 "ml_lookup_switch.m"
                MR_Word ml_backend__ml_lookup_switch__TypeCtorInfo_70_70;
#line 174 "ml_lookup_switch.m"
                MR_Word ml_backend__ml_lookup_switch__TypeInfo_71_71;
#line 174 "ml_lookup_switch.m"
                MR_Word ml_backend__ml_lookup_switch__TypeInfo_17_93;
#line 174 "ml_lookup_switch.m"
                MR_Word ml_backend__ml_lookup_switch__Soln_40;
#line 174 "ml_lookup_switch.m"
                MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_IndexMap_51_51;
#line 174 "ml_lookup_switch.m"
                MR_Word ml_backend__ml_lookup_switch__V_52_52;
#line 174 "ml_lookup_switch.m"
                MR_Word ml_backend__ml_lookup_switch__SolnConsts_56;
#line 174 "ml_lookup_switch.m"
                MR_Word ml_backend__ml_lookup_switch__ConsTag_90;
#line 174 "ml_lookup_switch.m"
                MR_Box ml_backend__ml_lookup_switch__Index_91;
#line 193 "ml_lookup_switch.m"
                MR_Word ml_backend__ml_lookup_switch___ConsId_89;
#line 194 "ml_lookup_switch.m"
                void MR_CALL (* ml_backend__ml_lookup_switch__func_3)(MR_Box, MR_Box, MR_Box *);
#line 179 "ml_lookup_switch.m"
                MR_Box ml_backend__ml_lookup_switch__conv5_STATE_VARIABLE_IndexMap_49_49;

#line 174 "ml_lookup_switch.m"
                {
#line 174 "ml_lookup_switch.m"
                  ml_backend__ml_lookup_switch__succeeded = hlds__goal_form__goal_is_conj_of_unify_2_p_0(ml_backend__ml_lookup_switch__HeadVar__4_4, ml_backend__ml_lookup_switch__Goal_31);
                }
#line 174 "ml_lookup_switch.m"
                if (ml_backend__ml_lookup_switch__succeeded)
#line 174 "ml_lookup_switch.m"
                  {
#line 175 "ml_lookup_switch.m"
                    {
#line 175 "ml_lookup_switch.m"
                      ml_backend__ml_code_util__ml_generate_constants_for_arm_5_p_0(ml_backend__ml_lookup_switch__HeadVar__3_3, ml_backend__ml_lookup_switch__Goal_31, &ml_backend__ml_lookup_switch__Soln_40, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_8, &ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_46_46);
                    }
#line 193 "ml_lookup_switch.m"
                    ml_backend__ml_lookup_switch___ConsId_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TaggedMainConsId_28, (MR_Integer) 0)));
#line 193 "ml_lookup_switch.m"
                    ml_backend__ml_lookup_switch__ConsTag_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TaggedMainConsId_28, (MR_Integer) 1)));
#line 176 "ml_lookup_switch.m"
                    {
#line 176 "ml_lookup_switch.m"
                      ml_backend__ml_lookup_switch__SolnConsts_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 176 "ml_lookup_switch.m"
                      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__SolnConsts_56, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__Soln_40));
#line 176 "ml_lookup_switch.m"
                    }
#line 194 "ml_lookup_switch.m"
                    ml_backend__ml_lookup_switch__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__1_1, (MR_Integer) 1)));
#line 194 "ml_lookup_switch.m"
                    {
#line 194 "ml_lookup_switch.m"
                      ml_backend__ml_lookup_switch__func_3(((MR_Box) ml_backend__ml_lookup_switch__HeadVar__1_1), ((MR_Box) (ml_backend__ml_lookup_switch__ConsTag_90)), &ml_backend__ml_lookup_switch__Index_91);
                    }
#line 2742 "ml_backend.ml_lookup_switch.c"
                    ml_backend__ml_lookup_switch__TypeInfo_17_93 = (MR_Word) &ml_backend__ml_lookup_switch_scalar_common_1[0];
#line 195 "ml_lookup_switch.m"
                    {
#line 195 "ml_lookup_switch.m"
                      mercury__map__det_insert_4_p_0(ml_backend__ml_lookup_switch__TypeInfo_for_T_57, ml_backend__ml_lookup_switch__TypeInfo_17_93, ml_backend__ml_lookup_switch__Index_91, ((MR_Box) (ml_backend__ml_lookup_switch__SolnConsts_56)), ml_backend__ml_lookup_switch__STATE_VARIABLE_IndexMap_0_6, &ml_backend__ml_lookup_switch__STATE_VARIABLE_IndexMap_51_51);
                    }
#line 2749 "ml_backend.ml_lookup_switch.c"
                    ml_backend__ml_lookup_switch__TypeCtorInfo_68_68 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0;
#line 2751 "ml_backend.ml_lookup_switch.c"
                    ml_backend__ml_lookup_switch__TypeCtorInfo_70_70 = (MR_Word) &mercury__tree234__tree234__type_ctor_info_tree234_2;
#line 2753 "ml_backend.ml_lookup_switch.c"
                    ml_backend__ml_lookup_switch__TypeInfo_69_69 = (MR_Word) &ml_backend__ml_lookup_switch_scalar_common_1[0];
#line 179 "ml_lookup_switch.m"
                    {
#line 179 "ml_lookup_switch.m"
                      ml_backend__ml_lookup_switch__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 179 "ml_lookup_switch.m"
                      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_52_52, 0) = ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_8[0]));
#line 179 "ml_lookup_switch.m"
                      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_52_52, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_97_110_116_115_95_102_111_114_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_51_93_95_48_9_p_0_2));
#line 179 "ml_lookup_switch.m"
                      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_52_52, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 179 "ml_lookup_switch.m"
                      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_52_52, 3) = ((MR_Box) (ml_backend__ml_lookup_switch__TypeInfo_for_T_57));
#line 179 "ml_lookup_switch.m"
                      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_52_52, 4) = ((MR_Box) (ml_backend__ml_lookup_switch__HeadVar__1_1));
#line 179 "ml_lookup_switch.m"
                      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_52_52, 5) = ((MR_Box) (ml_backend__ml_lookup_switch__SolnConsts_56));
#line 179 "ml_lookup_switch.m"
                    }
#line 2773 "ml_backend.ml_lookup_switch.c"
                    {
#line 2775 "ml_backend.ml_lookup_switch.c"
                      ml_backend__ml_lookup_switch__TypeInfo_71_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2777 "ml_backend.ml_lookup_switch.c"
                      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TypeInfo_71_71, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__TypeCtorInfo_70_70));
#line 2779 "ml_backend.ml_lookup_switch.c"
                      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TypeInfo_71_71, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__TypeInfo_for_T_57));
#line 2781 "ml_backend.ml_lookup_switch.c"
                      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TypeInfo_71_71, 2) = ((MR_Box) (ml_backend__ml_lookup_switch__TypeInfo_69_69));
#line 2783 "ml_backend.ml_lookup_switch.c"
                    }
#line 179 "ml_lookup_switch.m"
                    {
#line 179 "ml_lookup_switch.m"
                      mercury__list__foldl_4_p_0(ml_backend__ml_lookup_switch__TypeCtorInfo_68_68, ml_backend__ml_lookup_switch__TypeInfo_71_71, ml_backend__ml_lookup_switch__V_52_52, ml_backend__ml_lookup_switch__TaggedOtherConsIds_29, ((MR_Box) (ml_backend__ml_lookup_switch__STATE_VARIABLE_IndexMap_51_51)), &ml_backend__ml_lookup_switch__conv5_STATE_VARIABLE_IndexMap_49_49);
                    }
#line 179 "ml_lookup_switch.m"
                    ml_backend__ml_lookup_switch__STATE_VARIABLE_IndexMap_49_49 = ((MR_Word) ml_backend__ml_lookup_switch__conv5_STATE_VARIABLE_IndexMap_49_49);
#line 179 "ml_lookup_switch.m"
                    ml_backend__ml_lookup_switch__succeeded = MR_TRUE;
#line 174 "ml_lookup_switch.m"
                  }
#line 174 "ml_lookup_switch.m"
              }
#line 152 "ml_lookup_switch.m"
            if (ml_backend__ml_lookup_switch__succeeded)
#line 182 "ml_lookup_switch.m"
              {
#line 182 "ml_lookup_switch.m"
                /* direct tailcall eliminated */
#line 182 "ml_lookup_switch.m"
                {
#line 182 "ml_lookup_switch.m"
                  MR_Word ml_backend__ml_lookup_switch__HeadVar__5__tmp_copy_5 = ml_backend__ml_lookup_switch__TaggedCases_25;
#line 182 "ml_lookup_switch.m"
                  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_IndexMap_0__tmp_copy_6 = ml_backend__ml_lookup_switch__STATE_VARIABLE_IndexMap_49_49;
#line 182 "ml_lookup_switch.m"
                  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0__tmp_copy_8 = ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_46_46;

#line 182 "ml_lookup_switch.m"
                  ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_8 = ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0__tmp_copy_8;
#line 182 "ml_lookup_switch.m"
                  ml_backend__ml_lookup_switch__STATE_VARIABLE_IndexMap_0_6 = ml_backend__ml_lookup_switch__STATE_VARIABLE_IndexMap_0__tmp_copy_6;
#line 182 "ml_lookup_switch.m"
                  ml_backend__ml_lookup_switch__HeadVar__5_5 = ml_backend__ml_lookup_switch__HeadVar__5__tmp_copy_5;
#line 182 "ml_lookup_switch.m"
                }
#line 182 "ml_lookup_switch.m"
                continue;
#line 182 "ml_lookup_switch.m"
              }
#line 152 "ml_lookup_switch.m"
          }
#line 149 "ml_lookup_switch.m"
        return ml_backend__ml_lookup_switch__succeeded;
#line 149 "ml_lookup_switch.m"
      }
#line 149 "ml_lookup_switch.m"
      break;
#line 149 "ml_lookup_switch.m"
    }
#line 141 "ml_lookup_switch.m"
}

#line 138 "ml_lookup_switch.m"
static MR_Box MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_105_115_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_54_93_95_48_8_p_0_1(
#line 138 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg,
#line 138 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1)
#line 138 "ml_lookup_switch.m"
{
#line 138 "ml_lookup_switch.m"
  {
#line 138 "ml_lookup_switch.m"
    MR_Box ml_backend__ml_lookup_switch__wrapper_arg_2;
#line 138 "ml_lookup_switch.m"
    MR_Box ml_backend__ml_lookup_switch__closure = ml_backend__ml_lookup_switch__closure_arg;
#line 138 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__conv0_HeadVar__3_3;

#line 138 "ml_lookup_switch.m"
    {
#line 138 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__conv0_HeadVar__3_3 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_lookup_switch__wrapper_arg_1));
    }
#line 138 "ml_lookup_switch.m"
    ml_backend__ml_lookup_switch__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_lookup_switch__conv0_HeadVar__3_3));
#line 138 "ml_lookup_switch.m"
    return ml_backend__ml_lookup_switch__wrapper_arg_2;
#line 138 "ml_lookup_switch.m"
  }
#line 138 "ml_lookup_switch.m"
}

#line 54 "ml_lookup_switch.m"
MR_bool MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_105_115_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_54_93_95_48_8_p_0(
#line 54 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__TypeInfo_for_Key_32,
#line 54 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__GetTag_9,
#line 54 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__SwitchVar_10,
#line 54 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__TaggedCases_11,
#line 54 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__NonLocals_12,
#line 54 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__LookupSwitchInfo_14,
#line 54 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_26,
#line 54 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_27)
#line 54 "ml_lookup_switch.m"
{
#line 117 "ml_lookup_switch.m"
  {
#line 117 "ml_lookup_switch.m"
    MR_bool ml_backend__ml_lookup_switch__succeeded;
#line 117 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__TypeCtorInfo_33_33 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 117 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__TypeInfo_34_34;
#line 117 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__TypeCtorInfo_36_36;
#line 117 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__TypeCtorInfo_37_37;
#line 117 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__OtherNonLocals_16;
#line 117 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__OutVars_17;
#line 117 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__CaseSolnMap_18;
#line 117 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__CaseSolns_19;
#line 117 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__CaseConsts_21;
#line 117 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__ModuleInfo_22;
#line 117 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__VarTypes_23;
#line 117 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__OutTypes_24;
#line 117 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__FieldTypes_25;
#line 117 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__V_28_28;
#line 117 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__V_31_31;
#line 131 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__CaseValuePairs_20;
#line 129 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__TypeCtorInfo_35_35;

#line 118 "ml_lookup_switch.m"
    {
#line 118 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__succeeded = parse_tree__set_of_var__remove_3_p_0(ml_backend__ml_lookup_switch__TypeCtorInfo_33_33, ml_backend__ml_lookup_switch__SwitchVar_10, ml_backend__ml_lookup_switch__NonLocals_12, &ml_backend__ml_lookup_switch__OtherNonLocals_16);
    }
#line 117 "ml_lookup_switch.m"
    if (ml_backend__ml_lookup_switch__succeeded)
#line 117 "ml_lookup_switch.m"
      {
#line 119 "ml_lookup_switch.m"
        {
#line 119 "ml_lookup_switch.m"
          parse_tree__set_of_var__to_sorted_list_2_p_0(ml_backend__ml_lookup_switch__TypeCtorInfo_33_33, ml_backend__ml_lookup_switch__OtherNonLocals_16, &ml_backend__ml_lookup_switch__OutVars_17);
        }
#line 2944 "ml_backend.ml_lookup_switch.c"
        ml_backend__ml_lookup_switch__TypeInfo_34_34 = (MR_Word) &ml_backend__ml_lookup_switch_scalar_common_1[0];
#line 127 "ml_lookup_switch.m"
        {
#line 127 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__V_28_28 = mercury__map__init_0_f_0(ml_backend__ml_lookup_switch__TypeInfo_for_Key_32, ml_backend__ml_lookup_switch__TypeInfo_34_34);
        }
#line 126 "ml_lookup_switch.m"
        {
#line 126 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__succeeded = ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_97_110_116_115_95_102_111_114_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_51_93_95_48_9_p_0(ml_backend__ml_lookup_switch__TypeInfo_for_Key_32, ml_backend__ml_lookup_switch__GetTag_9, ml_backend__ml_lookup_switch__OutVars_17, ml_backend__ml_lookup_switch__OtherNonLocals_16, ml_backend__ml_lookup_switch__TaggedCases_11, ml_backend__ml_lookup_switch__V_28_28, &ml_backend__ml_lookup_switch__CaseSolnMap_18, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_26, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_27);
        }
#line 117 "ml_lookup_switch.m"
        if (ml_backend__ml_lookup_switch__succeeded)
#line 117 "ml_lookup_switch.m"
          {
#line 128 "ml_lookup_switch.m"
            {
#line 128 "ml_lookup_switch.m"
              mercury__map__to_assoc_list_2_p_0(ml_backend__ml_lookup_switch__TypeInfo_for_Key_32, ml_backend__ml_lookup_switch__TypeInfo_34_34, ml_backend__ml_lookup_switch__CaseSolnMap_18, &ml_backend__ml_lookup_switch__CaseSolns_19);
            }
#line 2965 "ml_backend.ml_lookup_switch.c"
            ml_backend__ml_lookup_switch__TypeCtorInfo_35_35 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0;
#line 129 "ml_lookup_switch.m"
            {
#line 129 "ml_lookup_switch.m"
              ml_backend__ml_lookup_switch__succeeded = backend_libs__switch_util__project_all_to_one_solution_2_p_0(ml_backend__ml_lookup_switch__TypeInfo_for_Key_32, ml_backend__ml_lookup_switch__TypeCtorInfo_35_35, ml_backend__ml_lookup_switch__CaseSolns_19, &ml_backend__ml_lookup_switch__CaseValuePairs_20);
            }
#line 131 "ml_lookup_switch.m"
            if (ml_backend__ml_lookup_switch__succeeded)
#line 130 "ml_lookup_switch.m"
              {
#line 130 "ml_lookup_switch.m"
                ml_backend__ml_lookup_switch__CaseConsts_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 130 "ml_lookup_switch.m"
                MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__CaseConsts_21, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__CaseValuePairs_20));
#line 130 "ml_lookup_switch.m"
              }
#line 131 "ml_lookup_switch.m"
            else
#line 132 "ml_lookup_switch.m"
              {
#line 132 "ml_lookup_switch.m"
                mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 132 "ml_lookup_switch.m"
                {
#line 132 "ml_lookup_switch.m"
                  ml_backend__ml_lookup_switch__CaseConsts_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 132 "ml_lookup_switch.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__CaseConsts_21, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__CaseSolns_19));
#line 132 "ml_lookup_switch.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__CaseConsts_21, 1) = NULL;
#line 132 "ml_lookup_switch.m"
                }
#line 132 "ml_lookup_switch.m"
              }
#line 134 "ml_lookup_switch.m"
            {
#line 134 "ml_lookup_switch.m"
              ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(*ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_27, &ml_backend__ml_lookup_switch__ModuleInfo_22);
            }
#line 135 "ml_lookup_switch.m"
            {
#line 135 "ml_lookup_switch.m"
              ml_backend__ml_gen_info__ml_gen_info_get_var_types_2_p_0(*ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_27, &ml_backend__ml_lookup_switch__VarTypes_23);
            }
#line 136 "ml_lookup_switch.m"
            {
#line 136 "ml_lookup_switch.m"
              parse_tree__prog_data__lookup_var_types_3_p_0(ml_backend__ml_lookup_switch__VarTypes_23, ml_backend__ml_lookup_switch__OutVars_17, &ml_backend__ml_lookup_switch__OutTypes_24);
            }
#line 3015 "ml_backend.ml_lookup_switch.c"
            ml_backend__ml_lookup_switch__TypeCtorInfo_36_36 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 3017 "ml_backend.ml_lookup_switch.c"
            ml_backend__ml_lookup_switch__TypeCtorInfo_37_37 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0;
#line 138 "ml_lookup_switch.m"
            {
#line 138 "ml_lookup_switch.m"
              ml_backend__ml_lookup_switch__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 138 "ml_lookup_switch.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_31_31, 0) = ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_6[0]));
#line 138 "ml_lookup_switch.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_31_31, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_105_115_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_54_93_95_48_8_p_0_1));
#line 138 "ml_lookup_switch.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_31_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 138 "ml_lookup_switch.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_31_31, 3) = ((MR_Box) (ml_backend__ml_lookup_switch__ModuleInfo_22));
#line 138 "ml_lookup_switch.m"
            }
#line 138 "ml_lookup_switch.m"
            {
#line 138 "ml_lookup_switch.m"
              ml_backend__ml_lookup_switch__FieldTypes_25 = mercury__list__map_2_f_0(ml_backend__ml_lookup_switch__TypeCtorInfo_36_36, ml_backend__ml_lookup_switch__TypeCtorInfo_37_37, ml_backend__ml_lookup_switch__V_31_31, ml_backend__ml_lookup_switch__OutTypes_24);
            }
#line 139 "ml_lookup_switch.m"
            {
#line 139 "ml_lookup_switch.m"
              MR_Word base;
#line 139 "ml_lookup_switch.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 139 "ml_lookup_switch.m"
              *ml_backend__ml_lookup_switch__LookupSwitchInfo_14 = base;
#line 139 "ml_lookup_switch.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__CaseConsts_21));
#line 139 "ml_lookup_switch.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__OutVars_17));
#line 139 "ml_lookup_switch.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_lookup_switch__FieldTypes_25));
#line 139 "ml_lookup_switch.m"
            }
#line 139 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__succeeded = MR_TRUE;
#line 117 "ml_lookup_switch.m"
          }
#line 117 "ml_lookup_switch.m"
      }
#line 117 "ml_lookup_switch.m"
    return ml_backend__ml_lookup_switch__succeeded;
#line 117 "ml_lookup_switch.m"
  }
#line 54 "ml_lookup_switch.m"
}

#line 441 "ml_lookup_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__IntroducedFrom__pred__ml_gen_several_soln_lookup_switch__441__1_2_p_0(
#line 441 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HadDummyRows_57,
#line 441 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__2_124)
#line 441 "ml_lookup_switch.m"
{
#line 441 "ml_lookup_switch.m"
  {
#line 441 "ml_lookup_switch.m"
    MR_bool ml_backend__ml_lookup_switch__succeeded = (ml_backend__ml_lookup_switch__HadDummyRows_57 == ml_backend__ml_lookup_switch__HeadVar__2_124);

#line 441 "ml_lookup_switch.m"
    return ml_backend__ml_lookup_switch__succeeded;
#line 441 "ml_lookup_switch.m"
  }
#line 441 "ml_lookup_switch.m"
}

#line 434 "ml_lookup_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__IntroducedFrom__pred__ml_gen_several_soln_lookup_switch__434__1_2_p_0(
#line 434 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HadDummyRows_57,
#line 434 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__2_138)
#line 434 "ml_lookup_switch.m"
{
#line 434 "ml_lookup_switch.m"
  {
#line 434 "ml_lookup_switch.m"
    MR_bool ml_backend__ml_lookup_switch__succeeded = (ml_backend__ml_lookup_switch__HadDummyRows_57 == ml_backend__ml_lookup_switch__HeadVar__2_138);

#line 434 "ml_lookup_switch.m"
    return ml_backend__ml_lookup_switch__succeeded;
#line 434 "ml_lookup_switch.m"
  }
#line 434 "ml_lookup_switch.m"
}

#line 273 "ml_lookup_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__IntroducedFrom__pred__ml_gen_simple_lookup_switch__273__1_2_p_0(
#line 273 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__NeedBitVecCheck_22,
#line 273 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__2_86)
#line 273 "ml_lookup_switch.m"
{
#line 273 "ml_lookup_switch.m"
  {
#line 273 "ml_lookup_switch.m"
    MR_bool ml_backend__ml_lookup_switch__succeeded = (ml_backend__ml_lookup_switch__NeedBitVecCheck_22 == ml_backend__ml_lookup_switch__HeadVar__2_86);

#line 273 "ml_lookup_switch.m"
    return ml_backend__ml_lookup_switch__succeeded;
#line 273 "ml_lookup_switch.m"
  }
#line 273 "ml_lookup_switch.m"
}

#line 271 "ml_lookup_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__IntroducedFrom__pred__ml_gen_simple_lookup_switch__271__1_2_p_0(
#line 271 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__NeedRangeCheck_23,
#line 271 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__2_81)
#line 271 "ml_lookup_switch.m"
{
#line 271 "ml_lookup_switch.m"
  {
#line 271 "ml_lookup_switch.m"
    MR_bool ml_backend__ml_lookup_switch__succeeded = (ml_backend__ml_lookup_switch__NeedRangeCheck_23 == ml_backend__ml_lookup_switch__HeadVar__2_81);

#line 271 "ml_lookup_switch.m"
    return ml_backend__ml_lookup_switch__succeeded;
#line 271 "ml_lookup_switch.m"
  }
#line 271 "ml_lookup_switch.m"
}

#line 218 "ml_lookup_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__IntroducedFrom__pred__ml_gen_lookup_switch__218__1_2_p_0(
#line 218 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__CodeModel_14,
#line 218 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__2_40)
#line 218 "ml_lookup_switch.m"
{
#line 218 "ml_lookup_switch.m"
  {
#line 218 "ml_lookup_switch.m"
    MR_bool ml_backend__ml_lookup_switch__succeeded = (ml_backend__ml_lookup_switch__CodeModel_14 == ml_backend__ml_lookup_switch__HeadVar__2_40);

#line 218 "ml_lookup_switch.m"
    return ml_backend__ml_lookup_switch__succeeded;
#line 218 "ml_lookup_switch.m"
  }
#line 218 "ml_lookup_switch.m"
}

#line 74 "ml_lookup_switch.m"
void MR_CALL 
ml_backend__ml_lookup_switch____Compare____ml_several_soln_lookup_vars_0_0(
#line 74 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__HeadVar__1_1,
#line 74 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__2_2,
#line 74 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__3_3)
#line 74 "ml_lookup_switch.m"
{
#line 74 "ml_lookup_switch.m"
  {
#line 74 "ml_lookup_switch.m"
    MR_bool ml_backend__ml_lookup_switch__succeeded;
#line 74 "ml_lookup_switch.m"
    MR_Integer ml_backend__ml_lookup_switch__CastX_21 = (MR_Integer) ml_backend__ml_lookup_switch__HeadVar__2_2;
#line 74 "ml_lookup_switch.m"
    MR_Integer ml_backend__ml_lookup_switch__CastY_22 = (MR_Integer) ml_backend__ml_lookup_switch__HeadVar__3_3;

#line 74 "ml_lookup_switch.m"
    ml_backend__ml_lookup_switch__succeeded = (ml_backend__ml_lookup_switch__CastX_21 == ml_backend__ml_lookup_switch__CastY_22);
#line 74 "ml_lookup_switch.m"
    if (ml_backend__ml_lookup_switch__succeeded)
#line 3196 "ml_backend.ml_lookup_switch.c"
      *ml_backend__ml_lookup_switch__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "ml_lookup_switch.m"
    else
#line 74 "ml_lookup_switch.m"
      {
#line 74 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__2_2, (MR_Integer) 0)));
#line 74 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__2_2, (MR_Integer) 1)));
#line 74 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__2_2, (MR_Integer) 2)));
#line 74 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__2_2, (MR_Integer) 3)));
#line 74 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__2_2, (MR_Integer) 4)));
#line 74 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__2_2, (MR_Integer) 5)));
#line 74 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__3_3, (MR_Integer) 0)));
#line 74 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__3_3, (MR_Integer) 1)));
#line 74 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__3_3, (MR_Integer) 2)));
#line 74 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__3_3, (MR_Integer) 3)));
#line 74 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__3_3, (MR_Integer) 4)));
#line 74 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__3_3, (MR_Integer) 5)));
#line 74 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_16_16;

#line 74 "ml_lookup_switch.m"
        {
#line 74 "ml_lookup_switch.m"
          ml_backend__mlds____Compare____mlds_lval_0_0(&ml_backend__ml_lookup_switch__V_16_16, ml_backend__ml_lookup_switch__V_4_4, ml_backend__ml_lookup_switch__V_10_10);
        }
#line 3234 "ml_backend.ml_lookup_switch.c"
        ml_backend__ml_lookup_switch__succeeded = (ml_backend__ml_lookup_switch__V_16_16 == (MR_Integer) 0);
#line 74 "ml_lookup_switch.m"
        ml_backend__ml_lookup_switch__succeeded = !(ml_backend__ml_lookup_switch__succeeded);
#line 74 "ml_lookup_switch.m"
        if (ml_backend__ml_lookup_switch__succeeded)
#line 74 "ml_lookup_switch.m"
          *ml_backend__ml_lookup_switch__HeadVar__1_1 = ml_backend__ml_lookup_switch__V_16_16;
#line 74 "ml_lookup_switch.m"
        else
#line 74 "ml_lookup_switch.m"
          {
#line 74 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__V_17_17;

#line 74 "ml_lookup_switch.m"
            {
#line 74 "ml_lookup_switch.m"
              ml_backend__mlds____Compare____mlds_lval_0_0(&ml_backend__ml_lookup_switch__V_17_17, ml_backend__ml_lookup_switch__V_5_5, ml_backend__ml_lookup_switch__V_11_11);
            }
#line 3254 "ml_backend.ml_lookup_switch.c"
            ml_backend__ml_lookup_switch__succeeded = (ml_backend__ml_lookup_switch__V_17_17 == (MR_Integer) 0);
#line 74 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__succeeded = !(ml_backend__ml_lookup_switch__succeeded);
#line 74 "ml_lookup_switch.m"
            if (ml_backend__ml_lookup_switch__succeeded)
#line 74 "ml_lookup_switch.m"
              *ml_backend__ml_lookup_switch__HeadVar__1_1 = ml_backend__ml_lookup_switch__V_17_17;
#line 74 "ml_lookup_switch.m"
            else
#line 74 "ml_lookup_switch.m"
              {
#line 74 "ml_lookup_switch.m"
                MR_Word ml_backend__ml_lookup_switch__V_18_18;

#line 74 "ml_lookup_switch.m"
                {
#line 74 "ml_lookup_switch.m"
                  ml_backend__mlds____Compare____mlds_lval_0_0(&ml_backend__ml_lookup_switch__V_18_18, ml_backend__ml_lookup_switch__V_6_6, ml_backend__ml_lookup_switch__V_12_12);
                }
#line 3274 "ml_backend.ml_lookup_switch.c"
                ml_backend__ml_lookup_switch__succeeded = (ml_backend__ml_lookup_switch__V_18_18 == (MR_Integer) 0);
#line 74 "ml_lookup_switch.m"
                ml_backend__ml_lookup_switch__succeeded = !(ml_backend__ml_lookup_switch__succeeded);
#line 74 "ml_lookup_switch.m"
                if (ml_backend__ml_lookup_switch__succeeded)
#line 74 "ml_lookup_switch.m"
                  *ml_backend__ml_lookup_switch__HeadVar__1_1 = ml_backend__ml_lookup_switch__V_18_18;
#line 74 "ml_lookup_switch.m"
                else
#line 74 "ml_lookup_switch.m"
                  {
#line 74 "ml_lookup_switch.m"
                    MR_Word ml_backend__ml_lookup_switch__V_19_19;

#line 74 "ml_lookup_switch.m"
                    {
#line 74 "ml_lookup_switch.m"
                      ml_backend__mlds____Compare____statement_0_0(&ml_backend__ml_lookup_switch__V_19_19, ml_backend__ml_lookup_switch__V_7_7, ml_backend__ml_lookup_switch__V_13_13);
                    }
#line 3294 "ml_backend.ml_lookup_switch.c"
                    ml_backend__ml_lookup_switch__succeeded = (ml_backend__ml_lookup_switch__V_19_19 == (MR_Integer) 0);
#line 74 "ml_lookup_switch.m"
                    ml_backend__ml_lookup_switch__succeeded = !(ml_backend__ml_lookup_switch__succeeded);
#line 74 "ml_lookup_switch.m"
                    if (ml_backend__ml_lookup_switch__succeeded)
#line 74 "ml_lookup_switch.m"
                      *ml_backend__ml_lookup_switch__HeadVar__1_1 = ml_backend__ml_lookup_switch__V_19_19;
#line 74 "ml_lookup_switch.m"
                    else
#line 74 "ml_lookup_switch.m"
                      {
#line 74 "ml_lookup_switch.m"
                        MR_Word ml_backend__ml_lookup_switch__V_20_20;

#line 74 "ml_lookup_switch.m"
                        {
#line 74 "ml_lookup_switch.m"
                          ml_backend__mlds____Compare____statement_0_0(&ml_backend__ml_lookup_switch__V_20_20, ml_backend__ml_lookup_switch__V_8_8, ml_backend__ml_lookup_switch__V_14_14);
                        }
#line 3314 "ml_backend.ml_lookup_switch.c"
                        ml_backend__ml_lookup_switch__succeeded = (ml_backend__ml_lookup_switch__V_20_20 == (MR_Integer) 0);
#line 74 "ml_lookup_switch.m"
                        ml_backend__ml_lookup_switch__succeeded = !(ml_backend__ml_lookup_switch__succeeded);
#line 74 "ml_lookup_switch.m"
                        if (ml_backend__ml_lookup_switch__succeeded)
#line 74 "ml_lookup_switch.m"
                          *ml_backend__ml_lookup_switch__HeadVar__1_1 = ml_backend__ml_lookup_switch__V_20_20;
#line 74 "ml_lookup_switch.m"
                        else
#line 74 "ml_lookup_switch.m"
                          {
#line 74 "ml_lookup_switch.m"
                            {
#line 74 "ml_lookup_switch.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_lookup_switch_scalar_common_1[5], ml_backend__ml_lookup_switch__HeadVar__1_1, ((MR_Box) (ml_backend__ml_lookup_switch__V_9_9)), ((MR_Box) (ml_backend__ml_lookup_switch__V_15_15)));
#line 74 "ml_lookup_switch.m"
                              return;
                            }
#line 74 "ml_lookup_switch.m"
                          }
#line 74 "ml_lookup_switch.m"
                      }
#line 74 "ml_lookup_switch.m"
                  }
#line 74 "ml_lookup_switch.m"
              }
#line 74 "ml_lookup_switch.m"
          }
#line 74 "ml_lookup_switch.m"
      }
#line 74 "ml_lookup_switch.m"
  }
#line 74 "ml_lookup_switch.m"
}

#line 74 "ml_lookup_switch.m"
MR_bool MR_CALL 
ml_backend__ml_lookup_switch____Unify____ml_several_soln_lookup_vars_0_0(
#line 74 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__1_1,
#line 74 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__2_2)
#line 74 "ml_lookup_switch.m"
{
#line 74 "ml_lookup_switch.m"
  {
#line 74 "ml_lookup_switch.m"
    MR_bool ml_backend__ml_lookup_switch__succeeded;
#line 74 "ml_lookup_switch.m"
    MR_Integer ml_backend__ml_lookup_switch__CastX_15 = (MR_Integer) ml_backend__ml_lookup_switch__HeadVar__1_1;
#line 74 "ml_lookup_switch.m"
    MR_Integer ml_backend__ml_lookup_switch__CastY_16 = (MR_Integer) ml_backend__ml_lookup_switch__HeadVar__2_2;

#line 74 "ml_lookup_switch.m"
    ml_backend__ml_lookup_switch__succeeded = (ml_backend__ml_lookup_switch__CastX_15 == ml_backend__ml_lookup_switch__CastY_16);
#line 74 "ml_lookup_switch.m"
    if (ml_backend__ml_lookup_switch__succeeded)
#line 74 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__succeeded = MR_TRUE;
#line 74 "ml_lookup_switch.m"
    else
#line 74 "ml_lookup_switch.m"
      {
#line 74 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__TypeInfo_22_22;
#line 74 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__1_1, (MR_Integer) 0)));
#line 74 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__1_1, (MR_Integer) 1)));
#line 74 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__1_1, (MR_Integer) 2)));
#line 74 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__1_1, (MR_Integer) 3)));
#line 74 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__1_1, (MR_Integer) 4)));
#line 74 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__1_1, (MR_Integer) 5)));
#line 74 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__2_2, (MR_Integer) 0)));
#line 74 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__2_2, (MR_Integer) 1)));
#line 74 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__2_2, (MR_Integer) 2)));
#line 74 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__2_2, (MR_Integer) 3)));
#line 74 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__2_2, (MR_Integer) 4)));
#line 74 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__2_2, (MR_Integer) 5)));

#line 3405 "ml_backend.ml_lookup_switch.c"
        {
#line 3407 "ml_backend.ml_lookup_switch.c"
          ml_backend__ml_lookup_switch__succeeded = ml_backend__mlds____Unify____mlds_lval_0_0(ml_backend__ml_lookup_switch__V_3_3, ml_backend__ml_lookup_switch__V_9_9);
        }
#line 74 "ml_lookup_switch.m"
        if (ml_backend__ml_lookup_switch__succeeded)
#line 74 "ml_lookup_switch.m"
          {
#line 3414 "ml_backend.ml_lookup_switch.c"
            {
#line 3416 "ml_backend.ml_lookup_switch.c"
              ml_backend__ml_lookup_switch__succeeded = ml_backend__mlds____Unify____mlds_lval_0_0(ml_backend__ml_lookup_switch__V_4_4, ml_backend__ml_lookup_switch__V_10_10);
            }
#line 74 "ml_lookup_switch.m"
            if (ml_backend__ml_lookup_switch__succeeded)
#line 74 "ml_lookup_switch.m"
              {
#line 3423 "ml_backend.ml_lookup_switch.c"
                {
#line 3425 "ml_backend.ml_lookup_switch.c"
                  ml_backend__ml_lookup_switch__succeeded = ml_backend__mlds____Unify____mlds_lval_0_0(ml_backend__ml_lookup_switch__V_5_5, ml_backend__ml_lookup_switch__V_11_11);
                }
#line 74 "ml_lookup_switch.m"
                if (ml_backend__ml_lookup_switch__succeeded)
#line 74 "ml_lookup_switch.m"
                  {
#line 3432 "ml_backend.ml_lookup_switch.c"
                    {
#line 3434 "ml_backend.ml_lookup_switch.c"
                      ml_backend__ml_lookup_switch__succeeded = ml_backend__mlds____Unify____statement_0_0(ml_backend__ml_lookup_switch__V_6_6, ml_backend__ml_lookup_switch__V_12_12);
                    }
#line 74 "ml_lookup_switch.m"
                    if (ml_backend__ml_lookup_switch__succeeded)
#line 74 "ml_lookup_switch.m"
                      {
#line 3441 "ml_backend.ml_lookup_switch.c"
                        {
#line 3443 "ml_backend.ml_lookup_switch.c"
                          ml_backend__ml_lookup_switch__succeeded = ml_backend__mlds____Unify____statement_0_0(ml_backend__ml_lookup_switch__V_7_7, ml_backend__ml_lookup_switch__V_13_13);
                        }
#line 74 "ml_lookup_switch.m"
                        if (ml_backend__ml_lookup_switch__succeeded)
#line 74 "ml_lookup_switch.m"
                          {
#line 3450 "ml_backend.ml_lookup_switch.c"
                            ml_backend__ml_lookup_switch__TypeInfo_22_22 = (MR_Word) &ml_backend__ml_lookup_switch_scalar_common_1[5];
#line 3452 "ml_backend.ml_lookup_switch.c"
                            {
#line 3454 "ml_backend.ml_lookup_switch.c"
                              return ml_backend__ml_lookup_switch__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_lookup_switch__TypeInfo_22_22, ((MR_Box) (ml_backend__ml_lookup_switch__V_8_8)), ((MR_Box) (ml_backend__ml_lookup_switch__V_14_14)));
                            }
#line 74 "ml_lookup_switch.m"
                          }
#line 74 "ml_lookup_switch.m"
                      }
#line 74 "ml_lookup_switch.m"
                  }
#line 74 "ml_lookup_switch.m"
              }
#line 74 "ml_lookup_switch.m"
          }
#line 74 "ml_lookup_switch.m"
      }
#line 74 "ml_lookup_switch.m"
    return ml_backend__ml_lookup_switch__succeeded;
#line 74 "ml_lookup_switch.m"
  }
#line 74 "ml_lookup_switch.m"
}

#line 38 "ml_lookup_switch.m"
void MR_CALL 
ml_backend__ml_lookup_switch____Compare____ml_lookup_switch_info_1_0(
#line 38 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__TypeInfo_for_Key_14,
#line 38 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__HeadVar__1_1,
#line 38 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__2_2,
#line 38 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__3_3)
#line 38 "ml_lookup_switch.m"
{
#line 38 "ml_lookup_switch.m"
  {
#line 38 "ml_lookup_switch.m"
    MR_bool ml_backend__ml_lookup_switch__succeeded;
#line 38 "ml_lookup_switch.m"
    MR_Integer ml_backend__ml_lookup_switch__CastX_12 = (MR_Integer) ml_backend__ml_lookup_switch__HeadVar__2_2;
#line 38 "ml_lookup_switch.m"
    MR_Integer ml_backend__ml_lookup_switch__CastY_13 = (MR_Integer) ml_backend__ml_lookup_switch__HeadVar__3_3;

#line 38 "ml_lookup_switch.m"
    ml_backend__ml_lookup_switch__succeeded = (ml_backend__ml_lookup_switch__CastX_12 == ml_backend__ml_lookup_switch__CastY_13);
#line 38 "ml_lookup_switch.m"
    if (ml_backend__ml_lookup_switch__succeeded)
#line 3502 "ml_backend.ml_lookup_switch.c"
      *ml_backend__ml_lookup_switch__HeadVar__1_1 = (MR_Integer) 0;
#line 38 "ml_lookup_switch.m"
    else
#line 38 "ml_lookup_switch.m"
      {
#line 38 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__2_2, (MR_Integer) 0)));
#line 38 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__2_2, (MR_Integer) 1)));
#line 38 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__2_2, (MR_Integer) 2)));
#line 38 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__3_3, (MR_Integer) 0)));
#line 38 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__3_3, (MR_Integer) 1)));
#line 38 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__3_3, (MR_Integer) 2)));
#line 38 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_10_10;

#line 38 "ml_lookup_switch.m"
        {
#line 38 "ml_lookup_switch.m"
          backend_libs__switch_util____Compare____case_consts_3_0(ml_backend__ml_lookup_switch__TypeInfo_for_Key_14, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0, (MR_Word) &mercury__unit__unit__type_ctor_info_unit_0, &ml_backend__ml_lookup_switch__V_10_10, ml_backend__ml_lookup_switch__V_4_4, ml_backend__ml_lookup_switch__V_7_7);
        }
#line 3528 "ml_backend.ml_lookup_switch.c"
        ml_backend__ml_lookup_switch__succeeded = (ml_backend__ml_lookup_switch__V_10_10 == (MR_Integer) 0);
#line 38 "ml_lookup_switch.m"
        ml_backend__ml_lookup_switch__succeeded = !(ml_backend__ml_lookup_switch__succeeded);
#line 38 "ml_lookup_switch.m"
        if (ml_backend__ml_lookup_switch__succeeded)
#line 38 "ml_lookup_switch.m"
          *ml_backend__ml_lookup_switch__HeadVar__1_1 = ml_backend__ml_lookup_switch__V_10_10;
#line 38 "ml_lookup_switch.m"
        else
#line 38 "ml_lookup_switch.m"
          {
#line 38 "ml_lookup_switch.m"
            MR_Word ml_backend__ml_lookup_switch__V_11_11;

#line 38 "ml_lookup_switch.m"
            {
#line 38 "ml_lookup_switch.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_lookup_switch_scalar_common_1[3], &ml_backend__ml_lookup_switch__V_11_11, ((MR_Box) (ml_backend__ml_lookup_switch__V_5_5)), ((MR_Box) (ml_backend__ml_lookup_switch__V_8_8)));
            }
#line 3548 "ml_backend.ml_lookup_switch.c"
            ml_backend__ml_lookup_switch__succeeded = (ml_backend__ml_lookup_switch__V_11_11 == (MR_Integer) 0);
#line 38 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__succeeded = !(ml_backend__ml_lookup_switch__succeeded);
#line 38 "ml_lookup_switch.m"
            if (ml_backend__ml_lookup_switch__succeeded)
#line 38 "ml_lookup_switch.m"
              *ml_backend__ml_lookup_switch__HeadVar__1_1 = ml_backend__ml_lookup_switch__V_11_11;
#line 38 "ml_lookup_switch.m"
            else
#line 38 "ml_lookup_switch.m"
              {
#line 38 "ml_lookup_switch.m"
                {
#line 38 "ml_lookup_switch.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_lookup_switch_scalar_common_1[4], ml_backend__ml_lookup_switch__HeadVar__1_1, ((MR_Box) (ml_backend__ml_lookup_switch__V_6_6)), ((MR_Box) (ml_backend__ml_lookup_switch__V_9_9)));
#line 38 "ml_lookup_switch.m"
                  return;
                }
#line 38 "ml_lookup_switch.m"
              }
#line 38 "ml_lookup_switch.m"
          }
#line 38 "ml_lookup_switch.m"
      }
#line 38 "ml_lookup_switch.m"
  }
#line 38 "ml_lookup_switch.m"
}

#line 38 "ml_lookup_switch.m"
MR_bool MR_CALL 
ml_backend__ml_lookup_switch____Unify____ml_lookup_switch_info_1_0(
#line 38 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__TypeInfo_for_Key_11,
#line 38 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__1_1,
#line 38 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__2_2)
#line 38 "ml_lookup_switch.m"
{
#line 38 "ml_lookup_switch.m"
  {
#line 38 "ml_lookup_switch.m"
    MR_bool ml_backend__ml_lookup_switch__succeeded;
#line 38 "ml_lookup_switch.m"
    MR_Integer ml_backend__ml_lookup_switch__CastX_9 = (MR_Integer) ml_backend__ml_lookup_switch__HeadVar__1_1;
#line 38 "ml_lookup_switch.m"
    MR_Integer ml_backend__ml_lookup_switch__CastY_10 = (MR_Integer) ml_backend__ml_lookup_switch__HeadVar__2_2;

#line 38 "ml_lookup_switch.m"
    ml_backend__ml_lookup_switch__succeeded = (ml_backend__ml_lookup_switch__CastX_9 == ml_backend__ml_lookup_switch__CastY_10);
#line 38 "ml_lookup_switch.m"
    if (ml_backend__ml_lookup_switch__succeeded)
#line 38 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__succeeded = MR_TRUE;
#line 38 "ml_lookup_switch.m"
    else
#line 38 "ml_lookup_switch.m"
      {
#line 38 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__TypeInfo_16_16;
#line 38 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__TypeInfo_17_17;
#line 38 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__1_1, (MR_Integer) 0)));
#line 38 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__1_1, (MR_Integer) 1)));
#line 38 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__1_1, (MR_Integer) 2)));
#line 38 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__2_2, (MR_Integer) 0)));
#line 38 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__2_2, (MR_Integer) 1)));
#line 38 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__2_2, (MR_Integer) 2)));

#line 3625 "ml_backend.ml_lookup_switch.c"
        {
#line 3627 "ml_backend.ml_lookup_switch.c"
          ml_backend__ml_lookup_switch__succeeded = backend_libs__switch_util____Unify____case_consts_3_0(ml_backend__ml_lookup_switch__TypeInfo_for_Key_11, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0, (MR_Word) &mercury__unit__unit__type_ctor_info_unit_0, ml_backend__ml_lookup_switch__V_3_3, ml_backend__ml_lookup_switch__V_6_6);
        }
#line 38 "ml_lookup_switch.m"
        if (ml_backend__ml_lookup_switch__succeeded)
#line 38 "ml_lookup_switch.m"
          {
#line 3634 "ml_backend.ml_lookup_switch.c"
            ml_backend__ml_lookup_switch__TypeInfo_16_16 = (MR_Word) &ml_backend__ml_lookup_switch_scalar_common_1[3];
#line 3636 "ml_backend.ml_lookup_switch.c"
            {
#line 3638 "ml_backend.ml_lookup_switch.c"
              ml_backend__ml_lookup_switch__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_lookup_switch__TypeInfo_16_16, ((MR_Box) (ml_backend__ml_lookup_switch__V_4_4)), ((MR_Box) (ml_backend__ml_lookup_switch__V_7_7)));
            }
#line 38 "ml_lookup_switch.m"
            if (ml_backend__ml_lookup_switch__succeeded)
#line 38 "ml_lookup_switch.m"
              {
#line 3645 "ml_backend.ml_lookup_switch.c"
                ml_backend__ml_lookup_switch__TypeInfo_17_17 = (MR_Word) &ml_backend__ml_lookup_switch_scalar_common_1[4];
#line 3647 "ml_backend.ml_lookup_switch.c"
                {
#line 3649 "ml_backend.ml_lookup_switch.c"
                  return ml_backend__ml_lookup_switch__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_lookup_switch__TypeInfo_17_17, ((MR_Box) (ml_backend__ml_lookup_switch__V_5_5)), ((MR_Box) (ml_backend__ml_lookup_switch__V_8_8)));
                }
#line 38 "ml_lookup_switch.m"
              }
#line 38 "ml_lookup_switch.m"
          }
#line 38 "ml_lookup_switch.m"
      }
#line 38 "ml_lookup_switch.m"
    return ml_backend__ml_lookup_switch__succeeded;
#line 38 "ml_lookup_switch.m"
  }
#line 38 "ml_lookup_switch.m"
}

#line 728 "ml_lookup_switch.m"
static MR_Box MR_CALL 
ml_backend__ml_lookup_switch__make_dummy_first_soln_row_4_p_0_2(
#line 728 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg,
#line 728 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1)
#line 728 "ml_lookup_switch.m"
{
#line 728 "ml_lookup_switch.m"
  {
#line 728 "ml_lookup_switch.m"
    MR_Box ml_backend__ml_lookup_switch__wrapper_arg_2;
#line 728 "ml_lookup_switch.m"
    MR_Box ml_backend__ml_lookup_switch__closure = ml_backend__ml_lookup_switch__closure_arg;
#line 728 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__conv1_HeadVar__2_2;

#line 728 "ml_lookup_switch.m"
    {
#line 728 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__conv1_HeadVar__2_2 = ml_backend__ml_util__wrap_init_obj_1_f_0(((MR_Word) ml_backend__ml_lookup_switch__wrapper_arg_1));
    }
#line 728 "ml_lookup_switch.m"
    ml_backend__ml_lookup_switch__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_lookup_switch__conv1_HeadVar__2_2));
#line 728 "ml_lookup_switch.m"
    return ml_backend__ml_lookup_switch__wrapper_arg_2;
#line 728 "ml_lookup_switch.m"
  }
#line 728 "ml_lookup_switch.m"
}

#line 727 "ml_lookup_switch.m"
static MR_Box MR_CALL 
ml_backend__ml_lookup_switch__make_dummy_first_soln_row_4_p_0_1(
#line 727 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg,
#line 727 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1)
#line 727 "ml_lookup_switch.m"
{
#line 727 "ml_lookup_switch.m"
  {
#line 727 "ml_lookup_switch.m"
    MR_Box ml_backend__ml_lookup_switch__wrapper_arg_2;
#line 727 "ml_lookup_switch.m"
    MR_Box ml_backend__ml_lookup_switch__closure = ml_backend__ml_lookup_switch__closure_arg;
#line 727 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__conv0_DefaultRval_4;

#line 727 "ml_lookup_switch.m"
    {
#line 727 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__conv0_DefaultRval_4 = ml_backend__ml_lookup_switch__ml_default_value_for_type_1_f_0(((MR_Word) ml_backend__ml_lookup_switch__wrapper_arg_1));
    }
#line 727 "ml_lookup_switch.m"
    ml_backend__ml_lookup_switch__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_lookup_switch__conv0_DefaultRval_4));
#line 727 "ml_lookup_switch.m"
    return ml_backend__ml_lookup_switch__wrapper_arg_2;
#line 727 "ml_lookup_switch.m"
  }
#line 727 "ml_lookup_switch.m"
}

#line 722 "ml_lookup_switch.m"
static void MR_CALL 
ml_backend__ml_lookup_switch__make_dummy_first_soln_row_4_p_0(
#line 722 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__FirstSolnStructType_5,
#line 722 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__FieldTypes_6,
#line 722 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_0_14,
#line 722 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_15)
#line 722 "ml_lookup_switch.m"
{
#line 726 "ml_lookup_switch.m"
  {
#line 726 "ml_lookup_switch.m"
    MR_bool ml_backend__ml_lookup_switch__succeeded;
#line 726 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__TypeCtorInfo_23_23 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0;
#line 726 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__FieldRvals_8;
#line 726 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__FieldInitializers_9;
#line 726 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__NumLaterSolnsInitializer_10;
#line 726 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__FirstLaterSlotInitializer_11;
#line 726 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__FirstSolnFieldInitializers_12;
#line 726 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__FirstSolnRowInitializer_13;
#line 726 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__V_20_20;

#line 727 "ml_lookup_switch.m"
    {
#line 727 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__FieldRvals_8 = mercury__list__map_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0, ml_backend__ml_lookup_switch__TypeCtorInfo_23_23, (MR_Word) &ml_backend__ml_lookup_switch_scalar_common_4[1], ml_backend__ml_lookup_switch__FieldTypes_6);
    }
#line 728 "ml_lookup_switch.m"
    {
#line 728 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__FieldInitializers_9 = mercury__list__map_2_f_0(ml_backend__ml_lookup_switch__TypeCtorInfo_23_23, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, (MR_Word) &ml_backend__ml_lookup_switch_scalar_common_4[2], ml_backend__ml_lookup_switch__FieldRvals_8);
    }
#line 729 "ml_lookup_switch.m"
    {
#line 729 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__NumLaterSolnsInitializer_10 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) -1);
    }
#line 730 "ml_lookup_switch.m"
    {
#line 730 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__FirstLaterSlotInitializer_11 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) -1);
    }
#line 733 "ml_lookup_switch.m"
    {
#line 733 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 733 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_20_20, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__FirstLaterSlotInitializer_11));
#line 733 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_20_20, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__FieldInitializers_9));
#line 733 "ml_lookup_switch.m"
    }
#line 732 "ml_lookup_switch.m"
    {
#line 732 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__FirstSolnFieldInitializers_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 732 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__FirstSolnFieldInitializers_12, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__NumLaterSolnsInitializer_10));
#line 732 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__FirstSolnFieldInitializers_12, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_20_20));
#line 732 "ml_lookup_switch.m"
    }
#line 734 "ml_lookup_switch.m"
    {
#line 734 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__FirstSolnRowInitializer_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 734 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__FirstSolnRowInitializer_13, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__FirstSolnStructType_5));
#line 734 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__FirstSolnRowInitializer_13, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__FirstSolnFieldInitializers_12));
#line 734 "ml_lookup_switch.m"
    }
#line 736 "ml_lookup_switch.m"
    {
#line 736 "ml_lookup_switch.m"
      MR_Word base;
#line 736 "ml_lookup_switch.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 736 "ml_lookup_switch.m"
      *ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_15 = base;
#line 736 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__FirstSolnRowInitializer_13));
#line 736 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_0_14));
#line 736 "ml_lookup_switch.m"
    }
#line 726 "ml_lookup_switch.m"
  }
#line 722 "ml_lookup_switch.m"
}

#line 599 "ml_lookup_switch.m"
static void MR_CALL 
ml_backend__ml_lookup_switch__ml_generate_bit_vec_initializers_4_p_0(
#line 599 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__HeadVar__1_1,
#line 599 "ml_lookup_switch.m"
  MR_Integer ml_backend__ml_lookup_switch__Count_2,
#line 599 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__HeadVar__3_3,
#line 599 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__HeadVar__4_4)
#line 599 "ml_lookup_switch.m"
{
#line 602 "ml_lookup_switch.m"
  {
#line 602 "ml_lookup_switch.m"
    MR_bool ml_backend__ml_lookup_switch__succeeded;

#line 602 "ml_lookup_switch.m"
    if ((ml_backend__ml_lookup_switch__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 602 "ml_lookup_switch.m"
      {
#line 602 "ml_lookup_switch.m"
        *ml_backend__ml_lookup_switch__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 602 "ml_lookup_switch.m"
        *ml_backend__ml_lookup_switch__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 602 "ml_lookup_switch.m"
      }
#line 602 "ml_lookup_switch.m"
    else
#line 604 "ml_lookup_switch.m"
      {
#line 604 "ml_lookup_switch.m"
        MR_Integer ml_backend__ml_lookup_switch__WordNum_7;
#line 604 "ml_lookup_switch.m"
        MR_Integer ml_backend__ml_lookup_switch__Bits_8;
#line 604 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__Rest_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__HeadVar__1_1, (MR_Integer) 1)));
#line 604 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__Rval_11;
#line 604 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__Rvals_12;
#line 604 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__Initializer_13;
#line 604 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__Initializers_14;
#line 604 "ml_lookup_switch.m"
        MR_Integer ml_backend__ml_lookup_switch__WordVal_15;
#line 604 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__Remainder_16;
#line 604 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__HeadVar__1_1, (MR_Integer) 0)));
#line 604 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_18_18;
#line 604 "ml_lookup_switch.m"
        MR_Integer ml_backend__ml_lookup_switch__V_19_19;

#line 603 "ml_lookup_switch.m"
        ml_backend__ml_lookup_switch__WordNum_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_17_17, (MR_Integer) 0)));
#line 603 "ml_lookup_switch.m"
        ml_backend__ml_lookup_switch__Bits_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_17_17, (MR_Integer) 1)));
#line 605 "ml_lookup_switch.m"
        ml_backend__ml_lookup_switch__succeeded = (ml_backend__ml_lookup_switch__Count_2 < ml_backend__ml_lookup_switch__WordNum_7);
#line 608 "ml_lookup_switch.m"
        if (ml_backend__ml_lookup_switch__succeeded)
#line 606 "ml_lookup_switch.m"
          {
#line 606 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__WordVal_15 = (MR_Integer) 0;
#line 607 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__Remainder_16 = ml_backend__ml_lookup_switch__HeadVar__1_1;
#line 606 "ml_lookup_switch.m"
          }
#line 608 "ml_lookup_switch.m"
        else
#line 609 "ml_lookup_switch.m"
          {
#line 609 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__WordVal_15 = ml_backend__ml_lookup_switch__Bits_8;
#line 610 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__Remainder_16 = ml_backend__ml_lookup_switch__Rest_9;
#line 609 "ml_lookup_switch.m"
          }
#line 612 "ml_lookup_switch.m"
        {
#line 612 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__V_18_18 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 612 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__V_18_18, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__WordVal_15));
#line 612 "ml_lookup_switch.m"
        }
#line 612 "ml_lookup_switch.m"
        {
#line 612 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__Rval_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 612 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__Rval_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 612 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__Rval_11, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_18_18));
#line 612 "ml_lookup_switch.m"
        }
#line 613 "ml_lookup_switch.m"
        {
#line 613 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__Initializer_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 613 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__Initializer_13, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__Rval_11));
#line 613 "ml_lookup_switch.m"
        }
#line 614 "ml_lookup_switch.m"
        ml_backend__ml_lookup_switch__V_19_19 = (ml_backend__ml_lookup_switch__Count_2 + (MR_Integer) 1);
#line 614 "ml_lookup_switch.m"
        {
#line 614 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__ml_generate_bit_vec_initializers_4_p_0(ml_backend__ml_lookup_switch__Remainder_16, ml_backend__ml_lookup_switch__V_19_19, &ml_backend__ml_lookup_switch__Rvals_12, &ml_backend__ml_lookup_switch__Initializers_14);
        }
#line 604 "ml_lookup_switch.m"
        {
#line 604 "ml_lookup_switch.m"
          MR_Word base;
#line 604 "ml_lookup_switch.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 604 "ml_lookup_switch.m"
          *ml_backend__ml_lookup_switch__HeadVar__3_3 = base;
#line 604 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__Rval_11));
#line 604 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__Rvals_12));
#line 604 "ml_lookup_switch.m"
        }
#line 604 "ml_lookup_switch.m"
        {
#line 604 "ml_lookup_switch.m"
          MR_Word base;
#line 604 "ml_lookup_switch.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 604 "ml_lookup_switch.m"
          *ml_backend__ml_lookup_switch__HeadVar__4_4 = base;
#line 604 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__Initializer_13));
#line 604 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__Initializers_14));
#line 604 "ml_lookup_switch.m"
        }
#line 604 "ml_lookup_switch.m"
      }
#line 602 "ml_lookup_switch.m"
  }
#line 599 "ml_lookup_switch.m"
}

#line 441 "ml_lookup_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__ml_gen_several_soln_lookup_switch_12_p_0_2(
#line 441 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg)
#line 441 "ml_lookup_switch.m"
{
#line 441 "ml_lookup_switch.m"
  {
#line 441 "ml_lookup_switch.m"
    MR_bool ml_backend__ml_lookup_switch__succeeded;
#line 441 "ml_lookup_switch.m"
    MR_Box ml_backend__ml_lookup_switch__closure = ml_backend__ml_lookup_switch__closure_arg;

#line 441 "ml_lookup_switch.m"
    {
#line 441 "ml_lookup_switch.m"
      return ml_backend__ml_lookup_switch__succeeded = ml_backend__ml_lookup_switch__IntroducedFrom__pred__ml_gen_several_soln_lookup_switch__441__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__closure, (MR_Integer) 4))));
    }
#line 441 "ml_lookup_switch.m"
    return ml_backend__ml_lookup_switch__succeeded;
#line 441 "ml_lookup_switch.m"
  }
#line 441 "ml_lookup_switch.m"
}

#line 434 "ml_lookup_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__ml_gen_several_soln_lookup_switch_12_p_0_1(
#line 434 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg)
#line 434 "ml_lookup_switch.m"
{
#line 434 "ml_lookup_switch.m"
  {
#line 434 "ml_lookup_switch.m"
    MR_bool ml_backend__ml_lookup_switch__succeeded;
#line 434 "ml_lookup_switch.m"
    MR_Box ml_backend__ml_lookup_switch__closure = ml_backend__ml_lookup_switch__closure_arg;

#line 434 "ml_lookup_switch.m"
    {
#line 434 "ml_lookup_switch.m"
      return ml_backend__ml_lookup_switch__succeeded = ml_backend__ml_lookup_switch__IntroducedFrom__pred__ml_gen_several_soln_lookup_switch__434__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__closure, (MR_Integer) 4))));
    }
#line 434 "ml_lookup_switch.m"
    return ml_backend__ml_lookup_switch__succeeded;
#line 434 "ml_lookup_switch.m"
  }
#line 434 "ml_lookup_switch.m"
}

#line 338 "ml_lookup_switch.m"
static void MR_CALL 
ml_backend__ml_lookup_switch__ml_gen_several_soln_lookup_switch_12_p_0(
#line 338 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__IndexRval_13,
#line 338 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__OutVars_14,
#line 338 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__OutTypes_15,
#line 338 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__CaseSolns_16,
#line 338 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__Context_17,
#line 338 "ml_lookup_switch.m"
  MR_Integer ml_backend__ml_lookup_switch__StartVal_18,
#line 338 "ml_lookup_switch.m"
  MR_Integer ml_backend__ml_lookup_switch__EndVal_19,
#line 338 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__NeedBitVecCheck_20,
#line 338 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__NeedRangeCheck_21,
#line 338 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__Statement_22,
#line 338 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_86,
#line 338 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_87)
#line 338 "ml_lookup_switch.m"
{
#line 346 "ml_lookup_switch.m"
  {
#line 346 "ml_lookup_switch.m"
    MR_bool ml_backend__ml_lookup_switch__succeeded;
#line 346 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__TypeCtorInfo_145_145;
#line 346 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__TypeCtorInfo_146_146;
#line 346 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__ModuleInfo_24;
#line 346 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__ModuleName_25;
#line 346 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__MLDS_ModuleName_26;
#line 346 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__MLDS_Context_27;
#line 346 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__Target_28;
#line 346 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__SeveralSolnLookupVars_29;
#line 346 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__NumLaterSolnsVarLval_30;
#line 346 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__LaterSlotVarLval_31;
#line 346 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__LimitVarLval_32;
#line 346 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__LimitAssignStatement_33;
#line 346 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__IncrLaterSlotVarStatement_34;
#line 346 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__Defns_35;
#line 346 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__NumLaterSolnsVarRval_36;
#line 346 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__LaterSlotVarRval_37;
#line 346 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__LimitVarRval_38;
#line 346 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__MLDS_IntType_39;
#line 346 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__FirstSolnFieldTypes_40;
#line 346 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__CallContStatement_41;
#line 346 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__GlobalData0_42;
#line 346 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__FirstSolnStructTypeNum_43;
#line 346 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__FirstSolnStructType_44;
#line 346 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__FirstSolnTableFieldIds_45;
#line 346 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__GlobalData1_46;
#line 346 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__LaterSolnStructTypeNum_47;
#line 346 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__LaterSolnStructType_48;
#line 346 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__LaterSolnFieldIds_49;
#line 346 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__GlobalData2_50;
#line 346 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__NumLaterSolnsFieldId_52;
#line 346 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__FirstLaterRowFieldId_53;
#line 346 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__FirstSolnFieldIds_54;
#line 346 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__RevFirstSolnRowInitializers_55;
#line 346 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__LaterSolnRowInitializersCord_56;
#line 346 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__HadDummyRows_57;
#line 346 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__FirstSolnRowInitializers_58;
#line 346 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__LaterSolnRowInitializers_59;
#line 346 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__FirstSolnVectorCommon_60;
#line 346 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__GlobalData3_61;
#line 346 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__LaterSolnVectorCommon_62;
#line 346 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__GlobalData_63;
#line 346 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__NumLaterSolnsLookupStatement_64;
#line 346 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__LaterSlotVarLookupStatement_65;
#line 346 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__FirstSolnLookupStatements_66;
#line 346 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__LaterSolnLookupStatements_67;
#line 346 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__FirstLookupSucceedStmt_68;
#line 346 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__FirstLookupSucceedStatement_69;
#line 346 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__LaterLookupSucceedStmt_70;
#line 346 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__LaterLookupSucceedStatement_71;
#line 346 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__MoreSolnsLoopCond_72;
#line 346 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__MoreSolnsLoopStmt_73;
#line 346 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__MoreSolnsLoopStatement_74;
#line 346 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__OneOrMoreSolnsStatements_75;
#line 346 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__InRangeStatement_77;
#line 346 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_88_88;
#line 346 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__V_89_89;
#line 346 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_90_90;
#line 346 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__V_98_98;
#line 346 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_100_100;
#line 346 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_101_101;
#line 346 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_102_102;
#line 346 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_103_103;
#line 346 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__V_106_106;
#line 346 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__V_107_107;
#line 346 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__V_110_110;
#line 346 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__V_111_111;
#line 346 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__V_112_112;
#line 346 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__V_116_116;
#line 346 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__V_117_117;
#line 346 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__V_118_118;

#line 347 "ml_lookup_switch.m"
    {
#line 347 "ml_lookup_switch.m"
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_86, &ml_backend__ml_lookup_switch__ModuleInfo_24);
    }
#line 348 "ml_lookup_switch.m"
    {
#line 348 "ml_lookup_switch.m"
      hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__ml_lookup_switch__ModuleInfo_24, &ml_backend__ml_lookup_switch__ModuleName_25);
    }
#line 349 "ml_lookup_switch.m"
    {
#line 349 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__MLDS_ModuleName_26 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_lookup_switch__ModuleName_25);
    }
#line 350 "ml_lookup_switch.m"
    {
#line 350 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__MLDS_Context_27 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_lookup_switch__Context_17);
    }
#line 351 "ml_lookup_switch.m"
    {
#line 351 "ml_lookup_switch.m"
      ml_backend__ml_gen_info__ml_gen_info_get_target_2_p_0(ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_86, &ml_backend__ml_lookup_switch__Target_28);
    }
#line 353 "ml_lookup_switch.m"
    {
#line 353 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__make_several_soln_lookup_vars_4_p_0(ml_backend__ml_lookup_switch__MLDS_Context_27, &ml_backend__ml_lookup_switch__SeveralSolnLookupVars_29, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_86, &ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_88_88);
    }
#line 354 "ml_lookup_switch.m"
    ml_backend__ml_lookup_switch__NumLaterSolnsVarLval_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__SeveralSolnLookupVars_29, (MR_Integer) 0)));
#line 354 "ml_lookup_switch.m"
    ml_backend__ml_lookup_switch__LaterSlotVarLval_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__SeveralSolnLookupVars_29, (MR_Integer) 1)));
#line 354 "ml_lookup_switch.m"
    ml_backend__ml_lookup_switch__LimitVarLval_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__SeveralSolnLookupVars_29, (MR_Integer) 2)));
#line 354 "ml_lookup_switch.m"
    ml_backend__ml_lookup_switch__LimitAssignStatement_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__SeveralSolnLookupVars_29, (MR_Integer) 3)));
#line 354 "ml_lookup_switch.m"
    ml_backend__ml_lookup_switch__IncrLaterSlotVarStatement_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__SeveralSolnLookupVars_29, (MR_Integer) 4)));
#line 354 "ml_lookup_switch.m"
    ml_backend__ml_lookup_switch__Defns_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__SeveralSolnLookupVars_29, (MR_Integer) 5)));
#line 358 "ml_lookup_switch.m"
    {
#line 358 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__NumLaterSolnsVarRval_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 358 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__NumLaterSolnsVarRval_36, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__NumLaterSolnsVarLval_30));
#line 358 "ml_lookup_switch.m"
    }
#line 359 "ml_lookup_switch.m"
    {
#line 359 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__LaterSlotVarRval_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 359 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__LaterSlotVarRval_37, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__LaterSlotVarLval_31));
#line 359 "ml_lookup_switch.m"
    }
#line 360 "ml_lookup_switch.m"
    {
#line 360 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__LimitVarRval_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 360 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__LimitVarRval_38, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__LimitVarLval_32));
#line 360 "ml_lookup_switch.m"
    }
#line 362 "ml_lookup_switch.m"
    ml_backend__ml_lookup_switch__MLDS_IntType_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 363 "ml_lookup_switch.m"
    {
#line 363 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 363 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_89_89, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__MLDS_IntType_39));
#line 363 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_89_89, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__OutTypes_15));
#line 363 "ml_lookup_switch.m"
    }
#line 363 "ml_lookup_switch.m"
    {
#line 363 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__FirstSolnFieldTypes_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 363 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__FirstSolnFieldTypes_40, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__MLDS_IntType_39));
#line 363 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__FirstSolnFieldTypes_40, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_89_89));
#line 363 "ml_lookup_switch.m"
    }
#line 365 "ml_lookup_switch.m"
    {
#line 365 "ml_lookup_switch.m"
      ml_backend__ml_code_util__ml_gen_call_current_success_cont_4_p_0(ml_backend__ml_lookup_switch__Context_17, &ml_backend__ml_lookup_switch__CallContStatement_41, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_88_88, &ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_90_90);
    }
#line 367 "ml_lookup_switch.m"
    {
#line 367 "ml_lookup_switch.m"
      ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_90_90, &ml_backend__ml_lookup_switch__GlobalData0_42);
    }
#line 368 "ml_lookup_switch.m"
    {
#line 368 "ml_lookup_switch.m"
      ml_backend__ml_global_data__ml_gen_static_vector_type_9_p_0(ml_backend__ml_lookup_switch__MLDS_ModuleName_26, ml_backend__ml_lookup_switch__MLDS_Context_27, ml_backend__ml_lookup_switch__Target_28, ml_backend__ml_lookup_switch__FirstSolnFieldTypes_40, &ml_backend__ml_lookup_switch__FirstSolnStructTypeNum_43, &ml_backend__ml_lookup_switch__FirstSolnStructType_44, &ml_backend__ml_lookup_switch__FirstSolnTableFieldIds_45, ml_backend__ml_lookup_switch__GlobalData0_42, &ml_backend__ml_lookup_switch__GlobalData1_46);
    }
#line 371 "ml_lookup_switch.m"
    {
#line 371 "ml_lookup_switch.m"
      ml_backend__ml_global_data__ml_gen_static_vector_type_9_p_0(ml_backend__ml_lookup_switch__MLDS_ModuleName_26, ml_backend__ml_lookup_switch__MLDS_Context_27, ml_backend__ml_lookup_switch__Target_28, ml_backend__ml_lookup_switch__OutTypes_15, &ml_backend__ml_lookup_switch__LaterSolnStructTypeNum_47, &ml_backend__ml_lookup_switch__LaterSolnStructType_48, &ml_backend__ml_lookup_switch__LaterSolnFieldIds_49, ml_backend__ml_lookup_switch__GlobalData1_46, &ml_backend__ml_lookup_switch__GlobalData2_50);
    }
#line 379 "ml_lookup_switch.m"
    if ((ml_backend__ml_lookup_switch__FirstSolnTableFieldIds_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 377 "ml_lookup_switch.m"
      {
#line 378 "ml_lookup_switch.m"
        {
#line 378 "ml_lookup_switch.m"
          mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_lookup_switch", (MR_String) "predicate \140ml_backend.ml_lookup_switch.ml_gen_several_soln_lookup_switch\'/12", (MR_String) "not enough field_ids");
#line 378 "ml_lookup_switch.m"
          return;
        }
#line 377 "ml_lookup_switch.m"
      }
#line 379 "ml_lookup_switch.m"
    else
#line 379 "ml_lookup_switch.m"
      {
#line 379 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__FirstSolnTableFieldIds_45, (MR_Integer) 1)));
#line 379 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__FirstSolnTableFieldIds_45, (MR_Integer) 0)));

#line 379 "ml_lookup_switch.m"
        if ((ml_backend__ml_lookup_switch__V_155_155 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 377 "ml_lookup_switch.m"
          {
#line 378 "ml_lookup_switch.m"
            {
#line 378 "ml_lookup_switch.m"
              mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_lookup_switch", (MR_String) "predicate \140ml_backend.ml_lookup_switch.ml_gen_several_soln_lookup_switch\'/12", (MR_String) "not enough field_ids");
#line 378 "ml_lookup_switch.m"
              return;
            }
#line 377 "ml_lookup_switch.m"
          }
#line 379 "ml_lookup_switch.m"
        else
#line 380 "ml_lookup_switch.m"
          {
#line 381 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__NumLaterSolnsFieldId_52 = ml_backend__ml_lookup_switch__V_156_156;
#line 381 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__FirstLaterRowFieldId_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_155_155, (MR_Integer) 0)));
#line 381 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__FirstSolnFieldIds_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_155_155, (MR_Integer) 1)));
#line 380 "ml_lookup_switch.m"
          }
#line 379 "ml_lookup_switch.m"
      }
#line 4366 "ml_backend.ml_lookup_switch.c"
    ml_backend__ml_lookup_switch__TypeCtorInfo_145_145 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0;
#line 386 "ml_lookup_switch.m"
    {
#line 386 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__V_98_98 = mercury__cord__init_0_f_0(ml_backend__ml_lookup_switch__TypeCtorInfo_145_145);
    }
#line 383 "ml_lookup_switch.m"
    {
#line 383 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_109_111_100_101_108_95_110_111_110_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_14_p_0(ml_backend__ml_lookup_switch__StartVal_18, ml_backend__ml_lookup_switch__EndVal_19, (MR_Integer) 0, ml_backend__ml_lookup_switch__CaseSolns_16, ml_backend__ml_lookup_switch__FirstSolnStructType_44, ml_backend__ml_lookup_switch__LaterSolnStructType_48, ml_backend__ml_lookup_switch__OutTypes_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ml_backend__ml_lookup_switch__RevFirstSolnRowInitializers_55, ml_backend__ml_lookup_switch__V_98_98, &ml_backend__ml_lookup_switch__LaterSolnRowInitializersCord_56, (MR_Integer) 0, &ml_backend__ml_lookup_switch__HadDummyRows_57);
    }
#line 387 "ml_lookup_switch.m"
    {
#line 387 "ml_lookup_switch.m"
      mercury__list__reverse_2_p_0(ml_backend__ml_lookup_switch__TypeCtorInfo_145_145, ml_backend__ml_lookup_switch__RevFirstSolnRowInitializers_55, &ml_backend__ml_lookup_switch__FirstSolnRowInitializers_58);
    }
#line 388 "ml_lookup_switch.m"
    {
#line 388 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__LaterSolnRowInitializers_59 = mercury__cord__list_1_f_0(ml_backend__ml_lookup_switch__TypeCtorInfo_145_145, ml_backend__ml_lookup_switch__LaterSolnRowInitializersCord_56);
    }
#line 389 "ml_lookup_switch.m"
    {
#line 389 "ml_lookup_switch.m"
      ml_backend__ml_global_data__ml_gen_static_vector_defn_6_p_0(ml_backend__ml_lookup_switch__MLDS_ModuleName_26, ml_backend__ml_lookup_switch__FirstSolnStructTypeNum_43, ml_backend__ml_lookup_switch__FirstSolnRowInitializers_58, &ml_backend__ml_lookup_switch__FirstSolnVectorCommon_60, ml_backend__ml_lookup_switch__GlobalData2_50, &ml_backend__ml_lookup_switch__GlobalData3_61);
    }
#line 392 "ml_lookup_switch.m"
    {
#line 392 "ml_lookup_switch.m"
      ml_backend__ml_global_data__ml_gen_static_vector_defn_6_p_0(ml_backend__ml_lookup_switch__MLDS_ModuleName_26, ml_backend__ml_lookup_switch__LaterSolnStructTypeNum_47, ml_backend__ml_lookup_switch__LaterSolnRowInitializers_59, &ml_backend__ml_lookup_switch__LaterSolnVectorCommon_62, ml_backend__ml_lookup_switch__GlobalData3_61, &ml_backend__ml_lookup_switch__GlobalData_63);
    }
#line 395 "ml_lookup_switch.m"
    {
#line 395 "ml_lookup_switch.m"
      ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_p_0(ml_backend__ml_lookup_switch__GlobalData_63, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_90_90, &ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_100_100);
    }
#line 397 "ml_lookup_switch.m"
    {
#line 397 "ml_lookup_switch.m"
      ml_backend__ml_code_util__ml_generate_field_assign_10_p_0(ml_backend__ml_lookup_switch__NumLaterSolnsVarLval_30, ml_backend__ml_lookup_switch__MLDS_IntType_39, ml_backend__ml_lookup_switch__NumLaterSolnsFieldId_52, ml_backend__ml_lookup_switch__FirstSolnVectorCommon_60, ml_backend__ml_lookup_switch__FirstSolnStructType_44, ml_backend__ml_lookup_switch__IndexRval_13, ml_backend__ml_lookup_switch__MLDS_Context_27, &ml_backend__ml_lookup_switch__NumLaterSolnsLookupStatement_64, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_100_100, &ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_101_101);
    }
#line 401 "ml_lookup_switch.m"
    {
#line 401 "ml_lookup_switch.m"
      ml_backend__ml_code_util__ml_generate_field_assign_10_p_0(ml_backend__ml_lookup_switch__LaterSlotVarLval_31, ml_backend__ml_lookup_switch__MLDS_IntType_39, ml_backend__ml_lookup_switch__FirstLaterRowFieldId_53, ml_backend__ml_lookup_switch__FirstSolnVectorCommon_60, ml_backend__ml_lookup_switch__FirstSolnStructType_44, ml_backend__ml_lookup_switch__IndexRval_13, ml_backend__ml_lookup_switch__MLDS_Context_27, &ml_backend__ml_lookup_switch__LaterSlotVarLookupStatement_65, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_101_101, &ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_102_102);
    }
#line 405 "ml_lookup_switch.m"
    {
#line 405 "ml_lookup_switch.m"
      ml_backend__ml_code_util__ml_generate_field_assigns_10_p_0(ml_backend__ml_lookup_switch__OutVars_14, ml_backend__ml_lookup_switch__OutTypes_15, ml_backend__ml_lookup_switch__FirstSolnFieldIds_54, ml_backend__ml_lookup_switch__FirstSolnVectorCommon_60, ml_backend__ml_lookup_switch__FirstSolnStructType_44, ml_backend__ml_lookup_switch__IndexRval_13, ml_backend__ml_lookup_switch__MLDS_Context_27, &ml_backend__ml_lookup_switch__FirstSolnLookupStatements_66, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_102_102, &ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_103_103);
    }
#line 408 "ml_lookup_switch.m"
    {
#line 408 "ml_lookup_switch.m"
      ml_backend__ml_code_util__ml_generate_field_assigns_10_p_0(ml_backend__ml_lookup_switch__OutVars_14, ml_backend__ml_lookup_switch__OutTypes_15, ml_backend__ml_lookup_switch__LaterSolnFieldIds_49, ml_backend__ml_lookup_switch__LaterSolnVectorCommon_62, ml_backend__ml_lookup_switch__LaterSolnStructType_48, ml_backend__ml_lookup_switch__LaterSlotVarRval_37, ml_backend__ml_lookup_switch__MLDS_Context_27, &ml_backend__ml_lookup_switch__LaterSolnLookupStatements_67, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_103_103, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_87);
    }
#line 4423 "ml_backend.ml_lookup_switch.c"
    ml_backend__ml_lookup_switch__TypeCtorInfo_146_146 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0;
#line 413 "ml_lookup_switch.m"
    {
#line 413 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__V_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 413 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_107_107, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__CallContStatement_41));
#line 413 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_107_107, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 413 "ml_lookup_switch.m"
    }
#line 413 "ml_lookup_switch.m"
    {
#line 413 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__V_106_106 = mercury__list__f_43_43_2_f_0(ml_backend__ml_lookup_switch__TypeCtorInfo_146_146, ml_backend__ml_lookup_switch__FirstSolnLookupStatements_66, ml_backend__ml_lookup_switch__V_107_107);
    }
#line 412 "ml_lookup_switch.m"
    {
#line 412 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__FirstLookupSucceedStmt_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 412 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__FirstLookupSucceedStmt_68, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 412 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__FirstLookupSucceedStmt_68, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_106_106));
#line 412 "ml_lookup_switch.m"
    }
#line 414 "ml_lookup_switch.m"
    {
#line 414 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__FirstLookupSucceedStatement_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 414 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__FirstLookupSucceedStatement_69, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__FirstLookupSucceedStmt_68));
#line 414 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__FirstLookupSucceedStatement_69, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__MLDS_Context_27));
#line 414 "ml_lookup_switch.m"
    }
#line 419 "ml_lookup_switch.m"
    {
#line 419 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__V_112_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 419 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_112_112, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__IncrLaterSlotVarStatement_34));
#line 419 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_112_112, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 419 "ml_lookup_switch.m"
    }
#line 419 "ml_lookup_switch.m"
    {
#line 419 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__V_111_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 419 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_111_111, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__CallContStatement_41));
#line 419 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_111_111, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_112_112));
#line 419 "ml_lookup_switch.m"
    }
#line 418 "ml_lookup_switch.m"
    {
#line 418 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__V_110_110 = mercury__list__f_43_43_2_f_0(ml_backend__ml_lookup_switch__TypeCtorInfo_146_146, ml_backend__ml_lookup_switch__LaterSolnLookupStatements_67, ml_backend__ml_lookup_switch__V_111_111);
    }
#line 417 "ml_lookup_switch.m"
    {
#line 417 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__LaterLookupSucceedStmt_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 417 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__LaterLookupSucceedStmt_70, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 417 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__LaterLookupSucceedStmt_70, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_110_110));
#line 417 "ml_lookup_switch.m"
    }
#line 420 "ml_lookup_switch.m"
    {
#line 420 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__LaterLookupSucceedStatement_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 420 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__LaterLookupSucceedStatement_71, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__LaterLookupSucceedStmt_70));
#line 420 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__LaterLookupSucceedStatement_71, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__MLDS_Context_27));
#line 420 "ml_lookup_switch.m"
    }
#line 423 "ml_lookup_switch.m"
    {
#line 423 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__MoreSolnsLoopCond_72 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 423 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__MoreSolnsLoopCond_72, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 423 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__MoreSolnsLoopCond_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 22))));
#line 423 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__MoreSolnsLoopCond_72, 2) = ((MR_Box) (ml_backend__ml_lookup_switch__LaterSlotVarRval_37));
#line 423 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__MoreSolnsLoopCond_72, 3) = ((MR_Box) (ml_backend__ml_lookup_switch__LimitVarRval_38));
#line 423 "ml_lookup_switch.m"
    }
#line 424 "ml_lookup_switch.m"
    {
#line 424 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__MoreSolnsLoopStmt_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 424 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__MoreSolnsLoopStmt_73, 0) = ((MR_Box) ((MR_Integer) 0));
#line 424 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__MoreSolnsLoopStmt_73, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__MoreSolnsLoopCond_72));
#line 424 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__MoreSolnsLoopStmt_73, 2) = ((MR_Box) (ml_backend__ml_lookup_switch__LaterLookupSucceedStatement_71));
#line 424 "ml_lookup_switch.m"
    }
#line 426 "ml_lookup_switch.m"
    {
#line 426 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__MoreSolnsLoopStatement_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 426 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__MoreSolnsLoopStatement_74, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__MoreSolnsLoopStmt_73));
#line 426 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__MoreSolnsLoopStatement_74, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__MLDS_Context_27));
#line 426 "ml_lookup_switch.m"
    }
#line 430 "ml_lookup_switch.m"
    {
#line 430 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__V_118_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 430 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_118_118, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__MoreSolnsLoopStatement_74));
#line 430 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_118_118, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 430 "ml_lookup_switch.m"
    }
#line 429 "ml_lookup_switch.m"
    {
#line 429 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__V_117_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 429 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_117_117, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__LimitAssignStatement_33));
#line 429 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_117_117, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_118_118));
#line 429 "ml_lookup_switch.m"
    }
#line 429 "ml_lookup_switch.m"
    {
#line 429 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__V_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 429 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_116_116, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__LaterSlotVarLookupStatement_65));
#line 429 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_116_116, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_117_117));
#line 429 "ml_lookup_switch.m"
    }
#line 428 "ml_lookup_switch.m"
    {
#line 428 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__OneOrMoreSolnsStatements_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 428 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__OneOrMoreSolnsStatements_75, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__FirstLookupSucceedStatement_69));
#line 428 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__OneOrMoreSolnsStatements_75, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_116_116));
#line 428 "ml_lookup_switch.m"
    }
#line 439 "ml_lookup_switch.m"
    if ((ml_backend__ml_lookup_switch__NeedBitVecCheck_20 == (MR_Integer) 1))
#line 433 "ml_lookup_switch.m"
      {
#line 433 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__InRangeStmt_76;
#line 433 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_134_134;
#line 433 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_139_139;

#line 434 "ml_lookup_switch.m"
        {
#line 434 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__V_134_134 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 434 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_134_134, 0) = ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_2[4]));
#line 434 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_134_134, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__ml_gen_several_soln_lookup_switch_12_p_0_1));
#line 434 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_134_134, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 434 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_134_134, 3) = ((MR_Box) (ml_backend__ml_lookup_switch__HadDummyRows_57));
#line 434 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_134_134, 4) = ((MR_Box) ((MR_Integer) 0));
#line 434 "ml_lookup_switch.m"
        }
#line 434 "ml_lookup_switch.m"
        {
#line 434 "ml_lookup_switch.m"
          mercury__require__expect_4_p_0(ml_backend__ml_lookup_switch__V_134_134, (MR_String) "ml_backend.ml_lookup_switch", (MR_String) "predicate \140ml_backend.ml_lookup_switch.ml_gen_several_soln_lookup_switch\'/12", (MR_String) "bad dont_need_bit_vec_check");
        }
#line 437 "ml_lookup_switch.m"
        {
#line 437 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__V_139_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 437 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_139_139, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__NumLaterSolnsLookupStatement_64));
#line 437 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_139_139, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__OneOrMoreSolnsStatements_75));
#line 437 "ml_lookup_switch.m"
        }
#line 436 "ml_lookup_switch.m"
        {
#line 436 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__InRangeStmt_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 436 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__InRangeStmt_76, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__Defns_35));
#line 436 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__InRangeStmt_76, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_139_139));
#line 436 "ml_lookup_switch.m"
        }
#line 438 "ml_lookup_switch.m"
        {
#line 438 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__InRangeStatement_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 438 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__InRangeStatement_77, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__InRangeStmt_76));
#line 438 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__InRangeStatement_77, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__MLDS_Context_27));
#line 438 "ml_lookup_switch.m"
        }
#line 433 "ml_lookup_switch.m"
      }
#line 439 "ml_lookup_switch.m"
    else
#line 440 "ml_lookup_switch.m"
      {
#line 440 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__OneOrMoreSolnsBlockStmt_78;
#line 440 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__OneOrMoreSolnsBlockStatement_79;
#line 440 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__AnySolnsCond_80;
#line 440 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__ZeroOrMoreSolnsStmt_81;
#line 440 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__ZeroOrMoreSolnsStatement_82;
#line 440 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_120_120;
#line 440 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_131_131;
#line 440 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_132_132;
#line 440 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__InRangeStmt_144;

#line 441 "ml_lookup_switch.m"
        {
#line 441 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__V_120_120 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 441 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_120_120, 0) = ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_2[4]));
#line 441 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_120_120, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__ml_gen_several_soln_lookup_switch_12_p_0_2));
#line 441 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_120_120, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 441 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_120_120, 3) = ((MR_Box) (ml_backend__ml_lookup_switch__HadDummyRows_57));
#line 441 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_120_120, 4) = ((MR_Box) ((MR_Integer) 1));
#line 441 "ml_lookup_switch.m"
        }
#line 441 "ml_lookup_switch.m"
        {
#line 441 "ml_lookup_switch.m"
          mercury__require__expect_4_p_0(ml_backend__ml_lookup_switch__V_120_120, (MR_String) "ml_backend.ml_lookup_switch", (MR_String) "predicate \140ml_backend.ml_lookup_switch.ml_gen_several_soln_lookup_switch\'/12", (MR_String) "bad need_bit_vec_check");
        }
#line 444 "ml_lookup_switch.m"
        {
#line 444 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__OneOrMoreSolnsBlockStmt_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 444 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__OneOrMoreSolnsBlockStmt_78, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 444 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__OneOrMoreSolnsBlockStmt_78, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__OneOrMoreSolnsStatements_75));
#line 444 "ml_lookup_switch.m"
        }
#line 445 "ml_lookup_switch.m"
        {
#line 445 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__OneOrMoreSolnsBlockStatement_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 445 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__OneOrMoreSolnsBlockStatement_79, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__OneOrMoreSolnsBlockStmt_78));
#line 445 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__OneOrMoreSolnsBlockStatement_79, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__MLDS_Context_27));
#line 445 "ml_lookup_switch.m"
        }
#line 448 "ml_lookup_switch.m"
        {
#line 448 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__AnySolnsCond_80 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 448 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__AnySolnsCond_80, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 448 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__AnySolnsCond_80, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 25))));
#line 448 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__AnySolnsCond_80, 2) = ((MR_Box) (ml_backend__ml_lookup_switch__NumLaterSolnsVarRval_36));
#line 448 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__AnySolnsCond_80, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[12])));
#line 448 "ml_lookup_switch.m"
        }
#line 450 "ml_lookup_switch.m"
        {
#line 450 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__ZeroOrMoreSolnsStmt_81 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 450 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__ZeroOrMoreSolnsStmt_81, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__AnySolnsCond_80));
#line 450 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__ZeroOrMoreSolnsStmt_81, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__OneOrMoreSolnsBlockStatement_79));
#line 450 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__ZeroOrMoreSolnsStmt_81, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 450 "ml_lookup_switch.m"
        }
#line 452 "ml_lookup_switch.m"
        {
#line 452 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__ZeroOrMoreSolnsStatement_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 452 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__ZeroOrMoreSolnsStatement_82, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__ZeroOrMoreSolnsStmt_81));
#line 452 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__ZeroOrMoreSolnsStatement_82, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__MLDS_Context_27));
#line 452 "ml_lookup_switch.m"
        }
#line 456 "ml_lookup_switch.m"
        {
#line 456 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__V_132_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 456 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_132_132, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__ZeroOrMoreSolnsStatement_82));
#line 456 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_132_132, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 456 "ml_lookup_switch.m"
        }
#line 456 "ml_lookup_switch.m"
        {
#line 456 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__V_131_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 456 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_131_131, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__NumLaterSolnsLookupStatement_64));
#line 456 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_131_131, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_132_132));
#line 456 "ml_lookup_switch.m"
        }
#line 455 "ml_lookup_switch.m"
        {
#line 455 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__InRangeStmt_144 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 455 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__InRangeStmt_144, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__Defns_35));
#line 455 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__InRangeStmt_144, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_131_131));
#line 455 "ml_lookup_switch.m"
        }
#line 457 "ml_lookup_switch.m"
        {
#line 457 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__InRangeStatement_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 457 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__InRangeStatement_77, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__InRangeStmt_144));
#line 457 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__InRangeStatement_77, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__MLDS_Context_27));
#line 457 "ml_lookup_switch.m"
        }
#line 440 "ml_lookup_switch.m"
      }
#line 462 "ml_lookup_switch.m"
    if ((ml_backend__ml_lookup_switch__NeedRangeCheck_21 == (MR_Integer) 1))
#line 460 "ml_lookup_switch.m"
      *ml_backend__ml_lookup_switch__Statement_22 = ml_backend__ml_lookup_switch__InRangeStatement_77;
#line 462 "ml_lookup_switch.m"
    else
#line 463 "ml_lookup_switch.m"
      {
#line 463 "ml_lookup_switch.m"
        MR_Integer ml_backend__ml_lookup_switch__Difference_83 = (ml_backend__ml_lookup_switch__EndVal_19 - ml_backend__ml_lookup_switch__StartVal_18);
#line 463 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__RangeCheckCond_84;
#line 463 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__Stmt_85;
#line 463 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_141_141;
#line 463 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_142_142;

#line 467 "ml_lookup_switch.m"
        {
#line 467 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__V_142_142 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 467 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__V_142_142, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__Difference_83));
#line 467 "ml_lookup_switch.m"
        }
#line 467 "ml_lookup_switch.m"
        {
#line 467 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__V_141_141 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 467 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__V_141_141, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 467 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__V_141_141, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_142_142));
#line 467 "ml_lookup_switch.m"
        }
#line 466 "ml_lookup_switch.m"
        {
#line 466 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__RangeCheckCond_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 466 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__RangeCheckCond_84, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 466 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__RangeCheckCond_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 26))));
#line 466 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__RangeCheckCond_84, 2) = ((MR_Box) (ml_backend__ml_lookup_switch__IndexRval_13));
#line 466 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__RangeCheckCond_84, 3) = ((MR_Box) (ml_backend__ml_lookup_switch__V_141_141));
#line 466 "ml_lookup_switch.m"
        }
#line 469 "ml_lookup_switch.m"
        {
#line 469 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__Stmt_85 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 469 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__Stmt_85, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__RangeCheckCond_84));
#line 469 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__Stmt_85, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__InRangeStatement_77));
#line 469 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__Stmt_85, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 469 "ml_lookup_switch.m"
        }
#line 470 "ml_lookup_switch.m"
        {
#line 470 "ml_lookup_switch.m"
          MR_Word base;
#line 470 "ml_lookup_switch.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 470 "ml_lookup_switch.m"
          *ml_backend__ml_lookup_switch__Statement_22 = base;
#line 470 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__Stmt_85));
#line 470 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__MLDS_Context_27));
#line 470 "ml_lookup_switch.m"
        }
#line 463 "ml_lookup_switch.m"
      }
#line 346 "ml_lookup_switch.m"
  }
#line 338 "ml_lookup_switch.m"
}

#line 273 "ml_lookup_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__ml_gen_simple_lookup_switch_13_p_0_2(
#line 273 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg)
#line 273 "ml_lookup_switch.m"
{
#line 273 "ml_lookup_switch.m"
  {
#line 273 "ml_lookup_switch.m"
    MR_bool ml_backend__ml_lookup_switch__succeeded;
#line 273 "ml_lookup_switch.m"
    MR_Box ml_backend__ml_lookup_switch__closure = ml_backend__ml_lookup_switch__closure_arg;

#line 273 "ml_lookup_switch.m"
    {
#line 273 "ml_lookup_switch.m"
      return ml_backend__ml_lookup_switch__succeeded = ml_backend__ml_lookup_switch__IntroducedFrom__pred__ml_gen_simple_lookup_switch__273__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__closure, (MR_Integer) 4))));
    }
#line 273 "ml_lookup_switch.m"
    return ml_backend__ml_lookup_switch__succeeded;
#line 273 "ml_lookup_switch.m"
  }
#line 273 "ml_lookup_switch.m"
}

#line 271 "ml_lookup_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__ml_gen_simple_lookup_switch_13_p_0_1(
#line 271 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg)
#line 271 "ml_lookup_switch.m"
{
#line 271 "ml_lookup_switch.m"
  {
#line 271 "ml_lookup_switch.m"
    MR_bool ml_backend__ml_lookup_switch__succeeded;
#line 271 "ml_lookup_switch.m"
    MR_Box ml_backend__ml_lookup_switch__closure = ml_backend__ml_lookup_switch__closure_arg;

#line 271 "ml_lookup_switch.m"
    {
#line 271 "ml_lookup_switch.m"
      return ml_backend__ml_lookup_switch__succeeded = ml_backend__ml_lookup_switch__IntroducedFrom__pred__ml_gen_simple_lookup_switch__271__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__closure, (MR_Integer) 4))));
    }
#line 271 "ml_lookup_switch.m"
    return ml_backend__ml_lookup_switch__succeeded;
#line 271 "ml_lookup_switch.m"
  }
#line 271 "ml_lookup_switch.m"
}

#line 227 "ml_lookup_switch.m"
static void MR_CALL 
ml_backend__ml_lookup_switch__ml_gen_simple_lookup_switch_13_p_0(
#line 227 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__IndexRval_14,
#line 227 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__OutVars_15,
#line 227 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__OutTypes_16,
#line 227 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__CaseValues_17,
#line 227 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__CodeModel_18,
#line 227 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__Context_19,
#line 227 "ml_lookup_switch.m"
  MR_Integer ml_backend__ml_lookup_switch__StartVal_20,
#line 227 "ml_lookup_switch.m"
  MR_Integer ml_backend__ml_lookup_switch__EndVal_21,
#line 227 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__NeedBitVecCheck_22,
#line 227 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__NeedRangeCheck_23,
#line 227 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__Statement_24,
#line 227 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_52,
#line 227 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_53)
#line 227 "ml_lookup_switch.m"
{
#line 235 "ml_lookup_switch.m"
  {
#line 235 "ml_lookup_switch.m"
    MR_bool ml_backend__ml_lookup_switch__succeeded;
#line 235 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__ModuleInfo_26;
#line 235 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__ModuleName_27;
#line 235 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__MLDS_ModuleName_28;
#line 235 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__MLDS_Context_29;
#line 235 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__Target_30;
#line 235 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__LookupStatements_31;
#line 235 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_55_55;

#line 236 "ml_lookup_switch.m"
    {
#line 236 "ml_lookup_switch.m"
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_52, &ml_backend__ml_lookup_switch__ModuleInfo_26);
    }
#line 237 "ml_lookup_switch.m"
    {
#line 237 "ml_lookup_switch.m"
      hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__ml_lookup_switch__ModuleInfo_26, &ml_backend__ml_lookup_switch__ModuleName_27);
    }
#line 238 "ml_lookup_switch.m"
    {
#line 238 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__MLDS_ModuleName_28 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_lookup_switch__ModuleName_27);
    }
#line 239 "ml_lookup_switch.m"
    {
#line 239 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__MLDS_Context_29 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_lookup_switch__Context_19);
    }
#line 240 "ml_lookup_switch.m"
    {
#line 240 "ml_lookup_switch.m"
      ml_backend__ml_gen_info__ml_gen_info_get_target_2_p_0(ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_52, &ml_backend__ml_lookup_switch__Target_30);
    }
#line 251 "ml_lookup_switch.m"
    if ((ml_backend__ml_lookup_switch__OutTypes_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 243 "ml_lookup_switch.m"
      {
#line 250 "ml_lookup_switch.m"
        ml_backend__ml_lookup_switch__LookupStatements_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 250 "ml_lookup_switch.m"
        ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_55_55 = ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_52;
#line 243 "ml_lookup_switch.m"
      }
#line 251 "ml_lookup_switch.m"
    else
#line 252 "ml_lookup_switch.m"
      {
#line 252 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__GlobalData0_34;
#line 252 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__StructTypeNum_35;
#line 252 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__StructType_36;
#line 252 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__FieldIds_37;
#line 252 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__GlobalData1_38;
#line 252 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__RowInitializers_39;
#line 252 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__VectorCommon_40;
#line 252 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__GlobalData_41;
#line 252 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_54_54;

#line 253 "ml_lookup_switch.m"
        {
#line 253 "ml_lookup_switch.m"
          ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_52, &ml_backend__ml_lookup_switch__GlobalData0_34);
        }
#line 254 "ml_lookup_switch.m"
        {
#line 254 "ml_lookup_switch.m"
          ml_backend__ml_global_data__ml_gen_static_vector_type_9_p_0(ml_backend__ml_lookup_switch__MLDS_ModuleName_28, ml_backend__ml_lookup_switch__MLDS_Context_29, ml_backend__ml_lookup_switch__Target_30, ml_backend__ml_lookup_switch__OutTypes_16, &ml_backend__ml_lookup_switch__StructTypeNum_35, &ml_backend__ml_lookup_switch__StructType_36, &ml_backend__ml_lookup_switch__FieldIds_37, ml_backend__ml_lookup_switch__GlobalData0_34, &ml_backend__ml_lookup_switch__GlobalData1_38);
        }
#line 258 "ml_lookup_switch.m"
        {
#line 258 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_115_105_109_112_108_101_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_6_p_0(ml_backend__ml_lookup_switch__StructType_36, ml_backend__ml_lookup_switch__OutTypes_16, ml_backend__ml_lookup_switch__StartVal_20, ml_backend__ml_lookup_switch__CaseValues_17, &ml_backend__ml_lookup_switch__RowInitializers_39);
        }
#line 261 "ml_lookup_switch.m"
        {
#line 261 "ml_lookup_switch.m"
          ml_backend__ml_global_data__ml_gen_static_vector_defn_6_p_0(ml_backend__ml_lookup_switch__MLDS_ModuleName_28, ml_backend__ml_lookup_switch__StructTypeNum_35, ml_backend__ml_lookup_switch__RowInitializers_39, &ml_backend__ml_lookup_switch__VectorCommon_40, ml_backend__ml_lookup_switch__GlobalData1_38, &ml_backend__ml_lookup_switch__GlobalData_41);
        }
#line 263 "ml_lookup_switch.m"
        {
#line 263 "ml_lookup_switch.m"
          ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_p_0(ml_backend__ml_lookup_switch__GlobalData_41, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_52, &ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_54_54);
        }
#line 265 "ml_lookup_switch.m"
        {
#line 265 "ml_lookup_switch.m"
          ml_backend__ml_code_util__ml_generate_field_assigns_10_p_0(ml_backend__ml_lookup_switch__OutVars_15, ml_backend__ml_lookup_switch__OutTypes_16, ml_backend__ml_lookup_switch__FieldIds_37, ml_backend__ml_lookup_switch__VectorCommon_40, ml_backend__ml_lookup_switch__StructType_36, ml_backend__ml_lookup_switch__IndexRval_14, ml_backend__ml_lookup_switch__MLDS_Context_29, &ml_backend__ml_lookup_switch__LookupStatements_31, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_54_54, &ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_55_55);
        }
#line 252 "ml_lookup_switch.m"
      }
#line 277 "ml_lookup_switch.m"
    if ((ml_backend__ml_lookup_switch__CodeModel_18 == (MR_Integer) 0))
#line 270 "ml_lookup_switch.m"
      {
#line 270 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__Stmt_42;
#line 270 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_77_77;
#line 270 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_82_82;

#line 271 "ml_lookup_switch.m"
        {
#line 271 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__V_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 271 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_77_77, 0) = ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_2[2]));
#line 271 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_77_77, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__ml_gen_simple_lookup_switch_13_p_0_1));
#line 271 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_77_77, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 271 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_77_77, 3) = ((MR_Box) (ml_backend__ml_lookup_switch__NeedRangeCheck_23));
#line 271 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_77_77, 4) = ((MR_Box) ((MR_Integer) 1));
#line 271 "ml_lookup_switch.m"
        }
#line 271 "ml_lookup_switch.m"
        {
#line 271 "ml_lookup_switch.m"
          mercury__require__expect_4_p_0(ml_backend__ml_lookup_switch__V_77_77, (MR_String) "ml_backend.ml_lookup_switch", (MR_String) "predicate \140ml_backend.ml_lookup_switch.ml_gen_simple_lookup_switch\'/13", (MR_String) "model_det need_range_check");
        }
#line 273 "ml_lookup_switch.m"
        {
#line 273 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__V_82_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 273 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_82_82, 0) = ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_2[3]));
#line 273 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_82_82, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__ml_gen_simple_lookup_switch_13_p_0_2));
#line 273 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_82_82, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 273 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_82_82, 3) = ((MR_Box) (ml_backend__ml_lookup_switch__NeedBitVecCheck_22));
#line 273 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_82_82, 4) = ((MR_Box) ((MR_Integer) 1));
#line 273 "ml_lookup_switch.m"
        }
#line 273 "ml_lookup_switch.m"
        {
#line 273 "ml_lookup_switch.m"
          mercury__require__expect_4_p_0(ml_backend__ml_lookup_switch__V_82_82, (MR_String) "ml_backend.ml_lookup_switch", (MR_String) "predicate \140ml_backend.ml_lookup_switch.ml_gen_simple_lookup_switch\'/13", (MR_String) "model_det need_bit_vec_check");
        }
#line 275 "ml_lookup_switch.m"
        {
#line 275 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__Stmt_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 275 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__Stmt_42, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 275 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__Stmt_42, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__LookupStatements_31));
#line 275 "ml_lookup_switch.m"
        }
#line 276 "ml_lookup_switch.m"
        {
#line 276 "ml_lookup_switch.m"
          MR_Word base;
#line 276 "ml_lookup_switch.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 276 "ml_lookup_switch.m"
          *ml_backend__ml_lookup_switch__Statement_24 = base;
#line 276 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__Stmt_42));
#line 276 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__MLDS_Context_29));
#line 276 "ml_lookup_switch.m"
        }
#line 276 "ml_lookup_switch.m"
        *ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_53 = ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_55_55;
#line 270 "ml_lookup_switch.m"
      }
#line 277 "ml_lookup_switch.m"
    else
#line 277 "ml_lookup_switch.m"
      if ((ml_backend__ml_lookup_switch__CodeModel_18 == (MR_Integer) 2))
#line 330 "ml_lookup_switch.m"
        {
#line 333 "ml_lookup_switch.m"
          {
#line 333 "ml_lookup_switch.m"
            mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_lookup_switch", (MR_String) "predicate \140ml_backend.ml_lookup_switch.ml_gen_simple_lookup_switch\'/13", (MR_String) "model_non");
#line 333 "ml_lookup_switch.m"
            return;
          }
#line 330 "ml_lookup_switch.m"
        }
#line 277 "ml_lookup_switch.m"
      else
#line 278 "ml_lookup_switch.m"
        {
#line 278 "ml_lookup_switch.m"
          MR_Word ml_backend__ml_lookup_switch__SetSuccessTrueStatement_43;
#line 278 "ml_lookup_switch.m"
          MR_Word ml_backend__ml_lookup_switch__LookupSucceedStmt_44;
#line 278 "ml_lookup_switch.m"
          MR_Word ml_backend__ml_lookup_switch__LookupSucceedStatement_45;
#line 278 "ml_lookup_switch.m"
          MR_Word ml_backend__ml_lookup_switch__V_62_62;
#line 278 "ml_lookup_switch.m"
          MR_Word ml_backend__ml_lookup_switch__V_63_63;

#line 279 "ml_lookup_switch.m"
          {
#line 279 "ml_lookup_switch.m"
            ml_backend__ml_code_util__ml_gen_set_success_4_p_0(ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_55_55, (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[13]), ml_backend__ml_lookup_switch__Context_19, &ml_backend__ml_lookup_switch__SetSuccessTrueStatement_43);
          }
#line 282 "ml_lookup_switch.m"
          {
#line 282 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 282 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_63_63, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__SetSuccessTrueStatement_43));
#line 282 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 282 "ml_lookup_switch.m"
          }
#line 282 "ml_lookup_switch.m"
          {
#line 282 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__V_62_62 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0, ml_backend__ml_lookup_switch__LookupStatements_31, ml_backend__ml_lookup_switch__V_63_63);
          }
#line 281 "ml_lookup_switch.m"
          {
#line 281 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__LookupSucceedStmt_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 281 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__LookupSucceedStmt_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 281 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__LookupSucceedStmt_44, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_62_62));
#line 281 "ml_lookup_switch.m"
          }
#line 283 "ml_lookup_switch.m"
          {
#line 283 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__LookupSucceedStatement_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 283 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__LookupSucceedStatement_45, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__LookupSucceedStmt_44));
#line 283 "ml_lookup_switch.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__LookupSucceedStatement_45, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__MLDS_Context_29));
#line 283 "ml_lookup_switch.m"
          }
#line 301 "ml_lookup_switch.m"
          if ((ml_backend__ml_lookup_switch__NeedRangeCheck_23 == (MR_Integer) 1))
#line 289 "ml_lookup_switch.m"
            if ((ml_backend__ml_lookup_switch__NeedBitVecCheck_22 == (MR_Integer) 1))
#line 287 "ml_lookup_switch.m"
              {
#line 288 "ml_lookup_switch.m"
                *ml_backend__ml_lookup_switch__Statement_24 = ml_backend__ml_lookup_switch__LookupSucceedStatement_45;
#line 288 "ml_lookup_switch.m"
                *ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_53 = ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_55_55;
#line 287 "ml_lookup_switch.m"
              }
#line 289 "ml_lookup_switch.m"
            else
#line 290 "ml_lookup_switch.m"
              {
#line 290 "ml_lookup_switch.m"
                MR_Word ml_backend__ml_lookup_switch__BitVecCheckCond_46;
#line 290 "ml_lookup_switch.m"
                MR_Word ml_backend__ml_lookup_switch__SetSuccessFalseStatement_47;
#line 290 "ml_lookup_switch.m"
                MR_Word ml_backend__ml_lookup_switch__V_76_76;
#line 290 "ml_lookup_switch.m"
                MR_Word ml_backend__ml_lookup_switch__Stmt_88;

#line 291 "ml_lookup_switch.m"
                {
#line 291 "ml_lookup_switch.m"
                  ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_101_114_97_116_101_95_98_105_116_118_101_99_95_116_101_115_116_95_95_91_49_44_32_55_93_95_48_9_p_0(ml_backend__ml_lookup_switch__MLDS_ModuleName_28, ml_backend__ml_lookup_switch__Context_19, ml_backend__ml_lookup_switch__IndexRval_14, ml_backend__ml_lookup_switch__CaseValues_17, ml_backend__ml_lookup_switch__StartVal_20, &ml_backend__ml_lookup_switch__BitVecCheckCond_46, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_55_55, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_53);
                }
#line 294 "ml_lookup_switch.m"
                {
#line 294 "ml_lookup_switch.m"
                  ml_backend__ml_code_util__ml_gen_set_success_4_p_0(*ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_53, (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[7]), ml_backend__ml_lookup_switch__Context_19, &ml_backend__ml_lookup_switch__SetSuccessFalseStatement_47);
                }
#line 298 "ml_lookup_switch.m"
                {
#line 298 "ml_lookup_switch.m"
                  ml_backend__ml_lookup_switch__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 298 "ml_lookup_switch.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_76_76, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__SetSuccessFalseStatement_47));
#line 298 "ml_lookup_switch.m"
                }
#line 297 "ml_lookup_switch.m"
                {
#line 297 "ml_lookup_switch.m"
                  ml_backend__ml_lookup_switch__Stmt_88 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 297 "ml_lookup_switch.m"
                  MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__Stmt_88, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__BitVecCheckCond_46));
#line 297 "ml_lookup_switch.m"
                  MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__Stmt_88, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__LookupSucceedStatement_45));
#line 297 "ml_lookup_switch.m"
                  MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__Stmt_88, 2) = ((MR_Box) (ml_backend__ml_lookup_switch__V_76_76));
#line 297 "ml_lookup_switch.m"
                }
#line 299 "ml_lookup_switch.m"
                {
#line 299 "ml_lookup_switch.m"
                  MR_Word base;
#line 299 "ml_lookup_switch.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 299 "ml_lookup_switch.m"
                  *ml_backend__ml_lookup_switch__Statement_24 = base;
#line 299 "ml_lookup_switch.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__Stmt_88));
#line 299 "ml_lookup_switch.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__MLDS_Context_29));
#line 299 "ml_lookup_switch.m"
                }
#line 290 "ml_lookup_switch.m"
              }
#line 301 "ml_lookup_switch.m"
          else
#line 302 "ml_lookup_switch.m"
            {
#line 302 "ml_lookup_switch.m"
              MR_Integer ml_backend__ml_lookup_switch__Difference_48 = (ml_backend__ml_lookup_switch__EndVal_21 - ml_backend__ml_lookup_switch__StartVal_20);
#line 302 "ml_lookup_switch.m"
              MR_Word ml_backend__ml_lookup_switch__RangeCheckCond_49;
#line 302 "ml_lookup_switch.m"
              MR_Word ml_backend__ml_lookup_switch__RangeCheckSuccessStatement_50;
#line 302 "ml_lookup_switch.m"
              MR_Word ml_backend__ml_lookup_switch__V_66_66;
#line 302 "ml_lookup_switch.m"
              MR_Word ml_backend__ml_lookup_switch__V_67_67;
#line 302 "ml_lookup_switch.m"
              MR_Word ml_backend__ml_lookup_switch__V_72_72;
#line 302 "ml_lookup_switch.m"
              MR_Word ml_backend__ml_lookup_switch__Stmt_93;
#line 302 "ml_lookup_switch.m"
              MR_Word ml_backend__ml_lookup_switch__SetSuccessFalseStatement_95;

#line 305 "ml_lookup_switch.m"
              {
#line 305 "ml_lookup_switch.m"
                ml_backend__ml_lookup_switch__V_67_67 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 305 "ml_lookup_switch.m"
                MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__V_67_67, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__Difference_48));
#line 305 "ml_lookup_switch.m"
              }
#line 305 "ml_lookup_switch.m"
              {
#line 305 "ml_lookup_switch.m"
                ml_backend__ml_lookup_switch__V_66_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 305 "ml_lookup_switch.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__V_66_66, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 305 "ml_lookup_switch.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__V_66_66, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_67_67));
#line 305 "ml_lookup_switch.m"
              }
#line 304 "ml_lookup_switch.m"
              {
#line 304 "ml_lookup_switch.m"
                ml_backend__ml_lookup_switch__RangeCheckCond_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 304 "ml_lookup_switch.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__RangeCheckCond_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 304 "ml_lookup_switch.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__RangeCheckCond_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 26))));
#line 304 "ml_lookup_switch.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__RangeCheckCond_49, 2) = ((MR_Box) (ml_backend__ml_lookup_switch__IndexRval_14));
#line 304 "ml_lookup_switch.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__RangeCheckCond_49, 3) = ((MR_Box) (ml_backend__ml_lookup_switch__V_66_66));
#line 304 "ml_lookup_switch.m"
              }
#line 306 "ml_lookup_switch.m"
              {
#line 306 "ml_lookup_switch.m"
                ml_backend__ml_code_util__ml_gen_set_success_4_p_0(ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_55_55, (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[7]), ml_backend__ml_lookup_switch__Context_19, &ml_backend__ml_lookup_switch__SetSuccessFalseStatement_95);
              }
#line 311 "ml_lookup_switch.m"
              if ((ml_backend__ml_lookup_switch__NeedBitVecCheck_22 == (MR_Integer) 1))
#line 309 "ml_lookup_switch.m"
                {
#line 310 "ml_lookup_switch.m"
                  ml_backend__ml_lookup_switch__RangeCheckSuccessStatement_50 = ml_backend__ml_lookup_switch__LookupSucceedStatement_45;
#line 310 "ml_lookup_switch.m"
                  *ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_53 = ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_55_55;
#line 309 "ml_lookup_switch.m"
                }
#line 311 "ml_lookup_switch.m"
              else
#line 312 "ml_lookup_switch.m"
                {
#line 312 "ml_lookup_switch.m"
                  MR_Word ml_backend__ml_lookup_switch__RangeCheckSuccessStmt_51;
#line 312 "ml_lookup_switch.m"
                  MR_Word ml_backend__ml_lookup_switch__V_71_71;
#line 312 "ml_lookup_switch.m"
                  MR_Word ml_backend__ml_lookup_switch__BitVecCheckCond_91;

#line 313 "ml_lookup_switch.m"
                  {
#line 313 "ml_lookup_switch.m"
                    ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_101_114_97_116_101_95_98_105_116_118_101_99_95_116_101_115_116_95_95_91_49_44_32_55_93_95_48_9_p_0(ml_backend__ml_lookup_switch__MLDS_ModuleName_28, ml_backend__ml_lookup_switch__Context_19, ml_backend__ml_lookup_switch__IndexRval_14, ml_backend__ml_lookup_switch__CaseValues_17, ml_backend__ml_lookup_switch__StartVal_20, &ml_backend__ml_lookup_switch__BitVecCheckCond_91, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_55_55, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_53);
                  }
#line 317 "ml_lookup_switch.m"
                  {
#line 317 "ml_lookup_switch.m"
                    ml_backend__ml_lookup_switch__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 317 "ml_lookup_switch.m"
                    MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_71_71, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__SetSuccessFalseStatement_95));
#line 317 "ml_lookup_switch.m"
                  }
#line 316 "ml_lookup_switch.m"
                  {
#line 316 "ml_lookup_switch.m"
                    ml_backend__ml_lookup_switch__RangeCheckSuccessStmt_51 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 316 "ml_lookup_switch.m"
                    MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__RangeCheckSuccessStmt_51, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__BitVecCheckCond_91));
#line 316 "ml_lookup_switch.m"
                    MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__RangeCheckSuccessStmt_51, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__LookupSucceedStatement_45));
#line 316 "ml_lookup_switch.m"
                    MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__RangeCheckSuccessStmt_51, 2) = ((MR_Box) (ml_backend__ml_lookup_switch__V_71_71));
#line 316 "ml_lookup_switch.m"
                  }
#line 318 "ml_lookup_switch.m"
                  {
#line 318 "ml_lookup_switch.m"
                    ml_backend__ml_lookup_switch__RangeCheckSuccessStatement_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 318 "ml_lookup_switch.m"
                    MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__RangeCheckSuccessStatement_50, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__RangeCheckSuccessStmt_51));
#line 318 "ml_lookup_switch.m"
                    MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__RangeCheckSuccessStatement_50, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__MLDS_Context_29));
#line 318 "ml_lookup_switch.m"
                  }
#line 312 "ml_lookup_switch.m"
                }
#line 326 "ml_lookup_switch.m"
              {
#line 326 "ml_lookup_switch.m"
                ml_backend__ml_lookup_switch__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 326 "ml_lookup_switch.m"
                MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_72_72, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__SetSuccessFalseStatement_95));
#line 326 "ml_lookup_switch.m"
              }
#line 325 "ml_lookup_switch.m"
              {
#line 325 "ml_lookup_switch.m"
                ml_backend__ml_lookup_switch__Stmt_93 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 325 "ml_lookup_switch.m"
                MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__Stmt_93, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__RangeCheckCond_49));
#line 325 "ml_lookup_switch.m"
                MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__Stmt_93, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__RangeCheckSuccessStatement_50));
#line 325 "ml_lookup_switch.m"
                MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__Stmt_93, 2) = ((MR_Box) (ml_backend__ml_lookup_switch__V_72_72));
#line 325 "ml_lookup_switch.m"
              }
#line 327 "ml_lookup_switch.m"
              {
#line 327 "ml_lookup_switch.m"
                MR_Word base;
#line 327 "ml_lookup_switch.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 327 "ml_lookup_switch.m"
                *ml_backend__ml_lookup_switch__Statement_24 = base;
#line 327 "ml_lookup_switch.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__Stmt_93));
#line 327 "ml_lookup_switch.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__MLDS_Context_29));
#line 327 "ml_lookup_switch.m"
              }
#line 302 "ml_lookup_switch.m"
            }
#line 278 "ml_lookup_switch.m"
        }
#line 235 "ml_lookup_switch.m"
  }
#line 227 "ml_lookup_switch.m"
}

#line 185 "ml_lookup_switch.m"
static void MR_CALL 
ml_backend__ml_lookup_switch__ml_record_lookup_for_tagged_cons_id_5_p_0(
#line 185 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__TypeInfo_for_T_16,
#line 185 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__GetTag_6,
#line 185 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__SolnConsts_7,
#line 185 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__TaggedConsId_8,
#line 185 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_IndexMap_0_13,
#line 185 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_IndexMap_14)
#line 185 "ml_lookup_switch.m"
{
#line 192 "ml_lookup_switch.m"
  {
#line 192 "ml_lookup_switch.m"
    MR_bool ml_backend__ml_lookup_switch__succeeded;
#line 192 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__ConsTag_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TaggedConsId_8, (MR_Integer) 1)));
#line 192 "ml_lookup_switch.m"
    MR_Box ml_backend__ml_lookup_switch__Index_12;
#line 193 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch___ConsId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TaggedConsId_8, (MR_Integer) 0)));
#line 194 "ml_lookup_switch.m"
    void MR_CALL (* ml_backend__ml_lookup_switch__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__GetTag_6, (MR_Integer) 1)));

#line 194 "ml_lookup_switch.m"
    {
#line 194 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__func_0(((MR_Box) ml_backend__ml_lookup_switch__GetTag_6), ((MR_Box) (ml_backend__ml_lookup_switch__ConsTag_11)), &ml_backend__ml_lookup_switch__Index_12);
    }
#line 195 "ml_lookup_switch.m"
    {
#line 195 "ml_lookup_switch.m"
      mercury__map__det_insert_4_p_0(ml_backend__ml_lookup_switch__TypeInfo_for_T_16, (MR_Word) &ml_backend__ml_lookup_switch_scalar_common_1[0], ml_backend__ml_lookup_switch__Index_12, ((MR_Box) (ml_backend__ml_lookup_switch__SolnConsts_7)), ml_backend__ml_lookup_switch__STATE_VARIABLE_IndexMap_0_13, ml_backend__ml_lookup_switch__STATE_VARIABLE_IndexMap_14);
#line 195 "ml_lookup_switch.m"
      return;
    }
#line 192 "ml_lookup_switch.m"
  }
#line 185 "ml_lookup_switch.m"
}

#line 91 "ml_lookup_switch.m"
MR_Word MR_CALL 
ml_backend__ml_lookup_switch__ml_default_value_for_type_1_f_0(
#line 91 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__MLDS_Type_3)
#line 91 "ml_lookup_switch.m"
{
#line 741 "ml_lookup_switch.m"
  {
#line 741 "ml_lookup_switch.m"
    MR_bool ml_backend__ml_lookup_switch__succeeded;
#line 741 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__DefaultRval_4;

#line 741 "ml_lookup_switch.m"
    if ((ml_backend__ml_lookup_switch__MLDS_Type_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 747 "ml_lookup_switch.m"
      {
#line 748 "ml_lookup_switch.m"
        ml_backend__ml_lookup_switch__DefaultRval_4 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[7]);
#line 747 "ml_lookup_switch.m"
      }
#line 741 "ml_lookup_switch.m"
    else
#line 741 "ml_lookup_switch.m"
      if ((ml_backend__ml_lookup_switch__MLDS_Type_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 744 "ml_lookup_switch.m"
        {
#line 745 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__DefaultRval_4 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[9]);
#line 744 "ml_lookup_switch.m"
        }
#line 741 "ml_lookup_switch.m"
      else
#line 741 "ml_lookup_switch.m"
        if ((ml_backend__ml_lookup_switch__MLDS_Type_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 750 "ml_lookup_switch.m"
          {
#line 751 "ml_lookup_switch.m"
            ml_backend__ml_lookup_switch__DefaultRval_4 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[11]);
#line 750 "ml_lookup_switch.m"
          }
#line 741 "ml_lookup_switch.m"
        else
#line 741 "ml_lookup_switch.m"
          if ((ml_backend__ml_lookup_switch__MLDS_Type_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 741 "ml_lookup_switch.m"
            {
#line 742 "ml_lookup_switch.m"
              ml_backend__ml_lookup_switch__DefaultRval_4 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[12]);
#line 741 "ml_lookup_switch.m"
            }
#line 741 "ml_lookup_switch.m"
          else
#line 741 "ml_lookup_switch.m"
            if ((((((((((((((ml_backend__ml_lookup_switch__MLDS_Type_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))) || (((((MR_tag((MR_Word) ml_backend__ml_lookup_switch__MLDS_Type_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__MLDS_Type_3, (MR_Integer) 0)))) == (MR_Integer) 1)))))) || ((ml_backend__ml_lookup_switch__MLDS_Type_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))))))) || (((((MR_tag((MR_Word) ml_backend__ml_lookup_switch__MLDS_Type_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__MLDS_Type_3, (MR_Integer) 0)))) == (MR_Integer) 6)))))) || (((((MR_tag((MR_Word) ml_backend__ml_lookup_switch__MLDS_Type_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__MLDS_Type_3, (MR_Integer) 0)))) == (MR_Integer) 7)))))) || (((((MR_tag((MR_Word) ml_backend__ml_lookup_switch__MLDS_Type_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__MLDS_Type_3, (MR_Integer) 0)))) == (MR_Integer) 8)))))) || ((ml_backend__ml_lookup_switch__MLDS_Type_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)))))))
#line 773 "ml_lookup_switch.m"
              {
#line 774 "ml_lookup_switch.m"
                {
#line 774 "ml_lookup_switch.m"
                  mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_lookup_switch", (MR_String) "function \140ml_backend.ml_lookup_switch.ml_default_value_for_type\'/1", (MR_String) "unexpected MLDS_Type");
                }
#line 773 "ml_lookup_switch.m"
              }
#line 741 "ml_lookup_switch.m"
            else
#line 763 "ml_lookup_switch.m"
              {
#line 763 "ml_lookup_switch.m"
                MR_Word ml_backend__ml_lookup_switch__V_23_23;

#line 764 "ml_lookup_switch.m"
                {
#line 764 "ml_lookup_switch.m"
                  ml_backend__ml_lookup_switch__V_23_23 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 764 "ml_lookup_switch.m"
                  MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__V_23_23, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__MLDS_Type_3));
#line 764 "ml_lookup_switch.m"
                }
#line 764 "ml_lookup_switch.m"
                {
#line 764 "ml_lookup_switch.m"
                  ml_backend__ml_lookup_switch__DefaultRval_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 764 "ml_lookup_switch.m"
                  MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__DefaultRval_4, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 764 "ml_lookup_switch.m"
                  MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__DefaultRval_4, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_23_23));
#line 764 "ml_lookup_switch.m"
                  MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__DefaultRval_4, 2) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[12])));
#line 764 "ml_lookup_switch.m"
                }
#line 763 "ml_lookup_switch.m"
              }
#line 741 "ml_lookup_switch.m"
    return ml_backend__ml_lookup_switch__DefaultRval_4;
#line 741 "ml_lookup_switch.m"
  }
#line 91 "ml_lookup_switch.m"
}

#line 717 "ml_lookup_switch.m"
static MR_Box MR_CALL 
ml_backend__ml_lookup_switch__ml_construct_later_soln_row_2_f_0_1(
#line 717 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg,
#line 717 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1)
#line 717 "ml_lookup_switch.m"
{
#line 717 "ml_lookup_switch.m"
  {
#line 717 "ml_lookup_switch.m"
    MR_Box ml_backend__ml_lookup_switch__wrapper_arg_2;
#line 717 "ml_lookup_switch.m"
    MR_Box ml_backend__ml_lookup_switch__closure = ml_backend__ml_lookup_switch__closure_arg;
#line 717 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__conv0_HeadVar__2_2;

#line 717 "ml_lookup_switch.m"
    {
#line 717 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__conv0_HeadVar__2_2 = ml_backend__ml_util__wrap_init_obj_1_f_0(((MR_Word) ml_backend__ml_lookup_switch__wrapper_arg_1));
    }
#line 717 "ml_lookup_switch.m"
    ml_backend__ml_lookup_switch__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_lookup_switch__conv0_HeadVar__2_2));
#line 717 "ml_lookup_switch.m"
    return ml_backend__ml_lookup_switch__wrapper_arg_2;
#line 717 "ml_lookup_switch.m"
  }
#line 717 "ml_lookup_switch.m"
}

#line 88 "ml_lookup_switch.m"
MR_Word MR_CALL 
ml_backend__ml_lookup_switch__ml_construct_later_soln_row_2_f_0(
#line 88 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__StructType_4,
#line 88 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__Rvals_5)
#line 88 "ml_lookup_switch.m"
{
#line 716 "ml_lookup_switch.m"
  {
#line 716 "ml_lookup_switch.m"
    MR_bool ml_backend__ml_lookup_switch__succeeded;
#line 716 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__RowInitializer_6;
#line 716 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__FieldInitializers_7;

#line 717 "ml_lookup_switch.m"
    {
#line 717 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__FieldInitializers_7 = mercury__list__map_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, (MR_Word) &ml_backend__ml_lookup_switch_scalar_common_4[0], ml_backend__ml_lookup_switch__Rvals_5);
    }
#line 718 "ml_lookup_switch.m"
    {
#line 718 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__RowInitializer_6 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 718 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__RowInitializer_6, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__StructType_4));
#line 718 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__RowInitializer_6, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__FieldInitializers_7));
#line 718 "ml_lookup_switch.m"
    }
#line 716 "ml_lookup_switch.m"
    return ml_backend__ml_lookup_switch__RowInitializer_6;
#line 716 "ml_lookup_switch.m"
  }
#line 88 "ml_lookup_switch.m"
}

#line 84 "ml_lookup_switch.m"
void MR_CALL 
ml_backend__ml_lookup_switch__make_several_soln_lookup_vars_4_p_0(
#line 84 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__MLDS_Context_5,
#line 84 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__SeveralSolnLookupVars_6,
#line 84 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_24,
#line 84 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_25)
#line 84 "ml_lookup_switch.m"
{
#line 473 "ml_lookup_switch.m"
  {
#line 473 "ml_lookup_switch.m"
    MR_bool ml_backend__ml_lookup_switch__succeeded;
#line 473 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__NumLaterSolnsVar_8;
#line 473 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__NumLaterSolnsVarDefn_9;
#line 473 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__NumLaterSolnsVarLval_10;
#line 473 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__LaterSlotVar_11;
#line 473 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__LaterSlotVarDefn_12;
#line 473 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__LaterSlotVarLval_13;
#line 473 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__LimitVar_14;
#line 473 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__LimitVarDefn_15;
#line 473 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__LimitVarLval_16;
#line 473 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__Defns_17;
#line 473 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__LaterSlotVarRval_18;
#line 473 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__NumLaterSolnsVarRval_19;
#line 473 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__LimitAssignStmt_20;
#line 473 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__LimitAssignStatement_21;
#line 473 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__IncrLaterSlotVarStmt_22;
#line 473 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__IncrLaterSlotVarStatement_23;
#line 473 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_27_27;
#line 473 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__V_28_28;
#line 473 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_33_33;
#line 473 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__V_34_34;
#line 473 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__V_40_40;
#line 473 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__V_44_44;
#line 473 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__V_45_45;
#line 473 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__V_47_47;
#line 473 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__V_48_48;
#line 473 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__V_50_50;
#line 473 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__V_51_51;

#line 474 "ml_lookup_switch.m"
    {
#line 474 "ml_lookup_switch.m"
      ml_backend__ml_gen_info__ml_gen_info_new_aux_var_name_4_p_0((MR_String) "num_later_solns", &ml_backend__ml_lookup_switch__NumLaterSolnsVar_8, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_24, &ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_27_27);
    }
#line 477 "ml_lookup_switch.m"
    ml_backend__ml_lookup_switch__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_lookup_switch__NumLaterSolnsVar_8);
#line 476 "ml_lookup_switch.m"
    {
#line 476 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__NumLaterSolnsVarDefn_9 = ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_f_0(ml_backend__ml_lookup_switch__V_28_28, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_lookup_switch__MLDS_Context_5);
    }
#line 479 "ml_lookup_switch.m"
    {
#line 479 "ml_lookup_switch.m"
      ml_backend__ml_code_util__ml_gen_var_lval_4_p_0(ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_27_27, ml_backend__ml_lookup_switch__NumLaterSolnsVar_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)), &ml_backend__ml_lookup_switch__NumLaterSolnsVarLval_10);
    }
#line 482 "ml_lookup_switch.m"
    {
#line 482 "ml_lookup_switch.m"
      ml_backend__ml_gen_info__ml_gen_info_new_aux_var_name_4_p_0((MR_String) "later_slot", &ml_backend__ml_lookup_switch__LaterSlotVar_11, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_27_27, &ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_33_33);
    }
#line 484 "ml_lookup_switch.m"
    ml_backend__ml_lookup_switch__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_lookup_switch__LaterSlotVar_11);
#line 484 "ml_lookup_switch.m"
    {
#line 484 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__LaterSlotVarDefn_12 = ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_f_0(ml_backend__ml_lookup_switch__V_34_34, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_lookup_switch__MLDS_Context_5);
    }
#line 486 "ml_lookup_switch.m"
    {
#line 486 "ml_lookup_switch.m"
      ml_backend__ml_code_util__ml_gen_var_lval_4_p_0(ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_33_33, ml_backend__ml_lookup_switch__LaterSlotVar_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)), &ml_backend__ml_lookup_switch__LaterSlotVarLval_13);
    }
#line 489 "ml_lookup_switch.m"
    {
#line 489 "ml_lookup_switch.m"
      ml_backend__ml_gen_info__ml_gen_info_new_aux_var_name_4_p_0((MR_String) "limit", &ml_backend__ml_lookup_switch__LimitVar_14, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_33_33, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_25);
    }
#line 491 "ml_lookup_switch.m"
    ml_backend__ml_lookup_switch__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_lookup_switch__LimitVar_14);
#line 491 "ml_lookup_switch.m"
    {
#line 491 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__LimitVarDefn_15 = ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_f_0(ml_backend__ml_lookup_switch__V_40_40, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_lookup_switch__MLDS_Context_5);
    }
#line 493 "ml_lookup_switch.m"
    {
#line 493 "ml_lookup_switch.m"
      ml_backend__ml_code_util__ml_gen_var_lval_4_p_0(*ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_25, ml_backend__ml_lookup_switch__LimitVar_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)), &ml_backend__ml_lookup_switch__LimitVarLval_16);
    }
#line 495 "ml_lookup_switch.m"
    {
#line 495 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 495 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_45_45, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__LimitVarDefn_15));
#line 495 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 495 "ml_lookup_switch.m"
    }
#line 495 "ml_lookup_switch.m"
    {
#line 495 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 495 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_44_44, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__LaterSlotVarDefn_12));
#line 495 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_44_44, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_45_45));
#line 495 "ml_lookup_switch.m"
    }
#line 495 "ml_lookup_switch.m"
    {
#line 495 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__Defns_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 495 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__Defns_17, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__NumLaterSolnsVarDefn_9));
#line 495 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__Defns_17, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_44_44));
#line 495 "ml_lookup_switch.m"
    }
#line 497 "ml_lookup_switch.m"
    {
#line 497 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__LaterSlotVarRval_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 497 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__LaterSlotVarRval_18, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__LaterSlotVarLval_13));
#line 497 "ml_lookup_switch.m"
    }
#line 498 "ml_lookup_switch.m"
    {
#line 498 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__NumLaterSolnsVarRval_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 498 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__NumLaterSolnsVarRval_19, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__NumLaterSolnsVarLval_10));
#line 498 "ml_lookup_switch.m"
    }
#line 500 "ml_lookup_switch.m"
    {
#line 500 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__V_48_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 500 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__V_48_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 500 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 500 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__V_48_48, 2) = ((MR_Box) (ml_backend__ml_lookup_switch__LaterSlotVarRval_18));
#line 500 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__V_48_48, 3) = ((MR_Box) (ml_backend__ml_lookup_switch__NumLaterSolnsVarRval_19));
#line 500 "ml_lookup_switch.m"
    }
#line 499 "ml_lookup_switch.m"
    {
#line 499 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__V_47_47 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 499 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__V_47_47, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__LimitVarLval_16));
#line 499 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__V_47_47, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_48_48));
#line 499 "ml_lookup_switch.m"
    }
#line 499 "ml_lookup_switch.m"
    {
#line 499 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__LimitAssignStmt_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 499 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__LimitAssignStmt_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 499 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__LimitAssignStmt_20, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_47_47));
#line 499 "ml_lookup_switch.m"
    }
#line 501 "ml_lookup_switch.m"
    {
#line 501 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__LimitAssignStatement_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 501 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__LimitAssignStatement_21, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__LimitAssignStmt_20));
#line 501 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__LimitAssignStatement_21, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__MLDS_Context_5));
#line 501 "ml_lookup_switch.m"
    }
#line 503 "ml_lookup_switch.m"
    {
#line 503 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__V_51_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 503 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__V_51_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 503 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 503 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__V_51_51, 2) = ((MR_Box) (ml_backend__ml_lookup_switch__LaterSlotVarRval_18));
#line 503 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__V_51_51, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[6])));
#line 503 "ml_lookup_switch.m"
    }
#line 502 "ml_lookup_switch.m"
    {
#line 502 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__V_50_50 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 502 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__V_50_50, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__LaterSlotVarLval_13));
#line 502 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__V_50_50, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_51_51));
#line 502 "ml_lookup_switch.m"
    }
#line 502 "ml_lookup_switch.m"
    {
#line 502 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__IncrLaterSlotVarStmt_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 502 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__IncrLaterSlotVarStmt_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 502 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__IncrLaterSlotVarStmt_22, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_50_50));
#line 502 "ml_lookup_switch.m"
    }
#line 504 "ml_lookup_switch.m"
    {
#line 504 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__IncrLaterSlotVarStatement_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 504 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__IncrLaterSlotVarStatement_23, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__IncrLaterSlotVarStmt_22));
#line 504 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__IncrLaterSlotVarStatement_23, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__MLDS_Context_5));
#line 504 "ml_lookup_switch.m"
    }
#line 506 "ml_lookup_switch.m"
    {
#line 506 "ml_lookup_switch.m"
      MR_Word base;
#line 506 "ml_lookup_switch.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 506 "ml_lookup_switch.m"
      *ml_backend__ml_lookup_switch__SeveralSolnLookupVars_6 = base;
#line 506 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__NumLaterSolnsVarLval_10));
#line 506 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__LaterSlotVarLval_13));
#line 506 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_lookup_switch__LimitVarLval_16));
#line 506 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_lookup_switch__LimitAssignStatement_21));
#line 506 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_lookup_switch__IncrLaterSlotVarStatement_23));
#line 506 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_lookup_switch__Defns_17));
#line 506 "ml_lookup_switch.m"
    }
#line 473 "ml_lookup_switch.m"
  }
#line 84 "ml_lookup_switch.m"
}

#line 218 "ml_lookup_switch.m"
static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__ml_gen_lookup_switch_11_p_0_1(
#line 218 "ml_lookup_switch.m"
  MR_Box ml_backend__ml_lookup_switch__closure_arg)
#line 218 "ml_lookup_switch.m"
{
#line 218 "ml_lookup_switch.m"
  {
#line 218 "ml_lookup_switch.m"
    MR_bool ml_backend__ml_lookup_switch__succeeded;
#line 218 "ml_lookup_switch.m"
    MR_Box ml_backend__ml_lookup_switch__closure = ml_backend__ml_lookup_switch__closure_arg;

#line 218 "ml_lookup_switch.m"
    {
#line 218 "ml_lookup_switch.m"
      return ml_backend__ml_lookup_switch__succeeded = ml_backend__ml_lookup_switch__IntroducedFrom__pred__ml_gen_lookup_switch__218__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__closure, (MR_Integer) 4))));
    }
#line 218 "ml_lookup_switch.m"
    return ml_backend__ml_lookup_switch__succeeded;
#line 218 "ml_lookup_switch.m"
  }
#line 218 "ml_lookup_switch.m"
}

#line 63 "ml_lookup_switch.m"
void MR_CALL 
ml_backend__ml_lookup_switch__ml_gen_lookup_switch_11_p_0(
#line 63 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__SwitchVar_12,
#line 63 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__LookupSwitchInfo_13,
#line 63 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__CodeModel_14,
#line 63 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__Context_15,
#line 63 "ml_lookup_switch.m"
  MR_Integer ml_backend__ml_lookup_switch__StartVal_16,
#line 63 "ml_lookup_switch.m"
  MR_Integer ml_backend__ml_lookup_switch__EndVal_17,
#line 63 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__NeedBitVecCheck_18,
#line 63 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__NeedRangeCheck_19,
#line 63 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__Statement_20,
#line 63 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_32,
#line 63 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_33)
#line 63 "ml_lookup_switch.m"
{
#line 200 "ml_lookup_switch.m"
  {
#line 200 "ml_lookup_switch.m"
    MR_bool ml_backend__ml_lookup_switch__succeeded;
#line 200 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__CaseConsts_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__LookupSwitchInfo_13, (MR_Integer) 0)));
#line 200 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__OutVars_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__LookupSwitchInfo_13, (MR_Integer) 1)));
#line 200 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__FieldTypes_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__LookupSwitchInfo_13, (MR_Integer) 2)));
#line 200 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__SwitchVarLval_25;
#line 200 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__SwitchVarRval_26;
#line 200 "ml_lookup_switch.m"
    MR_Word ml_backend__ml_lookup_switch__IndexRval_27;

#line 203 "ml_lookup_switch.m"
    {
#line 203 "ml_lookup_switch.m"
      ml_backend__ml_code_util__ml_gen_var_3_p_0(ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_32, ml_backend__ml_lookup_switch__SwitchVar_12, &ml_backend__ml_lookup_switch__SwitchVarLval_25);
    }
#line 204 "ml_lookup_switch.m"
    {
#line 204 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__SwitchVarRval_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 204 "ml_lookup_switch.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__SwitchVarRval_26, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__SwitchVarLval_25));
#line 204 "ml_lookup_switch.m"
    }
#line 205 "ml_lookup_switch.m"
    ml_backend__ml_lookup_switch__succeeded = (ml_backend__ml_lookup_switch__StartVal_16 == (MR_Integer) 0);
#line 207 "ml_lookup_switch.m"
    if (ml_backend__ml_lookup_switch__succeeded)
#line 206 "ml_lookup_switch.m"
      ml_backend__ml_lookup_switch__IndexRval_27 = ml_backend__ml_lookup_switch__SwitchVarRval_26;
#line 207 "ml_lookup_switch.m"
    else
#line 208 "ml_lookup_switch.m"
      {
#line 208 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__StartRval_28;
#line 208 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_34_34;

#line 208 "ml_lookup_switch.m"
        {
#line 208 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__V_34_34 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 208 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__V_34_34, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__StartVal_16));
#line 208 "ml_lookup_switch.m"
        }
#line 208 "ml_lookup_switch.m"
        {
#line 208 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__StartRval_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 208 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__StartRval_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 208 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__StartRval_28, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_34_34));
#line 208 "ml_lookup_switch.m"
        }
#line 209 "ml_lookup_switch.m"
        {
#line 209 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__IndexRval_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 209 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__IndexRval_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 209 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__IndexRval_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 209 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__IndexRval_27, 2) = ((MR_Box) (ml_backend__ml_lookup_switch__SwitchVarRval_26));
#line 209 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__IndexRval_27, 3) = ((MR_Box) (ml_backend__ml_lookup_switch__StartRval_28));
#line 209 "ml_lookup_switch.m"
        }
#line 208 "ml_lookup_switch.m"
      }
#line 216 "ml_lookup_switch.m"
    if (((MR_tag((MR_Word) ml_backend__ml_lookup_switch__CaseConsts_22)) == (MR_mktag((MR_Integer) 0))))
#line 212 "ml_lookup_switch.m"
      {
#line 212 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__CaseValuePairs_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__CaseConsts_22, (MR_Integer) 0)));

#line 213 "ml_lookup_switch.m"
        {
#line 213 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__ml_gen_simple_lookup_switch_13_p_0(ml_backend__ml_lookup_switch__IndexRval_27, ml_backend__ml_lookup_switch__OutVars_23, ml_backend__ml_lookup_switch__FieldTypes_24, ml_backend__ml_lookup_switch__CaseValuePairs_29, ml_backend__ml_lookup_switch__CodeModel_14, ml_backend__ml_lookup_switch__Context_15, ml_backend__ml_lookup_switch__StartVal_16, ml_backend__ml_lookup_switch__EndVal_17, ml_backend__ml_lookup_switch__NeedBitVecCheck_18, ml_backend__ml_lookup_switch__NeedRangeCheck_19, ml_backend__ml_lookup_switch__Statement_20, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_32, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_33);
#line 213 "ml_lookup_switch.m"
          return;
        }
#line 212 "ml_lookup_switch.m"
      }
#line 216 "ml_lookup_switch.m"
    else
#line 217 "ml_lookup_switch.m"
      {
#line 217 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__CaseSolns_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__CaseConsts_22, (MR_Integer) 0)));
#line 217 "ml_lookup_switch.m"
        MR_Word ml_backend__ml_lookup_switch__V_36_36;

#line 218 "ml_lookup_switch.m"
        {
#line 218 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 218 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_36_36, 0) = ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_2[0]));
#line 218 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_36_36, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__ml_gen_lookup_switch_11_p_0_1));
#line 218 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_36_36, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 218 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_36_36, 3) = ((MR_Box) (ml_backend__ml_lookup_switch__CodeModel_14));
#line 218 "ml_lookup_switch.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_36_36, 4) = ((MR_Box) ((MR_Integer) 2));
#line 218 "ml_lookup_switch.m"
        }
#line 218 "ml_lookup_switch.m"
        {
#line 218 "ml_lookup_switch.m"
          mercury__require__expect_4_p_0(ml_backend__ml_lookup_switch__V_36_36, (MR_String) "ml_backend.ml_lookup_switch", (MR_String) "predicate \140ml_backend.ml_lookup_switch.ml_gen_lookup_switch\'/11", (MR_String) "CodeModel != model_non");
        }
#line 220 "ml_lookup_switch.m"
        {
#line 220 "ml_lookup_switch.m"
          ml_backend__ml_lookup_switch__ml_gen_several_soln_lookup_switch_12_p_0(ml_backend__ml_lookup_switch__IndexRval_27, ml_backend__ml_lookup_switch__OutVars_23, ml_backend__ml_lookup_switch__FieldTypes_24, ml_backend__ml_lookup_switch__CaseSolns_30, ml_backend__ml_lookup_switch__Context_15, ml_backend__ml_lookup_switch__StartVal_16, ml_backend__ml_lookup_switch__EndVal_17, ml_backend__ml_lookup_switch__NeedBitVecCheck_18, ml_backend__ml_lookup_switch__NeedRangeCheck_19, ml_backend__ml_lookup_switch__Statement_20, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_32, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_33);
#line 220 "ml_lookup_switch.m"
          return;
        }
#line 217 "ml_lookup_switch.m"
      }
#line 200 "ml_lookup_switch.m"
  }
#line 63 "ml_lookup_switch.m"
}

#line 54 "ml_lookup_switch.m"
MR_bool MR_CALL 
ml_backend__ml_lookup_switch__ml_is_lookup_switch_8_p_0(
#line 54 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__TypeInfo_for_Key_32,
#line 54 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__GetTag_9,
#line 54 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__SwitchVar_10,
#line 54 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__TaggedCases_11,
#line 54 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__NonLocals_12,
#line 54 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__CodeModel_13,
#line 54 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__LookupSwitchInfo_14,
#line 54 "ml_lookup_switch.m"
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_26,
#line 54 "ml_lookup_switch.m"
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_27)
#line 54 "ml_lookup_switch.m"
{
#line 117 "ml_lookup_switch.m"
  {
#line 117 "ml_lookup_switch.m"
    MR_bool ml_backend__ml_lookup_switch__succeeded;

#line 117 "ml_lookup_switch.m"
    {
#line 117 "ml_lookup_switch.m"
      return ml_backend__ml_lookup_switch__succeeded = ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_105_115_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_54_93_95_48_8_p_0(ml_backend__ml_lookup_switch__TypeInfo_for_Key_32, ml_backend__ml_lookup_switch__GetTag_9, ml_backend__ml_lookup_switch__SwitchVar_10, ml_backend__ml_lookup_switch__TaggedCases_11, ml_backend__ml_lookup_switch__NonLocals_12, ml_backend__ml_lookup_switch__LookupSwitchInfo_14, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_26, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_27);
    }
#line 117 "ml_lookup_switch.m"
    return ml_backend__ml_lookup_switch__succeeded;
#line 117 "ml_lookup_switch.m"
  }
#line 54 "ml_lookup_switch.m"
}

void mercury__ml_backend__ml_lookup_switch__init(void)
{
}

void mercury__ml_backend__ml_lookup_switch__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__type_ctor_info_ml_lookup_switch_info_1);
	MR_register_type_ctor_info(&ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__type_ctor_info_ml_several_soln_lookup_vars_0);
}

void mercury__ml_backend__ml_lookup_switch__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ml_backend.ml_lookup_switch. */
